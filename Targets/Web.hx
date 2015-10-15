package;

import kha.Game;
import kha.Starter;
import solemnsky.control.Control;
import solemnsky.kha.Manager;

/**
 * Web
 * Top-level for the web (html5) target.
 */

class Main {
  public static function main() {
    var control:Control = new DemoControl(); 
    var starter = new Starter(); 
    var manager:Game = new Manager(control, 60); 
    starter.start(manager); 
  }
}
