package solemnsky.kha;

import haxe.Timer;
import kha.Framebuffer;
import kha.Game;
using kha.graphics2.GraphicsExtension;

import solemnsky.control.Scene;

class Render {
    private static function renderPrimInFrame(frame:Framebuffer
                                             , prim:DrawPrim) {
        switch (prim) {
            case DrawCircle(p, r): {
                frame.g2.fillCircle(p.x, p.y, r);
            }
        }
    }

    public static function render(frame:Framebuffer, scene:Scene) {

        function renderPrim(prim:DrawPrim):Void {
            renderPrimInFrame(frame, prim);
        }

        frame.g2.begin(false, 0xff0000);
        scene.drawWith(renderPrim);
        frame.g2.end();
    }
}