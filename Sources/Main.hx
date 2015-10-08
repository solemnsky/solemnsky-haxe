package;

import kha.Starter;
import solemnsky.kha.Manager;
import solemnsky.control.Control;

/**
 * solemnsky.Main: 
 * The only main class ever implied by Kha/make. All client-side targets
 * stem from here.
 */

class Main {
  public static function main() {
    var starter = new Starter(); // this runs a game
    var control:Control = new DemoControl(); // this is a control object
    var manager = new Manager(control, 60); // this turns a control object 
                                            // into a game
    starter.start(manager); // this runs all that shit
  }
}
