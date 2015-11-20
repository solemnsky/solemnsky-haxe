package solemnsky;

import control.Control;
import control.Noise;
import solemnsky.tutorial.Tutorial;
import solemnsky.core.vanilla.Vanilla;
import solemnsky.ui.Demo;
import solemnsky.ui.OfflinePackets;

/**
 * solemnsky.TopLevel:
 * Useful control objects we can use at a top-level.
 */

class TopLevel {
    public static function khaWeb():Control<Noise> {
        return Tutorial.run();
    }

    public static function khaNative() {
        return Tutorial.run();
    }

        // return Demo.run(new Vanilla());
}
