package solemnsky.engine;

/**
 * solemnsky.engine.Snap:
 * A snap is a single game related networking packet.
 */

typedef PlayerSnap {
    id: Int
    , state: Null<PlaneState>
    , custom: Null<Dynamic>
}

typedef PropSnap {
    id: Int
    , custom: Dynamic
}

typedef Snap {
    planes:Array<PlayerSnap>;
    props:Array<PropSnap>;
}
