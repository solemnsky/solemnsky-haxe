package solemnsky.engine.mod;

import util.Vector;
import solemnsky.engine.Prop;
import solemnsky.engine.Engine;

/**
 * solemnsky.engine.mod.PropMod:
 * Object with values and callbacks to influence the behaviour
 * of a Prop. Props are.. rather extensible.
 */

class PropMod {
    private var prop:Prop;
    private var engine:Engine;

    public function new() {}

    public function attach(prop:Prop) {
        this.prop = prop;
        engine = prop.parent;
    }

    public function tick(delta) {
        // do something with prop
    }

    public function deleteHook() {

    }

    public function getPos():Vector {
        return null;
    }
}
