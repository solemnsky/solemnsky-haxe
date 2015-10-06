package solemnsky.control;

import solemnsky.math.Mat3;
import solemnsky.math.Vec2;

enum DrawPrim {
    DrawCircle(pos:Vec2, radius:Int);
}

class Scene {
    /*************************************************************************/
    /* variables
    /*************************************************************************/

    public var prims:Array<DrawPrim> = [];
    public var children:Array<Scene> = [];
    public var trans:Mat3 = Mat3.identity();
    // public var alpha:Float = 1;


    /*************************************************************************/
    /* constructor
    /*************************************************************************/

    public function new() {
        // nothing
    }

    /*************************************************************************/
    /* rendering helper (drawWith)
    /*************************************************************************/

    private static function transformPrim(mat:Mat3, prim:DrawPrim):DrawPrim {
        switch (prim) {
            case DrawCircle(pos, radius): 
                return DrawCircle(mat.apply(pos), radius);
        }
    }

    public function flattenPrims(parentMat:Mat3):Array<DrawPrim> {
        var nextMat:Mat3 = trans.compose(parentMat); 
            // the transform matrix sent to children

        var allPrims:Array<DrawPrim> = [];
        for (prim in prims) {
            allPrims.push(transformPrim(parentMat, prim));
        }
        for (child in children) {
            allPrims = allPrims.concat(child.flattenPrims(nextMat));
        }
        return allPrims;
    }

    public function drawWith(render:DrawPrim->Void):Void {
        var flattened = flattenPrims(Mat3.identity());
        trace('drawing ' + flattened.length + ' prims');
        for (prim in flattened) {
            render(prim);
        }
    }
}
