#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Manager
#include <Manager.h>
#endif
#ifndef INCLUDED_Render
#include <Render.h>
#endif
#ifndef INCLUDED_control_Control
#include <control/Control.h>
#endif
#ifndef INCLUDED_control_Event
#include <control/Event.h>
#endif
#ifndef INCLUDED_control_Key
#include <control/Key.h>
#endif
#ifndef INCLUDED_control_Network
#include <control/Network.h>
#endif
#ifndef INCLUDED_control_Profile
#include <control/Profile.h>
#endif
#ifndef INCLUDED_control_Scene
#include <control/Scene.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Configuration
#include <kha/Configuration.h>
#endif
#ifndef INCLUDED_kha_Framebuffer
#include <kha/Framebuffer.h>
#endif
#ifndef INCLUDED_kha_Game
#include <kha/Game.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_Key
#include <kha/Key.h>
#endif
#ifndef INCLUDED_kha_Loader
#include <kha/Loader.h>
#endif
#ifndef INCLUDED_kha_LoadingScreen
#include <kha/LoadingScreen.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Scaler
#include <kha/Scaler.h>
#endif
#ifndef INCLUDED_kha_ScreenRotation
#include <kha/ScreenRotation.h>
#endif
#ifndef INCLUDED_kha_Sys
#include <kha/Sys.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureFormat
#include <kha/graphics4/TextureFormat.h>
#endif

Void Manager_obj::__construct(::control::Control ctrl,hx::Null< int >  __o_tps)
{
HX_STACK_FRAME("Manager","new",0xce8e05bf,"Manager.new","Manager.hx",25,0xbae63691)
HX_STACK_THIS(this)
HX_STACK_ARG(ctrl,"ctrl")
HX_STACK_ARG(__o_tps,"tps")
int tps = __o_tps.Default(60);
{
	HX_STACK_LINE(75)
	this->tickOff = Array_obj< int >::__new();
	HX_STACK_LINE(74)
	this->tickOn = Array_obj< int >::__new();
	HX_STACK_LINE(73)
	this->primCount = Array_obj< int >::__new();
	HX_STACK_LINE(72)
	this->renderOff = Array_obj< int >::__new();
	HX_STACK_LINE(71)
	this->renderOn = Array_obj< int >::__new();
	HX_STACK_LINE(70)
	this->bufferOn = Array_obj< int >::__new();
	HX_STACK_LINE(58)
	this->profileTicker = (int)0;
	HX_STACK_LINE(52)
	this->tickAccum = ((Float)0);
	HX_STACK_LINE(82)
	super::__construct(HX_HCSTRING("solemnsky","\xeb","\x85","\x25","\x88"),false);
	HX_STACK_LINE(88)
	this->tps = tps;
	HX_STACK_LINE(89)
	Float tmp = (Float((int)1) / Float(tps));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	this->tickLength = tmp;
	HX_STACK_LINE(90)
	this->ctrl = ctrl;
	HX_STACK_LINE(95)
	Float tmp1 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	Float now = tmp1;		HX_STACK_VAR(now,"now");
	HX_STACK_LINE(96)
	this->bufferStart = now;
	HX_STACK_LINE(97)
	this->renderStart = now;
	HX_STACK_LINE(98)
	this->renderSleepStart = now;
	HX_STACK_LINE(100)
	this->tickStart = now;
	HX_STACK_LINE(101)
	this->tickSleepStart = now;
	HX_STACK_LINE(103)
	this->lastTick = now;
	HX_STACK_LINE(104)
	this->lastRender = now;
	HX_STACK_LINE(120)
	this->resize();
}
;
	return null();
}

//Manager_obj::~Manager_obj() { }

Dynamic Manager_obj::__CreateEmpty() { return  new Manager_obj; }
hx::ObjectPtr< Manager_obj > Manager_obj::__new(::control::Control ctrl,hx::Null< int >  __o_tps)
{  hx::ObjectPtr< Manager_obj > _result_ = new Manager_obj();
	_result_->__construct(ctrl,__o_tps);
	return _result_;}

