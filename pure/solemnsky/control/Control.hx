package solemnsky.control;

import math.Vector;
import math.Transform;

/**
 * solemnsky.control.Control:
 * Interface to the world; represents an application, abstracted from its
 * implemtnation. Features:
 * - Realtime logic
 * - Rendering 
 * - Handling profiling data
 * - Handling user events
 * - Quitting
 */

/*****************************************************************************/
/* Control object definition                                                 */
/*****************************************************************************/

interface Control {
    /**
     * Tick internal simulation forward, given a delta; this ticks
     * at a fixed step, irregardless of the rate at rendering happens.
     * All deltas in this interface are in milliseconds.
     */
    public function tick(delta:Float):Void;

    /**
     * Return a scene with a new render of the scene, given the delta
     * since the last render. Only called when necessary, should not do
     * critical logic or simulation.
     */
    public function render(delta:Float):Scene;


    /**
     * Accept some profiling data.
     */
    public function profiling(data:Profile):Void;

     /**
     * Accept an event.
     */
     public function handle(e:Event):Void;
         

    /**
     * Application quits when this returns true.
     */
    public function hasEnded():Bool;
}

/*****************************************************************************/
/* Demo control objects
/*****************************************************************************/

/**
 * Does as little as possible.
 */
class EmptyControl implements Control {
    public function new():Void {}

    public function tick(delta:Float):Void {}

    public function render(delta:Float):Scene {
        return new Scene();
    }

    public function profiling(data:Profile):Void {}

    public function handle(e:Event):Void {}

    public function hasEnded():Bool {
        return false;
    }
}

/**
 * A small graphics test.
 */
class DemoControl implements Control {
    private var time:Float = 0;
    private var x:Float = 0;
    private var y:Float = 0;

    public function new():Void {}

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
            , DrawRect(new Vector(0, 0), new Vector(1600, 900))
            , DrawRect(new Vector(0, 0), new Vector(-1600, -900))
            , SetColor(0, 0, 0, 200)
            , DrawRect(new Vector(0, 0), new Vector(-1600, 900))
            , DrawRect(new Vector(0, 0), new Vector(1600, -900))
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
            // , DrawRect(new Vector(0, 0), new Vector(1600, 900))
        ];

        return scene;
    }

    public function handle(e:Event):Void {
        switch (e) {
            case MouseMove(x, y): {
                this.x = x; this.y = y;
            }
            default: { }
        }
    }

    public function profiling(data:Profile):Void {
        trace(data.print());
    }

    public function hasEnded():Bool {
        return false;
    }
}
