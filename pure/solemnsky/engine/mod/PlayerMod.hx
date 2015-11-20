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
    public var length:Float = 110;
    public var width:Float = 30;

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

    private function writeValues() {
        maxRotationStalled = Math.PI * 1.2;
        maxRotation = Math.PI * 1;
    }

    /**************************************************************/
    /* constructor and state
    /**************************************************************/

    private var player:Player<A,P>;

    public function new(player:Player<A,P>) {
        writeValues();
        this.player = player;
    }

    /**************************************************************/
    /* helpful properties
    /**************************************************************/

    private var engine(get,set):Engine<A,P>;
    private function get_engine() return player.engine;
    private function set_engine(n) return player.engine = n;
    private var custom(get,set):A;
    private function get_custom() return player.custom;
    private function set_custom(n) return player.custom = n;

    /**************************************************************/
    /* callbacks
    /**************************************************************/

    public function onTick(delta:Float) {}
    public function onTickPlane(delta:Float, plane:Plane<A,P>) {}
    public function onSpawn() {}
    public function onKill() {}

    /**************************************************************/
    /* snap
    /**************************************************************/

    public function getSnap():Dynamic return null;
    public function loadSnap(snap:Dynamic) {}
}
