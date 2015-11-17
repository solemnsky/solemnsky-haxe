package solemnsky.engine.mod;

/**
 * solemnsky.engine.mod.EngineMod:
 * This is the top-level for modifying game engine 
 * functionality.
 */

class EngineMod<D,P> {
    /**************************************************************/
    /* misc variables and constructor
    /**************************************************************/

    public var debugTrace:String->Void;

    // acceleration of gravity 
    public var gravity:Float = 250;

    public function new() {
        debugTrace = function(_){}
    }

    /**************************************************************/
    /* mod constructors
    /**************************************************************/

    /**
     * Given a mod type and a plane to attach to, produce a 
     * PlaneMod.
     */
    public function planeMod(
        type:Int, plane:Plane<D,P>
    ):PlaneMod<D,P> {
        return null;
    }

    /**
     * Given a mod type and a prop to attach to, produce a 
     * PropMod.
     */
    public function propMod(
        type:Int, plane:Prop<D,P>
    ):PropMod<D,P> {
        return null;
    }

    /**************************************************************/
    /* callbacks
    /**************************************************************/

    // maybe eventually?

}
