package solemnsky;

import solemnsky.core.Core;
import solemnsky.core.vanilla.Vanilla;
import solemnsky.ui.Demo;

/**
 * solemnsky.TopLevel:
 * Useful control objects we can use at a top-level.
 */

class TopLevel {
    /**
     * Simple offline demo of the Vanilla core.
     */
    public static function offlineDemo() {
        var core = new Vanilla();
        return Demo.run(core);
    }
}