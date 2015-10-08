package solemnsky.kha;

import haxe.Timer;
import kha.Framebuffer;
import kha.Game;
import kha.Image;
import kha.Scaler;
import kha.Sys;
import kha.graphics2.Graphics;
import solemnsky.control.Control;
import solemnsky.control.Event;
import solemnsky.control.Profile;

using kha.graphics2.GraphicsExtension;

/**
 * solemnsky.kha.Manager: 
 * This is the interface between a Control object and a kha Game object.
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
    private var backbuffer:Image;
    private var g:Graphics;

    /**
     * profiling settings
     */ 
    private static inline var profileWindow:Int = 50;
    private static inline var profileUpdate:Int = 100;
  
    /**
     * timing state
     */ 
    private var lastTick:Float;
    private var tickAccum:Float = 0;
    private var lastRender:Float;

    /**
     * profiling state
     */ 
    private var profileTicker:Int = 0; // ticks on render

    private var tickStart:Float;
    private var renderStart:Float;
    private var tickSleepStart:Float;
    private var renderSleepStart:Float;

    /**
     * profiles
     */ 
    private var renderOn:Array<Int> = [];
    private var renderOff:Array<Int> = [];
    private var tickOn:Array<Int> = [];
    private var tickOff:Array<Int> = [];

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
        lastTick = now; lastRender = now; tickStart = now;
        renderStart = now; renderSleepStart = now; tickSleepStart = now;
    }

    /*************************************************************************/
    /* game interface
    /*************************************************************************/

    override public function init():Void {
        super.init();

        backbuffer = Image.createRenderTarget(1600, 900);
        g = backbuffer.g2;
    }


    /**
     * called on frame render
     */
    override public function render(frame:Framebuffer):Void
    {
        // tick profile uplink
        profileTicker ++; 
        if (profileTicker > profileUpdate) {
            profileTicker = 0;
            ctrl.profiling(new Profile(
                renderOn
                , renderOff
                , tickOn
                , tickOff
            ));
        }

        var now = Timer.stamp(); 

        pushProfile(
            now - renderSleepStart, 
            renderOff); // END SLEEP

        var newRender = now;
        var sleepTime:Float = newRender - lastRender;
        lastRender = newRender;
        controlRender(frame, sleepTime);

        renderSleepStart = Timer.stamp(); // BEGIN SLEEP
    }

    /**
     * called on update
     */
    override public function update():Void {
        var now = Timer.stamp();
        pushProfile(
            now - tickSleepStart,
            tickOff); // END SLEEP

        var newTick = now;
        tickAccum += (newTick - lastTick);
        lastTick = newTick;

        while (tickAccum >= tickLength) {
            tickAccum -= tickLength;
            controlTick(tickLength);
        }

        tickSleepStart = Timer.stamp(); // BEGIN SLEEP
    }

    override public function mouseMove(x:Int, y:Int):Void {
        var event:Event = MouseMove(x, y);
        ctrl.handle(event);
    }

    /*************************************************************************/
    /* profiling helpers                                                     */
    /*************************************************************************/

    /**
     * pushes a profile value to a profile
     */ 
    private function 
        pushProfile(point:Float, profile:Array<Int>):Void {
        profile.push(Math.round(point * 1000));
        if (profile.length > profileWindow) {
            profile.shift(); 
        } 
    }

    /*************************************************************************/
    /* per-operation logic
    /*************************************************************************/

    /**
     * called on a tick
     */ 
    private function controlTick(deltaRaw:Float):Void {
        tickStart = Timer.stamp(); // BEGIN LOGIC

        var delta = deltaRaw * 1000;
        ctrl.tick(delta);

        pushProfile(Timer.stamp() - tickStart, tickOn); // END LOGIC
    }

    /**
     * called on a render
     */ 
    private function controlRender(frame: Framebuffer, deltaRaw:Float):Void {
        renderStart = Timer.stamp(); // BEGIN RENDER

        var delta = deltaRaw * 1000;

        Render.render(g, ctrl.render(delta)); // render to backbuffer

        startRender(frame);
        Scaler.scale(backbuffer, frame, Sys.screenRotation);
        endRender(frame);

        pushProfile(Timer.stamp() - renderStart, renderOn); // END RENDER
    }
}
