#include <hxcpp.h>

#ifndef INCLUDED_nape_space_Broadphase
#include <nape/space/Broadphase.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace space{

Void Broadphase_obj::__construct()
{
HX_STACK_FRAME("nape.space.Broadphase","new",0x8323b739,"nape.space.Broadphase.new","nape/space/Broadphase.hx",181,0xebaaca55)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(183)
	bool tmp = ::zpp_nape::util::ZPP_Flags_obj::internal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	if ((tmp1)){
		HX_STACK_LINE(183)
		::String tmp2 = HX_HCSTRING("Error: Cannot instantiate Broadphase","\xde","\xaf","\xcc","\x26");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		::String tmp3 = (tmp2 + HX_HCSTRING(" derp!","\xa2","\xfd","\x96","\xa2"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		HX_STACK_DO_THROW(tmp3);
	}
}
;
	return null();
}

//Broadphase_obj::~Broadphase_obj() { }

Dynamic Broadphase_obj::__CreateEmpty() { return  new Broadphase_obj; }
hx::ObjectPtr< Broadphase_obj > Broadphase_obj::__new()
{  hx::ObjectPtr< Broadphase_obj > _result_ = new Broadphase_obj();
	_result_->__construct();
	return _result_;}

Dynamic Broadphase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Broadphase_obj > _result_ = new Broadphase_obj();
	_result_->__construct();
	return _result_;}

::String Broadphase_obj::toString( ){
	HX_STACK_FRAME("nape.space.Broadphase","toString",0xffae7733,"nape.space.Broadphase.toString","nape/space/Broadphase.hx",192,0xebaaca55)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::nape::space::Broadphase tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		::nape::space::Broadphase tmp1 = ::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		if ((tmp2)){
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(192)
			::nape::space::Broadphase tmp3 = ::nape::space::Broadphase_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE = tmp3;
			HX_STACK_LINE(192)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(192)
		tmp = ::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE;
	}
	HX_STACK_LINE(192)
	bool tmp1 = (hx::ObjectPtr<OBJ_>(this) == tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	if ((tmp1)){
		HX_STACK_LINE(192)
		return HX_HCSTRING("DYNAMIC_AABB_TREE","\x7d","\x0a","\x8a","\xc7");
	}
	else{
		HX_STACK_LINE(193)
		::nape::space::Broadphase tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			::nape::space::Broadphase tmp3 = ::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(193)
			if ((tmp4)){
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(193)
				::nape::space::Broadphase tmp5 = ::nape::space::Broadphase_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE = tmp5;
				HX_STACK_LINE(193)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(193)
			tmp2 = ::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE;
		}
		HX_STACK_LINE(193)
		bool tmp3 = (hx::ObjectPtr<OBJ_>(this) == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		if ((tmp3)){
			HX_STACK_LINE(193)
			return HX_HCSTRING("SWEEP_AND_PRUNE","\xcf","\x6c","\xe2","\xe7");
		}
		else{
			HX_STACK_LINE(194)
			return HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
	}
	HX_STACK_LINE(192)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Broadphase_obj,toString,return )

::nape::space::Broadphase Broadphase_obj::get_DYNAMIC_AABB_TREE( ){
	HX_STACK_FRAME("nape.space.Broadphase","get_DYNAMIC_AABB_TREE",0xb10f9e6d,"nape.space.Broadphase.get_DYNAMIC_AABB_TREE","nape/space/Broadphase.hx",210,0xebaaca55)
	HX_STACK_LINE(211)
	::nape::space::Broadphase tmp = ::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(211)
	if ((tmp1)){
		HX_STACK_LINE(212)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(213)
		::nape::space::Broadphase tmp2 = ::nape::space::Broadphase_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(213)
		::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE = tmp2;
		HX_STACK_LINE(214)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(216)
	::nape::space::Broadphase tmp2 = ::zpp_nape::util::ZPP_Flags_obj::Broadphase_DYNAMIC_AABB_TREE;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(216)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Broadphase_obj,get_DYNAMIC_AABB_TREE,return )

::nape::space::Broadphase Broadphase_obj::get_SWEEP_AND_PRUNE( ){
	HX_STACK_FRAME("nape.space.Broadphase","get_SWEEP_AND_PRUNE",0xd31624bf,"nape.space.Broadphase.get_SWEEP_AND_PRUNE","nape/space/Broadphase.hx",238,0xebaaca55)
	HX_STACK_LINE(239)
	::nape::space::Broadphase tmp = ::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	if ((tmp1)){
		HX_STACK_LINE(240)
		::zpp_nape::util::ZPP_Flags_obj::internal = true;
		HX_STACK_LINE(241)
		::nape::space::Broadphase tmp2 = ::nape::space::Broadphase_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(241)
		::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE = tmp2;
		HX_STACK_LINE(242)
		::zpp_nape::util::ZPP_Flags_obj::internal = false;
	}
	HX_STACK_LINE(244)
	::nape::space::Broadphase tmp2 = ::zpp_nape::util::ZPP_Flags_obj::Broadphase_SWEEP_AND_PRUNE;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(244)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Broadphase_obj,get_SWEEP_AND_PRUNE,return )


Broadphase_obj::Broadphase_obj()
{
}

Dynamic Broadphase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Broadphase_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"SWEEP_AND_PRUNE") ) { if (inCallProp == hx::paccAlways) { outValue = get_SWEEP_AND_PRUNE(); return true; } }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DYNAMIC_AABB_TREE") ) { if (inCallProp == hx::paccAlways) { outValue = get_DYNAMIC_AABB_TREE(); return true; } }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_SWEEP_AND_PRUNE") ) { outValue = get_SWEEP_AND_PRUNE_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_DYNAMIC_AABB_TREE") ) { outValue = get_DYNAMIC_AABB_TREE_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Broadphase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Broadphase_obj::__mClass,"__mClass");
};

#endif

hx::Class Broadphase_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_DYNAMIC_AABB_TREE","\x54","\x0d","\x38","\x46"),
	HX_HCSTRING("get_SWEEP_AND_PRUNE","\xe6","\x3b","\xed","\x72"),
	::String(null()) };

void Broadphase_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.space.Broadphase","\xc7","\xa6","\xdf","\x6f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Broadphase_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Broadphase_obj >;
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
} // end namespace space
