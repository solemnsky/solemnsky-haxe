package solemnsky.engine;

import solemnsky.engine.mod.PlaneMod;
import util.Vector;

/**
 * solemnsky.engine.Player:
 * Represents a player in the game.
 */

class Player<D,P> {
    /*************************************************************************/
    /* state and constructor
    /*************************************************************************/

    public var id:Int;

    public var parent:Engine<D,P>;
    public var plane:Null<Plane<D,P>>; 

    public var mod:PlayerMod<D,P>;
    public var custom:D;

    public function new(
        parent:Engine<D,P>, id:Int
        , mod:PlaneMod<D,P>
    ) {
        this.id = id;

        this.parent = parent;
        plane = null;


        simulating = false;
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
        modConstruct:Plane<D,P>->PlaneMod<D,P>, pos:Vector, rot:Float
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

