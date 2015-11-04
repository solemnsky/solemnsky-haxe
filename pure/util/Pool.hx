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

/**
 * A class that's very much in tune with the immutable design pattern; can be
 * constructed from a small non-instantiated constructor value and doesn't
 * live for longer than a single cycle or logical operation.
 */
interface Construct<C> {
    // C: the constructor type

    /**
     * Set the 
     */
    public function fromConstruct(construct:C):Void;
}

class Pool<T:Construct<C>> {
    // T: the type of the pool's elements

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
    public function get(construct:C):T {
        index++;
        if (pool.length > index) pool.push(new T());
        pool[index].fromConstruct(construct);
        return pool[index];
    }
}
