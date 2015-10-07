package solemnsky.control;

import kha.math.FastMatrix3;
import kha.math.FastVector2;

enum DrawPrim {
    DrawCircle(pos:FastVector2, radius:Int);
    DrawColor(r:Int, g:Int, b:Int, a:Int);
}

class Scene {
    /*************************************************************************/
    /* variables
    /*************************************************************************/

    public var prims:Array<DrawPrim> = [];
    public var children:Array<Scene> = [];
    public var trans:FastMatrix3 = FastMatrix3.identity();
    public var alpha:Float = 1;

    /*************************************************************************/
    /* constructor
    /*************************************************************************/

    public function new() {
        // nothing
    }
}
