package solemnsky.control;

import solemnsky.math.Mat3;
import solemnsky.math.Vec2;

enum DrawPrim {
    Circle(pos:Vec2, radius:Int);
}

class Scene {
    /*************************************************************************/
    /* variables
    /*************************************************************************/

    public var prims:Array<DrawPrim> = [];
    public var children:Array<Scene> = [];
    public var trans:Mat3 = Mat3.identity();
    public var alpha:Float = 1;


    /*************************************************************************/
    /* constructor
    /*************************************************************************/

    public function new() {
        // nothing
    }
}
