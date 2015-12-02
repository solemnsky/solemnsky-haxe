package solemnsky.tutorial.control;

import solemnsky.engine.Engine;
import solemnsky.engine.Environment;
import solemnsky.engine.mod.EngineMod;
import solemnsky.tutorial.engine.TutPlayer;
import solemnsky.tutorial.engine.TutEngine;
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

        engine = new Engine(new TutEngineMod());
        engine.loadEnvironment(new Environment(3200, 1800));

        player = engine.addPlayer(0, new TutPlayer());
    }
}

