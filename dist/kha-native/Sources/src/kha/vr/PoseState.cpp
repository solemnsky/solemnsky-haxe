#include <hxcpp.h>

#ifndef INCLUDED_kha_math_Vector3
#include <kha/math/Vector3.h>
#endif
#ifndef INCLUDED_kha_vr_Pose
#include <kha/vr/Pose.h>
#endif
#ifndef INCLUDED_kha_vr_PoseState
#include <kha/vr/PoseState.h>
#endif
namespace kha{
namespace vr{

Void PoseState_obj::__construct()
{
HX_STACK_FRAME("kha.vr.PoseState","new",0x444367aa,"kha.vr.PoseState.new","kha/vr/PoseState.hx",16,0x30d561a6)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//PoseState_obj::~PoseState_obj() { }

Dynamic PoseState_obj::__CreateEmpty() { return  new PoseState_obj; }
hx::ObjectPtr< PoseState_obj > PoseState_obj::__new()
{  hx::ObjectPtr< PoseState_obj > _result_ = new PoseState_obj();
	_result_->__construct();
	return _result_;}

Dynamic PoseState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PoseState_obj > _result_ = new PoseState_obj();
	_result_->__construct();
	return _result_;}


PoseState_obj::PoseState_obj()
{
}

void PoseState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PoseState);
	HX_MARK_MEMBER_NAME(Pose,"Pose");
	HX_MARK_MEMBER_NAME(AngularVelocity,"AngularVelocity");
	HX_MARK_MEMBER_NAME(LinearVelocity,"LinearVelocity");
	HX_MARK_MEMBER_NAME(AngularAcceleration,"AngularAcceleration");
	HX_MARK_MEMBER_NAME(LinearAcceleration,"LinearAcceleration");
	HX_MARK_MEMBER_NAME(TimeInSeconds,"TimeInSeconds");
	HX_MARK_END_CLASS();
}

void PoseState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(Pose,"Pose");
	HX_VISIT_MEMBER_NAME(AngularVelocity,"AngularVelocity");
	HX_VISIT_MEMBER_NAME(LinearVelocity,"LinearVelocity");
	HX_VISIT_MEMBER_NAME(AngularAcceleration,"AngularAcceleration");
	HX_VISIT_MEMBER_NAME(LinearAcceleration,"LinearAcceleration");
	HX_VISIT_MEMBER_NAME(TimeInSeconds,"TimeInSeconds");
}

Dynamic PoseState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Pose") ) { return Pose; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"TimeInSeconds") ) { return TimeInSeconds; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"LinearVelocity") ) { return LinearVelocity; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"AngularVelocity") ) { return AngularVelocity; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"LinearAcceleration") ) { return LinearAcceleration; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"AngularAcceleration") ) { return AngularAcceleration; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PoseState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Pose") ) { Pose=inValue.Cast< ::kha::vr::Pose >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"TimeInSeconds") ) { TimeInSeconds=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"LinearVelocity") ) { LinearVelocity=inValue.Cast< ::kha::math::Vector3 >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"AngularVelocity") ) { AngularVelocity=inValue.Cast< ::kha::math::Vector3 >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"LinearAcceleration") ) { LinearAcceleration=inValue.Cast< ::kha::math::Vector3 >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"AngularAcceleration") ) { AngularAcceleration=inValue.Cast< ::kha::math::Vector3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PoseState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PoseState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("Pose","\x71","\xb0","\x35","\x35"));
	outFields->push(HX_HCSTRING("AngularVelocity","\xff","\x26","\x8a","\xb9"));
	outFields->push(HX_HCSTRING("LinearVelocity","\x42","\x91","\xd1","\x43"));
	outFields->push(HX_HCSTRING("AngularAcceleration","\x22","\x3e","\x5e","\xf8"));
	outFields->push(HX_HCSTRING("LinearAcceleration","\xe5","\x85","\x7b","\xbf"));
	outFields->push(HX_HCSTRING("TimeInSeconds","\x2d","\xf3","\x24","\x79"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::vr::Pose*/ ,(int)offsetof(PoseState_obj,Pose),HX_HCSTRING("Pose","\x71","\xb0","\x35","\x35")},
	{hx::fsObject /*::kha::math::Vector3*/ ,(int)offsetof(PoseState_obj,AngularVelocity),HX_HCSTRING("AngularVelocity","\xff","\x26","\x8a","\xb9")},
	{hx::fsObject /*::kha::math::Vector3*/ ,(int)offsetof(PoseState_obj,LinearVelocity),HX_HCSTRING("LinearVelocity","\x42","\x91","\xd1","\x43")},
	{hx::fsObject /*::kha::math::Vector3*/ ,(int)offsetof(PoseState_obj,AngularAcceleration),HX_HCSTRING("AngularAcceleration","\x22","\x3e","\x5e","\xf8")},
	{hx::fsObject /*::kha::math::Vector3*/ ,(int)offsetof(PoseState_obj,LinearAcceleration),HX_HCSTRING("LinearAcceleration","\xe5","\x85","\x7b","\xbf")},
	{hx::fsFloat,(int)offsetof(PoseState_obj,TimeInSeconds),HX_HCSTRING("TimeInSeconds","\x2d","\xf3","\x24","\x79")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("Pose","\x71","\xb0","\x35","\x35"),
	HX_HCSTRING("AngularVelocity","\xff","\x26","\x8a","\xb9"),
	HX_HCSTRING("LinearVelocity","\x42","\x91","\xd1","\x43"),
	HX_HCSTRING("AngularAcceleration","\x22","\x3e","\x5e","\xf8"),
	HX_HCSTRING("LinearAcceleration","\xe5","\x85","\x7b","\xbf"),
	HX_HCSTRING("TimeInSeconds","\x2d","\xf3","\x24","\x79"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PoseState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PoseState_obj::__mClass,"__mClass");
};

#endif

hx::Class PoseState_obj::__mClass;

void PoseState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.vr.PoseState","\xb8","\x0a","\x00","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &PoseState_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PoseState_obj >;
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
