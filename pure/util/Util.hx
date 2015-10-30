package solemnsky;

import math.Vector;
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
} 
