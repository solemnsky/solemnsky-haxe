package solemnsky.engine;

import util.Util;
import solemnsky.engine.mod.PlayerMod;
import solemnsky.engine.Snap;
import util.Vector;

/**
 * solemnsky.engine.Player:
 * Represents a player in the game.
 */

/**
 * State necessary to represent the player graphically.
 */
class PlayerRep {
    public var alive:Bool = false;

    // basic properties
    public var pos:Vector;
    public var rot:Float;
    public var length:Float;
    public var width:Float;    

    // flight mechanics
    public var burnFade:Float;
    public var stalled:Bool;
    public var afterburner:Bool;

    // roll
    public var roll:Float;
    private var orientation:Bool;
    private var flipState:Float = 0;
    private var rollState:Float = 0;

    public function new() {
    }

    private function approach(
        delta:Float, x:Float, target:Float, vel:Float
    ):Float {
        // vel in s^-1
        if ((delta / 1000) * vel > Math.abs(x - target)) return target;
        return x + vel*(delta / 1000)*Util.sign(target - x);
    }

    public function tick<A,P>(delta:Float, plane:Plane<A,P>) {
        alive = (plane != null);
        if (!alive) return;
        var state = plane.state;       

        // basic properties
        pos = state.pos; rot = state.rot;
        width = plane.mod.length; length = plane.mod.width;

        // flight mechanics
        if (state.afterburner) burnFade  = approach(delta, burnFade, 1, 1);
        else burnFade = approach(delta, burnFade, 0, 1);

        stalled = state.stalled; afterburner = state.afterburner;

        // roll
        orientation = Util.normAngle(rot + (Math.PI / 2)) > Math.PI;
        if (orientation) flipState = approach(delta, flipState, 1, 2);
        else flipState = approach(delta, flipState, 0, 2);

        var flipComponent:Float;
        if (orientation) flipComponent = (Math.PI / 2) + flipState * Math.PI;
        else flipComponent = (Math.PI / 2) - flipState * Math.PI;

        var rolling:Bool = false;
        if (state.movement.left) {
            rollState = approach(delta, rollState, -1, 2);
            rolling = true;
        } if (state.movement.right) { 
            rollState = approach(delta, rollState, 1, 2);
            rolling = true;
        }
        if (!rolling) rollState = approach(delta, rollState, 0, 2);

        var rollComponent:Float;
        if (orientation) rollComponent = (-Math.PI / 4) * rollState;
        else rollComponent = (Math.PI / 4) * rollState;

        roll = flipComponent + rollComponent;
    }
}

class Player<A,P> {
    /*************************************************************************/
    /* state and constructor
    /*************************************************************************/

    public var id:Int;

    public var engine:Engine<A,P>;
    public var plane:Null<Plane<A,P>>; 

    public var modType:Int;
    public var mod:PlayerMod<A,P>;
    public var custom:A;

    public var rep:PlayerRep;

    public function new(
        engine:Engine<A,P>, id:Int, custom:A
    ) {
        this.id = id;
        this.custom = custom;
        this.engine = engine;
        plane = null;
        simulating = false;

        rep = new PlayerRep();

        mod = engine.mod.playerMod(this);
    }

    /*************************************************************************/
    /* simulation state
    /*************************************************************************/

    public var simulating(default,set):Bool;   

    public function set_simulating(val:Bool):Bool {
        if (plane != null) {
            simulating = val;
            if (val) plane.body.space = engine.space;
            else plane.body.space = null;
        }
        return simulating;
    }

    /*************************************************************************/
    /* tsumego
    /*************************************************************************/

    public function kill() {
        mod.onKill();

        plane.onKill();
        plane = null;
    }

    public function spawn(
        pos:Vector, rot:Float
    ) {
        mod.onSpawn();

        plane = new Plane(this, id, pos, rot);
        set_simulating(simulating); 
            // needs to be reset when the body is re-allocated
    }

    /*************************************************************************/
    /* simulation
    /*************************************************************************/

    public function tick(delta:Float) {
        mod.onTick(delta);

        if (plane != null && simulating) {
            plane.readFromNape();
            mod.onTickPlane(delta, plane);
            plane.tick(delta);
            plane.writeToNape();
        }
    }

    /**
     * Update / mutate the player's graphical representation state.
     */
    public function tickGraphics(delta:Float):Void {
        rep.tick(delta, plane);
    }

    /*************************************************************************/
    /* snaps
    /*************************************************************************/

    public function getSnap():PlayerSnap {
        return
            { id: id
            , custom: mod.getSnap()
            , state: if (plane != null) plane.state else null } 
    }    

    public function loadSnap(snap:PlayerSnap) {

    }
}

