package solemnsky.ui;

import solemnsky.control.Control;
import solemnsky.control.Event;
import solemnsky.control.Scene;
import solemnsky.control.Profile;
import solemnsky.core.Core;

/**
 * solemnsky.ui.Web: 
 * Web.ctrl() returns a control object for the web (html5) distribution.
 */

class Web {
    public static function ctrl():Control {
        return new DemoControl();
    }
} 

class WebDemo implements Control {
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
        // network for the html5 target is null, javascript has no UDP
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
