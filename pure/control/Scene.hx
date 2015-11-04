package control;

import util.Transform;
import util.Vector;

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
    DrawCircle (pos:Vector, radius:Float);
    DrawRect   (topLeft:Vector, bottomRight:Vector);
    DrawText   (pos:Vector, align:TextAlign, text:String);

    // images
    DrawImage  (pos:Vector, image:String);
}

/**
 * Scene graph, representing a hierarchical structure containing arrays
 * of graphic primitives at each level, through which affine transformations
 * and opacity values can traverse from parent to child.
 */
class Scene implements Construct<Noise> {
    /*************************************************************************/
    /* variables
    /*************************************************************************/

    public var prims:Array<DrawPrim> = [];
    public var children:Array<Scene> = [];
    public var trans:Transform = Transform.identity();
    public var alpha:Float = 1;

    /*************************************************************************/
    /* constructor
    /*************************************************************************/

    public function new() {}

    public function fromConstruct(_) {}
}
