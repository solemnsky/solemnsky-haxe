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
    public static function identity<T>():PackRule<T> {
        return
            { pack: function(x) return x
            , unpack: function(x) return x };
    }

    /**
     * Attends to the specified fields of an object, packing
     * their respective values as well.
     * Does not assume all the fields are always present, so
     * they must be attributed keys even in their packed state.
     */
    public static function sparseObject<T>(
        fields:Array<{name:String, rule:PackRule<Dynamic>}>
    ): PackRule<T> {
        return null;
    }

    /*************************************************************/
    /* sparseObject
    /*************************************************************/

    private static function mkRenameMap(
        props:Array<String>
    ): {shorten:String->String,unshorten:String->String} {
        var map = {fromFull:new Map(), toFull:new Map()};
        var i:Int = 0;

        for (prop in props) {
            var abbrev = abbrevFromInt(i);

            map.shorten.set(prop, abbrev);
            map.unshorten.set(abbrev, prop);

            i++;
        }

        return map;
    }

    private static function abbrevFromInt(int:Int) {
        return String.fromCharCode(97 + int);
    }

    private static function appRenameMap(
        map:{shorten:String->String,unshorten:String->String}
        , packRules:Map<String,PackRule<Dynamic>>
        , shorten:Bool
        , input:Dynamic
    ):Dynamic {
        var result:Dynamic = {};

        for (field in Reflect.fields(signal)) {
            var newField:String;

            if (shorten) newField = map.shorten.get(field);
            else newField = map.unshorten.get(field);

            if (newField != null) {
                var valueTrans:Dynamic->Dynamic;

                if (shorten) valueTrans = packRules.get(field).pack;
                else valueTrans = packRules.get(newField).unpack;

                Reflect.setField(
                    result, newField
                    , valueTrans(Reflect.field(input, field))
                );
            }
        }

        return result; 
    }

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

    /**
     * Attends to the specified fields of an object, packing
     * their respective values as well.
     * Assume all the fields are always present, so they can be packed
     * into an untyped array.
     */
    public static function object<T>(
        fields:Array<{name:String, rule:PackRule<Dynamic>}>
    ): PackRule<T> {
        return null;
    }

}