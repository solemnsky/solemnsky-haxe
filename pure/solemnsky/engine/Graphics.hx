package solemnsky.engine;

import util.Vector;
import util.Transform;
import control.Scene;
import solemnsky.engine.Plane;

/**
 * solemnsky.engine.Graphics:
 * Universally useful graphics functions.
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

    public static function renderPlayer<D>(
        player:Player<D>
    ): Scene {
        var scene = new Scene();

        if (player.plane != null) {
            var state:PlaneState = player.plane.state;

            if (! state.stalled) 
                scene.prims = [
                    SetColor(0, 255, 0, 255)
                    , DrawRect(new Vector(-15, -2), new Vector(15, 2))
                ];
            else
                scene.prims = [
                    SetColor(255, 0, 0, 255)
                    , DrawRect(new Vector(-15, -2), new Vector(15, 2))
                ];

            scene.trans = Transform.translation(state.pos.x, state.pos.y)
                .multmat(Transform.rotation(state.rot));
        }

        return scene;
    }

    public static function renderPlayerDebug<D>(
        player:Player<D>
    ): Scene {
        var scene = new Scene();

        if (player.plane != null) {
            var state:PlaneState = player.plane.state;

            var debugVec = function(vec) 
                scene.children.push(renderVector(vec));

            debugVec(state.leftoverVel);
        }

        return scene;
    }
}
