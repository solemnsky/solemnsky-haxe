package solemnsky.engine.mod;

import solemnsky.engine.Prop;

/**
 * solemnsky.engine.mod.PropMod:
 * Object with values and callbacks to influence the behaviour
 * of a Prop. Props are.. rather extensible.
 */

class PropMod {
    private var prop:Prop;

    public function new() {}

    public function attach(prop:Prop) {
        this.prop = prop;
    }

    public function tick(delta) {
        // do something with prop
    }
}
