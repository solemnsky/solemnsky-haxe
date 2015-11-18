package solemnsky.engine.mod;

import util.Vector;
import solemnsky.engine.Prop;
import solemnsky.engine.Engine;

/**
 * solemnsky.engine.mod.PropMod:
 * Object with values and callbacks to influence the behaviour
 * of a Prop. Props are.. rather extensible.
 */

class PropMod<A,P> {
    /**************************************************************/
    /* constructor and state
    /**************************************************************/

    private var prop:Prop<A,P>;

    public function new(prop:Prop<A,P>) {
        this.prop = prop;
    }

    /**************************************************************/
    /* helpful properties
    /**************************************************************/

    private var engine(set,get):Engine<A,P>;
    private function get_engine() return prop.parent;
    private function set_engine(n) return prop.parent = n;
    private var custom(set,get):P;
    private function get_custom() return prop.custom;
    private function set_custom(n) return prop.custom = n;

    /**************************************************************/
    /* callbacks
    /**************************************************************/

    public function onTick(delta) {}
    public function onDelete() {}

    /**************************************************************/
    /* snap
    /**************************************************************/

    public function getSnap():Dynamic return null;
    public function loadSnap(snap:Dynamic) {}
}
