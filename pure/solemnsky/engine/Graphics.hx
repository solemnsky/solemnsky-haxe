package solemnsky.engine;

import util.Util;
import util.Vector;
import util.Transform;
import control.Frame;
import solemnsky.engine.Plane;
import solemnsky.engine.Player;
import solemnsky.engine.mod.PlayerMod;

/**
 * solemnsky.engine.Graphics:
 * Universally useful graphics functions.
 * Some basic graphics is also managed by the Engine system.
 */

class Graphics {
    /*************************************************************************/
    /* planes
    /*************************************************************************/

    private inline static function playerTrans<D,P>(
        p:PlayerRep
    ): Transform {
        return Transform.translation(p.pos.x, p.pos.y)
            .multmat(Transform.rotation(p.rot));
    }

    public static function renderDebugPlayer<D,P>(f:Frame,
        p:PlayerRep
    ) {
        if (p.alive) {
            f.pushTransform(playerTrans(p));

            if (p.stalled) f.color(200, 200, 200, 255);
            else f.color(255, 255, 255, 255);

            f.rect(
                new Vector(-p.length / 2, -p.width / 2)
                , new Vector(p.length / 2, p.width / 2));

            if (!p.afterburner) f.color(200, 0, 0, 255);
            else f.color(255, 0, 0, 255);

            f.rect(
                new Vector(p.length / 3, -p.width / 2)
                , new Vector(p.length / 2, p.width / 2));

            f.popTransform();
        }
    }

    public static function playerSprite<D,P>(f:Frame, sheet:String) {
        roll = Util.normAngle(roll);

        var spriteRoll:Float;
        if (roll > Math.PI) spriteRoll = (2*Math.PI - roll)
        else spriteRoll = roll;

        var yindex = Math.floor(30 * spriteRoll / Math.PI);
        var xindex = 0;
        if (yindex > 14) {
            yindex -= 15;
            xindex = 1;
        };

        if (roll > Math.PI) f.pushTransform(Transform.scale(1, -1));

        f.color(255, 255, 255, 255);
        f.imageCrop(
            new Vector(-100, -100)
            , new Vector(200*xindex, 200*yindex)
            , new Vector(200, 200)
            , sheet
        );

        if (roll > Math.PI) f.popTransform();
    }

    public static function renderPlayer<D,P>(f:Frame,
        p:PlayerRep
    ): Scene {
        if (p.alive) {
            f.pushTransform(playerTrans(p)
                .multmat(Transform.scale(-0.7, 0.7))
            );

            playerSprite(f, "player", p.roll);

            f.popTransform();
        }
    }

    /*************************************************************************/
    /* player view
    /*************************************************************************/

    private static function putView(
        viewWidth:Float, totalWidth:Float, viewTarget:Float
    ):Float {
        if (totalWidth < viewWidth) 
            return (totalWidth / 2) - viewWidth;
        if (viewTarget - (viewWidth / 2) < 0) 
            return 0;
        if (viewTarget + (viewWidth / 2) > totalWidth)
            return (totalWidth - viewWidth);
        return (viewTarget - (viewWidth / 2));
    }

    public static function getPlayerView<D,P>(
        player:Player<D,P>
    ): Transform {
        var edim = player.engine.environment.dimensions;

        if (player.plane != null) {
            var pos = player.plane.state.pos;

            return Transform.translation(
                -putView(1600, edim.x, pos.x)
                , -putView(900, edim.y, pos.y)
            );
        }

        return Transform.translation(
            -putView(1600, edim.x, edim.x / 2)
            , -putView(900, edim.y, edim.y / 2)
        );
    }
}
