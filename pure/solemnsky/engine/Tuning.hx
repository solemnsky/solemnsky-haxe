package solemnsky.core.vanilla;

/**
 * solemnsky.core.vanilla.Tuning:
 * Large object holding all kinds of tuning values (and potentially
 * callbacks) in over which the Engine's operation is parameterized.
 */

class Tuning {
    public var planeRadius:Float = 20;

    // dimensions of the simple plane rectangle
    public var planeWidth:Float = 60;
    public var planeHeight:Float = 30;

    // acceleration of gravity 
    public var gravity:Float = 3;

    // stalled
    public var planeMaxRotationStalled:Float; // Math.PI * 1.5
    public var planeMaxVelocityStalled:Float = 300;
    public var planeAfterburnerStalled:Float = 200;
    public var planeExitStallThreshold:Float = 130;

    // not stalled
    public var planeMaxRotation:Float; // Math.PI * 1.2
    public var planeMaxSpeed:Float = 300;
    public var speedThrottleInfluence:Float = 0.7 ;
        // max speed achievable with throttle
    public var speedThrottleForce:Float = 0.3;
        // speed per second that throttle can influence
    public var speedThrottleDeaccForce:Float = 1.1;
        // speed per second that the throttle can take away
        // when the speed is higher than the throttle
    public var speedGravityForce:Float = 0.5;
            // speed per second that gravity can influence
    public var speedAfterburnForce:Float = 0.6;
    public var planeEnterStallThreshold:Float = 100;

    // misc values and damping
    public var planeAngularDamping:Float = 1.05;
    public var planeStallDamping:Float = 1.5;
    public var planeLeftoverVelDamping:Float = 0.10;
    public var planeThrottleSpeed:Float = 1.5;

    // contact
    public var minimumContactDamage:Float = 0.02;
    public var contactDamangeMultiplier:Float = 0.01;

    // graphics that look nice
    public var graphicsThrustFade:Float = 4;
    public var graphicsBarWidth:Float = 50;
    public var graphicsBarHeight:Float = 8;
    public var graphicsBarClear:Float = 50;
    public var graphicsNameClear:Float = 35;

    // I actually have to instantiate the object to have non-literal
    // values exported as variables this is *an issue* 
    public function new() {
        planeMaxRotationStalled = Math.PI * 1.5;
        planeMaxRotation = Math.PI * 1.2;
    }
}