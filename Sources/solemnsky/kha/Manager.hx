package solemnsky.kha;

import haxe.Timer;
import kha.Framebuffer;
import kha.Game;
using kha.graphics2.GraphicsExtension;

import solemnsky.control.Control;
import solemnsky.control.Event;
import solemnsky.control.Scene;

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
    private static inline var profileWindow:Int = 50;
    private static inline var profileUpdate:Int = 100;

    /**
     * profiling state
     */ 
    private var profileTicker:Int = 0; // ticks on render

    private var logicStart:Float;
    private var renderStart:Float;
    private var logicSleepStart:Float;
    private var renderSleepStart:Float;

    /**
     * profiles
     */ 
    private var logicProfile:Array<Float> = [];
    private var renderProfile:Array<Float> = [];
    private var logicSleepProfile:Array<Float> = [];
    private var renderSleepProfile:Array<Float> = [];

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
        renderStart = now; renderSleepStart = now; logicSleepStart = now;
    }

    /*************************************************************************/
    /* game interface
    /*************************************************************************/

    /**
     * called on frame render
     */
    override function render(frame:Framebuffer):Void
    {
        // tick profile uplink
        profileTicker ++; 
        if (profileTicker > profileUpdate) {
            profileTicker = 0;
            ctrl.profiling(
                profileResult(logicProfile)
                , profileResult(renderProfile)
                , profileResult(logicSleepProfile)
                , profileResult(renderSleepProfile)
            );
        }

        var now = Timer.stamp(); 

        pushProfile(
            now - renderSleepStart, 
            renderSleepProfile); // END SLEEP

        var newRender = now;
        var sleepTime:Float = newRender - lastRender;
        lastRender = newRender;
        controlRender(frame, sleepTime);

        renderSleepStart = Timer.stamp(); // BEGIN SLEEP
    }

    /**
     * called on update
     */
    override function update():Void {
        var now = Timer.stamp();
        pushProfile(
            now - logicSleepStart,
            logicSleepProfile); // END SLEEP

        var newTick = now;
        tickAccum += (newTick - lastTick);
        lastTick = newTick;

        while (tickAccum >= tickLength) {
            tickAccum -= tickLength;
            controlTick(tickLength);
        }

        logicSleepStart = Timer.stamp(); // BEGIN SLEEP
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

        Render.render(frame, ctrl.render(delta));

        pushProfile(Timer.stamp() - renderStart, renderProfile); // END RENDER
    }
}
