package solemnsky.ui;

import solemnsky.control.Control;
import solemnsky.control.Event;
import solemnsky.control.Scene;
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
    private var myId:Int;

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
        notes = notes.append(newNotes);
    }

    public function render(delta:Float):Scene {
        return core.render(delta);
    }

    public function profiling(l:String, r:String, ls:String, rs:String):Void {
        profileString = 
            'logic / render / logic sleep / render sleep: '
            +l+' / '+r+' / '+ls+' / '+rs;
        trace(profileString);
    }

    public function handle(e:Event):Void {
        core.handle(myId, e);
    }

    public function hasEnded():Bool {
        return core.hasEnded();
    }
}