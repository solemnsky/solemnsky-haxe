#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_PreCallback
#include <nape/callbacks/PreCallback.h>
#endif
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
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
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
namespace nape{
namespace callbacks{

Void PreCallback_obj::__construct()
{
HX_STACK_FRAME("nape.callbacks.PreCallback","new",0xf820f574,"nape.callbacks.PreCallback.new","nape/callbacks/PreCallback.hx",185,0x4a2c4f3e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(185)
	super::__construct();
}
;
	return null();
}

//PreCallback_obj::~PreCallback_obj() { }

Dynamic PreCallback_obj::__CreateEmpty() { return  new PreCallback_obj; }
hx::ObjectPtr< PreCallback_obj > PreCallback_obj::__new()
{  hx::ObjectPtr< PreCallback_obj > _result_ = new PreCallback_obj();
	_result_->__construct();
	return _result_;}

Dynamic PreCallback_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PreCallback_obj > _result_ = new PreCallback_obj();
	_result_->__construct();
	return _result_;}

::nape::dynamics::Arbiter PreCallback_obj::get_arbiter( ){
	HX_STACK_FRAME("nape.callbacks.PreCallback","get_arbiter",0xfb267914,"nape.callbacks.PreCallback.get_arbiter","nape/callbacks/PreCallback.hx",196,0x4a2c4f3e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(197)
	::zpp_nape::callbacks::ZPP_Callback tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(197)
	::nape::dynamics::Arbiter tmp1 = tmp->pre_arbiter->wrapper();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(197)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(PreCallback_obj,get_arbiter,return )

::nape::phys::Interactor PreCallback_obj::get_int1( ){
	HX_STACK_FRAME("nape.callbacks.PreCallback","get_int1",0x9a05f257,"nape.callbacks.PreCallback.get_int1","nape/callbacks/PreCallback.hx",207,0x4a2c4f3e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(208)
	::zpp_nape::callbacks::ZPP_Callback tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	::nape::phys::Interactor tmp1 = tmp->int1->outer_i;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(PreCallback_obj,get_int1,return )

::nape::phys::Interactor PreCallback_obj::get_int2( ){
	HX_STACK_FRAME("nape.callbacks.PreCallback","get_int2",0x9a05f258,"nape.callbacks.PreCallback.get_int2","nape/callbacks/PreCallback.hx",218,0x4a2c4f3e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(219)
	::zpp_nape::callbacks::ZPP_Callback tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(219)
	::nape::phys::Interactor tmp1 = tmp->int2->outer_i;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(219)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(PreCallback_obj,get_int2,return )

bool PreCallback_obj::get_swapped( ){
	HX_STACK_FRAME("nape.callbacks.PreCallback","get_swapped",0x58a88147,"nape.callbacks.PreCallback.get_swapped","nape/callbacks/PreCallback.hx",232,0x4a2c4f3e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(233)
	::zpp_nape::callbacks::ZPP_Callback tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(233)
	bool tmp1 = tmp->pre_swapped;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(233)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(PreCallback_obj,get_swapped,return )

::String PreCallback_obj::toString( ){
	HX_STACK_FRAME("nape.callbacks.PreCallback","toString",0x0cfec318,"nape.callbacks.PreCallback.toString","nape/callbacks/PreCallback.hx",238,0x4a2c4f3e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(239)
	::String ret = HX_HCSTRING("Cb:PRE:","\xf2","\x9c","\x74","\xab");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(240)
	::zpp_nape::callbacks::ZPP_Callback tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(240)
	::nape::phys::Interactor tmp1 = tmp->int1->outer_i;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(240)
	::String tmp2 = tmp1->toString();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(240)
	::String tmp3 = (HX_HCSTRING(":","\x3a","\x00","\x00","\x00") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(240)
	::String tmp4 = (tmp3 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(240)
	::zpp_nape::callbacks::ZPP_Callback tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(240)
	::nape::phys::Interactor tmp6 = tmp5->int2->outer_i;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(240)
	::String tmp7 = tmp6->toString();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(240)
	::String tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(240)
	hx::AddEq(ret,tmp8);
	HX_STACK_LINE(241)
	::zpp_nape::callbacks::ZPP_Callback tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(241)
	::nape::dynamics::Arbiter tmp10 = tmp9->pre_arbiter->wrapper();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(241)
	::String tmp11 = tmp10->toString();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(241)
	::String tmp12 = (HX_HCSTRING(" : ","\xc6","\x7a","\x18","\x00") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(241)
	hx::AddEq(ret,tmp12);
	HX_STACK_LINE(242)
	::zpp_nape::callbacks::ZPP_Callback tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(242)
	::nape::callbacks::Listener tmp14 = tmp13->listener->outer;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(242)
	::String tmp15 = ::Std_obj::string(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(242)
	::String tmp16 = (HX_HCSTRING(" : listnener: ","\x86","\x62","\x54","\x1e") + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(242)
	hx::AddEq(ret,tmp16);
	HX_STACK_LINE(243)
	::String tmp17 = ret;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(243)
	return tmp17;
}



PreCallback_obj::PreCallback_obj()
{
}

Dynamic PreCallback_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"int1") ) { if (inCallProp == hx::paccAlways) return get_int1(); }
		if (HX_FIELD_EQ(inName,"int2") ) { if (inCallProp == hx::paccAlways) return get_int2(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"arbiter") ) { if (inCallProp == hx::paccAlways) return get_arbiter(); }
		if (HX_FIELD_EQ(inName,"swapped") ) { if (inCallProp == hx::paccAlways) return get_swapped(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_int1") ) { return get_int1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_int2") ) { return get_int2_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_arbiter") ) { return get_arbiter_dyn(); }
		if (HX_FIELD_EQ(inName,"get_swapped") ) { return get_swapped_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

void PreCallback_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("arbiter","\xe9","\xbf","\x55","\x09"));
	outFields->push(HX_HCSTRING("int1","\x62","\x44","\xbb","\x45"));
	outFields->push(HX_HCSTRING("int2","\x63","\x44","\xbb","\x45"));
	outFields->push(HX_HCSTRING("swapped","\x1c","\xc8","\xd7","\x66"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_arbiter","\x00","\x20","\x50","\x8f"),
	HX_HCSTRING("get_int1","\xeb","\xff","\x75","\xc5"),
	HX_HCSTRING("get_int2","\xec","\xff","\x75","\xc5"),
	HX_HCSTRING("get_swapped","\x33","\x28","\xd2","\xec"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PreCallback_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PreCallback_obj::__mClass,"__mClass");
};

#endif

hx::Class PreCallback_obj::__mClass;

void PreCallback_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.callbacks.PreCallback","\x82","\x6b","\x3c","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PreCallback_obj >;
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
