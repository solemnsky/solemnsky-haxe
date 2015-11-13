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

class Prop<D,P> {
    public var parent:Engine<D,P>;
    public var id:Int;
    public var blame:Int;
    public var mod:PropMod<D,P>;
    
    public var custom(get,set):P;
    public function get_custom() return mod.custom;
    public function set_custom(x:P) {
        mod.custom = x; return mod.custom;
    }

    public function new(
        parent:Engine<D,P>, id:Int, blame:Int
        , modConstruct:Prop<D,P>->PropMod<D,P>
    ) {
        this.parent = parent;
        this.id = id;
        this.blame = blame;
        this.mod = modConstruct(this);
    } 

    public function delete() {
        mod.deleteHook();
        parent.props.remove(id);
    }

    public function tick(delta:Float) {
        mod.tick(delta);
    }
}