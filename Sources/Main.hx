package;

import kha.Game;
import kha.Starter;
import solemnsky.control.Control;
import solemnsky.core.Core;
import solemnsky.core.demo.Demo;
import solemnsky.kha.Manager;
import solemnsky.ui.Web;
import solemnsky.ui.Server;
import solemnsky.ui.Native;

/**
 * solemnsky.Main: 
 * The only main class ever implied by Kha/make. All client-side targets
 * stem from here.
 */

class Main {
  public static function main() {

    var core:Core = new Demo(); 

    // run web client iff on the web platform
    var control:Control = new Web(core);
    var starter = new Starter(); 
    var manager:Game = new Manager(control, 60); 
    starter.start(manager); 

    // run native client iff on the native platform
    var control:Control = new Native(core);
    var starter = new Starter(); 
    var manager:Game = new Manager(control, 60); 
    starter.start(manager); 

    // run server iff on the node platform
    var server = new Server();

  }
}
