package;

import kha.Game;
import kha.Starter;
import solemnsky.control.Control;
import solemnsky.kha.Manager;

/**
 * Native
 * Top-level for the native (cpp) target.
 */

class Main {
  public static function main() {
    var starter = new Starter(); 
    var control:Control = new DemoControl();
    var manager:Game = new Manager(control, 60); 
    starter.start(manager); 
  }
}
