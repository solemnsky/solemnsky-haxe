package solemnsky.engine.mod;

import solemnsky.engine.Plane;
import solemnsky.engine.Engine;

/**
 * solemnsky.engine.mod.PlaneMod:
 * For modifying plane behaviour.
 */

class PlayerMod<A,P> {
    /**************************************************************/
    /* flight mechanics tuning variables
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
    public var speedThrottleForce:Float = 0.3;
    public var speedThrottleDeaccForce:Float = 1.1;
    public var speedGravityForce:Float = 0.5;
    public var speedAfterburnForce:Float = 0.9;
    public var enterStallThreshold:Float = 100;

    // misc values and damping
    public var angularDamping:Float = 1.05;
    public var stallDamping:Float = 1.5;
    public var leftoverVelDamping:Float = 0.10;
    public var throttleSpeed:Float = 1.5;

    /**************************************************************/
    /* constructor and state
    /**************************************************************/

    private var player:Player<A,P>;
    private var engine:Engine<A,P>;

    private var custom(get,set):A;
    public function get_custom() return player.custon;
    public function set_custom(n) return player.custom = n;

    public function new(player:Player<A,P>) {
        maxRotationStalled = Math.PI * 1.2;
        maxRotation = Math.PI * 1;

        this.player = player;
        engine = player.parent;
    }

    /**************************************************************/
    /* callbacks
    /**************************************************************/

    /**
     * Ticks on every game cycle. Be careful, young modders.
     */
    public function onTick(delta:Float) {
        // do something with plane
    }

    /**
     * Ticks when the player has control of a plane (is alive).
     */
    public function onTickPlane(delta:Float, plane:Plane<A,P>) {

    }

    public function onSpawn() {

    }

    public function onKill() {

    }
}
