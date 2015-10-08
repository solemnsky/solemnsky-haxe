package solemnsky.control;

import kha.math.FastMatrix3;
import kha.math.FastVector2;

/**
 * solemnsky.control.Scene: 
 * A Scene class representing a general scene graph.
 */

enum DrawPrim {
    DrawCircle(pos:FastVector2, radius:Int);
    DrawColor (r:Int, g:Int, b:Int, a:Int) ;
}

/**
 * Scene graph, representing a hierarchical structure containing arrays
 * of graphic primitives at each level, through which affine transformations
 * and opacity values can traverse from parent to child.
 */
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
