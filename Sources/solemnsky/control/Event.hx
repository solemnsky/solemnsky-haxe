package solemnsky.control;

import kha.Key;

/**
 * solemnsky.control.Event: 
 * A single datatype for all UI events.
 */

enum Event {
    MouseMove(x:Int, y:Int);
    CharKey(char:String, state:Bool);
    SpecialKey(key:Key, state:Bool);
}
