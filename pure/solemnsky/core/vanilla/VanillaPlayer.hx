package solemnsky.core.vanilla;

import solemnsky.engine.mod.PlayerMod;
import solemnsky.vanilla.Synonyms;

/**
 * solemnsky.core.vanilla.VanillaPlayer:
 * Player custom datatype for Vanilla.
 */

class VanillaPlayer {
    public function new() {}
}

class VanillaPlayerMod extends PlayerMod<VanillaPlayer,VanillaProp> {
    public function new(player:MyPlayer) {
        super(player);
    }   
}