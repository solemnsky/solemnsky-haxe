package solemnsky.engine;

import msgpack.MsgPack;
import haxe.io.Bytes;

/**
 * solemnsky.engine.Serial:
 * Stuff for network serialisation / delta resolving etc.
 */

/**
 * Rules to serialise an object.
 */
typedef SerialRules = 
    { fromFull:Map<String,String>
    , toFull:Map<String,String> };

class Serial {
    public static function genRules(props:Array<String>) {
        var rules = {fromNull:new Map(), toFull:new Map()};
        var i:Int = 0;
        for (prop in props) {
            var abbrev = abbrevFromInt(i);

            rules.fromFull.set(prop, abbrev);
            rules.toFull.set(abbrev, prop);

            i++;
        }
    }

    private static function abbrevFromInt(int:Int) {
    }

    public static function pack(rules:SerialRules, obj:Dynamic):Bytes {

    }
}