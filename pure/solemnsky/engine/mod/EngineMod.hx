package solemnsky.engine.mod;

/**
 * solemnsky.engine.mod.EngineMod:
 * Object with values and callbacks to influence the engine's behaviour.
 */

class EngineMod {
    public var debugTrace:String->Void;

    public var planeRadius:Float = 20; // lol

    // dimensions of the simple plane rectangle
    public var planeWidth:Float = 60;
    public var planeHeight:Float = 30;

    // acceleration of gravity 
    public var gravity:Float = 3;

    // contact
    public var minimumContactDamage:Float = 0.02;
    public var contactDamangeMultiplier:Float = 0.01;

    public function new() {
        debugTrace = function(_){}
    }
}
