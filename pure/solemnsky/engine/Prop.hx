package solemnsky.engine;

import solemnsky.engine.mod.PropMod;
import solemnsky.engine.custom.PlayerCustom;
import solemnsky.engine.custom.PropCustom;

/**
 * solemnsky.engine.Prop:
 * Object for a thing a player can create (missle, bullet, laser,
 * whatever else you want).
 * Quite heavily extensible, as should be expected; some things
 * are uniform across all props however.
 */

class Prop<D:PlayerCustom<D,P>,P:PropCustom<D,P>> {
    public var parent:Engine<D,P>;
    public var id:Int;
    public var blame:Int;
    public var mod:PropMod;
    public var custom:P;


    public function new(
        parent:Engine<D,P>, id:Int, blame:Int
        , custom:P, mod:PropMod
    ) {
        this.parent = parent;
        this.id = id;
        this.blame = blame;
        this.mod = mod;
        this.custom = custom;
    } 

    public function delete() {
        parent.props.remove(id);
    }
}