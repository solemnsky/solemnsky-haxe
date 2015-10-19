package solemnsky.core.vanilla;

import control.Scene;

/**
 * solemnsky.core.vanilla.Render:
 * Render functions for the basic graphics.
 */

class Graphics {
    public static function renderPlayer(player:Player):Scene {
        var state = player.state;

        var scene = new Scene();

        scene.prims = [
            SetColor(0, 0, 0, 255)
            , DrawCircle(state.pos, 20)
        ];

        return scene;
    }
} 
