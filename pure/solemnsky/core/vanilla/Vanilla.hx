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

class Vanilla implements Core<VanillaMeta, VanillaSnap> {

    public var modeId = "vanilla alpha";

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

        players = new Map();
    }

    /*************************************************************************/
    /* metadata
    /*************************************************************************/

    public function loadMeta(meta:VanillaMeta) {
    }

    public function describeMeta():VanillaMeta {
        return new VanillaMeta();
    }

    /*************************************************************************/
    /* players
    /*************************************************************************/

    public function join(sig:Int, name:String) {
        players.set(sig, new Player(name));
    }

    public function quit(sig:Int) {
        players.remove(sig);
    }

    public function loadPlayers(a:Array<{sig:Int, name:String}>) {
        for (i in a) {
            players.set(i.sig, new Player(i.name));
        }
    }

    public function listPlayers():Array<{sig:Int, name:String}> {
        var arr = [];
        for (i in players.keys()) {
            arr.push({sig:i, name:players.get(i).name});
        }
        return arr;
    }

    /************************************************************/
    /* user input
    /************************************************************/

    public function handle(sig:Int, event:Event) {

    }

    /************************************************************/
    /* simulation
    /************************************************************/

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

    /************************************************************/
    /* network sync
    /************************************************************/

    public function clientAssert(sig:Int):VanillaSnap {
        return new VanillaSnap();
    }
    public function serverAssert():VanillaSnap {
        return new VanillaSnap();
    }

    public function clientMerge(sig:Int, snap:VanillaSnap) {

    }
    public function serverMerge(sig:Int, snap:VanillaSnap) {
        // empty
    }

    /*************************************************************************/
    /* network compression
    /*************************************************************************/

    public function serialiseSnap(snap:VanillaSnap):Bytes {
        return null;
    }

    public function readSnap(bytes:Bytes):VanillaSnap {
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