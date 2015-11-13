package solemnsky.tutorial.control;

import solemnsky.engine.Engine;
import solemnsky.engine.Environment;
import solemnsky.engine.mod.EngineMod;
import solemnsky.tutorial.engine.TutPlane;
import util.Vector;
import solemnsky.tutorial.engine.Synonyms;

/**
 * solemnsky.tutorial.control.Continuity:
 * Datatype representing the structures that are passed through
 * the whole control: engine, player, score etc.
 */

class Continuity {
    public var background:TutBackground;
    public var engine:MyEngine;
    public var player:MyPlayer;

    public function new() {
        background = new TutBackground(3200, 1800);

        engine = new Engine(myEngineMod());
        engine.loadEnvironment(new Environment(3200, 1800));

        var planeModConstruct = function (plane) return
            new TutPlaneMod(plane);
        player = engine.addPlayer(0);
    }

    private static function myEngineMod():EngineMod {
        var mod = new EngineMod();
        mod.debugTrace = function(str){trace('engine log: '+str);};
        return mod;
    }
}