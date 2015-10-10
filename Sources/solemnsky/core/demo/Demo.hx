package solemnsky.core.demo;

import haxe.io.Bytes;
import kha.FontStyle;
import kha.Loader;
import kha.math.FastMatrix3;
import kha.math.FastVector2;
import solemnsky.control.Event;
import solemnsky.control.Scene;

/**
 * solemnsky.core.Demo:
 * Demo core object, with basic functions.
 */

/**
 * Data related to a player.
 */
private typedef Player = {
    var name:String;
    var position:FastVector2;
}

class Demo implements Core {
    /*************************************************************************/
    /* variables and constructor
    /*************************************************************************/

    private var players:Map<Int, Player> = new Map();

    public function new() {
        // empty
    }

    /*************************************************************************/
    /* initialisation and modeId
    /*************************************************************************/

    public function init() {
        initGraphics();
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

    private static function initialPlayer(name:String) {
        return { name: name, position: new FastVector2(0, 0) };
    }

    /*************************************************************************/
    /* simulation
    /*************************************************************************/

    private function mutateByEvent(player:Player, event:Event):Player {
        switch (event) {
            case MouseMove(x, y): {
                player.position = new FastVector2(x, y);
            }
        }
        return player;
    }

    public function acceptEvent(id:Int, event:Event):Void {
        function mutate(player) {
            return mutateByEvent(player, event);
        }

        if (! doForPlayer(mutate, id)) 
            trace('no such player ' + id + ' to accept event!');
    }

    public function tick(delta:Float):Array<String> {
        return [];
    }

    public function listPlayers():Array<String> {
        var names:Array<String> = [];
        for (player in players.iterator()) {
            names.push(player.name);
        }
        return names;
    }

    public function hasEnded():Bool {
        return false;
    }

    /*************************************************************************/
    /* rendering
    /*************************************************************************/

    private var playerSprite:Scene;

    private function initGraphics() {
        playerSprite = new Scene();
        playerSprite.prims = // medium red circle
            [ SetColor(0, 0, 255, 255)
            , DrawCircle(new FastVector2(0, 0), 20) ];
    }

    private function renderPlayer(player:Player):Scene {
        var pos = player.position;
        var scene = new Scene();
        scene.children = [playerSprite];
        scene.prims = 
            [ SetFont(
                Loader.the.loadFont(
                    "Arial"
                    , new FontStyle(false, false, false)
                    , 14)
                )
            , SetColor(0, 255, 0, 255)
            , DrawText(new FastVector2(0, 20), CenterText, "player") ];
        scene.trans = FastMatrix3.identity()
            .multmat(FastMatrix3.translation(pos.x, pos.y));
        return scene;            
    }

    public function render(delta:Float):Scene {
        var scene = new Scene();

        for (player in players.iterator()) {
            scene.children.push(renderPlayer(player));
        }

        return scene;
    }


    /*************************************************************************/
    /* discrete networking
    /*************************************************************************/

    public function join(name:String):Int {
        var newId = takeUnique(players.keys());
        players.set(newId, initialPlayer(name));
        trace('joining ' + name + ' as id ' + newId);
        return newId;
    }

    public function quit(id:Int):Void {
        players.remove(id);
    }

    /*************************************************************************/
    /* continuous networking
    /*************************************************************************/

    public function clientAssert(id:Int):Dynamic {
        return null; 
    }
    public function serverAssert():Dynamic {
        return null;
    }

    public function clientMerge(id:Int, snap:Dynamic):Void {
        // empty
    }
    public function serverMerge(id:Int, snap:Dynamic):Void {
        // empty
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
