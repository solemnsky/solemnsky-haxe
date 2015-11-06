package solemnsky.core.vanilla;

import solemnsky.engine.Plane;

/**
 * solemnsky.core.vanilla.Player:
 * Object representing a player.
 */

class Player {
    public var plane:Null<Plane>;
    public var name:String;

    public function new(name:String) {
        plane = null;
        this.name = name;
    }
}