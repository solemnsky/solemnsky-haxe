package solemnsky.engine.mod;

/**
 * solemnsky.engine.mod.EngineMod:
 * This is the top-level for modifying game engine 
 * functionality.
 */

class EngineMod<W,P> {
    /**************************************************************/
    /* initWorld
    /**************************************************************/

    public function initWorld():W return null

    /**************************************************************/
    /* misc variables and constructor
    /**************************************************************/

    public var debugTrace:String->Void;

    // acceleration of gravity (px / s^2)
    public var gravity:Float = 150;

    public function new() {
        debugTrace = function(_){}
    }

    /**************************************************************/
    /* mod constructors
    /**************************************************************/

    public function playerMod(
        player:Player<W,P>
    ):PlayerMod<W,P> return null;

    /**************************************************************/
    /* callbacks
    /**************************************************************/


    public function tick(delta):Void {}
}
