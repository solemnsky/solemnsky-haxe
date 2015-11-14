package solemnsky.tutorial.control;

import control.Control;
import util.Vector;
import control.Event;
import control.Profile;
import control.Scene;
import solemnsky.tutorial.engine.Synonyms;
import solemnsky.tutorial.TutGraphics;

/**
 * solemnsky.tutorial.control.Phase1:
 * First phase of the tutorial: the plane starts falling
 * and we display some help information.
 */

class Phase1 implements Control<TutStep> {
    private var cont:Continuity;

    private var time:Float = 0;

    // utility
    private var engine:MyEngine;
    private var player:MyPlayer;

    private var boxPos = new Vector(2230, 820);
    private var boxDim = new Vector(30, 30);

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
        time += delta;
    }

    /***************************************************************/
    /* rendering
    /***************************************************************/

    public function renderGameLayer(delta:Float):Scene {
        var scene = new Scene();
        scene.prims = [
            DrawRect(
                boxPos.sub(boxDim.mult(0.5))
                , boxPos.add(boxDim.mult(0.5)))
        ];
        return scene; 
    }

    public function render(delta:Float):Scene {
        var scene = new Scene();

        scene.children.push(TutGraphics.renderGame
            ( cont
            , renderGameLayer(delta)
            , delta )
        );
        scene.children.push(TutGraphics.renderTutText(
            "using the ijkl keys, fly into the white box over the 'y'"
        ));

        return scene;
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
