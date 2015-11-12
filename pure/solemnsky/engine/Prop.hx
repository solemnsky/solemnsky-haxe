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

class Prop {
    public var parent:Engine;
    public var id:Int;
    public var blame:Int;
    public var mod:PropMod;

    public function new(
        parent:Engine, id:Int, blame:Int, mod:PropMod
    ) {
        this.parent = parent;
        this.id = id;
        this.blame = blame;
        this.mod = mod;
        mod.attach(this);
    } 

    public function delete() {
        mod.deleteHook();
        parent.props.remove(id);
    }

    public function getPos():Vector {
        return mod.getPos();
    }
}