package solemnsky.tutorial.control;

import util.Vector;
import control.Control;
import control.Event;
import control.Noise;
import control.Profile;
import control.Frame;
import util.Transform;
import solemnsky.engine.Graphics;
import solemnsky.tutorial.engine.TutPlayer;

/**
 * solemnsky.tutorial.control.StartScreen:
 * The beginning.
 */

class StartScreen implements Control<TutStep> {
    private var pressed:Bool; // if the user wants to go on
    private static inline var animDur:Float = 1000;
    private var animTime:Float = 0;
    private var animComplete:Bool = false;

    private var cont:Continuity;

    public function new():Void {
        cont = new Continuity();
    }

    public function init(_):Void {}

    public function tick(delta:Float):Void {
        if (pressed && !animComplete)  {
            animTime += delta;
        }
        if (animTime >= animDur) {
            animComplete = true;
            animTime = animDur;
        }
    }

    private function renderPlayerFade(delta:Float, f:Frame) {
        var scene = new Scene();

        if (pressed) {
            scene.children.push(Graphics.renderPlayer(
                cont.player.rep));
            scene.alpha = animTime / animDur;
        }

        return scene;
    }

    public function renderInstructions():Scene {
        var scene = new Scene();
        scene.children.push(TutGraphics.renderTutText(
            "press f to start the tutorial!"));
        scene.alpha = 1 - (animTime / animDur);
        return scene;
    }

    public function renderGame(delta:Float):Scene {
        var scene = new Scene();

        scene.children.push(cont.background.render(delta));
        scene.children.push(renderPlayerFade(delta));
        scene.trans = Graphics.getPlayerView(cont.player);

        return scene;
    }

    public function render(delta:Float):Scene {
        var scene = new Scene();
        scene.children.push(renderGame(delta));
        scene.children.push(renderInstructions());
        return scene;
    }

    public function profiling(data:Profile):Void {
        trace(data.print());
    }

    public function handle(e:Event):Void {
        switch (e) {
        case KbEvent(key, _): {
            if (Type.enumEq(key, CharKey('f'))) {
                pressed = true;
                spawnPlayer();
            }
        }
        default: {}
        }
    }

    private function spawnPlayer() {
        cont.player.spawn(new Vector(1600, 900), 0);
    }

    public function conclude():Null<TutStep> {
        if (animComplete) return Phase1Step(cont);
        return null;
    }
}
