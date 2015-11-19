package solemnsky.core.vanilla;

import solemnsky.engine.mod.EngineMod;
import solemnsky.core.vanilla.VanillaPlayer;
import solemnsky.core.vanilla.VanillaProp;

/**
 * solemnsky.core.vanilla.VanillaEngineMod:
 * Engine mod for Vanilla.
 */

class VanillaEngineMod extends  {
    public function new() {

    }

    /**************************************************************/
    /* mod constructors
    /**************************************************************/

    override function playerMod(
        player:Player<A,P>
    ):PlayerMod<A,P> {
        return new VanillaPlayerMod(player);
    }

    override function propMod(
        prop:Prop<A,P>
    ):PropMod<A,P> {
        return new VanillaPlayerMod(prop);
    }
}