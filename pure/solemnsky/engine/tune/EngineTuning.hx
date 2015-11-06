package solemnsky.engine.tune;

/**
 * solemnsky.engine.tune.EngineTuning:
 * Object with values and callbacks to influence the engine's behaviour.
 */

class EngineTuning {
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
        planeMaxRotationStalled = Math.PI * 1.5;
        planeMaxRotation = Math.PI * 1.2;
    }
}
