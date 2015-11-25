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
class Frame {
    /*************************************************************************/
    /* setting drawing attributes
    /*************************************************************************/

    public function color(r:Int, g:Int, b:Int, a:Int);
    public function font(name:String, size:Int);

    public function pushAlpha(a:Int);
    public function popAlpha();
    public function pushTransform(t:Transform);
    public function popTransform();

    /*************************************************************************/
    /* drawing stuff
    /*************************************************************************/

    public function circle(c:Vector, r:Float);
    public function rect(tl:Vector, br:Vector);
    public function text(p:Vector, a:TextAlign, text:String);

    /*************************************************************************/
    /* drawing images
    /*************************************************************************/

    public function image(pos:Vector, name:String);
    public function imageCrop(
        pos:Vector, imgPos:Vector
        , cropDims:Vector, name:String);
}
