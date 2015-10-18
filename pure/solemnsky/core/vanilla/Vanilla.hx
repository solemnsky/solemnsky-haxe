package solemnsky.core.vanilla;

import haxe.io.Bytes;
import math.Vector;
import math.Transform;
import nape.geom.Vec2;
import nape.space.Broadphase;
import nape.space.Space;
import solemnsky.control.Event;
import solemnsky.control.Scene;

/**
 * solemnsky.core.vanilla.Vanilla:
 * The vanilla core game logic for our multiplayer plane game.
 */

class Vanilla implements Core {
    /*************************************************************************/
    /* variables
    /*************************************************************************/

    private var players:Map<Int, Player>;
    private var space:Space;
    private var tuning:Tuning;

    /*************************************************************************/
    /* initialisation and modeId
    /*************************************************************************/

    public function new() {
        tuning = new Tuning();
    }    

    public function init(initData:InitData):Void {
        players = new Map();

        // initialise actually mutable objects
        var broad = Broadphase.DYNAMIC_AABB_TREE;
        space = new Space(new Vec2(0, 0), broad);
    }

    public var modeId:String;

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
        var control:Player.ControlEvent = switch (event) {
            case CharKey(char, state): {
                switch (char){
                    case 'i': ControlUp(state);
                    case 'j': ControlLeft(state);
                    case 'l': ControlRight(state);
                    case 'k': ControlDown(state);
                    default: {null;}
                }
            }
            default: {null;}
        }
        if (control != null)
            player.handle(control);
    }

    public function handle(id:Int, event:Event):Void {
        function mutate(player:Player):Void {
            mutateByEvent(player, event);
        }

        if (! doForPlayer(mutate, id)) 
            trace('no such player ' + id + ' to accept event!');
    }

    public function tick(delta:Float):Array<String> {
        for (player in players.iterator()) {
            player.writeToBody();
        }
        space.step(delta);
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
    /* rendering
    /*************************************************************************/
    
    public function render(delta:Float):Scene {
        var scene = new Scene();
        scene.prims = [
            SetColor(0, 0, 0, 255)
            , SetFont("Arial", 14)
            , DrawText(new Vector(0, 0), LeftText
                , "Graphics go here!")
        ];
        scene.trans = Transform.scale(5, 5);
        return scene;
    }

    public function listPlayers():Array<String> {
        var names = [];
        for (player in players.iterator()) {
            names.push(player.state.name);
        }
        return names;
    }


    /*************************************************************************/
    /* discrete networking
    /*************************************************************************/

    public function join(name:String):Int {
        var newId = takeUnique(players.keys());
        players.set(
            newId, new Player(
                tuning
                , this
                , name
                , new Vector(0, 0)
                , 0)
        );
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