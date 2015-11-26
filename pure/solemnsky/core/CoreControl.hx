package solemnsky.core;

/**
 * solemnsky.core.CoreControl:
 * Abstract 'control' datatype representing a control action done
 * by a player, which can be bound to keyboard and mouse events in
 * UI implementations.
 */

enum CoreControl {
    CCUp(state:Bool);
    CCDown(state:Bool);
    CCLeft(state:Bool);
    CCRight(state:Bool);
    CCFire(state:Bool);
    CCSecondary(state:Bool);
    CCSpawn;
}
