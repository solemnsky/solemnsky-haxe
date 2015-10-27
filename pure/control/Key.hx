package control;

/**
 * solemnsky.control.Key
 * Datatype representing a keyboard key.
 */

enum Key {
    CharKey(char:String);
    BadKey;

    ArrLeftKey; // NOT implemented in Kha (not caught?!)
    ArrRightKey;
    ArrUpKey;
    ArrDownKey;
} 
