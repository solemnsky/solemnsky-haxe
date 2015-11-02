#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_PulleyJoint
#include <nape/constraint/PulleyJoint.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_PulleyJoint
#include <zpp_nape/constraint/ZPP_PulleyJoint.h>
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

Void PulleyJoint_obj::__construct(::nape::phys::Body body1,::nape::phys::Body body2,::nape::phys::Body body3,::nape::phys::Body body4,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,::nape::geom::Vec2 anchor3,::nape::geom::Vec2 anchor4,Float jointMin,Float jointMax,hx::Null< Float >  __o_ratio)
{
HX_STACK_FRAME("nape.constraint.PulleyJoint","new",0x06ee1c18,"nape.constraint.PulleyJoint.new","nape/constraint/PulleyJoint.hx",187,0x2d6ef3f8)
HX_STACK_THIS(this)
HX_STACK_ARG(body1,"body1")
HX_STACK_ARG(body2,"body2")
HX_STACK_ARG(body3,"body3")
HX_STACK_ARG(body4,"body4")
HX_STACK_ARG(anchor1,"anchor1")
HX_STACK_ARG(anchor2,"anchor2")
HX_STACK_ARG(anchor3,"anchor3")
HX_STACK_ARG(anchor4,"anchor4")
HX_STACK_ARG(jointMin,"jointMin")
HX_STACK_ARG(jointMax,"jointMax")
HX_STACK_ARG(__o_ratio,"ratio")
Float ratio = __o_ratio.Default(((Float)1.0));
{
	HX_STACK_LINE(191)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(563)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp = ::zpp_nape::constraint::ZPP_PulleyJoint_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(563)
	this->zpp_inner_zn = tmp;
	HX_STACK_LINE(564)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(564)
	this->zpp_inner = tmp1;
	HX_STACK_LINE(565)
	::zpp_nape::constraint::ZPP_Constraint tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(565)
	tmp2->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(566)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(566)
	tmp3->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(568)
	::nape::constraint::Constraint_obj::zpp_internalAlloc = true;
	HX_STACK_LINE(569)
	super::__construct();
	HX_STACK_LINE(570)
	::nape::constraint::Constraint_obj::zpp_internalAlloc = false;
	HX_STACK_LINE(575)
	{
		HX_STACK_LINE(575)
		{
			HX_STACK_LINE(575)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(575)
			::String tmp5 = HX_HCSTRING("Constraint::body1","\xb2","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(575)
			tmp4->immutable_midstep(tmp5);
			HX_STACK_LINE(575)
			bool tmp6 = (body1 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(575)
			::zpp_nape::phys::ZPP_Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(575)
			if ((tmp6)){
				HX_STACK_LINE(575)
				tmp7 = null();
			}
			else{
				HX_STACK_LINE(575)
				tmp7 = body1->zpp_inner;
			}
			HX_STACK_LINE(575)
			::zpp_nape::phys::ZPP_Body inbody1 = tmp7;		HX_STACK_VAR(inbody1,"inbody1");
			HX_STACK_LINE(575)
			::zpp_nape::phys::ZPP_Body tmp8 = inbody1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(575)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(575)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9->b1;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(575)
			bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(575)
			if ((tmp11)){
				HX_STACK_LINE(575)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp12 = this->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(575)
				::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(575)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(575)
				if ((tmp14)){
					HX_STACK_LINE(575)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(575)
					::zpp_nape::space::ZPP_Space tmp16 = tmp15->space;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(575)
					bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(575)
					::nape::space::Space tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(575)
					if ((tmp17)){
						HX_STACK_LINE(575)
						tmp18 = null();
					}
					else{
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_Constraint tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(575)
						tmp18 = tmp19->space->outer;
					}
					HX_STACK_LINE(575)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(575)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(575)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(575)
					if ((tmp20)){
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = this->zpp_inner_zn;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(575)
						::zpp_nape::phys::ZPP_Body tmp25 = tmp24->b2;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = this->zpp_inner_zn;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(575)
						::zpp_nape::phys::ZPP_Body tmp29 = tmp28->b1;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(575)
						tmp21 = (tmp25 != tmp29);
					}
					else{
						HX_STACK_LINE(575)
						tmp21 = false;
					}
					HX_STACK_LINE(575)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(575)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(575)
					if ((tmp22)){
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(575)
						::zpp_nape::phys::ZPP_Body tmp27 = tmp26->b3;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(575)
						::zpp_nape::phys::ZPP_Body tmp31 = tmp30->b1;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(575)
						tmp23 = (tmp27 != tmp31);
					}
					else{
						HX_STACK_LINE(575)
						tmp23 = false;
					}
					HX_STACK_LINE(575)
					bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(575)
					if ((tmp23)){
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = this->zpp_inner_zn;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(575)
						::zpp_nape::phys::ZPP_Body tmp27 = tmp26->b4;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(575)
						::zpp_nape::phys::ZPP_Body tmp30 = tmp29->b1;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(575)
						tmp24 = (tmp27 != tmp30);
					}
					else{
						HX_STACK_LINE(575)
						tmp24 = false;
					}
					HX_STACK_LINE(575)
					if ((tmp24)){
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = this->zpp_inner_zn;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(575)
						::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b1;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(575)
						bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(575)
						if ((tmp27)){
							HX_STACK_LINE(575)
							::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(575)
							::zpp_nape::util::ZNPList_ZPP_Constraint tmp29 = tmp28->b1->constraints;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(575)
							::zpp_nape::constraint::ZPP_Constraint tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(575)
							tmp29->remove(tmp30);
						}
					}
					HX_STACK_LINE(575)
					::zpp_nape::constraint::ZPP_Constraint tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(575)
					bool tmp26 = tmp25->active;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(575)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(575)
					if ((tmp26)){
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_Constraint tmp28 = this->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_Constraint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(575)
						::zpp_nape::space::ZPP_Space tmp30 = tmp29->space;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(575)
						bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(575)
						bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(575)
						::nape::space::Space tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(575)
						bool tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(575)
						if ((tmp34)){
							HX_STACK_LINE(575)
							tmp33 = null();
						}
						else{
							HX_STACK_LINE(575)
							::zpp_nape::constraint::ZPP_Constraint tmp35 = this->zpp_inner;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(575)
							::zpp_nape::constraint::ZPP_Constraint tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(575)
							::nape::space::Space tmp37 = tmp36->space->outer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(575)
							tmp33 = tmp37;
						}
						HX_STACK_LINE(575)
						tmp27 = (tmp33 != null());
					}
					else{
						HX_STACK_LINE(575)
						tmp27 = false;
					}
					HX_STACK_LINE(575)
					if ((tmp27)){
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(575)
						tmp28->b1->wake();
					}
				}
				HX_STACK_LINE(575)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(575)
				tmp15->b1 = inbody1;
				HX_STACK_LINE(575)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(575)
				::zpp_nape::space::ZPP_Space tmp17 = tmp16->space;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(575)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(575)
				::nape::space::Space tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(575)
				if ((tmp18)){
					HX_STACK_LINE(575)
					tmp19 = null();
				}
				else{
					HX_STACK_LINE(575)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(575)
					tmp19 = tmp20->space->outer;
				}
				HX_STACK_LINE(575)
				bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(575)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(575)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(575)
				if ((tmp21)){
					HX_STACK_LINE(575)
					tmp22 = (inbody1 != null());
				}
				else{
					HX_STACK_LINE(575)
					tmp22 = false;
				}
				HX_STACK_LINE(575)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(575)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(575)
				if ((tmp23)){
					HX_STACK_LINE(575)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = this->zpp_inner_zn;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(575)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(575)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(575)
					::zpp_nape::phys::ZPP_Body tmp28 = tmp27->b2;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(575)
					::zpp_nape::phys::ZPP_Body tmp29 = inbody1;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(575)
					tmp24 = (tmp28 != tmp29);
				}
				else{
					HX_STACK_LINE(575)
					tmp24 = false;
				}
				HX_STACK_LINE(575)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(575)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(575)
				if ((tmp25)){
					HX_STACK_LINE(575)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp27 = this->zpp_inner_zn;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(575)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(575)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(575)
					::zpp_nape::phys::ZPP_Body tmp30 = tmp29->b3;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(575)
					::zpp_nape::phys::ZPP_Body tmp31 = inbody1;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(575)
					tmp26 = (tmp30 != tmp31);
				}
				else{
					HX_STACK_LINE(575)
					tmp26 = false;
				}
				HX_STACK_LINE(575)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(575)
				if ((tmp26)){
					HX_STACK_LINE(575)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(575)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(575)
					::zpp_nape::phys::ZPP_Body tmp30 = tmp29->b4;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(575)
					::zpp_nape::phys::ZPP_Body tmp31 = inbody1;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(575)
					tmp27 = (tmp30 != tmp31);
				}
				else{
					HX_STACK_LINE(575)
					tmp27 = false;
				}
				HX_STACK_LINE(575)
				if ((tmp27)){
					HX_STACK_LINE(575)
					bool tmp28 = (inbody1 != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(575)
					if ((tmp28)){
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_Constraint tmp29 = this->zpp_inner;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(575)
						inbody1->constraints->add(tmp29);
					}
				}
				HX_STACK_LINE(575)
				::zpp_nape::constraint::ZPP_Constraint tmp28 = this->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(575)
				bool tmp29 = tmp28->active;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(575)
				bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(575)
				if ((tmp29)){
					HX_STACK_LINE(575)
					::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(575)
					::zpp_nape::constraint::ZPP_Constraint tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(575)
					::zpp_nape::space::ZPP_Space tmp33 = tmp32->space;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(575)
					bool tmp34 = (tmp33 == null());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(575)
					bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(575)
					::nape::space::Space tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(575)
					bool tmp37 = tmp35;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(575)
					if ((tmp37)){
						HX_STACK_LINE(575)
						tmp36 = null();
					}
					else{
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_Constraint tmp38 = this->zpp_inner;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(575)
						::zpp_nape::constraint::ZPP_Constraint tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(575)
						::nape::space::Space tmp40 = tmp39->space->outer;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(575)
						tmp36 = tmp40;
					}
					HX_STACK_LINE(575)
					tmp30 = (tmp36 != null());
				}
				else{
					HX_STACK_LINE(575)
					tmp30 = false;
				}
				HX_STACK_LINE(575)
				if ((tmp30)){
					HX_STACK_LINE(575)
					::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(575)
					tmp31->wake();
					HX_STACK_LINE(575)
					bool tmp32 = (inbody1 != null());		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(575)
					if ((tmp32)){
						HX_STACK_LINE(575)
						inbody1->wake();
					}
				}
			}
		}
		HX_STACK_LINE(575)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(575)
		::zpp_nape::phys::ZPP_Body tmp5 = tmp4->b1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(575)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(575)
		if ((tmp6)){
			HX_STACK_LINE(575)
			Dynamic();
		}
		else{
			HX_STACK_LINE(575)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(575)
			tmp7->b1->outer;
		}
	}
	HX_STACK_LINE(576)
	{
		HX_STACK_LINE(576)
		{
			HX_STACK_LINE(576)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(576)
			::String tmp5 = HX_HCSTRING("Constraint::body2","\xb3","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(576)
			tmp4->immutable_midstep(tmp5);
			HX_STACK_LINE(576)
			bool tmp6 = (body2 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(576)
			::zpp_nape::phys::ZPP_Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(576)
			if ((tmp6)){
				HX_STACK_LINE(576)
				tmp7 = null();
			}
			else{
				HX_STACK_LINE(576)
				tmp7 = body2->zpp_inner;
			}
			HX_STACK_LINE(576)
			::zpp_nape::phys::ZPP_Body inbody2 = tmp7;		HX_STACK_VAR(inbody2,"inbody2");
			HX_STACK_LINE(576)
			::zpp_nape::phys::ZPP_Body tmp8 = inbody2;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(576)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(576)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9->b2;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(576)
			bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(576)
			if ((tmp11)){
				HX_STACK_LINE(576)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp12 = this->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(576)
				::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b2;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(576)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(576)
				if ((tmp14)){
					HX_STACK_LINE(576)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(576)
					::zpp_nape::space::ZPP_Space tmp16 = tmp15->space;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(576)
					bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(576)
					::nape::space::Space tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(576)
					if ((tmp17)){
						HX_STACK_LINE(576)
						tmp18 = null();
					}
					else{
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_Constraint tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(576)
						tmp18 = tmp19->space->outer;
					}
					HX_STACK_LINE(576)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(576)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(576)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(576)
					if ((tmp20)){
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = this->zpp_inner_zn;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(576)
						::zpp_nape::phys::ZPP_Body tmp25 = tmp24->b1;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = this->zpp_inner_zn;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(576)
						::zpp_nape::phys::ZPP_Body tmp29 = tmp28->b2;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(576)
						tmp21 = (tmp25 != tmp29);
					}
					else{
						HX_STACK_LINE(576)
						tmp21 = false;
					}
					HX_STACK_LINE(576)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(576)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(576)
					if ((tmp22)){
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(576)
						::zpp_nape::phys::ZPP_Body tmp27 = tmp26->b3;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(576)
						::zpp_nape::phys::ZPP_Body tmp31 = tmp30->b2;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(576)
						tmp23 = (tmp27 != tmp31);
					}
					else{
						HX_STACK_LINE(576)
						tmp23 = false;
					}
					HX_STACK_LINE(576)
					bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(576)
					if ((tmp23)){
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = this->zpp_inner_zn;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(576)
						::zpp_nape::phys::ZPP_Body tmp27 = tmp26->b4;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(576)
						::zpp_nape::phys::ZPP_Body tmp30 = tmp29->b2;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(576)
						tmp24 = (tmp27 != tmp30);
					}
					else{
						HX_STACK_LINE(576)
						tmp24 = false;
					}
					HX_STACK_LINE(576)
					if ((tmp24)){
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = this->zpp_inner_zn;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(576)
						::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b2;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(576)
						bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(576)
						if ((tmp27)){
							HX_STACK_LINE(576)
							::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(576)
							::zpp_nape::util::ZNPList_ZPP_Constraint tmp29 = tmp28->b2->constraints;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(576)
							::zpp_nape::constraint::ZPP_Constraint tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(576)
							tmp29->remove(tmp30);
						}
					}
					HX_STACK_LINE(576)
					::zpp_nape::constraint::ZPP_Constraint tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(576)
					bool tmp26 = tmp25->active;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(576)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(576)
					if ((tmp26)){
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_Constraint tmp28 = this->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_Constraint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(576)
						::zpp_nape::space::ZPP_Space tmp30 = tmp29->space;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(576)
						bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(576)
						bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(576)
						::nape::space::Space tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(576)
						bool tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(576)
						if ((tmp34)){
							HX_STACK_LINE(576)
							tmp33 = null();
						}
						else{
							HX_STACK_LINE(576)
							::zpp_nape::constraint::ZPP_Constraint tmp35 = this->zpp_inner;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(576)
							::zpp_nape::constraint::ZPP_Constraint tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(576)
							::nape::space::Space tmp37 = tmp36->space->outer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(576)
							tmp33 = tmp37;
						}
						HX_STACK_LINE(576)
						tmp27 = (tmp33 != null());
					}
					else{
						HX_STACK_LINE(576)
						tmp27 = false;
					}
					HX_STACK_LINE(576)
					if ((tmp27)){
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(576)
						tmp28->b2->wake();
					}
				}
				HX_STACK_LINE(576)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(576)
				tmp15->b2 = inbody2;
				HX_STACK_LINE(576)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(576)
				::zpp_nape::space::ZPP_Space tmp17 = tmp16->space;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(576)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(576)
				::nape::space::Space tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(576)
				if ((tmp18)){
					HX_STACK_LINE(576)
					tmp19 = null();
				}
				else{
					HX_STACK_LINE(576)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(576)
					tmp19 = tmp20->space->outer;
				}
				HX_STACK_LINE(576)
				bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(576)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(576)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(576)
				if ((tmp21)){
					HX_STACK_LINE(576)
					tmp22 = (inbody2 != null());
				}
				else{
					HX_STACK_LINE(576)
					tmp22 = false;
				}
				HX_STACK_LINE(576)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(576)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(576)
				if ((tmp23)){
					HX_STACK_LINE(576)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = this->zpp_inner_zn;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(576)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(576)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(576)
					::zpp_nape::phys::ZPP_Body tmp28 = tmp27->b1;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(576)
					::zpp_nape::phys::ZPP_Body tmp29 = inbody2;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(576)
					tmp24 = (tmp28 != tmp29);
				}
				else{
					HX_STACK_LINE(576)
					tmp24 = false;
				}
				HX_STACK_LINE(576)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(576)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(576)
				if ((tmp25)){
					HX_STACK_LINE(576)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp27 = this->zpp_inner_zn;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(576)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(576)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(576)
					::zpp_nape::phys::ZPP_Body tmp30 = tmp29->b3;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(576)
					::zpp_nape::phys::ZPP_Body tmp31 = inbody2;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(576)
					tmp26 = (tmp30 != tmp31);
				}
				else{
					HX_STACK_LINE(576)
					tmp26 = false;
				}
				HX_STACK_LINE(576)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(576)
				if ((tmp26)){
					HX_STACK_LINE(576)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(576)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(576)
					::zpp_nape::phys::ZPP_Body tmp30 = tmp29->b4;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(576)
					::zpp_nape::phys::ZPP_Body tmp31 = inbody2;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(576)
					tmp27 = (tmp30 != tmp31);
				}
				else{
					HX_STACK_LINE(576)
					tmp27 = false;
				}
				HX_STACK_LINE(576)
				if ((tmp27)){
					HX_STACK_LINE(576)
					bool tmp28 = (inbody2 != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(576)
					if ((tmp28)){
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_Constraint tmp29 = this->zpp_inner;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(576)
						inbody2->constraints->add(tmp29);
					}
				}
				HX_STACK_LINE(576)
				::zpp_nape::constraint::ZPP_Constraint tmp28 = this->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(576)
				bool tmp29 = tmp28->active;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(576)
				bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(576)
				if ((tmp29)){
					HX_STACK_LINE(576)
					::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(576)
					::zpp_nape::constraint::ZPP_Constraint tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(576)
					::zpp_nape::space::ZPP_Space tmp33 = tmp32->space;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(576)
					bool tmp34 = (tmp33 == null());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(576)
					bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(576)
					::nape::space::Space tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(576)
					bool tmp37 = tmp35;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(576)
					if ((tmp37)){
						HX_STACK_LINE(576)
						tmp36 = null();
					}
					else{
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_Constraint tmp38 = this->zpp_inner;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(576)
						::zpp_nape::constraint::ZPP_Constraint tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(576)
						::nape::space::Space tmp40 = tmp39->space->outer;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(576)
						tmp36 = tmp40;
					}
					HX_STACK_LINE(576)
					tmp30 = (tmp36 != null());
				}
				else{
					HX_STACK_LINE(576)
					tmp30 = false;
				}
				HX_STACK_LINE(576)
				if ((tmp30)){
					HX_STACK_LINE(576)
					::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(576)
					tmp31->wake();
					HX_STACK_LINE(576)
					bool tmp32 = (inbody2 != null());		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(576)
					if ((tmp32)){
						HX_STACK_LINE(576)
						inbody2->wake();
					}
				}
			}
		}
		HX_STACK_LINE(576)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(576)
		::zpp_nape::phys::ZPP_Body tmp5 = tmp4->b2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(576)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(576)
		if ((tmp6)){
			HX_STACK_LINE(576)
			Dynamic();
		}
		else{
			HX_STACK_LINE(576)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(576)
			tmp7->b2->outer;
		}
	}
	HX_STACK_LINE(577)
	{
		HX_STACK_LINE(577)
		{
			HX_STACK_LINE(577)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(577)
			::String tmp5 = HX_HCSTRING("Constraint::body3","\xb4","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(577)
			tmp4->immutable_midstep(tmp5);
			HX_STACK_LINE(577)
			bool tmp6 = (body3 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(577)
			::zpp_nape::phys::ZPP_Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(577)
			if ((tmp6)){
				HX_STACK_LINE(577)
				tmp7 = null();
			}
			else{
				HX_STACK_LINE(577)
				tmp7 = body3->zpp_inner;
			}
			HX_STACK_LINE(577)
			::zpp_nape::phys::ZPP_Body inbody3 = tmp7;		HX_STACK_VAR(inbody3,"inbody3");
			HX_STACK_LINE(577)
			::zpp_nape::phys::ZPP_Body tmp8 = inbody3;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(577)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(577)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9->b3;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(577)
			bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(577)
			if ((tmp11)){
				HX_STACK_LINE(577)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp12 = this->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(577)
				::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b3;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(577)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(577)
				if ((tmp14)){
					HX_STACK_LINE(577)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(577)
					::zpp_nape::space::ZPP_Space tmp16 = tmp15->space;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(577)
					bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(577)
					::nape::space::Space tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(577)
					if ((tmp17)){
						HX_STACK_LINE(577)
						tmp18 = null();
					}
					else{
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_Constraint tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(577)
						tmp18 = tmp19->space->outer;
					}
					HX_STACK_LINE(577)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(577)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(577)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(577)
					if ((tmp20)){
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = this->zpp_inner_zn;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(577)
						::zpp_nape::phys::ZPP_Body tmp25 = tmp24->b1;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = this->zpp_inner_zn;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(577)
						::zpp_nape::phys::ZPP_Body tmp29 = tmp28->b3;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(577)
						tmp21 = (tmp25 != tmp29);
					}
					else{
						HX_STACK_LINE(577)
						tmp21 = false;
					}
					HX_STACK_LINE(577)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(577)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(577)
					if ((tmp22)){
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(577)
						::zpp_nape::phys::ZPP_Body tmp27 = tmp26->b2;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(577)
						::zpp_nape::phys::ZPP_Body tmp31 = tmp30->b3;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(577)
						tmp23 = (tmp27 != tmp31);
					}
					else{
						HX_STACK_LINE(577)
						tmp23 = false;
					}
					HX_STACK_LINE(577)
					bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(577)
					if ((tmp23)){
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = this->zpp_inner_zn;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(577)
						::zpp_nape::phys::ZPP_Body tmp27 = tmp26->b4;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(577)
						::zpp_nape::phys::ZPP_Body tmp30 = tmp29->b3;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(577)
						tmp24 = (tmp27 != tmp30);
					}
					else{
						HX_STACK_LINE(577)
						tmp24 = false;
					}
					HX_STACK_LINE(577)
					if ((tmp24)){
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = this->zpp_inner_zn;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(577)
						::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b3;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(577)
						bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(577)
						if ((tmp27)){
							HX_STACK_LINE(577)
							::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(577)
							::zpp_nape::util::ZNPList_ZPP_Constraint tmp29 = tmp28->b3->constraints;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(577)
							::zpp_nape::constraint::ZPP_Constraint tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(577)
							tmp29->remove(tmp30);
						}
					}
					HX_STACK_LINE(577)
					::zpp_nape::constraint::ZPP_Constraint tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(577)
					bool tmp26 = tmp25->active;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(577)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(577)
					if ((tmp26)){
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_Constraint tmp28 = this->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_Constraint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(577)
						::zpp_nape::space::ZPP_Space tmp30 = tmp29->space;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(577)
						bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(577)
						bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(577)
						::nape::space::Space tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(577)
						bool tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(577)
						if ((tmp34)){
							HX_STACK_LINE(577)
							tmp33 = null();
						}
						else{
							HX_STACK_LINE(577)
							::zpp_nape::constraint::ZPP_Constraint tmp35 = this->zpp_inner;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(577)
							::zpp_nape::constraint::ZPP_Constraint tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(577)
							::nape::space::Space tmp37 = tmp36->space->outer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(577)
							tmp33 = tmp37;
						}
						HX_STACK_LINE(577)
						tmp27 = (tmp33 != null());
					}
					else{
						HX_STACK_LINE(577)
						tmp27 = false;
					}
					HX_STACK_LINE(577)
					if ((tmp27)){
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(577)
						tmp28->b3->wake();
					}
				}
				HX_STACK_LINE(577)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(577)
				tmp15->b3 = inbody3;
				HX_STACK_LINE(577)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(577)
				::zpp_nape::space::ZPP_Space tmp17 = tmp16->space;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(577)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(577)
				::nape::space::Space tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(577)
				if ((tmp18)){
					HX_STACK_LINE(577)
					tmp19 = null();
				}
				else{
					HX_STACK_LINE(577)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(577)
					tmp19 = tmp20->space->outer;
				}
				HX_STACK_LINE(577)
				bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(577)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(577)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(577)
				if ((tmp21)){
					HX_STACK_LINE(577)
					tmp22 = (inbody3 != null());
				}
				else{
					HX_STACK_LINE(577)
					tmp22 = false;
				}
				HX_STACK_LINE(577)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(577)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(577)
				if ((tmp23)){
					HX_STACK_LINE(577)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = this->zpp_inner_zn;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(577)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(577)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(577)
					::zpp_nape::phys::ZPP_Body tmp28 = tmp27->b1;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(577)
					::zpp_nape::phys::ZPP_Body tmp29 = inbody3;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(577)
					tmp24 = (tmp28 != tmp29);
				}
				else{
					HX_STACK_LINE(577)
					tmp24 = false;
				}
				HX_STACK_LINE(577)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(577)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(577)
				if ((tmp25)){
					HX_STACK_LINE(577)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp27 = this->zpp_inner_zn;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(577)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(577)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(577)
					::zpp_nape::phys::ZPP_Body tmp30 = tmp29->b2;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(577)
					::zpp_nape::phys::ZPP_Body tmp31 = inbody3;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(577)
					tmp26 = (tmp30 != tmp31);
				}
				else{
					HX_STACK_LINE(577)
					tmp26 = false;
				}
				HX_STACK_LINE(577)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(577)
				if ((tmp26)){
					HX_STACK_LINE(577)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(577)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(577)
					::zpp_nape::phys::ZPP_Body tmp30 = tmp29->b4;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(577)
					::zpp_nape::phys::ZPP_Body tmp31 = inbody3;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(577)
					tmp27 = (tmp30 != tmp31);
				}
				else{
					HX_STACK_LINE(577)
					tmp27 = false;
				}
				HX_STACK_LINE(577)
				if ((tmp27)){
					HX_STACK_LINE(577)
					bool tmp28 = (inbody3 != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(577)
					if ((tmp28)){
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_Constraint tmp29 = this->zpp_inner;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(577)
						inbody3->constraints->add(tmp29);
					}
				}
				HX_STACK_LINE(577)
				::zpp_nape::constraint::ZPP_Constraint tmp28 = this->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(577)
				bool tmp29 = tmp28->active;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(577)
				bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(577)
				if ((tmp29)){
					HX_STACK_LINE(577)
					::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(577)
					::zpp_nape::constraint::ZPP_Constraint tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(577)
					::zpp_nape::space::ZPP_Space tmp33 = tmp32->space;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(577)
					bool tmp34 = (tmp33 == null());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(577)
					bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(577)
					::nape::space::Space tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(577)
					bool tmp37 = tmp35;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(577)
					if ((tmp37)){
						HX_STACK_LINE(577)
						tmp36 = null();
					}
					else{
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_Constraint tmp38 = this->zpp_inner;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(577)
						::zpp_nape::constraint::ZPP_Constraint tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(577)
						::nape::space::Space tmp40 = tmp39->space->outer;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(577)
						tmp36 = tmp40;
					}
					HX_STACK_LINE(577)
					tmp30 = (tmp36 != null());
				}
				else{
					HX_STACK_LINE(577)
					tmp30 = false;
				}
				HX_STACK_LINE(577)
				if ((tmp30)){
					HX_STACK_LINE(577)
					::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(577)
					tmp31->wake();
					HX_STACK_LINE(577)
					bool tmp32 = (inbody3 != null());		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(577)
					if ((tmp32)){
						HX_STACK_LINE(577)
						inbody3->wake();
					}
				}
			}
		}
		HX_STACK_LINE(577)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(577)
		::zpp_nape::phys::ZPP_Body tmp5 = tmp4->b3;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(577)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(577)
		if ((tmp6)){
			HX_STACK_LINE(577)
			Dynamic();
		}
		else{
			HX_STACK_LINE(577)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(577)
			tmp7->b3->outer;
		}
	}
	HX_STACK_LINE(578)
	{
		HX_STACK_LINE(578)
		{
			HX_STACK_LINE(578)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(578)
			::String tmp5 = HX_HCSTRING("Constraint::body4","\xb5","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(578)
			tmp4->immutable_midstep(tmp5);
			HX_STACK_LINE(578)
			bool tmp6 = (body4 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(578)
			::zpp_nape::phys::ZPP_Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(578)
			if ((tmp6)){
				HX_STACK_LINE(578)
				tmp7 = null();
			}
			else{
				HX_STACK_LINE(578)
				tmp7 = body4->zpp_inner;
			}
			HX_STACK_LINE(578)
			::zpp_nape::phys::ZPP_Body inbody4 = tmp7;		HX_STACK_VAR(inbody4,"inbody4");
			HX_STACK_LINE(578)
			::zpp_nape::phys::ZPP_Body tmp8 = inbody4;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(578)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(578)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9->b4;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(578)
			bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(578)
			if ((tmp11)){
				HX_STACK_LINE(578)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp12 = this->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(578)
				::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b4;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(578)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(578)
				if ((tmp14)){
					HX_STACK_LINE(578)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(578)
					::zpp_nape::space::ZPP_Space tmp16 = tmp15->space;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(578)
					bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(578)
					::nape::space::Space tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(578)
					if ((tmp17)){
						HX_STACK_LINE(578)
						tmp18 = null();
					}
					else{
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_Constraint tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(578)
						tmp18 = tmp19->space->outer;
					}
					HX_STACK_LINE(578)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(578)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(578)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(578)
					if ((tmp20)){
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = this->zpp_inner_zn;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(578)
						::zpp_nape::phys::ZPP_Body tmp25 = tmp24->b1;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = this->zpp_inner_zn;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(578)
						::zpp_nape::phys::ZPP_Body tmp29 = tmp28->b4;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(578)
						tmp21 = (tmp25 != tmp29);
					}
					else{
						HX_STACK_LINE(578)
						tmp21 = false;
					}
					HX_STACK_LINE(578)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(578)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(578)
					if ((tmp22)){
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(578)
						::zpp_nape::phys::ZPP_Body tmp27 = tmp26->b2;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(578)
						::zpp_nape::phys::ZPP_Body tmp31 = tmp30->b4;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(578)
						tmp23 = (tmp27 != tmp31);
					}
					else{
						HX_STACK_LINE(578)
						tmp23 = false;
					}
					HX_STACK_LINE(578)
					bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(578)
					if ((tmp23)){
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = this->zpp_inner_zn;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(578)
						::zpp_nape::phys::ZPP_Body tmp27 = tmp26->b3;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(578)
						::zpp_nape::phys::ZPP_Body tmp30 = tmp29->b4;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(578)
						tmp24 = (tmp27 != tmp30);
					}
					else{
						HX_STACK_LINE(578)
						tmp24 = false;
					}
					HX_STACK_LINE(578)
					if ((tmp24)){
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = this->zpp_inner_zn;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(578)
						::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b4;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(578)
						bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(578)
						if ((tmp27)){
							HX_STACK_LINE(578)
							::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(578)
							::zpp_nape::util::ZNPList_ZPP_Constraint tmp29 = tmp28->b4->constraints;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(578)
							::zpp_nape::constraint::ZPP_Constraint tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(578)
							tmp29->remove(tmp30);
						}
					}
					HX_STACK_LINE(578)
					::zpp_nape::constraint::ZPP_Constraint tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(578)
					bool tmp26 = tmp25->active;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(578)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(578)
					if ((tmp26)){
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_Constraint tmp28 = this->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_Constraint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(578)
						::zpp_nape::space::ZPP_Space tmp30 = tmp29->space;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(578)
						bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(578)
						bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(578)
						::nape::space::Space tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(578)
						bool tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(578)
						if ((tmp34)){
							HX_STACK_LINE(578)
							tmp33 = null();
						}
						else{
							HX_STACK_LINE(578)
							::zpp_nape::constraint::ZPP_Constraint tmp35 = this->zpp_inner;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(578)
							::zpp_nape::constraint::ZPP_Constraint tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(578)
							::nape::space::Space tmp37 = tmp36->space->outer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(578)
							tmp33 = tmp37;
						}
						HX_STACK_LINE(578)
						tmp27 = (tmp33 != null());
					}
					else{
						HX_STACK_LINE(578)
						tmp27 = false;
					}
					HX_STACK_LINE(578)
					if ((tmp27)){
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(578)
						tmp28->b4->wake();
					}
				}
				HX_STACK_LINE(578)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(578)
				tmp15->b4 = inbody4;
				HX_STACK_LINE(578)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(578)
				::zpp_nape::space::ZPP_Space tmp17 = tmp16->space;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(578)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(578)
				::nape::space::Space tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(578)
				if ((tmp18)){
					HX_STACK_LINE(578)
					tmp19 = null();
				}
				else{
					HX_STACK_LINE(578)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(578)
					tmp19 = tmp20->space->outer;
				}
				HX_STACK_LINE(578)
				bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(578)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(578)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(578)
				if ((tmp21)){
					HX_STACK_LINE(578)
					tmp22 = (inbody4 != null());
				}
				else{
					HX_STACK_LINE(578)
					tmp22 = false;
				}
				HX_STACK_LINE(578)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(578)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(578)
				if ((tmp23)){
					HX_STACK_LINE(578)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = this->zpp_inner_zn;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(578)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(578)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(578)
					::zpp_nape::phys::ZPP_Body tmp28 = tmp27->b1;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(578)
					::zpp_nape::phys::ZPP_Body tmp29 = inbody4;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(578)
					tmp24 = (tmp28 != tmp29);
				}
				else{
					HX_STACK_LINE(578)
					tmp24 = false;
				}
				HX_STACK_LINE(578)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(578)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(578)
				if ((tmp25)){
					HX_STACK_LINE(578)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp27 = this->zpp_inner_zn;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(578)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(578)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(578)
					::zpp_nape::phys::ZPP_Body tmp30 = tmp29->b2;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(578)
					::zpp_nape::phys::ZPP_Body tmp31 = inbody4;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(578)
					tmp26 = (tmp30 != tmp31);
				}
				else{
					HX_STACK_LINE(578)
					tmp26 = false;
				}
				HX_STACK_LINE(578)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(578)
				if ((tmp26)){
					HX_STACK_LINE(578)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(578)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(578)
					::zpp_nape::phys::ZPP_Body tmp30 = tmp29->b3;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(578)
					::zpp_nape::phys::ZPP_Body tmp31 = inbody4;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(578)
					tmp27 = (tmp30 != tmp31);
				}
				else{
					HX_STACK_LINE(578)
					tmp27 = false;
				}
				HX_STACK_LINE(578)
				if ((tmp27)){
					HX_STACK_LINE(578)
					bool tmp28 = (inbody4 != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(578)
					if ((tmp28)){
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_Constraint tmp29 = this->zpp_inner;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(578)
						inbody4->constraints->add(tmp29);
					}
				}
				HX_STACK_LINE(578)
				::zpp_nape::constraint::ZPP_Constraint tmp28 = this->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(578)
				bool tmp29 = tmp28->active;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(578)
				bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(578)
				if ((tmp29)){
					HX_STACK_LINE(578)
					::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(578)
					::zpp_nape::constraint::ZPP_Constraint tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(578)
					::zpp_nape::space::ZPP_Space tmp33 = tmp32->space;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(578)
					bool tmp34 = (tmp33 == null());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(578)
					bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(578)
					::nape::space::Space tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(578)
					bool tmp37 = tmp35;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(578)
					if ((tmp37)){
						HX_STACK_LINE(578)
						tmp36 = null();
					}
					else{
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_Constraint tmp38 = this->zpp_inner;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(578)
						::zpp_nape::constraint::ZPP_Constraint tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(578)
						::nape::space::Space tmp40 = tmp39->space->outer;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(578)
						tmp36 = tmp40;
					}
					HX_STACK_LINE(578)
					tmp30 = (tmp36 != null());
				}
				else{
					HX_STACK_LINE(578)
					tmp30 = false;
				}
				HX_STACK_LINE(578)
				if ((tmp30)){
					HX_STACK_LINE(578)
					::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(578)
					tmp31->wake();
					HX_STACK_LINE(578)
					bool tmp32 = (inbody4 != null());		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(578)
					if ((tmp32)){
						HX_STACK_LINE(578)
						inbody4->wake();
					}
				}
			}
		}
		HX_STACK_LINE(578)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(578)
		::zpp_nape::phys::ZPP_Body tmp5 = tmp4->b4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(578)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(578)
		if ((tmp6)){
			HX_STACK_LINE(578)
			Dynamic();
		}
		else{
			HX_STACK_LINE(578)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(578)
			tmp7->b4->outer;
		}
	}
	HX_STACK_LINE(579)
	{
		HX_STACK_LINE(579)
		{
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				bool tmp4 = (anchor1 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(579)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(579)
				if ((tmp4)){
					HX_STACK_LINE(579)
					tmp5 = anchor1->zpp_disp;
				}
				else{
					HX_STACK_LINE(579)
					tmp5 = false;
				}
				HX_STACK_LINE(579)
				if ((tmp5)){
					HX_STACK_LINE(579)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(579)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(579)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(579)
			bool tmp4 = (anchor1 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(579)
			if ((tmp4)){
				HX_STACK_LINE(579)
				::String tmp5 = HX_HCSTRING("Error: Constraint::anchor1","\xb1","\x15","\x18","\x54");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(579)
				::String tmp6 = (tmp5 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(579)
				HX_STACK_DO_THROW(tmp6);
			}
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(579)
				{
					HX_STACK_LINE(579)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(579)
					::nape::geom::Vec2 tmp7 = tmp6->wrap_a1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(579)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(579)
					if ((tmp8)){
						HX_STACK_LINE(579)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(579)
						tmp9->setup_a1();
					}
					HX_STACK_LINE(579)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(579)
					tmp5 = tmp9->wrap_a1;
				}
				HX_STACK_LINE(579)
				::nape::geom::Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(579)
				{
					HX_STACK_LINE(579)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(579)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(579)
					if ((tmp6)){
						HX_STACK_LINE(579)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(579)
						tmp7 = false;
					}
					HX_STACK_LINE(579)
					if ((tmp7)){
						HX_STACK_LINE(579)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(579)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(579)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(579)
				{
					HX_STACK_LINE(579)
					bool tmp6 = (anchor1 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(579)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(579)
					if ((tmp6)){
						HX_STACK_LINE(579)
						tmp7 = anchor1->zpp_disp;
					}
					else{
						HX_STACK_LINE(579)
						tmp7 = false;
					}
					HX_STACK_LINE(579)
					if ((tmp7)){
						HX_STACK_LINE(579)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(579)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(579)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(579)
				{
					HX_STACK_LINE(579)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(579)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(579)
					if ((tmp6)){
						HX_STACK_LINE(579)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(579)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(579)
					if ((tmp7)){
						HX_STACK_LINE(579)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(579)
				bool tmp6 = (anchor1 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(579)
				if ((tmp6)){
					HX_STACK_LINE(579)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
				}
				HX_STACK_LINE(579)
				::nape::geom::Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(579)
				{
					HX_STACK_LINE(579)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(579)
					{
						HX_STACK_LINE(579)
						bool tmp9 = (anchor1 != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(579)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(579)
						if ((tmp9)){
							HX_STACK_LINE(579)
							tmp10 = anchor1->zpp_disp;
						}
						else{
							HX_STACK_LINE(579)
							tmp10 = false;
						}
						HX_STACK_LINE(579)
						if ((tmp10)){
							HX_STACK_LINE(579)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(579)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(579)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(579)
						{
							HX_STACK_LINE(579)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(579)
							bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(579)
							if ((tmp11)){
								HX_STACK_LINE(579)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(579)
						tmp8 = anchor1->zpp_inner->x;
					}
					HX_STACK_LINE(579)
					Float x = tmp8;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(579)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(579)
					{
						HX_STACK_LINE(579)
						bool tmp10 = (anchor1 != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(579)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(579)
						if ((tmp10)){
							HX_STACK_LINE(579)
							tmp11 = anchor1->zpp_disp;
						}
						else{
							HX_STACK_LINE(579)
							tmp11 = false;
						}
						HX_STACK_LINE(579)
						if ((tmp11)){
							HX_STACK_LINE(579)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(579)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(579)
							HX_STACK_DO_THROW(tmp13);
						}
						HX_STACK_LINE(579)
						{
							HX_STACK_LINE(579)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(579)
							bool tmp12 = (_this1->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(579)
							if ((tmp12)){
								HX_STACK_LINE(579)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(579)
						tmp9 = anchor1->zpp_inner->y;
					}
					HX_STACK_LINE(579)
					Float y = tmp9;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(579)
					{
						HX_STACK_LINE(579)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(579)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(579)
						if ((tmp10)){
							HX_STACK_LINE(579)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(579)
							tmp11 = false;
						}
						HX_STACK_LINE(579)
						if ((tmp11)){
							HX_STACK_LINE(579)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(579)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(579)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(579)
					{
						HX_STACK_LINE(579)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(579)
						bool tmp10 = _this1->_immutable;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(579)
						if ((tmp10)){
							HX_STACK_LINE(579)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(579)
						bool tmp11 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(579)
						if ((tmp11)){
							HX_STACK_LINE(579)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(579)
					bool tmp10 = (x != x);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(579)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(579)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(579)
					if ((tmp11)){
						HX_STACK_LINE(579)
						tmp12 = (y != y);
					}
					else{
						HX_STACK_LINE(579)
						tmp12 = true;
					}
					HX_STACK_LINE(579)
					if ((tmp12)){
						HX_STACK_LINE(579)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(579)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(579)
					{
						HX_STACK_LINE(579)
						{
							HX_STACK_LINE(579)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(579)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(579)
							if ((tmp14)){
								HX_STACK_LINE(579)
								tmp15 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(579)
								tmp15 = false;
							}
							HX_STACK_LINE(579)
							if ((tmp15)){
								HX_STACK_LINE(579)
								::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(579)
								::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(579)
								HX_STACK_DO_THROW(tmp17);
							}
						}
						HX_STACK_LINE(579)
						{
							HX_STACK_LINE(579)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(579)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(579)
							if ((tmp14)){
								HX_STACK_LINE(579)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(579)
						tmp13 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(579)
					Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(579)
					bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(579)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(579)
					if ((tmp15)){
						HX_STACK_LINE(579)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(579)
						{
							HX_STACK_LINE(579)
							{
								HX_STACK_LINE(579)
								bool tmp18 = (_this != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(579)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(579)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(579)
								bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(579)
								if ((tmp21)){
									HX_STACK_LINE(579)
									tmp20 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(579)
									tmp20 = false;
								}
								HX_STACK_LINE(579)
								bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(579)
								if ((tmp22)){
									HX_STACK_LINE(579)
									::String tmp23 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(579)
									::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(579)
									::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(579)
									::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(579)
									::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(579)
									HX_STACK_DO_THROW(tmp27);
								}
							}
							HX_STACK_LINE(579)
							{
								HX_STACK_LINE(579)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(579)
								bool tmp18 = (_this1->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(579)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(579)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(579)
								if ((tmp20)){
									HX_STACK_LINE(579)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(579)
							Float tmp18 = _this->zpp_inner->y;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(579)
							tmp17 = tmp18;
						}
						HX_STACK_LINE(579)
						Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(579)
						tmp16 = (tmp17 == tmp18);
					}
					else{
						HX_STACK_LINE(579)
						tmp16 = false;
					}
					HX_STACK_LINE(579)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(579)
					if ((tmp17)){
						HX_STACK_LINE(579)
						{
							HX_STACK_LINE(579)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(579)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(579)
							{
							}
						}
						HX_STACK_LINE(579)
						{
							HX_STACK_LINE(579)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(579)
							bool tmp18 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(579)
							if ((tmp18)){
								HX_STACK_LINE(579)
								::zpp_nape::geom::ZPP_Vec2 tmp19 = _this1;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(579)
								_this1->_invalidate(tmp19);
							}
						}
					}
					HX_STACK_LINE(579)
					tmp7 = _this;
				}
				HX_STACK_LINE(579)
				::nape::geom::Vec2 ret = tmp7;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(579)
				{
					HX_STACK_LINE(579)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(579)
					tmp8 = anchor1->zpp_inner->weak;
					HX_STACK_LINE(579)
					if ((tmp8)){
						HX_STACK_LINE(579)
						{
							HX_STACK_LINE(579)
							{
								HX_STACK_LINE(579)
								bool tmp9 = (anchor1 != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(579)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(579)
								if ((tmp9)){
									HX_STACK_LINE(579)
									tmp10 = anchor1->zpp_disp;
								}
								else{
									HX_STACK_LINE(579)
									tmp10 = false;
								}
								HX_STACK_LINE(579)
								if ((tmp10)){
									HX_STACK_LINE(579)
									::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(579)
									::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(579)
									HX_STACK_DO_THROW(tmp12);
								}
							}
							HX_STACK_LINE(579)
							{
								HX_STACK_LINE(579)
								::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(579)
								bool tmp9 = _this1->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(579)
								if ((tmp9)){
									HX_STACK_LINE(579)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
								}
								HX_STACK_LINE(579)
								bool tmp10 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(579)
								if ((tmp10)){
									HX_STACK_LINE(579)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(579)
							bool tmp9 = anchor1->zpp_inner->_inuse;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(579)
							if ((tmp9)){
								HX_STACK_LINE(579)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
							}
							HX_STACK_LINE(579)
							::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(579)
							anchor1->zpp_inner->outer = null();
							HX_STACK_LINE(579)
							anchor1->zpp_inner = null();
							HX_STACK_LINE(579)
							{
								HX_STACK_LINE(579)
								::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(579)
								o->zpp_pool = null();
								HX_STACK_LINE(579)
								::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(579)
								bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(579)
								if ((tmp11)){
									HX_STACK_LINE(579)
									::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(579)
									tmp12->zpp_pool = o;
								}
								else{
									HX_STACK_LINE(579)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(579)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
								HX_STACK_LINE(579)
								o->zpp_disp = true;
							}
							HX_STACK_LINE(579)
							{
								HX_STACK_LINE(579)
								::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(579)
								{
									HX_STACK_LINE(579)
									bool tmp10 = (o->outer != null());		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(579)
									if ((tmp10)){
										HX_STACK_LINE(579)
										o->outer->zpp_inner = null();
										HX_STACK_LINE(579)
										o->outer = null();
									}
									HX_STACK_LINE(579)
									o->_isimmutable = null();
									HX_STACK_LINE(579)
									o->_validate = null();
									HX_STACK_LINE(579)
									o->_invalidate = null();
								}
								HX_STACK_LINE(579)
								::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(579)
								o->next = tmp10;
								HX_STACK_LINE(579)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
							}
						}
						HX_STACK_LINE(579)
						true;
					}
					else{
						HX_STACK_LINE(579)
						false;
					}
				}
				HX_STACK_LINE(579)
				ret;
			}
		}
		HX_STACK_LINE(579)
		{
			HX_STACK_LINE(579)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(579)
			::nape::geom::Vec2 tmp5 = tmp4->wrap_a1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(579)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(579)
			if ((tmp6)){
				HX_STACK_LINE(579)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(579)
				tmp7->setup_a1();
			}
			HX_STACK_LINE(579)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(579)
			tmp7->wrap_a1;
		}
	}
	HX_STACK_LINE(580)
	{
		HX_STACK_LINE(580)
		{
			HX_STACK_LINE(580)
			{
				HX_STACK_LINE(580)
				bool tmp4 = (anchor2 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(580)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(580)
				if ((tmp4)){
					HX_STACK_LINE(580)
					tmp5 = anchor2->zpp_disp;
				}
				else{
					HX_STACK_LINE(580)
					tmp5 = false;
				}
				HX_STACK_LINE(580)
				if ((tmp5)){
					HX_STACK_LINE(580)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(580)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(580)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(580)
			bool tmp4 = (anchor2 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(580)
			if ((tmp4)){
				HX_STACK_LINE(580)
				::String tmp5 = HX_HCSTRING("Error: Constraint::anchor2","\xb2","\x15","\x18","\x54");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(580)
				::String tmp6 = (tmp5 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(580)
				HX_STACK_DO_THROW(tmp6);
			}
			HX_STACK_LINE(580)
			{
				HX_STACK_LINE(580)
				::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(580)
				{
					HX_STACK_LINE(580)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(580)
					::nape::geom::Vec2 tmp7 = tmp6->wrap_a2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(580)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(580)
					if ((tmp8)){
						HX_STACK_LINE(580)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(580)
						tmp9->setup_a2();
					}
					HX_STACK_LINE(580)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(580)
					tmp5 = tmp9->wrap_a2;
				}
				HX_STACK_LINE(580)
				::nape::geom::Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(580)
				{
					HX_STACK_LINE(580)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(580)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(580)
					if ((tmp6)){
						HX_STACK_LINE(580)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(580)
						tmp7 = false;
					}
					HX_STACK_LINE(580)
					if ((tmp7)){
						HX_STACK_LINE(580)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(580)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(580)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(580)
				{
					HX_STACK_LINE(580)
					bool tmp6 = (anchor2 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(580)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(580)
					if ((tmp6)){
						HX_STACK_LINE(580)
						tmp7 = anchor2->zpp_disp;
					}
					else{
						HX_STACK_LINE(580)
						tmp7 = false;
					}
					HX_STACK_LINE(580)
					if ((tmp7)){
						HX_STACK_LINE(580)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(580)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(580)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(580)
				{
					HX_STACK_LINE(580)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(580)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(580)
					if ((tmp6)){
						HX_STACK_LINE(580)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(580)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(580)
					if ((tmp7)){
						HX_STACK_LINE(580)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(580)
				bool tmp6 = (anchor2 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(580)
				if ((tmp6)){
					HX_STACK_LINE(580)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
				}
				HX_STACK_LINE(580)
				::nape::geom::Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(580)
				{
					HX_STACK_LINE(580)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(580)
					{
						HX_STACK_LINE(580)
						bool tmp9 = (anchor2 != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(580)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(580)
						if ((tmp9)){
							HX_STACK_LINE(580)
							tmp10 = anchor2->zpp_disp;
						}
						else{
							HX_STACK_LINE(580)
							tmp10 = false;
						}
						HX_STACK_LINE(580)
						if ((tmp10)){
							HX_STACK_LINE(580)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(580)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(580)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(580)
						{
							HX_STACK_LINE(580)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(580)
							bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(580)
							if ((tmp11)){
								HX_STACK_LINE(580)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(580)
						tmp8 = anchor2->zpp_inner->x;
					}
					HX_STACK_LINE(580)
					Float x = tmp8;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(580)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(580)
					{
						HX_STACK_LINE(580)
						bool tmp10 = (anchor2 != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(580)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(580)
						if ((tmp10)){
							HX_STACK_LINE(580)
							tmp11 = anchor2->zpp_disp;
						}
						else{
							HX_STACK_LINE(580)
							tmp11 = false;
						}
						HX_STACK_LINE(580)
						if ((tmp11)){
							HX_STACK_LINE(580)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(580)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(580)
							HX_STACK_DO_THROW(tmp13);
						}
						HX_STACK_LINE(580)
						{
							HX_STACK_LINE(580)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(580)
							bool tmp12 = (_this1->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(580)
							if ((tmp12)){
								HX_STACK_LINE(580)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(580)
						tmp9 = anchor2->zpp_inner->y;
					}
					HX_STACK_LINE(580)
					Float y = tmp9;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(580)
					{
						HX_STACK_LINE(580)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(580)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(580)
						if ((tmp10)){
							HX_STACK_LINE(580)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(580)
							tmp11 = false;
						}
						HX_STACK_LINE(580)
						if ((tmp11)){
							HX_STACK_LINE(580)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(580)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(580)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(580)
					{
						HX_STACK_LINE(580)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(580)
						bool tmp10 = _this1->_immutable;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(580)
						if ((tmp10)){
							HX_STACK_LINE(580)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(580)
						bool tmp11 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(580)
						if ((tmp11)){
							HX_STACK_LINE(580)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(580)
					bool tmp10 = (x != x);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(580)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(580)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(580)
					if ((tmp11)){
						HX_STACK_LINE(580)
						tmp12 = (y != y);
					}
					else{
						HX_STACK_LINE(580)
						tmp12 = true;
					}
					HX_STACK_LINE(580)
					if ((tmp12)){
						HX_STACK_LINE(580)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(580)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(580)
					{
						HX_STACK_LINE(580)
						{
							HX_STACK_LINE(580)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(580)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(580)
							if ((tmp14)){
								HX_STACK_LINE(580)
								tmp15 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(580)
								tmp15 = false;
							}
							HX_STACK_LINE(580)
							if ((tmp15)){
								HX_STACK_LINE(580)
								::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(580)
								::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(580)
								HX_STACK_DO_THROW(tmp17);
							}
						}
						HX_STACK_LINE(580)
						{
							HX_STACK_LINE(580)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(580)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(580)
							if ((tmp14)){
								HX_STACK_LINE(580)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(580)
						tmp13 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(580)
					Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(580)
					bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(580)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(580)
					if ((tmp15)){
						HX_STACK_LINE(580)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(580)
						{
							HX_STACK_LINE(580)
							{
								HX_STACK_LINE(580)
								bool tmp18 = (_this != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(580)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(580)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(580)
								bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(580)
								if ((tmp21)){
									HX_STACK_LINE(580)
									tmp20 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(580)
									tmp20 = false;
								}
								HX_STACK_LINE(580)
								bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(580)
								if ((tmp22)){
									HX_STACK_LINE(580)
									::String tmp23 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(580)
									::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(580)
									::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(580)
									::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(580)
									::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(580)
									HX_STACK_DO_THROW(tmp27);
								}
							}
							HX_STACK_LINE(580)
							{
								HX_STACK_LINE(580)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(580)
								bool tmp18 = (_this1->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(580)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(580)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(580)
								if ((tmp20)){
									HX_STACK_LINE(580)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(580)
							Float tmp18 = _this->zpp_inner->y;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(580)
							tmp17 = tmp18;
						}
						HX_STACK_LINE(580)
						Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(580)
						tmp16 = (tmp17 == tmp18);
					}
					else{
						HX_STACK_LINE(580)
						tmp16 = false;
					}
					HX_STACK_LINE(580)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(580)
					if ((tmp17)){
						HX_STACK_LINE(580)
						{
							HX_STACK_LINE(580)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(580)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(580)
							{
							}
						}
						HX_STACK_LINE(580)
						{
							HX_STACK_LINE(580)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(580)
							bool tmp18 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(580)
							if ((tmp18)){
								HX_STACK_LINE(580)
								::zpp_nape::geom::ZPP_Vec2 tmp19 = _this1;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(580)
								_this1->_invalidate(tmp19);
							}
						}
					}
					HX_STACK_LINE(580)
					tmp7 = _this;
				}
				HX_STACK_LINE(580)
				::nape::geom::Vec2 ret = tmp7;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(580)
				{
					HX_STACK_LINE(580)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(580)
					tmp8 = anchor2->zpp_inner->weak;
					HX_STACK_LINE(580)
					if ((tmp8)){
						HX_STACK_LINE(580)
						{
							HX_STACK_LINE(580)
							{
								HX_STACK_LINE(580)
								bool tmp9 = (anchor2 != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(580)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(580)
								if ((tmp9)){
									HX_STACK_LINE(580)
									tmp10 = anchor2->zpp_disp;
								}
								else{
									HX_STACK_LINE(580)
									tmp10 = false;
								}
								HX_STACK_LINE(580)
								if ((tmp10)){
									HX_STACK_LINE(580)
									::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(580)
									::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(580)
									HX_STACK_DO_THROW(tmp12);
								}
							}
							HX_STACK_LINE(580)
							{
								HX_STACK_LINE(580)
								::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(580)
								bool tmp9 = _this1->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(580)
								if ((tmp9)){
									HX_STACK_LINE(580)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
								}
								HX_STACK_LINE(580)
								bool tmp10 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(580)
								if ((tmp10)){
									HX_STACK_LINE(580)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(580)
							bool tmp9 = anchor2->zpp_inner->_inuse;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(580)
							if ((tmp9)){
								HX_STACK_LINE(580)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
							}
							HX_STACK_LINE(580)
							::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(580)
							anchor2->zpp_inner->outer = null();
							HX_STACK_LINE(580)
							anchor2->zpp_inner = null();
							HX_STACK_LINE(580)
							{
								HX_STACK_LINE(580)
								::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(580)
								o->zpp_pool = null();
								HX_STACK_LINE(580)
								::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(580)
								bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(580)
								if ((tmp11)){
									HX_STACK_LINE(580)
									::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(580)
									tmp12->zpp_pool = o;
								}
								else{
									HX_STACK_LINE(580)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(580)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
								HX_STACK_LINE(580)
								o->zpp_disp = true;
							}
							HX_STACK_LINE(580)
							{
								HX_STACK_LINE(580)
								::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(580)
								{
									HX_STACK_LINE(580)
									bool tmp10 = (o->outer != null());		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(580)
									if ((tmp10)){
										HX_STACK_LINE(580)
										o->outer->zpp_inner = null();
										HX_STACK_LINE(580)
										o->outer = null();
									}
									HX_STACK_LINE(580)
									o->_isimmutable = null();
									HX_STACK_LINE(580)
									o->_validate = null();
									HX_STACK_LINE(580)
									o->_invalidate = null();
								}
								HX_STACK_LINE(580)
								::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(580)
								o->next = tmp10;
								HX_STACK_LINE(580)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
							}
						}
						HX_STACK_LINE(580)
						true;
					}
					else{
						HX_STACK_LINE(580)
						false;
					}
				}
				HX_STACK_LINE(580)
				ret;
			}
		}
		HX_STACK_LINE(580)
		{
			HX_STACK_LINE(580)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(580)
			::nape::geom::Vec2 tmp5 = tmp4->wrap_a2;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(580)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(580)
			if ((tmp6)){
				HX_STACK_LINE(580)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(580)
				tmp7->setup_a2();
			}
			HX_STACK_LINE(580)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(580)
			tmp7->wrap_a2;
		}
	}
	HX_STACK_LINE(581)
	{
		HX_STACK_LINE(581)
		{
			HX_STACK_LINE(581)
			{
				HX_STACK_LINE(581)
				bool tmp4 = (anchor3 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(581)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(581)
				if ((tmp4)){
					HX_STACK_LINE(581)
					tmp5 = anchor3->zpp_disp;
				}
				else{
					HX_STACK_LINE(581)
					tmp5 = false;
				}
				HX_STACK_LINE(581)
				if ((tmp5)){
					HX_STACK_LINE(581)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(581)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(581)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(581)
			bool tmp4 = (anchor3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(581)
			if ((tmp4)){
				HX_STACK_LINE(581)
				::String tmp5 = HX_HCSTRING("Error: Constraint::anchor3","\xb3","\x15","\x18","\x54");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(581)
				::String tmp6 = (tmp5 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(581)
				HX_STACK_DO_THROW(tmp6);
			}
			HX_STACK_LINE(581)
			{
				HX_STACK_LINE(581)
				::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(581)
				{
					HX_STACK_LINE(581)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(581)
					::nape::geom::Vec2 tmp7 = tmp6->wrap_a3;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(581)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(581)
					if ((tmp8)){
						HX_STACK_LINE(581)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(581)
						tmp9->setup_a3();
					}
					HX_STACK_LINE(581)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(581)
					tmp5 = tmp9->wrap_a3;
				}
				HX_STACK_LINE(581)
				::nape::geom::Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(581)
				{
					HX_STACK_LINE(581)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(581)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(581)
					if ((tmp6)){
						HX_STACK_LINE(581)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(581)
						tmp7 = false;
					}
					HX_STACK_LINE(581)
					if ((tmp7)){
						HX_STACK_LINE(581)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(581)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(581)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(581)
				{
					HX_STACK_LINE(581)
					bool tmp6 = (anchor3 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(581)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(581)
					if ((tmp6)){
						HX_STACK_LINE(581)
						tmp7 = anchor3->zpp_disp;
					}
					else{
						HX_STACK_LINE(581)
						tmp7 = false;
					}
					HX_STACK_LINE(581)
					if ((tmp7)){
						HX_STACK_LINE(581)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(581)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(581)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(581)
				{
					HX_STACK_LINE(581)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(581)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(581)
					if ((tmp6)){
						HX_STACK_LINE(581)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(581)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(581)
					if ((tmp7)){
						HX_STACK_LINE(581)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(581)
				bool tmp6 = (anchor3 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(581)
				if ((tmp6)){
					HX_STACK_LINE(581)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
				}
				HX_STACK_LINE(581)
				::nape::geom::Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(581)
				{
					HX_STACK_LINE(581)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(581)
					{
						HX_STACK_LINE(581)
						bool tmp9 = (anchor3 != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(581)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(581)
						if ((tmp9)){
							HX_STACK_LINE(581)
							tmp10 = anchor3->zpp_disp;
						}
						else{
							HX_STACK_LINE(581)
							tmp10 = false;
						}
						HX_STACK_LINE(581)
						if ((tmp10)){
							HX_STACK_LINE(581)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(581)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(581)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(581)
						{
							HX_STACK_LINE(581)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor3->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(581)
							bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(581)
							if ((tmp11)){
								HX_STACK_LINE(581)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(581)
						tmp8 = anchor3->zpp_inner->x;
					}
					HX_STACK_LINE(581)
					Float x = tmp8;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(581)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(581)
					{
						HX_STACK_LINE(581)
						bool tmp10 = (anchor3 != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(581)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(581)
						if ((tmp10)){
							HX_STACK_LINE(581)
							tmp11 = anchor3->zpp_disp;
						}
						else{
							HX_STACK_LINE(581)
							tmp11 = false;
						}
						HX_STACK_LINE(581)
						if ((tmp11)){
							HX_STACK_LINE(581)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(581)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(581)
							HX_STACK_DO_THROW(tmp13);
						}
						HX_STACK_LINE(581)
						{
							HX_STACK_LINE(581)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor3->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(581)
							bool tmp12 = (_this1->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(581)
							if ((tmp12)){
								HX_STACK_LINE(581)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(581)
						tmp9 = anchor3->zpp_inner->y;
					}
					HX_STACK_LINE(581)
					Float y = tmp9;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(581)
					{
						HX_STACK_LINE(581)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(581)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(581)
						if ((tmp10)){
							HX_STACK_LINE(581)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(581)
							tmp11 = false;
						}
						HX_STACK_LINE(581)
						if ((tmp11)){
							HX_STACK_LINE(581)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(581)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(581)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(581)
					{
						HX_STACK_LINE(581)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(581)
						bool tmp10 = _this1->_immutable;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(581)
						if ((tmp10)){
							HX_STACK_LINE(581)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(581)
						bool tmp11 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(581)
						if ((tmp11)){
							HX_STACK_LINE(581)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(581)
					bool tmp10 = (x != x);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(581)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(581)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(581)
					if ((tmp11)){
						HX_STACK_LINE(581)
						tmp12 = (y != y);
					}
					else{
						HX_STACK_LINE(581)
						tmp12 = true;
					}
					HX_STACK_LINE(581)
					if ((tmp12)){
						HX_STACK_LINE(581)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(581)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(581)
					{
						HX_STACK_LINE(581)
						{
							HX_STACK_LINE(581)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(581)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(581)
							if ((tmp14)){
								HX_STACK_LINE(581)
								tmp15 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(581)
								tmp15 = false;
							}
							HX_STACK_LINE(581)
							if ((tmp15)){
								HX_STACK_LINE(581)
								::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(581)
								::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(581)
								HX_STACK_DO_THROW(tmp17);
							}
						}
						HX_STACK_LINE(581)
						{
							HX_STACK_LINE(581)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(581)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(581)
							if ((tmp14)){
								HX_STACK_LINE(581)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(581)
						tmp13 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(581)
					Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(581)
					bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(581)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(581)
					if ((tmp15)){
						HX_STACK_LINE(581)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(581)
						{
							HX_STACK_LINE(581)
							{
								HX_STACK_LINE(581)
								bool tmp18 = (_this != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(581)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(581)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(581)
								bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(581)
								if ((tmp21)){
									HX_STACK_LINE(581)
									tmp20 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(581)
									tmp20 = false;
								}
								HX_STACK_LINE(581)
								bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(581)
								if ((tmp22)){
									HX_STACK_LINE(581)
									::String tmp23 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(581)
									::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(581)
									::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(581)
									::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(581)
									::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(581)
									HX_STACK_DO_THROW(tmp27);
								}
							}
							HX_STACK_LINE(581)
							{
								HX_STACK_LINE(581)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(581)
								bool tmp18 = (_this1->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(581)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(581)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(581)
								if ((tmp20)){
									HX_STACK_LINE(581)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(581)
							Float tmp18 = _this->zpp_inner->y;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(581)
							tmp17 = tmp18;
						}
						HX_STACK_LINE(581)
						Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(581)
						tmp16 = (tmp17 == tmp18);
					}
					else{
						HX_STACK_LINE(581)
						tmp16 = false;
					}
					HX_STACK_LINE(581)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(581)
					if ((tmp17)){
						HX_STACK_LINE(581)
						{
							HX_STACK_LINE(581)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(581)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(581)
							{
							}
						}
						HX_STACK_LINE(581)
						{
							HX_STACK_LINE(581)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(581)
							bool tmp18 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(581)
							if ((tmp18)){
								HX_STACK_LINE(581)
								::zpp_nape::geom::ZPP_Vec2 tmp19 = _this1;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(581)
								_this1->_invalidate(tmp19);
							}
						}
					}
					HX_STACK_LINE(581)
					tmp7 = _this;
				}
				HX_STACK_LINE(581)
				::nape::geom::Vec2 ret = tmp7;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(581)
				{
					HX_STACK_LINE(581)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(581)
					tmp8 = anchor3->zpp_inner->weak;
					HX_STACK_LINE(581)
					if ((tmp8)){
						HX_STACK_LINE(581)
						{
							HX_STACK_LINE(581)
							{
								HX_STACK_LINE(581)
								bool tmp9 = (anchor3 != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(581)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(581)
								if ((tmp9)){
									HX_STACK_LINE(581)
									tmp10 = anchor3->zpp_disp;
								}
								else{
									HX_STACK_LINE(581)
									tmp10 = false;
								}
								HX_STACK_LINE(581)
								if ((tmp10)){
									HX_STACK_LINE(581)
									::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(581)
									::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(581)
									HX_STACK_DO_THROW(tmp12);
								}
							}
							HX_STACK_LINE(581)
							{
								HX_STACK_LINE(581)
								::zpp_nape::geom::ZPP_Vec2 _this1 = anchor3->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(581)
								bool tmp9 = _this1->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(581)
								if ((tmp9)){
									HX_STACK_LINE(581)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
								}
								HX_STACK_LINE(581)
								bool tmp10 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(581)
								if ((tmp10)){
									HX_STACK_LINE(581)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(581)
							bool tmp9 = anchor3->zpp_inner->_inuse;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(581)
							if ((tmp9)){
								HX_STACK_LINE(581)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
							}
							HX_STACK_LINE(581)
							::zpp_nape::geom::ZPP_Vec2 inner = anchor3->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(581)
							anchor3->zpp_inner->outer = null();
							HX_STACK_LINE(581)
							anchor3->zpp_inner = null();
							HX_STACK_LINE(581)
							{
								HX_STACK_LINE(581)
								::nape::geom::Vec2 o = anchor3;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(581)
								o->zpp_pool = null();
								HX_STACK_LINE(581)
								::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(581)
								bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(581)
								if ((tmp11)){
									HX_STACK_LINE(581)
									::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(581)
									tmp12->zpp_pool = o;
								}
								else{
									HX_STACK_LINE(581)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(581)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
								HX_STACK_LINE(581)
								o->zpp_disp = true;
							}
							HX_STACK_LINE(581)
							{
								HX_STACK_LINE(581)
								::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(581)
								{
									HX_STACK_LINE(581)
									bool tmp10 = (o->outer != null());		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(581)
									if ((tmp10)){
										HX_STACK_LINE(581)
										o->outer->zpp_inner = null();
										HX_STACK_LINE(581)
										o->outer = null();
									}
									HX_STACK_LINE(581)
									o->_isimmutable = null();
									HX_STACK_LINE(581)
									o->_validate = null();
									HX_STACK_LINE(581)
									o->_invalidate = null();
								}
								HX_STACK_LINE(581)
								::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(581)
								o->next = tmp10;
								HX_STACK_LINE(581)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
							}
						}
						HX_STACK_LINE(581)
						true;
					}
					else{
						HX_STACK_LINE(581)
						false;
					}
				}
				HX_STACK_LINE(581)
				ret;
			}
		}
		HX_STACK_LINE(581)
		{
			HX_STACK_LINE(581)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(581)
			::nape::geom::Vec2 tmp5 = tmp4->wrap_a3;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(581)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(581)
			if ((tmp6)){
				HX_STACK_LINE(581)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(581)
				tmp7->setup_a3();
			}
			HX_STACK_LINE(581)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(581)
			tmp7->wrap_a3;
		}
	}
	HX_STACK_LINE(582)
	{
		HX_STACK_LINE(582)
		{
			HX_STACK_LINE(582)
			{
				HX_STACK_LINE(582)
				bool tmp4 = (anchor4 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(582)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(582)
				if ((tmp4)){
					HX_STACK_LINE(582)
					tmp5 = anchor4->zpp_disp;
				}
				else{
					HX_STACK_LINE(582)
					tmp5 = false;
				}
				HX_STACK_LINE(582)
				if ((tmp5)){
					HX_STACK_LINE(582)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(582)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(582)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(582)
			bool tmp4 = (anchor4 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(582)
			if ((tmp4)){
				HX_STACK_LINE(582)
				::String tmp5 = HX_HCSTRING("Error: Constraint::anchor4","\xb4","\x15","\x18","\x54");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(582)
				::String tmp6 = (tmp5 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(582)
				HX_STACK_DO_THROW(tmp6);
			}
			HX_STACK_LINE(582)
			{
				HX_STACK_LINE(582)
				::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(582)
				{
					HX_STACK_LINE(582)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(582)
					::nape::geom::Vec2 tmp7 = tmp6->wrap_a4;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(582)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(582)
					if ((tmp8)){
						HX_STACK_LINE(582)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(582)
						tmp9->setup_a4();
					}
					HX_STACK_LINE(582)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(582)
					tmp5 = tmp9->wrap_a4;
				}
				HX_STACK_LINE(582)
				::nape::geom::Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(582)
				{
					HX_STACK_LINE(582)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(582)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(582)
					if ((tmp6)){
						HX_STACK_LINE(582)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(582)
						tmp7 = false;
					}
					HX_STACK_LINE(582)
					if ((tmp7)){
						HX_STACK_LINE(582)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(582)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(582)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(582)
				{
					HX_STACK_LINE(582)
					bool tmp6 = (anchor4 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(582)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(582)
					if ((tmp6)){
						HX_STACK_LINE(582)
						tmp7 = anchor4->zpp_disp;
					}
					else{
						HX_STACK_LINE(582)
						tmp7 = false;
					}
					HX_STACK_LINE(582)
					if ((tmp7)){
						HX_STACK_LINE(582)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(582)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(582)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(582)
				{
					HX_STACK_LINE(582)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(582)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(582)
					if ((tmp6)){
						HX_STACK_LINE(582)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(582)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(582)
					if ((tmp7)){
						HX_STACK_LINE(582)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(582)
				bool tmp6 = (anchor4 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(582)
				if ((tmp6)){
					HX_STACK_LINE(582)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
				}
				HX_STACK_LINE(582)
				::nape::geom::Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(582)
				{
					HX_STACK_LINE(582)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(582)
					{
						HX_STACK_LINE(582)
						bool tmp9 = (anchor4 != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(582)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(582)
						if ((tmp9)){
							HX_STACK_LINE(582)
							tmp10 = anchor4->zpp_disp;
						}
						else{
							HX_STACK_LINE(582)
							tmp10 = false;
						}
						HX_STACK_LINE(582)
						if ((tmp10)){
							HX_STACK_LINE(582)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(582)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(582)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(582)
						{
							HX_STACK_LINE(582)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor4->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(582)
							bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(582)
							if ((tmp11)){
								HX_STACK_LINE(582)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(582)
						tmp8 = anchor4->zpp_inner->x;
					}
					HX_STACK_LINE(582)
					Float x = tmp8;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(582)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(582)
					{
						HX_STACK_LINE(582)
						bool tmp10 = (anchor4 != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(582)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(582)
						if ((tmp10)){
							HX_STACK_LINE(582)
							tmp11 = anchor4->zpp_disp;
						}
						else{
							HX_STACK_LINE(582)
							tmp11 = false;
						}
						HX_STACK_LINE(582)
						if ((tmp11)){
							HX_STACK_LINE(582)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(582)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(582)
							HX_STACK_DO_THROW(tmp13);
						}
						HX_STACK_LINE(582)
						{
							HX_STACK_LINE(582)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor4->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(582)
							bool tmp12 = (_this1->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(582)
							if ((tmp12)){
								HX_STACK_LINE(582)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(582)
						tmp9 = anchor4->zpp_inner->y;
					}
					HX_STACK_LINE(582)
					Float y = tmp9;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(582)
					{
						HX_STACK_LINE(582)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(582)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(582)
						if ((tmp10)){
							HX_STACK_LINE(582)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(582)
							tmp11 = false;
						}
						HX_STACK_LINE(582)
						if ((tmp11)){
							HX_STACK_LINE(582)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(582)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(582)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(582)
					{
						HX_STACK_LINE(582)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(582)
						bool tmp10 = _this1->_immutable;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(582)
						if ((tmp10)){
							HX_STACK_LINE(582)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(582)
						bool tmp11 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(582)
						if ((tmp11)){
							HX_STACK_LINE(582)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(582)
					bool tmp10 = (x != x);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(582)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(582)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(582)
					if ((tmp11)){
						HX_STACK_LINE(582)
						tmp12 = (y != y);
					}
					else{
						HX_STACK_LINE(582)
						tmp12 = true;
					}
					HX_STACK_LINE(582)
					if ((tmp12)){
						HX_STACK_LINE(582)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(582)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(582)
					{
						HX_STACK_LINE(582)
						{
							HX_STACK_LINE(582)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(582)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(582)
							if ((tmp14)){
								HX_STACK_LINE(582)
								tmp15 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(582)
								tmp15 = false;
							}
							HX_STACK_LINE(582)
							if ((tmp15)){
								HX_STACK_LINE(582)
								::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(582)
								::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(582)
								HX_STACK_DO_THROW(tmp17);
							}
						}
						HX_STACK_LINE(582)
						{
							HX_STACK_LINE(582)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(582)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(582)
							if ((tmp14)){
								HX_STACK_LINE(582)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(582)
						tmp13 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(582)
					Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(582)
					bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(582)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(582)
					if ((tmp15)){
						HX_STACK_LINE(582)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(582)
						{
							HX_STACK_LINE(582)
							{
								HX_STACK_LINE(582)
								bool tmp18 = (_this != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(582)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(582)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(582)
								bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(582)
								if ((tmp21)){
									HX_STACK_LINE(582)
									tmp20 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(582)
									tmp20 = false;
								}
								HX_STACK_LINE(582)
								bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(582)
								if ((tmp22)){
									HX_STACK_LINE(582)
									::String tmp23 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(582)
									::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(582)
									::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(582)
									::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(582)
									::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(582)
									HX_STACK_DO_THROW(tmp27);
								}
							}
							HX_STACK_LINE(582)
							{
								HX_STACK_LINE(582)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(582)
								bool tmp18 = (_this1->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(582)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(582)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(582)
								if ((tmp20)){
									HX_STACK_LINE(582)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(582)
							Float tmp18 = _this->zpp_inner->y;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(582)
							tmp17 = tmp18;
						}
						HX_STACK_LINE(582)
						Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(582)
						tmp16 = (tmp17 == tmp18);
					}
					else{
						HX_STACK_LINE(582)
						tmp16 = false;
					}
					HX_STACK_LINE(582)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(582)
					if ((tmp17)){
						HX_STACK_LINE(582)
						{
							HX_STACK_LINE(582)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(582)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(582)
							{
							}
						}
						HX_STACK_LINE(582)
						{
							HX_STACK_LINE(582)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(582)
							bool tmp18 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(582)
							if ((tmp18)){
								HX_STACK_LINE(582)
								::zpp_nape::geom::ZPP_Vec2 tmp19 = _this1;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(582)
								_this1->_invalidate(tmp19);
							}
						}
					}
					HX_STACK_LINE(582)
					tmp7 = _this;
				}
				HX_STACK_LINE(582)
				::nape::geom::Vec2 ret = tmp7;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(582)
				{
					HX_STACK_LINE(582)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(582)
					tmp8 = anchor4->zpp_inner->weak;
					HX_STACK_LINE(582)
					if ((tmp8)){
						HX_STACK_LINE(582)
						{
							HX_STACK_LINE(582)
							{
								HX_STACK_LINE(582)
								bool tmp9 = (anchor4 != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(582)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(582)
								if ((tmp9)){
									HX_STACK_LINE(582)
									tmp10 = anchor4->zpp_disp;
								}
								else{
									HX_STACK_LINE(582)
									tmp10 = false;
								}
								HX_STACK_LINE(582)
								if ((tmp10)){
									HX_STACK_LINE(582)
									::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(582)
									::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(582)
									HX_STACK_DO_THROW(tmp12);
								}
							}
							HX_STACK_LINE(582)
							{
								HX_STACK_LINE(582)
								::zpp_nape::geom::ZPP_Vec2 _this1 = anchor4->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(582)
								bool tmp9 = _this1->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(582)
								if ((tmp9)){
									HX_STACK_LINE(582)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
								}
								HX_STACK_LINE(582)
								bool tmp10 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(582)
								if ((tmp10)){
									HX_STACK_LINE(582)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(582)
							bool tmp9 = anchor4->zpp_inner->_inuse;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(582)
							if ((tmp9)){
								HX_STACK_LINE(582)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
							}
							HX_STACK_LINE(582)
							::zpp_nape::geom::ZPP_Vec2 inner = anchor4->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(582)
							anchor4->zpp_inner->outer = null();
							HX_STACK_LINE(582)
							anchor4->zpp_inner = null();
							HX_STACK_LINE(582)
							{
								HX_STACK_LINE(582)
								::nape::geom::Vec2 o = anchor4;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(582)
								o->zpp_pool = null();
								HX_STACK_LINE(582)
								::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(582)
								bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(582)
								if ((tmp11)){
									HX_STACK_LINE(582)
									::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(582)
									tmp12->zpp_pool = o;
								}
								else{
									HX_STACK_LINE(582)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(582)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
								HX_STACK_LINE(582)
								o->zpp_disp = true;
							}
							HX_STACK_LINE(582)
							{
								HX_STACK_LINE(582)
								::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(582)
								{
									HX_STACK_LINE(582)
									bool tmp10 = (o->outer != null());		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(582)
									if ((tmp10)){
										HX_STACK_LINE(582)
										o->outer->zpp_inner = null();
										HX_STACK_LINE(582)
										o->outer = null();
									}
									HX_STACK_LINE(582)
									o->_isimmutable = null();
									HX_STACK_LINE(582)
									o->_validate = null();
									HX_STACK_LINE(582)
									o->_invalidate = null();
								}
								HX_STACK_LINE(582)
								::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(582)
								o->next = tmp10;
								HX_STACK_LINE(582)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
							}
						}
						HX_STACK_LINE(582)
						true;
					}
					else{
						HX_STACK_LINE(582)
						false;
					}
				}
				HX_STACK_LINE(582)
				ret;
			}
		}
		HX_STACK_LINE(582)
		{
			HX_STACK_LINE(582)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(582)
			::nape::geom::Vec2 tmp5 = tmp4->wrap_a4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(582)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(582)
			if ((tmp6)){
				HX_STACK_LINE(582)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(582)
				tmp7->setup_a4();
			}
			HX_STACK_LINE(582)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(582)
			tmp7->wrap_a4;
		}
	}
	HX_STACK_LINE(583)
	{
		HX_STACK_LINE(583)
		{
			HX_STACK_LINE(583)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(583)
			tmp4->immutable_midstep(HX_HCSTRING("PulleyJoint::ratio","\x7a","\xcf","\x1b","\x11"));
			HX_STACK_LINE(583)
			bool tmp5 = (ratio != ratio);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(583)
			if ((tmp5)){
				HX_STACK_LINE(583)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: PulleyJoint::ratio cannot be NaN","\x63","\x48","\xfa","\xb0"));
			}
			HX_STACK_LINE(583)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(583)
			Float tmp7 = tmp6->ratio;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(583)
			Float tmp8 = ratio;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(583)
			bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(583)
			if ((tmp9)){
				HX_STACK_LINE(583)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp10 = this->zpp_inner_zn;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(583)
				tmp10->ratio = ratio;
				HX_STACK_LINE(583)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(583)
				tmp11->wake();
			}
		}
		HX_STACK_LINE(583)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(583)
		tmp4->ratio;
	}
	HX_STACK_LINE(584)
	{
		HX_STACK_LINE(584)
		{
			HX_STACK_LINE(584)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(584)
			tmp4->immutable_midstep(HX_HCSTRING("PulleyJoint::jointMin","\x59","\x4f","\xc9","\x70"));
			HX_STACK_LINE(584)
			bool tmp5 = (jointMin != jointMin);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(584)
			if ((tmp5)){
				HX_STACK_LINE(584)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: PulleyJoint::jointMin cannot be NaN","\xa6","\x94","\x5b","\x4c"));
			}
			HX_STACK_LINE(584)
			bool tmp6 = (jointMin < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(584)
			if ((tmp6)){
				HX_STACK_LINE(584)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: PulleyJoint::jointMin must be >= 0","\x6a","\x47","\xdb","\x7e"));
			}
			HX_STACK_LINE(584)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(584)
			Float tmp8 = tmp7->jointMin;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(584)
			Float tmp9 = jointMin;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(584)
			bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(584)
			if ((tmp10)){
				HX_STACK_LINE(584)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(584)
				tmp11->jointMin = jointMin;
				HX_STACK_LINE(584)
				::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(584)
				tmp12->wake();
			}
		}
		HX_STACK_LINE(584)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(584)
		tmp4->jointMin;
	}
	HX_STACK_LINE(585)
	{
		HX_STACK_LINE(585)
		{
			HX_STACK_LINE(585)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(585)
			tmp4->immutable_midstep(HX_HCSTRING("PulleyJoint::jointMax","\x6b","\x48","\xc9","\x70"));
			HX_STACK_LINE(585)
			bool tmp5 = (jointMax != jointMax);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(585)
			if ((tmp5)){
				HX_STACK_LINE(585)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: PulleyJoint::jointMax cannot be NaN","\x38","\x89","\xae","\xe4"));
			}
			HX_STACK_LINE(585)
			bool tmp6 = (jointMax < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(585)
			if ((tmp6)){
				HX_STACK_LINE(585)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: PulleyJoint::jointMax must be >= 0","\x18","\x8b","\xc3","\x71"));
			}
			HX_STACK_LINE(585)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(585)
			Float tmp8 = tmp7->jointMax;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(585)
			Float tmp9 = jointMax;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(585)
			bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(585)
			if ((tmp10)){
				HX_STACK_LINE(585)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(585)
				tmp11->jointMax = jointMax;
				HX_STACK_LINE(585)
				::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(585)
				tmp12->wake();
			}
		}
		HX_STACK_LINE(585)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(585)
		tmp4->jointMax;
	}
}
;
	return null();
}

//PulleyJoint_obj::~PulleyJoint_obj() { }

Dynamic PulleyJoint_obj::__CreateEmpty() { return  new PulleyJoint_obj; }
hx::ObjectPtr< PulleyJoint_obj > PulleyJoint_obj::__new(::nape::phys::Body body1,::nape::phys::Body body2,::nape::phys::Body body3,::nape::phys::Body body4,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,::nape::geom::Vec2 anchor3,::nape::geom::Vec2 anchor4,Float jointMin,Float jointMax,hx::Null< Float >  __o_ratio)
{  hx::ObjectPtr< PulleyJoint_obj > _result_ = new PulleyJoint_obj();
	_result_->__construct(body1,body2,body3,body4,anchor1,anchor2,anchor3,anchor4,jointMin,jointMax,__o_ratio);
	return _result_;}

Dynamic PulleyJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PulleyJoint_obj > _result_ = new PulleyJoint_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10]);
	return _result_;}

::nape::phys::Body PulleyJoint_obj::get_body1( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","get_body1",0x9deb155e,"nape.constraint.PulleyJoint.get_body1","nape/constraint/PulleyJoint.hx",200,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(201)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(201)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(201)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(201)
	if ((tmp2)){
		HX_STACK_LINE(201)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(201)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(201)
		tmp3 = tmp4->b1->outer;
	}
	HX_STACK_LINE(201)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_body1,return )

::nape::phys::Body PulleyJoint_obj::set_body1( ::nape::phys::Body body1){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","set_body1",0x813c016a,"nape.constraint.PulleyJoint.set_body1","nape/constraint/PulleyJoint.hx",203,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body1,"body1")
	HX_STACK_LINE(204)
	{
		HX_STACK_LINE(205)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(205)
		::String tmp1 = HX_HCSTRING("Constraint::body1","\xb2","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		tmp->immutable_midstep(tmp1);
		HX_STACK_LINE(206)
		bool tmp2 = (body1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		::zpp_nape::phys::ZPP_Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(206)
		if ((tmp2)){
			HX_STACK_LINE(206)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(206)
			tmp3 = body1->zpp_inner;
		}
		HX_STACK_LINE(206)
		::zpp_nape::phys::ZPP_Body inbody1 = tmp3;		HX_STACK_VAR(inbody1,"inbody1");
		HX_STACK_LINE(207)
		::zpp_nape::phys::ZPP_Body tmp4 = inbody1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(207)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(207)
		::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(207)
		bool tmp7 = (tmp4 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(207)
		if ((tmp7)){
			HX_STACK_LINE(208)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(208)
			::zpp_nape::phys::ZPP_Body tmp9 = tmp8->b1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(208)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(208)
			if ((tmp10)){
				HX_STACK_LINE(209)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(209)
				::zpp_nape::space::ZPP_Space tmp12 = tmp11->space;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(209)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(209)
				::nape::space::Space tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(209)
				if ((tmp13)){
					HX_STACK_LINE(209)
					tmp14 = null();
				}
				else{
					HX_STACK_LINE(209)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(209)
					tmp14 = tmp15->space->outer;
				}
				HX_STACK_LINE(209)
				bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(209)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(209)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(209)
				if ((tmp16)){
					HX_STACK_LINE(209)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp18 = this->zpp_inner_zn;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(209)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(209)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(209)
					::zpp_nape::phys::ZPP_Body tmp21 = tmp20->b2;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(209)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = this->zpp_inner_zn;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(209)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(209)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(209)
					::zpp_nape::phys::ZPP_Body tmp25 = tmp24->b1;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(209)
					tmp17 = (tmp21 != tmp25);
				}
				else{
					HX_STACK_LINE(209)
					tmp17 = false;
				}
				HX_STACK_LINE(209)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(209)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(209)
				if ((tmp18)){
					HX_STACK_LINE(209)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(209)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(209)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(209)
					::zpp_nape::phys::ZPP_Body tmp23 = tmp22->b3;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(209)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(209)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(209)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(209)
					::zpp_nape::phys::ZPP_Body tmp27 = tmp26->b1;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(209)
					tmp19 = (tmp23 != tmp27);
				}
				else{
					HX_STACK_LINE(209)
					tmp19 = false;
				}
				HX_STACK_LINE(209)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(209)
				if ((tmp19)){
					HX_STACK_LINE(209)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(209)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(209)
					::zpp_nape::phys::ZPP_Body tmp23 = tmp22->b4;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(209)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(209)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(209)
					::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b1;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(209)
					tmp20 = (tmp23 != tmp26);
				}
				else{
					HX_STACK_LINE(209)
					tmp20 = false;
				}
				HX_STACK_LINE(209)
				if ((tmp20)){
					HX_STACK_LINE(211)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(211)
					::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b1;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(211)
					bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(211)
					if ((tmp23)){
						HX_STACK_LINE(211)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(211)
						::zpp_nape::util::ZNPList_ZPP_Constraint tmp25 = tmp24->b1->constraints;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(211)
						::zpp_nape::constraint::ZPP_Constraint tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(211)
						tmp25->remove(tmp26);
					}
				}
				HX_STACK_LINE(214)
				::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(214)
				bool tmp22 = tmp21->active;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(214)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(214)
				if ((tmp22)){
					HX_STACK_LINE(214)
					::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(214)
					::zpp_nape::constraint::ZPP_Constraint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(214)
					::zpp_nape::space::ZPP_Space tmp26 = tmp25->space;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(214)
					bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(214)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(214)
					::nape::space::Space tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(214)
					bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(214)
					if ((tmp30)){
						HX_STACK_LINE(214)
						tmp29 = null();
					}
					else{
						HX_STACK_LINE(214)
						::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(214)
						::zpp_nape::constraint::ZPP_Constraint tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(214)
						::nape::space::Space tmp33 = tmp32->space->outer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(214)
						tmp29 = tmp33;
					}
					HX_STACK_LINE(214)
					tmp23 = (tmp29 != null());
				}
				else{
					HX_STACK_LINE(214)
					tmp23 = false;
				}
				HX_STACK_LINE(214)
				if ((tmp23)){
					HX_STACK_LINE(214)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(214)
					tmp24->b1->wake();
				}
			}
			HX_STACK_LINE(216)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(216)
			tmp11->b1 = inbody1;
			HX_STACK_LINE(217)
			::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(217)
			::zpp_nape::space::ZPP_Space tmp13 = tmp12->space;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(217)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(217)
			::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(217)
			if ((tmp14)){
				HX_STACK_LINE(217)
				tmp15 = null();
			}
			else{
				HX_STACK_LINE(217)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(217)
				tmp15 = tmp16->space->outer;
			}
			HX_STACK_LINE(217)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(217)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(217)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(217)
			if ((tmp17)){
				HX_STACK_LINE(217)
				tmp18 = (inbody1 != null());
			}
			else{
				HX_STACK_LINE(217)
				tmp18 = false;
			}
			HX_STACK_LINE(217)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(217)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(217)
			if ((tmp19)){
				HX_STACK_LINE(217)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(217)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(217)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(217)
				::zpp_nape::phys::ZPP_Body tmp24 = tmp23->b2;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(217)
				::zpp_nape::phys::ZPP_Body tmp25 = inbody1;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(217)
				tmp20 = (tmp24 != tmp25);
			}
			else{
				HX_STACK_LINE(217)
				tmp20 = false;
			}
			HX_STACK_LINE(217)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(217)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(217)
			if ((tmp21)){
				HX_STACK_LINE(217)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp23 = this->zpp_inner_zn;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(217)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(217)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(217)
				::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b3;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(217)
				::zpp_nape::phys::ZPP_Body tmp27 = inbody1;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(217)
				tmp22 = (tmp26 != tmp27);
			}
			else{
				HX_STACK_LINE(217)
				tmp22 = false;
			}
			HX_STACK_LINE(217)
			bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(217)
			if ((tmp22)){
				HX_STACK_LINE(217)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(217)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(217)
				::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b4;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(217)
				::zpp_nape::phys::ZPP_Body tmp27 = inbody1;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(217)
				tmp23 = (tmp26 != tmp27);
			}
			else{
				HX_STACK_LINE(217)
				tmp23 = false;
			}
			HX_STACK_LINE(217)
			if ((tmp23)){
				HX_STACK_LINE(219)
				bool tmp24 = (inbody1 != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(219)
				if ((tmp24)){
					HX_STACK_LINE(219)
					::zpp_nape::constraint::ZPP_Constraint tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(219)
					inbody1->constraints->add(tmp25);
				}
			}
			HX_STACK_LINE(222)
			::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(222)
			bool tmp25 = tmp24->active;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(222)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(222)
			if ((tmp25)){
				HX_STACK_LINE(222)
				::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(222)
				::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(222)
				::zpp_nape::space::ZPP_Space tmp29 = tmp28->space;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(222)
				bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(222)
				bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(222)
				::nape::space::Space tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(222)
				bool tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(222)
				if ((tmp33)){
					HX_STACK_LINE(222)
					tmp32 = null();
				}
				else{
					HX_STACK_LINE(222)
					::zpp_nape::constraint::ZPP_Constraint tmp34 = this->zpp_inner;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(222)
					::zpp_nape::constraint::ZPP_Constraint tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(222)
					::nape::space::Space tmp36 = tmp35->space->outer;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(222)
					tmp32 = tmp36;
				}
				HX_STACK_LINE(222)
				tmp26 = (tmp32 != null());
			}
			else{
				HX_STACK_LINE(222)
				tmp26 = false;
			}
			HX_STACK_LINE(222)
			if ((tmp26)){
				HX_STACK_LINE(223)
				::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(223)
				tmp27->wake();
				HX_STACK_LINE(224)
				bool tmp28 = (inbody1 != null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(224)
				if ((tmp28)){
					HX_STACK_LINE(224)
					inbody1->wake();
				}
			}
		}
	}
	HX_STACK_LINE(228)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(228)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(228)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(228)
	if ((tmp2)){
		HX_STACK_LINE(228)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(228)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(228)
		tmp3 = tmp4->b1->outer;
	}
	HX_STACK_LINE(228)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_body1,return )

::nape::phys::Body PulleyJoint_obj::get_body2( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","get_body2",0x9deb155f,"nape.constraint.PulleyJoint.get_body2","nape/constraint/PulleyJoint.hx",238,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(239)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(239)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(239)
	if ((tmp2)){
		HX_STACK_LINE(239)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(239)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(239)
		tmp3 = tmp4->b2->outer;
	}
	HX_STACK_LINE(239)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_body2,return )

::nape::phys::Body PulleyJoint_obj::set_body2( ::nape::phys::Body body2){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","set_body2",0x813c016b,"nape.constraint.PulleyJoint.set_body2","nape/constraint/PulleyJoint.hx",241,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body2,"body2")
	HX_STACK_LINE(242)
	{
		HX_STACK_LINE(243)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(243)
		::String tmp1 = HX_HCSTRING("Constraint::body2","\xb3","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(243)
		tmp->immutable_midstep(tmp1);
		HX_STACK_LINE(244)
		bool tmp2 = (body2 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(244)
		::zpp_nape::phys::ZPP_Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(244)
		if ((tmp2)){
			HX_STACK_LINE(244)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(244)
			tmp3 = body2->zpp_inner;
		}
		HX_STACK_LINE(244)
		::zpp_nape::phys::ZPP_Body inbody2 = tmp3;		HX_STACK_VAR(inbody2,"inbody2");
		HX_STACK_LINE(245)
		::zpp_nape::phys::ZPP_Body tmp4 = inbody2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(245)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(245)
		::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(245)
		bool tmp7 = (tmp4 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(245)
		if ((tmp7)){
			HX_STACK_LINE(246)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(246)
			::zpp_nape::phys::ZPP_Body tmp9 = tmp8->b2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(246)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(246)
			if ((tmp10)){
				HX_STACK_LINE(247)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(247)
				::zpp_nape::space::ZPP_Space tmp12 = tmp11->space;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(247)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(247)
				::nape::space::Space tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(247)
				if ((tmp13)){
					HX_STACK_LINE(247)
					tmp14 = null();
				}
				else{
					HX_STACK_LINE(247)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(247)
					tmp14 = tmp15->space->outer;
				}
				HX_STACK_LINE(247)
				bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(247)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(247)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(247)
				if ((tmp16)){
					HX_STACK_LINE(247)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp18 = this->zpp_inner_zn;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(247)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(247)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(247)
					::zpp_nape::phys::ZPP_Body tmp21 = tmp20->b1;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(247)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = this->zpp_inner_zn;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(247)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(247)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(247)
					::zpp_nape::phys::ZPP_Body tmp25 = tmp24->b2;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(247)
					tmp17 = (tmp21 != tmp25);
				}
				else{
					HX_STACK_LINE(247)
					tmp17 = false;
				}
				HX_STACK_LINE(247)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(247)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(247)
				if ((tmp18)){
					HX_STACK_LINE(247)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(247)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(247)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(247)
					::zpp_nape::phys::ZPP_Body tmp23 = tmp22->b3;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(247)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(247)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(247)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(247)
					::zpp_nape::phys::ZPP_Body tmp27 = tmp26->b2;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(247)
					tmp19 = (tmp23 != tmp27);
				}
				else{
					HX_STACK_LINE(247)
					tmp19 = false;
				}
				HX_STACK_LINE(247)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(247)
				if ((tmp19)){
					HX_STACK_LINE(247)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(247)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(247)
					::zpp_nape::phys::ZPP_Body tmp23 = tmp22->b4;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(247)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(247)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(247)
					::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b2;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(247)
					tmp20 = (tmp23 != tmp26);
				}
				else{
					HX_STACK_LINE(247)
					tmp20 = false;
				}
				HX_STACK_LINE(247)
				if ((tmp20)){
					HX_STACK_LINE(249)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(249)
					::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b2;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(249)
					bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(249)
					if ((tmp23)){
						HX_STACK_LINE(249)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(249)
						::zpp_nape::util::ZNPList_ZPP_Constraint tmp25 = tmp24->b2->constraints;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(249)
						::zpp_nape::constraint::ZPP_Constraint tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(249)
						tmp25->remove(tmp26);
					}
				}
				HX_STACK_LINE(252)
				::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(252)
				bool tmp22 = tmp21->active;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(252)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(252)
				if ((tmp22)){
					HX_STACK_LINE(252)
					::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(252)
					::zpp_nape::constraint::ZPP_Constraint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(252)
					::zpp_nape::space::ZPP_Space tmp26 = tmp25->space;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(252)
					bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(252)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(252)
					::nape::space::Space tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(252)
					bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(252)
					if ((tmp30)){
						HX_STACK_LINE(252)
						tmp29 = null();
					}
					else{
						HX_STACK_LINE(252)
						::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(252)
						::zpp_nape::constraint::ZPP_Constraint tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(252)
						::nape::space::Space tmp33 = tmp32->space->outer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(252)
						tmp29 = tmp33;
					}
					HX_STACK_LINE(252)
					tmp23 = (tmp29 != null());
				}
				else{
					HX_STACK_LINE(252)
					tmp23 = false;
				}
				HX_STACK_LINE(252)
				if ((tmp23)){
					HX_STACK_LINE(252)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(252)
					tmp24->b2->wake();
				}
			}
			HX_STACK_LINE(254)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(254)
			tmp11->b2 = inbody2;
			HX_STACK_LINE(255)
			::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(255)
			::zpp_nape::space::ZPP_Space tmp13 = tmp12->space;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(255)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(255)
			::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(255)
			if ((tmp14)){
				HX_STACK_LINE(255)
				tmp15 = null();
			}
			else{
				HX_STACK_LINE(255)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(255)
				tmp15 = tmp16->space->outer;
			}
			HX_STACK_LINE(255)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(255)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(255)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(255)
			if ((tmp17)){
				HX_STACK_LINE(255)
				tmp18 = (inbody2 != null());
			}
			else{
				HX_STACK_LINE(255)
				tmp18 = false;
			}
			HX_STACK_LINE(255)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(255)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(255)
			if ((tmp19)){
				HX_STACK_LINE(255)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(255)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(255)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(255)
				::zpp_nape::phys::ZPP_Body tmp24 = tmp23->b1;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(255)
				::zpp_nape::phys::ZPP_Body tmp25 = inbody2;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(255)
				tmp20 = (tmp24 != tmp25);
			}
			else{
				HX_STACK_LINE(255)
				tmp20 = false;
			}
			HX_STACK_LINE(255)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(255)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(255)
			if ((tmp21)){
				HX_STACK_LINE(255)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp23 = this->zpp_inner_zn;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(255)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(255)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(255)
				::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b3;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(255)
				::zpp_nape::phys::ZPP_Body tmp27 = inbody2;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(255)
				tmp22 = (tmp26 != tmp27);
			}
			else{
				HX_STACK_LINE(255)
				tmp22 = false;
			}
			HX_STACK_LINE(255)
			bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(255)
			if ((tmp22)){
				HX_STACK_LINE(255)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(255)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(255)
				::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b4;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(255)
				::zpp_nape::phys::ZPP_Body tmp27 = inbody2;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(255)
				tmp23 = (tmp26 != tmp27);
			}
			else{
				HX_STACK_LINE(255)
				tmp23 = false;
			}
			HX_STACK_LINE(255)
			if ((tmp23)){
				HX_STACK_LINE(257)
				bool tmp24 = (inbody2 != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(257)
				if ((tmp24)){
					HX_STACK_LINE(257)
					::zpp_nape::constraint::ZPP_Constraint tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(257)
					inbody2->constraints->add(tmp25);
				}
			}
			HX_STACK_LINE(260)
			::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(260)
			bool tmp25 = tmp24->active;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(260)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(260)
			if ((tmp25)){
				HX_STACK_LINE(260)
				::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(260)
				::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(260)
				::zpp_nape::space::ZPP_Space tmp29 = tmp28->space;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(260)
				bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(260)
				bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(260)
				::nape::space::Space tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(260)
				bool tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(260)
				if ((tmp33)){
					HX_STACK_LINE(260)
					tmp32 = null();
				}
				else{
					HX_STACK_LINE(260)
					::zpp_nape::constraint::ZPP_Constraint tmp34 = this->zpp_inner;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(260)
					::zpp_nape::constraint::ZPP_Constraint tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(260)
					::nape::space::Space tmp36 = tmp35->space->outer;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(260)
					tmp32 = tmp36;
				}
				HX_STACK_LINE(260)
				tmp26 = (tmp32 != null());
			}
			else{
				HX_STACK_LINE(260)
				tmp26 = false;
			}
			HX_STACK_LINE(260)
			if ((tmp26)){
				HX_STACK_LINE(261)
				::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(261)
				tmp27->wake();
				HX_STACK_LINE(262)
				bool tmp28 = (inbody2 != null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(262)
				if ((tmp28)){
					HX_STACK_LINE(262)
					inbody2->wake();
				}
			}
		}
	}
	HX_STACK_LINE(266)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(266)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(266)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(266)
	if ((tmp2)){
		HX_STACK_LINE(266)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(266)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(266)
		tmp3 = tmp4->b2->outer;
	}
	HX_STACK_LINE(266)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_body2,return )

::nape::phys::Body PulleyJoint_obj::get_body3( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","get_body3",0x9deb1560,"nape.constraint.PulleyJoint.get_body3","nape/constraint/PulleyJoint.hx",276,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(277)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(277)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b3;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(277)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(277)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(277)
	if ((tmp2)){
		HX_STACK_LINE(277)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(277)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(277)
		tmp3 = tmp4->b3->outer;
	}
	HX_STACK_LINE(277)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_body3,return )

::nape::phys::Body PulleyJoint_obj::set_body3( ::nape::phys::Body body3){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","set_body3",0x813c016c,"nape.constraint.PulleyJoint.set_body3","nape/constraint/PulleyJoint.hx",279,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body3,"body3")
	HX_STACK_LINE(280)
	{
		HX_STACK_LINE(281)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(281)
		::String tmp1 = HX_HCSTRING("Constraint::body3","\xb4","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(281)
		tmp->immutable_midstep(tmp1);
		HX_STACK_LINE(282)
		bool tmp2 = (body3 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(282)
		::zpp_nape::phys::ZPP_Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(282)
		if ((tmp2)){
			HX_STACK_LINE(282)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(282)
			tmp3 = body3->zpp_inner;
		}
		HX_STACK_LINE(282)
		::zpp_nape::phys::ZPP_Body inbody3 = tmp3;		HX_STACK_VAR(inbody3,"inbody3");
		HX_STACK_LINE(283)
		::zpp_nape::phys::ZPP_Body tmp4 = inbody3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(283)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(283)
		::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b3;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(283)
		bool tmp7 = (tmp4 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(283)
		if ((tmp7)){
			HX_STACK_LINE(284)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(284)
			::zpp_nape::phys::ZPP_Body tmp9 = tmp8->b3;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(284)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(284)
			if ((tmp10)){
				HX_STACK_LINE(285)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(285)
				::zpp_nape::space::ZPP_Space tmp12 = tmp11->space;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(285)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(285)
				::nape::space::Space tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(285)
				if ((tmp13)){
					HX_STACK_LINE(285)
					tmp14 = null();
				}
				else{
					HX_STACK_LINE(285)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(285)
					tmp14 = tmp15->space->outer;
				}
				HX_STACK_LINE(285)
				bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(285)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(285)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(285)
				if ((tmp16)){
					HX_STACK_LINE(285)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp18 = this->zpp_inner_zn;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(285)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(285)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(285)
					::zpp_nape::phys::ZPP_Body tmp21 = tmp20->b1;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(285)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = this->zpp_inner_zn;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(285)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(285)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(285)
					::zpp_nape::phys::ZPP_Body tmp25 = tmp24->b3;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(285)
					tmp17 = (tmp21 != tmp25);
				}
				else{
					HX_STACK_LINE(285)
					tmp17 = false;
				}
				HX_STACK_LINE(285)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(285)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(285)
				if ((tmp18)){
					HX_STACK_LINE(285)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(285)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(285)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(285)
					::zpp_nape::phys::ZPP_Body tmp23 = tmp22->b2;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(285)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(285)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(285)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(285)
					::zpp_nape::phys::ZPP_Body tmp27 = tmp26->b3;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(285)
					tmp19 = (tmp23 != tmp27);
				}
				else{
					HX_STACK_LINE(285)
					tmp19 = false;
				}
				HX_STACK_LINE(285)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(285)
				if ((tmp19)){
					HX_STACK_LINE(285)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(285)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(285)
					::zpp_nape::phys::ZPP_Body tmp23 = tmp22->b4;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(285)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(285)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(285)
					::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b3;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(285)
					tmp20 = (tmp23 != tmp26);
				}
				else{
					HX_STACK_LINE(285)
					tmp20 = false;
				}
				HX_STACK_LINE(285)
				if ((tmp20)){
					HX_STACK_LINE(287)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(287)
					::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b3;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(287)
					bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(287)
					if ((tmp23)){
						HX_STACK_LINE(287)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(287)
						::zpp_nape::util::ZNPList_ZPP_Constraint tmp25 = tmp24->b3->constraints;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(287)
						::zpp_nape::constraint::ZPP_Constraint tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(287)
						tmp25->remove(tmp26);
					}
				}
				HX_STACK_LINE(290)
				::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(290)
				bool tmp22 = tmp21->active;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(290)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(290)
				if ((tmp22)){
					HX_STACK_LINE(290)
					::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(290)
					::zpp_nape::constraint::ZPP_Constraint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(290)
					::zpp_nape::space::ZPP_Space tmp26 = tmp25->space;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(290)
					bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(290)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(290)
					::nape::space::Space tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(290)
					bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(290)
					if ((tmp30)){
						HX_STACK_LINE(290)
						tmp29 = null();
					}
					else{
						HX_STACK_LINE(290)
						::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(290)
						::zpp_nape::constraint::ZPP_Constraint tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(290)
						::nape::space::Space tmp33 = tmp32->space->outer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(290)
						tmp29 = tmp33;
					}
					HX_STACK_LINE(290)
					tmp23 = (tmp29 != null());
				}
				else{
					HX_STACK_LINE(290)
					tmp23 = false;
				}
				HX_STACK_LINE(290)
				if ((tmp23)){
					HX_STACK_LINE(290)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(290)
					tmp24->b3->wake();
				}
			}
			HX_STACK_LINE(292)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(292)
			tmp11->b3 = inbody3;
			HX_STACK_LINE(293)
			::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(293)
			::zpp_nape::space::ZPP_Space tmp13 = tmp12->space;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(293)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(293)
			::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(293)
			if ((tmp14)){
				HX_STACK_LINE(293)
				tmp15 = null();
			}
			else{
				HX_STACK_LINE(293)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(293)
				tmp15 = tmp16->space->outer;
			}
			HX_STACK_LINE(293)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(293)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(293)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(293)
			if ((tmp17)){
				HX_STACK_LINE(293)
				tmp18 = (inbody3 != null());
			}
			else{
				HX_STACK_LINE(293)
				tmp18 = false;
			}
			HX_STACK_LINE(293)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(293)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(293)
			if ((tmp19)){
				HX_STACK_LINE(293)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(293)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(293)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(293)
				::zpp_nape::phys::ZPP_Body tmp24 = tmp23->b1;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(293)
				::zpp_nape::phys::ZPP_Body tmp25 = inbody3;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(293)
				tmp20 = (tmp24 != tmp25);
			}
			else{
				HX_STACK_LINE(293)
				tmp20 = false;
			}
			HX_STACK_LINE(293)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(293)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(293)
			if ((tmp21)){
				HX_STACK_LINE(293)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp23 = this->zpp_inner_zn;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(293)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(293)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(293)
				::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b2;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(293)
				::zpp_nape::phys::ZPP_Body tmp27 = inbody3;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(293)
				tmp22 = (tmp26 != tmp27);
			}
			else{
				HX_STACK_LINE(293)
				tmp22 = false;
			}
			HX_STACK_LINE(293)
			bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(293)
			if ((tmp22)){
				HX_STACK_LINE(293)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(293)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(293)
				::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b4;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(293)
				::zpp_nape::phys::ZPP_Body tmp27 = inbody3;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(293)
				tmp23 = (tmp26 != tmp27);
			}
			else{
				HX_STACK_LINE(293)
				tmp23 = false;
			}
			HX_STACK_LINE(293)
			if ((tmp23)){
				HX_STACK_LINE(295)
				bool tmp24 = (inbody3 != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(295)
				if ((tmp24)){
					HX_STACK_LINE(295)
					::zpp_nape::constraint::ZPP_Constraint tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(295)
					inbody3->constraints->add(tmp25);
				}
			}
			HX_STACK_LINE(298)
			::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(298)
			bool tmp25 = tmp24->active;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(298)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(298)
			if ((tmp25)){
				HX_STACK_LINE(298)
				::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(298)
				::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(298)
				::zpp_nape::space::ZPP_Space tmp29 = tmp28->space;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(298)
				bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(298)
				bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(298)
				::nape::space::Space tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(298)
				bool tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(298)
				if ((tmp33)){
					HX_STACK_LINE(298)
					tmp32 = null();
				}
				else{
					HX_STACK_LINE(298)
					::zpp_nape::constraint::ZPP_Constraint tmp34 = this->zpp_inner;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(298)
					::zpp_nape::constraint::ZPP_Constraint tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(298)
					::nape::space::Space tmp36 = tmp35->space->outer;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(298)
					tmp32 = tmp36;
				}
				HX_STACK_LINE(298)
				tmp26 = (tmp32 != null());
			}
			else{
				HX_STACK_LINE(298)
				tmp26 = false;
			}
			HX_STACK_LINE(298)
			if ((tmp26)){
				HX_STACK_LINE(299)
				::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(299)
				tmp27->wake();
				HX_STACK_LINE(300)
				bool tmp28 = (inbody3 != null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(300)
				if ((tmp28)){
					HX_STACK_LINE(300)
					inbody3->wake();
				}
			}
		}
	}
	HX_STACK_LINE(304)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(304)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b3;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(304)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(304)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(304)
	if ((tmp2)){
		HX_STACK_LINE(304)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(304)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(304)
		tmp3 = tmp4->b3->outer;
	}
	HX_STACK_LINE(304)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_body3,return )

::nape::phys::Body PulleyJoint_obj::get_body4( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","get_body4",0x9deb1561,"nape.constraint.PulleyJoint.get_body4","nape/constraint/PulleyJoint.hx",314,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(315)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(315)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b4;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(315)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(315)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(315)
	if ((tmp2)){
		HX_STACK_LINE(315)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(315)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(315)
		tmp3 = tmp4->b4->outer;
	}
	HX_STACK_LINE(315)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_body4,return )

::nape::phys::Body PulleyJoint_obj::set_body4( ::nape::phys::Body body4){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","set_body4",0x813c016d,"nape.constraint.PulleyJoint.set_body4","nape/constraint/PulleyJoint.hx",317,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body4,"body4")
	HX_STACK_LINE(318)
	{
		HX_STACK_LINE(319)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		::String tmp1 = HX_HCSTRING("Constraint::body4","\xb5","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		tmp->immutable_midstep(tmp1);
		HX_STACK_LINE(320)
		bool tmp2 = (body4 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(320)
		::zpp_nape::phys::ZPP_Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(320)
		if ((tmp2)){
			HX_STACK_LINE(320)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(320)
			tmp3 = body4->zpp_inner;
		}
		HX_STACK_LINE(320)
		::zpp_nape::phys::ZPP_Body inbody4 = tmp3;		HX_STACK_VAR(inbody4,"inbody4");
		HX_STACK_LINE(321)
		::zpp_nape::phys::ZPP_Body tmp4 = inbody4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(321)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(321)
		::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b4;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(321)
		bool tmp7 = (tmp4 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(321)
		if ((tmp7)){
			HX_STACK_LINE(322)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(322)
			::zpp_nape::phys::ZPP_Body tmp9 = tmp8->b4;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(322)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(322)
			if ((tmp10)){
				HX_STACK_LINE(323)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(323)
				::zpp_nape::space::ZPP_Space tmp12 = tmp11->space;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(323)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(323)
				::nape::space::Space tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(323)
				if ((tmp13)){
					HX_STACK_LINE(323)
					tmp14 = null();
				}
				else{
					HX_STACK_LINE(323)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(323)
					tmp14 = tmp15->space->outer;
				}
				HX_STACK_LINE(323)
				bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(323)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(323)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(323)
				if ((tmp16)){
					HX_STACK_LINE(323)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp18 = this->zpp_inner_zn;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(323)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(323)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(323)
					::zpp_nape::phys::ZPP_Body tmp21 = tmp20->b1;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(323)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = this->zpp_inner_zn;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(323)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(323)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(323)
					::zpp_nape::phys::ZPP_Body tmp25 = tmp24->b4;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(323)
					tmp17 = (tmp21 != tmp25);
				}
				else{
					HX_STACK_LINE(323)
					tmp17 = false;
				}
				HX_STACK_LINE(323)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(323)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(323)
				if ((tmp18)){
					HX_STACK_LINE(323)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(323)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(323)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(323)
					::zpp_nape::phys::ZPP_Body tmp23 = tmp22->b2;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(323)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(323)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(323)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(323)
					::zpp_nape::phys::ZPP_Body tmp27 = tmp26->b4;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(323)
					tmp19 = (tmp23 != tmp27);
				}
				else{
					HX_STACK_LINE(323)
					tmp19 = false;
				}
				HX_STACK_LINE(323)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(323)
				if ((tmp19)){
					HX_STACK_LINE(323)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(323)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(323)
					::zpp_nape::phys::ZPP_Body tmp23 = tmp22->b3;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(323)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(323)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(323)
					::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b4;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(323)
					tmp20 = (tmp23 != tmp26);
				}
				else{
					HX_STACK_LINE(323)
					tmp20 = false;
				}
				HX_STACK_LINE(323)
				if ((tmp20)){
					HX_STACK_LINE(325)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(325)
					::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b4;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(325)
					bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(325)
					if ((tmp23)){
						HX_STACK_LINE(325)
						::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(325)
						::zpp_nape::util::ZNPList_ZPP_Constraint tmp25 = tmp24->b4->constraints;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(325)
						::zpp_nape::constraint::ZPP_Constraint tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(325)
						tmp25->remove(tmp26);
					}
				}
				HX_STACK_LINE(328)
				::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(328)
				bool tmp22 = tmp21->active;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(328)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(328)
				if ((tmp22)){
					HX_STACK_LINE(328)
					::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(328)
					::zpp_nape::constraint::ZPP_Constraint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(328)
					::zpp_nape::space::ZPP_Space tmp26 = tmp25->space;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(328)
					bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(328)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(328)
					::nape::space::Space tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(328)
					bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(328)
					if ((tmp30)){
						HX_STACK_LINE(328)
						tmp29 = null();
					}
					else{
						HX_STACK_LINE(328)
						::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(328)
						::zpp_nape::constraint::ZPP_Constraint tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(328)
						::nape::space::Space tmp33 = tmp32->space->outer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(328)
						tmp29 = tmp33;
					}
					HX_STACK_LINE(328)
					tmp23 = (tmp29 != null());
				}
				else{
					HX_STACK_LINE(328)
					tmp23 = false;
				}
				HX_STACK_LINE(328)
				if ((tmp23)){
					HX_STACK_LINE(328)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(328)
					tmp24->b4->wake();
				}
			}
			HX_STACK_LINE(330)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(330)
			tmp11->b4 = inbody4;
			HX_STACK_LINE(331)
			::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(331)
			::zpp_nape::space::ZPP_Space tmp13 = tmp12->space;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(331)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(331)
			::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(331)
			if ((tmp14)){
				HX_STACK_LINE(331)
				tmp15 = null();
			}
			else{
				HX_STACK_LINE(331)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(331)
				tmp15 = tmp16->space->outer;
			}
			HX_STACK_LINE(331)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(331)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(331)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(331)
			if ((tmp17)){
				HX_STACK_LINE(331)
				tmp18 = (inbody4 != null());
			}
			else{
				HX_STACK_LINE(331)
				tmp18 = false;
			}
			HX_STACK_LINE(331)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(331)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(331)
			if ((tmp19)){
				HX_STACK_LINE(331)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(331)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(331)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(331)
				::zpp_nape::phys::ZPP_Body tmp24 = tmp23->b1;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(331)
				::zpp_nape::phys::ZPP_Body tmp25 = inbody4;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(331)
				tmp20 = (tmp24 != tmp25);
			}
			else{
				HX_STACK_LINE(331)
				tmp20 = false;
			}
			HX_STACK_LINE(331)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(331)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(331)
			if ((tmp21)){
				HX_STACK_LINE(331)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp23 = this->zpp_inner_zn;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(331)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(331)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(331)
				::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b2;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(331)
				::zpp_nape::phys::ZPP_Body tmp27 = inbody4;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(331)
				tmp22 = (tmp26 != tmp27);
			}
			else{
				HX_STACK_LINE(331)
				tmp22 = false;
			}
			HX_STACK_LINE(331)
			bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(331)
			if ((tmp22)){
				HX_STACK_LINE(331)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(331)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(331)
				::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b3;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(331)
				::zpp_nape::phys::ZPP_Body tmp27 = inbody4;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(331)
				tmp23 = (tmp26 != tmp27);
			}
			else{
				HX_STACK_LINE(331)
				tmp23 = false;
			}
			HX_STACK_LINE(331)
			if ((tmp23)){
				HX_STACK_LINE(333)
				bool tmp24 = (inbody4 != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(333)
				if ((tmp24)){
					HX_STACK_LINE(333)
					::zpp_nape::constraint::ZPP_Constraint tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(333)
					inbody4->constraints->add(tmp25);
				}
			}
			HX_STACK_LINE(336)
			::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(336)
			bool tmp25 = tmp24->active;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(336)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(336)
			if ((tmp25)){
				HX_STACK_LINE(336)
				::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(336)
				::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(336)
				::zpp_nape::space::ZPP_Space tmp29 = tmp28->space;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(336)
				bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(336)
				bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(336)
				::nape::space::Space tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(336)
				bool tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(336)
				if ((tmp33)){
					HX_STACK_LINE(336)
					tmp32 = null();
				}
				else{
					HX_STACK_LINE(336)
					::zpp_nape::constraint::ZPP_Constraint tmp34 = this->zpp_inner;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(336)
					::zpp_nape::constraint::ZPP_Constraint tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(336)
					::nape::space::Space tmp36 = tmp35->space->outer;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(336)
					tmp32 = tmp36;
				}
				HX_STACK_LINE(336)
				tmp26 = (tmp32 != null());
			}
			else{
				HX_STACK_LINE(336)
				tmp26 = false;
			}
			HX_STACK_LINE(336)
			if ((tmp26)){
				HX_STACK_LINE(337)
				::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(337)
				tmp27->wake();
				HX_STACK_LINE(338)
				bool tmp28 = (inbody4 != null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(338)
				if ((tmp28)){
					HX_STACK_LINE(338)
					inbody4->wake();
				}
			}
		}
	}
	HX_STACK_LINE(342)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(342)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b4;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(342)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(342)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(342)
	if ((tmp2)){
		HX_STACK_LINE(342)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(342)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(342)
		tmp3 = tmp4->b4->outer;
	}
	HX_STACK_LINE(342)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_body4,return )

::nape::geom::Vec2 PulleyJoint_obj::get_anchor1( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","get_anchor1",0x107d0feb,"nape.constraint.PulleyJoint.get_anchor1","nape/constraint/PulleyJoint.hx",351,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(352)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(352)
	::nape::geom::Vec2 tmp1 = tmp->wrap_a1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(352)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(352)
	if ((tmp2)){
		HX_STACK_LINE(352)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(352)
		tmp3->setup_a1();
	}
	HX_STACK_LINE(353)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(353)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_a1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(353)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_anchor1,return )

::nape::geom::Vec2 PulleyJoint_obj::set_anchor1( ::nape::geom::Vec2 anchor1){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","set_anchor1",0x1aea16f7,"nape.constraint.PulleyJoint.set_anchor1","nape/constraint/PulleyJoint.hx",355,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor1,"anchor1")
	HX_STACK_LINE(356)
	{
		HX_STACK_LINE(357)
		{
			HX_STACK_LINE(359)
			bool tmp = (anchor1 != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(359)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(359)
			if ((tmp)){
				HX_STACK_LINE(359)
				tmp1 = anchor1->zpp_disp;
			}
			else{
				HX_STACK_LINE(359)
				tmp1 = false;
			}
			HX_STACK_LINE(359)
			if ((tmp1)){
				HX_STACK_LINE(359)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(359)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(359)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(363)
		bool tmp = (anchor1 == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(363)
		if ((tmp)){
			HX_STACK_LINE(363)
			::String tmp1 = HX_HCSTRING("Error: Constraint::anchor1","\xb1","\x15","\x18","\x54");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(363)
			::String tmp2 = (tmp1 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(363)
			HX_STACK_DO_THROW(tmp2);
		}
		HX_STACK_LINE(365)
		{
			HX_STACK_LINE(365)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(365)
				::nape::geom::Vec2 tmp3 = tmp2->wrap_a1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(365)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(365)
				if ((tmp4)){
					HX_STACK_LINE(365)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(365)
					tmp5->setup_a1();
				}
				HX_STACK_LINE(365)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(365)
				tmp1 = tmp5->wrap_a1;
			}
			HX_STACK_LINE(365)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(365)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(365)
				if ((tmp2)){
					HX_STACK_LINE(365)
					tmp3 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(365)
					tmp3 = false;
				}
				HX_STACK_LINE(365)
				if ((tmp3)){
					HX_STACK_LINE(365)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(365)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(365)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				bool tmp2 = (anchor1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(365)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(365)
				if ((tmp2)){
					HX_STACK_LINE(365)
					tmp3 = anchor1->zpp_disp;
				}
				else{
					HX_STACK_LINE(365)
					tmp3 = false;
				}
				HX_STACK_LINE(365)
				if ((tmp3)){
					HX_STACK_LINE(365)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(365)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(365)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(365)
				bool tmp2 = _this1->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(365)
				if ((tmp2)){
					HX_STACK_LINE(365)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(365)
				bool tmp3 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(365)
				if ((tmp3)){
					HX_STACK_LINE(365)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(365)
			bool tmp2 = (anchor1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(365)
			if ((tmp2)){
				HX_STACK_LINE(365)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
			}
			HX_STACK_LINE(365)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					bool tmp5 = (anchor1 != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(365)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(365)
					if ((tmp5)){
						HX_STACK_LINE(365)
						tmp6 = anchor1->zpp_disp;
					}
					else{
						HX_STACK_LINE(365)
						tmp6 = false;
					}
					HX_STACK_LINE(365)
					if ((tmp6)){
						HX_STACK_LINE(365)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(365)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(365)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(365)
						bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(365)
						if ((tmp7)){
							HX_STACK_LINE(365)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(365)
					tmp4 = anchor1->zpp_inner->x;
				}
				HX_STACK_LINE(365)
				Float x = tmp4;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(365)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					bool tmp6 = (anchor1 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(365)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(365)
					if ((tmp6)){
						HX_STACK_LINE(365)
						tmp7 = anchor1->zpp_disp;
					}
					else{
						HX_STACK_LINE(365)
						tmp7 = false;
					}
					HX_STACK_LINE(365)
					if ((tmp7)){
						HX_STACK_LINE(365)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(365)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(365)
						HX_STACK_DO_THROW(tmp9);
					}
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(365)
						bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(365)
						if ((tmp8)){
							HX_STACK_LINE(365)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(365)
					tmp5 = anchor1->zpp_inner->y;
				}
				HX_STACK_LINE(365)
				Float y = tmp5;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(365)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(365)
					if ((tmp6)){
						HX_STACK_LINE(365)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(365)
						tmp7 = false;
					}
					HX_STACK_LINE(365)
					if ((tmp7)){
						HX_STACK_LINE(365)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(365)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(365)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(365)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(365)
					if ((tmp6)){
						HX_STACK_LINE(365)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(365)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(365)
					if ((tmp7)){
						HX_STACK_LINE(365)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(365)
				bool tmp6 = (x != x);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(365)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(365)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(365)
				if ((tmp7)){
					HX_STACK_LINE(365)
					tmp8 = (y != y);
				}
				else{
					HX_STACK_LINE(365)
					tmp8 = true;
				}
				HX_STACK_LINE(365)
				if ((tmp8)){
					HX_STACK_LINE(365)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(365)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(365)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(365)
						if ((tmp10)){
							HX_STACK_LINE(365)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(365)
							tmp11 = false;
						}
						HX_STACK_LINE(365)
						if ((tmp11)){
							HX_STACK_LINE(365)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(365)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(365)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(365)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(365)
						if ((tmp10)){
							HX_STACK_LINE(365)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(365)
					tmp9 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(365)
				Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(365)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(365)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(365)
				if ((tmp11)){
					HX_STACK_LINE(365)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(365)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(365)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(365)
							bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(365)
							if ((tmp17)){
								HX_STACK_LINE(365)
								tmp16 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(365)
								tmp16 = false;
							}
							HX_STACK_LINE(365)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(365)
							if ((tmp18)){
								HX_STACK_LINE(365)
								::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(365)
								::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(365)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(365)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(365)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(365)
								HX_STACK_DO_THROW(tmp23);
							}
						}
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(365)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(365)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(365)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(365)
							if ((tmp16)){
								HX_STACK_LINE(365)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(365)
						Float tmp14 = _this->zpp_inner->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(365)
						tmp13 = tmp14;
					}
					HX_STACK_LINE(365)
					Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(365)
					tmp12 = (tmp13 == tmp14);
				}
				else{
					HX_STACK_LINE(365)
					tmp12 = false;
				}
				HX_STACK_LINE(365)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(365)
				if ((tmp13)){
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(365)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(365)
						{
						}
					}
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(365)
						bool tmp14 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(365)
						if ((tmp14)){
							HX_STACK_LINE(365)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = _this1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(365)
							_this1->_invalidate(tmp15);
						}
					}
				}
				HX_STACK_LINE(365)
				tmp3 = _this;
			}
			HX_STACK_LINE(365)
			::nape::geom::Vec2 ret = tmp3;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(365)
				tmp4 = anchor1->zpp_inner->weak;
				HX_STACK_LINE(365)
				if ((tmp4)){
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							bool tmp5 = (anchor1 != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(365)
							bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(365)
							if ((tmp5)){
								HX_STACK_LINE(365)
								tmp6 = anchor1->zpp_disp;
							}
							else{
								HX_STACK_LINE(365)
								tmp6 = false;
							}
							HX_STACK_LINE(365)
							if ((tmp6)){
								HX_STACK_LINE(365)
								::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(365)
								::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(365)
								HX_STACK_DO_THROW(tmp8);
							}
						}
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(365)
							bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(365)
							if ((tmp5)){
								HX_STACK_LINE(365)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(365)
							bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(365)
							if ((tmp6)){
								HX_STACK_LINE(365)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(365)
						bool tmp5 = anchor1->zpp_inner->_inuse;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(365)
						if ((tmp5)){
							HX_STACK_LINE(365)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(365)
						::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(365)
						anchor1->zpp_inner->outer = null();
						HX_STACK_LINE(365)
						anchor1->zpp_inner = null();
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(365)
							o->zpp_pool = null();
							HX_STACK_LINE(365)
							::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(365)
							bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(365)
							if ((tmp7)){
								HX_STACK_LINE(365)
								::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(365)
								tmp8->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(365)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(365)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(365)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(365)
								if ((tmp6)){
									HX_STACK_LINE(365)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(365)
									o->outer = null();
								}
								HX_STACK_LINE(365)
								o->_isimmutable = null();
								HX_STACK_LINE(365)
								o->_validate = null();
								HX_STACK_LINE(365)
								o->_invalidate = null();
							}
							HX_STACK_LINE(365)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(365)
							o->next = tmp6;
							HX_STACK_LINE(365)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(365)
					true;
				}
				else{
					HX_STACK_LINE(365)
					false;
				}
			}
			HX_STACK_LINE(365)
			ret;
		}
	}
	HX_STACK_LINE(367)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(367)
	{
		HX_STACK_LINE(367)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(367)
		::nape::geom::Vec2 tmp2 = tmp1->wrap_a1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(367)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(367)
		if ((tmp3)){
			HX_STACK_LINE(367)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(367)
			tmp4->setup_a1();
		}
		HX_STACK_LINE(367)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(367)
		tmp = tmp4->wrap_a1;
	}
	HX_STACK_LINE(367)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_anchor1,return )

::nape::geom::Vec2 PulleyJoint_obj::get_anchor2( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","get_anchor2",0x107d0fec,"nape.constraint.PulleyJoint.get_anchor2","nape/constraint/PulleyJoint.hx",376,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(377)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(377)
	::nape::geom::Vec2 tmp1 = tmp->wrap_a2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(377)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(377)
	if ((tmp2)){
		HX_STACK_LINE(377)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(377)
		tmp3->setup_a2();
	}
	HX_STACK_LINE(378)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(378)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_a2;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(378)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_anchor2,return )

::nape::geom::Vec2 PulleyJoint_obj::set_anchor2( ::nape::geom::Vec2 anchor2){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","set_anchor2",0x1aea16f8,"nape.constraint.PulleyJoint.set_anchor2","nape/constraint/PulleyJoint.hx",380,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor2,"anchor2")
	HX_STACK_LINE(381)
	{
		HX_STACK_LINE(382)
		{
			HX_STACK_LINE(384)
			bool tmp = (anchor2 != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(384)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(384)
			if ((tmp)){
				HX_STACK_LINE(384)
				tmp1 = anchor2->zpp_disp;
			}
			else{
				HX_STACK_LINE(384)
				tmp1 = false;
			}
			HX_STACK_LINE(384)
			if ((tmp1)){
				HX_STACK_LINE(384)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(384)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(384)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(388)
		bool tmp = (anchor2 == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(388)
		if ((tmp)){
			HX_STACK_LINE(388)
			::String tmp1 = HX_HCSTRING("Error: Constraint::anchor2","\xb2","\x15","\x18","\x54");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(388)
			::String tmp2 = (tmp1 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(388)
			HX_STACK_DO_THROW(tmp2);
		}
		HX_STACK_LINE(390)
		{
			HX_STACK_LINE(390)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(390)
			{
				HX_STACK_LINE(390)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(390)
				::nape::geom::Vec2 tmp3 = tmp2->wrap_a2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(390)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(390)
				if ((tmp4)){
					HX_STACK_LINE(390)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(390)
					tmp5->setup_a2();
				}
				HX_STACK_LINE(390)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(390)
				tmp1 = tmp5->wrap_a2;
			}
			HX_STACK_LINE(390)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(390)
			{
				HX_STACK_LINE(390)
				bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(390)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(390)
				if ((tmp2)){
					HX_STACK_LINE(390)
					tmp3 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(390)
					tmp3 = false;
				}
				HX_STACK_LINE(390)
				if ((tmp3)){
					HX_STACK_LINE(390)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(390)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(390)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(390)
			{
				HX_STACK_LINE(390)
				bool tmp2 = (anchor2 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(390)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(390)
				if ((tmp2)){
					HX_STACK_LINE(390)
					tmp3 = anchor2->zpp_disp;
				}
				else{
					HX_STACK_LINE(390)
					tmp3 = false;
				}
				HX_STACK_LINE(390)
				if ((tmp3)){
					HX_STACK_LINE(390)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(390)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(390)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(390)
			{
				HX_STACK_LINE(390)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(390)
				bool tmp2 = _this1->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(390)
				if ((tmp2)){
					HX_STACK_LINE(390)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(390)
				bool tmp3 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(390)
				if ((tmp3)){
					HX_STACK_LINE(390)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(390)
			bool tmp2 = (anchor2 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(390)
			if ((tmp2)){
				HX_STACK_LINE(390)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
			}
			HX_STACK_LINE(390)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(390)
			{
				HX_STACK_LINE(390)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(390)
				{
					HX_STACK_LINE(390)
					bool tmp5 = (anchor2 != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(390)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(390)
					if ((tmp5)){
						HX_STACK_LINE(390)
						tmp6 = anchor2->zpp_disp;
					}
					else{
						HX_STACK_LINE(390)
						tmp6 = false;
					}
					HX_STACK_LINE(390)
					if ((tmp6)){
						HX_STACK_LINE(390)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(390)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(390)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(390)
					{
						HX_STACK_LINE(390)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(390)
						bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(390)
						if ((tmp7)){
							HX_STACK_LINE(390)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(390)
					tmp4 = anchor2->zpp_inner->x;
				}
				HX_STACK_LINE(390)
				Float x = tmp4;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(390)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(390)
				{
					HX_STACK_LINE(390)
					bool tmp6 = (anchor2 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(390)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(390)
					if ((tmp6)){
						HX_STACK_LINE(390)
						tmp7 = anchor2->zpp_disp;
					}
					else{
						HX_STACK_LINE(390)
						tmp7 = false;
					}
					HX_STACK_LINE(390)
					if ((tmp7)){
						HX_STACK_LINE(390)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(390)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(390)
						HX_STACK_DO_THROW(tmp9);
					}
					HX_STACK_LINE(390)
					{
						HX_STACK_LINE(390)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(390)
						bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(390)
						if ((tmp8)){
							HX_STACK_LINE(390)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(390)
					tmp5 = anchor2->zpp_inner->y;
				}
				HX_STACK_LINE(390)
				Float y = tmp5;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(390)
				{
					HX_STACK_LINE(390)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(390)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(390)
					if ((tmp6)){
						HX_STACK_LINE(390)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(390)
						tmp7 = false;
					}
					HX_STACK_LINE(390)
					if ((tmp7)){
						HX_STACK_LINE(390)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(390)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(390)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(390)
				{
					HX_STACK_LINE(390)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(390)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(390)
					if ((tmp6)){
						HX_STACK_LINE(390)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(390)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(390)
					if ((tmp7)){
						HX_STACK_LINE(390)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(390)
				bool tmp6 = (x != x);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(390)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(390)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(390)
				if ((tmp7)){
					HX_STACK_LINE(390)
					tmp8 = (y != y);
				}
				else{
					HX_STACK_LINE(390)
					tmp8 = true;
				}
				HX_STACK_LINE(390)
				if ((tmp8)){
					HX_STACK_LINE(390)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(390)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(390)
				{
					HX_STACK_LINE(390)
					{
						HX_STACK_LINE(390)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(390)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(390)
						if ((tmp10)){
							HX_STACK_LINE(390)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(390)
							tmp11 = false;
						}
						HX_STACK_LINE(390)
						if ((tmp11)){
							HX_STACK_LINE(390)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(390)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(390)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(390)
					{
						HX_STACK_LINE(390)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(390)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(390)
						if ((tmp10)){
							HX_STACK_LINE(390)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(390)
					tmp9 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(390)
				Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(390)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(390)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(390)
				if ((tmp11)){
					HX_STACK_LINE(390)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(390)
					{
						HX_STACK_LINE(390)
						{
							HX_STACK_LINE(390)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(390)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(390)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(390)
							bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(390)
							if ((tmp17)){
								HX_STACK_LINE(390)
								tmp16 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(390)
								tmp16 = false;
							}
							HX_STACK_LINE(390)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(390)
							if ((tmp18)){
								HX_STACK_LINE(390)
								::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(390)
								::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(390)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(390)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(390)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(390)
								HX_STACK_DO_THROW(tmp23);
							}
						}
						HX_STACK_LINE(390)
						{
							HX_STACK_LINE(390)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(390)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(390)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(390)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(390)
							if ((tmp16)){
								HX_STACK_LINE(390)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(390)
						Float tmp14 = _this->zpp_inner->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(390)
						tmp13 = tmp14;
					}
					HX_STACK_LINE(390)
					Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(390)
					tmp12 = (tmp13 == tmp14);
				}
				else{
					HX_STACK_LINE(390)
					tmp12 = false;
				}
				HX_STACK_LINE(390)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(390)
				if ((tmp13)){
					HX_STACK_LINE(390)
					{
						HX_STACK_LINE(390)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(390)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(390)
						{
						}
					}
					HX_STACK_LINE(390)
					{
						HX_STACK_LINE(390)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(390)
						bool tmp14 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(390)
						if ((tmp14)){
							HX_STACK_LINE(390)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = _this1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(390)
							_this1->_invalidate(tmp15);
						}
					}
				}
				HX_STACK_LINE(390)
				tmp3 = _this;
			}
			HX_STACK_LINE(390)
			::nape::geom::Vec2 ret = tmp3;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(390)
			{
				HX_STACK_LINE(390)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(390)
				tmp4 = anchor2->zpp_inner->weak;
				HX_STACK_LINE(390)
				if ((tmp4)){
					HX_STACK_LINE(390)
					{
						HX_STACK_LINE(390)
						{
							HX_STACK_LINE(390)
							bool tmp5 = (anchor2 != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(390)
							bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(390)
							if ((tmp5)){
								HX_STACK_LINE(390)
								tmp6 = anchor2->zpp_disp;
							}
							else{
								HX_STACK_LINE(390)
								tmp6 = false;
							}
							HX_STACK_LINE(390)
							if ((tmp6)){
								HX_STACK_LINE(390)
								::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(390)
								::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(390)
								HX_STACK_DO_THROW(tmp8);
							}
						}
						HX_STACK_LINE(390)
						{
							HX_STACK_LINE(390)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(390)
							bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(390)
							if ((tmp5)){
								HX_STACK_LINE(390)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(390)
							bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(390)
							if ((tmp6)){
								HX_STACK_LINE(390)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(390)
						bool tmp5 = anchor2->zpp_inner->_inuse;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(390)
						if ((tmp5)){
							HX_STACK_LINE(390)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(390)
						::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(390)
						anchor2->zpp_inner->outer = null();
						HX_STACK_LINE(390)
						anchor2->zpp_inner = null();
						HX_STACK_LINE(390)
						{
							HX_STACK_LINE(390)
							::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(390)
							o->zpp_pool = null();
							HX_STACK_LINE(390)
							::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(390)
							bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(390)
							if ((tmp7)){
								HX_STACK_LINE(390)
								::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(390)
								tmp8->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(390)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(390)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(390)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(390)
						{
							HX_STACK_LINE(390)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(390)
							{
								HX_STACK_LINE(390)
								bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(390)
								if ((tmp6)){
									HX_STACK_LINE(390)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(390)
									o->outer = null();
								}
								HX_STACK_LINE(390)
								o->_isimmutable = null();
								HX_STACK_LINE(390)
								o->_validate = null();
								HX_STACK_LINE(390)
								o->_invalidate = null();
							}
							HX_STACK_LINE(390)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(390)
							o->next = tmp6;
							HX_STACK_LINE(390)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(390)
					true;
				}
				else{
					HX_STACK_LINE(390)
					false;
				}
			}
			HX_STACK_LINE(390)
			ret;
		}
	}
	HX_STACK_LINE(392)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(392)
	{
		HX_STACK_LINE(392)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(392)
		::nape::geom::Vec2 tmp2 = tmp1->wrap_a2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(392)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(392)
		if ((tmp3)){
			HX_STACK_LINE(392)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(392)
			tmp4->setup_a2();
		}
		HX_STACK_LINE(392)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(392)
		tmp = tmp4->wrap_a2;
	}
	HX_STACK_LINE(392)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_anchor2,return )

::nape::geom::Vec2 PulleyJoint_obj::get_anchor3( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","get_anchor3",0x107d0fed,"nape.constraint.PulleyJoint.get_anchor3","nape/constraint/PulleyJoint.hx",401,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(402)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(402)
	::nape::geom::Vec2 tmp1 = tmp->wrap_a3;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(402)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(402)
	if ((tmp2)){
		HX_STACK_LINE(402)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(402)
		tmp3->setup_a3();
	}
	HX_STACK_LINE(403)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(403)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_a3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(403)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_anchor3,return )

::nape::geom::Vec2 PulleyJoint_obj::set_anchor3( ::nape::geom::Vec2 anchor3){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","set_anchor3",0x1aea16f9,"nape.constraint.PulleyJoint.set_anchor3","nape/constraint/PulleyJoint.hx",405,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor3,"anchor3")
	HX_STACK_LINE(406)
	{
		HX_STACK_LINE(407)
		{
			HX_STACK_LINE(409)
			bool tmp = (anchor3 != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(409)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(409)
			if ((tmp)){
				HX_STACK_LINE(409)
				tmp1 = anchor3->zpp_disp;
			}
			else{
				HX_STACK_LINE(409)
				tmp1 = false;
			}
			HX_STACK_LINE(409)
			if ((tmp1)){
				HX_STACK_LINE(409)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(409)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(409)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(413)
		bool tmp = (anchor3 == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(413)
		if ((tmp)){
			HX_STACK_LINE(413)
			::String tmp1 = HX_HCSTRING("Error: Constraint::anchor3","\xb3","\x15","\x18","\x54");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(413)
			::String tmp2 = (tmp1 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(413)
			HX_STACK_DO_THROW(tmp2);
		}
		HX_STACK_LINE(415)
		{
			HX_STACK_LINE(415)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(415)
			{
				HX_STACK_LINE(415)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(415)
				::nape::geom::Vec2 tmp3 = tmp2->wrap_a3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(415)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(415)
				if ((tmp4)){
					HX_STACK_LINE(415)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(415)
					tmp5->setup_a3();
				}
				HX_STACK_LINE(415)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(415)
				tmp1 = tmp5->wrap_a3;
			}
			HX_STACK_LINE(415)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(415)
			{
				HX_STACK_LINE(415)
				bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(415)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(415)
				if ((tmp2)){
					HX_STACK_LINE(415)
					tmp3 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(415)
					tmp3 = false;
				}
				HX_STACK_LINE(415)
				if ((tmp3)){
					HX_STACK_LINE(415)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(415)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(415)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(415)
			{
				HX_STACK_LINE(415)
				bool tmp2 = (anchor3 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(415)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(415)
				if ((tmp2)){
					HX_STACK_LINE(415)
					tmp3 = anchor3->zpp_disp;
				}
				else{
					HX_STACK_LINE(415)
					tmp3 = false;
				}
				HX_STACK_LINE(415)
				if ((tmp3)){
					HX_STACK_LINE(415)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(415)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(415)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(415)
			{
				HX_STACK_LINE(415)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(415)
				bool tmp2 = _this1->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(415)
				if ((tmp2)){
					HX_STACK_LINE(415)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(415)
				bool tmp3 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(415)
				if ((tmp3)){
					HX_STACK_LINE(415)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(415)
			bool tmp2 = (anchor3 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(415)
			if ((tmp2)){
				HX_STACK_LINE(415)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
			}
			HX_STACK_LINE(415)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(415)
			{
				HX_STACK_LINE(415)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(415)
				{
					HX_STACK_LINE(415)
					bool tmp5 = (anchor3 != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(415)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(415)
					if ((tmp5)){
						HX_STACK_LINE(415)
						tmp6 = anchor3->zpp_disp;
					}
					else{
						HX_STACK_LINE(415)
						tmp6 = false;
					}
					HX_STACK_LINE(415)
					if ((tmp6)){
						HX_STACK_LINE(415)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(415)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(415)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(415)
					{
						HX_STACK_LINE(415)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor3->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(415)
						bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(415)
						if ((tmp7)){
							HX_STACK_LINE(415)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(415)
					tmp4 = anchor3->zpp_inner->x;
				}
				HX_STACK_LINE(415)
				Float x = tmp4;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(415)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(415)
				{
					HX_STACK_LINE(415)
					bool tmp6 = (anchor3 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(415)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(415)
					if ((tmp6)){
						HX_STACK_LINE(415)
						tmp7 = anchor3->zpp_disp;
					}
					else{
						HX_STACK_LINE(415)
						tmp7 = false;
					}
					HX_STACK_LINE(415)
					if ((tmp7)){
						HX_STACK_LINE(415)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(415)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(415)
						HX_STACK_DO_THROW(tmp9);
					}
					HX_STACK_LINE(415)
					{
						HX_STACK_LINE(415)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor3->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(415)
						bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(415)
						if ((tmp8)){
							HX_STACK_LINE(415)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(415)
					tmp5 = anchor3->zpp_inner->y;
				}
				HX_STACK_LINE(415)
				Float y = tmp5;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(415)
				{
					HX_STACK_LINE(415)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(415)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(415)
					if ((tmp6)){
						HX_STACK_LINE(415)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(415)
						tmp7 = false;
					}
					HX_STACK_LINE(415)
					if ((tmp7)){
						HX_STACK_LINE(415)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(415)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(415)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(415)
				{
					HX_STACK_LINE(415)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(415)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(415)
					if ((tmp6)){
						HX_STACK_LINE(415)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(415)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(415)
					if ((tmp7)){
						HX_STACK_LINE(415)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(415)
				bool tmp6 = (x != x);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(415)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(415)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(415)
				if ((tmp7)){
					HX_STACK_LINE(415)
					tmp8 = (y != y);
				}
				else{
					HX_STACK_LINE(415)
					tmp8 = true;
				}
				HX_STACK_LINE(415)
				if ((tmp8)){
					HX_STACK_LINE(415)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(415)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(415)
				{
					HX_STACK_LINE(415)
					{
						HX_STACK_LINE(415)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(415)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(415)
						if ((tmp10)){
							HX_STACK_LINE(415)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(415)
							tmp11 = false;
						}
						HX_STACK_LINE(415)
						if ((tmp11)){
							HX_STACK_LINE(415)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(415)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(415)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(415)
					{
						HX_STACK_LINE(415)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(415)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(415)
						if ((tmp10)){
							HX_STACK_LINE(415)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(415)
					tmp9 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(415)
				Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(415)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(415)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(415)
				if ((tmp11)){
					HX_STACK_LINE(415)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(415)
					{
						HX_STACK_LINE(415)
						{
							HX_STACK_LINE(415)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(415)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(415)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(415)
							bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(415)
							if ((tmp17)){
								HX_STACK_LINE(415)
								tmp16 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(415)
								tmp16 = false;
							}
							HX_STACK_LINE(415)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(415)
							if ((tmp18)){
								HX_STACK_LINE(415)
								::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(415)
								::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(415)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(415)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(415)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(415)
								HX_STACK_DO_THROW(tmp23);
							}
						}
						HX_STACK_LINE(415)
						{
							HX_STACK_LINE(415)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(415)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(415)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(415)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(415)
							if ((tmp16)){
								HX_STACK_LINE(415)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(415)
						Float tmp14 = _this->zpp_inner->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(415)
						tmp13 = tmp14;
					}
					HX_STACK_LINE(415)
					Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(415)
					tmp12 = (tmp13 == tmp14);
				}
				else{
					HX_STACK_LINE(415)
					tmp12 = false;
				}
				HX_STACK_LINE(415)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(415)
				if ((tmp13)){
					HX_STACK_LINE(415)
					{
						HX_STACK_LINE(415)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(415)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(415)
						{
						}
					}
					HX_STACK_LINE(415)
					{
						HX_STACK_LINE(415)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(415)
						bool tmp14 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(415)
						if ((tmp14)){
							HX_STACK_LINE(415)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = _this1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(415)
							_this1->_invalidate(tmp15);
						}
					}
				}
				HX_STACK_LINE(415)
				tmp3 = _this;
			}
			HX_STACK_LINE(415)
			::nape::geom::Vec2 ret = tmp3;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(415)
			{
				HX_STACK_LINE(415)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(415)
				tmp4 = anchor3->zpp_inner->weak;
				HX_STACK_LINE(415)
				if ((tmp4)){
					HX_STACK_LINE(415)
					{
						HX_STACK_LINE(415)
						{
							HX_STACK_LINE(415)
							bool tmp5 = (anchor3 != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(415)
							bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(415)
							if ((tmp5)){
								HX_STACK_LINE(415)
								tmp6 = anchor3->zpp_disp;
							}
							else{
								HX_STACK_LINE(415)
								tmp6 = false;
							}
							HX_STACK_LINE(415)
							if ((tmp6)){
								HX_STACK_LINE(415)
								::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(415)
								::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(415)
								HX_STACK_DO_THROW(tmp8);
							}
						}
						HX_STACK_LINE(415)
						{
							HX_STACK_LINE(415)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor3->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(415)
							bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(415)
							if ((tmp5)){
								HX_STACK_LINE(415)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(415)
							bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(415)
							if ((tmp6)){
								HX_STACK_LINE(415)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(415)
						bool tmp5 = anchor3->zpp_inner->_inuse;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(415)
						if ((tmp5)){
							HX_STACK_LINE(415)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(415)
						::zpp_nape::geom::ZPP_Vec2 inner = anchor3->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(415)
						anchor3->zpp_inner->outer = null();
						HX_STACK_LINE(415)
						anchor3->zpp_inner = null();
						HX_STACK_LINE(415)
						{
							HX_STACK_LINE(415)
							::nape::geom::Vec2 o = anchor3;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(415)
							o->zpp_pool = null();
							HX_STACK_LINE(415)
							::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(415)
							bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(415)
							if ((tmp7)){
								HX_STACK_LINE(415)
								::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(415)
								tmp8->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(415)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(415)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(415)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(415)
						{
							HX_STACK_LINE(415)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(415)
							{
								HX_STACK_LINE(415)
								bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(415)
								if ((tmp6)){
									HX_STACK_LINE(415)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(415)
									o->outer = null();
								}
								HX_STACK_LINE(415)
								o->_isimmutable = null();
								HX_STACK_LINE(415)
								o->_validate = null();
								HX_STACK_LINE(415)
								o->_invalidate = null();
							}
							HX_STACK_LINE(415)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(415)
							o->next = tmp6;
							HX_STACK_LINE(415)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(415)
					true;
				}
				else{
					HX_STACK_LINE(415)
					false;
				}
			}
			HX_STACK_LINE(415)
			ret;
		}
	}
	HX_STACK_LINE(417)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(417)
	{
		HX_STACK_LINE(417)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(417)
		::nape::geom::Vec2 tmp2 = tmp1->wrap_a3;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(417)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(417)
		if ((tmp3)){
			HX_STACK_LINE(417)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(417)
			tmp4->setup_a3();
		}
		HX_STACK_LINE(417)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(417)
		tmp = tmp4->wrap_a3;
	}
	HX_STACK_LINE(417)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_anchor3,return )

::nape::geom::Vec2 PulleyJoint_obj::get_anchor4( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","get_anchor4",0x107d0fee,"nape.constraint.PulleyJoint.get_anchor4","nape/constraint/PulleyJoint.hx",426,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(427)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(427)
	::nape::geom::Vec2 tmp1 = tmp->wrap_a4;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(427)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(427)
	if ((tmp2)){
		HX_STACK_LINE(427)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(427)
		tmp3->setup_a4();
	}
	HX_STACK_LINE(428)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(428)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_a4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(428)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_anchor4,return )

::nape::geom::Vec2 PulleyJoint_obj::set_anchor4( ::nape::geom::Vec2 anchor4){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","set_anchor4",0x1aea16fa,"nape.constraint.PulleyJoint.set_anchor4","nape/constraint/PulleyJoint.hx",430,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor4,"anchor4")
	HX_STACK_LINE(431)
	{
		HX_STACK_LINE(432)
		{
			HX_STACK_LINE(434)
			bool tmp = (anchor4 != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(434)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(434)
			if ((tmp)){
				HX_STACK_LINE(434)
				tmp1 = anchor4->zpp_disp;
			}
			else{
				HX_STACK_LINE(434)
				tmp1 = false;
			}
			HX_STACK_LINE(434)
			if ((tmp1)){
				HX_STACK_LINE(434)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(434)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(434)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(438)
		bool tmp = (anchor4 == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(438)
		if ((tmp)){
			HX_STACK_LINE(438)
			::String tmp1 = HX_HCSTRING("Error: Constraint::anchor4","\xb4","\x15","\x18","\x54");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(438)
			::String tmp2 = (tmp1 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(438)
			HX_STACK_DO_THROW(tmp2);
		}
		HX_STACK_LINE(440)
		{
			HX_STACK_LINE(440)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(440)
			{
				HX_STACK_LINE(440)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(440)
				::nape::geom::Vec2 tmp3 = tmp2->wrap_a4;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(440)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(440)
				if ((tmp4)){
					HX_STACK_LINE(440)
					::zpp_nape::constraint::ZPP_PulleyJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(440)
					tmp5->setup_a4();
				}
				HX_STACK_LINE(440)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(440)
				tmp1 = tmp5->wrap_a4;
			}
			HX_STACK_LINE(440)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(440)
			{
				HX_STACK_LINE(440)
				bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(440)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(440)
				if ((tmp2)){
					HX_STACK_LINE(440)
					tmp3 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(440)
					tmp3 = false;
				}
				HX_STACK_LINE(440)
				if ((tmp3)){
					HX_STACK_LINE(440)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(440)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(440)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(440)
			{
				HX_STACK_LINE(440)
				bool tmp2 = (anchor4 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(440)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(440)
				if ((tmp2)){
					HX_STACK_LINE(440)
					tmp3 = anchor4->zpp_disp;
				}
				else{
					HX_STACK_LINE(440)
					tmp3 = false;
				}
				HX_STACK_LINE(440)
				if ((tmp3)){
					HX_STACK_LINE(440)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(440)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(440)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(440)
			{
				HX_STACK_LINE(440)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(440)
				bool tmp2 = _this1->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(440)
				if ((tmp2)){
					HX_STACK_LINE(440)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(440)
				bool tmp3 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(440)
				if ((tmp3)){
					HX_STACK_LINE(440)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(440)
			bool tmp2 = (anchor4 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(440)
			if ((tmp2)){
				HX_STACK_LINE(440)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
			}
			HX_STACK_LINE(440)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(440)
			{
				HX_STACK_LINE(440)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(440)
				{
					HX_STACK_LINE(440)
					bool tmp5 = (anchor4 != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(440)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(440)
					if ((tmp5)){
						HX_STACK_LINE(440)
						tmp6 = anchor4->zpp_disp;
					}
					else{
						HX_STACK_LINE(440)
						tmp6 = false;
					}
					HX_STACK_LINE(440)
					if ((tmp6)){
						HX_STACK_LINE(440)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(440)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(440)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(440)
					{
						HX_STACK_LINE(440)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor4->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(440)
						bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(440)
						if ((tmp7)){
							HX_STACK_LINE(440)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(440)
					tmp4 = anchor4->zpp_inner->x;
				}
				HX_STACK_LINE(440)
				Float x = tmp4;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(440)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(440)
				{
					HX_STACK_LINE(440)
					bool tmp6 = (anchor4 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(440)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(440)
					if ((tmp6)){
						HX_STACK_LINE(440)
						tmp7 = anchor4->zpp_disp;
					}
					else{
						HX_STACK_LINE(440)
						tmp7 = false;
					}
					HX_STACK_LINE(440)
					if ((tmp7)){
						HX_STACK_LINE(440)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(440)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(440)
						HX_STACK_DO_THROW(tmp9);
					}
					HX_STACK_LINE(440)
					{
						HX_STACK_LINE(440)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor4->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(440)
						bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(440)
						if ((tmp8)){
							HX_STACK_LINE(440)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(440)
					tmp5 = anchor4->zpp_inner->y;
				}
				HX_STACK_LINE(440)
				Float y = tmp5;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(440)
				{
					HX_STACK_LINE(440)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(440)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(440)
					if ((tmp6)){
						HX_STACK_LINE(440)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(440)
						tmp7 = false;
					}
					HX_STACK_LINE(440)
					if ((tmp7)){
						HX_STACK_LINE(440)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(440)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(440)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(440)
				{
					HX_STACK_LINE(440)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(440)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(440)
					if ((tmp6)){
						HX_STACK_LINE(440)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(440)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(440)
					if ((tmp7)){
						HX_STACK_LINE(440)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(440)
				bool tmp6 = (x != x);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(440)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(440)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(440)
				if ((tmp7)){
					HX_STACK_LINE(440)
					tmp8 = (y != y);
				}
				else{
					HX_STACK_LINE(440)
					tmp8 = true;
				}
				HX_STACK_LINE(440)
				if ((tmp8)){
					HX_STACK_LINE(440)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(440)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(440)
				{
					HX_STACK_LINE(440)
					{
						HX_STACK_LINE(440)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(440)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(440)
						if ((tmp10)){
							HX_STACK_LINE(440)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(440)
							tmp11 = false;
						}
						HX_STACK_LINE(440)
						if ((tmp11)){
							HX_STACK_LINE(440)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(440)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(440)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(440)
					{
						HX_STACK_LINE(440)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(440)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(440)
						if ((tmp10)){
							HX_STACK_LINE(440)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(440)
					tmp9 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(440)
				Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(440)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(440)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(440)
				if ((tmp11)){
					HX_STACK_LINE(440)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(440)
					{
						HX_STACK_LINE(440)
						{
							HX_STACK_LINE(440)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(440)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(440)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(440)
							bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(440)
							if ((tmp17)){
								HX_STACK_LINE(440)
								tmp16 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(440)
								tmp16 = false;
							}
							HX_STACK_LINE(440)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(440)
							if ((tmp18)){
								HX_STACK_LINE(440)
								::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(440)
								::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(440)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(440)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(440)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(440)
								HX_STACK_DO_THROW(tmp23);
							}
						}
						HX_STACK_LINE(440)
						{
							HX_STACK_LINE(440)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(440)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(440)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(440)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(440)
							if ((tmp16)){
								HX_STACK_LINE(440)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(440)
						Float tmp14 = _this->zpp_inner->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(440)
						tmp13 = tmp14;
					}
					HX_STACK_LINE(440)
					Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(440)
					tmp12 = (tmp13 == tmp14);
				}
				else{
					HX_STACK_LINE(440)
					tmp12 = false;
				}
				HX_STACK_LINE(440)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(440)
				if ((tmp13)){
					HX_STACK_LINE(440)
					{
						HX_STACK_LINE(440)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(440)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(440)
						{
						}
					}
					HX_STACK_LINE(440)
					{
						HX_STACK_LINE(440)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(440)
						bool tmp14 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(440)
						if ((tmp14)){
							HX_STACK_LINE(440)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = _this1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(440)
							_this1->_invalidate(tmp15);
						}
					}
				}
				HX_STACK_LINE(440)
				tmp3 = _this;
			}
			HX_STACK_LINE(440)
			::nape::geom::Vec2 ret = tmp3;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(440)
			{
				HX_STACK_LINE(440)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(440)
				tmp4 = anchor4->zpp_inner->weak;
				HX_STACK_LINE(440)
				if ((tmp4)){
					HX_STACK_LINE(440)
					{
						HX_STACK_LINE(440)
						{
							HX_STACK_LINE(440)
							bool tmp5 = (anchor4 != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(440)
							bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(440)
							if ((tmp5)){
								HX_STACK_LINE(440)
								tmp6 = anchor4->zpp_disp;
							}
							else{
								HX_STACK_LINE(440)
								tmp6 = false;
							}
							HX_STACK_LINE(440)
							if ((tmp6)){
								HX_STACK_LINE(440)
								::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(440)
								::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(440)
								HX_STACK_DO_THROW(tmp8);
							}
						}
						HX_STACK_LINE(440)
						{
							HX_STACK_LINE(440)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor4->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(440)
							bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(440)
							if ((tmp5)){
								HX_STACK_LINE(440)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(440)
							bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(440)
							if ((tmp6)){
								HX_STACK_LINE(440)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(440)
						bool tmp5 = anchor4->zpp_inner->_inuse;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(440)
						if ((tmp5)){
							HX_STACK_LINE(440)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(440)
						::zpp_nape::geom::ZPP_Vec2 inner = anchor4->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(440)
						anchor4->zpp_inner->outer = null();
						HX_STACK_LINE(440)
						anchor4->zpp_inner = null();
						HX_STACK_LINE(440)
						{
							HX_STACK_LINE(440)
							::nape::geom::Vec2 o = anchor4;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(440)
							o->zpp_pool = null();
							HX_STACK_LINE(440)
							::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(440)
							bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(440)
							if ((tmp7)){
								HX_STACK_LINE(440)
								::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(440)
								tmp8->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(440)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(440)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(440)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(440)
						{
							HX_STACK_LINE(440)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(440)
							{
								HX_STACK_LINE(440)
								bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(440)
								if ((tmp6)){
									HX_STACK_LINE(440)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(440)
									o->outer = null();
								}
								HX_STACK_LINE(440)
								o->_isimmutable = null();
								HX_STACK_LINE(440)
								o->_validate = null();
								HX_STACK_LINE(440)
								o->_invalidate = null();
							}
							HX_STACK_LINE(440)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(440)
							o->next = tmp6;
							HX_STACK_LINE(440)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(440)
					true;
				}
				else{
					HX_STACK_LINE(440)
					false;
				}
			}
			HX_STACK_LINE(440)
			ret;
		}
	}
	HX_STACK_LINE(442)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(442)
	{
		HX_STACK_LINE(442)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(442)
		::nape::geom::Vec2 tmp2 = tmp1->wrap_a4;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(442)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(442)
		if ((tmp3)){
			HX_STACK_LINE(442)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(442)
			tmp4->setup_a4();
		}
		HX_STACK_LINE(442)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(442)
		tmp = tmp4->wrap_a4;
	}
	HX_STACK_LINE(442)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_anchor4,return )

Float PulleyJoint_obj::get_jointMin( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","get_jointMin",0x670a2bb9,"nape.constraint.PulleyJoint.get_jointMin","nape/constraint/PulleyJoint.hx",451,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(452)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(452)
	Float tmp1 = tmp->jointMin;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(452)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_jointMin,return )

Float PulleyJoint_obj::set_jointMin( Float jointMin){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","set_jointMin",0x7c034f2d,"nape.constraint.PulleyJoint.set_jointMin","nape/constraint/PulleyJoint.hx",454,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jointMin,"jointMin")
	HX_STACK_LINE(455)
	{
		HX_STACK_LINE(456)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(456)
		tmp->immutable_midstep(HX_HCSTRING("PulleyJoint::jointMin","\x59","\x4f","\xc9","\x70"));
		HX_STACK_LINE(458)
		bool tmp1 = (jointMin != jointMin);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(458)
		if ((tmp1)){
			HX_STACK_LINE(459)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: PulleyJoint::jointMin cannot be NaN","\xa6","\x94","\x5b","\x4c"));
		}
		HX_STACK_LINE(461)
		bool tmp2 = (jointMin < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(461)
		if ((tmp2)){
			HX_STACK_LINE(462)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: PulleyJoint::jointMin must be >= 0","\x6a","\x47","\xdb","\x7e"));
		}
		HX_STACK_LINE(465)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(465)
		Float tmp4 = tmp3->jointMin;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(465)
		Float tmp5 = jointMin;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(465)
		bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(465)
		if ((tmp6)){
			HX_STACK_LINE(466)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(466)
			tmp7->jointMin = jointMin;
			HX_STACK_LINE(467)
			::zpp_nape::constraint::ZPP_Constraint tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(467)
			tmp8->wake();
		}
	}
	HX_STACK_LINE(470)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(470)
	Float tmp1 = tmp->jointMin;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(470)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_jointMin,return )

Float PulleyJoint_obj::get_jointMax( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","get_jointMax",0x670a24cb,"nape.constraint.PulleyJoint.get_jointMax","nape/constraint/PulleyJoint.hx",479,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(480)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(480)
	Float tmp1 = tmp->jointMax;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(480)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_jointMax,return )

Float PulleyJoint_obj::set_jointMax( Float jointMax){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","set_jointMax",0x7c03483f,"nape.constraint.PulleyJoint.set_jointMax","nape/constraint/PulleyJoint.hx",482,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jointMax,"jointMax")
	HX_STACK_LINE(483)
	{
		HX_STACK_LINE(484)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(484)
		tmp->immutable_midstep(HX_HCSTRING("PulleyJoint::jointMax","\x6b","\x48","\xc9","\x70"));
		HX_STACK_LINE(486)
		bool tmp1 = (jointMax != jointMax);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(486)
		if ((tmp1)){
			HX_STACK_LINE(487)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: PulleyJoint::jointMax cannot be NaN","\x38","\x89","\xae","\xe4"));
		}
		HX_STACK_LINE(489)
		bool tmp2 = (jointMax < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(489)
		if ((tmp2)){
			HX_STACK_LINE(490)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: PulleyJoint::jointMax must be >= 0","\x18","\x8b","\xc3","\x71"));
		}
		HX_STACK_LINE(493)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(493)
		Float tmp4 = tmp3->jointMax;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(493)
		Float tmp5 = jointMax;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(493)
		bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(493)
		if ((tmp6)){
			HX_STACK_LINE(494)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(494)
			tmp7->jointMax = jointMax;
			HX_STACK_LINE(495)
			::zpp_nape::constraint::ZPP_Constraint tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(495)
			tmp8->wake();
		}
	}
	HX_STACK_LINE(498)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(498)
	Float tmp1 = tmp->jointMax;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(498)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_jointMax,return )

Float PulleyJoint_obj::get_ratio( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","get_ratio",0xcb1f771a,"nape.constraint.PulleyJoint.get_ratio","nape/constraint/PulleyJoint.hx",507,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(508)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(508)
	Float tmp1 = tmp->ratio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(508)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,get_ratio,return )

Float PulleyJoint_obj::set_ratio( Float ratio){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","set_ratio",0xae706326,"nape.constraint.PulleyJoint.set_ratio","nape/constraint/PulleyJoint.hx",510,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ratio,"ratio")
	HX_STACK_LINE(511)
	{
		HX_STACK_LINE(512)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(512)
		tmp->immutable_midstep(HX_HCSTRING("PulleyJoint::ratio","\x7a","\xcf","\x1b","\x11"));
		HX_STACK_LINE(514)
		bool tmp1 = (ratio != ratio);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(514)
		if ((tmp1)){
			HX_STACK_LINE(515)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: PulleyJoint::ratio cannot be NaN","\x63","\x48","\xfa","\xb0"));
		}
		HX_STACK_LINE(518)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(518)
		Float tmp3 = tmp2->ratio;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(518)
		Float tmp4 = ratio;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(518)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(518)
		if ((tmp5)){
			HX_STACK_LINE(519)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(519)
			tmp6->ratio = ratio;
			HX_STACK_LINE(520)
			::zpp_nape::constraint::ZPP_Constraint tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(520)
			tmp7->wake();
		}
	}
	HX_STACK_LINE(523)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(523)
	Float tmp1 = tmp->ratio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(523)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(PulleyJoint_obj,set_ratio,return )

bool PulleyJoint_obj::isSlack( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","isSlack",0x761dddbe,"nape.constraint.PulleyJoint.isSlack","nape/constraint/PulleyJoint.hx",536,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(538)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(538)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(538)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(538)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(538)
	if ((tmp2)){
		HX_STACK_LINE(538)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(538)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(538)
		tmp3 = tmp4->b1->outer;
	}
	HX_STACK_LINE(538)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(538)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(538)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(538)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(538)
	if ((tmp6)){
		HX_STACK_LINE(538)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(538)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(538)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(538)
		::zpp_nape::phys::ZPP_Body tmp11 = tmp10->b2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(538)
		bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(538)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(538)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(538)
		::nape::phys::Body tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(538)
		bool tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(538)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(538)
		if ((tmp17)){
			HX_STACK_LINE(538)
			tmp15 = null();
		}
		else{
			HX_STACK_LINE(538)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp18 = this->zpp_inner_zn;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(538)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(538)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(538)
			::nape::phys::Body tmp21 = tmp20->b2->outer;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(538)
			::nape::phys::Body tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(538)
			tmp15 = tmp22;
		}
		HX_STACK_LINE(538)
		tmp7 = (tmp15 == null());
	}
	else{
		HX_STACK_LINE(538)
		tmp7 = true;
	}
	HX_STACK_LINE(538)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(538)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(538)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(538)
	if ((tmp9)){
		HX_STACK_LINE(538)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(538)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(538)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(538)
		::zpp_nape::phys::ZPP_Body tmp14 = tmp13->b3;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(538)
		bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(538)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(538)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(538)
		::nape::phys::Body tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(538)
		bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(538)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(538)
		if ((tmp20)){
			HX_STACK_LINE(538)
			tmp18 = null();
		}
		else{
			HX_STACK_LINE(538)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(538)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(538)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(538)
			::nape::phys::Body tmp24 = tmp23->b3->outer;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(538)
			::nape::phys::Body tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(538)
			tmp18 = tmp25;
		}
		HX_STACK_LINE(538)
		tmp10 = (tmp18 == null());
	}
	else{
		HX_STACK_LINE(538)
		tmp10 = true;
	}
	HX_STACK_LINE(538)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(538)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(538)
	if ((tmp11)){
		HX_STACK_LINE(538)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp13 = this->zpp_inner_zn;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(538)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(538)
		::zpp_nape::phys::ZPP_Body tmp15 = tmp14->b4;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(538)
		bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(538)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(538)
		::nape::phys::Body tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(538)
		bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(538)
		if ((tmp19)){
			HX_STACK_LINE(538)
			tmp18 = null();
		}
		else{
			HX_STACK_LINE(538)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(538)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(538)
			::nape::phys::Body tmp22 = tmp21->b4->outer;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(538)
			tmp18 = tmp22;
		}
		HX_STACK_LINE(538)
		tmp12 = (tmp18 == null());
	}
	else{
		HX_STACK_LINE(538)
		tmp12 = true;
	}
	HX_STACK_LINE(538)
	if ((tmp12)){
		HX_STACK_LINE(539)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot compute slack for PulleyJoint if either body is null.","\xe9","\x7c","\xad","\xf9"));
	}
	HX_STACK_LINE(542)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp13 = this->zpp_inner_zn;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(542)
	bool tmp14 = tmp13->slack;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(542)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC0(PulleyJoint_obj,isSlack,return )

::nape::geom::MatMN PulleyJoint_obj::impulse( ){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","impulse",0xc893d86d,"nape.constraint.PulleyJoint.impulse","nape/constraint/PulleyJoint.hx",592,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(593)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new((int)1,(int)1);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(594)
	{
		HX_STACK_LINE(594)
		bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(594)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(594)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(594)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(594)
		if ((tmp2)){
			HX_STACK_LINE(594)
			tmp3 = false;
		}
		else{
			HX_STACK_LINE(594)
			tmp3 = true;
		}
		HX_STACK_LINE(594)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(594)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(594)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(594)
		if ((tmp5)){
			HX_STACK_LINE(594)
			int tmp7 = ret->zpp_inner->m;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(594)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(594)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(594)
			tmp6 = ((int)0 >= tmp9);
		}
		else{
			HX_STACK_LINE(594)
			tmp6 = true;
		}
		HX_STACK_LINE(594)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(594)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(594)
		if ((tmp7)){
			HX_STACK_LINE(594)
			int tmp9 = ret->zpp_inner->n;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(594)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(594)
			tmp8 = ((int)0 >= tmp10);
		}
		else{
			HX_STACK_LINE(594)
			tmp8 = true;
		}
		HX_STACK_LINE(594)
		if ((tmp8)){
			HX_STACK_LINE(594)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: MatMN indices out of range","\xcc","\x72","\x58","\xe6"));
		}
		HX_STACK_LINE(594)
		Array< Float > tmp9 = ret->zpp_inner->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(594)
		int tmp10 = ret->zpp_inner->n;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(594)
		int tmp11 = ((int)0 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(594)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(594)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp13 = this->zpp_inner_zn;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(594)
		Float tmp14 = tmp13->jAcc;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(594)
		tmp9[tmp12] = tmp14;
	}
	HX_STACK_LINE(595)
	::nape::geom::MatMN tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(595)
	return tmp;
}


::nape::geom::Vec3 PulleyJoint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.constraint.PulleyJoint","bodyImpulse",0xe78339eb,"nape.constraint.PulleyJoint.bodyImpulse","nape/constraint/PulleyJoint.hx",600,0x2d6ef3f8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(602)
	bool tmp = (body == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(602)
	if ((tmp)){
		HX_STACK_LINE(603)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot evaluate impulse on null body","\x9d","\xb5","\xdc","\x16"));
	}
	HX_STACK_LINE(605)
	::nape::phys::Body tmp1 = body;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(605)
	::zpp_nape::constraint::ZPP_PulleyJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(605)
	::zpp_nape::phys::ZPP_Body tmp3 = tmp2->b1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(605)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(605)
	::nape::phys::Body tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(605)
	if ((tmp4)){
		HX_STACK_LINE(605)
		tmp5 = null();
	}
	else{
		HX_STACK_LINE(605)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(605)
		tmp5 = tmp6->b1->outer;
	}
	HX_STACK_LINE(605)
	bool tmp6 = (tmp1 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(605)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(605)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(605)
	if ((tmp7)){
		HX_STACK_LINE(605)
		::nape::phys::Body tmp9 = body;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(605)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp10 = this->zpp_inner_zn;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(605)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(605)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(605)
		::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b2;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(605)
		bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(605)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(605)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(605)
		::nape::phys::Body tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(605)
		bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(605)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(605)
		if ((tmp19)){
			HX_STACK_LINE(605)
			tmp17 = null();
		}
		else{
			HX_STACK_LINE(605)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(605)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(605)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(605)
			::nape::phys::Body tmp23 = tmp22->b2->outer;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(605)
			::nape::phys::Body tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(605)
			tmp17 = tmp24;
		}
		HX_STACK_LINE(605)
		tmp8 = (tmp9 != tmp17);
	}
	else{
		HX_STACK_LINE(605)
		tmp8 = false;
	}
	HX_STACK_LINE(605)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(605)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(605)
	if ((tmp9)){
		HX_STACK_LINE(605)
		::nape::phys::Body tmp11 = body;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(605)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp12 = this->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(605)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(605)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(605)
		::zpp_nape::phys::ZPP_Body tmp15 = tmp14->b3;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(605)
		bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(605)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(605)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(605)
		::nape::phys::Body tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(605)
		bool tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(605)
		bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(605)
		if ((tmp21)){
			HX_STACK_LINE(605)
			tmp19 = null();
		}
		else{
			HX_STACK_LINE(605)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp22 = this->zpp_inner_zn;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(605)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(605)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(605)
			::nape::phys::Body tmp25 = tmp24->b3->outer;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(605)
			::nape::phys::Body tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(605)
			tmp19 = tmp26;
		}
		HX_STACK_LINE(605)
		tmp10 = (tmp11 != tmp19);
	}
	else{
		HX_STACK_LINE(605)
		tmp10 = false;
	}
	HX_STACK_LINE(605)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(605)
	if ((tmp10)){
		HX_STACK_LINE(605)
		::nape::phys::Body tmp12 = body;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(605)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp13 = this->zpp_inner_zn;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(605)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(605)
		::zpp_nape::phys::ZPP_Body tmp15 = tmp14->b4;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(605)
		bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(605)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(605)
		::nape::phys::Body tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(605)
		bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(605)
		if ((tmp19)){
			HX_STACK_LINE(605)
			tmp18 = null();
		}
		else{
			HX_STACK_LINE(605)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(605)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(605)
			::nape::phys::Body tmp22 = tmp21->b4->outer;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(605)
			tmp18 = tmp22;
		}
		HX_STACK_LINE(605)
		tmp11 = (tmp12 != tmp18);
	}
	else{
		HX_STACK_LINE(605)
		tmp11 = false;
	}
	HX_STACK_LINE(605)
	if ((tmp11)){
		HX_STACK_LINE(606)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Body is not linked to this constraint","\x2e","\xe5","\x48","\xbf"));
	}
	HX_STACK_LINE(609)
	::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(609)
	bool tmp13 = tmp12->active;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(609)
	bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(609)
	if ((tmp14)){
		HX_STACK_LINE(610)
		::nape::geom::Vec3 tmp15 = ::nape::geom::Vec3_obj::get(null(),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(610)
		return tmp15;
	}
	else{
		HX_STACK_LINE(613)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(613)
		::zpp_nape::phys::ZPP_Body tmp16 = body->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(613)
		::nape::geom::Vec3 tmp17 = tmp15->bodyImpulse(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(613)
		return tmp17;
	}
	HX_STACK_LINE(609)
	return null();
}


Void PulleyJoint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_FRAME("nape.constraint.PulleyJoint","visitBodies",0x6c3fb763,"nape.constraint.PulleyJoint.visitBodies","nape/constraint/PulleyJoint.hx",619,0x2d6ef3f8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(620)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(620)
		::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(620)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(620)
		::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(620)
		if ((tmp2)){
			HX_STACK_LINE(620)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(620)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(620)
			tmp3 = tmp4->b1->outer;
		}
		HX_STACK_LINE(620)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(620)
		if ((tmp4)){
			HX_STACK_LINE(621)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(621)
			::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(621)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(621)
			::nape::phys::Body tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(621)
			if ((tmp7)){
				HX_STACK_LINE(621)
				tmp8 = null();
			}
			else{
				HX_STACK_LINE(621)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(621)
				tmp8 = tmp9->b1->outer;
			}
			HX_STACK_LINE(621)
			lambda(tmp8).Cast< Void >();
		}
		HX_STACK_LINE(623)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(623)
		::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(623)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(623)
		::nape::phys::Body tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(623)
		if ((tmp7)){
			HX_STACK_LINE(623)
			tmp8 = null();
		}
		else{
			HX_STACK_LINE(623)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(623)
			tmp8 = tmp9->b2->outer;
		}
		HX_STACK_LINE(623)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(623)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(623)
		if ((tmp9)){
			HX_STACK_LINE(623)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(623)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(623)
			::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b2;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(623)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(623)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(623)
			::nape::phys::Body tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(623)
			bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(623)
			if ((tmp17)){
				HX_STACK_LINE(623)
				tmp16 = null();
			}
			else{
				HX_STACK_LINE(623)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp18 = this->zpp_inner_zn;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(623)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(623)
				::nape::phys::Body tmp20 = tmp19->b2->outer;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(623)
				tmp16 = tmp20;
			}
			HX_STACK_LINE(623)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp18 = this->zpp_inner_zn;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(623)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(623)
			::zpp_nape::phys::ZPP_Body tmp20 = tmp19->b1;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(623)
			bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(623)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(623)
			::nape::phys::Body tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(623)
			bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(623)
			if ((tmp24)){
				HX_STACK_LINE(623)
				tmp23 = null();
			}
			else{
				HX_STACK_LINE(623)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp25 = this->zpp_inner_zn;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(623)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(623)
				::nape::phys::Body tmp27 = tmp26->b1->outer;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(623)
				tmp23 = tmp27;
			}
			HX_STACK_LINE(623)
			tmp10 = (tmp16 != tmp23);
		}
		else{
			HX_STACK_LINE(623)
			tmp10 = false;
		}
		HX_STACK_LINE(623)
		if ((tmp10)){
			HX_STACK_LINE(624)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(624)
			::zpp_nape::phys::ZPP_Body tmp12 = tmp11->b2;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(624)
			bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(624)
			::nape::phys::Body tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(624)
			if ((tmp13)){
				HX_STACK_LINE(624)
				tmp14 = null();
			}
			else{
				HX_STACK_LINE(624)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(624)
				tmp14 = tmp15->b2->outer;
			}
			HX_STACK_LINE(624)
			lambda(tmp14).Cast< Void >();
		}
		HX_STACK_LINE(626)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(626)
		::zpp_nape::phys::ZPP_Body tmp12 = tmp11->b3;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(626)
		bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(626)
		::nape::phys::Body tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(626)
		if ((tmp13)){
			HX_STACK_LINE(626)
			tmp14 = null();
		}
		else{
			HX_STACK_LINE(626)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(626)
			tmp14 = tmp15->b3->outer;
		}
		HX_STACK_LINE(626)
		bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(626)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(626)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(626)
		if ((tmp16)){
			HX_STACK_LINE(626)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp18 = this->zpp_inner_zn;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(626)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(626)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(626)
			::zpp_nape::phys::ZPP_Body tmp21 = tmp20->b3;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(626)
			bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(626)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(626)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(626)
			::nape::phys::Body tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(626)
			bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(626)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(626)
			if ((tmp27)){
				HX_STACK_LINE(626)
				tmp25 = null();
			}
			else{
				HX_STACK_LINE(626)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(626)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(626)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(626)
				::nape::phys::Body tmp31 = tmp30->b3->outer;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(626)
				::nape::phys::Body tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(626)
				tmp25 = tmp32;
			}
			HX_STACK_LINE(626)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(626)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(626)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(626)
			::zpp_nape::phys::ZPP_Body tmp31 = tmp30->b1;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(626)
			bool tmp32 = (tmp31 == null());		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(626)
			bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(626)
			bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(626)
			::nape::phys::Body tmp35;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(626)
			bool tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(626)
			bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(626)
			if ((tmp37)){
				HX_STACK_LINE(626)
				tmp35 = null();
			}
			else{
				HX_STACK_LINE(626)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp38 = this->zpp_inner_zn;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(626)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(626)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(626)
				::nape::phys::Body tmp41 = tmp40->b1->outer;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(626)
				::nape::phys::Body tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(626)
				tmp35 = tmp42;
			}
			HX_STACK_LINE(626)
			tmp17 = (tmp25 != tmp35);
		}
		else{
			HX_STACK_LINE(626)
			tmp17 = false;
		}
		HX_STACK_LINE(626)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(626)
		if ((tmp17)){
			HX_STACK_LINE(626)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp19 = this->zpp_inner_zn;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(626)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(626)
			::zpp_nape::phys::ZPP_Body tmp21 = tmp20->b3;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(626)
			bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(626)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(626)
			::nape::phys::Body tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(626)
			bool tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(626)
			if ((tmp25)){
				HX_STACK_LINE(626)
				tmp24 = null();
			}
			else{
				HX_STACK_LINE(626)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = this->zpp_inner_zn;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(626)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(626)
				::nape::phys::Body tmp28 = tmp27->b3->outer;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(626)
				tmp24 = tmp28;
			}
			HX_STACK_LINE(626)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = this->zpp_inner_zn;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(626)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(626)
			::zpp_nape::phys::ZPP_Body tmp28 = tmp27->b2;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(626)
			bool tmp29 = (tmp28 == null());		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(626)
			bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(626)
			::nape::phys::Body tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(626)
			bool tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(626)
			if ((tmp32)){
				HX_STACK_LINE(626)
				tmp31 = null();
			}
			else{
				HX_STACK_LINE(626)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp33 = this->zpp_inner_zn;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(626)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(626)
				::nape::phys::Body tmp35 = tmp34->b2->outer;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(626)
				tmp31 = tmp35;
			}
			HX_STACK_LINE(626)
			tmp18 = (tmp24 != tmp31);
		}
		else{
			HX_STACK_LINE(626)
			tmp18 = false;
		}
		HX_STACK_LINE(626)
		if ((tmp18)){
			HX_STACK_LINE(627)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp19 = this->zpp_inner_zn;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(627)
			::zpp_nape::phys::ZPP_Body tmp20 = tmp19->b3;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(627)
			bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(627)
			::nape::phys::Body tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(627)
			if ((tmp21)){
				HX_STACK_LINE(627)
				tmp22 = null();
			}
			else{
				HX_STACK_LINE(627)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp23 = this->zpp_inner_zn;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(627)
				tmp22 = tmp23->b3->outer;
			}
			HX_STACK_LINE(627)
			lambda(tmp22).Cast< Void >();
		}
		HX_STACK_LINE(629)
		::zpp_nape::constraint::ZPP_PulleyJoint tmp19 = this->zpp_inner_zn;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(629)
		::zpp_nape::phys::ZPP_Body tmp20 = tmp19->b4;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(629)
		bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(629)
		::nape::phys::Body tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(629)
		if ((tmp21)){
			HX_STACK_LINE(629)
			tmp22 = null();
		}
		else{
			HX_STACK_LINE(629)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp23 = this->zpp_inner_zn;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(629)
			tmp22 = tmp23->b4->outer;
		}
		HX_STACK_LINE(629)
		bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(629)
		bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(629)
		bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(629)
		if ((tmp24)){
			HX_STACK_LINE(629)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp26 = this->zpp_inner_zn;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(629)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(629)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(629)
			::zpp_nape::phys::ZPP_Body tmp29 = tmp28->b4;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(629)
			bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(629)
			bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(629)
			bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(629)
			::nape::phys::Body tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(629)
			bool tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(629)
			bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(629)
			if ((tmp35)){
				HX_STACK_LINE(629)
				tmp33 = null();
			}
			else{
				HX_STACK_LINE(629)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp36 = this->zpp_inner_zn;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(629)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(629)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(629)
				::nape::phys::Body tmp39 = tmp38->b4->outer;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(629)
				::nape::phys::Body tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(629)
				tmp33 = tmp40;
			}
			HX_STACK_LINE(629)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp36 = this->zpp_inner_zn;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(629)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(629)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(629)
			::zpp_nape::phys::ZPP_Body tmp39 = tmp38->b1;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(629)
			bool tmp40 = (tmp39 == null());		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(629)
			bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(629)
			bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(629)
			::nape::phys::Body tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(629)
			bool tmp44 = tmp42;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(629)
			bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(629)
			if ((tmp45)){
				HX_STACK_LINE(629)
				tmp43 = null();
			}
			else{
				HX_STACK_LINE(629)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp46 = this->zpp_inner_zn;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(629)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(629)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(629)
				::nape::phys::Body tmp49 = tmp48->b1->outer;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(629)
				::nape::phys::Body tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(629)
				tmp43 = tmp50;
			}
			HX_STACK_LINE(629)
			tmp25 = (tmp33 != tmp43);
		}
		else{
			HX_STACK_LINE(629)
			tmp25 = false;
		}
		HX_STACK_LINE(629)
		bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(629)
		bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(629)
		if ((tmp26)){
			HX_STACK_LINE(629)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp28 = this->zpp_inner_zn;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(629)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(629)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(629)
			::zpp_nape::phys::ZPP_Body tmp31 = tmp30->b4;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(629)
			bool tmp32 = (tmp31 == null());		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(629)
			bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(629)
			bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(629)
			::nape::phys::Body tmp35;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(629)
			bool tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(629)
			bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(629)
			if ((tmp37)){
				HX_STACK_LINE(629)
				tmp35 = null();
			}
			else{
				HX_STACK_LINE(629)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp38 = this->zpp_inner_zn;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(629)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(629)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(629)
				::nape::phys::Body tmp41 = tmp40->b4->outer;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(629)
				::nape::phys::Body tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(629)
				tmp35 = tmp42;
			}
			HX_STACK_LINE(629)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp38 = this->zpp_inner_zn;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(629)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(629)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(629)
			::zpp_nape::phys::ZPP_Body tmp41 = tmp40->b2;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(629)
			bool tmp42 = (tmp41 == null());		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(629)
			bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(629)
			bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(629)
			::nape::phys::Body tmp45;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(629)
			bool tmp46 = tmp44;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(629)
			bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(629)
			if ((tmp47)){
				HX_STACK_LINE(629)
				tmp45 = null();
			}
			else{
				HX_STACK_LINE(629)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp48 = this->zpp_inner_zn;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(629)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(629)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(629)
				::nape::phys::Body tmp51 = tmp50->b2->outer;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(629)
				::nape::phys::Body tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(629)
				tmp45 = tmp52;
			}
			HX_STACK_LINE(629)
			tmp27 = (tmp35 != tmp45);
		}
		else{
			HX_STACK_LINE(629)
			tmp27 = false;
		}
		HX_STACK_LINE(629)
		bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(629)
		if ((tmp27)){
			HX_STACK_LINE(629)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp29 = this->zpp_inner_zn;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(629)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(629)
			::zpp_nape::phys::ZPP_Body tmp31 = tmp30->b4;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(629)
			bool tmp32 = (tmp31 == null());		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(629)
			bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(629)
			::nape::phys::Body tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(629)
			bool tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(629)
			if ((tmp35)){
				HX_STACK_LINE(629)
				tmp34 = null();
			}
			else{
				HX_STACK_LINE(629)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp36 = this->zpp_inner_zn;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(629)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(629)
				::nape::phys::Body tmp38 = tmp37->b4->outer;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(629)
				tmp34 = tmp38;
			}
			HX_STACK_LINE(629)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp36 = this->zpp_inner_zn;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(629)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(629)
			::zpp_nape::phys::ZPP_Body tmp38 = tmp37->b3;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(629)
			bool tmp39 = (tmp38 == null());		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(629)
			bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(629)
			::nape::phys::Body tmp41;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(629)
			bool tmp42 = tmp40;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(629)
			if ((tmp42)){
				HX_STACK_LINE(629)
				tmp41 = null();
			}
			else{
				HX_STACK_LINE(629)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp43 = this->zpp_inner_zn;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(629)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(629)
				::nape::phys::Body tmp45 = tmp44->b3->outer;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(629)
				tmp41 = tmp45;
			}
			HX_STACK_LINE(629)
			tmp28 = (tmp34 != tmp41);
		}
		else{
			HX_STACK_LINE(629)
			tmp28 = false;
		}
		HX_STACK_LINE(629)
		if ((tmp28)){
			HX_STACK_LINE(630)
			::zpp_nape::constraint::ZPP_PulleyJoint tmp29 = this->zpp_inner_zn;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(630)
			::zpp_nape::phys::ZPP_Body tmp30 = tmp29->b4;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(630)
			bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(630)
			::nape::phys::Body tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(630)
			if ((tmp31)){
				HX_STACK_LINE(630)
				tmp32 = null();
			}
			else{
				HX_STACK_LINE(630)
				::zpp_nape::constraint::ZPP_PulleyJoint tmp33 = this->zpp_inner_zn;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(630)
				tmp32 = tmp33->b4->outer;
			}
			HX_STACK_LINE(630)
			lambda(tmp32).Cast< Void >();
		}
	}
return null();
}



PulleyJoint_obj::PulleyJoint_obj()
{
}

void PulleyJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PulleyJoint);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PulleyJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PulleyJoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { if (inCallProp == hx::paccAlways) return get_body1(); }
		if (HX_FIELD_EQ(inName,"body2") ) { if (inCallProp == hx::paccAlways) return get_body2(); }
		if (HX_FIELD_EQ(inName,"body3") ) { if (inCallProp == hx::paccAlways) return get_body3(); }
		if (HX_FIELD_EQ(inName,"body4") ) { if (inCallProp == hx::paccAlways) return get_body4(); }
		if (HX_FIELD_EQ(inName,"ratio") ) { if (inCallProp == hx::paccAlways) return get_ratio(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"anchor1") ) { if (inCallProp == hx::paccAlways) return get_anchor1(); }
		if (HX_FIELD_EQ(inName,"anchor2") ) { if (inCallProp == hx::paccAlways) return get_anchor2(); }
		if (HX_FIELD_EQ(inName,"anchor3") ) { if (inCallProp == hx::paccAlways) return get_anchor3(); }
		if (HX_FIELD_EQ(inName,"anchor4") ) { if (inCallProp == hx::paccAlways) return get_anchor4(); }
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
		if (HX_FIELD_EQ(inName,"get_body3") ) { return get_body3_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body3") ) { return set_body3_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body4") ) { return get_body4_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body4") ) { return set_body4_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ratio") ) { return get_ratio_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ratio") ) { return set_ratio_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_anchor1") ) { return get_anchor1_dyn(); }
		if (HX_FIELD_EQ(inName,"set_anchor1") ) { return set_anchor1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_anchor2") ) { return get_anchor2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_anchor2") ) { return set_anchor2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_anchor3") ) { return get_anchor3_dyn(); }
		if (HX_FIELD_EQ(inName,"set_anchor3") ) { return set_anchor3_dyn(); }
		if (HX_FIELD_EQ(inName,"get_anchor4") ) { return get_anchor4_dyn(); }
		if (HX_FIELD_EQ(inName,"set_anchor4") ) { return set_anchor4_dyn(); }
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

Dynamic PulleyJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { if (inCallProp == hx::paccAlways) return set_body1(inValue); }
		if (HX_FIELD_EQ(inName,"body2") ) { if (inCallProp == hx::paccAlways) return set_body2(inValue); }
		if (HX_FIELD_EQ(inName,"body3") ) { if (inCallProp == hx::paccAlways) return set_body3(inValue); }
		if (HX_FIELD_EQ(inName,"body4") ) { if (inCallProp == hx::paccAlways) return set_body4(inValue); }
		if (HX_FIELD_EQ(inName,"ratio") ) { if (inCallProp == hx::paccAlways) return set_ratio(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"anchor1") ) { if (inCallProp == hx::paccAlways) return set_anchor1(inValue); }
		if (HX_FIELD_EQ(inName,"anchor2") ) { if (inCallProp == hx::paccAlways) return set_anchor2(inValue); }
		if (HX_FIELD_EQ(inName,"anchor3") ) { if (inCallProp == hx::paccAlways) return set_anchor3(inValue); }
		if (HX_FIELD_EQ(inName,"anchor4") ) { if (inCallProp == hx::paccAlways) return set_anchor4(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"jointMin") ) { if (inCallProp == hx::paccAlways) return set_jointMin(inValue); }
		if (HX_FIELD_EQ(inName,"jointMax") ) { if (inCallProp == hx::paccAlways) return set_jointMax(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::constraint::ZPP_PulleyJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PulleyJoint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PulleyJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"));
	outFields->push(HX_HCSTRING("body1","\x4f","\xd3","\xef","\xb6"));
	outFields->push(HX_HCSTRING("body2","\x50","\xd3","\xef","\xb6"));
	outFields->push(HX_HCSTRING("body3","\x51","\xd3","\xef","\xb6"));
	outFields->push(HX_HCSTRING("body4","\x52","\xd3","\xef","\xb6"));
	outFields->push(HX_HCSTRING("anchor1","\x1c","\xec","\xa1","\x02"));
	outFields->push(HX_HCSTRING("anchor2","\x1d","\xec","\xa1","\x02"));
	outFields->push(HX_HCSTRING("anchor3","\x1e","\xec","\xa1","\x02"));
	outFields->push(HX_HCSTRING("anchor4","\x1f","\xec","\xa1","\x02"));
	outFields->push(HX_HCSTRING("jointMin","\x68","\xfa","\x25","\x55"));
	outFields->push(HX_HCSTRING("jointMax","\x7a","\xf3","\x25","\x55"));
	outFields->push(HX_HCSTRING("ratio","\x0b","\x35","\x24","\xe4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::constraint::ZPP_PulleyJoint*/ ,(int)offsetof(PulleyJoint_obj,zpp_inner_zn),HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0")},
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
	HX_HCSTRING("get_body3","\xa8","\x2f","\x99","\xfa"),
	HX_HCSTRING("set_body3","\xb4","\x1b","\xea","\xdd"),
	HX_HCSTRING("get_body4","\xa9","\x2f","\x99","\xfa"),
	HX_HCSTRING("set_body4","\xb5","\x1b","\xea","\xdd"),
	HX_HCSTRING("get_anchor1","\x33","\x4c","\x9c","\x88"),
	HX_HCSTRING("set_anchor1","\x3f","\x53","\x09","\x93"),
	HX_HCSTRING("get_anchor2","\x34","\x4c","\x9c","\x88"),
	HX_HCSTRING("set_anchor2","\x40","\x53","\x09","\x93"),
	HX_HCSTRING("get_anchor3","\x35","\x4c","\x9c","\x88"),
	HX_HCSTRING("set_anchor3","\x41","\x53","\x09","\x93"),
	HX_HCSTRING("get_anchor4","\x36","\x4c","\x9c","\x88"),
	HX_HCSTRING("set_anchor4","\x42","\x53","\x09","\x93"),
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
	HX_MARK_MEMBER_NAME(PulleyJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PulleyJoint_obj::__mClass,"__mClass");
};

#endif

hx::Class PulleyJoint_obj::__mClass;

void PulleyJoint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.constraint.PulleyJoint","\x26","\x70","\x00","\x26");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &PulleyJoint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PulleyJoint_obj >;
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
