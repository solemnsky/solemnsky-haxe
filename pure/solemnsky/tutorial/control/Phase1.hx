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
             , helpText : "use the ijkl keys to reach the white box" }
            ,{ boxPos : new Vector(2230, 820)
             , boxDim : new Vector(30, 30)
             , helpText : "come back up now, something's appeared above the 'y'" }
            ,{ boxPos : new Vector(1600, 900)
             , boxDim : new Vector(30, 30)
             , helpText : "" }
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

        if (plane != null) {
            if (objectiveShape.contains(
                Util.napeFromVector(plane.state.pos))) 
            {
                // bump objective
                curObjective++;
                updateShape();
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
            DrawRect(
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
        scene.children.push(TutGraphics.renderTutText(
            objectives[curObjective].helpText
        ));

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

                // movement keys
                if (isKey(CharKey('f')))
                    player.plane.custom.pewpew(kstate);
            }
            default: {}
            }
        }
    }

    public function conclude():Null<TutStep> {
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
            0, 0, o.boxDim.x, o.boxDim.y));

        body.shapes.add(shape);

        return shape;
    }

}
