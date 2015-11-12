package solemnsky.tutorial;

import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Circle;
import solemnsky.engine.Prop;
import solemnsky.engine.mod.PropMod;
import util.Util;
import util.Vector;

/**
 * solemnsky.engine.TutBullet:
 * Simple prop, just a slow bullet that doesn't hurt anybody.
 */

class TutBullet extends PropMod {
    // constructor vars
    private var pos:Vector;
    private var vel:Vector;

    private var body:Body;

    private var life:Float = 2000;

    public function new(pos:Vector, vel:Vector) {
        super();
        this.pos = pos;
        this.vel = vel;
    } 

    override function attach(prop:Prop) {
        this.prop = prop;
        engine = prop.parent;

        body = new Body(BodyType.DYNAMIC);
        body.shapes.add(new Circle(10));
        body.position.setxy(pos.x, pos.y);
        body.velocity.setxy(vel.x, vel.y);
        body.space = engine.space;
    }

    override function getPos():Vector {
        return Util.vectorFromNape(body.position);
    }

    override function deleteHook() {
        body.space = null;
    }

    override function tick(delta:Float) {
        life -= delta;
        if (life < 0) prop.delete();
    }
}
