package solemnsky.engine;

import control.Event;
import control.Scene;
import flash.display.Graphics;
import haxe.io.Bytes;
import util.Transform;
import util.Vector;
import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Polygon;
import nape.space.Space;

/**
 * solemnsky.engine.Engine:
 * The vanilla core game logic for our cute multiplayer plane game.
 */

class Engine {
    /*************************************************************************/
    /* variables
    /*************************************************************************/

    private var tuning:Tuning;

    private var players:Map<Int, Player>;
    private var environment:Environment;
    private var time:Float;

    private var space:Space;

    public function new() {
        tuning = new Tuning();

        players = []
        environment = null;

        players = new Map();

        space = new Space(new Vec2(0, 1));

        var floor = new Body(BodyType.STATIC);
        floor.shapes.add(
            new Polygon(Polygon.rect(50, (900 - 50), (1600 - 100), 1))
        );
        floor.space = space;
        floor.setShapeMaterials(nape.phys.Material.rubber());
    }    

    /*************************************************************************/
    /* INTERNAL: managing the environment
    /*************************************************************************/

    public function loadEnvironment(environment:Environment) {
        this.environment = environment;

    }

    /*************************************************************************/
    /* INTERNAL: managing players
    /*************************************************************************/

    /**
     * Given a transformation function and an id to target, execute
     * the transformation on the player with that id, potentially
     * failing and returning false.
     */
    private function doForPlayer(f:Player->Void, id:Int):Bool {
        var player = players.get(id);
        if (player != null) {
            f(player);
            return true;                    
        }
        return false;
    }

    /**
     * Function used to allocate new player IDs.
     * There are several ways of doing this, this is the more obvious one.
     */
    private function takeUnique(taken:Iterator<Int>):Int {
        var last:Int = -1;
        for (id in taken) 
            last = id;
        return last + 1;
    }

    /*************************************************************************/
    /* simulation
    /*************************************************************************/

    private function mutateByEvent(player:Player, event:Event):Void {

    public function tick(delta:Float):Array<String> {
        for (player in players.iterator()) {
            player.writeToBody();
        }
        space.step(delta / 100); // centiseconds wtf
        for (player in players.iterator()) {
            player.readFromBody();
            player.tick(delta);
        }
        return [];
    }

    public function hasEnded():Bool {
        return false;
    }

    /*************************************************************************/
    /* discrete networking
    /*************************************************************************/

    public function join(name:String):Int {
        var newId = takeUnique(players.keys());
        var newPlayer = new Player(
            tuning
            , this
            , name
            , new Vector(500, 500)
            , 0
        );

        players.set(newId, newPlayer);
        newPlayer.body.space = space;
        return newId;
    }

    public function quit(id:Int):Void {
        players.remove(id);
    }

    public function getInitData():Dynamic {
        return null;
    }

    /*************************************************************************/
    /* continuous networking
    /* this is completely unimplemented for the moment
    /*************************************************************************/

    public function clientAssert(id:Int):Dynamic {
        return null; 
    }
    public function serverAssert():Dynamic {
        return null;
    }

    public function clientMerge(id:Int, snap:Dynamic):Void {

    }
    public function serverMerge(id:Int, snap:Dynamic):Void {

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
}
