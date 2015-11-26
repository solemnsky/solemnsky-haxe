package solemnsky.tutorial;

import control.Frame;
import util.Transform;
import util.Vector;

/**
 * solemnsky.tutorial.TutBackground:
 * Renders the large background for the tutorial.
 * Let's make this exciting later...
 * You know, make it 'pop'...
 */

class TutBackground {
    /*************************************************************************/
    /* constructor
    /*************************************************************************/

    public var dims:Vector;

    public function new(x:Float, y:Float) {
        dims = new Vector(x, y);
    } 

    public function render(f:Frame, delta:Float) {
        f.pushTransform(
            Transform.scale(dims.x / 1600, dims.y / 900));

        f.color(20, 20, 50, 255);
        f.image(new Vector(0, 0), "title");

        f.popTransform();
    }
}
