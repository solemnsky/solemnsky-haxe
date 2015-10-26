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
            new Polygon(Polygon.rect(50, (h - 50), (w - 100), 1)));
        floor.space = space;

        ball = new Body(BodyType.DYNAMIC);
        ball.shapes.add(new Circle(50));
        ball.position.setxy(50, h / 2);
        ball.angularVel = 10;
        ball.space = space;
    }   

    override function tick(delta:Float):Void {
        space.step(delta / 1000);
    }

    override function render(delta:Float):Scene {
        var scene = new Scene();

        scene.prims = [
            SetColor(0, 0, 0, 255)
            , DrawCircle(Util.vectorFromNape(ball.position), 10)
        ];

        return scene;
    }

    override function handle(e:Event):Void {
        // empty
    }
}
