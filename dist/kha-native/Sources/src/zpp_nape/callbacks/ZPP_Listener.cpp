#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerType
#include <nape/callbacks/ListenerType.h>
#endif
#ifndef INCLUDED_zpp_nape_ZPP_ID
#include <zpp_nape/ZPP_ID.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_BodyListener
#include <zpp_nape/callbacks/ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_ConstraintListener
#include <zpp_nape/callbacks/ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener
#include <zpp_nape/callbacks/ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace callbacks{

Void ZPP_Listener_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Listener","new",0x71eaf9ec,"zpp_nape.callbacks.ZPP_Listener.new","zpp_nape/callbacks/Listener.hx",174,0x87b155a7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(188)
	this->space = null();
	HX_STACK_LINE(187)
	this->interaction = null();
	HX_STACK_LINE(186)
	this->constraint = null();
	HX_STACK_LINE(185)
	this->body = null();
	HX_STACK_LINE(184)
	this->precedence = (int)0;
	HX_STACK_LINE(181)
	this->event = (int)0;
	HX_STACK_LINE(180)
	this->type = (int)0;
	HX_STACK_LINE(179)
	this->id = (int)0;
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(190)
	int tmp = ::zpp_nape::ZPP_ID_obj::Listener();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	this->id = tmp;
}
;
	return null();
}

//ZPP_Listener_obj::~ZPP_Listener_obj() { }

