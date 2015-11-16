package solemnsky;

import control.Control;
import control.Noise;
import solemnsky.tutorial.Tutorial;
import solemnsky.ui.OfflinePackets;

/**
 * solemnsky.TopLevel:
 * Useful control objects we can use at a top-level.
 */

class TopLevel {
    public static function tutorial():Control<Noise> {
        return Tutorial.run();
    }

    public static function offlinePackets() {
        return new OfflinePackets();
    }
}
