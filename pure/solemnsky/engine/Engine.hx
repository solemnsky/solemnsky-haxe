package solemnsky.engine;

import control.Event;
import control.Scene;
import haxe.io.Bytes;
import util.Transform;
import util.Vector;
import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Polygon;
import nape.space.Space;
import solemnsky.engine.tune.EngineTuning;
import util.Util;

/**
 * solemnsky.engine.Engine:
 * The vanilla core game logic for our cute multiplane plane game.
 */

class Engine {
    /*************************************************************************/
    /* variables
    /*************************************************************************/

    private var tuning:EngineTuning;
    private var debugTrace:String->Void;

    private var planes:Map<Int, Plane>;
    private var environment:Environment;
    private var space:Space;

    public function new(tuning:EngineTuning) {
        this.tuning = tuning;
        this.debugTrace = debugTrace;

        planes = [];
        environment = null;
        space = null;

        debugTrace('engine instantiated');
    }

    private inline function debugTrace(str:String) {
        tuning.debugTrace(str);
    }

    /*************************************************************************/
    /* environment
    /*************************************************************************/

    public function loadEnvironment(environment:Environment) {
        this.environment = environment;
        loadSpaceFromEnvironment(environment);
        debugTrace('loaded environment');
    }

    private inline function loadSpaceFromEnvironment(
        environment:Environment
    ) {
        space = new Space(new Vec2(0, 1));

        var floor = new Body(BodyType.STATIC);
        floor.shapes.add(
            new Polygon(Polygon.rect(50, (900 - 50), (1600 - 100), 1))
        );
        floor.space = space;
        floor.setShapeMaterials(nape.phys.Material.rubber());
    }

    /*************************************************************************/
    /* planes
    /*************************************************************************/

    private function doForPlane(f:Plane->Void, id:Int):Bool {
        var plane = planes.get(id);
        if (plane != null) {
            f(plane);
            return true;                    
        }
        return false;
    }

    /*************************************************************************/
    /* simulation
    /*************************************************************************/

    public function tick(delta:Float):Array<String> {
        if (space /= null) {
            for (plane in planes.iterator()) {
                plane.writeToBody();
            }
            space.step(delta / 1000); 
            for (plane in planes.iterator()) {
                plane.readFromBody();
                plane.tick(delta);
            }
        }
        return [];
    }

    public function hasEnded():Bool {
        return false;
    }
}
