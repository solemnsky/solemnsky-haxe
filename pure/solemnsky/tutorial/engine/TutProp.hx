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

enum TutPropRep {
    Bullet(pos:Vector, life:Float);
}

/**
 * TutBullet: a simple bullet.
 */
class TutBullet implements TutProp {
    /************************************************************/
    /* state and constructor
    /************************************************************/

    public var prop:Prop<TutPlayer,TutProp>;
    private var body:Body;

    // game state
    private var life:Float;

    public function new(pos:Vector, vel:Vector) {
        life = 1000;

        body = new Body(BodyType.DYNAMIC);
        body.shapes.add(new Circle(10));
        body.position.setxy(custom.pos.x, custom.pos.y);
        body.velocity.setxy(custom.vel.x, custom.vel.y);
        body.space = engine.space;

        writeToData();
    }

    /************************************************************/
    /* logic
    /************************************************************/

    private function writeToData() {
        custom.pos = Util.vectorFromNape(body.position);
    }

    public function tick(delta):Float {
        life -= delta;
        if (custom.life < 0) prop.delete();

        writeToData();
    }

    public function delete() {
        body.space = null;
    }

    /************************************************************/
    /* representation
    /************************************************************/

    public function getRep() return Bullet(pos, life);

}

/**
 * Our custom prop type.
 */
interface TutProp {
    public var pos:Vector;

    public function attach(prop:Prop<TutPlayer,TutProp>);
    public function tick(delta:Float);
    public function getRep():TutPropRep;
}

class TutPropMod extends PropMod<TutPlayer, TutProp> {
    public function new(
        prop:Prop<TutPlayer,TutProp> 
    ) {
        super(prop);
        custom.attach(prop);
    } 

    /**************************************************************/
    /* callbacks
    /**************************************************************/

    override function onTick(delta:Float) {
        custom.tick(delta);
    }

    override function onDelete() {
        custom.delete(delta);
    }
}
