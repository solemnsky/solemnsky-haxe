package solemnsky.control;

/**
 * solemnsky.control.Profile:
 * Small Profile object representing the profiling and performance 
 * information that can be sent to a Control object.
 */

/**
 * Describes a series of intervals recorded during the execution
 * of an application.
 */
typedef SampleData = {
    var average:Int; 
    var min:Int;
    var max:Int;
}

class Profile {
    public var bufferOn:SampleData;
    public var renderOn:SampleData;
    public var renderOff:SampleData;
    public var primCount:SampleData;

    public var tickOn:SampleData;
    public var tickOff:SampleData;

    static function dataFromArray(a:Array<Int>):SampleData {
        var sum:Int = 0;
        var min:Int = a[0];
        var max:Int = a[0];

        for (i in a) {
            sum += i;
            min = Math.round(Math.min(min, i));
            max = Math.round(Math.max(max, i));
        }

        return {
            average: Math.round(sum / a.length)
            , min: min, max: max
        }
    }

    public function new(bufferOn:Array<Int>
                       ,renderOn:Array<Int>
                       ,renderOff:Array<Int>
                       ,primCount:Array<Int>
                       ,tickOn:Array<Int>
                       ,tickOff:Array<Int>):Void {
        this.bufferOn  = dataFromArray(bufferOn);
        this.renderOn  = dataFromArray(renderOn); 
        this.renderOff = dataFromArray(renderOff);
        this.primCount = dataFromArray(primCount);
        this.tickOn    = dataFromArray(tickOn); 
        this.tickOff   = dataFromArray(tickOff);
    }

    private static function printInterval(i:SampleData):String {
        return i.min + 'ms-' + i.max + 'ms~' + i.average + 'ms';
    }

    private static function printValue(i:SampleData):String {
        return i.min + '-'  + i.max + '~' + i.average;
    }

    public function print():String {
        return ''
            + 'buff:'
            + printInterval(bufferOn) + '/'
            + 'rndr:'
            + printInterval(renderOn) + '/'
            + 'rslp:'
            + printInterval(renderOff) + '/'
            + '\n'
            + 'prim:'
            + printValue(primCount) + '/'
            + 'tick:'
            + printInterval(tickOn) + '/'
            + 'tslp:'
            + printInterval(tickOff) + '/';
    }

 }