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

        var rep = prop.custom.getRep();

        switch (rep) {
            case Bullet(pos, life): {
                scene.prims = [
                    SetColor(255, 255, 255, 255)
                    , DrawCircle(new Vector(0, 0), 
                        life * 10)
                ];

                scene.trans = Transform.translation(pos.x, pos.y);
            }
        }

        return scene;
    }

    public static function renderGame(
        cont:Continuity, gameLayer:Scene, delta:Float
    ):Scene {
        var engine = cont.engine;
        var player = cont.player;
        var background = cont.background;

        engine.tickGraphics(delta);

        var scene = new Scene();

        scene.children.push(background.render(delta));
        scene.children.push(Graphics.renderPlayer(player.rep));
        scene.children.push(gameLayer);

        for (prop in engine.props.iterator()) {
            scene.children.push(TutGraphics.renderProp(prop));
        }

        scene.trans = Graphics.getPlayerView(player);

        return scene;
    }

    public static function renderTutText(text:String):Scene {
        var scene = new Scene();

        scene.prims = 
            [ SetColor(255, 255, 255, 225)
            , SetFont("Arial", 14)
            , DrawText(new Vector(0, 0), CenterText, text) ];
        scene.trans = Transform.translation(800, 20)
            .multmat(Transform.scale(3, 3));

        return scene;
    }
}
