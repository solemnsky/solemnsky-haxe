package solemnsky.core.vanilla;

import haxe.io.Bytes;
import control.Frame;
import util.Vector;
import util.Transform;
import solemnsky.engine.Engine;
import solemnsky.core.vanilla.Synonyms;
import solemnsky.core.CoreControl;
import solemnsky.core.Core;
import solemnsky.engine.Graphics;
import solemnsky.engine.Environment;
import util.Pack;

/**
 * solemnsky.core.vanilla.Vanilla:
 * Vanilla core object.
 */

class Vanilla implements Core<VanillaMeta, VanillaSnap> {

    public var modeId = "vanilla alpha";

    /*************************************************************************/
    /* state and constructor
    /*************************************************************************/

    private var meta:VanillaMeta;
    private var engine:MyEngine;
    private var score:Int = 0;

    public function new() {
        engine = new Engine(new VanillaEngineMod());
        mkSnapRules();
    }

    /*************************************************************************/
    /* metadata
    /*************************************************************************/

    public function loadMeta(meta:VanillaMeta) {
        this.meta = meta;
        engine.loadEnvironment(new Environment(meta.dim.x, meta.dim.y));
    }

    public function describeMeta():VanillaMeta {
        return meta;
    }

    public function createMeta():VanillaMeta {
        return new VanillaMeta(new Vector(1600, 900)); 
    }

    /************************************************************************/
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
        trace('ticking');
        engine.tick(delta);
        return [];
    }

    /************************************************************/
    /* rendering
    /************************************************************/

    /**
     * Overlay making it very clear that this is a WIP.
     */
    private function renderOverlay(f:Frame) {
        f.pushTransform(Transform.translation(800, 5)
            .multmat(Transform.scale(3, 3))
        );

        f.color(0, 0, 0, 255);
        f.font("Arial", 14);
        f.text(new Vector(0, 0), CenterText
            , "Development demo: enjoy at your own risk.");

        f.popTransform();
    }

    public function renderGame(f:Frame, sig:Int) {
        var player = engine.players.get(sig);

        if (player != null)
            f.pushTransform(Graphics.getPlayerView(player));

        for (player in engine.players.iterator()) {
            Graphics.renderPlayer(f, player.rep);
        }

        if (player != null)
            f.popTransform();
    }

    public function render(f:Frame, sig:Int, delta:Float) {
        renderGame(f, sig);
        renderOverlay(f);
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
        var snap = new VanillaSnap();

        snap.engineSnap = engine.getSnap();
        snap.score = score;

        return snap;
    }

    public function serverAssert():VanillaSnap {
        var snap = new VanillaSnap();

        snap.engineSnap = engine.getSnap();
        snap.score = score;

        return snap;
    }

    public function clientMerge(sig:Int, snap:VanillaSnap) {
        engine.loadSnap(snap.engineSnap);
        score = snap.score;
    }

    public function serverMerge(sig:Int, snap:VanillaSnap) {
        engine.loadSnap(snap.engineSnap);
        score = snap.score;
    }

    /*************************************************************************/
    /* network compression
    /*************************************************************************/

    public var snapRules:PackRule<VanillaSnap>;

    private function mkSnapRules() {
        snapRules = 
            Pack.object(
                [ {name:"engineSnap", rule:Pack.identity()}
                , {name:"score", rule:Pack.identity()}
                ]);
    }

}