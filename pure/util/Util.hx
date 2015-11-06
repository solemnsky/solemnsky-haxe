package util;

import util.Vector;
import nape.geom.Vec2;

/**
 * util.Util:
 * Static utility functions.
 */

class Util {
    public static function napeFromVector(vec:Vector):Vec2 {
        return new Vec2(vec.x, vec.y);
    }

    public static function vectorFromNape(vec:Vec2):Vector {
        return new Vector(vec.x, vec.y);
    }

    public static function allocNewId(ids:Array<Int>):Int {
        var next = 0;
        ids.sort(function(x, y) {
            return (x > y)
        });
        for (id in ids) {
            if (id == next) next++;
            else return next;
        }
        return next;
    }
} 
