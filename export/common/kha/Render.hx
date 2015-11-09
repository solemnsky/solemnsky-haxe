package;

import control.Scene;
import kha.Color;
import kha.FontStyle;
import kha.Loader;
import kha.graphics2.Graphics;
import util.Transform;

using kha.graphics2.GraphicsExtension;

/**
 * Scene implementation for the kha web export.
 */

class Render {
    private static function renderPrim(
        gr:Graphics
        ,prim:DrawPrim
    ){
        switch (prim) {
            // setting state
            case SetColor(r, g, b, a): {
                gr.color = Color.fromBytes(r, g, b, a);
            }

            case SetAlpha(a): {
                gr.opacity = a;
            }

            case SetFont(name, size): {
                gr.font = Loader.the.loadFont(
                    name, new FontStyle(false, false, false), size);
            }

            // drawing primitives
            case DrawCircle(pos, radius): {
                gr.fillCircle(pos.x, pos.y, radius);
            }

            case DrawRect(topLeft, bottomRight): {
                var width  = bottomRight.x - topLeft.x; 
                var height = bottomRight.y - topLeft.y;
                // var center = 
                //     { x: (bottomRight.x + topLeft.x) / 2
                //     , y: (bottomRight.y + topLeft.y) / 2 }
                gr.fillRect(topLeft.x, topLeft.y, width, height);
            }

            case DrawText(pos, align, text): {
                var xPos:Float = pos.x;
                var textWidth:Float;
                switch (align) {
                    case CenterText: {
                        textWidth = gr.font.stringWidth(text);
                        xPos -= textWidth / 2;
                    }
                    case RightText: {
                        textWidth = gr.font.stringWidth(text);
                        xPos += textWidth;
                    }
                    default: {}
                }
                gr.drawString(text, xPos, pos.y);
            }

            // images
            case DrawImage(pos, image): {
                var image = Loader.the.getImage(image);
                gr.drawImage(image, pos.x, pos.y);
            }
        }
    }

    public static function renderNoInit(
        pTrans:Transform // parent
        ,pOpacity:Float // parent
        ,g:Graphics
        ,scene:Scene
    ):Int {
        var prims = scene.prims.length;

        var resultTrans = pTrans.multmat(scene.trans);
        var resultOpacity = pOpacity * scene.alpha;

        g.transformation = matrixFromTrans(resultTrans);
        g.opacity = (resultOpacity);
        for (prim in scene.prims){
            renderPrim(g, prim);
        }
        for (child in scene.children){
            prims += renderNoInit(resultTrans, resultOpacity, g, child);
        }
        
        return prims;
    }

    public static function render(g:Graphics, scene:Scene):Int {
        g.begin(true, 0xffffff);
        var prims = renderNoInit(Transform.identity(), 1, g, scene);
        g.end();
        return prims;
    }

    private static function matrixFromTrans(trans:Transform
    ):kha.math.FastMatrix3 {
        return new kha.math.FastMatrix3(
              trans._00, trans._10, trans._20
            , trans._01, trans._11, trans._21
            , trans._02, trans._12, trans._22
        );
    }
}
