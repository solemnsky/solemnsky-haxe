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

class PhysDemo extends EmptyControl {
    /**
     * game state
     */
    private static inline var maxCoolDown:Float = 300;
    private var cooldown: Map<Direction,Float>;
    private var movement: Map<Direction,Bool>;

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

                    var box = new Body(BodyType.DYNAMIC);
                    box.shapes.add(new Polygon(Polygon.box(24, 24)));
                    var pos = vecFromDir(d)
                        .mult(-50)
                        .add(Util.vectorFromNape(ball.position));
                    box.position.setxy(pos.x, pos.y);
                    box.space = space;
                    boxes.push(box);
                }
            }
        }
    }

    /*************************************************************************/
    /* render
    /*************************************************************************/

    private static inline function rotatedBox(
        pos:Vector
        , width:Float
        , alpha:Float
    ):Scene {
        var scene = new Scene();
        scene.prims = [
            DrawRect(new Vector(-width, -width), new Vector(width, width))];
        scene.trans = Transform.translation(pos.x, pos.y)
            .multmat(Transform.rotation(alpha));
        return scene;
    }

    private function controlling():Bool {
        for (d in movement.keys()) 
            if (movement.get(d)) return true;
        return false;
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
            ));
        }

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
