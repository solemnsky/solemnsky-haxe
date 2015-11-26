package solemnsky.engine;

import util.Vector;

/**
 * solemnsky.engine.Environment:
 * Represents the non-player gameplay environment.
 * Can be loaded statically; at the moment this is not mutable.
 */

class Environment {
    public var dimensions:Vector;

    public function new(w:Float, h:Float) {
        dimensions = new Vector(w, h);
    }
}