package solemnsky.engine;

/**
 * solemnsky.engine.Prop:
 * Object for a thing a player can create (missle, bullet, laser,
 * whatever else you want).
 * Quite heavily extensible, as should be expected; some things
 * are uniform across all props however.
 */

class Prop<D,P> {
    public var parent:Engine<D,P>;
    public var mod:PropMod;
    public var data:P;

    public function new(
        parent:Engine<D,P>, mod:PropMod 
    ) {
        this.parent = parent;
        this.mod = mod;
    } 
}