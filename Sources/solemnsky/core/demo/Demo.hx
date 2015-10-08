package solemnsky.core;

import kha.math.Vector2;

/**
 * solemnsky.core.Demo:
 * Demo core object, with basic functions.
 */

/**
 * Data related to a player.
 */
private typedef Player = {
    var name:String;
    var position:Vector2;
}

class Demo {
    /*************************************************************************/
    /* variables and constructor
    /*************************************************************************/

    private var players:Array<String> = [];

    public function new() {

    }

    /*************************************************************************/
    /* initialisation and modeId
    /*************************************************************************/

    public function init() {
        // empty
    }

    public var modeId = 'demo';

    /*************************************************************************/
    /* top-level helper functions
    /*************************************************************************/

    /**
     * Given a transformation function and an id to target, execute
     * the transformation on the player with that id, potentially
     * failing and returning false.
     */
    private function doForPlayer(f:Player->Player, id:Int):Bool {
        var success = false;
        var currId = 0;
        for (player in players) {
            currId++;
            if (currId == id) {
                f(player);
                success = true;
                break;
            }
        }
        return success;
    }

    /*************************************************************************/
    /* simulation
    /*************************************************************************/

    /**
     * Get the transformation that should be applied to a player
     * that accepts a certain event.
     */
    private function getEventAction(event:Event):Player->Player {
        return function(player:Player) {
            switch (event) {
                case MouseMove(x, y): {
                    player.position = new Vector2(x, y);
                }
            }
            return player;
        }
    }

    public function acceptEvent(id:Int, event:Event):Void {
        if !(doForPlayer(getEventAction(event), id)) {
            trace('no such player ' + id + ' to accept event!');
        }
    }

    public function tick(delta:Float):Array<String> {
        return [];
    }

    public function render(delta:Float):Scene {
        return new Scene();
    }

    public function listPlayers():Array<String> {
        var names:Array<String> = [];
        for (player in players) {
            names.push(player.name);
        }
        return names;
    }

    public function hasEnded():Bool {
        return false;
    }

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

 