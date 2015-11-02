#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionCallback
#include <nape/callbacks/InteractionCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <zpp_nape/callbacks/ZPP_Callback.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
namespace nape{
namespace callbacks{

Void InteractionCallback_obj::__construct()
{
HX_STACK_FRAME("nape.callbacks.InteractionCallback","new",0x346421a3,"nape.callbacks.InteractionCallback.new","nape/callbacks/InteractionCallback.hx",185,0xad3d8fef)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(185)
	super::__construct();
}
;
	return null();
}

//InteractionCallback_obj::~InteractionCallback_obj() { }

Dynamic InteractionCallback_obj::__CreateEmpty() { return  new InteractionCallback_obj; }
hx::ObjectPtr< InteractionCallback_obj > InteractionCallback_obj::__new()
{  hx::ObjectPtr< InteractionCallback_obj > _result_ = new InteractionCallback_obj();
	_result_->__construct();
	return _result_;}

Dynamic InteractionCallback_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InteractionCallback_obj > _result_ = new InteractionCallback_obj();
	_result_->__construct();
	return _result_;}

::nape::phys::Interactor InteractionCallback_obj::get_int1( ){
	HX_STACK_FRAME("nape.callbacks.InteractionCallback","get_int1",0x89893bc8,"nape.callbacks.InteractionCallback.get_int1","nape/callbacks/InteractionCallback.hx",195,0xad3d8fef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	::zpp_nape::callbacks::ZPP_Callback tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	::nape::phys::Interactor tmp1 = tmp->int1->outer_i;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionCallback_obj,get_int1,return )

::nape::phys::Interactor InteractionCallback_obj::get_int2( ){
	HX_STACK_FRAME("nape.callbacks.InteractionCallback","get_int2",0x89893bc9,"nape.callbacks.InteractionCallback.get_int2","nape/callbacks/InteractionCallback.hx",206,0xad3d8fef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(207)
	::zpp_nape::callbacks::ZPP_Callback tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(207)
	::nape::phys::Interactor tmp1 = tmp->int2->outer_i;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(207)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionCallback_obj,get_int2,return )

::nape::dynamics::ArbiterList InteractionCallback_obj::get_arbiters( ){
	HX_STACK_FRAME("nape.callbacks.InteractionCallback","get_arbiters",0x8426ced0,"nape.callbacks.InteractionCallback.get_arbiters","nape/callbacks/InteractionCallback.hx",217,0xad3d8fef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	::zpp_nape::callbacks::ZPP_Callback tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	::nape::dynamics::ArbiterList tmp1 = tmp->wrap_arbiters;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionCallback_obj,get_arbiters,return )

::String InteractionCallback_obj::toString( ){
	HX_STACK_FRAME("nape.callbacks.InteractionCallback","toString",0xfc820c89,"nape.callbacks.InteractionCallback.toString","nape/callbacks/InteractionCallback.hx",223,0xad3d8fef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(224)
	::String ret = HX_HCSTRING("Cb:","\x9b","\x2c","\x33","\x00");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(225)
	Array< ::String > tmp = Array_obj< ::String >::__new().Add(HX_HCSTRING("BEGIN","\x09","\x22","\x44","\x2e")).Add(HX_HCSTRING("END","\xbb","\x9f","\x34","\x00")).Add(HX_HCSTRING("","\x00","\x00","\x00","\x00")).Add(HX_HCSTRING("","\x00","\x00","\x00","\x00")).Add(HX_HCSTRING("","\x00","\x00","\x00","\x00")).Add(HX_HCSTRING("","\x00","\x00","\x00","\x00")).Add(HX_HCSTRING("ONGOING","\x1b","\x7e","\xd8","\x1a"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	::zpp_nape::callbacks::ZPP_Callback tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(225)
	int tmp2 = tmp1->event;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(225)
	::String tmp3 = tmp->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(225)
	hx::AddEq(ret,tmp3);
	HX_STACK_LINE(226)
	::zpp_nape::callbacks::ZPP_Callback tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(226)
	::nape::phys::Interactor tmp5 = tmp4->int1->outer_i;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(226)
	::String tmp6 = tmp5->toString();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(226)
	::String tmp7 = (HX_HCSTRING(":","\x3a","\x00","\x00","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(226)
	::String tmp8 = (tmp7 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(226)
	::zpp_nape::callbacks::ZPP_Callback tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(226)
	::nape::phys::Interactor tmp10 = tmp9->int2->outer_i;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(226)
	::String tmp11 = tmp10->toString();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(226)
	::String tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(226)
	hx::AddEq(ret,tmp12);
	HX_STACK_LINE(227)
	::zpp_nape::callbacks::ZPP_Callback tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(227)
	::String tmp14 = tmp13->wrap_arbiters->toString();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(227)
	::String tmp15 = (HX_HCSTRING(" : ","\xc6","\x7a","\x18","\x00") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(227)
	hx::AddEq(ret,tmp15);
	HX_STACK_LINE(228)
	::zpp_nape::callbacks::ZPP_Callback tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(228)
	::nape::callbacks::Listener tmp17 = tmp16->listener->outer;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(228)
	::String tmp18 = ::Std_obj::string(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(228)
	::String tmp19 = (HX_HCSTRING(" : listener: ","\x60","\x26","\x46","\xe2") + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(228)
	hx::AddEq(ret,tmp19);
	HX_STACK_LINE(229)
	::String tmp20 = ret;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(229)
	return tmp20;
}



InteractionCallback_obj::InteractionCallback_obj()
{
}

Dynamic InteractionCallback_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"int1") ) { if (inCallProp == hx::paccAlways) return get_int1(); }
		if (HX_FIELD_EQ(inName,"int2") ) { if (inCallProp == hx::paccAlways) return get_int2(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_int1") ) { return get_int1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_int2") ) { return get_int2_dyn(); }
		if (HX_FIELD_EQ(inName,"arbiters") ) { if (inCallProp == hx::paccAlways) return get_arbiters(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_arbiters") ) { return get_arbiters_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

void InteractionCallback_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("int1","\x62","\x44","\xbb","\x45"));
	outFields->push(HX_HCSTRING("int2","\x63","\x44","\xbb","\x45"));
	outFields->push(HX_HCSTRING("arbiters","\x6a","\x2c","\xb2","\x21"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_int1","\xeb","\xff","\x75","\xc5"),
	HX_HCSTRING("get_int2","\xec","\xff","\x75","\xc5"),
	HX_HCSTRING("get_arbiters","\x73","\xe0","\xcb","\xd6"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractionCallback_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractionCallback_obj::__mClass,"__mClass");
};

#endif

hx::Class InteractionCallback_obj::__mClass;

void InteractionCallback_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.callbacks.InteractionCallback","\x31","\x14","\x6c","\xb5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InteractionCallback_obj >;
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
