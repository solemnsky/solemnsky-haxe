package solemnsky.engine.mod;

/**
 * solemnsky.engine.mod.PropMod:
 * Object with values and callbacks to influence the behaviour
 * of a Prop. Props are.. rather extensible.
 */

class PropMod {
    public var tick:Float->Void;

    public function new() {
        tick = function(_) {}
    }
}
