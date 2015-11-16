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
    public static function genRules(props:Array<String>):SerialRules {
        var rules:SerialRules = {fromFull:new Map(), toFull:new Map()};
        var i:Int = 0;
        for (prop in props) {
            var abbrev = abbrevFromInt(i);

            rules.fromFull.set(prop, abbrev);
            rules.toFull.set(abbrev, prop);

            i++;
        }
        return rules;
    }

    private static function abbrevFromInt(int:Int) {
        return String.fromCharCode(97 + int);
    }

    public static function pack(rules:SerialRules, signal:Dynamic):Bytes {
        var carrier:Dynamic = {};

        for (field in Reflect.fields(signal)) {
            var abbrv = rules.fromFull.get(field);
            if (abbrv != null) 
                Reflect.setField(
                    carrier, abbrv
                    , Reflect.field(signal, field)
                );
        }

        return MsgPack.encode(carrier);
    }

    public static function unpack(rules:SerialRules, packed:Bytes):Dynamic {
        var signal:Dynamic = {};
        var carrier:Dynamic = MsgPack.decode(packed);

        for (abbrv in Reflect.fields(carrier)) {
            var field = rules.toFull.get(abbrv);
            Reflect.setField(signal, field, Reflect.field(carrier, abbrv));
        }

        return signal;
    }
}