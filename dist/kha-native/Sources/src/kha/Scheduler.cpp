#include <hxcpp.h>

#ifndef INCLUDED_kha_Configuration
#include <kha/Configuration.h>
#endif
#ifndef INCLUDED_kha_FrameTask
#include <kha/FrameTask.h>
#endif
#ifndef INCLUDED_kha_Mouse
#include <kha/Mouse.h>
#endif
#ifndef INCLUDED_kha_Scheduler
#include <kha/Scheduler.h>
#endif
#ifndef INCLUDED_kha_Sys
#include <kha/Sys.h>
#endif
#ifndef INCLUDED_kha_TimeTask
#include <kha/TimeTask.h>
#endif
namespace kha{

Void Scheduler_obj::__construct()
{
	return null();
}

//Scheduler_obj::~Scheduler_obj() { }

Dynamic Scheduler_obj::__CreateEmpty() { return  new Scheduler_obj; }
hx::ObjectPtr< Scheduler_obj > Scheduler_obj::__new()
{  hx::ObjectPtr< Scheduler_obj > _result_ = new Scheduler_obj();
	_result_->__construct();
	return _result_;}

Dynamic Scheduler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scheduler_obj > _result_ = new Scheduler_obj();
	_result_->__construct();
	return _result_;}

Array< ::Dynamic > Scheduler_obj::timeTasks;

Array< ::Dynamic > Scheduler_obj::frameTasks;

Array< ::Dynamic > Scheduler_obj::toDeleteTime;

Array< ::Dynamic > Scheduler_obj::toDeleteFrame;

Float Scheduler_obj::current;

Float Scheduler_obj::lastTime;

bool Scheduler_obj::frame_tasks_sorted;

bool Scheduler_obj::stopped;

bool Scheduler_obj::vsync;

Float Scheduler_obj::onedifhz;

int Scheduler_obj::currentFrameTaskId;

int Scheduler_obj::currentTimeTaskId;

int Scheduler_obj::currentGroupId;

int Scheduler_obj::DIF_COUNT;

Float Scheduler_obj::maxframetime;

Array< Float > Scheduler_obj::deltas;

Float Scheduler_obj::startTime;

Float Scheduler_obj::lastNow;

Void Scheduler_obj::init( ){
{
		HX_STACK_FRAME("kha.Scheduler","init",0x2bf4b74d,"kha.Scheduler.init","kha/Scheduler.hx",66,0xd275db8e)
		HX_STACK_LINE(67)
		Array< Float > tmp = Array_obj< Float >::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		::kha::Scheduler_obj::deltas = tmp;
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(68)
			int tmp1 = ::kha::Scheduler_obj::DIF_COUNT;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(68)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(68)
			while((true)){
				HX_STACK_LINE(68)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(68)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(68)
				if ((tmp3)){
					HX_STACK_LINE(68)
					break;
				}
				HX_STACK_LINE(68)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(68)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(68)
				Array< Float > tmp5 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(68)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(68)
				tmp5[tmp6] = (int)0;
			}
		}
		HX_STACK_LINE(70)
		::kha::Scheduler_obj::stopped = true;
		HX_STACK_LINE(71)
		::kha::Scheduler_obj::frame_tasks_sorted = true;
		HX_STACK_LINE(72)
		Float tmp1 = ::kha::Scheduler_obj::realTime();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		::kha::Scheduler_obj::current = tmp1;
		HX_STACK_LINE(73)
		Float tmp2 = ::kha::Scheduler_obj::realTime();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		::kha::Scheduler_obj::lastTime = tmp2;
		HX_STACK_LINE(75)
		::kha::Scheduler_obj::currentFrameTaskId = (int)0;
		HX_STACK_LINE(76)
		::kha::Scheduler_obj::currentTimeTaskId = (int)0;
		HX_STACK_LINE(77)
		::kha::Scheduler_obj::currentGroupId = (int)0;
		HX_STACK_LINE(79)
		Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		::kha::Scheduler_obj::timeTasks = tmp3;
		HX_STACK_LINE(80)
		Array< ::Dynamic > tmp4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		::kha::Scheduler_obj::frameTasks = tmp4;
		HX_STACK_LINE(81)
		Array< ::Dynamic > tmp5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(81)
		::kha::Scheduler_obj::toDeleteTime = tmp5;
		HX_STACK_LINE(82)
		Array< ::Dynamic > tmp6 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		::kha::Scheduler_obj::toDeleteFrame = tmp6;
		HX_STACK_LINE(83)
		::kha::Configuration_obj::schedulerInitialized();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scheduler_obj,init,(void))

