package solemnsky.logic;

import haxe.io.Bytes;
import solemnsky.control.Event;
import solemnsky.control.Scene;

/**
 * solemnsky.core.Core: 
 * The Core interface, representing the core logic an implementation of our
 * game can hold; decoupled from interface code and backend code.
 */

interface Core {
    /*************************************************************************/
    /* initialisation and modeId
    /*************************************************************************/

    public function init():Void;
    public var modeId:String;

    /*************************************************************************/
    /* simulation
    /*************************************************************************/

    public function acceptEvent(id:Int, event:Event):Void; 
    public function tick(delta:Float):Array<String>;

    public function listPlayers():Array<String>;
    public function hasEnded():Bool;

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
