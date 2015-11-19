package solemnsky.core.vanilla;

import solemnsky.engine.mod.PlayerMod;
import solemnsky.vanilla.Synonyms;

/**
 * solemnsky.core.vanilla.VanillaProp:
 * Player custom datatype for Vanilla.
 */

class VanillaProp {
    public function new() {}
}

class VanillaPropMod extends PlayerMod<VanillaPlayer,VanillaProp> {
    public function new(prop:MyProp) {
        super(prop);
    }
}