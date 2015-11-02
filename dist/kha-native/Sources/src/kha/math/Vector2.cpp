#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_kha_math_Vector2
#include <kha/math/Vector2.h>
#endif
namespace kha{
namespace math{

Void Vector2_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{
HX_STACK_FRAME("kha.math.Vector2","new",0x249cae45,"kha.math.Vector2.new","kha/math/Vector2.hx",4,0xe0e7152b)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
{
	HX_STACK_LINE(5)
	this->x = x;
	HX_STACK_LINE(6)
	this->y = y;
}
;
	return null();
}

//Vector2_obj::~Vector2_obj() { }

Dynamic Vector2_obj::__CreateEmpty() { return  new Vector2_obj; }
hx::ObjectPtr< Vector2_obj > Vector2_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{  hx::ObjectPtr< Vector2_obj > _result_ = new Vector2_obj();
	_result_->__construct(__o_x,__o_y);
	return _result_;}

Dynamic Vector2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector2_obj > _result_ = new Vector2_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Float Vector2_obj::get_length( ){
	HX_STACK_FRAME("kha.math.Vector2","get_length",0xbaebdd6a,"kha.math.Vector2.get_length","kha/math/Vector2.hx",13,0xe0e7152b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(14)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(14)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(14)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(14)
	Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(14)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,get_length,return )

Float Vector2_obj::set_length( Float length){
	HX_STACK_FRAME("kha.math.Vector2","set_length",0xbe697bde,"kha.math.Vector2.set_length","kha/math/Vector2.hx",17,0xe0e7152b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(18)
	Float tmp = this->get_length();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	Float currentLength = tmp;		HX_STACK_VAR(currentLength,"currentLength");
	HX_STACK_LINE(19)
	bool tmp1 = (currentLength == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	if ((tmp1)){
		HX_STACK_LINE(19)
		return (int)0;
	}
	HX_STACK_LINE(20)
	Float tmp2 = (Float(length) / Float(currentLength));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	Float mul = tmp2;		HX_STACK_VAR(mul,"mul");
	HX_STACK_LINE(21)
	hx::MultEq(this->x,mul);
	HX_STACK_LINE(22)
	hx::MultEq(this->y,mul);
	HX_STACK_LINE(23)
	Float tmp3 = length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,set_length,return )


Vector2_obj::Vector2_obj()
{
}

Dynamic Vector2_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vector2_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return set_length(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Vector2_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Vector2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Vector2_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector2_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector2_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector2_obj::__mClass,"__mClass");
};

#endif

hx::Class Vector2_obj::__mClass;

void Vector2_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.math.Vector2","\xd3","\x27","\x35","\xa9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Vector2_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vector2_obj >;
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
} // end namespace math
