package;

import kha.Starter;
import solemnsky.control.Control;
import solemnsky.core.demo.Demo;
import solemnsky.interface.OfflineClient;
import solemnsky.kha.Manager;

/**
 * solemnsky.Main: 
 * The only main class ever implied by Kha/make. All client-side targets
 * stem from here.
 */

class Main {
  public static function main() {
    // STEP ONE: form a control object

        // our Core object is a Demo
    var core:Core = new Demo(); 
        // we're running the Core object with
        // the OfflineClient interface, to produce
        // a Control object
    var control:Control = new OfflineClient(core) 

    // STEP TWO: run the Control object

    var starter = new Starter(); 
        // Manager turns the control object into a Game
    var manager:Game = new Manager(control, 60); 

    starter.start(manager); // this runs all that shit
  }
}
