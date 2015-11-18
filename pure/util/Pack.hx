package util;

/**
 * solemnsky.engine.Packing:
 * Packing objects to be more space efficent when subsequently
 * serialised with MsgPack.
 */

/**
 * Rules to pack and unpack an object.
 */
typedef PackRule<T> = 
    { pack:T->Dynamic
    , unpack:Dynamic->T };

/**
 * PackRule constructors.
 */
class Pack {
    /**
     * Identity transformation.
     */
    public static var identity<T>:PackRule<T> = 
        { pack: function(x) return x
        , unpack: function(x) return x };

    /**
     * Attends to the specified fields of an object, packing
     * their respective values as well.
     * Does not assume all the fields are always present, so
     * they must be attributed keys even in their packed state.
     */
    public static function sparseObject<T>(
        fields:Array<{name:String, rule:PackRule}>
    ): PackRule<T> {
        return null;
    }

    /**
     * Attends to the specified fields of an object, packing
     * their respective values as well.
     * Assume all the fields are always present, so they can be packed
     * into an untyped array.
     */
    public static function object<T>(
        fields:Array<{name:String, rule:PackRule}>
    ): PackRule<T> {
        return null;
    }

    // private static function makeRules(props:Array<String>):RenameRules {
    //     var rules:RenameRules = {fromFull:new Map(), toFull:new Map()};
    //     var i:Int = 0;
    //     for (prop in props) {
    //         var abbrev = abbrevFromInt(i);

    //         rules.fromFull.set(prop, abbrev);
    //         rules.toFull.set(abbrev, prop);

    //         i++;
    //     }
    //     return rules;
    // }

    // private static function abbrevFromInt(int:Int) {
    //     return String.fromCharCode(97 + int);
    // }

    // private static function shorten(rules:RenameRules, signal:Dynamic):Dynamic {
    //     var carrier:Dynamic = {};

    //     for (field in Reflect.fields(signal)) {
    //         var abbrv = rules.fromFull.get(field);
    //         if (abbrv != null) 
    //             Reflect.setField(
    //                 carrier, abbrv
    //                 , Reflect.field(signal, field)
    //             );
    //     }

    //     return carrier; 
    // }

    // private static function unshorten(
    //     rules:RenameRules, carrier:Dynamic
    // ):Dynamic {
    //     var signal:Dynamic = {};

    //     for (abbrv in Reflect.fields(carrier)) {
    //         var field = rules.toFull.get(abbrv);
    //         Reflect.setField(signal, field, Reflect.field(carrier, abbrv));
    //     }

    //     return signal;
    // }
}