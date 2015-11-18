package solemnsky.tutorial.engine;

import solemnsky.engine.mod.EngineMod;
import solemnsky.tutorial.engine.TutPlayer;
import solemnsky.tutorial.engine.TutProp;

/**
 * solemnsky.tutorial.engine.TutEngine:
 * Our 
 */

class TutEngineMod extends EngineMod<TutPlayer, TutProp> {
    public function new() {
        super();
        debugTrace = function(str){trace('engine log: '+str);};
    }

    override function playerMod(player)  {
        return new TutPlayerMod(player);
    }

    override function propMod(prop) {
        return new TutPropMod(prop);
    }
}