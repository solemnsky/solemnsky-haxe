package solemnsky.core;

import util.Pack;
import haxe.io.Bytes;
import control.Event;
import control.Frame;

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
     * The static data you need to know about the game that
     * is not transmitted in snapshots.
     */
    public function loadMeta(meta:M):Void;
    public function describeMeta():M;
    public function createMeta():M;

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
    
    public function render(f:Frame, sig:Int, delta:Float):Void;
    public function isAlive(sig:Int):Bool;

    /*************************************************************************/
    /* network sync
    /*************************************************************************/

    public function clientAssert(sig:Int):S; 
    public function serverAssert():S; 

    public function clientMerge(sig:Int, snap:S):Void; 
    public function serverMerge(sig:Int, snap:S):Void;

    /*************************************************************************/
    /* network packing
    /*************************************************************************/

    public var snapRules:PackRule<S>;
}
