package control;

/**
 * solemnsky.control.Combinator:
 * OOP? You think your little OOP design patterns were going to save you
 * from the reign of COMBINATORS? Combinators: they're the new, hip, classy
 * way to take things and make other things. Yeah, a bit like functions,
 * but they make you think of cool stuff like GADTs and category theory.
 */


/*****************************************************************************/
/* ControlNetwork
/*****************************************************************************/

/**
 * A generalised control network manager.
 * 
 * At every moment it is directed by an internal control object
 * but this control object ends and is substitued by a new one
 * dictated by a network ticker function (moveThrough) when it
 * ends by returing a value through conclude().
 */
class ControlNetwork<T> implements Control<Noise> {
    /*************************************************************************/
    /* variables
    /*************************************************************************/

    private var moveThrough:T->Control<T>;
    private var ctrl:Control<T>;

    public function new(
        moveThrough:T->Control<T>
        , initialCtrl:Control<T>
    ) {
        this.moveThrough = moveThrough;
        ctrl = initialCtrl;
    }

    /*************************************************************************/
    /* control implementation
    /*************************************************************************/
    
    public function init(n) {
        ctrl.init(n);
    }

    public function tick(delta:Float) {
        ctrl.tick(delta);

        var conclusion = ctrl.conclude();
        if (conclusion != null) 
            ctrl = moveThrough(conclusion);
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

    public function conclude():Null<Noise> {
        return null;
    }
}

/*****************************************************************************/
/* Combinator (top-level)
/*****************************************************************************/

/**
 * All our combinators are static functions in this class.
 */
class Combinator {
    public static function network<T>(
        moveThrough:T->Control<T>
        , initialCtrl:Control<T>
    ): Control<Noise> {
        return new ControlNetwork(moveThrough, initialCtrl);
    }
}
