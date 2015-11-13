package solemnsky.tutorial.control;

import control.Control;
import control.Scene;

/**
 * solemnsky.tutorial.control.StartScreen:
 * The beginning.
 */

class StartScreen implements Control<Noise> {
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
