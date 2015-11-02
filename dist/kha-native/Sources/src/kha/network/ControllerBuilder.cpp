#include <hxcpp.h>

#ifndef INCLUDED_kha_network_ControllerBuilder
#include <kha/network/ControllerBuilder.h>
#endif
namespace kha{
namespace network{

Void ControllerBuilder_obj::__construct()
{
	return null();
}

//ControllerBuilder_obj::~ControllerBuilder_obj() { }

Dynamic ControllerBuilder_obj::__CreateEmpty() { return  new ControllerBuilder_obj; }
hx::ObjectPtr< ControllerBuilder_obj > ControllerBuilder_obj::__new()
{  hx::ObjectPtr< ControllerBuilder_obj > _result_ = new ControllerBuilder_obj();
	_result_->__construct();
	return _result_;}

Dynamic ControllerBuilder_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ControllerBuilder_obj > _result_ = new ControllerBuilder_obj();
	_result_->__construct();
	return _result_;}

int ControllerBuilder_obj::nextId;


ControllerBuilder_obj::ControllerBuilder_obj()
{
}

bool ControllerBuilder_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"nextId") ) { outValue = nextId; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ControllerBuilder_obj::nextId,HX_HCSTRING("nextId","\xae","\x27","\x64","\x72")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ControllerBuilder_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ControllerBuilder_obj::nextId,"nextId");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ControllerBuilder_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ControllerBuilder_obj::nextId,"nextId");
};

#endif

hx::Class ControllerBuilder_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("nextId","\xae","\x27","\x64","\x72"),
	::String(null()) };

void ControllerBuilder_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.network.ControllerBuilder","\x35","\xa1","\xbf","\x79");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ControllerBuilder_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ControllerBuilder_obj >;
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

void ControllerBuilder_obj::__boot()
{
	nextId= (int)0;
}

} // end namespace kha
} // end namespace network
