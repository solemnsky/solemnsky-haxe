package solemnsky.engine.mod;

import solemnsky.engine.Plane;
import solemnsky.engine.Engine;

/**
 * solemnsky.engine.mod.PlaneMod:
 * For modifying plane behaviour.
 */

class PlaneMod<D,P> {
    /**************************************************************/
    /* tuning variables
    /**************************************************************/

    // physical dimensions
    public var length:Float = 80;
    public var width:Float = 20;

    // mechanics when stalled
    public var maxRotationStalled:Float; 
    public var maxVelocityStalled:Float = 300;
    public var afterburnerStalled:Float = 500;
    public var exitStallThreshold:Float = 130;

    // mechanics when not stalled
    public var maxRotation:Float; 
    public var speed:Float = 330;
    public var speedThrottleInfluence:Float = 0.6 ;
        // max speed achievable with throttle
    public var speedThrottleForce:Float = 0.3;
        // speed per second that throttle can influence
    public var speedThrottleDeaccForce:Float = 1.1;
        // speed per second that the throttle can take away
        // when the speed is higher than the throttle
    public var speedGravityForce:Float = 0.5;
    public var speedAfterburnForce:Float = 0.9;
    public var enterStallThreshold:Float = 100;

    // misc values and damping
    public var angularDamping:Float = 1.05;
    public var stallDamping:Float = 1.5;
    public var leftoverVelDamping:Float = 0.10;
    public var throttleSpeed:Float = 1.5;

    public function new(plane:Plane<D,P>) {
        maxRotationStalled = Math.PI * 1.2;
        maxRotation = Math.PI * 1;

        this.plane = plane;
        engine = plane.parent;
    }

    private var plane:Plane<D,P>;
    private var engine:Engine<D,P>;

    /**************************************************************/
    /* callbacks
    /**************************************************************/

    public function tick(delta:Float) {
        // do something with plane
    }
}
