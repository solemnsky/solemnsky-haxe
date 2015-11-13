package solemnsky.tutorial;

import util.Vector;
import solemnsky.engine.mod.PlaneMod;
import solemnsky.tutorial.TutProp;
import solemnsky.tutorial.Synonyms;

/**
 * solemnsky.tutorial.TutPlane:
 * Our own plane mod with some extra functions.
 */

class TutPlane {
    private var engine:MyEngine;
    private var plane:MyPlane;

    public function new(plane:MyPlane) {
        this.plane = plane;
        engine = plane.parent;
    }

    public function pewpew() {
        var state = plane.state;
        var length = plane.mod.length;

        var modConstruct = function(prop) return
            new TutPropMod(
                prop
                , state.pos.add(
                    Vector.fromAngle(state.rot).mult(length/2 + 10)
                )
                , state.vel.add(
                    Vector.fromAngle(state.rot).mult(200)
                )
            );

        engine.spawnProp(plane.id, modConstruct);
    }
}

class TutPlaneMod extends PlaneMod<TutPlane,TutProp> {
    public function new(prop) {
        super(prop);

        custom = new TutPlane(plane);
    } 
}
