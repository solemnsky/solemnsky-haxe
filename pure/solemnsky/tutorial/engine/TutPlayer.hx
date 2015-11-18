package solemnsky.tutorial.engine;

import util.Vector;
import solemnsky.engine.mod.PlayerMod;
import solemnsky.tutorial.engine.TutProp;
import solemnsky.tutorial.engine.Synonyms;

/**
 * solemnsky.tutorial.engine.TutPlane:
 * Our own plane mod with some extra functions.
 */

class TutPlayer {
    private var engine:MyEngine;
    private var plane:MyPlane;

    private var cooldown:Float;
    private var shooting:Bool;

    public function new(plane:MyPlane) {
        this.plane = plane;
        engine = plane.parent;

        cooldown = 0;
        shooting = false;
    }

    public function pewpew(state:Bool) {
        if (plane == null) return;

        shooting = state;
    }

    private function shoot() {
        if (plane == null) return;

        var state = plane.state;
        var length = plane.mod.length;

        engine.spawnProp(plane.id, 
            new TutProp(
                state.pos.add(
                    Vector.fromAngle(state.rot).mult(length/2 + 10)
                )
                , state.vel.add(
                    Vector.fromAngle(state.rot).mult(500)
                )
            )
        );

        // recoil
        plane.applyImpulse(
            Vector.fromAngle(state.rot).mult(-200)
        );
    }

    public function tick(delta:Float) {
        cooldown -= delta;

        if (cooldown < 0 && shooting) {
            cooldown = 100;
            shoot();
        }
    }
}

class TutPlayerMod extends PlayerMod<TutPlayer,TutProp> {
    public function new(prop) {
        super(prop);

        custom = new TutPlane(plane);
    } 

    override function tick(delta:Float) {
        custom.tick(delta);
    }
}
