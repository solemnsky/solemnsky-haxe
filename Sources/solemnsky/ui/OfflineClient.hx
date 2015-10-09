package solemnsky.ui;

import solemnsky.control.Control;
import solemnsky.control.Event;
import solemnsky.control.Scene;
import solemnsky.control.Profile;
import solemnsky.core.Core;

/**
 * solemnsky.ui.OfflineClient: 
 * Transforms a Core object into a Control object, implementing only offline 
 * functionalities (runs an offline demo).
 */

class OfflineClient implements Control {
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
        core.acceptEvent(myId, e);
    }

    public function hasEnded():Bool {
        return core.hasEnded();
    }
}