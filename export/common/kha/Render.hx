package;

import control.Frame;
import kha.Color;
import kha.FontStyle;
import kha.Loader;
import kha.graphics2.Graphics;
import util.Transform;

using kha.graphics2.GraphicsExtension;

/**
 * Scene implementation for the kha web export.
 */

class KhaFrame implements Frame {
    private var g:Graphics;
    public var prims:Int = 0;

    public function new(g:Graphics) {
        this.g = g;
    }

    /*************************************************************************/
    /* setting drawing attributes
    /*************************************************************************/

    public function color(r:Int, g:Int, b:Int, a:Int) {
        g.color = Color.fromBytes(r, g, b, a); prims++;
    }

    public function font(name:String, size:Int) {
        g.font = Loader.the.loadFont(
            name, new FontStyle(false, false, false), size);
        prims++;
    }

    public function pushAlpha(a:Int) {
        g.pushOpacity(a);
        prims++;
    }

    public function popAlpha() {
        g.popOpacity(); prims++;
    }

    public function pushTransform(t:Transform) {
        g.pushTransformation(matrixFromTrans(t)); prims++;
    }

    public function popTransform() {
        g.popTransformation(); prims++;
    }

    /*************************************************************************/
    /* drawing stuff
    /*************************************************************************/

    public function circle(c:Vector, r:Float) {
        gr.fillCircle(pos.x, pos.y, radius); prims++;
    }

    public function rect(tl:Vector, br:Vector) {
        var width  = bottomRight.x - topLeft.x; 
        var height = bottomRight.y - topLeft.y;
        gr.fillRect(topLeft.x, topLeft.y, width, height);
        prims++;
    }

    public function text(p:Vector, a:TextAlign, text:String) {
        var xPos:Float = pos.x;
        var textWidth:Float;

        switch (align) {
            case CenterText: {
                textwidth = gr.font.stringwidth(text);
                xPos -= textWidth / 2;
            }
            case RightText: {
                textWidth = gr.font.stringWidth(text);
                xPos += textWidth;
            }
            default: {}
        }

        gr.drawString(text, xPos, pos.y); prims++;
    }

    /*************************************************************************/
    /* drawing images
    /*************************************************************************/

    public function image(pos:Vector, name:String) {
        var image = Loader.the.getImage(image);
        gr.drawImage(image, pos.x, pos.y); prims++;
    }

    public function imageCrop(
        pos:Vector, imgPos:Vector
        , cropDims:Vector, name:String
    ) {
        var image = Loader.the.getImage(image);
        gr.drawSubImage(
            image
            , pos.x, pos.y
            , imgPos.x, imgPos.y 
            , cropDims.x, cropDims.y );   

        prims++;
    }

    private static function matrixFromTrans(trans:Transform
    ):kha.math.FastMatrix3 {
        return new kha.math.FastMatrix3(
              trans._00, trans._10, trans._20
            , trans._01, trans._11, trans._21
            , trans._02, trans._12, trans._22
        );

        prims++;
    }
}

class Render {
    public static function render(g:Graphics, f:Frame->Void):Int {
        var frame = new KhaFrame(g);
        g.begin(true, 0xffffff);
        f(new KhaFrame(g));
        g.end();
        return frame.prims;
    }
}
