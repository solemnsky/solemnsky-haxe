package solemnsky.tutorial.control;

import control.Control;
import control.Event;
import control.Profile;
import control.Scene;
import solemnsky.tutorial.engine.Synonyms;
import solemnsky.tutorial.TutGraphics;

/**
 * solemnsky.tutorial.control.Phase1:
 * First phase of the tutorial: the player learns to turn the plane.
 */

class Phase1 implements Control<TutStep> {
    private var cont:Continuity;

    // utility
    private var engine:MyEngine;
    private var player:MyPlayer;

    public function new(cont:Continuity) {
        this.cont = cont;

        engine = cont.engine;
        player = cont.player;

        player.simulating = true;
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
        return TutGraphics.renderGame(cont, delta);
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
                    player.plane.custom.pewpew(kstate);
            }
            default: {}
            }
        }
    }

    public function conclude():Null<TutStep> {
        return null;
    }
}
