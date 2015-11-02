#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_AngleJoint
#include <nape/constraint/AngleJoint.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_AngleJoint
#include <zpp_nape/constraint/ZPP_AngleJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
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

Void AngleJoint_obj::__construct(::nape::phys::Body body1,::nape::phys::Body body2,Float jointMin,Float jointMax,hx::Null< Float >  __o_ratio)
{
HX_STACK_FRAME("nape.constraint.AngleJoint","new",0xf891cef4,"nape.constraint.AngleJoint.new","nape/constraint/AngleJoint.hx",182,0x60e8d95c)
HX_STACK_THIS(this)
HX_STACK_ARG(body1,"body1")
HX_STACK_ARG(body2,"body2")
HX_STACK_ARG(jointMin,"jointMin")
HX_STACK_ARG(jointMax,"jointMax")
HX_STACK_ARG(__o_ratio,"ratio")
Float ratio = __o_ratio.Default(((Float)1.0));
{
	HX_STACK_LINE(186)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(374)
	::zpp_nape::constraint::ZPP_AngleJoint tmp = ::zpp_nape::constraint::ZPP_AngleJoint_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(374)
	this->zpp_inner_zn = tmp;
	HX_STACK_LINE(375)
	::zpp_nape::constraint::ZPP_AngleJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(375)
	this->zpp_inner = tmp1;
	HX_STACK_LINE(376)
	::zpp_nape::constraint::ZPP_Constraint tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(376)
	tmp2->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(377)
	::zpp_nape::constraint::ZPP_AngleJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(377)
	tmp3->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(379)
	::nape::constraint::Constraint_obj::zpp_internalAlloc = true;
	HX_STACK_LINE(380)
	super::__construct();
	HX_STACK_LINE(381)
	::nape::constraint::Constraint_obj::zpp_internalAlloc = false;
	HX_STACK_LINE(386)
	{
		HX_STACK_LINE(386)
		{
			HX_STACK_LINE(386)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(386)
			::String tmp5 = HX_HCSTRING("Constraint::body1","\xb2","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(386)
			tmp4->immutable_midstep(tmp5);
			HX_STACK_LINE(386)
			bool tmp6 = (body1 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(386)
			::zpp_nape::phys::ZPP_Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(386)
			if ((tmp6)){
				HX_STACK_LINE(386)
				tmp7 = null();
			}
			else{
				HX_STACK_LINE(386)
				tmp7 = body1->zpp_inner;
			}
			HX_STACK_LINE(386)
			::zpp_nape::phys::ZPP_Body inbody1 = tmp7;		HX_STACK_VAR(inbody1,"inbody1");
			HX_STACK_LINE(386)
			::zpp_nape::phys::ZPP_Body tmp8 = inbody1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(386)
			::zpp_nape::constraint::ZPP_AngleJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(386)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9->b1;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(386)
			bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(386)
			if ((tmp11)){
				HX_STACK_LINE(386)
				::zpp_nape::constraint::ZPP_AngleJoint tmp12 = this->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(386)
				::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(386)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(386)
				if ((tmp14)){
					HX_STACK_LINE(386)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(386)
					::zpp_nape::space::ZPP_Space tmp16 = tmp15->space;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(386)
					bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(386)
					::nape::space::Space tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(386)
					if ((tmp17)){
						HX_STACK_LINE(386)
						tmp18 = null();
					}
					else{
						HX_STACK_LINE(386)
						::zpp_nape::constraint::ZPP_Constraint tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(386)
						tmp18 = tmp19->space->outer;
					}
					HX_STACK_LINE(386)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(386)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(386)
					if ((tmp19)){
						HX_STACK_LINE(386)
						::zpp_nape::constraint::ZPP_AngleJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(386)
						::zpp_nape::constraint::ZPP_AngleJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(386)
						::zpp_nape::phys::ZPP_Body tmp23 = tmp22->b2;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(386)
						::zpp_nape::constraint::ZPP_AngleJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(386)
						::zpp_nape::constraint::ZPP_AngleJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(386)
						::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b1;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(386)
						tmp20 = (tmp23 != tmp26);
					}
					else{
						HX_STACK_LINE(386)
						tmp20 = false;
					}
					HX_STACK_LINE(386)
					if ((tmp20)){
						HX_STACK_LINE(386)
						::zpp_nape::constraint::ZPP_AngleJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(386)
						::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b1;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(386)
						bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(386)
						if ((tmp23)){
							HX_STACK_LINE(386)
							::zpp_nape::constraint::ZPP_AngleJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(386)
							::zpp_nape::util::ZNPList_ZPP_Constraint tmp25 = tmp24->b1->constraints;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(386)
							::zpp_nape::constraint::ZPP_Constraint tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(386)
							tmp25->remove(tmp26);
						}
					}
					HX_STACK_LINE(386)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(386)
					bool tmp22 = tmp21->active;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(386)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(386)
					if ((tmp22)){
						HX_STACK_LINE(386)
						::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(386)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(386)
						::zpp_nape::space::ZPP_Space tmp26 = tmp25->space;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(386)
						bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(386)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(386)
						::nape::space::Space tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(386)
						bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(386)
						if ((tmp30)){
							HX_STACK_LINE(386)
							tmp29 = null();
						}
						else{
							HX_STACK_LINE(386)
							::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(386)
							::zpp_nape::constraint::ZPP_Constraint tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(386)
							::nape::space::Space tmp33 = tmp32->space->outer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(386)
							tmp29 = tmp33;
						}
						HX_STACK_LINE(386)
						tmp23 = (tmp29 != null());
					}
					else{
						HX_STACK_LINE(386)
						tmp23 = false;
					}
					HX_STACK_LINE(386)
					if ((tmp23)){
						HX_STACK_LINE(386)
						::zpp_nape::constraint::ZPP_AngleJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(386)
						tmp24->b1->wake();
					}
				}
				HX_STACK_LINE(386)
				::zpp_nape::constraint::ZPP_AngleJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(386)
				tmp15->b1 = inbody1;
				HX_STACK_LINE(386)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(386)
				::zpp_nape::space::ZPP_Space tmp17 = tmp16->space;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(386)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(386)
				::nape::space::Space tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(386)
				if ((tmp18)){
					HX_STACK_LINE(386)
					tmp19 = null();
				}
				else{
					HX_STACK_LINE(386)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(386)
					tmp19 = tmp20->space->outer;
				}
				HX_STACK_LINE(386)
				bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(386)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(386)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(386)
				if ((tmp21)){
					HX_STACK_LINE(386)
					tmp22 = (inbody1 != null());
				}
				else{
					HX_STACK_LINE(386)
					tmp22 = false;
				}
				HX_STACK_LINE(386)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(386)
				if ((tmp22)){
					HX_STACK_LINE(386)
					::zpp_nape::constraint::ZPP_AngleJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(386)
					::zpp_nape::constraint::ZPP_AngleJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(386)
					::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b2;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(386)
					::zpp_nape::phys::ZPP_Body tmp27 = inbody1;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(386)
					tmp23 = (tmp26 != tmp27);
				}
				else{
					HX_STACK_LINE(386)
					tmp23 = false;
				}
				HX_STACK_LINE(386)
				if ((tmp23)){
					HX_STACK_LINE(386)
					bool tmp24 = (inbody1 != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(386)
					if ((tmp24)){
						HX_STACK_LINE(386)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(386)
						inbody1->constraints->add(tmp25);
					}
				}
				HX_STACK_LINE(386)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(386)
				bool tmp25 = tmp24->active;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(386)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(386)
				if ((tmp25)){
					HX_STACK_LINE(386)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(386)
					::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(386)
					::zpp_nape::space::ZPP_Space tmp29 = tmp28->space;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(386)
					bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(386)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(386)
					::nape::space::Space tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(386)
					bool tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(386)
					if ((tmp33)){
						HX_STACK_LINE(386)
						tmp32 = null();
					}
					else{
						HX_STACK_LINE(386)
						::zpp_nape::constraint::ZPP_Constraint tmp34 = this->zpp_inner;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(386)
						::zpp_nape::constraint::ZPP_Constraint tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(386)
						::nape::space::Space tmp36 = tmp35->space->outer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(386)
						tmp32 = tmp36;
					}
					HX_STACK_LINE(386)
					tmp26 = (tmp32 != null());
				}
				else{
					HX_STACK_LINE(386)
					tmp26 = false;
				}
				HX_STACK_LINE(386)
				if ((tmp26)){
					HX_STACK_LINE(386)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(386)
					tmp27->wake();
					HX_STACK_LINE(386)
					bool tmp28 = (inbody1 != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(386)
					if ((tmp28)){
						HX_STACK_LINE(386)
						inbody1->wake();
					}
				}
			}
		}
		HX_STACK_LINE(386)
		::zpp_nape::constraint::ZPP_AngleJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(386)
		::zpp_nape::phys::ZPP_Body tmp5 = tmp4->b1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(386)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(386)
		if ((tmp6)){
			HX_STACK_LINE(386)
			Dynamic();
		}
		else{
			HX_STACK_LINE(386)
			::zpp_nape::constraint::ZPP_AngleJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(386)
			tmp7->b1->outer;
		}
	}
	HX_STACK_LINE(387)
	{
		HX_STACK_LINE(387)
		{
			HX_STACK_LINE(387)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(387)
			::String tmp5 = HX_HCSTRING("Constraint::body2","\xb3","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(387)
			tmp4->immutable_midstep(tmp5);
			HX_STACK_LINE(387)
			bool tmp6 = (body2 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(387)
			::zpp_nape::phys::ZPP_Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(387)
			if ((tmp6)){
				HX_STACK_LINE(387)
				tmp7 = null();
			}
			else{
				HX_STACK_LINE(387)
				tmp7 = body2->zpp_inner;
			}
			HX_STACK_LINE(387)
			::zpp_nape::phys::ZPP_Body inbody2 = tmp7;		HX_STACK_VAR(inbody2,"inbody2");
			HX_STACK_LINE(387)
			::zpp_nape::phys::ZPP_Body tmp8 = inbody2;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(387)
			::zpp_nape::constraint::ZPP_AngleJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(387)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9->b2;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(387)
			bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(387)
			if ((tmp11)){
				HX_STACK_LINE(387)
				::zpp_nape::constraint::ZPP_AngleJoint tmp12 = this->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(387)
				::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b2;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(387)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(387)
				if ((tmp14)){
					HX_STACK_LINE(387)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(387)
					::zpp_nape::space::ZPP_Space tmp16 = tmp15->space;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(387)
					bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(387)
					::nape::space::Space tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(387)
					if ((tmp17)){
						HX_STACK_LINE(387)
						tmp18 = null();
					}
					else{
						HX_STACK_LINE(387)
						::zpp_nape::constraint::ZPP_Constraint tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(387)
						tmp18 = tmp19->space->outer;
					}
					HX_STACK_LINE(387)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(387)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(387)
					if ((tmp19)){
						HX_STACK_LINE(387)
						::zpp_nape::constraint::ZPP_AngleJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(387)
						::zpp_nape::constraint::ZPP_AngleJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(387)
						::zpp_nape::phys::ZPP_Body tmp23 = tmp22->b1;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(387)
						::zpp_nape::constraint::ZPP_AngleJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(387)
						::zpp_nape::constraint::ZPP_AngleJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(387)
						::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b2;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(387)
						tmp20 = (tmp23 != tmp26);
					}
					else{
						HX_STACK_LINE(387)
						tmp20 = false;
					}
					HX_STACK_LINE(387)
					if ((tmp20)){
						HX_STACK_LINE(387)
						::zpp_nape::constraint::ZPP_AngleJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(387)
						::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b2;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(387)
						bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(387)
						if ((tmp23)){
							HX_STACK_LINE(387)
							::zpp_nape::constraint::ZPP_AngleJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(387)
							::zpp_nape::util::ZNPList_ZPP_Constraint tmp25 = tmp24->b2->constraints;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(387)
							::zpp_nape::constraint::ZPP_Constraint tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(387)
							tmp25->remove(tmp26);
						}
					}
					HX_STACK_LINE(387)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(387)
					bool tmp22 = tmp21->active;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(387)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(387)
					if ((tmp22)){
						HX_STACK_LINE(387)
						::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(387)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(387)
						::zpp_nape::space::ZPP_Space tmp26 = tmp25->space;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(387)
						bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(387)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(387)
						::nape::space::Space tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(387)
						bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(387)
						if ((tmp30)){
							HX_STACK_LINE(387)
							tmp29 = null();
						}
						else{
							HX_STACK_LINE(387)
							::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(387)
							::zpp_nape::constraint::ZPP_Constraint tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(387)
							::nape::space::Space tmp33 = tmp32->space->outer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(387)
							tmp29 = tmp33;
						}
						HX_STACK_LINE(387)
						tmp23 = (tmp29 != null());
					}
					else{
						HX_STACK_LINE(387)
						tmp23 = false;
					}
					HX_STACK_LINE(387)
					if ((tmp23)){
						HX_STACK_LINE(387)
						::zpp_nape::constraint::ZPP_AngleJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(387)
						tmp24->b2->wake();
					}
				}
				HX_STACK_LINE(387)
				::zpp_nape::constraint::ZPP_AngleJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(387)
				tmp15->b2 = inbody2;
				HX_STACK_LINE(387)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(387)
				::zpp_nape::space::ZPP_Space tmp17 = tmp16->space;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(387)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(387)
				::nape::space::Space tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(387)
				if ((tmp18)){
					HX_STACK_LINE(387)
					tmp19 = null();
				}
				else{
					HX_STACK_LINE(387)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(387)
					tmp19 = tmp20->space->outer;
				}
				HX_STACK_LINE(387)
				bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(387)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(387)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(387)
				if ((tmp21)){
					HX_STACK_LINE(387)
					tmp22 = (inbody2 != null());
				}
				else{
					HX_STACK_LINE(387)
					tmp22 = false;
				}
				HX_STACK_LINE(387)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(387)
				if ((tmp22)){
					HX_STACK_LINE(387)
					::zpp_nape::constraint::ZPP_AngleJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(387)
					::zpp_nape::constraint::ZPP_AngleJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(387)
					::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b1;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(387)
					::zpp_nape::phys::ZPP_Body tmp27 = inbody2;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(387)
					tmp23 = (tmp26 != tmp27);
				}
				else{
					HX_STACK_LINE(387)
					tmp23 = false;
				}
				HX_STACK_LINE(387)
				if ((tmp23)){
					HX_STACK_LINE(387)
					bool tmp24 = (inbody2 != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(387)
					if ((tmp24)){
						HX_STACK_LINE(387)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(387)
						inbody2->constraints->add(tmp25);
					}
				}
				HX_STACK_LINE(387)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(387)
				bool tmp25 = tmp24->active;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(387)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(387)
				if ((tmp25)){
					HX_STACK_LINE(387)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(387)
					::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(387)
					::zpp_nape::space::ZPP_Space tmp29 = tmp28->space;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(387)
					bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(387)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(387)
					::nape::space::Space tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(387)
					bool tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(387)
					if ((tmp33)){
						HX_STACK_LINE(387)
						tmp32 = null();
					}
					else{
						HX_STACK_LINE(387)
						::zpp_nape::constraint::ZPP_Constraint tmp34 = this->zpp_inner;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(387)
						::zpp_nape::constraint::ZPP_Constraint tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(387)
						::nape::space::Space tmp36 = tmp35->space->outer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(387)
						tmp32 = tmp36;
					}
					HX_STACK_LINE(387)
					tmp26 = (tmp32 != null());
				}
				else{
					HX_STACK_LINE(387)
					tmp26 = false;
				}
				HX_STACK_LINE(387)
				if ((tmp26)){
					HX_STACK_LINE(387)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(387)
					tmp27->wake();
					HX_STACK_LINE(387)
					bool tmp28 = (inbody2 != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(387)
					if ((tmp28)){
						HX_STACK_LINE(387)
						inbody2->wake();
					}
				}
			}
		}
		HX_STACK_LINE(387)
		::zpp_nape::constraint::ZPP_AngleJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(387)
		::zpp_nape::phys::ZPP_Body tmp5 = tmp4->b2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(387)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(387)
		if ((tmp6)){
			HX_STACK_LINE(387)
			Dynamic();
		}
		else{
			HX_STACK_LINE(387)
			::zpp_nape::constraint::ZPP_AngleJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(387)
			tmp7->b2->outer;
		}
	}
	HX_STACK_LINE(388)
	{
		HX_STACK_LINE(388)
		{
			HX_STACK_LINE(388)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(388)
			tmp4->immutable_midstep(HX_HCSTRING("AngleJoint::jointMin","\x7f","\xdc","\xd5","\xd1"));
			HX_STACK_LINE(388)
			bool tmp5 = (jointMin != jointMin);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(388)
			if ((tmp5)){
				HX_STACK_LINE(388)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: AngleJoint::jointMin cannot be NaN","\xa8","\x63","\x9e","\x8c"));
			}
			HX_STACK_LINE(388)
			::zpp_nape::constraint::ZPP_AngleJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(388)
			Float tmp7 = tmp6->jointMin;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(388)
			Float tmp8 = jointMin;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(388)
			bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(388)
			if ((tmp9)){
				HX_STACK_LINE(388)
				::zpp_nape::constraint::ZPP_AngleJoint tmp10 = this->zpp_inner_zn;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(388)
				tmp10->jointMin = jointMin;
				HX_STACK_LINE(388)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(388)
				tmp11->wake();
			}
		}
		HX_STACK_LINE(388)
		::zpp_nape::constraint::ZPP_AngleJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(388)
		tmp4->jointMin;
	}
	HX_STACK_LINE(389)
	{
		HX_STACK_LINE(389)
		{
			HX_STACK_LINE(389)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(389)
			tmp4->immutable_midstep(HX_HCSTRING("AngleJoint::jointMax","\x91","\xd5","\xd5","\xd1"));
			HX_STACK_LINE(389)
			bool tmp5 = (jointMax != jointMax);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(389)
			if ((tmp5)){
				HX_STACK_LINE(389)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: AngleJoint::jointMax cannot be NaN","\x3a","\x58","\xf1","\x24"));
			}
			HX_STACK_LINE(389)
			::zpp_nape::constraint::ZPP_AngleJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(389)
			Float tmp7 = tmp6->jointMax;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(389)
			Float tmp8 = jointMax;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(389)
			bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(389)
			if ((tmp9)){
				HX_STACK_LINE(389)
				::zpp_nape::constraint::ZPP_AngleJoint tmp10 = this->zpp_inner_zn;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(389)
				tmp10->jointMax = jointMax;
				HX_STACK_LINE(389)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(389)
				tmp11->wake();
			}
		}
		HX_STACK_LINE(389)
		::zpp_nape::constraint::ZPP_AngleJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(389)
		tmp4->jointMax;
	}
	HX_STACK_LINE(390)
	{
		HX_STACK_LINE(390)
		{
			HX_STACK_LINE(390)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(390)
			tmp4->immutable_midstep(HX_HCSTRING("AngleJoint::ratio","\x94","\x2e","\x84","\x3d"));
			HX_STACK_LINE(390)
			bool tmp5 = (ratio != ratio);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(390)
			if ((tmp5)){
				HX_STACK_LINE(390)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: AngleJoint::ratio cannot be NaN","\x21","\xe4","\x20","\x9e"));
			}
			HX_STACK_LINE(390)
			::zpp_nape::constraint::ZPP_AngleJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(390)
			Float tmp7 = tmp6->ratio;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(390)
			Float tmp8 = ratio;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(390)
			bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(390)
			if ((tmp9)){
				HX_STACK_LINE(390)
				::zpp_nape::constraint::ZPP_AngleJoint tmp10 = this->zpp_inner_zn;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(390)
				tmp10->ratio = ratio;
				HX_STACK_LINE(390)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(390)
				tmp11->wake();
			}
		}
		HX_STACK_LINE(390)
		::zpp_nape::constraint::ZPP_AngleJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(390)
		tmp4->ratio;
	}
}
;
	return null();
}

//AngleJoint_obj::~AngleJoint_obj() { }

Dynamic AngleJoint_obj::__CreateEmpty() { return  new AngleJoint_obj; }
hx::ObjectPtr< AngleJoint_obj > AngleJoint_obj::__new(::nape::phys::Body body1,::nape::phys::Body body2,Float jointMin,Float jointMax,hx::Null< Float >  __o_ratio)
{  hx::ObjectPtr< AngleJoint_obj > _result_ = new AngleJoint_obj();
	_result_->__construct(body1,body2,jointMin,jointMax,__o_ratio);
	return _result_;}

Dynamic AngleJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AngleJoint_obj > _result_ = new AngleJoint_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::nape::phys::Body AngleJoint_obj::get_body1( ){
	HX_STACK_FRAME("nape.constraint.AngleJoint","get_body1",0x94d2553a,"nape.constraint.AngleJoint.get_body1","nape/constraint/AngleJoint.hx",195,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	::zpp_nape::constraint::ZPP_AngleJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(196)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(196)
	if ((tmp2)){
		HX_STACK_LINE(196)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(196)
		::zpp_nape::constraint::ZPP_AngleJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		tmp3 = tmp4->b1->outer;
	}
	HX_STACK_LINE(196)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(AngleJoint_obj,get_body1,return )

::nape::phys::Body AngleJoint_obj::set_body1( ::nape::phys::Body body1){
	HX_STACK_FRAME("nape.constraint.AngleJoint","set_body1",0x78234146,"nape.constraint.AngleJoint.set_body1","nape/constraint/AngleJoint.hx",198,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body1,"body1")
	HX_STACK_LINE(199)
	{
		HX_STACK_LINE(200)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		::String tmp1 = HX_HCSTRING("Constraint::body1","\xb2","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		tmp->immutable_midstep(tmp1);
		HX_STACK_LINE(201)
		bool tmp2 = (body1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		::zpp_nape::phys::ZPP_Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(201)
		if ((tmp2)){
			HX_STACK_LINE(201)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(201)
			tmp3 = body1->zpp_inner;
		}
		HX_STACK_LINE(201)
		::zpp_nape::phys::ZPP_Body inbody1 = tmp3;		HX_STACK_VAR(inbody1,"inbody1");
		HX_STACK_LINE(202)
		::zpp_nape::phys::ZPP_Body tmp4 = inbody1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(202)
		::zpp_nape::constraint::ZPP_AngleJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(202)
		::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(202)
		bool tmp7 = (tmp4 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(202)
		if ((tmp7)){
			HX_STACK_LINE(203)
			::zpp_nape::constraint::ZPP_AngleJoint tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(203)
			::zpp_nape::phys::ZPP_Body tmp9 = tmp8->b1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(203)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(203)
			if ((tmp10)){
				HX_STACK_LINE(204)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(204)
				::zpp_nape::space::ZPP_Space tmp12 = tmp11->space;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(204)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(204)
				::nape::space::Space tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(204)
				if ((tmp13)){
					HX_STACK_LINE(204)
					tmp14 = null();
				}
				else{
					HX_STACK_LINE(204)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(204)
					tmp14 = tmp15->space->outer;
				}
				HX_STACK_LINE(204)
				bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(204)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(204)
				if ((tmp15)){
					HX_STACK_LINE(204)
					::zpp_nape::constraint::ZPP_AngleJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(204)
					::zpp_nape::constraint::ZPP_AngleJoint tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(204)
					::zpp_nape::phys::ZPP_Body tmp19 = tmp18->b2;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(204)
					::zpp_nape::constraint::ZPP_AngleJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(204)
					::zpp_nape::constraint::ZPP_AngleJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(204)
					::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b1;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(204)
					tmp16 = (tmp19 != tmp22);
				}
				else{
					HX_STACK_LINE(204)
					tmp16 = false;
				}
				HX_STACK_LINE(204)
				if ((tmp16)){
					HX_STACK_LINE(206)
					::zpp_nape::constraint::ZPP_AngleJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(206)
					::zpp_nape::phys::ZPP_Body tmp18 = tmp17->b1;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(206)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(206)
					if ((tmp19)){
						HX_STACK_LINE(206)
						::zpp_nape::constraint::ZPP_AngleJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(206)
						::zpp_nape::util::ZNPList_ZPP_Constraint tmp21 = tmp20->b1->constraints;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(206)
						::zpp_nape::constraint::ZPP_Constraint tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(206)
						tmp21->remove(tmp22);
					}
				}
				HX_STACK_LINE(209)
				::zpp_nape::constraint::ZPP_Constraint tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(209)
				bool tmp18 = tmp17->active;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(209)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(209)
				if ((tmp18)){
					HX_STACK_LINE(209)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(209)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(209)
					::zpp_nape::space::ZPP_Space tmp22 = tmp21->space;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(209)
					bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(209)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(209)
					::nape::space::Space tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(209)
					bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(209)
					if ((tmp26)){
						HX_STACK_LINE(209)
						tmp25 = null();
					}
					else{
						HX_STACK_LINE(209)
						::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(209)
						::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(209)
						::nape::space::Space tmp29 = tmp28->space->outer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(209)
						tmp25 = tmp29;
					}
					HX_STACK_LINE(209)
					tmp19 = (tmp25 != null());
				}
				else{
					HX_STACK_LINE(209)
					tmp19 = false;
				}
				HX_STACK_LINE(209)
				if ((tmp19)){
					HX_STACK_LINE(209)
					::zpp_nape::constraint::ZPP_AngleJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(209)
					tmp20->b1->wake();
				}
			}
			HX_STACK_LINE(211)
			::zpp_nape::constraint::ZPP_AngleJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(211)
			tmp11->b1 = inbody1;
			HX_STACK_LINE(212)
			::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(212)
			::zpp_nape::space::ZPP_Space tmp13 = tmp12->space;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(212)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(212)
			::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(212)
			if ((tmp14)){
				HX_STACK_LINE(212)
				tmp15 = null();
			}
			else{
				HX_STACK_LINE(212)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(212)
				tmp15 = tmp16->space->outer;
			}
			HX_STACK_LINE(212)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(212)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(212)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(212)
			if ((tmp17)){
				HX_STACK_LINE(212)
				tmp18 = (inbody1 != null());
			}
			else{
				HX_STACK_LINE(212)
				tmp18 = false;
			}
			HX_STACK_LINE(212)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(212)
			if ((tmp18)){
				HX_STACK_LINE(212)
				::zpp_nape::constraint::ZPP_AngleJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(212)
				::zpp_nape::constraint::ZPP_AngleJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(212)
				::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b2;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(212)
				::zpp_nape::phys::ZPP_Body tmp23 = inbody1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(212)
				tmp19 = (tmp22 != tmp23);
			}
			else{
				HX_STACK_LINE(212)
				tmp19 = false;
			}
			HX_STACK_LINE(212)
			if ((tmp19)){
				HX_STACK_LINE(214)
				bool tmp20 = (inbody1 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(214)
				if ((tmp20)){
					HX_STACK_LINE(214)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(214)
					inbody1->constraints->add(tmp21);
				}
			}
			HX_STACK_LINE(217)
			::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(217)
			bool tmp21 = tmp20->active;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(217)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(217)
			if ((tmp21)){
				HX_STACK_LINE(217)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(217)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(217)
				::zpp_nape::space::ZPP_Space tmp25 = tmp24->space;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(217)
				bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(217)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(217)
				::nape::space::Space tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(217)
				bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(217)
				if ((tmp29)){
					HX_STACK_LINE(217)
					tmp28 = null();
				}
				else{
					HX_STACK_LINE(217)
					::zpp_nape::constraint::ZPP_Constraint tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(217)
					::zpp_nape::constraint::ZPP_Constraint tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(217)
					::nape::space::Space tmp32 = tmp31->space->outer;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(217)
					tmp28 = tmp32;
				}
				HX_STACK_LINE(217)
				tmp22 = (tmp28 != null());
			}
			else{
				HX_STACK_LINE(217)
				tmp22 = false;
			}
			HX_STACK_LINE(217)
			if ((tmp22)){
				HX_STACK_LINE(218)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(218)
				tmp23->wake();
				HX_STACK_LINE(219)
				bool tmp24 = (inbody1 != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(219)
				if ((tmp24)){
					HX_STACK_LINE(219)
					inbody1->wake();
				}
			}
		}
	}
	HX_STACK_LINE(223)
	::zpp_nape::constraint::ZPP_AngleJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(223)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(223)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(223)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(223)
	if ((tmp2)){
		HX_STACK_LINE(223)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(223)
		::zpp_nape::constraint::ZPP_AngleJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(223)
		tmp3 = tmp4->b1->outer;
	}
	HX_STACK_LINE(223)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(AngleJoint_obj,set_body1,return )

::nape::phys::Body AngleJoint_obj::get_body2( ){
	HX_STACK_FRAME("nape.constraint.AngleJoint","get_body2",0x94d2553b,"nape.constraint.AngleJoint.get_body2","nape/constraint/AngleJoint.hx",233,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(234)
	::zpp_nape::constraint::ZPP_AngleJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(234)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(234)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(234)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(234)
	if ((tmp2)){
		HX_STACK_LINE(234)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(234)
		::zpp_nape::constraint::ZPP_AngleJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(234)
		tmp3 = tmp4->b2->outer;
	}
	HX_STACK_LINE(234)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(AngleJoint_obj,get_body2,return )

::nape::phys::Body AngleJoint_obj::set_body2( ::nape::phys::Body body2){
	HX_STACK_FRAME("nape.constraint.AngleJoint","set_body2",0x78234147,"nape.constraint.AngleJoint.set_body2","nape/constraint/AngleJoint.hx",236,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body2,"body2")
	HX_STACK_LINE(237)
	{
		HX_STACK_LINE(238)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(238)
		::String tmp1 = HX_HCSTRING("Constraint::body2","\xb3","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(238)
		tmp->immutable_midstep(tmp1);
		HX_STACK_LINE(239)
		bool tmp2 = (body2 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(239)
		::zpp_nape::phys::ZPP_Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(239)
		if ((tmp2)){
			HX_STACK_LINE(239)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(239)
			tmp3 = body2->zpp_inner;
		}
		HX_STACK_LINE(239)
		::zpp_nape::phys::ZPP_Body inbody2 = tmp3;		HX_STACK_VAR(inbody2,"inbody2");
		HX_STACK_LINE(240)
		::zpp_nape::phys::ZPP_Body tmp4 = inbody2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(240)
		::zpp_nape::constraint::ZPP_AngleJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(240)
		::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(240)
		bool tmp7 = (tmp4 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(240)
		if ((tmp7)){
			HX_STACK_LINE(241)
			::zpp_nape::constraint::ZPP_AngleJoint tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(241)
			::zpp_nape::phys::ZPP_Body tmp9 = tmp8->b2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(241)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(241)
			if ((tmp10)){
				HX_STACK_LINE(242)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(242)
				::zpp_nape::space::ZPP_Space tmp12 = tmp11->space;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(242)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(242)
				::nape::space::Space tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(242)
				if ((tmp13)){
					HX_STACK_LINE(242)
					tmp14 = null();
				}
				else{
					HX_STACK_LINE(242)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(242)
					tmp14 = tmp15->space->outer;
				}
				HX_STACK_LINE(242)
				bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(242)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(242)
				if ((tmp15)){
					HX_STACK_LINE(242)
					::zpp_nape::constraint::ZPP_AngleJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(242)
					::zpp_nape::constraint::ZPP_AngleJoint tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(242)
					::zpp_nape::phys::ZPP_Body tmp19 = tmp18->b1;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(242)
					::zpp_nape::constraint::ZPP_AngleJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(242)
					::zpp_nape::constraint::ZPP_AngleJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(242)
					::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b2;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(242)
					tmp16 = (tmp19 != tmp22);
				}
				else{
					HX_STACK_LINE(242)
					tmp16 = false;
				}
				HX_STACK_LINE(242)
				if ((tmp16)){
					HX_STACK_LINE(244)
					::zpp_nape::constraint::ZPP_AngleJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(244)
					::zpp_nape::phys::ZPP_Body tmp18 = tmp17->b2;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(244)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(244)
					if ((tmp19)){
						HX_STACK_LINE(244)
						::zpp_nape::constraint::ZPP_AngleJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(244)
						::zpp_nape::util::ZNPList_ZPP_Constraint tmp21 = tmp20->b2->constraints;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(244)
						::zpp_nape::constraint::ZPP_Constraint tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(244)
						tmp21->remove(tmp22);
					}
				}
				HX_STACK_LINE(247)
				::zpp_nape::constraint::ZPP_Constraint tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(247)
				bool tmp18 = tmp17->active;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(247)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(247)
				if ((tmp18)){
					HX_STACK_LINE(247)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(247)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(247)
					::zpp_nape::space::ZPP_Space tmp22 = tmp21->space;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(247)
					bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(247)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(247)
					::nape::space::Space tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(247)
					bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(247)
					if ((tmp26)){
						HX_STACK_LINE(247)
						tmp25 = null();
					}
					else{
						HX_STACK_LINE(247)
						::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(247)
						::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(247)
						::nape::space::Space tmp29 = tmp28->space->outer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(247)
						tmp25 = tmp29;
					}
					HX_STACK_LINE(247)
					tmp19 = (tmp25 != null());
				}
				else{
					HX_STACK_LINE(247)
					tmp19 = false;
				}
				HX_STACK_LINE(247)
				if ((tmp19)){
					HX_STACK_LINE(247)
					::zpp_nape::constraint::ZPP_AngleJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(247)
					tmp20->b2->wake();
				}
			}
			HX_STACK_LINE(249)
			::zpp_nape::constraint::ZPP_AngleJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(249)
			tmp11->b2 = inbody2;
			HX_STACK_LINE(250)
			::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(250)
			::zpp_nape::space::ZPP_Space tmp13 = tmp12->space;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(250)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(250)
			::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(250)
			if ((tmp14)){
				HX_STACK_LINE(250)
				tmp15 = null();
			}
			else{
				HX_STACK_LINE(250)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(250)
				tmp15 = tmp16->space->outer;
			}
			HX_STACK_LINE(250)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(250)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(250)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(250)
			if ((tmp17)){
				HX_STACK_LINE(250)
				tmp18 = (inbody2 != null());
			}
			else{
				HX_STACK_LINE(250)
				tmp18 = false;
			}
			HX_STACK_LINE(250)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(250)
			if ((tmp18)){
				HX_STACK_LINE(250)
				::zpp_nape::constraint::ZPP_AngleJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(250)
				::zpp_nape::constraint::ZPP_AngleJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(250)
				::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b1;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(250)
				::zpp_nape::phys::ZPP_Body tmp23 = inbody2;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(250)
				tmp19 = (tmp22 != tmp23);
			}
			else{
				HX_STACK_LINE(250)
				tmp19 = false;
			}
			HX_STACK_LINE(250)
			if ((tmp19)){
				HX_STACK_LINE(252)
				bool tmp20 = (inbody2 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(252)
				if ((tmp20)){
					HX_STACK_LINE(252)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(252)
					inbody2->constraints->add(tmp21);
				}
			}
			HX_STACK_LINE(255)
			::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(255)
			bool tmp21 = tmp20->active;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(255)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(255)
			if ((tmp21)){
				HX_STACK_LINE(255)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(255)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(255)
				::zpp_nape::space::ZPP_Space tmp25 = tmp24->space;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(255)
				bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(255)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(255)
				::nape::space::Space tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(255)
				bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(255)
				if ((tmp29)){
					HX_STACK_LINE(255)
					tmp28 = null();
				}
				else{
					HX_STACK_LINE(255)
					::zpp_nape::constraint::ZPP_Constraint tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(255)
					::zpp_nape::constraint::ZPP_Constraint tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(255)
					::nape::space::Space tmp32 = tmp31->space->outer;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(255)
					tmp28 = tmp32;
				}
				HX_STACK_LINE(255)
				tmp22 = (tmp28 != null());
			}
			else{
				HX_STACK_LINE(255)
				tmp22 = false;
			}
			HX_STACK_LINE(255)
			if ((tmp22)){
				HX_STACK_LINE(256)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(256)
				tmp23->wake();
				HX_STACK_LINE(257)
				bool tmp24 = (inbody2 != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(257)
				if ((tmp24)){
					HX_STACK_LINE(257)
					inbody2->wake();
				}
			}
		}
	}
	HX_STACK_LINE(261)
	::zpp_nape::constraint::ZPP_AngleJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(261)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(261)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(261)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(261)
	if ((tmp2)){
		HX_STACK_LINE(261)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(261)
		::zpp_nape::constraint::ZPP_AngleJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(261)
		tmp3 = tmp4->b2->outer;
	}
	HX_STACK_LINE(261)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(AngleJoint_obj,set_body2,return )

Float AngleJoint_obj::get_jointMin( ){
	HX_STACK_FRAME("nape.constraint.AngleJoint","get_jointMin",0xb05f3d5d,"nape.constraint.AngleJoint.get_jointMin","nape/constraint/AngleJoint.hx",272,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(273)
	::zpp_nape::constraint::ZPP_AngleJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(273)
	Float tmp1 = tmp->jointMin;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(273)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AngleJoint_obj,get_jointMin,return )

Float AngleJoint_obj::set_jointMin( Float jointMin){
	HX_STACK_FRAME("nape.constraint.AngleJoint","set_jointMin",0xc55860d1,"nape.constraint.AngleJoint.set_jointMin","nape/constraint/AngleJoint.hx",275,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jointMin,"jointMin")
	HX_STACK_LINE(276)
	{
		HX_STACK_LINE(277)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(277)
		tmp->immutable_midstep(HX_HCSTRING("AngleJoint::jointMin","\x7f","\xdc","\xd5","\xd1"));
		HX_STACK_LINE(279)
		bool tmp1 = (jointMin != jointMin);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(279)
		if ((tmp1)){
			HX_STACK_LINE(280)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: AngleJoint::jointMin cannot be NaN","\xa8","\x63","\x9e","\x8c"));
		}
		HX_STACK_LINE(283)
		::zpp_nape::constraint::ZPP_AngleJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(283)
		Float tmp3 = tmp2->jointMin;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(283)
		Float tmp4 = jointMin;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(283)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(283)
		if ((tmp5)){
			HX_STACK_LINE(284)
			::zpp_nape::constraint::ZPP_AngleJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(284)
			tmp6->jointMin = jointMin;
			HX_STACK_LINE(285)
			::zpp_nape::constraint::ZPP_Constraint tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(285)
			tmp7->wake();
		}
	}
	HX_STACK_LINE(288)
	::zpp_nape::constraint::ZPP_AngleJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(288)
	Float tmp1 = tmp->jointMin;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(288)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AngleJoint_obj,set_jointMin,return )

Float AngleJoint_obj::get_jointMax( ){
	HX_STACK_FRAME("nape.constraint.AngleJoint","get_jointMax",0xb05f366f,"nape.constraint.AngleJoint.get_jointMax","nape/constraint/AngleJoint.hx",299,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(300)
	::zpp_nape::constraint::ZPP_AngleJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(300)
	Float tmp1 = tmp->jointMax;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(300)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AngleJoint_obj,get_jointMax,return )

Float AngleJoint_obj::set_jointMax( Float jointMax){
	HX_STACK_FRAME("nape.constraint.AngleJoint","set_jointMax",0xc55859e3,"nape.constraint.AngleJoint.set_jointMax","nape/constraint/AngleJoint.hx",302,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jointMax,"jointMax")
	HX_STACK_LINE(303)
	{
		HX_STACK_LINE(304)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		tmp->immutable_midstep(HX_HCSTRING("AngleJoint::jointMax","\x91","\xd5","\xd5","\xd1"));
		HX_STACK_LINE(306)
		bool tmp1 = (jointMax != jointMax);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(306)
		if ((tmp1)){
			HX_STACK_LINE(307)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: AngleJoint::jointMax cannot be NaN","\x3a","\x58","\xf1","\x24"));
		}
		HX_STACK_LINE(310)
		::zpp_nape::constraint::ZPP_AngleJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(310)
		Float tmp3 = tmp2->jointMax;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(310)
		Float tmp4 = jointMax;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(310)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(310)
		if ((tmp5)){
			HX_STACK_LINE(311)
			::zpp_nape::constraint::ZPP_AngleJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(311)
			tmp6->jointMax = jointMax;
			HX_STACK_LINE(312)
			::zpp_nape::constraint::ZPP_Constraint tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(312)
			tmp7->wake();
		}
	}
	HX_STACK_LINE(315)
	::zpp_nape::constraint::ZPP_AngleJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(315)
	Float tmp1 = tmp->jointMax;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(315)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AngleJoint_obj,set_jointMax,return )

Float AngleJoint_obj::get_ratio( ){
	HX_STACK_FRAME("nape.constraint.AngleJoint","get_ratio",0xc206b6f6,"nape.constraint.AngleJoint.get_ratio","nape/constraint/AngleJoint.hx",324,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(325)
	::zpp_nape::constraint::ZPP_AngleJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(325)
	Float tmp1 = tmp->ratio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(325)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AngleJoint_obj,get_ratio,return )

Float AngleJoint_obj::set_ratio( Float ratio){
	HX_STACK_FRAME("nape.constraint.AngleJoint","set_ratio",0xa557a302,"nape.constraint.AngleJoint.set_ratio","nape/constraint/AngleJoint.hx",327,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ratio,"ratio")
	HX_STACK_LINE(328)
	{
		HX_STACK_LINE(329)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(329)
		tmp->immutable_midstep(HX_HCSTRING("AngleJoint::ratio","\x94","\x2e","\x84","\x3d"));
		HX_STACK_LINE(331)
		bool tmp1 = (ratio != ratio);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(331)
		if ((tmp1)){
			HX_STACK_LINE(332)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: AngleJoint::ratio cannot be NaN","\x21","\xe4","\x20","\x9e"));
		}
		HX_STACK_LINE(335)
		::zpp_nape::constraint::ZPP_AngleJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(335)
		Float tmp3 = tmp2->ratio;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(335)
		Float tmp4 = ratio;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(335)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(335)
		if ((tmp5)){
			HX_STACK_LINE(336)
			::zpp_nape::constraint::ZPP_AngleJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(336)
			tmp6->ratio = ratio;
			HX_STACK_LINE(337)
			::zpp_nape::constraint::ZPP_Constraint tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(337)
			tmp7->wake();
		}
	}
	HX_STACK_LINE(340)
	::zpp_nape::constraint::ZPP_AngleJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(340)
	Float tmp1 = tmp->ratio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(340)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AngleJoint_obj,set_ratio,return )

bool AngleJoint_obj::isSlack( ){
	HX_STACK_FRAME("nape.constraint.AngleJoint","isSlack",0x74aa2e9a,"nape.constraint.AngleJoint.isSlack","nape/constraint/AngleJoint.hx",353,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(355)
	::zpp_nape::constraint::ZPP_AngleJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(355)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(355)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(355)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(355)
	if ((tmp2)){
		HX_STACK_LINE(355)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(355)
		::zpp_nape::constraint::ZPP_AngleJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(355)
		tmp3 = tmp4->b1->outer;
	}
	HX_STACK_LINE(355)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(355)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(355)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(355)
	if ((tmp5)){
		HX_STACK_LINE(355)
		::zpp_nape::constraint::ZPP_AngleJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(355)
		::zpp_nape::constraint::ZPP_AngleJoint tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(355)
		::zpp_nape::phys::ZPP_Body tmp9 = tmp8->b2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(355)
		bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(355)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(355)
		::nape::phys::Body tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(355)
		bool tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(355)
		if ((tmp13)){
			HX_STACK_LINE(355)
			tmp12 = null();
		}
		else{
			HX_STACK_LINE(355)
			::zpp_nape::constraint::ZPP_AngleJoint tmp14 = this->zpp_inner_zn;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(355)
			::zpp_nape::constraint::ZPP_AngleJoint tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(355)
			::nape::phys::Body tmp16 = tmp15->b2->outer;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(355)
			tmp12 = tmp16;
		}
		HX_STACK_LINE(355)
		tmp6 = (tmp12 == null());
	}
	else{
		HX_STACK_LINE(355)
		tmp6 = true;
	}
	HX_STACK_LINE(355)
	if ((tmp6)){
		HX_STACK_LINE(356)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot compute slack for AngleJoint if either body is null.","\x2d","\x08","\x31","\xce"));
	}
	HX_STACK_LINE(359)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(359)
	{
		HX_STACK_LINE(359)
		::zpp_nape::constraint::ZPP_AngleJoint tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(359)
		::zpp_nape::constraint::ZPP_AngleJoint _this = tmp8;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(359)
		bool slack;		HX_STACK_VAR(slack,"slack");
		HX_STACK_LINE(359)
		{
			HX_STACK_LINE(359)
			Float tmp9 = _this->ratio;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(359)
			Float tmp10 = _this->b2->rot;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(359)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(359)
			Float tmp12 = _this->b1->rot;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(359)
			Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(359)
			Float C = tmp13;		HX_STACK_VAR(C,"C");
			HX_STACK_LINE(359)
			bool tmp14 = _this->equal;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(359)
			if ((tmp14)){
				HX_STACK_LINE(359)
				hx::SubEq(C,_this->jointMax);
				HX_STACK_LINE(359)
				slack = false;
				HX_STACK_LINE(359)
				_this->scale = ((Float)1.0);
			}
			else{
				HX_STACK_LINE(359)
				bool tmp15 = (C < _this->jointMin);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(359)
				if ((tmp15)){
					HX_STACK_LINE(359)
					Float tmp16 = (_this->jointMin - C);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(359)
					C = tmp16;
					HX_STACK_LINE(359)
					_this->scale = ((Float)-1.0);
					HX_STACK_LINE(359)
					slack = false;
				}
				else{
					HX_STACK_LINE(359)
					bool tmp16 = (C > _this->jointMax);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(359)
					if ((tmp16)){
						HX_STACK_LINE(359)
						hx::SubEq(C,_this->jointMax);
						HX_STACK_LINE(359)
						_this->scale = ((Float)1.0);
						HX_STACK_LINE(359)
						slack = false;
					}
					else{
						HX_STACK_LINE(359)
						_this->scale = ((Float)0.0);
						HX_STACK_LINE(359)
						C = (int)0;
						HX_STACK_LINE(359)
						slack = true;
					}
				}
			}
			HX_STACK_LINE(359)
			C;
		}
		HX_STACK_LINE(359)
		tmp7 = slack;
	}
	HX_STACK_LINE(359)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(AngleJoint_obj,isSlack,return )

::nape::geom::MatMN AngleJoint_obj::impulse( ){
	HX_STACK_FRAME("nape.constraint.AngleJoint","impulse",0xc7202949,"nape.constraint.AngleJoint.impulse","nape/constraint/AngleJoint.hx",397,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(398)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new((int)1,(int)1);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(399)
	{
		HX_STACK_LINE(399)
		bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(399)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(399)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(399)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(399)
		if ((tmp2)){
			HX_STACK_LINE(399)
			tmp3 = false;
		}
		else{
			HX_STACK_LINE(399)
			tmp3 = true;
		}
		HX_STACK_LINE(399)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(399)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(399)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(399)
		if ((tmp5)){
			HX_STACK_LINE(399)
			int tmp7 = ret->zpp_inner->m;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(399)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(399)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(399)
			tmp6 = ((int)0 >= tmp9);
		}
		else{
			HX_STACK_LINE(399)
			tmp6 = true;
		}
		HX_STACK_LINE(399)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(399)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(399)
		if ((tmp7)){
			HX_STACK_LINE(399)
			int tmp9 = ret->zpp_inner->n;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(399)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(399)
			tmp8 = ((int)0 >= tmp10);
		}
		else{
			HX_STACK_LINE(399)
			tmp8 = true;
		}
		HX_STACK_LINE(399)
		if ((tmp8)){
			HX_STACK_LINE(399)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: MatMN indices out of range","\xcc","\x72","\x58","\xe6"));
		}
		HX_STACK_LINE(399)
		Array< Float > tmp9 = ret->zpp_inner->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(399)
		int tmp10 = ret->zpp_inner->n;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(399)
		int tmp11 = ((int)0 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(399)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(399)
		::zpp_nape::constraint::ZPP_AngleJoint tmp13 = this->zpp_inner_zn;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(399)
		Float tmp14 = tmp13->jAcc;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(399)
		tmp9[tmp12] = tmp14;
	}
	HX_STACK_LINE(400)
	::nape::geom::MatMN tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(400)
	return tmp;
}


::nape::geom::Vec3 AngleJoint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.constraint.AngleJoint","bodyImpulse",0xd69f28c7,"nape.constraint.AngleJoint.bodyImpulse","nape/constraint/AngleJoint.hx",407,0x60e8d95c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(409)
	bool tmp = (body == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(409)
	if ((tmp)){
		HX_STACK_LINE(410)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot evaluate impulse on null body","\x9d","\xb5","\xdc","\x16"));
	}
	HX_STACK_LINE(412)
	::nape::phys::Body tmp1 = body;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(412)
	::zpp_nape::constraint::ZPP_AngleJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(412)
	::zpp_nape::phys::ZPP_Body tmp3 = tmp2->b1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(412)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(412)
	::nape::phys::Body tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(412)
	if ((tmp4)){
		HX_STACK_LINE(412)
		tmp5 = null();
	}
	else{
		HX_STACK_LINE(412)
		::zpp_nape::constraint::ZPP_AngleJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(412)
		tmp5 = tmp6->b1->outer;
	}
	HX_STACK_LINE(412)
	bool tmp6 = (tmp1 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(412)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(412)
	if ((tmp6)){
		HX_STACK_LINE(412)
		::nape::phys::Body tmp8 = body;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(412)
		::zpp_nape::constraint::ZPP_AngleJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(412)
		::zpp_nape::constraint::ZPP_AngleJoint tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(412)
		::zpp_nape::phys::ZPP_Body tmp11 = tmp10->b2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(412)
		bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(412)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(412)
		::nape::phys::Body tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(412)
		bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(412)
		if ((tmp15)){
			HX_STACK_LINE(412)
			tmp14 = null();
		}
		else{
			HX_STACK_LINE(412)
			::zpp_nape::constraint::ZPP_AngleJoint tmp16 = this->zpp_inner_zn;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(412)
			::zpp_nape::constraint::ZPP_AngleJoint tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(412)
			::nape::phys::Body tmp18 = tmp17->b2->outer;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(412)
			tmp14 = tmp18;
		}
		HX_STACK_LINE(412)
		tmp7 = (tmp8 != tmp14);
	}
	else{
		HX_STACK_LINE(412)
		tmp7 = false;
	}
	HX_STACK_LINE(412)
	if ((tmp7)){
		HX_STACK_LINE(413)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Body is not linked to this constraint","\x2e","\xe5","\x48","\xbf"));
	}
	HX_STACK_LINE(416)
	::zpp_nape::constraint::ZPP_Constraint tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(416)
	bool tmp9 = tmp8->active;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(416)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(416)
	if ((tmp10)){
		HX_STACK_LINE(417)
		::nape::geom::Vec3 tmp11 = ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(417)
		return tmp11;
	}
	else{
		HX_STACK_LINE(420)
		::zpp_nape::constraint::ZPP_AngleJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(420)
		::zpp_nape::phys::ZPP_Body tmp12 = body->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(420)
		::nape::geom::Vec3 tmp13 = tmp11->bodyImpulse(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(420)
		return tmp13;
	}
	HX_STACK_LINE(416)
	return null();
}


Void AngleJoint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_FRAME("nape.constraint.AngleJoint","visitBodies",0x5b5ba63f,"nape.constraint.AngleJoint.visitBodies","nape/constraint/AngleJoint.hx",426,0x60e8d95c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(428)
		bool tmp = (lambda == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(428)
		if ((tmp)){
			HX_STACK_LINE(429)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot apply null lambda to bodies","\x04","\xf4","\x05","\xb0"));
		}
		HX_STACK_LINE(432)
		::zpp_nape::constraint::ZPP_AngleJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(432)
		::zpp_nape::phys::ZPP_Body tmp2 = tmp1->b1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(432)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(432)
		::nape::phys::Body tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(432)
		if ((tmp3)){
			HX_STACK_LINE(432)
			tmp4 = null();
		}
		else{
			HX_STACK_LINE(432)
			::zpp_nape::constraint::ZPP_AngleJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(432)
			tmp4 = tmp5->b1->outer;
		}
		HX_STACK_LINE(432)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(432)
		if ((tmp5)){
			HX_STACK_LINE(433)
			::zpp_nape::constraint::ZPP_AngleJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(433)
			::zpp_nape::phys::ZPP_Body tmp7 = tmp6->b1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(433)
			bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(433)
			::nape::phys::Body tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(433)
			if ((tmp8)){
				HX_STACK_LINE(433)
				tmp9 = null();
			}
			else{
				HX_STACK_LINE(433)
				::zpp_nape::constraint::ZPP_AngleJoint tmp10 = this->zpp_inner_zn;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(433)
				tmp9 = tmp10->b1->outer;
			}
			HX_STACK_LINE(433)
			lambda(tmp9).Cast< Void >();
		}
		HX_STACK_LINE(435)
		::zpp_nape::constraint::ZPP_AngleJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(435)
		::zpp_nape::phys::ZPP_Body tmp7 = tmp6->b2;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(435)
		bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(435)
		::nape::phys::Body tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(435)
		if ((tmp8)){
			HX_STACK_LINE(435)
			tmp9 = null();
		}
		else{
			HX_STACK_LINE(435)
			::zpp_nape::constraint::ZPP_AngleJoint tmp10 = this->zpp_inner_zn;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(435)
			tmp9 = tmp10->b2->outer;
		}
		HX_STACK_LINE(435)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(435)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(435)
		if ((tmp10)){
			HX_STACK_LINE(435)
			::zpp_nape::constraint::ZPP_AngleJoint tmp12 = this->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(435)
			::zpp_nape::constraint::ZPP_AngleJoint tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(435)
			::zpp_nape::phys::ZPP_Body tmp14 = tmp13->b2;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(435)
			bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(435)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(435)
			::nape::phys::Body tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(435)
			bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(435)
			if ((tmp18)){
				HX_STACK_LINE(435)
				tmp17 = null();
			}
			else{
				HX_STACK_LINE(435)
				::zpp_nape::constraint::ZPP_AngleJoint tmp19 = this->zpp_inner_zn;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(435)
				::zpp_nape::constraint::ZPP_AngleJoint tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(435)
				::nape::phys::Body tmp21 = tmp20->b2->outer;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(435)
				tmp17 = tmp21;
			}
			HX_STACK_LINE(435)
			::zpp_nape::constraint::ZPP_AngleJoint tmp19 = this->zpp_inner_zn;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(435)
			::zpp_nape::constraint::ZPP_AngleJoint tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(435)
			::zpp_nape::phys::ZPP_Body tmp21 = tmp20->b1;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(435)
			bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(435)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(435)
			::nape::phys::Body tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(435)
			bool tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(435)
			if ((tmp25)){
				HX_STACK_LINE(435)
				tmp24 = null();
			}
			else{
				HX_STACK_LINE(435)
				::zpp_nape::constraint::ZPP_AngleJoint tmp26 = this->zpp_inner_zn;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(435)
				::zpp_nape::constraint::ZPP_AngleJoint tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(435)
				::nape::phys::Body tmp28 = tmp27->b1->outer;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(435)
				tmp24 = tmp28;
			}
			HX_STACK_LINE(435)
			tmp11 = (tmp17 != tmp24);
		}
		else{
			HX_STACK_LINE(435)
			tmp11 = false;
		}
		HX_STACK_LINE(435)
		if ((tmp11)){
			HX_STACK_LINE(436)
			::zpp_nape::constraint::ZPP_AngleJoint tmp12 = this->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(436)
			::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b2;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(436)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(436)
			::nape::phys::Body tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(436)
			if ((tmp14)){
				HX_STACK_LINE(436)
				tmp15 = null();
			}
			else{
				HX_STACK_LINE(436)
				::zpp_nape::constraint::ZPP_AngleJoint tmp16 = this->zpp_inner_zn;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(436)
				tmp15 = tmp16->b2->outer;
			}
			HX_STACK_LINE(436)
			lambda(tmp15).Cast< Void >();
		}
	}
return null();
}



AngleJoint_obj::AngleJoint_obj()
{
}

void AngleJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AngleJoint);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AngleJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AngleJoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { if (inCallProp == hx::paccAlways) return get_body1(); }
		if (HX_FIELD_EQ(inName,"body2") ) { if (inCallProp == hx::paccAlways) return get_body2(); }
		if (HX_FIELD_EQ(inName,"ratio") ) { if (inCallProp == hx::paccAlways) return get_ratio(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isSlack") ) { return isSlack_dyn(); }
		if (HX_FIELD_EQ(inName,"impulse") ) { return impulse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"jointMin") ) { if (inCallProp == hx::paccAlways) return get_jointMin(); }
		if (HX_FIELD_EQ(inName,"jointMax") ) { if (inCallProp == hx::paccAlways) return get_jointMax(); }
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
		if (HX_FIELD_EQ(inName,"get_jointMin") ) { return get_jointMin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_jointMin") ) { return set_jointMin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_jointMax") ) { return get_jointMax_dyn(); }
		if (HX_FIELD_EQ(inName,"set_jointMax") ) { return set_jointMax_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AngleJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { if (inCallProp == hx::paccAlways) return set_body1(inValue); }
		if (HX_FIELD_EQ(inName,"body2") ) { if (inCallProp == hx::paccAlways) return set_body2(inValue); }
		if (HX_FIELD_EQ(inName,"ratio") ) { if (inCallProp == hx::paccAlways) return set_ratio(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"jointMin") ) { if (inCallProp == hx::paccAlways) return set_jointMin(inValue); }
		if (HX_FIELD_EQ(inName,"jointMax") ) { if (inCallProp == hx::paccAlways) return set_jointMax(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::constraint::ZPP_AngleJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AngleJoint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void AngleJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"));
	outFields->push(HX_HCSTRING("body1","\x4f","\xd3","\xef","\xb6"));
	outFields->push(HX_HCSTRING("body2","\x50","\xd3","\xef","\xb6"));
	outFields->push(HX_HCSTRING("jointMin","\x68","\xfa","\x25","\x55"));
	outFields->push(HX_HCSTRING("jointMax","\x7a","\xf3","\x25","\x55"));
	outFields->push(HX_HCSTRING("ratio","\x0b","\x35","\x24","\xe4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::constraint::ZPP_AngleJoint*/ ,(int)offsetof(AngleJoint_obj,zpp_inner_zn),HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0")},
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
	HX_HCSTRING("get_jointMin","\x71","\xae","\x3f","\x0a"),
	HX_HCSTRING("set_jointMin","\xe5","\xd1","\x38","\x1f"),
	HX_HCSTRING("get_jointMax","\x83","\xa7","\x3f","\x0a"),
	HX_HCSTRING("set_jointMax","\xf7","\xca","\x38","\x1f"),
	HX_HCSTRING("get_ratio","\x62","\x91","\xcd","\x27"),
	HX_HCSTRING("set_ratio","\x6e","\x7d","\x1e","\x0b"),
	HX_HCSTRING("isSlack","\x06","\x56","\x47","\x1b"),
	HX_HCSTRING("impulse","\xb5","\x50","\xbd","\x6d"),
	HX_HCSTRING("bodyImpulse","\x33","\x76","\xa2","\x5f"),
	HX_HCSTRING("visitBodies","\xab","\xf3","\x5e","\xe4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AngleJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AngleJoint_obj::__mClass,"__mClass");
};

#endif

hx::Class AngleJoint_obj::__mClass;

void AngleJoint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.constraint.AngleJoint","\x02","\x85","\xe2","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &AngleJoint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AngleJoint_obj >;
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
