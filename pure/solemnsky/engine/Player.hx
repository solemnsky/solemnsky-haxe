package solemnsky.engine;

import solemnsky.engine.mod.PlaneMod;
import util.Vector;

/**
 * solemnsky.engine.Player:
 * Represents a player in the game.
 */

class Player<D,P> {
    public var parent:Engine<D,P>;
    public var data:D;
    public var plane:Null<Plane<D,P>>;

    public function new(parent:Engine<D,P>, data:D) {
        this.parent = parent;
        this.data = data;
        plane = null;
    }

    /*************************************************************************/
    /* external API
    /*************************************************************************/

    public function kill() {
        this.plane = null;
    }

    public function spawn(mod:PlaneMod, pos:Vector, rot:Float) {
        plane = new Plane(mod, parent, pos, rot);
    }

    /*************************************************************************/
    /* simulation
    /*************************************************************************/

    public function writeToNape() {
        if (this.plane != null)
            this.plane.writeToNape();
    }

    public function readFromNape() {
        if (this.plane != null)
            this.plane.readFromNape();
    }

    public function tick(delta:Float) {
        if (this.plane != null)
            this.plane.tick(delta);
    }

    public function tickGraphics(delta:Float) {
        if (this.plane != null)
            this.plane.tickGraphics(delta);
    }
}

