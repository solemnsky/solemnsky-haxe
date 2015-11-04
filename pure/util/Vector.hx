package util;

/**
 * util.Vector
 * Vector class, representing a 2d vector.
 */

// 
enum VectorConstruct {
    XY(x:Float, y:Float);
    Unit(alpha:Float);
}
 
class Vector implements Construct<VectorConstruct> {
    /*************************************************************************/
    /* constructor
    /*************************************************************************/

    public var x:Float = 0;
    public var y:Float = 0;

    public function new() {}

    public function fromConstruct(construct:VectorConstruct) {
        switch (construc) {
        case XY(x, y): {
            this.x = x; this.y = y
        }
        case Unit(alpha) {
            this.x = Math.cos(alpha); this.y = Math.sin(alpha);
        }
        }
    }

    public inline function clone():Vector {
        return new Vector(x,y);
    }

    public inline function set(x:Float, y:Float):Void {
        this.x = x; this.y = y;
    }

    public inline function dot(v:Vector):Float {
        return x * v.x + y * v.y;
    }

    public inline function cross(v:Vector):Float {
        return x * v.y - y * v.x;
    }

    public inline function add(v:Vector):Vector {
        return new Vector(x + v.x, y + v.y);
    }

    public inline function sub(v:Vector):Vector {
        return new Vector(x - v.x, y - v.y);
    }

    public inline function mult(s:Float):Vector {
        return new Vector(x * s, y * s);
    }

    public inline function angle():Float {
        return Math.atan2(y, x);
    }

    public inline function length():Float {
        return Math.sqrt(x * x + y * y);
    }

    public function toString():String {
        return '('+(Math.round(x*100)/100)+','+(Math.round(y*100)/100)+')';
    }

    public static function fromAngle(angle:Float):Vector {
        return new Vector(Math.cos(angle), Math.sin(angle));
    }

    public static var zero = new Vector(0, 0);
}
