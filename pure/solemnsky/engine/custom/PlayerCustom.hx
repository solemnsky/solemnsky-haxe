package solemnsky.engine.custom;

import solemnsky.engine.Player;

/**
 * solemnsky.engine.custom.PlayerCustom:
 * Interface for the player custom object.
 */

interface PlayerCustom<D,P> {
    public function attachPlayer(p:Player<D,P>):Void;
}