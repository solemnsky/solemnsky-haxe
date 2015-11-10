package solemnsky.engine;

import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Polygon;
import nape.space.Space;
import solemnsky.engine.mod.EngineMod;

/**
 * solemnsky.engine.Engine:
 * The vanilla core game logic for our cute multiplane plane game.
 */

class Engine<D> {
    /*************************************************************************/
    /* variables
    /*************************************************************************/

    public var mod:EngineMod;

    public var players:Map<Int, Player<D>>;
    public var environment:Null<Environment>;
    public var space:Null<Space>;

    public function new(mod:EngineMod) {
        this.mod = mod;

        players = new Map();
        environment = null;
        space = null;

        debugTrace('engine instantiated');
    }

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

        var dims = 
            [ {x:0, y:900, w:1600, h:1}
            , {x:0, y:0, w:1600, h:1} 
            , {x:1600, y:0, w:1, h:900}
            , {x:0, y:0, w:1, h:900} ];
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

    public function addPlayer(sig:Int, data:D):Player<D> {
        var player = new Player(this, data);
        players.set(sig, player);
        return player;
    }

    /*************************************************************************/
    /* simulation
    /*************************************************************************/

    public function tick(delta:Float):Array<String> {
        if (space != null) {
            for (player in players.iterator()) {
                player.writeToNape();
            }
            space.step(delta / 1000); 
            for (player in players.iterator()) {
                player.readFromNape();
                player.tick(delta);
            }
        }
        return [];
    }

    public function tickGraphics(delta:Float) {
        for (player in players.iterator()) {
            player.tickGraphics(delta);
        }
    }

    public function hasEnded():Bool {
        return false;
    }
}
