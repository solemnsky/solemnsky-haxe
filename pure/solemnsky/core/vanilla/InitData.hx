/**
 * solemnsky.core.vanilla.InitData;
 * The information that a new client should get as it joins the game.
 * Contains maps, player lists, etc.
 */

typedef InitData = {
    players:IntMap<Player>;
    map:String; 
}
