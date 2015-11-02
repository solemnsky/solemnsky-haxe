#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_BodyCallback
#include <nape/callbacks/BodyCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_BodyListener
#include <nape/callbacks/BodyListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_BodyListener
#include <zpp_nape/callbacks/ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_OptionType
#include <zpp_nape/callbacks/ZPP_OptionType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace callbacks{

Void BodyListener_obj::__construct(::nape::callbacks::CbEvent event,Dynamic options,Dynamic handler,hx::Null< int >  __o_precedence)
{
HX_STACK_FRAME("nape.callbacks.BodyListener","new",0xe9cb886e,"nape.callbacks.BodyListener.new","nape/callbacks/BodyListener.hx",180,0x83186dc0)
HX_STACK_THIS(this)
HX_STACK_ARG(event,"event")
HX_STACK_ARG(options,"options")
HX_STACK_ARG(handler,"handler")
HX_STACK_ARG(__o_precedence,"precedence")
int precedence = __o_precedence.Default(0);
{
	HX_STACK_LINE(184)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(250)
	::zpp_nape::callbacks::ZPP_Listener_obj::internal = true;
	HX_STACK_LINE(252)
	super::__construct();
	HX_STACK_LINE(254)
	::zpp_nape::callbacks::ZPP_Listener_obj::internal = false;
	HX_STACK_LINE(257)
	bool tmp = (handler == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(257)
	if ((tmp)){
		HX_STACK_LINE(258)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: BodyListener::handler cannot be null","\xe1","\x68","\x2f","\x6e"));
	}
	HX_STACK_LINE(261)
	int xevent = (int)-1;		HX_STACK_VAR(xevent,"xevent");
	HX_STACK_LINE(262)
	::nape::callbacks::CbEvent tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(262)
	::nape::callbacks::CbEvent tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(262)
	{
		HX_STACK_LINE(262)
		::nape::callbacks::CbEvent tmp3 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(262)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(262)
		if ((tmp4)){
			HX_STACK_LINE(262)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(262)
			::nape::callbacks::CbEvent tmp5 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(262)
			::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE = tmp5;
			HX_STACK_LINE(262)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(262)
		tmp2 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE;
	}
	HX_STACK_LINE(262)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(262)
	if ((tmp3)){
		HX_STACK_LINE(262)
		int tmp4 = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_WAKE;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(262)
		xevent = tmp4;
	}
	else{
		HX_STACK_LINE(263)
		::nape::callbacks::CbEvent tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(263)
		::nape::callbacks::CbEvent tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(263)
		{
			HX_STACK_LINE(263)
			::nape::callbacks::CbEvent tmp6 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(263)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(263)
			if ((tmp7)){
				HX_STACK_LINE(263)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(263)
				::nape::callbacks::CbEvent tmp8 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(263)
				::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP = tmp8;
				HX_STACK_LINE(263)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(263)
			tmp5 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;
		}
		HX_STACK_LINE(263)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(263)
		if ((tmp6)){
			HX_STACK_LINE(263)
			int tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_CbEvent_SLEEP;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(263)
			xevent = tmp7;
		}
		else{
			HX_STACK_LINE(266)
			::String tmp7 = event->toString();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(266)
			::String tmp8 = (HX_HCSTRING("Error: cbEvent '","\xb4","\xef","\x36","\xc7") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(266)
			::String tmp9 = (tmp8 + HX_HCSTRING("' is not a valid event type for a BodyListener","\xff","\xe2","\x2e","\x73"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(266)
			HX_STACK_DO_THROW(tmp9);
		}
	}
	HX_STACK_LINE(269)
	Dynamic tmp4 = options;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(269)
	::nape::callbacks::OptionType tmp5 = ::zpp_nape::callbacks::ZPP_OptionType_obj::argument(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(269)
	int tmp6 = xevent;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(269)
	Dynamic tmp7 = handler;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(269)
	::zpp_nape::callbacks::ZPP_BodyListener tmp8 = ::zpp_nape::callbacks::ZPP_BodyListener_obj::__new(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(269)
	this->zpp_inner_zn = tmp8;
	HX_STACK_LINE(270)
	::zpp_nape::callbacks::ZPP_BodyListener tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(270)
	this->zpp_inner = tmp9;
	HX_STACK_LINE(271)
	::zpp_nape::callbacks::ZPP_Listener tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(271)
	tmp10->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(272)
	::zpp_nape::callbacks::ZPP_BodyListener tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(272)
	tmp11->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(273)
	::zpp_nape::callbacks::ZPP_Listener tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(273)
	tmp12->precedence = precedence;
}
;
	return null();
}

//BodyListener_obj::~BodyListener_obj() { }

Dynamic BodyListener_obj::__CreateEmpty() { return  new BodyListener_obj; }
hx::ObjectPtr< BodyListener_obj > BodyListener_obj::__new(::nape::callbacks::CbEvent event,Dynamic options,Dynamic handler,hx::Null< int >  __o_precedence)
{  hx::ObjectPtr< BodyListener_obj > _result_ = new BodyListener_obj();
	_result_->__construct(event,options,handler,__o_precedence);
	return _result_;}

Dynamic BodyListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BodyListener_obj > _result_ = new BodyListener_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::nape::callbacks::OptionType BodyListener_obj::get_options( ){
	HX_STACK_FRAME("nape.callbacks.BodyListener","get_options",0x2b1c0983,"nape.callbacks.BodyListener.get_options","nape/callbacks/BodyListener.hx",194,0x83186dc0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(195)
	::zpp_nape::callbacks::ZPP_BodyListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	::nape::callbacks::OptionType tmp1 = tmp->options->outer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(195)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BodyListener_obj,get_options,return )

::nape::callbacks::OptionType BodyListener_obj::set_options( ::nape::callbacks::OptionType options){
	HX_STACK_FRAME("nape.callbacks.BodyListener","set_options",0x3589108f,"nape.callbacks.BodyListener.set_options","nape/callbacks/BodyListener.hx",197,0x83186dc0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(198)
	{
		HX_STACK_LINE(199)
		::zpp_nape::callbacks::ZPP_BodyListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		::zpp_nape::callbacks::ZPP_OptionType tmp1 = options->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(199)
		tmp->options->set(tmp1);
	}
	HX_STACK_LINE(201)
	::zpp_nape::callbacks::ZPP_BodyListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	::nape::callbacks::OptionType tmp1 = tmp->options->outer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(201)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(BodyListener_obj,set_options,return )

Dynamic BodyListener_obj::get_handler( ){
	HX_STACK_FRAME("nape.callbacks.BodyListener","get_handler",0x90f385ef,"nape.callbacks.BodyListener.get_handler","nape/callbacks/BodyListener.hx",208,0x83186dc0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(209)
	::zpp_nape::callbacks::ZPP_BodyListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(209)
	Dynamic tmp1 = tmp->handler;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(209)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BodyListener_obj,get_handler,return )

Dynamic BodyListener_obj::set_handler( Dynamic handler){
	HX_STACK_FRAME("nape.callbacks.BodyListener","set_handler",0x9b608cfb,"nape.callbacks.BodyListener.set_handler","nape/callbacks/BodyListener.hx",211,0x83186dc0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(212)
	{
		HX_STACK_LINE(214)
		bool tmp = (handler == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(214)
		if ((tmp)){
			HX_STACK_LINE(215)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: BodyListener::handler cannot be null","\xe1","\x68","\x2f","\x6e"));
		}
		HX_STACK_LINE(218)
		::zpp_nape::callbacks::ZPP_BodyListener tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(218)
		tmp1->handler = handler;
	}
	HX_STACK_LINE(220)
	::zpp_nape::callbacks::ZPP_BodyListener tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(220)
	Dynamic tmp1 = tmp->handler;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(220)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(BodyListener_obj,set_handler,return )


BodyListener_obj::BodyListener_obj()
{
}

void BodyListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BodyListener);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::callbacks::Listener_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BodyListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::callbacks::Listener_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BodyListener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { if (inCallProp == hx::paccAlways) return get_options(); }
		if (HX_FIELD_EQ(inName,"handler") ) { if (inCallProp == hx::paccAlways) return get_handler(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_options") ) { return get_options_dyn(); }
		if (HX_FIELD_EQ(inName,"set_options") ) { return set_options_dyn(); }
		if (HX_FIELD_EQ(inName,"get_handler") ) { return get_handler_dyn(); }
		if (HX_FIELD_EQ(inName,"set_handler") ) { return set_handler_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BodyListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { if (inCallProp == hx::paccAlways) return set_options(inValue); }
		if (HX_FIELD_EQ(inName,"handler") ) { if (inCallProp == hx::paccAlways) return set_handler(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::callbacks::ZPP_BodyListener >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BodyListener_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BodyListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_BodyListener*/ ,(int)offsetof(BodyListener_obj,zpp_inner_zn),HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"),
	HX_HCSTRING("get_options","\x75","\x93","\xf8","\x65"),
	HX_HCSTRING("set_options","\x81","\x9a","\x65","\x70"),
	HX_HCSTRING("get_handler","\xe1","\x0f","\xd0","\xcb"),
	HX_HCSTRING("set_handler","\xed","\x16","\x3d","\xd6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BodyListener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BodyListener_obj::__mClass,"__mClass");
};

#endif

hx::Class BodyListener_obj::__mClass;

void BodyListener_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.callbacks.BodyListener","\x7c","\x79","\xaf","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BodyListener_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BodyListener_obj >;
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
