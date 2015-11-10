package solemnsky.engine;

import solemnsky.engine.mod.PropMod;

/**
 * solemnsky.engine.Prop:
 * Object for a thing a player can create (missle, bullet, laser,
 * whatever else you want).
 * Quite heavily extensible, as should be expected; some things
 * are uniform across all props however.
 */

class Prop<D,P> {
    public var parent:Engine<D,P>;
    public var blame:Int;
    public var mod:PropMod;
    public var custom:P;

    public function new(
        parent:Engine<D,P>, blame:Int
        , custom:P, mod:PropMod 
    ) {
        this.parent = parent;
        this.blame = blame;
        this.mod = mod;
        this.custom = custom;
    } 
}