package solemnsky.engine;

import util.Vector;
import util.Util;
import solemnsky.engine.mod.PlaneMod;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Circle;

/**
 * solemnsky.engine.Plane:
 * Represents a plane in the game; are destroyed and recreated a
 * bunch (deaths, environment changes, etc).
 */

/**
 * Represents the movements a plane has.
 */
typedef Movement = {
    right:Bool, left:Bool
    , forward:Bool, backward:Bool
}

/**
 * Non-derived, easily serialisable state for a plane.
 */
class PlaneState {
    public var movement:Movement;

    // physics
    public var pos:Vector;
    public var rot:Float;
    public var vel:Vector;
    public var rotvel:Float;

    // flight mechanics
    public var stalled:Bool;
    public var leftoverVel:Vector;
    public var speed:Float;
    public var throttle:Float;
    public var afterburner:Bool;

    public function new(
        pos:Vector, rot:Float
    ):Void {
        this.movement = 
            {right:false, left:false, forward:false, backward:false};

        // physics 
        this.pos = pos;
        this.rot = rot; 
        this.vel = new Vector(0, 0);
        this.rotvel = 0;

        // flight mechanics
        this.stalled = true;
        this.leftoverVel = new Vector(0, 0);
        this.speed = 0;
        this.throttle = 0;
        this.afterburner = false;
    }
}

class Plane<D> {
    /*************************************************************************/
    /* private state variables
    /*************************************************************************/

    // we're using an active object pattern here; the plane object
    // runs a lot of logic in itself and needs access to these values
    private var parent:Engine<D>;
    private var mod:PlaneMod;

    public var state:PlaneState;
    public var body:Body;

    /*************************************************************************/
    /* constructor
    /*************************************************************************/

    public function new(
        mod:PlaneMod, parent:Engine<D>,
        pos:Vector, rot:Float
    ):Void {
        this.state = new PlaneState(pos, rot);
        this.parent = parent;
        this.mod = mod;

        // initialise body
        body = new Body(BodyType.DYNAMIC, Util.napeFromVector(pos));
        body.shapes.add(new Circle(parent.mod.planeRadius));
        body.setShapeMaterials(nape.phys.Material.rubber());
        writeToNape();
    }

    /*************************************************************************/
    /* physics interface
    /*************************************************************************/

    public function writeToNape():Void {
        body.position = Util.napeFromVector(state.pos);
        body.rotation = state.rot;
        body.angularVel = state.rotvel;
        body.velocity = Util.napeFromVector(state.vel);
    }

    public function readFromNape():Void {
        state.pos = Util.vectorFromNape(body.position);
        state.rot = body.rotation;
        state.rotvel = body.angularVel;
        state.vel = Util.vectorFromNape(body.velocity);
    }

    /*************************************************************************/
    /* simulation
    /*************************************************************************/

    /**
     * Mutate the plane's state value; this works hand in hand
     * with the physics simulation, interfaced with calls to 
     * plane.writeToNape and plane.readFromNape.
     */
    public function tick(delta:Float):Void {
        // synonyms
        var forwardVel:Float = 
            state.vel.length() * Math.cos(state.rot - state.vel.angle());
        var speed = state.vel.length();

        // rotation
        var maxRotation = 
            if (state.stalled) mod.planeMaxRotationStalled 
                else mod.planeMaxRotation;
        var targetRotVel:Float = 0;
        if (state.movement.left) targetRotVel = -maxRotation;
        if (state.movement.right) targetRotVel += maxRotation;

        state.rotvel +=
            (targetRotVel - state.rotvel) / Math.pow(mod.planeAngularDamping, delta);

        state.afterburner = false;            

        // motion when stalled
        if (state.stalled) {
            // add basic thrust
            state.afterburner = true;
            state.vel = Vector.fromAngle(state.rot)
                .mult(
                    delta / 1000 * mod.planeAfterburnerStalled
                )
                .add(state.vel);

            // apply damping when over planeMaxVelocityStalled
            var excessVel = speed - mod.planeMaxVelocityStalled;
            var dampingFactor = 
                mod.planeMaxVelocityStalled / speed;
            if (excessVel > 0)
                state.vel.y =
                   state.vel.y * dampingFactor 
                        * Math.pow(
                            mod.planeStallDamping
                            , delta / 1000);

        // motion when not stalled                        
        } else {
            // modify throttle and afterburner according to controls
            if (state.movement.forward && state.throttle < 1)
                state.throttle += mod.planeThrottleSpeed *
                    (delta / 1000);
            if (state.movement.backward && state.throttle > 0)
                state.throttle -= mod.planeThrottleSpeed *
                    (delta / 1000);
            state.throttle = Math.min(state.throttle, 1);
            state.throttle = Math.max(state.throttle, 0);
            state.afterburner = 
                state.movement.forward && state.throttle == 1;

            // pick away at leftover velocity
            state.leftoverVel.x = state.leftoverVel.x 
                * Math.pow(mod.planeLeftoverVelDamping, delta / 1000);
            state.leftoverVel.y = state.leftoverVel.y 
                * Math.pow(mod.planeLeftoverVelDamping, delta / 1000);

            // speed modifiers
            if (state.speed > state.throttle * mod.speedThrottleInfluence) {
                if (state.throttle < mod.speedThrottleInfluence) {
                    state.speed -= 
                        mod.speedThrottleDeaccForce * (delta / 1000);
                } else {
                    state.speed -= 
                        mod.speedThrottleForce * (delta / 1000);
                }
            }
            state.speed += 
                Math.sin(state.rot) 
                    * mod.speedGravityForce * (delta / 1000);
            if (state.afterburner) 
                state.speed += mod.speedAfterburnForce * (delta / 1000);
            state.speed = Math.min(state.speed, 1);
            state.speed = Math.max(state.speed, 0);

            var targetSpeed = state.speed * mod.planeMaxSpeed;

            // set velocity, according to target speed, rotation, 
            // and leftoverVel
            state.vel = Vector.fromAngle(state.rot)
                .mult(targetSpeed)
                .add(state.leftoverVel);
        }
    }
}
