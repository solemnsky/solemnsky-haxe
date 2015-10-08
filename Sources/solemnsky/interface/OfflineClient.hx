package solemnsky.interface;

import solemnsky.core.Core;

/**
 * solemnsky.interface.OfflineClient: 
 * Transforms a Core object into a Control object, implementing only offline 
 * functionalities (runs an offline demo).
 */

class OfflineClient implements Control {
    private var core:Core;
    private var profileString:String;
    private var notes:Array<String> = [];

    public function new(core:Core<Dynamic>) {
        this.core = core;
        core.init();
        core.join('offline player');
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
        core.handle(e);
    }

    public function hasEnded():Bool {
        return core.hasEnded();
    }
}