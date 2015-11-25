package solemnsky.tutorial;

import control.Scene;
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

    public function render(delta:Float) {
        var scene = new Scene();

        scene.prims = [
            SetColor(20, 20, 50, 255)
            , DrawImage(new Vector(0, 0), "title")
        ];

        scene.trans = Transform.scale(dims.x / 1600, dims.y / 900);

        return scene;
    }
}
