#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintIterator
#include <nape/constraint/ConstraintIterator.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyIterator
#include <nape/phys/BodyIterator.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_CompoundIterator
#include <nape/phys/CompoundIterator.h>
#endif
#ifndef INCLUDED_nape_phys_CompoundList
#include <nape/phys/CompoundList.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace nape{
namespace phys{

Void Compound_obj::__construct()
{
HX_STACK_FRAME("nape.phys.Compound","new",0x9c751513,"nape.phys.Compound.new","nape/phys/Compound.hx",196,0x15c2ad5d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(200)
	this->zpp_inner = null();
	HX_STACK_LINE(289)
	::nape::phys::Interactor_obj::zpp_internalAlloc = true;
	HX_STACK_LINE(290)
	super::__construct();
	HX_STACK_LINE(291)
	::nape::phys::Interactor_obj::zpp_internalAlloc = false;
	HX_STACK_LINE(296)
	::zpp_nape::phys::ZPP_Compound tmp = ::zpp_nape::phys::ZPP_Compound_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(296)
	this->zpp_inner = tmp;
	HX_STACK_LINE(297)
	::zpp_nape::phys::ZPP_Compound tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(297)
	tmp1->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(298)
	::zpp_nape::phys::ZPP_Compound tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(298)
	tmp2->outer_i = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(299)
	::zpp_nape::phys::ZPP_Compound tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(299)
	this->zpp_inner_i = tmp3;
	HX_STACK_LINE(300)
	::zpp_nape::phys::ZPP_Compound tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(300)
	::nape::callbacks::CbType tmp5 = ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_COMPOUND;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(300)
	::zpp_nape::callbacks::ZPP_CbType tmp6 = tmp5->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(300)
	tmp4->insert_cbtype(tmp6);
}
;
	return null();
}

//Compound_obj::~Compound_obj() { }

Dynamic Compound_obj::__CreateEmpty() { return  new Compound_obj; }
hx::ObjectPtr< Compound_obj > Compound_obj::__new()
{  hx::ObjectPtr< Compound_obj > _result_ = new Compound_obj();
	_result_->__construct();
	return _result_;}

Dynamic Compound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Compound_obj > _result_ = new Compound_obj();
	_result_->__construct();
	return _result_;}

