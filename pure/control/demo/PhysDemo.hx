package control.demo;

import control.Control;
import solemnsky.Util;
import control.Event;
import control.Scene;
import math.Vector;
import math.Transform;

import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Circle;
import nape.shape.Polygon;
import nape.space.Space;
import nape.util.BitmapDebug;
import nape.util.Debug;

/**
 * solemnsky.control.demo.PhysDemo:
 * Demo control object demonstrating physics through Nape.
 */

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

class PhysDemo extends EmptyControl {
    /**
     * game state
     */
    private static inline var maxCoolDown:Float = 100;
    private var cooldown: Map<Direction,Float>;
    private var movement: Map<Direction,Bool>;
    private var projectiles: Array<Projectile>;

    /**
     * physics
     */
    private var space:Space;
    private var ball:Body;
    private var boxes:Array<Body>;

    /*********************************************************************/
    /* constructor
    /*********************************************************************/

    public function new() {
        super();

        /*********************************************************************/
        /* game state
        /*********************************************************************/

        cooldown = [
            UpDir => 0, DownDir => 0
            , LeftDir => 0, RightDir => 0];
        movement = [
            UpDir => false, DownDir => false
            , LeftDir => false, RightDir => false ];
        projectiles = [];
        // yeah haxe lets you do this

        /*********************************************************************/
        /* set up nape space
        /*********************************************************************/

        var gravity = Vec2.weak(0, 600);
        space = new Space(gravity);

        var w = 1600;
        var h = 900;

        var floor = new Body(BodyType.STATIC);
        floor.shapes.add(
            new Polygon(Polygon.rect(50, (h - 50), (w - 50), 1)));
        floor.space = space;

        boxes = [];
        for (i in 0...16) {
            var box = new Body(BodyType.DYNAMIC);
            box.shapes.add(new Polygon(Polygon.box(24, 24)));
            box.position.setxy((w / 2), ((h - 50) - 25 * (i + 0.5)));
            box.space = space;
            boxes.push(box);
        }

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

    override function tick(delta:Float):Void {
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
                    var vel = vecFromDir(d).mult(10);

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
    }

    /*************************************************************************/
    /* render
    /*************************************************************************/

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
        var scene = new Scene();
        scene.prims = [
            SetColor(0, 0, 0, 255)
            , SetFont("Arial", 14) 
            , DrawText(new Vector(0, 0), CenterText, '' + boxes.length)
        ];
        scene.trans = Transform.translation(800, 20)
            .multmat(Transform.scale(3, 3));
        return scene;

    }

    override function render(delta:Float):Scene {
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
                Util.vectorFromNape(box.position)
                , 12
                , box.rotation
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
        }
    }

    override function handle(e:Event):Void {
        switch (e) {
        case KbEvent(key, state): handleKb(key, state);
        default: {}
        }
    }
}
