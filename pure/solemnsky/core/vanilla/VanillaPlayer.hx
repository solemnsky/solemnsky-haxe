package solemnsky.core.vanilla;

import solemnsky.engine.mod.PlayerMod;
import solemnsky.core.vanilla.Synonyms;

/**
 * solemnsky.core.vanilla.VanillaPlayer:
 * Player custom datatype for Vanilla.
 */

class VanillaPlayer {
    public var name:String;

    public function new(name:String) {
        this.name = name;
    }

    /************************************************************/
    /* custom logic
    /************************************************************/

    private var player:MyPlayer;
    private var engine:MyEngine;

    public function attach(player:MyPlayer) {
        this.player = player;
    }

    public function handle(control:CoreControl)
}

class VanillaPlayerMod extends PlayerMod<VanillaPlayer,VanillaProp> {
    public function new(player:MyPlayer) {
        super(player);
        custom.attach(player);
    }   
}