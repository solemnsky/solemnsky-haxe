package solemnsky.tutorial;

import util.Vector;
import solemnsky.engine.mod.PlaneMod;

/**
 * solemnsky.tutorial.TutPlane:
 * Our own plane mod with some extra functions.
 */

class TutPlane extends PlaneMod {
    public function new() {
        super();
    } 

    override public function pewpew() {
        var state = plane.state;

        engine.spawnProp(plane.id, new TutBullet(
            state.pos.add(
                Vector.fromAngle(state.rot).mult(length/2 + 10)
            )
            , state.vel.add(
                Vector.fromAngle(state.rot).mult(200)
            )
        ));
    }
}
