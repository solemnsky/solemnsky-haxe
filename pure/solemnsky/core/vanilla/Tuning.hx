package solemnsky.core.vanilla;

/**
 * solemnsky.core.vanilla.Tuning:
 * Tuning values for the vanilla game mode;
 */

class Tuning {
    public static inline var playerRadius:Float = 20;

    // dimensions of the simple player rectangle
    public static inline var playerWidth:Float = 60;
    public static inline var playerHeight:Float = 30;

    // acceleration of gravity 
    public static inline var gravity:Float = 3;

    // stalled
    public static inline var playerMaxRotationStalled:Float = Math.PI * 1.5;
    public static inline var playerMaxVelocityStalled:Float = 300;
    public static inline var playerAfterburnerStalled:Float = 200;
    public static inline var playerExitStallThreshold:Float = 130;

    // not stalled
    public static inline var playerMaxRotation:Float = Math.PI * 1.2;
    public static inline var playerMaxSpeed:Float = 300;
    public static inline var speedThrottleInfluence:Float = 0.7 ;
        // max speed achievable with throttle
    public static inline var speedThrottleForce:Float = 0.3;
        // speed per second that throttle can influence
    public static inline var speedThrottleDeaccForce:Float = 1.1;
        // speed per second that the throttle can take away
        // when the speed is higher than the throttle
    public static inline var speedGravityForce:Float = 0.5;
            // speed per second that gravity can influence
    public static inline var speedAfterburnForce:Float = 0.6;
    public static inline var playerEnterStallThreshold:Float = 100;

    // misc values and damping
    public static inline var playerAngularDamping:Float = 1.05;
    public static inline var playerStallDamping:Float = 1.5;
    public static inline var playerLeftoverVelDamping:Float = 0.10;
    public static inline var playerThrottleSpeed:Float = 1.5;

    // contact
    public static inline var minimumContactDamage:Float = 0.02;
    public static inline var contactDamangeMultiplier:Float = 0.01;

    // graphics that look nice
    public static inline var graphicsThrustFade:Float = 4;
    public static inline var graphicsBarWidth:Float = 50;
    public static inline var graphicsBarHeight:Float = 8;
    public static inline var graphicsBarClear:Float = 50;
    public static inline var graphicsNameClear:Float = 35;
}