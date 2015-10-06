package solemnsky.kha;

import haxe.Timer;
import kha.Framebuffer;
import kha.Game;
using kha.graphics2.GraphicsExtension;

import solemnsky.control.Scene;

class Render {
    private static function renderPrimInFrame(frame:Framebuffer
                                             , prim:DrawPrim) {
        // test graphics
        frame.g2.begin(false, 0xff0000);
        frame.g2.fillCircle(20, 20, 20);
        frame.g2.end();
    }

    public static function render(frame:Framebuffer, scene:Scene) {

        function renderPrim(prim:DrawPrim):Void {
            renderPrimInFrame(frame, prim);
        }

        scene.drawWith(renderPrim);
    }
}