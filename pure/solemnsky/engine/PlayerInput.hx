package solemnsky.core;

/**
 * solemnsky.enigne.PlayerInput:
 * Abstract 'input' datatype representing a control action done
 * by a player, which can be bound to keyboard and mouse events in
 * UI implementations.
 */

enum PlayerInput {
    PIUp(state:Bool);
    PIDown(state:Bool);
    PILeft(state:Bool);
    PIRight(state:Bool);
    PIFire(state:Bool);
    PISecondary(state:Bool);
    PISpawn;
}
