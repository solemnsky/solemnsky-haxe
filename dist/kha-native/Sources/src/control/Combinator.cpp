#include <hxcpp.h>

#ifndef INCLUDED_control_Combinator
#include <control/Combinator.h>
#endif
#ifndef INCLUDED_control_Control
#include <control/Control.h>
#endif
#ifndef INCLUDED_control_ControlNetwork
#include <control/ControlNetwork.h>
#endif
namespace control{

Void Combinator_obj::__construct()
{
	return null();
}

//Combinator_obj::~Combinator_obj() { }

Dynamic Combinator_obj::__CreateEmpty() { return  new Combinator_obj; }
hx::ObjectPtr< Combinator_obj > Combinator_obj::__new()
{  hx::ObjectPtr< Combinator_obj > _result_ = new Combinator_obj();
	_result_->__construct();
	return _result_;}

Dynamic Combinator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Combinator_obj > _result_ = new Combinator_obj();
	_result_->__construct();
	return _result_;}

::control::Control Combinator_obj::network( Dynamic moveThrough,::control::Control initialCtrl){
	HX_STACK_FRAME("control.Combinator","network",0x274167cd,"control.Combinator.network","control/Combinator.hx",84,0x1189dfb0)
	HX_STACK_ARG(moveThrough,"moveThrough")
	HX_STACK_ARG(initialCtrl,"initialCtrl")
	HX_STACK_LINE(85)
	::control::ControlNetwork tmp = ::control::ControlNetwork_obj::__new(moveThrough,initialCtrl);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Combinator_obj,network,return )


Combinator_obj::Combinator_obj()
{
}

bool Combinator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"network") ) { outValue = network_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Combinator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Combinator_obj::__mClass,"__mClass");
};

#endif

hx::Class Combinator_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("network","\xae","\xc4","\xbc","\x59"),
	::String(null()) };

void Combinator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("control.Combinator","\x8d","\x4c","\x51","\x73");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Combinator_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Combinator_obj >;
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

} // end namespace control
