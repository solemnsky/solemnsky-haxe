package solemnsky.tutorial;

import util.Vector;
import util.Transform;
import control.Control;
import control.Event;
import control.Noise;
import control.Profile;
import control.Scene;
import solemnsky.engine.Engine;
import solemnsky.engine.Environment;
import solemnsky.engine.Graphics;
import solemnsky.engine.Player;
import solemnsky.engine.Plane;
import solemnsky.engine.mod.EngineMod;
import solemnsky.engine.mod.PlaneMod;

/**
 * Tutorial for solemnsky, using merely the engine.
 */

typedef PlayerData = {
    name:String
}

class TutorialMain implements Control<Noise> {
    private var background:TutorialBackground;

    private var engine:Engine<PlayerData>;
    private var player:Player<PlayerData>;

    public function new() {
        background = new TutorialBackground(3200, 1800);

        engine = new Engine(myEngineMod());
        engine.loadEnvironment(new Environment(3200, 1800));

        player = engine.addPlayer(0, {name:"offline player"});
        player.spawn(myPlaneMod(), new Vector(1600, 900), 0);
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

    public function renderGame(delta:Float):Scene {
        var scene = new Scene();

        scene.children.push(background.render(delta));
        scene.children.push(Graphics.renderDebugPlayer(player));
        // scene.children.push(Graphics.renderPlayer(player));

        scene.trans = Graphics.getPlayerView(player);

        return scene;
    }

    public function render(delta:Float):Scene {
        engine.tickGraphics(delta);
        var scene = new Scene();

        scene.children.push(renderGame(delta));

        return scene;
    }

    public function profiling(profile:Profile):Void {
        trace(profile.print());
    }

    public function handle(e:Event):Void {
        if (player.plane != null) {
            var state:PlaneState = player.plane.state;
            // there is a plane to control

            switch (e) {
            case KbEvent(key, kstate): {
                var isKey = function(k) return Type.enumEq(key, k);

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

    /***************************************************************/
    /* tuning
    /***************************************************************/

    public function myEngineMod():EngineMod {
        var tuning = new EngineMod();
        tuning.debugTrace = function(str){trace('engine log: '+str);};
        return tuning;
    }

    public function myPlaneMod():PlaneMod {
        var tuning = new PlaneMod();
        return tuning;
    }
}

class Tutorial {
    public static function run():Control<Noise> {
        return new TutorialMain();
    }
}
