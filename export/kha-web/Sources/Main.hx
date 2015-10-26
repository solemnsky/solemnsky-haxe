package;

import kha.Game;
import kha.Starter;
import control.Control;
import control.demo.InputDemo;
// import solemnsky.ui.Web;

/**
 * Top-level for the kha web export.
 */

class Main {
  public static function main() {
    // var control:Control = Web.ctrl();
    var control:Control = new InputDemo();
    var starter = new Starter(); 
    var manager:Game = new Manager(control, 60); 
    starter.start(manager); 
  }
}
