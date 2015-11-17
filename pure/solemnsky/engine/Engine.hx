package solemnsky.engine;

import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Polygon;
import nape.space.Space;
import solemnsky.engine.mod.EngineMod;
import solemnsky.engine.mod.PropMod;
import util.Util;
import util.Util;

/**
 * solemnsky.engine.Engine:
 * The vanilla core game logic for our cute multiplane plane game.
 */

class Engine<D,P> {
    // D: player custom container
    // P: prop custom container

    /*************************************************************************/
    /* constructor
    /*************************************************************************/
    public var mod:EngineMod<D,P>;

    public var players:Map<Int, Player<D,P>>;
    public var props:Map<Int, Prop<D,P>>;
    public var environment:Null<Environment>;
    public var space:Null<Space>;

    public function new(mod:EngineMod) {
        this.mod = mod;

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

    public function addPlayer(sig:Int):Player<D,P> {
        var modConstruct = function(plane) return
            mod.planeMod(type, plane);

        var player = new Player(this, sig, modConstruct);

        players.set(sig, player);
        return player;
    }

    public function removePlayer(sig:Int) {
        players.remove(sig);
    }

    /*************************************************************************/
    /* props
    /*************************************************************************/

    public function spawnProp(
        blame:Int, modType:Int, custom:P
    ):Prop<D,P> {
        var id = Util.allocNewId(props.keys());
        var modConstruct = function(prop) return
            mod.propMod(type, prop);

        var prop = new Prop(this, id, blame, modConstruct);
        props.set(id, prop);
        return prop;
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

    public function tickGraphics(delta:Float) {
        for (player in players.iterator()) {
            player.tickGraphics(delta);
        }
    }
}
