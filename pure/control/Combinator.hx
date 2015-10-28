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
    /*************************************************************************/
    /* variables 
    /*************************************************************************/

    // initialised state
    private var ctrl:Control<T>;
    private var handle:T->Control<T2>;

    public function new(
        ctrl:Control<T>
        , handle:T->Control<T2>
    ) {
        this.ctrl = ctrl;
        this.handle = handle;
    }

    /*************************************************************************/
    /* Control implementation
    /*************************************************************************/
    
    public function init(n) {
        ctrl.init(n);
    }

    public function tick(delta:Float) {
        ctrl.tick(delta);
    }

    public function render(delta:Float):Scene {
        return ctrl.render(delta);
    }

    public function profiling(data:Profile) {
        ctrl.profiling(data);
    }

    public function handle(e:Event) {
        ctrl.handle(e);
    }

    public function conclude():Null<T2> {
        var conclusion = ctrl.conclude();
        if (conclusion != null) 
            this = handle(conclusion);
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
