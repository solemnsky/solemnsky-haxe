package solemnsky.engine;

import solemnsky.engine.mod.PlayerMod;
import util.Vector;

/**
 * solemnsky.engine.Player:
 * Represents a player in the game.
 */

class Player<A,P> {
    /*************************************************************************/
    /* state and constructor
    /*************************************************************************/

    public var id:Int;

    public var parent:Engine<A,P>;
    public var plane:Null<Plane<A,P>>; 

    public var modType:Int;
    public var mod:PlayerMod<A,P>;
    public var custom:A;

    public function new(
        parent:Engine<A,P>, id:Int, custom:A
        , modConstruct:Player<A,P>->PlayerMod<A,P>
    ) {
        this.id = id;
        this.custom = custom;
        this.parent = parent;
        plane = null;
        simulating = false;

        this.mod = modConstruct(this);
    }

    /*************************************************************************/
    /* simulation state
    /*************************************************************************/

    public var simulating(default,set):Bool;   

    public function set_simulating(val:Bool):Bool {
        if (plane != null) {
            simulating = val;
            if (val) plane.body.space = parent.space;
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

        plane = new Plane(parent, id, modConstruct, pos, rot);
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
            mod.onTickPlane(delta);
            plane.tick(delta);
            plane.writeToNape();
        }
    }

    public function tickGraphics(delta:Float) {
        if (plane != null && simulating)
            plane.tickGraphics(delta);
    }

}

