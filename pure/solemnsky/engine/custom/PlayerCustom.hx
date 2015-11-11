package solemnsky.engine.custom;

import solemnsky.engine.Player;
import solemnsky.engine.custom.PlayerCustom;
import solemnsky.engine.custom.PropCustom;

/**
 * solemnsky.engine.custom.PlayerCustom:
 * Interface for the player custom object.
 */

interface PlayerCustom<D:PlayerCustom<D,P>,P:PropCustom<D,P>> {
    public function attachPlayer(p:Player<D,P>):Void;
}