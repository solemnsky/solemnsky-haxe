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
    public function new(/*some arguments*/):Void;
    public function reset(/*some arguments*/):Void;
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
    public function get(/*some arguments*/):T {
        index++;
        if (pool.length > index) {
            pool[index].reset(/*some arguments*/);
        } else {
            pool.push(new T(/*some arguments*/));
        }
        return pool[index];
    }
}
