#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_LineJoint
#include <nape/constraint/LineJoint.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_LineJoint
#include <zpp_nape/constraint/ZPP_LineJoint.h>
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

Void LineJoint_obj::__construct(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,::nape::geom::Vec2 direction,Float jointMin,Float jointMax)
{
HX_STACK_FRAME("nape.constraint.LineJoint","new",0xe137bcfd,"nape.constraint.LineJoint.new","nape/constraint/LineJoint.hx",208,0xe7850eb3)
HX_STACK_THIS(this)
HX_STACK_ARG(body1,"body1")
HX_STACK_ARG(body2,"body2")
HX_STACK_ARG(anchor1,"anchor1")
HX_STACK_ARG(anchor2,"anchor2")
HX_STACK_ARG(direction,"direction")
HX_STACK_ARG(jointMin,"jointMin")
HX_STACK_ARG(jointMax,"jointMax")
{
	HX_STACK_LINE(212)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(430)
	::zpp_nape::constraint::ZPP_LineJoint tmp = ::zpp_nape::constraint::ZPP_LineJoint_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(430)
	this->zpp_inner_zn = tmp;
	HX_STACK_LINE(431)
	::zpp_nape::constraint::ZPP_LineJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(431)
	this->zpp_inner = tmp1;
	HX_STACK_LINE(432)
	::zpp_nape::constraint::ZPP_Constraint tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(432)
	tmp2->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(433)
	::zpp_nape::constraint::ZPP_LineJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(433)
	tmp3->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(435)
	::nape::constraint::Constraint_obj::zpp_internalAlloc = true;
	HX_STACK_LINE(436)
	super::__construct();
	HX_STACK_LINE(437)
	::nape::constraint::Constraint_obj::zpp_internalAlloc = false;
	HX_STACK_LINE(442)
	{
		HX_STACK_LINE(442)
		{
			HX_STACK_LINE(442)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(442)
			::String tmp5 = HX_HCSTRING("Constraint::body1","\xb2","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(442)
			tmp4->immutable_midstep(tmp5);
			HX_STACK_LINE(442)
			bool tmp6 = (body1 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(442)
			::zpp_nape::phys::ZPP_Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(442)
			if ((tmp6)){
				HX_STACK_LINE(442)
				tmp7 = null();
			}
			else{
				HX_STACK_LINE(442)
				tmp7 = body1->zpp_inner;
			}
			HX_STACK_LINE(442)
			::zpp_nape::phys::ZPP_Body inbody1 = tmp7;		HX_STACK_VAR(inbody1,"inbody1");
			HX_STACK_LINE(442)
			::zpp_nape::phys::ZPP_Body tmp8 = inbody1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(442)
			::zpp_nape::constraint::ZPP_LineJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(442)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9->b1;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(442)
			bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(442)
			if ((tmp11)){
				HX_STACK_LINE(442)
				::zpp_nape::constraint::ZPP_LineJoint tmp12 = this->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(442)
				::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(442)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(442)
				if ((tmp14)){
					HX_STACK_LINE(442)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(442)
					::zpp_nape::space::ZPP_Space tmp16 = tmp15->space;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(442)
					bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(442)
					::nape::space::Space tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(442)
					if ((tmp17)){
						HX_STACK_LINE(442)
						tmp18 = null();
					}
					else{
						HX_STACK_LINE(442)
						::zpp_nape::constraint::ZPP_Constraint tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(442)
						tmp18 = tmp19->space->outer;
					}
					HX_STACK_LINE(442)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(442)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(442)
					if ((tmp19)){
						HX_STACK_LINE(442)
						::zpp_nape::constraint::ZPP_LineJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(442)
						::zpp_nape::constraint::ZPP_LineJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(442)
						::zpp_nape::phys::ZPP_Body tmp23 = tmp22->b2;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(442)
						::zpp_nape::constraint::ZPP_LineJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(442)
						::zpp_nape::constraint::ZPP_LineJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(442)
						::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b1;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(442)
						tmp20 = (tmp23 != tmp26);
					}
					else{
						HX_STACK_LINE(442)
						tmp20 = false;
					}
					HX_STACK_LINE(442)
					if ((tmp20)){
						HX_STACK_LINE(442)
						::zpp_nape::constraint::ZPP_LineJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(442)
						::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b1;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(442)
						bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(442)
						if ((tmp23)){
							HX_STACK_LINE(442)
							::zpp_nape::constraint::ZPP_LineJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(442)
							::zpp_nape::util::ZNPList_ZPP_Constraint tmp25 = tmp24->b1->constraints;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(442)
							::zpp_nape::constraint::ZPP_Constraint tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(442)
							tmp25->remove(tmp26);
						}
					}
					HX_STACK_LINE(442)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(442)
					bool tmp22 = tmp21->active;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(442)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(442)
					if ((tmp22)){
						HX_STACK_LINE(442)
						::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(442)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(442)
						::zpp_nape::space::ZPP_Space tmp26 = tmp25->space;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(442)
						bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(442)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(442)
						::nape::space::Space tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(442)
						bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(442)
						if ((tmp30)){
							HX_STACK_LINE(442)
							tmp29 = null();
						}
						else{
							HX_STACK_LINE(442)
							::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(442)
							::zpp_nape::constraint::ZPP_Constraint tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(442)
							::nape::space::Space tmp33 = tmp32->space->outer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(442)
							tmp29 = tmp33;
						}
						HX_STACK_LINE(442)
						tmp23 = (tmp29 != null());
					}
					else{
						HX_STACK_LINE(442)
						tmp23 = false;
					}
					HX_STACK_LINE(442)
					if ((tmp23)){
						HX_STACK_LINE(442)
						::zpp_nape::constraint::ZPP_LineJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(442)
						tmp24->b1->wake();
					}
				}
				HX_STACK_LINE(442)
				::zpp_nape::constraint::ZPP_LineJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(442)
				tmp15->b1 = inbody1;
				HX_STACK_LINE(442)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(442)
				::zpp_nape::space::ZPP_Space tmp17 = tmp16->space;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(442)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(442)
				::nape::space::Space tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(442)
				if ((tmp18)){
					HX_STACK_LINE(442)
					tmp19 = null();
				}
				else{
					HX_STACK_LINE(442)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(442)
					tmp19 = tmp20->space->outer;
				}
				HX_STACK_LINE(442)
				bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(442)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(442)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(442)
				if ((tmp21)){
					HX_STACK_LINE(442)
					tmp22 = (inbody1 != null());
				}
				else{
					HX_STACK_LINE(442)
					tmp22 = false;
				}
				HX_STACK_LINE(442)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(442)
				if ((tmp22)){
					HX_STACK_LINE(442)
					::zpp_nape::constraint::ZPP_LineJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(442)
					::zpp_nape::constraint::ZPP_LineJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(442)
					::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b2;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(442)
					::zpp_nape::phys::ZPP_Body tmp27 = inbody1;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(442)
					tmp23 = (tmp26 != tmp27);
				}
				else{
					HX_STACK_LINE(442)
					tmp23 = false;
				}
				HX_STACK_LINE(442)
				if ((tmp23)){
					HX_STACK_LINE(442)
					bool tmp24 = (inbody1 != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(442)
					if ((tmp24)){
						HX_STACK_LINE(442)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(442)
						inbody1->constraints->add(tmp25);
					}
				}
				HX_STACK_LINE(442)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(442)
				bool tmp25 = tmp24->active;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(442)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(442)
				if ((tmp25)){
					HX_STACK_LINE(442)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(442)
					::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(442)
					::zpp_nape::space::ZPP_Space tmp29 = tmp28->space;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(442)
					bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(442)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(442)
					::nape::space::Space tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(442)
					bool tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(442)
					if ((tmp33)){
						HX_STACK_LINE(442)
						tmp32 = null();
					}
					else{
						HX_STACK_LINE(442)
						::zpp_nape::constraint::ZPP_Constraint tmp34 = this->zpp_inner;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(442)
						::zpp_nape::constraint::ZPP_Constraint tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(442)
						::nape::space::Space tmp36 = tmp35->space->outer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(442)
						tmp32 = tmp36;
					}
					HX_STACK_LINE(442)
					tmp26 = (tmp32 != null());
				}
				else{
					HX_STACK_LINE(442)
					tmp26 = false;
				}
				HX_STACK_LINE(442)
				if ((tmp26)){
					HX_STACK_LINE(442)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(442)
					tmp27->wake();
					HX_STACK_LINE(442)
					bool tmp28 = (inbody1 != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(442)
					if ((tmp28)){
						HX_STACK_LINE(442)
						inbody1->wake();
					}
				}
			}
		}
		HX_STACK_LINE(442)
		::zpp_nape::constraint::ZPP_LineJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(442)
		::zpp_nape::phys::ZPP_Body tmp5 = tmp4->b1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(442)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(442)
		if ((tmp6)){
			HX_STACK_LINE(442)
			Dynamic();
		}
		else{
			HX_STACK_LINE(442)
			::zpp_nape::constraint::ZPP_LineJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(442)
			tmp7->b1->outer;
		}
	}
	HX_STACK_LINE(443)
	{
		HX_STACK_LINE(443)
		{
			HX_STACK_LINE(443)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(443)
			::String tmp5 = HX_HCSTRING("Constraint::body2","\xb3","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(443)
			tmp4->immutable_midstep(tmp5);
			HX_STACK_LINE(443)
			bool tmp6 = (body2 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(443)
			::zpp_nape::phys::ZPP_Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(443)
			if ((tmp6)){
				HX_STACK_LINE(443)
				tmp7 = null();
			}
			else{
				HX_STACK_LINE(443)
				tmp7 = body2->zpp_inner;
			}
			HX_STACK_LINE(443)
			::zpp_nape::phys::ZPP_Body inbody2 = tmp7;		HX_STACK_VAR(inbody2,"inbody2");
			HX_STACK_LINE(443)
			::zpp_nape::phys::ZPP_Body tmp8 = inbody2;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(443)
			::zpp_nape::constraint::ZPP_LineJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(443)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9->b2;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(443)
			bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(443)
			if ((tmp11)){
				HX_STACK_LINE(443)
				::zpp_nape::constraint::ZPP_LineJoint tmp12 = this->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(443)
				::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b2;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(443)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(443)
				if ((tmp14)){
					HX_STACK_LINE(443)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(443)
					::zpp_nape::space::ZPP_Space tmp16 = tmp15->space;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(443)
					bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(443)
					::nape::space::Space tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(443)
					if ((tmp17)){
						HX_STACK_LINE(443)
						tmp18 = null();
					}
					else{
						HX_STACK_LINE(443)
						::zpp_nape::constraint::ZPP_Constraint tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(443)
						tmp18 = tmp19->space->outer;
					}
					HX_STACK_LINE(443)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(443)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(443)
					if ((tmp19)){
						HX_STACK_LINE(443)
						::zpp_nape::constraint::ZPP_LineJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(443)
						::zpp_nape::constraint::ZPP_LineJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(443)
						::zpp_nape::phys::ZPP_Body tmp23 = tmp22->b1;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(443)
						::zpp_nape::constraint::ZPP_LineJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(443)
						::zpp_nape::constraint::ZPP_LineJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(443)
						::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b2;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(443)
						tmp20 = (tmp23 != tmp26);
					}
					else{
						HX_STACK_LINE(443)
						tmp20 = false;
					}
					HX_STACK_LINE(443)
					if ((tmp20)){
						HX_STACK_LINE(443)
						::zpp_nape::constraint::ZPP_LineJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(443)
						::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b2;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(443)
						bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(443)
						if ((tmp23)){
							HX_STACK_LINE(443)
							::zpp_nape::constraint::ZPP_LineJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(443)
							::zpp_nape::util::ZNPList_ZPP_Constraint tmp25 = tmp24->b2->constraints;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(443)
							::zpp_nape::constraint::ZPP_Constraint tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(443)
							tmp25->remove(tmp26);
						}
					}
					HX_STACK_LINE(443)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(443)
					bool tmp22 = tmp21->active;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(443)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(443)
					if ((tmp22)){
						HX_STACK_LINE(443)
						::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(443)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(443)
						::zpp_nape::space::ZPP_Space tmp26 = tmp25->space;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(443)
						bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(443)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(443)
						::nape::space::Space tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(443)
						bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(443)
						if ((tmp30)){
							HX_STACK_LINE(443)
							tmp29 = null();
						}
						else{
							HX_STACK_LINE(443)
							::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(443)
							::zpp_nape::constraint::ZPP_Constraint tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(443)
							::nape::space::Space tmp33 = tmp32->space->outer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(443)
							tmp29 = tmp33;
						}
						HX_STACK_LINE(443)
						tmp23 = (tmp29 != null());
					}
					else{
						HX_STACK_LINE(443)
						tmp23 = false;
					}
					HX_STACK_LINE(443)
					if ((tmp23)){
						HX_STACK_LINE(443)
						::zpp_nape::constraint::ZPP_LineJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(443)
						tmp24->b2->wake();
					}
				}
				HX_STACK_LINE(443)
				::zpp_nape::constraint::ZPP_LineJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(443)
				tmp15->b2 = inbody2;
				HX_STACK_LINE(443)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(443)
				::zpp_nape::space::ZPP_Space tmp17 = tmp16->space;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(443)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(443)
				::nape::space::Space tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(443)
				if ((tmp18)){
					HX_STACK_LINE(443)
					tmp19 = null();
				}
				else{
					HX_STACK_LINE(443)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(443)
					tmp19 = tmp20->space->outer;
				}
				HX_STACK_LINE(443)
				bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(443)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(443)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(443)
				if ((tmp21)){
					HX_STACK_LINE(443)
					tmp22 = (inbody2 != null());
				}
				else{
					HX_STACK_LINE(443)
					tmp22 = false;
				}
				HX_STACK_LINE(443)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(443)
				if ((tmp22)){
					HX_STACK_LINE(443)
					::zpp_nape::constraint::ZPP_LineJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(443)
					::zpp_nape::constraint::ZPP_LineJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(443)
					::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b1;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(443)
					::zpp_nape::phys::ZPP_Body tmp27 = inbody2;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(443)
					tmp23 = (tmp26 != tmp27);
				}
				else{
					HX_STACK_LINE(443)
					tmp23 = false;
				}
				HX_STACK_LINE(443)
				if ((tmp23)){
					HX_STACK_LINE(443)
					bool tmp24 = (inbody2 != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(443)
					if ((tmp24)){
						HX_STACK_LINE(443)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(443)
						inbody2->constraints->add(tmp25);
					}
				}
				HX_STACK_LINE(443)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(443)
				bool tmp25 = tmp24->active;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(443)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(443)
				if ((tmp25)){
					HX_STACK_LINE(443)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(443)
					::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(443)
					::zpp_nape::space::ZPP_Space tmp29 = tmp28->space;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(443)
					bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(443)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(443)
					::nape::space::Space tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(443)
					bool tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(443)
					if ((tmp33)){
						HX_STACK_LINE(443)
						tmp32 = null();
					}
					else{
						HX_STACK_LINE(443)
						::zpp_nape::constraint::ZPP_Constraint tmp34 = this->zpp_inner;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(443)
						::zpp_nape::constraint::ZPP_Constraint tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(443)
						::nape::space::Space tmp36 = tmp35->space->outer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(443)
						tmp32 = tmp36;
					}
					HX_STACK_LINE(443)
					tmp26 = (tmp32 != null());
				}
				else{
					HX_STACK_LINE(443)
					tmp26 = false;
				}
				HX_STACK_LINE(443)
				if ((tmp26)){
					HX_STACK_LINE(443)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(443)
					tmp27->wake();
					HX_STACK_LINE(443)
					bool tmp28 = (inbody2 != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(443)
					if ((tmp28)){
						HX_STACK_LINE(443)
						inbody2->wake();
					}
				}
			}
		}
		HX_STACK_LINE(443)
		::zpp_nape::constraint::ZPP_LineJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(443)
		::zpp_nape::phys::ZPP_Body tmp5 = tmp4->b2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(443)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(443)
		if ((tmp6)){
			HX_STACK_LINE(443)
			Dynamic();
		}
		else{
			HX_STACK_LINE(443)
			::zpp_nape::constraint::ZPP_LineJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(443)
			tmp7->b2->outer;
		}
	}
	HX_STACK_LINE(444)
	{
		HX_STACK_LINE(444)
		{
			HX_STACK_LINE(444)
			{
				HX_STACK_LINE(444)
				bool tmp4 = (anchor1 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(444)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(444)
				if ((tmp4)){
					HX_STACK_LINE(444)
					tmp5 = anchor1->zpp_disp;
				}
				else{
					HX_STACK_LINE(444)
					tmp5 = false;
				}
				HX_STACK_LINE(444)
				if ((tmp5)){
					HX_STACK_LINE(444)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(444)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(444)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(444)
			bool tmp4 = (anchor1 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(444)
			if ((tmp4)){
				HX_STACK_LINE(444)
				::String tmp5 = HX_HCSTRING("Error: Constraint::anchor1","\xb1","\x15","\x18","\x54");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(444)
				::String tmp6 = (tmp5 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(444)
				HX_STACK_DO_THROW(tmp6);
			}
			HX_STACK_LINE(444)
			{
				HX_STACK_LINE(444)
				::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(444)
				{
					HX_STACK_LINE(444)
					::zpp_nape::constraint::ZPP_LineJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(444)
					::nape::geom::Vec2 tmp7 = tmp6->wrap_a1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(444)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(444)
					if ((tmp8)){
						HX_STACK_LINE(444)
						::zpp_nape::constraint::ZPP_LineJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(444)
						tmp9->setup_a1();
					}
					HX_STACK_LINE(444)
					::zpp_nape::constraint::ZPP_LineJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(444)
					tmp5 = tmp9->wrap_a1;
				}
				HX_STACK_LINE(444)
				::nape::geom::Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(444)
				{
					HX_STACK_LINE(444)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(444)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(444)
					if ((tmp6)){
						HX_STACK_LINE(444)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(444)
						tmp7 = false;
					}
					HX_STACK_LINE(444)
					if ((tmp7)){
						HX_STACK_LINE(444)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(444)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(444)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(444)
				{
					HX_STACK_LINE(444)
					bool tmp6 = (anchor1 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(444)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(444)
					if ((tmp6)){
						HX_STACK_LINE(444)
						tmp7 = anchor1->zpp_disp;
					}
					else{
						HX_STACK_LINE(444)
						tmp7 = false;
					}
					HX_STACK_LINE(444)
					if ((tmp7)){
						HX_STACK_LINE(444)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(444)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(444)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(444)
				{
					HX_STACK_LINE(444)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(444)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(444)
					if ((tmp6)){
						HX_STACK_LINE(444)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(444)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(444)
					if ((tmp7)){
						HX_STACK_LINE(444)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(444)
				bool tmp6 = (anchor1 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(444)
				if ((tmp6)){
					HX_STACK_LINE(444)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
				}
				HX_STACK_LINE(444)
				::nape::geom::Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(444)
				{
					HX_STACK_LINE(444)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(444)
					{
						HX_STACK_LINE(444)
						bool tmp9 = (anchor1 != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(444)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(444)
						if ((tmp9)){
							HX_STACK_LINE(444)
							tmp10 = anchor1->zpp_disp;
						}
						else{
							HX_STACK_LINE(444)
							tmp10 = false;
						}
						HX_STACK_LINE(444)
						if ((tmp10)){
							HX_STACK_LINE(444)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(444)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(444)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(444)
						{
							HX_STACK_LINE(444)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(444)
							bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(444)
							if ((tmp11)){
								HX_STACK_LINE(444)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(444)
						tmp8 = anchor1->zpp_inner->x;
					}
					HX_STACK_LINE(444)
					Float x = tmp8;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(444)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(444)
					{
						HX_STACK_LINE(444)
						bool tmp10 = (anchor1 != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(444)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(444)
						if ((tmp10)){
							HX_STACK_LINE(444)
							tmp11 = anchor1->zpp_disp;
						}
						else{
							HX_STACK_LINE(444)
							tmp11 = false;
						}
						HX_STACK_LINE(444)
						if ((tmp11)){
							HX_STACK_LINE(444)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(444)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(444)
							HX_STACK_DO_THROW(tmp13);
						}
						HX_STACK_LINE(444)
						{
							HX_STACK_LINE(444)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(444)
							bool tmp12 = (_this1->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(444)
							if ((tmp12)){
								HX_STACK_LINE(444)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(444)
						tmp9 = anchor1->zpp_inner->y;
					}
					HX_STACK_LINE(444)
					Float y = tmp9;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(444)
					{
						HX_STACK_LINE(444)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(444)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(444)
						if ((tmp10)){
							HX_STACK_LINE(444)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(444)
							tmp11 = false;
						}
						HX_STACK_LINE(444)
						if ((tmp11)){
							HX_STACK_LINE(444)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(444)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(444)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(444)
					{
						HX_STACK_LINE(444)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(444)
						bool tmp10 = _this1->_immutable;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(444)
						if ((tmp10)){
							HX_STACK_LINE(444)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(444)
						bool tmp11 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(444)
						if ((tmp11)){
							HX_STACK_LINE(444)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(444)
					bool tmp10 = (x != x);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(444)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(444)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(444)
					if ((tmp11)){
						HX_STACK_LINE(444)
						tmp12 = (y != y);
					}
					else{
						HX_STACK_LINE(444)
						tmp12 = true;
					}
					HX_STACK_LINE(444)
					if ((tmp12)){
						HX_STACK_LINE(444)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(444)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(444)
					{
						HX_STACK_LINE(444)
						{
							HX_STACK_LINE(444)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(444)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(444)
							if ((tmp14)){
								HX_STACK_LINE(444)
								tmp15 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(444)
								tmp15 = false;
							}
							HX_STACK_LINE(444)
							if ((tmp15)){
								HX_STACK_LINE(444)
								::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(444)
								::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(444)
								HX_STACK_DO_THROW(tmp17);
							}
						}
						HX_STACK_LINE(444)
						{
							HX_STACK_LINE(444)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(444)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(444)
							if ((tmp14)){
								HX_STACK_LINE(444)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(444)
						tmp13 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(444)
					Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(444)
					bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(444)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(444)
					if ((tmp15)){
						HX_STACK_LINE(444)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(444)
						{
							HX_STACK_LINE(444)
							{
								HX_STACK_LINE(444)
								bool tmp18 = (_this != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(444)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(444)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(444)
								bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(444)
								if ((tmp21)){
									HX_STACK_LINE(444)
									tmp20 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(444)
									tmp20 = false;
								}
								HX_STACK_LINE(444)
								bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(444)
								if ((tmp22)){
									HX_STACK_LINE(444)
									::String tmp23 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(444)
									::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(444)
									::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(444)
									::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(444)
									::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(444)
									HX_STACK_DO_THROW(tmp27);
								}
							}
							HX_STACK_LINE(444)
							{
								HX_STACK_LINE(444)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(444)
								bool tmp18 = (_this1->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(444)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(444)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(444)
								if ((tmp20)){
									HX_STACK_LINE(444)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(444)
							Float tmp18 = _this->zpp_inner->y;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(444)
							tmp17 = tmp18;
						}
						HX_STACK_LINE(444)
						Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(444)
						tmp16 = (tmp17 == tmp18);
					}
					else{
						HX_STACK_LINE(444)
						tmp16 = false;
					}
					HX_STACK_LINE(444)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(444)
					if ((tmp17)){
						HX_STACK_LINE(444)
						{
							HX_STACK_LINE(444)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(444)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(444)
							{
							}
						}
						HX_STACK_LINE(444)
						{
							HX_STACK_LINE(444)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(444)
							bool tmp18 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(444)
							if ((tmp18)){
								HX_STACK_LINE(444)
								::zpp_nape::geom::ZPP_Vec2 tmp19 = _this1;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(444)
								_this1->_invalidate(tmp19);
							}
						}
					}
					HX_STACK_LINE(444)
					tmp7 = _this;
				}
				HX_STACK_LINE(444)
				::nape::geom::Vec2 ret = tmp7;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(444)
				{
					HX_STACK_LINE(444)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(444)
					tmp8 = anchor1->zpp_inner->weak;
					HX_STACK_LINE(444)
					if ((tmp8)){
						HX_STACK_LINE(444)
						{
							HX_STACK_LINE(444)
							{
								HX_STACK_LINE(444)
								bool tmp9 = (anchor1 != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(444)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(444)
								if ((tmp9)){
									HX_STACK_LINE(444)
									tmp10 = anchor1->zpp_disp;
								}
								else{
									HX_STACK_LINE(444)
									tmp10 = false;
								}
								HX_STACK_LINE(444)
								if ((tmp10)){
									HX_STACK_LINE(444)
									::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(444)
									::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(444)
									HX_STACK_DO_THROW(tmp12);
								}
							}
							HX_STACK_LINE(444)
							{
								HX_STACK_LINE(444)
								::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(444)
								bool tmp9 = _this1->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(444)
								if ((tmp9)){
									HX_STACK_LINE(444)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
								}
								HX_STACK_LINE(444)
								bool tmp10 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(444)
								if ((tmp10)){
									HX_STACK_LINE(444)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(444)
							bool tmp9 = anchor1->zpp_inner->_inuse;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(444)
							if ((tmp9)){
								HX_STACK_LINE(444)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
							}
							HX_STACK_LINE(444)
							::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(444)
							anchor1->zpp_inner->outer = null();
							HX_STACK_LINE(444)
							anchor1->zpp_inner = null();
							HX_STACK_LINE(444)
							{
								HX_STACK_LINE(444)
								::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(444)
								o->zpp_pool = null();
								HX_STACK_LINE(444)
								::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(444)
								bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(444)
								if ((tmp11)){
									HX_STACK_LINE(444)
									::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(444)
									tmp12->zpp_pool = o;
								}
								else{
									HX_STACK_LINE(444)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(444)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
								HX_STACK_LINE(444)
								o->zpp_disp = true;
							}
							HX_STACK_LINE(444)
							{
								HX_STACK_LINE(444)
								::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(444)
								{
									HX_STACK_LINE(444)
									bool tmp10 = (o->outer != null());		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(444)
									if ((tmp10)){
										HX_STACK_LINE(444)
										o->outer->zpp_inner = null();
										HX_STACK_LINE(444)
										o->outer = null();
									}
									HX_STACK_LINE(444)
									o->_isimmutable = null();
									HX_STACK_LINE(444)
									o->_validate = null();
									HX_STACK_LINE(444)
									o->_invalidate = null();
								}
								HX_STACK_LINE(444)
								::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(444)
								o->next = tmp10;
								HX_STACK_LINE(444)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
							}
						}
						HX_STACK_LINE(444)
						true;
					}
					else{
						HX_STACK_LINE(444)
						false;
					}
				}
				HX_STACK_LINE(444)
				ret;
			}
		}
		HX_STACK_LINE(444)
		{
			HX_STACK_LINE(444)
			::zpp_nape::constraint::ZPP_LineJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(444)
			::nape::geom::Vec2 tmp5 = tmp4->wrap_a1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(444)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(444)
			if ((tmp6)){
				HX_STACK_LINE(444)
				::zpp_nape::constraint::ZPP_LineJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(444)
				tmp7->setup_a1();
			}
			HX_STACK_LINE(444)
			::zpp_nape::constraint::ZPP_LineJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(444)
			tmp7->wrap_a1;
		}
	}
	HX_STACK_LINE(445)
	{
		HX_STACK_LINE(445)
		{
			HX_STACK_LINE(445)
			{
				HX_STACK_LINE(445)
				bool tmp4 = (anchor2 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(445)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(445)
				if ((tmp4)){
					HX_STACK_LINE(445)
					tmp5 = anchor2->zpp_disp;
				}
				else{
					HX_STACK_LINE(445)
					tmp5 = false;
				}
				HX_STACK_LINE(445)
				if ((tmp5)){
					HX_STACK_LINE(445)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(445)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(445)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(445)
			bool tmp4 = (anchor2 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(445)
			if ((tmp4)){
				HX_STACK_LINE(445)
				::String tmp5 = HX_HCSTRING("Error: Constraint::anchor2","\xb2","\x15","\x18","\x54");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(445)
				::String tmp6 = (tmp5 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(445)
				HX_STACK_DO_THROW(tmp6);
			}
			HX_STACK_LINE(445)
			{
				HX_STACK_LINE(445)
				::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(445)
				{
					HX_STACK_LINE(445)
					::zpp_nape::constraint::ZPP_LineJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(445)
					::nape::geom::Vec2 tmp7 = tmp6->wrap_a2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(445)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(445)
					if ((tmp8)){
						HX_STACK_LINE(445)
						::zpp_nape::constraint::ZPP_LineJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(445)
						tmp9->setup_a2();
					}
					HX_STACK_LINE(445)
					::zpp_nape::constraint::ZPP_LineJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(445)
					tmp5 = tmp9->wrap_a2;
				}
				HX_STACK_LINE(445)
				::nape::geom::Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(445)
				{
					HX_STACK_LINE(445)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(445)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(445)
					if ((tmp6)){
						HX_STACK_LINE(445)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(445)
						tmp7 = false;
					}
					HX_STACK_LINE(445)
					if ((tmp7)){
						HX_STACK_LINE(445)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(445)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(445)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(445)
				{
					HX_STACK_LINE(445)
					bool tmp6 = (anchor2 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(445)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(445)
					if ((tmp6)){
						HX_STACK_LINE(445)
						tmp7 = anchor2->zpp_disp;
					}
					else{
						HX_STACK_LINE(445)
						tmp7 = false;
					}
					HX_STACK_LINE(445)
					if ((tmp7)){
						HX_STACK_LINE(445)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(445)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(445)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(445)
				{
					HX_STACK_LINE(445)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(445)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(445)
					if ((tmp6)){
						HX_STACK_LINE(445)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(445)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(445)
					if ((tmp7)){
						HX_STACK_LINE(445)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(445)
				bool tmp6 = (anchor2 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(445)
				if ((tmp6)){
					HX_STACK_LINE(445)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
				}
				HX_STACK_LINE(445)
				::nape::geom::Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(445)
				{
					HX_STACK_LINE(445)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(445)
					{
						HX_STACK_LINE(445)
						bool tmp9 = (anchor2 != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(445)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(445)
						if ((tmp9)){
							HX_STACK_LINE(445)
							tmp10 = anchor2->zpp_disp;
						}
						else{
							HX_STACK_LINE(445)
							tmp10 = false;
						}
						HX_STACK_LINE(445)
						if ((tmp10)){
							HX_STACK_LINE(445)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(445)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(445)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(445)
							bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(445)
							if ((tmp11)){
								HX_STACK_LINE(445)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(445)
						tmp8 = anchor2->zpp_inner->x;
					}
					HX_STACK_LINE(445)
					Float x = tmp8;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(445)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(445)
					{
						HX_STACK_LINE(445)
						bool tmp10 = (anchor2 != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(445)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(445)
						if ((tmp10)){
							HX_STACK_LINE(445)
							tmp11 = anchor2->zpp_disp;
						}
						else{
							HX_STACK_LINE(445)
							tmp11 = false;
						}
						HX_STACK_LINE(445)
						if ((tmp11)){
							HX_STACK_LINE(445)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(445)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(445)
							HX_STACK_DO_THROW(tmp13);
						}
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(445)
							bool tmp12 = (_this1->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(445)
							if ((tmp12)){
								HX_STACK_LINE(445)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(445)
						tmp9 = anchor2->zpp_inner->y;
					}
					HX_STACK_LINE(445)
					Float y = tmp9;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(445)
					{
						HX_STACK_LINE(445)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(445)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(445)
						if ((tmp10)){
							HX_STACK_LINE(445)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(445)
							tmp11 = false;
						}
						HX_STACK_LINE(445)
						if ((tmp11)){
							HX_STACK_LINE(445)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(445)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(445)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(445)
					{
						HX_STACK_LINE(445)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(445)
						bool tmp10 = _this1->_immutable;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(445)
						if ((tmp10)){
							HX_STACK_LINE(445)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(445)
						bool tmp11 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(445)
						if ((tmp11)){
							HX_STACK_LINE(445)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(445)
					bool tmp10 = (x != x);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(445)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(445)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(445)
					if ((tmp11)){
						HX_STACK_LINE(445)
						tmp12 = (y != y);
					}
					else{
						HX_STACK_LINE(445)
						tmp12 = true;
					}
					HX_STACK_LINE(445)
					if ((tmp12)){
						HX_STACK_LINE(445)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(445)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(445)
					{
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(445)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(445)
							if ((tmp14)){
								HX_STACK_LINE(445)
								tmp15 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(445)
								tmp15 = false;
							}
							HX_STACK_LINE(445)
							if ((tmp15)){
								HX_STACK_LINE(445)
								::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(445)
								::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(445)
								HX_STACK_DO_THROW(tmp17);
							}
						}
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(445)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(445)
							if ((tmp14)){
								HX_STACK_LINE(445)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(445)
						tmp13 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(445)
					Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(445)
					bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(445)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(445)
					if ((tmp15)){
						HX_STACK_LINE(445)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							{
								HX_STACK_LINE(445)
								bool tmp18 = (_this != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(445)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(445)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(445)
								bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(445)
								if ((tmp21)){
									HX_STACK_LINE(445)
									tmp20 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(445)
									tmp20 = false;
								}
								HX_STACK_LINE(445)
								bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(445)
								if ((tmp22)){
									HX_STACK_LINE(445)
									::String tmp23 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(445)
									::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(445)
									::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(445)
									::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(445)
									::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(445)
									HX_STACK_DO_THROW(tmp27);
								}
							}
							HX_STACK_LINE(445)
							{
								HX_STACK_LINE(445)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(445)
								bool tmp18 = (_this1->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(445)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(445)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(445)
								if ((tmp20)){
									HX_STACK_LINE(445)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(445)
							Float tmp18 = _this->zpp_inner->y;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(445)
							tmp17 = tmp18;
						}
						HX_STACK_LINE(445)
						Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(445)
						tmp16 = (tmp17 == tmp18);
					}
					else{
						HX_STACK_LINE(445)
						tmp16 = false;
					}
					HX_STACK_LINE(445)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(445)
					if ((tmp17)){
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(445)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(445)
							{
							}
						}
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(445)
							bool tmp18 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(445)
							if ((tmp18)){
								HX_STACK_LINE(445)
								::zpp_nape::geom::ZPP_Vec2 tmp19 = _this1;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(445)
								_this1->_invalidate(tmp19);
							}
						}
					}
					HX_STACK_LINE(445)
					tmp7 = _this;
				}
				HX_STACK_LINE(445)
				::nape::geom::Vec2 ret = tmp7;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(445)
				{
					HX_STACK_LINE(445)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(445)
					tmp8 = anchor2->zpp_inner->weak;
					HX_STACK_LINE(445)
					if ((tmp8)){
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							{
								HX_STACK_LINE(445)
								bool tmp9 = (anchor2 != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(445)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(445)
								if ((tmp9)){
									HX_STACK_LINE(445)
									tmp10 = anchor2->zpp_disp;
								}
								else{
									HX_STACK_LINE(445)
									tmp10 = false;
								}
								HX_STACK_LINE(445)
								if ((tmp10)){
									HX_STACK_LINE(445)
									::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(445)
									::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(445)
									HX_STACK_DO_THROW(tmp12);
								}
							}
							HX_STACK_LINE(445)
							{
								HX_STACK_LINE(445)
								::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(445)
								bool tmp9 = _this1->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(445)
								if ((tmp9)){
									HX_STACK_LINE(445)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
								}
								HX_STACK_LINE(445)
								bool tmp10 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(445)
								if ((tmp10)){
									HX_STACK_LINE(445)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(445)
							bool tmp9 = anchor2->zpp_inner->_inuse;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(445)
							if ((tmp9)){
								HX_STACK_LINE(445)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
							}
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(445)
							anchor2->zpp_inner->outer = null();
							HX_STACK_LINE(445)
							anchor2->zpp_inner = null();
							HX_STACK_LINE(445)
							{
								HX_STACK_LINE(445)
								::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(445)
								o->zpp_pool = null();
								HX_STACK_LINE(445)
								::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(445)
								bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(445)
								if ((tmp11)){
									HX_STACK_LINE(445)
									::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(445)
									tmp12->zpp_pool = o;
								}
								else{
									HX_STACK_LINE(445)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(445)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
								HX_STACK_LINE(445)
								o->zpp_disp = true;
							}
							HX_STACK_LINE(445)
							{
								HX_STACK_LINE(445)
								::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(445)
								{
									HX_STACK_LINE(445)
									bool tmp10 = (o->outer != null());		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(445)
									if ((tmp10)){
										HX_STACK_LINE(445)
										o->outer->zpp_inner = null();
										HX_STACK_LINE(445)
										o->outer = null();
									}
									HX_STACK_LINE(445)
									o->_isimmutable = null();
									HX_STACK_LINE(445)
									o->_validate = null();
									HX_STACK_LINE(445)
									o->_invalidate = null();
								}
								HX_STACK_LINE(445)
								::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(445)
								o->next = tmp10;
								HX_STACK_LINE(445)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
							}
						}
						HX_STACK_LINE(445)
						true;
					}
					else{
						HX_STACK_LINE(445)
						false;
					}
				}
				HX_STACK_LINE(445)
				ret;
			}
		}
		HX_STACK_LINE(445)
		{
			HX_STACK_LINE(445)
			::zpp_nape::constraint::ZPP_LineJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(445)
			::nape::geom::Vec2 tmp5 = tmp4->wrap_a2;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(445)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(445)
			if ((tmp6)){
				HX_STACK_LINE(445)
				::zpp_nape::constraint::ZPP_LineJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(445)
				tmp7->setup_a2();
			}
			HX_STACK_LINE(445)
			::zpp_nape::constraint::ZPP_LineJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(445)
			tmp7->wrap_a2;
		}
	}
	HX_STACK_LINE(446)
	{
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(446)
			{
				HX_STACK_LINE(446)
				bool tmp4 = (direction != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(446)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(446)
				if ((tmp4)){
					HX_STACK_LINE(446)
					tmp5 = direction->zpp_disp;
				}
				else{
					HX_STACK_LINE(446)
					tmp5 = false;
				}
				HX_STACK_LINE(446)
				if ((tmp5)){
					HX_STACK_LINE(446)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(446)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(446)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(446)
			bool tmp4 = (direction == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(446)
			if ((tmp4)){
				HX_STACK_LINE(446)
				::String tmp5 = HX_HCSTRING("Error: Constraint::direction","\x14","\xdb","\xc3","\x4a");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(446)
				::String tmp6 = (tmp5 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(446)
				HX_STACK_DO_THROW(tmp6);
			}
			HX_STACK_LINE(446)
			{
				HX_STACK_LINE(446)
				::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(446)
				{
					HX_STACK_LINE(446)
					::zpp_nape::constraint::ZPP_LineJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(446)
					::nape::geom::Vec2 tmp7 = tmp6->wrap_n;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(446)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(446)
					if ((tmp8)){
						HX_STACK_LINE(446)
						::zpp_nape::constraint::ZPP_LineJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(446)
						tmp9->setup_n();
					}
					HX_STACK_LINE(446)
					::zpp_nape::constraint::ZPP_LineJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(446)
					tmp5 = tmp9->wrap_n;
				}
				HX_STACK_LINE(446)
				::nape::geom::Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(446)
				{
					HX_STACK_LINE(446)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(446)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(446)
					if ((tmp6)){
						HX_STACK_LINE(446)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(446)
						tmp7 = false;
					}
					HX_STACK_LINE(446)
					if ((tmp7)){
						HX_STACK_LINE(446)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(446)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(446)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(446)
				{
					HX_STACK_LINE(446)
					bool tmp6 = (direction != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(446)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(446)
					if ((tmp6)){
						HX_STACK_LINE(446)
						tmp7 = direction->zpp_disp;
					}
					else{
						HX_STACK_LINE(446)
						tmp7 = false;
					}
					HX_STACK_LINE(446)
					if ((tmp7)){
						HX_STACK_LINE(446)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(446)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(446)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(446)
				{
					HX_STACK_LINE(446)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(446)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(446)
					if ((tmp6)){
						HX_STACK_LINE(446)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(446)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(446)
					if ((tmp7)){
						HX_STACK_LINE(446)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(446)
				bool tmp6 = (direction == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(446)
				if ((tmp6)){
					HX_STACK_LINE(446)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
				}
				HX_STACK_LINE(446)
				::nape::geom::Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(446)
				{
					HX_STACK_LINE(446)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(446)
					{
						HX_STACK_LINE(446)
						bool tmp9 = (direction != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(446)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(446)
						if ((tmp9)){
							HX_STACK_LINE(446)
							tmp10 = direction->zpp_disp;
						}
						else{
							HX_STACK_LINE(446)
							tmp10 = false;
						}
						HX_STACK_LINE(446)
						if ((tmp10)){
							HX_STACK_LINE(446)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(446)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(446)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(446)
						{
							HX_STACK_LINE(446)
							::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(446)
							bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(446)
							if ((tmp11)){
								HX_STACK_LINE(446)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(446)
						tmp8 = direction->zpp_inner->x;
					}
					HX_STACK_LINE(446)
					Float x = tmp8;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(446)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(446)
					{
						HX_STACK_LINE(446)
						bool tmp10 = (direction != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(446)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(446)
						if ((tmp10)){
							HX_STACK_LINE(446)
							tmp11 = direction->zpp_disp;
						}
						else{
							HX_STACK_LINE(446)
							tmp11 = false;
						}
						HX_STACK_LINE(446)
						if ((tmp11)){
							HX_STACK_LINE(446)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(446)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(446)
							HX_STACK_DO_THROW(tmp13);
						}
						HX_STACK_LINE(446)
						{
							HX_STACK_LINE(446)
							::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(446)
							bool tmp12 = (_this1->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(446)
							if ((tmp12)){
								HX_STACK_LINE(446)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(446)
						tmp9 = direction->zpp_inner->y;
					}
					HX_STACK_LINE(446)
					Float y = tmp9;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(446)
					{
						HX_STACK_LINE(446)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(446)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(446)
						if ((tmp10)){
							HX_STACK_LINE(446)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(446)
							tmp11 = false;
						}
						HX_STACK_LINE(446)
						if ((tmp11)){
							HX_STACK_LINE(446)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(446)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(446)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(446)
					{
						HX_STACK_LINE(446)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(446)
						bool tmp10 = _this1->_immutable;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(446)
						if ((tmp10)){
							HX_STACK_LINE(446)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(446)
						bool tmp11 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(446)
						if ((tmp11)){
							HX_STACK_LINE(446)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(446)
					bool tmp10 = (x != x);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(446)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(446)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(446)
					if ((tmp11)){
						HX_STACK_LINE(446)
						tmp12 = (y != y);
					}
					else{
						HX_STACK_LINE(446)
						tmp12 = true;
					}
					HX_STACK_LINE(446)
					if ((tmp12)){
						HX_STACK_LINE(446)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(446)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(446)
					{
						HX_STACK_LINE(446)
						{
							HX_STACK_LINE(446)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(446)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(446)
							if ((tmp14)){
								HX_STACK_LINE(446)
								tmp15 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(446)
								tmp15 = false;
							}
							HX_STACK_LINE(446)
							if ((tmp15)){
								HX_STACK_LINE(446)
								::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(446)
								::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(446)
								HX_STACK_DO_THROW(tmp17);
							}
						}
						HX_STACK_LINE(446)
						{
							HX_STACK_LINE(446)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(446)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(446)
							if ((tmp14)){
								HX_STACK_LINE(446)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(446)
						tmp13 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(446)
					Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(446)
					bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(446)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(446)
					if ((tmp15)){
						HX_STACK_LINE(446)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(446)
						{
							HX_STACK_LINE(446)
							{
								HX_STACK_LINE(446)
								bool tmp18 = (_this != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(446)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(446)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(446)
								bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(446)
								if ((tmp21)){
									HX_STACK_LINE(446)
									tmp20 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(446)
									tmp20 = false;
								}
								HX_STACK_LINE(446)
								bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(446)
								if ((tmp22)){
									HX_STACK_LINE(446)
									::String tmp23 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(446)
									::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(446)
									::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(446)
									::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(446)
									::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(446)
									HX_STACK_DO_THROW(tmp27);
								}
							}
							HX_STACK_LINE(446)
							{
								HX_STACK_LINE(446)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(446)
								bool tmp18 = (_this1->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(446)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(446)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(446)
								if ((tmp20)){
									HX_STACK_LINE(446)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(446)
							Float tmp18 = _this->zpp_inner->y;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(446)
							tmp17 = tmp18;
						}
						HX_STACK_LINE(446)
						Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(446)
						tmp16 = (tmp17 == tmp18);
					}
					else{
						HX_STACK_LINE(446)
						tmp16 = false;
					}
					HX_STACK_LINE(446)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(446)
					if ((tmp17)){
						HX_STACK_LINE(446)
						{
							HX_STACK_LINE(446)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(446)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(446)
							{
							}
						}
						HX_STACK_LINE(446)
						{
							HX_STACK_LINE(446)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(446)
							bool tmp18 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(446)
							if ((tmp18)){
								HX_STACK_LINE(446)
								::zpp_nape::geom::ZPP_Vec2 tmp19 = _this1;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(446)
								_this1->_invalidate(tmp19);
							}
						}
					}
					HX_STACK_LINE(446)
					tmp7 = _this;
				}
				HX_STACK_LINE(446)
				::nape::geom::Vec2 ret = tmp7;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(446)
				{
					HX_STACK_LINE(446)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(446)
					tmp8 = direction->zpp_inner->weak;
					HX_STACK_LINE(446)
					if ((tmp8)){
						HX_STACK_LINE(446)
						{
							HX_STACK_LINE(446)
							{
								HX_STACK_LINE(446)
								bool tmp9 = (direction != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(446)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(446)
								if ((tmp9)){
									HX_STACK_LINE(446)
									tmp10 = direction->zpp_disp;
								}
								else{
									HX_STACK_LINE(446)
									tmp10 = false;
								}
								HX_STACK_LINE(446)
								if ((tmp10)){
									HX_STACK_LINE(446)
									::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(446)
									::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(446)
									HX_STACK_DO_THROW(tmp12);
								}
							}
							HX_STACK_LINE(446)
							{
								HX_STACK_LINE(446)
								::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(446)
								bool tmp9 = _this1->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(446)
								if ((tmp9)){
									HX_STACK_LINE(446)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
								}
								HX_STACK_LINE(446)
								bool tmp10 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(446)
								if ((tmp10)){
									HX_STACK_LINE(446)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(446)
							bool tmp9 = direction->zpp_inner->_inuse;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(446)
							if ((tmp9)){
								HX_STACK_LINE(446)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
							}
							HX_STACK_LINE(446)
							::zpp_nape::geom::ZPP_Vec2 inner = direction->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(446)
							direction->zpp_inner->outer = null();
							HX_STACK_LINE(446)
							direction->zpp_inner = null();
							HX_STACK_LINE(446)
							{
								HX_STACK_LINE(446)
								::nape::geom::Vec2 o = direction;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(446)
								o->zpp_pool = null();
								HX_STACK_LINE(446)
								::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(446)
								bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(446)
								if ((tmp11)){
									HX_STACK_LINE(446)
									::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(446)
									tmp12->zpp_pool = o;
								}
								else{
									HX_STACK_LINE(446)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(446)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
								HX_STACK_LINE(446)
								o->zpp_disp = true;
							}
							HX_STACK_LINE(446)
							{
								HX_STACK_LINE(446)
								::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(446)
								{
									HX_STACK_LINE(446)
									bool tmp10 = (o->outer != null());		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(446)
									if ((tmp10)){
										HX_STACK_LINE(446)
										o->outer->zpp_inner = null();
										HX_STACK_LINE(446)
										o->outer = null();
									}
									HX_STACK_LINE(446)
									o->_isimmutable = null();
									HX_STACK_LINE(446)
									o->_validate = null();
									HX_STACK_LINE(446)
									o->_invalidate = null();
								}
								HX_STACK_LINE(446)
								::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(446)
								o->next = tmp10;
								HX_STACK_LINE(446)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
							}
						}
						HX_STACK_LINE(446)
						true;
					}
					else{
						HX_STACK_LINE(446)
						false;
					}
				}
				HX_STACK_LINE(446)
				ret;
			}
		}
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(446)
			::zpp_nape::constraint::ZPP_LineJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(446)
			::nape::geom::Vec2 tmp5 = tmp4->wrap_n;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(446)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(446)
			if ((tmp6)){
				HX_STACK_LINE(446)
				::zpp_nape::constraint::ZPP_LineJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(446)
				tmp7->setup_n();
			}
			HX_STACK_LINE(446)
			::zpp_nape::constraint::ZPP_LineJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(446)
			tmp7->wrap_n;
		}
	}
	HX_STACK_LINE(447)
	{
		HX_STACK_LINE(447)
		{
			HX_STACK_LINE(447)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(447)
			tmp4->immutable_midstep(HX_HCSTRING("LineJoint::jointMin","\x3e","\xe1","\x3a","\x51"));
			HX_STACK_LINE(447)
			bool tmp5 = (jointMin != jointMin);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(447)
			if ((tmp5)){
				HX_STACK_LINE(447)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: AngleJoint::jointMin cannot be NaN","\xa8","\x63","\x9e","\x8c"));
			}
			HX_STACK_LINE(447)
			::zpp_nape::constraint::ZPP_LineJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(447)
			Float tmp7 = tmp6->jointMin;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(447)
			Float tmp8 = jointMin;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(447)
			bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(447)
			if ((tmp9)){
				HX_STACK_LINE(447)
				::zpp_nape::constraint::ZPP_LineJoint tmp10 = this->zpp_inner_zn;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(447)
				tmp10->jointMin = jointMin;
				HX_STACK_LINE(447)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(447)
				tmp11->wake();
			}
		}
		HX_STACK_LINE(447)
		::zpp_nape::constraint::ZPP_LineJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(447)
		tmp4->jointMin;
	}
	HX_STACK_LINE(448)
	{
		HX_STACK_LINE(448)
		{
			HX_STACK_LINE(448)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(448)
			tmp4->immutable_midstep(HX_HCSTRING("LineJoint::jointMax","\x50","\xda","\x3a","\x51"));
			HX_STACK_LINE(448)
			bool tmp5 = (jointMax != jointMax);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(448)
			if ((tmp5)){
				HX_STACK_LINE(448)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: AngleJoint::jointMax cannot be NaN","\x3a","\x58","\xf1","\x24"));
			}
			HX_STACK_LINE(448)
			::zpp_nape::constraint::ZPP_LineJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(448)
			Float tmp7 = tmp6->jointMax;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(448)
			Float tmp8 = jointMax;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(448)
			bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(448)
			if ((tmp9)){
				HX_STACK_LINE(448)
				::zpp_nape::constraint::ZPP_LineJoint tmp10 = this->zpp_inner_zn;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(448)
				tmp10->jointMax = jointMax;
				HX_STACK_LINE(448)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(448)
				tmp11->wake();
			}
		}
		HX_STACK_LINE(448)
		::zpp_nape::constraint::ZPP_LineJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(448)
		tmp4->jointMax;
	}
}
;
	return null();
}

//LineJoint_obj::~LineJoint_obj() { }

Dynamic LineJoint_obj::__CreateEmpty() { return  new LineJoint_obj; }
hx::ObjectPtr< LineJoint_obj > LineJoint_obj::__new(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,::nape::geom::Vec2 direction,Float jointMin,Float jointMax)
{  hx::ObjectPtr< LineJoint_obj > _result_ = new LineJoint_obj();
	_result_->__construct(body1,body2,anchor1,anchor2,direction,jointMin,jointMax);
	return _result_;}

Dynamic LineJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LineJoint_obj > _result_ = new LineJoint_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

::nape::phys::Body LineJoint_obj::get_body1( ){
	HX_STACK_FRAME("nape.constraint.LineJoint","get_body1",0x71dff003,"nape.constraint.LineJoint.get_body1","nape/constraint/LineJoint.hx",221,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(222)
	::zpp_nape::constraint::ZPP_LineJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(222)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(222)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(222)
	if ((tmp2)){
		HX_STACK_LINE(222)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(222)
		::zpp_nape::constraint::ZPP_LineJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(222)
		tmp3 = tmp4->b1->outer;
	}
	HX_STACK_LINE(222)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(LineJoint_obj,get_body1,return )

::nape::phys::Body LineJoint_obj::set_body1( ::nape::phys::Body body1){
	HX_STACK_FRAME("nape.constraint.LineJoint","set_body1",0x5530dc0f,"nape.constraint.LineJoint.set_body1","nape/constraint/LineJoint.hx",224,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body1,"body1")
	HX_STACK_LINE(225)
	{
		HX_STACK_LINE(226)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(226)
		::String tmp1 = HX_HCSTRING("Constraint::body1","\xb2","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(226)
		tmp->immutable_midstep(tmp1);
		HX_STACK_LINE(227)
		bool tmp2 = (body1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(227)
		::zpp_nape::phys::ZPP_Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(227)
		if ((tmp2)){
			HX_STACK_LINE(227)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(227)
			tmp3 = body1->zpp_inner;
		}
		HX_STACK_LINE(227)
		::zpp_nape::phys::ZPP_Body inbody1 = tmp3;		HX_STACK_VAR(inbody1,"inbody1");
		HX_STACK_LINE(228)
		::zpp_nape::phys::ZPP_Body tmp4 = inbody1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(228)
		::zpp_nape::constraint::ZPP_LineJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(228)
		::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(228)
		bool tmp7 = (tmp4 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(228)
		if ((tmp7)){
			HX_STACK_LINE(229)
			::zpp_nape::constraint::ZPP_LineJoint tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(229)
			::zpp_nape::phys::ZPP_Body tmp9 = tmp8->b1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(229)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(229)
			if ((tmp10)){
				HX_STACK_LINE(230)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(230)
				::zpp_nape::space::ZPP_Space tmp12 = tmp11->space;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(230)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(230)
				::nape::space::Space tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(230)
				if ((tmp13)){
					HX_STACK_LINE(230)
					tmp14 = null();
				}
				else{
					HX_STACK_LINE(230)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(230)
					tmp14 = tmp15->space->outer;
				}
				HX_STACK_LINE(230)
				bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(230)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(230)
				if ((tmp15)){
					HX_STACK_LINE(230)
					::zpp_nape::constraint::ZPP_LineJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(230)
					::zpp_nape::constraint::ZPP_LineJoint tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(230)
					::zpp_nape::phys::ZPP_Body tmp19 = tmp18->b2;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(230)
					::zpp_nape::constraint::ZPP_LineJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(230)
					::zpp_nape::constraint::ZPP_LineJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(230)
					::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b1;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(230)
					tmp16 = (tmp19 != tmp22);
				}
				else{
					HX_STACK_LINE(230)
					tmp16 = false;
				}
				HX_STACK_LINE(230)
				if ((tmp16)){
					HX_STACK_LINE(232)
					::zpp_nape::constraint::ZPP_LineJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(232)
					::zpp_nape::phys::ZPP_Body tmp18 = tmp17->b1;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(232)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(232)
					if ((tmp19)){
						HX_STACK_LINE(232)
						::zpp_nape::constraint::ZPP_LineJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(232)
						::zpp_nape::util::ZNPList_ZPP_Constraint tmp21 = tmp20->b1->constraints;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(232)
						::zpp_nape::constraint::ZPP_Constraint tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(232)
						tmp21->remove(tmp22);
					}
				}
				HX_STACK_LINE(235)
				::zpp_nape::constraint::ZPP_Constraint tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(235)
				bool tmp18 = tmp17->active;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(235)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(235)
				if ((tmp18)){
					HX_STACK_LINE(235)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(235)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(235)
					::zpp_nape::space::ZPP_Space tmp22 = tmp21->space;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(235)
					bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(235)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(235)
					::nape::space::Space tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(235)
					bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(235)
					if ((tmp26)){
						HX_STACK_LINE(235)
						tmp25 = null();
					}
					else{
						HX_STACK_LINE(235)
						::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(235)
						::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(235)
						::nape::space::Space tmp29 = tmp28->space->outer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(235)
						tmp25 = tmp29;
					}
					HX_STACK_LINE(235)
					tmp19 = (tmp25 != null());
				}
				else{
					HX_STACK_LINE(235)
					tmp19 = false;
				}
				HX_STACK_LINE(235)
				if ((tmp19)){
					HX_STACK_LINE(235)
					::zpp_nape::constraint::ZPP_LineJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(235)
					tmp20->b1->wake();
				}
			}
			HX_STACK_LINE(237)
			::zpp_nape::constraint::ZPP_LineJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(237)
			tmp11->b1 = inbody1;
			HX_STACK_LINE(238)
			::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(238)
			::zpp_nape::space::ZPP_Space tmp13 = tmp12->space;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(238)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(238)
			::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(238)
			if ((tmp14)){
				HX_STACK_LINE(238)
				tmp15 = null();
			}
			else{
				HX_STACK_LINE(238)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(238)
				tmp15 = tmp16->space->outer;
			}
			HX_STACK_LINE(238)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(238)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(238)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(238)
			if ((tmp17)){
				HX_STACK_LINE(238)
				tmp18 = (inbody1 != null());
			}
			else{
				HX_STACK_LINE(238)
				tmp18 = false;
			}
			HX_STACK_LINE(238)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(238)
			if ((tmp18)){
				HX_STACK_LINE(238)
				::zpp_nape::constraint::ZPP_LineJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(238)
				::zpp_nape::constraint::ZPP_LineJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(238)
				::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b2;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(238)
				::zpp_nape::phys::ZPP_Body tmp23 = inbody1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(238)
				tmp19 = (tmp22 != tmp23);
			}
			else{
				HX_STACK_LINE(238)
				tmp19 = false;
			}
			HX_STACK_LINE(238)
			if ((tmp19)){
				HX_STACK_LINE(240)
				bool tmp20 = (inbody1 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(240)
				if ((tmp20)){
					HX_STACK_LINE(240)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(240)
					inbody1->constraints->add(tmp21);
				}
			}
			HX_STACK_LINE(243)
			::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(243)
			bool tmp21 = tmp20->active;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(243)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(243)
			if ((tmp21)){
				HX_STACK_LINE(243)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(243)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(243)
				::zpp_nape::space::ZPP_Space tmp25 = tmp24->space;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(243)
				bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(243)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(243)
				::nape::space::Space tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(243)
				bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(243)
				if ((tmp29)){
					HX_STACK_LINE(243)
					tmp28 = null();
				}
				else{
					HX_STACK_LINE(243)
					::zpp_nape::constraint::ZPP_Constraint tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(243)
					::zpp_nape::constraint::ZPP_Constraint tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(243)
					::nape::space::Space tmp32 = tmp31->space->outer;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(243)
					tmp28 = tmp32;
				}
				HX_STACK_LINE(243)
				tmp22 = (tmp28 != null());
			}
			else{
				HX_STACK_LINE(243)
				tmp22 = false;
			}
			HX_STACK_LINE(243)
			if ((tmp22)){
				HX_STACK_LINE(244)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(244)
				tmp23->wake();
				HX_STACK_LINE(245)
				bool tmp24 = (inbody1 != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(245)
				if ((tmp24)){
					HX_STACK_LINE(245)
					inbody1->wake();
				}
			}
		}
	}
	HX_STACK_LINE(249)
	::zpp_nape::constraint::ZPP_LineJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(249)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(249)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(249)
	if ((tmp2)){
		HX_STACK_LINE(249)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(249)
		::zpp_nape::constraint::ZPP_LineJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(249)
		tmp3 = tmp4->b1->outer;
	}
	HX_STACK_LINE(249)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(LineJoint_obj,set_body1,return )

::nape::phys::Body LineJoint_obj::get_body2( ){
	HX_STACK_FRAME("nape.constraint.LineJoint","get_body2",0x71dff004,"nape.constraint.LineJoint.get_body2","nape/constraint/LineJoint.hx",259,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(260)
	::zpp_nape::constraint::ZPP_LineJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(260)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(260)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(260)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(260)
	if ((tmp2)){
		HX_STACK_LINE(260)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(260)
		::zpp_nape::constraint::ZPP_LineJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(260)
		tmp3 = tmp4->b2->outer;
	}
	HX_STACK_LINE(260)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(LineJoint_obj,get_body2,return )

::nape::phys::Body LineJoint_obj::set_body2( ::nape::phys::Body body2){
	HX_STACK_FRAME("nape.constraint.LineJoint","set_body2",0x5530dc10,"nape.constraint.LineJoint.set_body2","nape/constraint/LineJoint.hx",262,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body2,"body2")
	HX_STACK_LINE(263)
	{
		HX_STACK_LINE(264)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(264)
		::String tmp1 = HX_HCSTRING("Constraint::body2","\xb3","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(264)
		tmp->immutable_midstep(tmp1);
		HX_STACK_LINE(265)
		bool tmp2 = (body2 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(265)
		::zpp_nape::phys::ZPP_Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(265)
		if ((tmp2)){
			HX_STACK_LINE(265)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(265)
			tmp3 = body2->zpp_inner;
		}
		HX_STACK_LINE(265)
		::zpp_nape::phys::ZPP_Body inbody2 = tmp3;		HX_STACK_VAR(inbody2,"inbody2");
		HX_STACK_LINE(266)
		::zpp_nape::phys::ZPP_Body tmp4 = inbody2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(266)
		::zpp_nape::constraint::ZPP_LineJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(266)
		::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(266)
		bool tmp7 = (tmp4 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(266)
		if ((tmp7)){
			HX_STACK_LINE(267)
			::zpp_nape::constraint::ZPP_LineJoint tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(267)
			::zpp_nape::phys::ZPP_Body tmp9 = tmp8->b2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(267)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(267)
			if ((tmp10)){
				HX_STACK_LINE(268)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(268)
				::zpp_nape::space::ZPP_Space tmp12 = tmp11->space;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(268)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(268)
				::nape::space::Space tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(268)
				if ((tmp13)){
					HX_STACK_LINE(268)
					tmp14 = null();
				}
				else{
					HX_STACK_LINE(268)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(268)
					tmp14 = tmp15->space->outer;
				}
				HX_STACK_LINE(268)
				bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(268)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(268)
				if ((tmp15)){
					HX_STACK_LINE(268)
					::zpp_nape::constraint::ZPP_LineJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(268)
					::zpp_nape::constraint::ZPP_LineJoint tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(268)
					::zpp_nape::phys::ZPP_Body tmp19 = tmp18->b1;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(268)
					::zpp_nape::constraint::ZPP_LineJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(268)
					::zpp_nape::constraint::ZPP_LineJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(268)
					::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b2;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(268)
					tmp16 = (tmp19 != tmp22);
				}
				else{
					HX_STACK_LINE(268)
					tmp16 = false;
				}
				HX_STACK_LINE(268)
				if ((tmp16)){
					HX_STACK_LINE(270)
					::zpp_nape::constraint::ZPP_LineJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(270)
					::zpp_nape::phys::ZPP_Body tmp18 = tmp17->b2;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(270)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(270)
					if ((tmp19)){
						HX_STACK_LINE(270)
						::zpp_nape::constraint::ZPP_LineJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(270)
						::zpp_nape::util::ZNPList_ZPP_Constraint tmp21 = tmp20->b2->constraints;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(270)
						::zpp_nape::constraint::ZPP_Constraint tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(270)
						tmp21->remove(tmp22);
					}
				}
				HX_STACK_LINE(273)
				::zpp_nape::constraint::ZPP_Constraint tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(273)
				bool tmp18 = tmp17->active;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(273)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(273)
				if ((tmp18)){
					HX_STACK_LINE(273)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(273)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(273)
					::zpp_nape::space::ZPP_Space tmp22 = tmp21->space;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(273)
					bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(273)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(273)
					::nape::space::Space tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(273)
					bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(273)
					if ((tmp26)){
						HX_STACK_LINE(273)
						tmp25 = null();
					}
					else{
						HX_STACK_LINE(273)
						::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(273)
						::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(273)
						::nape::space::Space tmp29 = tmp28->space->outer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(273)
						tmp25 = tmp29;
					}
					HX_STACK_LINE(273)
					tmp19 = (tmp25 != null());
				}
				else{
					HX_STACK_LINE(273)
					tmp19 = false;
				}
				HX_STACK_LINE(273)
				if ((tmp19)){
					HX_STACK_LINE(273)
					::zpp_nape::constraint::ZPP_LineJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(273)
					tmp20->b2->wake();
				}
			}
			HX_STACK_LINE(275)
			::zpp_nape::constraint::ZPP_LineJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(275)
			tmp11->b2 = inbody2;
			HX_STACK_LINE(276)
			::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(276)
			::zpp_nape::space::ZPP_Space tmp13 = tmp12->space;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(276)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(276)
			::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(276)
			if ((tmp14)){
				HX_STACK_LINE(276)
				tmp15 = null();
			}
			else{
				HX_STACK_LINE(276)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(276)
				tmp15 = tmp16->space->outer;
			}
			HX_STACK_LINE(276)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(276)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(276)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(276)
			if ((tmp17)){
				HX_STACK_LINE(276)
				tmp18 = (inbody2 != null());
			}
			else{
				HX_STACK_LINE(276)
				tmp18 = false;
			}
			HX_STACK_LINE(276)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(276)
			if ((tmp18)){
				HX_STACK_LINE(276)
				::zpp_nape::constraint::ZPP_LineJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(276)
				::zpp_nape::constraint::ZPP_LineJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(276)
				::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b1;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(276)
				::zpp_nape::phys::ZPP_Body tmp23 = inbody2;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(276)
				tmp19 = (tmp22 != tmp23);
			}
			else{
				HX_STACK_LINE(276)
				tmp19 = false;
			}
			HX_STACK_LINE(276)
			if ((tmp19)){
				HX_STACK_LINE(278)
				bool tmp20 = (inbody2 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(278)
				if ((tmp20)){
					HX_STACK_LINE(278)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(278)
					inbody2->constraints->add(tmp21);
				}
			}
			HX_STACK_LINE(281)
			::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(281)
			bool tmp21 = tmp20->active;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(281)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(281)
			if ((tmp21)){
				HX_STACK_LINE(281)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(281)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(281)
				::zpp_nape::space::ZPP_Space tmp25 = tmp24->space;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(281)
				bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(281)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(281)
				::nape::space::Space tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(281)
				bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(281)
				if ((tmp29)){
					HX_STACK_LINE(281)
					tmp28 = null();
				}
				else{
					HX_STACK_LINE(281)
					::zpp_nape::constraint::ZPP_Constraint tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(281)
					::zpp_nape::constraint::ZPP_Constraint tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(281)
					::nape::space::Space tmp32 = tmp31->space->outer;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(281)
					tmp28 = tmp32;
				}
				HX_STACK_LINE(281)
				tmp22 = (tmp28 != null());
			}
			else{
				HX_STACK_LINE(281)
				tmp22 = false;
			}
			HX_STACK_LINE(281)
			if ((tmp22)){
				HX_STACK_LINE(282)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(282)
				tmp23->wake();
				HX_STACK_LINE(283)
				bool tmp24 = (inbody2 != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(283)
				if ((tmp24)){
					HX_STACK_LINE(283)
					inbody2->wake();
				}
			}
		}
	}
	HX_STACK_LINE(287)
	::zpp_nape::constraint::ZPP_LineJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(287)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(287)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(287)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(287)
	if ((tmp2)){
		HX_STACK_LINE(287)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(287)
		::zpp_nape::constraint::ZPP_LineJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(287)
		tmp3 = tmp4->b2->outer;
	}
	HX_STACK_LINE(287)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(LineJoint_obj,set_body2,return )

::nape::geom::Vec2 LineJoint_obj::get_anchor1( ){
	HX_STACK_FRAME("nape.constraint.LineJoint","get_anchor1",0x6f599dd0,"nape.constraint.LineJoint.get_anchor1","nape/constraint/LineJoint.hx",296,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(297)
	::zpp_nape::constraint::ZPP_LineJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	::nape::geom::Vec2 tmp1 = tmp->wrap_a1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(297)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(297)
	if ((tmp2)){
		HX_STACK_LINE(297)
		::zpp_nape::constraint::ZPP_LineJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(297)
		tmp3->setup_a1();
	}
	HX_STACK_LINE(298)
	::zpp_nape::constraint::ZPP_LineJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(298)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_a1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(298)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(LineJoint_obj,get_anchor1,return )

::nape::geom::Vec2 LineJoint_obj::set_anchor1( ::nape::geom::Vec2 anchor1){
	HX_STACK_FRAME("nape.constraint.LineJoint","set_anchor1",0x79c6a4dc,"nape.constraint.LineJoint.set_anchor1","nape/constraint/LineJoint.hx",300,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor1,"anchor1")
	HX_STACK_LINE(301)
	{
		HX_STACK_LINE(302)
		{
			HX_STACK_LINE(304)
			bool tmp = (anchor1 != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(304)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(304)
			if ((tmp)){
				HX_STACK_LINE(304)
				tmp1 = anchor1->zpp_disp;
			}
			else{
				HX_STACK_LINE(304)
				tmp1 = false;
			}
			HX_STACK_LINE(304)
			if ((tmp1)){
				HX_STACK_LINE(304)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(304)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(304)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(308)
		bool tmp = (anchor1 == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(308)
		if ((tmp)){
			HX_STACK_LINE(308)
			::String tmp1 = HX_HCSTRING("Error: Constraint::anchor1","\xb1","\x15","\x18","\x54");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(308)
			::String tmp2 = (tmp1 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(308)
			HX_STACK_DO_THROW(tmp2);
		}
		HX_STACK_LINE(310)
		{
			HX_STACK_LINE(310)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(310)
			{
				HX_STACK_LINE(310)
				::zpp_nape::constraint::ZPP_LineJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(310)
				::nape::geom::Vec2 tmp3 = tmp2->wrap_a1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(310)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(310)
				if ((tmp4)){
					HX_STACK_LINE(310)
					::zpp_nape::constraint::ZPP_LineJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(310)
					tmp5->setup_a1();
				}
				HX_STACK_LINE(310)
				::zpp_nape::constraint::ZPP_LineJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(310)
				tmp1 = tmp5->wrap_a1;
			}
			HX_STACK_LINE(310)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(310)
			{
				HX_STACK_LINE(310)
				bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(310)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(310)
				if ((tmp2)){
					HX_STACK_LINE(310)
					tmp3 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(310)
					tmp3 = false;
				}
				HX_STACK_LINE(310)
				if ((tmp3)){
					HX_STACK_LINE(310)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(310)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(310)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(310)
			{
				HX_STACK_LINE(310)
				bool tmp2 = (anchor1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(310)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(310)
				if ((tmp2)){
					HX_STACK_LINE(310)
					tmp3 = anchor1->zpp_disp;
				}
				else{
					HX_STACK_LINE(310)
					tmp3 = false;
				}
				HX_STACK_LINE(310)
				if ((tmp3)){
					HX_STACK_LINE(310)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(310)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(310)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(310)
			{
				HX_STACK_LINE(310)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(310)
				bool tmp2 = _this1->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(310)
				if ((tmp2)){
					HX_STACK_LINE(310)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(310)
				bool tmp3 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(310)
				if ((tmp3)){
					HX_STACK_LINE(310)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(310)
			bool tmp2 = (anchor1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(310)
			if ((tmp2)){
				HX_STACK_LINE(310)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
			}
			HX_STACK_LINE(310)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(310)
			{
				HX_STACK_LINE(310)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(310)
				{
					HX_STACK_LINE(310)
					bool tmp5 = (anchor1 != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(310)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(310)
					if ((tmp5)){
						HX_STACK_LINE(310)
						tmp6 = anchor1->zpp_disp;
					}
					else{
						HX_STACK_LINE(310)
						tmp6 = false;
					}
					HX_STACK_LINE(310)
					if ((tmp6)){
						HX_STACK_LINE(310)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(310)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(310)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(310)
					{
						HX_STACK_LINE(310)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(310)
						bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(310)
						if ((tmp7)){
							HX_STACK_LINE(310)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(310)
					tmp4 = anchor1->zpp_inner->x;
				}
				HX_STACK_LINE(310)
				Float x = tmp4;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(310)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(310)
				{
					HX_STACK_LINE(310)
					bool tmp6 = (anchor1 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(310)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(310)
					if ((tmp6)){
						HX_STACK_LINE(310)
						tmp7 = anchor1->zpp_disp;
					}
					else{
						HX_STACK_LINE(310)
						tmp7 = false;
					}
					HX_STACK_LINE(310)
					if ((tmp7)){
						HX_STACK_LINE(310)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(310)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(310)
						HX_STACK_DO_THROW(tmp9);
					}
					HX_STACK_LINE(310)
					{
						HX_STACK_LINE(310)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(310)
						bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(310)
						if ((tmp8)){
							HX_STACK_LINE(310)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(310)
					tmp5 = anchor1->zpp_inner->y;
				}
				HX_STACK_LINE(310)
				Float y = tmp5;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(310)
				{
					HX_STACK_LINE(310)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(310)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(310)
					if ((tmp6)){
						HX_STACK_LINE(310)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(310)
						tmp7 = false;
					}
					HX_STACK_LINE(310)
					if ((tmp7)){
						HX_STACK_LINE(310)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(310)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(310)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(310)
				{
					HX_STACK_LINE(310)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(310)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(310)
					if ((tmp6)){
						HX_STACK_LINE(310)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(310)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(310)
					if ((tmp7)){
						HX_STACK_LINE(310)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(310)
				bool tmp6 = (x != x);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(310)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(310)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(310)
				if ((tmp7)){
					HX_STACK_LINE(310)
					tmp8 = (y != y);
				}
				else{
					HX_STACK_LINE(310)
					tmp8 = true;
				}
				HX_STACK_LINE(310)
				if ((tmp8)){
					HX_STACK_LINE(310)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(310)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(310)
				{
					HX_STACK_LINE(310)
					{
						HX_STACK_LINE(310)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(310)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(310)
						if ((tmp10)){
							HX_STACK_LINE(310)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(310)
							tmp11 = false;
						}
						HX_STACK_LINE(310)
						if ((tmp11)){
							HX_STACK_LINE(310)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(310)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(310)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(310)
					{
						HX_STACK_LINE(310)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(310)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(310)
						if ((tmp10)){
							HX_STACK_LINE(310)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(310)
					tmp9 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(310)
				Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(310)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(310)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(310)
				if ((tmp11)){
					HX_STACK_LINE(310)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(310)
					{
						HX_STACK_LINE(310)
						{
							HX_STACK_LINE(310)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(310)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(310)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(310)
							bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(310)
							if ((tmp17)){
								HX_STACK_LINE(310)
								tmp16 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(310)
								tmp16 = false;
							}
							HX_STACK_LINE(310)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(310)
							if ((tmp18)){
								HX_STACK_LINE(310)
								::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(310)
								::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(310)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(310)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(310)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(310)
								HX_STACK_DO_THROW(tmp23);
							}
						}
						HX_STACK_LINE(310)
						{
							HX_STACK_LINE(310)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(310)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(310)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(310)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(310)
							if ((tmp16)){
								HX_STACK_LINE(310)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(310)
						Float tmp14 = _this->zpp_inner->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(310)
						tmp13 = tmp14;
					}
					HX_STACK_LINE(310)
					Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(310)
					tmp12 = (tmp13 == tmp14);
				}
				else{
					HX_STACK_LINE(310)
					tmp12 = false;
				}
				HX_STACK_LINE(310)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(310)
				if ((tmp13)){
					HX_STACK_LINE(310)
					{
						HX_STACK_LINE(310)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(310)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(310)
						{
						}
					}
					HX_STACK_LINE(310)
					{
						HX_STACK_LINE(310)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(310)
						bool tmp14 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(310)
						if ((tmp14)){
							HX_STACK_LINE(310)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = _this1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(310)
							_this1->_invalidate(tmp15);
						}
					}
				}
				HX_STACK_LINE(310)
				tmp3 = _this;
			}
			HX_STACK_LINE(310)
			::nape::geom::Vec2 ret = tmp3;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(310)
			{
				HX_STACK_LINE(310)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(310)
				tmp4 = anchor1->zpp_inner->weak;
				HX_STACK_LINE(310)
				if ((tmp4)){
					HX_STACK_LINE(310)
					{
						HX_STACK_LINE(310)
						{
							HX_STACK_LINE(310)
							bool tmp5 = (anchor1 != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(310)
							bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(310)
							if ((tmp5)){
								HX_STACK_LINE(310)
								tmp6 = anchor1->zpp_disp;
							}
							else{
								HX_STACK_LINE(310)
								tmp6 = false;
							}
							HX_STACK_LINE(310)
							if ((tmp6)){
								HX_STACK_LINE(310)
								::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(310)
								::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(310)
								HX_STACK_DO_THROW(tmp8);
							}
						}
						HX_STACK_LINE(310)
						{
							HX_STACK_LINE(310)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(310)
							bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(310)
							if ((tmp5)){
								HX_STACK_LINE(310)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(310)
							bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(310)
							if ((tmp6)){
								HX_STACK_LINE(310)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(310)
						bool tmp5 = anchor1->zpp_inner->_inuse;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(310)
						if ((tmp5)){
							HX_STACK_LINE(310)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(310)
						::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(310)
						anchor1->zpp_inner->outer = null();
						HX_STACK_LINE(310)
						anchor1->zpp_inner = null();
						HX_STACK_LINE(310)
						{
							HX_STACK_LINE(310)
							::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(310)
							o->zpp_pool = null();
							HX_STACK_LINE(310)
							::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(310)
							bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(310)
							if ((tmp7)){
								HX_STACK_LINE(310)
								::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(310)
								tmp8->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(310)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(310)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(310)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(310)
						{
							HX_STACK_LINE(310)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(310)
							{
								HX_STACK_LINE(310)
								bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(310)
								if ((tmp6)){
									HX_STACK_LINE(310)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(310)
									o->outer = null();
								}
								HX_STACK_LINE(310)
								o->_isimmutable = null();
								HX_STACK_LINE(310)
								o->_validate = null();
								HX_STACK_LINE(310)
								o->_invalidate = null();
							}
							HX_STACK_LINE(310)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(310)
							o->next = tmp6;
							HX_STACK_LINE(310)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(310)
					true;
				}
				else{
					HX_STACK_LINE(310)
					false;
				}
			}
			HX_STACK_LINE(310)
			ret;
		}
	}
	HX_STACK_LINE(312)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(312)
	{
		HX_STACK_LINE(312)
		::zpp_nape::constraint::ZPP_LineJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(312)
		::nape::geom::Vec2 tmp2 = tmp1->wrap_a1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(312)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(312)
		if ((tmp3)){
			HX_STACK_LINE(312)
			::zpp_nape::constraint::ZPP_LineJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(312)
			tmp4->setup_a1();
		}
		HX_STACK_LINE(312)
		::zpp_nape::constraint::ZPP_LineJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(312)
		tmp = tmp4->wrap_a1;
	}
	HX_STACK_LINE(312)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(LineJoint_obj,set_anchor1,return )

::nape::geom::Vec2 LineJoint_obj::get_anchor2( ){
	HX_STACK_FRAME("nape.constraint.LineJoint","get_anchor2",0x6f599dd1,"nape.constraint.LineJoint.get_anchor2","nape/constraint/LineJoint.hx",321,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(322)
	::zpp_nape::constraint::ZPP_LineJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(322)
	::nape::geom::Vec2 tmp1 = tmp->wrap_a2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(322)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(322)
	if ((tmp2)){
		HX_STACK_LINE(322)
		::zpp_nape::constraint::ZPP_LineJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(322)
		tmp3->setup_a2();
	}
	HX_STACK_LINE(323)
	::zpp_nape::constraint::ZPP_LineJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(323)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_a2;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(323)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(LineJoint_obj,get_anchor2,return )

::nape::geom::Vec2 LineJoint_obj::set_anchor2( ::nape::geom::Vec2 anchor2){
	HX_STACK_FRAME("nape.constraint.LineJoint","set_anchor2",0x79c6a4dd,"nape.constraint.LineJoint.set_anchor2","nape/constraint/LineJoint.hx",325,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor2,"anchor2")
	HX_STACK_LINE(326)
	{
		HX_STACK_LINE(327)
		{
			HX_STACK_LINE(329)
			bool tmp = (anchor2 != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(329)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(329)
			if ((tmp)){
				HX_STACK_LINE(329)
				tmp1 = anchor2->zpp_disp;
			}
			else{
				HX_STACK_LINE(329)
				tmp1 = false;
			}
			HX_STACK_LINE(329)
			if ((tmp1)){
				HX_STACK_LINE(329)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(329)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(329)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(333)
		bool tmp = (anchor2 == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(333)
		if ((tmp)){
			HX_STACK_LINE(333)
			::String tmp1 = HX_HCSTRING("Error: Constraint::anchor2","\xb2","\x15","\x18","\x54");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(333)
			::String tmp2 = (tmp1 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(333)
			HX_STACK_DO_THROW(tmp2);
		}
		HX_STACK_LINE(335)
		{
			HX_STACK_LINE(335)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				::zpp_nape::constraint::ZPP_LineJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(335)
				::nape::geom::Vec2 tmp3 = tmp2->wrap_a2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(335)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(335)
				if ((tmp4)){
					HX_STACK_LINE(335)
					::zpp_nape::constraint::ZPP_LineJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(335)
					tmp5->setup_a2();
				}
				HX_STACK_LINE(335)
				::zpp_nape::constraint::ZPP_LineJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(335)
				tmp1 = tmp5->wrap_a2;
			}
			HX_STACK_LINE(335)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(335)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(335)
				if ((tmp2)){
					HX_STACK_LINE(335)
					tmp3 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(335)
					tmp3 = false;
				}
				HX_STACK_LINE(335)
				if ((tmp3)){
					HX_STACK_LINE(335)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(335)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(335)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				bool tmp2 = (anchor2 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(335)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(335)
				if ((tmp2)){
					HX_STACK_LINE(335)
					tmp3 = anchor2->zpp_disp;
				}
				else{
					HX_STACK_LINE(335)
					tmp3 = false;
				}
				HX_STACK_LINE(335)
				if ((tmp3)){
					HX_STACK_LINE(335)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(335)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(335)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(335)
				bool tmp2 = _this1->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(335)
				if ((tmp2)){
					HX_STACK_LINE(335)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(335)
				bool tmp3 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(335)
				if ((tmp3)){
					HX_STACK_LINE(335)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(335)
			bool tmp2 = (anchor2 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(335)
			if ((tmp2)){
				HX_STACK_LINE(335)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
			}
			HX_STACK_LINE(335)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					bool tmp5 = (anchor2 != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(335)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(335)
					if ((tmp5)){
						HX_STACK_LINE(335)
						tmp6 = anchor2->zpp_disp;
					}
					else{
						HX_STACK_LINE(335)
						tmp6 = false;
					}
					HX_STACK_LINE(335)
					if ((tmp6)){
						HX_STACK_LINE(335)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(335)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(335)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(335)
						bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(335)
						if ((tmp7)){
							HX_STACK_LINE(335)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(335)
					tmp4 = anchor2->zpp_inner->x;
				}
				HX_STACK_LINE(335)
				Float x = tmp4;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(335)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					bool tmp6 = (anchor2 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(335)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(335)
					if ((tmp6)){
						HX_STACK_LINE(335)
						tmp7 = anchor2->zpp_disp;
					}
					else{
						HX_STACK_LINE(335)
						tmp7 = false;
					}
					HX_STACK_LINE(335)
					if ((tmp7)){
						HX_STACK_LINE(335)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(335)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(335)
						HX_STACK_DO_THROW(tmp9);
					}
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(335)
						bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(335)
						if ((tmp8)){
							HX_STACK_LINE(335)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(335)
					tmp5 = anchor2->zpp_inner->y;
				}
				HX_STACK_LINE(335)
				Float y = tmp5;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(335)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(335)
					if ((tmp6)){
						HX_STACK_LINE(335)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(335)
						tmp7 = false;
					}
					HX_STACK_LINE(335)
					if ((tmp7)){
						HX_STACK_LINE(335)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(335)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(335)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(335)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(335)
					if ((tmp6)){
						HX_STACK_LINE(335)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(335)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(335)
					if ((tmp7)){
						HX_STACK_LINE(335)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(335)
				bool tmp6 = (x != x);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(335)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(335)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(335)
				if ((tmp7)){
					HX_STACK_LINE(335)
					tmp8 = (y != y);
				}
				else{
					HX_STACK_LINE(335)
					tmp8 = true;
				}
				HX_STACK_LINE(335)
				if ((tmp8)){
					HX_STACK_LINE(335)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(335)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(335)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(335)
						if ((tmp10)){
							HX_STACK_LINE(335)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(335)
							tmp11 = false;
						}
						HX_STACK_LINE(335)
						if ((tmp11)){
							HX_STACK_LINE(335)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(335)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(335)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(335)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(335)
						if ((tmp10)){
							HX_STACK_LINE(335)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(335)
					tmp9 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(335)
				Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(335)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(335)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(335)
				if ((tmp11)){
					HX_STACK_LINE(335)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						{
							HX_STACK_LINE(335)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(335)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(335)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(335)
							bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(335)
							if ((tmp17)){
								HX_STACK_LINE(335)
								tmp16 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(335)
								tmp16 = false;
							}
							HX_STACK_LINE(335)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(335)
							if ((tmp18)){
								HX_STACK_LINE(335)
								::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(335)
								::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(335)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(335)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(335)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(335)
								HX_STACK_DO_THROW(tmp23);
							}
						}
						HX_STACK_LINE(335)
						{
							HX_STACK_LINE(335)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(335)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(335)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(335)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(335)
							if ((tmp16)){
								HX_STACK_LINE(335)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(335)
						Float tmp14 = _this->zpp_inner->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(335)
						tmp13 = tmp14;
					}
					HX_STACK_LINE(335)
					Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(335)
					tmp12 = (tmp13 == tmp14);
				}
				else{
					HX_STACK_LINE(335)
					tmp12 = false;
				}
				HX_STACK_LINE(335)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(335)
				if ((tmp13)){
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(335)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(335)
						{
						}
					}
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(335)
						bool tmp14 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(335)
						if ((tmp14)){
							HX_STACK_LINE(335)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = _this1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(335)
							_this1->_invalidate(tmp15);
						}
					}
				}
				HX_STACK_LINE(335)
				tmp3 = _this;
			}
			HX_STACK_LINE(335)
			::nape::geom::Vec2 ret = tmp3;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(335)
				tmp4 = anchor2->zpp_inner->weak;
				HX_STACK_LINE(335)
				if ((tmp4)){
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						{
							HX_STACK_LINE(335)
							bool tmp5 = (anchor2 != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(335)
							bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(335)
							if ((tmp5)){
								HX_STACK_LINE(335)
								tmp6 = anchor2->zpp_disp;
							}
							else{
								HX_STACK_LINE(335)
								tmp6 = false;
							}
							HX_STACK_LINE(335)
							if ((tmp6)){
								HX_STACK_LINE(335)
								::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(335)
								::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(335)
								HX_STACK_DO_THROW(tmp8);
							}
						}
						HX_STACK_LINE(335)
						{
							HX_STACK_LINE(335)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(335)
							bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(335)
							if ((tmp5)){
								HX_STACK_LINE(335)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(335)
							bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(335)
							if ((tmp6)){
								HX_STACK_LINE(335)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(335)
						bool tmp5 = anchor2->zpp_inner->_inuse;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(335)
						if ((tmp5)){
							HX_STACK_LINE(335)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(335)
						::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(335)
						anchor2->zpp_inner->outer = null();
						HX_STACK_LINE(335)
						anchor2->zpp_inner = null();
						HX_STACK_LINE(335)
						{
							HX_STACK_LINE(335)
							::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(335)
							o->zpp_pool = null();
							HX_STACK_LINE(335)
							::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(335)
							bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(335)
							if ((tmp7)){
								HX_STACK_LINE(335)
								::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(335)
								tmp8->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(335)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(335)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(335)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(335)
						{
							HX_STACK_LINE(335)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(335)
							{
								HX_STACK_LINE(335)
								bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(335)
								if ((tmp6)){
									HX_STACK_LINE(335)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(335)
									o->outer = null();
								}
								HX_STACK_LINE(335)
								o->_isimmutable = null();
								HX_STACK_LINE(335)
								o->_validate = null();
								HX_STACK_LINE(335)
								o->_invalidate = null();
							}
							HX_STACK_LINE(335)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(335)
							o->next = tmp6;
							HX_STACK_LINE(335)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(335)
					true;
				}
				else{
					HX_STACK_LINE(335)
					false;
				}
			}
			HX_STACK_LINE(335)
			ret;
		}
	}
	HX_STACK_LINE(337)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(337)
	{
		HX_STACK_LINE(337)
		::zpp_nape::constraint::ZPP_LineJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(337)
		::nape::geom::Vec2 tmp2 = tmp1->wrap_a2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(337)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(337)
		if ((tmp3)){
			HX_STACK_LINE(337)
			::zpp_nape::constraint::ZPP_LineJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(337)
			tmp4->setup_a2();
		}
		HX_STACK_LINE(337)
		::zpp_nape::constraint::ZPP_LineJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(337)
		tmp = tmp4->wrap_a2;
	}
	HX_STACK_LINE(337)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(LineJoint_obj,set_anchor2,return )

::nape::geom::Vec2 LineJoint_obj::get_direction( ){
	HX_STACK_FRAME("nape.constraint.LineJoint","get_direction",0xdf8ee8f3,"nape.constraint.LineJoint.get_direction","nape/constraint/LineJoint.hx",347,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(348)
	::zpp_nape::constraint::ZPP_LineJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(348)
	::nape::geom::Vec2 tmp1 = tmp->wrap_n;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(348)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(348)
	if ((tmp2)){
		HX_STACK_LINE(348)
		::zpp_nape::constraint::ZPP_LineJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(348)
		tmp3->setup_n();
	}
	HX_STACK_LINE(349)
	::zpp_nape::constraint::ZPP_LineJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(349)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_n;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(349)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(LineJoint_obj,get_direction,return )

::nape::geom::Vec2 LineJoint_obj::set_direction( ::nape::geom::Vec2 direction){
	HX_STACK_FRAME("nape.constraint.LineJoint","set_direction",0x2494caff,"nape.constraint.LineJoint.set_direction","nape/constraint/LineJoint.hx",351,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(direction,"direction")
	HX_STACK_LINE(352)
	{
		HX_STACK_LINE(353)
		{
			HX_STACK_LINE(355)
			bool tmp = (direction != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(355)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(355)
			if ((tmp)){
				HX_STACK_LINE(355)
				tmp1 = direction->zpp_disp;
			}
			else{
				HX_STACK_LINE(355)
				tmp1 = false;
			}
			HX_STACK_LINE(355)
			if ((tmp1)){
				HX_STACK_LINE(355)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(355)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(355)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(359)
		bool tmp = (direction == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(359)
		if ((tmp)){
			HX_STACK_LINE(359)
			::String tmp1 = HX_HCSTRING("Error: Constraint::direction","\x14","\xdb","\xc3","\x4a");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(359)
			::String tmp2 = (tmp1 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(359)
			HX_STACK_DO_THROW(tmp2);
		}
		HX_STACK_LINE(361)
		{
			HX_STACK_LINE(361)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(361)
				::zpp_nape::constraint::ZPP_LineJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(361)
				::nape::geom::Vec2 tmp3 = tmp2->wrap_n;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(361)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(361)
				if ((tmp4)){
					HX_STACK_LINE(361)
					::zpp_nape::constraint::ZPP_LineJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(361)
					tmp5->setup_n();
				}
				HX_STACK_LINE(361)
				::zpp_nape::constraint::ZPP_LineJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(361)
				tmp1 = tmp5->wrap_n;
			}
			HX_STACK_LINE(361)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(361)
				bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(361)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(361)
				if ((tmp2)){
					HX_STACK_LINE(361)
					tmp3 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(361)
					tmp3 = false;
				}
				HX_STACK_LINE(361)
				if ((tmp3)){
					HX_STACK_LINE(361)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(361)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(361)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(361)
				bool tmp2 = (direction != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(361)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(361)
				if ((tmp2)){
					HX_STACK_LINE(361)
					tmp3 = direction->zpp_disp;
				}
				else{
					HX_STACK_LINE(361)
					tmp3 = false;
				}
				HX_STACK_LINE(361)
				if ((tmp3)){
					HX_STACK_LINE(361)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(361)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(361)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(361)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(361)
				bool tmp2 = _this1->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(361)
				if ((tmp2)){
					HX_STACK_LINE(361)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(361)
				bool tmp3 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(361)
				if ((tmp3)){
					HX_STACK_LINE(361)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(361)
			bool tmp2 = (direction == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(361)
			if ((tmp2)){
				HX_STACK_LINE(361)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
			}
			HX_STACK_LINE(361)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(361)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(361)
				{
					HX_STACK_LINE(361)
					bool tmp5 = (direction != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(361)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(361)
					if ((tmp5)){
						HX_STACK_LINE(361)
						tmp6 = direction->zpp_disp;
					}
					else{
						HX_STACK_LINE(361)
						tmp6 = false;
					}
					HX_STACK_LINE(361)
					if ((tmp6)){
						HX_STACK_LINE(361)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(361)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(361)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(361)
					{
						HX_STACK_LINE(361)
						::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(361)
						bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(361)
						if ((tmp7)){
							HX_STACK_LINE(361)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(361)
					tmp4 = direction->zpp_inner->x;
				}
				HX_STACK_LINE(361)
				Float x = tmp4;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(361)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(361)
				{
					HX_STACK_LINE(361)
					bool tmp6 = (direction != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(361)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(361)
					if ((tmp6)){
						HX_STACK_LINE(361)
						tmp7 = direction->zpp_disp;
					}
					else{
						HX_STACK_LINE(361)
						tmp7 = false;
					}
					HX_STACK_LINE(361)
					if ((tmp7)){
						HX_STACK_LINE(361)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(361)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(361)
						HX_STACK_DO_THROW(tmp9);
					}
					HX_STACK_LINE(361)
					{
						HX_STACK_LINE(361)
						::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(361)
						bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(361)
						if ((tmp8)){
							HX_STACK_LINE(361)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(361)
					tmp5 = direction->zpp_inner->y;
				}
				HX_STACK_LINE(361)
				Float y = tmp5;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(361)
				{
					HX_STACK_LINE(361)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(361)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(361)
					if ((tmp6)){
						HX_STACK_LINE(361)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(361)
						tmp7 = false;
					}
					HX_STACK_LINE(361)
					if ((tmp7)){
						HX_STACK_LINE(361)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(361)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(361)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(361)
				{
					HX_STACK_LINE(361)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(361)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(361)
					if ((tmp6)){
						HX_STACK_LINE(361)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(361)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(361)
					if ((tmp7)){
						HX_STACK_LINE(361)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(361)
				bool tmp6 = (x != x);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(361)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(361)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(361)
				if ((tmp7)){
					HX_STACK_LINE(361)
					tmp8 = (y != y);
				}
				else{
					HX_STACK_LINE(361)
					tmp8 = true;
				}
				HX_STACK_LINE(361)
				if ((tmp8)){
					HX_STACK_LINE(361)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(361)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(361)
				{
					HX_STACK_LINE(361)
					{
						HX_STACK_LINE(361)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(361)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(361)
						if ((tmp10)){
							HX_STACK_LINE(361)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(361)
							tmp11 = false;
						}
						HX_STACK_LINE(361)
						if ((tmp11)){
							HX_STACK_LINE(361)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(361)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(361)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(361)
					{
						HX_STACK_LINE(361)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(361)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(361)
						if ((tmp10)){
							HX_STACK_LINE(361)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(361)
					tmp9 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(361)
				Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(361)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(361)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(361)
				if ((tmp11)){
					HX_STACK_LINE(361)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(361)
					{
						HX_STACK_LINE(361)
						{
							HX_STACK_LINE(361)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(361)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(361)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(361)
							bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(361)
							if ((tmp17)){
								HX_STACK_LINE(361)
								tmp16 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(361)
								tmp16 = false;
							}
							HX_STACK_LINE(361)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(361)
							if ((tmp18)){
								HX_STACK_LINE(361)
								::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(361)
								::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(361)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(361)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(361)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(361)
								HX_STACK_DO_THROW(tmp23);
							}
						}
						HX_STACK_LINE(361)
						{
							HX_STACK_LINE(361)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(361)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(361)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(361)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(361)
							if ((tmp16)){
								HX_STACK_LINE(361)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(361)
						Float tmp14 = _this->zpp_inner->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(361)
						tmp13 = tmp14;
					}
					HX_STACK_LINE(361)
					Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(361)
					tmp12 = (tmp13 == tmp14);
				}
				else{
					HX_STACK_LINE(361)
					tmp12 = false;
				}
				HX_STACK_LINE(361)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(361)
				if ((tmp13)){
					HX_STACK_LINE(361)
					{
						HX_STACK_LINE(361)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(361)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(361)
						{
						}
					}
					HX_STACK_LINE(361)
					{
						HX_STACK_LINE(361)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(361)
						bool tmp14 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(361)
						if ((tmp14)){
							HX_STACK_LINE(361)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = _this1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(361)
							_this1->_invalidate(tmp15);
						}
					}
				}
				HX_STACK_LINE(361)
				tmp3 = _this;
			}
			HX_STACK_LINE(361)
			::nape::geom::Vec2 ret = tmp3;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(361)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(361)
				tmp4 = direction->zpp_inner->weak;
				HX_STACK_LINE(361)
				if ((tmp4)){
					HX_STACK_LINE(361)
					{
						HX_STACK_LINE(361)
						{
							HX_STACK_LINE(361)
							bool tmp5 = (direction != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(361)
							bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(361)
							if ((tmp5)){
								HX_STACK_LINE(361)
								tmp6 = direction->zpp_disp;
							}
							else{
								HX_STACK_LINE(361)
								tmp6 = false;
							}
							HX_STACK_LINE(361)
							if ((tmp6)){
								HX_STACK_LINE(361)
								::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(361)
								::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(361)
								HX_STACK_DO_THROW(tmp8);
							}
						}
						HX_STACK_LINE(361)
						{
							HX_STACK_LINE(361)
							::zpp_nape::geom::ZPP_Vec2 _this1 = direction->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(361)
							bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(361)
							if ((tmp5)){
								HX_STACK_LINE(361)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(361)
							bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(361)
							if ((tmp6)){
								HX_STACK_LINE(361)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(361)
						bool tmp5 = direction->zpp_inner->_inuse;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(361)
						if ((tmp5)){
							HX_STACK_LINE(361)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(361)
						::zpp_nape::geom::ZPP_Vec2 inner = direction->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(361)
						direction->zpp_inner->outer = null();
						HX_STACK_LINE(361)
						direction->zpp_inner = null();
						HX_STACK_LINE(361)
						{
							HX_STACK_LINE(361)
							::nape::geom::Vec2 o = direction;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(361)
							o->zpp_pool = null();
							HX_STACK_LINE(361)
							::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(361)
							bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(361)
							if ((tmp7)){
								HX_STACK_LINE(361)
								::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(361)
								tmp8->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(361)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(361)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(361)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(361)
						{
							HX_STACK_LINE(361)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(361)
							{
								HX_STACK_LINE(361)
								bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(361)
								if ((tmp6)){
									HX_STACK_LINE(361)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(361)
									o->outer = null();
								}
								HX_STACK_LINE(361)
								o->_isimmutable = null();
								HX_STACK_LINE(361)
								o->_validate = null();
								HX_STACK_LINE(361)
								o->_invalidate = null();
							}
							HX_STACK_LINE(361)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(361)
							o->next = tmp6;
							HX_STACK_LINE(361)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(361)
					true;
				}
				else{
					HX_STACK_LINE(361)
					false;
				}
			}
			HX_STACK_LINE(361)
			ret;
		}
	}
	HX_STACK_LINE(363)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(363)
	{
		HX_STACK_LINE(363)
		::zpp_nape::constraint::ZPP_LineJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(363)
		::nape::geom::Vec2 tmp2 = tmp1->wrap_n;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(363)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(363)
		if ((tmp3)){
			HX_STACK_LINE(363)
			::zpp_nape::constraint::ZPP_LineJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(363)
			tmp4->setup_n();
		}
		HX_STACK_LINE(363)
		::zpp_nape::constraint::ZPP_LineJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(363)
		tmp = tmp4->wrap_n;
	}
	HX_STACK_LINE(363)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(LineJoint_obj,set_direction,return )

Float LineJoint_obj::get_jointMin( ){
	HX_STACK_FRAME("nape.constraint.LineJoint","get_jointMin",0x0929c634,"nape.constraint.LineJoint.get_jointMin","nape/constraint/LineJoint.hx",372,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(373)
	::zpp_nape::constraint::ZPP_LineJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(373)
	Float tmp1 = tmp->jointMin;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(373)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(LineJoint_obj,get_jointMin,return )

Float LineJoint_obj::set_jointMin( Float jointMin){
	HX_STACK_FRAME("nape.constraint.LineJoint","set_jointMin",0x1e22e9a8,"nape.constraint.LineJoint.set_jointMin","nape/constraint/LineJoint.hx",375,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jointMin,"jointMin")
	HX_STACK_LINE(376)
	{
		HX_STACK_LINE(377)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(377)
		tmp->immutable_midstep(HX_HCSTRING("LineJoint::jointMin","\x3e","\xe1","\x3a","\x51"));
		HX_STACK_LINE(379)
		bool tmp1 = (jointMin != jointMin);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(379)
		if ((tmp1)){
			HX_STACK_LINE(380)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: AngleJoint::jointMin cannot be NaN","\xa8","\x63","\x9e","\x8c"));
		}
		HX_STACK_LINE(383)
		::zpp_nape::constraint::ZPP_LineJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(383)
		Float tmp3 = tmp2->jointMin;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(383)
		Float tmp4 = jointMin;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(383)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(383)
		if ((tmp5)){
			HX_STACK_LINE(384)
			::zpp_nape::constraint::ZPP_LineJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(384)
			tmp6->jointMin = jointMin;
			HX_STACK_LINE(385)
			::zpp_nape::constraint::ZPP_Constraint tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(385)
			tmp7->wake();
		}
	}
	HX_STACK_LINE(388)
	::zpp_nape::constraint::ZPP_LineJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(388)
	Float tmp1 = tmp->jointMin;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(388)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(LineJoint_obj,set_jointMin,return )

Float LineJoint_obj::get_jointMax( ){
	HX_STACK_FRAME("nape.constraint.LineJoint","get_jointMax",0x0929bf46,"nape.constraint.LineJoint.get_jointMax","nape/constraint/LineJoint.hx",397,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(398)
	::zpp_nape::constraint::ZPP_LineJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(398)
	Float tmp1 = tmp->jointMax;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(398)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(LineJoint_obj,get_jointMax,return )

Float LineJoint_obj::set_jointMax( Float jointMax){
	HX_STACK_FRAME("nape.constraint.LineJoint","set_jointMax",0x1e22e2ba,"nape.constraint.LineJoint.set_jointMax","nape/constraint/LineJoint.hx",400,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jointMax,"jointMax")
	HX_STACK_LINE(401)
	{
		HX_STACK_LINE(402)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(402)
		tmp->immutable_midstep(HX_HCSTRING("LineJoint::jointMax","\x50","\xda","\x3a","\x51"));
		HX_STACK_LINE(404)
		bool tmp1 = (jointMax != jointMax);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(404)
		if ((tmp1)){
			HX_STACK_LINE(405)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: AngleJoint::jointMax cannot be NaN","\x3a","\x58","\xf1","\x24"));
		}
		HX_STACK_LINE(408)
		::zpp_nape::constraint::ZPP_LineJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(408)
		Float tmp3 = tmp2->jointMax;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(408)
		Float tmp4 = jointMax;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(408)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(408)
		if ((tmp5)){
			HX_STACK_LINE(409)
			::zpp_nape::constraint::ZPP_LineJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(409)
			tmp6->jointMax = jointMax;
			HX_STACK_LINE(410)
			::zpp_nape::constraint::ZPP_Constraint tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(410)
			tmp7->wake();
		}
	}
	HX_STACK_LINE(413)
	::zpp_nape::constraint::ZPP_LineJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(413)
	Float tmp1 = tmp->jointMax;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(413)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(LineJoint_obj,set_jointMax,return )

::nape::geom::MatMN LineJoint_obj::impulse( ){
	HX_STACK_FRAME("nape.constraint.LineJoint","impulse",0xf2f04fd2,"nape.constraint.LineJoint.impulse","nape/constraint/LineJoint.hx",455,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(456)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new((int)2,(int)1);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(457)
	{
		HX_STACK_LINE(457)
		bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(457)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(457)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(457)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(457)
		if ((tmp2)){
			HX_STACK_LINE(457)
			tmp3 = false;
		}
		else{
			HX_STACK_LINE(457)
			tmp3 = true;
		}
		HX_STACK_LINE(457)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(457)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(457)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(457)
		if ((tmp5)){
			HX_STACK_LINE(457)
			int tmp7 = ret->zpp_inner->m;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(457)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(457)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(457)
			tmp6 = ((int)0 >= tmp9);
		}
		else{
			HX_STACK_LINE(457)
			tmp6 = true;
		}
		HX_STACK_LINE(457)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(457)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(457)
		if ((tmp7)){
			HX_STACK_LINE(457)
			int tmp9 = ret->zpp_inner->n;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(457)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(457)
			tmp8 = ((int)0 >= tmp10);
		}
		else{
			HX_STACK_LINE(457)
			tmp8 = true;
		}
		HX_STACK_LINE(457)
		if ((tmp8)){
			HX_STACK_LINE(457)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: MatMN indices out of range","\xcc","\x72","\x58","\xe6"));
		}
		HX_STACK_LINE(457)
		Array< Float > tmp9 = ret->zpp_inner->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(457)
		int tmp10 = ret->zpp_inner->n;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(457)
		int tmp11 = ((int)0 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(457)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(457)
		::zpp_nape::constraint::ZPP_LineJoint tmp13 = this->zpp_inner_zn;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(457)
		Float tmp14 = tmp13->jAccx;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(457)
		tmp9[tmp12] = tmp14;
	}
	HX_STACK_LINE(458)
	{
		HX_STACK_LINE(458)
		bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(458)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(458)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(458)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(458)
		if ((tmp2)){
			HX_STACK_LINE(458)
			tmp3 = false;
		}
		else{
			HX_STACK_LINE(458)
			tmp3 = true;
		}
		HX_STACK_LINE(458)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(458)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(458)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(458)
		if ((tmp5)){
			HX_STACK_LINE(458)
			int tmp7 = ret->zpp_inner->m;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(458)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(458)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(458)
			tmp6 = ((int)1 >= tmp9);
		}
		else{
			HX_STACK_LINE(458)
			tmp6 = true;
		}
		HX_STACK_LINE(458)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(458)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(458)
		if ((tmp7)){
			HX_STACK_LINE(458)
			int tmp9 = ret->zpp_inner->n;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(458)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(458)
			tmp8 = ((int)0 >= tmp10);
		}
		else{
			HX_STACK_LINE(458)
			tmp8 = true;
		}
		HX_STACK_LINE(458)
		if ((tmp8)){
			HX_STACK_LINE(458)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: MatMN indices out of range","\xcc","\x72","\x58","\xe6"));
		}
		HX_STACK_LINE(458)
		Array< Float > tmp9 = ret->zpp_inner->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(458)
		int tmp10 = ret->zpp_inner->n;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(458)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(458)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(458)
		::zpp_nape::constraint::ZPP_LineJoint tmp13 = this->zpp_inner_zn;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(458)
		Float tmp14 = tmp13->jAccy;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(458)
		tmp9[tmp12] = tmp14;
	}
	HX_STACK_LINE(459)
	::nape::geom::MatMN tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(459)
	return tmp;
}


::nape::geom::Vec3 LineJoint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.constraint.LineJoint","bodyImpulse",0x465fc7d0,"nape.constraint.LineJoint.bodyImpulse","nape/constraint/LineJoint.hx",464,0xe7850eb3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(466)
	bool tmp = (body == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(466)
	if ((tmp)){
		HX_STACK_LINE(467)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot evaluate impulse on null body","\x9d","\xb5","\xdc","\x16"));
	}
	HX_STACK_LINE(469)
	::nape::phys::Body tmp1 = body;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(469)
	::zpp_nape::constraint::ZPP_LineJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(469)
	::zpp_nape::phys::ZPP_Body tmp3 = tmp2->b1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(469)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(469)
	::nape::phys::Body tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(469)
	if ((tmp4)){
		HX_STACK_LINE(469)
		tmp5 = null();
	}
	else{
		HX_STACK_LINE(469)
		::zpp_nape::constraint::ZPP_LineJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(469)
		tmp5 = tmp6->b1->outer;
	}
	HX_STACK_LINE(469)
	bool tmp6 = (tmp1 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(469)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(469)
	if ((tmp6)){
		HX_STACK_LINE(469)
		::nape::phys::Body tmp8 = body;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(469)
		::zpp_nape::constraint::ZPP_LineJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(469)
		::zpp_nape::constraint::ZPP_LineJoint tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(469)
		::zpp_nape::phys::ZPP_Body tmp11 = tmp10->b2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(469)
		bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(469)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(469)
		::nape::phys::Body tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(469)
		bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(469)
		if ((tmp15)){
			HX_STACK_LINE(469)
			tmp14 = null();
		}
		else{
			HX_STACK_LINE(469)
			::zpp_nape::constraint::ZPP_LineJoint tmp16 = this->zpp_inner_zn;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(469)
			::zpp_nape::constraint::ZPP_LineJoint tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(469)
			::nape::phys::Body tmp18 = tmp17->b2->outer;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(469)
			tmp14 = tmp18;
		}
		HX_STACK_LINE(469)
		tmp7 = (tmp8 != tmp14);
	}
	else{
		HX_STACK_LINE(469)
		tmp7 = false;
	}
	HX_STACK_LINE(469)
	if ((tmp7)){
		HX_STACK_LINE(470)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Body is not linked to this constraint","\x2e","\xe5","\x48","\xbf"));
	}
	HX_STACK_LINE(473)
	::zpp_nape::constraint::ZPP_Constraint tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(473)
	bool tmp9 = tmp8->active;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(473)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(473)
	if ((tmp10)){
		HX_STACK_LINE(474)
		::nape::geom::Vec3 tmp11 = ::nape::geom::Vec3_obj::get(null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(474)
		return tmp11;
	}
	else{
		HX_STACK_LINE(477)
		::zpp_nape::constraint::ZPP_LineJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(477)
		::zpp_nape::phys::ZPP_Body tmp12 = body->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(477)
		::nape::geom::Vec3 tmp13 = tmp11->bodyImpulse(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(477)
		return tmp13;
	}
	HX_STACK_LINE(473)
	return null();
}


Void LineJoint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_FRAME("nape.constraint.LineJoint","visitBodies",0xcb1c4548,"nape.constraint.LineJoint.visitBodies","nape/constraint/LineJoint.hx",483,0xe7850eb3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(484)
		::zpp_nape::constraint::ZPP_LineJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(484)
		::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(484)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(484)
		::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(484)
		if ((tmp2)){
			HX_STACK_LINE(484)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(484)
			::zpp_nape::constraint::ZPP_LineJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(484)
			tmp3 = tmp4->b1->outer;
		}
		HX_STACK_LINE(484)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(484)
		if ((tmp4)){
			HX_STACK_LINE(485)
			::zpp_nape::constraint::ZPP_LineJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(485)
			::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(485)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(485)
			::nape::phys::Body tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(485)
			if ((tmp7)){
				HX_STACK_LINE(485)
				tmp8 = null();
			}
			else{
				HX_STACK_LINE(485)
				::zpp_nape::constraint::ZPP_LineJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(485)
				tmp8 = tmp9->b1->outer;
			}
			HX_STACK_LINE(485)
			lambda(tmp8).Cast< Void >();
		}
		HX_STACK_LINE(487)
		::zpp_nape::constraint::ZPP_LineJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(487)
		::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(487)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(487)
		::nape::phys::Body tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(487)
		if ((tmp7)){
			HX_STACK_LINE(487)
			tmp8 = null();
		}
		else{
			HX_STACK_LINE(487)
			::zpp_nape::constraint::ZPP_LineJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(487)
			tmp8 = tmp9->b2->outer;
		}
		HX_STACK_LINE(487)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(487)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(487)
		if ((tmp9)){
			HX_STACK_LINE(487)
			::zpp_nape::constraint::ZPP_LineJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(487)
			::zpp_nape::constraint::ZPP_LineJoint tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(487)
			::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b2;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(487)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(487)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(487)
			::nape::phys::Body tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(487)
			bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(487)
			if ((tmp17)){
				HX_STACK_LINE(487)
				tmp16 = null();
			}
			else{
				HX_STACK_LINE(487)
				::zpp_nape::constraint::ZPP_LineJoint tmp18 = this->zpp_inner_zn;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(487)
				::zpp_nape::constraint::ZPP_LineJoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(487)
				::nape::phys::Body tmp20 = tmp19->b2->outer;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(487)
				tmp16 = tmp20;
			}
			HX_STACK_LINE(487)
			::zpp_nape::constraint::ZPP_LineJoint tmp18 = this->zpp_inner_zn;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(487)
			::zpp_nape::constraint::ZPP_LineJoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(487)
			::zpp_nape::phys::ZPP_Body tmp20 = tmp19->b1;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(487)
			bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(487)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(487)
			::nape::phys::Body tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(487)
			bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(487)
			if ((tmp24)){
				HX_STACK_LINE(487)
				tmp23 = null();
			}
			else{
				HX_STACK_LINE(487)
				::zpp_nape::constraint::ZPP_LineJoint tmp25 = this->zpp_inner_zn;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(487)
				::zpp_nape::constraint::ZPP_LineJoint tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(487)
				::nape::phys::Body tmp27 = tmp26->b1->outer;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(487)
				tmp23 = tmp27;
			}
			HX_STACK_LINE(487)
			tmp10 = (tmp16 != tmp23);
		}
		else{
			HX_STACK_LINE(487)
			tmp10 = false;
		}
		HX_STACK_LINE(487)
		if ((tmp10)){
			HX_STACK_LINE(488)
			::zpp_nape::constraint::ZPP_LineJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(488)
			::zpp_nape::phys::ZPP_Body tmp12 = tmp11->b2;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(488)
			bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(488)
			::nape::phys::Body tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(488)
			if ((tmp13)){
				HX_STACK_LINE(488)
				tmp14 = null();
			}
			else{
				HX_STACK_LINE(488)
				::zpp_nape::constraint::ZPP_LineJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(488)
				tmp14 = tmp15->b2->outer;
			}
			HX_STACK_LINE(488)
			lambda(tmp14).Cast< Void >();
		}
	}
return null();
}



LineJoint_obj::LineJoint_obj()
{
}

void LineJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LineJoint);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LineJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LineJoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	case 8:
		if (HX_FIELD_EQ(inName,"jointMin") ) { if (inCallProp == hx::paccAlways) return get_jointMin(); }
		if (HX_FIELD_EQ(inName,"jointMax") ) { if (inCallProp == hx::paccAlways) return get_jointMax(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_body1") ) { return get_body1_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body1") ) { return set_body1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body2") ) { return get_body2_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body2") ) { return set_body2_dyn(); }
		if (HX_FIELD_EQ(inName,"direction") ) { if (inCallProp == hx::paccAlways) return get_direction(); }
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
		if (HX_FIELD_EQ(inName,"get_jointMin") ) { return get_jointMin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_jointMin") ) { return set_jointMin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_jointMax") ) { return get_jointMax_dyn(); }
		if (HX_FIELD_EQ(inName,"set_jointMax") ) { return set_jointMax_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_direction") ) { return get_direction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_direction") ) { return set_direction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LineJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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
	case 8:
		if (HX_FIELD_EQ(inName,"jointMin") ) { if (inCallProp == hx::paccAlways) return set_jointMin(inValue); }
		if (HX_FIELD_EQ(inName,"jointMax") ) { if (inCallProp == hx::paccAlways) return set_jointMax(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { if (inCallProp == hx::paccAlways) return set_direction(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::constraint::ZPP_LineJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LineJoint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void LineJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"));
	outFields->push(HX_HCSTRING("body1","\x4f","\xd3","\xef","\xb6"));
	outFields->push(HX_HCSTRING("body2","\x50","\xd3","\xef","\xb6"));
	outFields->push(HX_HCSTRING("anchor1","\x1c","\xec","\xa1","\x02"));
	outFields->push(HX_HCSTRING("anchor2","\x1d","\xec","\xa1","\x02"));
	outFields->push(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"));
	outFields->push(HX_HCSTRING("jointMin","\x68","\xfa","\x25","\x55"));
	outFields->push(HX_HCSTRING("jointMax","\x7a","\xf3","\x25","\x55"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::constraint::ZPP_LineJoint*/ ,(int)offsetof(LineJoint_obj,zpp_inner_zn),HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0")},
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
	HX_HCSTRING("get_direction","\x16","\x36","\xa4","\xd1"),
	HX_HCSTRING("set_direction","\x22","\x18","\xaa","\x16"),
	HX_HCSTRING("get_jointMin","\x71","\xae","\x3f","\x0a"),
	HX_HCSTRING("set_jointMin","\xe5","\xd1","\x38","\x1f"),
	HX_HCSTRING("get_jointMax","\x83","\xa7","\x3f","\x0a"),
	HX_HCSTRING("set_jointMax","\xf7","\xca","\x38","\x1f"),
	HX_HCSTRING("impulse","\xb5","\x50","\xbd","\x6d"),
	HX_HCSTRING("bodyImpulse","\x33","\x76","\xa2","\x5f"),
	HX_HCSTRING("visitBodies","\xab","\xf3","\x5e","\xe4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineJoint_obj::__mClass,"__mClass");
};

#endif

hx::Class LineJoint_obj::__mClass;

void LineJoint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.constraint.LineJoint","\x8b","\x7a","\x04","\x05");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &LineJoint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LineJoint_obj >;
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
