package;

import kha.Starter;
import solemnsky.control.Manager;
import solemnsky.control.Control;


class Main {
    public static function main() {
        var starter = new Starter(); // this runs a game
        var control = new DemoControl(); // this is a control object
        var manager = new Manager(60, control); // this turns a control object 
                                            // into a game
        starter.start(manager); // this runs all that shit
    }
}
