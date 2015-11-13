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

class TutProp {
    public var pos:Vector;
    public var life:Float;

    public function new() {
        life = 1000;
    }

    public function lifeFactor():Float {
        return life / 1000;
    }
}

class TutPropMod extends PropMod<TutPlane,TutProp>
{
    private var body:Body;

    public function new(
        prop:Prop<TutPlane,TutProp>, pos:Vector, vel:Vector
    ) {
        super(prop);

        body = new Body(BodyType.DYNAMIC);
        body.shapes.add(new Circle(10));
        body.position.setxy(pos.x, pos.y);
        body.velocity.setxy(vel.x, vel.y);
        body.space = engine.space;

        custom = new TutProp();
        writeToData();
    } 

    private function writeToData() {
        custom.pos = Util.vectorFromNape(body.position);
    }

    override function deleteHook() {
        body.space = null;
    }

    override function tick(delta:Float) {
        custom.life -= delta;
        if (custom.life < 0) prop.delete();

        writeToData();
    }
}
