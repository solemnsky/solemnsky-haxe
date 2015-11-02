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
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionGroup
#include <zpp_nape/util/ZNPList_ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor
#include <zpp_nape/util/ZNPList_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionGroup
#include <zpp_nape/util/ZNPNode_ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Interactor
#include <zpp_nape/util/ZNPNode_ZPP_Interactor.h>
#endif
namespace zpp_nape{
namespace dynamics{

Void ZPP_InteractionGroup_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionGroup","new",0x48bdeadd,"zpp_nape.dynamics.ZPP_InteractionGroup.new","zpp_nape/dynamics/InteractionGroup.hx",174,0x342a42f8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(196)
	this->depth = (int)0;
	HX_STACK_LINE(195)
	this->wrap_interactors = null();
	HX_STACK_LINE(194)
	this->interactors = null();
	HX_STACK_LINE(193)
	this->wrap_groups = null();
	HX_STACK_LINE(192)
	this->groups = null();
	HX_STACK_LINE(177)
	this->group = null();
	HX_STACK_LINE(176)
	this->ignore = false;
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(223)
	this->depth = (int)0;
	HX_STACK_LINE(224)
	::zpp_nape::util::ZNPList_ZPP_InteractionGroup tmp = ::zpp_nape::util::ZNPList_ZPP_InteractionGroup_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	this->groups = tmp;
	HX_STACK_LINE(225)
	::zpp_nape::util::ZNPList_ZPP_Interactor tmp1 = ::zpp_nape::util::ZNPList_ZPP_Interactor_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(225)
	this->interactors = tmp1;
}
;
	return null();
}

//ZPP_InteractionGroup_obj::~ZPP_InteractionGroup_obj() { }

