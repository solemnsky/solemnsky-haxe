/*                  ******** core ********                            //
\\ Definition of the core game logic interface.                       \\
//                  ******** core ********                            */
package solemnsky.core;

import haxe.io.Bytes;
import solemnsky.control.Event;
import solemnsky.control.Scene;

interface Core {
    /*************************************************************************/
    /* initialisation and modeId
    /*************************************************************************/

    public function init():Void;
    public var modeId:String;

    /*************************************************************************/
    /* simulation
    /*************************************************************************/

    public function acceptEvent(event:Event):Void;
    public function tick(delta:Float):Void;
    public function render(delta:Float):Scene;

    public function listPlayers():Array<String>;
    public function hasEnded():Bool;

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
