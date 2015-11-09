package solemnsky.tutorial;

import util.Vector;
import control.Control;
import control.Event;
import control.Noise;
import control.Profile;
import control.Scene;
import solemnsky.engine.Engine;
import solemnsky.engine.Environment;
import solemnsky.engine.Player;
import solemnsky.engine.mod.EngineMod;
import solemnsky.engine.mod.PlaneMod;

/**
 * Tutorial for solemnsky, using merely the engine.
 */

typedef PlayerData = {
    name:String
}

class TutorialMain implements Control<Noise> {
    private var engine:Engine<PlayerData>;
    private var player:Player<PlayerData>;

    public function new() {
        engine = new Engine(myEngineMod());
        engine.loadEnvironment(new Environment());

        player = engine.addPlayer(0, {name:"offline player"});
        player.spawn(myPlaneMod(), new Vector(0, 0), 0);
    }

    public function init(_) {}

    /***************************************************************/
    /* control interface
    /***************************************************************/

    public function tick(delta:Float):Void {
    }

    public function render(delta:Float):Scene {
        return new Scene();
    }

    public function profiling(profile:Profile):Void {
        trace(profile.print());
    }

    public function handle(e:Event):Void {
    }

    public function conclude():Null<Noise> {
        return null;
    }

    /***************************************************************/
    /* tuning
    /***************************************************************/

    public function myEngineMod():EngineMod {
        var tuning = new EngineMod();
        tuning.debugTrace = function(str){trace('engine log: '+str);};
        return tuning;
    }

    public function myPlaneMod():PlaneMod {
        var tuning = new PlaneMod();
        return tuning;
    }
}

class Tutorial {
    public static function run():Control<Noise> {
        return new TutorialMain();
    }
}
