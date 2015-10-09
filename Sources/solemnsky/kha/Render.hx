package solemnsky.kha;

import kha.Color;
import kha.graphics2.Graphics;
import kha.math.FastMatrix3;
import solemnsky.control.Scene;

using kha.graphics2.GraphicsExtension;

/**
 * solemnsky.kha.Render:
 * Renders scene graphs to a kha graphics object.
 */

class Render {
    private static function renderPrim(gr:Graphics
                                      ,prim:DrawPrim) {
        switch (prim) {
            // setting state
            case SetColor(r, g, b, a): {
                gr.color = Color.fromBytes(r, g, b, a);
            }

            case SetFont(font): {
                gr.font = font;
            }

            // drawing primitives
            case DrawCircle(pos, radius): {
                gr.fillCircle(pos.x, pos.y, radius);
            }

            case DrawText(pos, align, text): {
                gr.drawString(text, pos.x, pos.y);
            }

            // images
            case DrawImage(pos, image): {
                gr.drawImage(image, pos.x, pos.y);
            }
        }
    }

    public static function renderNoInit(pTrans:FastMatrix3 // parent
                                       ,pOpacity:Float // parent
                                       ,g:Graphics
                                       ,scene:Scene) {
        var resultTrans = pTrans.multmat(scene.trans);
        var resultOpacity = pOpacity * scene.alpha;

        g.transformation = resultTrans;
        g.opacity = (resultOpacity);
        for (prim in scene.prims){
            renderPrim(g, prim);
        }
        for (child in scene.children){
            renderNoInit(resultTrans, resultOpacity, g, child);
        }
    }

    public static function render(g:Graphics, scene:Scene) {
        g.begin(true, 0xff0000);
        renderNoInit(FastMatrix3.identity(), 1, g, scene);
        g.end();
    }
}