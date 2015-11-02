package util;

/**
 * util.Pool:
 * A Pool object to manage disposable object pooling, circunventing GC
 * and reducing memory churn, along with a Poolable interface that represents
 * an object that can be managed with a Pool.
 * 
 * This is for the code in the render / logic loops that works with objects
 * that don't live for more than one frame.
 */

interface Poolable {
    public function new():Void;
    public function reset():Void;
}

class Pool<T:Poolable> {
    private var index:Int;
    private var pool:Array<T>;

    public function new() {
        pool = [];
        clear();
    }

    /**
     * Signals that all the objects are no longer in use.
     */
    public function clear() {
        index = 0;
    }

    /**
     * Asks for a new object.
     */
    public function new():T {
        index++;
        if (pool.length > index) {
            pool[index].reset();
            return pool[index];
        } else {
        }
    }
}

