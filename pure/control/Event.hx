package control;

/**
 * solemnsky.control.Event: 
 * A single datatype for all UI events.
 */

enum Event {
    MouseEvent(x:Float, y:Float);
    KbEvent(key:Key, state:Bool);
}
