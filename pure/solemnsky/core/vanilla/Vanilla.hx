package solemnsky.core.vanilla;

import haxe.io.Bytes;
import control.Scene;
import util.Vector;
import util.Transform;
import solemnsky.engine.Engine;
import solemnsky.core.vanilla.Synonyms;
import solemnsky.core.CoreControl;
import solemnsky.core.Core;
import solemnsky.engine.Graphics;
import solemnsky.engine.Environment;

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
        engine = new Engine(new VanillaEngineMod());
    }

    /*************************************************************************/
    /* metadata
    /*************************************************************************/

    public function loadMeta(meta:VanillaMeta) {
        engine.loadEnvironment(new Environment(1600, 900));
    }

    public function describeMeta():VanillaMeta {
        return new VanillaMeta;
    }

    public function 

    /*************************************************************************/
    /* players
    /*************************************************************************/

    public function addPlayer(sig:Int, name:String) {
        var player = 
            engine.addPlayer(sig, new VanillaPlayer(name));
        player.simulating = true;
    }

    public function removePlayer(sig:Int) {
        engine.removePlayer(sig);
    }

    /************************************************************/
    /* user input
    /************************************************************/

    public function handle(sig:Int, control:CoreControl) {
        var player = engine.players.get(sig);
        if (player != null) {
            if (Type.enumEq(control, CCSpawn)) 
                player.spawn(new Vector(500, 500), 0);
            player.custom.handle(control);
        }
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

    public function renderGame(sig):Scene {
        var scene = new Scene();

        for (player in engine.players.iterator()) {
            scene.children.push(Graphics.renderPlayer(player));
        }

        var player = engine.players.get(sig);
        if (player != null)
            scene.trans = Graphics.getPlayerView(player);

        return scene;         
    }

    public function render(sig:Int, delta:Float):Scene {
        engine.tickGraphics(delta);

        var scene = new Scene();

        scene.children = [
            // renderOverlay()
            renderGame(sig)
        ];

        return scene;
    }

    public function isAlive(sig:Int):Bool {
        var player = engine.players.get(sig);
        if (player != null)
            return (player.plane != null);

        return false;
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
}