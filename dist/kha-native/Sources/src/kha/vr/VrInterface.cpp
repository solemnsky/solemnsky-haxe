#include <hxcpp.h>

#ifndef INCLUDED_kha_vr_SensorState
#include <kha/vr/SensorState.h>
#endif
#ifndef INCLUDED_kha_vr_TimeWarpParms
#include <kha/vr/TimeWarpParms.h>
#endif
#ifndef INCLUDED_kha_vr_VrInterface
#include <kha/vr/VrInterface.h>
#endif
namespace kha{
namespace vr{

Void VrInterface_obj::__construct()
{
HX_STACK_FRAME("kha.vr.VrInterface","new",0x7eec7f07,"kha.vr.VrInterface.new","kha/vr/VrInterface.hx",43,0x16260ce9)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//VrInterface_obj::~VrInterface_obj() { }

Dynamic VrInterface_obj::__CreateEmpty() { return  new VrInterface_obj; }
hx::ObjectPtr< VrInterface_obj > VrInterface_obj::__new()
{  hx::ObjectPtr< VrInterface_obj > _result_ = new VrInterface_obj();
	_result_->__construct();
	return _result_;}

Dynamic VrInterface_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VrInterface_obj > _result_ = new VrInterface_obj();
	_result_->__construct();
	return _result_;}

::kha::vr::SensorState VrInterface_obj::GetSensorState( ){
	HX_STACK_FRAME("kha.vr.VrInterface","GetSensorState",0x5524dd5a,"kha.vr.VrInterface.GetSensorState","kha/vr/VrInterface.hx",12,0x16260ce9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VrInterface_obj,GetSensorState,return )

::kha::vr::SensorState VrInterface_obj::GetPredictedSensorState( Float time){
	HX_STACK_FRAME("kha.vr.VrInterface","GetPredictedSensorState",0x54937c5c,"kha.vr.VrInterface.GetPredictedSensorState","kha/vr/VrInterface.hx",17,0x16260ce9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(time,"time")
	HX_STACK_LINE(17)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VrInterface_obj,GetPredictedSensorState,return )

Void VrInterface_obj::WarpSwapBlack( ){
{
		HX_STACK_FRAME("kha.vr.VrInterface","WarpSwapBlack",0xd89b500b,"kha.vr.VrInterface.WarpSwapBlack","kha/vr/VrInterface.hx",22,0x16260ce9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VrInterface_obj,WarpSwapBlack,(void))

Void VrInterface_obj::WarpSwapLoadingIcon( ){
{
		HX_STACK_FRAME("kha.vr.VrInterface","WarpSwapLoadingIcon",0xe70e0b61,"kha.vr.VrInterface.WarpSwapLoadingIcon","kha/vr/VrInterface.hx",27,0x16260ce9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VrInterface_obj,WarpSwapLoadingIcon,(void))

Void VrInterface_obj::WarpSwap( ::kha::vr::TimeWarpParms parms){
{
		HX_STACK_FRAME("kha.vr.VrInterface","WarpSwap",0xf3580d14,"kha.vr.VrInterface.WarpSwap","kha/vr/VrInterface.hx",32,0x16260ce9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(parms,"parms")
		HX_STACK_LINE(32)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VrInterface_obj,WarpSwap,(void))

Float VrInterface_obj::GetTimeInSeconds( ){
	HX_STACK_FRAME("kha.vr.VrInterface","GetTimeInSeconds",0xc5741df0,"kha.vr.VrInterface.GetTimeInSeconds","kha/vr/VrInterface.hx",38,0x16260ce9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	return ((Float)0.0);
}


HX_DEFINE_DYNAMIC_FUNC0(VrInterface_obj,GetTimeInSeconds,return )

::kha::vr::VrInterface VrInterface_obj::instance;


VrInterface_obj::VrInterface_obj()
{
}

Dynamic VrInterface_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"WarpSwap") ) { return WarpSwap_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"WarpSwapBlack") ) { return WarpSwapBlack_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"GetSensorState") ) { return GetSensorState_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"GetTimeInSeconds") ) { return GetTimeInSeconds_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"WarpSwapLoadingIcon") ) { return WarpSwapLoadingIcon_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"GetPredictedSensorState") ) { return GetPredictedSensorState_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool VrInterface_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = instance; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::kha::vr::VrInterface*/ ,(void *) &VrInterface_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("GetSensorState","\xa1","\x48","\x5a","\xfc"),
	HX_HCSTRING("GetPredictedSensorState","\x35","\xf0","\x7f","\x13"),
	HX_HCSTRING("WarpSwapBlack","\xa4","\x2a","\x05","\xee"),
	HX_HCSTRING("WarpSwapLoadingIcon","\xba","\x5e","\xab","\x92"),
	HX_HCSTRING("WarpSwap","\x1b","\x39","\x8e","\x7a"),
	HX_HCSTRING("GetTimeInSeconds","\xf7","\x28","\x50","\xb5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VrInterface_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(VrInterface_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VrInterface_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VrInterface_obj::instance,"instance");
};

#endif

hx::Class VrInterface_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	::String(null()) };

void VrInterface_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.vr.VrInterface","\x95","\xef","\xd8","\x84");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VrInterface_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VrInterface_obj >;
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
