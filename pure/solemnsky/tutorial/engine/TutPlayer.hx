package solemnsky.tutorial.engine;

import util.Vector;
import solemnsky.engine.mod.PlayerMod;
import solemnsky.tutorial.engine.TutProp;
import solemnsky.tutorial.engine.Synonyms;

/**
 * solemnsky.tutorial.engine.TutPlane:
 * Our own plane mod with some extra functions.
 */

class TutPlayer {
    private static inline var maxCooldownP:Float = 150;
    private static inline var maxCooldownS:Float = 100;
    private var cooldownP:Float;
    private var cooldownS:Float;
    private var shootingP:Bool;
    private var shootingS:Bool;

    private var player:MyPlayer;
    private var engine:MyEngine;

    public function new() {
        cooldownP = 0;
        shootingP = false;

        cooldownS = 0;
        shootingS = false;
    }

    /******************************************************************/ 
    /* custom logic
    /******************************************************************/ 

    public function attach(player:MyPlayer) {
        this.player = player;
        engine = player.engine;
    }

    public function primary(state:Bool) {
        shootingP = state;
    }

    public function secondary(state:Bool) {
        shootingS = state;
    }

    private function shootP() {
        var plane = player.plane;
        if (plane == null) return;

        var state = plane.state;
        var length = plane.mod.length;

        engine.spawnProp(plane.id, 
            new TutBullet(
                state.pos.add(
                    Vector.fromAngle(state.rot).mult(length/2 + 10)
                )
                , state.vel.add(
                    Vector.fromAngle(state.rot).mult(500)
                )
            )
        );
    }

    private function shootS() {
        var plane = player.plane;
        if (plane == null) return;

        var state = plane.state;
        var width = plane.mod.length;

        engine.spawnProp(plane.id, 
            new TutBomb(
                state.pos.add(
                    player.downVector().mult(width/2 + 10)
                )
                , state.vel
            )
        );
    }

    public function tickPlane(delta:Float) {
        cooldownP -= delta;
        cooldownS -= delta;

        if (cooldownP < 0 && shootingP) {
            cooldownP = maxCooldownP;
            shootP();
        }

        if (cooldownS < 0 && shootingS) {
            cooldownS = maxCooldownS;
            shootS();
        }
    }
}

class TutPlayerMod extends PlayerMod<TutPlayer,TutProp> {
    public function new(player) {
        super(player);

        custom.attach(player);
    } 

    override function onTickPlane(delta:Float, _) {
        custom.tickPlane(delta);
    }
}
