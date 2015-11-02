#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_geom_MatMN
#include <nape/geom/MatMN.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ConstraintList
#include <zpp_nape/util/ZPP_ConstraintList.h>
#endif
namespace nape{
namespace constraint{

Void Constraint_obj::__construct()
{
HX_STACK_FRAME("nape.constraint.Constraint","new",0x2f5111da,"nape.constraint.Constraint.new","nape/constraint/Constraint.hx",177,0xfc21f536)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(208)
	this->debugDraw = true;
	HX_STACK_LINE(645)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(645)
	::nape::callbacks::CbType tmp1 = ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_CONSTRAINT;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(645)
	::zpp_nape::callbacks::ZPP_CbType tmp2 = tmp1->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(645)
	tmp->insert_cbtype(tmp2);
	HX_STACK_LINE(647)
	bool tmp3 = ::nape::constraint::Constraint_obj::zpp_internalAlloc;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(647)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(647)
	if ((tmp4)){
		HX_STACK_LINE(647)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraint cannot be instantiated derp!","\xf1","\x11","\xc7","\xfc"));
	}
}
;
	return null();
}

//Constraint_obj::~Constraint_obj() { }

Dynamic Constraint_obj::__CreateEmpty() { return  new Constraint_obj; }
hx::ObjectPtr< Constraint_obj > Constraint_obj::__new()
{  hx::ObjectPtr< Constraint_obj > _result_ = new Constraint_obj();
	_result_->__construct();
	return _result_;}

Dynamic Constraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Constraint_obj > _result_ = new Constraint_obj();
	_result_->__construct();
	return _result_;}

Dynamic Constraint_obj::get_userData( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_userData",0xcf920964,"nape.constraint.Constraint.get_userData","nape/constraint/Constraint.hx",195,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	Dynamic tmp1 = tmp->userData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(196)
	if ((tmp2)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/constraint/Constraint.hx",197,0xfc21f536)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(197)
		Dynamic tmp3 = _Function_2_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(197)
		::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(197)
		tmp4->userData = tmp3;
	}
	HX_STACK_LINE(199)
	::zpp_nape::constraint::ZPP_Constraint tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(199)
	Dynamic tmp4 = tmp3->userData;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(199)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_userData,return )

::nape::phys::Compound Constraint_obj::get_compound( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_compound",0x4c3936ba,"nape.constraint.Constraint.get_compound","nape/constraint/Constraint.hx",219,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(220)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(220)
	::zpp_nape::phys::ZPP_Compound tmp1 = tmp->compound;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(220)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(220)
	::nape::phys::Compound tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(220)
	if ((tmp2)){
		HX_STACK_LINE(220)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(220)
		::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(220)
		tmp3 = tmp4->compound->outer;
	}
	HX_STACK_LINE(220)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_compound,return )

