package control.demo;

import control.Control;
import control.Event;
import control.Key;
import control.Scene;
import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Circle;
import nape.shape.Polygon;
import nape.space.Space;
import util.Transform;
import util.Util;
import util.Vector;

/**
 * solemnsky.control.demo.PhysDemo:
 * Demo control object demonstrating physics through Nape.
 */

/****************************************************************************/
/* helper structures
/****************************************************************************/

/**
 * We use directions a lot here, might as well take some redundancy
 * away and parameterize them abstractly...
 */
enum Direction {
    UpDir;
    DownDir;
    LeftDir;
    RightDir;
} 

class Projectile {
    private static inline var maxLife:Float = 1000;
    private var life:Float = 0;
    public var box:Body;

    public function new(space:Space, pos:Vector, vel:Vector) {
        box = new Body(BodyType.DYNAMIC);
        box.shapes.add(new Polygon(Polygon.box(20, 20)));
        box.position.setxy(pos.x, pos.y);
        box.velocity.setxy(vel.x, vel.y);
        box.space = space;
    }

    public function tick(delta:Float) {
        life += delta;
    }

    public function conclude():Bool {
        return (life > maxLife);
    }

    public function vivacity():Float {
        return (1 - (life / maxLife)) 
            * Math.sin((3 * Math.PI) * life / maxLife);
    }
}

class FloatingBox {
    private static inline var w:Int = 1600;
    private static inline var h:Int = 900;

    public var box:Body;
    private var index:Int;

    private function originalPos():Vector {
        return new Vector(w / 2, (h - 50) - 50 * (index + 0.5));
    }

    private function getPos():Vector {
        return Util.vectorFromNape(box.position);
    }

    private function setPos(v:Vector) {
        box.position.setxy(v.x, v.y);
    }

    public function new(space, index) {
        this.index = index;

        box = new Body(BodyType.DYNAMIC);
        box.shapes.add(new Polygon(Polygon.box(24, 24)));
        box.space = space;
        setPos(originalPos());
    }

    public function reset() {
        setPos(originalPos());
        box.velocity.setxy(0, 0);
        box.rotation = 0;
        box.angularVel = 0;
    }

    public function tick(delta:Float) {
        var dp = originalPos().sub(getPos());
        box.velocity.setxy(dp.x * 0.5, dp.y * 0.5);
        box.angularVel = box.angularVel * Math.pow(0.5, (delta / 1000));
    }
}

/****************************************************************************/
/* main export
/****************************************************************************/

class PhysDemo implements Control<DemoSelect> {
    /**
     * game state
     */
    private static inline var maxCoolDown:Float = 100;
    private static inline var initSpeed:Float = 20;
    private var cooldown: Map<Direction,Float>;
    private var movement: Map<Direction,Bool>;
    private var projectiles: Array<Projectile>;
    private var boxes:Array<FloatingBox>;
    private var ball:Body;

    private var exit:Bool = false;

    /**
     * physics
     */
    private var space:Space;

    /*********************************************************************/
    /* constructor
    /*********************************************************************/

    public function init(_) {}

    public function new() {
        /*********************************************************************/
        /* nape space
        /*********************************************************************/

        var gravity = Vec2.weak(0, 600);
        space = new Space(gravity);

        var w = 1600;
        var h = 900;

        var floor = new Body(BodyType.STATIC);
        floor.shapes.add(
            new Polygon(Polygon.rect(50, (h - 50), (w - 50), 1)));
        floor.space = space;        

        /*********************************************************************/
        /* game state
        /*********************************************************************/

        // cooldown and movement: player mechanics
        cooldown = [
            UpDir => 0, DownDir => 0
            , LeftDir => 0, RightDir => 0];
        movement = [
            UpDir => false, DownDir => false
            , LeftDir => false, RightDir => false ];

        // projectiles and boxes: physics environment

        projectiles = [];

        boxes = [];
        for (i in 0...16) {
            var box = new FloatingBox(space, i);
            boxes.push(box);
        }

        // ball: the player's body

        ball = new Body(BodyType.DYNAMIC);
        ball.shapes.add(new Circle(40));
        ball.position.setxy(50, h / 2);
        ball.angularVel = 10;
        ball.space = space;
    }   

    /*********************************************************************/
    /* movement utils
    /*********************************************************************/

