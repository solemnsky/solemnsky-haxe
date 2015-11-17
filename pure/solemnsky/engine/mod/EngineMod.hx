package solemnsky.engine.mod;

/**
 * solemnsky.engine.mod.EngineMod:
 * This is the top-level for modifying game engine 
 * functionality.
 */

class EngineMod<D,P> {
    public var debugTrace:String->Void;

    // dimensions of the simple plane rectangle
    public var planeWidth:Float = 60;
    public var planeHeight:Float = 30;

    // acceleration of gravity 
    public var gravity:Float = 250;

    // contact
    public var minimumContactDamage:Float = 0.02;
    public var contactDamangeMultiplier:Float = 0.01;

    public function new() {
        debugTrace = function(_){}
    }

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
}
