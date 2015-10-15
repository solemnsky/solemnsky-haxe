package math;

/**
 * math.Vector
 * Vector class, representing a 2d vector.
 */

class Vector {
    public var x:Float;
    public var y:Float;

    public function new(x:Float, y:Float) {
        this.x = x; this.y = y;
    }

    public inline function clone():Void {
        return new Vector(x,y);
    }

    public inline function set(x:Float, y:Float):Void {
        this.x = x; this.y = y;
    }

    public inline function dot(v:Vector):Vector {
        return x * v.x + y * v.y;
    }

    public inline function cross(v:Vector):Vector {
        return x * v.y - y * v.x;
    }

    public inline function plus(v:Vector):Vector {
        return new Vector(x + v.x, y + v.y);
    }

    public inline function sub(v:Vector):Vector {
        return new Vector(x - v.x, y - v.y);
    }

    public inline function mult(s:Float):Vector {
        return new Vector(x * s, y * s);
    }

    public inline function length():Float {
        return Math.sqrt(x * x + y * y);
    }

    public function toString():String {
        return '('+(Math.round(x*100)/100)+','+(Math.round(y*100)/100)+')';
    }
}
