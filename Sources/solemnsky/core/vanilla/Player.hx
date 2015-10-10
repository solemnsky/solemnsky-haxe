package solemnsky.core.vanilla;

import nape.nape.Space;
import nape.geom.Vector2;
import nape.phys.Body;
import nape.phys.BodyType;

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
 * Object with the tangible aspects of a player.
 */
typedef TangiblePlayer = {
    name:String; position:Vector2; afterburner:Bool; rotation:Float;
}

class Player {
    /*************************************************************************/
    /* private state variables
    /*************************************************************************/

    private var parent:Vanilla;
    private var name:String;
    private var movement:Movement = 
        {right:false, left:false, up:false, down:false};

    // flight mechanics
    private var stalled:Bool;
    private var leftoverVel:Vector2 = new Vector2(0, 0);
    private var speed = 1;
    private var throttle = 1;
    private var afterburner = false;

    // game mechanics
    private var health:Float = 1;
    private var energy:Float = 1;

    // spawn mechanics
    private var spawnpoint:Vector2;
    private var respawning:Bool = false;

    // nape block
    private var body:Body;

    /*************************************************************************/
    /* constructor
    /*************************************************************************/

    public function new(parent:Vanilla, name:String, position:Vector2):Void {
        this.parent = parent;
        this.name = name;
        this.body = new Body(BodyType.DYNAMIC, position);
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