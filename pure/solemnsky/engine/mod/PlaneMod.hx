package solemnsky.engine.mod;

/**
 * solemnsky.engine.mod.PlaneMod:
 * Object with values and callbacks to influence a plane's behaviour.
 */

class PlaneMod {
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

    public function new() {
    }
}
