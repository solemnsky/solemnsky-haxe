package solemnsky.tutorial.control;

import control.Control;
import control.Scene;
import solemnsky.tutorial.TutBackground;
import solemnsky.tutorial.TutGraphics;

/**
 * solemnsky.tutorial.control.Phase1:
 * First phase of the tutorial.
 */

class Phase1 implements Control {
    private var cont:Continuity;

    public function new(cont:Continuity):Void {
        this.cont = cont;
    }

    public function init(_):Void {}

    public function tick(delta:Float):Void {
        engine.tick(delta);
    }

    public function render(delta:Float):Scene {
        TutGraphics.render(cont);
    }

    public function profiling(data:Profile):Void {
        trace(data.print());
    }

    public function handle(e:Event):Void {}

    public function conclude():Null<Noise> {
        return null;
    }
}
