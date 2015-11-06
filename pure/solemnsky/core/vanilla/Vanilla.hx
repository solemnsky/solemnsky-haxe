package solemnsky.core.vanilla;

import control.Event;
import control.Scene;
import haxe.io.Bytes;
import solemnsky.engine.Engine;
import solemnsky.engine.Environment;
import solemnsky.engine.tune.EngineTuning;
import solemnsky.engine.tune.PlaneTuning;
import util.Transform;
import util.Util;
import util.Vector;
import solemnsky.core.Core;

/**
 * solemnsky.core.vanilla.Vanilla:
 * Vanilla core object.
 */

class Vanilla implements Core {
    /*************************************************************************/
    /* constructor
    /*************************************************************************/

    private var engine:Engine;
    private var players:Map<Int, Player>;


    public function makeEnvironment():Environment {
        var environment = new Environment();   
        // operations on environment
        return environment;
    }

    public function new() {
        engine = new Engine(makeEngineTuning());
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
        engine.tick(delta);
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
        // for (player in players) {
        //     scene.children.push(Graphics.renderPlayer(player));
        // }

        return scene;
    }

    public function listPlayers():Array<String> {
        return [];
    }

    /************************************************************/
    /* discrete networking 
    /************************************************************/

    public function join(name:String):Int {
        var id = Util.allocNewId(players.keys());
        var player = new Player(name);
        players.set(id, player);
        return id;

    }

    public function quit(id:Int) {
        players.remove(id);
    }

    public function getInitData():Dynamic {
        return null;
    }

    /*************************************************************************/
    /* continuous networking
    /*************************************************************************/

    public function clientAssert(id:Int):Dynamic {
        return null; 
    }
    public function serverAssert():Dynamic {
        return null;
    }

    public function clientMerge(id:Int, snap:Dynamic):Void {
        // empty
    }
    public function serverMerge(id:Int, snap:Dynamic):Void {
        // empty
    }

    /*************************************************************************/
    /* network compression
    /*************************************************************************/

    public function serialiseSnap(snap:Dynamic):Bytes {
        return null;
    }

    public function readSnap(bytes:Bytes):Dynamic {
        return null;
    }

    /*************************************************************************/
    /* tuning
    /*************************************************************************/

    public function makeEngineTuning():EngineTuning {
        var tuning = new EngineTuning();
        tuning.debugTrace = function(str){trace('engine log: '+str);};
        return tuning;
    }

    public function makePlaneTuning():PlaneTuning {
        var tuning = new PlaneTuning();
        return tuning;
    }
}