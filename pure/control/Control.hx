package control;

import util.Vector;
import util.Transform;

/**
 * solemnsky.control.Control:
 * Interface to the world from our pure abstracted code.
 * Features:
 * - Networking (optionally implemented)
 * - Realtime logic
 * - Realtime rendering (not implemented in server targets)
 * - Capturing profiling data
 * - Handling user events (not implemented in server targets)
 * - Exiting (optionally implemented)
 */

/*****************************************************************************/
/* Control object definition                                                 */
/*****************************************************************************/

/**
 * Represents an all-encompassing UI that runs and eventually may return a 
 * value of type T. The semantics of this return value isn't always useful,
 * for example in the context of the top-level control object; in that case
 * its existance is merely a signal to the application to stop. However, when
 * used in 
 */
interface Control<T> {
    public function init(network:Network):Void;

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
     * Potentially conclude the control by returning a T instead of a null.
     */
    public function conclude():Null<T>;
}

/**
 * Smallest possible implementation of Control
 */
class EmptyControl implements Control<Noise> {
    public function new():Void {}

    public function init(_):Void {}

    public function tick(delta:Float):Void {}

    public function render(delta:Float):Scene {
        return new Scene();
    }

    public function profiling(data:Profile):Void {
        trace(data.print());
    }

    public function handle(e:Event):Void {}

    public function conclude():Null<Noise> {
        return null;
    }
}
