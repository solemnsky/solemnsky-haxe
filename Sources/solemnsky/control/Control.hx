package solemnsky.control;

import kha.Framebuffer;
import kha.graphics2.Graphics;

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
    public function profiling(l:String, r:String, s:String):Void;

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

    public function profiling(_:String, _:String, _:String):Void {}

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

    public function new():Void {
    }

    public function tick(delta:Float):Void {
        time += delta;
    }

    public function render(delta:Float):Scene {
        return new Scene();
    }

    public function handle(e:Event):Void {
        switch (e) {
            case MouseMove(x, y): {
                this.x = x; this.y = y;
            }
            default: { }
        }
    }

    public function profiling(l:String, r:String, s:String):Void {
        trace("l / r / s: "+l+" / "+r+" / "+s);
    }

    public function hasEnded():Bool {
        return false;
    }
}
