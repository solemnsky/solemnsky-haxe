package solemnsky;

import haxe.Timer;
import kha.Framebuffer;
import kha.Game;

/**
 * This is the interface between our Control interface and whatever toolchain
 * we're using. Simply construct a Manager object with a control object to run.
 */
class Manager extends Game {
    /*************************************************************************/
    /* variables
    /*************************************************************************/

    /**
     * global settings
     */ 
    private var tps:Float;
    private var tickLength:Float;
    private var ctrl:Control;
  
    /**
     * tick state
     */ 
    private var lastTick:Float;
    private var tickAccum:Float = 0;
    private var lastRender:Float;

    /**
     * profiling settings
     */ 
    private static inline var profileWindow:Int = 10; 
    private static inline var profileUpdate:Int = 10;

    /**
     * profiling state
     */ 
    private var profileTicker:Int = 0;

    private var logicStart:Float;
    private var renderStart:Float;
    private var sleepStart:Float;

    /**
     * profiles
     */ 
    private var logicProfile:Array<Float> = [];
    private var renderProfile:Array<Float> = [];
    private var sleepProfile:Array<Float> = [];

    /*************************************************************************/
    /* constructor
    /*************************************************************************/

    public function new(ctrl:Control, tps:Int = 60):Void {
        super("solemnsky", false); // initialise our game, I think kha does
                                   // a whole bunch of stuff here

        this.tps = tps; // set settings
        this.tickLength = 1 / tps;
        this.ctrl = ctrl;      

        // initialise timings
        var now = Timer.stamp();
        lastTick = now; lastRender = now; logicStart = now;
        renderStart = now; sleepStart = now;
    }

    /*************************************************************************/
    /* game interface
    /*************************************************************************/

    /**
     * called on frame render
     */
    override function render(frame:Framebuffer):Void
    {
        profileTicker ++;
        if (profileTicker > profileUpdate) {
            profileTicker = 0;
            ctrl.profiling(
                profileResult(logicProfile)
                , profileResult(renderProfile)
                , profileResult(sleepProfile)
            );
        }

        pushProfile(Timer.stamp() - sleepStart, sleepProfile); // END SLEEP

        var newTick = Timer.stamp();
        tickAccum += (newTick - lastTick);
        lastTick = newTick;

        var needsPaint = false;
        while (tickAccum >= tickLength) {
            tickAccum -= tickLength;
            needsPaint = true;
            controlTick(tickLength);
        }
        if (needsPaint) {
            var newRender = Timer.stamp();
            var sleepTime:Float = newRender - lastRender;
            lastRender = newRender;
            controlRender(frame, sleepTime);
        }

        sleepStart = Timer.stamp(); // BEGIN SLEEP
    }

    override function mouseMove(x:Int, y:Int):Void {
        ctrl.handle(MouseMove(x, y));
    }

    /*************************************************************************/
    /* profiling helpers                                                     */
    /*************************************************************************/

    /**
     * pushes a profile value to a profile
     */ 
    private function 
        pushProfile(point:Float, profile:Array<Float>):Void {
        if (profile.length > profileWindow) {
            profile.push(point);
            profile.shift(); 
        } else {
            profile.push(point);
        }
    }

    /**
     * statistics on a certain profile
     */ 
    private function profileResult(profile:Array<Float>):String {
        var sum:Float = 0;
        var min:Float = profile[0];
        var max:Float = profile[0];

        for (i in profile) {
            sum += i;
            min = Math.min(min, i);
            max = Math.max(max, i);
        }

        function dispT(v:Float):String {
            return Math.round(v * 1000) + 'ms';
        }

        return 
            dispT(min) + '-' + dispT(max) 
            + '~' + dispT(sum / profileWindow);
    }

    /*************************************************************************/
    /* per-operation logic
    /*************************************************************************/

    /**
     * called on a tick
     */ 
    private function controlTick(deltaRaw:Float):Void {
        logicStart = Timer.stamp(); // BEGIN LOGIC

        var delta = deltaRaw * 1000;
        ctrl.tick(delta);

        pushProfile(Timer.stamp() - logicStart, logicProfile); // END LOGIC
    }

    /**
     * called on a render
     */ 
    private function controlRender(frame: Framebuffer, deltaRaw:Float):Void {
        renderStart = Timer.stamp(); // BEGIN RENDER

        var delta = deltaRaw * 1000;
        ctrl.render(frame, delta);

        pushProfile(Timer.stamp() - renderStart, renderProfile); // END RENDER
    }
}
