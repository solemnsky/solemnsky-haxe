package solemnsky.engine;

import control.Event;
import control.Scene;
import haxe.io.Bytes;
import util.Transform;
import util.Vector;
import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Polygon;
import nape.space.Space;
import solemnsky.engine.tune.EngineTuning;
import util.Util;

/**
 * solemnsky.engine.Engine:
 * The vanilla core game logic for our cute multiplane plane game.
 */

class Player<D> {
    public var data:D;

    public var plane:Null<Plane>;

    public function new(data:D) {
        this.data = data;
        plane = null;
    }

    public function kill() {
        this.plane = null;
    }

    public function spawn() {
        
    }
}

class Engine<D> {
    /*************************************************************************/
    /* variables
    /*************************************************************************/

    public var tuning:EngineTuning;

    public var players:Map<Int, Player<D>>;
    public var environment:Null<Environment>;
    public var space:Null<Space>;

    public function new(tuning:EngineTuning) {
        this.tuning = tuning;

        planes = new Map();
        environment = null;
        space = null;

        debugTrace('engine instantiated');
    }

    private inline function debugTrace(str:String) {
        tuning.debugTrace(str);
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
        space = new Space(new Vec2(0, 1));

        var floor = new Body(BodyType.STATIC);
        floor.shapes.add(
            new Polygon(Polygon.rect(50, (900 - 50), (1600 - 100), 1))
        );
        floor.space = space;
    }

    /*************************************************************************/
    /* players
    /*************************************************************************/

    public function addPlayer(sig:Int, data:D) {
        players.set(sig, new Player(data));
    }

    /*************************************************************************/
    /* simulation
    /*************************************************************************/

    public function tick(delta:Float):Array<String> {
        if (space != null) {
            for (player in players.iterator()) {
                player.plane.writeToBody();
            }
            space.step(delta / 1000); 
            for (plane in planes.iterator()) {
                plane.readFromBody();
                plane.tick(delta);
            }
        }
        return [];
    }

    public function hasEnded():Bool {
        return false;
    }
}
