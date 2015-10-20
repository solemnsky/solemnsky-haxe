package control;

import math.Vector;
import math.Transform;

/**
 * solemnsky.control.Control:
 * Interface to the world; represents an application, abstracted from its
 * implemtnation. Features:
 * - Networking
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
     * Application quits when this returns true.
     */
    public function hasEnded():Bool;
}

/**
 * Smallest possible implementation of Control
 */
class EmptyControl implements Control {
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

    public function hasEnded():Bool {
        return false;
    }
}
