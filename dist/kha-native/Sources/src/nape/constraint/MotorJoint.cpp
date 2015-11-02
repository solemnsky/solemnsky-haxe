#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_MotorJoint
#include <nape/constraint/MotorJoint.h>
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
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_MotorJoint
#include <zpp_nape/constraint/ZPP_MotorJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MatMN
#include <zpp_nape/geom/ZPP_MatMN.h>
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
namespace nape{
namespace constraint{

Void MotorJoint_obj::__construct(::nape::phys::Body body1,::nape::phys::Body body2,hx::Null< Float >  __o_rate,hx::Null< Float >  __o_ratio)
{
HX_STACK_FRAME("nape.constraint.MotorJoint","new",0xfb8e1e12,"nape.constraint.MotorJoint.new","nape/constraint/MotorJoint.hx",183,0x6a1b57fe)
HX_STACK_THIS(this)
HX_STACK_ARG(body1,"body1")
HX_STACK_ARG(body2,"body2")
HX_STACK_ARG(__o_rate,"rate")
HX_STACK_ARG(__o_ratio,"ratio")
Float rate = __o_rate.Default(((Float)0.0));
Float ratio = __o_ratio.Default(((Float)1.0));
{
	HX_STACK_LINE(187)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(326)
	::zpp_nape::constraint::ZPP_MotorJoint tmp = ::zpp_nape::constraint::ZPP_MotorJoint_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(326)
	this->zpp_inner_zn = tmp;
	HX_STACK_LINE(327)
	::zpp_nape::constraint::ZPP_MotorJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(327)
	this->zpp_inner = tmp1;
	HX_STACK_LINE(328)
	::zpp_nape::constraint::ZPP_Constraint tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(328)
	tmp2->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(329)
	::zpp_nape::constraint::ZPP_MotorJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(329)
	tmp3->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(331)
	::nape::constraint::Constraint_obj::zpp_internalAlloc = true;
	HX_STACK_LINE(332)
	super::__construct();
	HX_STACK_LINE(333)
	::nape::constraint::Constraint_obj::zpp_internalAlloc = false;
	HX_STACK_LINE(338)
	{
		HX_STACK_LINE(338)
		{
			HX_STACK_LINE(338)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(338)
			::String tmp5 = HX_HCSTRING("Constraint::body1","\xb2","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(338)
			tmp4->immutable_midstep(tmp5);
			HX_STACK_LINE(338)
			bool tmp6 = (body1 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(338)
			::zpp_nape::phys::ZPP_Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(338)
			if ((tmp6)){
				HX_STACK_LINE(338)
				tmp7 = null();
			}
			else{
				HX_STACK_LINE(338)
				tmp7 = body1->zpp_inner;
			}
			HX_STACK_LINE(338)
			::zpp_nape::phys::ZPP_Body inbody1 = tmp7;		HX_STACK_VAR(inbody1,"inbody1");
			HX_STACK_LINE(338)
			::zpp_nape::phys::ZPP_Body tmp8 = inbody1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(338)
			::zpp_nape::constraint::ZPP_MotorJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(338)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9->b1;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(338)
			bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(338)
			if ((tmp11)){
				HX_STACK_LINE(338)
				::zpp_nape::constraint::ZPP_MotorJoint tmp12 = this->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(338)
				::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(338)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(338)
				if ((tmp14)){
					HX_STACK_LINE(338)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(338)
					::zpp_nape::space::ZPP_Space tmp16 = tmp15->space;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(338)
					bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(338)
					::nape::space::Space tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(338)
					if ((tmp17)){
						HX_STACK_LINE(338)
						tmp18 = null();
					}
					else{
						HX_STACK_LINE(338)
						::zpp_nape::constraint::ZPP_Constraint tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(338)
						tmp18 = tmp19->space->outer;
					}
					HX_STACK_LINE(338)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(338)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(338)
					if ((tmp19)){
						HX_STACK_LINE(338)
						::zpp_nape::constraint::ZPP_MotorJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(338)
						::zpp_nape::constraint::ZPP_MotorJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(338)
						::zpp_nape::phys::ZPP_Body tmp23 = tmp22->b2;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(338)
						::zpp_nape::constraint::ZPP_MotorJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(338)
						::zpp_nape::constraint::ZPP_MotorJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(338)
						::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b1;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(338)
						tmp20 = (tmp23 != tmp26);
					}
					else{
						HX_STACK_LINE(338)
						tmp20 = false;
					}
					HX_STACK_LINE(338)
					if ((tmp20)){
						HX_STACK_LINE(338)
						::zpp_nape::constraint::ZPP_MotorJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(338)
						::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b1;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(338)
						bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(338)
						if ((tmp23)){
							HX_STACK_LINE(338)
							::zpp_nape::constraint::ZPP_MotorJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(338)
							::zpp_nape::util::ZNPList_ZPP_Constraint tmp25 = tmp24->b1->constraints;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(338)
							::zpp_nape::constraint::ZPP_Constraint tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(338)
							tmp25->remove(tmp26);
						}
					}
					HX_STACK_LINE(338)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(338)
					bool tmp22 = tmp21->active;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(338)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(338)
					if ((tmp22)){
						HX_STACK_LINE(338)
						::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(338)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(338)
						::zpp_nape::space::ZPP_Space tmp26 = tmp25->space;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(338)
						bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(338)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(338)
						::nape::space::Space tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(338)
						bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(338)
						if ((tmp30)){
							HX_STACK_LINE(338)
							tmp29 = null();
						}
						else{
							HX_STACK_LINE(338)
							::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(338)
							::zpp_nape::constraint::ZPP_Constraint tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(338)
							::nape::space::Space tmp33 = tmp32->space->outer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(338)
							tmp29 = tmp33;
						}
						HX_STACK_LINE(338)
						tmp23 = (tmp29 != null());
					}
					else{
						HX_STACK_LINE(338)
						tmp23 = false;
					}
					HX_STACK_LINE(338)
					if ((tmp23)){
						HX_STACK_LINE(338)
						::zpp_nape::constraint::ZPP_MotorJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(338)
						tmp24->b1->wake();
					}
				}
				HX_STACK_LINE(338)
				::zpp_nape::constraint::ZPP_MotorJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(338)
				tmp15->b1 = inbody1;
				HX_STACK_LINE(338)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(338)
				::zpp_nape::space::ZPP_Space tmp17 = tmp16->space;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(338)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(338)
				::nape::space::Space tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(338)
				if ((tmp18)){
					HX_STACK_LINE(338)
					tmp19 = null();
				}
				else{
					HX_STACK_LINE(338)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(338)
					tmp19 = tmp20->space->outer;
				}
				HX_STACK_LINE(338)
				bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(338)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(338)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(338)
				if ((tmp21)){
					HX_STACK_LINE(338)
					tmp22 = (inbody1 != null());
				}
				else{
					HX_STACK_LINE(338)
					tmp22 = false;
				}
				HX_STACK_LINE(338)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(338)
				if ((tmp22)){
					HX_STACK_LINE(338)
					::zpp_nape::constraint::ZPP_MotorJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(338)
					::zpp_nape::constraint::ZPP_MotorJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(338)
					::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b2;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(338)
					::zpp_nape::phys::ZPP_Body tmp27 = inbody1;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(338)
					tmp23 = (tmp26 != tmp27);
				}
				else{
					HX_STACK_LINE(338)
					tmp23 = false;
				}
				HX_STACK_LINE(338)
				if ((tmp23)){
					HX_STACK_LINE(338)
					bool tmp24 = (inbody1 != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(338)
					if ((tmp24)){
						HX_STACK_LINE(338)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(338)
						inbody1->constraints->add(tmp25);
					}
				}
				HX_STACK_LINE(338)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(338)
				bool tmp25 = tmp24->active;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(338)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(338)
				if ((tmp25)){
					HX_STACK_LINE(338)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(338)
					::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(338)
					::zpp_nape::space::ZPP_Space tmp29 = tmp28->space;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(338)
					bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(338)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(338)
					::nape::space::Space tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(338)
					bool tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(338)
					if ((tmp33)){
						HX_STACK_LINE(338)
						tmp32 = null();
					}
					else{
						HX_STACK_LINE(338)
						::zpp_nape::constraint::ZPP_Constraint tmp34 = this->zpp_inner;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(338)
						::zpp_nape::constraint::ZPP_Constraint tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(338)
						::nape::space::Space tmp36 = tmp35->space->outer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(338)
						tmp32 = tmp36;
					}
					HX_STACK_LINE(338)
					tmp26 = (tmp32 != null());
				}
				else{
					HX_STACK_LINE(338)
					tmp26 = false;
				}
				HX_STACK_LINE(338)
				if ((tmp26)){
					HX_STACK_LINE(338)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(338)
					tmp27->wake();
					HX_STACK_LINE(338)
					bool tmp28 = (inbody1 != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(338)
					if ((tmp28)){
						HX_STACK_LINE(338)
						inbody1->wake();
					}
				}
			}
		}
		HX_STACK_LINE(338)
		::zpp_nape::constraint::ZPP_MotorJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(338)
		::zpp_nape::phys::ZPP_Body tmp5 = tmp4->b1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(338)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(338)
		if ((tmp6)){
			HX_STACK_LINE(338)
			Dynamic();
		}
		else{
			HX_STACK_LINE(338)
			::zpp_nape::constraint::ZPP_MotorJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(338)
			tmp7->b1->outer;
		}
	}
	HX_STACK_LINE(339)
	{
		HX_STACK_LINE(339)
		{
			HX_STACK_LINE(339)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(339)
			::String tmp5 = HX_HCSTRING("Constraint::body2","\xb3","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(339)
			tmp4->immutable_midstep(tmp5);
			HX_STACK_LINE(339)
			bool tmp6 = (body2 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(339)
			::zpp_nape::phys::ZPP_Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(339)
			if ((tmp6)){
				HX_STACK_LINE(339)
				tmp7 = null();
			}
			else{
				HX_STACK_LINE(339)
				tmp7 = body2->zpp_inner;
			}
			HX_STACK_LINE(339)
			::zpp_nape::phys::ZPP_Body inbody2 = tmp7;		HX_STACK_VAR(inbody2,"inbody2");
			HX_STACK_LINE(339)
			::zpp_nape::phys::ZPP_Body tmp8 = inbody2;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(339)
			::zpp_nape::constraint::ZPP_MotorJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(339)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9->b2;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(339)
			bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(339)
			if ((tmp11)){
				HX_STACK_LINE(339)
				::zpp_nape::constraint::ZPP_MotorJoint tmp12 = this->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(339)
				::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b2;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(339)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(339)
				if ((tmp14)){
					HX_STACK_LINE(339)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(339)
					::zpp_nape::space::ZPP_Space tmp16 = tmp15->space;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(339)
					bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(339)
					::nape::space::Space tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(339)
					if ((tmp17)){
						HX_STACK_LINE(339)
						tmp18 = null();
					}
					else{
						HX_STACK_LINE(339)
						::zpp_nape::constraint::ZPP_Constraint tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(339)
						tmp18 = tmp19->space->outer;
					}
					HX_STACK_LINE(339)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(339)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(339)
					if ((tmp19)){
						HX_STACK_LINE(339)
						::zpp_nape::constraint::ZPP_MotorJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(339)
						::zpp_nape::constraint::ZPP_MotorJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(339)
						::zpp_nape::phys::ZPP_Body tmp23 = tmp22->b1;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(339)
						::zpp_nape::constraint::ZPP_MotorJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(339)
						::zpp_nape::constraint::ZPP_MotorJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(339)
						::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b2;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(339)
						tmp20 = (tmp23 != tmp26);
					}
					else{
						HX_STACK_LINE(339)
						tmp20 = false;
					}
					HX_STACK_LINE(339)
					if ((tmp20)){
						HX_STACK_LINE(339)
						::zpp_nape::constraint::ZPP_MotorJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(339)
						::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b2;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(339)
						bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(339)
						if ((tmp23)){
							HX_STACK_LINE(339)
							::zpp_nape::constraint::ZPP_MotorJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(339)
							::zpp_nape::util::ZNPList_ZPP_Constraint tmp25 = tmp24->b2->constraints;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(339)
							::zpp_nape::constraint::ZPP_Constraint tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(339)
							tmp25->remove(tmp26);
						}
					}
					HX_STACK_LINE(339)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(339)
					bool tmp22 = tmp21->active;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(339)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(339)
					if ((tmp22)){
						HX_STACK_LINE(339)
						::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(339)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(339)
						::zpp_nape::space::ZPP_Space tmp26 = tmp25->space;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(339)
						bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(339)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(339)
						::nape::space::Space tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(339)
						bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(339)
						if ((tmp30)){
							HX_STACK_LINE(339)
							tmp29 = null();
						}
						else{
							HX_STACK_LINE(339)
							::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(339)
							::zpp_nape::constraint::ZPP_Constraint tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(339)
							::nape::space::Space tmp33 = tmp32->space->outer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(339)
							tmp29 = tmp33;
						}
						HX_STACK_LINE(339)
						tmp23 = (tmp29 != null());
					}
					else{
						HX_STACK_LINE(339)
						tmp23 = false;
					}
					HX_STACK_LINE(339)
					if ((tmp23)){
						HX_STACK_LINE(339)
						::zpp_nape::constraint::ZPP_MotorJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(339)
						tmp24->b2->wake();
					}
				}
				HX_STACK_LINE(339)
				::zpp_nape::constraint::ZPP_MotorJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(339)
				tmp15->b2 = inbody2;
				HX_STACK_LINE(339)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(339)
				::zpp_nape::space::ZPP_Space tmp17 = tmp16->space;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(339)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(339)
				::nape::space::Space tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(339)
				if ((tmp18)){
					HX_STACK_LINE(339)
					tmp19 = null();
				}
				else{
					HX_STACK_LINE(339)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(339)
					tmp19 = tmp20->space->outer;
				}
				HX_STACK_LINE(339)
				bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(339)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(339)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(339)
				if ((tmp21)){
					HX_STACK_LINE(339)
					tmp22 = (inbody2 != null());
				}
				else{
					HX_STACK_LINE(339)
					tmp22 = false;
				}
				HX_STACK_LINE(339)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(339)
				if ((tmp22)){
					HX_STACK_LINE(339)
					::zpp_nape::constraint::ZPP_MotorJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(339)
					::zpp_nape::constraint::ZPP_MotorJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(339)
					::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b1;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(339)
					::zpp_nape::phys::ZPP_Body tmp27 = inbody2;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(339)
					tmp23 = (tmp26 != tmp27);
				}
				else{
					HX_STACK_LINE(339)
					tmp23 = false;
				}
				HX_STACK_LINE(339)
				if ((tmp23)){
					HX_STACK_LINE(339)
					bool tmp24 = (inbody2 != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(339)
					if ((tmp24)){
						HX_STACK_LINE(339)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(339)
						inbody2->constraints->add(tmp25);
					}
				}
				HX_STACK_LINE(339)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(339)
				bool tmp25 = tmp24->active;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(339)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(339)
				if ((tmp25)){
					HX_STACK_LINE(339)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(339)
					::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(339)
					::zpp_nape::space::ZPP_Space tmp29 = tmp28->space;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(339)
					bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(339)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(339)
					::nape::space::Space tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(339)
					bool tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(339)
					if ((tmp33)){
						HX_STACK_LINE(339)
						tmp32 = null();
					}
					else{
						HX_STACK_LINE(339)
						::zpp_nape::constraint::ZPP_Constraint tmp34 = this->zpp_inner;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(339)
						::zpp_nape::constraint::ZPP_Constraint tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(339)
						::nape::space::Space tmp36 = tmp35->space->outer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(339)
						tmp32 = tmp36;
					}
					HX_STACK_LINE(339)
					tmp26 = (tmp32 != null());
				}
				else{
					HX_STACK_LINE(339)
					tmp26 = false;
				}
				HX_STACK_LINE(339)
				if ((tmp26)){
					HX_STACK_LINE(339)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(339)
					tmp27->wake();
					HX_STACK_LINE(339)
					bool tmp28 = (inbody2 != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(339)
					if ((tmp28)){
						HX_STACK_LINE(339)
						inbody2->wake();
					}
				}
			}
		}
		HX_STACK_LINE(339)
		::zpp_nape::constraint::ZPP_MotorJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(339)
		::zpp_nape::phys::ZPP_Body tmp5 = tmp4->b2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(339)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(339)
		if ((tmp6)){
			HX_STACK_LINE(339)
			Dynamic();
		}
		else{
			HX_STACK_LINE(339)
			::zpp_nape::constraint::ZPP_MotorJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(339)
			tmp7->b2->outer;
		}
	}
	HX_STACK_LINE(340)
	{
		HX_STACK_LINE(340)
		{
			HX_STACK_LINE(340)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(340)
			tmp4->immutable_midstep(HX_HCSTRING("MotorJoint::rate","\x15","\x70","\x6a","\xb1"));
			HX_STACK_LINE(340)
			bool tmp5 = (rate != rate);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(340)
			if ((tmp5)){
				HX_STACK_LINE(340)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: MotorJoint::rate cannot be NaN","\xbe","\x52","\xea","\xbc"));
			}
			HX_STACK_LINE(340)
			::zpp_nape::constraint::ZPP_MotorJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(340)
			Float tmp7 = tmp6->rate;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(340)
			Float tmp8 = rate;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(340)
			bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(340)
			if ((tmp9)){
				HX_STACK_LINE(340)
				::zpp_nape::constraint::ZPP_MotorJoint tmp10 = this->zpp_inner_zn;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(340)
				tmp10->rate = rate;
				HX_STACK_LINE(340)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(340)
				tmp11->wake();
			}
		}
		HX_STACK_LINE(340)
		::zpp_nape::constraint::ZPP_MotorJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(340)
		tmp4->rate;
	}
	HX_STACK_LINE(341)
	{
		HX_STACK_LINE(341)
		{
			HX_STACK_LINE(341)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(341)
			tmp4->immutable_midstep(HX_HCSTRING("MotorJoint::ratio","\x36","\xa6","\xb7","\x8b"));
			HX_STACK_LINE(341)
			bool tmp5 = (ratio != ratio);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(341)
			if ((tmp5)){
				HX_STACK_LINE(341)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: MotorJoint::ratio cannot be NaN","\x43","\xb3","\x11","\x7e"));
			}
			HX_STACK_LINE(341)
			::zpp_nape::constraint::ZPP_MotorJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(341)
			Float tmp7 = tmp6->ratio;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(341)
			Float tmp8 = ratio;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(341)
			bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(341)
			if ((tmp9)){
				HX_STACK_LINE(341)
				::zpp_nape::constraint::ZPP_MotorJoint tmp10 = this->zpp_inner_zn;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(341)
				tmp10->ratio = ratio;
				HX_STACK_LINE(341)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(341)
				tmp11->wake();
			}
		}
		HX_STACK_LINE(341)
		::zpp_nape::constraint::ZPP_MotorJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(341)
		tmp4->ratio;
	}
}
;
	return null();
}

//MotorJoint_obj::~MotorJoint_obj() { }

Dynamic MotorJoint_obj::__CreateEmpty() { return  new MotorJoint_obj; }
hx::ObjectPtr< MotorJoint_obj > MotorJoint_obj::__new(::nape::phys::Body body1,::nape::phys::Body body2,hx::Null< Float >  __o_rate,hx::Null< Float >  __o_ratio)
{  hx::ObjectPtr< MotorJoint_obj > _result_ = new MotorJoint_obj();
	_result_->__construct(body1,body2,__o_rate,__o_ratio);
	return _result_;}

Dynamic MotorJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MotorJoint_obj > _result_ = new MotorJoint_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::nape::phys::Body MotorJoint_obj::get_body1( ){
	HX_STACK_FRAME("nape.constraint.MotorJoint","get_body1",0xfbf7ced8,"nape.constraint.MotorJoint.get_body1","nape/constraint/MotorJoint.hx",196,0x6a1b57fe)
	HX_STACK_THIS(this)
	HX_STACK_LINE(197)
	::zpp_nape::constraint::ZPP_MotorJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(197)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(197)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(197)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(197)
	if ((tmp2)){
		HX_STACK_LINE(197)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(197)
		::zpp_nape::constraint::ZPP_MotorJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(197)
		tmp3 = tmp4->b1->outer;
	}
	HX_STACK_LINE(197)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(MotorJoint_obj,get_body1,return )

::nape::phys::Body MotorJoint_obj::set_body1( ::nape::phys::Body body1){
	HX_STACK_FRAME("nape.constraint.MotorJoint","set_body1",0xdf48bae4,"nape.constraint.MotorJoint.set_body1","nape/constraint/MotorJoint.hx",199,0x6a1b57fe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body1,"body1")
	HX_STACK_LINE(200)
	{
		HX_STACK_LINE(201)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(201)
		::String tmp1 = HX_HCSTRING("Constraint::body1","\xb2","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(201)
		tmp->immutable_midstep(tmp1);
		HX_STACK_LINE(202)
		bool tmp2 = (body1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		::zpp_nape::phys::ZPP_Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		if ((tmp2)){
			HX_STACK_LINE(202)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(202)
			tmp3 = body1->zpp_inner;
		}
		HX_STACK_LINE(202)
		::zpp_nape::phys::ZPP_Body inbody1 = tmp3;		HX_STACK_VAR(inbody1,"inbody1");
		HX_STACK_LINE(203)
		::zpp_nape::phys::ZPP_Body tmp4 = inbody1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(203)
		::zpp_nape::constraint::ZPP_MotorJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(203)
		::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(203)
		bool tmp7 = (tmp4 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(203)
		if ((tmp7)){
			HX_STACK_LINE(204)
			::zpp_nape::constraint::ZPP_MotorJoint tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(204)
			::zpp_nape::phys::ZPP_Body tmp9 = tmp8->b1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(204)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(204)
			if ((tmp10)){
				HX_STACK_LINE(205)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(205)
				::zpp_nape::space::ZPP_Space tmp12 = tmp11->space;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(205)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(205)
				::nape::space::Space tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(205)
				if ((tmp13)){
					HX_STACK_LINE(205)
					tmp14 = null();
				}
				else{
					HX_STACK_LINE(205)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(205)
					tmp14 = tmp15->space->outer;
				}
				HX_STACK_LINE(205)
				bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(205)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(205)
				if ((tmp15)){
					HX_STACK_LINE(205)
					::zpp_nape::constraint::ZPP_MotorJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(205)
					::zpp_nape::constraint::ZPP_MotorJoint tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(205)
					::zpp_nape::phys::ZPP_Body tmp19 = tmp18->b2;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(205)
					::zpp_nape::constraint::ZPP_MotorJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(205)
					::zpp_nape::constraint::ZPP_MotorJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(205)
					::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b1;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(205)
					tmp16 = (tmp19 != tmp22);
				}
				else{
					HX_STACK_LINE(205)
					tmp16 = false;
				}
				HX_STACK_LINE(205)
				if ((tmp16)){
					HX_STACK_LINE(207)
					::zpp_nape::constraint::ZPP_MotorJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(207)
					::zpp_nape::phys::ZPP_Body tmp18 = tmp17->b1;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(207)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(207)
					if ((tmp19)){
						HX_STACK_LINE(207)
						::zpp_nape::constraint::ZPP_MotorJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(207)
						::zpp_nape::util::ZNPList_ZPP_Constraint tmp21 = tmp20->b1->constraints;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(207)
						::zpp_nape::constraint::ZPP_Constraint tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(207)
						tmp21->remove(tmp22);
					}
				}
				HX_STACK_LINE(210)
				::zpp_nape::constraint::ZPP_Constraint tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(210)
				bool tmp18 = tmp17->active;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(210)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(210)
				if ((tmp18)){
					HX_STACK_LINE(210)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(210)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(210)
					::zpp_nape::space::ZPP_Space tmp22 = tmp21->space;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(210)
					bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(210)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(210)
					::nape::space::Space tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(210)
					bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(210)
					if ((tmp26)){
						HX_STACK_LINE(210)
						tmp25 = null();
					}
					else{
						HX_STACK_LINE(210)
						::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(210)
						::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(210)
						::nape::space::Space tmp29 = tmp28->space->outer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(210)
						tmp25 = tmp29;
					}
					HX_STACK_LINE(210)
					tmp19 = (tmp25 != null());
				}
				else{
					HX_STACK_LINE(210)
					tmp19 = false;
				}
				HX_STACK_LINE(210)
				if ((tmp19)){
					HX_STACK_LINE(210)
					::zpp_nape::constraint::ZPP_MotorJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(210)
					tmp20->b1->wake();
				}
			}
			HX_STACK_LINE(212)
			::zpp_nape::constraint::ZPP_MotorJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(212)
			tmp11->b1 = inbody1;
			HX_STACK_LINE(213)
			::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(213)
			::zpp_nape::space::ZPP_Space tmp13 = tmp12->space;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(213)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(213)
			::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(213)
			if ((tmp14)){
				HX_STACK_LINE(213)
				tmp15 = null();
			}
			else{
				HX_STACK_LINE(213)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(213)
				tmp15 = tmp16->space->outer;
			}
			HX_STACK_LINE(213)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(213)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(213)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(213)
			if ((tmp17)){
				HX_STACK_LINE(213)
				tmp18 = (inbody1 != null());
			}
			else{
				HX_STACK_LINE(213)
				tmp18 = false;
			}
			HX_STACK_LINE(213)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(213)
			if ((tmp18)){
				HX_STACK_LINE(213)
				::zpp_nape::constraint::ZPP_MotorJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(213)
				::zpp_nape::constraint::ZPP_MotorJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(213)
				::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b2;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(213)
				::zpp_nape::phys::ZPP_Body tmp23 = inbody1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(213)
				tmp19 = (tmp22 != tmp23);
			}
			else{
				HX_STACK_LINE(213)
				tmp19 = false;
			}
			HX_STACK_LINE(213)
			if ((tmp19)){
				HX_STACK_LINE(215)
				bool tmp20 = (inbody1 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(215)
				if ((tmp20)){
					HX_STACK_LINE(215)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(215)
					inbody1->constraints->add(tmp21);
				}
			}
			HX_STACK_LINE(218)
			::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(218)
			bool tmp21 = tmp20->active;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(218)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(218)
			if ((tmp21)){
				HX_STACK_LINE(218)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(218)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(218)
				::zpp_nape::space::ZPP_Space tmp25 = tmp24->space;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(218)
				bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(218)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(218)
				::nape::space::Space tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(218)
				bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(218)
				if ((tmp29)){
					HX_STACK_LINE(218)
					tmp28 = null();
				}
				else{
					HX_STACK_LINE(218)
					::zpp_nape::constraint::ZPP_Constraint tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(218)
					::zpp_nape::constraint::ZPP_Constraint tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(218)
					::nape::space::Space tmp32 = tmp31->space->outer;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(218)
					tmp28 = tmp32;
				}
				HX_STACK_LINE(218)
				tmp22 = (tmp28 != null());
			}
			else{
				HX_STACK_LINE(218)
				tmp22 = false;
			}
			HX_STACK_LINE(218)
			if ((tmp22)){
				HX_STACK_LINE(219)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(219)
				tmp23->wake();
				HX_STACK_LINE(220)
				bool tmp24 = (inbody1 != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(220)
				if ((tmp24)){
					HX_STACK_LINE(220)
					inbody1->wake();
				}
			}
		}
	}
	HX_STACK_LINE(224)
	::zpp_nape::constraint::ZPP_MotorJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(224)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(224)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(224)
	if ((tmp2)){
		HX_STACK_LINE(224)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(224)
		::zpp_nape::constraint::ZPP_MotorJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(224)
		tmp3 = tmp4->b1->outer;
	}
	HX_STACK_LINE(224)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(MotorJoint_obj,set_body1,return )

::nape::phys::Body MotorJoint_obj::get_body2( ){
	HX_STACK_FRAME("nape.constraint.MotorJoint","get_body2",0xfbf7ced9,"nape.constraint.MotorJoint.get_body2","nape/constraint/MotorJoint.hx",234,0x6a1b57fe)
	HX_STACK_THIS(this)
	HX_STACK_LINE(235)
	::zpp_nape::constraint::ZPP_MotorJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(235)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(235)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(235)
	if ((tmp2)){
		HX_STACK_LINE(235)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(235)
		::zpp_nape::constraint::ZPP_MotorJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(235)
		tmp3 = tmp4->b2->outer;
	}
	HX_STACK_LINE(235)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(MotorJoint_obj,get_body2,return )

::nape::phys::Body MotorJoint_obj::set_body2( ::nape::phys::Body body2){
	HX_STACK_FRAME("nape.constraint.MotorJoint","set_body2",0xdf48bae5,"nape.constraint.MotorJoint.set_body2","nape/constraint/MotorJoint.hx",237,0x6a1b57fe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body2,"body2")
	HX_STACK_LINE(238)
	{
		HX_STACK_LINE(239)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(239)
		::String tmp1 = HX_HCSTRING("Constraint::body2","\xb3","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(239)
		tmp->immutable_midstep(tmp1);
		HX_STACK_LINE(240)
		bool tmp2 = (body2 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(240)
		::zpp_nape::phys::ZPP_Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(240)
		if ((tmp2)){
			HX_STACK_LINE(240)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(240)
			tmp3 = body2->zpp_inner;
		}
		HX_STACK_LINE(240)
		::zpp_nape::phys::ZPP_Body inbody2 = tmp3;		HX_STACK_VAR(inbody2,"inbody2");
		HX_STACK_LINE(241)
		::zpp_nape::phys::ZPP_Body tmp4 = inbody2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(241)
		::zpp_nape::constraint::ZPP_MotorJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(241)
		::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(241)
		bool tmp7 = (tmp4 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(241)
		if ((tmp7)){
			HX_STACK_LINE(242)
			::zpp_nape::constraint::ZPP_MotorJoint tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(242)
			::zpp_nape::phys::ZPP_Body tmp9 = tmp8->b2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(242)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(242)
			if ((tmp10)){
				HX_STACK_LINE(243)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(243)
				::zpp_nape::space::ZPP_Space tmp12 = tmp11->space;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(243)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(243)
				::nape::space::Space tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(243)
				if ((tmp13)){
					HX_STACK_LINE(243)
					tmp14 = null();
				}
				else{
					HX_STACK_LINE(243)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(243)
					tmp14 = tmp15->space->outer;
				}
				HX_STACK_LINE(243)
				bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(243)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(243)
				if ((tmp15)){
					HX_STACK_LINE(243)
					::zpp_nape::constraint::ZPP_MotorJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(243)
					::zpp_nape::constraint::ZPP_MotorJoint tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(243)
					::zpp_nape::phys::ZPP_Body tmp19 = tmp18->b1;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(243)
					::zpp_nape::constraint::ZPP_MotorJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(243)
					::zpp_nape::constraint::ZPP_MotorJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(243)
					::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b2;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(243)
					tmp16 = (tmp19 != tmp22);
				}
				else{
					HX_STACK_LINE(243)
					tmp16 = false;
				}
				HX_STACK_LINE(243)
				if ((tmp16)){
					HX_STACK_LINE(245)
					::zpp_nape::constraint::ZPP_MotorJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(245)
					::zpp_nape::phys::ZPP_Body tmp18 = tmp17->b2;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(245)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(245)
					if ((tmp19)){
						HX_STACK_LINE(245)
						::zpp_nape::constraint::ZPP_MotorJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(245)
						::zpp_nape::util::ZNPList_ZPP_Constraint tmp21 = tmp20->b2->constraints;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(245)
						::zpp_nape::constraint::ZPP_Constraint tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(245)
						tmp21->remove(tmp22);
					}
				}
				HX_STACK_LINE(248)
				::zpp_nape::constraint::ZPP_Constraint tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(248)
				bool tmp18 = tmp17->active;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(248)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(248)
				if ((tmp18)){
					HX_STACK_LINE(248)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(248)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(248)
					::zpp_nape::space::ZPP_Space tmp22 = tmp21->space;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(248)
					bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(248)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(248)
					::nape::space::Space tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(248)
					bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(248)
					if ((tmp26)){
						HX_STACK_LINE(248)
						tmp25 = null();
					}
					else{
						HX_STACK_LINE(248)
						::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(248)
						::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(248)
						::nape::space::Space tmp29 = tmp28->space->outer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(248)
						tmp25 = tmp29;
					}
					HX_STACK_LINE(248)
					tmp19 = (tmp25 != null());
				}
				else{
					HX_STACK_LINE(248)
					tmp19 = false;
				}
				HX_STACK_LINE(248)
				if ((tmp19)){
					HX_STACK_LINE(248)
					::zpp_nape::constraint::ZPP_MotorJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(248)
					tmp20->b2->wake();
				}
			}
			HX_STACK_LINE(250)
			::zpp_nape::constraint::ZPP_MotorJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(250)
			tmp11->b2 = inbody2;
			HX_STACK_LINE(251)
			::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(251)
			::zpp_nape::space::ZPP_Space tmp13 = tmp12->space;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(251)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(251)
			::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(251)
			if ((tmp14)){
				HX_STACK_LINE(251)
				tmp15 = null();
			}
			else{
				HX_STACK_LINE(251)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(251)
				tmp15 = tmp16->space->outer;
			}
			HX_STACK_LINE(251)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(251)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(251)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(251)
			if ((tmp17)){
				HX_STACK_LINE(251)
				tmp18 = (inbody2 != null());
			}
			else{
				HX_STACK_LINE(251)
				tmp18 = false;
			}
			HX_STACK_LINE(251)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(251)
			if ((tmp18)){
				HX_STACK_LINE(251)
				::zpp_nape::constraint::ZPP_MotorJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(251)
				::zpp_nape::constraint::ZPP_MotorJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(251)
				::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b1;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(251)
				::zpp_nape::phys::ZPP_Body tmp23 = inbody2;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(251)
				tmp19 = (tmp22 != tmp23);
			}
			else{
				HX_STACK_LINE(251)
				tmp19 = false;
			}
			HX_STACK_LINE(251)
			if ((tmp19)){
				HX_STACK_LINE(253)
				bool tmp20 = (inbody2 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(253)
				if ((tmp20)){
					HX_STACK_LINE(253)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(253)
					inbody2->constraints->add(tmp21);
				}
			}
			HX_STACK_LINE(256)
			::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(256)
			bool tmp21 = tmp20->active;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(256)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(256)
			if ((tmp21)){
				HX_STACK_LINE(256)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(256)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(256)
				::zpp_nape::space::ZPP_Space tmp25 = tmp24->space;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(256)
				bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(256)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(256)
				::nape::space::Space tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(256)
				bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(256)
				if ((tmp29)){
					HX_STACK_LINE(256)
					tmp28 = null();
				}
				else{
					HX_STACK_LINE(256)
					::zpp_nape::constraint::ZPP_Constraint tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(256)
					::zpp_nape::constraint::ZPP_Constraint tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(256)
					::nape::space::Space tmp32 = tmp31->space->outer;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(256)
					tmp28 = tmp32;
				}
				HX_STACK_LINE(256)
				tmp22 = (tmp28 != null());
			}
			else{
				HX_STACK_LINE(256)
				tmp22 = false;
			}
			HX_STACK_LINE(256)
			if ((tmp22)){
				HX_STACK_LINE(257)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(257)
				tmp23->wake();
				HX_STACK_LINE(258)
				bool tmp24 = (inbody2 != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(258)
				if ((tmp24)){
					HX_STACK_LINE(258)
					inbody2->wake();
				}
			}
		}
	}
	HX_STACK_LINE(262)
	::zpp_nape::constraint::ZPP_MotorJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(262)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(262)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(262)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(262)
	if ((tmp2)){
		HX_STACK_LINE(262)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(262)
		::zpp_nape::constraint::ZPP_MotorJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(262)
		tmp3 = tmp4->b2->outer;
	}
	HX_STACK_LINE(262)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(MotorJoint_obj,set_body2,return )

Float MotorJoint_obj::get_ratio( ){
	HX_STACK_FRAME("nape.constraint.MotorJoint","get_ratio",0x292c3094,"nape.constraint.MotorJoint.get_ratio","nape/constraint/MotorJoint.hx",271,0x6a1b57fe)
	HX_STACK_THIS(this)
	HX_STACK_LINE(272)
	::zpp_nape::constraint::ZPP_MotorJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(272)
	Float tmp1 = tmp->ratio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(272)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(MotorJoint_obj,get_ratio,return )

Float MotorJoint_obj::set_ratio( Float ratio){
	HX_STACK_FRAME("nape.constraint.MotorJoint","set_ratio",0x0c7d1ca0,"nape.constraint.MotorJoint.set_ratio","nape/constraint/MotorJoint.hx",274,0x6a1b57fe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ratio,"ratio")
	HX_STACK_LINE(275)
	{
		HX_STACK_LINE(276)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(276)
		tmp->immutable_midstep(HX_HCSTRING("MotorJoint::ratio","\x36","\xa6","\xb7","\x8b"));
		HX_STACK_LINE(278)
		bool tmp1 = (ratio != ratio);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(278)
		if ((tmp1)){
			HX_STACK_LINE(279)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: MotorJoint::ratio cannot be NaN","\x43","\xb3","\x11","\x7e"));
		}
		HX_STACK_LINE(282)
		::zpp_nape::constraint::ZPP_MotorJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(282)
		Float tmp3 = tmp2->ratio;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(282)
		Float tmp4 = ratio;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(282)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(282)
		if ((tmp5)){
			HX_STACK_LINE(283)
			::zpp_nape::constraint::ZPP_MotorJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(283)
			tmp6->ratio = ratio;
			HX_STACK_LINE(284)
			::zpp_nape::constraint::ZPP_Constraint tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(284)
			tmp7->wake();
		}
	}
	HX_STACK_LINE(287)
	::zpp_nape::constraint::ZPP_MotorJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(287)
	Float tmp1 = tmp->ratio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(287)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(MotorJoint_obj,set_ratio,return )

Float MotorJoint_obj::get_rate( ){
	HX_STACK_FRAME("nape.constraint.MotorJoint","get_rate",0x8433db77,"nape.constraint.MotorJoint.get_rate","nape/constraint/MotorJoint.hx",296,0x6a1b57fe)
	HX_STACK_THIS(this)
	HX_STACK_LINE(297)
	::zpp_nape::constraint::ZPP_MotorJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	Float tmp1 = tmp->rate;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(297)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(MotorJoint_obj,get_rate,return )

Float MotorJoint_obj::set_rate( Float rate){
	HX_STACK_FRAME("nape.constraint.MotorJoint","set_rate",0x329134eb,"nape.constraint.MotorJoint.set_rate","nape/constraint/MotorJoint.hx",299,0x6a1b57fe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rate,"rate")
	HX_STACK_LINE(300)
	{
		HX_STACK_LINE(301)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(301)
		tmp->immutable_midstep(HX_HCSTRING("MotorJoint::rate","\x15","\x70","\x6a","\xb1"));
		HX_STACK_LINE(303)
		bool tmp1 = (rate != rate);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(303)
		if ((tmp1)){
			HX_STACK_LINE(304)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: MotorJoint::rate cannot be NaN","\xbe","\x52","\xea","\xbc"));
		}
		HX_STACK_LINE(307)
		::zpp_nape::constraint::ZPP_MotorJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(307)
		Float tmp3 = tmp2->rate;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(307)
		Float tmp4 = rate;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(307)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(307)
		if ((tmp5)){
			HX_STACK_LINE(308)
			::zpp_nape::constraint::ZPP_MotorJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(308)
			tmp6->rate = rate;
			HX_STACK_LINE(309)
			::zpp_nape::constraint::ZPP_Constraint tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(309)
			tmp7->wake();
		}
	}
	HX_STACK_LINE(312)
	::zpp_nape::constraint::ZPP_MotorJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(312)
	Float tmp1 = tmp->rate;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(312)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(MotorJoint_obj,set_rate,return )

::nape::geom::MatMN MotorJoint_obj::impulse( ){
	HX_STACK_FRAME("nape.constraint.MotorJoint","impulse",0xe5f55f67,"nape.constraint.MotorJoint.impulse","nape/constraint/MotorJoint.hx",348,0x6a1b57fe)
	HX_STACK_THIS(this)
	HX_STACK_LINE(349)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new((int)1,(int)1);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(350)
	{
		HX_STACK_LINE(350)
		bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(350)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(350)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(350)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(350)
		if ((tmp2)){
			HX_STACK_LINE(350)
			tmp3 = false;
		}
		else{
			HX_STACK_LINE(350)
			tmp3 = true;
		}
		HX_STACK_LINE(350)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(350)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(350)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(350)
		if ((tmp5)){
			HX_STACK_LINE(350)
			int tmp7 = ret->zpp_inner->m;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(350)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(350)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(350)
			tmp6 = ((int)0 >= tmp9);
		}
		else{
			HX_STACK_LINE(350)
			tmp6 = true;
		}
		HX_STACK_LINE(350)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(350)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(350)
		if ((tmp7)){
			HX_STACK_LINE(350)
			int tmp9 = ret->zpp_inner->n;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(350)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(350)
			tmp8 = ((int)0 >= tmp10);
		}
		else{
			HX_STACK_LINE(350)
			tmp8 = true;
		}
		HX_STACK_LINE(350)
		if ((tmp8)){
			HX_STACK_LINE(350)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: MatMN indices out of range","\xcc","\x72","\x58","\xe6"));
		}
		HX_STACK_LINE(350)
		Array< Float > tmp9 = ret->zpp_inner->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(350)
		int tmp10 = ret->zpp_inner->n;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(350)
		int tmp11 = ((int)0 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(350)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(350)
		::zpp_nape::constraint::ZPP_MotorJoint tmp13 = this->zpp_inner_zn;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(350)
		Float tmp14 = tmp13->jAcc;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(350)
		tmp9[tmp12] = tmp14;
	}
	HX_STACK_LINE(351)
	::nape::geom::MatMN tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(351)
	return tmp;
}


::nape::geom::Vec3 MotorJoint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.constraint.MotorJoint","bodyImpulse",0x6d4cc5e5,"nape.constraint.MotorJoint.bodyImpulse","nape/constraint/MotorJoint.hx",358,0x6a1b57fe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(360)
	bool tmp = (body == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(360)
	if ((tmp)){
		HX_STACK_LINE(361)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot evaluate impulse on null body","\x9d","\xb5","\xdc","\x16"));
	}
	HX_STACK_LINE(363)
	::nape::phys::Body tmp1 = body;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(363)
	::zpp_nape::constraint::ZPP_MotorJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(363)
	::zpp_nape::phys::ZPP_Body tmp3 = tmp2->b1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(363)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(363)
	::nape::phys::Body tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(363)
	if ((tmp4)){
		HX_STACK_LINE(363)
		tmp5 = null();
	}
	else{
		HX_STACK_LINE(363)
		::zpp_nape::constraint::ZPP_MotorJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(363)
		tmp5 = tmp6->b1->outer;
	}
	HX_STACK_LINE(363)
	bool tmp6 = (tmp1 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(363)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(363)
	if ((tmp6)){
		HX_STACK_LINE(363)
		::nape::phys::Body tmp8 = body;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(363)
		::zpp_nape::constraint::ZPP_MotorJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(363)
		::zpp_nape::constraint::ZPP_MotorJoint tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(363)
		::zpp_nape::phys::ZPP_Body tmp11 = tmp10->b2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(363)
		bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(363)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(363)
		::nape::phys::Body tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(363)
		bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(363)
		if ((tmp15)){
			HX_STACK_LINE(363)
			tmp14 = null();
		}
		else{
			HX_STACK_LINE(363)
			::zpp_nape::constraint::ZPP_MotorJoint tmp16 = this->zpp_inner_zn;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(363)
			::zpp_nape::constraint::ZPP_MotorJoint tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(363)
			::nape::phys::Body tmp18 = tmp17->b2->outer;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(363)
			tmp14 = tmp18;
		}
		HX_STACK_LINE(363)
		tmp7 = (tmp8 != tmp14);
	}
	else{
		HX_STACK_LINE(363)
		tmp7 = false;
	}
	HX_STACK_LINE(363)
	if ((tmp7)){
		HX_STACK_LINE(364)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Body is not linked to this constraint","\x2e","\xe5","\x48","\xbf"));
	}
	HX_STACK_LINE(367)
	::zpp_nape::constraint::ZPP_Constraint tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(367)
	bool tmp9 = tmp8->active;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(367)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(367)
	if ((tmp10)){
		HX_STACK_LINE(368)
		::nape::geom::Vec3 tmp11 = ::nape::geom::Vec3_obj::get(null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(368)
		return tmp11;
	}
	else{
		HX_STACK_LINE(371)
		::zpp_nape::constraint::ZPP_MotorJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(371)
		::zpp_nape::phys::ZPP_Body tmp12 = body->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(371)
		::nape::geom::Vec3 tmp13 = tmp11->bodyImpulse(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(371)
		return tmp13;
	}
	HX_STACK_LINE(367)
	return null();
}


Void MotorJoint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_FRAME("nape.constraint.MotorJoint","visitBodies",0xf209435d,"nape.constraint.MotorJoint.visitBodies","nape/constraint/MotorJoint.hx",377,0x6a1b57fe)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(378)
		::zpp_nape::constraint::ZPP_MotorJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(378)
		::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(378)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(378)
		::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(378)
		if ((tmp2)){
			HX_STACK_LINE(378)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(378)
			::zpp_nape::constraint::ZPP_MotorJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(378)
			tmp3 = tmp4->b1->outer;
		}
		HX_STACK_LINE(378)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(378)
		if ((tmp4)){
			HX_STACK_LINE(379)
			::zpp_nape::constraint::ZPP_MotorJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(379)
			::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(379)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(379)
			::nape::phys::Body tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(379)
			if ((tmp7)){
				HX_STACK_LINE(379)
				tmp8 = null();
			}
			else{
				HX_STACK_LINE(379)
				::zpp_nape::constraint::ZPP_MotorJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(379)
				tmp8 = tmp9->b1->outer;
			}
			HX_STACK_LINE(379)
			lambda(tmp8).Cast< Void >();
		}
		HX_STACK_LINE(381)
		::zpp_nape::constraint::ZPP_MotorJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(381)
		::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b2;		HX_STACK_VAR(tmp6,"tmp6");
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
			::zpp_nape::constraint::ZPP_MotorJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(381)
			tmp8 = tmp9->b2->outer;
		}
		HX_STACK_LINE(381)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(381)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(381)
		if ((tmp9)){
			HX_STACK_LINE(381)
			::zpp_nape::constraint::ZPP_MotorJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(381)
			::zpp_nape::constraint::ZPP_MotorJoint tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(381)
			::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b2;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(381)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(381)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(381)
			::nape::phys::Body tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(381)
			bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(381)
			if ((tmp17)){
				HX_STACK_LINE(381)
				tmp16 = null();
			}
			else{
				HX_STACK_LINE(381)
				::zpp_nape::constraint::ZPP_MotorJoint tmp18 = this->zpp_inner_zn;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(381)
				::zpp_nape::constraint::ZPP_MotorJoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(381)
				::nape::phys::Body tmp20 = tmp19->b2->outer;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(381)
				tmp16 = tmp20;
			}
			HX_STACK_LINE(381)
			::zpp_nape::constraint::ZPP_MotorJoint tmp18 = this->zpp_inner_zn;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(381)
			::zpp_nape::constraint::ZPP_MotorJoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(381)
			::zpp_nape::phys::ZPP_Body tmp20 = tmp19->b1;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(381)
			bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(381)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(381)
			::nape::phys::Body tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(381)
			bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(381)
			if ((tmp24)){
				HX_STACK_LINE(381)
				tmp23 = null();
			}
			else{
				HX_STACK_LINE(381)
				::zpp_nape::constraint::ZPP_MotorJoint tmp25 = this->zpp_inner_zn;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(381)
				::zpp_nape::constraint::ZPP_MotorJoint tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(381)
				::nape::phys::Body tmp27 = tmp26->b1->outer;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(381)
				tmp23 = tmp27;
			}
			HX_STACK_LINE(381)
			tmp10 = (tmp16 != tmp23);
		}
		else{
			HX_STACK_LINE(381)
			tmp10 = false;
		}
		HX_STACK_LINE(381)
		if ((tmp10)){
			HX_STACK_LINE(382)
			::zpp_nape::constraint::ZPP_MotorJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(382)
			::zpp_nape::phys::ZPP_Body tmp12 = tmp11->b2;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(382)
			bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(382)
			::nape::phys::Body tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(382)
			if ((tmp13)){
				HX_STACK_LINE(382)
				tmp14 = null();
			}
			else{
				HX_STACK_LINE(382)
				::zpp_nape::constraint::ZPP_MotorJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(382)
				tmp14 = tmp15->b2->outer;
			}
			HX_STACK_LINE(382)
			lambda(tmp14).Cast< Void >();
		}
	}
return null();
}



MotorJoint_obj::MotorJoint_obj()
{
}

void MotorJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MotorJoint);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MotorJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MotorJoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { if (inCallProp == hx::paccAlways) return get_rate(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { if (inCallProp == hx::paccAlways) return get_body1(); }
		if (HX_FIELD_EQ(inName,"body2") ) { if (inCallProp == hx::paccAlways) return get_body2(); }
		if (HX_FIELD_EQ(inName,"ratio") ) { if (inCallProp == hx::paccAlways) return get_ratio(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"impulse") ) { return impulse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_rate") ) { return get_rate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rate") ) { return set_rate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_body1") ) { return get_body1_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body1") ) { return set_body1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body2") ) { return get_body2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body2") ) { return set_body2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ratio") ) { return get_ratio_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ratio") ) { return set_ratio_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"visitBodies") ) { return visitBodies_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MotorJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { if (inCallProp == hx::paccAlways) return set_rate(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { if (inCallProp == hx::paccAlways) return set_body1(inValue); }
		if (HX_FIELD_EQ(inName,"body2") ) { if (inCallProp == hx::paccAlways) return set_body2(inValue); }
		if (HX_FIELD_EQ(inName,"ratio") ) { if (inCallProp == hx::paccAlways) return set_ratio(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::constraint::ZPP_MotorJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MotorJoint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void MotorJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"));
	outFields->push(HX_HCSTRING("body1","\x4f","\xd3","\xef","\xb6"));
	outFields->push(HX_HCSTRING("body2","\x50","\xd3","\xef","\xb6"));
	outFields->push(HX_HCSTRING("ratio","\x0b","\x35","\x24","\xe4"));
	outFields->push(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::constraint::ZPP_MotorJoint*/ ,(int)offsetof(MotorJoint_obj,zpp_inner_zn),HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0")},
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
	HX_HCSTRING("get_ratio","\x62","\x91","\xcd","\x27"),
	HX_HCSTRING("set_ratio","\x6e","\x7d","\x1e","\x0b"),
	HX_HCSTRING("get_rate","\x69","\x0e","\x5f","\xcb"),
	HX_HCSTRING("set_rate","\xdd","\x67","\xbc","\x79"),
	HX_HCSTRING("impulse","\xb5","\x50","\xbd","\x6d"),
	HX_HCSTRING("bodyImpulse","\x33","\x76","\xa2","\x5f"),
	HX_HCSTRING("visitBodies","\xab","\xf3","\x5e","\xe4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MotorJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MotorJoint_obj::__mClass,"__mClass");
};

#endif

hx::Class MotorJoint_obj::__mClass;

void MotorJoint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.constraint.MotorJoint","\x20","\x6d","\x45","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &MotorJoint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MotorJoint_obj >;
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
