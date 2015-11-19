package solemnsky.core.vanilla;

import solemnsky.core.CoreControl;
import solemnsky.engine.mod.PlayerMod;
import solemnsky.core.vanilla.Synonyms;
import solemnsky.core.CoreControl;

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

    public function handle(control:CoreControl) {
        var plane = player.plane;
        if (plane == null) return;
        var state = plane.state;

        switch (control) {
            case CCUp(x): state.movement.forward = x;
            case CCDown(x): state.movement.backward = x;
            case CCLeft(x): state.movement.left = x;
            case CCRight(x): state.movement.right = x;
            default: {}
        }
    }
}

class VanillaPlayerMod extends PlayerMod<VanillaPlayer,VanillaProp> {
    public function new(player:MyPlayer) {
        super(player);
        custom.attach(player);
    }   
}