package control;

/**
 * solemnsky.control.Combinator:
 * OOP? You think your little OOP design patterns were going to save you
 * from the reign of COMBINATORS? Combinators: they're the new, hip, classy
 * way to take things and make other things. Yeah, a bit like functions,
 * but they make you think of cool stuff like GADTs and category theory.
 */

/**
 * Implementation of Combinator.when()
 */
class WhenControl<T, T2> implements Control<T2> {
    private var ctrl:Control<T1>;
    private var switched = false;
    private var ctrl2:Control<T2>;

    public function new(
        ctrl:Control<T>
        , handle:T->Control<T2>
    ) {
        this.ctrl = ctrl;
    }

    public function init() {
        ctrl.init();
    }

    public function tick(delta:Float) {
        if (!switched) ctrl.tick(delta);
            else ctrl2.tick(delta);
    }

    public function render(delta:Float):Scene {
        if (!switched) return ctrl.render(delta);
            else ctrl2.render(delta);
    }

    public function profiling(data:Profile) {
        if (!switched) ctrl.profiling(data);
            else ctrl2.profiling(data);
    }

    public function handle(e:Event) {
        if (!switched) ctrl.handle(e);
            else ctrl2.handle(e);
    }

    public function conclude():Null<T2> {
        if (switched) return ctrl2.conclude();
        return null;
    }
}

/**
 * All our combinators are static functions in this class.
 */
class Combinator {
    public static function when(
        ctrl:Control<T>
        , handle:T->Control<T2>
    ): Control<T2> {
        return WhenControl(ctrl, handle);
    }
}
