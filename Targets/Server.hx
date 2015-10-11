package;

import solemnsky.core.demo.Demo;
import solemnsky.ui.Server;

/**
 * Native
 * Top-level for the native (cpp) target.
 */

class Main {
  public static function main() {
    var core:Core = new Demo(); 
    var server = new Server(core);
  }
}