Dynamic ZPP_InteractionGroup_obj::__CreateEmpty() { return  new ZPP_InteractionGroup_obj; }
hx::ObjectPtr< ZPP_InteractionGroup_obj > ZPP_InteractionGroup_obj::__new()
{  hx::ObjectPtr< ZPP_InteractionGroup_obj > _result_ = new ZPP_InteractionGroup_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_InteractionGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_InteractionGroup_obj > _result_ = new ZPP_InteractionGroup_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_InteractionGroup_obj::setGroup( ::zpp_nape::dynamics::ZPP_InteractionGroup group){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionGroup","setGroup",0xe17cdca0,"zpp_nape.dynamics.ZPP_InteractionGroup.setGroup","zpp_nape/dynamics/InteractionGroup.hx",178,0x342a42f8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(group,"group")
		HX_STACK_LINE(179)
		::zpp_nape::dynamics::ZPP_InteractionGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		::zpp_nape::dynamics::ZPP_InteractionGroup tmp1 = group;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(179)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(179)
		if ((tmp2)){
			HX_STACK_LINE(180)
			::zpp_nape::dynamics::ZPP_InteractionGroup tmp3 = this->group;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(180)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(180)
			if ((tmp4)){
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					::zpp_nape::dynamics::ZPP_InteractionGroup tmp5 = this->group;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(181)
					tmp5->groups->remove(hx::ObjectPtr<OBJ_>(this));
					HX_STACK_LINE(181)
					this->depth = (int)0;
				}
				HX_STACK_LINE(182)
				::zpp_nape::dynamics::ZPP_InteractionGroup tmp5 = this->group;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(182)
				tmp5->invalidate(true);
			}
			HX_STACK_LINE(184)
			this->group = group;
			HX_STACK_LINE(185)
			bool tmp5 = (group != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(185)
			if ((tmp5)){
				HX_STACK_LINE(186)
				{
					HX_STACK_LINE(186)
					group->groups->add(hx::ObjectPtr<OBJ_>(this));
					HX_STACK_LINE(186)
					int tmp6 = (group->depth + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(186)
					this->depth = tmp6;
				}
				HX_STACK_LINE(187)
				group->invalidate(true);
			}
			else{
				HX_STACK_LINE(189)
				this->invalidate(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionGroup_obj,setGroup,(void))

Void ZPP_InteractionGroup_obj::invalidate( hx::Null< bool >  __o_force){
bool force = __o_force.Default(false);
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionGroup","invalidate",0x8d38f89e,"zpp_nape.dynamics.ZPP_InteractionGroup.invalidate","zpp_nape/dynamics/InteractionGroup.hx",197,0x342a42f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(force,"force")
{
		HX_STACK_LINE(198)
		bool tmp = force;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(198)
		if ((tmp1)){
			HX_STACK_LINE(198)
			tmp2 = this->ignore;
		}
		else{
			HX_STACK_LINE(198)
			tmp2 = true;
		}
		HX_STACK_LINE(198)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(198)
		if ((tmp3)){
			HX_STACK_LINE(198)
			return null();
		}
		HX_STACK_LINE(199)
		{
			HX_STACK_LINE(200)
			::zpp_nape::util::ZNPList_ZPP_Interactor tmp4 = this->interactors;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(200)
			::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = tmp4->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(201)
			while((true)){
				HX_STACK_LINE(201)
				bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(201)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(201)
				if ((tmp6)){
					HX_STACK_LINE(201)
					break;
				}
				HX_STACK_LINE(202)
				::zpp_nape::phys::ZPP_Interactor b = cx_ite->elt;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(203)
				{
					HX_STACK_LINE(204)
					bool tmp7 = (b->ibody != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(204)
					if ((tmp7)){
						HX_STACK_LINE(204)
						b->ibody->wake();
					}
					else{
						HX_STACK_LINE(205)
						bool tmp8 = (b->ishape != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(205)
						if ((tmp8)){
							HX_STACK_LINE(205)
							::zpp_nape::phys::ZPP_Body tmp9 = b->ishape->body;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(205)
							tmp9->wake();
						}
						else{
							HX_STACK_LINE(206)
							b->icompound->wake();
						}
					}
				}
				HX_STACK_LINE(208)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(211)
		{
			HX_STACK_LINE(212)
			::zpp_nape::util::ZNPList_ZPP_InteractionGroup tmp4 = this->groups;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(212)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cx_ite = tmp4->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(213)
			while((true)){
				HX_STACK_LINE(213)
				bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(213)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(213)
				if ((tmp6)){
					HX_STACK_LINE(213)
					break;
				}
				HX_STACK_LINE(214)
				::zpp_nape::dynamics::ZPP_InteractionGroup g = cx_ite->elt;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(215)
				bool tmp7 = force;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(215)
				g->invalidate(tmp7);
				HX_STACK_LINE(216)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionGroup_obj,invalidate,(void))

Void ZPP_InteractionGroup_obj::addGroup( ::zpp_nape::dynamics::ZPP_InteractionGroup group){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionGroup","addGroup",0x4ca599c1,"zpp_nape.dynamics.ZPP_InteractionGroup.addGroup","zpp_nape/dynamics/InteractionGroup.hx",229,0x342a42f8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(group,"group")
		HX_STACK_LINE(230)
		::zpp_nape::util::ZNPList_ZPP_InteractionGroup tmp = this->groups;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(230)
		::zpp_nape::dynamics::ZPP_InteractionGroup tmp1 = group;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(230)
		tmp->add(tmp1);
		HX_STACK_LINE(231)
		int tmp2 = this->depth;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(231)
		int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(231)
		group->depth = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionGroup_obj,addGroup,(void))

Void ZPP_InteractionGroup_obj::remGroup( ::zpp_nape::dynamics::ZPP_InteractionGroup group){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionGroup","remGroup",0xdbcae3e8,"zpp_nape.dynamics.ZPP_InteractionGroup.remGroup","zpp_nape/dynamics/InteractionGroup.hx",235,0x342a42f8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(group,"group")
		HX_STACK_LINE(236)
		::zpp_nape::util::ZNPList_ZPP_InteractionGroup tmp = this->groups;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(236)
		::zpp_nape::dynamics::ZPP_InteractionGroup tmp1 = group;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(236)
		tmp->remove(tmp1);
		HX_STACK_LINE(237)
		group->depth = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionGroup_obj,remGroup,(void))

Void ZPP_InteractionGroup_obj::addInteractor( ::zpp_nape::phys::ZPP_Interactor intx){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionGroup","addInteractor",0x24220897,"zpp_nape.dynamics.ZPP_InteractionGroup.addInteractor","zpp_nape/dynamics/InteractionGroup.hx",241,0x342a42f8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(intx,"intx")
		HX_STACK_LINE(242)
		::zpp_nape::util::ZNPList_ZPP_Interactor tmp = this->interactors;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		::zpp_nape::phys::ZPP_Interactor tmp1 = intx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(242)
		tmp->add(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_InteractionGroup_obj,addInteractor,(void))

Void ZPP_InteractionGroup_obj::remInteractor( ::zpp_nape::phys::ZPP_Interactor intx,hx::Null< int >  __o_flag){
int flag = __o_flag.Default(-1);
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_InteractionGroup","remInteractor",0x8f7b9110,"zpp_nape.dynamics.ZPP_InteractionGroup.remInteractor","zpp_nape/dynamics/InteractionGroup.hx",246,0x342a42f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(intx,"intx")
	HX_STACK_ARG(flag,"flag")
{
		HX_STACK_LINE(247)
		::zpp_nape::util::ZNPList_ZPP_Interactor tmp = this->interactors;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(247)
		::zpp_nape::phys::ZPP_Interactor tmp1 = intx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		tmp->remove(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_InteractionGroup_obj,remInteractor,(void))

int ZPP_InteractionGroup_obj::SHAPE;

int ZPP_InteractionGroup_obj::BODY;


ZPP_InteractionGroup_obj::ZPP_InteractionGroup_obj()
{
}

void ZPP_InteractionGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_InteractionGroup);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(ignore,"ignore");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(groups,"groups");
	HX_MARK_MEMBER_NAME(wrap_groups,"wrap_groups");
	HX_MARK_MEMBER_NAME(interactors,"interactors");
	HX_MARK_MEMBER_NAME(wrap_interactors,"wrap_interactors");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_END_CLASS();
}

void ZPP_InteractionGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(ignore,"ignore");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(groups,"groups");
	HX_VISIT_MEMBER_NAME(wrap_groups,"wrap_groups");
	HX_VISIT_MEMBER_NAME(interactors,"interactors");
	HX_VISIT_MEMBER_NAME(wrap_interactors,"wrap_interactors");
	HX_VISIT_MEMBER_NAME(depth,"depth");
}

Dynamic ZPP_InteractionGroup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ignore") ) { return ignore; }
		if (HX_FIELD_EQ(inName,"groups") ) { return groups; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setGroup") ) { return setGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"addGroup") ) { return addGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"remGroup") ) { return remGroup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrap_groups") ) { return wrap_groups; }
		if (HX_FIELD_EQ(inName,"interactors") ) { return interactors; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addInteractor") ) { return addInteractor_dyn(); }
		if (HX_FIELD_EQ(inName,"remInteractor") ) { return remInteractor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"wrap_interactors") ) { return wrap_interactors; }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_InteractionGroup_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"BODY") ) { outValue = BODY; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"SHAPE") ) { outValue = SHAPE; return true;  }
	}
	return false;
}

Dynamic ZPP_InteractionGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::dynamics::InteractionGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast< ::zpp_nape::dynamics::ZPP_InteractionGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ignore") ) { ignore=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"groups") ) { groups=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_InteractionGroup >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrap_groups") ) { wrap_groups=inValue.Cast< ::nape::dynamics::InteractionGroupList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"interactors") ) { interactors=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Interactor >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"wrap_interactors") ) { wrap_interactors=inValue.Cast< ::nape::phys::InteractorList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_InteractionGroup_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"BODY") ) { BODY=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"SHAPE") ) { SHAPE=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void ZPP_InteractionGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("ignore","\x12","\xb9","\xc8","\x92"));
	outFields->push(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));
	outFields->push(HX_HCSTRING("groups","\x54","\x24","\x28","\x1c"));
	outFields->push(HX_HCSTRING("wrap_groups","\x69","\x29","\xb7","\x06"));
	outFields->push(HX_HCSTRING("interactors","\xfa","\xc7","\x5d","\x3c"));
	outFields->push(HX_HCSTRING("wrap_interactors","\xc5","\x36","\xbb","\xd9"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::dynamics::InteractionGroup*/ ,(int)offsetof(ZPP_InteractionGroup_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsBool,(int)offsetof(ZPP_InteractionGroup_obj,ignore),HX_HCSTRING("ignore","\x12","\xb9","\xc8","\x92")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_InteractionGroup*/ ,(int)offsetof(ZPP_InteractionGroup_obj,group),HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_InteractionGroup*/ ,(int)offsetof(ZPP_InteractionGroup_obj,groups),HX_HCSTRING("groups","\x54","\x24","\x28","\x1c")},
	{hx::fsObject /*::nape::dynamics::InteractionGroupList*/ ,(int)offsetof(ZPP_InteractionGroup_obj,wrap_groups),HX_HCSTRING("wrap_groups","\x69","\x29","\xb7","\x06")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Interactor*/ ,(int)offsetof(ZPP_InteractionGroup_obj,interactors),HX_HCSTRING("interactors","\xfa","\xc7","\x5d","\x3c")},
	{hx::fsObject /*::nape::phys::InteractorList*/ ,(int)offsetof(ZPP_InteractionGroup_obj,wrap_interactors),HX_HCSTRING("wrap_interactors","\xc5","\x36","\xbb","\xd9")},
	{hx::fsInt,(int)offsetof(ZPP_InteractionGroup_obj,depth),HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ZPP_InteractionGroup_obj::SHAPE,HX_HCSTRING("SHAPE","\x01","\x1b","\x0b","\xfa")},
	{hx::fsInt,(void *) &ZPP_InteractionGroup_obj::BODY,HX_HCSTRING("BODY","\xa2","\x42","\xdc","\x2b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("ignore","\x12","\xb9","\xc8","\x92"),
	HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"),
	HX_HCSTRING("setGroup","\x3d","\x1c","\x29","\xa8"),
	HX_HCSTRING("groups","\x54","\x24","\x28","\x1c"),
	HX_HCSTRING("wrap_groups","\x69","\x29","\xb7","\x06"),
	HX_HCSTRING("interactors","\xfa","\xc7","\x5d","\x3c"),
	HX_HCSTRING("wrap_interactors","\xc5","\x36","\xbb","\xd9"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("addGroup","\x5e","\xd9","\x51","\x13"),
	HX_HCSTRING("remGroup","\x85","\x23","\x77","\xa2"),
	HX_HCSTRING("addInteractor","\xda","\x0f","\xb9","\xef"),
	HX_HCSTRING("remInteractor","\x53","\x98","\x12","\x5b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_InteractionGroup_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_InteractionGroup_obj::SHAPE,"SHAPE");
	HX_MARK_MEMBER_NAME(ZPP_InteractionGroup_obj::BODY,"BODY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_InteractionGroup_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionGroup_obj::SHAPE,"SHAPE");
	HX_VISIT_MEMBER_NAME(ZPP_InteractionGroup_obj::BODY,"BODY");
};

#endif

hx::Class ZPP_InteractionGroup_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SHAPE","\x01","\x1b","\x0b","\xfa"),
	HX_HCSTRING("BODY","\xa2","\x42","\xdc","\x2b"),
	::String(null()) };

void ZPP_InteractionGroup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.dynamics.ZPP_InteractionGroup","\x6b","\x38","\xa6","\xd2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_InteractionGroup_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_InteractionGroup_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_InteractionGroup_obj >;
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

void ZPP_InteractionGroup_obj::__boot()
{
	SHAPE= (int)1;
	BODY= (int)2;
}

} // end namespace zpp_nape
} // end namespace dynamics
