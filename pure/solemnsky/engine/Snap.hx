package solemnsky.engine;

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
    playerSnaps: Array<PlayerSnap>;
    propSnaps: Array<PropSnaps>;
}

class SnapRules {
    public function new() {}

    private var snap =
        Rename.makeRules(
            [ "playerSnaps"
            , "propSnaps" 
            ]);
    private var propSnap =
        Rename.makeRules(
            [ "id"
            , "custom" 
            ]);
    private var playerSnap =
        Rename.makeRules(
            [ "id"
            , "state"
            , "custom" 
            ]);

    private var planeState =
        Rename.makeRules(
            [ "pos"
            , "rot"
            , "vel"
            , "rotvel"
            , "stalled"
            ]);
}
