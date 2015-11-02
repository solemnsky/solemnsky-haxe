#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
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
#ifndef INCLUDED_kha_TargetRectangle
#include <kha/TargetRectangle.h>
#endif
#ifndef INCLUDED_kha__Color_Color_Impl_
#include <kha/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_math_FastMatrix3
#include <kha/math/FastMatrix3.h>
#endif
namespace kha{

Void Scaler_obj::__construct()
{
	return null();
}

//Scaler_obj::~Scaler_obj() { }

Dynamic Scaler_obj::__CreateEmpty() { return  new Scaler_obj; }
hx::ObjectPtr< Scaler_obj > Scaler_obj::__new()
{  hx::ObjectPtr< Scaler_obj > _result_ = new Scaler_obj();
	_result_->__construct();
	return _result_;}

Dynamic Scaler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scaler_obj > _result_ = new Scaler_obj();
	_result_->__construct();
	return _result_;}

::kha::TargetRectangle Scaler_obj::targetRect( int width,int height,int destinationWidth,int destinationHeight,::kha::ScreenRotation rotation){
	HX_STACK_FRAME("kha.Scaler","targetRect",0x3e938631,"kha.Scaler.targetRect","kha/Scaler.hx",32,0xe515f40b)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(destinationWidth,"destinationWidth")
	HX_STACK_ARG(destinationHeight,"destinationHeight")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_LINE(33)
	Float scalex;		HX_STACK_VAR(scalex,"scalex");
	HX_STACK_LINE(34)
	Float scaley;		HX_STACK_VAR(scaley,"scaley");
	HX_STACK_LINE(35)
	Float scalew;		HX_STACK_VAR(scalew,"scalew");
	HX_STACK_LINE(36)
	Float scaleh;		HX_STACK_VAR(scaleh,"scaleh");
	HX_STACK_LINE(37)
	Float scale;		HX_STACK_VAR(scale,"scale");
	HX_STACK_LINE(38)
	switch( (int)(rotation->__Index())){
		case (int)0: {
			HX_STACK_LINE(40)
			Float tmp = (Float(width) / Float(height));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(40)
			Float tmp1 = (Float(destinationWidth) / Float(destinationHeight));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(40)
			bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(40)
			if ((tmp2)){
				HX_STACK_LINE(41)
				Float tmp3 = (Float(destinationWidth) / Float(width));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(41)
				scale = tmp3;
				HX_STACK_LINE(42)
				Float tmp4 = (width * scale);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(42)
				scalew = tmp4;
				HX_STACK_LINE(43)
				Float tmp5 = (height * scale);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(43)
				scaleh = tmp5;
				HX_STACK_LINE(44)
				scalex = (int)0;
				HX_STACK_LINE(45)
				Float tmp6 = (destinationHeight - scaleh);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(45)
				Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(45)
				scaley = tmp7;
			}
			else{
				HX_STACK_LINE(48)
				Float tmp3 = (Float(destinationHeight) / Float(height));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(48)
				scale = tmp3;
				HX_STACK_LINE(49)
				Float tmp4 = (width * scale);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(49)
				scalew = tmp4;
				HX_STACK_LINE(50)
				Float tmp5 = (height * scale);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(50)
				scaleh = tmp5;
				HX_STACK_LINE(51)
				Float tmp6 = (destinationWidth - scalew);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(51)
				Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(51)
				scalex = tmp7;
				HX_STACK_LINE(52)
				scaley = (int)0;
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(55)
			Float tmp = (Float(width) / Float(height));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(55)
			Float tmp1 = (Float(destinationHeight) / Float(destinationWidth));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(55)
			bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(55)
			if ((tmp2)){
				HX_STACK_LINE(56)
				Float tmp3 = (Float(destinationHeight) / Float(width));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(56)
				scale = tmp3;
				HX_STACK_LINE(57)
				Float tmp4 = (width * scale);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(57)
				scalew = tmp4;
				HX_STACK_LINE(58)
				Float tmp5 = (height * scale);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(58)
				scaleh = tmp5;
				HX_STACK_LINE(59)
				Float tmp6 = (destinationWidth - scaleh);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(59)
				Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(59)
				Float tmp8 = scaleh;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(59)
				Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(59)
				scalex = tmp9;
				HX_STACK_LINE(60)
				scaley = (int)0;
			}
			else{
				HX_STACK_LINE(63)
				Float tmp3 = (Float(destinationWidth) / Float(height));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(63)
				scale = tmp3;
				HX_STACK_LINE(64)
				Float tmp4 = (width * scale);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(64)
				scalew = tmp4;
				HX_STACK_LINE(65)
				Float tmp5 = (height * scale);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(65)
				scaleh = tmp5;
				HX_STACK_LINE(66)
				Float tmp6 = scaleh;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(66)
				scalex = tmp6;
				HX_STACK_LINE(67)
				Float tmp7 = (destinationHeight - scalew);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(67)
				Float tmp8 = (tmp7 * ((Float)0.5));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(67)
				scaley = tmp8;
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(70)
			Float tmp = (Float(width) / Float(height));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(70)
			Float tmp1 = (Float(destinationWidth) / Float(destinationHeight));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(70)
			bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			if ((tmp2)){
				HX_STACK_LINE(71)
				Float tmp3 = (Float(destinationWidth) / Float(width));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(71)
				scale = tmp3;
				HX_STACK_LINE(72)
				Float tmp4 = (width * scale);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(72)
				scalew = tmp4;
				HX_STACK_LINE(73)
				Float tmp5 = (height * scale);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(73)
				scaleh = tmp5;
				HX_STACK_LINE(74)
				Float tmp6 = scalew;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(74)
				scalex = tmp6;
				HX_STACK_LINE(75)
				Float tmp7 = (destinationHeight - scaleh);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(75)
				Float tmp8 = (tmp7 * ((Float)0.5));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(75)
				Float tmp9 = scaleh;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(75)
				Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(75)
				scaley = tmp10;
			}
			else{
				HX_STACK_LINE(78)
				Float tmp3 = (Float(destinationHeight) / Float(height));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(78)
				scale = tmp3;
				HX_STACK_LINE(79)
				Float tmp4 = (width * scale);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(79)
				scalew = tmp4;
				HX_STACK_LINE(80)
				Float tmp5 = (height * scale);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(80)
				scaleh = tmp5;
				HX_STACK_LINE(81)
				Float tmp6 = (destinationWidth - scalew);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(81)
				Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(81)
				Float tmp8 = scalew;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(81)
				Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(81)
				scalex = tmp9;
				HX_STACK_LINE(82)
				Float tmp10 = scaleh;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(82)
				scaley = tmp10;
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(85)
			Float tmp = (Float(width) / Float(height));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(85)
			Float tmp1 = (Float(destinationHeight) / Float(destinationWidth));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(85)
			bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(85)
			if ((tmp2)){
				HX_STACK_LINE(86)
				Float tmp3 = (Float(destinationHeight) / Float(width));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(86)
				scale = tmp3;
				HX_STACK_LINE(87)
				Float tmp4 = (width * scale);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(87)
				scalew = tmp4;
				HX_STACK_LINE(88)
				Float tmp5 = (height * scale);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(88)
				scaleh = tmp5;
				HX_STACK_LINE(89)
				Float tmp6 = (destinationWidth - scaleh);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(89)
				Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(89)
				scalex = tmp7;
				HX_STACK_LINE(90)
				Float tmp8 = scalew;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(90)
				scaley = tmp8;
			}
			else{
				HX_STACK_LINE(93)
				Float tmp3 = (Float(destinationWidth) / Float(height));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(93)
				scale = tmp3;
				HX_STACK_LINE(94)
				Float tmp4 = (width * scale);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(94)
				scalew = tmp4;
				HX_STACK_LINE(95)
				Float tmp5 = (height * scale);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(95)
				scaleh = tmp5;
				HX_STACK_LINE(96)
				scalex = (int)0;
				HX_STACK_LINE(97)
				Float tmp6 = (destinationHeight - scalew);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(97)
				Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(97)
				Float tmp8 = scalew;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(97)
				Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(97)
				scaley = tmp9;
			}
		}
		;break;
	}
	HX_STACK_LINE(100)
	::kha::TargetRectangle tmp = ::kha::TargetRectangle_obj::__new(scalex,scaley,scalew,scaleh,scale,rotation);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Scaler_obj,targetRect,return )

int Scaler_obj::transformXDirectly( int x,int y,int sourceWidth,int sourceHeight,int destinationWidth,int destinationHeight,::kha::ScreenRotation rotation){
	HX_STACK_FRAME("kha.Scaler","transformXDirectly",0x52b2389e,"kha.Scaler.transformXDirectly","kha/Scaler.hx",103,0xe515f40b)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(sourceWidth,"sourceWidth")
	HX_STACK_ARG(sourceHeight,"sourceHeight")
	HX_STACK_ARG(destinationWidth,"destinationWidth")
	HX_STACK_ARG(destinationHeight,"destinationHeight")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_LINE(104)
	int tmp = sourceWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	int tmp1 = sourceHeight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	int tmp2 = destinationWidth;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(104)
	int tmp3 = destinationHeight;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(104)
	::kha::ScreenRotation tmp4 = rotation;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(104)
	::kha::TargetRectangle tmp5 = ::kha::Scaler_obj::targetRect(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(104)
	::kha::TargetRectangle targetRect = tmp5;		HX_STACK_VAR(targetRect,"targetRect");
	HX_STACK_LINE(105)
	::kha::ScreenRotation _g = targetRect->rotation;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(105)
	switch( (int)(_g->__Index())){
		case (int)0: {
			HX_STACK_LINE(107)
			Float tmp6 = (x - targetRect->x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(107)
			Float tmp7 = targetRect->scaleFactor;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(107)
			Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(107)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(107)
			return tmp9;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(109)
			Float tmp6 = (y - targetRect->y);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(109)
			Float tmp7 = targetRect->scaleFactor;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(109)
			Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(109)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(109)
			return tmp9;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(111)
			Float tmp6 = (targetRect->x - x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(111)
			Float tmp7 = targetRect->scaleFactor;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(111)
			Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(111)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(111)
			return tmp9;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(113)
			Float tmp6 = (targetRect->y - y);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(113)
			Float tmp7 = targetRect->scaleFactor;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(113)
			Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(113)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(113)
			return tmp9;
		}
		;break;
	}
	HX_STACK_LINE(105)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Scaler_obj,transformXDirectly,return )

int Scaler_obj::transformX( int x,int y,::kha::Image source,::kha::Canvas destination,::kha::ScreenRotation rotation){
	HX_STACK_FRAME("kha.Scaler","transformX",0x33f02e88,"kha.Scaler.transformX","kha/Scaler.hx",126,0xe515f40b)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(destination,"destination")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_LINE(127)
	int tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	int tmp2 = source->get_width();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(127)
	int tmp3 = source->get_height();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(127)
	int tmp4 = destination->get_width();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(127)
	int tmp5 = destination->get_height();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(127)
	::kha::ScreenRotation tmp6 = rotation;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(127)
	int tmp7 = ::kha::Scaler_obj::transformXDirectly(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(127)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Scaler_obj,transformX,return )

int Scaler_obj::transformYDirectly( int x,int y,int sourceWidth,int sourceHeight,int destinationWidth,int destinationHeight,::kha::ScreenRotation rotation){
	HX_STACK_FRAME("kha.Scaler","transformYDirectly",0x25a3a19f,"kha.Scaler.transformYDirectly","kha/Scaler.hx",130,0xe515f40b)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(sourceWidth,"sourceWidth")
	HX_STACK_ARG(sourceHeight,"sourceHeight")
	HX_STACK_ARG(destinationWidth,"destinationWidth")
	HX_STACK_ARG(destinationHeight,"destinationHeight")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_LINE(131)
	int tmp = sourceWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	int tmp1 = sourceHeight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(131)
	int tmp2 = destinationWidth;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(131)
	int tmp3 = destinationHeight;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(131)
	::kha::ScreenRotation tmp4 = rotation;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(131)
	::kha::TargetRectangle tmp5 = ::kha::Scaler_obj::targetRect(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(131)
	::kha::TargetRectangle targetRect = tmp5;		HX_STACK_VAR(targetRect,"targetRect");
	HX_STACK_LINE(132)
	::kha::ScreenRotation _g = targetRect->rotation;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(132)
	switch( (int)(_g->__Index())){
		case (int)0: {
			HX_STACK_LINE(134)
			Float tmp6 = (y - targetRect->y);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(134)
			Float tmp7 = targetRect->scaleFactor;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(134)
			Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(134)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(134)
			return tmp9;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(136)
			Float tmp6 = (targetRect->x - x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(136)
			Float tmp7 = targetRect->scaleFactor;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(136)
			Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(136)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(136)
			return tmp9;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(138)
			Float tmp6 = (targetRect->y - y);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(138)
			Float tmp7 = targetRect->scaleFactor;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(138)
			Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(138)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(138)
			return tmp9;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(140)
			Float tmp6 = (x - targetRect->x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(140)
			Float tmp7 = targetRect->scaleFactor;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(140)
			Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(140)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(140)
			return tmp9;
		}
		;break;
	}
	HX_STACK_LINE(132)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Scaler_obj,transformYDirectly,return )

int Scaler_obj::transformY( int x,int y,::kha::Image source,::kha::Canvas destination,::kha::ScreenRotation rotation){
	HX_STACK_FRAME("kha.Scaler","transformY",0x33f02e89,"kha.Scaler.transformY","kha/Scaler.hx",153,0xe515f40b)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(destination,"destination")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_LINE(154)
	int tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	int tmp2 = source->get_width();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	int tmp3 = source->get_height();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(154)
	int tmp4 = destination->get_width();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(154)
	int tmp5 = destination->get_height();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(154)
	::kha::ScreenRotation tmp6 = rotation;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(154)
	int tmp7 = ::kha::Scaler_obj::transformYDirectly(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(154)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Scaler_obj,transformY,return )

Void Scaler_obj::scale( ::kha::Image source,::kha::Canvas destination,::kha::ScreenRotation rotation){
{
		HX_STACK_FRAME("kha.Scaler","scale",0x077046ee,"kha.Scaler.scale","kha/Scaler.hx",157,0xe515f40b)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(destination,"destination")
		HX_STACK_ARG(rotation,"rotation")
		HX_STACK_LINE(158)
		::kha::graphics2::Graphics tmp = destination->get_g2();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(158)
		::kha::graphics2::Graphics g = tmp;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(159)
		{
			HX_STACK_LINE(159)
			int tmp1 = source->get_width();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(159)
			int tmp2 = source->get_height();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(159)
			int tmp3 = destination->get_width();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(159)
			int tmp4 = destination->get_height();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(159)
			::kha::ScreenRotation tmp5 = rotation;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(159)
			::kha::math::FastMatrix3 tmp6 = ::kha::Scaler_obj::getScaledTransformation(tmp1,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(159)
			::kha::math::FastMatrix3 transformation = tmp6;		HX_STACK_VAR(transformation,"transformation");
			HX_STACK_LINE(159)
			::kha::math::FastMatrix3 tmp7 = transformation;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(159)
			g->setTransformation(tmp7);
			HX_STACK_LINE(159)
			Array< ::Dynamic > tmp8 = g->transformations;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(159)
			int tmp9 = g->transformations->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(159)
			int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(159)
			::kha::math::FastMatrix3 tmp11 = transformation;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(159)
			tmp8[tmp10] = tmp11;
		}
		HX_STACK_LINE(160)
		int tmp1 = ::kha::_Color::Color_Impl__obj::White;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(160)
		g->set_color(tmp1);
		HX_STACK_LINE(161)
		g->set_opacity((int)1);
		HX_STACK_LINE(162)
		::kha::Image tmp2 = source;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		g->drawImage(tmp2,(int)0,(int)0);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Scaler_obj,scale,(void))

::kha::math::FastMatrix3 Scaler_obj::getScaledTransformation( int width,int height,int destinationWidth,int destinationHeight,::kha::ScreenRotation rotation){
	HX_STACK_FRAME("kha.Scaler","getScaledTransformation",0xc8b2331d,"kha.Scaler.getScaledTransformation","kha/Scaler.hx",165,0xe515f40b)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(destinationWidth,"destinationWidth")
	HX_STACK_ARG(destinationHeight,"destinationHeight")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_LINE(166)
	int tmp = width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(166)
	int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(166)
	int tmp2 = destinationWidth;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	int tmp3 = destinationHeight;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(166)
	::kha::ScreenRotation tmp4 = rotation;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(166)
	::kha::TargetRectangle tmp5 = ::kha::Scaler_obj::targetRect(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(166)
	::kha::TargetRectangle rect = tmp5;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(167)
	Float sf = rect->scaleFactor;		HX_STACK_VAR(sf,"sf");
	HX_STACK_LINE(168)
	::kha::math::FastMatrix3 transformation = ::kha::math::FastMatrix3_obj::__new(sf,(int)0,rect->x,(int)0,sf,rect->y,(int)0,(int)0,(int)1);		HX_STACK_VAR(transformation,"transformation");
	HX_STACK_LINE(171)
	switch( (int)(rotation->__Index())){
		case (int)0: {
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(174)
			::kha::math::FastMatrix3 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(174)
			{
				HX_STACK_LINE(174)
				::kha::math::FastMatrix3 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(174)
				{
					HX_STACK_LINE(174)
					Float tmp8 = ::Math_obj::PI;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(174)
					Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(174)
					::cpp::Float32 alpha = tmp9;		HX_STACK_VAR(alpha,"alpha");
					HX_STACK_LINE(174)
					::cpp::Float32 tmp10 = alpha;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(174)
					Float tmp11 = ::Math_obj::cos(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(174)
					::cpp::Float32 tmp12 = alpha;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(174)
					Float tmp13 = ::Math_obj::sin(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(174)
					Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(174)
					::cpp::Float32 tmp15 = alpha;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(174)
					Float tmp16 = ::Math_obj::sin(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(174)
					::cpp::Float32 tmp17 = alpha;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(174)
					Float tmp18 = ::Math_obj::cos(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(174)
					tmp7 = ::kha::math::FastMatrix3_obj::__new(tmp11,tmp14,(int)0,tmp16,tmp18,(int)0,(int)0,(int)0,(int)1);
				}
				HX_STACK_LINE(174)
				::kha::math::FastMatrix3 m = tmp7;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp8 = (transformation->_00 * m->_00);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp9 = (transformation->_10 * m->_01);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp11 = (transformation->_20 * m->_02);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp13 = (transformation->_00 * m->_10);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp14 = (transformation->_10 * m->_11);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp16 = (transformation->_20 * m->_12);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp18 = (transformation->_00 * m->_20);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp19 = (transformation->_10 * m->_21);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp21 = (transformation->_20 * m->_22);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp23 = (transformation->_01 * m->_00);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp24 = (transformation->_11 * m->_01);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp26 = (transformation->_21 * m->_02);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp28 = (transformation->_01 * m->_10);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp29 = (transformation->_11 * m->_11);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp31 = (transformation->_21 * m->_12);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp33 = (transformation->_01 * m->_20);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp34 = (transformation->_11 * m->_21);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp36 = (transformation->_21 * m->_22);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp38 = (transformation->_02 * m->_00);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp39 = (transformation->_12 * m->_01);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp41 = (transformation->_22 * m->_02);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp43 = (transformation->_02 * m->_10);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp44 = (transformation->_12 * m->_11);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp46 = (transformation->_22 * m->_12);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp48 = (transformation->_02 * m->_20);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp49 = (transformation->_12 * m->_21);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp51 = (transformation->_22 * m->_22);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(174)
				::cpp::Float32 tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(174)
				tmp6 = ::kha::math::FastMatrix3_obj::__new(tmp12,tmp17,tmp22,tmp27,tmp32,tmp37,tmp42,tmp47,tmp52);
			}
			HX_STACK_LINE(174)
			transformation = tmp6;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(176)
			::kha::math::FastMatrix3 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(176)
			{
				HX_STACK_LINE(176)
				::kha::math::FastMatrix3 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					Float tmp8 = ::Math_obj::PI;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(176)
					::cpp::Float32 alpha = tmp8;		HX_STACK_VAR(alpha,"alpha");
					HX_STACK_LINE(176)
					::cpp::Float32 tmp9 = alpha;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(176)
					Float tmp10 = ::Math_obj::cos(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(176)
					::cpp::Float32 tmp11 = alpha;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(176)
					Float tmp12 = ::Math_obj::sin(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(176)
					Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(176)
					::cpp::Float32 tmp14 = alpha;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(176)
					Float tmp15 = ::Math_obj::sin(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(176)
					::cpp::Float32 tmp16 = alpha;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(176)
					Float tmp17 = ::Math_obj::cos(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(176)
					tmp7 = ::kha::math::FastMatrix3_obj::__new(tmp10,tmp13,(int)0,tmp15,tmp17,(int)0,(int)0,(int)0,(int)1);
				}
				HX_STACK_LINE(176)
				::kha::math::FastMatrix3 m = tmp7;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp8 = (transformation->_00 * m->_00);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp9 = (transformation->_10 * m->_01);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp11 = (transformation->_20 * m->_02);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp13 = (transformation->_00 * m->_10);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp14 = (transformation->_10 * m->_11);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp16 = (transformation->_20 * m->_12);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp18 = (transformation->_00 * m->_20);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp19 = (transformation->_10 * m->_21);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp21 = (transformation->_20 * m->_22);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp23 = (transformation->_01 * m->_00);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp24 = (transformation->_11 * m->_01);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp26 = (transformation->_21 * m->_02);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp28 = (transformation->_01 * m->_10);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp29 = (transformation->_11 * m->_11);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp31 = (transformation->_21 * m->_12);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp33 = (transformation->_01 * m->_20);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp34 = (transformation->_11 * m->_21);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp36 = (transformation->_21 * m->_22);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp38 = (transformation->_02 * m->_00);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp39 = (transformation->_12 * m->_01);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp41 = (transformation->_22 * m->_02);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp43 = (transformation->_02 * m->_10);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp44 = (transformation->_12 * m->_11);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp46 = (transformation->_22 * m->_12);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp48 = (transformation->_02 * m->_20);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp49 = (transformation->_12 * m->_21);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp51 = (transformation->_22 * m->_22);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(176)
				::cpp::Float32 tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(176)
				tmp6 = ::kha::math::FastMatrix3_obj::__new(tmp12,tmp17,tmp22,tmp27,tmp32,tmp37,tmp42,tmp47,tmp52);
			}
			HX_STACK_LINE(176)
			transformation = tmp6;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(178)
			::kha::math::FastMatrix3 tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(178)
			{
				HX_STACK_LINE(178)
				::kha::math::FastMatrix3 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(178)
				{
					HX_STACK_LINE(178)
					Float tmp8 = ::Math_obj::PI;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(178)
					Float tmp9 = (tmp8 * (int)3);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(178)
					Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(178)
					::cpp::Float32 alpha = tmp10;		HX_STACK_VAR(alpha,"alpha");
					HX_STACK_LINE(178)
					::cpp::Float32 tmp11 = alpha;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(178)
					Float tmp12 = ::Math_obj::cos(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(178)
					::cpp::Float32 tmp13 = alpha;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(178)
					Float tmp14 = ::Math_obj::sin(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(178)
					Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(178)
					::cpp::Float32 tmp16 = alpha;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(178)
					Float tmp17 = ::Math_obj::sin(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(178)
					::cpp::Float32 tmp18 = alpha;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(178)
					Float tmp19 = ::Math_obj::cos(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(178)
					tmp7 = ::kha::math::FastMatrix3_obj::__new(tmp12,tmp15,(int)0,tmp17,tmp19,(int)0,(int)0,(int)0,(int)1);
				}
				HX_STACK_LINE(178)
				::kha::math::FastMatrix3 m = tmp7;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp8 = (transformation->_00 * m->_00);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp9 = (transformation->_10 * m->_01);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp11 = (transformation->_20 * m->_02);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp13 = (transformation->_00 * m->_10);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp14 = (transformation->_10 * m->_11);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp16 = (transformation->_20 * m->_12);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp18 = (transformation->_00 * m->_20);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp19 = (transformation->_10 * m->_21);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp21 = (transformation->_20 * m->_22);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp23 = (transformation->_01 * m->_00);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp24 = (transformation->_11 * m->_01);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp26 = (transformation->_21 * m->_02);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp28 = (transformation->_01 * m->_10);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp29 = (transformation->_11 * m->_11);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp31 = (transformation->_21 * m->_12);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp33 = (transformation->_01 * m->_20);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp34 = (transformation->_11 * m->_21);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp36 = (transformation->_21 * m->_22);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp38 = (transformation->_02 * m->_00);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp39 = (transformation->_12 * m->_01);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp41 = (transformation->_22 * m->_02);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp43 = (transformation->_02 * m->_10);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp44 = (transformation->_12 * m->_11);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp46 = (transformation->_22 * m->_12);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp48 = (transformation->_02 * m->_20);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp49 = (transformation->_12 * m->_21);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp51 = (transformation->_22 * m->_22);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(178)
				::cpp::Float32 tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(178)
				tmp6 = ::kha::math::FastMatrix3_obj::__new(tmp12,tmp17,tmp22,tmp27,tmp32,tmp37,tmp42,tmp47,tmp52);
			}
			HX_STACK_LINE(178)
			transformation = tmp6;
		}
		;break;
	}
	HX_STACK_LINE(180)
	::kha::math::FastMatrix3 tmp6 = transformation;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(180)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Scaler_obj,getScaledTransformation,return )


Scaler_obj::Scaler_obj()
{
}

bool Scaler_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { outValue = scale_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"targetRect") ) { outValue = targetRect_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"transformX") ) { outValue = transformX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"transformY") ) { outValue = transformY_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"transformXDirectly") ) { outValue = transformXDirectly_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"transformYDirectly") ) { outValue = transformYDirectly_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getScaledTransformation") ) { outValue = getScaledTransformation_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scaler_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scaler_obj::__mClass,"__mClass");
};

#endif

hx::Class Scaler_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("targetRect","\x15","\xe9","\xd7","\xa5"),
	HX_HCSTRING("transformXDirectly","\x82","\x1f","\x2a","\xe7"),
	HX_HCSTRING("transformX","\x6c","\x91","\x34","\x9b"),
	HX_HCSTRING("transformYDirectly","\x83","\x88","\x1b","\xba"),
	HX_HCSTRING("transformY","\x6d","\x91","\x34","\x9b"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("getScaledTransformation","\xb9","\xd1","\x36","\xe3"),
	::String(null()) };

void Scaler_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Scaler","\xd2","\xb5","\xe5","\xa6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Scaler_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Scaler_obj >;
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
