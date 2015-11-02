#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_PivotJoint
#include <nape/constraint/PivotJoint.h>
#endif
#ifndef INCLUDED_nape_geom_MatMN
#include <nape/geom/MatMN.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_PivotJoint
#include <zpp_nape/constraint/ZPP_PivotJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MatMN
#include <zpp_nape/geom/ZPP_MatMN.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace nape{
namespace constraint{

Void PivotJoint_obj::__construct(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2)
{
HX_STACK_FRAME("nape.constraint.PivotJoint","new",0xa526f225,"nape.constraint.PivotJoint.new","nape/constraint/PivotJoint.hx",186,0x587fe74b)
HX_STACK_THIS(this)
HX_STACK_ARG(body1,"body1")
HX_STACK_ARG(body2,"body2")
HX_STACK_ARG(anchor1,"anchor1")
HX_STACK_ARG(anchor2,"anchor2")
{
	HX_STACK_LINE(190)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(329)
	::zpp_nape::constraint::ZPP_PivotJoint tmp = ::zpp_nape::constraint::ZPP_PivotJoint_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(329)
	this->zpp_inner_zn = tmp;
	HX_STACK_LINE(330)
	::zpp_nape::constraint::ZPP_PivotJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(330)
	this->zpp_inner = tmp1;
	HX_STACK_LINE(331)
	::zpp_nape::constraint::ZPP_Constraint tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(331)
	tmp2->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(332)
	::zpp_nape::constraint::ZPP_PivotJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(332)
	tmp3->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(334)
	::nape::constraint::Constraint_obj::zpp_internalAlloc = true;
	HX_STACK_LINE(335)
	super::__construct();
	HX_STACK_LINE(336)
	::nape::constraint::Constraint_obj::zpp_internalAlloc = false;
	HX_STACK_LINE(341)
	{
		HX_STACK_LINE(341)
		{
			HX_STACK_LINE(341)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(341)
			::String tmp5 = HX_HCSTRING("Constraint::body1","\xb2","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(341)
			tmp4->immutable_midstep(tmp5);
			HX_STACK_LINE(341)
			bool tmp6 = (body1 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(341)
			::zpp_nape::phys::ZPP_Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(341)
			if ((tmp6)){
				HX_STACK_LINE(341)
				tmp7 = null();
			}
			else{
				HX_STACK_LINE(341)
				tmp7 = body1->zpp_inner;
			}
			HX_STACK_LINE(341)
			::zpp_nape::phys::ZPP_Body inbody1 = tmp7;		HX_STACK_VAR(inbody1,"inbody1");
			HX_STACK_LINE(341)
			::zpp_nape::phys::ZPP_Body tmp8 = inbody1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(341)
			::zpp_nape::constraint::ZPP_PivotJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(341)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9->b1;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(341)
			bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(341)
			if ((tmp11)){
				HX_STACK_LINE(341)
				::zpp_nape::constraint::ZPP_PivotJoint tmp12 = this->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(341)
				::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(341)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(341)
				if ((tmp14)){
					HX_STACK_LINE(341)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(341)
					::zpp_nape::space::ZPP_Space tmp16 = tmp15->space;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(341)
					bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(341)
					::nape::space::Space tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(341)
					if ((tmp17)){
						HX_STACK_LINE(341)
						tmp18 = null();
					}
					else{
						HX_STACK_LINE(341)
						::zpp_nape::constraint::ZPP_Constraint tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(341)
						tmp18 = tmp19->space->outer;
					}
					HX_STACK_LINE(341)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(341)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(341)
					if ((tmp19)){
						HX_STACK_LINE(341)
						::zpp_nape::constraint::ZPP_PivotJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(341)
						::zpp_nape::constraint::ZPP_PivotJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(341)
						::zpp_nape::phys::ZPP_Body tmp23 = tmp22->b2;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(341)
						::zpp_nape::constraint::ZPP_PivotJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(341)
						::zpp_nape::constraint::ZPP_PivotJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(341)
						::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b1;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(341)
						tmp20 = (tmp23 != tmp26);
					}
					else{
						HX_STACK_LINE(341)
						tmp20 = false;
					}
					HX_STACK_LINE(341)
					if ((tmp20)){
						HX_STACK_LINE(341)
						::zpp_nape::constraint::ZPP_PivotJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(341)
						::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b1;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(341)
						bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(341)
						if ((tmp23)){
							HX_STACK_LINE(341)
							::zpp_nape::constraint::ZPP_PivotJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(341)
							::zpp_nape::util::ZNPList_ZPP_Constraint tmp25 = tmp24->b1->constraints;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(341)
							::zpp_nape::constraint::ZPP_Constraint tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(341)
							tmp25->remove(tmp26);
						}
					}
					HX_STACK_LINE(341)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(341)
					bool tmp22 = tmp21->active;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(341)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(341)
					if ((tmp22)){
						HX_STACK_LINE(341)
						::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(341)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(341)
						::zpp_nape::space::ZPP_Space tmp26 = tmp25->space;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(341)
						bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(341)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(341)
						::nape::space::Space tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(341)
						bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(341)
						if ((tmp30)){
							HX_STACK_LINE(341)
							tmp29 = null();
						}
						else{
							HX_STACK_LINE(341)
							::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(341)
							::zpp_nape::constraint::ZPP_Constraint tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(341)
							::nape::space::Space tmp33 = tmp32->space->outer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(341)
							tmp29 = tmp33;
						}
						HX_STACK_LINE(341)
						tmp23 = (tmp29 != null());
					}
					else{
						HX_STACK_LINE(341)
						tmp23 = false;
					}
					HX_STACK_LINE(341)
					if ((tmp23)){
						HX_STACK_LINE(341)
						::zpp_nape::constraint::ZPP_PivotJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(341)
						tmp24->b1->wake();
					}
				}
				HX_STACK_LINE(341)
				::zpp_nape::constraint::ZPP_PivotJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(341)
				tmp15->b1 = inbody1;
				HX_STACK_LINE(341)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(341)
				::zpp_nape::space::ZPP_Space tmp17 = tmp16->space;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(341)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(341)
				::nape::space::Space tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(341)
				if ((tmp18)){
					HX_STACK_LINE(341)
					tmp19 = null();
				}
				else{
					HX_STACK_LINE(341)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(341)
					tmp19 = tmp20->space->outer;
				}
				HX_STACK_LINE(341)
				bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(341)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(341)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(341)
				if ((tmp21)){
					HX_STACK_LINE(341)
					tmp22 = (inbody1 != null());
				}
				else{
					HX_STACK_LINE(341)
					tmp22 = false;
				}
				HX_STACK_LINE(341)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(341)
				if ((tmp22)){
					HX_STACK_LINE(341)
					::zpp_nape::constraint::ZPP_PivotJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(341)
					::zpp_nape::constraint::ZPP_PivotJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(341)
					::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b2;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(341)
					::zpp_nape::phys::ZPP_Body tmp27 = inbody1;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(341)
					tmp23 = (tmp26 != tmp27);
				}
				else{
					HX_STACK_LINE(341)
					tmp23 = false;
				}
				HX_STACK_LINE(341)
				if ((tmp23)){
					HX_STACK_LINE(341)
					bool tmp24 = (inbody1 != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(341)
					if ((tmp24)){
						HX_STACK_LINE(341)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(341)
						inbody1->constraints->add(tmp25);
					}
				}
				HX_STACK_LINE(341)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(341)
				bool tmp25 = tmp24->active;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(341)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(341)
				if ((tmp25)){
					HX_STACK_LINE(341)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(341)
					::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(341)
					::zpp_nape::space::ZPP_Space tmp29 = tmp28->space;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(341)
					bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(341)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(341)
					::nape::space::Space tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(341)
					bool tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(341)
					if ((tmp33)){
						HX_STACK_LINE(341)
						tmp32 = null();
					}
					else{
						HX_STACK_LINE(341)
						::zpp_nape::constraint::ZPP_Constraint tmp34 = this->zpp_inner;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(341)
						::zpp_nape::constraint::ZPP_Constraint tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(341)
						::nape::space::Space tmp36 = tmp35->space->outer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(341)
						tmp32 = tmp36;
					}
					HX_STACK_LINE(341)
					tmp26 = (tmp32 != null());
				}
				else{
					HX_STACK_LINE(341)
					tmp26 = false;
				}
				HX_STACK_LINE(341)
				if ((tmp26)){
					HX_STACK_LINE(341)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(341)
					tmp27->wake();
					HX_STACK_LINE(341)
					bool tmp28 = (inbody1 != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(341)
					if ((tmp28)){
						HX_STACK_LINE(341)
						inbody1->wake();
					}
				}
			}
		}
		HX_STACK_LINE(341)
		::zpp_nape::constraint::ZPP_PivotJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(341)
		::zpp_nape::phys::ZPP_Body tmp5 = tmp4->b1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(341)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(341)
		if ((tmp6)){
			HX_STACK_LINE(341)
			Dynamic();
		}
		else{
			HX_STACK_LINE(341)
			::zpp_nape::constraint::ZPP_PivotJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(341)
			tmp7->b1->outer;
		}
	}
	HX_STACK_LINE(342)
	{
		HX_STACK_LINE(342)
		{
			HX_STACK_LINE(342)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(342)
			::String tmp5 = HX_HCSTRING("Constraint::body2","\xb3","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(342)
			tmp4->immutable_midstep(tmp5);
			HX_STACK_LINE(342)
			bool tmp6 = (body2 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(342)
			::zpp_nape::phys::ZPP_Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(342)
			if ((tmp6)){
				HX_STACK_LINE(342)
				tmp7 = null();
			}
			else{
				HX_STACK_LINE(342)
				tmp7 = body2->zpp_inner;
			}
			HX_STACK_LINE(342)
			::zpp_nape::phys::ZPP_Body inbody2 = tmp7;		HX_STACK_VAR(inbody2,"inbody2");
			HX_STACK_LINE(342)
			::zpp_nape::phys::ZPP_Body tmp8 = inbody2;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(342)
			::zpp_nape::constraint::ZPP_PivotJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(342)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9->b2;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(342)
			bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(342)
			if ((tmp11)){
				HX_STACK_LINE(342)
				::zpp_nape::constraint::ZPP_PivotJoint tmp12 = this->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(342)
				::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b2;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(342)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(342)
				if ((tmp14)){
					HX_STACK_LINE(342)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(342)
					::zpp_nape::space::ZPP_Space tmp16 = tmp15->space;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(342)
					bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(342)
					::nape::space::Space tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(342)
					if ((tmp17)){
						HX_STACK_LINE(342)
						tmp18 = null();
					}
					else{
						HX_STACK_LINE(342)
						::zpp_nape::constraint::ZPP_Constraint tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(342)
						tmp18 = tmp19->space->outer;
					}
					HX_STACK_LINE(342)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(342)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(342)
					if ((tmp19)){
						HX_STACK_LINE(342)
						::zpp_nape::constraint::ZPP_PivotJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(342)
						::zpp_nape::constraint::ZPP_PivotJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(342)
						::zpp_nape::phys::ZPP_Body tmp23 = tmp22->b1;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(342)
						::zpp_nape::constraint::ZPP_PivotJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(342)
						::zpp_nape::constraint::ZPP_PivotJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(342)
						::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b2;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(342)
						tmp20 = (tmp23 != tmp26);
					}
					else{
						HX_STACK_LINE(342)
						tmp20 = false;
					}
					HX_STACK_LINE(342)
					if ((tmp20)){
						HX_STACK_LINE(342)
						::zpp_nape::constraint::ZPP_PivotJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(342)
						::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b2;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(342)
						bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(342)
						if ((tmp23)){
							HX_STACK_LINE(342)
							::zpp_nape::constraint::ZPP_PivotJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(342)
							::zpp_nape::util::ZNPList_ZPP_Constraint tmp25 = tmp24->b2->constraints;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(342)
							::zpp_nape::constraint::ZPP_Constraint tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(342)
							tmp25->remove(tmp26);
						}
					}
					HX_STACK_LINE(342)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(342)
					bool tmp22 = tmp21->active;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(342)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(342)
					if ((tmp22)){
						HX_STACK_LINE(342)
						::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(342)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(342)
						::zpp_nape::space::ZPP_Space tmp26 = tmp25->space;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(342)
						bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(342)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(342)
						::nape::space::Space tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(342)
						bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(342)
						if ((tmp30)){
							HX_STACK_LINE(342)
							tmp29 = null();
						}
						else{
							HX_STACK_LINE(342)
							::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(342)
							::zpp_nape::constraint::ZPP_Constraint tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(342)
							::nape::space::Space tmp33 = tmp32->space->outer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(342)
							tmp29 = tmp33;
						}
						HX_STACK_LINE(342)
						tmp23 = (tmp29 != null());
					}
					else{
						HX_STACK_LINE(342)
						tmp23 = false;
					}
					HX_STACK_LINE(342)
					if ((tmp23)){
						HX_STACK_LINE(342)
						::zpp_nape::constraint::ZPP_PivotJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(342)
						tmp24->b2->wake();
					}
				}
				HX_STACK_LINE(342)
				::zpp_nape::constraint::ZPP_PivotJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(342)
				tmp15->b2 = inbody2;
				HX_STACK_LINE(342)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(342)
				::zpp_nape::space::ZPP_Space tmp17 = tmp16->space;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(342)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(342)
				::nape::space::Space tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(342)
				if ((tmp18)){
					HX_STACK_LINE(342)
					tmp19 = null();
				}
				else{
					HX_STACK_LINE(342)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(342)
					tmp19 = tmp20->space->outer;
				}
				HX_STACK_LINE(342)
				bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(342)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(342)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(342)
				if ((tmp21)){
					HX_STACK_LINE(342)
					tmp22 = (inbody2 != null());
				}
				else{
					HX_STACK_LINE(342)
					tmp22 = false;
				}
				HX_STACK_LINE(342)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(342)
				if ((tmp22)){
					HX_STACK_LINE(342)
					::zpp_nape::constraint::ZPP_PivotJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(342)
					::zpp_nape::constraint::ZPP_PivotJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(342)
					::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b1;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(342)
					::zpp_nape::phys::ZPP_Body tmp27 = inbody2;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(342)
					tmp23 = (tmp26 != tmp27);
				}
				else{
					HX_STACK_LINE(342)
					tmp23 = false;
				}
				HX_STACK_LINE(342)
				if ((tmp23)){
					HX_STACK_LINE(342)
					bool tmp24 = (inbody2 != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(342)
					if ((tmp24)){
						HX_STACK_LINE(342)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(342)
						inbody2->constraints->add(tmp25);
					}
				}
				HX_STACK_LINE(342)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(342)
				bool tmp25 = tmp24->active;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(342)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(342)
				if ((tmp25)){
					HX_STACK_LINE(342)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(342)
					::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(342)
					::zpp_nape::space::ZPP_Space tmp29 = tmp28->space;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(342)
					bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(342)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(342)
					::nape::space::Space tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(342)
					bool tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(342)
					if ((tmp33)){
						HX_STACK_LINE(342)
						tmp32 = null();
					}
					else{
						HX_STACK_LINE(342)
						::zpp_nape::constraint::ZPP_Constraint tmp34 = this->zpp_inner;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(342)
						::zpp_nape::constraint::ZPP_Constraint tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(342)
						::nape::space::Space tmp36 = tmp35->space->outer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(342)
						tmp32 = tmp36;
					}
					HX_STACK_LINE(342)
					tmp26 = (tmp32 != null());
				}
				else{
					HX_STACK_LINE(342)
					tmp26 = false;
				}
				HX_STACK_LINE(342)
				if ((tmp26)){
					HX_STACK_LINE(342)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(342)
					tmp27->wake();
					HX_STACK_LINE(342)
					bool tmp28 = (inbody2 != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(342)
					if ((tmp28)){
						HX_STACK_LINE(342)
						inbody2->wake();
					}
				}
			}
		}
		HX_STACK_LINE(342)
		::zpp_nape::constraint::ZPP_PivotJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(342)
		::zpp_nape::phys::ZPP_Body tmp5 = tmp4->b2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(342)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(342)
		if ((tmp6)){
			HX_STACK_LINE(342)
			Dynamic();
		}
		else{
			HX_STACK_LINE(342)
			::zpp_nape::constraint::ZPP_PivotJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(342)
			tmp7->b2->outer;
		}
	}
	HX_STACK_LINE(343)
	{
		HX_STACK_LINE(343)
		{
			HX_STACK_LINE(343)
			{
				HX_STACK_LINE(343)
				bool tmp4 = (anchor1 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(343)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(343)
				if ((tmp4)){
					HX_STACK_LINE(343)
					tmp5 = anchor1->zpp_disp;
				}
				else{
					HX_STACK_LINE(343)
					tmp5 = false;
				}
				HX_STACK_LINE(343)
				if ((tmp5)){
					HX_STACK_LINE(343)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(343)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(343)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(343)
			bool tmp4 = (anchor1 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(343)
			if ((tmp4)){
				HX_STACK_LINE(343)
				::String tmp5 = HX_HCSTRING("Error: Constraint::anchor1","\xb1","\x15","\x18","\x54");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(343)
				::String tmp6 = (tmp5 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(343)
				HX_STACK_DO_THROW(tmp6);
			}
			HX_STACK_LINE(343)
			{
				HX_STACK_LINE(343)
				::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(343)
				{
					HX_STACK_LINE(343)
					::zpp_nape::constraint::ZPP_PivotJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(343)
					::nape::geom::Vec2 tmp7 = tmp6->wrap_a1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(343)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(343)
					if ((tmp8)){
						HX_STACK_LINE(343)
						::zpp_nape::constraint::ZPP_PivotJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(343)
						tmp9->setup_a1();
					}
					HX_STACK_LINE(343)
					::zpp_nape::constraint::ZPP_PivotJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(343)
					tmp5 = tmp9->wrap_a1;
				}
				HX_STACK_LINE(343)
				::nape::geom::Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(343)
				{
					HX_STACK_LINE(343)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(343)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(343)
					if ((tmp6)){
						HX_STACK_LINE(343)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(343)
						tmp7 = false;
					}
					HX_STACK_LINE(343)
					if ((tmp7)){
						HX_STACK_LINE(343)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(343)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(343)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(343)
				{
					HX_STACK_LINE(343)
					bool tmp6 = (anchor1 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(343)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(343)
					if ((tmp6)){
						HX_STACK_LINE(343)
						tmp7 = anchor1->zpp_disp;
					}
					else{
						HX_STACK_LINE(343)
						tmp7 = false;
					}
					HX_STACK_LINE(343)
					if ((tmp7)){
						HX_STACK_LINE(343)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(343)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(343)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(343)
				{
					HX_STACK_LINE(343)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(343)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(343)
					if ((tmp6)){
						HX_STACK_LINE(343)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(343)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(343)
					if ((tmp7)){
						HX_STACK_LINE(343)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(343)
				bool tmp6 = (anchor1 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(343)
				if ((tmp6)){
					HX_STACK_LINE(343)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
				}
				HX_STACK_LINE(343)
				::nape::geom::Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(343)
				{
					HX_STACK_LINE(343)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(343)
					{
						HX_STACK_LINE(343)
						bool tmp9 = (anchor1 != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(343)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(343)
						if ((tmp9)){
							HX_STACK_LINE(343)
							tmp10 = anchor1->zpp_disp;
						}
						else{
							HX_STACK_LINE(343)
							tmp10 = false;
						}
						HX_STACK_LINE(343)
						if ((tmp10)){
							HX_STACK_LINE(343)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(343)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(343)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(343)
						{
							HX_STACK_LINE(343)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(343)
							bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(343)
							if ((tmp11)){
								HX_STACK_LINE(343)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(343)
						tmp8 = anchor1->zpp_inner->x;
					}
					HX_STACK_LINE(343)
					Float x = tmp8;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(343)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(343)
					{
						HX_STACK_LINE(343)
						bool tmp10 = (anchor1 != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(343)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(343)
						if ((tmp10)){
							HX_STACK_LINE(343)
							tmp11 = anchor1->zpp_disp;
						}
						else{
							HX_STACK_LINE(343)
							tmp11 = false;
						}
						HX_STACK_LINE(343)
						if ((tmp11)){
							HX_STACK_LINE(343)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(343)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(343)
							HX_STACK_DO_THROW(tmp13);
						}
						HX_STACK_LINE(343)
						{
							HX_STACK_LINE(343)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(343)
							bool tmp12 = (_this1->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(343)
							if ((tmp12)){
								HX_STACK_LINE(343)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(343)
						tmp9 = anchor1->zpp_inner->y;
					}
					HX_STACK_LINE(343)
					Float y = tmp9;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(343)
					{
						HX_STACK_LINE(343)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(343)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(343)
						if ((tmp10)){
							HX_STACK_LINE(343)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(343)
							tmp11 = false;
						}
						HX_STACK_LINE(343)
						if ((tmp11)){
							HX_STACK_LINE(343)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(343)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(343)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(343)
					{
						HX_STACK_LINE(343)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(343)
						bool tmp10 = _this1->_immutable;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(343)
						if ((tmp10)){
							HX_STACK_LINE(343)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(343)
						bool tmp11 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(343)
						if ((tmp11)){
							HX_STACK_LINE(343)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(343)
					bool tmp10 = (x != x);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(343)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(343)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(343)
					if ((tmp11)){
						HX_STACK_LINE(343)
						tmp12 = (y != y);
					}
					else{
						HX_STACK_LINE(343)
						tmp12 = true;
					}
					HX_STACK_LINE(343)
					if ((tmp12)){
						HX_STACK_LINE(343)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(343)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(343)
					{
						HX_STACK_LINE(343)
						{
							HX_STACK_LINE(343)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(343)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(343)
							if ((tmp14)){
								HX_STACK_LINE(343)
								tmp15 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(343)
								tmp15 = false;
							}
							HX_STACK_LINE(343)
							if ((tmp15)){
								HX_STACK_LINE(343)
								::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(343)
								::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(343)
								HX_STACK_DO_THROW(tmp17);
							}
						}
						HX_STACK_LINE(343)
						{
							HX_STACK_LINE(343)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(343)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(343)
							if ((tmp14)){
								HX_STACK_LINE(343)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(343)
						tmp13 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(343)
					Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(343)
					bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(343)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(343)
					if ((tmp15)){
						HX_STACK_LINE(343)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(343)
						{
							HX_STACK_LINE(343)
							{
								HX_STACK_LINE(343)
								bool tmp18 = (_this != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(343)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(343)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(343)
								bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(343)
								if ((tmp21)){
									HX_STACK_LINE(343)
									tmp20 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(343)
									tmp20 = false;
								}
								HX_STACK_LINE(343)
								bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(343)
								if ((tmp22)){
									HX_STACK_LINE(343)
									::String tmp23 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(343)
									::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(343)
									::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(343)
									::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(343)
									::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(343)
									HX_STACK_DO_THROW(tmp27);
								}
							}
							HX_STACK_LINE(343)
							{
								HX_STACK_LINE(343)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(343)
								bool tmp18 = (_this1->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(343)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(343)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(343)
								if ((tmp20)){
									HX_STACK_LINE(343)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(343)
							Float tmp18 = _this->zpp_inner->y;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(343)
							tmp17 = tmp18;
						}
						HX_STACK_LINE(343)
						Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(343)
						tmp16 = (tmp17 == tmp18);
					}
					else{
						HX_STACK_LINE(343)
						tmp16 = false;
					}
					HX_STACK_LINE(343)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(343)
					if ((tmp17)){
						HX_STACK_LINE(343)
						{
							HX_STACK_LINE(343)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(343)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(343)
							{
							}
						}
						HX_STACK_LINE(343)
						{
							HX_STACK_LINE(343)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(343)
							bool tmp18 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(343)
							if ((tmp18)){
								HX_STACK_LINE(343)
								::zpp_nape::geom::ZPP_Vec2 tmp19 = _this1;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(343)
								_this1->_invalidate(tmp19);
							}
						}
					}
					HX_STACK_LINE(343)
					tmp7 = _this;
				}
				HX_STACK_LINE(343)
				::nape::geom::Vec2 ret = tmp7;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(343)
				{
					HX_STACK_LINE(343)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(343)
					tmp8 = anchor1->zpp_inner->weak;
					HX_STACK_LINE(343)
					if ((tmp8)){
						HX_STACK_LINE(343)
						{
							HX_STACK_LINE(343)
							{
								HX_STACK_LINE(343)
								bool tmp9 = (anchor1 != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(343)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(343)
								if ((tmp9)){
									HX_STACK_LINE(343)
									tmp10 = anchor1->zpp_disp;
								}
								else{
									HX_STACK_LINE(343)
									tmp10 = false;
								}
								HX_STACK_LINE(343)
								if ((tmp10)){
									HX_STACK_LINE(343)
									::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(343)
									::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(343)
									HX_STACK_DO_THROW(tmp12);
								}
							}
							HX_STACK_LINE(343)
							{
								HX_STACK_LINE(343)
								::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(343)
								bool tmp9 = _this1->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(343)
								if ((tmp9)){
									HX_STACK_LINE(343)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
								}
								HX_STACK_LINE(343)
								bool tmp10 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(343)
								if ((tmp10)){
									HX_STACK_LINE(343)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(343)
							bool tmp9 = anchor1->zpp_inner->_inuse;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(343)
							if ((tmp9)){
								HX_STACK_LINE(343)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
							}
							HX_STACK_LINE(343)
							::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(343)
							anchor1->zpp_inner->outer = null();
							HX_STACK_LINE(343)
							anchor1->zpp_inner = null();
							HX_STACK_LINE(343)
							{
								HX_STACK_LINE(343)
								::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(343)
								o->zpp_pool = null();
								HX_STACK_LINE(343)
								::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(343)
								bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(343)
								if ((tmp11)){
									HX_STACK_LINE(343)
									::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(343)
									tmp12->zpp_pool = o;
								}
								else{
									HX_STACK_LINE(343)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(343)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
								HX_STACK_LINE(343)
								o->zpp_disp = true;
							}
							HX_STACK_LINE(343)
							{
								HX_STACK_LINE(343)
								::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(343)
								{
									HX_STACK_LINE(343)
									bool tmp10 = (o->outer != null());		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(343)
									if ((tmp10)){
										HX_STACK_LINE(343)
										o->outer->zpp_inner = null();
										HX_STACK_LINE(343)
										o->outer = null();
									}
									HX_STACK_LINE(343)
									o->_isimmutable = null();
									HX_STACK_LINE(343)
									o->_validate = null();
									HX_STACK_LINE(343)
									o->_invalidate = null();
								}
								HX_STACK_LINE(343)
								::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(343)
								o->next = tmp10;
								HX_STACK_LINE(343)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
							}
						}
						HX_STACK_LINE(343)
						true;
					}
					else{
						HX_STACK_LINE(343)
						false;
					}
				}
				HX_STACK_LINE(343)
				ret;
			}
		}
		HX_STACK_LINE(343)
		{
			HX_STACK_LINE(343)
			::zpp_nape::constraint::ZPP_PivotJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(343)
			::nape::geom::Vec2 tmp5 = tmp4->wrap_a1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(343)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(343)
			if ((tmp6)){
				HX_STACK_LINE(343)
				::zpp_nape::constraint::ZPP_PivotJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(343)
				tmp7->setup_a1();
			}
			HX_STACK_LINE(343)
			::zpp_nape::constraint::ZPP_PivotJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(343)
			tmp7->wrap_a1;
		}
	}
	HX_STACK_LINE(344)
	{
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			{
				HX_STACK_LINE(344)
				bool tmp4 = (anchor2 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(344)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(344)
				if ((tmp4)){
					HX_STACK_LINE(344)
					tmp5 = anchor2->zpp_disp;
				}
				else{
					HX_STACK_LINE(344)
					tmp5 = false;
				}
				HX_STACK_LINE(344)
				if ((tmp5)){
					HX_STACK_LINE(344)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(344)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(344)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(344)
			bool tmp4 = (anchor2 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(344)
			if ((tmp4)){
				HX_STACK_LINE(344)
				::String tmp5 = HX_HCSTRING("Error: Constraint::anchor2","\xb2","\x15","\x18","\x54");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(344)
				::String tmp6 = (tmp5 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(344)
				HX_STACK_DO_THROW(tmp6);
			}
			HX_STACK_LINE(344)
			{
				HX_STACK_LINE(344)
				::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(344)
					::zpp_nape::constraint::ZPP_PivotJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(344)
					::nape::geom::Vec2 tmp7 = tmp6->wrap_a2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(344)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(344)
					if ((tmp8)){
						HX_STACK_LINE(344)
						::zpp_nape::constraint::ZPP_PivotJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(344)
						tmp9->setup_a2();
					}
					HX_STACK_LINE(344)
					::zpp_nape::constraint::ZPP_PivotJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(344)
					tmp5 = tmp9->wrap_a2;
				}
				HX_STACK_LINE(344)
				::nape::geom::Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(344)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(344)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(344)
					if ((tmp6)){
						HX_STACK_LINE(344)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(344)
						tmp7 = false;
					}
					HX_STACK_LINE(344)
					if ((tmp7)){
						HX_STACK_LINE(344)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(344)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(344)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(344)
					bool tmp6 = (anchor2 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(344)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(344)
					if ((tmp6)){
						HX_STACK_LINE(344)
						tmp7 = anchor2->zpp_disp;
					}
					else{
						HX_STACK_LINE(344)
						tmp7 = false;
					}
					HX_STACK_LINE(344)
					if ((tmp7)){
						HX_STACK_LINE(344)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(344)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(344)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(344)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(344)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(344)
					if ((tmp6)){
						HX_STACK_LINE(344)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(344)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(344)
					if ((tmp7)){
						HX_STACK_LINE(344)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(344)
				bool tmp6 = (anchor2 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(344)
				if ((tmp6)){
					HX_STACK_LINE(344)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
				}
				HX_STACK_LINE(344)
				::nape::geom::Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(344)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						bool tmp9 = (anchor2 != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(344)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(344)
						if ((tmp9)){
							HX_STACK_LINE(344)
							tmp10 = anchor2->zpp_disp;
						}
						else{
							HX_STACK_LINE(344)
							tmp10 = false;
						}
						HX_STACK_LINE(344)
						if ((tmp10)){
							HX_STACK_LINE(344)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(344)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(344)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(344)
						{
							HX_STACK_LINE(344)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(344)
							bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(344)
							if ((tmp11)){
								HX_STACK_LINE(344)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(344)
						tmp8 = anchor2->zpp_inner->x;
					}
					HX_STACK_LINE(344)
					Float x = tmp8;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(344)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						bool tmp10 = (anchor2 != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(344)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(344)
						if ((tmp10)){
							HX_STACK_LINE(344)
							tmp11 = anchor2->zpp_disp;
						}
						else{
							HX_STACK_LINE(344)
							tmp11 = false;
						}
						HX_STACK_LINE(344)
						if ((tmp11)){
							HX_STACK_LINE(344)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(344)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(344)
							HX_STACK_DO_THROW(tmp13);
						}
						HX_STACK_LINE(344)
						{
							HX_STACK_LINE(344)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(344)
							bool tmp12 = (_this1->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(344)
							if ((tmp12)){
								HX_STACK_LINE(344)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(344)
						tmp9 = anchor2->zpp_inner->y;
					}
					HX_STACK_LINE(344)
					Float y = tmp9;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(344)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(344)
						if ((tmp10)){
							HX_STACK_LINE(344)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(344)
							tmp11 = false;
						}
						HX_STACK_LINE(344)
						if ((tmp11)){
							HX_STACK_LINE(344)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(344)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(344)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(344)
						bool tmp10 = _this1->_immutable;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(344)
						if ((tmp10)){
							HX_STACK_LINE(344)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(344)
						bool tmp11 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(344)
						if ((tmp11)){
							HX_STACK_LINE(344)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(344)
					bool tmp10 = (x != x);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(344)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(344)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(344)
					if ((tmp11)){
						HX_STACK_LINE(344)
						tmp12 = (y != y);
					}
					else{
						HX_STACK_LINE(344)
						tmp12 = true;
					}
					HX_STACK_LINE(344)
					if ((tmp12)){
						HX_STACK_LINE(344)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(344)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(344)
					{
						HX_STACK_LINE(344)
						{
							HX_STACK_LINE(344)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(344)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(344)
							if ((tmp14)){
								HX_STACK_LINE(344)
								tmp15 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(344)
								tmp15 = false;
							}
							HX_STACK_LINE(344)
							if ((tmp15)){
								HX_STACK_LINE(344)
								::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(344)
								::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(344)
								HX_STACK_DO_THROW(tmp17);
							}
						}
						HX_STACK_LINE(344)
						{
							HX_STACK_LINE(344)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(344)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(344)
							if ((tmp14)){
								HX_STACK_LINE(344)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(344)
						tmp13 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(344)
					Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(344)
					bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(344)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(344)
					if ((tmp15)){
						HX_STACK_LINE(344)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(344)
						{
							HX_STACK_LINE(344)
							{
								HX_STACK_LINE(344)
								bool tmp18 = (_this != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(344)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(344)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(344)
								bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(344)
								if ((tmp21)){
									HX_STACK_LINE(344)
									tmp20 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(344)
									tmp20 = false;
								}
								HX_STACK_LINE(344)
								bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(344)
								if ((tmp22)){
									HX_STACK_LINE(344)
									::String tmp23 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(344)
									::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(344)
									::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(344)
									::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(344)
									::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(344)
									HX_STACK_DO_THROW(tmp27);
								}
							}
							HX_STACK_LINE(344)
							{
								HX_STACK_LINE(344)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(344)
								bool tmp18 = (_this1->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(344)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(344)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(344)
								if ((tmp20)){
									HX_STACK_LINE(344)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(344)
							Float tmp18 = _this->zpp_inner->y;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(344)
							tmp17 = tmp18;
						}
						HX_STACK_LINE(344)
						Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(344)
						tmp16 = (tmp17 == tmp18);
					}
					else{
						HX_STACK_LINE(344)
						tmp16 = false;
					}
					HX_STACK_LINE(344)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(344)
					if ((tmp17)){
						HX_STACK_LINE(344)
						{
							HX_STACK_LINE(344)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(344)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(344)
							{
							}
						}
						HX_STACK_LINE(344)
						{
							HX_STACK_LINE(344)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(344)
							bool tmp18 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(344)
							if ((tmp18)){
								HX_STACK_LINE(344)
								::zpp_nape::geom::ZPP_Vec2 tmp19 = _this1;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(344)
								_this1->_invalidate(tmp19);
							}
						}
					}
					HX_STACK_LINE(344)
					tmp7 = _this;
				}
				HX_STACK_LINE(344)
				::nape::geom::Vec2 ret = tmp7;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(344)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(344)
					tmp8 = anchor2->zpp_inner->weak;
					HX_STACK_LINE(344)
					if ((tmp8)){
						HX_STACK_LINE(344)
						{
							HX_STACK_LINE(344)
							{
								HX_STACK_LINE(344)
								bool tmp9 = (anchor2 != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(344)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(344)
								if ((tmp9)){
									HX_STACK_LINE(344)
									tmp10 = anchor2->zpp_disp;
								}
								else{
									HX_STACK_LINE(344)
									tmp10 = false;
								}
								HX_STACK_LINE(344)
								if ((tmp10)){
									HX_STACK_LINE(344)
									::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(344)
									::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(344)
									HX_STACK_DO_THROW(tmp12);
								}
							}
							HX_STACK_LINE(344)
							{
								HX_STACK_LINE(344)
								::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(344)
								bool tmp9 = _this1->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(344)
								if ((tmp9)){
									HX_STACK_LINE(344)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
								}
								HX_STACK_LINE(344)
								bool tmp10 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(344)
								if ((tmp10)){
									HX_STACK_LINE(344)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(344)
							bool tmp9 = anchor2->zpp_inner->_inuse;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(344)
							if ((tmp9)){
								HX_STACK_LINE(344)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
							}
							HX_STACK_LINE(344)
							::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(344)
							anchor2->zpp_inner->outer = null();
							HX_STACK_LINE(344)
							anchor2->zpp_inner = null();
							HX_STACK_LINE(344)
							{
								HX_STACK_LINE(344)
								::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(344)
								o->zpp_pool = null();
								HX_STACK_LINE(344)
								::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(344)
								bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(344)
								if ((tmp11)){
									HX_STACK_LINE(344)
									::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(344)
									tmp12->zpp_pool = o;
								}
								else{
									HX_STACK_LINE(344)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(344)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
								HX_STACK_LINE(344)
								o->zpp_disp = true;
							}
							HX_STACK_LINE(344)
							{
								HX_STACK_LINE(344)
								::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(344)
								{
									HX_STACK_LINE(344)
									bool tmp10 = (o->outer != null());		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(344)
									if ((tmp10)){
										HX_STACK_LINE(344)
										o->outer->zpp_inner = null();
										HX_STACK_LINE(344)
										o->outer = null();
									}
									HX_STACK_LINE(344)
									o->_isimmutable = null();
									HX_STACK_LINE(344)
									o->_validate = null();
									HX_STACK_LINE(344)
									o->_invalidate = null();
								}
								HX_STACK_LINE(344)
								::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(344)
								o->next = tmp10;
								HX_STACK_LINE(344)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
							}
						}
						HX_STACK_LINE(344)
						true;
					}
					else{
						HX_STACK_LINE(344)
						false;
					}
				}
				HX_STACK_LINE(344)
				ret;
			}
		}
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			::zpp_nape::constraint::ZPP_PivotJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(344)
			::nape::geom::Vec2 tmp5 = tmp4->wrap_a2;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(344)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(344)
			if ((tmp6)){
				HX_STACK_LINE(344)
				::zpp_nape::constraint::ZPP_PivotJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(344)
				tmp7->setup_a2();
			}
			HX_STACK_LINE(344)
			::zpp_nape::constraint::ZPP_PivotJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(344)
			tmp7->wrap_a2;
		}
	}
}
;
	return null();
}

//PivotJoint_obj::~PivotJoint_obj() { }

Dynamic PivotJoint_obj::__CreateEmpty() { return  new PivotJoint_obj; }
hx::ObjectPtr< PivotJoint_obj > PivotJoint_obj::__new(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2)
{  hx::ObjectPtr< PivotJoint_obj > _result_ = new PivotJoint_obj();
	_result_->__construct(body1,body2,anchor1,anchor2);
	return _result_;}

Dynamic PivotJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PivotJoint_obj > _result_ = new PivotJoint_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::nape::phys::Body PivotJoint_obj::get_body1( ){
	HX_STACK_FRAME("nape.constraint.PivotJoint","get_body1",0xc3ff732b,"nape.constraint.PivotJoint.get_body1","nape/constraint/PivotJoint.hx",199,0x587fe74b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(200)
	::zpp_nape::constraint::ZPP_PivotJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(200)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(200)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(200)
	if ((tmp2)){
		HX_STACK_LINE(200)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(200)
		::zpp_nape::constraint::ZPP_PivotJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(200)
		tmp3 = tmp4->b1->outer;
	}
	HX_STACK_LINE(200)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(PivotJoint_obj,get_body1,return )

::nape::phys::Body PivotJoint_obj::set_body1( ::nape::phys::Body body1){
	HX_STACK_FRAME("nape.constraint.PivotJoint","set_body1",0xa7505f37,"nape.constraint.PivotJoint.set_body1","nape/constraint/PivotJoint.hx",202,0x587fe74b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body1,"body1")
	HX_STACK_LINE(203)
	{
		HX_STACK_LINE(204)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(204)
		::String tmp1 = HX_HCSTRING("Constraint::body1","\xb2","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		tmp->immutable_midstep(tmp1);
		HX_STACK_LINE(205)
		bool tmp2 = (body1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(205)
		::zpp_nape::phys::ZPP_Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(205)
		if ((tmp2)){
			HX_STACK_LINE(205)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(205)
			tmp3 = body1->zpp_inner;
		}
		HX_STACK_LINE(205)
		::zpp_nape::phys::ZPP_Body inbody1 = tmp3;		HX_STACK_VAR(inbody1,"inbody1");
		HX_STACK_LINE(206)
		::zpp_nape::phys::ZPP_Body tmp4 = inbody1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(206)
		::zpp_nape::constraint::ZPP_PivotJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(206)
		::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(206)
		bool tmp7 = (tmp4 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(206)
		if ((tmp7)){
			HX_STACK_LINE(207)
			::zpp_nape::constraint::ZPP_PivotJoint tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(207)
			::zpp_nape::phys::ZPP_Body tmp9 = tmp8->b1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(207)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(207)
			if ((tmp10)){
				HX_STACK_LINE(208)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(208)
				::zpp_nape::space::ZPP_Space tmp12 = tmp11->space;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(208)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(208)
				::nape::space::Space tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(208)
				if ((tmp13)){
					HX_STACK_LINE(208)
					tmp14 = null();
				}
				else{
					HX_STACK_LINE(208)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(208)
					tmp14 = tmp15->space->outer;
				}
				HX_STACK_LINE(208)
				bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(208)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(208)
				if ((tmp15)){
					HX_STACK_LINE(208)
					::zpp_nape::constraint::ZPP_PivotJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(208)
					::zpp_nape::constraint::ZPP_PivotJoint tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(208)
					::zpp_nape::phys::ZPP_Body tmp19 = tmp18->b2;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(208)
					::zpp_nape::constraint::ZPP_PivotJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(208)
					::zpp_nape::constraint::ZPP_PivotJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(208)
					::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b1;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(208)
					tmp16 = (tmp19 != tmp22);
				}
				else{
					HX_STACK_LINE(208)
					tmp16 = false;
				}
				HX_STACK_LINE(208)
				if ((tmp16)){
					HX_STACK_LINE(210)
					::zpp_nape::constraint::ZPP_PivotJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(210)
					::zpp_nape::phys::ZPP_Body tmp18 = tmp17->b1;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(210)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(210)
					if ((tmp19)){
						HX_STACK_LINE(210)
						::zpp_nape::constraint::ZPP_PivotJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(210)
						::zpp_nape::util::ZNPList_ZPP_Constraint tmp21 = tmp20->b1->constraints;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(210)
						::zpp_nape::constraint::ZPP_Constraint tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(210)
						tmp21->remove(tmp22);
					}
				}
				HX_STACK_LINE(213)
				::zpp_nape::constraint::ZPP_Constraint tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(213)
				bool tmp18 = tmp17->active;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(213)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(213)
				if ((tmp18)){
					HX_STACK_LINE(213)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(213)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(213)
					::zpp_nape::space::ZPP_Space tmp22 = tmp21->space;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(213)
					bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(213)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(213)
					::nape::space::Space tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(213)
					bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(213)
					if ((tmp26)){
						HX_STACK_LINE(213)
						tmp25 = null();
					}
					else{
						HX_STACK_LINE(213)
						::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(213)
						::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(213)
						::nape::space::Space tmp29 = tmp28->space->outer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(213)
						tmp25 = tmp29;
					}
					HX_STACK_LINE(213)
					tmp19 = (tmp25 != null());
				}
				else{
					HX_STACK_LINE(213)
					tmp19 = false;
				}
				HX_STACK_LINE(213)
				if ((tmp19)){
					HX_STACK_LINE(213)
					::zpp_nape::constraint::ZPP_PivotJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(213)
					tmp20->b1->wake();
				}
			}
			HX_STACK_LINE(215)
			::zpp_nape::constraint::ZPP_PivotJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(215)
			tmp11->b1 = inbody1;
			HX_STACK_LINE(216)
			::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(216)
			::zpp_nape::space::ZPP_Space tmp13 = tmp12->space;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(216)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(216)
			::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(216)
			if ((tmp14)){
				HX_STACK_LINE(216)
				tmp15 = null();
			}
			else{
				HX_STACK_LINE(216)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(216)
				tmp15 = tmp16->space->outer;
			}
			HX_STACK_LINE(216)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(216)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(216)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(216)
			if ((tmp17)){
				HX_STACK_LINE(216)
				tmp18 = (inbody1 != null());
			}
			else{
				HX_STACK_LINE(216)
				tmp18 = false;
			}
			HX_STACK_LINE(216)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(216)
			if ((tmp18)){
				HX_STACK_LINE(216)
				::zpp_nape::constraint::ZPP_PivotJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(216)
				::zpp_nape::constraint::ZPP_PivotJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(216)
				::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b2;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(216)
				::zpp_nape::phys::ZPP_Body tmp23 = inbody1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(216)
				tmp19 = (tmp22 != tmp23);
			}
			else{
				HX_STACK_LINE(216)
				tmp19 = false;
			}
			HX_STACK_LINE(216)
			if ((tmp19)){
				HX_STACK_LINE(218)
				bool tmp20 = (inbody1 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(218)
				if ((tmp20)){
					HX_STACK_LINE(218)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(218)
					inbody1->constraints->add(tmp21);
				}
			}
			HX_STACK_LINE(221)
			::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(221)
			bool tmp21 = tmp20->active;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(221)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(221)
			if ((tmp21)){
				HX_STACK_LINE(221)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(221)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(221)
				::zpp_nape::space::ZPP_Space tmp25 = tmp24->space;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(221)
				bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(221)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(221)
				::nape::space::Space tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(221)
				bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(221)
				if ((tmp29)){
					HX_STACK_LINE(221)
					tmp28 = null();
				}
				else{
					HX_STACK_LINE(221)
					::zpp_nape::constraint::ZPP_Constraint tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(221)
					::zpp_nape::constraint::ZPP_Constraint tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(221)
					::nape::space::Space tmp32 = tmp31->space->outer;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(221)
					tmp28 = tmp32;
				}
				HX_STACK_LINE(221)
				tmp22 = (tmp28 != null());
			}
			else{
				HX_STACK_LINE(221)
				tmp22 = false;
			}
			HX_STACK_LINE(221)
			if ((tmp22)){
				HX_STACK_LINE(222)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(222)
				tmp23->wake();
				HX_STACK_LINE(223)
				bool tmp24 = (inbody1 != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(223)
				if ((tmp24)){
					HX_STACK_LINE(223)
					inbody1->wake();
				}
			}
		}
	}
	HX_STACK_LINE(227)
	::zpp_nape::constraint::ZPP_PivotJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(227)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(227)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(227)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(227)
	if ((tmp2)){
		HX_STACK_LINE(227)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(227)
		::zpp_nape::constraint::ZPP_PivotJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(227)
		tmp3 = tmp4->b1->outer;
	}
	HX_STACK_LINE(227)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(PivotJoint_obj,set_body1,return )

::nape::phys::Body PivotJoint_obj::get_body2( ){
	HX_STACK_FRAME("nape.constraint.PivotJoint","get_body2",0xc3ff732c,"nape.constraint.PivotJoint.get_body2","nape/constraint/PivotJoint.hx",237,0x587fe74b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(238)
	::zpp_nape::constraint::ZPP_PivotJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(238)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(238)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(238)
	if ((tmp2)){
		HX_STACK_LINE(238)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(238)
		::zpp_nape::constraint::ZPP_PivotJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(238)
		tmp3 = tmp4->b2->outer;
	}
	HX_STACK_LINE(238)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(PivotJoint_obj,get_body2,return )

::nape::phys::Body PivotJoint_obj::set_body2( ::nape::phys::Body body2){
	HX_STACK_FRAME("nape.constraint.PivotJoint","set_body2",0xa7505f38,"nape.constraint.PivotJoint.set_body2","nape/constraint/PivotJoint.hx",240,0x587fe74b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body2,"body2")
	HX_STACK_LINE(241)
	{
		HX_STACK_LINE(242)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		::String tmp1 = HX_HCSTRING("Constraint::body2","\xb3","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(242)
		tmp->immutable_midstep(tmp1);
		HX_STACK_LINE(243)
		bool tmp2 = (body2 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(243)
		::zpp_nape::phys::ZPP_Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(243)
		if ((tmp2)){
			HX_STACK_LINE(243)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(243)
			tmp3 = body2->zpp_inner;
		}
		HX_STACK_LINE(243)
		::zpp_nape::phys::ZPP_Body inbody2 = tmp3;		HX_STACK_VAR(inbody2,"inbody2");
		HX_STACK_LINE(244)
		::zpp_nape::phys::ZPP_Body tmp4 = inbody2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(244)
		::zpp_nape::constraint::ZPP_PivotJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(244)
		::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(244)
		bool tmp7 = (tmp4 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(244)
		if ((tmp7)){
			HX_STACK_LINE(245)
			::zpp_nape::constraint::ZPP_PivotJoint tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(245)
			::zpp_nape::phys::ZPP_Body tmp9 = tmp8->b2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(245)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(245)
			if ((tmp10)){
				HX_STACK_LINE(246)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(246)
				::zpp_nape::space::ZPP_Space tmp12 = tmp11->space;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(246)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(246)
				::nape::space::Space tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(246)
				if ((tmp13)){
					HX_STACK_LINE(246)
					tmp14 = null();
				}
				else{
					HX_STACK_LINE(246)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(246)
					tmp14 = tmp15->space->outer;
				}
				HX_STACK_LINE(246)
				bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(246)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(246)
				if ((tmp15)){
					HX_STACK_LINE(246)
					::zpp_nape::constraint::ZPP_PivotJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(246)
					::zpp_nape::constraint::ZPP_PivotJoint tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(246)
					::zpp_nape::phys::ZPP_Body tmp19 = tmp18->b1;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(246)
					::zpp_nape::constraint::ZPP_PivotJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(246)
					::zpp_nape::constraint::ZPP_PivotJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(246)
					::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b2;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(246)
					tmp16 = (tmp19 != tmp22);
				}
				else{
					HX_STACK_LINE(246)
					tmp16 = false;
				}
				HX_STACK_LINE(246)
				if ((tmp16)){
					HX_STACK_LINE(248)
					::zpp_nape::constraint::ZPP_PivotJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(248)
					::zpp_nape::phys::ZPP_Body tmp18 = tmp17->b2;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(248)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(248)
					if ((tmp19)){
						HX_STACK_LINE(248)
						::zpp_nape::constraint::ZPP_PivotJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(248)
						::zpp_nape::util::ZNPList_ZPP_Constraint tmp21 = tmp20->b2->constraints;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(248)
						::zpp_nape::constraint::ZPP_Constraint tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(248)
						tmp21->remove(tmp22);
					}
				}
				HX_STACK_LINE(251)
				::zpp_nape::constraint::ZPP_Constraint tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(251)
				bool tmp18 = tmp17->active;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(251)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(251)
				if ((tmp18)){
					HX_STACK_LINE(251)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(251)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(251)
					::zpp_nape::space::ZPP_Space tmp22 = tmp21->space;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(251)
					bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(251)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(251)
					::nape::space::Space tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(251)
					bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(251)
					if ((tmp26)){
						HX_STACK_LINE(251)
						tmp25 = null();
					}
					else{
						HX_STACK_LINE(251)
						::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(251)
						::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(251)
						::nape::space::Space tmp29 = tmp28->space->outer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(251)
						tmp25 = tmp29;
					}
					HX_STACK_LINE(251)
					tmp19 = (tmp25 != null());
				}
				else{
					HX_STACK_LINE(251)
					tmp19 = false;
				}
				HX_STACK_LINE(251)
				if ((tmp19)){
					HX_STACK_LINE(251)
					::zpp_nape::constraint::ZPP_PivotJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(251)
					tmp20->b2->wake();
				}
			}
			HX_STACK_LINE(253)
			::zpp_nape::constraint::ZPP_PivotJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(253)
			tmp11->b2 = inbody2;
			HX_STACK_LINE(254)
			::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(254)
			::zpp_nape::space::ZPP_Space tmp13 = tmp12->space;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(254)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(254)
			::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(254)
			if ((tmp14)){
				HX_STACK_LINE(254)
				tmp15 = null();
			}
			else{
				HX_STACK_LINE(254)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(254)
				tmp15 = tmp16->space->outer;
			}
			HX_STACK_LINE(254)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(254)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(254)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(254)
			if ((tmp17)){
				HX_STACK_LINE(254)
				tmp18 = (inbody2 != null());
			}
			else{
				HX_STACK_LINE(254)
				tmp18 = false;
			}
			HX_STACK_LINE(254)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(254)
			if ((tmp18)){
				HX_STACK_LINE(254)
				::zpp_nape::constraint::ZPP_PivotJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(254)
				::zpp_nape::constraint::ZPP_PivotJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(254)
				::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b1;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(254)
				::zpp_nape::phys::ZPP_Body tmp23 = inbody2;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(254)
				tmp19 = (tmp22 != tmp23);
			}
			else{
				HX_STACK_LINE(254)
				tmp19 = false;
			}
			HX_STACK_LINE(254)
			if ((tmp19)){
				HX_STACK_LINE(256)
				bool tmp20 = (inbody2 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(256)
				if ((tmp20)){
					HX_STACK_LINE(256)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(256)
					inbody2->constraints->add(tmp21);
				}
			}
			HX_STACK_LINE(259)
			::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(259)
			bool tmp21 = tmp20->active;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(259)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(259)
			if ((tmp21)){
				HX_STACK_LINE(259)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(259)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(259)
				::zpp_nape::space::ZPP_Space tmp25 = tmp24->space;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(259)
				bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(259)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(259)
				::nape::space::Space tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(259)
				bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(259)
				if ((tmp29)){
					HX_STACK_LINE(259)
					tmp28 = null();
				}
				else{
					HX_STACK_LINE(259)
					::zpp_nape::constraint::ZPP_Constraint tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(259)
					::zpp_nape::constraint::ZPP_Constraint tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(259)
					::nape::space::Space tmp32 = tmp31->space->outer;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(259)
					tmp28 = tmp32;
				}
				HX_STACK_LINE(259)
				tmp22 = (tmp28 != null());
			}
			else{
				HX_STACK_LINE(259)
				tmp22 = false;
			}
			HX_STACK_LINE(259)
			if ((tmp22)){
				HX_STACK_LINE(260)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(260)
				tmp23->wake();
				HX_STACK_LINE(261)
				bool tmp24 = (inbody2 != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(261)
				if ((tmp24)){
					HX_STACK_LINE(261)
					inbody2->wake();
				}
			}
		}
	}
	HX_STACK_LINE(265)
	::zpp_nape::constraint::ZPP_PivotJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(265)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(265)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(265)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(265)
	if ((tmp2)){
		HX_STACK_LINE(265)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(265)
		::zpp_nape::constraint::ZPP_PivotJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(265)
		tmp3 = tmp4->b2->outer;
	}
	HX_STACK_LINE(265)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(PivotJoint_obj,set_body2,return )

::nape::geom::Vec2 PivotJoint_obj::get_anchor1( ){
	HX_STACK_FRAME("nape.constraint.PivotJoint","get_anchor1",0x2abe3af8,"nape.constraint.PivotJoint.get_anchor1","nape/constraint/PivotJoint.hx",274,0x587fe74b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(275)
	::zpp_nape::constraint::ZPP_PivotJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(275)
	::nape::geom::Vec2 tmp1 = tmp->wrap_a1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(275)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(275)
	if ((tmp2)){
		HX_STACK_LINE(275)
		::zpp_nape::constraint::ZPP_PivotJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(275)
		tmp3->setup_a1();
	}
	HX_STACK_LINE(276)
	::zpp_nape::constraint::ZPP_PivotJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(276)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_a1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(276)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(PivotJoint_obj,get_anchor1,return )

::nape::geom::Vec2 PivotJoint_obj::set_anchor1( ::nape::geom::Vec2 anchor1){
	HX_STACK_FRAME("nape.constraint.PivotJoint","set_anchor1",0x352b4204,"nape.constraint.PivotJoint.set_anchor1","nape/constraint/PivotJoint.hx",278,0x587fe74b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor1,"anchor1")
	HX_STACK_LINE(279)
	{
		HX_STACK_LINE(280)
		{
			HX_STACK_LINE(282)
			bool tmp = (anchor1 != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(282)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(282)
			if ((tmp)){
				HX_STACK_LINE(282)
				tmp1 = anchor1->zpp_disp;
			}
			else{
				HX_STACK_LINE(282)
				tmp1 = false;
			}
			HX_STACK_LINE(282)
			if ((tmp1)){
				HX_STACK_LINE(282)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(282)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(282)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(286)
		bool tmp = (anchor1 == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(286)
		if ((tmp)){
			HX_STACK_LINE(286)
			::String tmp1 = HX_HCSTRING("Error: Constraint::anchor1","\xb1","\x15","\x18","\x54");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(286)
			::String tmp2 = (tmp1 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(286)
			HX_STACK_DO_THROW(tmp2);
		}
		HX_STACK_LINE(288)
		{
			HX_STACK_LINE(288)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(288)
				::zpp_nape::constraint::ZPP_PivotJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(288)
				::nape::geom::Vec2 tmp3 = tmp2->wrap_a1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(288)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(288)
				if ((tmp4)){
					HX_STACK_LINE(288)
					::zpp_nape::constraint::ZPP_PivotJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(288)
					tmp5->setup_a1();
				}
				HX_STACK_LINE(288)
				::zpp_nape::constraint::ZPP_PivotJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(288)
				tmp1 = tmp5->wrap_a1;
			}
			HX_STACK_LINE(288)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(288)
				bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(288)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(288)
				if ((tmp2)){
					HX_STACK_LINE(288)
					tmp3 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(288)
					tmp3 = false;
				}
				HX_STACK_LINE(288)
				if ((tmp3)){
					HX_STACK_LINE(288)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(288)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(288)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(288)
				bool tmp2 = (anchor1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(288)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(288)
				if ((tmp2)){
					HX_STACK_LINE(288)
					tmp3 = anchor1->zpp_disp;
				}
				else{
					HX_STACK_LINE(288)
					tmp3 = false;
				}
				HX_STACK_LINE(288)
				if ((tmp3)){
					HX_STACK_LINE(288)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(288)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(288)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(288)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(288)
				bool tmp2 = _this1->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(288)
				if ((tmp2)){
					HX_STACK_LINE(288)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(288)
				bool tmp3 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(288)
				if ((tmp3)){
					HX_STACK_LINE(288)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(288)
			bool tmp2 = (anchor1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(288)
			if ((tmp2)){
				HX_STACK_LINE(288)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
			}
			HX_STACK_LINE(288)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(288)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					bool tmp5 = (anchor1 != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(288)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(288)
					if ((tmp5)){
						HX_STACK_LINE(288)
						tmp6 = anchor1->zpp_disp;
					}
					else{
						HX_STACK_LINE(288)
						tmp6 = false;
					}
					HX_STACK_LINE(288)
					if ((tmp6)){
						HX_STACK_LINE(288)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(288)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(288)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(288)
					{
						HX_STACK_LINE(288)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(288)
						bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(288)
						if ((tmp7)){
							HX_STACK_LINE(288)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(288)
					tmp4 = anchor1->zpp_inner->x;
				}
				HX_STACK_LINE(288)
				Float x = tmp4;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(288)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					bool tmp6 = (anchor1 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(288)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(288)
					if ((tmp6)){
						HX_STACK_LINE(288)
						tmp7 = anchor1->zpp_disp;
					}
					else{
						HX_STACK_LINE(288)
						tmp7 = false;
					}
					HX_STACK_LINE(288)
					if ((tmp7)){
						HX_STACK_LINE(288)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(288)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(288)
						HX_STACK_DO_THROW(tmp9);
					}
					HX_STACK_LINE(288)
					{
						HX_STACK_LINE(288)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(288)
						bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(288)
						if ((tmp8)){
							HX_STACK_LINE(288)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(288)
					tmp5 = anchor1->zpp_inner->y;
				}
				HX_STACK_LINE(288)
				Float y = tmp5;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(288)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(288)
					if ((tmp6)){
						HX_STACK_LINE(288)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(288)
						tmp7 = false;
					}
					HX_STACK_LINE(288)
					if ((tmp7)){
						HX_STACK_LINE(288)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(288)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(288)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(288)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(288)
					if ((tmp6)){
						HX_STACK_LINE(288)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(288)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(288)
					if ((tmp7)){
						HX_STACK_LINE(288)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(288)
				bool tmp6 = (x != x);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(288)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(288)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(288)
				if ((tmp7)){
					HX_STACK_LINE(288)
					tmp8 = (y != y);
				}
				else{
					HX_STACK_LINE(288)
					tmp8 = true;
				}
				HX_STACK_LINE(288)
				if ((tmp8)){
					HX_STACK_LINE(288)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(288)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					{
						HX_STACK_LINE(288)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(288)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(288)
						if ((tmp10)){
							HX_STACK_LINE(288)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(288)
							tmp11 = false;
						}
						HX_STACK_LINE(288)
						if ((tmp11)){
							HX_STACK_LINE(288)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(288)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(288)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(288)
					{
						HX_STACK_LINE(288)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(288)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(288)
						if ((tmp10)){
							HX_STACK_LINE(288)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(288)
					tmp9 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(288)
				Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(288)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(288)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(288)
				if ((tmp11)){
					HX_STACK_LINE(288)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(288)
					{
						HX_STACK_LINE(288)
						{
							HX_STACK_LINE(288)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(288)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(288)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(288)
							bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(288)
							if ((tmp17)){
								HX_STACK_LINE(288)
								tmp16 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(288)
								tmp16 = false;
							}
							HX_STACK_LINE(288)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(288)
							if ((tmp18)){
								HX_STACK_LINE(288)
								::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(288)
								::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(288)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(288)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(288)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(288)
								HX_STACK_DO_THROW(tmp23);
							}
						}
						HX_STACK_LINE(288)
						{
							HX_STACK_LINE(288)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(288)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(288)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(288)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(288)
							if ((tmp16)){
								HX_STACK_LINE(288)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(288)
						Float tmp14 = _this->zpp_inner->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(288)
						tmp13 = tmp14;
					}
					HX_STACK_LINE(288)
					Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(288)
					tmp12 = (tmp13 == tmp14);
				}
				else{
					HX_STACK_LINE(288)
					tmp12 = false;
				}
				HX_STACK_LINE(288)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(288)
				if ((tmp13)){
					HX_STACK_LINE(288)
					{
						HX_STACK_LINE(288)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(288)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(288)
						{
						}
					}
					HX_STACK_LINE(288)
					{
						HX_STACK_LINE(288)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(288)
						bool tmp14 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(288)
						if ((tmp14)){
							HX_STACK_LINE(288)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = _this1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(288)
							_this1->_invalidate(tmp15);
						}
					}
				}
				HX_STACK_LINE(288)
				tmp3 = _this;
			}
			HX_STACK_LINE(288)
			::nape::geom::Vec2 ret = tmp3;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(288)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(288)
				tmp4 = anchor1->zpp_inner->weak;
				HX_STACK_LINE(288)
				if ((tmp4)){
					HX_STACK_LINE(288)
					{
						HX_STACK_LINE(288)
						{
							HX_STACK_LINE(288)
							bool tmp5 = (anchor1 != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(288)
							bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(288)
							if ((tmp5)){
								HX_STACK_LINE(288)
								tmp6 = anchor1->zpp_disp;
							}
							else{
								HX_STACK_LINE(288)
								tmp6 = false;
							}
							HX_STACK_LINE(288)
							if ((tmp6)){
								HX_STACK_LINE(288)
								::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(288)
								::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(288)
								HX_STACK_DO_THROW(tmp8);
							}
						}
						HX_STACK_LINE(288)
						{
							HX_STACK_LINE(288)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(288)
							bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(288)
							if ((tmp5)){
								HX_STACK_LINE(288)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(288)
							bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(288)
							if ((tmp6)){
								HX_STACK_LINE(288)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(288)
						bool tmp5 = anchor1->zpp_inner->_inuse;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(288)
						if ((tmp5)){
							HX_STACK_LINE(288)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(288)
						::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(288)
						anchor1->zpp_inner->outer = null();
						HX_STACK_LINE(288)
						anchor1->zpp_inner = null();
						HX_STACK_LINE(288)
						{
							HX_STACK_LINE(288)
							::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(288)
							o->zpp_pool = null();
							HX_STACK_LINE(288)
							::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(288)
							bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(288)
							if ((tmp7)){
								HX_STACK_LINE(288)
								::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(288)
								tmp8->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(288)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(288)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(288)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(288)
						{
							HX_STACK_LINE(288)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(288)
							{
								HX_STACK_LINE(288)
								bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(288)
								if ((tmp6)){
									HX_STACK_LINE(288)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(288)
									o->outer = null();
								}
								HX_STACK_LINE(288)
								o->_isimmutable = null();
								HX_STACK_LINE(288)
								o->_validate = null();
								HX_STACK_LINE(288)
								o->_invalidate = null();
							}
							HX_STACK_LINE(288)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(288)
							o->next = tmp6;
							HX_STACK_LINE(288)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(288)
					true;
				}
				else{
					HX_STACK_LINE(288)
					false;
				}
			}
			HX_STACK_LINE(288)
			ret;
		}
	}
	HX_STACK_LINE(290)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(290)
	{
		HX_STACK_LINE(290)
		::zpp_nape::constraint::ZPP_PivotJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(290)
		::nape::geom::Vec2 tmp2 = tmp1->wrap_a1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(290)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(290)
		if ((tmp3)){
			HX_STACK_LINE(290)
			::zpp_nape::constraint::ZPP_PivotJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(290)
			tmp4->setup_a1();
		}
		HX_STACK_LINE(290)
		::zpp_nape::constraint::ZPP_PivotJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(290)
		tmp = tmp4->wrap_a1;
	}
	HX_STACK_LINE(290)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(PivotJoint_obj,set_anchor1,return )

::nape::geom::Vec2 PivotJoint_obj::get_anchor2( ){
	HX_STACK_FRAME("nape.constraint.PivotJoint","get_anchor2",0x2abe3af9,"nape.constraint.PivotJoint.get_anchor2","nape/constraint/PivotJoint.hx",299,0x587fe74b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(300)
	::zpp_nape::constraint::ZPP_PivotJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(300)
	::nape::geom::Vec2 tmp1 = tmp->wrap_a2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(300)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(300)
	if ((tmp2)){
		HX_STACK_LINE(300)
		::zpp_nape::constraint::ZPP_PivotJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(300)
		tmp3->setup_a2();
	}
	HX_STACK_LINE(301)
	::zpp_nape::constraint::ZPP_PivotJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(301)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_a2;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(301)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(PivotJoint_obj,get_anchor2,return )

::nape::geom::Vec2 PivotJoint_obj::set_anchor2( ::nape::geom::Vec2 anchor2){
	HX_STACK_FRAME("nape.constraint.PivotJoint","set_anchor2",0x352b4205,"nape.constraint.PivotJoint.set_anchor2","nape/constraint/PivotJoint.hx",303,0x587fe74b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor2,"anchor2")
	HX_STACK_LINE(304)
	{
		HX_STACK_LINE(305)
		{
			HX_STACK_LINE(307)
			bool tmp = (anchor2 != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(307)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(307)
			if ((tmp)){
				HX_STACK_LINE(307)
				tmp1 = anchor2->zpp_disp;
			}
			else{
				HX_STACK_LINE(307)
				tmp1 = false;
			}
			HX_STACK_LINE(307)
			if ((tmp1)){
				HX_STACK_LINE(307)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(307)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(307)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(311)
		bool tmp = (anchor2 == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(311)
		if ((tmp)){
			HX_STACK_LINE(311)
			::String tmp1 = HX_HCSTRING("Error: Constraint::anchor2","\xb2","\x15","\x18","\x54");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(311)
			::String tmp2 = (tmp1 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(311)
			HX_STACK_DO_THROW(tmp2);
		}
		HX_STACK_LINE(313)
		{
			HX_STACK_LINE(313)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(313)
			{
				HX_STACK_LINE(313)
				::zpp_nape::constraint::ZPP_PivotJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(313)
				::nape::geom::Vec2 tmp3 = tmp2->wrap_a2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(313)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(313)
				if ((tmp4)){
					HX_STACK_LINE(313)
					::zpp_nape::constraint::ZPP_PivotJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(313)
					tmp5->setup_a2();
				}
				HX_STACK_LINE(313)
				::zpp_nape::constraint::ZPP_PivotJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(313)
				tmp1 = tmp5->wrap_a2;
			}
			HX_STACK_LINE(313)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(313)
			{
				HX_STACK_LINE(313)
				bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(313)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(313)
				if ((tmp2)){
					HX_STACK_LINE(313)
					tmp3 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(313)
					tmp3 = false;
				}
				HX_STACK_LINE(313)
				if ((tmp3)){
					HX_STACK_LINE(313)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(313)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(313)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(313)
			{
				HX_STACK_LINE(313)
				bool tmp2 = (anchor2 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(313)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(313)
				if ((tmp2)){
					HX_STACK_LINE(313)
					tmp3 = anchor2->zpp_disp;
				}
				else{
					HX_STACK_LINE(313)
					tmp3 = false;
				}
				HX_STACK_LINE(313)
				if ((tmp3)){
					HX_STACK_LINE(313)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(313)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(313)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(313)
			{
				HX_STACK_LINE(313)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(313)
				bool tmp2 = _this1->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(313)
				if ((tmp2)){
					HX_STACK_LINE(313)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(313)
				bool tmp3 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(313)
				if ((tmp3)){
					HX_STACK_LINE(313)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(313)
			bool tmp2 = (anchor2 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(313)
			if ((tmp2)){
				HX_STACK_LINE(313)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
			}
			HX_STACK_LINE(313)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(313)
			{
				HX_STACK_LINE(313)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(313)
				{
					HX_STACK_LINE(313)
					bool tmp5 = (anchor2 != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(313)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(313)
					if ((tmp5)){
						HX_STACK_LINE(313)
						tmp6 = anchor2->zpp_disp;
					}
					else{
						HX_STACK_LINE(313)
						tmp6 = false;
					}
					HX_STACK_LINE(313)
					if ((tmp6)){
						HX_STACK_LINE(313)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(313)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(313)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(313)
					{
						HX_STACK_LINE(313)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(313)
						bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(313)
						if ((tmp7)){
							HX_STACK_LINE(313)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(313)
					tmp4 = anchor2->zpp_inner->x;
				}
				HX_STACK_LINE(313)
				Float x = tmp4;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(313)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(313)
				{
					HX_STACK_LINE(313)
					bool tmp6 = (anchor2 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(313)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(313)
					if ((tmp6)){
						HX_STACK_LINE(313)
						tmp7 = anchor2->zpp_disp;
					}
					else{
						HX_STACK_LINE(313)
						tmp7 = false;
					}
					HX_STACK_LINE(313)
					if ((tmp7)){
						HX_STACK_LINE(313)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(313)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(313)
						HX_STACK_DO_THROW(tmp9);
					}
					HX_STACK_LINE(313)
					{
						HX_STACK_LINE(313)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(313)
						bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(313)
						if ((tmp8)){
							HX_STACK_LINE(313)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(313)
					tmp5 = anchor2->zpp_inner->y;
				}
				HX_STACK_LINE(313)
				Float y = tmp5;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(313)
				{
					HX_STACK_LINE(313)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(313)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(313)
					if ((tmp6)){
						HX_STACK_LINE(313)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(313)
						tmp7 = false;
					}
					HX_STACK_LINE(313)
					if ((tmp7)){
						HX_STACK_LINE(313)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(313)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(313)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(313)
				{
					HX_STACK_LINE(313)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(313)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(313)
					if ((tmp6)){
						HX_STACK_LINE(313)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(313)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(313)
					if ((tmp7)){
						HX_STACK_LINE(313)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(313)
				bool tmp6 = (x != x);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(313)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(313)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(313)
				if ((tmp7)){
					HX_STACK_LINE(313)
					tmp8 = (y != y);
				}
				else{
					HX_STACK_LINE(313)
					tmp8 = true;
				}
				HX_STACK_LINE(313)
				if ((tmp8)){
					HX_STACK_LINE(313)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(313)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(313)
				{
					HX_STACK_LINE(313)
					{
						HX_STACK_LINE(313)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(313)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(313)
						if ((tmp10)){
							HX_STACK_LINE(313)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(313)
							tmp11 = false;
						}
						HX_STACK_LINE(313)
						if ((tmp11)){
							HX_STACK_LINE(313)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(313)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(313)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(313)
					{
						HX_STACK_LINE(313)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(313)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(313)
						if ((tmp10)){
							HX_STACK_LINE(313)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(313)
					tmp9 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(313)
				Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(313)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(313)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(313)
				if ((tmp11)){
					HX_STACK_LINE(313)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(313)
					{
						HX_STACK_LINE(313)
						{
							HX_STACK_LINE(313)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(313)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(313)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(313)
							bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(313)
							if ((tmp17)){
								HX_STACK_LINE(313)
								tmp16 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(313)
								tmp16 = false;
							}
							HX_STACK_LINE(313)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(313)
							if ((tmp18)){
								HX_STACK_LINE(313)
								::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(313)
								::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(313)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(313)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(313)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(313)
								HX_STACK_DO_THROW(tmp23);
							}
						}
						HX_STACK_LINE(313)
						{
							HX_STACK_LINE(313)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(313)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(313)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(313)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(313)
							if ((tmp16)){
								HX_STACK_LINE(313)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(313)
						Float tmp14 = _this->zpp_inner->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(313)
						tmp13 = tmp14;
					}
					HX_STACK_LINE(313)
					Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(313)
					tmp12 = (tmp13 == tmp14);
				}
				else{
					HX_STACK_LINE(313)
					tmp12 = false;
				}
				HX_STACK_LINE(313)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(313)
				if ((tmp13)){
					HX_STACK_LINE(313)
					{
						HX_STACK_LINE(313)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(313)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(313)
						{
						}
					}
					HX_STACK_LINE(313)
					{
						HX_STACK_LINE(313)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(313)
						bool tmp14 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(313)
						if ((tmp14)){
							HX_STACK_LINE(313)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = _this1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(313)
							_this1->_invalidate(tmp15);
						}
					}
				}
				HX_STACK_LINE(313)
				tmp3 = _this;
			}
			HX_STACK_LINE(313)
			::nape::geom::Vec2 ret = tmp3;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(313)
			{
				HX_STACK_LINE(313)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(313)
				tmp4 = anchor2->zpp_inner->weak;
				HX_STACK_LINE(313)
				if ((tmp4)){
					HX_STACK_LINE(313)
					{
						HX_STACK_LINE(313)
						{
							HX_STACK_LINE(313)
							bool tmp5 = (anchor2 != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(313)
							bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(313)
							if ((tmp5)){
								HX_STACK_LINE(313)
								tmp6 = anchor2->zpp_disp;
							}
							else{
								HX_STACK_LINE(313)
								tmp6 = false;
							}
							HX_STACK_LINE(313)
							if ((tmp6)){
								HX_STACK_LINE(313)
								::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(313)
								::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(313)
								HX_STACK_DO_THROW(tmp8);
							}
						}
						HX_STACK_LINE(313)
						{
							HX_STACK_LINE(313)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(313)
							bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(313)
							if ((tmp5)){
								HX_STACK_LINE(313)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(313)
							bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(313)
							if ((tmp6)){
								HX_STACK_LINE(313)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(313)
						bool tmp5 = anchor2->zpp_inner->_inuse;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(313)
						if ((tmp5)){
							HX_STACK_LINE(313)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(313)
						::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(313)
						anchor2->zpp_inner->outer = null();
						HX_STACK_LINE(313)
						anchor2->zpp_inner = null();
						HX_STACK_LINE(313)
						{
							HX_STACK_LINE(313)
							::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(313)
							o->zpp_pool = null();
							HX_STACK_LINE(313)
							::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(313)
							bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(313)
							if ((tmp7)){
								HX_STACK_LINE(313)
								::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(313)
								tmp8->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(313)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(313)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(313)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(313)
						{
							HX_STACK_LINE(313)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(313)
							{
								HX_STACK_LINE(313)
								bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(313)
								if ((tmp6)){
									HX_STACK_LINE(313)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(313)
									o->outer = null();
								}
								HX_STACK_LINE(313)
								o->_isimmutable = null();
								HX_STACK_LINE(313)
								o->_validate = null();
								HX_STACK_LINE(313)
								o->_invalidate = null();
							}
							HX_STACK_LINE(313)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(313)
							o->next = tmp6;
							HX_STACK_LINE(313)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(313)
					true;
				}
				else{
					HX_STACK_LINE(313)
					false;
				}
			}
			HX_STACK_LINE(313)
			ret;
		}
	}
	HX_STACK_LINE(315)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(315)
	{
		HX_STACK_LINE(315)
		::zpp_nape::constraint::ZPP_PivotJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(315)
		::nape::geom::Vec2 tmp2 = tmp1->wrap_a2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(315)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(315)
		if ((tmp3)){
			HX_STACK_LINE(315)
			::zpp_nape::constraint::ZPP_PivotJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(315)
			tmp4->setup_a2();
		}
		HX_STACK_LINE(315)
		::zpp_nape::constraint::ZPP_PivotJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(315)
		tmp = tmp4->wrap_a2;
	}
	HX_STACK_LINE(315)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(PivotJoint_obj,set_anchor2,return )

::nape::geom::MatMN PivotJoint_obj::impulse( ){
	HX_STACK_FRAME("nape.constraint.PivotJoint","impulse",0x1f2538fa,"nape.constraint.PivotJoint.impulse","nape/constraint/PivotJoint.hx",351,0x587fe74b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(352)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new((int)2,(int)1);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(353)
	{
		HX_STACK_LINE(353)
		bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(353)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(353)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(353)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(353)
		if ((tmp2)){
			HX_STACK_LINE(353)
			tmp3 = false;
		}
		else{
			HX_STACK_LINE(353)
			tmp3 = true;
		}
		HX_STACK_LINE(353)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(353)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(353)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(353)
		if ((tmp5)){
			HX_STACK_LINE(353)
			int tmp7 = ret->zpp_inner->m;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(353)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(353)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(353)
			tmp6 = ((int)0 >= tmp9);
		}
		else{
			HX_STACK_LINE(353)
			tmp6 = true;
		}
		HX_STACK_LINE(353)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(353)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(353)
		if ((tmp7)){
			HX_STACK_LINE(353)
			int tmp9 = ret->zpp_inner->n;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(353)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(353)
			tmp8 = ((int)0 >= tmp10);
		}
		else{
			HX_STACK_LINE(353)
			tmp8 = true;
		}
		HX_STACK_LINE(353)
		if ((tmp8)){
			HX_STACK_LINE(353)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: MatMN indices out of range","\xcc","\x72","\x58","\xe6"));
		}
		HX_STACK_LINE(353)
		Array< Float > tmp9 = ret->zpp_inner->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(353)
		int tmp10 = ret->zpp_inner->n;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(353)
		int tmp11 = ((int)0 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(353)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(353)
		::zpp_nape::constraint::ZPP_PivotJoint tmp13 = this->zpp_inner_zn;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(353)
		Float tmp14 = tmp13->jAccx;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(353)
		tmp9[tmp12] = tmp14;
	}
	HX_STACK_LINE(354)
	{
		HX_STACK_LINE(354)
		bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(354)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(354)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(354)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(354)
		if ((tmp2)){
			HX_STACK_LINE(354)
			tmp3 = false;
		}
		else{
			HX_STACK_LINE(354)
			tmp3 = true;
		}
		HX_STACK_LINE(354)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(354)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(354)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(354)
		if ((tmp5)){
			HX_STACK_LINE(354)
			int tmp7 = ret->zpp_inner->m;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(354)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(354)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(354)
			tmp6 = ((int)1 >= tmp9);
		}
		else{
			HX_STACK_LINE(354)
			tmp6 = true;
		}
		HX_STACK_LINE(354)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(354)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(354)
		if ((tmp7)){
			HX_STACK_LINE(354)
			int tmp9 = ret->zpp_inner->n;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(354)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(354)
			tmp8 = ((int)0 >= tmp10);
		}
		else{
			HX_STACK_LINE(354)
			tmp8 = true;
		}
		HX_STACK_LINE(354)
		if ((tmp8)){
			HX_STACK_LINE(354)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: MatMN indices out of range","\xcc","\x72","\x58","\xe6"));
		}
		HX_STACK_LINE(354)
		Array< Float > tmp9 = ret->zpp_inner->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(354)
		int tmp10 = ret->zpp_inner->n;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(354)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(354)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(354)
		::zpp_nape::constraint::ZPP_PivotJoint tmp13 = this->zpp_inner_zn;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(354)
		Float tmp14 = tmp13->jAccy;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(354)
		tmp9[tmp12] = tmp14;
	}
	HX_STACK_LINE(355)
	::nape::geom::MatMN tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(355)
	return tmp;
}


::nape::geom::Vec3 PivotJoint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.constraint.PivotJoint","bodyImpulse",0x01c464f8,"nape.constraint.PivotJoint.bodyImpulse","nape/constraint/PivotJoint.hx",360,0x587fe74b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(362)
	bool tmp = (body == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(362)
	if ((tmp)){
		HX_STACK_LINE(363)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot evaluate impulse on null body","\x9d","\xb5","\xdc","\x16"));
	}
	HX_STACK_LINE(365)
	::nape::phys::Body tmp1 = body;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(365)
	::zpp_nape::constraint::ZPP_PivotJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(365)
	::zpp_nape::phys::ZPP_Body tmp3 = tmp2->b1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(365)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(365)
	::nape::phys::Body tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(365)
	if ((tmp4)){
		HX_STACK_LINE(365)
		tmp5 = null();
	}
	else{
		HX_STACK_LINE(365)
		::zpp_nape::constraint::ZPP_PivotJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(365)
		tmp5 = tmp6->b1->outer;
	}
	HX_STACK_LINE(365)
	bool tmp6 = (tmp1 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(365)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(365)
	if ((tmp6)){
		HX_STACK_LINE(365)
		::nape::phys::Body tmp8 = body;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(365)
		::zpp_nape::constraint::ZPP_PivotJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(365)
		::zpp_nape::constraint::ZPP_PivotJoint tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(365)
		::zpp_nape::phys::ZPP_Body tmp11 = tmp10->b2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(365)
		bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(365)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(365)
		::nape::phys::Body tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(365)
		bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(365)
		if ((tmp15)){
			HX_STACK_LINE(365)
			tmp14 = null();
		}
		else{
			HX_STACK_LINE(365)
			::zpp_nape::constraint::ZPP_PivotJoint tmp16 = this->zpp_inner_zn;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(365)
			::zpp_nape::constraint::ZPP_PivotJoint tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(365)
			::nape::phys::Body tmp18 = tmp17->b2->outer;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(365)
			tmp14 = tmp18;
		}
		HX_STACK_LINE(365)
		tmp7 = (tmp8 != tmp14);
	}
	else{
		HX_STACK_LINE(365)
		tmp7 = false;
	}
	HX_STACK_LINE(365)
	if ((tmp7)){
		HX_STACK_LINE(366)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Body is not linked to this constraint","\x2e","\xe5","\x48","\xbf"));
	}
	HX_STACK_LINE(369)
	::zpp_nape::constraint::ZPP_Constraint tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(369)
	bool tmp9 = tmp8->active;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(369)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(369)
	if ((tmp10)){
		HX_STACK_LINE(370)
		::nape::geom::Vec3 tmp11 = ::nape::geom::Vec3_obj::get(null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(370)
		return tmp11;
	}
	else{
		HX_STACK_LINE(373)
		::zpp_nape::constraint::ZPP_PivotJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(373)
		::zpp_nape::phys::ZPP_Body tmp12 = body->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(373)
		::nape::geom::Vec3 tmp13 = tmp11->bodyImpulse(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(373)
		return tmp13;
	}
	HX_STACK_LINE(369)
	return null();
}


Void PivotJoint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_FRAME("nape.constraint.PivotJoint","visitBodies",0x8680e270,"nape.constraint.PivotJoint.visitBodies","nape/constraint/PivotJoint.hx",379,0x587fe74b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(380)
		::zpp_nape::constraint::ZPP_PivotJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(380)
		::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(380)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(380)
		::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(380)
		if ((tmp2)){
			HX_STACK_LINE(380)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(380)
			::zpp_nape::constraint::ZPP_PivotJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(380)
			tmp3 = tmp4->b1->outer;
		}
		HX_STACK_LINE(380)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(380)
		if ((tmp4)){
			HX_STACK_LINE(381)
			::zpp_nape::constraint::ZPP_PivotJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(381)
			::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(381)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(381)
			::nape::phys::Body tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(381)
			if ((tmp7)){
				HX_STACK_LINE(381)
				tmp8 = null();
			}
			else{
				HX_STACK_LINE(381)
				::zpp_nape::constraint::ZPP_PivotJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(381)
				tmp8 = tmp9->b1->outer;
			}
			HX_STACK_LINE(381)
			lambda(tmp8).Cast< Void >();
		}
		HX_STACK_LINE(383)
		::zpp_nape::constraint::ZPP_PivotJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(383)
		::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(383)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(383)
		::nape::phys::Body tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(383)
		if ((tmp7)){
			HX_STACK_LINE(383)
			tmp8 = null();
		}
		else{
			HX_STACK_LINE(383)
			::zpp_nape::constraint::ZPP_PivotJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(383)
			tmp8 = tmp9->b2->outer;
		}
		HX_STACK_LINE(383)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(383)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(383)
		if ((tmp9)){
			HX_STACK_LINE(383)
			::zpp_nape::constraint::ZPP_PivotJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(383)
			::zpp_nape::constraint::ZPP_PivotJoint tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(383)
			::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b2;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(383)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(383)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(383)
			::nape::phys::Body tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(383)
			bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(383)
			if ((tmp17)){
				HX_STACK_LINE(383)
				tmp16 = null();
			}
			else{
				HX_STACK_LINE(383)
				::zpp_nape::constraint::ZPP_PivotJoint tmp18 = this->zpp_inner_zn;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(383)
				::zpp_nape::constraint::ZPP_PivotJoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(383)
				::nape::phys::Body tmp20 = tmp19->b2->outer;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(383)
				tmp16 = tmp20;
			}
			HX_STACK_LINE(383)
			::zpp_nape::constraint::ZPP_PivotJoint tmp18 = this->zpp_inner_zn;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(383)
			::zpp_nape::constraint::ZPP_PivotJoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(383)
			::zpp_nape::phys::ZPP_Body tmp20 = tmp19->b1;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(383)
			bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(383)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(383)
			::nape::phys::Body tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(383)
			bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(383)
			if ((tmp24)){
				HX_STACK_LINE(383)
				tmp23 = null();
			}
			else{
				HX_STACK_LINE(383)
				::zpp_nape::constraint::ZPP_PivotJoint tmp25 = this->zpp_inner_zn;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(383)
				::zpp_nape::constraint::ZPP_PivotJoint tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(383)
				::nape::phys::Body tmp27 = tmp26->b1->outer;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(383)
				tmp23 = tmp27;
			}
			HX_STACK_LINE(383)
			tmp10 = (tmp16 != tmp23);
		}
		else{
			HX_STACK_LINE(383)
			tmp10 = false;
		}
		HX_STACK_LINE(383)
		if ((tmp10)){
			HX_STACK_LINE(384)
			::zpp_nape::constraint::ZPP_PivotJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(384)
			::zpp_nape::phys::ZPP_Body tmp12 = tmp11->b2;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(384)
			bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(384)
			::nape::phys::Body tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(384)
			if ((tmp13)){
				HX_STACK_LINE(384)
				tmp14 = null();
			}
			else{
				HX_STACK_LINE(384)
				::zpp_nape::constraint::ZPP_PivotJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(384)
				tmp14 = tmp15->b2->outer;
			}
			HX_STACK_LINE(384)
			lambda(tmp14).Cast< Void >();
		}
	}
return null();
}



PivotJoint_obj::PivotJoint_obj()
{
}

void PivotJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PivotJoint);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PivotJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PivotJoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { if (inCallProp == hx::paccAlways) return get_body1(); }
		if (HX_FIELD_EQ(inName,"body2") ) { if (inCallProp == hx::paccAlways) return get_body2(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"anchor1") ) { if (inCallProp == hx::paccAlways) return get_anchor1(); }
		if (HX_FIELD_EQ(inName,"anchor2") ) { if (inCallProp == hx::paccAlways) return get_anchor2(); }
		if (HX_FIELD_EQ(inName,"impulse") ) { return impulse_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_body1") ) { return get_body1_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body1") ) { return set_body1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body2") ) { return get_body2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body2") ) { return set_body2_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_anchor1") ) { return get_anchor1_dyn(); }
		if (HX_FIELD_EQ(inName,"set_anchor1") ) { return set_anchor1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_anchor2") ) { return get_anchor2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_anchor2") ) { return set_anchor2_dyn(); }
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"visitBodies") ) { return visitBodies_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PivotJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { if (inCallProp == hx::paccAlways) return set_body1(inValue); }
		if (HX_FIELD_EQ(inName,"body2") ) { if (inCallProp == hx::paccAlways) return set_body2(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"anchor1") ) { if (inCallProp == hx::paccAlways) return set_anchor1(inValue); }
		if (HX_FIELD_EQ(inName,"anchor2") ) { if (inCallProp == hx::paccAlways) return set_anchor2(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::constraint::ZPP_PivotJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PivotJoint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PivotJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"));
	outFields->push(HX_HCSTRING("body1","\x4f","\xd3","\xef","\xb6"));
	outFields->push(HX_HCSTRING("body2","\x50","\xd3","\xef","\xb6"));
	outFields->push(HX_HCSTRING("anchor1","\x1c","\xec","\xa1","\x02"));
	outFields->push(HX_HCSTRING("anchor2","\x1d","\xec","\xa1","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::constraint::ZPP_PivotJoint*/ ,(int)offsetof(PivotJoint_obj,zpp_inner_zn),HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"),
	HX_HCSTRING("get_body1","\xa6","\x2f","\x99","\xfa"),
	HX_HCSTRING("set_body1","\xb2","\x1b","\xea","\xdd"),
	HX_HCSTRING("get_body2","\xa7","\x2f","\x99","\xfa"),
	HX_HCSTRING("set_body2","\xb3","\x1b","\xea","\xdd"),
	HX_HCSTRING("get_anchor1","\x33","\x4c","\x9c","\x88"),
	HX_HCSTRING("set_anchor1","\x3f","\x53","\x09","\x93"),
	HX_HCSTRING("get_anchor2","\x34","\x4c","\x9c","\x88"),
	HX_HCSTRING("set_anchor2","\x40","\x53","\x09","\x93"),
	HX_HCSTRING("impulse","\xb5","\x50","\xbd","\x6d"),
	HX_HCSTRING("bodyImpulse","\x33","\x76","\xa2","\x5f"),
	HX_HCSTRING("visitBodies","\xab","\xf3","\x5e","\xe4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PivotJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PivotJoint_obj::__mClass,"__mClass");
};

#endif

hx::Class PivotJoint_obj::__mClass;

void PivotJoint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.constraint.PivotJoint","\xb3","\xfb","\x97","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &PivotJoint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PivotJoint_obj >;
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
} // end namespace constraint
