package control.demo;

import control.Control;

/**
 * control.demo.AllDemo:
 * Top-level demo that lets the user run the other three demos in this
 * directory at their leisure. Demonstrates the use of control.Combinator.
 */

/**
 * Selection screen, results in the demo that the user wants to run.
 */
class SelectionScreen implements Control<Control<Noise>> {
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

/**
 * Instead of implementing a Control<Noise> class, this constructs one with
 * control.Combinator.when(), fancy eh.
 */
class AllDemo {
    public static function run
}