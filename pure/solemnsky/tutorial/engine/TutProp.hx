package solemnsky.tutorial.engine;

import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Circle;
import solemnsky.engine.Prop;
import solemnsky.engine.Engine;
import solemnsky.engine.mod.PropMod;
import util.Util;
import util.Vector;

/**
 * solemnsky.tutorial.engine.TutProp:
 * Simple prop, just a slow bullet that doesn't hurt anybody.
 */

enum TutPropRep {
    Bullet(pos:Vector, life:Float);
    Bomb(pos:Vector, life:Float);
}

/**
 * TutBullet: a simple bullet.
 */
class TutBullet implements TutProp {
    /************************************************************/
    /* state and constructor
    /************************************************************/

    private var prop:Prop<TutPlayer,TutProp>;
    private var engine:Engine<TutPlayer,TutProp>;
    private var body:Body;

    // game state
    private var life:Float;

    // constructors
    private var _pos:Vector;
    private var _vel:Vector;

    public function new(pos:Vector, vel:Vector) {
        _pos = pos; _vel = vel;
    }

    public function attach(prop:Prop<TutPlayer,TutProp>) {
        this.prop = prop;
        engine = prop.engine;

        life = 1000;

        body = new Body(BodyType.DYNAMIC);
        body.shapes.add(new Circle(10));
        body.position.setxy(_pos.x, _pos.y);
        body.velocity.setxy(_vel.x, _vel.y);
        body.space = engine.space;
    }

    /************************************************************/
    /* logic
    /************************************************************/

    public function tick(delta:Float) {
        life -= delta;
        if (life < 0) prop.delete();
    }

    public function delete() {
        body.space = null;
    }

    /************************************************************/
    /* representation
    /************************************************************/

    public function getRep() 
        return Bullet(
            Util.vectorFromNape(body.position)
            , life / 1000);
}

/**
 * TutBomb: a little bomb.
 */
class TutBomb implements TutProp {
    /************************************************************/
    /* state and constructor
    /************************************************************/

    private var prop:Prop<TutPlayer,TutProp>;
    private var engine:Engine<TutPlayer,TutProp>;
    private var body:Body;

    // game state
    private var life:Float;
    private var pos:Vector;

    // constructors
    private var _pos:Vector;
    private var _vel:Vector;
    
    public function new(pos:Vector, vel:Vector) {
        _pos = pos; _vel = vel;
    }

    public function attach(prop:Prop<TutPlayer,TutProp>) {
        this.prop = prop;
        engine = prop.engine;

        life = 3000;

        body = new Body(BodyType.DYNAMIC);
        body.shapes.add(new Circle(10));
        body.position.setxy(_pos.x, _pos.y);
        body.velocity.setxy(_vel.x, _vel.y);
        body.space = engine.space;
        body.force = new Vec2(0, engine.mod.gravity);
    }

    /************************************************************/
    /* logic
    /************************************************************/

    public function tick(delta:Float) {
        life -= delta;
        if (life < 0) prop.delete();
    }

    public function delete() {
        body.space = null;
    }

    /************************************************************/
    /* representation
    /************************************************************/

    public function getRep() 
        return Bomb(
            Util.vectorFromNape(body.position)
            , life / 3000);
}

/**
 * Our custom prop type.
 */
interface TutProp {
    public function attach(prop:Prop<TutPlayer,TutProp>):Void;
    public function tick(delta:Float):Void;
    public function delete():Void;
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
        custom.delete();
    }
}
