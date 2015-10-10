package solemnsky.core.vanilla;

import nape.space.Space;
import nape.geom.Vector2;

/**
 * solemnsky.core.vanilla.Vanilla:
 * The vanilla core game logic for our multiplayer plane game.
 */

class Vanilla {
    /*************************************************************************/
    /* variables
    /*************************************************************************/

    private var players:Map<Int, Player>;
    private var space:Space;


    /*************************************************************************/
    /* initialisation and modeId
    /*************************************************************************/

    public function init():Void {
        space = new Space();
        space.gravity = new Vector2
    }

    public var modeId:String;

    /*************************************************************************/
    /* top-level helper functions
    /*************************************************************************/

    /**
     * Given a transformation function and an id to target, execute
     * the transformation on the player with that id, potentially
     * failing and returning false.
     */
    private function doForPlayer(f:Player->Player, id:Int):Bool {
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

    private function mutateByEvent(player:Player, event:Event):Player {
        switch (event) {
            case CharKey(char, state): {
                switch (char){
                    case 'i': ControlUp(state);
                    case 'j': ControlLeft(state);
                    case 'l': ControlRight(state);
                    case 'k': ControlDown(state);
                    default: {}
                }
            }
            default: {}
        }
        return player;
    }

    public function handle(id:Int, event:Event):Void {
        function mutate(player) {
            return mutateByEvent(player, event);
        }

        if (! doForPlayer(mutate, id)) 
            trace('no such player ' + id + ' to accept event!');
    }

    public function tick(delta:Float):Array<String> {
        for (player in players.iterator()) {
            player.tick();
        }
        return [];
    }

    public function listPlayers():Array<String> {
        var names = [];
        for (player in players.iterator()) {
            names.push(player.getTangible().name);
        }
        return names;
    }

    public function hasEnded():Bool {
        return false;
    }

    /*************************************************************************/
    /* rendering
    /*************************************************************************/
    
    public function render(delta:Float):Scene {
        var scene = new Scene();
        scene.prims = [
            SetFont("Arial", 12)
            , DrawText(new kha.math.FastVector2(0, 0), CenterText
                "I need to implement this ._.")
        ] 
        return scene;
    }

    /*************************************************************************/
    /* discrete networking
    /*************************************************************************/

    public function join(name:String):Int {
        var newId = takeUnique(players.keys());
        players.set(newId, Player(this, name, new Vector2(0, 0)));
        return newId;
    }

    public function quit(id:Int):Void {
        players.remove(id);
    }

    /*************************************************************************/
    /* continuous networking
    /*************************************************************************/

    public function clientAssert(id:Int):Dynamic; // assert as a client
    public function serverAssert():Dynamic; // assert as a server

    public function clientMerge(id:Int, snap:Dynamic):Void; 
                                                    // merge as a client
    public function serverMerge(id:Int, snap:Dynamic):Void;
                           // merge as a server, recieving from a client

    /*************************************************************************/
    /* network compression
    /*************************************************************************/

    public function serialiseSnap(snap:Dynamic):Bytes;
    public function readSnap(bytes:Bytes):Dynamic;
}