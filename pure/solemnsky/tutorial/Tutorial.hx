package solemnsky.tutorial;

import control.Control;
import control.Event;
import control.Noise;
import control.Profile;
import control.Scene;
import solemnsky.engine.Engine;
import solemnsky.engine.Environment;
import solemnsky.engine.Graphics;
import solemnsky.engine.Plane;
import solemnsky.engine.Player;
import solemnsky.engine.Prop;
import solemnsky.engine.mod.EngineMod;
import solemnsky.engine.mod.PlaneMod;
import solemnsky.engine.mod.PropMod;
import util.Vector;
import util.Transform;
import solemnsky.tutorial.engine.TutProp;
import solemnsky.tutorial.engine.TutPlane;
import solemnsky.tutorial.engine.Synonyms;

/**
 * Tutorial for solemnsky, using merely the engine.
 */

/****************************************************************/
/* TutorialMain
/****************************************************************/

class TutorialMain implements Control<Noise> {
    private var background:TutBackground;

    private var engine:MyEngine;
    private var player:MyPlayer;

    public function new() {
    }

    public function init(_) {}

    /***************************************************************/
    /* control interface
    /***************************************************************/

    public function tick(delta:Float):Void {
        engine.tick(delta);
    }

    /***************************************************************/
    /* rendering
    /***************************************************************/

    public function render(delta:Float):Scene {
        return TutGraphics.renderGame(
            background, player, engine, delta);
    }

    public function profiling(profile:Profile):Void {
        trace(profile.print());
    }

    public function handle(e:Event):Void {
        if (player.plane != null) {
            var plane = player.plane;
            var state = plane.state;

            switch (e) {
            case KbEvent(key, kstate): {
                var isKey = function(k) return Type.enumEq(key, k);

                // movement keys
                if (isKey(CharKey('i'))) 
                    state.movement.forward = kstate;
                if (isKey(CharKey('j'))) 
                    state.movement.left = kstate;
                if (isKey(CharKey('l'))) 
                    state.movement.right = kstate;
                if (isKey(CharKey('k'))) 
                    state.movement.backward = kstate;

                // movement keys
                if (isKey(CharKey('f')))
                    player.plane.mod.custom.pewpew(kstate);
            }
            default: {}
            }
        }
    }

    public function conclude():Null<Noise> {
        return null;
    }
}

class Tutorial {
    public static function run():Control<Noise> {
        return new TutorialMain();
    }
}
