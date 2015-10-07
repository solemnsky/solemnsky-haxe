package solemnsky.interface;

import solemnsky.core.Core;

class OfflineClient implements Control {
    private var core:Core;
    private var profileString:String;

    public function new(core:Core) {
        this.core = core;
    }

    /*************************************************************************/
    /* Control interface
    /*************************************************************************/

    public function tick(delta:Float):Void {
        core.tick(delta);
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