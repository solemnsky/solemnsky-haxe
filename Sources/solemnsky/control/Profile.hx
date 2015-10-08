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
typedef IntervalData = {
    var average:Int; // all values in milliseconds
    var min:Int;
    var max:Int;
}

 class Profile {
    public var renderOn:IntervalData;
    public var renderOff:IntervalData;
    public var tickOn:IntervalData;
    public var tickOff:IntervalData;

    static function dataFromArray(a:Array<Int>):IntervalData {
        var sum:Int = 0;
        var min:Int = a[0];
        var max:Int = a[0];

        for (i in a) {
            sum += i;
            // FIXME
            min = Math.round(Math.min(min, i));
            max = Math.round(Math.max(max, i));
        }

        return {
            average: Math.round(sum / a.length)
            , min: min, max: max
        }
    }

    public function new(renderOn:Array<Int>
                       ,renderOff:Array<Int>
                       ,tickOn:Array<Int>
                       ,tickOff:Array<Int>):Void {
        this.renderOn  = dataFromArray(renderOn); 
        this.renderOff = dataFromArray(renderOff);
        this.tickOn    = dataFromArray(tickOn); 
        this.tickOff   = dataFromArray(tickOff);
    }

    private static function printInterval(i:IntervalData):String {
        return i.min + 'ms - ' + i.max + 'ms ~ ' + i.average + 'ms';
    }

    public function print():String {
        return ''
            + 'RENDER on/off: ' + printInterval(renderOn) 
            + ' / ' + printInterval(renderOff)
            + '; TICK on/off: ' + printInterval(tickOn) 
            + ' / ' + printInterval(tickOff);
    }

 }