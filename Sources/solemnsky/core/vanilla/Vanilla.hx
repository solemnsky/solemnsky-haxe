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
    /* simulation
    /*************************************************************************/

    public function acceptEvent(id:Int, event:Event):Void {
        
    }
    
    public function tick(delta:Float):Array<String> {
        for (player in players.iterator()) {
            player.tick();
        }
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
    
    public function render(delta:Float):Scene;

    /*************************************************************************/
    /* discrete networking
    /*************************************************************************/

    public function join(name:String):Int;
    public function quit(id:Int):Void;

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