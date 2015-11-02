#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_CompoundList
#include <nape/phys/CompoundList.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
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
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Body
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Compound
#include <zpp_nape/util/ZNPList_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Body
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Compound
#include <zpp_nape/util/ZNPNode_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CompoundList
#include <zpp_nape/util/ZPP_CompoundList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ConstraintList
#include <zpp_nape/util/ZPP_ConstraintList.h>
#endif
namespace zpp_nape{
namespace phys{

Void ZPP_Compound_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","new",0x474c9a3d,"zpp_nape.phys.ZPP_Compound.new","zpp_nape/phys/Compound.hx",174,0x2d1c4718)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(184)
	this->space = null();
	HX_STACK_LINE(183)
	this->compound = null();
	HX_STACK_LINE(182)
	this->depth = (int)0;
	HX_STACK_LINE(181)
	this->wrap_compounds = null();
	HX_STACK_LINE(180)
	this->wrap_constraints = null();
	HX_STACK_LINE(179)
	this->wrap_bodies = null();
	HX_STACK_LINE(178)
	this->compounds = null();
	HX_STACK_LINE(177)
	this->constraints = null();
	HX_STACK_LINE(176)
	this->bodies = null();
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(310)
	super::__construct();
	HX_STACK_LINE(311)
	this->icompound = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(312)
	this->depth = (int)1;
	HX_STACK_LINE(313)
	::zpp_nape::phys::ZPP_Compound me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
	HX_STACK_LINE(314)
	::zpp_nape::util::ZNPList_ZPP_Body tmp = ::zpp_nape::util::ZNPList_ZPP_Body_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(314)
	this->bodies = tmp;
	HX_STACK_LINE(315)
	::zpp_nape::util::ZNPList_ZPP_Body tmp1 = this->bodies;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(315)
	::nape::phys::BodyList tmp2 = ::zpp_nape::util::ZPP_BodyList_obj::get(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(315)
	this->wrap_bodies = tmp2;
	HX_STACK_LINE(316)
	Dynamic tmp3 = this->bodies_adder_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(316)
	::nape::phys::BodyList tmp4 = this->wrap_bodies;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(316)
	tmp4->zpp_inner->adder = tmp3;
	HX_STACK_LINE(317)
	Dynamic tmp5 = this->bodies_subber_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(317)
	::nape::phys::BodyList tmp6 = this->wrap_bodies;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(317)
	tmp6->zpp_inner->subber = tmp5;
	HX_STACK_LINE(319)
	Dynamic tmp7 = this->bodies_modifiable_dyn();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(319)
	::nape::phys::BodyList tmp8 = this->wrap_bodies;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(319)
	tmp8->zpp_inner->_modifiable = tmp7;
	HX_STACK_LINE(321)
	::zpp_nape::util::ZNPList_ZPP_Constraint tmp9 = ::zpp_nape::util::ZNPList_ZPP_Constraint_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(321)
	this->constraints = tmp9;
	HX_STACK_LINE(322)
	::zpp_nape::util::ZNPList_ZPP_Constraint tmp10 = this->constraints;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(322)
	::nape::constraint::ConstraintList tmp11 = ::zpp_nape::util::ZPP_ConstraintList_obj::get(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(322)
	this->wrap_constraints = tmp11;
	HX_STACK_LINE(323)
	Dynamic tmp12 = this->constraints_adder_dyn();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(323)
	::nape::constraint::ConstraintList tmp13 = this->wrap_constraints;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(323)
	tmp13->zpp_inner->adder = tmp12;
	HX_STACK_LINE(324)
	Dynamic tmp14 = this->constraints_subber_dyn();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(324)
	::nape::constraint::ConstraintList tmp15 = this->wrap_constraints;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(324)
	tmp15->zpp_inner->subber = tmp14;
	HX_STACK_LINE(326)
	Dynamic tmp16 = this->constraints_modifiable_dyn();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(326)
	::nape::constraint::ConstraintList tmp17 = this->wrap_constraints;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(326)
	tmp17->zpp_inner->_modifiable = tmp16;
	HX_STACK_LINE(328)
	::zpp_nape::util::ZNPList_ZPP_Compound tmp18 = ::zpp_nape::util::ZNPList_ZPP_Compound_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(328)
	this->compounds = tmp18;
	HX_STACK_LINE(329)
	::zpp_nape::util::ZNPList_ZPP_Compound tmp19 = this->compounds;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(329)
	::nape::phys::CompoundList tmp20 = ::zpp_nape::util::ZPP_CompoundList_obj::get(tmp19,null());		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(329)
	this->wrap_compounds = tmp20;
	HX_STACK_LINE(330)
	Dynamic tmp21 = this->compounds_adder_dyn();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(330)
	::nape::phys::CompoundList tmp22 = this->wrap_compounds;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(330)
	tmp22->zpp_inner->adder = tmp21;
	HX_STACK_LINE(331)
	Dynamic tmp23 = this->compounds_subber_dyn();		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(331)
	::nape::phys::CompoundList tmp24 = this->wrap_compounds;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(331)
	tmp24->zpp_inner->subber = tmp23;
	HX_STACK_LINE(333)
	Dynamic tmp25 = this->compounds_modifiable_dyn();		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(333)
	::nape::phys::CompoundList tmp26 = this->wrap_compounds;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(333)
	tmp26->zpp_inner->_modifiable = tmp25;
}
;
	return null();
}

//ZPP_Compound_obj::~ZPP_Compound_obj() { }

Dynamic ZPP_Compound_obj::__CreateEmpty() { return  new ZPP_Compound_obj; }
hx::ObjectPtr< ZPP_Compound_obj > ZPP_Compound_obj::__new()
{  hx::ObjectPtr< ZPP_Compound_obj > _result_ = new ZPP_Compound_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Compound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Compound_obj > _result_ = new ZPP_Compound_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_Compound_obj::__imutable_midstep( ::String name){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","__imutable_midstep",0x98629395,"zpp_nape.phys.ZPP_Compound.__imutable_midstep","zpp_nape/phys/Compound.hx",185,0x2d1c4718)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(187)
		::zpp_nape::space::ZPP_Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		if ((tmp1)){
			HX_STACK_LINE(187)
			::zpp_nape::space::ZPP_Space tmp3 = this->space;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(187)
			::zpp_nape::space::ZPP_Space tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(187)
			tmp2 = tmp4->midstep;
		}
		else{
			HX_STACK_LINE(187)
			tmp2 = false;
		}
		HX_STACK_LINE(187)
		if ((tmp2)){
			HX_STACK_LINE(187)
			::String tmp3 = (HX_HCSTRING("Error: ","\x4e","\xa8","\x5b","\xb7") + name);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(187)
			::String tmp4 = (tmp3 + HX_HCSTRING(" cannot be set during space step()","\x28","\x9c","\xaa","\x20"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(187)
			HX_STACK_DO_THROW(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Compound_obj,__imutable_midstep,(void))

Void ZPP_Compound_obj::addedToSpace( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","addedToSpace",0x9c1fd6ee,"zpp_nape.phys.ZPP_Compound.addedToSpace","zpp_nape/phys/Compound.hx",191,0x2d1c4718)
		HX_STACK_THIS(this)
		HX_STACK_LINE(191)
		this->__iaddedToSpace();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Compound_obj,addedToSpace,(void))

Void ZPP_Compound_obj::removedFromSpace( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","removedFromSpace",0x9befd33f,"zpp_nape.phys.ZPP_Compound.removedFromSpace","zpp_nape/phys/Compound.hx",194,0x2d1c4718)
		HX_STACK_THIS(this)
		HX_STACK_LINE(194)
		this->__iremovedFromSpace();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Compound_obj,removedFromSpace,(void))

Void ZPP_Compound_obj::breakApart( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","breakApart",0x6247bb58,"zpp_nape.phys.ZPP_Compound.breakApart","zpp_nape/phys/Compound.hx",196,0x2d1c4718)
		HX_STACK_THIS(this)
		HX_STACK_LINE(197)
		::zpp_nape::space::ZPP_Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(197)
		if ((tmp1)){
			HX_STACK_LINE(198)
			this->__iremovedFromSpace();
			HX_STACK_LINE(199)
			::zpp_nape::space::ZPP_Space tmp2 = this->space;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(199)
			tmp2->nullInteractorType(hx::ObjectPtr<OBJ_>(this),null());
		}
		HX_STACK_LINE(201)
		::zpp_nape::phys::ZPP_Compound tmp2 = this->compound;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(201)
		if ((tmp3)){
			HX_STACK_LINE(201)
			::zpp_nape::phys::ZPP_Compound tmp4 = this->compound;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(201)
			tmp4->compounds->remove(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(202)
			::zpp_nape::space::ZPP_Space tmp4 = this->space;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(202)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(202)
			if ((tmp5)){
				HX_STACK_LINE(202)
				::zpp_nape::space::ZPP_Space tmp6 = this->space;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(202)
				tmp6->compounds->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(204)
		while((true)){
			HX_STACK_LINE(204)
			::zpp_nape::util::ZNPList_ZPP_Body tmp4 = this->bodies;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(204)
			::zpp_nape::util::ZNPNode_ZPP_Body tmp5 = tmp4->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(204)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(204)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(204)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(204)
			if ((tmp8)){
				HX_STACK_LINE(204)
				break;
			}
			HX_STACK_LINE(205)
			::zpp_nape::util::ZNPList_ZPP_Body tmp9 = this->bodies;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(205)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9->pop_unsafe();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(205)
			::zpp_nape::phys::ZPP_Body b = tmp10;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(206)
			{
				HX_STACK_LINE(207)
				::zpp_nape::phys::ZPP_Compound tmp11 = this->compound;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(207)
				::zpp_nape::phys::ZPP_Compound tmp12 = b->compound = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(207)
				bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(207)
				if ((tmp13)){
					HX_STACK_LINE(207)
					::zpp_nape::phys::ZPP_Compound tmp14 = this->compound;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(207)
					::zpp_nape::phys::ZPP_Body tmp15 = b;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(207)
					tmp14->bodies->add(tmp15);
				}
				else{
					HX_STACK_LINE(208)
					::zpp_nape::space::ZPP_Space tmp14 = this->space;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(208)
					bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(208)
					if ((tmp15)){
						HX_STACK_LINE(208)
						::zpp_nape::space::ZPP_Space tmp16 = this->space;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(208)
						::zpp_nape::phys::ZPP_Body tmp17 = b;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(208)
						tmp16->bodies->add(tmp17);
					}
				}
				HX_STACK_LINE(209)
				::zpp_nape::space::ZPP_Space tmp14 = this->space;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(209)
				bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(209)
				if ((tmp15)){
					HX_STACK_LINE(209)
					::zpp_nape::space::ZPP_Space tmp16 = this->space;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(209)
					::zpp_nape::phys::ZPP_Body tmp17 = b;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(209)
					tmp16->freshInteractorType(tmp17,null());
				}
			}
		}
		HX_STACK_LINE(214)
		while((true)){
			HX_STACK_LINE(214)
			::zpp_nape::util::ZNPList_ZPP_Constraint tmp4 = this->constraints;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(214)
			::zpp_nape::util::ZNPNode_ZPP_Constraint tmp5 = tmp4->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(214)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(214)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(214)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(214)
			if ((tmp8)){
				HX_STACK_LINE(214)
				break;
			}
			HX_STACK_LINE(215)
			::zpp_nape::util::ZNPList_ZPP_Constraint tmp9 = this->constraints;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(215)
			::zpp_nape::constraint::ZPP_Constraint tmp10 = tmp9->pop_unsafe();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(215)
			::zpp_nape::constraint::ZPP_Constraint c = tmp10;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(216)
			{
				HX_STACK_LINE(217)
				::zpp_nape::phys::ZPP_Compound tmp11 = this->compound;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(217)
				::zpp_nape::phys::ZPP_Compound tmp12 = c->compound = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(217)
				bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(217)
				if ((tmp13)){
					HX_STACK_LINE(217)
					::zpp_nape::phys::ZPP_Compound tmp14 = this->compound;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(217)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = c;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(217)
					tmp14->constraints->add(tmp15);
				}
				else{
					HX_STACK_LINE(218)
					::zpp_nape::space::ZPP_Space tmp14 = this->space;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(218)
					bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(218)
					if ((tmp15)){
						HX_STACK_LINE(218)
						::zpp_nape::space::ZPP_Space tmp16 = this->space;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(218)
						::zpp_nape::constraint::ZPP_Constraint tmp17 = c;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(218)
						tmp16->constraints->add(tmp17);
					}
				}
			}
		}
		HX_STACK_LINE(223)
		while((true)){
			HX_STACK_LINE(223)
			::zpp_nape::util::ZNPList_ZPP_Compound tmp4 = this->compounds;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(223)
			::zpp_nape::util::ZNPNode_ZPP_Compound tmp5 = tmp4->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(223)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(223)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(223)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(223)
			if ((tmp8)){
				HX_STACK_LINE(223)
				break;
			}
			HX_STACK_LINE(224)
			::zpp_nape::util::ZNPList_ZPP_Compound tmp9 = this->compounds;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(224)
			::zpp_nape::phys::ZPP_Compound tmp10 = tmp9->pop_unsafe();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(224)
			::zpp_nape::phys::ZPP_Compound c = tmp10;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(225)
			{
				HX_STACK_LINE(226)
				::zpp_nape::phys::ZPP_Compound tmp11 = this->compound;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(226)
				::zpp_nape::phys::ZPP_Compound tmp12 = c->compound = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(226)
				bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(226)
				if ((tmp13)){
					HX_STACK_LINE(226)
					::zpp_nape::phys::ZPP_Compound tmp14 = this->compound;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(226)
					::zpp_nape::phys::ZPP_Compound tmp15 = c;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(226)
					tmp14->compounds->add(tmp15);
				}
				else{
					HX_STACK_LINE(227)
					::zpp_nape::space::ZPP_Space tmp14 = this->space;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(227)
					bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(227)
					if ((tmp15)){
						HX_STACK_LINE(227)
						::zpp_nape::space::ZPP_Space tmp16 = this->space;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(227)
						::zpp_nape::phys::ZPP_Compound tmp17 = c;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(227)
						tmp16->compounds->add(tmp17);
					}
				}
				HX_STACK_LINE(228)
				::zpp_nape::space::ZPP_Space tmp14 = this->space;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(228)
				bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(228)
				if ((tmp15)){
					HX_STACK_LINE(228)
					::zpp_nape::space::ZPP_Space tmp16 = this->space;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(228)
					::zpp_nape::phys::ZPP_Compound tmp17 = c;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(228)
					tmp16->freshInteractorType(tmp17,null());
				}
			}
		}
		HX_STACK_LINE(232)
		this->compound = null();
		HX_STACK_LINE(233)
		this->space = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Compound_obj,breakApart,(void))

bool ZPP_Compound_obj::bodies_adder( ::nape::phys::Body x){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","bodies_adder",0x97796a12,"zpp_nape.phys.ZPP_Compound.bodies_adder","zpp_nape/phys/Compound.hx",236,0x2d1c4718)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(238)
	::zpp_nape::phys::ZPP_Compound tmp = x->zpp_inner->compound;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	bool tmp1 = (tmp != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(238)
	if ((tmp1)){
		HX_STACK_LINE(239)
		::zpp_nape::phys::ZPP_Compound tmp2 = x->zpp_inner->compound;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(239)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(239)
		if ((tmp3)){
			HX_STACK_LINE(239)
			::zpp_nape::phys::ZPP_Compound tmp4 = x->zpp_inner->compound;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(239)
			::nape::phys::Body tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(239)
			tmp4->wrap_bodies->remove(tmp5);
		}
		else{
			HX_STACK_LINE(240)
			::zpp_nape::space::ZPP_Space tmp4 = x->zpp_inner->space;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(240)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(240)
			if ((tmp5)){
				HX_STACK_LINE(240)
				::zpp_nape::space::ZPP_Space tmp6 = x->zpp_inner->space;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(240)
				::nape::phys::Body tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(240)
				tmp6->wrap_bodies->remove(tmp7);
			}
		}
		HX_STACK_LINE(241)
		x->zpp_inner->compound = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(243)
		::zpp_nape::space::ZPP_Space tmp4 = this->space;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(243)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(243)
		if ((tmp5)){
			HX_STACK_LINE(243)
			::zpp_nape::space::ZPP_Space tmp6 = this->space;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(243)
			::zpp_nape::phys::ZPP_Body tmp7 = x->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(243)
			tmp6->addBody(tmp7,null());
		}
		HX_STACK_LINE(244)
		return true;
	}
	else{
		HX_STACK_LINE(246)
		return false;
	}
	HX_STACK_LINE(238)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Compound_obj,bodies_adder,return )

Void ZPP_Compound_obj::bodies_subber( ::nape::phys::Body x){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","bodies_subber",0xedab020b,"zpp_nape.phys.ZPP_Compound.bodies_subber","zpp_nape/phys/Compound.hx",248,0x2d1c4718)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(249)
		x->zpp_inner->compound = null();
		HX_STACK_LINE(251)
		::zpp_nape::space::ZPP_Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(251)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(251)
		if ((tmp1)){
			HX_STACK_LINE(251)
			::zpp_nape::space::ZPP_Space tmp2 = this->space;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(251)
			::zpp_nape::phys::ZPP_Body tmp3 = x->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(251)
			tmp2->remBody(tmp3,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Compound_obj,bodies_subber,(void))

Void ZPP_Compound_obj::bodies_modifiable( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","bodies_modifiable",0x5bf8d340,"zpp_nape.phys.ZPP_Compound.bodies_modifiable","zpp_nape/phys/Compound.hx",254,0x2d1c4718)
		HX_STACK_THIS(this)
		HX_STACK_LINE(255)
		::String tmp = HX_HCSTRING("Compound::bodies","\xcb","\x60","\xd4","\x4c");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(255)
		this->immutable_midstep(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Compound_obj,bodies_modifiable,(void))

bool ZPP_Compound_obj::constraints_adder( ::nape::constraint::Constraint x){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","constraints_adder",0x1af65ca2,"zpp_nape.phys.ZPP_Compound.constraints_adder","zpp_nape/phys/Compound.hx",258,0x2d1c4718)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(260)
	::zpp_nape::phys::ZPP_Compound tmp = x->zpp_inner->compound;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(260)
	bool tmp1 = (tmp != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(260)
	if ((tmp1)){
		HX_STACK_LINE(261)
		::zpp_nape::phys::ZPP_Compound tmp2 = x->zpp_inner->compound;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(261)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(261)
		if ((tmp3)){
			HX_STACK_LINE(261)
			::zpp_nape::phys::ZPP_Compound tmp4 = x->zpp_inner->compound;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(261)
			::nape::constraint::Constraint tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(261)
			tmp4->wrap_constraints->remove(tmp5);
		}
		else{
			HX_STACK_LINE(262)
			::zpp_nape::space::ZPP_Space tmp4 = x->zpp_inner->space;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(262)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(262)
			if ((tmp5)){
				HX_STACK_LINE(262)
				::zpp_nape::space::ZPP_Space tmp6 = x->zpp_inner->space;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(262)
				::nape::constraint::Constraint tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(262)
				tmp6->wrap_constraints->remove(tmp7);
			}
		}
		HX_STACK_LINE(263)
		x->zpp_inner->compound = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(265)
		::zpp_nape::space::ZPP_Space tmp4 = this->space;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(265)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(265)
		if ((tmp5)){
			HX_STACK_LINE(265)
			::zpp_nape::space::ZPP_Space tmp6 = this->space;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(265)
			::zpp_nape::constraint::ZPP_Constraint tmp7 = x->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(265)
			tmp6->addConstraint(tmp7);
		}
		HX_STACK_LINE(266)
		return true;
	}
	else{
		HX_STACK_LINE(268)
		return false;
	}
	HX_STACK_LINE(260)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Compound_obj,constraints_adder,return )

Void ZPP_Compound_obj::constraints_subber( ::nape::constraint::Constraint x){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","constraints_subber",0x77824d7b,"zpp_nape.phys.ZPP_Compound.constraints_subber","zpp_nape/phys/Compound.hx",270,0x2d1c4718)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(271)
		x->zpp_inner->compound = null();
		HX_STACK_LINE(273)
		::zpp_nape::space::ZPP_Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(273)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(273)
		if ((tmp1)){
			HX_STACK_LINE(273)
			::zpp_nape::space::ZPP_Space tmp2 = this->space;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(273)
			::zpp_nape::constraint::ZPP_Constraint tmp3 = x->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(273)
			tmp2->remConstraint(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Compound_obj,constraints_subber,(void))

Void ZPP_Compound_obj::constraints_modifiable( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","constraints_modifiable",0xa7b296b0,"zpp_nape.phys.ZPP_Compound.constraints_modifiable","zpp_nape/phys/Compound.hx",276,0x2d1c4718)
		HX_STACK_THIS(this)
		HX_STACK_LINE(277)
		::String tmp = HX_HCSTRING("Compound::constraints","\x4b","\xfc","\x06","\x43");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(277)
		this->immutable_midstep(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Compound_obj,constraints_modifiable,(void))

bool ZPP_Compound_obj::compounds_adder( ::nape::phys::Compound x){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","compounds_adder",0x36126614,"zpp_nape.phys.ZPP_Compound.compounds_adder","zpp_nape/phys/Compound.hx",280,0x2d1c4718)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(282)
	::zpp_nape::phys::ZPP_Compound cur = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(283)
	while((true)){
		HX_STACK_LINE(283)
		bool tmp = (cur != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(283)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(283)
		if ((tmp)){
			HX_STACK_LINE(283)
			tmp1 = (cur != x->zpp_inner);
		}
		else{
			HX_STACK_LINE(283)
			tmp1 = false;
		}
		HX_STACK_LINE(283)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(283)
		if ((tmp2)){
			HX_STACK_LINE(283)
			break;
		}
		HX_STACK_LINE(283)
		cur = cur->compound;
	}
	HX_STACK_LINE(284)
	bool tmp = (cur == x->zpp_inner);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(284)
	if ((tmp)){
		HX_STACK_LINE(285)
		::String tmp1 = x->toString();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(285)
		::String tmp2 = (HX_HCSTRING("Error: Assignment would cause a cycle in the Compound tree: assigning ","\x5c","\x20","\x8f","\x3c") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(285)
		::String tmp3 = (tmp2 + HX_HCSTRING(".compound = ","\x6a","\x21","\x64","\x45"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(285)
		::nape::phys::Compound tmp4 = this->outer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(285)
		::String tmp5 = tmp4->toString();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(285)
		::String tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(285)
		HX_STACK_DO_THROW(tmp6);
		HX_STACK_LINE(286)
		return false;
	}
	HX_STACK_LINE(289)
	::zpp_nape::phys::ZPP_Compound tmp1 = x->zpp_inner->compound;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(289)
	bool tmp2 = (tmp1 != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(289)
	if ((tmp2)){
		HX_STACK_LINE(290)
		::zpp_nape::phys::ZPP_Compound tmp3 = x->zpp_inner->compound;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(290)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(290)
		if ((tmp4)){
			HX_STACK_LINE(290)
			::zpp_nape::phys::ZPP_Compound tmp5 = x->zpp_inner->compound;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(290)
			::nape::phys::Compound tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(290)
			tmp5->wrap_compounds->remove(tmp6);
		}
		else{
			HX_STACK_LINE(291)
			::zpp_nape::space::ZPP_Space tmp5 = x->zpp_inner->space;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(291)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(291)
			if ((tmp6)){
				HX_STACK_LINE(291)
				::zpp_nape::space::ZPP_Space tmp7 = x->zpp_inner->space;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(291)
				::nape::phys::Compound tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(291)
				tmp7->wrap_compounds->remove(tmp8);
			}
		}
		HX_STACK_LINE(292)
		x->zpp_inner->compound = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(293)
		int tmp5 = this->depth;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(293)
		int tmp6 = (tmp5 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(293)
		x->zpp_inner->depth = tmp6;
		HX_STACK_LINE(294)
		::zpp_nape::space::ZPP_Space tmp7 = this->space;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(294)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(294)
		if ((tmp8)){
			HX_STACK_LINE(294)
			::zpp_nape::space::ZPP_Space tmp9 = this->space;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(294)
			::zpp_nape::phys::ZPP_Compound tmp10 = x->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(294)
			tmp9->addCompound(tmp10);
		}
		HX_STACK_LINE(295)
		return true;
	}
	else{
		HX_STACK_LINE(297)
		return false;
	}
	HX_STACK_LINE(289)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Compound_obj,compounds_adder,return )

Void ZPP_Compound_obj::compounds_subber( ::nape::phys::Compound x){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","compounds_subber",0x14ee87c9,"zpp_nape.phys.ZPP_Compound.compounds_subber","zpp_nape/phys/Compound.hx",299,0x2d1c4718)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(300)
		x->zpp_inner->compound = null();
		HX_STACK_LINE(301)
		x->zpp_inner->depth = (int)1;
		HX_STACK_LINE(302)
		::zpp_nape::space::ZPP_Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(302)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(302)
		if ((tmp1)){
			HX_STACK_LINE(302)
			::zpp_nape::space::ZPP_Space tmp2 = this->space;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(302)
			::zpp_nape::phys::ZPP_Compound tmp3 = x->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(302)
			tmp2->remCompound(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Compound_obj,compounds_subber,(void))

Void ZPP_Compound_obj::compounds_modifiable( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","compounds_modifiable",0x92050ffe,"zpp_nape.phys.ZPP_Compound.compounds_modifiable","zpp_nape/phys/Compound.hx",305,0x2d1c4718)
		HX_STACK_THIS(this)
		HX_STACK_LINE(306)
		::String tmp = HX_HCSTRING("Compound::compounds","\x3d","\x16","\xb0","\x43");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(306)
		this->immutable_midstep(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Compound_obj,compounds_modifiable,(void))

::nape::phys::Compound ZPP_Compound_obj::copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","copy",0x147c9338,"zpp_nape.phys.ZPP_Compound.copy","zpp_nape/phys/Compound.hx",336,0x2d1c4718)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dict,"dict")
	HX_STACK_ARG(todo,"todo")
	HX_STACK_LINE(337)
	bool tmp = (dict == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(337)
	bool root = tmp;		HX_STACK_VAR(root,"root");
	HX_STACK_LINE(338)
	bool tmp1 = (dict == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(338)
	if ((tmp1)){
		HX_STACK_LINE(338)
		Array< ::Dynamic > tmp2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(338)
		dict = tmp2;
	}
	HX_STACK_LINE(339)
	bool tmp2 = (todo == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(339)
	if ((tmp2)){
		HX_STACK_LINE(339)
		Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(339)
		todo = tmp3;
	}
	HX_STACK_LINE(340)
	::nape::phys::Compound ret = ::nape::phys::Compound_obj::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(341)
	{
		HX_STACK_LINE(342)
		::zpp_nape::util::ZNPList_ZPP_Compound tmp3 = this->compounds;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(342)
		::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = tmp3->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(343)
		while((true)){
			HX_STACK_LINE(343)
			bool tmp4 = (cx_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(343)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(343)
			if ((tmp5)){
				HX_STACK_LINE(343)
				break;
			}
			HX_STACK_LINE(344)
			::zpp_nape::phys::ZPP_Compound c = cx_ite->elt;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(345)
			{
				HX_STACK_LINE(346)
				Array< ::Dynamic > tmp6 = dict;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(346)
				Array< ::Dynamic > tmp7 = todo;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(346)
				::nape::phys::Compound tmp8 = c->copy(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(346)
				::nape::phys::Compound cc = tmp8;		HX_STACK_VAR(cc,"cc");
				HX_STACK_LINE(347)
				{
					HX_STACK_LINE(347)
					{
						HX_STACK_LINE(347)
						cc->zpp_inner->immutable_midstep(HX_HCSTRING("Compound::compound","\x76","\x31","\x1b","\x54"));
						HX_STACK_LINE(347)
						::zpp_nape::phys::ZPP_Compound tmp9 = cc->zpp_inner->compound;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(347)
						bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(347)
						::nape::phys::Compound tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(347)
						if ((tmp10)){
							HX_STACK_LINE(347)
							tmp11 = null();
						}
						else{
							HX_STACK_LINE(347)
							::zpp_nape::phys::ZPP_Compound tmp12 = cc->zpp_inner->compound;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(347)
							tmp11 = tmp12->outer;
						}
						HX_STACK_LINE(347)
						::nape::phys::Compound tmp12 = ret;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(347)
						bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(347)
						if ((tmp13)){
							HX_STACK_LINE(347)
							::zpp_nape::phys::ZPP_Compound tmp14 = cc->zpp_inner->compound;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(347)
							bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(347)
							::nape::phys::Compound tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(347)
							if ((tmp15)){
								HX_STACK_LINE(347)
								tmp16 = null();
							}
							else{
								HX_STACK_LINE(347)
								::zpp_nape::phys::ZPP_Compound tmp17 = cc->zpp_inner->compound;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(347)
								tmp16 = tmp17->outer;
							}
							HX_STACK_LINE(347)
							bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(347)
							if ((tmp17)){
								HX_STACK_LINE(347)
								::zpp_nape::phys::ZPP_Compound tmp18 = cc->zpp_inner->compound;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(347)
								bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(347)
								::nape::phys::Compound tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(347)
								if ((tmp19)){
									HX_STACK_LINE(347)
									tmp20 = null();
								}
								else{
									HX_STACK_LINE(347)
									::zpp_nape::phys::ZPP_Compound tmp21 = cc->zpp_inner->compound;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(347)
									tmp20 = tmp21->outer;
								}
								HX_STACK_LINE(347)
								::nape::phys::CompoundList tmp21 = tmp20->zpp_inner->wrap_compounds;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(347)
								::nape::phys::Compound tmp22 = cc;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(347)
								tmp21->remove(tmp22);
							}
							HX_STACK_LINE(347)
							bool tmp18 = (ret != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(347)
							if ((tmp18)){
								HX_STACK_LINE(347)
								::nape::phys::CompoundList tmp19 = ret->zpp_inner->wrap_compounds;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(347)
								::nape::phys::CompoundList _this = tmp19;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(347)
								bool tmp20 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(347)
								if ((tmp20)){
									HX_STACK_LINE(347)
									::nape::phys::Compound tmp21 = cc;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(347)
									_this->push(tmp21);
								}
								else{
									HX_STACK_LINE(347)
									::nape::phys::Compound tmp21 = cc;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(347)
									_this->unshift(tmp21);
								}
							}
						}
					}
					HX_STACK_LINE(347)
					::zpp_nape::phys::ZPP_Compound tmp9 = cc->zpp_inner->compound;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(347)
					bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(347)
					if ((tmp10)){
						HX_STACK_LINE(347)
						Dynamic();
					}
					else{
						HX_STACK_LINE(347)
						::zpp_nape::phys::ZPP_Compound tmp11 = cc->zpp_inner->compound;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(347)
						tmp11->outer;
					}
				}
			}
			HX_STACK_LINE(349)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(352)
	{
		HX_STACK_LINE(353)
		::zpp_nape::util::ZNPList_ZPP_Body tmp3 = this->bodies;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(353)
		::zpp_nape::util::ZNPNode_ZPP_Body cx_ite = tmp3->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(354)
		while((true)){
			HX_STACK_LINE(354)
			bool tmp4 = (cx_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(354)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(354)
			if ((tmp5)){
				HX_STACK_LINE(354)
				break;
			}
			HX_STACK_LINE(355)
			::zpp_nape::phys::ZPP_Body b = cx_ite->elt;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(356)
			{
				HX_STACK_LINE(357)
				::nape::phys::Body tmp6 = b->outer->copy();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(357)
				::nape::phys::Body bc = tmp6;		HX_STACK_VAR(bc,"bc");
				HX_STACK_LINE(358)
				int tmp7 = b->id;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(358)
				::nape::phys::Body tmp8 = bc;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(358)
				::zpp_nape::constraint::ZPP_CopyHelper tmp9 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::dict(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(358)
				dict->push(tmp9);
				HX_STACK_LINE(359)
				{
					HX_STACK_LINE(359)
					{
						HX_STACK_LINE(359)
						::zpp_nape::phys::ZPP_Compound tmp10 = bc->zpp_inner->compound;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(359)
						bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(359)
						::nape::phys::Compound tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(359)
						if ((tmp11)){
							HX_STACK_LINE(359)
							tmp12 = null();
						}
						else{
							HX_STACK_LINE(359)
							::zpp_nape::phys::ZPP_Compound tmp13 = bc->zpp_inner->compound;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(359)
							tmp12 = tmp13->outer;
						}
						HX_STACK_LINE(359)
						::nape::phys::Compound tmp13 = ret;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(359)
						bool tmp14 = (tmp12 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(359)
						if ((tmp14)){
							HX_STACK_LINE(359)
							::zpp_nape::phys::ZPP_Compound tmp15 = bc->zpp_inner->compound;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(359)
							bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(359)
							::nape::phys::Compound tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(359)
							if ((tmp16)){
								HX_STACK_LINE(359)
								tmp17 = null();
							}
							else{
								HX_STACK_LINE(359)
								::zpp_nape::phys::ZPP_Compound tmp18 = bc->zpp_inner->compound;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(359)
								tmp17 = tmp18->outer;
							}
							HX_STACK_LINE(359)
							bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(359)
							if ((tmp18)){
								HX_STACK_LINE(359)
								::zpp_nape::phys::ZPP_Compound tmp19 = bc->zpp_inner->compound;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(359)
								bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(359)
								::nape::phys::Compound tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(359)
								if ((tmp20)){
									HX_STACK_LINE(359)
									tmp21 = null();
								}
								else{
									HX_STACK_LINE(359)
									::zpp_nape::phys::ZPP_Compound tmp22 = bc->zpp_inner->compound;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(359)
									tmp21 = tmp22->outer;
								}
								HX_STACK_LINE(359)
								::nape::phys::BodyList tmp22 = tmp21->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(359)
								::nape::phys::Body tmp23 = bc;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(359)
								tmp22->remove(tmp23);
							}
							HX_STACK_LINE(359)
							bool tmp19 = (ret != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(359)
							if ((tmp19)){
								HX_STACK_LINE(359)
								::nape::phys::BodyList tmp20 = ret->zpp_inner->wrap_bodies;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(359)
								::nape::phys::BodyList _this = tmp20;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(359)
								bool tmp21 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(359)
								if ((tmp21)){
									HX_STACK_LINE(359)
									::nape::phys::Body tmp22 = bc;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(359)
									_this->push(tmp22);
								}
								else{
									HX_STACK_LINE(359)
									::nape::phys::Body tmp22 = bc;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(359)
									_this->unshift(tmp22);
								}
							}
						}
					}
					HX_STACK_LINE(359)
					::zpp_nape::phys::ZPP_Compound tmp10 = bc->zpp_inner->compound;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(359)
					bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(359)
					if ((tmp11)){
						HX_STACK_LINE(359)
						Dynamic();
					}
					else{
						HX_STACK_LINE(359)
						::zpp_nape::phys::ZPP_Compound tmp12 = bc->zpp_inner->compound;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(359)
						tmp12->outer;
					}
				}
			}
			HX_STACK_LINE(361)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(364)
	{
		HX_STACK_LINE(365)
		::zpp_nape::util::ZNPList_ZPP_Constraint tmp3 = this->constraints;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(365)
		::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = tmp3->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(366)
		while((true)){
			HX_STACK_LINE(366)
			bool tmp4 = (cx_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(366)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(366)
			if ((tmp5)){
				HX_STACK_LINE(366)
				break;
			}
			HX_STACK_LINE(367)
			::zpp_nape::constraint::ZPP_Constraint c = cx_ite->elt;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(368)
			{
				HX_STACK_LINE(369)
				Array< ::Dynamic > tmp6 = dict;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(369)
				Array< ::Dynamic > tmp7 = todo;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(369)
				::nape::constraint::Constraint tmp8 = c->copy(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(369)
				::nape::constraint::Constraint cc = tmp8;		HX_STACK_VAR(cc,"cc");
				HX_STACK_LINE(370)
				{
					HX_STACK_LINE(370)
					{
						HX_STACK_LINE(370)
						::zpp_nape::phys::ZPP_Compound tmp9 = cc->zpp_inner->compound;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(370)
						bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(370)
						::nape::phys::Compound tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(370)
						if ((tmp10)){
							HX_STACK_LINE(370)
							tmp11 = null();
						}
						else{
							HX_STACK_LINE(370)
							::zpp_nape::phys::ZPP_Compound tmp12 = cc->zpp_inner->compound;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(370)
							tmp11 = tmp12->outer;
						}
						HX_STACK_LINE(370)
						::nape::phys::Compound tmp12 = ret;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(370)
						bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(370)
						if ((tmp13)){
							HX_STACK_LINE(370)
							::zpp_nape::phys::ZPP_Compound tmp14 = cc->zpp_inner->compound;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(370)
							bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(370)
							::nape::phys::Compound tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(370)
							if ((tmp15)){
								HX_STACK_LINE(370)
								tmp16 = null();
							}
							else{
								HX_STACK_LINE(370)
								::zpp_nape::phys::ZPP_Compound tmp17 = cc->zpp_inner->compound;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(370)
								tmp16 = tmp17->outer;
							}
							HX_STACK_LINE(370)
							bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(370)
							if ((tmp17)){
								HX_STACK_LINE(370)
								::zpp_nape::phys::ZPP_Compound tmp18 = cc->zpp_inner->compound;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(370)
								bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(370)
								::nape::phys::Compound tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(370)
								if ((tmp19)){
									HX_STACK_LINE(370)
									tmp20 = null();
								}
								else{
									HX_STACK_LINE(370)
									::zpp_nape::phys::ZPP_Compound tmp21 = cc->zpp_inner->compound;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(370)
									tmp20 = tmp21->outer;
								}
								HX_STACK_LINE(370)
								::nape::constraint::ConstraintList tmp21 = tmp20->zpp_inner->wrap_constraints;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(370)
								::nape::constraint::Constraint tmp22 = cc;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(370)
								tmp21->remove(tmp22);
							}
							HX_STACK_LINE(370)
							bool tmp18 = (ret != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(370)
							if ((tmp18)){
								HX_STACK_LINE(370)
								::nape::constraint::ConstraintList tmp19 = ret->zpp_inner->wrap_constraints;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(370)
								::nape::constraint::ConstraintList _this = tmp19;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(370)
								bool tmp20 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(370)
								if ((tmp20)){
									HX_STACK_LINE(370)
									::nape::constraint::Constraint tmp21 = cc;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(370)
									_this->push(tmp21);
								}
								else{
									HX_STACK_LINE(370)
									::nape::constraint::Constraint tmp21 = cc;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(370)
									_this->unshift(tmp21);
								}
							}
						}
					}
					HX_STACK_LINE(370)
					::zpp_nape::phys::ZPP_Compound tmp9 = cc->zpp_inner->compound;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(370)
					bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(370)
					if ((tmp10)){
						HX_STACK_LINE(370)
						Dynamic();
					}
					else{
						HX_STACK_LINE(370)
						::zpp_nape::phys::ZPP_Compound tmp11 = cc->zpp_inner->compound;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(370)
						tmp11->outer;
					}
				}
			}
			HX_STACK_LINE(372)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(375)
	bool tmp3 = root;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(375)
	if ((tmp3)){
		HX_STACK_LINE(376)
		while((true)){
			HX_STACK_LINE(376)
			bool tmp4 = (todo->length > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(376)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(376)
			if ((tmp5)){
				HX_STACK_LINE(376)
				break;
			}
			HX_STACK_LINE(377)
			::zpp_nape::constraint::ZPP_CopyHelper tmp6 = todo->pop().StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(377)
			::zpp_nape::constraint::ZPP_CopyHelper xcb = tmp6;		HX_STACK_VAR(xcb,"xcb");
			HX_STACK_LINE(378)
			{
				HX_STACK_LINE(378)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(378)
				while((true)){
					HX_STACK_LINE(378)
					bool tmp7 = (_g < dict->length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(378)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(378)
					if ((tmp8)){
						HX_STACK_LINE(378)
						break;
					}
					HX_STACK_LINE(378)
					::zpp_nape::constraint::ZPP_CopyHelper tmp9 = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(378)
					::zpp_nape::constraint::ZPP_CopyHelper idc = tmp9;		HX_STACK_VAR(idc,"idc");
					HX_STACK_LINE(378)
					++(_g);
					HX_STACK_LINE(379)
					bool tmp10 = (idc->id == xcb->id);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(379)
					if ((tmp10)){
						HX_STACK_LINE(380)
						::nape::phys::Body tmp11 = idc->bc;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(380)
						xcb->cb(tmp11);
						HX_STACK_LINE(381)
						break;
					}
				}
			}
		}
	}
	HX_STACK_LINE(386)
	::nape::phys::Compound tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(386)
	this->copyto(tmp4);
	HX_STACK_LINE(387)
	::nape::phys::Compound tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(387)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Compound_obj,copy,return )


ZPP_Compound_obj::ZPP_Compound_obj()
{
}

void ZPP_Compound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Compound);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(bodies,"bodies");
	HX_MARK_MEMBER_NAME(constraints,"constraints");
	HX_MARK_MEMBER_NAME(compounds,"compounds");
	HX_MARK_MEMBER_NAME(wrap_bodies,"wrap_bodies");
	HX_MARK_MEMBER_NAME(wrap_constraints,"wrap_constraints");
	HX_MARK_MEMBER_NAME(wrap_compounds,"wrap_compounds");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(compound,"compound");
	HX_MARK_MEMBER_NAME(space,"space");
	::zpp_nape::phys::ZPP_Interactor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_Compound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(bodies,"bodies");
	HX_VISIT_MEMBER_NAME(constraints,"constraints");
	HX_VISIT_MEMBER_NAME(compounds,"compounds");
	HX_VISIT_MEMBER_NAME(wrap_bodies,"wrap_bodies");
	HX_VISIT_MEMBER_NAME(wrap_constraints,"wrap_constraints");
	HX_VISIT_MEMBER_NAME(wrap_compounds,"wrap_compounds");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(compound,"compound");
	HX_VISIT_MEMBER_NAME(space,"space");
	::zpp_nape::phys::ZPP_Interactor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_Compound_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bodies") ) { return bodies; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"compound") ) { return compound; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"compounds") ) { return compounds; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"breakApart") ) { return breakApart_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"constraints") ) { return constraints; }
		if (HX_FIELD_EQ(inName,"wrap_bodies") ) { return wrap_bodies; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addedToSpace") ) { return addedToSpace_dyn(); }
		if (HX_FIELD_EQ(inName,"bodies_adder") ) { return bodies_adder_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bodies_subber") ) { return bodies_subber_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"wrap_compounds") ) { return wrap_compounds; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"compounds_adder") ) { return compounds_adder_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"wrap_constraints") ) { return wrap_constraints; }
		if (HX_FIELD_EQ(inName,"removedFromSpace") ) { return removedFromSpace_dyn(); }
		if (HX_FIELD_EQ(inName,"compounds_subber") ) { return compounds_subber_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"bodies_modifiable") ) { return bodies_modifiable_dyn(); }
		if (HX_FIELD_EQ(inName,"constraints_adder") ) { return constraints_adder_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__imutable_midstep") ) { return __imutable_midstep_dyn(); }
		if (HX_FIELD_EQ(inName,"constraints_subber") ) { return constraints_subber_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"compounds_modifiable") ) { return compounds_modifiable_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"constraints_modifiable") ) { return constraints_modifiable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Compound_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::phys::Compound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bodies") ) { bodies=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Body >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"compound") ) { compound=inValue.Cast< ::zpp_nape::phys::ZPP_Compound >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"compounds") ) { compounds=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Compound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"constraints") ) { constraints=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Constraint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_bodies") ) { wrap_bodies=inValue.Cast< ::nape::phys::BodyList >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"wrap_compounds") ) { wrap_compounds=inValue.Cast< ::nape::phys::CompoundList >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"wrap_constraints") ) { wrap_constraints=inValue.Cast< ::nape::constraint::ConstraintList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Compound_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_Compound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("bodies","\x80","\x1b","\xdd","\x5a"));
	outFields->push(HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17"));
	outFields->push(HX_HCSTRING("compounds","\xa8","\x3a","\xfb","\x13"));
	outFields->push(HX_HCSTRING("wrap_bodies","\x95","\x20","\x6c","\x45"));
	outFields->push(HX_HCSTRING("wrap_constraints","\x41","\xc0","\x11","\xb5"));
	outFields->push(HX_HCSTRING("wrap_compounds","\xb3","\xd0","\xbe","\x48"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	outFields->push(HX_HCSTRING("compound","\x6b","\xc3","\xcf","\x81"));
	outFields->push(HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::phys::Compound*/ ,(int)offsetof(ZPP_Compound_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Body*/ ,(int)offsetof(ZPP_Compound_obj,bodies),HX_HCSTRING("bodies","\x80","\x1b","\xdd","\x5a")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Constraint*/ ,(int)offsetof(ZPP_Compound_obj,constraints),HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Compound*/ ,(int)offsetof(ZPP_Compound_obj,compounds),HX_HCSTRING("compounds","\xa8","\x3a","\xfb","\x13")},
	{hx::fsObject /*::nape::phys::BodyList*/ ,(int)offsetof(ZPP_Compound_obj,wrap_bodies),HX_HCSTRING("wrap_bodies","\x95","\x20","\x6c","\x45")},
	{hx::fsObject /*::nape::constraint::ConstraintList*/ ,(int)offsetof(ZPP_Compound_obj,wrap_constraints),HX_HCSTRING("wrap_constraints","\x41","\xc0","\x11","\xb5")},
	{hx::fsObject /*::nape::phys::CompoundList*/ ,(int)offsetof(ZPP_Compound_obj,wrap_compounds),HX_HCSTRING("wrap_compounds","\xb3","\xd0","\xbe","\x48")},
	{hx::fsInt,(int)offsetof(ZPP_Compound_obj,depth),HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Compound*/ ,(int)offsetof(ZPP_Compound_obj,compound),HX_HCSTRING("compound","\x6b","\xc3","\xcf","\x81")},
	{hx::fsObject /*::zpp_nape::space::ZPP_Space*/ ,(int)offsetof(ZPP_Compound_obj,space),HX_HCSTRING("space","\xc6","\x8c","\x66","\x81")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("bodies","\x80","\x1b","\xdd","\x5a"),
	HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17"),
	HX_HCSTRING("compounds","\xa8","\x3a","\xfb","\x13"),
	HX_HCSTRING("wrap_bodies","\x95","\x20","\x6c","\x45"),
	HX_HCSTRING("wrap_constraints","\x41","\xc0","\x11","\xb5"),
	HX_HCSTRING("wrap_compounds","\xb3","\xd0","\xbe","\x48"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("compound","\x6b","\xc3","\xcf","\x81"),
	HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"),
	HX_HCSTRING("__imutable_midstep","\xd2","\xbc","\x7d","\x83"),
	HX_HCSTRING("addedToSpace","\x6b","\x44","\xb0","\x09"),
	HX_HCSTRING("removedFromSpace","\x3c","\x43","\xd1","\xb7"),
	HX_HCSTRING("breakApart","\x95","\xdf","\x18","\x5e"),
	HX_HCSTRING("bodies_adder","\x8f","\xd7","\x09","\x05"),
	HX_HCSTRING("bodies_subber","\xee","\x61","\x7a","\x5e"),
	HX_HCSTRING("bodies_modifiable","\xa3","\x60","\x59","\xa5"),
	HX_HCSTRING("constraints_adder","\x05","\xea","\x56","\x64"),
	HX_HCSTRING("constraints_subber","\xb8","\x76","\x9d","\x62"),
	HX_HCSTRING("constraints_modifiable","\x6d","\xa2","\x87","\x49"),
	HX_HCSTRING("compounds_adder","\xb7","\xc4","\x63","\x01"),
	HX_HCSTRING("compounds_subber","\xc6","\xf7","\xcf","\x30"),
	HX_HCSTRING("compounds_modifiable","\x7b","\xc2","\x2a","\xd9"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Compound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Compound_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_Compound_obj::__mClass;

void ZPP_Compound_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.phys.ZPP_Compound","\xcb","\xb7","\x91","\x55");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_Compound_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Compound_obj >;
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

} // end namespace zpp_nape
} // end namespace phys
