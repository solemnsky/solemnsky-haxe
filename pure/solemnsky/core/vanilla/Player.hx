package solemnsky.core.vanilla;

import nape.phys.Body;
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
    right:Bool; left:Bool;
    up:Bool; down:Bool;
}

/**
 * Non-derived, serialisable state for a player.
 */
class PlayerState {
    private var name:String;
    private var movement:Movement = 
        {right:false, left:false, up:false, down:false};

    // physics
    private var pos:Vector;
    private var rot:Float;
    private var vel:Vector;

    // flight mechanics
    private var stalled:Bool;
    private var leftoverVel:Vector = new Vector(0, 0);
    private var speed:Float = 1;
    private var throttle:Float = 1;
    private var afterburner = false;

    public function new(
        name:String, pos:Vector
        , rot:Float = 0
        , vel:Vector = new Vector(0, 0)
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
        this.parent = parent;
        this.name = name;
        this.state = new PlayerState(name, pos);

        body = new Body(BodyType.DYNAMIC, position);
        body.addShape(Circle(Tuning.playerRadius));
    }

    /*************************************************************************/
    /* external accessors
    /*************************************************************************/

    public function getTangible():TangiblePlayer {
        return {
            name: state.name
            , position: state.position;
            , afterburner: state.afterburner;
            , rotation: state.rotation;
        }
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
                gameplay.playerMaxVelocityStalled / speed
            if (excessVel > 0)
                state.vel.y =
                   state.vel.y * dampingFactor 
                        * Math.pow(
                            gameplay.playerStallDamping
                            , delta / 1000)
        } else {
            // motion when not stalled
            // TODO
        }

        }
}