package solemnsky.tutorial;

import control.Frame;
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
    public static function renderProp(f:Frame, prop:MyProp) {
        var rep = prop.custom.getRep();

        switch (rep) {
            case Bullet(pos, life): {
                f.pushTransform(Transform.translation(pos.x, pos.y));

                f.color(255, 255, 255, 255);
                f.circle(new Vector(0, 0), life * 10);

                f.popTransform();
            }
            case Bomb(pos, life): {
                f.pushTransform(Transform.translation(pos.x, pos.y));

                f.color(255, 0, 0, 255);
                f.circle(new Vector(0, 0), life * 20);

                f.popTransform();
            }
        }
    }

    public static function renderGame(f:Frame,
        cont:Continuity, gameLayer:Scene, delta:Float
    ) {
        var engine = cont.engine;
        var player = cont.player;
        var background = cont.background;

        f.pushTransform(Graphics.getPlayerView(player));

        background.render(f, delta);
        Graphics.renderPlayer(f, player.rep);
        gameLayer(f);
        for (prop in engine.props.iterator()) {
            TutGraphics.renderProp(f, prop);
        }

        f.popTransform();
    }

    public static function renderTutText(f:Frame, text:String) {
        f.pushTransform(Transform.translation(800, 20)
            .multmat(Transform.scale(3, 3))
        );

        f.color(255, 255, 255, 225);
        f.font("Arial", 14);
        f.text(new Vector(0, 0), CenterText, text);

        f.popTransform();
    }
}
