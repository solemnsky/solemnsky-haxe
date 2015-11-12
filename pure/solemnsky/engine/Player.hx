package solemnsky.engine;

import solemnsky.engine.mod.PlaneMod;
import util.Vector;

/**
 * solemnsky.engine.Player:
 * Represents a player in the game.
 */

class Player {
    public var parent:Engine;
    public var plane:Null<Plane>;

    public function new(parent:Engine) {
        this.parent = parent;
        plane = null;
    }

    /*************************************************************************/
    /* external API
    /*************************************************************************/

    public function kill() {
        this.plane = null;
    }

    public function spawn(mod:PlaneMod, pos:Vector, rot:Float) {
        plane = new Plane(parent, mod, pos, rot);
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

