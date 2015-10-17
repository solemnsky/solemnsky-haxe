package solemnsky.core.vanilla;

/**
 * solemnsky.core.vanilla.InitData;
 * The information that a new client should get as it joins the game.
 * Contains maps, player lists, etc.
 */

typedef InitData = {
    players:Map<Int, Player.PlayerState>
    // TODO: map as datastructure
}
