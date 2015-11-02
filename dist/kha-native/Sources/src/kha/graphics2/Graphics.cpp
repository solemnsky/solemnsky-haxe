#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Font
#include <kha/Font.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Video
#include <kha/Video.h>
#endif
#ifndef INCLUDED_kha__Color_Color_Impl_
#include <kha/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_BlendingOperation
#include <kha/graphics4/BlendingOperation.h>
#endif
#ifndef INCLUDED_kha_graphics4_Program
#include <kha/graphics4/Program.h>
#endif
#ifndef INCLUDED_kha_math_FastMatrix3
#include <kha/math/FastMatrix3.h>
#endif
namespace kha{
namespace graphics2{

Void Graphics_obj::__construct()
{
HX_STACK_FRAME("kha.graphics2.Graphics","new",0xbe5bae2e,"kha.graphics2.Graphics.new","kha/graphics2/Graphics.hx",150,0x8ef16900)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(151)
	Array< ::Dynamic > tmp = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	this->transformations = tmp;
	HX_STACK_LINE(152)
	Array< ::Dynamic > tmp1 = this->transformations;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	::kha::math::FastMatrix3 tmp2 = ::kha::math::FastMatrix3_obj::__new((int)1,(int)0,(int)0,(int)0,(int)1,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(152)
	tmp1->push(tmp2);
	HX_STACK_LINE(153)
	Array< Float > tmp3 = Array_obj< Float >::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(153)
	this->opacities = tmp3;
	HX_STACK_LINE(154)
	Array< Float > tmp4 = this->opacities;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(154)
	tmp4->push((int)1);
	HX_STACK_LINE(156)
	this->prog = null();
}
;
	return null();
}

//Graphics_obj::~Graphics_obj() { }

Dynamic Graphics_obj::__CreateEmpty() { return  new Graphics_obj; }
hx::ObjectPtr< Graphics_obj > Graphics_obj::__new()
{  hx::ObjectPtr< Graphics_obj > _result_ = new Graphics_obj();
	_result_->__construct();
	return _result_;}

Dynamic Graphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphics_obj > _result_ = new Graphics_obj();
	_result_->__construct();
	return _result_;}

Void Graphics_obj::begin( hx::Null< bool >  __o_clear,Dynamic clearColor){
bool clear = __o_clear.Default(true);
	HX_STACK_FRAME("kha.graphics2.Graphics","begin",0xe66b5777,"kha.graphics2.Graphics.begin","kha/graphics2/Graphics.hx",12,0x8ef16900)
	HX_STACK_THIS(this)
	HX_STACK_ARG(clear,"clear")
	HX_STACK_ARG(clearColor,"clearColor")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,begin,(void))

Void Graphics_obj::end( ){
{
		HX_STACK_FRAME("kha.graphics2.Graphics","end",0xbe54e1a9,"kha.graphics2.Graphics.end","kha/graphics2/Graphics.hx",13,0x8ef16900)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,end,(void))

Void Graphics_obj::flush( ){
{
		HX_STACK_FRAME("kha.graphics2.Graphics","flush",0x38b0d012,"kha.graphics2.Graphics.flush","kha/graphics2/Graphics.hx",14,0x8ef16900)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,flush,(void))

Void Graphics_obj::clear( Dynamic color){
{
		HX_STACK_FRAME("kha.graphics2.Graphics","clear",0x7e70dedb,"kha.graphics2.Graphics.clear","kha/graphics2/Graphics.hx",19,0x8ef16900)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,clear,(void))

Void Graphics_obj::drawImage( ::kha::Image img,::cpp::Float32 x,::cpp::Float32 y){
{
		HX_STACK_FRAME("kha.graphics2.Graphics","drawImage",0x80858105,"kha.graphics2.Graphics.drawImage","kha/graphics2/Graphics.hx",20,0x8ef16900)
		HX_STACK_THIS(this)
		HX_STACK_ARG(img,"img")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(21)
		::kha::Image tmp = img;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		::cpp::Float32 tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		::cpp::Float32 tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(21)
		int tmp3 = img->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(21)
		int tmp4 = img->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(21)
		this->drawSubImage(tmp,tmp1,tmp2,(int)0,(int)0,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawImage,(void))

Void Graphics_obj::drawSubImage( ::kha::Image img,::cpp::Float32 x,::cpp::Float32 y,::cpp::Float32 sx,::cpp::Float32 sy,::cpp::Float32 sw,::cpp::Float32 sh){
{
		HX_STACK_FRAME("kha.graphics2.Graphics","drawSubImage",0xd6fcfa51,"kha.graphics2.Graphics.drawSubImage","kha/graphics2/Graphics.hx",23,0x8ef16900)
		HX_STACK_THIS(this)
		HX_STACK_ARG(img,"img")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(sx,"sx")
		HX_STACK_ARG(sy,"sy")
		HX_STACK_ARG(sw,"sw")
		HX_STACK_ARG(sh,"sh")
		HX_STACK_LINE(24)
		::kha::Image tmp = img;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		::cpp::Float32 tmp1 = sx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		::cpp::Float32 tmp2 = sy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		::cpp::Float32 tmp3 = sw;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(24)
		::cpp::Float32 tmp4 = sh;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(24)
		::cpp::Float32 tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(24)
		::cpp::Float32 tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(24)
		::cpp::Float32 tmp7 = sw;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(24)
		::cpp::Float32 tmp8 = sh;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(24)
		this->drawScaledSubImage(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(Graphics_obj,drawSubImage,(void))

Void Graphics_obj::drawScaledImage( ::kha::Image img,::cpp::Float32 dx,::cpp::Float32 dy,::cpp::Float32 dw,::cpp::Float32 dh){
{
		HX_STACK_FRAME("kha.graphics2.Graphics","drawScaledImage",0x4311f38b,"kha.graphics2.Graphics.drawScaledImage","kha/graphics2/Graphics.hx",26,0x8ef16900)
		HX_STACK_THIS(this)
		HX_STACK_ARG(img,"img")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(dw,"dw")
		HX_STACK_ARG(dh,"dh")
		HX_STACK_LINE(27)
		::kha::Image tmp = img;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		int tmp1 = img->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		int tmp2 = img->get_height();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		::cpp::Float32 tmp3 = dx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		::cpp::Float32 tmp4 = dy;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		::cpp::Float32 tmp5 = dw;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		::cpp::Float32 tmp6 = dh;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(27)
		this->drawScaledSubImage(tmp,(int)0,(int)0,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,drawScaledImage,(void))

Void Graphics_obj::drawScaledSubImage( ::kha::Image image,::cpp::Float32 sx,::cpp::Float32 sy,::cpp::Float32 sw,::cpp::Float32 sh,::cpp::Float32 dx,::cpp::Float32 dy,::cpp::Float32 dw,::cpp::Float32 dh){
{
		HX_STACK_FRAME("kha.graphics2.Graphics","drawScaledSubImage",0xe6d65f8b,"kha.graphics2.Graphics.drawScaledSubImage","kha/graphics2/Graphics.hx",29,0x8ef16900)
		HX_STACK_THIS(this)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sx,"sx")
		HX_STACK_ARG(sy,"sy")
		HX_STACK_ARG(sw,"sw")
		HX_STACK_ARG(sh,"sh")
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_ARG(dw,"dw")
		HX_STACK_ARG(dh,"dh")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(Graphics_obj,drawScaledSubImage,(void))

Void Graphics_obj::drawRect( Float x,Float y,Float width,Float height,hx::Null< Float >  __o_strength){
Float strength = __o_strength.Default(((Float)1.0));
	HX_STACK_FRAME("kha.graphics2.Graphics","drawRect",0xa4ec4eba,"kha.graphics2.Graphics.drawRect","kha/graphics2/Graphics.hx",30,0x8ef16900)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(strength,"strength")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,drawRect,(void))

Void Graphics_obj::fillRect( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("kha.graphics2.Graphics","fillRect",0xb1949cb9,"kha.graphics2.Graphics.fillRect","kha/graphics2/Graphics.hx",31,0x8ef16900)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,fillRect,(void))

Void Graphics_obj::drawString( ::String text,Float x,Float y){
{
		HX_STACK_FRAME("kha.graphics2.Graphics","drawString",0x06e93be7,"kha.graphics2.Graphics.drawString","kha/graphics2/Graphics.hx",32,0x8ef16900)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawString,(void))

Void Graphics_obj::drawLine( Float x1,Float y1,Float x2,Float y2,hx::Null< Float >  __o_strength){
Float strength = __o_strength.Default(((Float)1.0));
	HX_STACK_FRAME("kha.graphics2.Graphics","drawLine",0xa0f8198a,"kha.graphics2.Graphics.drawLine","kha/graphics2/Graphics.hx",33,0x8ef16900)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(strength,"strength")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,drawLine,(void))

Void Graphics_obj::drawVideo( ::kha::Video video,Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("kha.graphics2.Graphics","drawVideo",0xfa187625,"kha.graphics2.Graphics.drawVideo","kha/graphics2/Graphics.hx",34,0x8ef16900)
		HX_STACK_THIS(this)
		HX_STACK_ARG(video,"video")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,drawVideo,(void))

Void Graphics_obj::fillTriangle( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
{
		HX_STACK_FRAME("kha.graphics2.Graphics","fillTriangle",0x60bafcdd,"kha.graphics2.Graphics.fillTriangle","kha/graphics2/Graphics.hx",35,0x8ef16900)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_ARG(x2,"x2")
		HX_STACK_ARG(y2,"y2")
		HX_STACK_ARG(x3,"x3")
		HX_STACK_ARG(y3,"y3")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,fillTriangle,(void))

int Graphics_obj::get_color( ){
	HX_STACK_FRAME("kha.graphics2.Graphics","get_color",0x8916fa08,"kha.graphics2.Graphics.get_color","kha/graphics2/Graphics.hx",44,0x8ef16900)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	int tmp = ::kha::_Color::Color_Impl__obj::Black;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,get_color,return )

int Graphics_obj::set_color( int color){
	HX_STACK_FRAME("kha.graphics2.Graphics","set_color",0x6c67e614,"kha.graphics2.Graphics.set_color","kha/graphics2/Graphics.hx",48,0x8ef16900)
	HX_STACK_THIS(this)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(49)
	int tmp = ::kha::_Color::Color_Impl__obj::Black;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,set_color,return )

::kha::Font Graphics_obj::get_font( ){
	HX_STACK_FRAME("kha.graphics2.Graphics","get_font",0x085670ca,"kha.graphics2.Graphics.get_font","kha/graphics2/Graphics.hx",53,0x8ef16900)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,get_font,return )

::kha::Font Graphics_obj::set_font( ::kha::Font font){
	HX_STACK_FRAME("kha.graphics2.Graphics","set_font",0xb6b3ca3e,"kha.graphics2.Graphics.set_font","kha/graphics2/Graphics.hx",57,0x8ef16900)
	HX_STACK_THIS(this)
	HX_STACK_ARG(font,"font")
	HX_STACK_LINE(57)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,set_font,return )

Void Graphics_obj::pushTransformation( ::kha::math::FastMatrix3 transformation){
{
		HX_STACK_FRAME("kha.graphics2.Graphics","pushTransformation",0x98a20735,"kha.graphics2.Graphics.pushTransformation","kha/graphics2/Graphics.hx",62,0x8ef16900)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformation,"transformation")
		HX_STACK_LINE(63)
		::kha::math::FastMatrix3 tmp = transformation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		this->setTransformation(tmp);
		HX_STACK_LINE(64)
		Array< ::Dynamic > tmp1 = this->transformations;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		::kha::math::FastMatrix3 tmp2 = transformation;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		tmp1->push(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,pushTransformation,(void))

::kha::math::FastMatrix3 Graphics_obj::popTransformation( ){
	HX_STACK_FRAME("kha.graphics2.Graphics","popTransformation",0x42d41588,"kha.graphics2.Graphics.popTransformation","kha/graphics2/Graphics.hx",67,0x8ef16900)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	Array< ::Dynamic > tmp = this->transformations;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	::kha::math::FastMatrix3 tmp1 = tmp->pop().StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	::kha::math::FastMatrix3 ret = tmp1;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(69)
	Array< ::Dynamic > tmp2 = this->transformations;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	Array< ::Dynamic > tmp3 = this->transformations;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(69)
	int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(69)
	int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(69)
	::kha::math::FastMatrix3 tmp6 = tmp2->__get(tmp5).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(69)
	this->setTransformation(tmp6);
	HX_STACK_LINE(70)
	::kha::math::FastMatrix3 tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(70)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,popTransformation,return )

::kha::math::FastMatrix3 Graphics_obj::get_transformation( ){
	HX_STACK_FRAME("kha.graphics2.Graphics","get_transformation",0xa3e37884,"kha.graphics2.Graphics.get_transformation","kha/graphics2/Graphics.hx",73,0x8ef16900)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	Array< ::Dynamic > tmp = this->transformations;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	Array< ::Dynamic > tmp1 = this->transformations;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	int tmp2 = tmp1->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(74)
	::kha::math::FastMatrix3 tmp4 = tmp->__get(tmp3).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(74)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,get_transformation,return )

::kha::math::FastMatrix3 Graphics_obj::set_transformation( ::kha::math::FastMatrix3 transformation){
	HX_STACK_FRAME("kha.graphics2.Graphics","set_transformation",0x8092aaf8,"kha.graphics2.Graphics.set_transformation","kha/graphics2/Graphics.hx",77,0x8ef16900)
	HX_STACK_THIS(this)
	HX_STACK_ARG(transformation,"transformation")
	HX_STACK_LINE(78)
	::kha::math::FastMatrix3 tmp = transformation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	this->setTransformation(tmp);
	HX_STACK_LINE(79)
	Array< ::Dynamic > tmp1 = this->transformations;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	Array< ::Dynamic > tmp2 = this->transformations;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	int tmp3 = tmp2->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(79)
	int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(79)
	::kha::math::FastMatrix3 tmp5 = transformation;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(79)
	::kha::math::FastMatrix3 tmp6 = tmp1[tmp4] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(79)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,set_transformation,return )

::kha::math::FastMatrix3 Graphics_obj::translation( ::cpp::Float32 tx,::cpp::Float32 ty){
	HX_STACK_FRAME("kha.graphics2.Graphics","translation",0x4d918cbf,"kha.graphics2.Graphics.translation","kha/graphics2/Graphics.hx",82,0x8ef16900)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
	HX_STACK_LINE(83)
	::kha::math::FastMatrix3 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		::cpp::Float32 _this__00 = (int)1;		HX_STACK_VAR(_this__00,"_this__00");
		HX_STACK_LINE(83)
		::cpp::Float32 _this__10 = (int)0;		HX_STACK_VAR(_this__10,"_this__10");
		HX_STACK_LINE(83)
		::cpp::Float32 _this__20 = tx;		HX_STACK_VAR(_this__20,"_this__20");
		HX_STACK_LINE(83)
		::cpp::Float32 _this__01 = (int)0;		HX_STACK_VAR(_this__01,"_this__01");
		HX_STACK_LINE(83)
		::cpp::Float32 _this__11 = (int)1;		HX_STACK_VAR(_this__11,"_this__11");
		HX_STACK_LINE(83)
		::cpp::Float32 _this__21 = ty;		HX_STACK_VAR(_this__21,"_this__21");
		HX_STACK_LINE(83)
		::cpp::Float32 _this__02 = (int)0;		HX_STACK_VAR(_this__02,"_this__02");
		HX_STACK_LINE(83)
		::cpp::Float32 _this__12 = (int)0;		HX_STACK_VAR(_this__12,"_this__12");
		HX_STACK_LINE(83)
		::cpp::Float32 _this__22 = (int)1;		HX_STACK_VAR(_this__22,"_this__22");
		HX_STACK_LINE(83)
		Array< ::Dynamic > tmp1 = this->transformations;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		Array< ::Dynamic > tmp2 = this->transformations;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		int tmp3 = tmp2->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		::kha::math::FastMatrix3 tmp5 = tmp1->__get(tmp4).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		::kha::math::FastMatrix3 m = tmp5;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp6 = (_this__00 * m->_00);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp7 = (_this__10 * m->_01);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp9 = (_this__20 * m->_02);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp11 = (_this__00 * m->_10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp12 = (_this__10 * m->_11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp14 = (_this__20 * m->_12);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp16 = (_this__00 * m->_20);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp17 = (_this__10 * m->_21);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp19 = (_this__20 * m->_22);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp21 = (_this__01 * m->_00);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp22 = (_this__11 * m->_01);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp24 = (_this__21 * m->_02);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp26 = (_this__01 * m->_10);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp27 = (_this__11 * m->_11);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp29 = (_this__21 * m->_12);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp31 = (_this__01 * m->_20);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp32 = (_this__11 * m->_21);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp34 = (_this__21 * m->_22);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp36 = (_this__02 * m->_00);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp37 = (_this__12 * m->_01);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp39 = (_this__22 * m->_02);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp41 = (_this__02 * m->_10);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp42 = (_this__12 * m->_11);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp44 = (_this__22 * m->_12);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp46 = (_this__02 * m->_20);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp47 = (_this__12 * m->_21);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp49 = (_this__22 * m->_22);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(83)
		::cpp::Float32 tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(83)
		tmp = ::kha::math::FastMatrix3_obj::__new(tmp10,tmp15,tmp20,tmp25,tmp30,tmp35,tmp40,tmp45,tmp50);
	}
	HX_STACK_LINE(83)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,translation,return )

Void Graphics_obj::translate( ::cpp::Float32 tx,::cpp::Float32 ty){
{
		HX_STACK_FRAME("kha.graphics2.Graphics","translate",0x4491039c,"kha.graphics2.Graphics.translate","kha/graphics2/Graphics.hx",87,0x8ef16900)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tx,"tx")
		HX_STACK_ARG(ty,"ty")
		HX_STACK_LINE(87)
		::kha::math::FastMatrix3 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			::cpp::Float32 _this__00 = (int)1;		HX_STACK_VAR(_this__00,"_this__00");
			HX_STACK_LINE(87)
			::cpp::Float32 _this__10 = (int)0;		HX_STACK_VAR(_this__10,"_this__10");
			HX_STACK_LINE(87)
			::cpp::Float32 _this__20 = tx;		HX_STACK_VAR(_this__20,"_this__20");
			HX_STACK_LINE(87)
			::cpp::Float32 _this__01 = (int)0;		HX_STACK_VAR(_this__01,"_this__01");
			HX_STACK_LINE(87)
			::cpp::Float32 _this__11 = (int)1;		HX_STACK_VAR(_this__11,"_this__11");
			HX_STACK_LINE(87)
			::cpp::Float32 _this__21 = ty;		HX_STACK_VAR(_this__21,"_this__21");
			HX_STACK_LINE(87)
			::cpp::Float32 _this__02 = (int)0;		HX_STACK_VAR(_this__02,"_this__02");
			HX_STACK_LINE(87)
			::cpp::Float32 _this__12 = (int)0;		HX_STACK_VAR(_this__12,"_this__12");
			HX_STACK_LINE(87)
			::cpp::Float32 _this__22 = (int)1;		HX_STACK_VAR(_this__22,"_this__22");
			HX_STACK_LINE(87)
			Array< ::Dynamic > tmp1 = this->transformations;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(87)
			Array< ::Dynamic > tmp2 = this->transformations;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(87)
			int tmp3 = tmp2->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(87)
			int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(87)
			::kha::math::FastMatrix3 tmp5 = tmp1->__get(tmp4).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(87)
			::kha::math::FastMatrix3 m = tmp5;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp6 = (_this__00 * m->_00);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp7 = (_this__10 * m->_01);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp9 = (_this__20 * m->_02);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp11 = (_this__00 * m->_10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp12 = (_this__10 * m->_11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp14 = (_this__20 * m->_12);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp16 = (_this__00 * m->_20);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp17 = (_this__10 * m->_21);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp19 = (_this__20 * m->_22);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp21 = (_this__01 * m->_00);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp22 = (_this__11 * m->_01);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp24 = (_this__21 * m->_02);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp26 = (_this__01 * m->_10);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp27 = (_this__11 * m->_11);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp29 = (_this__21 * m->_12);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp31 = (_this__01 * m->_20);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp32 = (_this__11 * m->_21);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp34 = (_this__21 * m->_22);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp36 = (_this__02 * m->_00);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp37 = (_this__12 * m->_01);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp39 = (_this__22 * m->_02);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp41 = (_this__02 * m->_10);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp42 = (_this__12 * m->_11);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp44 = (_this__22 * m->_12);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp46 = (_this__02 * m->_20);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp47 = (_this__12 * m->_21);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp49 = (_this__22 * m->_22);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(87)
			::cpp::Float32 tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(87)
			tmp = ::kha::math::FastMatrix3_obj::__new(tmp10,tmp15,tmp20,tmp25,tmp30,tmp35,tmp40,tmp45,tmp50);
		}
		HX_STACK_LINE(87)
		::kha::math::FastMatrix3 transformation = tmp;		HX_STACK_VAR(transformation,"transformation");
		HX_STACK_LINE(87)
		::kha::math::FastMatrix3 tmp1 = transformation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		this->setTransformation(tmp1);
		HX_STACK_LINE(87)
		Array< ::Dynamic > tmp2 = this->transformations;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		Array< ::Dynamic > tmp3 = this->transformations;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(87)
		int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(87)
		int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(87)
		::kha::math::FastMatrix3 tmp6 = transformation;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		tmp2[tmp5] = tmp6;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,translate,(void))

Void Graphics_obj::pushTranslation( ::cpp::Float32 tx,::cpp::Float32 ty){
{
		HX_STACK_FRAME("kha.graphics2.Graphics","pushTranslation",0x1b230c05,"kha.graphics2.Graphics.pushTranslation","kha/graphics2/Graphics.hx",90,0x8ef16900)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tx,"tx")
		HX_STACK_ARG(ty,"ty")
		HX_STACK_LINE(91)
		::kha::math::FastMatrix3 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			::cpp::Float32 _this__00 = (int)1;		HX_STACK_VAR(_this__00,"_this__00");
			HX_STACK_LINE(91)
			::cpp::Float32 _this__10 = (int)0;		HX_STACK_VAR(_this__10,"_this__10");
			HX_STACK_LINE(91)
			::cpp::Float32 _this__20 = tx;		HX_STACK_VAR(_this__20,"_this__20");
			HX_STACK_LINE(91)
			::cpp::Float32 _this__01 = (int)0;		HX_STACK_VAR(_this__01,"_this__01");
			HX_STACK_LINE(91)
			::cpp::Float32 _this__11 = (int)1;		HX_STACK_VAR(_this__11,"_this__11");
			HX_STACK_LINE(91)
			::cpp::Float32 _this__21 = ty;		HX_STACK_VAR(_this__21,"_this__21");
			HX_STACK_LINE(91)
			::cpp::Float32 _this__02 = (int)0;		HX_STACK_VAR(_this__02,"_this__02");
			HX_STACK_LINE(91)
			::cpp::Float32 _this__12 = (int)0;		HX_STACK_VAR(_this__12,"_this__12");
			HX_STACK_LINE(91)
			::cpp::Float32 _this__22 = (int)1;		HX_STACK_VAR(_this__22,"_this__22");
			HX_STACK_LINE(91)
			Array< ::Dynamic > tmp1 = this->transformations;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(91)
			Array< ::Dynamic > tmp2 = this->transformations;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(91)
			int tmp3 = tmp2->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			::kha::math::FastMatrix3 tmp5 = tmp1->__get(tmp4).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			::kha::math::FastMatrix3 m = tmp5;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp6 = (_this__00 * m->_00);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp7 = (_this__10 * m->_01);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp9 = (_this__20 * m->_02);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp11 = (_this__00 * m->_10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp12 = (_this__10 * m->_11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp14 = (_this__20 * m->_12);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp16 = (_this__00 * m->_20);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp17 = (_this__10 * m->_21);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp19 = (_this__20 * m->_22);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp21 = (_this__01 * m->_00);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp22 = (_this__11 * m->_01);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp24 = (_this__21 * m->_02);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp26 = (_this__01 * m->_10);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp27 = (_this__11 * m->_11);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp29 = (_this__21 * m->_12);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp31 = (_this__01 * m->_20);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp32 = (_this__11 * m->_21);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp34 = (_this__21 * m->_22);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp36 = (_this__02 * m->_00);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp37 = (_this__12 * m->_01);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp39 = (_this__22 * m->_02);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp41 = (_this__02 * m->_10);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp42 = (_this__12 * m->_11);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp44 = (_this__22 * m->_12);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp46 = (_this__02 * m->_20);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp47 = (_this__12 * m->_21);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp49 = (_this__22 * m->_22);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(91)
			::cpp::Float32 tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(91)
			tmp = ::kha::math::FastMatrix3_obj::__new(tmp10,tmp15,tmp20,tmp25,tmp30,tmp35,tmp40,tmp45,tmp50);
		}
		HX_STACK_LINE(91)
		this->pushTransformation(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,pushTranslation,(void))

::kha::math::FastMatrix3 Graphics_obj::rotation( ::cpp::Float32 angle,::cpp::Float32 centerx,::cpp::Float32 centery){
	HX_STACK_FRAME("kha.graphics2.Graphics","rotation",0x4d6194b0,"kha.graphics2.Graphics.rotation","kha/graphics2/Graphics.hx",94,0x8ef16900)
	HX_STACK_THIS(this)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(centerx,"centerx")
	HX_STACK_ARG(centery,"centery")
	HX_STACK_LINE(95)
	::kha::math::FastMatrix3 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	{
		HX_STACK_LINE(95)
		::cpp::Float32 _this__00 = (int)1;		HX_STACK_VAR(_this__00,"_this__00");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__10 = (int)0;		HX_STACK_VAR(_this__10,"_this__10");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__20 = centerx;		HX_STACK_VAR(_this__20,"_this__20");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__01 = (int)0;		HX_STACK_VAR(_this__01,"_this__01");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__11 = (int)1;		HX_STACK_VAR(_this__11,"_this__11");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__21 = centery;		HX_STACK_VAR(_this__21,"_this__21");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__02 = (int)0;		HX_STACK_VAR(_this__02,"_this__02");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__12 = (int)0;		HX_STACK_VAR(_this__12,"_this__12");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__22 = (int)1;		HX_STACK_VAR(_this__22,"_this__22");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp1 = angle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		Float tmp2 = ::Math_obj::cos(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp3 = angle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		Float tmp4 = ::Math_obj::sin(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(95)
		Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp6 = angle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(95)
		Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp8 = angle;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(95)
		Float tmp9 = ::Math_obj::cos(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(95)
		::kha::math::FastMatrix3 tmp10 = ::kha::math::FastMatrix3_obj::__new(tmp2,tmp5,(int)0,tmp7,tmp9,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(95)
		::kha::math::FastMatrix3 m = tmp10;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp11 = (_this__00 * m->_00);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp12 = (_this__10 * m->_01);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp14 = (_this__20 * m->_02);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__001 = tmp15;		HX_STACK_VAR(_this__001,"_this__001");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp16 = (_this__00 * m->_10);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp17 = (_this__10 * m->_11);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp19 = (_this__20 * m->_12);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__101 = tmp20;		HX_STACK_VAR(_this__101,"_this__101");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp21 = (_this__00 * m->_20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp22 = (_this__10 * m->_21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp24 = (_this__20 * m->_22);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__201 = tmp25;		HX_STACK_VAR(_this__201,"_this__201");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp26 = (_this__01 * m->_00);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp27 = (_this__11 * m->_01);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp29 = (_this__21 * m->_02);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__011 = tmp30;		HX_STACK_VAR(_this__011,"_this__011");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp31 = (_this__01 * m->_10);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp32 = (_this__11 * m->_11);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp34 = (_this__21 * m->_12);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__111 = tmp35;		HX_STACK_VAR(_this__111,"_this__111");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp36 = (_this__01 * m->_20);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp37 = (_this__11 * m->_21);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp39 = (_this__21 * m->_22);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__211 = tmp40;		HX_STACK_VAR(_this__211,"_this__211");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp41 = (_this__02 * m->_00);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp42 = (_this__12 * m->_01);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp44 = (_this__22 * m->_02);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__021 = tmp45;		HX_STACK_VAR(_this__021,"_this__021");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp46 = (_this__02 * m->_10);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp47 = (_this__12 * m->_11);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp49 = (_this__22 * m->_12);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__121 = tmp50;		HX_STACK_VAR(_this__121,"_this__121");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp51 = (_this__02 * m->_20);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp52 = (_this__12 * m->_21);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp54 = (_this__22 * m->_22);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__221 = tmp55;		HX_STACK_VAR(_this__221,"_this__221");
		HX_STACK_LINE(95)
		::cpp::Float32 m__00 = (int)1;		HX_STACK_VAR(m__00,"m__00");
		HX_STACK_LINE(95)
		::cpp::Float32 m__10 = (int)0;		HX_STACK_VAR(m__10,"m__10");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp56 = centerx;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp57 = -(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(95)
		::cpp::Float32 m__20 = tmp57;		HX_STACK_VAR(m__20,"m__20");
		HX_STACK_LINE(95)
		::cpp::Float32 m__01 = (int)0;		HX_STACK_VAR(m__01,"m__01");
		HX_STACK_LINE(95)
		::cpp::Float32 m__11 = (int)1;		HX_STACK_VAR(m__11,"m__11");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp58 = centery;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp59 = -(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(95)
		::cpp::Float32 m__21 = tmp59;		HX_STACK_VAR(m__21,"m__21");
		HX_STACK_LINE(95)
		::cpp::Float32 m__02 = (int)0;		HX_STACK_VAR(m__02,"m__02");
		HX_STACK_LINE(95)
		::cpp::Float32 m__12 = (int)0;		HX_STACK_VAR(m__12,"m__12");
		HX_STACK_LINE(95)
		::cpp::Float32 m__22 = (int)1;		HX_STACK_VAR(m__22,"m__22");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp60 = (_this__001 * m__00);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp61 = (_this__101 * m__01);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp63 = (_this__201 * m__02);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__002 = tmp64;		HX_STACK_VAR(_this__002,"_this__002");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp65 = (_this__001 * m__10);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp66 = (_this__101 * m__11);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp68 = (_this__201 * m__12);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__102 = tmp69;		HX_STACK_VAR(_this__102,"_this__102");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp70 = (_this__001 * m__20);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp71 = (_this__101 * m__21);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp73 = (_this__201 * m__22);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__202 = tmp74;		HX_STACK_VAR(_this__202,"_this__202");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp75 = (_this__011 * m__00);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp76 = (_this__111 * m__01);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp78 = (_this__211 * m__02);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__012 = tmp79;		HX_STACK_VAR(_this__012,"_this__012");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp80 = (_this__011 * m__10);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp81 = (_this__111 * m__11);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp83 = (_this__211 * m__12);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__112 = tmp84;		HX_STACK_VAR(_this__112,"_this__112");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp85 = (_this__011 * m__20);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp86 = (_this__111 * m__21);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp88 = (_this__211 * m__22);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__212 = tmp89;		HX_STACK_VAR(_this__212,"_this__212");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp90 = (_this__021 * m__00);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp91 = (_this__121 * m__01);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp93 = (_this__221 * m__02);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__022 = tmp94;		HX_STACK_VAR(_this__022,"_this__022");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp95 = (_this__021 * m__10);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp96 = (_this__121 * m__11);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp98 = (_this__221 * m__12);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__122 = tmp99;		HX_STACK_VAR(_this__122,"_this__122");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp100 = (_this__021 * m__20);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp101 = (_this__121 * m__21);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp103 = (_this__221 * m__22);		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(95)
		::cpp::Float32 _this__222 = tmp104;		HX_STACK_VAR(_this__222,"_this__222");
		HX_STACK_LINE(95)
		Array< ::Dynamic > tmp105 = this->transformations;		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(95)
		Array< ::Dynamic > tmp106 = this->transformations;		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(95)
		int tmp107 = tmp106->length;		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(95)
		int tmp108 = (tmp107 - (int)1);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(95)
		::kha::math::FastMatrix3 tmp109 = tmp105->__get(tmp108).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(95)
		::kha::math::FastMatrix3 m1 = tmp109;		HX_STACK_VAR(m1,"m1");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp110 = (_this__002 * m1->_00);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp111 = (_this__102 * m1->_01);		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp113 = (_this__202 * m1->_02);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp115 = (_this__002 * m1->_10);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp116 = (_this__102 * m1->_11);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp118 = (_this__202 * m1->_12);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp120 = (_this__002 * m1->_20);		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp121 = (_this__102 * m1->_21);		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp123 = (_this__202 * m1->_22);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp125 = (_this__012 * m1->_00);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp126 = (_this__112 * m1->_01);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp128 = (_this__212 * m1->_02);		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp130 = (_this__012 * m1->_10);		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp131 = (_this__112 * m1->_11);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp133 = (_this__212 * m1->_12);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp135 = (_this__012 * m1->_20);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp136 = (_this__112 * m1->_21);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp138 = (_this__212 * m1->_22);		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp140 = (_this__022 * m1->_00);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp141 = (_this__122 * m1->_01);		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp143 = (_this__222 * m1->_02);		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp145 = (_this__022 * m1->_10);		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp146 = (_this__122 * m1->_11);		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp148 = (_this__222 * m1->_12);		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp150 = (_this__022 * m1->_20);		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp151 = (_this__122 * m1->_21);		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp153 = (_this__222 * m1->_22);		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(95)
		::cpp::Float32 tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(95)
		tmp = ::kha::math::FastMatrix3_obj::__new(tmp114,tmp119,tmp124,tmp129,tmp134,tmp139,tmp144,tmp149,tmp154);
	}
	HX_STACK_LINE(95)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,rotation,return )

Void Graphics_obj::rotate( ::cpp::Float32 angle,::cpp::Float32 centerx,::cpp::Float32 centery){
{
		HX_STACK_FRAME("kha.graphics2.Graphics","rotate",0xe7ca7d4d,"kha.graphics2.Graphics.rotate","kha/graphics2/Graphics.hx",99,0x8ef16900)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(centerx,"centerx")
		HX_STACK_ARG(centery,"centery")
		HX_STACK_LINE(99)
		::kha::math::FastMatrix3 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			::cpp::Float32 _this__00 = (int)1;		HX_STACK_VAR(_this__00,"_this__00");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__10 = (int)0;		HX_STACK_VAR(_this__10,"_this__10");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__20 = centerx;		HX_STACK_VAR(_this__20,"_this__20");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__01 = (int)0;		HX_STACK_VAR(_this__01,"_this__01");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__11 = (int)1;		HX_STACK_VAR(_this__11,"_this__11");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__21 = centery;		HX_STACK_VAR(_this__21,"_this__21");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__02 = (int)0;		HX_STACK_VAR(_this__02,"_this__02");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__12 = (int)0;		HX_STACK_VAR(_this__12,"_this__12");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__22 = (int)1;		HX_STACK_VAR(_this__22,"_this__22");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp1 = angle;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(99)
			Float tmp2 = ::Math_obj::cos(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp3 = angle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(99)
			Float tmp4 = ::Math_obj::sin(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(99)
			Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp6 = angle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(99)
			Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp8 = angle;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(99)
			Float tmp9 = ::Math_obj::cos(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(99)
			::kha::math::FastMatrix3 tmp10 = ::kha::math::FastMatrix3_obj::__new(tmp2,tmp5,(int)0,tmp7,tmp9,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(99)
			::kha::math::FastMatrix3 m = tmp10;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp11 = (_this__00 * m->_00);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp12 = (_this__10 * m->_01);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp14 = (_this__20 * m->_02);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__001 = tmp15;		HX_STACK_VAR(_this__001,"_this__001");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp16 = (_this__00 * m->_10);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp17 = (_this__10 * m->_11);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp19 = (_this__20 * m->_12);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__101 = tmp20;		HX_STACK_VAR(_this__101,"_this__101");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp21 = (_this__00 * m->_20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp22 = (_this__10 * m->_21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp24 = (_this__20 * m->_22);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__201 = tmp25;		HX_STACK_VAR(_this__201,"_this__201");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp26 = (_this__01 * m->_00);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp27 = (_this__11 * m->_01);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp29 = (_this__21 * m->_02);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__011 = tmp30;		HX_STACK_VAR(_this__011,"_this__011");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp31 = (_this__01 * m->_10);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp32 = (_this__11 * m->_11);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp34 = (_this__21 * m->_12);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__111 = tmp35;		HX_STACK_VAR(_this__111,"_this__111");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp36 = (_this__01 * m->_20);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp37 = (_this__11 * m->_21);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp39 = (_this__21 * m->_22);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__211 = tmp40;		HX_STACK_VAR(_this__211,"_this__211");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp41 = (_this__02 * m->_00);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp42 = (_this__12 * m->_01);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp44 = (_this__22 * m->_02);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__021 = tmp45;		HX_STACK_VAR(_this__021,"_this__021");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp46 = (_this__02 * m->_10);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp47 = (_this__12 * m->_11);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp49 = (_this__22 * m->_12);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__121 = tmp50;		HX_STACK_VAR(_this__121,"_this__121");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp51 = (_this__02 * m->_20);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp52 = (_this__12 * m->_21);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp54 = (_this__22 * m->_22);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__221 = tmp55;		HX_STACK_VAR(_this__221,"_this__221");
			HX_STACK_LINE(99)
			::cpp::Float32 m__00 = (int)1;		HX_STACK_VAR(m__00,"m__00");
			HX_STACK_LINE(99)
			::cpp::Float32 m__10 = (int)0;		HX_STACK_VAR(m__10,"m__10");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp56 = centerx;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp57 = -(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(99)
			::cpp::Float32 m__20 = tmp57;		HX_STACK_VAR(m__20,"m__20");
			HX_STACK_LINE(99)
			::cpp::Float32 m__01 = (int)0;		HX_STACK_VAR(m__01,"m__01");
			HX_STACK_LINE(99)
			::cpp::Float32 m__11 = (int)1;		HX_STACK_VAR(m__11,"m__11");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp58 = centery;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp59 = -(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(99)
			::cpp::Float32 m__21 = tmp59;		HX_STACK_VAR(m__21,"m__21");
			HX_STACK_LINE(99)
			::cpp::Float32 m__02 = (int)0;		HX_STACK_VAR(m__02,"m__02");
			HX_STACK_LINE(99)
			::cpp::Float32 m__12 = (int)0;		HX_STACK_VAR(m__12,"m__12");
			HX_STACK_LINE(99)
			::cpp::Float32 m__22 = (int)1;		HX_STACK_VAR(m__22,"m__22");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp60 = (_this__001 * m__00);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp61 = (_this__101 * m__01);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp63 = (_this__201 * m__02);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__002 = tmp64;		HX_STACK_VAR(_this__002,"_this__002");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp65 = (_this__001 * m__10);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp66 = (_this__101 * m__11);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp68 = (_this__201 * m__12);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__102 = tmp69;		HX_STACK_VAR(_this__102,"_this__102");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp70 = (_this__001 * m__20);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp71 = (_this__101 * m__21);		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp73 = (_this__201 * m__22);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__202 = tmp74;		HX_STACK_VAR(_this__202,"_this__202");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp75 = (_this__011 * m__00);		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp76 = (_this__111 * m__01);		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp78 = (_this__211 * m__02);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__012 = tmp79;		HX_STACK_VAR(_this__012,"_this__012");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp80 = (_this__011 * m__10);		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp81 = (_this__111 * m__11);		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp83 = (_this__211 * m__12);		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__112 = tmp84;		HX_STACK_VAR(_this__112,"_this__112");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp85 = (_this__011 * m__20);		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp86 = (_this__111 * m__21);		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp88 = (_this__211 * m__22);		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__212 = tmp89;		HX_STACK_VAR(_this__212,"_this__212");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp90 = (_this__021 * m__00);		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp91 = (_this__121 * m__01);		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp93 = (_this__221 * m__02);		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__022 = tmp94;		HX_STACK_VAR(_this__022,"_this__022");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp95 = (_this__021 * m__10);		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp96 = (_this__121 * m__11);		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp98 = (_this__221 * m__12);		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__122 = tmp99;		HX_STACK_VAR(_this__122,"_this__122");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp100 = (_this__021 * m__20);		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp101 = (_this__121 * m__21);		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp103 = (_this__221 * m__22);		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(99)
			::cpp::Float32 _this__222 = tmp104;		HX_STACK_VAR(_this__222,"_this__222");
			HX_STACK_LINE(99)
			Array< ::Dynamic > tmp105 = this->transformations;		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(99)
			Array< ::Dynamic > tmp106 = this->transformations;		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(99)
			int tmp107 = tmp106->length;		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(99)
			int tmp108 = (tmp107 - (int)1);		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(99)
			::kha::math::FastMatrix3 tmp109 = tmp105->__get(tmp108).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(99)
			::kha::math::FastMatrix3 m1 = tmp109;		HX_STACK_VAR(m1,"m1");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp110 = (_this__002 * m1->_00);		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp111 = (_this__102 * m1->_01);		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp113 = (_this__202 * m1->_02);		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp115 = (_this__002 * m1->_10);		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp116 = (_this__102 * m1->_11);		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp118 = (_this__202 * m1->_12);		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp120 = (_this__002 * m1->_20);		HX_STACK_VAR(tmp120,"tmp120");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp121 = (_this__102 * m1->_21);		HX_STACK_VAR(tmp121,"tmp121");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp123 = (_this__202 * m1->_22);		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp125 = (_this__012 * m1->_00);		HX_STACK_VAR(tmp125,"tmp125");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp126 = (_this__112 * m1->_01);		HX_STACK_VAR(tmp126,"tmp126");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp128 = (_this__212 * m1->_02);		HX_STACK_VAR(tmp128,"tmp128");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp130 = (_this__012 * m1->_10);		HX_STACK_VAR(tmp130,"tmp130");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp131 = (_this__112 * m1->_11);		HX_STACK_VAR(tmp131,"tmp131");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp133 = (_this__212 * m1->_12);		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp135 = (_this__012 * m1->_20);		HX_STACK_VAR(tmp135,"tmp135");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp136 = (_this__112 * m1->_21);		HX_STACK_VAR(tmp136,"tmp136");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp138 = (_this__212 * m1->_22);		HX_STACK_VAR(tmp138,"tmp138");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp140 = (_this__022 * m1->_00);		HX_STACK_VAR(tmp140,"tmp140");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp141 = (_this__122 * m1->_01);		HX_STACK_VAR(tmp141,"tmp141");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp143 = (_this__222 * m1->_02);		HX_STACK_VAR(tmp143,"tmp143");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp145 = (_this__022 * m1->_10);		HX_STACK_VAR(tmp145,"tmp145");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp146 = (_this__122 * m1->_11);		HX_STACK_VAR(tmp146,"tmp146");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp148 = (_this__222 * m1->_12);		HX_STACK_VAR(tmp148,"tmp148");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp150 = (_this__022 * m1->_20);		HX_STACK_VAR(tmp150,"tmp150");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp151 = (_this__122 * m1->_21);		HX_STACK_VAR(tmp151,"tmp151");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp153 = (_this__222 * m1->_22);		HX_STACK_VAR(tmp153,"tmp153");
			HX_STACK_LINE(99)
			::cpp::Float32 tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
			HX_STACK_LINE(99)
			tmp = ::kha::math::FastMatrix3_obj::__new(tmp114,tmp119,tmp124,tmp129,tmp134,tmp139,tmp144,tmp149,tmp154);
		}
		HX_STACK_LINE(99)
		::kha::math::FastMatrix3 transformation = tmp;		HX_STACK_VAR(transformation,"transformation");
		HX_STACK_LINE(99)
		::kha::math::FastMatrix3 tmp1 = transformation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		this->setTransformation(tmp1);
		HX_STACK_LINE(99)
		Array< ::Dynamic > tmp2 = this->transformations;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		Array< ::Dynamic > tmp3 = this->transformations;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(99)
		int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		::kha::math::FastMatrix3 tmp6 = transformation;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(99)
		tmp2[tmp5] = tmp6;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,rotate,(void))

Void Graphics_obj::pushRotation( ::cpp::Float32 angle,::cpp::Float32 centerx,::cpp::Float32 centery){
{
		HX_STACK_FRAME("kha.graphics2.Graphics","pushRotation",0x6da66daa,"kha.graphics2.Graphics.pushRotation","kha/graphics2/Graphics.hx",102,0x8ef16900)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(centerx,"centerx")
		HX_STACK_ARG(centery,"centery")
		HX_STACK_LINE(103)
		::kha::math::FastMatrix3 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			::cpp::Float32 _this__00 = (int)1;		HX_STACK_VAR(_this__00,"_this__00");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__10 = (int)0;		HX_STACK_VAR(_this__10,"_this__10");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__20 = centerx;		HX_STACK_VAR(_this__20,"_this__20");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__01 = (int)0;		HX_STACK_VAR(_this__01,"_this__01");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__11 = (int)1;		HX_STACK_VAR(_this__11,"_this__11");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__21 = centery;		HX_STACK_VAR(_this__21,"_this__21");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__02 = (int)0;		HX_STACK_VAR(_this__02,"_this__02");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__12 = (int)0;		HX_STACK_VAR(_this__12,"_this__12");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__22 = (int)1;		HX_STACK_VAR(_this__22,"_this__22");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp1 = angle;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(103)
			Float tmp2 = ::Math_obj::cos(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp3 = angle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(103)
			Float tmp4 = ::Math_obj::sin(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(103)
			Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp6 = angle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(103)
			Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp8 = angle;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(103)
			Float tmp9 = ::Math_obj::cos(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(103)
			::kha::math::FastMatrix3 tmp10 = ::kha::math::FastMatrix3_obj::__new(tmp2,tmp5,(int)0,tmp7,tmp9,(int)0,(int)0,(int)0,(int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(103)
			::kha::math::FastMatrix3 m = tmp10;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp11 = (_this__00 * m->_00);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp12 = (_this__10 * m->_01);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp14 = (_this__20 * m->_02);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__001 = tmp15;		HX_STACK_VAR(_this__001,"_this__001");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp16 = (_this__00 * m->_10);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp17 = (_this__10 * m->_11);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp19 = (_this__20 * m->_12);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__101 = tmp20;		HX_STACK_VAR(_this__101,"_this__101");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp21 = (_this__00 * m->_20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp22 = (_this__10 * m->_21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp24 = (_this__20 * m->_22);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__201 = tmp25;		HX_STACK_VAR(_this__201,"_this__201");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp26 = (_this__01 * m->_00);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp27 = (_this__11 * m->_01);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp29 = (_this__21 * m->_02);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__011 = tmp30;		HX_STACK_VAR(_this__011,"_this__011");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp31 = (_this__01 * m->_10);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp32 = (_this__11 * m->_11);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp34 = (_this__21 * m->_12);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__111 = tmp35;		HX_STACK_VAR(_this__111,"_this__111");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp36 = (_this__01 * m->_20);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp37 = (_this__11 * m->_21);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp39 = (_this__21 * m->_22);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__211 = tmp40;		HX_STACK_VAR(_this__211,"_this__211");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp41 = (_this__02 * m->_00);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp42 = (_this__12 * m->_01);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp44 = (_this__22 * m->_02);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__021 = tmp45;		HX_STACK_VAR(_this__021,"_this__021");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp46 = (_this__02 * m->_10);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp47 = (_this__12 * m->_11);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp49 = (_this__22 * m->_12);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__121 = tmp50;		HX_STACK_VAR(_this__121,"_this__121");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp51 = (_this__02 * m->_20);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp52 = (_this__12 * m->_21);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp54 = (_this__22 * m->_22);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__221 = tmp55;		HX_STACK_VAR(_this__221,"_this__221");
			HX_STACK_LINE(103)
			::cpp::Float32 m__00 = (int)1;		HX_STACK_VAR(m__00,"m__00");
			HX_STACK_LINE(103)
			::cpp::Float32 m__10 = (int)0;		HX_STACK_VAR(m__10,"m__10");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp56 = centerx;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp57 = -(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(103)
			::cpp::Float32 m__20 = tmp57;		HX_STACK_VAR(m__20,"m__20");
			HX_STACK_LINE(103)
			::cpp::Float32 m__01 = (int)0;		HX_STACK_VAR(m__01,"m__01");
			HX_STACK_LINE(103)
			::cpp::Float32 m__11 = (int)1;		HX_STACK_VAR(m__11,"m__11");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp58 = centery;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp59 = -(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(103)
			::cpp::Float32 m__21 = tmp59;		HX_STACK_VAR(m__21,"m__21");
			HX_STACK_LINE(103)
			::cpp::Float32 m__02 = (int)0;		HX_STACK_VAR(m__02,"m__02");
			HX_STACK_LINE(103)
			::cpp::Float32 m__12 = (int)0;		HX_STACK_VAR(m__12,"m__12");
			HX_STACK_LINE(103)
			::cpp::Float32 m__22 = (int)1;		HX_STACK_VAR(m__22,"m__22");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp60 = (_this__001 * m__00);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp61 = (_this__101 * m__01);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp63 = (_this__201 * m__02);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__002 = tmp64;		HX_STACK_VAR(_this__002,"_this__002");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp65 = (_this__001 * m__10);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp66 = (_this__101 * m__11);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp68 = (_this__201 * m__12);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__102 = tmp69;		HX_STACK_VAR(_this__102,"_this__102");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp70 = (_this__001 * m__20);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp71 = (_this__101 * m__21);		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp73 = (_this__201 * m__22);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__202 = tmp74;		HX_STACK_VAR(_this__202,"_this__202");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp75 = (_this__011 * m__00);		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp76 = (_this__111 * m__01);		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp78 = (_this__211 * m__02);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__012 = tmp79;		HX_STACK_VAR(_this__012,"_this__012");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp80 = (_this__011 * m__10);		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp81 = (_this__111 * m__11);		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp83 = (_this__211 * m__12);		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__112 = tmp84;		HX_STACK_VAR(_this__112,"_this__112");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp85 = (_this__011 * m__20);		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp86 = (_this__111 * m__21);		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp88 = (_this__211 * m__22);		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__212 = tmp89;		HX_STACK_VAR(_this__212,"_this__212");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp90 = (_this__021 * m__00);		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp91 = (_this__121 * m__01);		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp93 = (_this__221 * m__02);		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__022 = tmp94;		HX_STACK_VAR(_this__022,"_this__022");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp95 = (_this__021 * m__10);		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp96 = (_this__121 * m__11);		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp98 = (_this__221 * m__12);		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__122 = tmp99;		HX_STACK_VAR(_this__122,"_this__122");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp100 = (_this__021 * m__20);		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp101 = (_this__121 * m__21);		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp103 = (_this__221 * m__22);		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(103)
			::cpp::Float32 _this__222 = tmp104;		HX_STACK_VAR(_this__222,"_this__222");
			HX_STACK_LINE(103)
			Array< ::Dynamic > tmp105 = this->transformations;		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(103)
			Array< ::Dynamic > tmp106 = this->transformations;		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(103)
			int tmp107 = tmp106->length;		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(103)
			int tmp108 = (tmp107 - (int)1);		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(103)
			::kha::math::FastMatrix3 tmp109 = tmp105->__get(tmp108).StaticCast< ::kha::math::FastMatrix3 >();		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(103)
			::kha::math::FastMatrix3 m1 = tmp109;		HX_STACK_VAR(m1,"m1");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp110 = (_this__002 * m1->_00);		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp111 = (_this__102 * m1->_01);		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp113 = (_this__202 * m1->_02);		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp115 = (_this__002 * m1->_10);		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp116 = (_this__102 * m1->_11);		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp118 = (_this__202 * m1->_12);		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp120 = (_this__002 * m1->_20);		HX_STACK_VAR(tmp120,"tmp120");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp121 = (_this__102 * m1->_21);		HX_STACK_VAR(tmp121,"tmp121");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp123 = (_this__202 * m1->_22);		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp125 = (_this__012 * m1->_00);		HX_STACK_VAR(tmp125,"tmp125");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp126 = (_this__112 * m1->_01);		HX_STACK_VAR(tmp126,"tmp126");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp128 = (_this__212 * m1->_02);		HX_STACK_VAR(tmp128,"tmp128");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp130 = (_this__012 * m1->_10);		HX_STACK_VAR(tmp130,"tmp130");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp131 = (_this__112 * m1->_11);		HX_STACK_VAR(tmp131,"tmp131");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp133 = (_this__212 * m1->_12);		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp135 = (_this__012 * m1->_20);		HX_STACK_VAR(tmp135,"tmp135");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp136 = (_this__112 * m1->_21);		HX_STACK_VAR(tmp136,"tmp136");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp138 = (_this__212 * m1->_22);		HX_STACK_VAR(tmp138,"tmp138");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp139 = (tmp137 + tmp138);		HX_STACK_VAR(tmp139,"tmp139");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp140 = (_this__022 * m1->_00);		HX_STACK_VAR(tmp140,"tmp140");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp141 = (_this__122 * m1->_01);		HX_STACK_VAR(tmp141,"tmp141");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp143 = (_this__222 * m1->_02);		HX_STACK_VAR(tmp143,"tmp143");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp145 = (_this__022 * m1->_10);		HX_STACK_VAR(tmp145,"tmp145");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp146 = (_this__122 * m1->_11);		HX_STACK_VAR(tmp146,"tmp146");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp148 = (_this__222 * m1->_12);		HX_STACK_VAR(tmp148,"tmp148");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp150 = (_this__022 * m1->_20);		HX_STACK_VAR(tmp150,"tmp150");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp151 = (_this__122 * m1->_21);		HX_STACK_VAR(tmp151,"tmp151");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp153 = (_this__222 * m1->_22);		HX_STACK_VAR(tmp153,"tmp153");
			HX_STACK_LINE(103)
			::cpp::Float32 tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
			HX_STACK_LINE(103)
			tmp = ::kha::math::FastMatrix3_obj::__new(tmp114,tmp119,tmp124,tmp129,tmp134,tmp139,tmp144,tmp149,tmp154);
		}
		HX_STACK_LINE(103)
		this->pushTransformation(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,pushRotation,(void))

Void Graphics_obj::pushOpacity( Float opacity){
{
		HX_STACK_FRAME("kha.graphics2.Graphics","pushOpacity",0xbdee1edf,"kha.graphics2.Graphics.pushOpacity","kha/graphics2/Graphics.hx",108,0x8ef16900)
		HX_STACK_THIS(this)
		HX_STACK_ARG(opacity,"opacity")
		HX_STACK_LINE(109)
		Float tmp = opacity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(109)
		this->setOpacity(tmp);
		HX_STACK_LINE(110)
		Array< Float > tmp1 = this->opacities;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		Float tmp2 = opacity;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		tmp1->push(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,pushOpacity,(void))

Float Graphics_obj::popOpacity( ){
	HX_STACK_FRAME("kha.graphics2.Graphics","popOpacity",0x09ff042c,"kha.graphics2.Graphics.popOpacity","kha/graphics2/Graphics.hx",113,0x8ef16900)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	Array< Float > tmp = this->opacities;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	Dynamic tmp1 = tmp->pop();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	Dynamic ret = tmp1;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(115)
	Float tmp2 = this->get_opacity();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	this->setOpacity(tmp2);
	HX_STACK_LINE(116)
	Dynamic tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(116)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,popOpacity,return )

Float Graphics_obj::get_opacity( ){
	HX_STACK_FRAME("kha.graphics2.Graphics","get_opacity",0x344f19b0,"kha.graphics2.Graphics.get_opacity","kha/graphics2/Graphics.hx",119,0x8ef16900)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	Array< Float > tmp = this->opacities;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	Array< Float > tmp1 = this->opacities;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(120)
	int tmp2 = tmp1->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(120)
	int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(120)
	Float tmp4 = tmp->__get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(120)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,get_opacity,return )

Float Graphics_obj::set_opacity( Float opacity){
	HX_STACK_FRAME("kha.graphics2.Graphics","set_opacity",0x3ebc20bc,"kha.graphics2.Graphics.set_opacity","kha/graphics2/Graphics.hx",123,0x8ef16900)
	HX_STACK_THIS(this)
	HX_STACK_ARG(opacity,"opacity")
	HX_STACK_LINE(124)
	Float tmp = opacity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	this->setOpacity(tmp);
	HX_STACK_LINE(125)
	Array< Float > tmp1 = this->opacities;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(125)
	Array< Float > tmp2 = this->opacities;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(125)
	int tmp3 = tmp2->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(125)
	int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(125)
	Float tmp5 = opacity;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(125)
	Float tmp6 = tmp1[tmp4] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(125)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,set_opacity,return )

::kha::graphics4::Program Graphics_obj::get_program( ){
	HX_STACK_FRAME("kha.graphics2.Graphics","get_program",0x3ce30669,"kha.graphics2.Graphics.get_program","kha/graphics2/Graphics.hx",133,0x8ef16900)
	HX_STACK_THIS(this)
	HX_STACK_LINE(134)
	::kha::graphics4::Program tmp = this->prog;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,get_program,return )

::kha::graphics4::Program Graphics_obj::set_program( ::kha::graphics4::Program program){
	HX_STACK_FRAME("kha.graphics2.Graphics","set_program",0x47500d75,"kha.graphics2.Graphics.set_program","kha/graphics2/Graphics.hx",137,0x8ef16900)
	HX_STACK_THIS(this)
	HX_STACK_ARG(program,"program")
	HX_STACK_LINE(138)
	::kha::graphics4::Program tmp = program;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	this->setProgram(tmp);
	HX_STACK_LINE(139)
	::kha::graphics4::Program tmp1 = this->prog = program;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(139)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,set_program,return )

Void Graphics_obj::setBlendingMode( ::kha::graphics4::BlendingOperation source,::kha::graphics4::BlendingOperation destination){
{
		HX_STACK_FRAME("kha.graphics2.Graphics","setBlendingMode",0x857786c4,"kha.graphics2.Graphics.setBlendingMode","kha/graphics2/Graphics.hx",143,0x8ef16900)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(destination,"destination")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,setBlendingMode,(void))

Void Graphics_obj::setTransformation( ::kha::math::FastMatrix3 transformation){
{
		HX_STACK_FRAME("kha.graphics2.Graphics","setTransformation",0x57bc6f59,"kha.graphics2.Graphics.setTransformation","kha/graphics2/Graphics.hx",160,0x8ef16900)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformation,"transformation")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,setTransformation,(void))

Void Graphics_obj::setOpacity( Float opacity){
{
		HX_STACK_FRAME("kha.graphics2.Graphics","setOpacity",0xf23a1a3b,"kha.graphics2.Graphics.setOpacity","kha/graphics2/Graphics.hx",164,0x8ef16900)
		HX_STACK_THIS(this)
		HX_STACK_ARG(opacity,"opacity")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,setOpacity,(void))

Void Graphics_obj::setProgram( ::kha::graphics4::Program program){
{
		HX_STACK_FRAME("kha.graphics2.Graphics","setProgram",0xface06f4,"kha.graphics2.Graphics.setProgram","kha/graphics2/Graphics.hx",168,0x8ef16900)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,setProgram,(void))


Graphics_obj::Graphics_obj()
{
}

void Graphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphics);
	HX_MARK_MEMBER_NAME(prog,"prog");
	HX_MARK_MEMBER_NAME(transformations,"transformations");
	HX_MARK_MEMBER_NAME(opacities,"opacities");
	HX_MARK_END_CLASS();
}

void Graphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(prog,"prog");
	HX_VISIT_MEMBER_NAME(transformations,"transformations");
	HX_VISIT_MEMBER_NAME(opacities,"opacities");
}

Dynamic Graphics_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == hx::paccAlways) return get_font(); }
		if (HX_FIELD_EQ(inName,"prog") ) { return prog; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return get_color(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { if (inCallProp == hx::paccAlways) return get_opacity(); }
		if (HX_FIELD_EQ(inName,"program") ) { if (inCallProp == hx::paccAlways) return get_program(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"drawLine") ) { return drawLine_dyn(); }
		if (HX_FIELD_EQ(inName,"get_font") ) { return get_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawImage") ) { return drawImage_dyn(); }
		if (HX_FIELD_EQ(inName,"drawVideo") ) { return drawVideo_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		if (HX_FIELD_EQ(inName,"opacities") ) { return opacities; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawString") ) { return drawString_dyn(); }
		if (HX_FIELD_EQ(inName,"popOpacity") ) { return popOpacity_dyn(); }
		if (HX_FIELD_EQ(inName,"setOpacity") ) { return setOpacity_dyn(); }
		if (HX_FIELD_EQ(inName,"setProgram") ) { return setProgram_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"translation") ) { return translation_dyn(); }
		if (HX_FIELD_EQ(inName,"pushOpacity") ) { return pushOpacity_dyn(); }
		if (HX_FIELD_EQ(inName,"get_opacity") ) { return get_opacity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_opacity") ) { return set_opacity_dyn(); }
		if (HX_FIELD_EQ(inName,"get_program") ) { return get_program_dyn(); }
		if (HX_FIELD_EQ(inName,"set_program") ) { return set_program_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawSubImage") ) { return drawSubImage_dyn(); }
		if (HX_FIELD_EQ(inName,"fillTriangle") ) { return fillTriangle_dyn(); }
		if (HX_FIELD_EQ(inName,"pushRotation") ) { return pushRotation_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"transformation") ) { if (inCallProp == hx::paccAlways) return get_transformation(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"drawScaledImage") ) { return drawScaledImage_dyn(); }
		if (HX_FIELD_EQ(inName,"pushTranslation") ) { return pushTranslation_dyn(); }
		if (HX_FIELD_EQ(inName,"setBlendingMode") ) { return setBlendingMode_dyn(); }
		if (HX_FIELD_EQ(inName,"transformations") ) { return transformations; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"popTransformation") ) { return popTransformation_dyn(); }
		if (HX_FIELD_EQ(inName,"setTransformation") ) { return setTransformation_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"drawScaledSubImage") ) { return drawScaledSubImage_dyn(); }
		if (HX_FIELD_EQ(inName,"pushTransformation") ) { return pushTransformation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_transformation") ) { return get_transformation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transformation") ) { return set_transformation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Graphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == hx::paccAlways) return set_font(inValue); }
		if (HX_FIELD_EQ(inName,"prog") ) { prog=inValue.Cast< ::kha::graphics4::Program >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { if (inCallProp == hx::paccAlways) return set_opacity(inValue); }
		if (HX_FIELD_EQ(inName,"program") ) { if (inCallProp == hx::paccAlways) return set_program(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"opacities") ) { opacities=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"transformation") ) { if (inCallProp == hx::paccAlways) return set_transformation(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"transformations") ) { transformations=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Graphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Graphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("transformation","\xc9","\xbd","\x2f","\x0a"));
	outFields->push(HX_HCSTRING("opacity","\xcb","\x5d","\x65","\xeb"));
	outFields->push(HX_HCSTRING("prog","\x9a","\xc7","\x5e","\x4a"));
	outFields->push(HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"));
	outFields->push(HX_HCSTRING("transformations","\x8a","\x52","\x96","\xdf"));
	outFields->push(HX_HCSTRING("opacities","\xe9","\xda","\xc4","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::graphics4::Program*/ ,(int)offsetof(Graphics_obj,prog),HX_HCSTRING("prog","\x9a","\xc7","\x5e","\x4a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Graphics_obj,transformations),HX_HCSTRING("transformations","\x8a","\x52","\x96","\xdf")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Graphics_obj,opacities),HX_HCSTRING("opacities","\xe9","\xda","\xc4","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("drawImage","\xb7","\x54","\x74","\x85"),
	HX_HCSTRING("drawSubImage","\xdf","\x01","\x7c","\x08"),
	HX_HCSTRING("drawScaledImage","\xbd","\x98","\x4d","\xc9"),
	HX_HCSTRING("drawScaledSubImage","\x99","\x85","\xbc","\xe8"),
	HX_HCSTRING("drawRect","\x48","\xf7","\x10","\x60"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("drawString","\xf5","\xa3","\xf3","\x52"),
	HX_HCSTRING("drawLine","\x18","\xc2","\x1c","\x5c"),
	HX_HCSTRING("drawVideo","\xd7","\x49","\x07","\xff"),
	HX_HCSTRING("fillTriangle","\x6b","\x04","\x3a","\x92"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("get_font","\x58","\x19","\x7b","\xc3"),
	HX_HCSTRING("set_font","\xcc","\x72","\xd8","\x71"),
	HX_HCSTRING("pushTransformation","\x43","\x2d","\x88","\x9a"),
	HX_HCSTRING("popTransformation","\x3a","\xeb","\x28","\x8b"),
	HX_HCSTRING("get_transformation","\x92","\x9e","\xc9","\xa5"),
	HX_HCSTRING("set_transformation","\x06","\xd1","\x78","\x82"),
	HX_HCSTRING("translation","\xf1","\x30","\xa2","\x8a"),
	HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49"),
	HX_HCSTRING("pushTranslation","\x37","\xb1","\x5e","\xa1"),
	HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("pushRotation","\x38","\x75","\x25","\x9f"),
	HX_HCSTRING("pushOpacity","\x11","\xc3","\xfe","\xfa"),
	HX_HCSTRING("popOpacity","\x3a","\x6c","\x09","\x56"),
	HX_HCSTRING("get_opacity","\xe2","\xbd","\x5f","\x71"),
	HX_HCSTRING("set_opacity","\xee","\xc4","\xcc","\x7b"),
	HX_HCSTRING("prog","\x9a","\xc7","\x5e","\x4a"),
	HX_HCSTRING("get_program","\x9b","\xaa","\xf3","\x79"),
	HX_HCSTRING("set_program","\xa7","\xb1","\x60","\x84"),
	HX_HCSTRING("setBlendingMode","\xf6","\x2b","\xb3","\x0b"),
	HX_HCSTRING("transformations","\x8a","\x52","\x96","\xdf"),
	HX_HCSTRING("opacities","\xe9","\xda","\xc4","\x95"),
	HX_HCSTRING("setTransformation","\x0b","\x45","\x11","\xa0"),
	HX_HCSTRING("setOpacity","\x49","\x82","\x44","\x3e"),
	HX_HCSTRING("setProgram","\x02","\x6f","\xd8","\x46"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
};

#endif

hx::Class Graphics_obj::__mClass;

void Graphics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics2.Graphics","\x3c","\xbf","\x49","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Graphics_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Graphics_obj >;
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
} // end namespace graphics2
