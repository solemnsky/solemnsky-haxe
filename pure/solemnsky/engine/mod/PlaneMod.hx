package solemnsky.engine.mod;

/**
 * solemnsky.engine.mod.PlaneMod:
 * Object with values and callbacks to influence a plane's behaviour.
 */

class PlaneMod {
    /**************************************************************/
    /* tuning variables
    /**************************************************************/

    // physical dimensions
    public var length:Float = 80;
    public var width:Float = 20;

    // mechanics when stalled
    public var maxRotationStalled:Float; // Math.PI * 1
    public var maxVelocityStalled:Float = 300;
    public var afterburnerStalled:Float = 500;
    public var exitStallThreshold:Float = 130;

    // mechanics when not stalled
    public var maxRotation:Float; // Math.PI * 0.8
    public var speed:Float = 300;
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
    public var enterStallThreshold:Float = 100;

    // misc values and damping
    public var angularDamping:Float = 1.05;
    public var stallDamping:Float = 1.5;
    public var leftoverVelDamping:Float = 0.10;
    public var throttleSpeed:Float = 1.5;

    public function new() {
        maxRotationStalled = Math.PI * 1;
        maxRotation = Math.PI * 0.8;
    }

    /**************************************************************/
    /* callbacks
    /**************************************************************/

    private var plane;

    public function attach(plane:Plane) { 
        this.plane = plane;
    }

    public function tick(delta:Delta) {
        // do something with plane
    }
}
