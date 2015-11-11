package solemnsky.engine.custom;

import solemnsky.engine.Prop;
import solemnsky.engine.custom.PlayerCustom;
import solemnsky.engine.custom.PropCustom;

/**
 * solemnsky.engine.custom.PropCustom:
 * Interface for the player custom object.
 */

interface PropCustom<D:PlayerCustom<D,P>,P:PropCustom<D,P>> {
    public function attachProp(p:Prop<D,P>):Void;
}