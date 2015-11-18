package solemnsky.tutorial.engine;

import solemnsky.engine.Engine;
import solemnsky.engine.Plane;
import solemnsky.engine.Player;
import solemnsky.engine.Prop;
import solemnsky.tutorial.engine.TutPlayer;
import solemnsky.tutorial.engine.TutProp;

/**
 * solemnsky.tutorial.engine.Synonyms:
 * Engine-related type synonyms parameterized on our custom classes.
 */

typedef MyEngine = Engine<TutPlayer,TutProp>;
typedef MyPlane = Plane<TutPlayer,TutProp>; 
typedef MyPlayer = Player<TutPlayer,TutProp>; 
typedef MyProp = Prop<TutPlayer,TutProp>; 
