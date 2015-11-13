package solemnsky.tutorial;

import solemnsky.tutorial.control.StartScreen;
import solemnsky.tutorial.control.Phase1;
import solemnsky.tutorial.control.TutStep;
import control.Control;
import control.Noise;
import control.Combinator;

/**
 * Tutorial for solemnsky, using merely the engine.
 */

/****************************************************************/
/* TutorialMain
/****************************************************************/

class Tutorial {
    public static function run():Control<Noise> {
        Combinator.network(
            stepThrough
            , new StartScreen()
        );
    }

    function stepThrough(tutStep:TutStep) {
        switch (tutStep) {
        case (StartScreenStep(cont)): 
            return new StartScreen();
        case (Phase1Step(cont)):
            return new Phase1Step(cont);
        }
    }
}
