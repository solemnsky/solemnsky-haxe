#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_kha_Button
#include <kha/Button.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Configuration
#include <kha/Configuration.h>
#endif
#ifndef INCLUDED_kha_EmptyScreen
#include <kha/EmptyScreen.h>
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
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Scheduler
#include <kha/Scheduler.h>
#endif
#ifndef INCLUDED_kha_Starter
#include <kha/Starter.h>
#endif
#ifndef INCLUDED_kha_Sys
#include <kha/Sys.h>
#endif
#ifndef INCLUDED_kha__Color_Color_Impl_
#include <kha/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_kha_audio2_Audio
#include <kha/audio2/Audio.h>
#endif
#ifndef INCLUDED_kha_audio2_Audio1
#include <kha/audio2/Audio1.h>
#endif
#ifndef INCLUDED_kha_graphics1_Graphics
#include <kha/graphics1/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics1
#include <kha/graphics2/Graphics1.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics
#include <kha/graphics4/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics2
#include <kha/graphics4/Graphics2.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureFormat
#include <kha/graphics4/TextureFormat.h>
#endif
#ifndef INCLUDED_kha_input_Gamepad
#include <kha/input/Gamepad.h>
#endif
#ifndef INCLUDED_kha_input_Keyboard
#include <kha/input/Keyboard.h>
#endif
#ifndef INCLUDED_kha_input_Mouse
#include <kha/input/Mouse.h>
#endif
#ifndef INCLUDED_kha_input_Sensor
#include <kha/input/Sensor.h>
#endif
#ifndef INCLUDED_kha_input_SensorType
#include <kha/input/SensorType.h>
#endif
#ifndef INCLUDED_kha_input_Surface
#include <kha/input/Surface.h>
#endif
#ifndef INCLUDED_kha_kore_Loader
#include <kha/kore/Loader.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_Graphics
#include <kha/kore/graphics4/Graphics.h>
#endif
#ifndef INCLUDED_kha_kore_graphics4_Graphics2
#include <kha/kore/graphics4/Graphics2.h>
#endif
#ifndef INCLUDED_kha_network_Controller
#include <kha/network/Controller.h>
#endif
namespace kha{

Void Starter_obj::__construct(::kha::graphics4::TextureFormat backbufferFormat)
{
HX_STACK_FRAME("kha.Starter","new",0xe5e49a57,"kha.Starter.new","kha/Starter.hx",43,0x3993a83a)
HX_STACK_THIS(this)
HX_STACK_ARG(backbufferFormat,"backbufferFormat")
{
	HX_STACK_LINE(44)
	cpp::ArrayBase tmp = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	::kha::Starter_obj::mouseLockListeners = tmp;
	HX_STACK_LINE(45)
	::haxe::Timer_obj::stamp();
	HX_STACK_LINE(46)
	::kha::input::Sensor_obj::get(::kha::input::SensorType_obj::Accelerometer);
	HX_STACK_LINE(47)
	::kha::input::Keyboard tmp1 = ::kha::input::Keyboard_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	::kha::Starter_obj::keyboard = tmp1;
	HX_STACK_LINE(48)
	::kha::input::Mouse tmp2 = ::kha::input::Mouse_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	::kha::Starter_obj::mouse = tmp2;
	HX_STACK_LINE(49)
	::kha::input::Gamepad tmp3 = ::kha::input::Gamepad_obj::__new(null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(49)
	::kha::Starter_obj::gamepad = tmp3;
	HX_STACK_LINE(50)
	::kha::input::Surface tmp4 = ::kha::input::Surface_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(50)
	::kha::Starter_obj::surface = tmp4;
	HX_STACK_LINE(51)
	::kha::Sys_obj::init();
	HX_STACK_LINE(52)
	::kha::audio2::Audio_obj::_init();
	HX_STACK_LINE(53)
	::kha::audio2::Audio1_obj::_init();
	HX_STACK_LINE(54)
	::kha::kore::Loader tmp5 = ::kha::kore::Loader_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(54)
	::kha::Loader_obj::init(tmp5);
	HX_STACK_LINE(55)
	::kha::Scheduler_obj::init();
}
;
	return null();
}

//Starter_obj::~Starter_obj() { }

Dynamic Starter_obj::__CreateEmpty() { return  new Starter_obj; }
hx::ObjectPtr< Starter_obj > Starter_obj::__new(::kha::graphics4::TextureFormat backbufferFormat)
{  hx::ObjectPtr< Starter_obj > _result_ = new Starter_obj();
	_result_->__construct(backbufferFormat);
	return _result_;}

Dynamic Starter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Starter_obj > _result_ = new Starter_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Starter_obj::start( ::kha::Game game){
{
		HX_STACK_FRAME("kha.Starter","start",0x86dbea19,"kha.Starter.start","kha/Starter.hx",58,0x3993a83a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(game,"game")
		HX_STACK_LINE(59)
		this->gameToStart = game;
		HX_STACK_LINE(60)
		int tmp = ::kha::_Color::Color_Impl__obj::fromBytes((int)0,(int)0,(int)0,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		::kha::EmptyScreen tmp1 = ::kha::EmptyScreen_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		::kha::Configuration_obj::setScreen(tmp1);
		HX_STACK_LINE(61)
		::kha::Loader tmp2 = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		Dynamic tmp3 = this->loadFinished_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		tmp2->loadProject(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Starter_obj,start,(void))

Void Starter_obj::loadFinished( ){
{
		HX_STACK_FRAME("kha.Starter","loadFinished",0x36df3ee1,"kha.Starter.loadFinished","kha/Starter.hx",64,0x3993a83a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("Starter.hx","\xef","\x98","\x90","\xf2"),65,HX_HCSTRING("kha.Starter","\xe5","\x22","\x2d","\x32"),HX_HCSTRING("loadFinished","\xb8","\x7f","\x77","\x4e"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		::haxe::Log_obj::trace(HX_HCSTRING("Project files loaded.","\x39","\x46","\x0b","\x65"),tmp);
		HX_STACK_LINE(66)
		::kha::Loader tmp1 = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		tmp1->initProject();
		HX_STACK_LINE(67)
		::kha::Loader tmp2 = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		::kha::Game tmp3 = this->gameToStart;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		tmp3->width = tmp2->width;
		HX_STACK_LINE(68)
		::kha::Loader tmp4 = ::kha::Loader_obj::the;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(68)
		::kha::Game tmp5 = this->gameToStart;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(68)
		tmp5->height = tmp4->height;
		HX_STACK_LINE(69)
		::kha::Game tmp6 = this->gameToStart;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(69)
		::kha::Configuration_obj::setScreen(tmp6);
		HX_STACK_LINE(70)
		::kha::Game tmp7 = ::kha::Configuration_obj::theScreen;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(70)
		tmp7->setInstance();
		HX_STACK_LINE(71)
		::kha::Scheduler_obj::start(null());
		HX_STACK_LINE(93)
		::kha::kore::graphics4::Graphics g4 = ::kha::kore::graphics4::Graphics_obj::__new(null());		HX_STACK_VAR(g4,"g4");
		HX_STACK_LINE(94)
		::kha::Framebuffer tmp8 = ::kha::Framebuffer_obj::__new(null(),null(),g4);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(94)
		::kha::Starter_obj::framebuffer = tmp8;
		HX_STACK_LINE(95)
		::kha::Framebuffer tmp9 = ::kha::Starter_obj::framebuffer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(95)
		::kha::Framebuffer tmp10 = ::kha::Starter_obj::framebuffer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(95)
		::kha::graphics2::Graphics1 tmp11 = ::kha::graphics2::Graphics1_obj::__new(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(95)
		::kha::Framebuffer tmp12 = ::kha::Starter_obj::framebuffer;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(95)
		::kha::kore::graphics4::Graphics2 tmp13 = ::kha::kore::graphics4::Graphics2_obj::__new(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(95)
		::kha::kore::graphics4::Graphics tmp14 = g4;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(95)
		tmp9->init(tmp11,tmp13,tmp14);
		HX_STACK_LINE(98)
		Dynamic tmp15 = hx::SourceInfo(HX_HCSTRING("Starter.hx","\xef","\x98","\x90","\xf2"),98,HX_HCSTRING("kha.Starter","\xe5","\x22","\x2d","\x32"),HX_HCSTRING("loadFinished","\xb8","\x7f","\x77","\x4e"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(98)
		::haxe::Log_obj::trace(HX_HCSTRING("Initializing application.","\x31","\x28","\xec","\xec"),tmp15);
		HX_STACK_LINE(99)
		::kha::Game tmp16 = this->gameToStart;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(99)
		tmp16->loadFinished();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,loadFinished,(void))

::kha::Framebuffer Starter_obj::framebuffer;

::kha::input::Keyboard Starter_obj::keyboard;

::kha::input::Mouse Starter_obj::mouse;

::kha::input::Gamepad Starter_obj::gamepad;

::kha::input::Surface Starter_obj::surface;

cpp::ArrayBase Starter_obj::mouseLockListeners;

Void Starter_obj::lockMouse( ){
{
		HX_STACK_FRAME("kha.Starter","lockMouse",0x3249f371,"kha.Starter.lockMouse","kha/Starter.hx",102,0x3993a83a)
		HX_STACK_LINE(103)
		bool tmp = ::kha::Starter_obj::isMouseLocked();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(103)
		if ((tmp1)){
			HX_STACK_LINE(104)
			Kore::Mouse::the()->lock();;
			HX_STACK_LINE(105)
			{
				HX_STACK_LINE(105)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(105)
				cpp::ArrayBase tmp2 = ::kha::Starter_obj::mouseLockListeners;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(105)
				cpp::ArrayBase _g1 = tmp2;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(105)
				while((true)){
					HX_STACK_LINE(105)
					bool tmp3 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(105)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(105)
					if ((tmp4)){
						HX_STACK_LINE(105)
						break;
					}
					HX_STACK_LINE(105)
					Dynamic tmp5 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(105)
					Dynamic listener = tmp5;		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(105)
					++(_g);
					HX_STACK_LINE(106)
					listener().Cast< Void >();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,lockMouse,(void))

Void Starter_obj::unlockMouse( ){
{
		HX_STACK_FRAME("kha.Starter","unlockMouse",0xd4db75b8,"kha.Starter.unlockMouse","kha/Starter.hx",111,0x3993a83a)
		HX_STACK_LINE(112)
		bool tmp = ::kha::Starter_obj::isMouseLocked();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		if ((tmp)){
			HX_STACK_LINE(113)
			Kore::Mouse::the()->unlock();;
			HX_STACK_LINE(114)
			{
				HX_STACK_LINE(114)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(114)
				cpp::ArrayBase tmp1 = ::kha::Starter_obj::mouseLockListeners;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(114)
				cpp::ArrayBase _g1 = tmp1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(114)
				while((true)){
					HX_STACK_LINE(114)
					bool tmp2 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(114)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(114)
					if ((tmp3)){
						HX_STACK_LINE(114)
						break;
					}
					HX_STACK_LINE(114)
					Dynamic tmp4 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(114)
					Dynamic listener = tmp4;		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(114)
					++(_g);
					HX_STACK_LINE(115)
					listener().Cast< Void >();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,unlockMouse,(void))

bool Starter_obj::canLockMouse( ){
return Kore::Mouse::the()->canLock();
{
		HX_STACK_FRAME("kha.Starter","canLockMouse",0xb2ceff33,"kha.Starter.canLockMouse","kha/Starter.hx",122,0x3993a83a)
		HX_STACK_LINE(122)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,canLockMouse,return )

bool Starter_obj::isMouseLocked( ){
return Kore::Mouse::the()->isLocked();
{
		HX_STACK_FRAME("kha.Starter","isMouseLocked",0xcad30dfc,"kha.Starter.isMouseLocked","kha/Starter.hx",127,0x3993a83a)
		HX_STACK_LINE(127)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,isMouseLocked,return )

Void Starter_obj::notifyOfMouseLockChange( Dynamic func,Dynamic error){
{
		HX_STACK_FRAME("kha.Starter","notifyOfMouseLockChange",0xb059d957,"kha.Starter.notifyOfMouseLockChange","kha/Starter.hx",130,0x3993a83a)
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(error,"error")
		HX_STACK_LINE(131)
		bool tmp = ::kha::Starter_obj::canLockMouse();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		if ((tmp)){
			HX_STACK_LINE(131)
			tmp1 = (func != null());
		}
		else{
			HX_STACK_LINE(131)
			tmp1 = false;
		}
		HX_STACK_LINE(131)
		if ((tmp1)){
			HX_STACK_LINE(132)
			cpp::ArrayBase tmp2 = ::kha::Starter_obj::mouseLockListeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(132)
			Dynamic tmp3 = func;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(132)
			tmp2->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Starter_obj,notifyOfMouseLockChange,(void))

Void Starter_obj::removeFromMouseLockChange( Dynamic func,Dynamic error){
{
		HX_STACK_FRAME("kha.Starter","removeFromMouseLockChange",0x36595949,"kha.Starter.removeFromMouseLockChange","kha/Starter.hx",136,0x3993a83a)
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(error,"error")
		HX_STACK_LINE(137)
		bool tmp = ::kha::Starter_obj::canLockMouse();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		if ((tmp)){
			HX_STACK_LINE(137)
			tmp1 = (func != null());
		}
		else{
			HX_STACK_LINE(137)
			tmp1 = false;
		}
		HX_STACK_LINE(137)
		if ((tmp1)){
			HX_STACK_LINE(138)
			cpp::ArrayBase tmp2 = ::kha::Starter_obj::mouseLockListeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(138)
			Dynamic tmp3 = func;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(138)
			tmp2->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp3);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Starter_obj,removeFromMouseLockChange,(void))

Void Starter_obj::frame( ){
{
		HX_STACK_FRAME("kha.Starter","frame",0x0953ede4,"kha.Starter.frame","kha/Starter.hx",142,0x3993a83a)
		HX_STACK_LINE(158)
		::kha::Scheduler_obj::executeFrame();
		HX_STACK_LINE(159)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		::kha::Framebuffer tmp1 = ::kha::Starter_obj::framebuffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(159)
		tmp->render(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,frame,(void))

Void Starter_obj::pushUp( ){
{
		HX_STACK_FRAME("kha.Starter","pushUp",0xe5c3913e,"kha.Starter.pushUp","kha/Starter.hx",162,0x3993a83a)
		HX_STACK_LINE(163)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		tmp->buttonDown(::kha::Button_obj::UP);
		HX_STACK_LINE(164)
		::kha::Game tmp1 = ::kha::Game_obj::the;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		tmp1->keyDown(::kha::Key_obj::UP,null());
		HX_STACK_LINE(165)
		::kha::input::Keyboard tmp2 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		tmp2->sendDownEvent(::kha::Key_obj::UP,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,pushUp,(void))

Void Starter_obj::pushDown( ){
{
		HX_STACK_FRAME("kha.Starter","pushDown",0x7f7be205,"kha.Starter.pushDown","kha/Starter.hx",168,0x3993a83a)
		HX_STACK_LINE(169)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(169)
		tmp->buttonDown(::kha::Button_obj::DOWN);
		HX_STACK_LINE(170)
		::kha::Game tmp1 = ::kha::Game_obj::the;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(170)
		tmp1->keyDown(::kha::Key_obj::DOWN,null());
		HX_STACK_LINE(171)
		::kha::input::Keyboard tmp2 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(171)
		tmp2->sendDownEvent(::kha::Key_obj::DOWN,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,pushDown,(void))

Void Starter_obj::pushLeft( ){
{
		HX_STACK_FRAME("kha.Starter","pushLeft",0x84bdf1aa,"kha.Starter.pushLeft","kha/Starter.hx",174,0x3993a83a)
		HX_STACK_LINE(175)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(175)
		tmp->buttonDown(::kha::Button_obj::LEFT);
		HX_STACK_LINE(176)
		::kha::Game tmp1 = ::kha::Game_obj::the;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(176)
		tmp1->keyDown(::kha::Key_obj::LEFT,null());
		HX_STACK_LINE(177)
		::kha::input::Keyboard tmp2 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(177)
		tmp2->sendDownEvent(::kha::Key_obj::LEFT,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,pushLeft,(void))

Void Starter_obj::pushRight( ){
{
		HX_STACK_FRAME("kha.Starter","pushRight",0x188290d9,"kha.Starter.pushRight","kha/Starter.hx",180,0x3993a83a)
		HX_STACK_LINE(181)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		tmp->buttonDown(::kha::Button_obj::RIGHT);
		HX_STACK_LINE(182)
		::kha::Game tmp1 = ::kha::Game_obj::the;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(182)
		tmp1->keyDown(::kha::Key_obj::RIGHT,null());
		HX_STACK_LINE(183)
		::kha::input::Keyboard tmp2 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		tmp2->sendDownEvent(::kha::Key_obj::RIGHT,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,pushRight,(void))

Void Starter_obj::pushButton1( ){
{
		HX_STACK_FRAME("kha.Starter","pushButton1",0xe1fcd03c,"kha.Starter.pushButton1","kha/Starter.hx",186,0x3993a83a)
		HX_STACK_LINE(187)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		tmp->buttonDown(::kha::Button_obj::BUTTON_1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,pushButton1,(void))

Void Starter_obj::releaseUp( ){
{
		HX_STACK_FRAME("kha.Starter","releaseUp",0x7eb32d39,"kha.Starter.releaseUp","kha/Starter.hx",190,0x3993a83a)
		HX_STACK_LINE(191)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(191)
		tmp->buttonUp(::kha::Button_obj::UP);
		HX_STACK_LINE(192)
		::kha::Game tmp1 = ::kha::Game_obj::the;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		tmp1->keyUp(::kha::Key_obj::UP,null());
		HX_STACK_LINE(193)
		::kha::input::Keyboard tmp2 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		tmp2->sendUpEvent(::kha::Key_obj::UP,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,releaseUp,(void))

Void Starter_obj::releaseDown( ){
{
		HX_STACK_FRAME("kha.Starter","releaseDown",0xe886b2c0,"kha.Starter.releaseDown","kha/Starter.hx",196,0x3993a83a)
		HX_STACK_LINE(197)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		tmp->buttonUp(::kha::Button_obj::DOWN);
		HX_STACK_LINE(198)
		::kha::Game tmp1 = ::kha::Game_obj::the;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		tmp1->keyUp(::kha::Key_obj::DOWN,null());
		HX_STACK_LINE(199)
		::kha::input::Keyboard tmp2 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(199)
		tmp2->sendUpEvent(::kha::Key_obj::DOWN,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,releaseDown,(void))

Void Starter_obj::releaseLeft( ){
{
		HX_STACK_FRAME("kha.Starter","releaseLeft",0xedc8c265,"kha.Starter.releaseLeft","kha/Starter.hx",202,0x3993a83a)
		HX_STACK_LINE(203)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(203)
		tmp->buttonUp(::kha::Button_obj::LEFT);
		HX_STACK_LINE(204)
		::kha::Game tmp1 = ::kha::Game_obj::the;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		tmp1->keyUp(::kha::Key_obj::LEFT,null());
		HX_STACK_LINE(205)
		::kha::input::Keyboard tmp2 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(205)
		tmp2->sendUpEvent(::kha::Key_obj::LEFT,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,releaseLeft,(void))

Void Starter_obj::releaseRight( ){
{
		HX_STACK_FRAME("kha.Starter","releaseRight",0x98ee63be,"kha.Starter.releaseRight","kha/Starter.hx",208,0x3993a83a)
		HX_STACK_LINE(209)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		tmp->buttonUp(::kha::Button_obj::RIGHT);
		HX_STACK_LINE(210)
		::kha::Game tmp1 = ::kha::Game_obj::the;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(210)
		tmp1->keyUp(::kha::Key_obj::RIGHT,null());
		HX_STACK_LINE(211)
		::kha::input::Keyboard tmp2 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(211)
		tmp2->sendUpEvent(::kha::Key_obj::RIGHT,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,releaseRight,(void))

Void Starter_obj::releaseButton1( ){
{
		HX_STACK_FRAME("kha.Starter","releaseButton1",0x332ee661,"kha.Starter.releaseButton1","kha/Starter.hx",214,0x3993a83a)
		HX_STACK_LINE(215)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(215)
		tmp->buttonUp(::kha::Button_obj::BUTTON_1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,releaseButton1,(void))

Void Starter_obj::pushChar( int charCode){
{
		HX_STACK_FRAME("kha.Starter","pushChar",0x7ecd4879,"kha.Starter.pushChar","kha/Starter.hx",218,0x3993a83a)
		HX_STACK_ARG(charCode,"charCode")
		HX_STACK_LINE(219)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(219)
		int tmp1 = charCode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(219)
		::String tmp2 = ::String::fromCharCode(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(219)
		tmp->keyDown(::kha::Key_obj::CHAR,tmp2);
		HX_STACK_LINE(220)
		::kha::input::Keyboard tmp3 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(220)
		int tmp4 = charCode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(220)
		::String tmp5 = ::String::fromCharCode(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(220)
		tmp3->sendDownEvent(::kha::Key_obj::CHAR,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Starter_obj,pushChar,(void))

Void Starter_obj::releaseChar( int charCode){
{
		HX_STACK_FRAME("kha.Starter","releaseChar",0xe7d81934,"kha.Starter.releaseChar","kha/Starter.hx",223,0x3993a83a)
		HX_STACK_ARG(charCode,"charCode")
		HX_STACK_LINE(224)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(224)
		int tmp1 = charCode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(224)
		::String tmp2 = ::String::fromCharCode(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(224)
		tmp->keyUp(::kha::Key_obj::CHAR,tmp2);
		HX_STACK_LINE(225)
		::kha::input::Keyboard tmp3 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(225)
		int tmp4 = charCode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(225)
		::String tmp5 = ::String::fromCharCode(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(225)
		tmp3->sendUpEvent(::kha::Key_obj::CHAR,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Starter_obj,releaseChar,(void))

Void Starter_obj::pushShift( ){
{
		HX_STACK_FRAME("kha.Starter","pushShift",0xab41717f,"kha.Starter.pushShift","kha/Starter.hx",228,0x3993a83a)
		HX_STACK_LINE(229)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(229)
		tmp->keyDown(::kha::Key_obj::SHIFT,null());
		HX_STACK_LINE(230)
		::kha::input::Keyboard tmp1 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(230)
		tmp1->sendDownEvent(::kha::Key_obj::SHIFT,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,pushShift,(void))

Void Starter_obj::releaseShift( ){
{
		HX_STACK_FRAME("kha.Starter","releaseShift",0x2bad4464,"kha.Starter.releaseShift","kha/Starter.hx",233,0x3993a83a)
		HX_STACK_LINE(234)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(234)
		tmp->keyUp(::kha::Key_obj::SHIFT,null());
		HX_STACK_LINE(235)
		::kha::input::Keyboard tmp1 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(235)
		tmp1->sendUpEvent(::kha::Key_obj::SHIFT,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,releaseShift,(void))

Void Starter_obj::pushBackspace( ){
{
		HX_STACK_FRAME("kha.Starter","pushBackspace",0x71fbccbc,"kha.Starter.pushBackspace","kha/Starter.hx",238,0x3993a83a)
		HX_STACK_LINE(239)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(239)
		tmp->keyDown(::kha::Key_obj::BACKSPACE,null());
		HX_STACK_LINE(240)
		::kha::input::Keyboard tmp1 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(240)
		tmp1->sendDownEvent(::kha::Key_obj::BACKSPACE,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,pushBackspace,(void))

Void Starter_obj::releaseBackspace( ){
{
		HX_STACK_FRAME("kha.Starter","releaseBackspace",0x047b7621,"kha.Starter.releaseBackspace","kha/Starter.hx",243,0x3993a83a)
		HX_STACK_LINE(244)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(244)
		tmp->keyUp(::kha::Key_obj::BACKSPACE,null());
		HX_STACK_LINE(245)
		::kha::input::Keyboard tmp1 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(245)
		tmp1->sendUpEvent(::kha::Key_obj::BACKSPACE,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,releaseBackspace,(void))

Void Starter_obj::pushTab( ){
{
		HX_STACK_FRAME("kha.Starter","pushTab",0x255ab612,"kha.Starter.pushTab","kha/Starter.hx",248,0x3993a83a)
		HX_STACK_LINE(249)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(249)
		tmp->keyDown(::kha::Key_obj::TAB,null());
		HX_STACK_LINE(250)
		::kha::input::Keyboard tmp1 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(250)
		tmp1->sendDownEvent(::kha::Key_obj::TAB,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,pushTab,(void))

Void Starter_obj::releaseTab( ){
{
		HX_STACK_FRAME("kha.Starter","releaseTab",0x5e1395b7,"kha.Starter.releaseTab","kha/Starter.hx",253,0x3993a83a)
		HX_STACK_LINE(254)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(254)
		tmp->keyUp(::kha::Key_obj::TAB,null());
		HX_STACK_LINE(255)
		::kha::input::Keyboard tmp1 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(255)
		tmp1->sendUpEvent(::kha::Key_obj::TAB,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,releaseTab,(void))

Void Starter_obj::pushEnter( ){
{
		HX_STACK_FRAME("kha.Starter","pushEnter",0x9fa4f215,"kha.Starter.pushEnter","kha/Starter.hx",258,0x3993a83a)
		HX_STACK_LINE(259)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(259)
		tmp->keyDown(::kha::Key_obj::ENTER,null());
		HX_STACK_LINE(260)
		::kha::input::Keyboard tmp1 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(260)
		tmp1->sendDownEvent(::kha::Key_obj::ENTER,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,pushEnter,(void))

Void Starter_obj::releaseEnter( ){
{
		HX_STACK_FRAME("kha.Starter","releaseEnter",0x2010c4fa,"kha.Starter.releaseEnter","kha/Starter.hx",263,0x3993a83a)
		HX_STACK_LINE(264)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(264)
		tmp->keyUp(::kha::Key_obj::ENTER,null());
		HX_STACK_LINE(265)
		::kha::input::Keyboard tmp1 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(265)
		tmp1->sendUpEvent(::kha::Key_obj::ENTER,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,releaseEnter,(void))

Void Starter_obj::pushControl( ){
{
		HX_STACK_FRAME("kha.Starter","pushControl",0x3108e99a,"kha.Starter.pushControl","kha/Starter.hx",268,0x3993a83a)
		HX_STACK_LINE(269)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(269)
		tmp->keyDown(::kha::Key_obj::CTRL,null());
		HX_STACK_LINE(270)
		::kha::input::Keyboard tmp1 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(270)
		tmp1->sendDownEvent(::kha::Key_obj::CTRL,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,pushControl,(void))

Void Starter_obj::releaseControl( ){
{
		HX_STACK_FRAME("kha.Starter","releaseControl",0x823affbf,"kha.Starter.releaseControl","kha/Starter.hx",273,0x3993a83a)
		HX_STACK_LINE(274)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(274)
		tmp->keyUp(::kha::Key_obj::CTRL,null());
		HX_STACK_LINE(275)
		::kha::input::Keyboard tmp1 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		tmp1->sendUpEvent(::kha::Key_obj::CTRL,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,releaseControl,(void))

Void Starter_obj::pushAlt( ){
{
		HX_STACK_FRAME("kha.Starter","pushAlt",0x254c54e6,"kha.Starter.pushAlt","kha/Starter.hx",278,0x3993a83a)
		HX_STACK_LINE(279)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(279)
		tmp->keyDown(::kha::Key_obj::ALT,null());
		HX_STACK_LINE(280)
		::kha::input::Keyboard tmp1 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(280)
		tmp1->sendDownEvent(::kha::Key_obj::ALT,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,pushAlt,(void))

Void Starter_obj::releaseAlt( ){
{
		HX_STACK_FRAME("kha.Starter","releaseAlt",0x5e05348b,"kha.Starter.releaseAlt","kha/Starter.hx",283,0x3993a83a)
		HX_STACK_LINE(284)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(284)
		tmp->keyUp(::kha::Key_obj::ALT,null());
		HX_STACK_LINE(285)
		::kha::input::Keyboard tmp1 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(285)
		tmp1->sendUpEvent(::kha::Key_obj::ALT,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,releaseAlt,(void))

Void Starter_obj::pushEscape( ){
{
		HX_STACK_FRAME("kha.Starter","pushEscape",0xe6701be4,"kha.Starter.pushEscape","kha/Starter.hx",288,0x3993a83a)
		HX_STACK_LINE(289)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(289)
		tmp->keyDown(::kha::Key_obj::ESC,null());
		HX_STACK_LINE(290)
		::kha::input::Keyboard tmp1 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(290)
		tmp1->sendDownEvent(::kha::Key_obj::ESC,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,pushEscape,(void))

Void Starter_obj::releaseEscape( ){
{
		HX_STACK_FRAME("kha.Starter","releaseEscape",0xc45cd15f,"kha.Starter.releaseEscape","kha/Starter.hx",293,0x3993a83a)
		HX_STACK_LINE(294)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		tmp->keyUp(::kha::Key_obj::ESC,null());
		HX_STACK_LINE(295)
		::kha::input::Keyboard tmp1 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(295)
		tmp1->sendUpEvent(::kha::Key_obj::ESC,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,releaseEscape,(void))

Void Starter_obj::pushDelete( ){
{
		HX_STACK_FRAME("kha.Starter","pushDelete",0x766e988e,"kha.Starter.pushDelete","kha/Starter.hx",298,0x3993a83a)
		HX_STACK_LINE(299)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(299)
		tmp->keyDown(::kha::Key_obj::DEL,null());
		HX_STACK_LINE(300)
		::kha::input::Keyboard tmp1 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(300)
		tmp1->sendDownEvent(::kha::Key_obj::DEL,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,pushDelete,(void))

Void Starter_obj::releaseDelete( ){
{
		HX_STACK_FRAME("kha.Starter","releaseDelete",0x545b4e09,"kha.Starter.releaseDelete","kha/Starter.hx",303,0x3993a83a)
		HX_STACK_LINE(304)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		tmp->keyUp(::kha::Key_obj::DEL,null());
		HX_STACK_LINE(305)
		::kha::input::Keyboard tmp1 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(305)
		tmp1->sendUpEvent(::kha::Key_obj::DEL,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,releaseDelete,(void))

Void Starter_obj::pushBack( ){
{
		HX_STACK_FRAME("kha.Starter","pushBack",0x7e1ec3ca,"kha.Starter.pushBack","kha/Starter.hx",308,0x3993a83a)
		HX_STACK_LINE(309)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(309)
		tmp->keyDown(::kha::Key_obj::BACK,null());
		HX_STACK_LINE(310)
		::kha::input::Keyboard tmp1 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(310)
		tmp1->sendDownEvent(::kha::Key_obj::BACK,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,pushBack,(void))

Void Starter_obj::releaseBack( ){
{
		HX_STACK_FRAME("kha.Starter","releaseBack",0xe7299485,"kha.Starter.releaseBack","kha/Starter.hx",313,0x3993a83a)
		HX_STACK_LINE(314)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(314)
		tmp->keyUp(::kha::Key_obj::BACK,null());
		HX_STACK_LINE(315)
		::kha::input::Keyboard tmp1 = ::kha::Starter_obj::keyboard;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(315)
		tmp1->sendUpEvent(::kha::Key_obj::BACK,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,releaseBack,(void))

int Starter_obj::mouseX;

int Starter_obj::mouseY;

Void Starter_obj::mouseDown( int button,int x,int y){
{
		HX_STACK_FRAME("kha.Starter","mouseDown",0xd9c5ce5e,"kha.Starter.mouseDown","kha/Starter.hx",321,0x3993a83a)
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(322)
		::kha::Starter_obj::mouseX = x;
		HX_STACK_LINE(323)
		::kha::Starter_obj::mouseY = y;
		HX_STACK_LINE(324)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(324)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(324)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(324)
		tmp->mouseDown(tmp1,tmp2);
		HX_STACK_LINE(325)
		::kha::input::Mouse tmp3 = ::kha::Starter_obj::mouse;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(325)
		int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(325)
		int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(325)
		int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(325)
		tmp3->sendDownEvent(tmp4,tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Starter_obj,mouseDown,(void))

Void Starter_obj::mouseUp( int button,int x,int y){
{
		HX_STACK_FRAME("kha.Starter","mouseUp",0x70958557,"kha.Starter.mouseUp","kha/Starter.hx",328,0x3993a83a)
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(329)
		::kha::Starter_obj::mouseX = x;
		HX_STACK_LINE(330)
		::kha::Starter_obj::mouseY = y;
		HX_STACK_LINE(331)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(331)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(331)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(331)
		tmp->mouseUp(tmp1,tmp2);
		HX_STACK_LINE(332)
		::kha::input::Mouse tmp3 = ::kha::Starter_obj::mouse;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(332)
		int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(332)
		int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(332)
		int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(332)
		tmp3->sendUpEvent(tmp4,tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Starter_obj,mouseUp,(void))

Void Starter_obj::mouseMove( int x,int y,int movementX,int movementY){
{
		HX_STACK_FRAME("kha.Starter","mouseMove",0xdfb8b90d,"kha.Starter.mouseMove","kha/Starter.hx",335,0x3993a83a)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(movementX,"movementX")
		HX_STACK_ARG(movementY,"movementY")
		HX_STACK_LINE(338)
		::kha::Starter_obj::mouseX = x;
		HX_STACK_LINE(339)
		::kha::Starter_obj::mouseY = y;
		HX_STACK_LINE(340)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(340)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(340)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(340)
		tmp->mouseMove(tmp1,tmp2);
		HX_STACK_LINE(341)
		::kha::input::Mouse tmp3 = ::kha::Starter_obj::mouse;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(341)
		int tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(341)
		int tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(341)
		int tmp6 = movementX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(341)
		int tmp7 = movementY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(341)
		tmp3->sendMoveEvent(tmp4,tmp5,tmp6,tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Starter_obj,mouseMove,(void))

Void Starter_obj::mouseWheel( int delta){
{
		HX_STACK_FRAME("kha.Starter","mouseWheel",0x9f3d9b1f,"kha.Starter.mouseWheel","kha/Starter.hx",344,0x3993a83a)
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(345)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(345)
		int tmp1 = delta;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(345)
		tmp->mouseWheel(tmp1);
		HX_STACK_LINE(346)
		::kha::input::Mouse tmp2 = ::kha::Starter_obj::mouse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(346)
		int tmp3 = delta;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(346)
		tmp2->sendWheelEvent(tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Starter_obj,mouseWheel,(void))

Void Starter_obj::gamepadAxis( int axis,Float value){
{
		HX_STACK_FRAME("kha.Starter","gamepadAxis",0xd8b9a6d9,"kha.Starter.gamepadAxis","kha/Starter.hx",349,0x3993a83a)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(350)
		::kha::input::Gamepad tmp = ::kha::Starter_obj::gamepad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(350)
		int tmp1 = axis;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(350)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(350)
		tmp->sendAxisEvent(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Starter_obj,gamepadAxis,(void))

Void Starter_obj::gamepadButton( int button,Float value){
{
		HX_STACK_FRAME("kha.Starter","gamepadButton",0x6b01ea2a,"kha.Starter.gamepadButton","kha/Starter.hx",353,0x3993a83a)
		HX_STACK_ARG(button,"button")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(354)
		::kha::input::Gamepad tmp = ::kha::Starter_obj::gamepad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(354)
		int tmp1 = button;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(354)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(354)
		tmp->sendButtonEvent(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Starter_obj,gamepadButton,(void))

Void Starter_obj::touchStart( int index,int x,int y){
{
		HX_STACK_FRAME("kha.Starter","touchStart",0x3552cb0c,"kha.Starter.touchStart","kha/Starter.hx",357,0x3993a83a)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(358)
		::kha::input::Surface tmp = ::kha::Starter_obj::surface;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(358)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(358)
		int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(358)
		int tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(358)
		tmp->sendTouchStartEvent(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Starter_obj,touchStart,(void))

Void Starter_obj::touchEnd( int index,int x,int y){
{
		HX_STACK_FRAME("kha.Starter","touchEnd",0x6e267c05,"kha.Starter.touchEnd","kha/Starter.hx",361,0x3993a83a)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(362)
		::kha::input::Surface tmp = ::kha::Starter_obj::surface;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(362)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(362)
		int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(362)
		int tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(362)
		tmp->sendTouchEndEvent(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Starter_obj,touchEnd,(void))

Void Starter_obj::touchMove( int index,int x,int y){
{
		HX_STACK_FRAME("kha.Starter","touchMove",0xf8d08fa7,"kha.Starter.touchMove","kha/Starter.hx",365,0x3993a83a)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(366)
		::kha::input::Surface tmp = ::kha::Starter_obj::surface;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(366)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(366)
		int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(366)
		int tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(366)
		tmp->sendMoveEvent(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Starter_obj,touchMove,(void))

Void Starter_obj::foreground( ){
{
		HX_STACK_FRAME("kha.Starter","foreground",0xc8a58bac,"kha.Starter.foreground","kha/Starter.hx",369,0x3993a83a)
		HX_STACK_LINE(370)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(370)
		tmp->onForeground();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,foreground,(void))

Void Starter_obj::resume( ){
{
		HX_STACK_FRAME("kha.Starter","resume",0x7c1af416,"kha.Starter.resume","kha/Starter.hx",373,0x3993a83a)
		HX_STACK_LINE(374)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(374)
		tmp->onResume();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,resume,(void))

Void Starter_obj::pause( ){
{
		HX_STACK_FRAME("kha.Starter","pause",0xc0284cad,"kha.Starter.pause","kha/Starter.hx",377,0x3993a83a)
		HX_STACK_LINE(378)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(378)
		tmp->onPause();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,pause,(void))

Void Starter_obj::background( ){
{
		HX_STACK_FRAME("kha.Starter","background",0xddd406d7,"kha.Starter.background","kha/Starter.hx",381,0x3993a83a)
		HX_STACK_LINE(382)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(382)
		tmp->onBackground();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,background,(void))

Void Starter_obj::shutdown( ){
{
		HX_STACK_FRAME("kha.Starter","shutdown",0xd928b33f,"kha.Starter.shutdown","kha/Starter.hx",385,0x3993a83a)
		HX_STACK_LINE(386)
		::kha::Game tmp = ::kha::Game_obj::the;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(386)
		tmp->onShutdown();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Starter_obj,shutdown,(void))


Starter_obj::Starter_obj()
{
}

void Starter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Starter);
	HX_MARK_MEMBER_NAME(gameToStart,"gameToStart");
	HX_MARK_END_CLASS();
}

void Starter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gameToStart,"gameToStart");
}

Dynamic Starter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gameToStart") ) { return gameToStart; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFinished") ) { return loadFinished_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Starter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mouse") ) { outValue = mouse; return true;  }
		if (HX_FIELD_EQ(inName,"frame") ) { outValue = frame_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pause") ) { outValue = pause_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pushUp") ) { outValue = pushUp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mouseX") ) { outValue = mouseX; return true;  }
		if (HX_FIELD_EQ(inName,"mouseY") ) { outValue = mouseY; return true;  }
		if (HX_FIELD_EQ(inName,"resume") ) { outValue = resume_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { outValue = gamepad; return true;  }
		if (HX_FIELD_EQ(inName,"surface") ) { outValue = surface; return true;  }
		if (HX_FIELD_EQ(inName,"pushTab") ) { outValue = pushTab_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushAlt") ) { outValue = pushAlt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { outValue = mouseUp_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keyboard") ) { outValue = keyboard; return true;  }
		if (HX_FIELD_EQ(inName,"pushDown") ) { outValue = pushDown_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushLeft") ) { outValue = pushLeft_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushChar") ) { outValue = pushChar_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushBack") ) { outValue = pushBack_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"touchEnd") ) { outValue = touchEnd_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"shutdown") ) { outValue = shutdown_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lockMouse") ) { outValue = lockMouse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushRight") ) { outValue = pushRight_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseUp") ) { outValue = releaseUp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushShift") ) { outValue = pushShift_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushEnter") ) { outValue = pushEnter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { outValue = mouseDown_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mouseMove") ) { outValue = mouseMove_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"touchMove") ) { outValue = touchMove_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"releaseTab") ) { outValue = releaseTab_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseAlt") ) { outValue = releaseAlt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushEscape") ) { outValue = pushEscape_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushDelete") ) { outValue = pushDelete_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mouseWheel") ) { outValue = mouseWheel_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"touchStart") ) { outValue = touchStart_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"foreground") ) { outValue = foreground_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"background") ) { outValue = background_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { outValue = framebuffer; return true;  }
		if (HX_FIELD_EQ(inName,"unlockMouse") ) { outValue = unlockMouse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushButton1") ) { outValue = pushButton1_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseDown") ) { outValue = releaseDown_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseLeft") ) { outValue = releaseLeft_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseChar") ) { outValue = releaseChar_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushControl") ) { outValue = pushControl_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseBack") ) { outValue = releaseBack_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"gamepadAxis") ) { outValue = gamepadAxis_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"canLockMouse") ) { outValue = canLockMouse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseRight") ) { outValue = releaseRight_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseShift") ) { outValue = releaseShift_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseEnter") ) { outValue = releaseEnter_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isMouseLocked") ) { outValue = isMouseLocked_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pushBackspace") ) { outValue = pushBackspace_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseEscape") ) { outValue = releaseEscape_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseDelete") ) { outValue = releaseDelete_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"gamepadButton") ) { outValue = gamepadButton_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"releaseButton1") ) { outValue = releaseButton1_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"releaseControl") ) { outValue = releaseControl_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"releaseBackspace") ) { outValue = releaseBackspace_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"mouseLockListeners") ) { outValue = mouseLockListeners; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"notifyOfMouseLockChange") ) { outValue = notifyOfMouseLockChange_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"removeFromMouseLockChange") ) { outValue = removeFromMouseLockChange_dyn(); return true;  }
	}
	return false;
}

Dynamic Starter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"gameToStart") ) { gameToStart=inValue.Cast< ::kha::Game >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Starter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mouse") ) { mouse=ioValue.Cast< ::kha::input::Mouse >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=ioValue.Cast< ::kha::input::Gamepad >(); return true; }
		if (HX_FIELD_EQ(inName,"surface") ) { surface=ioValue.Cast< ::kha::input::Surface >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keyboard") ) { keyboard=ioValue.Cast< ::kha::input::Keyboard >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { framebuffer=ioValue.Cast< ::kha::Framebuffer >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"mouseLockListeners") ) { mouseLockListeners=ioValue.Cast< cpp::ArrayBase >(); return true; }
	}
	return false;
}

void Starter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gameToStart","\x15","\x37","\x46","\x35"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::Game*/ ,(int)offsetof(Starter_obj,gameToStart),HX_HCSTRING("gameToStart","\x15","\x37","\x46","\x35")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::kha::Framebuffer*/ ,(void *) &Starter_obj::framebuffer,HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a")},
	{hx::fsObject /*::kha::input::Keyboard*/ ,(void *) &Starter_obj::keyboard,HX_HCSTRING("keyboard","\xa7","\xbc","\x29","\x68")},
	{hx::fsObject /*::kha::input::Mouse*/ ,(void *) &Starter_obj::mouse,HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c")},
	{hx::fsObject /*::kha::input::Gamepad*/ ,(void *) &Starter_obj::gamepad,HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")},
	{hx::fsObject /*::kha::input::Surface*/ ,(void *) &Starter_obj::surface,HX_HCSTRING("surface","\x2d","\x66","\x49","\x5d")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &Starter_obj::mouseLockListeners,HX_HCSTRING("mouseLockListeners","\xaf","\xda","\x5c","\x62")},
	{hx::fsInt,(void *) &Starter_obj::mouseX,HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc")},
	{hx::fsInt,(void *) &Starter_obj::mouseY,HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gameToStart","\x15","\x37","\x46","\x35"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("loadFinished","\xb8","\x7f","\x77","\x4e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Starter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Starter_obj::framebuffer,"framebuffer");
	HX_MARK_MEMBER_NAME(Starter_obj::keyboard,"keyboard");
	HX_MARK_MEMBER_NAME(Starter_obj::mouse,"mouse");
	HX_MARK_MEMBER_NAME(Starter_obj::gamepad,"gamepad");
	HX_MARK_MEMBER_NAME(Starter_obj::surface,"surface");
	HX_MARK_MEMBER_NAME(Starter_obj::mouseLockListeners,"mouseLockListeners");
	HX_MARK_MEMBER_NAME(Starter_obj::mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(Starter_obj::mouseY,"mouseY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Starter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Starter_obj::framebuffer,"framebuffer");
	HX_VISIT_MEMBER_NAME(Starter_obj::keyboard,"keyboard");
	HX_VISIT_MEMBER_NAME(Starter_obj::mouse,"mouse");
	HX_VISIT_MEMBER_NAME(Starter_obj::gamepad,"gamepad");
	HX_VISIT_MEMBER_NAME(Starter_obj::surface,"surface");
	HX_VISIT_MEMBER_NAME(Starter_obj::mouseLockListeners,"mouseLockListeners");
	HX_VISIT_MEMBER_NAME(Starter_obj::mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(Starter_obj::mouseY,"mouseY");
};

#endif

hx::Class Starter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"),
	HX_HCSTRING("keyboard","\xa7","\xbc","\x29","\x68"),
	HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"),
	HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"),
	HX_HCSTRING("surface","\x2d","\x66","\x49","\x5d"),
	HX_HCSTRING("mouseLockListeners","\xaf","\xda","\x5c","\x62"),
	HX_HCSTRING("lockMouse","\x3a","\xd6","\x46","\x47"),
	HX_HCSTRING("unlockMouse","\xc1","\x5c","\xed","\xcc"),
	HX_HCSTRING("canLockMouse","\x0a","\x40","\x67","\xca"),
	HX_HCSTRING("isMouseLocked","\x45","\x89","\x73","\x58"),
	HX_HCSTRING("notifyOfMouseLockChange","\xe0","\xa9","\xee","\x22"),
	HX_HCSTRING("removeFromMouseLockChange","\x12","\x1e","\x2a","\x14"),
	HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"),
	HX_HCSTRING("pushUp","\xd5","\x06","\x2d","\x72"),
	HX_HCSTRING("pushDown","\x5c","\x2b","\x5f","\x11"),
	HX_HCSTRING("pushLeft","\x01","\x3b","\xa1","\x16"),
	HX_HCSTRING("pushRight","\xa2","\x73","\x7f","\x2d"),
	HX_HCSTRING("pushButton1","\x45","\xb7","\x0e","\xda"),
	HX_HCSTRING("releaseUp","\x02","\x10","\xb0","\x93"),
	HX_HCSTRING("releaseDown","\xc9","\x99","\x98","\xe0"),
	HX_HCSTRING("releaseLeft","\x6e","\xa9","\xda","\xe5"),
	HX_HCSTRING("releaseRight","\x95","\xa4","\x86","\xb0"),
	HX_HCSTRING("releaseButton1","\xf8","\x4a","\xfa","\x91"),
	HX_HCSTRING("pushChar","\xd0","\x91","\xb0","\x10"),
	HX_HCSTRING("releaseChar","\x3d","\x00","\xea","\xdf"),
	HX_HCSTRING("pushShift","\x48","\x54","\x3e","\xc0"),
	HX_HCSTRING("releaseShift","\x3b","\x85","\x45","\x43"),
	HX_HCSTRING("pushBackspace","\x05","\x48","\x9c","\xff"),
	HX_HCSTRING("releaseBackspace","\x78","\x6e","\x5a","\x38"),
	HX_HCSTRING("pushTab","\x9b","\x24","\x38","\x75"),
	HX_HCSTRING("releaseTab","\xce","\x22","\x5d","\xa6"),
	HX_HCSTRING("pushEnter","\xde","\xd4","\xa1","\xb4"),
	HX_HCSTRING("releaseEnter","\xd1","\x05","\xa9","\x37"),
	HX_HCSTRING("pushControl","\xa3","\xd0","\x1a","\x29"),
	HX_HCSTRING("releaseControl","\x56","\x64","\x06","\xe1"),
	HX_HCSTRING("pushAlt","\x6f","\xc3","\x29","\x75"),
	HX_HCSTRING("releaseAlt","\xa2","\xc1","\x4e","\xa6"),
	HX_HCSTRING("pushEscape","\xfb","\xa8","\xb9","\x2e"),
	HX_HCSTRING("releaseEscape","\xa8","\x4c","\xfd","\x51"),
	HX_HCSTRING("pushDelete","\xa5","\x25","\xb8","\xbe"),
	HX_HCSTRING("releaseDelete","\x52","\xc9","\xfb","\xe1"),
	HX_HCSTRING("pushBack","\x21","\x0d","\x02","\x10"),
	HX_HCSTRING("releaseBack","\x8e","\x7b","\x3b","\xdf"),
	HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"),
	HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"),
	HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee"),
	HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"),
	HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4"),
	HX_HCSTRING("mouseWheel","\x36","\x28","\x87","\xe7"),
	HX_HCSTRING("gamepadAxis","\xe2","\x8d","\xcb","\xd0"),
	HX_HCSTRING("gamepadButton","\x73","\x65","\xa2","\xf8"),
	HX_HCSTRING("touchStart","\x23","\x58","\x9c","\x7d"),
	HX_HCSTRING("touchEnd","\x5c","\xc5","\x09","\x00"),
	HX_HCSTRING("touchMove","\x70","\x72","\xcd","\x0d"),
	HX_HCSTRING("foreground","\xc3","\x18","\xef","\x10"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	::String(null()) };

void Starter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Starter","\xe5","\x22","\x2d","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Starter_obj::__GetStatic;
	__mClass->mSetStaticField = &Starter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Starter_obj >;
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

} // end namespace kha
