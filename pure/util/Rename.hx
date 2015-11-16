package util;

/**
 * solemnsky.engine.Rename:
 * Renaming objects to take up less space when serialised.
 */

/**
 * Rules to rename an object.
 */
typedef RenameRules = 
    { fromFull:Map<String,String>
    , toFull:Map<String,String> };

class Rename {
    public static function makeRules(props:Array<String>):RenameRules {
        var rules:RenameRules = {fromFull:new Map(), toFull:new Map()};
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

    public static function shorten(rules:RenameRules, signal:Dynamic):Dynamic {
        var carrier:Dynamic = {};

        for (field in Reflect.fields(signal)) {
            var abbrv = rules.fromFull.get(field);
            if (abbrv != null) 
                Reflect.setField(
                    carrier, abbrv
                    , Reflect.field(signal, field)
                );
        }

        return carrier; 
    }

    public static function unshorten(
        rules:RenameRules, carrier:Dynamic
    ):Dynamic {
        var signal:Dynamic = {};

        for (abbrv in Reflect.fields(carrier)) {
            var field = rules.toFull.get(abbrv);
            Reflect.setField(signal, field, Reflect.field(carrier, abbrv));
        }

        return signal;
    }
}