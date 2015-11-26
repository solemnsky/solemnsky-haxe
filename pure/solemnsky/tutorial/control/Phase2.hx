package solemnsky.tutorial.control;

import control.Frame;
import control.Profile;
import control.Event;
import solemnsky.tutorial.engine.Synonyms;
import solemnsky.tutorial.TutGraphics;
import control.Control;

/**
 * solemnsky.tutorial.control.Phase2:
 * Time for some fun with guns.
 */

class Phase2 implements Control<TutStep> {
    private var cont:Continuity;
    private var engine:MyEngine;
    private var player:MyPlayer;

    public function new(cont:Continuity) {
        this.cont = cont;

        engine = cont.engine;
        player = cont.player;

        player.simulating = true;
    }

    public function init(_) {}

    public function tick(delta:Float):Void {
        engine.tick(delta);
    }

    /***************************************************************/
    /* rendering
    /***************************************************************/

    public function render(f:Frame, delta:Float) {
        TutGraphics.renderGame(f
            , cont
            , function(f) {}
            , delta 
        );

        TutGraphics.renderTutText(f, 
            "('f' and 'd' fire weapons)"
        );
    }

    public function profiling(profile:Profile):Void {
        trace(profile.print());
    }

    /***************************************************************/
    /* event handling
    /***************************************************************/

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

                if (isKey(CharKey('f')))
                    player.custom.primary(kstate);

                if (isKey(CharKey('d')))
                    player.custom.secondary(kstate);
            }
            default: {}
            }
        }
    }

    public function conclude():Null<TutStep> {
        return null;
    }
}