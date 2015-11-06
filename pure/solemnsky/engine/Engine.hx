package solemnsky.engine;

import control.Event;
import control.Scene;
import flash.display.Graphics;
import haxe.io.Bytes;
import util.Transform;
import util.Vector;
import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Polygon;
import nape.space.Space;
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

    public function new(tuning:Tuning) {
        this.tuning = tuning;
        this.debugTrace = debugTrace;

        planes = [];
        environment = null;
        space = null;

        debugTrace('engine instantiated');
    }

    private inline function debugTrace(str:String) {
        tuning
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

    public function addPlane()    


    private function doForplane(f:Plane->Void, id:Int):Bool {
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
        if 
        for (plane in planes.iterator()) {
            plane.writeToBody();
        }
        space.step(delta / 1000); 
        for (plane in planes.iterator()) {
            plane.readFromBody();
            plane.tick(delta);
        }
        return [];
    }

    public function hasEnded():Bool {
        return false;
    }

    /*************************************************************************/
    /* discrete networking
    /*************************************************************************/

    public function join(name:String):Int {
        var newId = Util.allocNewId(planes.keys());
        var newplane = new plane(
            tuning
            , this
            , name
            , new Vector(500, 500)
            , 0
        );

        planes.set(newId, newplane);
        newplane.body.space = space;
        return newId;
    }

    public function quit(id:Int):Void {
        planes.remove(id);
    }

    public function getInitData():Dynamic {
        return null;
    }

    /*************************************************************************/
    /* continuous networking
    /* this is completely unimplemented for the moment
    /*************************************************************************/

    public function clientAssert(id:Int):Dynamic {
        return null; 
    }
    public function serverAssert():Dynamic {
        return null;
    }

    public function clientMerge(id:Int, snap:Dynamic):Void {

    }
    public function serverMerge(id:Int, snap:Dynamic):Void {

    }

    /*************************************************************************/
    /* network compression
    /*************************************************************************/

    public function serialiseSnap(snap:Dynamic):Bytes {
        return null;
    }

    public function readSnap(bytes:Bytes):Dynamic {
        return null;
    }
}
