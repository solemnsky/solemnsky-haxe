package solemnsky.core.vanilla;

import solemnsky.engine.mod.PropMod;
import solemnsky.core.vanilla.Synonyms;

/**
 * solemnsky.core.vanilla.VanillaProp:
 * Player custom datatype for Vanilla.
 */

class VanillaProp {
    public function new() {}
}

class VanillaPropMod extends PropMod<VanillaPlayer,VanillaProp> {
    public function new(prop:MyProp) {
        super(prop);
    }
}