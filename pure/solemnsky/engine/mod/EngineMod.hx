package solemnsky.engine.mod;

/**
 * solemnsky.engine.mod.EngineMod:
 * This is the top-level for modifying game engine 
 * functionality.
 */

class EngineMod<A,P> {
    /**************************************************************/
    /* misc variables and constructor
    /**************************************************************/

    public var debugTrace:String->Void;

    // acceleration of gravity (px / s^2)
    public var gravity:Float = 250;

    public function new() {
        debugTrace = function(_){}
    }

    /**************************************************************/
    /* mod constructors
    /**************************************************************/

    public function playerMod(
        player:Player<A,P>
    ):PlayerMod<A,P> {
        return null;
    }

    public function propMod(
        plane:Prop<A,P>
    ):PropMod<A,P> {
        return null;
    }

    /**************************************************************/
    /* callbacks
    /**************************************************************/

    // maybe eventually?
    // props and players have callbacks as well...
}
