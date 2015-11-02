#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_kha__Color_Color_Impl_
#include <kha/_Color/Color_Impl_.h>
#endif
namespace kha{
namespace _Color{

Void Color_Impl__obj::__construct()
{
	return null();
}

//Color_Impl__obj::~Color_Impl__obj() { }

Dynamic Color_Impl__obj::__CreateEmpty() { return  new Color_Impl__obj; }
hx::ObjectPtr< Color_Impl__obj > Color_Impl__obj::__new()
{  hx::ObjectPtr< Color_Impl__obj > _result_ = new Color_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Color_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Color_Impl__obj > _result_ = new Color_Impl__obj();
	_result_->__construct();
	return _result_;}

int Color_Impl__obj::Black;

int Color_Impl__obj::White;

int Color_Impl__obj::Red;

int Color_Impl__obj::Blue;

int Color_Impl__obj::Green;

int Color_Impl__obj::Magenta;

int Color_Impl__obj::Yellow;

int Color_Impl__obj::Cyan;

int Color_Impl__obj::Purple;

int Color_Impl__obj::Pink;

int Color_Impl__obj::Orange;

::cpp::Float32 Color_Impl__obj::invMaxChannelValue;

int Color_Impl__obj::fromValue( int value){
	HX_STACK_FRAME("kha._Color.Color_Impl_","fromValue",0xdaee86bc,"kha._Color.Color_Impl_.fromValue","kha/Color.hx",30,0xcf6d63e6)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(31)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	int tmp1 = ::kha::_Color::Color_Impl__obj::_new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,fromValue,return )

int Color_Impl__obj::fromBytes( int r,int g,int b,hx::Null< int >  __o_a){
int a = __o_a.Default(255);
	HX_STACK_FRAME("kha._Color.Color_Impl_","fromBytes",0x66ce0fb6,"kha._Color.Color_Impl_.fromBytes","kha/Color.hx",37,0xcf6d63e6)
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(a,"a")
{
		HX_STACK_LINE(38)
		int tmp = (int(a) << int((int)24));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		int tmp1 = (int(r) << int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		int tmp2 = (int(tmp) | int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		int tmp3 = (int(g) << int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		int tmp4 = (int(tmp2) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		int tmp5 = b;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		int tmp6 = (int(tmp4) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		int tmp7 = ::kha::_Color::Color_Impl__obj::_new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Color_Impl__obj,fromBytes,return )

int Color_Impl__obj::fromFloats( ::cpp::Float32 r,::cpp::Float32 g,::cpp::Float32 b,hx::Null< ::cpp::Float32 >  __o_a){
::cpp::Float32 a = __o_a.Default(1);
	HX_STACK_FRAME("kha._Color.Color_Impl_","fromFloats",0xa7667dac,"kha._Color.Color_Impl_.fromFloats","kha/Color.hx",44,0xcf6d63e6)
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(a,"a")
{
		HX_STACK_LINE(45)
		::cpp::Float32 tmp = (a * (int)255);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		int tmp2 = (int(tmp1) << int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		::cpp::Float32 tmp3 = (r * (int)255);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		int tmp5 = (int(tmp4) << int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(45)
		int tmp6 = (int(tmp2) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		::cpp::Float32 tmp7 = (g * (int)255);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(45)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(45)
		int tmp9 = (int(tmp8) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(45)
		int tmp10 = (int(tmp6) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(45)
		::cpp::Float32 tmp11 = (b * (int)255);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(45)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(45)
		int tmp13 = (int(tmp10) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(45)
		int tmp14 = ::kha::_Color::Color_Impl__obj::_new(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(45)
		return tmp14;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Color_Impl__obj,fromFloats,return )

int Color_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("kha._Color.Color_Impl_","fromString",0x77408326,"kha._Color.Color_Impl_.fromString","kha/Color.hx",51,0xcf6d63e6)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(52)
	bool tmp = (value.length == (int)7);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	if ((tmp2)){
		HX_STACK_LINE(52)
		tmp3 = (value.length == (int)9);
	}
	else{
		HX_STACK_LINE(52)
		tmp3 = true;
	}
	HX_STACK_LINE(52)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(52)
	if ((tmp3)){
		HX_STACK_LINE(52)
		int tmp5 = value.cca((int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		tmp4 = (tmp6 == (int)35);
	}
	else{
		HX_STACK_LINE(52)
		tmp4 = false;
	}
	HX_STACK_LINE(52)
	if ((tmp4)){
		HX_STACK_LINE(53)
		::String tmp5 = value.substr((int)1,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(53)
		::String tmp6 = (HX_HCSTRING("0x","\x48","\x2a","\x00","\x00") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(53)
		Dynamic tmp7 = ::Std_obj::parseInt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(53)
		Dynamic colorValue = tmp7;		HX_STACK_VAR(colorValue,"colorValue");
		HX_STACK_LINE(54)
		bool tmp8 = (value.length == (int)7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(54)
		if ((tmp8)){
			HX_STACK_LINE(55)
			hx::AddEq(colorValue,(int)-16777216);
		}
		HX_STACK_LINE(57)
		int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			int value1 = colorValue;		HX_STACK_VAR(value1,"value1");
			HX_STACK_LINE(57)
			int tmp10 = value1;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(57)
			tmp9 = ::kha::_Color::Color_Impl__obj::_new(tmp10);
		}
		HX_STACK_LINE(57)
		return tmp9;
	}
	else{
		HX_STACK_LINE(60)
		::String tmp5 = (HX_HCSTRING("Invalid Color string: '","\x2a","\x42","\x44","\xdd") + value);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		::String tmp6 = (tmp5 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		HX_STACK_DO_THROW(tmp6);
	}
	HX_STACK_LINE(52)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,fromString,return )

int Color_Impl__obj::_new( int value){
	HX_STACK_FRAME("kha._Color.Color_Impl_","_new",0x1251106c,"kha._Color.Color_Impl_._new","kha/Color.hx",98,0xcf6d63e6)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(98)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,_new,return )

int Color_Impl__obj::get_value( int this1){
	HX_STACK_FRAME("kha._Color.Color_Impl_","get_value",0x6a0ef8dd,"kha._Color.Color_Impl_.get_value","kha/Color.hx",106,0xcf6d63e6)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(107)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_value,return )

int Color_Impl__obj::set_value( int this1,int value){
	HX_STACK_FRAME("kha._Color.Color_Impl_","set_value",0x4d5fe4e9,"kha._Color.Color_Impl_.set_value","kha/Color.hx",110,0xcf6d63e6)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(111)
	this1 = value;
	HX_STACK_LINE(112)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_value,return )

int Color_Impl__obj::get_Rb( int this1){
	HX_STACK_FRAME("kha._Color.Color_Impl_","get_Rb",0x231ef2e4,"kha._Color.Color_Impl_.get_Rb","kha/Color.hx",115,0xcf6d63e6)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(116)
	int tmp = (int(this1) & int((int)16711680));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	int tmp1 = hx::UShr(tmp,(int)16);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_Rb,return )

int Color_Impl__obj::get_Gb( int this1){
	HX_STACK_FRAME("kha._Color.Color_Impl_","get_Gb",0x231ee94f,"kha._Color.Color_Impl_.get_Gb","kha/Color.hx",119,0xcf6d63e6)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(120)
	int tmp = (int(this1) & int((int)65280));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	int tmp1 = hx::UShr(tmp,(int)8);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(120)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_Gb,return )

int Color_Impl__obj::get_Bb( int this1){
	HX_STACK_FRAME("kha._Color.Color_Impl_","get_Bb",0x231ee4f4,"kha._Color.Color_Impl_.get_Bb","kha/Color.hx",123,0xcf6d63e6)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(124)
	int tmp = (int(this1) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_Bb,return )

int Color_Impl__obj::get_Ab( int this1){
	HX_STACK_FRAME("kha._Color.Color_Impl_","get_Ab",0x231ee415,"kha._Color.Color_Impl_.get_Ab","kha/Color.hx",127,0xcf6d63e6)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(128)
	int tmp = hx::UShr(this1,(int)24);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_Ab,return )

int Color_Impl__obj::set_Rb( int this1,int i){
	HX_STACK_FRAME("kha._Color.Color_Impl_","set_Rb",0xef674758,"kha._Color.Color_Impl_.set_Rb","kha/Color.hx",131,0xcf6d63e6)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(132)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	int tmp1 = ::kha::_Color::Color_Impl__obj::get_Ab(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	int tmp2 = (int(tmp1) << int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(132)
	int tmp3 = (int(i) << int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(132)
	int tmp4 = (int(tmp2) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(132)
	int tmp5 = this1;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(132)
	int tmp6 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(132)
	int tmp7 = (int(tmp6) << int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(132)
	int tmp8 = (int(tmp4) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(132)
	int tmp9 = this1;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(132)
	int tmp10 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(132)
	int tmp11 = (int(tmp8) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(132)
	this1 = tmp11;
	HX_STACK_LINE(133)
	int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(133)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_Rb,return )

int Color_Impl__obj::set_Gb( int this1,int i){
	HX_STACK_FRAME("kha._Color.Color_Impl_","set_Gb",0xef673dc3,"kha._Color.Color_Impl_.set_Gb","kha/Color.hx",136,0xcf6d63e6)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(137)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	int tmp1 = ::kha::_Color::Color_Impl__obj::get_Ab(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	int tmp2 = (int(tmp1) << int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(137)
	int tmp3 = this1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(137)
	int tmp4 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(137)
	int tmp5 = (int(tmp4) << int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(137)
	int tmp6 = (int(tmp2) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(137)
	int tmp7 = (int(i) << int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(137)
	int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(137)
	int tmp9 = this1;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(137)
	int tmp10 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(137)
	int tmp11 = (int(tmp8) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(137)
	this1 = tmp11;
	HX_STACK_LINE(138)
	int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(138)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_Gb,return )

int Color_Impl__obj::set_Bb( int this1,int i){
	HX_STACK_FRAME("kha._Color.Color_Impl_","set_Bb",0xef673968,"kha._Color.Color_Impl_.set_Bb","kha/Color.hx",141,0xcf6d63e6)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(142)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	int tmp1 = ::kha::_Color::Color_Impl__obj::get_Ab(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(142)
	int tmp2 = (int(tmp1) << int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(142)
	int tmp3 = this1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(142)
	int tmp4 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(142)
	int tmp5 = (int(tmp4) << int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(142)
	int tmp6 = (int(tmp2) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(142)
	int tmp7 = this1;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(142)
	int tmp8 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(142)
	int tmp9 = (int(tmp8) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(142)
	int tmp10 = (int(tmp6) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(142)
	int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(142)
	int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(142)
	this1 = tmp12;
	HX_STACK_LINE(143)
	int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(143)
	return tmp13;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_Bb,return )

int Color_Impl__obj::set_Ab( int this1,int i){
	HX_STACK_FRAME("kha._Color.Color_Impl_","set_Ab",0xef673889,"kha._Color.Color_Impl_.set_Ab","kha/Color.hx",146,0xcf6d63e6)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(147)
	int tmp = (int(i) << int((int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	int tmp1 = this1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(147)
	int tmp2 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(147)
	int tmp3 = (int(tmp2) << int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(147)
	int tmp4 = (int(tmp) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(147)
	int tmp5 = this1;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(147)
	int tmp6 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(147)
	int tmp7 = (int(tmp6) << int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(147)
	int tmp8 = (int(tmp4) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(147)
	int tmp9 = this1;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(147)
	int tmp10 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(147)
	int tmp11 = (int(tmp8) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(147)
	this1 = tmp11;
	HX_STACK_LINE(148)
	int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(148)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_Ab,return )

::cpp::Float32 Color_Impl__obj::get_R( int this1){
	HX_STACK_FRAME("kha._Color.Color_Impl_","get_R",0x89ea53be,"kha._Color.Color_Impl_.get_R","kha/Color.hx",151,0xcf6d63e6)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(152)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	int tmp1 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	::cpp::Float32 tmp2 = (tmp1 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(152)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_R,return )

::cpp::Float32 Color_Impl__obj::get_G( int this1){
	HX_STACK_FRAME("kha._Color.Color_Impl_","get_G",0x89ea53b3,"kha._Color.Color_Impl_.get_G","kha/Color.hx",155,0xcf6d63e6)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(156)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	int tmp1 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	::cpp::Float32 tmp2 = (tmp1 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(156)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_G,return )

::cpp::Float32 Color_Impl__obj::get_B( int this1){
	HX_STACK_FRAME("kha._Color.Color_Impl_","get_B",0x89ea53ae,"kha._Color.Color_Impl_.get_B","kha/Color.hx",159,0xcf6d63e6)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(160)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	int tmp1 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	::cpp::Float32 tmp2 = (tmp1 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(160)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_B,return )

::cpp::Float32 Color_Impl__obj::get_A( int this1){
	HX_STACK_FRAME("kha._Color.Color_Impl_","get_A",0x89ea53ad,"kha._Color.Color_Impl_.get_A","kha/Color.hx",163,0xcf6d63e6)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(164)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	int tmp1 = ::kha::_Color::Color_Impl__obj::get_Ab(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(164)
	::cpp::Float32 tmp2 = (tmp1 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_A,return )

::cpp::Float32 Color_Impl__obj::set_R( int this1,::cpp::Float32 f){
	HX_STACK_FRAME("kha._Color.Color_Impl_","set_R",0x72b949ca,"kha._Color.Color_Impl_.set_R","kha/Color.hx",167,0xcf6d63e6)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(168)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(168)
	int tmp1 = ::kha::_Color::Color_Impl__obj::get_Ab(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(168)
	::cpp::Float32 tmp2 = (tmp1 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(168)
	::cpp::Float32 tmp3 = (tmp2 * (int)255);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(168)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(168)
	int tmp5 = (int(tmp4) << int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(168)
	::cpp::Float32 tmp6 = (f * (int)255);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(168)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(168)
	int tmp8 = (int(tmp7) << int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(168)
	int tmp9 = (int(tmp5) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(168)
	int tmp10 = this1;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(168)
	int tmp11 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(168)
	::cpp::Float32 tmp12 = (tmp11 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(168)
	::cpp::Float32 tmp13 = (tmp12 * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(168)
	int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(168)
	int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(168)
	int tmp16 = (int(tmp9) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(168)
	int tmp17 = this1;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(168)
	int tmp18 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(168)
	::cpp::Float32 tmp19 = (tmp18 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(168)
	::cpp::Float32 tmp20 = (tmp19 * (int)255);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(168)
	int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(168)
	int tmp22 = (int(tmp16) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(168)
	this1 = tmp22;
	HX_STACK_LINE(169)
	::cpp::Float32 tmp23 = f;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(169)
	return tmp23;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_R,return )

::cpp::Float32 Color_Impl__obj::set_G( int this1,::cpp::Float32 f){
	HX_STACK_FRAME("kha._Color.Color_Impl_","set_G",0x72b949bf,"kha._Color.Color_Impl_.set_G","kha/Color.hx",172,0xcf6d63e6)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(173)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	int tmp1 = ::kha::_Color::Color_Impl__obj::get_Ab(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(173)
	::cpp::Float32 tmp2 = (tmp1 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(173)
	::cpp::Float32 tmp3 = (tmp2 * (int)255);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(173)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(173)
	int tmp5 = (int(tmp4) << int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(173)
	int tmp6 = this1;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(173)
	int tmp7 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(173)
	::cpp::Float32 tmp8 = (tmp7 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(173)
	::cpp::Float32 tmp9 = (tmp8 * (int)255);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(173)
	int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(173)
	int tmp11 = (int(tmp10) << int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(173)
	int tmp12 = (int(tmp5) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(173)
	::cpp::Float32 tmp13 = (f * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(173)
	int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(173)
	int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(173)
	int tmp16 = (int(tmp12) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(173)
	int tmp17 = this1;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(173)
	int tmp18 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(173)
	::cpp::Float32 tmp19 = (tmp18 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(173)
	::cpp::Float32 tmp20 = (tmp19 * (int)255);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(173)
	int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(173)
	int tmp22 = (int(tmp16) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(173)
	this1 = tmp22;
	HX_STACK_LINE(174)
	::cpp::Float32 tmp23 = f;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(174)
	return tmp23;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_G,return )

::cpp::Float32 Color_Impl__obj::set_B( int this1,::cpp::Float32 f){
	HX_STACK_FRAME("kha._Color.Color_Impl_","set_B",0x72b949ba,"kha._Color.Color_Impl_.set_B","kha/Color.hx",177,0xcf6d63e6)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(178)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	int tmp1 = ::kha::_Color::Color_Impl__obj::get_Ab(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	::cpp::Float32 tmp2 = (tmp1 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(178)
	::cpp::Float32 tmp3 = (tmp2 * (int)255);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(178)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(178)
	int tmp5 = (int(tmp4) << int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(178)
	int tmp6 = this1;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(178)
	int tmp7 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(178)
	::cpp::Float32 tmp8 = (tmp7 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(178)
	::cpp::Float32 tmp9 = (tmp8 * (int)255);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(178)
	int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(178)
	int tmp11 = (int(tmp10) << int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(178)
	int tmp12 = (int(tmp5) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(178)
	int tmp13 = this1;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(178)
	int tmp14 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(178)
	::cpp::Float32 tmp15 = (tmp14 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(178)
	::cpp::Float32 tmp16 = (tmp15 * (int)255);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(178)
	int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(178)
	int tmp18 = (int(tmp17) << int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(178)
	int tmp19 = (int(tmp12) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(178)
	::cpp::Float32 tmp20 = (f * (int)255);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(178)
	int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(178)
	int tmp22 = (int(tmp19) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(178)
	this1 = tmp22;
	HX_STACK_LINE(179)
	::cpp::Float32 tmp23 = f;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(179)
	return tmp23;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_B,return )

::cpp::Float32 Color_Impl__obj::set_A( int this1,::cpp::Float32 f){
	HX_STACK_FRAME("kha._Color.Color_Impl_","set_A",0x72b949b9,"kha._Color.Color_Impl_.set_A","kha/Color.hx",182,0xcf6d63e6)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(183)
	::cpp::Float32 tmp = (f * (int)255);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	int tmp2 = (int(tmp1) << int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(183)
	int tmp3 = this1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(183)
	int tmp4 = ::kha::_Color::Color_Impl__obj::get_Rb(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(183)
	::cpp::Float32 tmp5 = (tmp4 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(183)
	::cpp::Float32 tmp6 = (tmp5 * (int)255);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(183)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(183)
	int tmp8 = (int(tmp7) << int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(183)
	int tmp9 = (int(tmp2) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(183)
	int tmp10 = this1;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(183)
	int tmp11 = ::kha::_Color::Color_Impl__obj::get_Gb(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(183)
	::cpp::Float32 tmp12 = (tmp11 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(183)
	::cpp::Float32 tmp13 = (tmp12 * (int)255);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(183)
	int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(183)
	int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(183)
	int tmp16 = (int(tmp9) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(183)
	int tmp17 = this1;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(183)
	int tmp18 = ::kha::_Color::Color_Impl__obj::get_Bb(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(183)
	::cpp::Float32 tmp19 = (tmp18 * ((::cpp::Float32)(((Float)0.00392156862745098))));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(183)
	::cpp::Float32 tmp20 = (tmp19 * (int)255);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(183)
	int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(183)
	int tmp22 = (int(tmp16) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(183)
	this1 = tmp22;
	HX_STACK_LINE(184)
	::cpp::Float32 tmp23 = f;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(184)
	return tmp23;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_A,return )


Color_Impl__obj::Color_Impl__obj()
{
}

bool Color_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_R") ) { outValue = get_R_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_G") ) { outValue = get_G_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_B") ) { outValue = get_B_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_A") ) { outValue = get_A_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_R") ) { outValue = set_R_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_G") ) { outValue = set_G_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_B") ) { outValue = set_B_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_A") ) { outValue = set_A_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_Rb") ) { outValue = get_Rb_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_Gb") ) { outValue = get_Gb_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_Bb") ) { outValue = get_Bb_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_Ab") ) { outValue = get_Ab_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_Rb") ) { outValue = set_Rb_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_Gb") ) { outValue = set_Gb_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_Bb") ) { outValue = set_Bb_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_Ab") ) { outValue = set_Ab_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromValue") ) { outValue = fromValue_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_value") ) { outValue = get_value_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_value") ) { outValue = set_value_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromFloats") ) { outValue = fromFloats_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Color_Impl__obj::Black,HX_HCSTRING("Black","\x9f","\x45","\x1f","\x48")},
	{hx::fsInt,(void *) &Color_Impl__obj::White,HX_HCSTRING("White","\x89","\xba","\xea","\x5c")},
	{hx::fsInt,(void *) &Color_Impl__obj::Red,HX_HCSTRING("Red","\x31","\x91","\x3e","\x00")},
	{hx::fsInt,(void *) &Color_Impl__obj::Blue,HX_HCSTRING("Blue","\xba","\x6e","\xf2","\x2b")},
	{hx::fsInt,(void *) &Color_Impl__obj::Green,HX_HCSTRING("Green","\xa3","\x7e","\x1a","\x2d")},
	{hx::fsInt,(void *) &Color_Impl__obj::Magenta,HX_HCSTRING("Magenta","\x09","\xe2","\xee","\xdb")},
	{hx::fsInt,(void *) &Color_Impl__obj::Yellow,HX_HCSTRING("Yellow","\x94","\x13","\xf1","\x04")},
	{hx::fsInt,(void *) &Color_Impl__obj::Cyan,HX_HCSTRING("Cyan","\x43","\x71","\xa5","\x2c")},
	{hx::fsInt,(void *) &Color_Impl__obj::Purple,HX_HCSTRING("Purple","\x5c","\x6a","\x1e","\xa6")},
	{hx::fsInt,(void *) &Color_Impl__obj::Pink,HX_HCSTRING("Pink","\x96","\x1e","\x31","\x35")},
	{hx::fsInt,(void *) &Color_Impl__obj::Orange,HX_HCSTRING("Orange","\x0e","\x27","\x51","\x7a")},
	{hx::fsObject /*::cpp::Float32*/ ,(void *) &Color_Impl__obj::invMaxChannelValue,HX_HCSTRING("invMaxChannelValue","\x81","\x3a","\x08","\xe4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Color_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Black,"Black");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::White,"White");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Red,"Red");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Blue,"Blue");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Green,"Green");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Magenta,"Magenta");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Yellow,"Yellow");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Cyan,"Cyan");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Purple,"Purple");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Pink,"Pink");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::Orange,"Orange");
	HX_MARK_MEMBER_NAME(Color_Impl__obj::invMaxChannelValue,"invMaxChannelValue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Black,"Black");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::White,"White");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Red,"Red");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Blue,"Blue");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Green,"Green");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Magenta,"Magenta");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Yellow,"Yellow");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Cyan,"Cyan");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Purple,"Purple");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Pink,"Pink");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::Orange,"Orange");
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::invMaxChannelValue,"invMaxChannelValue");
};

#endif

hx::Class Color_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Black","\x9f","\x45","\x1f","\x48"),
	HX_HCSTRING("White","\x89","\xba","\xea","\x5c"),
	HX_HCSTRING("Red","\x31","\x91","\x3e","\x00"),
	HX_HCSTRING("Blue","\xba","\x6e","\xf2","\x2b"),
	HX_HCSTRING("Green","\xa3","\x7e","\x1a","\x2d"),
	HX_HCSTRING("Magenta","\x09","\xe2","\xee","\xdb"),
	HX_HCSTRING("Yellow","\x94","\x13","\xf1","\x04"),
	HX_HCSTRING("Cyan","\x43","\x71","\xa5","\x2c"),
	HX_HCSTRING("Purple","\x5c","\x6a","\x1e","\xa6"),
	HX_HCSTRING("Pink","\x96","\x1e","\x31","\x35"),
	HX_HCSTRING("Orange","\x0e","\x27","\x51","\x7a"),
	HX_HCSTRING("invMaxChannelValue","\x81","\x3a","\x08","\xe4"),
	HX_HCSTRING("fromValue","\xa7","\x69","\x41","\xe6"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFloats","\x61","\x28","\x9a","\x84"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_value","\xc8","\xdb","\x61","\x75"),
	HX_HCSTRING("set_value","\xd4","\xc7","\xb2","\x58"),
	HX_HCSTRING("get_Rb","\x19","\xdf","\x2f","\xa3"),
	HX_HCSTRING("get_Gb","\x84","\xd5","\x2f","\xa3"),
	HX_HCSTRING("get_Bb","\x29","\xd1","\x2f","\xa3"),
	HX_HCSTRING("get_Ab","\x4a","\xd0","\x2f","\xa3"),
	HX_HCSTRING("set_Rb","\x8d","\x33","\x78","\x6f"),
	HX_HCSTRING("set_Gb","\xf8","\x29","\x78","\x6f"),
	HX_HCSTRING("set_Bb","\x9d","\x25","\x78","\x6f"),
	HX_HCSTRING("set_Ab","\xbe","\x24","\x78","\x6f"),
	HX_HCSTRING("get_R","\x29","\xa5","\x60","\x91"),
	HX_HCSTRING("get_G","\x1e","\xa5","\x60","\x91"),
	HX_HCSTRING("get_B","\x19","\xa5","\x60","\x91"),
	HX_HCSTRING("get_A","\x18","\xa5","\x60","\x91"),
	HX_HCSTRING("set_R","\x35","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_G","\x2a","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_B","\x25","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_A","\x24","\x9b","\x2f","\x7a"),
	::String(null()) };

void Color_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha._Color.Color_Impl_","\x43","\x41","\x5a","\xbf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Color_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Color_Impl__obj >;
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

void Color_Impl__obj::__boot()
{
	Black= ::kha::_Color::Color_Impl__obj::_new((int)-16777216);
	White= ::kha::_Color::Color_Impl__obj::_new((int)-1);
	Red= ::kha::_Color::Color_Impl__obj::_new((int)-65536);
	Blue= ::kha::_Color::Color_Impl__obj::_new((int)-16776961);
	Green= ::kha::_Color::Color_Impl__obj::_new((int)-16711936);
	Magenta= ::kha::_Color::Color_Impl__obj::_new((int)-65281);
	Yellow= ::kha::_Color::Color_Impl__obj::_new((int)-256);
	Cyan= ::kha::_Color::Color_Impl__obj::_new((int)-16711681);
	Purple= ::kha::_Color::Color_Impl__obj::_new((int)-8388480);
	Pink= ::kha::_Color::Color_Impl__obj::_new((int)-16181);
	Orange= ::kha::_Color::Color_Impl__obj::_new((int)-23296);
	invMaxChannelValue= ((::cpp::Float32)(((Float)0.00392156862745098)));
}

} // end namespace kha
} // end namespace _Color
