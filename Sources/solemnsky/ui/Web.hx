package solemnsky.ui;

import solemnsky.control.Control;
import solemnsky.control.Event;
import solemnsky.control.Scene;
import solemnsky.control.Profile;
import solemnsky.core.Core;

/**
 * solemnsky.ui.Web: 
 * Web client; implements the Control spec when constructed with a Core.
 * Uses the web js API.
 */

class WebGame implements Control {
    private var core:Core;
    private var profileString:String;
    private var notes:Array<String> = [];
    private var myId:Int = 0;

    public function new(core:Core) {
        this.core = core;
        core.init();
        myId = core.join('offline player');
    }

    /*************************************************************************/
    /* Control interface
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

    public function hasEnded():Bool {
        return core.hasEnded();
    }
}

class Web implements Control {
    public function new(core:Core) {
    }

    /*************************************************************************/
    /* Control interface
    /*************************************************************************/

    public function tick(delta:Float):Void {
    }

    public function render(delta:Float):Scene {
        return new Scene();
    }

    public function profiling(profile:Profile):Void {
    }

    public function handle(e:Event):Void {
    }

    public function hasEnded():Bool {
        return false;
    }
}
