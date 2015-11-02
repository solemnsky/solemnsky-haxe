#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_kha_math_Vector4
#include <kha/math/Vector4.h>
#endif
namespace kha{
namespace math{

Void Vector4_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w)
{
HX_STACK_FRAME("kha.math.Vector4","new",0x4b69d747,"kha.math.Vector4.new","kha/math/Vector4.hx",4,0xe2398269)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_z,"z")
HX_STACK_ARG(__o_w,"w")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
Float w = __o_w.Default(1);
{
	HX_STACK_LINE(5)
	this->x = x;
	HX_STACK_LINE(6)
	this->y = y;
	HX_STACK_LINE(7)
	this->z = z;
	HX_STACK_LINE(8)
	this->w = w;
}
;
	return null();
}

//Vector4_obj::~Vector4_obj() { }

Dynamic Vector4_obj::__CreateEmpty() { return  new Vector4_obj; }
hx::ObjectPtr< Vector4_obj > Vector4_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w)
{  hx::ObjectPtr< Vector4_obj > _result_ = new Vector4_obj();
	_result_->__construct(__o_x,__o_y,__o_z,__o_w);
	return _result_;}

Dynamic Vector4_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector4_obj > _result_ = new Vector4_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Float Vector4_obj::get_length( ){
	HX_STACK_FRAME("kha.math.Vector4","get_length",0x3e6ab8a8,"kha.math.Vector4.get_length","kha/math/Vector4.hx",17,0xe2398269)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(18)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(18)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(18)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(18)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(18)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(18)
	Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(18)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(18)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(18)
	Float tmp11 = this->w;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(18)
	Float tmp12 = this->w;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(18)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(18)
	Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(18)
	Float tmp15 = ::Math_obj::sqrt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(18)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_length,return )

Float Vector4_obj::set_length( Float length){
	HX_STACK_FRAME("kha.math.Vector4","set_length",0x41e8571c,"kha.math.Vector4.set_length","kha/math/Vector4.hx",21,0xe2398269)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(22)
	Float tmp = this->get_length();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	Float currentLength = tmp;		HX_STACK_VAR(currentLength,"currentLength");
	HX_STACK_LINE(23)
	bool tmp1 = (currentLength == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	if ((tmp1)){
		HX_STACK_LINE(23)
		return (int)0;
	}
	HX_STACK_LINE(24)
	Float tmp2 = (Float(length) / Float(currentLength));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	Float mul = tmp2;		HX_STACK_VAR(mul,"mul");
	HX_STACK_LINE(25)
	hx::MultEq(this->x,mul);
	HX_STACK_LINE(26)
	hx::MultEq(this->y,mul);
	HX_STACK_LINE(27)
	hx::MultEq(this->z,mul);
	HX_STACK_LINE(28)
	hx::MultEq(this->w,mul);
	HX_STACK_LINE(29)
	Float tmp3 = length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,set_length,return )


Vector4_obj::Vector4_obj()
{
}

Dynamic Vector4_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
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

Dynamic Vector4_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return set_length(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Vector4_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Vector4_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Vector4_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector4_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector4_obj::__mClass,"__mClass");
};

#endif

hx::Class Vector4_obj::__mClass;

void Vector4_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.math.Vector4","\xd5","\x27","\x35","\xa9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Vector4_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vector4_obj >;
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
