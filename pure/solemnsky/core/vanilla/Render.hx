package solemnsky.core.vanilla;

import solemnsky.control.Scene;
import math.Vector;
import math.Transform;

/**
 * solemnsky.core.vanilla.Render:
 * Render functions for the basic graphics.
 */

class Render {
    public static function renderPlayer(player:Player):Scene {
        var state = player.state;

        var scene = new Scene();

        scene.prims = [
            SetColor(0, 0, 0, 255)
            , DrawCircle(state.pos, 20)
        ];

        trace(state.pos);

        return scene;
    }
} 