Dynamic Manager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Manager_obj > _result_ = new Manager_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Manager_obj::init( ){
{
		HX_STACK_FRAME("Manager","init",0xea6fb8d1,"Manager.init","Manager.hx",130,0xbae63691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		::Manager _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(131)
		this->super::init();
		HX_STACK_LINE(136)
		::kha::Image tmp = ::kha::Image_obj::createRenderTarget((int)1600,(int)900,null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		this->backbuffer = tmp;
		HX_STACK_LINE(137)
		::kha::Image tmp1 = this->backbuffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		::kha::graphics2::Graphics tmp2 = tmp1->get_g2();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		this->g = tmp2;
		HX_STACK_LINE(138)
		::kha::LoadingScreen tmp3 = ::kha::LoadingScreen_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(138)
		::kha::Configuration_obj::setScreen(tmp3);
		HX_STACK_LINE(139)
		::kha::Loader tmp4 = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp4,"tmp4");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::Manager,_g)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Manager.hx",140,0xbae63691)
			{
				HX_STACK_LINE(140)
				::Manager tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(140)
				::kha::Configuration_obj::setScreen(tmp5);
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(139)
		tmp4->loadRoom(HX_HCSTRING("main","\x39","\x38","\x56","\x48"), Dynamic(new _Function_1_1(_g)));
		HX_STACK_LINE(142)
		::control::Control tmp5 = this->ctrl;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(142)
		tmp5->init(null());
	}
return null();
}


Void Manager_obj::render( ::kha::Framebuffer frame){
{
		HX_STACK_FRAME("Manager","render",0x9e499b57,"Manager.render","Manager.hx",149,0xbae63691)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frame,"frame")
		HX_STACK_LINE(151)
		(this->profileTicker)++;
		HX_STACK_LINE(152)
		int tmp = this->profileTicker;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		bool tmp1 = (tmp > (int)100);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		if ((tmp1)){
			HX_STACK_LINE(153)
			this->profileTicker = (int)0;
			HX_STACK_LINE(154)
			::control::Control tmp2 = this->ctrl;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(155)
			Array< int > tmp3 = this->bufferOn;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(156)
			Array< int > tmp4 = this->renderOn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(157)
			Array< int > tmp5 = this->renderOff;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(158)
			Array< int > tmp6 = this->primCount;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(159)
			Array< int > tmp7 = this->tickOn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(160)
			Array< int > tmp8 = this->tickOff;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(154)
			::control::Profile tmp9 = ::control::Profile_obj::__new(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(154)
			tmp2->profiling(tmp9);
		}
		HX_STACK_LINE(164)
		Float tmp2 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		Float now = tmp2;		HX_STACK_VAR(now,"now");
		HX_STACK_LINE(167)
		Float tmp3 = now;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(167)
		Float tmp4 = this->renderSleepStart;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(167)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(168)
		Array< int > tmp6 = this->renderOff;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(166)
		this->pushProfile(tmp5,tmp6);
		HX_STACK_LINE(170)
		Float newRender = now;		HX_STACK_VAR(newRender,"newRender");
		HX_STACK_LINE(171)
		Float tmp7 = newRender;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(171)
		Float tmp8 = this->lastRender;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(171)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(171)
		Float sleepTime = tmp9;		HX_STACK_VAR(sleepTime,"sleepTime");
		HX_STACK_LINE(172)
		this->lastRender = newRender;
		HX_STACK_LINE(173)
		::kha::Framebuffer tmp10 = frame;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(173)
		Float tmp11 = sleepTime;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(173)
		this->controlRender(tmp10,tmp11);
		HX_STACK_LINE(175)
		Float tmp12 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(175)
		this->renderSleepStart = tmp12;
	}
return null();
}


Void Manager_obj::update( ){
{
		HX_STACK_FRAME("Manager","update",0x2025b60a,"Manager.update","Manager.hx",181,0xbae63691)
		HX_STACK_THIS(this)
		HX_STACK_LINE(182)
		Float tmp = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(182)
		Float now = tmp;		HX_STACK_VAR(now,"now");
		HX_STACK_LINE(184)
		Float tmp1 = now;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(184)
		Float tmp2 = this->tickSleepStart;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(184)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(185)
		Array< int > tmp4 = this->tickOff;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(183)
		this->pushProfile(tmp3,tmp4);
		HX_STACK_LINE(187)
		Float newTick = now;		HX_STACK_VAR(newTick,"newTick");
		HX_STACK_LINE(188)
		Float tmp5 = newTick;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(188)
		Float tmp6 = this->lastTick;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(188)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(188)
		hx::AddEq(this->tickAccum,tmp7);
		HX_STACK_LINE(189)
		this->lastTick = newTick;
		HX_STACK_LINE(191)
		while((true)){
			HX_STACK_LINE(191)
			Float tmp8 = this->tickAccum;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(191)
			Float tmp9 = this->tickLength;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(191)
			bool tmp10 = (tmp8 >= tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(191)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(191)
			if ((tmp11)){
				HX_STACK_LINE(191)
				break;
			}
			HX_STACK_LINE(192)
			Float tmp12 = this->tickLength;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(192)
			hx::SubEq(this->tickAccum,tmp12);
			HX_STACK_LINE(193)
			Float tmp13 = this->tickLength;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(193)
			this->controlTick(tmp13);
		}
		HX_STACK_LINE(196)
		Float tmp8 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(196)
		this->tickSleepStart = tmp8;
	}
return null();
}


Void Manager_obj::mouseMove( int x,int y){
{
		HX_STACK_FRAME("Manager","mouseMove",0x8a7ca275,"Manager.mouseMove","Manager.hx",203,0xbae63691)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(204)
		::control::Event event;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(205)
		Float tmp = this->realWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(205)
		Float tmp1 = this->realHeight;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(205)
		Float tmp3 = ((Float)1.77777777777777768);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(205)
		bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(205)
		if ((tmp4)){
			HX_STACK_LINE(206)
			Float tmp5 = this->realHeight;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(206)
			Float tmp6 = (Float((int)900) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(206)
			Float factor = tmp6;		HX_STACK_VAR(factor,"factor");
			HX_STACK_LINE(208)
			Float tmp7 = (x * factor);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(208)
			Float tmp8 = this->realWidth;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(208)
			Float tmp9 = factor;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(208)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(208)
			Float tmp11 = ((int)1600 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(208)
			Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(208)
			Float tmp13 = (tmp7 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(209)
			Float tmp14 = (y * factor);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(207)
			::control::Event tmp15 = ::control::Event_obj::MouseEvent(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(207)
			event = tmp15;
		}
		else{
			HX_STACK_LINE(212)
			Float tmp5 = this->realWidth;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(212)
			Float tmp6 = (Float((int)1600) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(212)
			Float factor = tmp6;		HX_STACK_VAR(factor,"factor");
			HX_STACK_LINE(214)
			Float tmp7 = (x * factor);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(215)
			Float tmp8 = (y * factor);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(215)
			Float tmp9 = this->realHeight;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(215)
			Float tmp10 = factor;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(215)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(215)
			Float tmp12 = ((int)900 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(215)
			Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(215)
			Float tmp14 = (tmp8 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(213)
			::control::Event tmp15 = ::control::Event_obj::MouseEvent(tmp7,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(213)
			event = tmp15;
		}
		HX_STACK_LINE(218)
		::control::Control tmp5 = this->ctrl;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(218)
		::control::Event tmp6 = event;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(218)
		tmp5->handle(tmp6);
	}
return null();
}


Void Manager_obj::keyDown( ::kha::Key key,::String _char){
{
		HX_STACK_FRAME("Manager","keyDown",0xff513a80,"Manager.keyDown","Manager.hx",234,0xbae63691)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(_char,"char")
		HX_STACK_LINE(235)
		::control::Control tmp = this->ctrl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(235)
		::kha::Key tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(235)
		::String tmp2 = _char;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(235)
		::control::Key tmp3 = ::Manager_obj::keyFromKha(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(235)
		::control::Event tmp4 = ::control::Event_obj::KbEvent(tmp3,true);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(235)
		tmp->handle(tmp4);
	}
return null();
}


Void Manager_obj::keyUp( ::kha::Key key,::String _char){
{
		HX_STACK_FRAME("Manager","keyUp",0x583844f9,"Manager.keyUp","Manager.hx",238,0xbae63691)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(_char,"char")
		HX_STACK_LINE(239)
		::control::Control tmp = this->ctrl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(239)
		::kha::Key tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(239)
		::String tmp2 = _char;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(239)
		::control::Key tmp3 = ::Manager_obj::keyFromKha(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(239)
		::control::Event tmp4 = ::control::Event_obj::KbEvent(tmp3,false);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(239)
		tmp->handle(tmp4);
	}
return null();
}


Void Manager_obj::pushProfile( Float point,Array< int > profile){
{
		HX_STACK_FRAME("Manager","pushProfile",0xdd6fdace,"Manager.pushProfile","Manager.hx",250,0xbae63691)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(profile,"profile")
		HX_STACK_LINE(251)
		Float tmp = (point * (int)1000);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(251)
		int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(251)
		profile->push(tmp1);
		HX_STACK_LINE(252)
		bool tmp2 = (profile->length > (int)50);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(252)
		if ((tmp2)){
			HX_STACK_LINE(253)
			profile->shift();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,pushProfile,(void))

Void Manager_obj::pushProfileValue( int point,Array< int > profile){
{
		HX_STACK_FRAME("Manager","pushProfileValue",0xff4429c3,"Manager.pushProfileValue","Manager.hx",258,0xbae63691)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(profile,"profile")
		HX_STACK_LINE(259)
		int tmp = point;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(259)
		profile->push(tmp);
		HX_STACK_LINE(260)
		bool tmp1 = (profile->length > (int)50);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(260)
		if ((tmp1)){
			HX_STACK_LINE(261)
			profile->shift();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,pushProfileValue,(void))

Void Manager_obj::controlTick( Float deltaRaw){
{
		HX_STACK_FRAME("Manager","controlTick",0xecb9f9b9,"Manager.controlTick","Manager.hx",272,0xbae63691)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaRaw,"deltaRaw")
		HX_STACK_LINE(273)
		Float tmp = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(273)
		this->tickStart = tmp;
		HX_STACK_LINE(274)
		Float tmp1 = (deltaRaw * (int)1000);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(274)
		Float delta = tmp1;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(275)
		::control::Control tmp2 = this->ctrl;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(275)
		Float tmp3 = delta;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(275)
		tmp2->tick(tmp3);
		HX_STACK_LINE(276)
		Float tmp4 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(276)
		Float tmp5 = this->tickStart;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(276)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(276)
		Array< int > tmp7 = this->tickOn;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(276)
		this->pushProfile(tmp6,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,controlTick,(void))

Void Manager_obj::controlRender( ::kha::Framebuffer frame,Float deltaRaw){
{
		HX_STACK_FRAME("Manager","controlRender",0xf765f0b2,"Manager.controlRender","Manager.hx",282,0xbae63691)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frame,"frame")
		HX_STACK_ARG(deltaRaw,"deltaRaw")
		HX_STACK_LINE(283)
		Float tmp = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(283)
		this->bufferStart = tmp;
		HX_STACK_LINE(284)
		Float tmp1 = (deltaRaw * (int)1000);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(284)
		Float delta = tmp1;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(285)
		::control::Control tmp2 = this->ctrl;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(285)
		Float tmp3 = delta;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(285)
		::control::Scene tmp4 = tmp2->render(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(285)
		::control::Scene buffer = tmp4;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(286)
		Float tmp5 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(286)
		Float now = tmp5;		HX_STACK_VAR(now,"now");
		HX_STACK_LINE(287)
		Float tmp6 = now;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(287)
		Float tmp7 = this->bufferStart;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(287)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(287)
		Array< int > tmp9 = this->bufferOn;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(287)
		this->pushProfile(tmp8,tmp9);
		HX_STACK_LINE(289)
		this->renderStart = now;
		HX_STACK_LINE(290)
		::kha::graphics2::Graphics tmp10 = this->g;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(290)
		::control::Scene tmp11 = buffer;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(290)
		int tmp12 = ::Render_obj::render(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(290)
		int prims = tmp12;		HX_STACK_VAR(prims,"prims");
		HX_STACK_LINE(291)
		::kha::Framebuffer tmp13 = frame;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(291)
		this->startRender(tmp13);
		HX_STACK_LINE(292)
		::kha::Image tmp14 = this->backbuffer;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(292)
		::kha::Framebuffer tmp15 = frame;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(292)
		::kha::ScreenRotation tmp16 = ::kha::Sys_obj::screenRotation;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(292)
		::kha::Scaler_obj::scale(tmp14,tmp15,tmp16);
		HX_STACK_LINE(293)
		::kha::Framebuffer tmp17 = frame;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(293)
		this->endRender(tmp17);
		HX_STACK_LINE(294)
		Float tmp18 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(294)
		Float tmp19 = this->renderStart;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(294)
		Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(294)
		Array< int > tmp21 = this->renderOn;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(294)
		this->pushProfile(tmp20,tmp21);
		HX_STACK_LINE(295)
		int tmp22 = prims;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(295)
		Array< int > tmp23 = this->primCount;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(295)
		this->pushProfileValue(tmp22,tmp23);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,controlRender,(void))

Void Manager_obj::resize( ){
{
		HX_STACK_FRAME("Manager","resize",0xa19b89f5,"Manager.resize","Manager.hx",317,0xbae63691)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,resize,(void))

int Manager_obj::profileWindow;

int Manager_obj::profileUpdate;

::control::Key Manager_obj::keyFromKha( ::kha::Key key,::String _char){
	HX_STACK_FRAME("Manager","keyFromKha",0x3ee2c17c,"Manager.keyFromKha","Manager.hx",224,0xbae63691)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(_char,"char")
	HX_STACK_LINE(225)
	::control::Key key1;		HX_STACK_VAR(key1,"key1");
	HX_STACK_LINE(226)
	bool tmp = (_char != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(226)
	if ((tmp)){
		HX_STACK_LINE(227)
		::String tmp1 = _char;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		::control::Key tmp2 = ::control::Key_obj::CharKey(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(227)
		key1 = tmp2;
	}
	else{
		HX_STACK_LINE(229)
		key1 = ::control::Key_obj::BadKey;
	}
	HX_STACK_LINE(231)
	::control::Key tmp1 = key1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(231)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Manager_obj,keyFromKha,return )


Manager_obj::Manager_obj()
{
}

void Manager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Manager);
	HX_MARK_MEMBER_NAME(tps,"tps");
	HX_MARK_MEMBER_NAME(tickLength,"tickLength");
	HX_MARK_MEMBER_NAME(ctrl,"ctrl");
	HX_MARK_MEMBER_NAME(backbuffer,"backbuffer");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(realHeight,"realHeight");
	HX_MARK_MEMBER_NAME(realWidth,"realWidth");
	HX_MARK_MEMBER_NAME(lastTick,"lastTick");
	HX_MARK_MEMBER_NAME(tickAccum,"tickAccum");
	HX_MARK_MEMBER_NAME(lastRender,"lastRender");
	HX_MARK_MEMBER_NAME(profileTicker,"profileTicker");
	HX_MARK_MEMBER_NAME(bufferStart,"bufferStart");
	HX_MARK_MEMBER_NAME(renderStart,"renderStart");
	HX_MARK_MEMBER_NAME(renderSleepStart,"renderSleepStart");
	HX_MARK_MEMBER_NAME(tickStart,"tickStart");
	HX_MARK_MEMBER_NAME(tickSleepStart,"tickSleepStart");
	HX_MARK_MEMBER_NAME(bufferOn,"bufferOn");
	HX_MARK_MEMBER_NAME(renderOn,"renderOn");
	HX_MARK_MEMBER_NAME(renderOff,"renderOff");
	HX_MARK_MEMBER_NAME(primCount,"primCount");
	HX_MARK_MEMBER_NAME(tickOn,"tickOn");
	HX_MARK_MEMBER_NAME(tickOff,"tickOff");
	::kha::Game_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Manager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tps,"tps");
	HX_VISIT_MEMBER_NAME(tickLength,"tickLength");
	HX_VISIT_MEMBER_NAME(ctrl,"ctrl");
	HX_VISIT_MEMBER_NAME(backbuffer,"backbuffer");
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(realHeight,"realHeight");
	HX_VISIT_MEMBER_NAME(realWidth,"realWidth");
	HX_VISIT_MEMBER_NAME(lastTick,"lastTick");
	HX_VISIT_MEMBER_NAME(tickAccum,"tickAccum");
	HX_VISIT_MEMBER_NAME(lastRender,"lastRender");
	HX_VISIT_MEMBER_NAME(profileTicker,"profileTicker");
	HX_VISIT_MEMBER_NAME(bufferStart,"bufferStart");
	HX_VISIT_MEMBER_NAME(renderStart,"renderStart");
	HX_VISIT_MEMBER_NAME(renderSleepStart,"renderSleepStart");
	HX_VISIT_MEMBER_NAME(tickStart,"tickStart");
	HX_VISIT_MEMBER_NAME(tickSleepStart,"tickSleepStart");
	HX_VISIT_MEMBER_NAME(bufferOn,"bufferOn");
	HX_VISIT_MEMBER_NAME(renderOn,"renderOn");
	HX_VISIT_MEMBER_NAME(renderOff,"renderOff");
	HX_VISIT_MEMBER_NAME(primCount,"primCount");
	HX_VISIT_MEMBER_NAME(tickOn,"tickOn");
	HX_VISIT_MEMBER_NAME(tickOff,"tickOff");
	::kha::Game_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Manager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"tps") ) { return tps; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ctrl") ) { return ctrl; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"keyUp") ) { return keyUp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tickOn") ) { return tickOn; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tickOff") ) { return tickOff; }
		if (HX_FIELD_EQ(inName,"keyDown") ) { return keyDown_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastTick") ) { return lastTick; }
		if (HX_FIELD_EQ(inName,"bufferOn") ) { return bufferOn; }
		if (HX_FIELD_EQ(inName,"renderOn") ) { return renderOn; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"realWidth") ) { return realWidth; }
		if (HX_FIELD_EQ(inName,"tickAccum") ) { return tickAccum; }
		if (HX_FIELD_EQ(inName,"tickStart") ) { return tickStart; }
		if (HX_FIELD_EQ(inName,"renderOff") ) { return renderOff; }
		if (HX_FIELD_EQ(inName,"primCount") ) { return primCount; }
		if (HX_FIELD_EQ(inName,"mouseMove") ) { return mouseMove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tickLength") ) { return tickLength; }
		if (HX_FIELD_EQ(inName,"backbuffer") ) { return backbuffer; }
		if (HX_FIELD_EQ(inName,"realHeight") ) { return realHeight; }
		if (HX_FIELD_EQ(inName,"lastRender") ) { return lastRender; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bufferStart") ) { return bufferStart; }
		if (HX_FIELD_EQ(inName,"renderStart") ) { return renderStart; }
		if (HX_FIELD_EQ(inName,"pushProfile") ) { return pushProfile_dyn(); }
		if (HX_FIELD_EQ(inName,"controlTick") ) { return controlTick_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"profileTicker") ) { return profileTicker; }
		if (HX_FIELD_EQ(inName,"controlRender") ) { return controlRender_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tickSleepStart") ) { return tickSleepStart; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"renderSleepStart") ) { return renderSleepStart; }
		if (HX_FIELD_EQ(inName,"pushProfileValue") ) { return pushProfileValue_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Manager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"keyFromKha") ) { outValue = keyFromKha_dyn(); return true;  }
	}
	return false;
}

Dynamic Manager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< ::kha::graphics2::Graphics >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"tps") ) { tps=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ctrl") ) { ctrl=inValue.Cast< ::control::Control >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tickOn") ) { tickOn=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tickOff") ) { tickOff=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastTick") ) { lastTick=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bufferOn") ) { bufferOn=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderOn") ) { renderOn=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"realWidth") ) { realWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tickAccum") ) { tickAccum=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tickStart") ) { tickStart=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderOff") ) { renderOff=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"primCount") ) { primCount=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tickLength") ) { tickLength=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backbuffer") ) { backbuffer=inValue.Cast< ::kha::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"realHeight") ) { realHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastRender") ) { lastRender=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bufferStart") ) { bufferStart=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderStart") ) { renderStart=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"profileTicker") ) { profileTicker=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tickSleepStart") ) { tickSleepStart=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"renderSleepStart") ) { renderSleepStart=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Manager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Manager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tps","\x77","\x67","\x58","\x00"));
	outFields->push(HX_HCSTRING("tickLength","\x23","\x30","\x59","\xfa"));
	outFields->push(HX_HCSTRING("ctrl","\xab","\x88","\xc8","\x41"));
	outFields->push(HX_HCSTRING("backbuffer","\x67","\x2e","\x8a","\xda"));
	outFields->push(HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("realHeight","\xe5","\xa1","\x73","\x48"));
	outFields->push(HX_HCSTRING("realWidth","\xc8","\xe5","\x24","\xce"));
	outFields->push(HX_HCSTRING("lastTick","\xd3","\xdc","\x45","\xe0"));
	outFields->push(HX_HCSTRING("tickAccum","\x3c","\x45","\xd8","\x96"));
	outFields->push(HX_HCSTRING("lastRender","\x4c","\x4e","\x04","\xd0"));
	outFields->push(HX_HCSTRING("profileTicker","\x13","\xef","\xa4","\xa4"));
	outFields->push(HX_HCSTRING("bufferStart","\x42","\x07","\x57","\x21"));
	outFields->push(HX_HCSTRING("renderStart","\x2c","\xa1","\xbc","\x4f"));
	outFields->push(HX_HCSTRING("renderSleepStart","\xc1","\x8a","\x02","\xe2"));
	outFields->push(HX_HCSTRING("tickStart","\xc5","\xcf","\x49","\xff"));
	outFields->push(HX_HCSTRING("tickSleepStart","\x88","\xd1","\x88","\x4a"));
	outFields->push(HX_HCSTRING("bufferOn","\x3f","\x42","\xfe","\xac"));
	outFields->push(HX_HCSTRING("renderOn","\x15","\xb2","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("renderOff","\xb9","\x19","\x60","\xcd"));
	outFields->push(HX_HCSTRING("primCount","\x89","\x80","\xd9","\x42"));
	outFields->push(HX_HCSTRING("tickOn","\xdc","\x59","\x3a","\x18"));
	outFields->push(HX_HCSTRING("tickOff","\x12","\x40","\xd4","\x1a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Manager_obj,tps),HX_HCSTRING("tps","\x77","\x67","\x58","\x00")},
	{hx::fsFloat,(int)offsetof(Manager_obj,tickLength),HX_HCSTRING("tickLength","\x23","\x30","\x59","\xfa")},
	{hx::fsObject /*::control::Control*/ ,(int)offsetof(Manager_obj,ctrl),HX_HCSTRING("ctrl","\xab","\x88","\xc8","\x41")},
	{hx::fsObject /*::kha::Image*/ ,(int)offsetof(Manager_obj,backbuffer),HX_HCSTRING("backbuffer","\x67","\x2e","\x8a","\xda")},
	{hx::fsObject /*::kha::graphics2::Graphics*/ ,(int)offsetof(Manager_obj,g),HX_HCSTRING("g","\x67","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Manager_obj,realHeight),HX_HCSTRING("realHeight","\xe5","\xa1","\x73","\x48")},
	{hx::fsFloat,(int)offsetof(Manager_obj,realWidth),HX_HCSTRING("realWidth","\xc8","\xe5","\x24","\xce")},
	{hx::fsFloat,(int)offsetof(Manager_obj,lastTick),HX_HCSTRING("lastTick","\xd3","\xdc","\x45","\xe0")},
	{hx::fsFloat,(int)offsetof(Manager_obj,tickAccum),HX_HCSTRING("tickAccum","\x3c","\x45","\xd8","\x96")},
	{hx::fsFloat,(int)offsetof(Manager_obj,lastRender),HX_HCSTRING("lastRender","\x4c","\x4e","\x04","\xd0")},
	{hx::fsInt,(int)offsetof(Manager_obj,profileTicker),HX_HCSTRING("profileTicker","\x13","\xef","\xa4","\xa4")},
	{hx::fsFloat,(int)offsetof(Manager_obj,bufferStart),HX_HCSTRING("bufferStart","\x42","\x07","\x57","\x21")},
	{hx::fsFloat,(int)offsetof(Manager_obj,renderStart),HX_HCSTRING("renderStart","\x2c","\xa1","\xbc","\x4f")},
	{hx::fsFloat,(int)offsetof(Manager_obj,renderSleepStart),HX_HCSTRING("renderSleepStart","\xc1","\x8a","\x02","\xe2")},
	{hx::fsFloat,(int)offsetof(Manager_obj,tickStart),HX_HCSTRING("tickStart","\xc5","\xcf","\x49","\xff")},
	{hx::fsFloat,(int)offsetof(Manager_obj,tickSleepStart),HX_HCSTRING("tickSleepStart","\x88","\xd1","\x88","\x4a")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Manager_obj,bufferOn),HX_HCSTRING("bufferOn","\x3f","\x42","\xfe","\xac")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Manager_obj,renderOn),HX_HCSTRING("renderOn","\x15","\xb2","\xdb","\xb2")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Manager_obj,renderOff),HX_HCSTRING("renderOff","\xb9","\x19","\x60","\xcd")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Manager_obj,primCount),HX_HCSTRING("primCount","\x89","\x80","\xd9","\x42")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Manager_obj,tickOn),HX_HCSTRING("tickOn","\xdc","\x59","\x3a","\x18")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Manager_obj,tickOff),HX_HCSTRING("tickOff","\x12","\x40","\xd4","\x1a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Manager_obj::profileWindow,HX_HCSTRING("profileWindow","\xf9","\x15","\xf7","\xde")},
	{hx::fsInt,(void *) &Manager_obj::profileUpdate,HX_HCSTRING("profileUpdate","\x12","\x08","\x70","\x13")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tps","\x77","\x67","\x58","\x00"),
	HX_HCSTRING("tickLength","\x23","\x30","\x59","\xfa"),
	HX_HCSTRING("ctrl","\xab","\x88","\xc8","\x41"),
	HX_HCSTRING("backbuffer","\x67","\x2e","\x8a","\xda"),
	HX_HCSTRING("g","\x67","\x00","\x00","\x00"),
	HX_HCSTRING("realHeight","\xe5","\xa1","\x73","\x48"),
	HX_HCSTRING("realWidth","\xc8","\xe5","\x24","\xce"),
	HX_HCSTRING("lastTick","\xd3","\xdc","\x45","\xe0"),
	HX_HCSTRING("tickAccum","\x3c","\x45","\xd8","\x96"),
	HX_HCSTRING("lastRender","\x4c","\x4e","\x04","\xd0"),
	HX_HCSTRING("profileTicker","\x13","\xef","\xa4","\xa4"),
	HX_HCSTRING("bufferStart","\x42","\x07","\x57","\x21"),
	HX_HCSTRING("renderStart","\x2c","\xa1","\xbc","\x4f"),
	HX_HCSTRING("renderSleepStart","\xc1","\x8a","\x02","\xe2"),
	HX_HCSTRING("tickStart","\xc5","\xcf","\x49","\xff"),
	HX_HCSTRING("tickSleepStart","\x88","\xd1","\x88","\x4a"),
	HX_HCSTRING("bufferOn","\x3f","\x42","\xfe","\xac"),
	HX_HCSTRING("renderOn","\x15","\xb2","\xdb","\xb2"),
	HX_HCSTRING("renderOff","\xb9","\x19","\x60","\xcd"),
	HX_HCSTRING("primCount","\x89","\x80","\xd9","\x42"),
	HX_HCSTRING("tickOn","\xdc","\x59","\x3a","\x18"),
	HX_HCSTRING("tickOff","\x12","\x40","\xd4","\x1a"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4"),
	HX_HCSTRING("keyDown","\xa1","\x69","\x47","\x9c"),
	HX_HCSTRING("keyUp","\xda","\xb9","\xfe","\xde"),
	HX_HCSTRING("pushProfile","\x6f","\xae","\xe2","\x02"),
	HX_HCSTRING("pushProfileValue","\x82","\x8e","\x29","\x89"),
	HX_HCSTRING("controlTick","\x5a","\xcd","\x2c","\x12"),
	HX_HCSTRING("controlRender","\x93","\xae","\xed","\x7d"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Manager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Manager_obj::profileWindow,"profileWindow");
	HX_MARK_MEMBER_NAME(Manager_obj::profileUpdate,"profileUpdate");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Manager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Manager_obj::profileWindow,"profileWindow");
	HX_VISIT_MEMBER_NAME(Manager_obj::profileUpdate,"profileUpdate");
};

#endif

hx::Class Manager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("profileWindow","\xf9","\x15","\xf7","\xde"),
	HX_HCSTRING("profileUpdate","\x12","\x08","\x70","\x13"),
	HX_HCSTRING("keyFromKha","\xfb","\xfc","\x83","\xc6"),
	::String(null()) };

void Manager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Manager","\x4d","\xba","\x12","\xe1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Manager_obj::__GetStatic;
	__mClass->mSetStaticField = &Manager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Manager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void Manager_obj::__boot()
{
	profileWindow= (int)50;
	profileUpdate= (int)100;
}

