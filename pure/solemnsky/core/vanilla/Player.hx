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
    , up:Bool, down:Bool
}

/**
 * Non-derived, serialisable state for a player.
 */
class PlayerState {
    public var name:String;
    public var movement:Movement = 
        {right:false, left:false, up:false, down:false};

    // physics
    public var pos:Vector;
    public var rot:Float;
    public var vel:Vector;

    // flight mechanics
    public var stalled:Bool;
    public var leftoverVel:Vector = new Vector(0, 0);
    public var speed:Float = 1;
    public var throttle:Float = 1;
    public var afterburner = false;

    public function new(
        name:String, pos:Vector
        , rot:Float = 0
        , vel:Vector = null // TODO: constant zero vector
    ):Void {
        this.name = name;
        this.pos = pos;
        this.rot = rot;
        this.vel = vel;
    }
}

class Player {
    /*************************************************************************/
    /* private state variables
    /*************************************************************************/

    public var state:PlayerState;

    private var parent:Vanilla;
    private var body:Body;

    /*************************************************************************/
    /* constructor
    /*************************************************************************/

    public function new(parent:Vanilla, name:String, pos:Vector):Void {
        // parent
        this.parent = parent;

        // state
        this.state = new PlayerState(name, pos);

        // body
        body = new Body(BodyType.DYNAMIC, Util.napeFromVector(pos));
        body.shapes.add(new Circle(Tuning.playerRadius));

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
                state.movement.right = state;
            }
            case ControlLeft(state): {
                state.movement.left = state;
            }
            case ControlUp(state): {
                movement.up = state;
            }
            case ControlDown(state): {
                movement.down = state;
            }
        }
    }

    /**
     * Mutate the player's state value; this works hand in hand
     * with the physics simulation, interfaced with calls to 
     * player.writeToBody and player.readFromBody, to define
     * the overall flight / collision dynamics of the game.
     */
    public function tick():Void {
        // synonyms
        var forwardVel = 
            state.vel.length * Math.cos(state.rot - state.vel.angle);
        var speed = state.vel.length;

        // rotation
        var maxRotation = 
            if (state.stalled) Tuning.playerMaxRotationStalled 
                else Tuning.playerMaxRotation;
        var targetRotVel = 0;
        if (state.movement.left) targetRotvel = -maxRotation;
        if (state.movement.right) targetRotvel += maxRotation;

        state.rotvel +=
            (targetRotVel - state.rotvel) / Math.pow(Tuning.playerAngularDamping, delta);

        state.afterburner = false;            

        // motion when stalled
        if (state.stalled) {
            // add basic thrust
            state.afterburner = true;
            state.vel = Vector.fromAngle(state.rot)
                .mult(
                    delta / 1000 * gameplay.playerAfterburnerStalled
                )
                .add(state.vel);

            // apply damping when over playerMaxVelocityStalled
            var excessVel = speed - Tuning.playerMaxVelocityStalled;
            var dampingFactor = 
                gameplay.playerMaxVelocityStalled / speed;
            if (excessVel > 0)
                state.vel.y =
                   state.vel.y * dampingFactor 
                        * Math.pow(
                            gameplay.playerStallDamping
                            , delta / 1000);

        // motion when not stalled                        
        } else {
            // modify throttle and afterburner according to controls
            if (state.movement.forward && state.throttle < 1)
                state.throttle += Tuning.playerThrottleSpeed *
                    (delta / 1000);
            if (state.movement.backward && state.throttle > 0)
                state.throttle -= Tuning.playerThrottleSpeed *
                    (delta / 1000);
            state.throttle = Math.min(state.throttle, 1);
            state.throttle = Math.max(state.throttle, 0);
            state.afterburner = 
                this.movement.forward && state.throttle == 1;

            // pick away at leftover velocity
            state.leftoverVel.x = state.leftoverVel.x 
                * Math.pow(Tuning.playerLeftoverVelDamping, delta / 1000);
            state.leftoverVel.y = state.leftoverVel.y 
                * Math.pow(Tuning.playerLeftoverVelDamping, delta / 1000);

            // speed modifiers
            if (state.speed > state.throttle * Tuning.speedThrrotleInfluence) {
                if (state.throttle < Tuning.speedThrottleInfluence) {
                    state.speed -= 
                        Tuning.speedThrottleDeaccForce * (delta / 1000);
                } else {
                    state.speed -= 
                        Tuning.speedThrottleForce * (delta / 1000);
                }
            }
            state.speed += 
                Math.sin(state.rot) 
                    * Tuning.speedGravityForce * (delta / 1000);
            if (state.afterburner) 
                state.speed += Tuning.speedAfterburnForce * (delta / 1000);
            state.speed = Math.min(state.speed, 1);
            state.speed = Math.max(state.speed, 0);

            var targetSpeed = this.speed * gameplay.playerMaxSpeed;

            // set velocity, according to target speed, rotation, 
            // and leftoverVel
            state.velocity = Vector.fromAngle(state.rot)
                .mult(targetSpeed)
                .add(state.leftoverVel);
        }
    }
}