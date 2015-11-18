package solemnsky.tutorial.engine;

import solemnsky.engine.mod.EngineMod;

/**
 * solemnsky.tutorial.engine.TutEngine:
 * Our 
 */

class TutEngineMod extends EngineMod<TutPlayer, TutProp> {
    public function new() {
        super();
        mod.debugTrace = function(str){trace('engine log: '+str);};
    }

    override function playerMod(player)  {
        return new TutPlaneMod(player);
    }

    override function propMod(prop) {
        return new TutPropMod(prop);
    }
}