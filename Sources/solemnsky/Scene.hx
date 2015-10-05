package solemnsky.control;

/**
 * Represents a set of 
 */
class DrawMethods {
    private var transform:Dynamic;

    public function new(transform:Dynamic) {
        this.transform = transform;
    }

    public function drawSomething() {
        // draw something with this.transform in scope
    }
}

/**
 * Represents a scene object, that can be drawn.
 */
class Scene {
    public function new() {

    } 
}