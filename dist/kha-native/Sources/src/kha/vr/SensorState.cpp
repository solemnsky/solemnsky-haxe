#include <hxcpp.h>

#ifndef INCLUDED_kha_vr_PoseState
#include <kha/vr/PoseState.h>
#endif
#ifndef INCLUDED_kha_vr_SensorState
#include <kha/vr/SensorState.h>
#endif
namespace kha{
namespace vr{

Void SensorState_obj::__construct()
{
HX_STACK_FRAME("kha.vr.SensorState","new",0xdbc352a1,"kha.vr.SensorState.new","kha/vr/SensorState.hx",19,0x60092a8f)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//SensorState_obj::~SensorState_obj() { }

Dynamic SensorState_obj::__CreateEmpty() { return  new SensorState_obj; }
hx::ObjectPtr< SensorState_obj > SensorState_obj::__new()
{  hx::ObjectPtr< SensorState_obj > _result_ = new SensorState_obj();
	_result_->__construct();
	return _result_;}

Dynamic SensorState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SensorState_obj > _result_ = new SensorState_obj();
	_result_->__construct();
	return _result_;}


SensorState_obj::SensorState_obj()
{
}

void SensorState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SensorState);
	HX_MARK_MEMBER_NAME(Predicted,"Predicted");
	HX_MARK_MEMBER_NAME(Recorded,"Recorded");
	HX_MARK_MEMBER_NAME(Temperature,"Temperature");
	HX_MARK_MEMBER_NAME(Status,"Status");
	HX_MARK_END_CLASS();
}

void SensorState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(Predicted,"Predicted");
	HX_VISIT_MEMBER_NAME(Recorded,"Recorded");
	HX_VISIT_MEMBER_NAME(Temperature,"Temperature");
	HX_VISIT_MEMBER_NAME(Status,"Status");
}

Dynamic SensorState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"Status") ) { return Status; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Recorded") ) { return Recorded; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"Predicted") ) { return Predicted; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"Temperature") ) { return Temperature; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SensorState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"Status") ) { Status=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Recorded") ) { Recorded=inValue.Cast< ::kha::vr::PoseState >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"Predicted") ) { Predicted=inValue.Cast< ::kha::vr::PoseState >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"Temperature") ) { Temperature=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SensorState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SensorState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("Predicted","\x98","\xf7","\x6a","\x7e"));
	outFields->push(HX_HCSTRING("Recorded","\x50","\x11","\x96","\x84"));
	outFields->push(HX_HCSTRING("Temperature","\x14","\x4c","\xc3","\x20"));
	outFields->push(HX_HCSTRING("Status","\x52","\x5b","\x90","\x3a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::vr::PoseState*/ ,(int)offsetof(SensorState_obj,Predicted),HX_HCSTRING("Predicted","\x98","\xf7","\x6a","\x7e")},
	{hx::fsObject /*::kha::vr::PoseState*/ ,(int)offsetof(SensorState_obj,Recorded),HX_HCSTRING("Recorded","\x50","\x11","\x96","\x84")},
	{hx::fsFloat,(int)offsetof(SensorState_obj,Temperature),HX_HCSTRING("Temperature","\x14","\x4c","\xc3","\x20")},
	{hx::fsInt,(int)offsetof(SensorState_obj,Status),HX_HCSTRING("Status","\x52","\x5b","\x90","\x3a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("Predicted","\x98","\xf7","\x6a","\x7e"),
	HX_HCSTRING("Recorded","\x50","\x11","\x96","\x84"),
	HX_HCSTRING("Temperature","\x14","\x4c","\xc3","\x20"),
	HX_HCSTRING("Status","\x52","\x5b","\x90","\x3a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SensorState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SensorState_obj::__mClass,"__mClass");
};

#endif

hx::Class SensorState_obj::__mClass;

void SensorState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.vr.SensorState","\x2f","\x6e","\xe3","\x6b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &SensorState_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SensorState_obj >;
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
