package solemnsky.tutorial.control;

import control.Control;
import control.Event;
import control.Noise;
import control.Profile;
import control.Scene;

/**
 * solemnsky.tutorial.control.StartScreen:
 * The beginning.
 */

class StartScreen implements Control<TutStep> {
    private var pressed:Bool; // if the user wants to go on

    private var cont:Continuity;

    public function new():Void {
        cont = new Continuity();
    }

    public function init(_):Void {}

    public function tick(delta:Float):Void {}

    public function render(delta:Float):Scene {
        return cont.background.render(delta);
    }

    public function profiling(data:Profile):Void {
        trace(data.print());
    }

    public function handle(e:Event):Void {
        switch (e) {
        case KbEvent(_, _): pressed = true;
        default: {}
        }
    }

    public function conclude():Null<TutStep> {
        if (pressed) return Phase1Step(cont);
        return null;
    }
}