Dynamic ZPP_Listener_obj::__CreateEmpty() { return  new ZPP_Listener_obj; }
hx::ObjectPtr< ZPP_Listener_obj > ZPP_Listener_obj::__new()
{  hx::ObjectPtr< ZPP_Listener_obj > _result_ = new ZPP_Listener_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Listener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Listener_obj > _result_ = new ZPP_Listener_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_Listener_obj::swapEvent( int event){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Listener","swapEvent",0xd60ab313,"zpp_nape.callbacks.ZPP_Listener.swapEvent","zpp_nape/callbacks/Listener.hx",196,0x87b155a7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Listener_obj,swapEvent,(void))

Void ZPP_Listener_obj::invalidate_precedence( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Listener","invalidate_precedence",0x5e07721a,"zpp_nape.callbacks.ZPP_Listener.invalidate_precedence","zpp_nape/callbacks/Listener.hx",197,0x87b155a7)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Listener_obj,invalidate_precedence,(void))

Void ZPP_Listener_obj::addedToSpace( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Listener","addedToSpace",0x4325895f,"zpp_nape.callbacks.ZPP_Listener.addedToSpace","zpp_nape/callbacks/Listener.hx",198,0x87b155a7)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Listener_obj,addedToSpace,(void))

Void ZPP_Listener_obj::removedFromSpace( ){
{
		HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Listener","removedFromSpace",0x0cfe1230,"zpp_nape.callbacks.ZPP_Listener.removedFromSpace","zpp_nape/callbacks/Listener.hx",199,0x87b155a7)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Listener_obj,removedFromSpace,(void))

bool ZPP_Listener_obj::internal;

Array< ::Dynamic > ZPP_Listener_obj::types;

Array< ::Dynamic > ZPP_Listener_obj::events;

bool ZPP_Listener_obj::setlt( ::zpp_nape::callbacks::ZPP_Listener a,::zpp_nape::callbacks::ZPP_Listener b){
	HX_STACK_FRAME("zpp_nape.callbacks.ZPP_Listener","setlt",0xdf0d4b36,"zpp_nape.callbacks.ZPP_Listener.setlt","zpp_nape/callbacks/Listener.hx",193,0x87b155a7)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(194)
	bool tmp = (a->precedence > b->precedence);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(194)
	if ((tmp1)){
		HX_STACK_LINE(194)
		bool tmp3 = (a->precedence == b->precedence);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(194)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(194)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(194)
		if ((tmp5)){
			HX_STACK_LINE(194)
			tmp2 = (a->id > b->id);
		}
		else{
			HX_STACK_LINE(194)
			tmp2 = false;
		}
	}
	else{
		HX_STACK_LINE(194)
		tmp2 = true;
	}
	HX_STACK_LINE(194)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Listener_obj,setlt,return )


ZPP_Listener_obj::ZPP_Listener_obj()
{
}

void ZPP_Listener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Listener);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(event,"event");
	HX_MARK_MEMBER_NAME(precedence,"precedence");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(constraint,"constraint");
	HX_MARK_MEMBER_NAME(interaction,"interaction");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_END_CLASS();
}

void ZPP_Listener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(event,"event");
	HX_VISIT_MEMBER_NAME(precedence,"precedence");
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(constraint,"constraint");
	HX_VISIT_MEMBER_NAME(interaction,"interaction");
	HX_VISIT_MEMBER_NAME(space,"space");
}

Dynamic ZPP_Listener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"event") ) { return event; }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"swapEvent") ) { return swapEvent_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"precedence") ) { return precedence; }
		if (HX_FIELD_EQ(inName,"constraint") ) { return constraint; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interaction") ) { return interaction; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addedToSpace") ) { return addedToSpace_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removedFromSpace") ) { return removedFromSpace_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"invalidate_precedence") ) { return invalidate_precedence_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_Listener_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { outValue = types; return true;  }
		if (HX_FIELD_EQ(inName,"setlt") ) { outValue = setlt_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { outValue = events; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { outValue = internal; return true;  }
	}
	return false;
}

Dynamic ZPP_Listener_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::zpp_nape::callbacks::ZPP_BodyListener >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::callbacks::Listener >(); return inValue; }
		if (HX_FIELD_EQ(inName,"event") ) { event=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"precedence") ) { precedence=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"constraint") ) { constraint=inValue.Cast< ::zpp_nape::callbacks::ZPP_ConstraintListener >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interaction") ) { interaction=inValue.Cast< ::zpp_nape::callbacks::ZPP_InteractionListener >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Listener_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { types=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { events=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void ZPP_Listener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"));
	outFields->push(HX_HCSTRING("precedence","\x0a","\xf6","\xfc","\xee"));
	outFields->push(HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"));
	outFields->push(HX_HCSTRING("constraint","\x5d","\x00","\xcc","\x5a"));
	outFields->push(HX_HCSTRING("interaction","\xd2","\x37","\x59","\x3c"));
	outFields->push(HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::callbacks::Listener*/ ,(int)offsetof(ZPP_Listener_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsInt,(int)offsetof(ZPP_Listener_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(ZPP_Listener_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(ZPP_Listener_obj,event),HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75")},
	{hx::fsInt,(int)offsetof(ZPP_Listener_obj,precedence),HX_HCSTRING("precedence","\x0a","\xf6","\xfc","\xee")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_BodyListener*/ ,(int)offsetof(ZPP_Listener_obj,body),HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_ConstraintListener*/ ,(int)offsetof(ZPP_Listener_obj,constraint),HX_HCSTRING("constraint","\x5d","\x00","\xcc","\x5a")},
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_InteractionListener*/ ,(int)offsetof(ZPP_Listener_obj,interaction),HX_HCSTRING("interaction","\xd2","\x37","\x59","\x3c")},
	{hx::fsObject /*::zpp_nape::space::ZPP_Space*/ ,(int)offsetof(ZPP_Listener_obj,space),HX_HCSTRING("space","\xc6","\x8c","\x66","\x81")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &ZPP_Listener_obj::internal,HX_HCSTRING("internal","\x3d","\x67","\x76","\x28")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &ZPP_Listener_obj::types,HX_HCSTRING("types","\x79","\x70","\xcb","\x1a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &ZPP_Listener_obj::events,HX_HCSTRING("events","\x19","\x4f","\x6a","\x96")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"),
	HX_HCSTRING("precedence","\x0a","\xf6","\xfc","\xee"),
	HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"),
	HX_HCSTRING("constraint","\x5d","\x00","\xcc","\x5a"),
	HX_HCSTRING("interaction","\xd2","\x37","\x59","\x3c"),
	HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"),
	HX_HCSTRING("swapEvent","\x87","\xd8","\x71","\xeb"),
	HX_HCSTRING("invalidate_precedence","\x8e","\xf5","\x4a","\xdf"),
	HX_HCSTRING("addedToSpace","\x6b","\x44","\xb0","\x09"),
	HX_HCSTRING("removedFromSpace","\x3c","\x43","\xd1","\xb7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Listener_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Listener_obj::internal,"internal");
	HX_MARK_MEMBER_NAME(ZPP_Listener_obj::types,"types");
	HX_MARK_MEMBER_NAME(ZPP_Listener_obj::events,"events");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Listener_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Listener_obj::internal,"internal");
	HX_VISIT_MEMBER_NAME(ZPP_Listener_obj::types,"types");
	HX_VISIT_MEMBER_NAME(ZPP_Listener_obj::events,"events");
};

#endif

hx::Class ZPP_Listener_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("internal","\x3d","\x67","\x76","\x28"),
	HX_HCSTRING("types","\x79","\x70","\xcb","\x1a"),
	HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"),
	HX_HCSTRING("setlt","\xaa","\xa6","\x2f","\x7a"),
	::String(null()) };

void ZPP_Listener_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.callbacks.ZPP_Listener","\xfa","\xd3","\x9c","\x56");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Listener_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Listener_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Listener_obj >;
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

void ZPP_Listener_obj::__boot()
{
	internal= false;
struct _Function_0_1{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/callbacks/Listener.hx",182,0x87b155a7)
		{
			HX_STACK_LINE(182)
			::nape::callbacks::ListenerType tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				::nape::callbacks::ListenerType tmp1 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(182)
				bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(182)
				if ((tmp2)){
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(182)
					::nape::callbacks::ListenerType tmp3 = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY = tmp3;
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(182)
				tmp = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_BODY;
			}
			HX_STACK_LINE(182)
			::nape::callbacks::ListenerType tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				::nape::callbacks::ListenerType tmp2 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(182)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(182)
				if ((tmp3)){
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(182)
					::nape::callbacks::ListenerType tmp4 = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT = tmp4;
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(182)
				tmp1 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_CONSTRAINT;
			}
			HX_STACK_LINE(182)
			::nape::callbacks::ListenerType tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				::nape::callbacks::ListenerType tmp3 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(182)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(182)
				if ((tmp4)){
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(182)
					::nape::callbacks::ListenerType tmp5 = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION = tmp5;
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(182)
				tmp2 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_INTERACTION;
			}
			HX_STACK_LINE(182)
			::nape::callbacks::ListenerType tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				::nape::callbacks::ListenerType tmp4 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(182)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(182)
				if ((tmp5)){
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(182)
					::nape::callbacks::ListenerType tmp6 = ::nape::callbacks::ListenerType_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE = tmp6;
					HX_STACK_LINE(182)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(182)
				tmp3 = ::zpp_nape::util::ZPP_Flags_obj::ListenerType_PRE;
			}
			HX_STACK_LINE(182)
			return Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3);
		}
		return null();
	}
};
	types= _Function_0_1::Block();
struct _Function_0_2{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/callbacks/Listener.hx",183,0x87b155a7)
		{
			HX_STACK_LINE(183)
			::nape::callbacks::CbEvent tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				::nape::callbacks::CbEvent tmp1 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(183)
				bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(183)
				if ((tmp2)){
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(183)
					::nape::callbacks::CbEvent tmp3 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = tmp3;
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(183)
				tmp = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
			}
			HX_STACK_LINE(183)
			::nape::callbacks::CbEvent tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				::nape::callbacks::CbEvent tmp2 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(183)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(183)
				if ((tmp3)){
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(183)
					::nape::callbacks::CbEvent tmp4 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_END = tmp4;
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(183)
				tmp1 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_END;
			}
			HX_STACK_LINE(183)
			::nape::callbacks::CbEvent tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				::nape::callbacks::CbEvent tmp3 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(183)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(183)
				if ((tmp4)){
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(183)
					::nape::callbacks::CbEvent tmp5 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE = tmp5;
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(183)
				tmp2 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_WAKE;
			}
			HX_STACK_LINE(183)
			::nape::callbacks::CbEvent tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				::nape::callbacks::CbEvent tmp4 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(183)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(183)
				if ((tmp5)){
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(183)
					::nape::callbacks::CbEvent tmp6 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP = tmp6;
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(183)
				tmp3 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_SLEEP;
			}
			HX_STACK_LINE(183)
			::nape::callbacks::CbEvent tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				::nape::callbacks::CbEvent tmp5 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(183)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(183)
				if ((tmp6)){
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(183)
					::nape::callbacks::CbEvent tmp7 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK = tmp7;
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(183)
				tmp4 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BREAK;
			}
			HX_STACK_LINE(183)
			::nape::callbacks::CbEvent tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				::nape::callbacks::CbEvent tmp6 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(183)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(183)
				if ((tmp7)){
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(183)
					::nape::callbacks::CbEvent tmp8 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE = tmp8;
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(183)
				tmp5 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_PRE;
			}
			HX_STACK_LINE(183)
			::nape::callbacks::CbEvent tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				::nape::callbacks::CbEvent tmp7 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(183)
				bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(183)
				if ((tmp8)){
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(183)
					::nape::callbacks::CbEvent tmp9 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING = tmp9;
					HX_STACK_LINE(183)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(183)
				tmp6 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_ONGOING;
			}
			HX_STACK_LINE(183)
			return Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6);
		}
		return null();
	}
};
	events= _Function_0_2::Block();
}

} // end namespace zpp_nape
} // end namespace callbacks
