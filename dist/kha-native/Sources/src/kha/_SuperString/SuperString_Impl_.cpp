#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_kha__SuperString_SuperString_Impl_
#include <kha/_SuperString/SuperString_Impl_.h>
#endif
namespace kha{
namespace _SuperString{

Void SuperString_Impl__obj::__construct()
{
	return null();
}

//SuperString_Impl__obj::~SuperString_Impl__obj() { }

Dynamic SuperString_Impl__obj::__CreateEmpty() { return  new SuperString_Impl__obj; }
hx::ObjectPtr< SuperString_Impl__obj > SuperString_Impl__obj::__new()
{  hx::ObjectPtr< SuperString_Impl__obj > _result_ = new SuperString_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic SuperString_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SuperString_Impl__obj > _result_ = new SuperString_Impl__obj();
	_result_->__construct();
	return _result_;}

::String SuperString_Impl__obj::_new( ::String value){
	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","_new",0x933e1b5a,"kha._SuperString.SuperString_Impl_._new","kha/SuperString.hx",13,0x5b8dae7d)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(13)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SuperString_Impl__obj,_new,return )

int SuperString_Impl__obj::get_length( ::String this1){
	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","get_length",0xa2a04b68,"kha._SuperString.SuperString_Impl_.get_length","kha/SuperString.hx",18,0x5b8dae7d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(19)
	::String tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	int tmp1 = ::haxe::Utf8_obj::length(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SuperString_Impl__obj,get_length,return )

::String SuperString_Impl__obj::charAt( ::String this1,int index){
	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","charAt",0x95dcafa2,"kha._SuperString.SuperString_Impl_.charAt","kha/SuperString.hx",22,0x5b8dae7d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(23)
	::String tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	int tmp2 = ::haxe::Utf8_obj::charCodeAt(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	int code = tmp2;		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(24)
	int tmp3 = code;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	::String tmp4 = ::String::fromCharCode(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(24)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SuperString_Impl__obj,charAt,return )

int SuperString_Impl__obj::charCodeAt( ::String this1,int index){
	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","charCodeAt",0x48662daf,"kha._SuperString.SuperString_Impl_.charCodeAt","kha/SuperString.hx",27,0x5b8dae7d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(28)
	::String tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	int tmp2 = ::haxe::Utf8_obj::charCodeAt(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SuperString_Impl__obj,charCodeAt,return )

::String SuperString_Impl__obj::toUpperCase( ::String this1){
	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","toUpperCase",0xd509cb5e,"kha._SuperString.SuperString_Impl_.toUpperCase","kha/SuperString.hx",31,0x5b8dae7d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(32)
	::StringBuf buffer = ::StringBuf_obj::__new();		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(33)
	::String tmp = this1;		HX_STACK_VAR(tmp,"tmp");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::StringBuf,buffer)
	int __ArgCount() const { return 1; }
	Void run(int code){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/SuperString.hx",33,0x5b8dae7d)
		HX_STACK_ARG(code,"code")
		{
			HX_STACK_LINE(34)
			int tmp1 = code;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(34)
			Dynamic tmp2 = HX_HCSTRING("a","\x61","\x00","\x00","\x00").charCodeAt((int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			bool tmp3 = (tmp1 >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(34)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(34)
			if ((tmp3)){
				HX_STACK_LINE(34)
				int tmp5 = code;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(34)
				Dynamic tmp6 = HX_HCSTRING("z","\x7a","\x00","\x00","\x00").charCodeAt((int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(34)
				Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(34)
				tmp4 = (tmp5 <= tmp7);
			}
			else{
				HX_STACK_LINE(34)
				tmp4 = false;
			}
			HX_STACK_LINE(34)
			if ((tmp4)){
				HX_STACK_LINE(35)
				int tmp5 = code;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(35)
				Dynamic tmp6 = HX_HCSTRING("a","\x61","\x00","\x00","\x00").charCodeAt((int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(35)
				int tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(35)
				Dynamic tmp8 = HX_HCSTRING("A","\x41","\x00","\x00","\x00").charCodeAt((int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(35)
				int tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(35)
				int c = tmp9;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(35)
				int tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(35)
				::String tmp11 = ::String::fromCharCode(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(35)
				buffer->b->push(tmp11);
			}
			else{
				HX_STACK_LINE(37)
				int tmp5 = code;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(37)
				int tmp6 = ::haxe::Utf8_obj::charCodeAt(HX_HCSTRING("\xc3""\xa4""","\x81","\xaa","\x00","\x00"),(int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(37)
				bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(37)
				if ((tmp7)){
					HX_STACK_LINE(38)
					int tmp8 = ::haxe::Utf8_obj::charCodeAt(HX_HCSTRING("\xc3""\x84""","\x61","\xaa","\x00","\x00"),(int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(38)
					int c = tmp8;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(38)
					int tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(38)
					::String tmp10 = ::String::fromCharCode(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(38)
					buffer->b->push(tmp10);
				}
				else{
					HX_STACK_LINE(40)
					int tmp8 = code;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(40)
					int tmp9 = ::haxe::Utf8_obj::charCodeAt(HX_HCSTRING("\xc3""\xb6""","\x93","\xaa","\x00","\x00"),(int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(40)
					bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(40)
					if ((tmp10)){
						HX_STACK_LINE(41)
						int tmp11 = ::haxe::Utf8_obj::charCodeAt(HX_HCSTRING("\xc3""\x96""","\x73","\xaa","\x00","\x00"),(int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(41)
						int c = tmp11;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(41)
						int tmp12 = c;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(41)
						::String tmp13 = ::String::fromCharCode(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(41)
						buffer->b->push(tmp13);
					}
					else{
						HX_STACK_LINE(43)
						int tmp11 = code;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(43)
						int tmp12 = ::haxe::Utf8_obj::charCodeAt(HX_HCSTRING("\xc3""\xbc""","\x99","\xaa","\x00","\x00"),(int)0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(43)
						bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(43)
						if ((tmp13)){
							HX_STACK_LINE(44)
							int tmp14 = ::haxe::Utf8_obj::charCodeAt(HX_HCSTRING("\xc3""\x9c""","\x79","\xaa","\x00","\x00"),(int)0);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(44)
							int c = tmp14;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(44)
							int tmp15 = c;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(44)
							::String tmp16 = ::String::fromCharCode(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(44)
							buffer->b->push(tmp16);
						}
						else{
							HX_STACK_LINE(47)
							int tmp14 = code;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(47)
							::String tmp15 = ::String::fromCharCode(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(47)
							buffer->b->push(tmp15);
						}
					}
				}
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(33)
	::haxe::Utf8_obj::iter(tmp, Dynamic(new _Function_1_1(buffer)));
	HX_STACK_LINE(50)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		::String tmp2 = buffer->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		::String value = tmp2;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(50)
		tmp1 = value;
	}
	HX_STACK_LINE(50)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SuperString_Impl__obj,toUpperCase,return )

::String SuperString_Impl__obj::toLowerCase( ::String this1){
	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","toLowerCase",0x5470e77d,"kha._SuperString.SuperString_Impl_.toLowerCase","kha/SuperString.hx",53,0x5b8dae7d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(54)
	::StringBuf buffer = ::StringBuf_obj::__new();		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(55)
	::String tmp = this1;		HX_STACK_VAR(tmp,"tmp");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::StringBuf,buffer)
	int __ArgCount() const { return 1; }
	Void run(int code){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/SuperString.hx",55,0x5b8dae7d)
		HX_STACK_ARG(code,"code")
		{
			HX_STACK_LINE(56)
			int tmp1 = code;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(56)
			Dynamic tmp2 = HX_HCSTRING("A","\x41","\x00","\x00","\x00").charCodeAt((int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			bool tmp3 = (tmp1 >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(56)
			if ((tmp3)){
				HX_STACK_LINE(56)
				int tmp5 = code;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(56)
				Dynamic tmp6 = HX_HCSTRING("Z","\x5a","\x00","\x00","\x00").charCodeAt((int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(56)
				Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(56)
				tmp4 = (tmp5 <= tmp7);
			}
			else{
				HX_STACK_LINE(56)
				tmp4 = false;
			}
			HX_STACK_LINE(56)
			if ((tmp4)){
				HX_STACK_LINE(57)
				int tmp5 = code;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(57)
				Dynamic tmp6 = HX_HCSTRING("A","\x41","\x00","\x00","\x00").charCodeAt((int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(57)
				int tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(57)
				Dynamic tmp8 = HX_HCSTRING("a","\x61","\x00","\x00","\x00").charCodeAt((int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(57)
				int tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(57)
				int c = tmp9;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(57)
				int tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(57)
				::String tmp11 = ::String::fromCharCode(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(57)
				buffer->b->push(tmp11);
			}
			else{
				HX_STACK_LINE(59)
				int tmp5 = code;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(59)
				int tmp6 = ::haxe::Utf8_obj::charCodeAt(HX_HCSTRING("\xc3""\x84""","\x61","\xaa","\x00","\x00"),(int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(59)
				bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(59)
				if ((tmp7)){
					HX_STACK_LINE(60)
					int tmp8 = ::haxe::Utf8_obj::charCodeAt(HX_HCSTRING("\xc3""\xa4""","\x81","\xaa","\x00","\x00"),(int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(60)
					int c = tmp8;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(60)
					int tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(60)
					::String tmp10 = ::String::fromCharCode(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(60)
					buffer->b->push(tmp10);
				}
				else{
					HX_STACK_LINE(62)
					int tmp8 = code;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(62)
					int tmp9 = ::haxe::Utf8_obj::charCodeAt(HX_HCSTRING("\xc3""\x96""","\x73","\xaa","\x00","\x00"),(int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(62)
					if ((tmp10)){
						HX_STACK_LINE(63)
						int tmp11 = ::haxe::Utf8_obj::charCodeAt(HX_HCSTRING("\xc3""\xb6""","\x93","\xaa","\x00","\x00"),(int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(63)
						int c = tmp11;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(63)
						int tmp12 = c;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(63)
						::String tmp13 = ::String::fromCharCode(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(63)
						buffer->b->push(tmp13);
					}
					else{
						HX_STACK_LINE(65)
						int tmp11 = code;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(65)
						int tmp12 = ::haxe::Utf8_obj::charCodeAt(HX_HCSTRING("\xc3""\x9c""","\x79","\xaa","\x00","\x00"),(int)0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(65)
						bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(65)
						if ((tmp13)){
							HX_STACK_LINE(66)
							int tmp14 = ::haxe::Utf8_obj::charCodeAt(HX_HCSTRING("\xc3""\xbc""","\x99","\xaa","\x00","\x00"),(int)0);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(66)
							int c = tmp14;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(66)
							int tmp15 = c;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(66)
							::String tmp16 = ::String::fromCharCode(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(66)
							buffer->b->push(tmp16);
						}
						else{
							HX_STACK_LINE(69)
							int tmp14 = code;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(69)
							::String tmp15 = ::String::fromCharCode(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(69)
							buffer->b->push(tmp15);
						}
					}
				}
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(55)
	::haxe::Utf8_obj::iter(tmp, Dynamic(new _Function_1_1(buffer)));
	HX_STACK_LINE(72)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	{
		HX_STACK_LINE(72)
		::String tmp2 = buffer->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		::String value = tmp2;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(72)
		tmp1 = value;
	}
	HX_STACK_LINE(72)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SuperString_Impl__obj,toLowerCase,return )

::String SuperString_Impl__obj::trim( ::String this1){
	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","trim",0xa122a2db,"kha._SuperString.SuperString_Impl_.trim","kha/SuperString.hx",75,0x5b8dae7d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(76)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	{
		HX_STACK_LINE(76)
		::String tmp1 = this1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		::String tmp2 = ::StringTools_obj::trim(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		::String value = tmp2;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(76)
		tmp = value;
	}
	HX_STACK_LINE(76)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SuperString_Impl__obj,trim,return )

::String SuperString_Impl__obj::substr( ::String this1,int pos,Dynamic len){
	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","substr",0x7872256a,"kha._SuperString.SuperString_Impl_.substr","kha/SuperString.hx",79,0x5b8dae7d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(80)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	{
		HX_STACK_LINE(80)
		::String tmp1 = this1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		int tmp2 = pos;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		bool tmp3 = (len == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		if ((tmp3)){
			HX_STACK_LINE(80)
			::String tmp5 = this1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(80)
			int tmp6 = ::kha::_SuperString::SuperString_Impl__obj::get_length(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(80)
			int tmp7 = pos;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(80)
			tmp4 = (tmp6 - tmp7);
		}
		else{
			HX_STACK_LINE(80)
			tmp4 = len;
		}
		HX_STACK_LINE(80)
		::String tmp5 = ::haxe::Utf8_obj::sub(tmp1,tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(80)
		::String value = tmp5;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(80)
		tmp = value;
	}
	HX_STACK_LINE(80)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SuperString_Impl__obj,substr,return )

::String SuperString_Impl__obj::substring( ::String this1,int start,int end){
	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","substring",0x9613a5b8,"kha._SuperString.SuperString_Impl_.substring","kha/SuperString.hx",83,0x5b8dae7d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(84)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		::String tmp1 = this1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		int tmp2 = start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		int tmp3 = (end - start);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		::String tmp4 = ::haxe::Utf8_obj::sub(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		::String value = tmp4;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(84)
		tmp = value;
	}
	HX_STACK_LINE(84)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SuperString_Impl__obj,substring,return )

Array< ::String > SuperString_Impl__obj::split( ::String this1,::String splitter){
	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","split",0xc8751ec1,"kha._SuperString.SuperString_Impl_.split","kha/SuperString.hx",87,0x5b8dae7d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(splitter,"splitter")
	HX_STACK_LINE(88)
	Array< ::String > array = Array_obj< ::String >::__new();		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(89)
	::String tmp = splitter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	Array< ::String > tmp1 = this1.split(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	Array< ::String > splitted = tmp1;		HX_STACK_VAR(splitted,"splitted");
	HX_STACK_LINE(90)
	{
		HX_STACK_LINE(90)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(90)
		while((true)){
			HX_STACK_LINE(90)
			bool tmp2 = (_g < splitted->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(90)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(90)
			if ((tmp3)){
				HX_STACK_LINE(90)
				break;
			}
			HX_STACK_LINE(90)
			::String tmp4 = splitted->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(90)
			::String s = tmp4;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(90)
			++(_g);
			HX_STACK_LINE(91)
			::String tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			array->push(tmp5);
		}
	}
	HX_STACK_LINE(93)
	Array< ::String > tmp2 = array;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(93)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SuperString_Impl__obj,split,return )

int SuperString_Impl__obj::indexOf( ::String this1,::String str,Dynamic startIndex){
	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","indexOf",0x9ca78470,"kha._SuperString.SuperString_Impl_.indexOf","kha/SuperString.hx",96,0x5b8dae7d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(startIndex,"startIndex")
	HX_STACK_LINE(97)
	Array< int > index = Array_obj< int >::__new().Add((int)-1);		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(98)
	bool tmp = (startIndex == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	if ((tmp)){
		HX_STACK_LINE(98)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(98)
		tmp1 = startIndex;
	}
	HX_STACK_LINE(98)
	Array< int > i = Array_obj< int >::__new().Add(tmp1);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(99)
	::String tmp2 = this1;		HX_STACK_VAR(tmp2,"tmp2");

	HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Array< int >,i,Array< int >,index,::String,str)
	int __ArgCount() const { return 1; }
	Void run(int _char){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/SuperString.hx",99,0x5b8dae7d)
		HX_STACK_ARG(_char,"char")
		{
			HX_STACK_LINE(100)
			bool tmp3 = (index->__get((int)0) < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(100)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(100)
			if ((tmp3)){
				HX_STACK_LINE(100)
				Dynamic tmp5 = str.charCodeAt((int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(100)
				Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(100)
				int tmp7 = _char;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(100)
				tmp4 = (tmp6 == tmp7);
			}
			else{
				HX_STACK_LINE(100)
				tmp4 = false;
			}
			HX_STACK_LINE(100)
			if ((tmp4)){
				HX_STACK_LINE(101)
				index[(int)0] = i->__get((int)0);
			}
			HX_STACK_LINE(103)
			++(i[(int)0]);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(99)
	::haxe::Utf8_obj::iter(tmp2, Dynamic(new _Function_1_1(i,index,str)));
	HX_STACK_LINE(105)
	int tmp3 = index->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(105)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SuperString_Impl__obj,indexOf,return )

::String SuperString_Impl__obj::toString( ::String this1){
	HX_STACK_FRAME("kha._SuperString.SuperString_Impl_","toString",0xe7bac725,"kha._SuperString.SuperString_Impl_.toString","kha/SuperString.hx",108,0x5b8dae7d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(109)
	::String tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SuperString_Impl__obj,toString,return )


SuperString_Impl__obj::SuperString_Impl__obj()
{
}

bool SuperString_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"trim") ) { outValue = trim_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"split") ) { outValue = split_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"charAt") ) { outValue = charAt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"substr") ) { outValue = substr_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexOf") ) { outValue = indexOf_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"substring") ) { outValue = substring_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"charCodeAt") ) { outValue = charCodeAt_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toUpperCase") ) { outValue = toUpperCase_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toLowerCase") ) { outValue = toLowerCase_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SuperString_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SuperString_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class SuperString_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("charAt","\x69","\x79","\x75","\xb7"),
	HX_HCSTRING("charCodeAt","\xf6","\xe6","\x54","\x35"),
	HX_HCSTRING("toUpperCase","\x37","\x30","\xfd","\x38"),
	HX_HCSTRING("toLowerCase","\x56","\x4c","\x64","\xb8"),
	HX_HCSTRING("trim","\xe2","\x9c","\x03","\x4d"),
	HX_HCSTRING("substr","\x31","\xef","\x0a","\x9a"),
	HX_HCSTRING("substring","\x51","\xf2","\xe7","\xe2"),
	HX_HCSTRING("split","\xda","\xea","\x6e","\x81"),
	HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void SuperString_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha._SuperString.SuperString_Impl_","\x15","\x1d","\x25","\xa1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SuperString_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SuperString_Impl__obj >;
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
} // end namespace _SuperString
