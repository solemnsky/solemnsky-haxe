package;

import kha.Game;
import kha.Starter;
import solemnsky.TopLevel;

/**
 * Top-level for the kha web export.
 */

class Main {
  public static function main() {
    // create control
    var control = TopLevel.offlineDemo();

    // run control
    var starter = new Starter(); 
    var manager:Game = new Manager(control, 60); 
    starter.start(manager); 
  }
}
