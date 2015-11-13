package solemnsky.tutorial;

import solemnsky.engine.Engine;
import solemnsky.engine.Plane;
import solemnsky.engine.Player;
import solemnsky.engine.Prop;
import solemnsky.tutorial.TutPlane;
import solemnsky.tutorial.TutProp;

/**
 * solemnsky.tutorial.Synonyms:
 * Engine-related type synonyms parameterized on our custom classes.
 */

typedef MyEngine = Engine<TutPlane,TutProp>;
typedef MyPlane = Plane<TutPlane,TutProp>; 
typedef MyPlayer = Player<TutPlane,TutProp>; 
typedef MyProp = Prop<TutPlane,TutProp>; 
