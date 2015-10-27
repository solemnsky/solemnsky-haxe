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
            SetColor(0, 0, 0, 255)
            , DrawCircle(Util.vectorFromNape(ball.position), 40)
            , SetColor(0, 255, 0, 255)
        ];

        for (box in boxes) {
            scene.children.push(rotatedBox(
                Util.vectorFromNape(box.position)
                , 12
                , box.rotation
            ));
        }

        return scene;
    }

    override function handle(e:Event):Void {
        // empty
    }
}
