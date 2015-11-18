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

    public var parent:Engine<A,P>;
    
    public var mod:PropMod<A,P>;
    public var custom:P;
    
    public function new(
        parent:Engine<A,P>, id:Int, blame:Int
        , custom:P
    ) {
        this.parent = parent;
        this.id = id;
        this.blame = blame;
        this.custom = custom;
        
        this.mod = parent.mod.(this);
    } 

    /*************************************************************************/
    /* simulation
    /*************************************************************************/

    public function tick(delta:Float) {
        mod.onTick(delta);
    }
    
    public function delete() {
        mod.onDelete();
        parent.props.remove(id);
    }
}