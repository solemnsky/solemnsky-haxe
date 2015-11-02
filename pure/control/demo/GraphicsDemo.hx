package control.demo;

import control.Control;
import control.Event;
import control.Scene;
import util.Vector;
import util.Transform;

/**
 * solemnsky.control.demo.GraphicsDemo:
 * Demo control object demonstrating graphics.
 */

class GraphicsDemo implements Control<DemoSelect> {
                                      // from AllDemo.hx
    private var time:Float = 0;
    private var x:Float = 0;
    private var y:Float = 0;
    private var exit:Bool = false;

    public function new():Void {}

    public function init(_):Void {}

    public function tick(delta:Float):Void {
        time += delta;
    }

    private function renderElem(centerPos:Vector):Scene {
        var scene = new Scene();
        var pos = new Vector(0, 0);
        var offset = new Vector(27, 0);

        scene.prims = 
            [ SetColor(0, 255, 0, 255)
            , DrawCircle(pos, 20)
            , DrawCircle(pos.add(offset), 7)
            ];
        scene.trans = Transform.identity()
            .multmat(Transform.translation(centerPos.x, centerPos.y))
            .multmat(Transform.rotation(time / 1000))
            ;
        return scene;
    }

    public function renderFront(delta:Float):Scene {
        var scene = new Scene();

        var offset  = new Vector(40, -40);
        var offset2 = new Vector(40, 40);

        var pos = new Vector(0, 0);
        for (i in 1 ... 20) {
            scene.children.push(renderElem(pos));
            pos = pos.add(offset);
        }

        pos = new Vector(0, 0);
        for (i in 1 ... 20) {
            scene.children.push(renderElem(pos));
            pos = pos.add(offset2);
        }

        pos = new Vector(0, 0);
        for (i in 1 ... 20) {
            scene.children.push(renderElem(pos));
            pos = pos.sub(offset2);
        }

        pos = new Vector(0, 0);
        for (i in 1 ... 20) {
            scene.children.push(renderElem(pos));
            pos = pos.sub(offset);
        }

        scene.prims = [
            SetColor(0, 0, 0, 100)
            , DrawRect(new Vector(0, 0), new Vector(200, 200))
            , DrawRect(new Vector(0, 0), new Vector(-200, -200))
            , SetColor(0, 0, 0, 200)
            , DrawRect(new Vector(0, 0), new Vector(200, -200))
            , DrawRect(new Vector(0, 0), new Vector(-200, 200))
        ];

        scene.trans = Transform.identity()
            .multmat(Transform.translation(x, y))
            .multmat(Transform.rotation(-time / 1200))
            ;
        return scene;
    }

    public function render(delta:Float):Scene {
        var scene = new Scene();

        scene.children = [renderFront(delta)];

        scene.prims = [
            SetColor(0, 0, 255, 255)
            , DrawImage(new Vector(0, 0), "title")
            , SetColor(0, 0, 0, 255)
            , SetFont("Arial", 14)
            , DrawText(new Vector(500, 500), LeftText, "this text isn't part of the image")
            // , DrawRect(new Vector(0, 0), new Vector(1600, 900))
        ];

        return scene;
    }

    public function handle(e:Event):Void {
        switch (e) {
            case MouseEvent(x, y): {
                this.x = x; this.y = y;
            }
            case KbEvent(key, state): {
                if (Type.enumEq(key, CharKey('q')))
                    exit = true;
            }
            default: { }
        }
    }

    public function profiling(data:Profile):Void {
        trace(data.print());
    }

    public function conclude():Null<DemoSelect> {
        if (exit) return HomeSelect;
        return null;
    }
}
