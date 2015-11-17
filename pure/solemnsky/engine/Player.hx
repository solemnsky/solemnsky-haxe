package solemnsky.engine;

import solemnsky.engine.mod.PlaneMod;
import util.Vector;

/**
 * solemnsky.engine.Player:
 * Represents a player in the game.
 */

class Player<D,P> {
    public var parent:Engine<D,P>;
    public var plane:Null<Plane<D,P>>;
    public var id:Int;
    public var mod:PlayerMod<D,P>;

    public function new(parent:Engine<D,P>, id:Int) {
        this.id = id;
        this.parent = parent;
        plane = null;
        simulating = false;
    }

    /*************************************************************************/
    /* external API
    /*************************************************************************/

    public function kill() {
        this.plane.onKill();
        this.plane = null;
    }

    public function spawn(
        modConstruct:Plane<D,P>->PlaneMod<D,P>, pos:Vector, rot:Float
    ) {
        plane = new Plane(parent, id, modConstruct, pos, rot);
        set_simulating(simulating); // make the body's entry into
        // the parent space consistent with whether we're
        // simulating
    }

    /*************************************************************************/
    /* simulation
    /*************************************************************************/

    public function writeToNape() {
        if (plane != null)
            plane.writeToNape();
    }

    public function readFromNape() {
        if (plane != null)
            plane.readFromNape();
    }

    public function tick(delta:Float) {
        if (plane != null && simulating)
            plane.tick(delta);
    }

    public function tickGraphics(delta:Float) {
        if (plane != null && simulating)
            plane.tickGraphics(delta);
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
}

