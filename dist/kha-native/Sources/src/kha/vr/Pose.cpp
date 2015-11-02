#include <hxcpp.h>

#ifndef INCLUDED_kha_math_Quaternion
#include <kha/math/Quaternion.h>
#endif
#ifndef INCLUDED_kha_math_Vector3
#include <kha/math/Vector3.h>
#endif
#ifndef INCLUDED_kha_vr_Pose
#include <kha/vr/Pose.h>
#endif
namespace kha{
namespace vr{

Void Pose_obj::__construct()
{
HX_STACK_FRAME("kha.vr.Pose","new",0xb1cb720b,"kha.vr.Pose.new","kha/vr/Pose.hx",11,0x3366b525)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	::kha::math::Quaternion tmp = ::kha::math::Quaternion_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	this->Orientation = tmp;
	HX_STACK_LINE(13)
	::kha::math::Vector3 tmp1 = ::kha::math::Vector3_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	this->Position = tmp1;
}
;
	return null();
}

//Pose_obj::~Pose_obj() { }

Dynamic Pose_obj::__CreateEmpty() { return  new Pose_obj; }
hx::ObjectPtr< Pose_obj > Pose_obj::__new()
{  hx::ObjectPtr< Pose_obj > _result_ = new Pose_obj();
	_result_->__construct();
	return _result_;}

Dynamic Pose_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Pose_obj > _result_ = new Pose_obj();
	_result_->__construct();
	return _result_;}


Pose_obj::Pose_obj()
{
}

void Pose_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Pose);
	HX_MARK_MEMBER_NAME(Orientation,"Orientation");
	HX_MARK_MEMBER_NAME(Position,"Position");
	HX_MARK_END_CLASS();
}

void Pose_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(Orientation,"Orientation");
	HX_VISIT_MEMBER_NAME(Position,"Position");
}

Dynamic Pose_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"Position") ) { return Position; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"Orientation") ) { return Orientation; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Pose_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"Position") ) { Position=inValue.Cast< ::kha::math::Vector3 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"Orientation") ) { Orientation=inValue.Cast< ::kha::math::Quaternion >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Pose_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Pose_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("Orientation","\xb0","\x86","\x31","\xe2"));
	outFields->push(HX_HCSTRING("Position","\xc9","\x5c","\xac","\xa4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::math::Quaternion*/ ,(int)offsetof(Pose_obj,Orientation),HX_HCSTRING("Orientation","\xb0","\x86","\x31","\xe2")},
	{hx::fsObject /*::kha::math::Vector3*/ ,(int)offsetof(Pose_obj,Position),HX_HCSTRING("Position","\xc9","\x5c","\xac","\xa4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("Orientation","\xb0","\x86","\x31","\xe2"),
	HX_HCSTRING("Position","\xc9","\x5c","\xac","\xa4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pose_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pose_obj::__mClass,"__mClass");
};

#endif

hx::Class Pose_obj::__mClass;

void Pose_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.vr.Pose","\x99","\x10","\xf9","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Pose_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Pose_obj >;
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
} // end namespace vr
