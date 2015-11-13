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
        background = new TutBackground(3200, 1800);

        engine = new Engine(myEngineMod());
        engine.loadEnvironment(new Environment(3200, 1800));

        var planeModConstruct = function (plane) return
            new TutPlaneMod(plane);
        player = engine.addPlayer(0);
        player.spawn(planeModConstruct, new Vector(1600, 900), 0);
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

    private static function renderProp(prop:MyProp):Scene {
        var scene = new Scene();

        var custom = prop.custom;

        scene.prims = [
            SetColor(255, 255, 255, 255)
            , DrawCircle(new Vector(0, 0), 
                custom.lifeFactor() * 10)
        ];

        var pos = custom.pos;
        scene.trans = Transform.translation(pos.x, pos.y);

        return scene;
    }

    public function renderGame(delta:Float):Scene {
        var scene = new Scene();

        scene.children.push(background.render(delta));
        scene.children.push(Graphics.renderDebugPlayer(player));
        // scene.children.push(Graphics.renderPlayer(player));

        for (prop in engine.props.iterator()) {
            scene.children.push(renderProp(prop));
        }

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

    public function myEngineMod():EngineMod {
        var mod = new EngineMod();
        mod.debugTrace = function(str){trace('engine log: '+str);};
        return mod;
    }
}

class Tutorial {
    public static function run():Control<Noise> {
        return new TutorialMain();
    }
}
