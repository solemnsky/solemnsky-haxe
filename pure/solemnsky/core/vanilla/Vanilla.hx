package solemnsky.core.vanilla;

import solemnsky.core.CoreControl;
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

    private var engine:MyEngine;

    public function new() {
        engine = new Engine(makeEngineTuning());
    }

    /*************************************************************************/
    /* metadata
    /*************************************************************************/

    public function loadMeta(meta:VanillaMeta) {
    }

    public function describeMeta():VanillaMeta {
        return null;
    }

    /*************************************************************************/
    /* players
    /*************************************************************************/

    public function join(sig:Int, name:String) {
    }

    public function quit(sig:Int) {
    }

    public function loadPlayers(a:Array<{sig:Int, name:String}>) {
    }

    public function listPlayers():Array<{sig:Int, name:String}> {
    }

    /************************************************************/
    /* user input
    /************************************************************/

    public function handle(sig:Int, control:CoreControl) {

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