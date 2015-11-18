package solemnsky.tutorial.engine;

import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Circle;
import solemnsky.engine.Prop;
import solemnsky.engine.mod.PropMod;
import util.Util;
import util.Vector;

/**
 * solemnsky.tutorial.engine.TutProp:
 * Simple prop, just a slow bullet that doesn't hurt anybody.
 */

class TutProp {
    public var pos:Vector;
    public var vel:Vector;
    public var life:Float;

    public function new(pos:Vector, vel:Vector) {
        this.pos = pos;
        this.vel = vel;

        life = 1000;
    }

    public function lifeFactor():Float {
        return life / 1000;
    }
}

class TutPropMod extends PropMod<TutPlayer, TutProp> {
    private var body:Body;

    public function new(
        prop:Prop<TutPlayer,TutProp> 
    ) {
        super(prop);

        body = new Body(BodyType.DYNAMIC);
        body.shapes.add(new Circle(10));
        body.position.setxy(custom.pos.x, custom.pos.y);
        body.velocity.setxy(custom.vel.x, custom.vel.y);
        body.space = engine.space;

        writeToData();
    } 

    private function writeToData() {
        custom.pos = Util.vectorFromNape(body.position);
    }

    /**************************************************************/
    /* callbacks
    /**************************************************************/

    override function onTick(delta:Float) {
        custom.life -= delta;
        if (custom.life < 0) prop.delete();

        writeToData();
    }

    override function onDelete() {
        body.space = null;
    }
}
