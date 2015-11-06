package solemnsky.core.vanilla;

import solemnsky.engine.Tuning;
import solemnsky.engine.Engine;
import solemnsky.engine.Environment;
import control.Event;
import control.Scene;

/**
 * solemnsky.core.vanilla.Vanilla:
 * Vanilla core object.
 */

class Vanilla {

    /*************************************************************************/
    /* constructor
    /*************************************************************************/

    private var engine:Engine;
    private var players:Array<Player>;

    public function makeTuning():Tuning {
        var tuning = new Tuning();
        // operations on tuning
        return tuning;
    }

    public function makeEnvironment():Environment {
        var environment = new Environment();   
        // operations on environment
        return environment;
    }

    public function new() {
        engine = new Engine(makeTuning(), function(_){});
        engine.loadEnvironment(makeEnvironment());
    }

    /*************************************************************************/
    /* initialisation and modeId
    /*************************************************************************/

    public function init(initData) {
        // nothing
    }

    public var modeId = "vanilla alpha";

    /*************************************************************************/
    /* simulation
    /*************************************************************************/

    public function handle(id:Int, event:Event):Void {

    }

    public function tick(delta:Float):Array<String> {
        engine.tick();
        return [];
    }

    /************************************************************/
    /* rendering
    /************************************************************/

    /**
     * Overlay making it very clear that this is a WIP.
     */
    private function renderOverlay():Scene {
        var scene = new Scene();
        scene.prims = [
            SetColor(0, 0, 0, 255)
            , SetFont("Arial", 14)
            , DrawText(new Vector(0, 0), CenterText
                , "Development demo: enjoy at your own risk.")
        ];
        scene.trans = Transform.translation(800, 5)
            .multmat(Transform.scale(3, 3));
        return scene;
    }

    public function render(delta:Float):Scene {
        var scene = new Scene();

        scene.children = [
            renderOverlay()
        ];
        for(player in players){
            scene.children.push(Graphics.renderPlayer(player));
        }

        return scene;
    }

    public function listPlayers():Array<String> {
        return [];
    }

    /************************************************************/
    /* discrete networking
    /************************************************************/

    public function join(name:String):Int {

    }

}