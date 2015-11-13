package solemnsky.tutorial;

import control.Scene;
import solemnsky.engine.Prop;
import solemnsky.engine.Graphics;
import solemnsky.tutorial.engine.Synonyms;
import solemnsky.tutorial.control.Continuity;
import util.Transform;
import util.Vector;

/**
 * solemnsky.tutorial.TutGraphics:
 * Special graphics functions for the Tutorial.
 */

class TutGraphics {
    public static function renderProp(prop:MyProp):Scene {
        var scene = new Scene();

        var custom = prop.custom;

        scene.prims = [
            SetColor(255, 255, 255, 255)
            , DrawCircle(new Vector(0, 0), 
                custom.lifeFactor() * 10)
        ];

        var pos = custom.pos;
        scene.trans = Transform.translation(pos.x, pos.y);

        return scene;
    }

    public static function renderGame(
        cont:Continuity, delta:Float
    ):Scene {
        var engine = cont.engine;
        var player = cont.player;
        var background = cont.background;
        
        engine.tickGraphics(delta);

        var scene = new Scene();

        scene.children.push(background.render(delta));
        scene.children.push(Graphics.renderPlayer(player));

        for (prop in engine.props.iterator()) {
            scene.children.push(TutGraphics.renderProp(prop));
        }

        scene.trans = Graphics.getPlayerView(player);

        return scene;
    }
}
