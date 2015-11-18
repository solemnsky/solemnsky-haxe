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
    , state: PlaneState
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
    public function new() {}

    private var propSnap:PackRule<PropSnap> =
        Pack.object(
            [ {name:"id", rule:Pack.identity()}
            , {name:"custom", rule:Pack.identity()}
            ]);

    private var snap:PackRule<Snap> = 
        Pack.object(
            [ {name:"playerSnaps", rule:Pack.array(playerSnap)}
            , {name:"propSnaps", rule:Pack.array(propSnap)} ])

    public function pack(snap:Snap):Dynamic {
        return rules.pack(snap);
    }

    public function unpack(dyn:Dynamic):Snap {
        return rules.unpack(dyn);
    }
}
