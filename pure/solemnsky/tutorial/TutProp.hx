package solemnsky.tutorial;

import solemnsky.engine.Prop;
import solemnsky.engine.custom.PropCustom;

/**
 * solemnsky.tutorial.TutProp:
 * Prop custom object for the tutorial.
 */

enum PropType {
    LittleBox;
}

class TutProp implements PropCustom<TutPlayer,TutProp> {
    private var prop:Prop<TutPlayer,TutProp>;

    public function new() {

    }

    public function attachProp(prop:Prop<TutPlayer,TutProp>) {
        this.prop = prop;
    }
}
