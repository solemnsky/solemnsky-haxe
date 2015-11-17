package solemnsky.engine;

import util.Vector;
import util.Transform;
import control.Scene;
import solemnsky.engine.mod.PlaneMod;
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

    /*************************************************************************/
    /* planes
    /*************************************************************************/

    private inline static function planeTrans<D,P>(
        plane:Plane<D,P>
    ): Transform {
        var state = plane.state;
        return Transform.translation(state.pos.x, state.pos.y)
            .multmat(Transform.rotation(state.rot));
    }

    public static function renderDebugPlayer<D,P>(
        player:Player<D,P>
    ): Scene {
        var scene = new Scene();
        if (player.plane != null) {
            var state = player.plane.state;
            var mod = player.plane.mod;

            var bodyColor = SetColor(255, 255, 255, 255);
            if (state.stalled) 
                bodyColor = SetColor(200, 200, 200, 255);

            var headColor = SetColor(255, 0, 0, 255);
            if (! state.afterburner)
                headColor = SetColor(200, 0, 0, 255);

            scene.prims = 
                [ bodyColor
                , DrawRect(
                    new Vector(-mod.length / 2, -mod.width / 2)
                    , new Vector(mod.length / 2, mod.width / 2))
                , headColor
                , DrawRect(
                    new Vector(mod.length / 3, -mod.width / 2)
                    , new Vector(mod.length / 2, mod.width / 2)) ];

            scene.trans = planeTrans(player.plane);
        }
        return scene;
    }

    /**
     * Get one index of player-sheet.png
     */
    public static function playerSheet(i:Int) {
        var scene = new Scene();

        scene.prims = [
            DrawImageCrop(
                new Vector(-200, -100)
                , new Vector(0, i * 200)
                , new Vector(400, 200)
                , "player-sheet"
            )
        ];

        return scene;
    }

    public static function renderPlayer<D,P>(
        player:Player<D,P>
    ): Scene {
        var scene = new Scene();

        if (player.plane != null) {
            var gfxState:PlaneGraphicsState = player.plane.gfxState;
            var state:PlaneState = player.plane.state;
            var mod:PlaneMod<D,P> = player.plane.mod;

            // we have to make sure the player sprite
            // is centered on the COM of the player... 
            scene.prims = [
                SetColor(255, 255, 255, 255)
                , SetAlpha(1)
                , DrawImage(new Vector(-200, -100), "player")
                , SetAlpha(gfxState.burnFade)
                , DrawImage(new Vector(-400, -100), "player-thrust")
                , SetAlpha(1)
            ];

            scene.children.push(playerSheet(
                Math.round(
                    4 + 4 * (state.rotvel / mod.maxRotationStalled)
                )
            ));

            scene.trans = planeTrans(player.plane)
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
        var edim = player.parent.environment.dimensions;

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
