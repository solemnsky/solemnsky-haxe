package solemnsky.control;

import kha.Framebuffer;
import kha.graphics2.Graphics;

import solemnsky.math.Vec2;
import solemnsky.math.Mat3;

/*****************************************************************************/
/* Control object definition                                                 */
/*****************************************************************************/

/**
 * Interface that lets an object do realtime logic, accept events,
 * draw to the screen, and potentially quit.
 */
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
    public function profiling(l:String, r:String, ls:String, rs:String):Void;

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

    public function profiling(_:String, _:String, _:String, _:String):Void {}

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
    private var x = 0;
    private var y = 0;
    private var scene:Scene;

    public function new():Void {
        scene = new Scene();
    }

    public function tick(delta:Float):Void {
        time += delta;
    }

    public function render(delta:Float):Scene {
        var offset  = new Vec2(40, 40);
        var offset2 = new Vec2(-40, 40);

        var pos = new Vec2(x, y);
        scene.prims = [];
        for (i in 1 ... 25) {
            scene.prims.push(DrawCircle(pos, 20));
            pos = pos.add(offset);
        }
        pos = new Vec2(x, y);
        for (i in 1 ... 25) {
            scene.prims.push(DrawCircle(pos, 20));
            pos = pos.add(offset2);
        }
        pos = new Vec2(x, y);
        for (i in 1 ... 25) {
            scene.prims.push(DrawCircle(pos, 20));
            pos = pos.sub(offset2);
        }
        pos = new Vec2(x, y);
        for (i in 1 ... 25) {
            scene.prims.push(DrawCircle(pos, 20));
            pos = pos.sub(offset);
        }
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

    public function profiling(l:String, r:String, ls:String, rs:String):Void {
        trace(
            'logic / render / logic sleep / render sleep: '
            +l+' / '+r+' / '+ls+' / '+rs);
    }

    public function hasEnded():Bool {
        return false;
    }
}
