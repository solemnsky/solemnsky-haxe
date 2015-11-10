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
    private var engine:Engine<PlayerData>;
    private var player:Player<PlayerData>;

    public function new() {
        engine = new Engine(myEngineMod());
        engine.loadEnvironment(new Environment(1600, 900));

        player = engine.addPlayer(0, {name:"offline player"});
        player.spawn(myPlaneMod(), new Vector(0, 0), 0);
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
        engine.tickGraphics(delta);

        var scene = new Scene();

        scene.prims = [
            SetColor(20, 20, 50, 255)
            , DrawRect(Vector.zero, new Vector(1600, 900))
        ];
        scene.children.push(Graphics.renderPlayer(player));

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
