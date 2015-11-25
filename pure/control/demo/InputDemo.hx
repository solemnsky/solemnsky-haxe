package control.demo;

import control.Control;
import control.Event;
import control.Frame;
import control.Profile;
import control.Key;
import util.Vector;
import util.Transform;

/**
 * solemnsky.control.demo.InputDemo:
 * Demo control object demonstrating input.
 */

typedef Movement = {
    left:Bool, right:Bool, down:Bool, up:Bool
}

class InputDemo implements Control<DemoSelect> {
    private var pos:Vector;
    private var ball:Vector;
    private var movement:Movement;
    private var exit:Bool = false;

    public function new() {
        pos = new Vector(0, 0);
        ball = new Vector(0, 0);
        movement = 
            {left: false, right: false, down: false, up: false};
    }   

    public function init(_) {}

    public function tick(delta:Float):Void {
        var factor = Math.pow(0.8, delta);
        ball = ball.add(pos.sub(ball).mult(factor));

        var moveScale = delta;
        if (movement.up) ball = 
            ball.add((new Vector(0, -1)).mult(moveScale));
        if (movement.down) ball = 
            ball.add((new Vector(0, 1)).mult(moveScale));
        if (movement.right) ball = 
            ball.add((new Vector(1, 0)).mult(moveScale));
        if (movement.left) ball = 
            ball.add((new Vector(-1, 0)).mult(moveScale));
    }

    public function render(f:Frame, delta:Float) {
        f.color(0, 255, 0, 255);
        f.circle(ball, 50);
        f.color(255, 0, 0, 127);
        f.circle(pos, 50);
    }

    public function profiling(d:Profile) {
        trace(d.print());
    }

    private function handleKb(key, state):Void {
        switch (key) {
        case CharKey(char): {
            if (char == 'i') movement.up = state;
            if (char == 'j') movement.left = state;
            if (char == 'l') movement.right = state;
            if (char == 'k') movement.down = state;
            if (char == 'q') exit = true;
        }
        default: {}
        }
    }

    public function handle(e:Event):Void {
        switch (e) {
        case MouseEvent(x, y): {
            pos.x = x; pos.y = y;
        }
        case KbEvent(key, state): 
            handleKb(key, state);
        default: {}
        }
    }

    public function conclude():Null<DemoSelect> {
        if (exit) return HomeSelect;
        return null;
    }
}
