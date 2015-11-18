package solemnsky.engine.mod;

import util.Vector;
import solemnsky.engine.Prop;
import solemnsky.engine.Engine;

/**
 * solemnsky.engine.mod.PropMod:
 * Object with values and callbacks to influence the behaviour
 * of a Prop. Props are.. rather extensible.
 */

class PropMod<D,P> {
    /**************************************************************/
    /* constructor and state
    /**************************************************************/

    private var prop:Prop<D,P>;
    private var engine:Engine<D,P>;
    private var custom:P;

    public function new(prop:Prop<D,P>) {
        this.prop = prop;
        engine = prop.parent; 
        custom = prop.custom;
    }

    /**************************************************************/
    /* callbacks
    /**************************************************************/

    public function onTick(delta) {
    }

    public function onDelete() {
    }
}
