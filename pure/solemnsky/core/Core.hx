package solemnsky.core;

import haxe.io.Bytes;
import control.Event;
import control.Scene;

/**
 * solemnsky.core.Core: 
 * The Core interface, representing the core logic an implementation of our
 * game can hold; decoupled from interface code and backend code.
 */

interface Core {
    /*************************************************************************/
    /* initialisation and modeId
    /*************************************************************************/

    public function init(initData:Dynamic):Void;
    public var modeId:String;

    /*************************************************************************/
    /* simulation
    /*   These functions are called a whole lot, but don't generally give
    /*   the user much information.
    /*************************************************************************/

    public function handle(id:Int, event:Event):Void; 
    public function tick(delta:Float):Array<String>;

    /*************************************************************************/
    /* rendering
    /*   The purpose of these functions is to give the user information.
    /*************************************************************************/
    
    public function render(delta:Float):Scene;
    public function listPlayers():Array<String>;

    /*************************************************************************/
    /* discrete networking
    /*   Networking functions, only called now and then (when players join
    /*   and quit for example).
    /*************************************************************************/

    public function join(name:String):Int;
    public function quit(id:Int):Void;
    public function getInitData():Dynamic;

    /*************************************************************************/
    /* continuous networking
    /*   Networking functions, called all the time to synchronize state and
    /*   user input.
    /*************************************************************************/

    public function clientAssert(id:Int):Dynamic; // assert as a client
    public function serverAssert():Dynamic; // assert as a server

    public function clientMerge(id:Int, snap:Dynamic):Void; 
                                                    // merge as a client
    public function serverMerge(id:Int, snap:Dynamic):Void;
                           // merge as a server, recieving from a client

    /*************************************************************************/
    /* network compression
    /*   Used to compress and decompress data as it goes over a 
    /*   bandwidth-limited network.
    /*************************************************************************/

    public function serialiseSnap(snap:Dynamic):Bytes;
    public function readSnap(bytes:Bytes):Dynamic;
}
