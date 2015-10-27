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

class PhysDemo extends EmptyControl {
    private var space:Space;
    private var ball:Body;
    private var boxes:Array<Body>;

    private var movement = 
        {left: false, right: false, up: false, down: false};

    public function new() {
        super();

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

    override function tick(delta:Float):Void {
        space.step(delta / 1000);
        if (movement.left) 
            ball.velocity = ball.velocity.add(
                Vec2.weak(-1 * delta, 0));

        if (movement.right)
            ball.velocity = ball.velocity.add(
                Vec2.weak(1 * delta, 0));

        if (movement.up) 
            ball.velocity = ball.velocity.add(
                Vec2.weak(0, -1 * delta));

        if (movement.down) 
            ball.velocity = ball.velocity.add(
                Vec2.weak(0, -1 * delta));
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

    override function render(delta:Float):Scene {
        var scene = new Scene();

        scene.prims = [
            DrawCircle(Util.vectorFromNape(ball.position), 40)
            , SetColor(0, 255, 0, 255)
        ];

        if (movement.left || movement.right 
            || movement.up || movement.down) {
            scene.prims.unshift(SetColor(50, 0, 0, 255));
        } else {
            scene.prims.unshift(SetColor(0, 0, 0, 255));
        }

        for (box in boxes) {
            scene.children.push(rotatedBox(
                Util.vectorFromNape(box.position)
                , 12
                , box.rotation
            ));
        }

        return scene;
    }

    private function handleKb(key:Key, state):Void {
        switch (key) {
        case CharKey(char): { 
            if (char == 'j') movement.left = state;
            if (char == 'l') movement.right = state;
            if (char == 'i') movement.up = state;
            if (char == 'k') movement.down = state;
        }
        default: { }
        }
    }

    override function handle(e:Event):Void {
        switch (e) {
        case KbEvent(key, state): handleKb(key, state);
        default: {}
        }
    }
}
