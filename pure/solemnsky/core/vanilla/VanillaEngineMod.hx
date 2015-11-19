package solemnsky.core.vanilla;

import solemnsky.engine.mod.EngineMod;
import solemnsky.engine.mod.PlayerMod;
import solemnsky.engine.mod.PropMod;
import solemnsky.core.vanilla.VanillaPlayer;
import solemnsky.core.vanilla.VanillaProp;
import solemnsky.core.vanilla.Synonyms;

/**
 * solemnsky.core.vanilla.VanillaEngineMod:
 * Engine mod for Vanilla.
 */

class VanillaEngineMod extends EngineMod<VanillaPlayer, VanillaProp> {
    public function new() {
        super();
    }

    /**************************************************************/
    /* mod constructors
    /**************************************************************/

    override function playerMod(
        player:MyPlayer
    ):PlayerMod<VanillaPlayer,VanillaProp> {
        return new VanillaPlayerMod(player);
    }

    override function propMod(
        prop:MyProp
    ):PropMod<VanillaPlayer,VanillaProp> {
        return new VanillaPropMod(prop);
    }
}