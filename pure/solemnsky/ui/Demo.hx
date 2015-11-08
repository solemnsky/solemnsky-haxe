package solemnsky.ui;

import control.Control;
import control.Event;
import control.Profile;
import control.Noise;
import control.Scene;
import solemnsky.core.Core;
import solemnsky.core.vanilla.Vanilla;

/**
 * solemnsky.ui.Demo: 
 * Demo.run(core:Core) runs a demo of core.
 */

class DemoFromCore implements Control<Noise> {
    private var core:Core;
    private var profileString:String;
    private var notes:Array<String> = [];
    private var myId:Int = 0;

    public function new(core:Core) {
        this.core = core;
        core.init(null);
        myId = core.join('offline player');
    }

    public function init(_) {
        // no networking required
    }

    /*************************************************************************/
    /* control interface
    /*************************************************************************/

    public function tick(delta:Float):Void {
        var newNotes = core.tick(delta);
        for (note in newNotes) {
            trace(note);
        }
        notes = notes.concat(newNotes);
    }

    public function render(delta:Float):Scene {
        return core.render(delta);
    }

    public function profiling(profile:Profile):Void {
        trace(profile.print());
    }

    public function handle(e:Event):Void {
        core.handle(myId, e);
    }

    public function conclude():Null<Noise> {
        return null;
    }
}

class Demo {
    public static function run(core:Core):Control<Noise> {
        // return new DemoControl();
        return new DemoFromCore(core);
    }
} 