    private function vecFromDir(m:Direction):Vector {
        switch (m) {
        case UpDir: return new Vector(0, -1);
        case LeftDir: return new Vector(-1, 0);
        case RightDir: return new Vector(1, 0);
        case DownDir: return new Vector(0, 1);
        }
    }

    private function dirFromKey(key:Key):Null<Direction> {
        switch (key) {
        case CharKey(char): {
            if (char == 'i') return UpDir;
            if (char == 'j') return LeftDir;
            if (char == 'l') return RightDir;
            if (char == 'k') return DownDir;
            return null;
        }
        default: return null;
        }
    }

    public function tick(delta:Float):Void {
        space.step(delta / 1000);

        for (d in movement.keys()) {
            cooldown.set(d, cooldown.get(d) + delta);

            if (movement.get(d)) {
                ball.velocity = 
                    ball.velocity.add(Util.napeFromVector(
                        vecFromDir(d).mult(delta)
                    ));

                if (cooldown.get(d) > maxCoolDown) {
                    cooldown.set(d, 0);

                    var pos = vecFromDir(d)
                        .mult(-50)
                        .add(Util.vectorFromNape(ball.position));
                    var vel = vecFromDir(d).mult(initSpeed);

                    projectiles.push(new Projectile(
                        space, pos, vel));
                }
            }
        }

        for (p in projectiles) {
            p.tick(delta);
        }

        projectiles = projectiles.filter(function(p) {
            if (p.conclude()) p.box.space = null;
            return (! p.conclude());
        });

        for (b in boxes) {
            b.tick(delta);
        }
    }

    /*************************************************************************/
    /* render
    /*************************************************************************/

    public function profiling(d:Profile) {
        trace(d.print());
    }

    private static inline function rotatedBox(
        pos:Vector
        , width:Float
        , alpha:Float
        , color:Scene.DrawPrim
    ):Scene {
        var scene = new Scene();
        scene.prims = [
            color
            , DrawRect(new Vector(-width, -width), new Vector(width, width))];
        scene.trans = Transform.translation(pos.x, pos.y)
            .multmat(Transform.rotation(alpha));
        return scene;
    }

    private function controlling():Bool {
        for (d in movement.keys()) 
            if (movement.get(d)) return true;
        return false;
    }

    private function score():Scene {
        var text = 'use i/j/k/l to move';
        var scene = new Scene();
        scene.prims = [
            SetColor(0, 0, 0, 255)
            , SetFont("Arial", 14) 
            , DrawText(new Vector(0, 0), CenterText, text)
        ];
        scene.trans = Transform.translation(800, 20)
            .multmat(Transform.scale(3, 3));
        return scene;

    }

    public function render(delta:Float):Scene {
        var scene = new Scene();

        scene.prims = [
            DrawCircle(Util.vectorFromNape(ball.position), 40)
            , SetColor(0, 255, 0, 255)
        ];

        if (controlling())
            scene.prims.unshift(SetColor(50, 0, 0, 255));
        else scene.prims.unshift(SetColor(0, 0, 0, 255));

        for (box in boxes) {
            scene.children.push(rotatedBox(
                Util.vectorFromNape(box.box.position)
                , 12
                , box.box.rotation
                , SetColor(0, 255, 0, 255)
            ));
        }

        for (p in projectiles) {
            scene.children.push(rotatedBox(
                Util.vectorFromNape(p.box.position)
                , 10
                , p.box.rotation 
                , SetColor(200, 0, 0, Math.round(p.vivacity() * 255))
            ));
        }

        scene.children.push(score());

        return scene;
    }

    /*************************************************************************/
    /* user input 
    /*************************************************************************/

    private function handleKb(key:Key, state):Void {
        var dir = dirFromKey(key);
        if (dir != null) {
            movement.set(dir, state);
            return;
        } 
        switch (key) {
        case (CharKey(c)): {
            if (c == 'r') 
                for (b in boxes) b.reset();
            if (c == 'q')
                exit = true;
        }
        default: {}
        }
    }

    public function handle(e:Event):Void {
        switch (e) {
        case KbEvent(key, state): handleKb(key, state);
        default: {}
        }
    }

    public function conclude():Null<DemoSelect> {
        if (exit) return HomeSelect;
        return null;
    }
}
