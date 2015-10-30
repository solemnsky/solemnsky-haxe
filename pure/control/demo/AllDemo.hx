package control.demo;

import util.Vector;
import util.Transform;
import control.Control;
import control.Scene;
import control.Combinator;

/**
 * control.demo.AllDemo:
 * Top-level demo that lets the user run the other three demos in this
 * directory at their leisure. Demonstrates the use of control.Combinator.
 */

/**
 * Selection screen, results in the demo that the user wants to run.
 */
class SelectionScreen implements Control<Noise> {
    public function new():Void {}

    public function init(_):Void {}

    public function tick(delta:Float):Void {}

    /*************************************************************************/
    /* rendering
    /*************************************************************************/
    private static function renderText():Scene {
        var scene = new Scene();

        var text = [
            "Welcome to the solemnsky control technical demo."
            , "What you are seeing is the the control object control.AllDemo.run()"
            , "compiled through one of our export media."
            , "It demonstrates several features that should be achieved in a "
            , " technically sound export media. "
            , "Press 1, 2, or 3 on your keyboard to continue."
        ];

        scene.prims = [
            SetColor(0, 0, 0, 255)
            ,SetFont("Arial", 14)
            , DrawText(new Vector(800 / 3, 0), CenterText, text[0])
            , DrawText(new Vector(0, 25), LeftText, text[1])
            , DrawText(new Vector(0, 40), LeftText, text[2])
            , DrawText(new Vector(0, 65), LeftText, text[3])
            , DrawText(new Vector(0, 80), LeftText, text[4])
            , DrawText(new Vector(800 / 3, 105), CenterText, text[5])
        ];

        scene.trans = Transform.translation(0, 5)
            .multmat(Transform.scale(3, 3));

        return scene;
    }

    public function render(delta:Float):Scene {
        var scene = new Scene();
        scene.children.push(renderText());
        return scene;
    }

    public function profiling(data:Profile):Void {
        trace(data.print());
    }

    public function handle(e:Event):Void {}

    public function conclude():Null<Noise> {
        return null;
    }
}

/**
 * Instead of implementing a Control<Noise> class, this constructs one with
 * control.Combinator.when(), fancy eh.
 */
class AllDemo {
    public static function run():Control<Noise> {
        return Combinator.when(new SelectionScreen(), selectCallback);
    }

    private static function selectCallback(r:Noise):Control<Noise> {
        return new PhysDemo();       
    }
}