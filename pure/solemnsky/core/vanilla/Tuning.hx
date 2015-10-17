package solemnsky.core.vanilla;

/**
 * solemnsky.core.vanilla.Tuning:
 * Tuning values for the vanilla game mode;
 */

class Tuning {
    public var playerRadius:Float = 20;

    // dimensions of the simple player rectangle
    public var playerWidth:Float = 60;
    public var playerHeight:Float = 30;

    // acceleration of gravity 
    public var gravity:Float = 3;

    // stalled
    public var playerMaxRotationStalled:Float; // NON-LITERAL
    public var playerMaxVelocityStalled:Float = 300;
    public var playerAfterburnerStalled:Float = 200;
    public var playerExitStallThreshold:Float = 130;

    // not stalled
    public var playerMaxRotation:Float; // NON-LITERAL
    public var playerMaxSpeed:Float = 300;
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
    public var playerEnterStallThreshold:Float = 100;

    // misc values and damping
    public var playerAngularDamping:Float = 1.05;
    public var playerStallDamping:Float = 1.5;
    public var playerLeftoverVelDamping:Float = 0.10;
    public var playerThrottleSpeed:Float = 1.5;

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
        playerMaxRotationStalled = Math.PI * 1.5;
        playerMaxRotation = Math.PI * 1.2;
    }
}