package solemnsky.core.vanilla;

import solemnsky.engine.Engine;
import solemnsky.engine.Player;
import solemnsky.engine.Plane;
import solemnsky.engine.Prop;

/**
 * solemnsky.core.vanilla.Synonyms:
 * Synonyms for the vanilla engine types.
 */

typedef MyEngine = Engine<VanillaPlayer,VanillaProp>;
typedef MyPlayer = Player<VanillaPlayer,VanillaProp>;
typedef MyPlane = Plane<VanillaPlayer,VanillaProp>;
typedef MyProp = Prop<VanillaPlayer,VanillaProp>;
