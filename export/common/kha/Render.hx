package;

import control.Frame;
import kha.Color;
import kha.FontStyle;
import kha.Loader;
import kha.graphics2.Graphics;
import util.Transform;
import util.Vector;

using kha.graphics2.GraphicsExtension;

/**
 * Scene implementation for the kha web export.
 */

class KhaFrame implements Frame {
    private var g:Graphics;
    public var prims:Int = 0;

    private var trans:Array<Transform>;
    private var alpha:Array<Float>;

    public function new(g:Graphics) {
        this.g = g;
        trans = [Transform.identity()];
        alpha = [1];
    }

    /*************************************************************************/
    /* setting drawing attributes
    /*************************************************************************/

    public function color(r:Int, g:Int, b:Int, a:Int) {
        this.g.color = Color.fromBytes(r, g, b, a); prims++;
    }

    public function font(name:String, size:Int) {
        g.font = Loader.the.loadFont(
            name, new FontStyle(false, false, false), size);
        prims++;
    }

    public function pushAlpha(a:Int) {
        alpha.push(a*alpha[alpha.length - 1]);
        g.opacity = alpha[alpha.length - 1];
        prims++;
    }

    public function popAlpha() {
        alpha.pop();
        g.opacity = alpha[alpha.length - 1];
    }

    public function pushTransform(t:Transform) {
        trans.push(trans[trans.length - 1].multmat(t));
        g.transformation = matrixFromTrans(trans[trans.length - 1]);
        prims++;
    }

    public function popTransform() {
        trans.pop();
        g.transformation = matrixFromTrans(trans[trans.length - 1]);
        prims++;
    }

    /*************************************************************************/
    /* drawing stuff
    /*************************************************************************/

    public function circle(c:Vector, r:Float) {
        g.fillCircle(c.x, c.y, r); prims++;
    }

    public function rect(tl:Vector, br:Vector) {
        var dims = br.sub(tl);
        g.fillRect(tl.x, tl.y, dims.x, dims.y);
        prims++;
    }

    public function text(pos:Vector, align:TextAlign, text:String) {
        var xPos:Float = pos.x;
        var textWidth:Float;

        switch (align) {
            case CenterText: {
                textWidth = g.font.stringWidth(text);
                xPos -= textWidth / 2;
            }
            case RightText: {
                textWidth = g.font.stringWidth(text);
                xPos += textWidth;
            }
            default: {}
        }

        g.drawString(text, xPos, pos.y); prims++;
    }

    /*************************************************************************/
    /* drawing images
    /*************************************************************************/

    public function image(pos:Vector, image:String) {
        var image = Loader.the.getImage(image);
        g.drawImage(image, pos.x, pos.y); prims++;
    }

    public function imageCrop(
        pos:Vector, imgPos:Vector
        , cropDims:Vector, image:String
    ) {
        var image = Loader.the.getImage(image);
        g.drawSubImage(
            image
            , pos.x, pos.y
            , imgPos.x, imgPos.y 
            , cropDims.x, cropDims.y );   

        prims++;
    }

    private function matrixFromTrans(trans:Transform
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
