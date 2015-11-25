package control.demo;

import control.Control;
import control.Event;
import control.Frame;
import util.Vector;
import util.Transform;

/**
 * solemnsky.control.demo.GraphicsDemo:
 * Demo control object demonstrating graphics.
 */

class GraphicsDemo implements Control<DemoSelect> {
    private var time:Float = 0;
    private var x:Float = 0;
    private var y:Float = 0;
    private var exit:Bool = false;

    public function new():Void {}

    public function init(_):Void {}

    public function tick(delta:Float):Void {
        time += delta;
    }

    private function renderElem(f:Frame, centerPos:Vector) {
        f.pushTransform(Transform.identity()
            .multmat(Transform.translation(centerPos.x, centerPos.y))
            .multmat(Transform.rotation(time / 1000))
        );

        var pos = new Vector(0, 0);
        var offset = new Vector(27, 0);

        f.color(0, 255, 0, 255);
        f.circle(pos, 20);
        f.circle(pos.add(offset), 7);

        f.popTransform();
    }

    public function renderFront(f:Frame, delta:Float) {
        f.pushTransform(Transform.identity()
            .multmat(Transform.translation(x, y))
            .multmat(Transform.rotation(-time / 1200))
        );

        var offset  = new Vector(40, -40);
        var offset2 = new Vector(40, 40);

        var pos = new Vector(0, 0);
        for (i in 1 ... 20) {
            renderElem(f, pos); pos = pos.add(offset); }

        pos = new Vector(0, 0);
        for (i in 1 ... 20) {
            renderElem(f, pos); pos = pos.add(offset2); }

        pos = new Vector(0, 0);
        for (i in 1 ... 20) {
            renderElem(f, pos); pos = pos.sub(offset2); }

        pos = new Vector(0, 0);
        for (i in 1 ... 20) {
            renderElem(f, pos); pos = pos.sub(offset); }

        f.color(0, 0, 0, 100);
        f.rect(new Vector(0, 0), new Vector(200, 200));
        f.rect(new Vector(0, 0), new Vector(-200, -200));
        f.color(0, 0, 0, 200);
        f.rect(new Vector(0, 0), new Vector(200, -200));
        f.rect(new Vector(0, 0), new Vector(-200, 200));

        f.popTransform();
    }

    public function render(f:Frame, delta:Float) {
        renderFront(f, delta);

        f.color(255, 255, 255, 255);
        f.image(new Vector(0, 0), "title");
        f.color(0, 0, 0, 255);
        f.font("Arial", 14);
        f.text(new Vector(500, 500), LeftText, "this text isn't part of the image");
    }

    public function handle(e:Event):Void {
        switch (e) {
            case MouseEvent(x, y): {
                this.x = x; this.y = y;
            }
            case KbEvent(key, state): {
                if (Type.enumEq(key, CharKey('q')))
                    exit = true;
            }
            default: { }
        }
    }

    public function profiling(data:Profile):Void {
        trace(data.print());
    }

    public function conclude():Null<DemoSelect> {
        if (exit) return HomeSelect;
        return null;
    }
}
