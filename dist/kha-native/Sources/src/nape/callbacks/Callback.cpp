#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
namespace nape{
namespace callbacks{

Void Callback_obj::__construct()
{
HX_STACK_FRAME("nape.callbacks.Callback","new",0x4c54d17d,"nape.callbacks.Callback.new","nape/callbacks/Callback.hx",180,0x8f946491)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(184)
	this->zpp_inner = null();
	HX_STACK_LINE(206)
	bool tmp = ::zpp_nape::callbacks::ZPP_Callback_obj::internal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(206)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(206)
	if ((tmp1)){
		HX_STACK_LINE(207)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Callback cannot be instantiated derp!","\x09","\x0f","\x45","\x0f"));
	}
}
;
	return null();
}

//Callback_obj::~Callback_obj() { }

Dynamic Callback_obj::__CreateEmpty() { return  new Callback_obj; }
hx::ObjectPtr< Callback_obj > Callback_obj::__new()
{  hx::ObjectPtr< Callback_obj > _result_ = new Callback_obj();
	_result_->__construct();
	return _result_;}

Dynamic Callback_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Callback_obj > _result_ = new Callback_obj();
	_result_->__construct();
	return _result_;}

::nape::callbacks::CbEvent Callback_obj::get_event( ){
	HX_STACK_FRAME("nape.callbacks.Callback","get_event",0xc794594e,"nape.callbacks.Callback.get_event","nape/callbacks/Callback.hx",190,0x8f946491)
	HX_STACK_THIS(this)
	HX_STACK_LINE(191)
	Array< ::Dynamic > tmp = ::zpp_nape::callbacks::ZPP_Listener_obj::events;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	::zpp_nape::callbacks::ZPP_Callback tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(191)
	int tmp2 = tmp1->event;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(191)
	::nape::callbacks::CbEvent tmp3 = tmp->__get(tmp2).StaticCast< ::nape::callbacks::CbEvent >();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(191)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Callback_obj,get_event,return )

::nape::callbacks::Listener Callback_obj::get_listener( ){
	HX_STACK_FRAME("nape.callbacks.Callback","get_listener",0xac1227c0,"nape.callbacks.Callback.get_listener","nape/callbacks/Callback.hx",198,0x8f946491)
	HX_STACK_THIS(this)
	HX_STACK_LINE(199)
	::zpp_nape::callbacks::ZPP_Callback tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(199)
	::nape::callbacks::Listener tmp1 = tmp->listener->outer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(199)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Callback_obj,get_listener,return )

::String Callback_obj::toString( ){
	HX_STACK_FRAME("nape.callbacks.Callback","toString",0xbc83a66f,"nape.callbacks.Callback.toString","nape/callbacks/Callback.hx",215,0x8f946491)
	HX_STACK_THIS(this)
	HX_STACK_LINE(215)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC0(Callback_obj,toString,return )


Callback_obj::Callback_obj()
{
}

void Callback_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Callback);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void Callback_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic Callback_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { if (inCallProp == hx::paccAlways) return get_event(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { if (inCallProp == hx::paccAlways) return get_listener(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"get_event") ) { return get_event_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_listener") ) { return get_listener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Callback_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::callbacks::ZPP_Callback >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Callback_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Callback_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"));
	outFields->push(HX_HCSTRING("listener","\x74","\x00","\x32","\x38"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_Callback*/ ,(int)offsetof(Callback_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_event","\x71","\x24","\x6e","\xb9"),
	HX_HCSTRING("get_listener","\x7d","\xb4","\x4b","\xed"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Callback_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Callback_obj::__mClass,"__mClass");
};

#endif

hx::Class Callback_obj::__mClass;

void Callback_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.callbacks.Callback","\x0b","\x4f","\xdd","\x7d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Callback_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Callback_obj >;
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

} // end namespace nape
} // end namespace callbacks
