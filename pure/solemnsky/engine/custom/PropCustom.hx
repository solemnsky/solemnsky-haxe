package solemnsky.engine.custom;

import solemnsky.engine.Prop;

/**
 * solemnsky.engine.custom.PropCustom:
 * Interface for the player custom object.
 */

interface PropCustom<D,P> {
    public function attachProp(p:Prop<D,P>):Void;
}