package solemnsky.ui;

import control.Control;
import control.Event;
import control.Profile;
import control.Noise;
import control.Frame;
import solemnsky.core.CoreControl;
import solemnsky.core.Core;
import solemnsky.core.vanilla.Vanilla;

/**
 * solemnsky.ui.Demo: 
 * Demo.run(core:Core) runs a demo of core.
 */

class DemoFromCore<M,S> implements Control<Noise> {
    private var core:Core<M,S>;
    private var profileString:String;
    private var notes:Array<String> = [];
    private var myId:Int = 0;

    private var snap:S;

    public function new(core:Core<M,S>) {
        this.core = core;
        core.loadMeta(core.createMeta());
        
        core.addPlayer(0, 'offline player');
    }

    public function init(_) {
        // no networking required
    }

    /*************************************************************************/
    /* control interface
    /*************************************************************************/

    public function tick(delta:Float) {
        var newNotes = core.tick(delta);
        for (note in newNotes) {
            trace(note);
        }
        notes = notes.concat(newNotes);
    }

    public function render(f:Frame, delta:Float) {
        core.render(f, 0, delta);
    }

    public function profiling(profile:Profile):Void {
        trace(profile.print());
    }

    public function handle(e:Event):Void {
        var control:CoreControl = null;
        switch (e) {
        case KbEvent(key, state): {
            var match = function(pat) return Type.enumEq(key, pat);

            if (core.isAlive(0)) {
                if (match(CharKey('i'))) control = CCUp(state);
                if (match(CharKey('j'))) control = CCLeft(state);
                if (match(CharKey('l'))) control = CCRight(state);
                if (match(CharKey('k'))) control = CCDown(state);
                if (match(CharKey('f'))) control = CCFire(state);
                if (match(CharKey('d'))) control = CCSecondary(state);
            } else {
                if (match(CharKey('f'))) control = CCSpawn;
            }

            if (match(CharKey('y'))) snap = core.serverAssert();
            if (match(CharKey('p'))) core.clientMerge(0, snap);
        }
        default: {}
        }
        if (control != null)
            core.handle(myId, control);
    }

    public function conclude():Null<Noise> {
        return null;
    }
}

class Demo {
    public static function run<M,S>(core:Core<M,S>):Control<Noise> {
        // return new DemoControl();
        return new DemoFromCore(core);
    }
} 
