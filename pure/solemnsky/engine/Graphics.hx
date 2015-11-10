package solemnsky.engine;

import util.Vector;
import util.Transform;
import control.Scene;
import solemnsky.engine.Plane;

/**
 * solemnsky.engine.Graphics:
 * Universally useful graphics functions.
 * Some basic graphics is also managed by the Engine system.
 */

class Graphics {
    public static function renderVector(vec:Vector):Scene {
        var scene = new Scene();

        scene.prims = [
            SetColor(0, 255, 0, 255)
            , DrawRect(new Vector(-2, 20), new Vector(2, 20))
        ];

        scene.trans = Transform.translation(800, 700)
            .multmat(Transform.rotation(vec.angle()))
            .multmat(Transform.scale(vec.length(), vec.length()));

        return scene;
    }

    public static function renderDebugPlayer<D>(
        player:Player<D>
    ): Scene {
        var scene = new Scene();
        return scene;
    }

    public static function renderPlayer<D>(
        player:Player<D>
    ): Scene {
        var scene = new Scene();

        if (player.plane != null) {
            var state:PlaneState = player.plane.state;
            var gfxState:PlaneGraphicsState = player.plane.gfxState;

            // we have to make sure the player sprite
            // is centered on the COM of the player... 
            scene.prims = [
                SetColor(255, 255, 255, 255)
                , SetAlpha(1)
                , DrawImage(new Vector(-200, -100), "player")
                , SetAlpha(gfxState.burnFade)
                , DrawImage(new Vector(-400, -100), "player-thrust")
            ];

            scene.trans = Transform.translation(state.pos.x, state.pos.y)
                .multmat(Transform.rotation(state.rot))
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

    public static function getPlayerView<D>(
        player:Player<D>
    ): Transform {
        var edim = player.parent.environment.dimensions;
        var pos = player.plane.state.pos;
        // lol the OOP

        return Transform.translation(
            -putView(1600, edim.x, pos.x)
            , -putView(900, edim.y, pos.y)
        );
    }
}
