package solemnsky.core;

import haxe.io.Bytes;
import control.Event;
import control.Scene;

/**
 * solemnsky.core.Core: 
 * The Core interface, representing the core logic an implementation of our
 * game can hold; decoupled from interface code and backend code.
 */

typedef PlayerSig {
   name:String, id:Int
}

interface Core<E,S> {
    public var modeId:String;

    /*************************************************************************/
    /* environment
    /*************************************************************************/

    public function loadEnv(environment:E);
    public function describeEnv():E;

    /*************************************************************************/
    /* players
    /*************************************************************************/

    public function join(sig:Int, name:String);
    public function quit(sig:Int);
    public function listPlayers():Array<PlayerSig>;
    public function loadPlayers(Array<PlayerSig>);

    /*************************************************************************/
    /* user input
    /*************************************************************************/

    public function handle(id:Int, event:Event):Void; 

    /*************************************************************************/
    /* simulation
    /*************************************************************************/

    public function tick(delta:Float):Array<String>;

    /*************************************************************************/
    /* rendering
    /*************************************************************************/
    
    public function render(delta:Float):Scene;

    /*************************************************************************/
    /* network sync
    /*************************************************************************/

    public function clientAssert(id:Int):S; // assert as a client
    public function serverAssert():S; // assert as a server

    public function clientMerge(id:Int, snap:S):Void; 
                                                    // merge as a client
    public function serverMerge(id:Int, snap:S):Void;
                           // merge as a server, recieving from a client

    /*************************************************************************/
    /* network compression
    /*************************************************************************/

    public function serialiseSnap(snap:S):Bytes;
    public function readSnap(bytes:Bytes):S;
}
