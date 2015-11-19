package solemnsky.core;

import haxe.io.Bytes;
import control.Event;
import control.Scene;

/**
 * solemnsky.core.Core: 
 * The Core interface, representing the core logic an implementation of our
 * game can hold; decoupled from interface code and backend code.
 */

interface Core<M,S> {
    // M: metadata type
    // S: snapshot type

    public var modeId:String;

    /*************************************************************************/
    /* metadata 
    /*************************************************************************/

    /**
     * 'metadata' is the data that is produced from a discontinuous 
     * network delta; it contains everything a client that was
     * not previously involved in the game needs to know about it
     */
    public function loadMeta(meta:M):Void;
    public function describeMeta():M;

    /*************************************************************************/
    /* players
    /*************************************************************************/

    /**
     * The concept of players that join and rejoin the game at will
     * a constant, so it is abstracted out of the Core implementation.
     * 'sig' is a unique id for the player and 'name' is the player's 
     * name.
     */
    public function addPlayer(sig:Int, name:String):Void;
    public function removePlayer(sig:Int):Void;

    /*************************************************************************/
    /* user input
    /*************************************************************************/

    public function handle(sig:Int, control:CoreControl):Void; 

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

    public function clientAssert(sig:Int):S; 
    public function serverAssert():S; 

    public function clientMerge(sig:Int, snap:S):Void; 
    public function serverMerge(sig:Int, snap:S):Void;

    /*************************************************************************/
    /* network compression
    /*************************************************************************/

    public function serialiseSnap(snap:S):Bytes;
    public function readSnap(bytes:Bytes):S;
}