Void Scheduler_obj::start( hx::Null< bool >  __o_restartTimers){
bool restartTimers = __o_restartTimers.Default(false);
	HX_STACK_FRAME("kha.Scheduler","start",0x101ead85,"kha.Scheduler.start","kha/Scheduler.hx",86,0xd275db8e)
	HX_STACK_ARG(restartTimers,"restartTimers")
{
		HX_STACK_LINE(87)
		bool tmp = ::kha::Sys_obj::vsynced();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		::kha::Scheduler_obj::vsync = tmp;
		HX_STACK_LINE(88)
		int tmp1 = ::kha::Sys_obj::refreshRate();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		int hz = tmp1;		HX_STACK_VAR(hz,"hz");
		HX_STACK_LINE(89)
		bool tmp2 = (hz >= (int)57);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		if ((tmp2)){
			HX_STACK_LINE(89)
			tmp3 = (hz <= (int)63);
		}
		else{
			HX_STACK_LINE(89)
			tmp3 = false;
		}
		HX_STACK_LINE(89)
		if ((tmp3)){
			HX_STACK_LINE(89)
			hz = (int)60;
		}
		HX_STACK_LINE(90)
		Float tmp4 = (Float(((Float)1.0)) / Float(hz));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(90)
		::kha::Scheduler_obj::onedifhz = tmp4;
		HX_STACK_LINE(92)
		::kha::Scheduler_obj::stopped = false;
		HX_STACK_LINE(93)
		::kha::Scheduler_obj::resetTime();
		HX_STACK_LINE(94)
		Float tmp5 = ::kha::Scheduler_obj::realTime();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(94)
		::kha::Scheduler_obj::lastTime = tmp5;
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(95)
			int tmp6 = ::kha::Scheduler_obj::DIF_COUNT;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(95)
			int _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(95)
			while((true)){
				HX_STACK_LINE(95)
				bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(95)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(95)
				if ((tmp8)){
					HX_STACK_LINE(95)
					break;
				}
				HX_STACK_LINE(95)
				int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(95)
				int i = tmp9;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(95)
				Array< Float > tmp10 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(95)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(95)
				tmp10[tmp11] = (int)0;
			}
		}
		HX_STACK_LINE(97)
		bool tmp6 = restartTimers;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(97)
		if ((tmp6)){
			HX_STACK_LINE(98)
			{
				HX_STACK_LINE(98)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(98)
				Array< ::Dynamic > tmp7 = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(98)
				Array< ::Dynamic > _g1 = tmp7;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(98)
				while((true)){
					HX_STACK_LINE(98)
					bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(98)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(98)
					if ((tmp9)){
						HX_STACK_LINE(98)
						break;
					}
					HX_STACK_LINE(98)
					::kha::TimeTask tmp10 = _g1->__get(_g).StaticCast< ::kha::TimeTask >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(98)
					::kha::TimeTask timeTask = tmp10;		HX_STACK_VAR(timeTask,"timeTask");
					HX_STACK_LINE(98)
					++(_g);
					HX_STACK_LINE(99)
					timeTask->paused = false;
				}
			}
			HX_STACK_LINE(102)
			{
				HX_STACK_LINE(102)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(102)
				Array< ::Dynamic > tmp7 = ::kha::Scheduler_obj::frameTasks;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(102)
				Array< ::Dynamic > _g1 = tmp7;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(102)
				while((true)){
					HX_STACK_LINE(102)
					bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(102)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(102)
					if ((tmp9)){
						HX_STACK_LINE(102)
						break;
					}
					HX_STACK_LINE(102)
					::kha::FrameTask tmp10 = _g1->__get(_g).StaticCast< ::kha::FrameTask >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(102)
					::kha::FrameTask frameTask = tmp10;		HX_STACK_VAR(frameTask,"frameTask");
					HX_STACK_LINE(102)
					++(_g);
					HX_STACK_LINE(103)
					frameTask->paused = false;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Scheduler_obj,start,(void))

Void Scheduler_obj::stop( ){
{
		HX_STACK_FRAME("kha.Scheduler","stop",0x32956c3f,"kha.Scheduler.stop","kha/Scheduler.hx",109,0xd275db8e)
		HX_STACK_LINE(109)
		::kha::Scheduler_obj::stopped = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scheduler_obj,stop,(void))

bool Scheduler_obj::isStopped( ){
	HX_STACK_FRAME("kha.Scheduler","isStopped",0xd70a55e6,"kha.Scheduler.isStopped","kha/Scheduler.hx",112,0xd275db8e)
	HX_STACK_LINE(113)
	bool tmp = ::kha::Scheduler_obj::stopped;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scheduler_obj,isStopped,return )

Void Scheduler_obj::back( Float time){
{
		HX_STACK_FRAME("kha.Scheduler","back",0x274a5664,"kha.Scheduler.back","kha/Scheduler.hx",116,0xd275db8e)
		HX_STACK_ARG(time,"time")
		HX_STACK_LINE(117)
		::kha::Scheduler_obj::lastTime = time;
		HX_STACK_LINE(118)
		{
			HX_STACK_LINE(118)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(118)
			Array< ::Dynamic > tmp = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(118)
			Array< ::Dynamic > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(118)
			while((true)){
				HX_STACK_LINE(118)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(118)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(118)
				if ((tmp2)){
					HX_STACK_LINE(118)
					break;
				}
				HX_STACK_LINE(118)
				::kha::TimeTask tmp3 = _g1->__get(_g).StaticCast< ::kha::TimeTask >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(118)
				::kha::TimeTask timeTask = tmp3;		HX_STACK_VAR(timeTask,"timeTask");
				HX_STACK_LINE(118)
				++(_g);
				HX_STACK_LINE(119)
				bool tmp4 = (timeTask->start >= time);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(119)
				if ((tmp4)){
					HX_STACK_LINE(120)
					timeTask->next = timeTask->start;
				}
				else{
					HX_STACK_LINE(123)
					timeTask->next = timeTask->start;
					HX_STACK_LINE(124)
					while((true)){
						HX_STACK_LINE(124)
						bool tmp5 = (timeTask->next < time);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(124)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(124)
						if ((tmp6)){
							HX_STACK_LINE(124)
							break;
						}
						HX_STACK_LINE(125)
						hx::AddEq(timeTask->next,timeTask->period);
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Scheduler_obj,back,(void))

Void Scheduler_obj::executeFrame( ){
{
		HX_STACK_FRAME("kha.Scheduler","executeFrame",0x3aa53ef5,"kha.Scheduler.executeFrame","kha/Scheduler.hx",131,0xd275db8e)
		HX_STACK_LINE(132)
		::kha::Mouse tmp = ::kha::Sys_obj::mouse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		tmp->update();
		HX_STACK_LINE(134)
		Float tmp1 = ::kha::Scheduler_obj::realTime();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		Float now = tmp1;		HX_STACK_VAR(now,"now");
		HX_STACK_LINE(135)
		Float tmp2 = now;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(135)
		Float tmp3 = ::kha::Scheduler_obj::lastNow;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(135)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(135)
		Float delta = tmp4;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(136)
		::kha::Scheduler_obj::lastNow = now;
		HX_STACK_LINE(138)
		Float tmp5 = ::kha::Scheduler_obj::current;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(138)
		Float frameEnd = tmp5;		HX_STACK_VAR(frameEnd,"frameEnd");
		HX_STACK_LINE(140)
		bool tmp6 = (delta < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(140)
		if ((tmp6)){
			HX_STACK_LINE(141)
			return null();
		}
		HX_STACK_LINE(146)
		Float tmp7 = delta;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(146)
		Float tmp8 = ::kha::Scheduler_obj::maxframetime;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(146)
		bool tmp9 = (tmp7 > tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(146)
		if ((tmp9)){
			HX_STACK_LINE(147)
			Float tmp10 = ::kha::Scheduler_obj::maxframetime;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(147)
			delta = tmp10;
			HX_STACK_LINE(148)
			hx::AddEq(frameEnd,delta);
		}
		else{
			HX_STACK_LINE(151)
			bool tmp10 = ::kha::Scheduler_obj::vsync;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(151)
			if ((tmp10)){
				HX_STACK_LINE(154)
				Float tmp11 = ::kha::Scheduler_obj::onedifhz;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(154)
				Float realdif = tmp11;		HX_STACK_VAR(realdif,"realdif");
				HX_STACK_LINE(155)
				while((true)){
					HX_STACK_LINE(155)
					Float tmp12 = realdif;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(155)
					Float tmp13 = delta;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(155)
					Float tmp14 = ::kha::Scheduler_obj::onedifhz;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(155)
					Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(155)
					bool tmp16 = (tmp12 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(155)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(155)
					if ((tmp17)){
						HX_STACK_LINE(155)
						break;
					}
					HX_STACK_LINE(156)
					Float tmp18 = ::kha::Scheduler_obj::onedifhz;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(156)
					hx::AddEq(realdif,tmp18);
				}
				HX_STACK_LINE(159)
				delta = realdif;
				HX_STACK_LINE(160)
				{
					HX_STACK_LINE(160)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(160)
					int tmp12 = ::kha::Scheduler_obj::DIF_COUNT;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(160)
					int tmp13 = (tmp12 - (int)2);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(160)
					int _g = tmp13;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(160)
					while((true)){
						HX_STACK_LINE(160)
						bool tmp14 = (_g1 < _g);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(160)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(160)
						if ((tmp15)){
							HX_STACK_LINE(160)
							break;
						}
						HX_STACK_LINE(160)
						int tmp16 = (_g1)++;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(160)
						int i = tmp16;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(161)
						Array< Float > tmp17 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(161)
						int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(161)
						Float tmp19 = tmp17->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(161)
						hx::AddEq(delta,tmp19);
						HX_STACK_LINE(162)
						Array< Float > tmp20 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(162)
						int tmp21 = i;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(162)
						Array< Float > tmp22 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(162)
						int tmp23 = (i + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(162)
						Float tmp24 = tmp22->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(162)
						tmp20[tmp21] = tmp24;
					}
				}
				HX_STACK_LINE(164)
				Array< Float > tmp12 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(164)
				int tmp13 = ::kha::Scheduler_obj::DIF_COUNT;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(164)
				int tmp14 = (tmp13 - (int)2);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(164)
				Float tmp15 = tmp12->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(164)
				hx::AddEq(delta,tmp15);
				HX_STACK_LINE(165)
				int tmp16 = ::kha::Scheduler_obj::DIF_COUNT;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(165)
				hx::DivEq(delta,tmp16);
				HX_STACK_LINE(166)
				Array< Float > tmp17 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(166)
				int tmp18 = ::kha::Scheduler_obj::DIF_COUNT;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(166)
				int tmp19 = (tmp18 - (int)2);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(166)
				Float tmp20 = realdif;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(166)
				tmp17[tmp19] = tmp20;
				HX_STACK_LINE(168)
				hx::AddEq(frameEnd,delta);
			}
			else{
				HX_STACK_LINE(171)
				{
					HX_STACK_LINE(171)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(171)
					int tmp11 = ::kha::Scheduler_obj::DIF_COUNT;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(171)
					int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(171)
					int _g = tmp12;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(171)
					while((true)){
						HX_STACK_LINE(171)
						bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(171)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(171)
						if ((tmp14)){
							HX_STACK_LINE(171)
							break;
						}
						HX_STACK_LINE(171)
						int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(171)
						int i = tmp15;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(172)
						Array< Float > tmp16 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(172)
						int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(172)
						Array< Float > tmp18 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(172)
						int tmp19 = (i + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(172)
						Float tmp20 = tmp18->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(172)
						tmp16[tmp17] = tmp20;
					}
				}
				HX_STACK_LINE(174)
				Array< Float > tmp11 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(174)
				int tmp12 = ::kha::Scheduler_obj::DIF_COUNT;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(174)
				int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(174)
				Float tmp14 = delta;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(174)
				tmp11[tmp13] = tmp14;
				HX_STACK_LINE(176)
				Float next = (int)0;		HX_STACK_VAR(next,"next");
				HX_STACK_LINE(177)
				{
					HX_STACK_LINE(177)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(177)
					int tmp15 = ::kha::Scheduler_obj::DIF_COUNT;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(177)
					int _g = tmp15;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(177)
					while((true)){
						HX_STACK_LINE(177)
						bool tmp16 = (_g1 < _g);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(177)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(177)
						if ((tmp17)){
							HX_STACK_LINE(177)
							break;
						}
						HX_STACK_LINE(177)
						int tmp18 = (_g1)++;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(177)
						int i = tmp18;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(178)
						Array< Float > tmp19 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(178)
						int tmp20 = i;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(178)
						Float tmp21 = tmp19->__get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(178)
						hx::AddEq(next,tmp21);
					}
				}
				HX_STACK_LINE(180)
				int tmp15 = ::kha::Scheduler_obj::DIF_COUNT;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(180)
				hx::DivEq(next,tmp15);
				HX_STACK_LINE(185)
				hx::AddEq(frameEnd,next);
			}
		}
		HX_STACK_LINE(189)
		::kha::Scheduler_obj::lastTime = frameEnd;
		HX_STACK_LINE(190)
		bool tmp10 = ::kha::Scheduler_obj::stopped;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(190)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(190)
		if ((tmp11)){
			HX_STACK_LINE(191)
			::kha::Scheduler_obj::current = frameEnd;
		}
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(194)
			Array< ::Dynamic > tmp12 = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(194)
			Array< ::Dynamic > _g1 = tmp12;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(194)
			while((true)){
				HX_STACK_LINE(194)
				bool tmp13 = (_g < _g1->length);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(194)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(194)
				if ((tmp14)){
					HX_STACK_LINE(194)
					break;
				}
				HX_STACK_LINE(194)
				::kha::TimeTask tmp15 = _g1->__get(_g).StaticCast< ::kha::TimeTask >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(194)
				::kha::TimeTask t = tmp15;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(194)
				++(_g);
				HX_STACK_LINE(195)
				bool tmp16 = ::kha::Scheduler_obj::stopped;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(195)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(195)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(195)
				if ((tmp17)){
					HX_STACK_LINE(195)
					tmp18 = t->paused;
				}
				else{
					HX_STACK_LINE(195)
					tmp18 = true;
				}
				HX_STACK_LINE(195)
				if ((tmp18)){
					HX_STACK_LINE(196)
					hx::AddEq(t->next,delta);
				}
				else{
					HX_STACK_LINE(198)
					bool tmp19 = (t->next <= frameEnd);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(198)
					if ((tmp19)){
						HX_STACK_LINE(199)
						hx::AddEq(t->next,t->period);
						HX_STACK_LINE(200)
						Array< ::Dynamic > tmp20 = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(200)
						::kha::TimeTask tmp21 = t;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(200)
						tmp20->remove(tmp21);
						HX_STACK_LINE(202)
						bool tmp22 = t->active;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(202)
						bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(202)
						if ((tmp22)){
							HX_STACK_LINE(202)
							tmp23 = t->task();
						}
						else{
							HX_STACK_LINE(202)
							tmp23 = false;
						}
						HX_STACK_LINE(202)
						if ((tmp23)){
							HX_STACK_LINE(203)
							bool tmp24 = (t->period > (int)0);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(203)
							bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(203)
							if ((tmp24)){
								HX_STACK_LINE(203)
								bool tmp26 = (t->duration == (int)0);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(203)
								bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(203)
								bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(203)
								bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(203)
								bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(203)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(203)
								if ((tmp31)){
									HX_STACK_LINE(203)
									Float tmp32 = t->duration;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(203)
									Float tmp33 = (t->start + t->next);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(203)
									Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(203)
									Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(203)
									tmp25 = (tmp32 >= tmp35);
								}
								else{
									HX_STACK_LINE(203)
									tmp25 = true;
								}
							}
							else{
								HX_STACK_LINE(203)
								tmp25 = false;
							}
							HX_STACK_LINE(203)
							if ((tmp25)){
								HX_STACK_LINE(204)
								Array< ::Dynamic > tmp26 = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(204)
								::kha::TimeTask tmp27 = t;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(204)
								::kha::Scheduler_obj::insertSorted(tmp26,tmp27);
							}
						}
						else{
							HX_STACK_LINE(208)
							t->active = false;
						}
					}
				}
			}
		}
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(213)
			Array< ::Dynamic > tmp12 = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(213)
			Array< ::Dynamic > _g1 = tmp12;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(213)
			while((true)){
				HX_STACK_LINE(213)
				bool tmp13 = (_g < _g1->length);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(213)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(213)
				if ((tmp14)){
					HX_STACK_LINE(213)
					break;
				}
				HX_STACK_LINE(213)
				::kha::TimeTask tmp15 = _g1->__get(_g).StaticCast< ::kha::TimeTask >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(213)
				::kha::TimeTask timeTask = tmp15;		HX_STACK_VAR(timeTask,"timeTask");
				HX_STACK_LINE(213)
				++(_g);
				HX_STACK_LINE(214)
				bool tmp16 = timeTask->active;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(214)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(214)
				if ((tmp17)){
					HX_STACK_LINE(215)
					Array< ::Dynamic > tmp18 = ::kha::Scheduler_obj::toDeleteTime;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(215)
					::kha::TimeTask tmp19 = timeTask;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(215)
					tmp18->push(tmp19);
				}
			}
		}
		HX_STACK_LINE(219)
		while((true)){
			HX_STACK_LINE(219)
			Array< ::Dynamic > tmp12 = ::kha::Scheduler_obj::toDeleteTime;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(219)
			int tmp13 = tmp12->length;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(219)
			bool tmp14 = (tmp13 > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(219)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(219)
			if ((tmp15)){
				HX_STACK_LINE(219)
				break;
			}
			HX_STACK_LINE(220)
			Array< ::Dynamic > tmp16 = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(220)
			Array< ::Dynamic > tmp17 = ::kha::Scheduler_obj::toDeleteTime;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(220)
			::kha::TimeTask tmp18 = tmp17->pop().StaticCast< ::kha::TimeTask >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(220)
			tmp16->remove(tmp18);
		}
		HX_STACK_LINE(223)
		::kha::Scheduler_obj::sortFrameTasks();
		HX_STACK_LINE(224)
		{
			HX_STACK_LINE(224)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(224)
			Array< ::Dynamic > tmp12 = ::kha::Scheduler_obj::frameTasks;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(224)
			Array< ::Dynamic > _g1 = tmp12;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(224)
			while((true)){
				HX_STACK_LINE(224)
				bool tmp13 = (_g < _g1->length);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(224)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(224)
				if ((tmp14)){
					HX_STACK_LINE(224)
					break;
				}
				HX_STACK_LINE(224)
				::kha::FrameTask tmp15 = _g1->__get(_g).StaticCast< ::kha::FrameTask >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(224)
				::kha::FrameTask frameTask = tmp15;		HX_STACK_VAR(frameTask,"frameTask");
				HX_STACK_LINE(224)
				++(_g);
				HX_STACK_LINE(225)
				bool tmp16 = ::kha::Scheduler_obj::stopped;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(225)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(225)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(225)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(225)
				if ((tmp18)){
					HX_STACK_LINE(225)
					tmp19 = frameTask->paused;
				}
				else{
					HX_STACK_LINE(225)
					tmp19 = false;
				}
				HX_STACK_LINE(225)
				if ((tmp19)){
					HX_STACK_LINE(226)
					bool tmp20 = frameTask->task();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(226)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(226)
					if ((tmp21)){
						HX_STACK_LINE(226)
						frameTask->active = false;
					}
				}
			}
		}
		HX_STACK_LINE(230)
		{
			HX_STACK_LINE(230)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(230)
			Array< ::Dynamic > tmp12 = ::kha::Scheduler_obj::frameTasks;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(230)
			Array< ::Dynamic > _g1 = tmp12;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(230)
			while((true)){
				HX_STACK_LINE(230)
				bool tmp13 = (_g < _g1->length);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(230)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(230)
				if ((tmp14)){
					HX_STACK_LINE(230)
					break;
				}
				HX_STACK_LINE(230)
				::kha::FrameTask tmp15 = _g1->__get(_g).StaticCast< ::kha::FrameTask >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(230)
				::kha::FrameTask frameTask = tmp15;		HX_STACK_VAR(frameTask,"frameTask");
				HX_STACK_LINE(230)
				++(_g);
				HX_STACK_LINE(231)
				bool tmp16 = frameTask->active;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(231)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(231)
				if ((tmp17)){
					HX_STACK_LINE(232)
					Array< ::Dynamic > tmp18 = ::kha::Scheduler_obj::toDeleteFrame;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(232)
					::kha::FrameTask tmp19 = frameTask;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(232)
					tmp18->push(tmp19);
				}
			}
		}
		HX_STACK_LINE(236)
		while((true)){
			HX_STACK_LINE(236)
			Array< ::Dynamic > tmp12 = ::kha::Scheduler_obj::toDeleteFrame;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(236)
			int tmp13 = tmp12->length;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(236)
			bool tmp14 = (tmp13 > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(236)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(236)
			if ((tmp15)){
				HX_STACK_LINE(236)
				break;
			}
			HX_STACK_LINE(237)
			Array< ::Dynamic > tmp16 = ::kha::Scheduler_obj::frameTasks;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(237)
			Array< ::Dynamic > tmp17 = ::kha::Scheduler_obj::toDeleteFrame;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(237)
			::kha::FrameTask tmp18 = tmp17->pop().StaticCast< ::kha::FrameTask >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(237)
			tmp16->remove(tmp18);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scheduler_obj,executeFrame,(void))

Float Scheduler_obj::time( ){
	HX_STACK_FRAME("kha.Scheduler","time",0x3336484a,"kha.Scheduler.time","kha/Scheduler.hx",241,0xd275db8e)
	HX_STACK_LINE(242)
	Float tmp = ::kha::Scheduler_obj::current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scheduler_obj,time,return )

Float Scheduler_obj::realTime( ){
	HX_STACK_FRAME("kha.Scheduler","realTime",0xd6422948,"kha.Scheduler.realTime","kha/Scheduler.hx",245,0xd275db8e)
	HX_STACK_LINE(246)
	Float tmp = ::kha::Sys_obj::getTime();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(246)
	Float tmp1 = ::kha::Scheduler_obj::startTime;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(246)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(246)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scheduler_obj,realTime,return )

Void Scheduler_obj::resetTime( ){
{
		HX_STACK_FRAME("kha.Scheduler","resetTime",0x2292dc1f,"kha.Scheduler.resetTime","kha/Scheduler.hx",249,0xd275db8e)
		HX_STACK_LINE(250)
		Float tmp = ::kha::Sys_obj::getTime();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(250)
		Float now = tmp;		HX_STACK_VAR(now,"now");
		HX_STACK_LINE(251)
		::kha::Scheduler_obj::lastNow = (int)0;
		HX_STACK_LINE(252)
		Float tmp1 = now;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(252)
		Float tmp2 = ::kha::Scheduler_obj::startTime;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(252)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(252)
		Float dif = tmp3;		HX_STACK_VAR(dif,"dif");
		HX_STACK_LINE(253)
		::kha::Scheduler_obj::startTime = now;
		HX_STACK_LINE(254)
		{
			HX_STACK_LINE(254)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(254)
			Array< ::Dynamic > tmp4 = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(254)
			Array< ::Dynamic > _g1 = tmp4;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(254)
			while((true)){
				HX_STACK_LINE(254)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(254)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(254)
				if ((tmp6)){
					HX_STACK_LINE(254)
					break;
				}
				HX_STACK_LINE(254)
				::kha::TimeTask tmp7 = _g1->__get(_g).StaticCast< ::kha::TimeTask >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(254)
				::kha::TimeTask timeTask = tmp7;		HX_STACK_VAR(timeTask,"timeTask");
				HX_STACK_LINE(254)
				++(_g);
				HX_STACK_LINE(255)
				hx::SubEq(timeTask->start,dif);
				HX_STACK_LINE(256)
				hx::SubEq(timeTask->next,dif);
			}
		}
		HX_STACK_LINE(258)
		{
			HX_STACK_LINE(258)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(258)
			int tmp4 = ::kha::Scheduler_obj::DIF_COUNT;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(258)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(258)
			while((true)){
				HX_STACK_LINE(258)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(258)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(258)
				if ((tmp6)){
					HX_STACK_LINE(258)
					break;
				}
				HX_STACK_LINE(258)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(258)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(258)
				Array< Float > tmp8 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(258)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(258)
				tmp8[tmp9] = (int)0;
			}
		}
		HX_STACK_LINE(259)
		::kha::Scheduler_obj::current = (int)0;
		HX_STACK_LINE(260)
		::kha::Scheduler_obj::lastTime = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scheduler_obj,resetTime,(void))

int Scheduler_obj::addBreakableFrameTask( Dynamic task,int priority){
	HX_STACK_FRAME("kha.Scheduler","addBreakableFrameTask",0x44621e9d,"kha.Scheduler.addBreakableFrameTask","kha/Scheduler.hx",263,0xd275db8e)
	HX_STACK_ARG(task,"task")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_LINE(264)
	Array< ::Dynamic > tmp = ::kha::Scheduler_obj::frameTasks;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(264)
	Dynamic tmp1 = task;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(264)
	int tmp2 = priority;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(264)
	int tmp3 = ++(::kha::Scheduler_obj::currentFrameTaskId);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(264)
	::kha::FrameTask tmp4 = ::kha::FrameTask_obj::__new(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(264)
	tmp->push(tmp4);
	HX_STACK_LINE(265)
	::kha::Scheduler_obj::frame_tasks_sorted = false;
	HX_STACK_LINE(266)
	int tmp5 = ::kha::Scheduler_obj::currentFrameTaskId;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(266)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Scheduler_obj,addBreakableFrameTask,return )

int Scheduler_obj::addFrameTask( Dynamic task,int priority){
	HX_STACK_FRAME("kha.Scheduler","addFrameTask",0xb36720ee,"kha.Scheduler.addFrameTask","kha/Scheduler.hx",269,0xd275db8e)
	HX_STACK_ARG(task,"task")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_LINE(270)
	int tmp = priority;		HX_STACK_VAR(tmp,"tmp");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,task)
	int __ArgCount() const { return 0; }
	bool run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/Scheduler.hx",270,0xd275db8e)
		{
			HX_STACK_LINE(270)
			task().Cast< Void >();
			HX_STACK_LINE(270)
			return true;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(270)
	int tmp1 = ::kha::Scheduler_obj::addBreakableFrameTask( Dynamic(new _Function_1_1(task)),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(270)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Scheduler_obj,addFrameTask,return )

Void Scheduler_obj::pauseFrameTask( int id,bool paused){
{
		HX_STACK_FRAME("kha.Scheduler","pauseFrameTask",0xfc4302b9,"kha.Scheduler.pauseFrameTask","kha/Scheduler.hx",274,0xd275db8e)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(paused,"paused")
		HX_STACK_LINE(274)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(274)
		Array< ::Dynamic > tmp = ::kha::Scheduler_obj::frameTasks;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(274)
		Array< ::Dynamic > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(274)
		while((true)){
			HX_STACK_LINE(274)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(274)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(274)
			if ((tmp2)){
				HX_STACK_LINE(274)
				break;
			}
			HX_STACK_LINE(274)
			::kha::FrameTask tmp3 = _g1->__get(_g).StaticCast< ::kha::FrameTask >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(274)
			::kha::FrameTask frameTask = tmp3;		HX_STACK_VAR(frameTask,"frameTask");
			HX_STACK_LINE(274)
			++(_g);
			HX_STACK_LINE(275)
			bool tmp4 = (frameTask->id == id);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(275)
			if ((tmp4)){
				HX_STACK_LINE(276)
				frameTask->paused = paused;
				HX_STACK_LINE(277)
				break;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Scheduler_obj,pauseFrameTask,(void))

Void Scheduler_obj::removeFrameTask( int id){
{
		HX_STACK_FRAME("kha.Scheduler","removeFrameTask",0x21b33c11,"kha.Scheduler.removeFrameTask","kha/Scheduler.hx",283,0xd275db8e)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(283)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(283)
		Array< ::Dynamic > tmp = ::kha::Scheduler_obj::frameTasks;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(283)
		Array< ::Dynamic > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(283)
		while((true)){
			HX_STACK_LINE(283)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(283)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(283)
			if ((tmp2)){
				HX_STACK_LINE(283)
				break;
			}
			HX_STACK_LINE(283)
			::kha::FrameTask tmp3 = _g1->__get(_g).StaticCast< ::kha::FrameTask >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(283)
			::kha::FrameTask frameTask = tmp3;		HX_STACK_VAR(frameTask,"frameTask");
			HX_STACK_LINE(283)
			++(_g);
			HX_STACK_LINE(284)
			bool tmp4 = (frameTask->id == id);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(284)
			if ((tmp4)){
				HX_STACK_LINE(285)
				frameTask->active = false;
				HX_STACK_LINE(286)
				Array< ::Dynamic > tmp5 = ::kha::Scheduler_obj::frameTasks;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(286)
				::kha::FrameTask tmp6 = frameTask;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(286)
				tmp5->remove(tmp6);
				HX_STACK_LINE(287)
				break;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Scheduler_obj,removeFrameTask,(void))

int Scheduler_obj::generateGroupId( ){
	HX_STACK_FRAME("kha.Scheduler","generateGroupId",0x08ceed28,"kha.Scheduler.generateGroupId","kha/Scheduler.hx",292,0xd275db8e)
	HX_STACK_LINE(293)
	int tmp = ++(::kha::Scheduler_obj::currentGroupId);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(293)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scheduler_obj,generateGroupId,return )

int Scheduler_obj::addBreakableTimeTaskToGroup( int groupId,Dynamic task,Float start,hx::Null< Float >  __o_period,hx::Null< Float >  __o_duration){
Float period = __o_period.Default(0);
Float duration = __o_duration.Default(0);
	HX_STACK_FRAME("kha.Scheduler","addBreakableTimeTaskToGroup",0x55e602bd,"kha.Scheduler.addBreakableTimeTaskToGroup","kha/Scheduler.hx",296,0xd275db8e)
	HX_STACK_ARG(groupId,"groupId")
	HX_STACK_ARG(task,"task")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(period,"period")
	HX_STACK_ARG(duration,"duration")
{
		HX_STACK_LINE(297)
		::kha::TimeTask t = ::kha::TimeTask_obj::__new();		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(298)
		t->active = true;
		HX_STACK_LINE(299)
		t->task = task;
		HX_STACK_LINE(300)
		int tmp = ++(::kha::Scheduler_obj::currentTimeTaskId);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(300)
		t->id = tmp;
		HX_STACK_LINE(301)
		t->groupId = groupId;
		HX_STACK_LINE(303)
		Float tmp1 = ::kha::Scheduler_obj::current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(303)
		Float tmp2 = start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(303)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(303)
		t->start = tmp3;
		HX_STACK_LINE(304)
		t->period = (int)0;
		HX_STACK_LINE(305)
		bool tmp4 = (period != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(305)
		if ((tmp4)){
			HX_STACK_LINE(305)
			t->period = period;
		}
		HX_STACK_LINE(307)
		t->duration = (int)0;
		HX_STACK_LINE(308)
		bool tmp5 = (duration != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(308)
		if ((tmp5)){
			HX_STACK_LINE(308)
			Float tmp6 = (t->start + duration);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(308)
			t->duration = tmp6;
		}
		HX_STACK_LINE(310)
		t->next = t->start;
		HX_STACK_LINE(311)
		Array< ::Dynamic > tmp6 = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(311)
		::kha::TimeTask tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(311)
		::kha::Scheduler_obj::insertSorted(tmp6,tmp7);
		HX_STACK_LINE(312)
		int tmp8 = t->id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(312)
		return tmp8;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Scheduler_obj,addBreakableTimeTaskToGroup,return )

int Scheduler_obj::addTimeTaskToGroup( int groupId,Dynamic task,Float start,hx::Null< Float >  __o_period,hx::Null< Float >  __o_duration){
Float period = __o_period.Default(0);
Float duration = __o_duration.Default(0);
	HX_STACK_FRAME("kha.Scheduler","addTimeTaskToGroup",0xa9e317ce,"kha.Scheduler.addTimeTaskToGroup","kha/Scheduler.hx",315,0xd275db8e)
	HX_STACK_ARG(groupId,"groupId")
	HX_STACK_ARG(task,"task")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(period,"period")
	HX_STACK_ARG(duration,"duration")
{
		HX_STACK_LINE(316)
		int tmp = groupId;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(316)
		Float tmp1 = start;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(316)
		Float tmp2 = period;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(316)
		Float tmp3 = duration;		HX_STACK_VAR(tmp3,"tmp3");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,task)
		int __ArgCount() const { return 0; }
		bool run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/Scheduler.hx",316,0xd275db8e)
			{
				HX_STACK_LINE(316)
				task().Cast< Void >();
				HX_STACK_LINE(316)
				return true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(316)
		int tmp4 = ::kha::Scheduler_obj::addBreakableTimeTaskToGroup(tmp, Dynamic(new _Function_1_1(task)),tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(316)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Scheduler_obj,addTimeTaskToGroup,return )

int Scheduler_obj::addBreakableTimeTask( Dynamic task,Float start,hx::Null< Float >  __o_period,hx::Null< Float >  __o_duration){
Float period = __o_period.Default(0);
Float duration = __o_duration.Default(0);
	HX_STACK_FRAME("kha.Scheduler","addBreakableTimeTask",0x71683bc7,"kha.Scheduler.addBreakableTimeTask","kha/Scheduler.hx",319,0xd275db8e)
	HX_STACK_ARG(task,"task")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(period,"period")
	HX_STACK_ARG(duration,"duration")
{
		HX_STACK_LINE(320)
		Dynamic tmp = task;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(320)
		Float tmp1 = start;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(320)
		Float tmp2 = period;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(320)
		Float tmp3 = duration;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(320)
		int tmp4 = ::kha::Scheduler_obj::addBreakableTimeTaskToGroup((int)0,tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(320)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Scheduler_obj,addBreakableTimeTask,return )

int Scheduler_obj::addTimeTask( Dynamic task,Float start,hx::Null< Float >  __o_period,hx::Null< Float >  __o_duration){
Float period = __o_period.Default(0);
Float duration = __o_duration.Default(0);
	HX_STACK_FRAME("kha.Scheduler","addTimeTask",0x71e7ae96,"kha.Scheduler.addTimeTask","kha/Scheduler.hx",323,0xd275db8e)
	HX_STACK_ARG(task,"task")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(period,"period")
	HX_STACK_ARG(duration,"duration")
{
		HX_STACK_LINE(324)
		Dynamic tmp = task;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(324)
		Float tmp1 = start;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(324)
		Float tmp2 = period;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(324)
		Float tmp3 = duration;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(324)
		int tmp4 = ::kha::Scheduler_obj::addTimeTaskToGroup((int)0,tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(324)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Scheduler_obj,addTimeTask,return )

::kha::TimeTask Scheduler_obj::getTimeTask( int id){
	HX_STACK_FRAME("kha.Scheduler","getTimeTask",0x667f3a0b,"kha.Scheduler.getTimeTask","kha/Scheduler.hx",327,0xd275db8e)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(328)
	{
		HX_STACK_LINE(328)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(328)
		Array< ::Dynamic > tmp = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(328)
		Array< ::Dynamic > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(328)
		while((true)){
			HX_STACK_LINE(328)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(328)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(328)
			if ((tmp2)){
				HX_STACK_LINE(328)
				break;
			}
			HX_STACK_LINE(328)
			::kha::TimeTask tmp3 = _g1->__get(_g).StaticCast< ::kha::TimeTask >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(328)
			::kha::TimeTask timeTask = tmp3;		HX_STACK_VAR(timeTask,"timeTask");
			HX_STACK_LINE(328)
			++(_g);
			HX_STACK_LINE(329)
			bool tmp4 = (timeTask->id == id);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(329)
			if ((tmp4)){
				HX_STACK_LINE(330)
				::kha::TimeTask tmp5 = timeTask;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(330)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(333)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Scheduler_obj,getTimeTask,return )

Void Scheduler_obj::pauseTimeTask( int id,bool paused){
{
		HX_STACK_FRAME("kha.Scheduler","pauseTimeTask",0xa3984f2b,"kha.Scheduler.pauseTimeTask","kha/Scheduler.hx",336,0xd275db8e)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(paused,"paused")
		HX_STACK_LINE(337)
		int tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(337)
		::kha::TimeTask tmp1 = ::kha::Scheduler_obj::getTimeTask(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(337)
		::kha::TimeTask timeTask = tmp1;		HX_STACK_VAR(timeTask,"timeTask");
		HX_STACK_LINE(338)
		bool tmp2 = (timeTask != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(338)
		if ((tmp2)){
			HX_STACK_LINE(339)
			timeTask->paused = paused;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Scheduler_obj,pauseTimeTask,(void))

Void Scheduler_obj::pauseTimeTasks( int groupId,bool paused){
{
		HX_STACK_FRAME("kha.Scheduler","pauseTimeTasks",0x81acf6e8,"kha.Scheduler.pauseTimeTasks","kha/Scheduler.hx",344,0xd275db8e)
		HX_STACK_ARG(groupId,"groupId")
		HX_STACK_ARG(paused,"paused")
		HX_STACK_LINE(344)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(344)
		Array< ::Dynamic > tmp = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(344)
		Array< ::Dynamic > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(344)
		while((true)){
			HX_STACK_LINE(344)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(344)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(344)
			if ((tmp2)){
				HX_STACK_LINE(344)
				break;
			}
			HX_STACK_LINE(344)
			::kha::TimeTask tmp3 = _g1->__get(_g).StaticCast< ::kha::TimeTask >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(344)
			::kha::TimeTask timeTask = tmp3;		HX_STACK_VAR(timeTask,"timeTask");
			HX_STACK_LINE(344)
			++(_g);
			HX_STACK_LINE(345)
			bool tmp4 = (timeTask->groupId == groupId);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(345)
			if ((tmp4)){
				HX_STACK_LINE(346)
				timeTask->paused = paused;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Scheduler_obj,pauseTimeTasks,(void))

Void Scheduler_obj::removeTimeTask( int id){
{
		HX_STACK_FRAME("kha.Scheduler","removeTimeTask",0x701a88d3,"kha.Scheduler.removeTimeTask","kha/Scheduler.hx",351,0xd275db8e)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(352)
		int tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(352)
		::kha::TimeTask tmp1 = ::kha::Scheduler_obj::getTimeTask(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(352)
		::kha::TimeTask timeTask = tmp1;		HX_STACK_VAR(timeTask,"timeTask");
		HX_STACK_LINE(353)
		bool tmp2 = (timeTask != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(353)
		if ((tmp2)){
			HX_STACK_LINE(354)
			timeTask->active = false;
			HX_STACK_LINE(355)
			Array< ::Dynamic > tmp3 = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(355)
			::kha::TimeTask tmp4 = timeTask;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(355)
			tmp3->remove(tmp4);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Scheduler_obj,removeTimeTask,(void))

Void Scheduler_obj::removeTimeTasks( int groupId){
{
		HX_STACK_FRAME("kha.Scheduler","removeTimeTasks",0xa71d3040,"kha.Scheduler.removeTimeTasks","kha/Scheduler.hx",359,0xd275db8e)
		HX_STACK_ARG(groupId,"groupId")
		HX_STACK_LINE(360)
		{
			HX_STACK_LINE(360)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(360)
			Array< ::Dynamic > tmp = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(360)
			Array< ::Dynamic > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(360)
			while((true)){
				HX_STACK_LINE(360)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(360)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(360)
				if ((tmp2)){
					HX_STACK_LINE(360)
					break;
				}
				HX_STACK_LINE(360)
				::kha::TimeTask tmp3 = _g1->__get(_g).StaticCast< ::kha::TimeTask >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(360)
				::kha::TimeTask timeTask = tmp3;		HX_STACK_VAR(timeTask,"timeTask");
				HX_STACK_LINE(360)
				++(_g);
				HX_STACK_LINE(361)
				bool tmp4 = (timeTask->groupId == groupId);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(361)
				if ((tmp4)){
					HX_STACK_LINE(362)
					timeTask->active = true;
					HX_STACK_LINE(363)
					Array< ::Dynamic > tmp5 = ::kha::Scheduler_obj::toDeleteTime;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(363)
					::kha::TimeTask tmp6 = timeTask;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(363)
					tmp5->push(tmp6);
				}
			}
		}
		HX_STACK_LINE(367)
		while((true)){
			HX_STACK_LINE(367)
			Array< ::Dynamic > tmp = ::kha::Scheduler_obj::toDeleteTime;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(367)
			int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(367)
			bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(367)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(367)
			if ((tmp3)){
				HX_STACK_LINE(367)
				break;
			}
			HX_STACK_LINE(368)
			Array< ::Dynamic > tmp4 = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(368)
			Array< ::Dynamic > tmp5 = ::kha::Scheduler_obj::toDeleteTime;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(368)
			::kha::TimeTask tmp6 = tmp5->pop().StaticCast< ::kha::TimeTask >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(368)
			tmp4->remove(tmp6);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Scheduler_obj,removeTimeTasks,(void))

int Scheduler_obj::numTasksInSchedule( ){
	HX_STACK_FRAME("kha.Scheduler","numTasksInSchedule",0x5bfae3e1,"kha.Scheduler.numTasksInSchedule","kha/Scheduler.hx",372,0xd275db8e)
	HX_STACK_LINE(373)
	Array< ::Dynamic > tmp = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(373)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(373)
	Array< ::Dynamic > tmp2 = ::kha::Scheduler_obj::frameTasks;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(373)
	int tmp3 = tmp2->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(373)
	int tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(373)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scheduler_obj,numTasksInSchedule,return )

Void Scheduler_obj::insertSorted( Array< ::Dynamic > list,::kha::TimeTask task){
{
		HX_STACK_FRAME("kha.Scheduler","insertSorted",0x20607c93,"kha.Scheduler.insertSorted","kha/Scheduler.hx",376,0xd275db8e)
		HX_STACK_ARG(list,"list")
		HX_STACK_ARG(task,"task")
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(377)
			int _g = list->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(377)
			while((true)){
				HX_STACK_LINE(377)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(377)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(377)
				if ((tmp1)){
					HX_STACK_LINE(377)
					break;
				}
				HX_STACK_LINE(377)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(377)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(378)
				::kha::TimeTask tmp3 = list->__get(i).StaticCast< ::kha::TimeTask >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(378)
				Float tmp4 = tmp3->next;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(378)
				Float tmp5 = task->next;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(378)
				bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(378)
				if ((tmp6)){
					HX_STACK_LINE(379)
					int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(379)
					::kha::TimeTask tmp8 = task;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(379)
					list->insert(tmp7,tmp8);
					HX_STACK_LINE(380)
					return null();
				}
			}
		}
		HX_STACK_LINE(383)
		::kha::TimeTask tmp = task;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(383)
		list->push(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Scheduler_obj,insertSorted,(void))

Void Scheduler_obj::sortFrameTasks( ){
{
		HX_STACK_FRAME("kha.Scheduler","sortFrameTasks",0xfb8e299c,"kha.Scheduler.sortFrameTasks","kha/Scheduler.hx",386,0xd275db8e)
		HX_STACK_LINE(387)
		bool tmp = ::kha::Scheduler_obj::frame_tasks_sorted;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(387)
		if ((tmp)){
			HX_STACK_LINE(387)
			return null();
		}
		HX_STACK_LINE(388)
		Array< ::Dynamic > tmp1 = ::kha::Scheduler_obj::frameTasks;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 2; }
		int run(::kha::FrameTask a,::kha::FrameTask b){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/Scheduler.hx",388,0xd275db8e)
			HX_STACK_ARG(a,"a")
			HX_STACK_ARG(b,"b")
			{
				HX_STACK_LINE(388)
				bool tmp2 = (a->priority > b->priority);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(388)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(388)
				if ((tmp2)){
					HX_STACK_LINE(388)
					tmp3 = (int)1;
				}
				else{
					HX_STACK_LINE(388)
					bool tmp4 = (a->priority < b->priority);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(388)
					if ((tmp4)){
						HX_STACK_LINE(388)
						tmp3 = (int)-1;
					}
					else{
						HX_STACK_LINE(388)
						tmp3 = (int)0;
					}
				}
				HX_STACK_LINE(388)
				return tmp3;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(388)
		tmp1->sort( Dynamic(new _Function_1_1()));
		HX_STACK_LINE(389)
		::kha::Scheduler_obj::frame_tasks_sorted = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scheduler_obj,sortFrameTasks,(void))


Scheduler_obj::Scheduler_obj()
{
}

bool Scheduler_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stop") ) { outValue = stop_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"back") ) { outValue = back_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"time") ) { outValue = time_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"vsync") ) { outValue = vsync; return true;  }
		if (HX_FIELD_EQ(inName,"start") ) { outValue = start_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"deltas") ) { outValue = deltas; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { outValue = current; return true;  }
		if (HX_FIELD_EQ(inName,"stopped") ) { outValue = stopped; return true;  }
		if (HX_FIELD_EQ(inName,"lastNow") ) { outValue = lastNow; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastTime") ) { outValue = lastTime; return true;  }
		if (HX_FIELD_EQ(inName,"onedifhz") ) { outValue = onedifhz; return true;  }
		if (HX_FIELD_EQ(inName,"realTime") ) { outValue = realTime_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timeTasks") ) { outValue = timeTasks; return true;  }
		if (HX_FIELD_EQ(inName,"DIF_COUNT") ) { outValue = DIF_COUNT; return true;  }
		if (HX_FIELD_EQ(inName,"startTime") ) { outValue = startTime; return true;  }
		if (HX_FIELD_EQ(inName,"isStopped") ) { outValue = isStopped_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resetTime") ) { outValue = resetTime_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameTasks") ) { outValue = frameTasks; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addTimeTask") ) { outValue = addTimeTask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getTimeTask") ) { outValue = getTimeTask_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toDeleteTime") ) { outValue = toDeleteTime; return true;  }
		if (HX_FIELD_EQ(inName,"maxframetime") ) { outValue = maxframetime; return true;  }
		if (HX_FIELD_EQ(inName,"executeFrame") ) { outValue = executeFrame_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"addFrameTask") ) { outValue = addFrameTask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"insertSorted") ) { outValue = insertSorted_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"toDeleteFrame") ) { outValue = toDeleteFrame; return true;  }
		if (HX_FIELD_EQ(inName,"pauseTimeTask") ) { outValue = pauseTimeTask_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentGroupId") ) { outValue = currentGroupId; return true;  }
		if (HX_FIELD_EQ(inName,"pauseFrameTask") ) { outValue = pauseFrameTask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pauseTimeTasks") ) { outValue = pauseTimeTasks_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"removeTimeTask") ) { outValue = removeTimeTask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sortFrameTasks") ) { outValue = sortFrameTasks_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeFrameTask") ) { outValue = removeFrameTask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"generateGroupId") ) { outValue = generateGroupId_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"removeTimeTasks") ) { outValue = removeTimeTasks_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentTimeTaskId") ) { outValue = currentTimeTaskId; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"frame_tasks_sorted") ) { outValue = frame_tasks_sorted; return true;  }
		if (HX_FIELD_EQ(inName,"currentFrameTaskId") ) { outValue = currentFrameTaskId; return true;  }
		if (HX_FIELD_EQ(inName,"addTimeTaskToGroup") ) { outValue = addTimeTaskToGroup_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"numTasksInSchedule") ) { outValue = numTasksInSchedule_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"addBreakableTimeTask") ) { outValue = addBreakableTimeTask_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"addBreakableFrameTask") ) { outValue = addBreakableFrameTask_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"addBreakableTimeTaskToGroup") ) { outValue = addBreakableTimeTaskToGroup_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Scheduler_obj::timeTasks,HX_HCSTRING("timeTasks","\x41","\x72","\xe1","\xbf")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Scheduler_obj::frameTasks,HX_HCSTRING("frameTasks","\x21","\xd2","\x16","\xee")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Scheduler_obj::toDeleteTime,HX_HCSTRING("toDeleteTime","\x33","\xdb","\x28","\x42")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Scheduler_obj::toDeleteFrame,HX_HCSTRING("toDeleteFrame","\x47","\xaa","\xe4","\x97")},
	{hx::fsFloat,(void *) &Scheduler_obj::current,HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{hx::fsFloat,(void *) &Scheduler_obj::lastTime,HX_HCSTRING("lastTime","\x83","\xe5","\x45","\xe0")},
	{hx::fsBool,(void *) &Scheduler_obj::frame_tasks_sorted,HX_HCSTRING("frame_tasks_sorted","\xa0","\xb7","\x4e","\xb9")},
	{hx::fsBool,(void *) &Scheduler_obj::stopped,HX_HCSTRING("stopped","\x0d","\xd2","\x61","\x43")},
	{hx::fsBool,(void *) &Scheduler_obj::vsync,HX_HCSTRING("vsync","\xd1","\x2d","\xa8","\x3d")},
	{hx::fsFloat,(void *) &Scheduler_obj::onedifhz,HX_HCSTRING("onedifhz","\x6d","\x1e","\xeb","\xe6")},
	{hx::fsInt,(void *) &Scheduler_obj::currentFrameTaskId,HX_HCSTRING("currentFrameTaskId","\xd4","\xca","\x7c","\xdd")},
	{hx::fsInt,(void *) &Scheduler_obj::currentTimeTaskId,HX_HCSTRING("currentTimeTaskId","\x06","\xe4","\x97","\xfc")},
	{hx::fsInt,(void *) &Scheduler_obj::currentGroupId,HX_HCSTRING("currentGroupId","\xc1","\xf5","\x8b","\x94")},
	{hx::fsInt,(void *) &Scheduler_obj::DIF_COUNT,HX_HCSTRING("DIF_COUNT","\xd1","\xab","\x99","\x7a")},
	{hx::fsFloat,(void *) &Scheduler_obj::maxframetime,HX_HCSTRING("maxframetime","\x96","\xdf","\x54","\x45")},
	{hx::fsObject /*Array< Float >*/ ,(void *) &Scheduler_obj::deltas,HX_HCSTRING("deltas","\x7b","\x11","\xe4","\x6a")},
	{hx::fsFloat,(void *) &Scheduler_obj::startTime,HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05")},
	{hx::fsFloat,(void *) &Scheduler_obj::lastNow,HX_HCSTRING("lastNow","\x60","\x20","\xa9","\xd7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scheduler_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Scheduler_obj::timeTasks,"timeTasks");
	HX_MARK_MEMBER_NAME(Scheduler_obj::frameTasks,"frameTasks");
	HX_MARK_MEMBER_NAME(Scheduler_obj::toDeleteTime,"toDeleteTime");
	HX_MARK_MEMBER_NAME(Scheduler_obj::toDeleteFrame,"toDeleteFrame");
	HX_MARK_MEMBER_NAME(Scheduler_obj::current,"current");
	HX_MARK_MEMBER_NAME(Scheduler_obj::lastTime,"lastTime");
	HX_MARK_MEMBER_NAME(Scheduler_obj::frame_tasks_sorted,"frame_tasks_sorted");
	HX_MARK_MEMBER_NAME(Scheduler_obj::stopped,"stopped");
	HX_MARK_MEMBER_NAME(Scheduler_obj::vsync,"vsync");
	HX_MARK_MEMBER_NAME(Scheduler_obj::onedifhz,"onedifhz");
	HX_MARK_MEMBER_NAME(Scheduler_obj::currentFrameTaskId,"currentFrameTaskId");
	HX_MARK_MEMBER_NAME(Scheduler_obj::currentTimeTaskId,"currentTimeTaskId");
	HX_MARK_MEMBER_NAME(Scheduler_obj::currentGroupId,"currentGroupId");
	HX_MARK_MEMBER_NAME(Scheduler_obj::DIF_COUNT,"DIF_COUNT");
	HX_MARK_MEMBER_NAME(Scheduler_obj::maxframetime,"maxframetime");
	HX_MARK_MEMBER_NAME(Scheduler_obj::deltas,"deltas");
	HX_MARK_MEMBER_NAME(Scheduler_obj::startTime,"startTime");
	HX_MARK_MEMBER_NAME(Scheduler_obj::lastNow,"lastNow");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scheduler_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::timeTasks,"timeTasks");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::frameTasks,"frameTasks");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::toDeleteTime,"toDeleteTime");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::toDeleteFrame,"toDeleteFrame");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::current,"current");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::lastTime,"lastTime");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::frame_tasks_sorted,"frame_tasks_sorted");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::stopped,"stopped");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::vsync,"vsync");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::onedifhz,"onedifhz");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::currentFrameTaskId,"currentFrameTaskId");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::currentTimeTaskId,"currentTimeTaskId");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::currentGroupId,"currentGroupId");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::DIF_COUNT,"DIF_COUNT");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::maxframetime,"maxframetime");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::deltas,"deltas");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::startTime,"startTime");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::lastNow,"lastNow");
};

#endif

hx::Class Scheduler_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("timeTasks","\x41","\x72","\xe1","\xbf"),
	HX_HCSTRING("frameTasks","\x21","\xd2","\x16","\xee"),
	HX_HCSTRING("toDeleteTime","\x33","\xdb","\x28","\x42"),
	HX_HCSTRING("toDeleteFrame","\x47","\xaa","\xe4","\x97"),
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("lastTime","\x83","\xe5","\x45","\xe0"),
	HX_HCSTRING("frame_tasks_sorted","\xa0","\xb7","\x4e","\xb9"),
	HX_HCSTRING("stopped","\x0d","\xd2","\x61","\x43"),
	HX_HCSTRING("vsync","\xd1","\x2d","\xa8","\x3d"),
	HX_HCSTRING("onedifhz","\x6d","\x1e","\xeb","\xe6"),
	HX_HCSTRING("currentFrameTaskId","\xd4","\xca","\x7c","\xdd"),
	HX_HCSTRING("currentTimeTaskId","\x06","\xe4","\x97","\xfc"),
	HX_HCSTRING("currentGroupId","\xc1","\xf5","\x8b","\x94"),
	HX_HCSTRING("DIF_COUNT","\xd1","\xab","\x99","\x7a"),
	HX_HCSTRING("maxframetime","\x96","\xdf","\x54","\x45"),
	HX_HCSTRING("deltas","\x7b","\x11","\xe4","\x6a"),
	HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05"),
	HX_HCSTRING("lastNow","\x60","\x20","\xa9","\xd7"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("isStopped","\x43","\x4f","\x60","\x47"),
	HX_HCSTRING("back","\x27","\xda","\x10","\x41"),
	HX_HCSTRING("executeFrame","\xb8","\xbd","\x09","\xc1"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("realTime","\x8b","\x4a","\x29","\x10"),
	HX_HCSTRING("resetTime","\x7c","\xd5","\xe8","\x92"),
	HX_HCSTRING("addBreakableFrameTask","\x7a","\x2f","\x37","\xf1"),
	HX_HCSTRING("addFrameTask","\xb1","\x9f","\xcb","\x39"),
	HX_HCSTRING("pauseFrameTask","\x3c","\xf8","\xd6","\x43"),
	HX_HCSTRING("removeFrameTask","\x2e","\x19","\x96","\x7b"),
	HX_HCSTRING("generateGroupId","\x45","\xca","\xb1","\x62"),
	HX_HCSTRING("addBreakableTimeTaskToGroup","\x5a","\x97","\xee","\x0d"),
	HX_HCSTRING("addTimeTaskToGroup","\xd1","\x8a","\x93","\x50"),
	HX_HCSTRING("addBreakableTimeTask","\x8a","\xb5","\x5d","\x7b"),
	HX_HCSTRING("addTimeTask","\x33","\x79","\xb4","\x1e"),
	HX_HCSTRING("getTimeTask","\xa8","\x04","\x4c","\x13"),
	HX_HCSTRING("pauseTimeTask","\x08","\xbb","\x22","\xb5"),
	HX_HCSTRING("pauseTimeTasks","\x6b","\xec","\x40","\xc9"),
	HX_HCSTRING("removeTimeTask","\x56","\x7e","\xae","\xb7"),
	HX_HCSTRING("removeTimeTasks","\x5d","\x0d","\x00","\x01"),
	HX_HCSTRING("numTasksInSchedule","\xe4","\x56","\xab","\x02"),
	HX_HCSTRING("insertSorted","\x56","\xfb","\xc4","\xa6"),
	HX_HCSTRING("sortFrameTasks","\x1f","\x1f","\x22","\x43"),
	::String(null()) };

void Scheduler_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Scheduler","\x51","\x4d","\x26","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Scheduler_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Scheduler_obj >;
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

void Scheduler_obj::__boot()
{
	DIF_COUNT= (int)3;
	maxframetime= ((Float)0.5);
	startTime= ((Float)0);
	lastNow= ((Float)0);
}

} // end namespace kha
