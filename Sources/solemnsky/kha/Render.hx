package solemnsky.kha;

import haxe.Timer;
import kha.Framebuffer;
import kha.Game;
import kha.math.FastMatrix3;
using kha.graphics2.GraphicsExtension;

import solemnsky.control.Scene;
import solemnsky.math.Mat3;

class Render {
    private static function renderPrim(frame:Framebuffer
                                      , prim:DrawPrim) {
        switch (prim) {
            case DrawCircle(p, r): {
                frame.g2.fillCircle(p.x, p.y, r);
            }
        }
    }

    public static function renderNoInit(frame:Framebuffer, scene:Scene) {
        frame.g2.pushTransformation(matToTransform(scene.trans));
        frame.g2.pushOpacity(scene.alpha);
        for (prim in scene.prims){
            renderPrim(frame, prim);
        }
        for (child in scene.children){
            renderNoInit(frame, child);
        }
        frame.g2.popOpacity();
        frame.g2.popTransformation();
    }

    public static function render(frame:Framebuffer, scene:Scene) {
        frame.g2.begin(false, 0xff0000);
        renderNoInit(frame, scene);
        frame.g2.end();
    }

    private static function matToTransform(mat:Mat3):FastMatrix3 {
        return new FastMatrix3(mat._00, mat._10, mat._20
                              ,mat._01, mat._11, mat._21
                              ,mat._02, mat._12, mat._22);
    }
}