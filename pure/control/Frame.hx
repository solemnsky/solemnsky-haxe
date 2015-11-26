package control;

import util.Transform;
import util.Vector;

/**
 * solemnsky.control.Frame: 
 * A Frame interface representing a thiing you can draw graphics on.
 */

enum TextAlign { CenterText; LeftText; RightText; }

/**
 * Represents a graphics framebuffer that you can draw some mad 
 * graphics in, man.
 * For now this is mostly verbatium Kha.
 */
interface Frame {
    /*************************************************************************/
    /* setting drawing attributes
    /*************************************************************************/

    public function color(r:Int, g:Int, b:Int, a:Int):Void;
    public function font(name:String, size:Int):Void;

    public function pushAlpha(a:Float):Void;
    public function popAlpha():Void;
    public function pushTransform(t:Transform):Void;
    public function popTransform():Void;

    /*************************************************************************/
    /* drawing stuff
    /*************************************************************************/

    public function circle(c:Vector, r:Float):Void;
    public function rect(tl:Vector, br:Vector):Void;
    public function text(p:Vector, a:TextAlign, text:String):Void;

    /*************************************************************************/
    /* drawing images
    /*************************************************************************/

    public function image(pos:Vector, name:String):Void;
    public function imageCrop(
        pos:Vector, imgPos:Vector
        , cropDims:Vector, name:String):Void;
}
