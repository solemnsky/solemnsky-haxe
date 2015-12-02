package solemnsky.engine;

import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Polygon;
import nape.space.Space;
import solemnsky.engine.mod.EngineMod;
import solemnsky.engine.mod.PropMod;
import solemnsky.engine.mod.PlayerMod;
import util.Util;
import solemnsky.engine.Snap;

/**
 * solemnsky.engine.Engine:
 * Core game engine.
 * W: custom world object
 * P: custom plane object
 */

class Engine<W,P> {
    /*************************************************************************/
    /* state and constructor
    /*************************************************************************/

    public var mod:EngineMod<W,P>;
    public var world:W;

    public var players:Map<Int, Player<W,P>>;
    public var environment:Null<Environment>;

    public var space:Null<Space>;

    public function new(mod:EngineMod<W,P>) {
        this.mod = mod;
        world = mod.initWorld();

        players = new Map();
        props = new Map();
        environment = null;
        space = null;

        debugTrace('engine instantiated');
    }

    /*************************************************************************/
    /* misc helpers
    /*************************************************************************/

    private inline function debugTrace(str:String) {
        mod.debugTrace(str);
    }

    /*************************************************************************/
    /* environment
    /*************************************************************************/

    public function loadEnvironment(environment:Environment) {
        this.environment = environment;
        loadSpaceFromEnvironment(environment);
        debugTrace('loaded environment');
    }

    private inline function loadSpaceFromEnvironment(
        environment:Environment
    ) {
        space = new Space(new Vec2(0, 0));

        var edim = environment.dimensions;

        var dims = 
            [ {x:0, y:edim.y, w:edim.x, h:1}
            , {x:0, y:0, w:edim.x, h:1} 
            , {x:edim.x, y:0, w:1, h:edim.y}
            , {x:0, y:0, w:1, h:edim.y} ];
        for (dim in dims) {
            var floor = new Body(BodyType.STATIC);
            floor.shapes.add(new Polygon(Polygon.rect(
                dim.x, dim.y, dim.w, dim.h
            )));
            floor.space = space;
        }
    }

    /*************************************************************************/
    /* players
    /*************************************************************************/

    public function addPlayer(
        sig:Int 
    ):Player<W,P> {
        var player = 
            new Player(this, sig, custom);
        players.set(sig, player);
        return player;
    }

    public function removePlayer(sig:Int) {
        players.remove(sig);
    }

    /*************************************************************************/
    /* simulation
    /*************************************************************************/

    public function tick(delta:Float) {
        if (space != null) {
            space.step(delta / 1000); 
            for (player in players.iterator())
                player.tick(delta);
            for (prop in props.iterator()) 
                prop.tick(delta);
        }
    }

    /*************************************************************************/
    /* snap
    /*************************************************************************/

    private var packer = new SnapPack();

    /**
     * Take a snapshot of state and props of the players
     * whose signatures satisfy the predicate.
     */
    public function getSnap(isSig:Array<Int>):Dynamic {
        var playerSnaps:Array<PlayerSnap> = [];
        var propSnaps:Array<PropSnap> = [];

        for (player in players) if (isSig(player.sig))
                playerSnaps.push(player.getSnap());

        for (prop in props) if (isSig(prop.owner))
            propSnaps.push(prop.getSnap());

        var snap = 
            { playerSnaps: playerSnaps
            , propSnaps: propSnaps };

        return packer.pack(snap);
    }

    /**
     * Load a snapshot, modifying the states and props of the
     * players whose signatures satisfy the predicate.
     */
    public function loadSnap(isSig:Int->Bool, packed:Dynamic) {
        var snap = packer.unpack(packed);

        for (snap in snap.propSnaps) {
            var prop = props.get(snap.id);
            if (prop != null)
                if (isSig(prop.owner)) prop.loadSnap(snap);
        }

        for (snap in snap.playerSnaps) {
            if (isSig(snap.sig)) {
                var player = players.get(snap.sig);
                if (player != null) player.loadSnap(snap);
            }
        }
    }

    /*************************************************************************/
    /* game logic helpers
    /*************************************************************************/

    public function applyGravity(body:Body) {
        body.force = new Vec2(0, mod.gravity * body.mass);
    }

    public function applyZeroGravity(body:Body) {
        body.force = new Vec2(0, 0);
    }
}
