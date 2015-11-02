#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_InteractionGroup
#include <nape/dynamics/InteractionGroup.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionGroupList
#include <nape/dynamics/InteractionGroupList.h>
#endif
#ifndef INCLUDED_nape_phys_InteractorList
#include <nape/phys/InteractorList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionGroup
#include <zpp_nape/dynamics/ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionGroup
#include <zpp_nape/util/ZNPList_ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor
#include <zpp_nape/util/ZNPList_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_InteractionGroupList
#include <zpp_nape/util/ZPP_InteractionGroupList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_InteractorList
#include <zpp_nape/util/ZPP_InteractorList.h>
#endif
namespace nape{
namespace dynamics{

Void InteractionGroup_obj::__construct(hx::Null< bool >  __o_ignore)
{
HX_STACK_FRAME("nape.dynamics.InteractionGroup","new",0x9c747e33,"nape.dynamics.InteractionGroup.new","nape/dynamics/InteractionGroup.hx",218,0xfcb37cbd)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_ignore,"ignore")
bool ignore = __o_ignore.Default(false);
{
	HX_STACK_LINE(222)
	this->zpp_inner = null();
	HX_STACK_LINE(292)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp = ::zpp_nape::dynamics::ZPP_InteractionGroup_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(292)
	this->zpp_inner = tmp;
	HX_STACK_LINE(293)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(293)
	tmp1->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(294)
	{
		HX_STACK_LINE(294)
		{
			HX_STACK_LINE(294)
			::zpp_nape::dynamics::ZPP_InteractionGroup tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(294)
			bool tmp3 = tmp2->ignore;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(294)
			bool tmp4 = ignore;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(294)
			bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(294)
			if ((tmp5)){
				HX_STACK_LINE(294)
				::zpp_nape::dynamics::ZPP_InteractionGroup tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(294)
				tmp6->invalidate(true);
				HX_STACK_LINE(294)
				::zpp_nape::dynamics::ZPP_InteractionGroup tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(294)
				tmp7->ignore = ignore;
			}
		}
		HX_STACK_LINE(294)
		::zpp_nape::dynamics::ZPP_InteractionGroup tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(294)
		tmp2->ignore;
	}
}
;
	return null();
}

//InteractionGroup_obj::~InteractionGroup_obj() { }

Dynamic InteractionGroup_obj::__CreateEmpty() { return  new InteractionGroup_obj; }
hx::ObjectPtr< InteractionGroup_obj > InteractionGroup_obj::__new(hx::Null< bool >  __o_ignore)
{  hx::ObjectPtr< InteractionGroup_obj > _result_ = new InteractionGroup_obj();
	_result_->__construct(__o_ignore);
	return _result_;}

Dynamic InteractionGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InteractionGroup_obj > _result_ = new InteractionGroup_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::nape::dynamics::InteractionGroup InteractionGroup_obj::get_group( ){
	HX_STACK_FRAME("nape.dynamics.InteractionGroup","get_group",0x992f5da9,"nape.dynamics.InteractionGroup.get_group","nape/dynamics/InteractionGroup.hx",229,0xfcb37cbd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(230)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(230)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp1 = tmp->group;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(230)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(230)
	::nape::dynamics::InteractionGroup tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(230)
	if ((tmp2)){
		HX_STACK_LINE(230)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(230)
		::zpp_nape::dynamics::ZPP_InteractionGroup tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(230)
		tmp3 = tmp4->group->outer;
	}
	HX_STACK_LINE(230)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionGroup_obj,get_group,return )

::nape::dynamics::InteractionGroup InteractionGroup_obj::set_group( ::nape::dynamics::InteractionGroup group){
	HX_STACK_FRAME("nape.dynamics.InteractionGroup","set_group",0x7c8049b5,"nape.dynamics.InteractionGroup.set_group","nape/dynamics/InteractionGroup.hx",232,0xfcb37cbd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(group,"group")
	HX_STACK_LINE(233)
	{
		HX_STACK_LINE(235)
		bool tmp = (group == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(235)
		if ((tmp)){
			HX_STACK_LINE(235)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign InteractionGroup to itself","\xab","\x51","\x2b","\xf5"));
		}
		HX_STACK_LINE(237)
		::zpp_nape::dynamics::ZPP_InteractionGroup tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		bool tmp2 = (group == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(237)
		::zpp_nape::dynamics::ZPP_InteractionGroup tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(237)
		if ((tmp2)){
			HX_STACK_LINE(237)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(237)
			tmp3 = group->zpp_inner;
		}
		HX_STACK_LINE(237)
		tmp1->setGroup(tmp3);
	}
	HX_STACK_LINE(239)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp1 = tmp->group;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(239)
	::nape::dynamics::InteractionGroup tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(239)
	if ((tmp2)){
		HX_STACK_LINE(239)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(239)
		::zpp_nape::dynamics::ZPP_InteractionGroup tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(239)
		tmp3 = tmp4->group->outer;
	}
	HX_STACK_LINE(239)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionGroup_obj,set_group,return )

bool InteractionGroup_obj::get_ignore( ){
	HX_STACK_FRAME("nape.dynamics.InteractionGroup","get_ignore",0xe6e32b68,"nape.dynamics.InteractionGroup.get_ignore","nape/dynamics/InteractionGroup.hx",247,0xfcb37cbd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(248)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(248)
	bool tmp1 = tmp->ignore;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(248)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionGroup_obj,get_ignore,return )

bool InteractionGroup_obj::set_ignore( bool ignore){
	HX_STACK_FRAME("nape.dynamics.InteractionGroup","set_ignore",0xea60c9dc,"nape.dynamics.InteractionGroup.set_ignore","nape/dynamics/InteractionGroup.hx",250,0xfcb37cbd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ignore,"ignore")
	HX_STACK_LINE(251)
	{
		HX_STACK_LINE(252)
		::zpp_nape::dynamics::ZPP_InteractionGroup tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(252)
		bool tmp1 = tmp->ignore;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(252)
		bool tmp2 = ignore;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(252)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(252)
		if ((tmp3)){
			HX_STACK_LINE(253)
			::zpp_nape::dynamics::ZPP_InteractionGroup tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(253)
			tmp4->invalidate(true);
			HX_STACK_LINE(254)
			::zpp_nape::dynamics::ZPP_InteractionGroup tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(254)
			tmp5->ignore = ignore;
		}
	}
	HX_STACK_LINE(257)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(257)
	bool tmp1 = tmp->ignore;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(257)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractionGroup_obj,set_ignore,return )

::nape::phys::InteractorList InteractionGroup_obj::get_interactors( ){
	HX_STACK_FRAME("nape.dynamics.InteractionGroup","get_interactors",0xdbd71de4,"nape.dynamics.InteractionGroup.get_interactors","nape/dynamics/InteractionGroup.hx",268,0xfcb37cbd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(269)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(269)
	::nape::phys::InteractorList tmp1 = tmp->wrap_interactors;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(269)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(269)
	if ((tmp2)){
		HX_STACK_LINE(269)
		::zpp_nape::dynamics::ZPP_InteractionGroup tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(269)
		::zpp_nape::util::ZNPList_ZPP_Interactor tmp4 = tmp3->interactors;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(269)
		::nape::phys::InteractorList tmp5 = ::zpp_nape::util::ZPP_InteractorList_obj::get(tmp4,true);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(269)
		::zpp_nape::dynamics::ZPP_InteractionGroup tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(269)
		tmp6->wrap_interactors = tmp5;
	}
	HX_STACK_LINE(270)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(270)
	::nape::phys::InteractorList tmp4 = tmp3->wrap_interactors;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(270)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionGroup_obj,get_interactors,return )

::nape::dynamics::InteractionGroupList InteractionGroup_obj::get_groups( ){
	HX_STACK_FRAME("nape.dynamics.InteractionGroup","get_groups",0x704296aa,"nape.dynamics.InteractionGroup.get_groups","nape/dynamics/InteractionGroup.hx",282,0xfcb37cbd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(283)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(283)
	::nape::dynamics::InteractionGroupList tmp1 = tmp->wrap_groups;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(283)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(283)
	if ((tmp2)){
		HX_STACK_LINE(283)
		::zpp_nape::dynamics::ZPP_InteractionGroup tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(283)
		::zpp_nape::util::ZNPList_ZPP_InteractionGroup tmp4 = tmp3->groups;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(283)
		::nape::dynamics::InteractionGroupList tmp5 = ::zpp_nape::util::ZPP_InteractionGroupList_obj::get(tmp4,true);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(283)
		::zpp_nape::dynamics::ZPP_InteractionGroup tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(283)
		tmp6->wrap_groups = tmp5;
	}
	HX_STACK_LINE(284)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(284)
	::nape::dynamics::InteractionGroupList tmp4 = tmp3->wrap_groups;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(284)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionGroup_obj,get_groups,return )

::String InteractionGroup_obj::toString( ){
	HX_STACK_FRAME("nape.dynamics.InteractionGroup","toString",0xc30825f9,"nape.dynamics.InteractionGroup.toString","nape/dynamics/InteractionGroup.hx",299,0xfcb37cbd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(300)
	::String ret = HX_HCSTRING("InteractionGroup","\x2d","\x2e","\xee","\x3f");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(301)
	::zpp_nape::dynamics::ZPP_InteractionGroup tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(301)
	bool tmp1 = tmp->ignore;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(301)
	if ((tmp1)){
		HX_STACK_LINE(301)
		hx::AddEq(ret,HX_HCSTRING(":ignore","\xcc","\xa0","\xa5","\xfe"));
	}
	HX_STACK_LINE(302)
	::String tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(302)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractionGroup_obj,toString,return )


InteractionGroup_obj::InteractionGroup_obj()
{
}

void InteractionGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InteractionGroup);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void InteractionGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic InteractionGroup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { if (inCallProp == hx::paccAlways) return get_group(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ignore") ) { if (inCallProp == hx::paccAlways) return get_ignore(); }
		if (HX_FIELD_EQ(inName,"groups") ) { if (inCallProp == hx::paccAlways) return get_groups(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"get_group") ) { return get_group_dyn(); }
		if (HX_FIELD_EQ(inName,"set_group") ) { return set_group_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_ignore") ) { return get_ignore_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ignore") ) { return set_ignore_dyn(); }
		if (HX_FIELD_EQ(inName,"get_groups") ) { return get_groups_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactors") ) { if (inCallProp == hx::paccAlways) return get_interactors(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_interactors") ) { return get_interactors_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InteractionGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { if (inCallProp == hx::paccAlways) return set_group(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ignore") ) { if (inCallProp == hx::paccAlways) return set_ignore(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::dynamics::ZPP_InteractionGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool InteractionGroup_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void InteractionGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));
	outFields->push(HX_HCSTRING("ignore","\x12","\xb9","\xc8","\x92"));
	outFields->push(HX_HCSTRING("interactors","\xfa","\xc7","\x5d","\x3c"));
	outFields->push(HX_HCSTRING("groups","\x54","\x24","\x28","\x1c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_InteractionGroup*/ ,(int)offsetof(InteractionGroup_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_group","\x96","\x0f","\x9e","\xdd"),
	HX_HCSTRING("set_group","\xa2","\xfb","\xee","\xc0"),
	HX_HCSTRING("get_ignore","\xdb","\x28","\x50","\x83"),
	HX_HCSTRING("set_ignore","\x4f","\xc7","\xcd","\x86"),
	HX_HCSTRING("get_interactors","\x91","\x7f","\x3f","\xfd"),
	HX_HCSTRING("get_groups","\x1d","\x94","\xaf","\x0c"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractionGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractionGroup_obj::__mClass,"__mClass");
};

#endif

hx::Class InteractionGroup_obj::__mClass;

void InteractionGroup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.dynamics.InteractionGroup","\xc1","\xe8","\xce","\x67");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &InteractionGroup_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InteractionGroup_obj >;
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
} // end namespace dynamics
