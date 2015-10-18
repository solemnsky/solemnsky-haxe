package solemnsky.core.vanilla;

import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Circle;
import solemnsky.Util;
import math.Vector;
import solemnsky.Util;

/**
 * solemnsky.core.vanilla.Player:
 * Player object, with physics wrapper methods and flight mechanics.
 */

// toggles
enum ControlEvent {
    ControlRight(state:Bool);
    ControlLeft(state:Bool);
    ControlUp(state:Bool);
    ControlDown(state:Bool);
}

typedef Movement = {
    right:Bool, left:Bool
    , forward:Bool, backward:Bool
}

/**
 * Non-derived, serialisable state for a player.
 */
class PlayerState {
    public var name:String;
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
        name:String, pos:Vector, rot:Float
    ):Void {
        this.name = name;
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

class Player {
    /*************************************************************************/
    /* private state variables
    /*************************************************************************/

    private var parent:Vanilla;
    private var tuning:Tuning;

    public var state:PlayerState;
    public var body:Body;

    /*************************************************************************/
    /* constructor
    /*************************************************************************/

    public function new(
        tuning:Tuning, parent:Vanilla
        , name:String, pos:Vector, rot:Float
    ):Void {
        this.state = new PlayerState(name, pos, rot);
        this.parent = parent;
        this.tuning = tuning;

        // initialise body
        body = new Body(BodyType.DYNAMIC, Util.napeFromVector(pos));
        body.shapes.add(new Circle(tuning.playerRadius));
        body.setShapeMaterials(nape.phys.Material.rubber());
        writeToBody();
    }

    /*************************************************************************/
    /* physics interface
    /*************************************************************************/

    public function writeToBody():Void {
        body.position = Util.napeFromVector(state.pos);
        body.rotation = state.rot;
        body.angularVel = state.rotvel;
        body.velocity = Util.napeFromVector(state.vel);
    }

    public function readFromBody():Void {
        state.pos = Util.vectorFromNape(body.position);
        state.rot = body.rotation;
        state.rotvel = body.angularVel;
        state.vel = Util.vectorFromNape(body.velocity);
    }

    /*************************************************************************/
    /* simulation
    /*************************************************************************/

    public function handle(event:ControlEvent):Void {
        switch (event){
            case ControlRight(state): {
                this.state.movement.right = state;
            }
            case ControlLeft(state): {
                this.state.movement.left = state;
            }
            case ControlUp(state): {
                this.state.movement.forward = state;
            }
            case ControlDown(state): {
                this.state.movement.backward = state;
            }
        }
    }

    /**
     * Mutate the player's state value; this works hand in hand
     * with the physics simulation, interfaced with calls to 
     * player.writeToBody and player.readFromBody, to define
     * the overall flight / collision dynamics of the game.
     */
    public function tick(delta:Float):Void {
        // // synonyms
        // var forwardVel:Float = 
        //     state.vel.length() * Math.cos(state.rot - state.vel.angle());
        // var speed = state.vel.length();

        // // rotation
        // var maxRotation = 
        //     if (state.stalled) tuning.playerMaxRotationStalled 
        //         else tuning.playerMaxRotation;
        // var targetRotVel:Float = 0;
        // if (state.movement.left) targetRotVel = -maxRotation;
        // if (state.movement.right) targetRotVel += maxRotation;

        // state.rotvel +=
        //     (targetRotVel - state.rotvel) / Math.pow(tuning.playerAngularDamping, delta);

        // state.afterburner = false;            

        // // motion when stalled
        // if (state.stalled) {
        //     // add basic thrust
        //     state.afterburner = true;
        //     state.vel = Vector.fromAngle(state.rot)
        //         .mult(
        //             delta / 1000 * tuning.playerAfterburnerStalled
        //         )
        //         .add(state.vel);

        //     // apply damping when over playerMaxVelocityStalled
        //     var excessVel = speed - tuning.playerMaxVelocityStalled;
        //     var dampingFactor = 
        //         tuning.playerMaxVelocityStalled / speed;
        //     if (excessVel > 0)
        //         state.vel.y =
        //            state.vel.y * dampingFactor 
        //                 * Math.pow(
        //                     tuning.playerStallDamping
        //                     , delta / 1000);

        // // motion when not stalled                        
        // } else {
        //     // modify throttle and afterburner according to controls
        //     if (state.movement.forward && state.throttle < 1)
        //         state.throttle += tuning.playerThrottleSpeed *
        //             (delta / 1000);
        //     if (state.movement.backward && state.throttle > 0)
        //         state.throttle -= tuning.playerThrottleSpeed *
        //             (delta / 1000);
        //     state.throttle = Math.min(state.throttle, 1);
        //     state.throttle = Math.max(state.throttle, 0);
        //     state.afterburner = 
        //         state.movement.forward && state.throttle == 1;

        //     // pick away at leftover velocity
        //     state.leftoverVel.x = state.leftoverVel.x 
        //         * Math.pow(tuning.playerLeftoverVelDamping, delta / 1000);
        //     state.leftoverVel.y = state.leftoverVel.y 
        //         * Math.pow(tuning.playerLeftoverVelDamping, delta / 1000);

        //     // speed modifiers
        //     if (state.speed > state.throttle * tuning.speedThrottleInfluence) {
        //         if (state.throttle < tuning.speedThrottleInfluence) {
        //             state.speed -= 
        //                 tuning.speedThrottleDeaccForce * (delta / 1000);
        //         } else {
        //             state.speed -= 
        //                 tuning.speedThrottleForce * (delta / 1000);
        //         }
        //     }
        //     state.speed += 
        //         Math.sin(state.rot) 
        //             * tuning.speedGravityForce * (delta / 1000);
        //     if (state.afterburner) 
        //         state.speed += tuning.speedAfterburnForce * (delta / 1000);
        //     state.speed = Math.min(state.speed, 1);
        //     state.speed = Math.max(state.speed, 0);

        //     var targetSpeed = state.speed * tuning.playerMaxSpeed;

        //     // set velocity, according to target speed, rotation, 
        //     // and leftoverVel
        //     state.vel = Vector.fromAngle(state.rot)
        //         .mult(targetSpeed)
        //         .add(state.leftoverVel);
        // }
    }
}