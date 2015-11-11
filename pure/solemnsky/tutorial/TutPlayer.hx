package solemnsky.tutorial;

import solemnsky.engine.Player;
import solemnsky.engine.custom.PlayerCustom;
import solemnsky.engine.mod.PropMod;
import util.Util;

/**
 * solemnsky.tutorial.TutPlayer:
 * Player custom object for the tutorial.
 */

class TutPlayer implements PlayerCustom<TutPlayer,TutProp> {
    public var name:String;
    private var player:Player<TutPlayer,TutProp>;

    public function new(name:String) {
        this.name = name;
    }

    public function attachPlayer(player:Player<TutPlayer,TutProp>) {
        this.player = player;
    }

    /***************************************************************/
    /* pewpew madafacka
    /***************************************************************/

    public function pewpewMadafacka() {
        var propMod = new PropMod();
        var custom = new TutProp();
        player.parent.spawnProp(0, custom, myPropMod());
        trace('pewpew');
        trace(Util.mapLength(player.parent.props));
    }

    public function myPropMod():PropMod {
        var mod = new PropMod();
        return mod;
    }
}
