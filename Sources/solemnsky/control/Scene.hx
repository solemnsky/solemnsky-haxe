package solemnsky.control;

import kha.Font;
import kha.Image;
import kha.math.FastMatrix3;
import kha.math.FastVector2;

/**
 * solemnsky.control.Scene: 
 * A Scene class representing a general scene graph.
 */

enum TextAlign { CenterText; LeftText; RightText; }

enum DrawPrim {
    // setting state
    SetColor   (r:Int, g:Int, b:Int, a:Int);
    SetFont    (name:String, size:Int);

    // drawing primitives
    DrawCircle (pos:FastVector2, radius:Int);
    DrawText   (pos:FastVector2, align:TextAlign, text:String);

    // images
    DrawImage  (pos:FastVector2, image:Image);
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
