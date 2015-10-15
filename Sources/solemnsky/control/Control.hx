package solemnsky.control;

import kha.Framebuffer;
import kha.graphics2.Graphics;

import kha.math.FastVector2;
import kha.math.FastMatrix3;

/**
 * solemnsky.control.Control:
 * Interface that lets an object do realtime logic, accept events,
 * draw to the screen, and potentially quit. One level above whatever API /
 * toolchains we're using.
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
 * Makes a circle move around the screen, prints profiling information.
 */
class DemoControl implements Control {
    private var time:Float = 0;
    private var x:Float = 0;
    private var y:Float = 0;

    public function new():Void {}

    public function tick(delta:Float):Void {
        time += delta;
    }

    private function renderElem(centerPos:FastVector2):Scene {
        var scene = new Scene();
        var pos = new FastVector2(0, 0);
        var offset = new FastVector2(27, 0);

        scene.prims = 
            [ SetColor(0, 255, 0, 255)
            , DrawCircle(pos, 20)
            , DrawCircle(pos.add(offset), 7)
            ];
        scene.trans = FastMatrix3.identity()
            .multmat(FastMatrix3.translation(centerPos.x, centerPos.y))
            .multmat(FastMatrix3.rotation(time / 1000))
            ;
        return scene;
    }

    public function renderFront(delta:Float):Scene {
        var scene = new Scene();

        var offset  = new FastVector2(40, -40);
        var offset2 = new FastVector2(40, 40);

        var pos = new FastVector2(0, 0);
        for (i in 1 ... 20) {
            scene.children.push(renderElem(pos));
            pos = pos.add(offset);
        }

        pos = new FastVector2(0, 0);
        for (i in 1 ... 20) {
            scene.children.push(renderElem(pos));
            pos = pos.add(offset2);
        }

        pos = new FastVector2(0, 0);
        for (i in 1 ... 20) {
            scene.children.push(renderElem(pos));
            pos = pos.sub(offset2);
        }

        pos = new FastVector2(0, 0);
        for (i in 1 ... 20) {
            scene.children.push(renderElem(pos));
            pos = pos.sub(offset);
        }

        scene.prims = [
            SetColor(0, 0, 0, 255)
            , DrawRect(new FastVector2(0, 0), new FastVector2(1600, 900))
            , DrawRect(new FastVector2(0, 0), new FastVector2(-1600, -900))
        ];

        scene.trans = FastMatrix3.identity()
            .multmat(FastMatrix3.translation(x, y))
            .multmat(FastMatrix3.rotation(-time / 1200))
            ;
        return scene;
    }

    public function render(delta:Float):Scene {
        var scene = new Scene();

        scene.children = [renderFront(delta)];

        scene.prims = [
            SetColor(0, 0, 255, 255)
            , DrawRect(new FastVector2(0, 0), new FastVector2(1600, 900))
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
        // trace(
        //     'logic / render / logic sleep / render sleep: '
        //     +l+' / '+r+' / '+ls+' / '+rs);
        trace(data.print());
    }

    public function hasEnded():Bool {
        return false;
    }
}
