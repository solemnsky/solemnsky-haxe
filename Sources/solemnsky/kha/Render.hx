package solemnsky.kha;

import kha.Color;
import kha.graphics2.Graphics;
import kha.math.FastMatrix3;
import solemnsky.control.Scene;

using kha.graphics2.GraphicsExtension;

class Render {
    private static function renderPrim(gr:Graphics
                                      ,prim:DrawPrim) {
        switch (prim) {
            case DrawCircle(p, r): {
                gr.fillCircle(p.x, p.y, r);
            }
            case DrawColor(r, g, b, a): {
                gr.set_color(Color.fromBytes(r, g, b, a));
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