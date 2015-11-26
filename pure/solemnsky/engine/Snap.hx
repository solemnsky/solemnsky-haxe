package solemnsky.engine;

import solemnsky.engine.Plane;
import util.Pack;
import util.Vector;

/**
 * solemnsky.engine.Snap:
 * Snapshot types and rename rules for compressing them.
 */

typedef PlayerSnap = {
    sig: Int
    , custom: Dynamic
    , state: Null<PlaneState>
}

typedef PropSnap = {
    sig: Int
    , custom: Dynamic
}

typedef Snap = {
    playerSnaps: Array<PlayerSnap>
    , propSnaps: Array<PropSnap>
}

class SnapPack {
    private var snap:PackRule<Snap>;

    public function new() {
        var id:PackRule<Dynamic> = Pack.identity();
        var vector:PackRule<Vector> = Pack.vector();

        var movement =
            { pack: function(x)
                return [x.right, x.left, x.forward, x.backward]
            , unpack: function(x)
                return 
                    { right: x[0], left:x[1]
                    , forward: x[2], backward: x[3]} 
            }

        var planeState =
            Pack.object(
                [ {name:"pos", rule:vector}
                , {name:"rot", rule:id}
                , {name:"vel", rule:vector}
                , {name:"rotvel", rule:id}
                , {name:"movement", rule:movement}
                ]);

        var playerSnap = 
            Pack.object(
                [ {name:"sig", rule:id}
                , {name:"custom", rule:id}
                , {name:"state", rule:Pack.maybe(planeState)}
                ]);

        var propSnap = 
            Pack.object(
                [ {name:"sig", rule:id}
                , {name:"custom", rule:id}
                ]);

        snap =
            Pack.object(
                [ {name:"playerSnaps", rule:Pack.array(playerSnap)}
                , {name:"propSnaps", rule:Pack.array(propSnap)} ]);

    }

    public function pack(x:Snap):Dynamic {
        return snap.pack(x);
    }

    public function unpack(x:Dynamic):Snap {
        return snap.unpack(x);
    }
}
