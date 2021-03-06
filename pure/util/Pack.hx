package util;

/**
 * solemnsky.engine.Packing:
 * Packing objects to be more space efficent when subsequently
 * serialised with MsgPack.
 */

/**
 * Rules to pack and unpack an object.
 * Can turn a T into a packed Dynamic, and can turn
 * it subsequently into a Dynamic with a similar structure
 * to the original T.
 */
typedef PackRule<T> = 
    { pack:T->Dynamic
    , unpack:Dynamic->Dynamic };

/**
 * PackRule constructors.
 */
class Pack {
    /******************************************************************/
    /* trivial
    /******************************************************************/

    /**
     * Identity transformation.
     */
    public static function identity<T>():PackRule<T> {
        return
            { pack: function(x) return x
            , unpack: function(x) return x };
    }

    /**
     * Packs a value that can potentiall be null.
     */
    public static function maybe<T>(rule:PackRule<T>):PackRule<Null<T>> {
        return 
            { pack: function(x) if (x == null) 
                return null
                else return rule.pack(x)
            , unpack: function(x) if (x == null)
                return null
                else return rule.unpack(x)
            } 
    }

    public static function vector():PackRule<Vector> {
        return Pack.object(
            [ {name:"x", rule:Pack.identity()}
            , {name:"y", rule:Pack.identity()}
        ]);
    }

    /******************************************************************/
    /* array
    /******************************************************************/

    /**
     * Packs a typed array, applying a pack rule to every element.
     */
    public static function array<T>(
        rule:PackRule<T>
    ): PackRule<Array<T>> {
        return 
            { pack: mapArray(rule.pack)
            , unpack: mapArray(rule.unpack) }
    }

    private static function mapArray<A,B>(f:A->B):Array<A>->Array<B> {
        return function(a) {
            var result:Array<B> = [];
            for (x in a) result.push(f(x)); 
            return result;
        }
    }

    /******************************************************************/
    /* object
    /******************************************************************/
 
    /**
     * Attends to the specified fields of an object, packing
     * their respective values as well.
     * Does not assume all the fields are always present, so
     * they must be attributed keys even in their packed state.
     */
    public static function object<T>(
        fields:Array<{name:String, rule:PackRule<Dynamic>}>
    ): PackRule<T> {
        var fieldNames:Array<String> = [];
        var rules:Map<String,PackRule<Dynamic>> = new Map();
        for (field in fields) {
            fieldNames.push(field.name);
            rules.set(field.name, field.rule);
        }
        var map = mkRenameMap(fieldNames);

        return 
            { pack: function(x) 
                return appRenameMap(map, rules, true, x)
            , unpack: function(x)
                return appRenameMap(map, rules, false, x)
            }
    }


    private static function mkRenameMap(
        props:Array<String>
    ): {shorten:Map<String,String>,unshorten:Map<String,String>} {
        var map = {shorten:new Map(), unshorten:new Map()};
        var i:Int = 0;

        for (prop in props) {
            var abbrev = abbrevFromInt(i++);
            map.shorten.set(prop, abbrev);
            map.unshorten.set(abbrev, prop);
        }

        return map;
    }

    private static function abbrevFromInt(int:Int) {
        return String.fromCharCode(97 + int);
    }

    private static function appRenameMap(
        map:{shorten:Map<String,String>,unshorten:Map<String,String>}
        , packRules:Map<String,PackRule<Dynamic>>
        , shorten:Bool
        , input:Dynamic
    ):Dynamic {
        var result = {};

        for (field in Reflect.fields(input)) {
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
}