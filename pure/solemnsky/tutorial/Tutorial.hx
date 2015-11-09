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
        engine.loadEnvironment(new Environment());

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

    private static function renderVector(vec:Vector):Scene {
        var scene = new Scene();

        scene.prims = [
            SetColor(0, 255, 0, 255)
            , DrawRect(new Vector(-2, 20), new Vector(2, 20))
        ];

        scene.trans = Transform.translation(800, 700)
            .multmat(Transform.rotation(vec.angle()))
            .multmat(Transform.scale(vec.length(), vec.length()));

        return scene;
    }

    private static function renderPlayer(
        player:Player<PlayerData>
    ): Scene {
        var scene = new Scene();

        if (player.plane != null) {
            var state:PlaneState = player.plane.state;

            scene.prims = [
                // SetColor(255, 0, 0, 255)
                // , DrawCircle(Vector.zero, 15)
                SetColor(0, 255, 0, 255)
                , DrawRect(new Vector(-15, -2), new Vector(15, 2))
            ];

            scene.trans = Transform.translation(state.pos.x, state.pos.y)
                .multmat(Transform.rotation(state.rot));
        }

        return scene;
    }

    private static function renderPlayerDebug(
        player:Player<PlayerData>
    ): Scene {
        var scene = new Scene();

        if (player.plane != null) {
            var state:PlaneState = player.plane.state;

            var debugVec = function(vec) 
                scene.children.push(renderVector(vec));

            debugVec(state.leftoverVel);
        }

        return scene;
    }

    public function render(delta:Float):Scene {
        var scene = new Scene();

        scene.children.push(renderPlayer(player));
        scene.children.push(renderPlayerDebug(player));

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
