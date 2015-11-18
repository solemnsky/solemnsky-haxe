package solemnsky.engine;

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

    private var rules:PackRule<Snap> = Pack.identity;

    public function pack(snap:Snap):Dynamic {
        return rules.pack(snap);
    }

    public function unpack(dyn:Dynamic):Snap {
        return rules.unpack(dyn);
    }
}
