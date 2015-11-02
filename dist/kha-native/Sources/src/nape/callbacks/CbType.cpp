#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_OptionType
#include <nape/callbacks/OptionType.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_phys_InteractorList
#include <nape/phys/InteractorList.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor
#include <zpp_nape/util/ZNPList_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ConstraintList
#include <zpp_nape/util/ZPP_ConstraintList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_InteractorList
#include <zpp_nape/util/ZPP_InteractorList.h>
#endif
namespace nape{
namespace callbacks{

Void CbType_obj::__construct()
{
HX_STACK_FRAME("nape.callbacks.CbType","new",0x0178d531,"nape.callbacks.CbType.new","nape/callbacks/CbType.hx",179,0x6262b7dd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(183)
	this->zpp_inner = null();
	HX_STACK_LINE(198)
	::zpp_nape::callbacks::ZPP_CbType tmp = ::zpp_nape::callbacks::ZPP_CbType_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	this->zpp_inner = tmp;
	HX_STACK_LINE(199)
	::zpp_nape::callbacks::ZPP_CbType tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(199)
	tmp1->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//CbType_obj::~CbType_obj() { }

Dynamic CbType_obj::__CreateEmpty() { return  new CbType_obj; }
hx::ObjectPtr< CbType_obj > CbType_obj::__new()
{  hx::ObjectPtr< CbType_obj > _result_ = new CbType_obj();
	_result_->__construct();
	return _result_;}

Dynamic CbType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CbType_obj > _result_ = new CbType_obj();
	_result_->__construct();
	return _result_;}

int CbType_obj::get_id( ){
	HX_STACK_FRAME("nape.callbacks.CbType","get_id",0x562b06f3,"nape.callbacks.CbType.get_id","nape/callbacks/CbType.hx",189,0x6262b7dd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	::zpp_nape::callbacks::ZPP_CbType tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	int tmp1 = tmp->id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(190)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_id,return )

::nape::callbacks::OptionType CbType_obj::including( Dynamic includes){
	HX_STACK_FRAME("nape.callbacks.CbType","including",0x301a38f6,"nape.callbacks.CbType.including","nape/callbacks/CbType.hx",267,0x6262b7dd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(includes,"includes")
	HX_STACK_LINE(268)
	::nape::callbacks::OptionType tmp = ::nape::callbacks::OptionType_obj::__new(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	Dynamic tmp1 = includes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	::nape::callbacks::OptionType tmp2 = tmp->including(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(268)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(CbType_obj,including,return )

::nape::callbacks::OptionType CbType_obj::excluding( Dynamic excludes){
	HX_STACK_FRAME("nape.callbacks.CbType","excluding",0x204d0a28,"nape.callbacks.CbType.excluding","nape/callbacks/CbType.hx",283,0x6262b7dd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(excludes,"excludes")
	HX_STACK_LINE(284)
	::nape::callbacks::OptionType tmp = ::nape::callbacks::OptionType_obj::__new(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(284)
	Dynamic tmp1 = excludes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(284)
	::nape::callbacks::OptionType tmp2 = tmp->excluding(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(284)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(CbType_obj,excluding,return )

Dynamic CbType_obj::get_userData( ){
	HX_STACK_FRAME("nape.callbacks.CbType","get_userData",0x1328a32d,"nape.callbacks.CbType.get_userData","nape/callbacks/CbType.hx",299,0x6262b7dd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(300)
	::zpp_nape::callbacks::ZPP_CbType tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(300)
	Dynamic tmp1 = tmp->userData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(300)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(300)
	if ((tmp2)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/callbacks/CbType.hx",301,0x6262b7dd)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(301)
		Dynamic tmp3 = _Function_2_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(301)
		::zpp_nape::callbacks::ZPP_CbType tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(301)
		tmp4->userData = tmp3;
	}
	HX_STACK_LINE(303)
	::zpp_nape::callbacks::ZPP_CbType tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(303)
	Dynamic tmp4 = tmp3->userData;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(303)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_userData,return )

::nape::phys::InteractorList CbType_obj::get_interactors( ){
	HX_STACK_FRAME("nape.callbacks.CbType","get_interactors",0x9600f9e2,"nape.callbacks.CbType.get_interactors","nape/callbacks/CbType.hx",314,0x6262b7dd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(315)
	::zpp_nape::callbacks::ZPP_CbType tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(315)
	::nape::phys::InteractorList tmp1 = tmp->wrap_interactors;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(315)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(315)
	if ((tmp2)){
		HX_STACK_LINE(316)
		::zpp_nape::callbacks::ZPP_CbType tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(316)
		::zpp_nape::util::ZNPList_ZPP_Interactor tmp4 = tmp3->interactors;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(316)
		::nape::phys::InteractorList tmp5 = ::zpp_nape::util::ZPP_InteractorList_obj::get(tmp4,true);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(316)
		::zpp_nape::callbacks::ZPP_CbType tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(316)
		tmp6->wrap_interactors = tmp5;
	}
	HX_STACK_LINE(318)
	::zpp_nape::callbacks::ZPP_CbType tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(318)
	::nape::phys::InteractorList tmp4 = tmp3->wrap_interactors;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(318)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_interactors,return )

::nape::constraint::ConstraintList CbType_obj::get_constraints( ){
	HX_STACK_FRAME("nape.callbacks.CbType","get_constraints",0x7157835e,"nape.callbacks.CbType.get_constraints","nape/callbacks/CbType.hx",329,0x6262b7dd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(330)
	::zpp_nape::callbacks::ZPP_CbType tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(330)
	::nape::constraint::ConstraintList tmp1 = tmp->wrap_constraints;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(330)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(330)
	if ((tmp2)){
		HX_STACK_LINE(331)
		::zpp_nape::callbacks::ZPP_CbType tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(331)
		::zpp_nape::util::ZNPList_ZPP_Constraint tmp4 = tmp3->constraints;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(331)
		::nape::constraint::ConstraintList tmp5 = ::zpp_nape::util::ZPP_ConstraintList_obj::get(tmp4,true);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(331)
		::zpp_nape::callbacks::ZPP_CbType tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(331)
		tmp6->wrap_constraints = tmp5;
	}
	HX_STACK_LINE(333)
	::zpp_nape::callbacks::ZPP_CbType tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(333)
	::nape::constraint::ConstraintList tmp4 = tmp3->wrap_constraints;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(333)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_constraints,return )

::String CbType_obj::toString( ){
	HX_STACK_FRAME("nape.callbacks.CbType","toString",0xef31b63b,"nape.callbacks.CbType.toString","nape/callbacks/CbType.hx",338,0x6262b7dd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(339)
	::nape::callbacks::CbType tmp = ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_BODY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(339)
	bool tmp1 = (hx::ObjectPtr<OBJ_>(this) == tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(339)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(339)
	if ((tmp1)){
		HX_STACK_LINE(339)
		tmp2 = HX_HCSTRING("ANY_BODY","\x35","\xa4","\x09","\xa6");
	}
	else{
		HX_STACK_LINE(340)
		::nape::callbacks::CbType tmp3 = ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_SHAPE;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(340)
		bool tmp4 = (hx::ObjectPtr<OBJ_>(this) == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(340)
		if ((tmp4)){
			HX_STACK_LINE(340)
			tmp2 = HX_HCSTRING("ANY_SHAPE","\x0e","\x1a","\x93","\x67");
		}
		else{
			HX_STACK_LINE(341)
			::nape::callbacks::CbType tmp5 = ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_COMPOUND;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(341)
			bool tmp6 = (hx::ObjectPtr<OBJ_>(this) == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(341)
			if ((tmp6)){
				HX_STACK_LINE(341)
				tmp2 = HX_HCSTRING("ANY_COMPOUND","\x7e","\x7a","\x2e","\xf2");
			}
			else{
				HX_STACK_LINE(342)
				::nape::callbacks::CbType tmp7 = ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_CONSTRAINT;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(342)
				bool tmp8 = (hx::ObjectPtr<OBJ_>(this) == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(342)
				if ((tmp8)){
					HX_STACK_LINE(342)
					tmp2 = HX_HCSTRING("ANY_CONSTRAINT","\x30","\xc6","\x94","\xa9");
				}
				else{
					HX_STACK_LINE(343)
					::zpp_nape::callbacks::ZPP_CbType tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(343)
					int tmp10 = tmp9->id;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(343)
					tmp2 = (HX_HCSTRING("CbType#","\xea","\x50","\x10","\xbf") + tmp10);
				}
			}
		}
	}
	HX_STACK_LINE(339)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,toString,return )

::nape::callbacks::CbType CbType_obj::get_ANY_BODY( ){
	HX_STACK_FRAME("nape.callbacks.CbType","get_ANY_BODY",0xb409b14d,"nape.callbacks.CbType.get_ANY_BODY","nape/callbacks/CbType.hx",212,0x6262b7dd)
	HX_STACK_LINE(213)
	::nape::callbacks::CbType tmp = ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_BODY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(213)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_ANY_BODY,return )

::nape::callbacks::CbType CbType_obj::get_ANY_CONSTRAINT( ){
	HX_STACK_FRAME("nape.callbacks.CbType","get_ANY_CONSTRAINT",0xb49fb548,"nape.callbacks.CbType.get_ANY_CONSTRAINT","nape/callbacks/CbType.hx",225,0x6262b7dd)
	HX_STACK_LINE(226)
	::nape::callbacks::CbType tmp = ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_CONSTRAINT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(226)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_ANY_CONSTRAINT,return )

::nape::callbacks::CbType CbType_obj::get_ANY_SHAPE( ){
	HX_STACK_FRAME("nape.callbacks.CbType","get_ANY_SHAPE",0x999e81f6,"nape.callbacks.CbType.get_ANY_SHAPE","nape/callbacks/CbType.hx",238,0x6262b7dd)
	HX_STACK_LINE(239)
	::nape::callbacks::CbType tmp = ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_SHAPE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_ANY_SHAPE,return )

::nape::callbacks::CbType CbType_obj::get_ANY_COMPOUND( ){
	HX_STACK_FRAME("nape.callbacks.CbType","get_ANY_COMPOUND",0x0756f396,"nape.callbacks.CbType.get_ANY_COMPOUND","nape/callbacks/CbType.hx",251,0x6262b7dd)
	HX_STACK_LINE(252)
	::nape::callbacks::CbType tmp = ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_COMPOUND;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CbType_obj,get_ANY_COMPOUND,return )


CbType_obj::CbType_obj()
{
}

void CbType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CbType);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void CbType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic CbType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == hx::paccAlways) return get_id(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { return get_id_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { if (inCallProp == hx::paccAlways) return get_userData(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"including") ) { return including_dyn(); }
		if (HX_FIELD_EQ(inName,"excluding") ) { return excluding_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactors") ) { if (inCallProp == hx::paccAlways) return get_interactors(); }
		if (HX_FIELD_EQ(inName,"constraints") ) { if (inCallProp == hx::paccAlways) return get_constraints(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_userData") ) { return get_userData_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_interactors") ) { return get_interactors_dyn(); }
		if (HX_FIELD_EQ(inName,"get_constraints") ) { return get_constraints_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool CbType_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"ANY_BODY") ) { if (inCallProp == hx::paccAlways) { outValue = get_ANY_BODY(); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ANY_SHAPE") ) { if (inCallProp == hx::paccAlways) { outValue = get_ANY_SHAPE(); return true; } }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_ANY_BODY") ) { outValue = get_ANY_BODY_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ANY_COMPOUND") ) { if (inCallProp == hx::paccAlways) { outValue = get_ANY_COMPOUND(); return true; } }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_ANY_SHAPE") ) { outValue = get_ANY_SHAPE_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ANY_CONSTRAINT") ) { if (inCallProp == hx::paccAlways) { outValue = get_ANY_CONSTRAINT(); return true; } }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_ANY_COMPOUND") ) { outValue = get_ANY_COMPOUND_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_ANY_CONSTRAINT") ) { outValue = get_ANY_CONSTRAINT_dyn(); return true;  }
	}
	return false;
}

Dynamic CbType_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CbType_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void CbType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("userData","\x15","\x96","\x28","\x05"));
	outFields->push(HX_HCSTRING("interactors","\xfa","\xc7","\x5d","\x3c"));
	outFields->push(HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::callbacks::ZPP_CbType*/ ,(int)offsetof(CbType_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_id","\x24","\xf3","\x2f","\xa3"),
	HX_HCSTRING("including","\x65","\x41","\x54","\xfc"),
	HX_HCSTRING("excluding","\x97","\x12","\x87","\xec"),
	HX_HCSTRING("get_userData","\x1e","\x4a","\x42","\xba"),
	HX_HCSTRING("get_interactors","\x91","\x7f","\x3f","\xfd"),
	HX_HCSTRING("get_constraints","\x0d","\x09","\x96","\xd8"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CbType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CbType_obj::__mClass,"__mClass");
};

#endif

hx::Class CbType_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_ANY_BODY","\x3e","\x58","\x23","\x5b"),
	HX_HCSTRING("get_ANY_CONSTRAINT","\xf9","\xa6","\x2e","\x45"),
	HX_HCSTRING("get_ANY_SHAPE","\xe5","\xed","\xf6","\x28"),
	HX_HCSTRING("get_ANY_COMPOUND","\x07","\x67","\xcd","\xf6"),
	::String(null()) };

void CbType_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.callbacks.CbType","\xbf","\x68","\xe0","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CbType_obj::__GetStatic;
	__mClass->mSetStaticField = &CbType_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CbType_obj >;
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
