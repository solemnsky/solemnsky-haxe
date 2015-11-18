package solemnsky.engine;

import solemnsky.engine.Plane;
import util.Pack;

/**
 * solemnsky.engine.Snap:
 * Snapshot types and rename rules for compressing them.
 */

typedef PlayerSnap = {
    id: Int
    , custom: Dynamic
    , state: Null<PlaneState>
}

typedef PropSnap = {
    id: Int
    , custom: Dynamic
}

typedef Snap = {
    playerSnaps: Array<PlayerSnap>
    , propSnaps: Array<PropSnap>
}

class SnapPack {
    private var snap:PackRule<Snap>;

    public function new() {
        var planeState =
            Pack.object(
                [ {name:"pos", rule:Pack.identity()}
                , {name:"rot", rule:Pack.identity()}
                , {name:"vel", rule:Pack.identity()}
                , {name:"rotvel", rule:Pack.identity()}
                ]);

        var playerSnap = 
            Pack.object(
                [ {name:"id", rule:Pack.identity()}
                , {name:"custom", rule:Pack.identity()}
                , {name:"state", rule:Pack.maybe(planeState)}
                ]);

        var propSnap = 
            Pack.object(
                [ {name:"id", rule:Pack.identity()}
                , {name:"custom", rule:Pack.identity()}
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
