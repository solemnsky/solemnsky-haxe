package control.demo;

import control.Control;
import control.Event;
import control.Scene;
import math.Vector;
import math.Transform;

typedef Movement = {
    left:Bool, right:Bool, down:Bool, up:Bool
}

class InputDemo extends EmptyControl {
    private var pos:Vector;
    private var ball:Vector;
    private var movement:Movement;

    public function new() {
        super();
        pos = new Vector(0, 0);
        ball = new Vector(0, 0);
        movement = 
            {left: false, right: false, down: false, up: false};
    }   

    override function tick(delta:Float):Void {
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

    override function render(delta:Float):Scene {
        var scene = new Scene();

        scene.prims = [
            SetColor(0, 255, 0, 255)
            , DrawCircle(ball, 50)
            , SetColor(255, 0, 0, 127)
            , DrawCircle(pos, 50)
        ];

        return scene;
    }

    override function handle(e:Event):Void {
        switch (e) {
            case MouseMove(x, y): {
                pos.x = x; pos.y = y;
            }
            case CharKey(char, state): {
                if (char == "i") movement.up = state;
                if (char == "j") movement.left = state;
                if (char == "l") movement.right = state;
                if (char == "k") movement.down = state;
            }
            default: {}
        }
    }
}