::nape::phys::Compound Constraint_obj::set_compound( ::nape::phys::Compound compound){
	HX_STACK_FRAME("nape.constraint.Constraint","set_compound",0x61325a2e,"nape.constraint.Constraint.set_compound","nape/constraint/Constraint.hx",222,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(compound,"compound")
	HX_STACK_LINE(223)
	{
		HX_STACK_LINE(224)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(224)
		::zpp_nape::phys::ZPP_Compound tmp1 = tmp->compound;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(224)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(224)
		::nape::phys::Compound tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(224)
		if ((tmp2)){
			HX_STACK_LINE(224)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(224)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(224)
			tmp3 = tmp4->compound->outer;
		}
		HX_STACK_LINE(224)
		::nape::phys::Compound tmp4 = compound;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(224)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(224)
		if ((tmp5)){
			HX_STACK_LINE(225)
			::zpp_nape::constraint::ZPP_Constraint tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(225)
			::zpp_nape::phys::ZPP_Compound tmp7 = tmp6->compound;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(225)
			bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(225)
			::nape::phys::Compound tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(225)
			if ((tmp8)){
				HX_STACK_LINE(225)
				tmp9 = null();
			}
			else{
				HX_STACK_LINE(225)
				::zpp_nape::constraint::ZPP_Constraint tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(225)
				tmp9 = tmp10->compound->outer;
			}
			HX_STACK_LINE(225)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(225)
			if ((tmp10)){
				HX_STACK_LINE(226)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(226)
				::zpp_nape::phys::ZPP_Compound tmp12 = tmp11->compound;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(226)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(226)
				::nape::phys::Compound tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(226)
				if ((tmp13)){
					HX_STACK_LINE(226)
					tmp14 = null();
				}
				else{
					HX_STACK_LINE(226)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(226)
					tmp14 = tmp15->compound->outer;
				}
				HX_STACK_LINE(226)
				::nape::constraint::ConstraintList tmp15 = tmp14->zpp_inner->wrap_constraints;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(226)
				tmp15->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(228)
			bool tmp11 = (compound != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(228)
			if ((tmp11)){
				HX_STACK_LINE(229)
				::nape::constraint::ConstraintList tmp12 = compound->zpp_inner->wrap_constraints;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(229)
				::nape::constraint::ConstraintList _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(229)
				bool tmp13 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(229)
				if ((tmp13)){
					HX_STACK_LINE(229)
					_this->push(hx::ObjectPtr<OBJ_>(this));
				}
				else{
					HX_STACK_LINE(229)
					_this->unshift(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
	}
	HX_STACK_LINE(233)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(233)
	::zpp_nape::phys::ZPP_Compound tmp1 = tmp->compound;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(233)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(233)
	::nape::phys::Compound tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(233)
	if ((tmp2)){
		HX_STACK_LINE(233)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(233)
		::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(233)
		tmp3 = tmp4->compound->outer;
	}
	HX_STACK_LINE(233)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_compound,return )

::nape::space::Space Constraint_obj::get_space( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_space",0x942e8217,"nape.constraint.Constraint.get_space","nape/constraint/Constraint.hx",248,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(249)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	::zpp_nape::space::ZPP_Space tmp1 = tmp->space;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(249)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(249)
	::nape::space::Space tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(249)
	if ((tmp2)){
		HX_STACK_LINE(249)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(249)
		::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(249)
		tmp3 = tmp4->space->outer;
	}
	HX_STACK_LINE(249)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_space,return )

::nape::space::Space Constraint_obj::set_space( ::nape::space::Space space){
	HX_STACK_FRAME("nape.constraint.Constraint","set_space",0x777f6e23,"nape.constraint.Constraint.set_space","nape/constraint/Constraint.hx",251,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(space,"space")
	HX_STACK_LINE(252)
	{
		HX_STACK_LINE(254)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(254)
		::zpp_nape::phys::ZPP_Compound tmp1 = tmp->compound;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(254)
		if ((tmp2)){
			HX_STACK_LINE(255)
			::String tmp3 = HX_HCSTRING("Error: Cannot set the space of a Constraint belonging to a Compound, only the root Compound space can be set","\x94","\x3c","\xa3","\x5d");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(255)
			HX_STACK_DO_THROW(tmp3);
		}
		HX_STACK_LINE(258)
		::zpp_nape::constraint::ZPP_Constraint tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(258)
		::zpp_nape::space::ZPP_Space tmp4 = tmp3->space;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(258)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(258)
		::nape::space::Space tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(258)
		if ((tmp5)){
			HX_STACK_LINE(258)
			tmp6 = null();
		}
		else{
			HX_STACK_LINE(258)
			::zpp_nape::constraint::ZPP_Constraint tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(258)
			tmp6 = tmp7->space->outer;
		}
		HX_STACK_LINE(258)
		::nape::space::Space tmp7 = space;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(258)
		bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(258)
		if ((tmp8)){
			HX_STACK_LINE(259)
			::zpp_nape::constraint::ZPP_Constraint tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(259)
			::zpp_nape::space::ZPP_Component tmp10 = tmp9->component;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(259)
			bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(259)
			if ((tmp11)){
				HX_STACK_LINE(259)
				::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(259)
				tmp12->component->woken = false;
			}
			HX_STACK_LINE(260)
			::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(260)
			tmp12->clearcache();
			HX_STACK_LINE(261)
			::zpp_nape::constraint::ZPP_Constraint tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(261)
			::zpp_nape::space::ZPP_Space tmp14 = tmp13->space;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(261)
			bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(261)
			if ((tmp15)){
				HX_STACK_LINE(262)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(262)
				::nape::space::Space tmp17 = tmp16->space->outer;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(262)
				::nape::constraint::ConstraintList tmp18 = tmp17->zpp_inner->wrap_constraints;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(262)
				tmp18->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(264)
			bool tmp16 = (space != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(264)
			if ((tmp16)){
				HX_STACK_LINE(265)
				::nape::constraint::ConstraintList tmp17 = space->zpp_inner->wrap_constraints;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(265)
				::nape::constraint::ConstraintList _this = tmp17;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(265)
				bool tmp18 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(265)
				if ((tmp18)){
					HX_STACK_LINE(265)
					_this->push(hx::ObjectPtr<OBJ_>(this));
				}
				else{
					HX_STACK_LINE(265)
					_this->unshift(hx::ObjectPtr<OBJ_>(this));
				}
			}
			else{
				HX_STACK_LINE(268)
				::zpp_nape::constraint::ZPP_Constraint tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(268)
				tmp17->space = null();
			}
		}
	}
	HX_STACK_LINE(272)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(272)
	::zpp_nape::space::ZPP_Space tmp1 = tmp->space;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(272)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(272)
	::nape::space::Space tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(272)
	if ((tmp2)){
		HX_STACK_LINE(272)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(272)
		::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(272)
		tmp3 = tmp4->space->outer;
	}
	HX_STACK_LINE(272)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_space,return )

bool Constraint_obj::get_isSleeping( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_isSleeping",0xd96a8f44,"nape.constraint.Constraint.get_isSleeping","nape/constraint/Constraint.hx",290,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(292)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(292)
	::zpp_nape::space::ZPP_Space tmp1 = tmp->space;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(292)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(292)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(292)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(292)
	if ((tmp3)){
		HX_STACK_LINE(292)
		::zpp_nape::constraint::ZPP_Constraint tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(292)
		::zpp_nape::constraint::ZPP_Constraint tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(292)
		bool tmp7 = tmp6->active;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(292)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(292)
		tmp4 = !(tmp8);
	}
	else{
		HX_STACK_LINE(292)
		tmp4 = true;
	}
	HX_STACK_LINE(292)
	if ((tmp4)){
		HX_STACK_LINE(293)
		::String tmp5 = HX_HCSTRING("Error: isSleeping only makes sense if constraint is active and inside a space","\x94","\x7f","\x68","\xf7");		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(293)
		HX_STACK_DO_THROW(tmp5);
	}
	HX_STACK_LINE(296)
	::zpp_nape::constraint::ZPP_Constraint tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(296)
	bool tmp6 = tmp5->component->sleeping;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(296)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_isSleeping,return )

bool Constraint_obj::get_active( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_active",0x7274f355,"nape.constraint.Constraint.get_active","nape/constraint/Constraint.hx",309,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(310)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(310)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(310)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_active,return )

bool Constraint_obj::set_active( bool active){
	HX_STACK_FRAME("nape.constraint.Constraint","set_active",0x75f291c9,"nape.constraint.Constraint.set_active","nape/constraint/Constraint.hx",312,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(active,"active")
	HX_STACK_LINE(313)
	{
		HX_STACK_LINE(314)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(314)
		bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(314)
		bool tmp2 = active;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(314)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(314)
		if ((tmp3)){
			HX_STACK_LINE(315)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(315)
			::zpp_nape::space::ZPP_Component tmp5 = tmp4->component;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(315)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(315)
			if ((tmp6)){
				HX_STACK_LINE(315)
				::zpp_nape::constraint::ZPP_Constraint tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(315)
				tmp7->component->woken = false;
			}
			HX_STACK_LINE(316)
			::zpp_nape::constraint::ZPP_Constraint tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(316)
			tmp7->clearcache();
			HX_STACK_LINE(317)
			bool tmp8 = active;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(317)
			if ((tmp8)){
				HX_STACK_LINE(318)
				::zpp_nape::constraint::ZPP_Constraint tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(318)
				tmp9->active = active;
				HX_STACK_LINE(319)
				::zpp_nape::constraint::ZPP_Constraint tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(319)
				tmp10->activate();
				HX_STACK_LINE(320)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(320)
				::zpp_nape::space::ZPP_Space tmp12 = tmp11->space;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(320)
				bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(320)
				if ((tmp13)){
					HX_STACK_LINE(321)
					::zpp_nape::constraint::ZPP_Constraint tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(321)
					::zpp_nape::space::ZPP_Component tmp15 = tmp14->component;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(321)
					bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(321)
					if ((tmp16)){
						HX_STACK_LINE(321)
						::zpp_nape::constraint::ZPP_Constraint tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(321)
						tmp17->component->sleeping = true;
					}
					HX_STACK_LINE(322)
					::zpp_nape::constraint::ZPP_Constraint tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(322)
					::zpp_nape::constraint::ZPP_Constraint tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(322)
					tmp17->space->wake_constraint(tmp18,true);
				}
			}
			else{
				HX_STACK_LINE(326)
				::zpp_nape::constraint::ZPP_Constraint tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(326)
				::zpp_nape::space::ZPP_Space tmp10 = tmp9->space;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(326)
				bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(326)
				if ((tmp11)){
					HX_STACK_LINE(327)
					::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(327)
					tmp12->wake();
					HX_STACK_LINE(328)
					::zpp_nape::constraint::ZPP_Constraint tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(328)
					::zpp_nape::util::ZNPList_ZPP_Constraint tmp14 = tmp13->space->live_constraints;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(328)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(328)
					tmp14->remove(tmp15);
				}
				HX_STACK_LINE(330)
				::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(330)
				tmp12->active = active;
				HX_STACK_LINE(331)
				::zpp_nape::constraint::ZPP_Constraint tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(331)
				tmp13->deactivate();
			}
		}
	}
	HX_STACK_LINE(335)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(335)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(335)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_active,return )

bool Constraint_obj::get_ignore( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_ignore",0xeef76aa1,"nape.constraint.Constraint.get_ignore","nape/constraint/Constraint.hx",347,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(348)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(348)
	bool tmp1 = tmp->ignore;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(348)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_ignore,return )

bool Constraint_obj::set_ignore( bool ignore){
	HX_STACK_FRAME("nape.constraint.Constraint","set_ignore",0xf2750915,"nape.constraint.Constraint.set_ignore","nape/constraint/Constraint.hx",350,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ignore,"ignore")
	HX_STACK_LINE(351)
	{
		HX_STACK_LINE(352)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(352)
		bool tmp1 = tmp->ignore;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(352)
		bool tmp2 = ignore;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(352)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(352)
		if ((tmp3)){
			HX_STACK_LINE(353)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(353)
			tmp4->ignore = ignore;
			HX_STACK_LINE(354)
			::zpp_nape::constraint::ZPP_Constraint tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(354)
			tmp5->wake();
		}
	}
	HX_STACK_LINE(357)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(357)
	bool tmp1 = tmp->ignore;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(357)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_ignore,return )

bool Constraint_obj::get_stiff( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_stiff",0x96d97139,"nape.constraint.Constraint.get_stiff","nape/constraint/Constraint.hx",376,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(377)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(377)
	bool tmp1 = tmp->stiff;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(377)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_stiff,return )

bool Constraint_obj::set_stiff( bool stiff){
	HX_STACK_FRAME("nape.constraint.Constraint","set_stiff",0x7a2a5d45,"nape.constraint.Constraint.set_stiff","nape/constraint/Constraint.hx",379,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stiff,"stiff")
	HX_STACK_LINE(380)
	{
		HX_STACK_LINE(381)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(381)
		bool tmp1 = tmp->stiff;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(381)
		bool tmp2 = stiff;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(381)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(381)
		if ((tmp3)){
			HX_STACK_LINE(382)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(382)
			tmp4->stiff = stiff;
			HX_STACK_LINE(383)
			::zpp_nape::constraint::ZPP_Constraint tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(383)
			tmp5->wake();
		}
	}
	HX_STACK_LINE(386)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(386)
	bool tmp1 = tmp->stiff;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(386)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_stiff,return )

Float Constraint_obj::get_frequency( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_frequency",0x0dc5f46d,"nape.constraint.Constraint.get_frequency","nape/constraint/Constraint.hx",402,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(403)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(403)
	Float tmp1 = tmp->frequency;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(403)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_frequency,return )

Float Constraint_obj::set_frequency( Float frequency){
	HX_STACK_FRAME("nape.constraint.Constraint","set_frequency",0x52cbd679,"nape.constraint.Constraint.set_frequency","nape/constraint/Constraint.hx",405,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frequency,"frequency")
	HX_STACK_LINE(406)
	{
		HX_STACK_LINE(408)
		bool tmp = (frequency != frequency);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(408)
		if ((tmp)){
			HX_STACK_LINE(409)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraint::Frequency cannot be NaN","\x2c","\x1e","\xc8","\x25"));
		}
		HX_STACK_LINE(411)
		bool tmp1 = (frequency <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(411)
		if ((tmp1)){
			HX_STACK_LINE(412)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraint::Frequency must be >0","\x87","\xa7","\xde","\xc8"));
		}
		HX_STACK_LINE(415)
		::zpp_nape::constraint::ZPP_Constraint tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(415)
		Float tmp3 = tmp2->frequency;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(415)
		Float tmp4 = frequency;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(415)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(415)
		if ((tmp5)){
			HX_STACK_LINE(416)
			::zpp_nape::constraint::ZPP_Constraint tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(416)
			tmp6->frequency = frequency;
			HX_STACK_LINE(417)
			::zpp_nape::constraint::ZPP_Constraint tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(417)
			bool tmp8 = tmp7->stiff;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(417)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(417)
			if ((tmp9)){
				HX_STACK_LINE(418)
				::zpp_nape::constraint::ZPP_Constraint tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(418)
				tmp10->wake();
			}
		}
	}
	HX_STACK_LINE(422)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(422)
	Float tmp1 = tmp->frequency;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(422)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_frequency,return )

Float Constraint_obj::get_damping( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_damping",0x60b23c53,"nape.constraint.Constraint.get_damping","nape/constraint/Constraint.hx",439,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(440)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(440)
	Float tmp1 = tmp->damping;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(440)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_damping,return )

Float Constraint_obj::set_damping( Float damping){
	HX_STACK_FRAME("nape.constraint.Constraint","set_damping",0x6b1f435f,"nape.constraint.Constraint.set_damping","nape/constraint/Constraint.hx",442,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(damping,"damping")
	HX_STACK_LINE(443)
	{
		HX_STACK_LINE(445)
		bool tmp = (damping != damping);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(445)
		if ((tmp)){
			HX_STACK_LINE(446)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraint::Damping cannot be Nan","\xb2","\x2b","\x24","\x5d"));
		}
		HX_STACK_LINE(448)
		bool tmp1 = (damping < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(448)
		if ((tmp1)){
			HX_STACK_LINE(449)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraint::Damping must be >=0","\x02","\xc2","\x61","\x64"));
		}
		HX_STACK_LINE(452)
		::zpp_nape::constraint::ZPP_Constraint tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(452)
		Float tmp3 = tmp2->damping;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(452)
		Float tmp4 = damping;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(452)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(452)
		if ((tmp5)){
			HX_STACK_LINE(453)
			::zpp_nape::constraint::ZPP_Constraint tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(453)
			tmp6->damping = damping;
			HX_STACK_LINE(454)
			::zpp_nape::constraint::ZPP_Constraint tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(454)
			bool tmp8 = tmp7->stiff;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(454)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(454)
			if ((tmp9)){
				HX_STACK_LINE(455)
				::zpp_nape::constraint::ZPP_Constraint tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(455)
				tmp10->wake();
			}
		}
	}
	HX_STACK_LINE(459)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(459)
	Float tmp1 = tmp->damping;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(459)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_damping,return )

Float Constraint_obj::get_maxForce( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_maxForce",0x791b77f6,"nape.constraint.Constraint.get_maxForce","nape/constraint/Constraint.hx",475,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(476)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(476)
	Float tmp1 = tmp->maxForce;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(476)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_maxForce,return )

Float Constraint_obj::set_maxForce( Float maxForce){
	HX_STACK_FRAME("nape.constraint.Constraint","set_maxForce",0x8e149b6a,"nape.constraint.Constraint.set_maxForce","nape/constraint/Constraint.hx",478,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(maxForce,"maxForce")
	HX_STACK_LINE(479)
	{
		HX_STACK_LINE(481)
		bool tmp = (maxForce != maxForce);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(481)
		if ((tmp)){
			HX_STACK_LINE(482)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraint::maxForce cannot be NaN","\x0d","\x98","\xfe","\x01"));
		}
		HX_STACK_LINE(484)
		bool tmp1 = (maxForce < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(484)
		if ((tmp1)){
			HX_STACK_LINE(485)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraint::maxForce must be >=0","\xbd","\x89","\xae","\x46"));
		}
		HX_STACK_LINE(488)
		::zpp_nape::constraint::ZPP_Constraint tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(488)
		Float tmp3 = tmp2->maxForce;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(488)
		Float tmp4 = maxForce;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(488)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(488)
		if ((tmp5)){
			HX_STACK_LINE(489)
			::zpp_nape::constraint::ZPP_Constraint tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(489)
			tmp6->maxForce = maxForce;
			HX_STACK_LINE(490)
			::zpp_nape::constraint::ZPP_Constraint tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(490)
			tmp7->wake();
		}
	}
	HX_STACK_LINE(493)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(493)
	Float tmp1 = tmp->maxForce;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(493)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_maxForce,return )

Float Constraint_obj::get_maxError( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_maxError",0xe7b091d3,"nape.constraint.Constraint.get_maxError","nape/constraint/Constraint.hx",509,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(510)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(510)
	Float tmp1 = tmp->maxError;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(510)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_maxError,return )

Float Constraint_obj::set_maxError( Float maxError){
	HX_STACK_FRAME("nape.constraint.Constraint","set_maxError",0xfca9b547,"nape.constraint.Constraint.set_maxError","nape/constraint/Constraint.hx",512,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(maxError,"maxError")
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(515)
		bool tmp = (maxError != maxError);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(515)
		if ((tmp)){
			HX_STACK_LINE(516)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraint::maxError cannot be NaN","\xaa","\x5a","\x26","\x1b"));
		}
		HX_STACK_LINE(518)
		bool tmp1 = (maxError < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(518)
		if ((tmp1)){
			HX_STACK_LINE(519)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraint::maxError must be >=0","\x1a","\x7b","\x31","\xc4"));
		}
		HX_STACK_LINE(522)
		::zpp_nape::constraint::ZPP_Constraint tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(522)
		Float tmp3 = tmp2->maxError;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(522)
		Float tmp4 = maxError;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(522)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(522)
		if ((tmp5)){
			HX_STACK_LINE(523)
			::zpp_nape::constraint::ZPP_Constraint tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(523)
			tmp6->maxError = maxError;
			HX_STACK_LINE(524)
			::zpp_nape::constraint::ZPP_Constraint tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(524)
			tmp7->wake();
		}
	}
	HX_STACK_LINE(527)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(527)
	Float tmp1 = tmp->maxError;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(527)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_maxError,return )

bool Constraint_obj::get_breakUnderForce( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_breakUnderForce",0x0211ebe3,"nape.constraint.Constraint.get_breakUnderForce","nape/constraint/Constraint.hx",540,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(541)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(541)
	bool tmp1 = tmp->breakUnderForce;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(541)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_breakUnderForce,return )

bool Constraint_obj::set_breakUnderForce( bool breakUnderForce){
	HX_STACK_FRAME("nape.constraint.Constraint","set_breakUnderForce",0x3eaedeef,"nape.constraint.Constraint.set_breakUnderForce","nape/constraint/Constraint.hx",543,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(breakUnderForce,"breakUnderForce")
	HX_STACK_LINE(544)
	{
		HX_STACK_LINE(545)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(545)
		bool tmp1 = tmp->breakUnderForce;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(545)
		bool tmp2 = breakUnderForce;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(545)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(545)
		if ((tmp3)){
			HX_STACK_LINE(546)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(546)
			tmp4->breakUnderForce = breakUnderForce;
			HX_STACK_LINE(547)
			::zpp_nape::constraint::ZPP_Constraint tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(547)
			tmp5->wake();
		}
	}
	HX_STACK_LINE(550)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(550)
	bool tmp1 = tmp->breakUnderForce;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(550)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_breakUnderForce,return )

bool Constraint_obj::get_breakUnderError( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_breakUnderError",0x70a705c0,"nape.constraint.Constraint.get_breakUnderError","nape/constraint/Constraint.hx",561,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(562)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(562)
	bool tmp1 = tmp->breakUnderError;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(562)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_breakUnderError,return )

bool Constraint_obj::set_breakUnderError( bool breakUnderError){
	HX_STACK_FRAME("nape.constraint.Constraint","set_breakUnderError",0xad43f8cc,"nape.constraint.Constraint.set_breakUnderError","nape/constraint/Constraint.hx",564,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(breakUnderError,"breakUnderError")
	HX_STACK_LINE(565)
	{
		HX_STACK_LINE(566)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(566)
		bool tmp1 = tmp->breakUnderError;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(566)
		bool tmp2 = breakUnderError;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(566)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(566)
		if ((tmp3)){
			HX_STACK_LINE(567)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(567)
			tmp4->breakUnderError = breakUnderError;
			HX_STACK_LINE(568)
			::zpp_nape::constraint::ZPP_Constraint tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(568)
			tmp5->wake();
		}
	}
	HX_STACK_LINE(571)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(571)
	bool tmp1 = tmp->breakUnderError;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(571)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_breakUnderError,return )

bool Constraint_obj::get_removeOnBreak( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_removeOnBreak",0xa18b4d8d,"nape.constraint.Constraint.get_removeOnBreak","nape/constraint/Constraint.hx",583,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(584)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(584)
	bool tmp1 = tmp->removeOnBreak;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(584)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_removeOnBreak,return )

bool Constraint_obj::set_removeOnBreak( bool removeOnBreak){
	HX_STACK_FRAME("nape.constraint.Constraint","set_removeOnBreak",0xc4f92599,"nape.constraint.Constraint.set_removeOnBreak","nape/constraint/Constraint.hx",586,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(removeOnBreak,"removeOnBreak")
	HX_STACK_LINE(587)
	{
		HX_STACK_LINE(588)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(588)
		tmp->removeOnBreak = removeOnBreak;
	}
	HX_STACK_LINE(590)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(590)
	bool tmp1 = tmp->removeOnBreak;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(590)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,set_removeOnBreak,return )

::nape::geom::MatMN Constraint_obj::impulse( ){
	HX_STACK_FRAME("nape.constraint.Constraint","impulse",0xa9d1d72f,"nape.constraint.Constraint.impulse","nape/constraint/Constraint.hx",598,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(598)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,impulse,return )

::nape::geom::Vec3 Constraint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.constraint.Constraint","bodyImpulse",0x2654c1ad,"nape.constraint.Constraint.bodyImpulse","nape/constraint/Constraint.hx",611,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(611)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,bodyImpulse,return )

Void Constraint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_FRAME("nape.constraint.Constraint","visitBodies",0xab113f25,"nape.constraint.Constraint.visitBodies","nape/constraint/Constraint.hx",622,0xfc21f536)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Constraint_obj,visitBodies,(void))

::nape::callbacks::CbTypeList Constraint_obj::get_cbTypes( ){
	HX_STACK_FRAME("nape.constraint.Constraint","get_cbTypes",0x3e6bd4eb,"nape.constraint.Constraint.get_cbTypes","nape/constraint/Constraint.hx",632,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(633)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(633)
	::nape::callbacks::CbTypeList tmp1 = tmp->wrap_cbTypes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(633)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(633)
	if ((tmp2)){
		HX_STACK_LINE(634)
		::zpp_nape::constraint::ZPP_Constraint tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(634)
		tmp3->setupcbTypes();
	}
	HX_STACK_LINE(636)
	::zpp_nape::constraint::ZPP_Constraint tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(636)
	::nape::callbacks::CbTypeList tmp4 = tmp3->wrap_cbTypes;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(636)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,get_cbTypes,return )

::String Constraint_obj::toString( ){
	HX_STACK_FRAME("nape.constraint.Constraint","toString",0x8e4ff4f2,"nape.constraint.Constraint.toString","nape/constraint/Constraint.hx",654,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(654)
	return HX_HCSTRING("{Constraint}","\xc5","\x94","\xe0","\x92");
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,toString,return )

::nape::constraint::Constraint Constraint_obj::copy( ){
	HX_STACK_FRAME("nape.constraint.Constraint","copy",0x3060c4fb,"nape.constraint.Constraint.copy","nape/constraint/Constraint.hx",664,0xfc21f536)
	HX_STACK_THIS(this)
	HX_STACK_LINE(665)
	::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(665)
	::nape::constraint::Constraint tmp1 = tmp->copy(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(665)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Constraint_obj,copy,return )

bool Constraint_obj::zpp_internalAlloc;


Constraint_obj::Constraint_obj()
{
}

void Constraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Constraint);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_MEMBER_NAME(debugDraw,"debugDraw");
	HX_MARK_END_CLASS();
}

void Constraint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_VISIT_MEMBER_NAME(debugDraw,"debugDraw");
}

Dynamic Constraint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { if (inCallProp == hx::paccAlways) return get_space(); }
		if (HX_FIELD_EQ(inName,"stiff") ) { if (inCallProp == hx::paccAlways) return get_stiff(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { if (inCallProp == hx::paccAlways) return get_active(); }
		if (HX_FIELD_EQ(inName,"ignore") ) { if (inCallProp == hx::paccAlways) return get_ignore(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"damping") ) { if (inCallProp == hx::paccAlways) return get_damping(); }
		if (HX_FIELD_EQ(inName,"impulse") ) { return impulse_dyn(); }
		if (HX_FIELD_EQ(inName,"cbTypes") ) { if (inCallProp == hx::paccAlways) return get_cbTypes(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { if (inCallProp == hx::paccAlways) return get_userData(); }
		if (HX_FIELD_EQ(inName,"compound") ) { if (inCallProp == hx::paccAlways) return get_compound(); }
		if (HX_FIELD_EQ(inName,"maxForce") ) { if (inCallProp == hx::paccAlways) return get_maxForce(); }
		if (HX_FIELD_EQ(inName,"maxError") ) { if (inCallProp == hx::paccAlways) return get_maxError(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw; }
		if (HX_FIELD_EQ(inName,"get_space") ) { return get_space_dyn(); }
		if (HX_FIELD_EQ(inName,"set_space") ) { return set_space_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stiff") ) { return get_stiff_dyn(); }
		if (HX_FIELD_EQ(inName,"set_stiff") ) { return set_stiff_dyn(); }
		if (HX_FIELD_EQ(inName,"frequency") ) { if (inCallProp == hx::paccAlways) return get_frequency(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isSleeping") ) { if (inCallProp == hx::paccAlways) return get_isSleeping(); }
		if (HX_FIELD_EQ(inName,"get_active") ) { return get_active_dyn(); }
		if (HX_FIELD_EQ(inName,"set_active") ) { return set_active_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ignore") ) { return get_ignore_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ignore") ) { return set_ignore_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_damping") ) { return get_damping_dyn(); }
		if (HX_FIELD_EQ(inName,"set_damping") ) { return set_damping_dyn(); }
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"visitBodies") ) { return visitBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cbTypes") ) { return get_cbTypes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_userData") ) { return get_userData_dyn(); }
		if (HX_FIELD_EQ(inName,"get_compound") ) { return get_compound_dyn(); }
		if (HX_FIELD_EQ(inName,"set_compound") ) { return set_compound_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxForce") ) { return get_maxForce_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxForce") ) { return set_maxForce_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxError") ) { return get_maxError_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxError") ) { return set_maxError_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_frequency") ) { return get_frequency_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frequency") ) { return set_frequency_dyn(); }
		if (HX_FIELD_EQ(inName,"removeOnBreak") ) { if (inCallProp == hx::paccAlways) return get_removeOnBreak(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_isSleeping") ) { return get_isSleeping_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"breakUnderForce") ) { if (inCallProp == hx::paccAlways) return get_breakUnderForce(); }
		if (HX_FIELD_EQ(inName,"breakUnderError") ) { if (inCallProp == hx::paccAlways) return get_breakUnderError(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_removeOnBreak") ) { return get_removeOnBreak_dyn(); }
		if (HX_FIELD_EQ(inName,"set_removeOnBreak") ) { return set_removeOnBreak_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_breakUnderForce") ) { return get_breakUnderForce_dyn(); }
		if (HX_FIELD_EQ(inName,"set_breakUnderForce") ) { return set_breakUnderForce_dyn(); }
		if (HX_FIELD_EQ(inName,"get_breakUnderError") ) { return get_breakUnderError_dyn(); }
		if (HX_FIELD_EQ(inName,"set_breakUnderError") ) { return set_breakUnderError_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Constraint_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"zpp_internalAlloc") ) { outValue = zpp_internalAlloc; return true;  }
	}
	return false;
}

Dynamic Constraint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { if (inCallProp == hx::paccAlways) return set_space(inValue); }
		if (HX_FIELD_EQ(inName,"stiff") ) { if (inCallProp == hx::paccAlways) return set_stiff(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { if (inCallProp == hx::paccAlways) return set_active(inValue); }
		if (HX_FIELD_EQ(inName,"ignore") ) { if (inCallProp == hx::paccAlways) return set_ignore(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"damping") ) { if (inCallProp == hx::paccAlways) return set_damping(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"compound") ) { if (inCallProp == hx::paccAlways) return set_compound(inValue); }
		if (HX_FIELD_EQ(inName,"maxForce") ) { if (inCallProp == hx::paccAlways) return set_maxForce(inValue); }
		if (HX_FIELD_EQ(inName,"maxError") ) { if (inCallProp == hx::paccAlways) return set_maxError(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::constraint::ZPP_Constraint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { debugDraw=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frequency") ) { if (inCallProp == hx::paccAlways) return set_frequency(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeOnBreak") ) { if (inCallProp == hx::paccAlways) return set_removeOnBreak(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"breakUnderForce") ) { if (inCallProp == hx::paccAlways) return set_breakUnderForce(inValue); }
		if (HX_FIELD_EQ(inName,"breakUnderError") ) { if (inCallProp == hx::paccAlways) return set_breakUnderError(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Constraint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"zpp_internalAlloc") ) { zpp_internalAlloc=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void Constraint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("userData","\x15","\x96","\x28","\x05"));
	outFields->push(HX_HCSTRING("debugDraw","\xf7","\xcf","\xbb","\x25"));
	outFields->push(HX_HCSTRING("compound","\x6b","\xc3","\xcf","\x81"));
	outFields->push(HX_HCSTRING("space","\xc6","\x8c","\x66","\x81"));
	outFields->push(HX_HCSTRING("isSleeping","\x35","\x6a","\x42","\x8b"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("ignore","\x12","\xb9","\xc8","\x92"));
	outFields->push(HX_HCSTRING("stiff","\xe8","\x7b","\x11","\x84"));
	outFields->push(HX_HCSTRING("frequency","\x9c","\x82","\xea","\xbb"));
	outFields->push(HX_HCSTRING("damping","\xc2","\x90","\x05","\x14"));
	outFields->push(HX_HCSTRING("maxForce","\xa7","\x04","\xb2","\xae"));
	outFields->push(HX_HCSTRING("maxError","\x84","\x1e","\x47","\x1d"));
	outFields->push(HX_HCSTRING("breakUnderForce","\x52","\xc7","\x85","\x6d"));
	outFields->push(HX_HCSTRING("breakUnderError","\x2f","\xe1","\x1a","\xdc"));
	outFields->push(HX_HCSTRING("removeOnBreak","\x3c","\x1f","\xe4","\x27"));
	outFields->push(HX_HCSTRING("cbTypes","\x5a","\x29","\xbf","\xf1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::constraint::ZPP_Constraint*/ ,(int)offsetof(Constraint_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{hx::fsBool,(int)offsetof(Constraint_obj,debugDraw),HX_HCSTRING("debugDraw","\xf7","\xcf","\xbb","\x25")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Constraint_obj::zpp_internalAlloc,HX_HCSTRING("zpp_internalAlloc","\xb3","\x36","\x26","\x40")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_userData","\x1e","\x4a","\x42","\xba"),
	HX_HCSTRING("debugDraw","\xf7","\xcf","\xbb","\x25"),
	HX_HCSTRING("get_compound","\x74","\x77","\xe9","\x36"),
	HX_HCSTRING("set_compound","\xe8","\x9a","\xe2","\x4b"),
	HX_HCSTRING("get_space","\x1d","\xe9","\x0f","\xc5"),
	HX_HCSTRING("set_space","\x29","\xd5","\x60","\xa8"),
	HX_HCSTRING("get_isSleeping","\x7e","\xf2","\x37","\x01"),
	HX_HCSTRING("get_active","\x8f","\xb1","\xcd","\x06"),
	HX_HCSTRING("set_active","\x03","\x50","\x4b","\x0a"),
	HX_HCSTRING("get_ignore","\xdb","\x28","\x50","\x83"),
	HX_HCSTRING("set_ignore","\x4f","\xc7","\xcd","\x86"),
	HX_HCSTRING("get_stiff","\x3f","\xd8","\xba","\xc7"),
	HX_HCSTRING("set_stiff","\x4b","\xc4","\x0b","\xab"),
	HX_HCSTRING("get_frequency","\x73","\x56","\x4e","\x7d"),
	HX_HCSTRING("set_frequency","\x7f","\x38","\x54","\xc2"),
	HX_HCSTRING("get_damping","\xd9","\xf0","\xff","\x99"),
	HX_HCSTRING("set_damping","\xe5","\xf7","\x6c","\xa4"),
	HX_HCSTRING("get_maxForce","\xb0","\xb8","\xcb","\x63"),
	HX_HCSTRING("set_maxForce","\x24","\xdc","\xc4","\x78"),
	HX_HCSTRING("get_maxError","\x8d","\xd2","\x60","\xd2"),
	HX_HCSTRING("set_maxError","\x01","\xf6","\x59","\xe7"),
	HX_HCSTRING("get_breakUnderForce","\x69","\x96","\x90","\xf8"),
	HX_HCSTRING("set_breakUnderForce","\x75","\x89","\x2d","\x35"),
	HX_HCSTRING("get_breakUnderError","\x46","\xb0","\x25","\x67"),
	HX_HCSTRING("set_breakUnderError","\x52","\xa3","\xc2","\xa3"),
	HX_HCSTRING("get_removeOnBreak","\x93","\x2a","\x54","\x2e"),
	HX_HCSTRING("set_removeOnBreak","\x9f","\x02","\xc2","\x51"),
	HX_HCSTRING("impulse","\xb5","\x50","\xbd","\x6d"),
	HX_HCSTRING("bodyImpulse","\x33","\x76","\xa2","\x5f"),
	HX_HCSTRING("visitBodies","\xab","\xf3","\x5e","\xe4"),
	HX_HCSTRING("get_cbTypes","\x71","\x89","\xb9","\x77"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Constraint_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Constraint_obj::zpp_internalAlloc,"zpp_internalAlloc");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Constraint_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Constraint_obj::zpp_internalAlloc,"zpp_internalAlloc");
};

#endif

hx::Class Constraint_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_internalAlloc","\xb3","\x36","\x26","\x40"),
	::String(null()) };

void Constraint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.constraint.Constraint","\xe8","\xdc","\x00","\x54");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Constraint_obj::__GetStatic;
	__mClass->mSetStaticField = &Constraint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Constraint_obj >;
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

void Constraint_obj::__boot()
{
	zpp_internalAlloc= false;
}

} // end namespace nape
} // end namespace constraint
