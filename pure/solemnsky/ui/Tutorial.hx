package solemnsky.ui;

import solemnsky.engine.Engine;
import solemnsky.engine.tune.EngineTuning;

/**
 * Tutorial for solemnsky, using merely the engine.
 */

class TutorialMain implements Control<Noise> {
    private var engine:

    public function new() {
        engine = new Engine(makeEngineTuning());
    }

    /***************************************************************/
    /* control interface
    /***************************************************************/

    public function tick(delta:Float):Void {
    }

    public function render(delta:Float):Scene {
        return core.render(delta);
    }

    public function profiling(profile:Profile):Void {
        trace(profile.print());
    }

    public function handle(e:Event):Void {
        var control:CoreControl;
        switch (e) {
        KbEvent(key, state) {
            var match = function(pat) return Type.enumEq(key, pat);

            if (match(CharKey('i'))) control = CCUp(state);
            if (match(CharKey('j'))) control = CCLeft(state);
            if (match(CharKey('l'))) control = CCRight(state);
            if (match(CharKey('k'))) control = CCDown(state);
            if (match(CharKey('f'))) control = CCFire(state);
            if (match(CharKey('d'))) control = CCSecondary(state);
        }
        }
        core.handle(myId, e);
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
    static function run():Control<Noise> {
        return new TutorialMain();
    }
}