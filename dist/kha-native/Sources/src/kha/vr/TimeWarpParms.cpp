#include <hxcpp.h>

#ifndef INCLUDED_kha_vr_TimeWarpImage
#include <kha/vr/TimeWarpImage.h>
#endif
#ifndef INCLUDED_kha_vr_TimeWarpParms
#include <kha/vr/TimeWarpParms.h>
#endif
namespace kha{
namespace vr{

Void TimeWarpParms_obj::__construct()
{
HX_STACK_FRAME("kha.vr.TimeWarpParms","new",0xb163567c,"kha.vr.TimeWarpParms.new","kha/vr/TimeWarpParms.hx",53,0xbe848314)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//TimeWarpParms_obj::~TimeWarpParms_obj() { }

Dynamic TimeWarpParms_obj::__CreateEmpty() { return  new TimeWarpParms_obj; }
hx::ObjectPtr< TimeWarpParms_obj > TimeWarpParms_obj::__new()
{  hx::ObjectPtr< TimeWarpParms_obj > _result_ = new TimeWarpParms_obj();
	_result_->__construct();
	return _result_;}

Dynamic TimeWarpParms_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TimeWarpParms_obj > _result_ = new TimeWarpParms_obj();
	_result_->__construct();
	return _result_;}


TimeWarpParms_obj::TimeWarpParms_obj()
{
}

void TimeWarpParms_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TimeWarpParms);
	HX_MARK_MEMBER_NAME(LeftImage,"LeftImage");
	HX_MARK_MEMBER_NAME(RightImage,"RightImage");
	HX_MARK_MEMBER_NAME(LeftOverlay,"LeftOverlay");
	HX_MARK_MEMBER_NAME(RightOverlay,"RightOverlay");
	HX_MARK_END_CLASS();
}

void TimeWarpParms_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(LeftImage,"LeftImage");
	HX_VISIT_MEMBER_NAME(RightImage,"RightImage");
	HX_VISIT_MEMBER_NAME(LeftOverlay,"LeftOverlay");
	HX_VISIT_MEMBER_NAME(RightOverlay,"RightOverlay");
}

Dynamic TimeWarpParms_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"LeftImage") ) { return LeftImage; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"RightImage") ) { return RightImage; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"LeftOverlay") ) { return LeftOverlay; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"RightOverlay") ) { return RightOverlay; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TimeWarpParms_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"LeftImage") ) { LeftImage=inValue.Cast< ::kha::vr::TimeWarpImage >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"RightImage") ) { RightImage=inValue.Cast< ::kha::vr::TimeWarpImage >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"LeftOverlay") ) { LeftOverlay=inValue.Cast< ::kha::vr::TimeWarpImage >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"RightOverlay") ) { RightOverlay=inValue.Cast< ::kha::vr::TimeWarpImage >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TimeWarpParms_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TimeWarpParms_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("LeftImage","\xb4","\xed","\x1b","\x74"));
	outFields->push(HX_HCSTRING("RightImage","\xff","\x09","\xdf","\xb6"));
	outFields->push(HX_HCSTRING("LeftOverlay","\x29","\x1a","\xd6","\x8c"));
	outFields->push(HX_HCSTRING("RightOverlay","\x34","\x1f","\xd1","\x5b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::vr::TimeWarpImage*/ ,(int)offsetof(TimeWarpParms_obj,LeftImage),HX_HCSTRING("LeftImage","\xb4","\xed","\x1b","\x74")},
	{hx::fsObject /*::kha::vr::TimeWarpImage*/ ,(int)offsetof(TimeWarpParms_obj,RightImage),HX_HCSTRING("RightImage","\xff","\x09","\xdf","\xb6")},
	{hx::fsObject /*::kha::vr::TimeWarpImage*/ ,(int)offsetof(TimeWarpParms_obj,LeftOverlay),HX_HCSTRING("LeftOverlay","\x29","\x1a","\xd6","\x8c")},
	{hx::fsObject /*::kha::vr::TimeWarpImage*/ ,(int)offsetof(TimeWarpParms_obj,RightOverlay),HX_HCSTRING("RightOverlay","\x34","\x1f","\xd1","\x5b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("LeftImage","\xb4","\xed","\x1b","\x74"),
	HX_HCSTRING("RightImage","\xff","\x09","\xdf","\xb6"),
	HX_HCSTRING("LeftOverlay","\x29","\x1a","\xd6","\x8c"),
	HX_HCSTRING("RightOverlay","\x34","\x1f","\xd1","\x5b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimeWarpParms_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimeWarpParms_obj::__mClass,"__mClass");
};

#endif

hx::Class TimeWarpParms_obj::__mClass;

void TimeWarpParms_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.vr.TimeWarpParms","\x8a","\xa8","\x67","\x0c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TimeWarpParms_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TimeWarpParms_obj >;
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
