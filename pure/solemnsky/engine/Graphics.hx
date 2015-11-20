package solemnsky.engine;

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

        if (p.alive != null) {
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

    /**
     * Get one index of the player sheet.
     */
    public static function playerSprite(roll:Float):DrawPrim {
        return DrawImageCrop(
            new Vector(-200, -100)
            , new Vector(0, 0)
            , new Vector(1000, 1000)
            , "player"
        );
    }

    public static function renderPlayer<D,P>(
        p:PlayerRep
    ): Scene {
        var scene = new Scene();
        
        if (p.alive) {
            scene.prims = [
                SetColor(255, 255, 255, 255)
                , SetAlpha(1)
                , playerSprite(p.roll)
            ];

            scene.trans = playerTrans(p)
                .multmat(Transform.scale(1/5, 1/5));
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
