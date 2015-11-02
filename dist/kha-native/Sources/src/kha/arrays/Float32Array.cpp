#include <hxcpp.h>

#include "float32array.h"
#ifndef INCLUDED_kha_arrays_Float32Array
#include <kha/arrays/Float32Array.h>
#endif
namespace kha{
namespace arrays{

Void Float32Array_obj::__construct()
{
HX_STACK_FRAME("kha.arrays.Float32Array","new",0x3b26ea5a,"kha.arrays.Float32Array.new","kha/arrays/Float32Array.hx",30,0x455b1036)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Float32Array_obj::~Float32Array_obj() { }

Dynamic Float32Array_obj::__CreateEmpty() { return  new Float32Array_obj; }
hx::ObjectPtr< Float32Array_obj > Float32Array_obj::__new()
{  hx::ObjectPtr< Float32Array_obj > _result_ = new Float32Array_obj();
	_result_->__construct();
	return _result_;}

Dynamic Float32Array_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Float32Array_obj > _result_ = new Float32Array_obj();
	_result_->__construct();
	return _result_;}

int Float32Array_obj::get_length( ){
	HX_STACK_FRAME("kha.arrays.Float32Array","get_length",0x6d847df5,"kha.arrays.Float32Array.get_length","kha/arrays/Float32Array.hx",36,0x455b1036)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	float32array tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	int tmp1 = tmp.length();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Float32Array_obj,get_length,return )

::cpp::Float32 Float32Array_obj::set( int index,::cpp::Float32 value){
	HX_STACK_FRAME("kha.arrays.Float32Array","set",0x3b2ab59c,"kha.arrays.Float32Array.set","kha/arrays/Float32Array.hx",40,0x455b1036)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(41)
	float32array tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	::cpp::Float32 tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	::cpp::Float32 tmp3 = tmp.set(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Float32Array_obj,set,return )

::cpp::Float32 Float32Array_obj::get( int index){
	HX_STACK_FRAME("kha.arrays.Float32Array","get",0x3b219a90,"kha.arrays.Float32Array.get","kha/arrays/Float32Array.hx",44,0x455b1036)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(45)
	float32array tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	::cpp::Float32 tmp2 = tmp.get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Float32Array_obj,get,return )


Float32Array_obj::Float32Array_obj()
{
}

void Float32Array_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Float32Array);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void Float32Array_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
}

Dynamic Float32Array_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

void Float32Array_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*float32array*/ ,(int)offsetof(Float32Array_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Float32Array_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Float32Array_obj::__mClass,"__mClass");
};

#endif

hx::Class Float32Array_obj::__mClass;

void Float32Array_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.arrays.Float32Array","\x68","\x75","\xe0","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Float32Array_obj >;
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
} // end namespace arrays
