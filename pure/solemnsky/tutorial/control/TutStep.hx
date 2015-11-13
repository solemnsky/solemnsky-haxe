package solemnsky.tutorial.control;

/**
 * solemnsky.tutorial.control.TutStep:
 * Datatype representing a step, convertable into a Control<TutStep>.
 */

enum TutStep {
    StartScreenStep(cont:Continuity);
    Phase1Step(cont:Continuity);
}