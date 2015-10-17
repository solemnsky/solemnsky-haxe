package solemnsky.core.vanilla;

/**
 * solemnsky.core.vanilla.Tuning:
 * Tuning values for the vanilla game mode;
 */

class Tuning {
    static inline var playerRadius:Float = 20;

    // dimensions of the simple player rectangle
    static inline var playerWidth:Float = 60;
    static inline var playerHeight:Float = 30;

    // acceleration of gravity 
    static inline var gravity:Float = 3;

    // stalled
    static inline var playerMaxRotationStalled:Float = Math.PI * 1.5;
    static inline var playerMaxVelocityStalled:Float = 300;
    static inline var playerAfterburnerStalled:Float = 200;
    static inline var playerExitStallThreshold:Float = 130;

    // not stalled
    static inline var playerMaxRotation:Float = Math.PI * 1.2;
    static inline var playerMaxSpeed:Float = 300;
    static inline var speedThrottleInfluence:Float = 0.7 ;
        // max speed achievable with throttle
    static inline var speedThrottleForce:Float = 0.3;
        // speed per second that throttle can influence
    static inline var speedThrottleDeaccForce:Float = 1.1;
        // speed per second that the throttle can take away
        // when the speed is higher than the throttle
    static inline var speedGravityForce:Float = 0.5;
            // speed per second that gravity can influence
    static inline var speedAfterburnForce:Float = 0.6;
    static inline var playerEnterStallThreshold:Float = 100;

    // misc values and damping
    static inline var playerAngularDamping:Float = 1.05;
    static inline var playerStallDamping:Float = 1.5;
    static inline var playerLeftoverVelDamping:Float = 0.10;
    static inline var playerThrottleSpeed:Float = 1.5;

    // contact
    static inline var minimumContactDamage:Float = 0.02;
    static inline var contactDamangeMultiplier:Float = 0.01;

    // graphics that look nice
    static inline var graphicsThrustFade:Float = 4;
    static inline var graphicsBarWidth:Float = 50;
    static inline var graphicsBarHeight:Float = 8;
    static inline var graphicsBarClear:Float = 50;
    static inline var graphicsNameClear:Float = 35;
}