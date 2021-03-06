package;

import control.Control;
import control.Noise;
import control.Event;
import control.Profile;
import control.Key;
import haxe.Timer;
import kha.Configuration;
import kha.Framebuffer;
import kha.Game;
import kha.Image;
import kha.Loader;
import kha.LoadingScreen;
import kha.Scaler;
import kha.Sys;
import kha.graphics2.Graphics;

using kha.graphics2.GraphicsExtension;

/**
 * Control implementation for the kha web export.
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
    private var ctrl:Control<Noise>;
    private var backbuffer:Image;
    private var g:Graphics;

    /**
     * resizing
     */
    private var realHeight:Float = 900;
    private var realWidth:Float = 1600;

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

    private var bufferStart:Float;
    private var renderStart:Float;
    private var renderSleepStart:Float;

    private var tickStart:Float;
    private var tickSleepStart:Float;

    /**
     * profiles
     */ 
    private var renderOn:Array<Int> = [];
    private var renderOff:Array<Int> = [];
    private var primCount:Array<Int> = [];
    private var tickOn:Array<Int> = [];
    private var tickOff:Array<Int> = [];

    /*************************************************************************/
    /* constructor
    /*************************************************************************/

    public function new(ctrl:Control<Noise>, tps:Int = 60):Void {
        super("solemnsky", false); // initialise our game, I think kha does
                                   // a whole bunch of stuff here

        /***********************************************/
        /* this state
        /***********************************************/
        this.tps = tps; // set settings
        this.tickLength = 1 / tps;
        this.ctrl = ctrl;      

        /***********************************************/
        /* timers
        /***********************************************/
        var now = Timer.stamp();
        bufferStart = now;
        renderStart = now; 
        renderSleepStart = now; 

        tickStart = now;
        tickSleepStart = now;
        
        lastTick = now; 
        lastRender = now; 

        /***********************************************/
        /* resizing 
        /***********************************************/

        #if js
        var doc = js.Browser.document;
        doc.body.style.margin = "0px";
        doc.body.style.overflow = "hidden";
        doc.getElementsByTagName("p").item(0).style.margin = "0px";
        resize();
        js.Browser.window.onresize = resize;
        #end

        #if cpp
        resize();
        // stub
        #end

   }

    /*************************************************************************/
    /* game interface
    /*************************************************************************/

    override public function init():Void {
        super.init();

        /***********************************************/
        /* initialise graphics, networking
        /***********************************************/
        backbuffer = Image.createRenderTarget(1600, 900);
        g = backbuffer.g2;
        Configuration.setScreen(new LoadingScreen());
        Loader.the.loadRoom("main", 
            function(){Configuration.setScreen(this);});

        ctrl.init(null); // null network
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
                , primCount
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

    /*************************************************************************/
    /* UI event handling
    /*************************************************************************/

    override public function mouseMove(x:Int, y:Int):Void {
        var event:Event;
        if (realWidth/realHeight > 16/9) {
            var factor = 900 / realHeight;
            event = MouseEvent(
                x * factor + (1600 - realWidth * factor) / 2
                , y * factor
            );
        } else {
            var factor = 1600 / realWidth;
            event = MouseEvent(
                x * factor
                , y * factor + (900 - realHeight * factor) / 2
            );
        }
        ctrl.handle(event);
    }

    /**
     * Converts a kha Key to a control Event.Key.
     */
    private static function keyFromKha(key, char):Key {
        var key;
        if (char != "") {
            key = CharKey(char);
        } else {
            key = BadKey; // TODO: fix other keys on Kha.. ??
        }
        return key;
    }

    override public function keyDown(key, char):Void {
       ctrl.handle(KbEvent(keyFromKha(key, char), true));
    }

    override public function keyUp(key, char):Void {
        ctrl.handle(KbEvent(keyFromKha(key, char), false));
    }

    /*************************************************************************/
    /* profiling helpers                                                     */
    /*************************************************************************/

    /**
     * pushes a profile value to a profile
     */ 
    private function pushProfile(
        point:Float, profile:Array<Int>
    ):Void {
        profile.push(Math.round(point * 1000));
        if (profile.length > profileWindow) {
            profile.shift(); 
        } 
    }

    private function pushProfileValue(
        point:Int, profile:Array<Int>
    ):Void {
        profile.push(point);
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
    private function controlRender(
        frame: Framebuffer
        , delta:Float
    ):Void {
        renderStart = Timer.stamp(); // BEGIN RENDER
        var prims = Render.render(g, 
            function(f) ctrl.render(f, delta)); 
            // render to backbuffer
        startRender(frame);
        Scaler.scale(backbuffer, frame, Sys.screenRotation);
        endRender(frame);
        pushProfile(Timer.stamp() - renderStart, renderOn); 
        pushProfileValue(prims, primCount); // END RENDER
    }

    /*************************************************************************/
    /* resizing
    /*************************************************************************/

    #if js
    private function resize():Void {
        var win = js.Browser.window;
        var canvas = 
            js.Browser.document.getElementsByTagName("canvas").item(0);

        var w = win.innerWidth; var h = win.innerHeight;
        canvas.setAttribute('width', w+'');
        canvas.setAttribute('height', h+'');

        this.realWidth = w; this.realHeight = h;
    }
    #end

    #if cpp
    private function resize():Void {
        // stub 
    }
    #end

}
