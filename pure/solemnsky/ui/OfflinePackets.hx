package solemnsky.ui;

import control.Control;
import control.Event;
import control.Noise;
import control.Profile;
import control.Scene;
import solemnsky.tutorial.TutGraphics;
import solemnsky.tutorial.control.Continuity;
import solemnsky.tutorial.engine.Synonyms;
import solemnsky.tutorial.engine.TutPlayer;
import util.Vector;
import util.Rename;

/**
 * solemnsky.ui.OfflinePackets:
 * Testing out solemnsky.engine.Serial without networking.
 */

class OfflinePackets implements Control<Noise> {
    private var engine:MyEngine;
    private var player:MyPlayer;

    private var serialRules:RenameRules;

    public function new() {
        this.cont = new Continuity();

        player = cont.player;
        engine = cont.engine;

        var planeModConstruct = function (plane) return
            new TutPlaneMod(plane);
        player.spawn(
            planeModConstruct, new Vector(1600, 900), 0);
        player.simulating = true;

        serialRules = Rename.makeRules(
            [ "pos", "rot", "vel", "rotvel" ]);
    }

    public function init(_) {}

    /***************************************************************/
    /* simulation logic
    /***************************************************************/

    public function tick(delta:Float):Void {
        engine.tick(delta);

        var short = Rename.shorten(serialRules, player.plane.state);
        trace(short);
        var long = Rename.unshorten(serialRules, short);
        trace(long);
    }

    /***************************************************************/
    /* rendering
    /***************************************************************/

    public function render(delta:Float):Scene {
        var scene = new Scene();

        scene.children.push(TutGraphics.renderGame
            ( cont
            , new Scene()
            , delta )
        );

        return scene;
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
            }
            default: {}
            }
        }
    }

    public function conclude():Null<Noise> {
        return null;
    }
}
