package solemnsky.core.vanilla;

import nape.phys.Body;

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

    private var parent:Vanilla;
    private var state:PlayerState;
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
            name: name
            , position: body.position;
            , afterburner: afterburner;
            , rotation: body.rotation;
        }
    }


    /*************************************************************************/
    /* physics interface
    /*************************************************************************/

    public function writeToBody():Void {
        // todo
    }

    public function readFromBody():Void {
        // todo
    }

    /*************************************************************************/
    /* simulation
    /*************************************************************************/

    public function handle(event:ControlEvent):Void {
        switch (event){
            case ControlRight(state): {
                movement.right = state;
            }
            case ControlLeft(state): {
                movement.left = state;
            }
            case ControlUp(state): {
                movement.up = state;
            }
            case ControlDown(state): {
                movement.down = state;
            }
        }
    }

    public function tick():Void {
        // stub 
    }
}