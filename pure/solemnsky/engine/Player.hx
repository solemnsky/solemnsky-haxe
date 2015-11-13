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

    public function new(parent:Engine<D,P>, id:Int) {
        this.id = id;
        this.parent = parent;
        plane = null;
    }

    /*************************************************************************/
    /* external API
    /*************************************************************************/

    public function kill() {
        this.plane = null;
    }

    public function spawn(
        modConstruct:Plane<D,P>->PlaneMod<D,P>, pos:Vector, rot:Float
    ) {
        plane = new Plane(parent, id, modConstruct, pos, rot);
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
        if (plane != null)
            plane.tick(delta);
    }

    public function tickGraphics(delta:Float) {
        if (plane != null)
            plane.tickGraphics(delta);
    }
}

