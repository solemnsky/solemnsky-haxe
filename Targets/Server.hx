package;

import solemnsky.core.demo.Demo;
import solemnsky.ui.NodeServer;

/**
 * Native
 * Top-level for the native (cpp) target.
 */

class Main {
  public static function main() {
    var core:Core = new Demo(); 
    var server = new NodeServer(core);
  }
}
