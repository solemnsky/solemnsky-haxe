#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_control_Control
#include <control/Control.h>
#endif
#ifndef INCLUDED_control_DrawPrim
#include <control/DrawPrim.h>
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
#ifndef INCLUDED_control_Scene
#include <control/Scene.h>
#endif
#ifndef INCLUDED_control_demo_DemoSelect
#include <control/demo/DemoSelect.h>
#endif
#ifndef INCLUDED_control_demo_InputDemo
#include <control/demo/InputDemo.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_util_Vector
#include <util/Vector.h>
#endif
namespace control{
namespace demo{

Void InputDemo_obj::__construct()
{
HX_STACK_FRAME("control.demo.InputDemo","new",0x172d8385,"control.demo.InputDemo.new","control/demo/InputDemo.hx",19,0xac0c7feb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	this->exit = false;
	HX_STACK_LINE(26)
	::util::Vector tmp = ::util::Vector_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	this->pos = tmp;
	HX_STACK_LINE(27)
	::util::Vector tmp1 = ::util::Vector_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	this->ball = tmp1;
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","control/demo/InputDemo.hx",29,0xac0c7feb)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("left","\x07","\x08","\xb0","\x47") , false,false);
				__result->Add(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9") , false,false);
				__result->Add(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42") , false,false);
				__result->Add(HX_HCSTRING("up","\x5b","\x66","\x00","\x00") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(29)
	Dynamic tmp2 = _Function_1_1::Block();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	this->movement = tmp2;
}
;
	return null();
}

//InputDemo_obj::~InputDemo_obj() { }

Dynamic InputDemo_obj::__CreateEmpty() { return  new InputDemo_obj; }
hx::ObjectPtr< InputDemo_obj > InputDemo_obj::__new()
{  hx::ObjectPtr< InputDemo_obj > _result_ = new InputDemo_obj();
	_result_->__construct();
	return _result_;}

Dynamic InputDemo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InputDemo_obj > _result_ = new InputDemo_obj();
	_result_->__construct();
	return _result_;}

hx::Object *InputDemo_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::control::Control_obj)) return operator ::control::Control_obj *();
	return super::__ToInterface(inType);
}

InputDemo_obj::operator ::control::Control_obj *()
	{ return new ::control::Control_delegate_< InputDemo_obj >(this); }
Void InputDemo_obj::init( ::control::Network _){
{
		HX_STACK_FRAME("control.demo.InputDemo","init",0x2d5e484b,"control.demo.InputDemo.init","control/demo/InputDemo.hx",32,0xac0c7feb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InputDemo_obj,init,(void))

Void InputDemo_obj::tick( Float delta){
{
		HX_STACK_FRAME("control.demo.InputDemo","tick",0x349fd098,"control.demo.InputDemo.tick","control/demo/InputDemo.hx",34,0xac0c7feb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(35)
		Float tmp = delta;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		Float tmp1 = ::Math_obj::pow(((Float)0.8),tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		Float factor = tmp1;		HX_STACK_VAR(factor,"factor");
		HX_STACK_LINE(36)
		::util::Vector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			::util::Vector tmp3 = this->ball;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			::util::Vector _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(36)
			::util::Vector tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(36)
			{
				HX_STACK_LINE(36)
				::util::Vector tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(36)
				{
					HX_STACK_LINE(36)
					::util::Vector tmp6 = this->pos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(36)
					::util::Vector _this1 = tmp6;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(36)
					::util::Vector tmp7 = this->ball;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(36)
					::util::Vector v = tmp7;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(36)
					Float tmp8 = (_this1->x - v->x);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(36)
					Float tmp9 = (_this1->y - v->y);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(36)
					tmp5 = ::util::Vector_obj::__new(tmp8,tmp9);
				}
				HX_STACK_LINE(36)
				::util::Vector _this1 = tmp5;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(36)
				Float tmp6 = (_this1->x * factor);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(36)
				Float tmp7 = (_this1->y * factor);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(36)
				tmp4 = ::util::Vector_obj::__new(tmp6,tmp7);
			}
			HX_STACK_LINE(36)
			::util::Vector v = tmp4;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(36)
			Float tmp5 = (_this->x + v->x);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(36)
			Float tmp6 = (_this->y + v->y);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(36)
			tmp2 = ::util::Vector_obj::__new(tmp5,tmp6);
		}
		HX_STACK_LINE(36)
		this->ball = tmp2;
		HX_STACK_LINE(38)
		Float moveScale = delta;		HX_STACK_VAR(moveScale,"moveScale");
		HX_STACK_LINE(39)
		Dynamic tmp3 = this->movement;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		bool tmp4 = tmp3->__Field(HX_HCSTRING("up","\x5b","\x66","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(39)
		if ((tmp4)){
			HX_STACK_LINE(40)
			::util::Vector tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(40)
			{
				HX_STACK_LINE(40)
				::util::Vector tmp6 = this->ball;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(40)
				::util::Vector _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(40)
				::util::Vector tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(40)
				{
					HX_STACK_LINE(40)
					::util::Vector _this1 = ::util::Vector_obj::__new((int)0,(int)-1);		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(40)
					Float tmp8 = (_this1->x * moveScale);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(40)
					Float tmp9 = (_this1->y * moveScale);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(40)
					tmp7 = ::util::Vector_obj::__new(tmp8,tmp9);
				}
				HX_STACK_LINE(40)
				::util::Vector v = tmp7;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(40)
				Float tmp8 = (_this->x + v->x);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(40)
				Float tmp9 = (_this->y + v->y);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(40)
				tmp5 = ::util::Vector_obj::__new(tmp8,tmp9);
			}
			HX_STACK_LINE(39)
			this->ball = tmp5;
		}
		HX_STACK_LINE(41)
		Dynamic tmp5 = this->movement;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		bool tmp6 = tmp5->__Field(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		if ((tmp6)){
			HX_STACK_LINE(42)
			::util::Vector tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(42)
			{
				HX_STACK_LINE(42)
				::util::Vector tmp8 = this->ball;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(42)
				::util::Vector _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(42)
				::util::Vector tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(42)
				{
					HX_STACK_LINE(42)
					::util::Vector _this1 = ::util::Vector_obj::__new((int)0,(int)1);		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(42)
					Float tmp10 = (_this1->x * moveScale);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(42)
					Float tmp11 = (_this1->y * moveScale);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(42)
					tmp9 = ::util::Vector_obj::__new(tmp10,tmp11);
				}
				HX_STACK_LINE(42)
				::util::Vector v = tmp9;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(42)
				Float tmp10 = (_this->x + v->x);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(42)
				Float tmp11 = (_this->y + v->y);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(42)
				tmp7 = ::util::Vector_obj::__new(tmp10,tmp11);
			}
			HX_STACK_LINE(41)
			this->ball = tmp7;
		}
		HX_STACK_LINE(43)
		Dynamic tmp7 = this->movement;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		bool tmp8 = tmp7->__Field(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(43)
		if ((tmp8)){
			HX_STACK_LINE(44)
			::util::Vector tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(44)
				::util::Vector tmp10 = this->ball;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(44)
				::util::Vector _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(44)
				::util::Vector tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(44)
				{
					HX_STACK_LINE(44)
					::util::Vector _this1 = ::util::Vector_obj::__new((int)1,(int)0);		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(44)
					Float tmp12 = (_this1->x * moveScale);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(44)
					Float tmp13 = (_this1->y * moveScale);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(44)
					tmp11 = ::util::Vector_obj::__new(tmp12,tmp13);
				}
				HX_STACK_LINE(44)
				::util::Vector v = tmp11;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(44)
				Float tmp12 = (_this->x + v->x);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(44)
				Float tmp13 = (_this->y + v->y);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(44)
				tmp9 = ::util::Vector_obj::__new(tmp12,tmp13);
			}
			HX_STACK_LINE(43)
			this->ball = tmp9;
		}
		HX_STACK_LINE(45)
		Dynamic tmp9 = this->movement;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(45)
		bool tmp10 = tmp9->__Field(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(45)
		if ((tmp10)){
			HX_STACK_LINE(46)
			::util::Vector tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				::util::Vector tmp12 = this->ball;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(46)
				::util::Vector _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(46)
				::util::Vector tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(46)
				{
					HX_STACK_LINE(46)
					::util::Vector _this1 = ::util::Vector_obj::__new((int)-1,(int)0);		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(46)
					Float tmp14 = (_this1->x * moveScale);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(46)
					Float tmp15 = (_this1->y * moveScale);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(46)
					tmp13 = ::util::Vector_obj::__new(tmp14,tmp15);
				}
				HX_STACK_LINE(46)
				::util::Vector v = tmp13;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(46)
				Float tmp14 = (_this->x + v->x);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(46)
				Float tmp15 = (_this->y + v->y);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(46)
				tmp11 = ::util::Vector_obj::__new(tmp14,tmp15);
			}
			HX_STACK_LINE(45)
			this->ball = tmp11;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InputDemo_obj,tick,(void))

::control::Scene InputDemo_obj::render( Float delta){
	HX_STACK_FRAME("control.demo.InputDemo","render",0x65967d51,"control.demo.InputDemo.render","control/demo/InputDemo.hx",49,0xac0c7feb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(delta,"delta")
	HX_STACK_LINE(50)
	::control::Scene scene = ::control::Scene_obj::__new();		HX_STACK_VAR(scene,"scene");
	HX_STACK_LINE(53)
	::control::DrawPrim tmp = ::control::DrawPrim_obj::SetColor((int)0,(int)255,(int)0,(int)255);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	::util::Vector tmp1 = this->ball;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	::control::DrawPrim tmp2 = ::control::DrawPrim_obj::DrawCircle(tmp1,(int)50);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	::control::DrawPrim tmp3 = ::control::DrawPrim_obj::SetColor((int)255,(int)0,(int)0,(int)127);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	::util::Vector tmp4 = this->pos;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	::control::DrawPrim tmp5 = ::control::DrawPrim_obj::DrawCircle(tmp4,(int)50);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(52)
	Array< ::Dynamic > tmp6 = Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp2).Add(tmp3).Add(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(52)
	scene->prims = tmp6;
	HX_STACK_LINE(59)
	::control::Scene tmp7 = scene;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(59)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(InputDemo_obj,render,return )

Void InputDemo_obj::profiling( Dynamic d){
{
		HX_STACK_FRAME("control.demo.InputDemo","profiling",0x134c2b8b,"control.demo.InputDemo.profiling","control/demo/InputDemo.hx",62,0xac0c7feb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(d,"d")
		HX_STACK_LINE(63)
		::String tmp = d->__Field(HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("InputDemo.hx","\xb1","\xa6","\xdb","\x0c"),63,HX_HCSTRING("control.demo.InputDemo","\x13","\x5d","\xe2","\xaa"),HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		::haxe::Log_obj::trace(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InputDemo_obj,profiling,(void))

Void InputDemo_obj::handleKb( ::control::Key key,bool state){
{
		HX_STACK_FRAME("control.demo.InputDemo","handleKb",0xf875c61a,"control.demo.InputDemo.handleKb","control/demo/InputDemo.hx",67,0xac0c7feb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(67)
		switch( (int)(key->__Index())){
			case (int)0: {
				HX_STACK_LINE(67)
				::String tmp = (::control::Key(key))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(67)
				::String _char = tmp;		HX_STACK_VAR(_char,"char");
				HX_STACK_LINE(68)
				{
					HX_STACK_LINE(69)
					bool tmp1 = (_char == HX_HCSTRING("i","\x69","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(69)
					if ((tmp1)){
						HX_STACK_LINE(69)
						Dynamic tmp2 = this->movement;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(69)
						tmp2->__FieldRef(HX_HCSTRING("up","\x5b","\x66","\x00","\x00")) = state;
					}
					HX_STACK_LINE(70)
					bool tmp2 = (_char == HX_HCSTRING("j","\x6a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(70)
					if ((tmp2)){
						HX_STACK_LINE(70)
						Dynamic tmp3 = this->movement;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(70)
						tmp3->__FieldRef(HX_HCSTRING("left","\x07","\x08","\xb0","\x47")) = state;
					}
					HX_STACK_LINE(71)
					bool tmp3 = (_char == HX_HCSTRING("l","\x6c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(71)
					if ((tmp3)){
						HX_STACK_LINE(71)
						Dynamic tmp4 = this->movement;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(71)
						tmp4->__FieldRef(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9")) = state;
					}
					HX_STACK_LINE(72)
					bool tmp4 = (_char == HX_HCSTRING("k","\x6b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(72)
					if ((tmp4)){
						HX_STACK_LINE(72)
						Dynamic tmp5 = this->movement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(72)
						tmp5->__FieldRef(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42")) = state;
					}
					HX_STACK_LINE(73)
					bool tmp5 = (_char == HX_HCSTRING("q","\x71","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(73)
					if ((tmp5)){
						HX_STACK_LINE(73)
						this->exit = true;
					}
				}
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(InputDemo_obj,handleKb,(void))

Void InputDemo_obj::handle( ::control::Event e){
{
		HX_STACK_FRAME("control.demo.InputDemo","handle",0x186a95a3,"control.demo.InputDemo.handle","control/demo/InputDemo.hx",80,0xac0c7feb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(80)
		switch( (int)(e->__Index())){
			case (int)0: {
				HX_STACK_LINE(80)
				Float tmp = (::control::Event(e))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(80)
				Float y = tmp;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(80)
				Float tmp1 = (::control::Event(e))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(80)
				Float x = tmp1;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(82)
					::util::Vector tmp2 = this->pos;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(82)
					tmp2->x = x;
					HX_STACK_LINE(82)
					::util::Vector tmp3 = this->pos;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(82)
					tmp3->y = y;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(80)
				bool tmp = (::control::Event(e))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(80)
				bool state = tmp;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(80)
				::control::Key tmp1 = (::control::Event(e))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(80)
				::control::Key key = tmp1;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(84)
				{
					HX_STACK_LINE(85)
					::control::Key tmp2 = key;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(85)
					bool tmp3 = state;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(85)
					this->handleKb(tmp2,tmp3);
				}
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InputDemo_obj,handle,(void))

::control::demo::DemoSelect InputDemo_obj::conclude( ){
	HX_STACK_FRAME("control.demo.InputDemo","conclude",0x8d4baf66,"control.demo.InputDemo.conclude","control/demo/InputDemo.hx",90,0xac0c7feb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	bool tmp = this->exit;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	if ((tmp)){
		HX_STACK_LINE(91)
		return ::control::demo::DemoSelect_obj::HomeSelect;
	}
	HX_STACK_LINE(92)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputDemo_obj,conclude,return )


InputDemo_obj::InputDemo_obj()
{
}

void InputDemo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InputDemo);
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(ball,"ball");
	HX_MARK_MEMBER_NAME(movement,"movement");
	HX_MARK_MEMBER_NAME(exit,"exit");
	HX_MARK_END_CLASS();
}

void InputDemo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(ball,"ball");
	HX_VISIT_MEMBER_NAME(movement,"movement");
	HX_VISIT_MEMBER_NAME(exit,"exit");
}

Dynamic InputDemo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { return ball; }
		if (HX_FIELD_EQ(inName,"exit") ) { return exit; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"tick") ) { return tick_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"handle") ) { return handle_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"movement") ) { return movement; }
		if (HX_FIELD_EQ(inName,"handleKb") ) { return handleKb_dyn(); }
		if (HX_FIELD_EQ(inName,"conclude") ) { return conclude_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"profiling") ) { return profiling_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InputDemo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< ::util::Vector >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { ball=inValue.Cast< ::util::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exit") ) { exit=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"movement") ) { movement=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool InputDemo_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void InputDemo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("ball","\xff","\xe1","\x10","\x41"));
	outFields->push(HX_HCSTRING("movement","\x2f","\x85","\x37","\x00"));
	outFields->push(HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::util::Vector*/ ,(int)offsetof(InputDemo_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{hx::fsObject /*::util::Vector*/ ,(int)offsetof(InputDemo_obj,ball),HX_HCSTRING("ball","\xff","\xe1","\x10","\x41")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(InputDemo_obj,movement),HX_HCSTRING("movement","\x2f","\x85","\x37","\x00")},
	{hx::fsBool,(int)offsetof(InputDemo_obj,exit),HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("ball","\xff","\xe1","\x10","\x41"),
	HX_HCSTRING("movement","\x2f","\x85","\x37","\x00"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("tick","\x5d","\xc3","\xfc","\x4c"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("profiling","\xa6","\x0e","\x10","\x4f"),
	HX_HCSTRING("handleKb","\x5f","\xff","\x23","\xd5"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("conclude","\xab","\xe8","\xf9","\x69"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputDemo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputDemo_obj::__mClass,"__mClass");
};

#endif

hx::Class InputDemo_obj::__mClass;

void InputDemo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("control.demo.InputDemo","\x13","\x5d","\xe2","\xaa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &InputDemo_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InputDemo_obj >;
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

} // end namespace control
} // end namespace demo
