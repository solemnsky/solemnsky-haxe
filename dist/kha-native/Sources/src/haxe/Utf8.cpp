#include <hxcpp.h>

#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
namespace haxe{

Void Utf8_obj::__construct()
{
	return null();
}

//Utf8_obj::~Utf8_obj() { }

Dynamic Utf8_obj::__CreateEmpty() { return  new Utf8_obj; }
hx::ObjectPtr< Utf8_obj > Utf8_obj::__new()
{  hx::ObjectPtr< Utf8_obj > _result_ = new Utf8_obj();
	_result_->__construct();
	return _result_;}

Dynamic Utf8_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Utf8_obj > _result_ = new Utf8_obj();
	_result_->__construct();
	return _result_;}

Void Utf8_obj::iter( ::String s,Dynamic chars){
{
		HX_STACK_FRAME("haxe.Utf8","iter",0x67f2370d,"haxe.Utf8.iter","/tmp/haxe/export/common/kha/Kha/Tools/haxe/std/cpp/_std/haxe/Utf8.hx",55,0x14e8cc43)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(chars,"chars")
		HX_STACK_LINE(56)
		Array< int > tmp = ::__hxcpp_utf8_string_to_char_array(s);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		Array< int > array = tmp;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			while((true)){
				HX_STACK_LINE(57)
				bool tmp1 = (_g < array->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(57)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(57)
				if ((tmp2)){
					HX_STACK_LINE(57)
					break;
				}
				HX_STACK_LINE(57)
				int tmp3 = array->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(57)
				int a = tmp3;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(57)
				++(_g);
				HX_STACK_LINE(58)
				int tmp4 = a;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(58)
				chars(tmp4).Cast< Void >();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_obj,iter,(void))

int Utf8_obj::charCodeAt( ::String s,int index){
	HX_STACK_FRAME("haxe.Utf8","charCodeAt",0xce7cbeab,"haxe.Utf8.charCodeAt","/tmp/haxe/export/common/kha/Kha/Tools/haxe/std/cpp/_std/haxe/Utf8.hx",61,0x14e8cc43)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(62)
	Array< int > tmp = ::__hxcpp_utf8_string_to_char_array(s);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	Array< int > array = tmp;		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(63)
	int tmp1 = array->__get(index);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_obj,charCodeAt,return )

int Utf8_obj::length( ::String s){
	HX_STACK_FRAME("haxe.Utf8","length",0x88322e1b,"haxe.Utf8.length","/tmp/haxe/export/common/kha/Kha/Tools/haxe/std/cpp/_std/haxe/Utf8.hx",74,0x14e8cc43)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(75)
	Array< int > tmp = ::__hxcpp_utf8_string_to_char_array(s);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	Array< int > array = tmp;		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(76)
	int tmp1 = array->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,length,return )

::String Utf8_obj::sub( ::String s,int pos,int len){
	HX_STACK_FRAME("haxe.Utf8","sub",0x67d06d2b,"haxe.Utf8.sub","/tmp/haxe/export/common/kha/Kha/Tools/haxe/std/cpp/_std/haxe/Utf8.hx",91,0x14e8cc43)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(92)
	Array< int > tmp = ::__hxcpp_utf8_string_to_char_array(s);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	Array< int > array = tmp;		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(93)
	bool tmp1 = (len < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(93)
	if ((tmp1)){
		HX_STACK_LINE(93)
		tmp2 = array->length;
	}
	else{
		HX_STACK_LINE(93)
		tmp2 = (pos + len);
	}
	HX_STACK_LINE(93)
	int last = tmp2;		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(94)
	bool tmp3 = (last > array->length);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(94)
	if ((tmp3)){
		HX_STACK_LINE(94)
		last = array->length;
	}
	HX_STACK_LINE(95)
	int tmp4 = pos;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(95)
	int tmp5 = last;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(95)
	Array< int > tmp6 = array->slice(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(95)
	Array< int > sub = tmp6;		HX_STACK_VAR(sub,"sub");
	HX_STACK_LINE(96)
	::String tmp7 = ::__hxcpp_char_array_to_utf8_string(sub);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(96)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utf8_obj,sub,return )


Utf8_obj::Utf8_obj()
{
}

bool Utf8_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { outValue = sub_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"iter") ) { outValue = iter_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { outValue = length_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"charCodeAt") ) { outValue = charCodeAt_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utf8_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utf8_obj::__mClass,"__mClass");
};

#endif

hx::Class Utf8_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("iter","\x18","\xc5","\xbf","\x45"),
	HX_HCSTRING("charCodeAt","\xf6","\xe6","\x54","\x35"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	::String(null()) };

void Utf8_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Utf8","\x99","\x32","\x41","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Utf8_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Utf8_obj >;
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

} // end namespace haxe
