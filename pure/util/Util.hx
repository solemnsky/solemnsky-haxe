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

    public static function allocNewId(ids:Iterator<Int>):Int {
        var next = 0;
        var arr:Array<Int> = [];

        for (id in ids) arr.push(id);
        arr.sort(function(x, y) {
            return x - y;
        });

        for (id in arr) {
            if (id == next) next++;
            else return next;
        }

        return next;
    }

    public static function mapLength<A,B>(map:Map<A,B>):Int {
        var len = 0;
        for (k in map.keys()) len++;
        return len;
    }
} 
