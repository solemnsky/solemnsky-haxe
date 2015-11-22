package solemnsky.tutorial.control;

import util.Util;
import control.Control;
import util.Vector;
import control.Event;
import control.Profile;
import control.Scene;
import solemnsky.tutorial.engine.Synonyms;
import solemnsky.tutorial.TutGraphics;
import nape.phys.Body;
import nape.shape.Shape;
import nape.shape.Polygon;

/**
 * solemnsky.tutorial.control.Phase1:
 * First phase of the tutorial: the plane starts falling
 * and we display some help information.
 */

typedef BoxObjective = 
    { boxPos:Vector
    , boxDim:Vector
    , helpText:String }

class Phase1 implements Control<TutStep> {
    private var cont:Continuity;

    private var time:Float = 0;
    private var endReady:Bool = false;
    private var concluded:Bool = false;

    // utility
    private var engine:MyEngine;
    private var player:MyPlayer;

    private var boxPos = new Vector(2230, 820);
    private var boxDim = new Vector(30, 30);

    private var objectives:Array<BoxObjective>;
    private var curObjective:Int;
    private var objectiveShape:Shape;

    public function new(cont:Continuity) {
        this.cont = cont;

        engine = cont.engine;
        player = cont.player;

        player.simulating = true;

        objectives = 
            [{ boxPos : new Vector(1200, 1300) 
             , boxDim : new Vector(30, 30)
             , helpText : "Use the 'j' and 'l' keys to turn. Make your way to the white box, without loosing too much altitude!" }
            ,{ boxPos : new Vector(1200, 1800) 
             , boxDim : new Vector(30, 30)
             , helpText : "Good, get to the one on the ground now. You can use the 'k' key to slow down if you need to." }
            ,{ boxPos : new Vector(1500, 1500) 
             , boxDim : new Vector(30, 30)
             , helpText : "We've equipped you with thrusters, use the 'i' key to activate." }
            ,{ boxPos : new Vector(2230, 820)
             , boxDim : new Vector(30, 30)
             , helpText : "Come back up to the 'y' in 'SolemnSky' for the next box..." }
            ,{ boxPos : new Vector(1600, 900)
             , boxDim : new Vector(30, 30)
             , helpText : "You're almost done! We've hidden this one well." }
            ];
        curObjective = 0;
        updateShape();
    }

    public function init(_) {}

    /***************************************************************/
    /* simulation logic
    /***************************************************************/

    public function tick(delta:Float):Void {
        engine.tick(delta);
        time += delta;

        var plane = player.plane;

        var boxReached:Bool = false;
        if (player.plane != null)
            if (engine.space.bodiesInShape(objectiveShape).has(
                player.plane.body)) {
                boxReached = true;
            }

        if (plane != null) {
            if (boxReached) {
                // bump objective
                if ((curObjective + 1) < objectives.length) {
                    curObjective++;
                    updateShape();
                } else {
                    player.simulating = false; 
                    endReady = true;
                }
            }
        }
    }

    private function updateShape() {
        objectiveShape = shapeFromObjective(
            objectives[curObjective]
        );
    }

    /***************************************************************/
    /* rendering
    /***************************************************************/

    public function renderGameLayer(delta:Float):Scene {
        var scene = new Scene();
        var pos = objectives[curObjective].boxPos;
        var dim = objectives[curObjective].boxDim;
        scene.prims = [
            SetColor(255, 255, 255, 255)
            , DrawRect(
                pos.sub(dim.mult(0.5))
                , pos.add(dim.mult(0.5)))
        ];
        return scene; 
    }

    public function render(delta:Float):Scene {
        var scene = new Scene();

        scene.children.push(TutGraphics.renderGame
            ( cont
            , renderGameLayer(delta)
            , delta )
        );

        if (!endReady) {
            scene.children.push(TutGraphics.renderTutText(
                objectives[curObjective].helpText
            ));
        } else {
            scene.children.push(TutGraphics.renderTutText(
                "You're a capable pilot. Press f to continue."
            ));
        }

        return scene;
    }

    public function profiling(profile:Profile):Void {
        trace(profile.print());
    }

    /***************************************************************/
    /* event handling
    /***************************************************************/

    public function handle(e:Event):Void {
        if (player.plane != null) {
            var plane = player.plane;
            var state = plane.state;

            switch (e) {
            case KbEvent(key, kstate): {
                var isKey = function(k) return Type.enumEq(key, k);

                // movement keys
                if (isKey(CharKey('i'))) 
                    state.movement.forward = kstate;
                if (isKey(CharKey('j'))) 
                    state.movement.left = kstate;
                if (isKey(CharKey('l'))) 
                    state.movement.right = kstate;
                if (isKey(CharKey('k'))) 
                    state.movement.backward = kstate;

                if (endReady && isKey(CharKey('f')))
                    concluded = true;
            }
            default: {}
            }
        }
    }

    public function conclude():Null<TutStep> {
        if (concluded)
            return Phase2Step(cont);
        return null;
    }

    /***************************************************************/
    /* mm shapes
    /***************************************************************/

    private static function shapeFromObjective(
        o:BoxObjective
    ):Shape {
        var body = new Body();

        body.position.setxy(o.boxPos.x, o.boxPos.y);

        var shape = new Polygon(Polygon.rect(
            -o.boxDim.x / 2, -o.boxDim.y / 2
            , o.boxDim.x, o.boxDim.y));

        body.shapes.add(shape);

        return shape;
    }

}
