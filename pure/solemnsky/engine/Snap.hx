package solemnsky.engine;

/**
 * solemnsky.engine.Snap:
 * Snapshot types.
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