::nape::phys::BodyList Compound_obj::get_bodies( ){
	HX_STACK_FRAME("nape.phys.Compound","get_bodies",0x49f992f6,"nape.phys.Compound.get_bodies","nape/phys/Compound.hx",210,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(211)
	::zpp_nape::phys::ZPP_Compound tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	::nape::phys::BodyList tmp1 = tmp->wrap_bodies;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(211)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Compound_obj,get_bodies,return )

::nape::constraint::ConstraintList Compound_obj::get_constraints( ){
	HX_STACK_FRAME("nape.phys.Compound","get_constraints",0x89250e40,"nape.phys.Compound.get_constraints","nape/phys/Compound.hx",222,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(223)
	::zpp_nape::phys::ZPP_Compound tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(223)
	::nape::constraint::ConstraintList tmp1 = tmp->wrap_constraints;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(223)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Compound_obj,get_constraints,return )

::nape::phys::CompoundList Compound_obj::get_compounds( ){
	HX_STACK_FRAME("nape.phys.Compound","get_compounds",0x74c250f2,"nape.phys.Compound.get_compounds","nape/phys/Compound.hx",234,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(235)
	::zpp_nape::phys::ZPP_Compound tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	::nape::phys::CompoundList tmp1 = tmp->wrap_compounds;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(235)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Compound_obj,get_compounds,return )

::nape::phys::Compound Compound_obj::get_compound( ){
	HX_STACK_FRAME("nape.phys.Compound","get_compound",0xca918461,"nape.phys.Compound.get_compound","nape/phys/Compound.hx",244,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(245)
	::zpp_nape::phys::ZPP_Compound tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(245)
	::zpp_nape::phys::ZPP_Compound tmp1 = tmp->compound;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(245)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(245)
	::nape::phys::Compound tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(245)
	if ((tmp2)){
		HX_STACK_LINE(245)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(245)
		::zpp_nape::phys::ZPP_Compound tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(245)
		tmp3 = tmp4->compound->outer;
	}
	HX_STACK_LINE(245)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Compound_obj,get_compound,return )

::nape::phys::Compound Compound_obj::set_compound( ::nape::phys::Compound compound){
	HX_STACK_FRAME("nape.phys.Compound","set_compound",0xdf8aa7d5,"nape.phys.Compound.set_compound","nape/phys/Compound.hx",247,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(compound,"compound")
	HX_STACK_LINE(248)
	{
		HX_STACK_LINE(249)
		::zpp_nape::phys::ZPP_Compound tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(249)
		tmp->immutable_midstep(HX_HCSTRING("Compound::compound","\x76","\x31","\x1b","\x54"));
		HX_STACK_LINE(250)
		::zpp_nape::phys::ZPP_Compound tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(250)
		::zpp_nape::phys::ZPP_Compound tmp2 = tmp1->compound;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(250)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(250)
		::nape::phys::Compound tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(250)
		if ((tmp3)){
			HX_STACK_LINE(250)
			tmp4 = null();
		}
		else{
			HX_STACK_LINE(250)
			::zpp_nape::phys::ZPP_Compound tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(250)
			tmp4 = tmp5->compound->outer;
		}
		HX_STACK_LINE(250)
		::nape::phys::Compound tmp5 = compound;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(250)
		bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(250)
		if ((tmp6)){
			HX_STACK_LINE(251)
			::zpp_nape::phys::ZPP_Compound tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(251)
			::zpp_nape::phys::ZPP_Compound tmp8 = tmp7->compound;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(251)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(251)
			::nape::phys::Compound tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(251)
			if ((tmp9)){
				HX_STACK_LINE(251)
				tmp10 = null();
			}
			else{
				HX_STACK_LINE(251)
				::zpp_nape::phys::ZPP_Compound tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(251)
				tmp10 = tmp11->compound->outer;
			}
			HX_STACK_LINE(251)
			bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(251)
			if ((tmp11)){
				HX_STACK_LINE(251)
				::zpp_nape::phys::ZPP_Compound tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(251)
				::zpp_nape::phys::ZPP_Compound tmp13 = tmp12->compound;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(251)
				bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(251)
				::nape::phys::Compound tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(251)
				if ((tmp14)){
					HX_STACK_LINE(251)
					tmp15 = null();
				}
				else{
					HX_STACK_LINE(251)
					::zpp_nape::phys::ZPP_Compound tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(251)
					tmp15 = tmp16->compound->outer;
				}
				HX_STACK_LINE(251)
				::nape::phys::CompoundList tmp16 = tmp15->zpp_inner->wrap_compounds;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(251)
				tmp16->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(252)
			bool tmp12 = (compound != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(252)
			if ((tmp12)){
				HX_STACK_LINE(252)
				::nape::phys::CompoundList tmp13 = compound->zpp_inner->wrap_compounds;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(252)
				::nape::phys::CompoundList _this = tmp13;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(252)
				bool tmp14 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(252)
				if ((tmp14)){
					HX_STACK_LINE(252)
					_this->push(hx::ObjectPtr<OBJ_>(this));
				}
				else{
					HX_STACK_LINE(252)
					_this->unshift(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
	}
	HX_STACK_LINE(255)
	::zpp_nape::phys::ZPP_Compound tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(255)
	::zpp_nape::phys::ZPP_Compound tmp1 = tmp->compound;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(255)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(255)
	::nape::phys::Compound tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(255)
	if ((tmp2)){
		HX_STACK_LINE(255)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(255)
		::zpp_nape::phys::ZPP_Compound tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(255)
		tmp3 = tmp4->compound->outer;
	}
	HX_STACK_LINE(255)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Compound_obj,set_compound,return )

::nape::space::Space Compound_obj::get_space( ){
	HX_STACK_FRAME("nape.phys.Compound","get_space",0x76fe3610,"nape.phys.Compound.get_space","nape/phys/Compound.hx",266,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(267)
	::zpp_nape::phys::ZPP_Compound tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(267)
	::zpp_nape::space::ZPP_Space tmp1 = tmp->space;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(267)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(267)
	::nape::space::Space tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(267)
	if ((tmp2)){
		HX_STACK_LINE(267)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(267)
		::zpp_nape::phys::ZPP_Compound tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(267)
		tmp3 = tmp4->space->outer;
	}
	HX_STACK_LINE(267)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Compound_obj,get_space,return )

::nape::space::Space Compound_obj::set_space( ::nape::space::Space space){
	HX_STACK_FRAME("nape.phys.Compound","set_space",0x5a4f221c,"nape.phys.Compound.set_space","nape/phys/Compound.hx",269,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(space,"space")
	HX_STACK_LINE(270)
	{
		HX_STACK_LINE(272)
		::zpp_nape::phys::ZPP_Compound tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(272)
		::zpp_nape::phys::ZPP_Compound tmp1 = tmp->compound;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(272)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(272)
		if ((tmp2)){
			HX_STACK_LINE(272)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot set the space of an inner Compound, only the root Compound space can be set","\xc0","\x8a","\x2d","\x1a"));
		}
		HX_STACK_LINE(274)
		::zpp_nape::phys::ZPP_Compound tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(274)
		tmp3->immutable_midstep(HX_HCSTRING("Compound::space","\xdb","\xb9","\x96","\xb9"));
		HX_STACK_LINE(275)
		::zpp_nape::phys::ZPP_Compound tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(275)
		::zpp_nape::space::ZPP_Space tmp5 = tmp4->space;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(275)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(275)
		::nape::space::Space tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(275)
		if ((tmp6)){
			HX_STACK_LINE(275)
			tmp7 = null();
		}
		else{
			HX_STACK_LINE(275)
			::zpp_nape::phys::ZPP_Compound tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(275)
			tmp7 = tmp8->space->outer;
		}
		HX_STACK_LINE(275)
		::nape::space::Space tmp8 = space;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(275)
		bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(275)
		if ((tmp9)){
			HX_STACK_LINE(276)
			::zpp_nape::phys::ZPP_Compound tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(276)
			::zpp_nape::space::ZPP_Space tmp11 = tmp10->space;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(276)
			bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(276)
			::nape::space::Space tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(276)
			if ((tmp12)){
				HX_STACK_LINE(276)
				tmp13 = null();
			}
			else{
				HX_STACK_LINE(276)
				::zpp_nape::phys::ZPP_Compound tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(276)
				tmp13 = tmp14->space->outer;
			}
			HX_STACK_LINE(276)
			bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(276)
			if ((tmp14)){
				HX_STACK_LINE(276)
				::zpp_nape::phys::ZPP_Compound tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(276)
				::zpp_nape::space::ZPP_Space tmp16 = tmp15->space;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(276)
				bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(276)
				::nape::space::Space tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(276)
				if ((tmp17)){
					HX_STACK_LINE(276)
					tmp18 = null();
				}
				else{
					HX_STACK_LINE(276)
					::zpp_nape::phys::ZPP_Compound tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(276)
					tmp18 = tmp19->space->outer;
				}
				HX_STACK_LINE(276)
				::nape::phys::CompoundList tmp19 = tmp18->zpp_inner->wrap_compounds;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(276)
				tmp19->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(277)
			bool tmp15 = (space != null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(277)
			if ((tmp15)){
				HX_STACK_LINE(277)
				::nape::phys::CompoundList tmp16 = space->zpp_inner->wrap_compounds;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(277)
				::nape::phys::CompoundList _this = tmp16;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(277)
				bool tmp17 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(277)
				if ((tmp17)){
					HX_STACK_LINE(277)
					_this->push(hx::ObjectPtr<OBJ_>(this));
				}
				else{
					HX_STACK_LINE(277)
					_this->unshift(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
	}
	HX_STACK_LINE(280)
	::zpp_nape::phys::ZPP_Compound tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(280)
	::zpp_nape::space::ZPP_Space tmp1 = tmp->space;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(280)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(280)
	::nape::space::Space tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(280)
	if ((tmp2)){
		HX_STACK_LINE(280)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(280)
		::zpp_nape::phys::ZPP_Compound tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(280)
		tmp3 = tmp4->space->outer;
	}
	HX_STACK_LINE(280)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Compound_obj,set_space,return )

::String Compound_obj::toString( ){
	HX_STACK_FRAME("nape.phys.Compound","toString",0xdb18a319,"nape.phys.Compound.toString","nape/phys/Compound.hx",305,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(306)
	::zpp_nape::phys::ZPP_Interactor tmp = this->zpp_inner_i;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(306)
	int tmp1 = tmp->id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(306)
	::String tmp2 = (HX_HCSTRING("Compound","\x8b","\x7f","\x81","\x5b") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(306)
	return tmp2;
}


::nape::phys::Compound Compound_obj::copy( ){
	HX_STACK_FRAME("nape.phys.Compound","copy",0x42bf93a2,"nape.phys.Compound.copy","nape/phys/Compound.hx",329,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(330)
	::zpp_nape::phys::ZPP_Compound tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(330)
	::nape::phys::Compound tmp1 = tmp->copy(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(330)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Compound_obj,copy,return )

Void Compound_obj::breakApart( ){
{
		HX_STACK_FRAME("nape.phys.Compound","breakApart",0x5cade742,"nape.phys.Compound.breakApart","nape/phys/Compound.hx",343,0x15c2ad5d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(344)
		::zpp_nape::phys::ZPP_Compound tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(344)
		tmp->breakApart();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Compound_obj,breakApart,(void))

Void Compound_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_FRAME("nape.phys.Compound","visitBodies",0xa830a35e,"nape.phys.Compound.visitBodies","nape/phys/Compound.hx",353,0x15c2ad5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(355)
		bool tmp = (lambda == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(355)
		if ((tmp)){
			HX_STACK_LINE(355)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: lambda cannot be null for Compound::visitBodies","\x5b","\x64","\xbc","\x62"));
		}
		HX_STACK_LINE(357)
		{
			HX_STACK_LINE(357)
			::nape::phys::BodyIterator tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(357)
			{
				HX_STACK_LINE(357)
				::zpp_nape::phys::ZPP_Compound tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(357)
				::nape::phys::BodyList _this = tmp2->wrap_bodies;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(357)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(357)
				::nape::phys::BodyList tmp3 = _this;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(357)
				tmp1 = ::nape::phys::BodyIterator_obj::get(tmp3);
			}
			HX_STACK_LINE(357)
			::nape::phys::BodyIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(357)
			while((true)){
				HX_STACK_LINE(357)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(357)
				{
					HX_STACK_LINE(357)
					::zpp_nape::util::ZPP_BodyList tmp3 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(357)
					tmp3->valmod();
					HX_STACK_LINE(357)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(357)
					{
						HX_STACK_LINE(357)
						::nape::phys::BodyList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(357)
						_this->zpp_inner->valmod();
						HX_STACK_LINE(357)
						bool tmp5 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(357)
						if ((tmp5)){
							HX_STACK_LINE(357)
							_this->zpp_inner->zip_length = false;
							HX_STACK_LINE(357)
							{
								HX_STACK_LINE(357)
								::zpp_nape::util::ZNPList_ZPP_Body tmp6 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(357)
								_this->zpp_inner->user_length = tmp6->length;
							}
						}
						HX_STACK_LINE(357)
						tmp4 = _this->zpp_inner->user_length;
					}
					HX_STACK_LINE(357)
					int length = tmp4;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(357)
					_g->zpp_critical = true;
					HX_STACK_LINE(357)
					bool tmp5 = (_g->zpp_i < length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(357)
					if ((tmp5)){
						HX_STACK_LINE(357)
						tmp2 = true;
					}
					else{
						HX_STACK_LINE(357)
						{
							HX_STACK_LINE(357)
							::nape::phys::BodyIterator tmp6 = ::nape::phys::BodyIterator_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(357)
							_g->zpp_next = tmp6;
							HX_STACK_LINE(357)
							::nape::phys::BodyIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(357)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(357)
						tmp2 = false;
					}
				}
				HX_STACK_LINE(357)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(357)
				if ((tmp3)){
					HX_STACK_LINE(357)
					break;
				}
				HX_STACK_LINE(357)
				::nape::phys::Body tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(357)
				{
					HX_STACK_LINE(357)
					_g->zpp_critical = false;
					HX_STACK_LINE(357)
					int tmp5 = (_g->zpp_i)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(357)
					tmp4 = _g->zpp_inner->at(tmp5);
				}
				HX_STACK_LINE(357)
				::nape::phys::Body b = tmp4;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(357)
				::nape::phys::Body tmp5 = b;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(357)
				lambda(tmp5).Cast< Void >();
			}
		}
		HX_STACK_LINE(358)
		{
			HX_STACK_LINE(358)
			::nape::phys::CompoundIterator tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(358)
			{
				HX_STACK_LINE(358)
				::zpp_nape::phys::ZPP_Compound tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(358)
				::nape::phys::CompoundList _this = tmp2->wrap_compounds;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(358)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(358)
				::nape::phys::CompoundList tmp3 = _this;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(358)
				tmp1 = ::nape::phys::CompoundIterator_obj::get(tmp3);
			}
			HX_STACK_LINE(358)
			::nape::phys::CompoundIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(358)
			while((true)){
				HX_STACK_LINE(358)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					::zpp_nape::util::ZPP_CompoundList tmp3 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(358)
					tmp3->valmod();
					HX_STACK_LINE(358)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						::nape::phys::CompoundList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(358)
						_this->zpp_inner->valmod();
						HX_STACK_LINE(358)
						bool tmp5 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(358)
						if ((tmp5)){
							HX_STACK_LINE(358)
							_this->zpp_inner->zip_length = false;
							HX_STACK_LINE(358)
							{
								HX_STACK_LINE(358)
								::zpp_nape::util::ZNPList_ZPP_Compound tmp6 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(358)
								_this->zpp_inner->user_length = tmp6->length;
							}
						}
						HX_STACK_LINE(358)
						tmp4 = _this->zpp_inner->user_length;
					}
					HX_STACK_LINE(358)
					int length = tmp4;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(358)
					_g->zpp_critical = true;
					HX_STACK_LINE(358)
					bool tmp5 = (_g->zpp_i < length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(358)
					if ((tmp5)){
						HX_STACK_LINE(358)
						tmp2 = true;
					}
					else{
						HX_STACK_LINE(358)
						{
							HX_STACK_LINE(358)
							::nape::phys::CompoundIterator tmp6 = ::nape::phys::CompoundIterator_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(358)
							_g->zpp_next = tmp6;
							HX_STACK_LINE(358)
							::nape::phys::CompoundIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(358)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(358)
						tmp2 = false;
					}
				}
				HX_STACK_LINE(358)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(358)
				if ((tmp3)){
					HX_STACK_LINE(358)
					break;
				}
				HX_STACK_LINE(358)
				::nape::phys::Compound tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					_g->zpp_critical = false;
					HX_STACK_LINE(358)
					int tmp5 = (_g->zpp_i)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(358)
					tmp4 = _g->zpp_inner->at(tmp5);
				}
				HX_STACK_LINE(358)
				::nape::phys::Compound c = tmp4;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(358)
				Dynamic tmp5 = lambda;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(358)
				c->visitBodies(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Compound_obj,visitBodies,(void))

Void Compound_obj::visitConstraints( Dynamic lambda){
{
		HX_STACK_FRAME("nape.phys.Compound","visitConstraints",0x8e7184d8,"nape.phys.Compound.visitConstraints","nape/phys/Compound.hx",367,0x15c2ad5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(369)
		bool tmp = (lambda == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(369)
		if ((tmp)){
			HX_STACK_LINE(369)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: lambda cannot be null for Compound::visitConstraints","\xbb","\x0e","\x98","\x69"));
		}
		HX_STACK_LINE(371)
		{
			HX_STACK_LINE(371)
			::nape::constraint::ConstraintIterator tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(371)
			{
				HX_STACK_LINE(371)
				::zpp_nape::phys::ZPP_Compound tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(371)
				::nape::constraint::ConstraintList _this = tmp2->wrap_constraints;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(371)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(371)
				::nape::constraint::ConstraintList tmp3 = _this;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(371)
				tmp1 = ::nape::constraint::ConstraintIterator_obj::get(tmp3);
			}
			HX_STACK_LINE(371)
			::nape::constraint::ConstraintIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(371)
			while((true)){
				HX_STACK_LINE(371)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(371)
				{
					HX_STACK_LINE(371)
					::zpp_nape::util::ZPP_ConstraintList tmp3 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(371)
					tmp3->valmod();
					HX_STACK_LINE(371)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(371)
					{
						HX_STACK_LINE(371)
						::nape::constraint::ConstraintList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(371)
						_this->zpp_inner->valmod();
						HX_STACK_LINE(371)
						bool tmp5 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(371)
						if ((tmp5)){
							HX_STACK_LINE(371)
							_this->zpp_inner->zip_length = false;
							HX_STACK_LINE(371)
							{
								HX_STACK_LINE(371)
								::zpp_nape::util::ZNPList_ZPP_Constraint tmp6 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(371)
								_this->zpp_inner->user_length = tmp6->length;
							}
						}
						HX_STACK_LINE(371)
						tmp4 = _this->zpp_inner->user_length;
					}
					HX_STACK_LINE(371)
					int length = tmp4;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(371)
					_g->zpp_critical = true;
					HX_STACK_LINE(371)
					bool tmp5 = (_g->zpp_i < length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(371)
					if ((tmp5)){
						HX_STACK_LINE(371)
						tmp2 = true;
					}
					else{
						HX_STACK_LINE(371)
						{
							HX_STACK_LINE(371)
							::nape::constraint::ConstraintIterator tmp6 = ::nape::constraint::ConstraintIterator_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(371)
							_g->zpp_next = tmp6;
							HX_STACK_LINE(371)
							::nape::constraint::ConstraintIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(371)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(371)
						tmp2 = false;
					}
				}
				HX_STACK_LINE(371)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(371)
				if ((tmp3)){
					HX_STACK_LINE(371)
					break;
				}
				HX_STACK_LINE(371)
				::nape::constraint::Constraint tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(371)
				{
					HX_STACK_LINE(371)
					_g->zpp_critical = false;
					HX_STACK_LINE(371)
					int tmp5 = (_g->zpp_i)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(371)
					tmp4 = _g->zpp_inner->at(tmp5);
				}
				HX_STACK_LINE(371)
				::nape::constraint::Constraint c = tmp4;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(371)
				::nape::constraint::Constraint tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(371)
				lambda(tmp5).Cast< Void >();
			}
		}
		HX_STACK_LINE(372)
		{
			HX_STACK_LINE(372)
			::nape::phys::CompoundIterator tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(372)
			{
				HX_STACK_LINE(372)
				::zpp_nape::phys::ZPP_Compound tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(372)
				::nape::phys::CompoundList _this = tmp2->wrap_compounds;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(372)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(372)
				::nape::phys::CompoundList tmp3 = _this;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(372)
				tmp1 = ::nape::phys::CompoundIterator_obj::get(tmp3);
			}
			HX_STACK_LINE(372)
			::nape::phys::CompoundIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(372)
			while((true)){
				HX_STACK_LINE(372)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(372)
				{
					HX_STACK_LINE(372)
					::zpp_nape::util::ZPP_CompoundList tmp3 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(372)
					tmp3->valmod();
					HX_STACK_LINE(372)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(372)
					{
						HX_STACK_LINE(372)
						::nape::phys::CompoundList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(372)
						_this->zpp_inner->valmod();
						HX_STACK_LINE(372)
						bool tmp5 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(372)
						if ((tmp5)){
							HX_STACK_LINE(372)
							_this->zpp_inner->zip_length = false;
							HX_STACK_LINE(372)
							{
								HX_STACK_LINE(372)
								::zpp_nape::util::ZNPList_ZPP_Compound tmp6 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(372)
								_this->zpp_inner->user_length = tmp6->length;
							}
						}
						HX_STACK_LINE(372)
						tmp4 = _this->zpp_inner->user_length;
					}
					HX_STACK_LINE(372)
					int length = tmp4;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(372)
					_g->zpp_critical = true;
					HX_STACK_LINE(372)
					bool tmp5 = (_g->zpp_i < length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(372)
					if ((tmp5)){
						HX_STACK_LINE(372)
						tmp2 = true;
					}
					else{
						HX_STACK_LINE(372)
						{
							HX_STACK_LINE(372)
							::nape::phys::CompoundIterator tmp6 = ::nape::phys::CompoundIterator_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(372)
							_g->zpp_next = tmp6;
							HX_STACK_LINE(372)
							::nape::phys::CompoundIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(372)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(372)
						tmp2 = false;
					}
				}
				HX_STACK_LINE(372)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(372)
				if ((tmp3)){
					HX_STACK_LINE(372)
					break;
				}
				HX_STACK_LINE(372)
				::nape::phys::Compound tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(372)
				{
					HX_STACK_LINE(372)
					_g->zpp_critical = false;
					HX_STACK_LINE(372)
					int tmp5 = (_g->zpp_i)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(372)
					tmp4 = _g->zpp_inner->at(tmp5);
				}
				HX_STACK_LINE(372)
				::nape::phys::Compound c = tmp4;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(372)
				Dynamic tmp5 = lambda;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(372)
				c->visitConstraints(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Compound_obj,visitConstraints,(void))

Void Compound_obj::visitCompounds( Dynamic lambda){
{
		HX_STACK_FRAME("nape.phys.Compound","visitCompounds",0x6b13718a,"nape.phys.Compound.visitCompounds","nape/phys/Compound.hx",381,0x15c2ad5d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(383)
		bool tmp = (lambda == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(383)
		if ((tmp)){
			HX_STACK_LINE(383)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: lambda cannot be null for Compound::visitConstraints","\xbb","\x0e","\x98","\x69"));
		}
		HX_STACK_LINE(385)
		{
			HX_STACK_LINE(385)
			::nape::phys::CompoundIterator tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(385)
			{
				HX_STACK_LINE(385)
				::zpp_nape::phys::ZPP_Compound tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(385)
				::nape::phys::CompoundList _this = tmp2->wrap_compounds;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(385)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(385)
				::nape::phys::CompoundList tmp3 = _this;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(385)
				tmp1 = ::nape::phys::CompoundIterator_obj::get(tmp3);
			}
			HX_STACK_LINE(385)
			::nape::phys::CompoundIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(385)
			while((true)){
				HX_STACK_LINE(385)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(385)
				{
					HX_STACK_LINE(385)
					::zpp_nape::util::ZPP_CompoundList tmp3 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(385)
					tmp3->valmod();
					HX_STACK_LINE(385)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(385)
					{
						HX_STACK_LINE(385)
						::nape::phys::CompoundList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(385)
						_this->zpp_inner->valmod();
						HX_STACK_LINE(385)
						bool tmp5 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(385)
						if ((tmp5)){
							HX_STACK_LINE(385)
							_this->zpp_inner->zip_length = false;
							HX_STACK_LINE(385)
							{
								HX_STACK_LINE(385)
								::zpp_nape::util::ZNPList_ZPP_Compound tmp6 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(385)
								_this->zpp_inner->user_length = tmp6->length;
							}
						}
						HX_STACK_LINE(385)
						tmp4 = _this->zpp_inner->user_length;
					}
					HX_STACK_LINE(385)
					int length = tmp4;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(385)
					_g->zpp_critical = true;
					HX_STACK_LINE(385)
					bool tmp5 = (_g->zpp_i < length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(385)
					if ((tmp5)){
						HX_STACK_LINE(385)
						tmp2 = true;
					}
					else{
						HX_STACK_LINE(385)
						{
							HX_STACK_LINE(385)
							::nape::phys::CompoundIterator tmp6 = ::nape::phys::CompoundIterator_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(385)
							_g->zpp_next = tmp6;
							HX_STACK_LINE(385)
							::nape::phys::CompoundIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(385)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(385)
						tmp2 = false;
					}
				}
				HX_STACK_LINE(385)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(385)
				if ((tmp3)){
					HX_STACK_LINE(385)
					break;
				}
				HX_STACK_LINE(385)
				::nape::phys::Compound tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(385)
				{
					HX_STACK_LINE(385)
					_g->zpp_critical = false;
					HX_STACK_LINE(385)
					int tmp5 = (_g->zpp_i)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(385)
					tmp4 = _g->zpp_inner->at(tmp5);
				}
				HX_STACK_LINE(385)
				::nape::phys::Compound c = tmp4;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(386)
				::nape::phys::Compound tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(386)
				lambda(tmp5).Cast< Void >();
				HX_STACK_LINE(387)
				Dynamic tmp6 = lambda;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(387)
				c->visitCompounds(tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Compound_obj,visitCompounds,(void))

::nape::geom::Vec2 Compound_obj::COM( hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.phys.Compound","COM",0x9c5460d4,"nape.phys.Compound.COM","nape/phys/Compound.hx",400,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(401)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(401)
		{
			HX_STACK_LINE(401)
			bool tmp1 = false;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(401)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(401)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(401)
			if ((tmp2)){
				HX_STACK_LINE(401)
				tmp3 = false;
			}
			else{
				HX_STACK_LINE(401)
				tmp3 = true;
			}
			HX_STACK_LINE(401)
			if ((tmp3)){
				HX_STACK_LINE(401)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(401)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(401)
			{
				HX_STACK_LINE(401)
				::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(401)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(401)
				if ((tmp5)){
					HX_STACK_LINE(401)
					::nape::geom::Vec2 tmp6 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(401)
					ret = tmp6;
				}
				else{
					HX_STACK_LINE(401)
					::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(401)
					ret = tmp6;
					HX_STACK_LINE(401)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(401)
					ret->zpp_pool = null();
					HX_STACK_LINE(401)
					ret->zpp_disp = false;
					HX_STACK_LINE(401)
					::nape::geom::Vec2 tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(401)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(401)
					bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(401)
					if ((tmp9)){
						HX_STACK_LINE(401)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(401)
			bool tmp4 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(401)
			if ((tmp4)){
				HX_STACK_LINE(401)
				::zpp_nape::geom::ZPP_Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(401)
				{
					HX_STACK_LINE(401)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(401)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(401)
					{
						HX_STACK_LINE(401)
						::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(401)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(401)
						if ((tmp7)){
							HX_STACK_LINE(401)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(401)
							ret1 = tmp8;
						}
						else{
							HX_STACK_LINE(401)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(401)
							ret1 = tmp8;
							HX_STACK_LINE(401)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(401)
							ret1->next = null();
						}
						HX_STACK_LINE(401)
						ret1->weak = false;
					}
					HX_STACK_LINE(401)
					ret1->_immutable = immutable;
					HX_STACK_LINE(401)
					{
						HX_STACK_LINE(401)
						ret1->x = (int)0;
						HX_STACK_LINE(401)
						ret1->y = (int)0;
						HX_STACK_LINE(401)
						{
						}
					}
					HX_STACK_LINE(401)
					tmp5 = ret1;
				}
				HX_STACK_LINE(401)
				ret->zpp_inner = tmp5;
				HX_STACK_LINE(401)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(401)
				{
					HX_STACK_LINE(401)
					bool tmp5 = (ret != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(401)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(401)
					if ((tmp5)){
						HX_STACK_LINE(401)
						tmp6 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(401)
						tmp6 = false;
					}
					HX_STACK_LINE(401)
					if ((tmp6)){
						HX_STACK_LINE(401)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(401)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(401)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(401)
				{
					HX_STACK_LINE(401)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(401)
					bool tmp5 = _this->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(401)
					if ((tmp5)){
						HX_STACK_LINE(401)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(401)
					bool tmp6 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(401)
					if ((tmp6)){
						HX_STACK_LINE(401)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(401)
				bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(401)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(401)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(401)
				if ((tmp6)){
					HX_STACK_LINE(401)
					tmp7 = false;
				}
				else{
					HX_STACK_LINE(401)
					tmp7 = true;
				}
				HX_STACK_LINE(401)
				if ((tmp7)){
					HX_STACK_LINE(401)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(401)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(401)
				{
					HX_STACK_LINE(401)
					{
						HX_STACK_LINE(401)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(401)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(401)
						if ((tmp9)){
							HX_STACK_LINE(401)
							tmp10 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(401)
							tmp10 = false;
						}
						HX_STACK_LINE(401)
						if ((tmp10)){
							HX_STACK_LINE(401)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(401)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(401)
							HX_STACK_DO_THROW(tmp12);
						}
					}
					HX_STACK_LINE(401)
					{
						HX_STACK_LINE(401)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(401)
						bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(401)
						if ((tmp9)){
							HX_STACK_LINE(401)
							_this->_validate();
						}
					}
					HX_STACK_LINE(401)
					tmp8 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(401)
				bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(401)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(401)
				if ((tmp9)){
					HX_STACK_LINE(401)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(401)
					{
						HX_STACK_LINE(401)
						{
							HX_STACK_LINE(401)
							bool tmp12 = (ret != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(401)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(401)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(401)
							bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(401)
							if ((tmp15)){
								HX_STACK_LINE(401)
								tmp14 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(401)
								tmp14 = false;
							}
							HX_STACK_LINE(401)
							bool tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(401)
							if ((tmp16)){
								HX_STACK_LINE(401)
								::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(401)
								::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(401)
								::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(401)
								::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(401)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(401)
								HX_STACK_DO_THROW(tmp21);
							}
						}
						HX_STACK_LINE(401)
						{
							HX_STACK_LINE(401)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(401)
							bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(401)
							bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(401)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(401)
							if ((tmp14)){
								HX_STACK_LINE(401)
								_this->_validate();
							}
						}
						HX_STACK_LINE(401)
						Float tmp12 = ret->zpp_inner->y;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(401)
						tmp11 = tmp12;
					}
					HX_STACK_LINE(401)
					tmp10 = (tmp11 == (int)0);
				}
				else{
					HX_STACK_LINE(401)
					tmp10 = false;
				}
				HX_STACK_LINE(401)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(401)
				if ((tmp11)){
					HX_STACK_LINE(401)
					{
						HX_STACK_LINE(401)
						ret->zpp_inner->x = (int)0;
						HX_STACK_LINE(401)
						ret->zpp_inner->y = (int)0;
						HX_STACK_LINE(401)
						{
						}
					}
					HX_STACK_LINE(401)
					{
						HX_STACK_LINE(401)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(401)
						bool tmp12 = (_this->_invalidate != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(401)
						if ((tmp12)){
							HX_STACK_LINE(401)
							::zpp_nape::geom::ZPP_Vec2 tmp13 = _this;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(401)
							_this->_invalidate(tmp13);
						}
					}
				}
				HX_STACK_LINE(401)
				ret;
			}
			HX_STACK_LINE(401)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(401)
			tmp = ret;
		}
		HX_STACK_LINE(401)
		::nape::geom::Vec2 ret = tmp;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(402)
		Array< Float > total = Array_obj< Float >::__new().Add(((Float)0.0));		HX_STACK_VAR(total,"total");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::nape::geom::Vec2,ret,Array< Float >,total)
		int __ArgCount() const { return 1; }
		Void run(::nape::phys::Body b){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","nape/phys/Compound.hx",403,0x15c2ad5d)
			HX_STACK_ARG(b,"b")
			{
				HX_STACK_LINE(404)
				bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(404)
				{
					HX_STACK_LINE(404)
					::nape::shape::ShapeList tmp2 = b->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(404)
					::nape::shape::ShapeList _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(404)
					{
						HX_STACK_LINE(404)
						::zpp_nape::util::ZNPList_ZPP_Shape tmp3 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(404)
						::zpp_nape::util::ZNPNode_ZPP_Shape tmp4 = tmp3->head;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(404)
						tmp1 = (tmp4 == null());
					}
				}
				HX_STACK_LINE(404)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(404)
				if ((tmp2)){
					HX_STACK_LINE(405)
					::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(405)
					{
						HX_STACK_LINE(405)
						bool tmp4 = b->zpp_inner->world;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(405)
						if ((tmp4)){
							HX_STACK_LINE(405)
							::String tmp5 = HX_HCSTRING("Error: Space::world has no worldCOM","\xe2","\x93","\x8c","\x16");		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(405)
							HX_STACK_DO_THROW(tmp5);
						}
						HX_STACK_LINE(405)
						::nape::geom::Vec2 tmp5 = b->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(405)
						bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(405)
						if ((tmp6)){
							HX_STACK_LINE(405)
							::nape::geom::Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(405)
							{
								HX_STACK_LINE(405)
								Float tmp8 = b->zpp_inner->worldCOMx;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(405)
								Float x = tmp8;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(405)
								Float tmp9 = b->zpp_inner->worldCOMy;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(405)
								Float y = tmp9;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(405)
								bool weak1 = false;		HX_STACK_VAR(weak1,"weak1");
								HX_STACK_LINE(405)
								bool tmp10 = (x != x);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(405)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(405)
								bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(405)
								if ((tmp11)){
									HX_STACK_LINE(405)
									tmp12 = (y != y);
								}
								else{
									HX_STACK_LINE(405)
									tmp12 = true;
								}
								HX_STACK_LINE(405)
								if ((tmp12)){
									HX_STACK_LINE(405)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
								}
								HX_STACK_LINE(405)
								::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(405)
								{
									HX_STACK_LINE(405)
									::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(405)
									bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(405)
									if ((tmp14)){
										HX_STACK_LINE(405)
										::nape::geom::Vec2 tmp15 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(405)
										ret1 = tmp15;
									}
									else{
										HX_STACK_LINE(405)
										::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(405)
										ret1 = tmp15;
										HX_STACK_LINE(405)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret1->zpp_pool;
										HX_STACK_LINE(405)
										ret1->zpp_pool = null();
										HX_STACK_LINE(405)
										ret1->zpp_disp = false;
										HX_STACK_LINE(405)
										::nape::geom::Vec2 tmp16 = ret1;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(405)
										::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(405)
										bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(405)
										if ((tmp18)){
											HX_STACK_LINE(405)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
										}
									}
								}
								HX_STACK_LINE(405)
								bool tmp13 = (ret1->zpp_inner == null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(405)
								if ((tmp13)){
									HX_STACK_LINE(405)
									::zpp_nape::geom::ZPP_Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(405)
									{
										HX_STACK_LINE(405)
										bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
										HX_STACK_LINE(405)
										::zpp_nape::geom::ZPP_Vec2 ret2;		HX_STACK_VAR(ret2,"ret2");
										HX_STACK_LINE(405)
										{
											HX_STACK_LINE(405)
											::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(405)
											bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(405)
											if ((tmp16)){
												HX_STACK_LINE(405)
												::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(405)
												ret2 = tmp17;
											}
											else{
												HX_STACK_LINE(405)
												::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(405)
												ret2 = tmp17;
												HX_STACK_LINE(405)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret2->next;
												HX_STACK_LINE(405)
												ret2->next = null();
											}
											HX_STACK_LINE(405)
											ret2->weak = false;
										}
										HX_STACK_LINE(405)
										ret2->_immutable = immutable;
										HX_STACK_LINE(405)
										{
											HX_STACK_LINE(405)
											ret2->x = x;
											HX_STACK_LINE(405)
											ret2->y = y;
											HX_STACK_LINE(405)
											{
											}
										}
										HX_STACK_LINE(405)
										tmp14 = ret2;
									}
									HX_STACK_LINE(405)
									ret1->zpp_inner = tmp14;
									HX_STACK_LINE(405)
									ret1->zpp_inner->outer = ret1;
								}
								else{
									HX_STACK_LINE(405)
									{
										HX_STACK_LINE(405)
										bool tmp14 = (ret1 != null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(405)
										bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(405)
										if ((tmp14)){
											HX_STACK_LINE(405)
											tmp15 = ret1->zpp_disp;
										}
										else{
											HX_STACK_LINE(405)
											tmp15 = false;
										}
										HX_STACK_LINE(405)
										if ((tmp15)){
											HX_STACK_LINE(405)
											::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(405)
											::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(405)
											HX_STACK_DO_THROW(tmp17);
										}
									}
									HX_STACK_LINE(405)
									{
										HX_STACK_LINE(405)
										::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(405)
										bool tmp14 = _this->_immutable;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(405)
										if ((tmp14)){
											HX_STACK_LINE(405)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
										}
										HX_STACK_LINE(405)
										bool tmp15 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(405)
										if ((tmp15)){
											HX_STACK_LINE(405)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(405)
									bool tmp14 = (x != x);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(405)
									bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(405)
									bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(405)
									if ((tmp15)){
										HX_STACK_LINE(405)
										tmp16 = (y != y);
									}
									else{
										HX_STACK_LINE(405)
										tmp16 = true;
									}
									HX_STACK_LINE(405)
									if ((tmp16)){
										HX_STACK_LINE(405)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
									}
									HX_STACK_LINE(405)
									Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(405)
									{
										HX_STACK_LINE(405)
										{
											HX_STACK_LINE(405)
											bool tmp18 = (ret1 != null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(405)
											bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(405)
											if ((tmp18)){
												HX_STACK_LINE(405)
												tmp19 = ret1->zpp_disp;
											}
											else{
												HX_STACK_LINE(405)
												tmp19 = false;
											}
											HX_STACK_LINE(405)
											if ((tmp19)){
												HX_STACK_LINE(405)
												::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(405)
												::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(405)
												HX_STACK_DO_THROW(tmp21);
											}
										}
										HX_STACK_LINE(405)
										{
											HX_STACK_LINE(405)
											::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(405)
											bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(405)
											if ((tmp18)){
												HX_STACK_LINE(405)
												_this->_validate();
											}
										}
										HX_STACK_LINE(405)
										tmp17 = ret1->zpp_inner->x;
									}
									HX_STACK_LINE(405)
									Float tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(405)
									bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(405)
									bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(405)
									if ((tmp19)){
										HX_STACK_LINE(405)
										Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(405)
										{
											HX_STACK_LINE(405)
											{
												HX_STACK_LINE(405)
												bool tmp22 = (ret1 != null());		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(405)
												bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(405)
												bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(405)
												bool tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(405)
												if ((tmp25)){
													HX_STACK_LINE(405)
													tmp24 = ret1->zpp_disp;
												}
												else{
													HX_STACK_LINE(405)
													tmp24 = false;
												}
												HX_STACK_LINE(405)
												bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(405)
												if ((tmp26)){
													HX_STACK_LINE(405)
													::String tmp27 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(405)
													::String tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(405)
													::String tmp29 = (tmp28 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(405)
													::String tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(405)
													::String tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(405)
													HX_STACK_DO_THROW(tmp31);
												}
											}
											HX_STACK_LINE(405)
											{
												HX_STACK_LINE(405)
												::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(405)
												bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(405)
												bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(405)
												bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(405)
												if ((tmp24)){
													HX_STACK_LINE(405)
													_this->_validate();
												}
											}
											HX_STACK_LINE(405)
											Float tmp22 = ret1->zpp_inner->y;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(405)
											tmp21 = tmp22;
										}
										HX_STACK_LINE(405)
										Float tmp22 = y;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(405)
										tmp20 = (tmp21 == tmp22);
									}
									else{
										HX_STACK_LINE(405)
										tmp20 = false;
									}
									HX_STACK_LINE(405)
									bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(405)
									if ((tmp21)){
										HX_STACK_LINE(405)
										{
											HX_STACK_LINE(405)
											ret1->zpp_inner->x = x;
											HX_STACK_LINE(405)
											ret1->zpp_inner->y = y;
											HX_STACK_LINE(405)
											{
											}
										}
										HX_STACK_LINE(405)
										{
											HX_STACK_LINE(405)
											::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(405)
											bool tmp22 = (_this->_invalidate != null());		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(405)
											if ((tmp22)){
												HX_STACK_LINE(405)
												::zpp_nape::geom::ZPP_Vec2 tmp23 = _this;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(405)
												_this->_invalidate(tmp23);
											}
										}
									}
									HX_STACK_LINE(405)
									ret1;
								}
								HX_STACK_LINE(405)
								ret1->zpp_inner->weak = weak1;
								HX_STACK_LINE(405)
								tmp7 = ret1;
							}
							HX_STACK_LINE(405)
							b->zpp_inner->wrap_worldCOM = tmp7;
							HX_STACK_LINE(405)
							::nape::geom::Vec2 tmp8 = b->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(405)
							tmp8->zpp_inner->_inuse = true;
							HX_STACK_LINE(405)
							::nape::geom::Vec2 tmp9 = b->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(405)
							tmp9->zpp_inner->_immutable = true;
							HX_STACK_LINE(405)
							Dynamic tmp10 = b->zpp_inner->getworldCOM_dyn();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(405)
							::nape::geom::Vec2 tmp11 = b->zpp_inner->wrap_worldCOM;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(405)
							tmp11->zpp_inner->_validate = tmp10;
						}
						HX_STACK_LINE(405)
						tmp3 = b->zpp_inner->wrap_worldCOM;
					}
					HX_STACK_LINE(405)
					Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(405)
					{
						HX_STACK_LINE(405)
						bool tmp5 = b->zpp_inner->world;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(405)
						if ((tmp5)){
							HX_STACK_LINE(405)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world has no mass","\x47","\x6a","\x54","\x2b"));
						}
						HX_STACK_LINE(405)
						b->zpp_inner->validate_mass();
						HX_STACK_LINE(405)
						int tmp6 = b->zpp_inner->massMode;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(405)
						int tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(405)
						bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(405)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(405)
						if ((tmp8)){
							HX_STACK_LINE(405)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp10 = b->zpp_inner->shapes;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(405)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(405)
							::zpp_nape::util::ZNPNode_ZPP_Shape tmp12 = tmp11->head;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(405)
							tmp9 = (tmp12 == null());
						}
						else{
							HX_STACK_LINE(405)
							tmp9 = false;
						}
						HX_STACK_LINE(405)
						if ((tmp9)){
							HX_STACK_LINE(405)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Given current mass mode, Body::mass only makes sense if it contains shapes","\x3f","\xab","\x6b","\xcb"));
						}
						HX_STACK_LINE(405)
						tmp4 = b->zpp_inner->cmass;
					}
					HX_STACK_LINE(405)
					::nape::geom::Vec2 tmp5 = tmp3->mul(tmp4,true);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(405)
					ret->addeq(tmp5);
					HX_STACK_LINE(406)
					Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(406)
					{
						HX_STACK_LINE(406)
						bool tmp7 = b->zpp_inner->world;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(406)
						if ((tmp7)){
							HX_STACK_LINE(406)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Space::world has no mass","\x47","\x6a","\x54","\x2b"));
						}
						HX_STACK_LINE(406)
						b->zpp_inner->validate_mass();
						HX_STACK_LINE(406)
						int tmp8 = b->zpp_inner->massMode;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(406)
						int tmp9 = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(406)
						bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(406)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(406)
						if ((tmp10)){
							HX_STACK_LINE(406)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp12 = b->zpp_inner->shapes;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(406)
							::zpp_nape::util::ZNPList_ZPP_Shape tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(406)
							::zpp_nape::util::ZNPNode_ZPP_Shape tmp14 = tmp13->head;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(406)
							tmp11 = (tmp14 == null());
						}
						else{
							HX_STACK_LINE(406)
							tmp11 = false;
						}
						HX_STACK_LINE(406)
						if ((tmp11)){
							HX_STACK_LINE(406)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Given current mass mode, Body::mass only makes sense if it contains shapes","\x3f","\xab","\x6b","\xcb"));
						}
						HX_STACK_LINE(406)
						tmp6 = b->zpp_inner->cmass;
					}
					HX_STACK_LINE(406)
					hx::AddEq(total[(int)0],tmp6);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(403)
		this->visitBodies( Dynamic(new _Function_1_1(ret,total)));
		HX_STACK_LINE(410)
		bool tmp1 = (total->__get((int)0) == ((Float)0.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(410)
		if ((tmp1)){
			HX_STACK_LINE(410)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: COM of an empty Compound is undefined silly","\xe8","\x49","\xf3","\x05"));
		}
		HX_STACK_LINE(412)
		Float tmp2 = (Float((int)1) / Float(total->__get((int)0)));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(412)
		ret->muleq(tmp2);
		HX_STACK_LINE(413)
		::nape::geom::Vec2 tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(413)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Compound_obj,COM,return )

::nape::phys::Compound Compound_obj::translate( ::nape::geom::Vec2 translation){
	HX_STACK_FRAME("nape.phys.Compound","translate",0xfb6e2441,"nape.phys.Compound.translate","nape/phys/Compound.hx",425,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(translation,"translation")
	HX_STACK_LINE(426)
	{
		HX_STACK_LINE(428)
		bool tmp = (translation != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(428)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(428)
		if ((tmp)){
			HX_STACK_LINE(428)
			tmp1 = translation->zpp_disp;
		}
		else{
			HX_STACK_LINE(428)
			tmp1 = false;
		}
		HX_STACK_LINE(428)
		if ((tmp1)){
			HX_STACK_LINE(428)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(428)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(428)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(432)
	bool tmp = (translation == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(432)
	if ((tmp)){
		HX_STACK_LINE(432)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot translate by null Vec2","\x8f","\x5c","\x4d","\x00"));
	}
	HX_STACK_LINE(434)
	bool tmp1 = translation->zpp_inner->weak;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(434)
	bool weak = tmp1;		HX_STACK_VAR(weak,"weak");
	HX_STACK_LINE(435)
	translation->zpp_inner->weak = false;

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::nape::geom::Vec2,translation)
	int __ArgCount() const { return 1; }
	Void run(::nape::phys::Body b){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","nape/phys/Compound.hx",436,0x15c2ad5d)
		HX_STACK_ARG(b,"b")
		{
			HX_STACK_LINE(436)
			::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(436)
			{
				HX_STACK_LINE(436)
				::nape::geom::Vec2 tmp3 = b->zpp_inner->wrap_pos;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(436)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(436)
				if ((tmp4)){
					HX_STACK_LINE(436)
					b->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(436)
				tmp2 = b->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(436)
			::nape::geom::Vec2 tmp3 = translation;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(436)
			tmp2->addeq(tmp3);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(436)
	this->visitBodies( Dynamic(new _Function_1_1(translation)));
	HX_STACK_LINE(437)
	translation->zpp_inner->weak = weak;
	HX_STACK_LINE(438)
	{
		HX_STACK_LINE(439)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(440)
		tmp2 = translation->zpp_inner->weak;
		HX_STACK_LINE(439)
		if ((tmp2)){
			HX_STACK_LINE(442)
			{
				HX_STACK_LINE(442)
				{
					HX_STACK_LINE(442)
					bool tmp3 = (translation != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(442)
					bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(442)
					if ((tmp3)){
						HX_STACK_LINE(442)
						tmp4 = translation->zpp_disp;
					}
					else{
						HX_STACK_LINE(442)
						tmp4 = false;
					}
					HX_STACK_LINE(442)
					if ((tmp4)){
						HX_STACK_LINE(442)
						::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(442)
						::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(442)
						HX_STACK_DO_THROW(tmp6);
					}
				}
				HX_STACK_LINE(442)
				{
					HX_STACK_LINE(442)
					::zpp_nape::geom::ZPP_Vec2 _this = translation->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(442)
					bool tmp3 = _this->_immutable;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(442)
					if ((tmp3)){
						HX_STACK_LINE(442)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(442)
					bool tmp4 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(442)
					if ((tmp4)){
						HX_STACK_LINE(442)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(442)
				bool tmp3 = translation->zpp_inner->_inuse;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(442)
				if ((tmp3)){
					HX_STACK_LINE(442)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(442)
				::zpp_nape::geom::ZPP_Vec2 inner = translation->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(442)
				translation->zpp_inner->outer = null();
				HX_STACK_LINE(442)
				translation->zpp_inner = null();
				HX_STACK_LINE(442)
				{
					HX_STACK_LINE(442)
					::nape::geom::Vec2 o = translation;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(442)
					o->zpp_pool = null();
					HX_STACK_LINE(442)
					::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(442)
					bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(442)
					if ((tmp5)){
						HX_STACK_LINE(442)
						::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(442)
						tmp6->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(442)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(442)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(442)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(442)
				{
					HX_STACK_LINE(442)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(442)
					{
						HX_STACK_LINE(442)
						bool tmp4 = (o->outer != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(442)
						if ((tmp4)){
							HX_STACK_LINE(442)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(442)
							o->outer = null();
						}
						HX_STACK_LINE(442)
						o->_isimmutable = null();
						HX_STACK_LINE(442)
						o->_validate = null();
						HX_STACK_LINE(442)
						o->_invalidate = null();
					}
					HX_STACK_LINE(442)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(442)
					o->next = tmp4;
					HX_STACK_LINE(442)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(443)
			true;
		}
		else{
			HX_STACK_LINE(446)
			false;
		}
	}
	HX_STACK_LINE(449)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Compound_obj,translate,return )

::nape::phys::Compound Compound_obj::rotate( ::nape::geom::Vec2 centre,Float angle){
	HX_STACK_FRAME("nape.phys.Compound","rotate",0x2272b388,"nape.phys.Compound.rotate","nape/phys/Compound.hx",462,0x15c2ad5d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(centre,"centre")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(463)
	{
		HX_STACK_LINE(465)
		bool tmp = (centre != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(465)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(465)
		if ((tmp)){
			HX_STACK_LINE(465)
			tmp1 = centre->zpp_disp;
		}
		else{
			HX_STACK_LINE(465)
			tmp1 = false;
		}
		HX_STACK_LINE(465)
		if ((tmp1)){
			HX_STACK_LINE(465)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(465)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(465)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(469)
	bool tmp = (centre == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(469)
	if ((tmp)){
		HX_STACK_LINE(469)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot rotate about a null Vec2","\xef","\x7f","\x59","\xa6"));
	}
	HX_STACK_LINE(472)
	bool tmp1 = (angle != angle);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(472)
	if ((tmp1)){
		HX_STACK_LINE(472)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot rotate by NaN radians","\xda","\x44","\x34","\x35"));
	}
	HX_STACK_LINE(474)
	bool tmp2 = centre->zpp_inner->weak;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(474)
	bool weak = tmp2;		HX_STACK_VAR(weak,"weak");
	HX_STACK_LINE(475)
	centre->zpp_inner->weak = false;

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::nape::geom::Vec2,centre,Float,angle)
	int __ArgCount() const { return 1; }
	Void run(::nape::phys::Body b){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","nape/phys/Compound.hx",476,0x15c2ad5d)
		HX_STACK_ARG(b,"b")
		{
			HX_STACK_LINE(476)
			::nape::geom::Vec2 tmp3 = centre;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(476)
			Float tmp4 = angle;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(476)
			b->rotate(tmp3,tmp4);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(476)
	this->visitBodies( Dynamic(new _Function_1_1(centre,angle)));
	HX_STACK_LINE(477)
	centre->zpp_inner->weak = weak;
	HX_STACK_LINE(478)
	{
		HX_STACK_LINE(479)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(480)
		tmp3 = centre->zpp_inner->weak;
		HX_STACK_LINE(479)
		if ((tmp3)){
			HX_STACK_LINE(482)
			{
				HX_STACK_LINE(482)
				{
					HX_STACK_LINE(482)
					bool tmp4 = (centre != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(482)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(482)
					if ((tmp4)){
						HX_STACK_LINE(482)
						tmp5 = centre->zpp_disp;
					}
					else{
						HX_STACK_LINE(482)
						tmp5 = false;
					}
					HX_STACK_LINE(482)
					if ((tmp5)){
						HX_STACK_LINE(482)
						::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(482)
						::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(482)
						HX_STACK_DO_THROW(tmp7);
					}
				}
				HX_STACK_LINE(482)
				{
					HX_STACK_LINE(482)
					::zpp_nape::geom::ZPP_Vec2 _this = centre->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(482)
					bool tmp4 = _this->_immutable;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(482)
					if ((tmp4)){
						HX_STACK_LINE(482)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(482)
					bool tmp5 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(482)
					if ((tmp5)){
						HX_STACK_LINE(482)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(482)
				bool tmp4 = centre->zpp_inner->_inuse;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(482)
				if ((tmp4)){
					HX_STACK_LINE(482)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(482)
				::zpp_nape::geom::ZPP_Vec2 inner = centre->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(482)
				centre->zpp_inner->outer = null();
				HX_STACK_LINE(482)
				centre->zpp_inner = null();
				HX_STACK_LINE(482)
				{
					HX_STACK_LINE(482)
					::nape::geom::Vec2 o = centre;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(482)
					o->zpp_pool = null();
					HX_STACK_LINE(482)
					::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(482)
					bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(482)
					if ((tmp6)){
						HX_STACK_LINE(482)
						::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(482)
						tmp7->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(482)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(482)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(482)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(482)
				{
					HX_STACK_LINE(482)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(482)
					{
						HX_STACK_LINE(482)
						bool tmp5 = (o->outer != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(482)
						if ((tmp5)){
							HX_STACK_LINE(482)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(482)
							o->outer = null();
						}
						HX_STACK_LINE(482)
						o->_isimmutable = null();
						HX_STACK_LINE(482)
						o->_validate = null();
						HX_STACK_LINE(482)
						o->_invalidate = null();
					}
					HX_STACK_LINE(482)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(482)
					o->next = tmp5;
					HX_STACK_LINE(482)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(483)
			true;
		}
		else{
			HX_STACK_LINE(486)
			false;
		}
	}
	HX_STACK_LINE(489)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Compound_obj,rotate,return )


Compound_obj::Compound_obj()
{
}

void Compound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Compound);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	::nape::phys::Interactor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Compound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	::nape::phys::Interactor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Compound_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"COM") ) { return COM_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { if (inCallProp == hx::paccAlways) return get_space(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bodies") ) { if (inCallProp == hx::paccAlways) return get_bodies(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"compound") ) { if (inCallProp == hx::paccAlways) return get_compound(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"compounds") ) { if (inCallProp == hx::paccAlways) return get_compounds(); }
		if (HX_FIELD_EQ(inName,"get_space") ) { return get_space_dyn(); }
		if (HX_FIELD_EQ(inName,"set_space") ) { return set_space_dyn(); }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bodies") ) { return get_bodies_dyn(); }
		if (HX_FIELD_EQ(inName,"breakApart") ) { return breakApart_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"constraints") ) { if (inCallProp == hx::paccAlways) return get_constraints(); }
		if (HX_FIELD_EQ(inName,"visitBodies") ) { return visitBodies_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_compound") ) { return get_compound_dyn(); }
		if (HX_FIELD_EQ(inName,"set_compound") ) { return set_compound_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_compounds") ) { return get_compounds_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"visitCompounds") ) { return visitCompounds_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_constraints") ) { return get_constraints_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"visitConstraints") ) { return visitConstraints_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Compound_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { if (inCallProp == hx::paccAlways) return set_space(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"compound") ) { if (inCallProp == hx::paccAlways) return set_compound(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::phys::ZPP_Compound >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Compound_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Compound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("bodies","\x80","\x1b","\xdd","\x5a"));
	outFields->push(HX_HCSTRING("constraints","\x76","\x51","\xb4","\x17"));
	outFields->push(HX_HCSTRING("compounds","\xa8","\x3a","\xfb","\x13"));
	outFields->push(HX_HCSTRING("compound","\x6b","\xc3","\xcf","\x81"));
	outFields->push(HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::phys::ZPP_Compound*/ ,(int)offsetof(Compound_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_bodies","\x49","\x8b","\x64","\x4b"),
	HX_HCSTRING("get_constraints","\x0d","\x09","\x96","\xd8"),
	HX_HCSTRING("get_compounds","\x7f","\x0e","\x5f","\xd5"),
	HX_HCSTRING("get_compound","\x74","\x77","\xe9","\x36"),
	HX_HCSTRING("set_compound","\xe8","\x9a","\xe2","\x4b"),
	HX_HCSTRING("get_space","\x1d","\xe9","\x0f","\xc5"),
	HX_HCSTRING("set_space","\x29","\xd5","\x60","\xa8"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("breakApart","\x95","\xdf","\x18","\x5e"),
	HX_HCSTRING("visitBodies","\xab","\xf3","\x5e","\xe4"),
	HX_HCSTRING("visitConstraints","\x6b","\xfd","\xdb","\xc1"),
	HX_HCSTRING("visitCompounds","\x5d","\x8f","\x9c","\x93"),
	HX_HCSTRING("COM","\x21","\x1c","\x33","\x00"),
	HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Compound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Compound_obj::__mClass,"__mClass");
};

#endif

hx::Class Compound_obj::__mClass;

void Compound_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.phys.Compound","\xa1","\x8f","\x42","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Compound_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Compound_obj >;
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
} // end namespace phys
