package solemnsky.engine;

import solemnsky.engine.mod.PropMod;
import util.Vector;

/**
 * solemnsky.engine.Prop:
 * Object for a thing a player can create (missle, bullet, laser,
 * whatever else you want).
 * Quite heavily extensible, as should be expected; some things
 * are uniform across all props however.
 */

class Prop<A,P> {
    /*************************************************************************/
    /* state and constructor
    /*************************************************************************/

    public var id:Int;
    public var blame:Int;

    public var engine:Engine<A,P>;
    
    public var mod:PropMod<A,P>;
    public var custom:P;
    
    public function new(
        engine:Engine<A,P>, id:Int, blame:Int
        , custom:P
    ) {
        this.engine = engine;
        this.id = id;
        this.blame = blame;
        this.custom = custom;
        
        mod = engine.mod.propMod(this);
    } 

    /*************************************************************************/
    /* simulation
    /*************************************************************************/

    public function tick(delta:Float) {
        mod.onTick(delta);
    }
    
    public function delete() {
        mod.onDelete();
        engine.props.remove(id);
    }

    /*************************************************************************/
    /* snaps
    /*************************************************************************/

    public function getSnap():PlayerSnap {

    }    

    public function loadSnap(snap:PlayerSnap) {
        
    }
}