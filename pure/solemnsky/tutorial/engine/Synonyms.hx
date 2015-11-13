package solemnsky.tutorial.engine;

import solemnsky.engine.Engine;
import solemnsky.engine.Plane;
import solemnsky.engine.Player;
import solemnsky.engine.Prop;
import solemnsky.tutorial.engine.TutPlane;
import solemnsky.tutorial.engine.TutProp;

/**
 * solemnsky.tutorial.engine.Synonyms:
 * Engine-related type synonyms parameterized on our custom classes.
 */

typedef MyEngine = Engine<TutPlane,TutProp>;
typedef MyPlane = Plane<TutPlane,TutProp>; 
typedef MyPlayer = Player<TutPlane,TutProp>; 
typedef MyProp = Prop<TutPlane,TutProp>; 
