package solemnsky.tutorial;

import solemnsky.engine.Engine;
import solemnsky.engine.tune.EngineTuning;
import solemnsky.engine.tune.PlaneTuning;
import control.Control;
import control.Noise;
import control.Event;
import control.Scene;
import control.Profile;

/**
 * Tutorial for solemnsky, using merely the engine.
 */

class TutorialMain implements Control<Noise> {
    private var engine:Engine;

    public function new() {
        engine = new Engine(makeEngineTuning());
        engine.loadEnvironment(new Environment());
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

    public function makeEngineTuning():EngineTuning {
        var tuning = new EngineTuning();
        tuning.debugTrace = function(str){trace('engine log: '+str);};
        return tuning;
    }

    public function makePlaneTuning():PlaneTuning {
        var tuning = new PlaneTuning();
        return tuning;
    }
}

class Tutorial {
    public static function run():Control<Noise> {
        return new TutorialMain();
    }
}
