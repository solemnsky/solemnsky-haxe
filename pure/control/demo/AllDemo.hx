package control.demo;

import util.Vector;
import util.Transform;
import control.Control;
import control.Scene;
import control.Combinator;
import control.Key;

/**
 * control.demo.AllDemo:
 * Top-level demo that lets the user run the other three demos in this
 * directory at their leisure. Demonstrates the use of control.Combinator.
 */

/**
 * Selection screen, results in the demo that the user wants to run.
 */
class SelectionScreen implements Control<DemoSelect> {
    private var selection:Null<DemoSelect> = null;

    public function new() {
    }

    public function init(_) {}

    public function tick(_) {}

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
            , "Press 'w', 'e', or 'r' to select a demo from here and 'q' to exit a demo."
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

    /*************************************************************************/
    /* events
    /*************************************************************************/

    public function handle(e:Event):Void {
        switch(e) {
        case KbEvent(key, _): {
            trace(key);
            if (Type.enumEq(key, CharKey('w'))) selection = GraphicsSelect;
            if (Type.enumEq(key, CharKey('e'))) selection = InputSelect;
            if (Type.enumEq(key, CharKey('r'))) selection = PhysSelect;
        }
        default: {}
        } 
    }

    public function conclude():Null<DemoSelect> {
        return selection;
    }
}

/**
 * Instead of implementing a Control<Noise> class, this constructs one with
 * control.Combinator.network(), fancy eh.
 */
class AllDemo {
    public static function run():Control<Noise> {
        return Combinator.network(
            stepThrough
            , new SelectionScreen() );
    }

    private static function stepThrough(r:DemoSelect):Control<DemoSelect> {
        var ctrl:Control<DemoSelect>;

        switch (r) {
        case HomeSelect:     ctrl = new SelectionScreen();
        case GraphicsSelect: ctrl = new GraphicsDemo();
        case InputSelect:    ctrl = new InputDemo();
        case PhysSelect:     ctrl = new PhysDemo();
        }

        return ctrl;
    }
}