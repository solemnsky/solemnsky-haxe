package solemnsky.engine;

import util.Util;
import util.Vector;
import util.Transform;
import control.Scene;
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

    public static function renderDebugPlayer<D,P>(
        p:PlayerRep
    ): Scene {
        var scene = new Scene();

        if (p.alive) {
            var bodyColor = SetColor(255, 255, 255, 255);
            if (p.stalled) 
                bodyColor = SetColor(200, 200, 200, 255);

            var headColor = SetColor(255, 0, 0, 255);
            if (! p.afterburner)
                headColor = SetColor(200, 0, 0, 255);

            scene.prims = 
                [ bodyColor
                , DrawRect(
                    new Vector(-p.length / 2, -p.width / 2)
                    , new Vector(p.length / 2, p.width / 2))
                , headColor
                , DrawRect(
                    new Vector(p.length / 3, -p.width / 2)
                    , new Vector(p.length / 2, p.width / 2)) ];

            scene.trans = playerTrans(p);
        }
        return scene;
    }

    public static function playerSprite<D,P>(roll:Float):Scene {
        roll = Util.normAngle(roll);

        var scene = new Scene();

        var spriteRoll:Float;
        if (roll > Math.PI) spriteRoll = (2*Math.PI - roll)
        else spriteRoll = roll;

        scene.prims = [
            SetColor(255, 255, 255, 255)
            , DrawImageCrop(
                new Vector(-100, -100)
                , new Vector(0
                    , 200*Math.floor(
                        30 * spriteRoll / Math.PI))
                , new Vector(200, 200)
                , "player"
            )
        ];

        if (roll > Math.PI) scene.trans = Transform.scale(1, -1);

        return scene;
    }

    public static function renderPlayer<D,P>(
        p:PlayerRep
    ): Scene {
        var scene = new Scene();

        if (p.alive) {
            scene.children = [
                playerSprite(p.roll)
            ];

            scene.trans = playerTrans(p)
                .multmat(Transform.scale(-0.7, 0.7));
        }

        return scene;
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
