package;

import kha.Game;
import kha.Starter;
import solemnsky.control.Control;

/**
 * Top-level for the kha web export.
 */

class Main {
  public static function main() {
    var control:Control = new DemoControl(); 
    var starter = new Starter(); 
    var manager:Game = new Manager(control, 60); 
    starter.start(manager); 
  }
}
