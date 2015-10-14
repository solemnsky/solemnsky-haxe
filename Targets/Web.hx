package;

import kha.Game;
import kha.Starter;
import solemnsky.control.Control;
import solemnsky.core.Core;
import solemnsky.core.demo.Demo;
import solemnsky.kha.Manager;
import solemnsky.ui.WebDemo;

/**
 * Web
 * Top-level for the web (html5) target.
 */

class Main {
  public static function main() {
    // var core:Core = new Demo(); 
    var control:Control = new DemoControl(); // new WebDemo(core);
    var starter = new Starter(); 
    var manager:Game = new Manager(control, 60); 
    starter.start(manager); 
  }
}
