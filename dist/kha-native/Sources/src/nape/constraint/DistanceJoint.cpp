#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_DistanceJoint
#include <nape/constraint/DistanceJoint.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_DistanceJoint
#include <zpp_nape/constraint/ZPP_DistanceJoint.h>
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

Void DistanceJoint_obj::__construct(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,Float jointMin,Float jointMax)
{
HX_STACK_FRAME("nape.constraint.DistanceJoint","new",0xd657a01c,"nape.constraint.DistanceJoint.new","nape/constraint/DistanceJoint.hx",184,0x7df58474)
HX_STACK_THIS(this)
HX_STACK_ARG(body1,"body1")
HX_STACK_ARG(body2,"body2")
HX_STACK_ARG(anchor1,"anchor1")
HX_STACK_ARG(anchor2,"anchor2")
HX_STACK_ARG(jointMin,"jointMin")
HX_STACK_ARG(jointMax,"jointMax")
{
	HX_STACK_LINE(188)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(404)
	::zpp_nape::constraint::ZPP_DistanceJoint tmp = ::zpp_nape::constraint::ZPP_DistanceJoint_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(404)
	this->zpp_inner_zn = tmp;
	HX_STACK_LINE(405)
	::zpp_nape::constraint::ZPP_DistanceJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(405)
	this->zpp_inner = tmp1;
	HX_STACK_LINE(406)
	::zpp_nape::constraint::ZPP_Constraint tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(406)
	tmp2->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(407)
	::zpp_nape::constraint::ZPP_DistanceJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(407)
	tmp3->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(409)
	::nape::constraint::Constraint_obj::zpp_internalAlloc = true;
	HX_STACK_LINE(410)
	super::__construct();
	HX_STACK_LINE(411)
	::nape::constraint::Constraint_obj::zpp_internalAlloc = false;
	HX_STACK_LINE(416)
	{
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(416)
			::String tmp5 = HX_HCSTRING("Constraint::body1","\xb2","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(416)
			tmp4->immutable_midstep(tmp5);
			HX_STACK_LINE(416)
			bool tmp6 = (body1 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(416)
			::zpp_nape::phys::ZPP_Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(416)
			if ((tmp6)){
				HX_STACK_LINE(416)
				tmp7 = null();
			}
			else{
				HX_STACK_LINE(416)
				tmp7 = body1->zpp_inner;
			}
			HX_STACK_LINE(416)
			::zpp_nape::phys::ZPP_Body inbody1 = tmp7;		HX_STACK_VAR(inbody1,"inbody1");
			HX_STACK_LINE(416)
			::zpp_nape::phys::ZPP_Body tmp8 = inbody1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(416)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(416)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9->b1;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(416)
			bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(416)
			if ((tmp11)){
				HX_STACK_LINE(416)
				::zpp_nape::constraint::ZPP_DistanceJoint tmp12 = this->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(416)
				::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(416)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(416)
				if ((tmp14)){
					HX_STACK_LINE(416)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(416)
					::zpp_nape::space::ZPP_Space tmp16 = tmp15->space;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(416)
					bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(416)
					::nape::space::Space tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(416)
					if ((tmp17)){
						HX_STACK_LINE(416)
						tmp18 = null();
					}
					else{
						HX_STACK_LINE(416)
						::zpp_nape::constraint::ZPP_Constraint tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(416)
						tmp18 = tmp19->space->outer;
					}
					HX_STACK_LINE(416)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(416)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(416)
					if ((tmp19)){
						HX_STACK_LINE(416)
						::zpp_nape::constraint::ZPP_DistanceJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(416)
						::zpp_nape::constraint::ZPP_DistanceJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(416)
						::zpp_nape::phys::ZPP_Body tmp23 = tmp22->b2;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(416)
						::zpp_nape::constraint::ZPP_DistanceJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(416)
						::zpp_nape::constraint::ZPP_DistanceJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(416)
						::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b1;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(416)
						tmp20 = (tmp23 != tmp26);
					}
					else{
						HX_STACK_LINE(416)
						tmp20 = false;
					}
					HX_STACK_LINE(416)
					if ((tmp20)){
						HX_STACK_LINE(416)
						::zpp_nape::constraint::ZPP_DistanceJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(416)
						::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b1;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(416)
						bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(416)
						if ((tmp23)){
							HX_STACK_LINE(416)
							::zpp_nape::constraint::ZPP_DistanceJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(416)
							::zpp_nape::util::ZNPList_ZPP_Constraint tmp25 = tmp24->b1->constraints;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(416)
							::zpp_nape::constraint::ZPP_Constraint tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(416)
							tmp25->remove(tmp26);
						}
					}
					HX_STACK_LINE(416)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(416)
					bool tmp22 = tmp21->active;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(416)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(416)
					if ((tmp22)){
						HX_STACK_LINE(416)
						::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(416)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(416)
						::zpp_nape::space::ZPP_Space tmp26 = tmp25->space;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(416)
						bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(416)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(416)
						::nape::space::Space tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(416)
						bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(416)
						if ((tmp30)){
							HX_STACK_LINE(416)
							tmp29 = null();
						}
						else{
							HX_STACK_LINE(416)
							::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(416)
							::zpp_nape::constraint::ZPP_Constraint tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(416)
							::nape::space::Space tmp33 = tmp32->space->outer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(416)
							tmp29 = tmp33;
						}
						HX_STACK_LINE(416)
						tmp23 = (tmp29 != null());
					}
					else{
						HX_STACK_LINE(416)
						tmp23 = false;
					}
					HX_STACK_LINE(416)
					if ((tmp23)){
						HX_STACK_LINE(416)
						::zpp_nape::constraint::ZPP_DistanceJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(416)
						tmp24->b1->wake();
					}
				}
				HX_STACK_LINE(416)
				::zpp_nape::constraint::ZPP_DistanceJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(416)
				tmp15->b1 = inbody1;
				HX_STACK_LINE(416)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(416)
				::zpp_nape::space::ZPP_Space tmp17 = tmp16->space;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(416)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(416)
				::nape::space::Space tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(416)
				if ((tmp18)){
					HX_STACK_LINE(416)
					tmp19 = null();
				}
				else{
					HX_STACK_LINE(416)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(416)
					tmp19 = tmp20->space->outer;
				}
				HX_STACK_LINE(416)
				bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(416)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(416)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(416)
				if ((tmp21)){
					HX_STACK_LINE(416)
					tmp22 = (inbody1 != null());
				}
				else{
					HX_STACK_LINE(416)
					tmp22 = false;
				}
				HX_STACK_LINE(416)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(416)
				if ((tmp22)){
					HX_STACK_LINE(416)
					::zpp_nape::constraint::ZPP_DistanceJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(416)
					::zpp_nape::constraint::ZPP_DistanceJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(416)
					::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b2;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(416)
					::zpp_nape::phys::ZPP_Body tmp27 = inbody1;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(416)
					tmp23 = (tmp26 != tmp27);
				}
				else{
					HX_STACK_LINE(416)
					tmp23 = false;
				}
				HX_STACK_LINE(416)
				if ((tmp23)){
					HX_STACK_LINE(416)
					bool tmp24 = (inbody1 != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(416)
					if ((tmp24)){
						HX_STACK_LINE(416)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(416)
						inbody1->constraints->add(tmp25);
					}
				}
				HX_STACK_LINE(416)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(416)
				bool tmp25 = tmp24->active;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(416)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(416)
				if ((tmp25)){
					HX_STACK_LINE(416)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(416)
					::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(416)
					::zpp_nape::space::ZPP_Space tmp29 = tmp28->space;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(416)
					bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(416)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(416)
					::nape::space::Space tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(416)
					bool tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(416)
					if ((tmp33)){
						HX_STACK_LINE(416)
						tmp32 = null();
					}
					else{
						HX_STACK_LINE(416)
						::zpp_nape::constraint::ZPP_Constraint tmp34 = this->zpp_inner;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(416)
						::zpp_nape::constraint::ZPP_Constraint tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(416)
						::nape::space::Space tmp36 = tmp35->space->outer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(416)
						tmp32 = tmp36;
					}
					HX_STACK_LINE(416)
					tmp26 = (tmp32 != null());
				}
				else{
					HX_STACK_LINE(416)
					tmp26 = false;
				}
				HX_STACK_LINE(416)
				if ((tmp26)){
					HX_STACK_LINE(416)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(416)
					tmp27->wake();
					HX_STACK_LINE(416)
					bool tmp28 = (inbody1 != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(416)
					if ((tmp28)){
						HX_STACK_LINE(416)
						inbody1->wake();
					}
				}
			}
		}
		HX_STACK_LINE(416)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(416)
		::zpp_nape::phys::ZPP_Body tmp5 = tmp4->b1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(416)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(416)
		if ((tmp6)){
			HX_STACK_LINE(416)
			Dynamic();
		}
		else{
			HX_STACK_LINE(416)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(416)
			tmp7->b1->outer;
		}
	}
	HX_STACK_LINE(417)
	{
		HX_STACK_LINE(417)
		{
			HX_STACK_LINE(417)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(417)
			::String tmp5 = HX_HCSTRING("Constraint::body2","\xb3","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(417)
			tmp4->immutable_midstep(tmp5);
			HX_STACK_LINE(417)
			bool tmp6 = (body2 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(417)
			::zpp_nape::phys::ZPP_Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(417)
			if ((tmp6)){
				HX_STACK_LINE(417)
				tmp7 = null();
			}
			else{
				HX_STACK_LINE(417)
				tmp7 = body2->zpp_inner;
			}
			HX_STACK_LINE(417)
			::zpp_nape::phys::ZPP_Body inbody2 = tmp7;		HX_STACK_VAR(inbody2,"inbody2");
			HX_STACK_LINE(417)
			::zpp_nape::phys::ZPP_Body tmp8 = inbody2;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(417)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(417)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9->b2;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(417)
			bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(417)
			if ((tmp11)){
				HX_STACK_LINE(417)
				::zpp_nape::constraint::ZPP_DistanceJoint tmp12 = this->zpp_inner_zn;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(417)
				::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b2;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(417)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(417)
				if ((tmp14)){
					HX_STACK_LINE(417)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(417)
					::zpp_nape::space::ZPP_Space tmp16 = tmp15->space;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(417)
					bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(417)
					::nape::space::Space tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(417)
					if ((tmp17)){
						HX_STACK_LINE(417)
						tmp18 = null();
					}
					else{
						HX_STACK_LINE(417)
						::zpp_nape::constraint::ZPP_Constraint tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(417)
						tmp18 = tmp19->space->outer;
					}
					HX_STACK_LINE(417)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(417)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(417)
					if ((tmp19)){
						HX_STACK_LINE(417)
						::zpp_nape::constraint::ZPP_DistanceJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(417)
						::zpp_nape::constraint::ZPP_DistanceJoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(417)
						::zpp_nape::phys::ZPP_Body tmp23 = tmp22->b1;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(417)
						::zpp_nape::constraint::ZPP_DistanceJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(417)
						::zpp_nape::constraint::ZPP_DistanceJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(417)
						::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b2;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(417)
						tmp20 = (tmp23 != tmp26);
					}
					else{
						HX_STACK_LINE(417)
						tmp20 = false;
					}
					HX_STACK_LINE(417)
					if ((tmp20)){
						HX_STACK_LINE(417)
						::zpp_nape::constraint::ZPP_DistanceJoint tmp21 = this->zpp_inner_zn;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(417)
						::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b2;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(417)
						bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(417)
						if ((tmp23)){
							HX_STACK_LINE(417)
							::zpp_nape::constraint::ZPP_DistanceJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(417)
							::zpp_nape::util::ZNPList_ZPP_Constraint tmp25 = tmp24->b2->constraints;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(417)
							::zpp_nape::constraint::ZPP_Constraint tmp26 = this->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(417)
							tmp25->remove(tmp26);
						}
					}
					HX_STACK_LINE(417)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(417)
					bool tmp22 = tmp21->active;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(417)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(417)
					if ((tmp22)){
						HX_STACK_LINE(417)
						::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(417)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(417)
						::zpp_nape::space::ZPP_Space tmp26 = tmp25->space;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(417)
						bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(417)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(417)
						::nape::space::Space tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(417)
						bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(417)
						if ((tmp30)){
							HX_STACK_LINE(417)
							tmp29 = null();
						}
						else{
							HX_STACK_LINE(417)
							::zpp_nape::constraint::ZPP_Constraint tmp31 = this->zpp_inner;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(417)
							::zpp_nape::constraint::ZPP_Constraint tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(417)
							::nape::space::Space tmp33 = tmp32->space->outer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(417)
							tmp29 = tmp33;
						}
						HX_STACK_LINE(417)
						tmp23 = (tmp29 != null());
					}
					else{
						HX_STACK_LINE(417)
						tmp23 = false;
					}
					HX_STACK_LINE(417)
					if ((tmp23)){
						HX_STACK_LINE(417)
						::zpp_nape::constraint::ZPP_DistanceJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(417)
						tmp24->b2->wake();
					}
				}
				HX_STACK_LINE(417)
				::zpp_nape::constraint::ZPP_DistanceJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(417)
				tmp15->b2 = inbody2;
				HX_STACK_LINE(417)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(417)
				::zpp_nape::space::ZPP_Space tmp17 = tmp16->space;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(417)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(417)
				::nape::space::Space tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(417)
				if ((tmp18)){
					HX_STACK_LINE(417)
					tmp19 = null();
				}
				else{
					HX_STACK_LINE(417)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(417)
					tmp19 = tmp20->space->outer;
				}
				HX_STACK_LINE(417)
				bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(417)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(417)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(417)
				if ((tmp21)){
					HX_STACK_LINE(417)
					tmp22 = (inbody2 != null());
				}
				else{
					HX_STACK_LINE(417)
					tmp22 = false;
				}
				HX_STACK_LINE(417)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(417)
				if ((tmp22)){
					HX_STACK_LINE(417)
					::zpp_nape::constraint::ZPP_DistanceJoint tmp24 = this->zpp_inner_zn;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(417)
					::zpp_nape::constraint::ZPP_DistanceJoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(417)
					::zpp_nape::phys::ZPP_Body tmp26 = tmp25->b1;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(417)
					::zpp_nape::phys::ZPP_Body tmp27 = inbody2;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(417)
					tmp23 = (tmp26 != tmp27);
				}
				else{
					HX_STACK_LINE(417)
					tmp23 = false;
				}
				HX_STACK_LINE(417)
				if ((tmp23)){
					HX_STACK_LINE(417)
					bool tmp24 = (inbody2 != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(417)
					if ((tmp24)){
						HX_STACK_LINE(417)
						::zpp_nape::constraint::ZPP_Constraint tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(417)
						inbody2->constraints->add(tmp25);
					}
				}
				HX_STACK_LINE(417)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(417)
				bool tmp25 = tmp24->active;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(417)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(417)
				if ((tmp25)){
					HX_STACK_LINE(417)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(417)
					::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(417)
					::zpp_nape::space::ZPP_Space tmp29 = tmp28->space;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(417)
					bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(417)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(417)
					::nape::space::Space tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(417)
					bool tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(417)
					if ((tmp33)){
						HX_STACK_LINE(417)
						tmp32 = null();
					}
					else{
						HX_STACK_LINE(417)
						::zpp_nape::constraint::ZPP_Constraint tmp34 = this->zpp_inner;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(417)
						::zpp_nape::constraint::ZPP_Constraint tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(417)
						::nape::space::Space tmp36 = tmp35->space->outer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(417)
						tmp32 = tmp36;
					}
					HX_STACK_LINE(417)
					tmp26 = (tmp32 != null());
				}
				else{
					HX_STACK_LINE(417)
					tmp26 = false;
				}
				HX_STACK_LINE(417)
				if ((tmp26)){
					HX_STACK_LINE(417)
					::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(417)
					tmp27->wake();
					HX_STACK_LINE(417)
					bool tmp28 = (inbody2 != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(417)
					if ((tmp28)){
						HX_STACK_LINE(417)
						inbody2->wake();
					}
				}
			}
		}
		HX_STACK_LINE(417)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(417)
		::zpp_nape::phys::ZPP_Body tmp5 = tmp4->b2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(417)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(417)
		if ((tmp6)){
			HX_STACK_LINE(417)
			Dynamic();
		}
		else{
			HX_STACK_LINE(417)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(417)
			tmp7->b2->outer;
		}
	}
	HX_STACK_LINE(418)
	{
		HX_STACK_LINE(418)
		{
			HX_STACK_LINE(418)
			{
				HX_STACK_LINE(418)
				bool tmp4 = (anchor1 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(418)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(418)
				if ((tmp4)){
					HX_STACK_LINE(418)
					tmp5 = anchor1->zpp_disp;
				}
				else{
					HX_STACK_LINE(418)
					tmp5 = false;
				}
				HX_STACK_LINE(418)
				if ((tmp5)){
					HX_STACK_LINE(418)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(418)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(418)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(418)
			bool tmp4 = (anchor1 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(418)
			if ((tmp4)){
				HX_STACK_LINE(418)
				::String tmp5 = HX_HCSTRING("Error: Constraint::anchor1","\xb1","\x15","\x18","\x54");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(418)
				::String tmp6 = (tmp5 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(418)
				HX_STACK_DO_THROW(tmp6);
			}
			HX_STACK_LINE(418)
			{
				HX_STACK_LINE(418)
				::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(418)
				{
					HX_STACK_LINE(418)
					::zpp_nape::constraint::ZPP_DistanceJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(418)
					::nape::geom::Vec2 tmp7 = tmp6->wrap_a1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(418)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(418)
					if ((tmp8)){
						HX_STACK_LINE(418)
						::zpp_nape::constraint::ZPP_DistanceJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(418)
						tmp9->setup_a1();
					}
					HX_STACK_LINE(418)
					::zpp_nape::constraint::ZPP_DistanceJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(418)
					tmp5 = tmp9->wrap_a1;
				}
				HX_STACK_LINE(418)
				::nape::geom::Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(418)
				{
					HX_STACK_LINE(418)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(418)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(418)
					if ((tmp6)){
						HX_STACK_LINE(418)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(418)
						tmp7 = false;
					}
					HX_STACK_LINE(418)
					if ((tmp7)){
						HX_STACK_LINE(418)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(418)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(418)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(418)
				{
					HX_STACK_LINE(418)
					bool tmp6 = (anchor1 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(418)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(418)
					if ((tmp6)){
						HX_STACK_LINE(418)
						tmp7 = anchor1->zpp_disp;
					}
					else{
						HX_STACK_LINE(418)
						tmp7 = false;
					}
					HX_STACK_LINE(418)
					if ((tmp7)){
						HX_STACK_LINE(418)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(418)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(418)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(418)
				{
					HX_STACK_LINE(418)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(418)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(418)
					if ((tmp6)){
						HX_STACK_LINE(418)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(418)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(418)
					if ((tmp7)){
						HX_STACK_LINE(418)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(418)
				bool tmp6 = (anchor1 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(418)
				if ((tmp6)){
					HX_STACK_LINE(418)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
				}
				HX_STACK_LINE(418)
				::nape::geom::Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(418)
				{
					HX_STACK_LINE(418)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(418)
					{
						HX_STACK_LINE(418)
						bool tmp9 = (anchor1 != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(418)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(418)
						if ((tmp9)){
							HX_STACK_LINE(418)
							tmp10 = anchor1->zpp_disp;
						}
						else{
							HX_STACK_LINE(418)
							tmp10 = false;
						}
						HX_STACK_LINE(418)
						if ((tmp10)){
							HX_STACK_LINE(418)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(418)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(418)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(418)
						{
							HX_STACK_LINE(418)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(418)
							bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(418)
							if ((tmp11)){
								HX_STACK_LINE(418)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(418)
						tmp8 = anchor1->zpp_inner->x;
					}
					HX_STACK_LINE(418)
					Float x = tmp8;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(418)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(418)
					{
						HX_STACK_LINE(418)
						bool tmp10 = (anchor1 != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(418)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(418)
						if ((tmp10)){
							HX_STACK_LINE(418)
							tmp11 = anchor1->zpp_disp;
						}
						else{
							HX_STACK_LINE(418)
							tmp11 = false;
						}
						HX_STACK_LINE(418)
						if ((tmp11)){
							HX_STACK_LINE(418)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(418)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(418)
							HX_STACK_DO_THROW(tmp13);
						}
						HX_STACK_LINE(418)
						{
							HX_STACK_LINE(418)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(418)
							bool tmp12 = (_this1->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(418)
							if ((tmp12)){
								HX_STACK_LINE(418)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(418)
						tmp9 = anchor1->zpp_inner->y;
					}
					HX_STACK_LINE(418)
					Float y = tmp9;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(418)
					{
						HX_STACK_LINE(418)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(418)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(418)
						if ((tmp10)){
							HX_STACK_LINE(418)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(418)
							tmp11 = false;
						}
						HX_STACK_LINE(418)
						if ((tmp11)){
							HX_STACK_LINE(418)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(418)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(418)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(418)
					{
						HX_STACK_LINE(418)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(418)
						bool tmp10 = _this1->_immutable;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(418)
						if ((tmp10)){
							HX_STACK_LINE(418)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(418)
						bool tmp11 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(418)
						if ((tmp11)){
							HX_STACK_LINE(418)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(418)
					bool tmp10 = (x != x);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(418)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(418)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(418)
					if ((tmp11)){
						HX_STACK_LINE(418)
						tmp12 = (y != y);
					}
					else{
						HX_STACK_LINE(418)
						tmp12 = true;
					}
					HX_STACK_LINE(418)
					if ((tmp12)){
						HX_STACK_LINE(418)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(418)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(418)
					{
						HX_STACK_LINE(418)
						{
							HX_STACK_LINE(418)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(418)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(418)
							if ((tmp14)){
								HX_STACK_LINE(418)
								tmp15 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(418)
								tmp15 = false;
							}
							HX_STACK_LINE(418)
							if ((tmp15)){
								HX_STACK_LINE(418)
								::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(418)
								::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(418)
								HX_STACK_DO_THROW(tmp17);
							}
						}
						HX_STACK_LINE(418)
						{
							HX_STACK_LINE(418)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(418)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(418)
							if ((tmp14)){
								HX_STACK_LINE(418)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(418)
						tmp13 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(418)
					Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(418)
					bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(418)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(418)
					if ((tmp15)){
						HX_STACK_LINE(418)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(418)
						{
							HX_STACK_LINE(418)
							{
								HX_STACK_LINE(418)
								bool tmp18 = (_this != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(418)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(418)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(418)
								bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(418)
								if ((tmp21)){
									HX_STACK_LINE(418)
									tmp20 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(418)
									tmp20 = false;
								}
								HX_STACK_LINE(418)
								bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(418)
								if ((tmp22)){
									HX_STACK_LINE(418)
									::String tmp23 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(418)
									::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(418)
									::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(418)
									::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(418)
									::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(418)
									HX_STACK_DO_THROW(tmp27);
								}
							}
							HX_STACK_LINE(418)
							{
								HX_STACK_LINE(418)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(418)
								bool tmp18 = (_this1->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(418)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(418)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(418)
								if ((tmp20)){
									HX_STACK_LINE(418)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(418)
							Float tmp18 = _this->zpp_inner->y;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(418)
							tmp17 = tmp18;
						}
						HX_STACK_LINE(418)
						Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(418)
						tmp16 = (tmp17 == tmp18);
					}
					else{
						HX_STACK_LINE(418)
						tmp16 = false;
					}
					HX_STACK_LINE(418)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(418)
					if ((tmp17)){
						HX_STACK_LINE(418)
						{
							HX_STACK_LINE(418)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(418)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(418)
							{
							}
						}
						HX_STACK_LINE(418)
						{
							HX_STACK_LINE(418)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(418)
							bool tmp18 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(418)
							if ((tmp18)){
								HX_STACK_LINE(418)
								::zpp_nape::geom::ZPP_Vec2 tmp19 = _this1;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(418)
								_this1->_invalidate(tmp19);
							}
						}
					}
					HX_STACK_LINE(418)
					tmp7 = _this;
				}
				HX_STACK_LINE(418)
				::nape::geom::Vec2 ret = tmp7;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(418)
				{
					HX_STACK_LINE(418)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(418)
					tmp8 = anchor1->zpp_inner->weak;
					HX_STACK_LINE(418)
					if ((tmp8)){
						HX_STACK_LINE(418)
						{
							HX_STACK_LINE(418)
							{
								HX_STACK_LINE(418)
								bool tmp9 = (anchor1 != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(418)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(418)
								if ((tmp9)){
									HX_STACK_LINE(418)
									tmp10 = anchor1->zpp_disp;
								}
								else{
									HX_STACK_LINE(418)
									tmp10 = false;
								}
								HX_STACK_LINE(418)
								if ((tmp10)){
									HX_STACK_LINE(418)
									::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(418)
									::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(418)
									HX_STACK_DO_THROW(tmp12);
								}
							}
							HX_STACK_LINE(418)
							{
								HX_STACK_LINE(418)
								::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(418)
								bool tmp9 = _this1->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(418)
								if ((tmp9)){
									HX_STACK_LINE(418)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
								}
								HX_STACK_LINE(418)
								bool tmp10 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(418)
								if ((tmp10)){
									HX_STACK_LINE(418)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(418)
							bool tmp9 = anchor1->zpp_inner->_inuse;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(418)
							if ((tmp9)){
								HX_STACK_LINE(418)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
							}
							HX_STACK_LINE(418)
							::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(418)
							anchor1->zpp_inner->outer = null();
							HX_STACK_LINE(418)
							anchor1->zpp_inner = null();
							HX_STACK_LINE(418)
							{
								HX_STACK_LINE(418)
								::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(418)
								o->zpp_pool = null();
								HX_STACK_LINE(418)
								::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(418)
								bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(418)
								if ((tmp11)){
									HX_STACK_LINE(418)
									::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(418)
									tmp12->zpp_pool = o;
								}
								else{
									HX_STACK_LINE(418)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(418)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
								HX_STACK_LINE(418)
								o->zpp_disp = true;
							}
							HX_STACK_LINE(418)
							{
								HX_STACK_LINE(418)
								::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(418)
								{
									HX_STACK_LINE(418)
									bool tmp10 = (o->outer != null());		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(418)
									if ((tmp10)){
										HX_STACK_LINE(418)
										o->outer->zpp_inner = null();
										HX_STACK_LINE(418)
										o->outer = null();
									}
									HX_STACK_LINE(418)
									o->_isimmutable = null();
									HX_STACK_LINE(418)
									o->_validate = null();
									HX_STACK_LINE(418)
									o->_invalidate = null();
								}
								HX_STACK_LINE(418)
								::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(418)
								o->next = tmp10;
								HX_STACK_LINE(418)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
							}
						}
						HX_STACK_LINE(418)
						true;
					}
					else{
						HX_STACK_LINE(418)
						false;
					}
				}
				HX_STACK_LINE(418)
				ret;
			}
		}
		HX_STACK_LINE(418)
		{
			HX_STACK_LINE(418)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(418)
			::nape::geom::Vec2 tmp5 = tmp4->wrap_a1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(418)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(418)
			if ((tmp6)){
				HX_STACK_LINE(418)
				::zpp_nape::constraint::ZPP_DistanceJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(418)
				tmp7->setup_a1();
			}
			HX_STACK_LINE(418)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(418)
			tmp7->wrap_a1;
		}
	}
	HX_STACK_LINE(419)
	{
		HX_STACK_LINE(419)
		{
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				bool tmp4 = (anchor2 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(419)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(419)
				if ((tmp4)){
					HX_STACK_LINE(419)
					tmp5 = anchor2->zpp_disp;
				}
				else{
					HX_STACK_LINE(419)
					tmp5 = false;
				}
				HX_STACK_LINE(419)
				if ((tmp5)){
					HX_STACK_LINE(419)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(419)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(419)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(419)
			bool tmp4 = (anchor2 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(419)
			if ((tmp4)){
				HX_STACK_LINE(419)
				::String tmp5 = HX_HCSTRING("Error: Constraint::anchor2","\xb2","\x15","\x18","\x54");		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(419)
				::String tmp6 = (tmp5 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(419)
				HX_STACK_DO_THROW(tmp6);
			}
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				::nape::geom::Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					::zpp_nape::constraint::ZPP_DistanceJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(419)
					::nape::geom::Vec2 tmp7 = tmp6->wrap_a2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(419)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(419)
					if ((tmp8)){
						HX_STACK_LINE(419)
						::zpp_nape::constraint::ZPP_DistanceJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(419)
						tmp9->setup_a2();
					}
					HX_STACK_LINE(419)
					::zpp_nape::constraint::ZPP_DistanceJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(419)
					tmp5 = tmp9->wrap_a2;
				}
				HX_STACK_LINE(419)
				::nape::geom::Vec2 _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(419)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(419)
					if ((tmp6)){
						HX_STACK_LINE(419)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(419)
						tmp7 = false;
					}
					HX_STACK_LINE(419)
					if ((tmp7)){
						HX_STACK_LINE(419)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(419)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(419)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					bool tmp6 = (anchor2 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(419)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(419)
					if ((tmp6)){
						HX_STACK_LINE(419)
						tmp7 = anchor2->zpp_disp;
					}
					else{
						HX_STACK_LINE(419)
						tmp7 = false;
					}
					HX_STACK_LINE(419)
					if ((tmp7)){
						HX_STACK_LINE(419)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(419)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(419)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(419)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(419)
					if ((tmp6)){
						HX_STACK_LINE(419)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(419)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(419)
					if ((tmp7)){
						HX_STACK_LINE(419)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(419)
				bool tmp6 = (anchor2 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(419)
				if ((tmp6)){
					HX_STACK_LINE(419)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
				}
				HX_STACK_LINE(419)
				::nape::geom::Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(419)
					{
						HX_STACK_LINE(419)
						bool tmp9 = (anchor2 != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(419)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(419)
						if ((tmp9)){
							HX_STACK_LINE(419)
							tmp10 = anchor2->zpp_disp;
						}
						else{
							HX_STACK_LINE(419)
							tmp10 = false;
						}
						HX_STACK_LINE(419)
						if ((tmp10)){
							HX_STACK_LINE(419)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(419)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(419)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(419)
						{
							HX_STACK_LINE(419)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(419)
							bool tmp11 = (_this1->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(419)
							if ((tmp11)){
								HX_STACK_LINE(419)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(419)
						tmp8 = anchor2->zpp_inner->x;
					}
					HX_STACK_LINE(419)
					Float x = tmp8;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(419)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(419)
					{
						HX_STACK_LINE(419)
						bool tmp10 = (anchor2 != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(419)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(419)
						if ((tmp10)){
							HX_STACK_LINE(419)
							tmp11 = anchor2->zpp_disp;
						}
						else{
							HX_STACK_LINE(419)
							tmp11 = false;
						}
						HX_STACK_LINE(419)
						if ((tmp11)){
							HX_STACK_LINE(419)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(419)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(419)
							HX_STACK_DO_THROW(tmp13);
						}
						HX_STACK_LINE(419)
						{
							HX_STACK_LINE(419)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(419)
							bool tmp12 = (_this1->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(419)
							if ((tmp12)){
								HX_STACK_LINE(419)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(419)
						tmp9 = anchor2->zpp_inner->y;
					}
					HX_STACK_LINE(419)
					Float y = tmp9;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(419)
					{
						HX_STACK_LINE(419)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(419)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(419)
						if ((tmp10)){
							HX_STACK_LINE(419)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(419)
							tmp11 = false;
						}
						HX_STACK_LINE(419)
						if ((tmp11)){
							HX_STACK_LINE(419)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(419)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(419)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(419)
					{
						HX_STACK_LINE(419)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(419)
						bool tmp10 = _this1->_immutable;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(419)
						if ((tmp10)){
							HX_STACK_LINE(419)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(419)
						bool tmp11 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(419)
						if ((tmp11)){
							HX_STACK_LINE(419)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(419)
					bool tmp10 = (x != x);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(419)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(419)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(419)
					if ((tmp11)){
						HX_STACK_LINE(419)
						tmp12 = (y != y);
					}
					else{
						HX_STACK_LINE(419)
						tmp12 = true;
					}
					HX_STACK_LINE(419)
					if ((tmp12)){
						HX_STACK_LINE(419)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(419)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(419)
					{
						HX_STACK_LINE(419)
						{
							HX_STACK_LINE(419)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(419)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(419)
							if ((tmp14)){
								HX_STACK_LINE(419)
								tmp15 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(419)
								tmp15 = false;
							}
							HX_STACK_LINE(419)
							if ((tmp15)){
								HX_STACK_LINE(419)
								::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(419)
								::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(419)
								HX_STACK_DO_THROW(tmp17);
							}
						}
						HX_STACK_LINE(419)
						{
							HX_STACK_LINE(419)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(419)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(419)
							if ((tmp14)){
								HX_STACK_LINE(419)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(419)
						tmp13 = _this->zpp_inner->x;
					}
					HX_STACK_LINE(419)
					Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(419)
					bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(419)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(419)
					if ((tmp15)){
						HX_STACK_LINE(419)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(419)
						{
							HX_STACK_LINE(419)
							{
								HX_STACK_LINE(419)
								bool tmp18 = (_this != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(419)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(419)
								bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(419)
								bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(419)
								if ((tmp21)){
									HX_STACK_LINE(419)
									tmp20 = _this->zpp_disp;
								}
								else{
									HX_STACK_LINE(419)
									tmp20 = false;
								}
								HX_STACK_LINE(419)
								bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(419)
								if ((tmp22)){
									HX_STACK_LINE(419)
									::String tmp23 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(419)
									::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(419)
									::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(419)
									::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(419)
									::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(419)
									HX_STACK_DO_THROW(tmp27);
								}
							}
							HX_STACK_LINE(419)
							{
								HX_STACK_LINE(419)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(419)
								bool tmp18 = (_this1->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(419)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(419)
								bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(419)
								if ((tmp20)){
									HX_STACK_LINE(419)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(419)
							Float tmp18 = _this->zpp_inner->y;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(419)
							tmp17 = tmp18;
						}
						HX_STACK_LINE(419)
						Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(419)
						tmp16 = (tmp17 == tmp18);
					}
					else{
						HX_STACK_LINE(419)
						tmp16 = false;
					}
					HX_STACK_LINE(419)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(419)
					if ((tmp17)){
						HX_STACK_LINE(419)
						{
							HX_STACK_LINE(419)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(419)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(419)
							{
							}
						}
						HX_STACK_LINE(419)
						{
							HX_STACK_LINE(419)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(419)
							bool tmp18 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(419)
							if ((tmp18)){
								HX_STACK_LINE(419)
								::zpp_nape::geom::ZPP_Vec2 tmp19 = _this1;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(419)
								_this1->_invalidate(tmp19);
							}
						}
					}
					HX_STACK_LINE(419)
					tmp7 = _this;
				}
				HX_STACK_LINE(419)
				::nape::geom::Vec2 ret = tmp7;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(419)
					tmp8 = anchor2->zpp_inner->weak;
					HX_STACK_LINE(419)
					if ((tmp8)){
						HX_STACK_LINE(419)
						{
							HX_STACK_LINE(419)
							{
								HX_STACK_LINE(419)
								bool tmp9 = (anchor2 != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(419)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(419)
								if ((tmp9)){
									HX_STACK_LINE(419)
									tmp10 = anchor2->zpp_disp;
								}
								else{
									HX_STACK_LINE(419)
									tmp10 = false;
								}
								HX_STACK_LINE(419)
								if ((tmp10)){
									HX_STACK_LINE(419)
									::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(419)
									::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(419)
									HX_STACK_DO_THROW(tmp12);
								}
							}
							HX_STACK_LINE(419)
							{
								HX_STACK_LINE(419)
								::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(419)
								bool tmp9 = _this1->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(419)
								if ((tmp9)){
									HX_STACK_LINE(419)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
								}
								HX_STACK_LINE(419)
								bool tmp10 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(419)
								if ((tmp10)){
									HX_STACK_LINE(419)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(419)
							bool tmp9 = anchor2->zpp_inner->_inuse;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(419)
							if ((tmp9)){
								HX_STACK_LINE(419)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
							}
							HX_STACK_LINE(419)
							::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(419)
							anchor2->zpp_inner->outer = null();
							HX_STACK_LINE(419)
							anchor2->zpp_inner = null();
							HX_STACK_LINE(419)
							{
								HX_STACK_LINE(419)
								::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(419)
								o->zpp_pool = null();
								HX_STACK_LINE(419)
								::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(419)
								bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(419)
								if ((tmp11)){
									HX_STACK_LINE(419)
									::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(419)
									tmp12->zpp_pool = o;
								}
								else{
									HX_STACK_LINE(419)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(419)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
								HX_STACK_LINE(419)
								o->zpp_disp = true;
							}
							HX_STACK_LINE(419)
							{
								HX_STACK_LINE(419)
								::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(419)
								{
									HX_STACK_LINE(419)
									bool tmp10 = (o->outer != null());		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(419)
									if ((tmp10)){
										HX_STACK_LINE(419)
										o->outer->zpp_inner = null();
										HX_STACK_LINE(419)
										o->outer = null();
									}
									HX_STACK_LINE(419)
									o->_isimmutable = null();
									HX_STACK_LINE(419)
									o->_validate = null();
									HX_STACK_LINE(419)
									o->_invalidate = null();
								}
								HX_STACK_LINE(419)
								::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(419)
								o->next = tmp10;
								HX_STACK_LINE(419)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
							}
						}
						HX_STACK_LINE(419)
						true;
					}
					else{
						HX_STACK_LINE(419)
						false;
					}
				}
				HX_STACK_LINE(419)
				ret;
			}
		}
		HX_STACK_LINE(419)
		{
			HX_STACK_LINE(419)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(419)
			::nape::geom::Vec2 tmp5 = tmp4->wrap_a2;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(419)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(419)
			if ((tmp6)){
				HX_STACK_LINE(419)
				::zpp_nape::constraint::ZPP_DistanceJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(419)
				tmp7->setup_a2();
			}
			HX_STACK_LINE(419)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(419)
			tmp7->wrap_a2;
		}
	}
	HX_STACK_LINE(420)
	{
		HX_STACK_LINE(420)
		{
			HX_STACK_LINE(420)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(420)
			tmp4->immutable_midstep(HX_HCSTRING("DistanceJoint::jointMin","\x1d","\xa7","\xfa","\x3d"));
			HX_STACK_LINE(420)
			bool tmp5 = (jointMin != jointMin);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(420)
			if ((tmp5)){
				HX_STACK_LINE(420)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: DistanceJoint::jointMin cannot be NaN","\xea","\xfb","\x5c","\xcd"));
			}
			HX_STACK_LINE(420)
			bool tmp6 = (jointMin < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(420)
			if ((tmp6)){
				HX_STACK_LINE(420)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: DistanceJoint::jointMin must be >= 0","\xa6","\x74","\x41","\x57"));
			}
			HX_STACK_LINE(420)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(420)
			Float tmp8 = tmp7->jointMin;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(420)
			Float tmp9 = jointMin;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(420)
			bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(420)
			if ((tmp10)){
				HX_STACK_LINE(420)
				::zpp_nape::constraint::ZPP_DistanceJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(420)
				tmp11->jointMin = jointMin;
				HX_STACK_LINE(420)
				::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(420)
				tmp12->wake();
			}
		}
		HX_STACK_LINE(420)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(420)
		tmp4->jointMin;
	}
	HX_STACK_LINE(421)
	{
		HX_STACK_LINE(421)
		{
			HX_STACK_LINE(421)
			::zpp_nape::constraint::ZPP_Constraint tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(421)
			tmp4->immutable_midstep(HX_HCSTRING("DistanceJoint::jointMax","\x2f","\xa0","\xfa","\x3d"));
			HX_STACK_LINE(421)
			bool tmp5 = (jointMax != jointMax);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(421)
			if ((tmp5)){
				HX_STACK_LINE(421)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: DistanceJoint::jointMax cannot be NaN","\x7c","\xf0","\xaf","\x65"));
			}
			HX_STACK_LINE(421)
			bool tmp6 = (jointMax < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(421)
			if ((tmp6)){
				HX_STACK_LINE(421)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: DistanceJoint::jointMax must be >= 0","\x54","\xb8","\x29","\x4a"));
			}
			HX_STACK_LINE(421)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(421)
			Float tmp8 = tmp7->jointMax;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(421)
			Float tmp9 = jointMax;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(421)
			bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(421)
			if ((tmp10)){
				HX_STACK_LINE(421)
				::zpp_nape::constraint::ZPP_DistanceJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(421)
				tmp11->jointMax = jointMax;
				HX_STACK_LINE(421)
				::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(421)
				tmp12->wake();
			}
		}
		HX_STACK_LINE(421)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(421)
		tmp4->jointMax;
	}
}
;
	return null();
}

//DistanceJoint_obj::~DistanceJoint_obj() { }

Dynamic DistanceJoint_obj::__CreateEmpty() { return  new DistanceJoint_obj; }
hx::ObjectPtr< DistanceJoint_obj > DistanceJoint_obj::__new(::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 anchor1,::nape::geom::Vec2 anchor2,Float jointMin,Float jointMax)
{  hx::ObjectPtr< DistanceJoint_obj > _result_ = new DistanceJoint_obj();
	_result_->__construct(body1,body2,anchor1,anchor2,jointMin,jointMax);
	return _result_;}

Dynamic DistanceJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DistanceJoint_obj > _result_ = new DistanceJoint_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

::nape::phys::Body DistanceJoint_obj::get_body1( ){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","get_body1",0x19a57462,"nape.constraint.DistanceJoint.get_body1","nape/constraint/DistanceJoint.hx",197,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_LINE(198)
	::zpp_nape::constraint::ZPP_DistanceJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(198)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(198)
	if ((tmp2)){
		HX_STACK_LINE(198)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(198)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(198)
		tmp3 = tmp4->b1->outer;
	}
	HX_STACK_LINE(198)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DistanceJoint_obj,get_body1,return )

::nape::phys::Body DistanceJoint_obj::set_body1( ::nape::phys::Body body1){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","set_body1",0xfcf6606e,"nape.constraint.DistanceJoint.set_body1","nape/constraint/DistanceJoint.hx",200,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body1,"body1")
	HX_STACK_LINE(201)
	{
		HX_STACK_LINE(202)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(202)
		::String tmp1 = HX_HCSTRING("Constraint::body1","\xb2","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		tmp->immutable_midstep(tmp1);
		HX_STACK_LINE(203)
		bool tmp2 = (body1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(203)
		::zpp_nape::phys::ZPP_Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(203)
		if ((tmp2)){
			HX_STACK_LINE(203)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(203)
			tmp3 = body1->zpp_inner;
		}
		HX_STACK_LINE(203)
		::zpp_nape::phys::ZPP_Body inbody1 = tmp3;		HX_STACK_VAR(inbody1,"inbody1");
		HX_STACK_LINE(204)
		::zpp_nape::phys::ZPP_Body tmp4 = inbody1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(204)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(204)
		::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(204)
		bool tmp7 = (tmp4 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(204)
		if ((tmp7)){
			HX_STACK_LINE(205)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(205)
			::zpp_nape::phys::ZPP_Body tmp9 = tmp8->b1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(205)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(205)
			if ((tmp10)){
				HX_STACK_LINE(206)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(206)
				::zpp_nape::space::ZPP_Space tmp12 = tmp11->space;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(206)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(206)
				::nape::space::Space tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(206)
				if ((tmp13)){
					HX_STACK_LINE(206)
					tmp14 = null();
				}
				else{
					HX_STACK_LINE(206)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(206)
					tmp14 = tmp15->space->outer;
				}
				HX_STACK_LINE(206)
				bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(206)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(206)
				if ((tmp15)){
					HX_STACK_LINE(206)
					::zpp_nape::constraint::ZPP_DistanceJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(206)
					::zpp_nape::constraint::ZPP_DistanceJoint tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(206)
					::zpp_nape::phys::ZPP_Body tmp19 = tmp18->b2;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(206)
					::zpp_nape::constraint::ZPP_DistanceJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(206)
					::zpp_nape::constraint::ZPP_DistanceJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(206)
					::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b1;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(206)
					tmp16 = (tmp19 != tmp22);
				}
				else{
					HX_STACK_LINE(206)
					tmp16 = false;
				}
				HX_STACK_LINE(206)
				if ((tmp16)){
					HX_STACK_LINE(208)
					::zpp_nape::constraint::ZPP_DistanceJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(208)
					::zpp_nape::phys::ZPP_Body tmp18 = tmp17->b1;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(208)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(208)
					if ((tmp19)){
						HX_STACK_LINE(208)
						::zpp_nape::constraint::ZPP_DistanceJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(208)
						::zpp_nape::util::ZNPList_ZPP_Constraint tmp21 = tmp20->b1->constraints;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(208)
						::zpp_nape::constraint::ZPP_Constraint tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(208)
						tmp21->remove(tmp22);
					}
				}
				HX_STACK_LINE(211)
				::zpp_nape::constraint::ZPP_Constraint tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(211)
				bool tmp18 = tmp17->active;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(211)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(211)
				if ((tmp18)){
					HX_STACK_LINE(211)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(211)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(211)
					::zpp_nape::space::ZPP_Space tmp22 = tmp21->space;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(211)
					bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(211)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(211)
					::nape::space::Space tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(211)
					bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(211)
					if ((tmp26)){
						HX_STACK_LINE(211)
						tmp25 = null();
					}
					else{
						HX_STACK_LINE(211)
						::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(211)
						::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(211)
						::nape::space::Space tmp29 = tmp28->space->outer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(211)
						tmp25 = tmp29;
					}
					HX_STACK_LINE(211)
					tmp19 = (tmp25 != null());
				}
				else{
					HX_STACK_LINE(211)
					tmp19 = false;
				}
				HX_STACK_LINE(211)
				if ((tmp19)){
					HX_STACK_LINE(211)
					::zpp_nape::constraint::ZPP_DistanceJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(211)
					tmp20->b1->wake();
				}
			}
			HX_STACK_LINE(213)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(213)
			tmp11->b1 = inbody1;
			HX_STACK_LINE(214)
			::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(214)
			::zpp_nape::space::ZPP_Space tmp13 = tmp12->space;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(214)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(214)
			::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(214)
			if ((tmp14)){
				HX_STACK_LINE(214)
				tmp15 = null();
			}
			else{
				HX_STACK_LINE(214)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(214)
				tmp15 = tmp16->space->outer;
			}
			HX_STACK_LINE(214)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(214)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(214)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(214)
			if ((tmp17)){
				HX_STACK_LINE(214)
				tmp18 = (inbody1 != null());
			}
			else{
				HX_STACK_LINE(214)
				tmp18 = false;
			}
			HX_STACK_LINE(214)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(214)
			if ((tmp18)){
				HX_STACK_LINE(214)
				::zpp_nape::constraint::ZPP_DistanceJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(214)
				::zpp_nape::constraint::ZPP_DistanceJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(214)
				::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b2;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(214)
				::zpp_nape::phys::ZPP_Body tmp23 = inbody1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(214)
				tmp19 = (tmp22 != tmp23);
			}
			else{
				HX_STACK_LINE(214)
				tmp19 = false;
			}
			HX_STACK_LINE(214)
			if ((tmp19)){
				HX_STACK_LINE(216)
				bool tmp20 = (inbody1 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(216)
				if ((tmp20)){
					HX_STACK_LINE(216)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(216)
					inbody1->constraints->add(tmp21);
				}
			}
			HX_STACK_LINE(219)
			::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(219)
			bool tmp21 = tmp20->active;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(219)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(219)
			if ((tmp21)){
				HX_STACK_LINE(219)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(219)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(219)
				::zpp_nape::space::ZPP_Space tmp25 = tmp24->space;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(219)
				bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(219)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(219)
				::nape::space::Space tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(219)
				bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(219)
				if ((tmp29)){
					HX_STACK_LINE(219)
					tmp28 = null();
				}
				else{
					HX_STACK_LINE(219)
					::zpp_nape::constraint::ZPP_Constraint tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(219)
					::zpp_nape::constraint::ZPP_Constraint tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(219)
					::nape::space::Space tmp32 = tmp31->space->outer;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(219)
					tmp28 = tmp32;
				}
				HX_STACK_LINE(219)
				tmp22 = (tmp28 != null());
			}
			else{
				HX_STACK_LINE(219)
				tmp22 = false;
			}
			HX_STACK_LINE(219)
			if ((tmp22)){
				HX_STACK_LINE(220)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(220)
				tmp23->wake();
				HX_STACK_LINE(221)
				bool tmp24 = (inbody1 != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(221)
				if ((tmp24)){
					HX_STACK_LINE(221)
					inbody1->wake();
				}
			}
		}
	}
	HX_STACK_LINE(225)
	::zpp_nape::constraint::ZPP_DistanceJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(225)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(225)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(225)
	if ((tmp2)){
		HX_STACK_LINE(225)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(225)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(225)
		tmp3 = tmp4->b1->outer;
	}
	HX_STACK_LINE(225)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DistanceJoint_obj,set_body1,return )

::nape::phys::Body DistanceJoint_obj::get_body2( ){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","get_body2",0x19a57463,"nape.constraint.DistanceJoint.get_body2","nape/constraint/DistanceJoint.hx",235,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_LINE(236)
	::zpp_nape::constraint::ZPP_DistanceJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(236)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(236)
	if ((tmp2)){
		HX_STACK_LINE(236)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(236)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(236)
		tmp3 = tmp4->b2->outer;
	}
	HX_STACK_LINE(236)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DistanceJoint_obj,get_body2,return )

::nape::phys::Body DistanceJoint_obj::set_body2( ::nape::phys::Body body2){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","set_body2",0xfcf6606f,"nape.constraint.DistanceJoint.set_body2","nape/constraint/DistanceJoint.hx",238,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body2,"body2")
	HX_STACK_LINE(239)
	{
		HX_STACK_LINE(240)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(240)
		::String tmp1 = HX_HCSTRING("Constraint::body2","\xb3","\xdd","\x0c","\x93");		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(240)
		tmp->immutable_midstep(tmp1);
		HX_STACK_LINE(241)
		bool tmp2 = (body2 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(241)
		::zpp_nape::phys::ZPP_Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(241)
		if ((tmp2)){
			HX_STACK_LINE(241)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(241)
			tmp3 = body2->zpp_inner;
		}
		HX_STACK_LINE(241)
		::zpp_nape::phys::ZPP_Body inbody2 = tmp3;		HX_STACK_VAR(inbody2,"inbody2");
		HX_STACK_LINE(242)
		::zpp_nape::phys::ZPP_Body tmp4 = inbody2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(242)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(242)
		::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(242)
		bool tmp7 = (tmp4 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(242)
		if ((tmp7)){
			HX_STACK_LINE(243)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp8 = this->zpp_inner_zn;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(243)
			::zpp_nape::phys::ZPP_Body tmp9 = tmp8->b2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(243)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(243)
			if ((tmp10)){
				HX_STACK_LINE(244)
				::zpp_nape::constraint::ZPP_Constraint tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(244)
				::zpp_nape::space::ZPP_Space tmp12 = tmp11->space;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(244)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(244)
				::nape::space::Space tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(244)
				if ((tmp13)){
					HX_STACK_LINE(244)
					tmp14 = null();
				}
				else{
					HX_STACK_LINE(244)
					::zpp_nape::constraint::ZPP_Constraint tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(244)
					tmp14 = tmp15->space->outer;
				}
				HX_STACK_LINE(244)
				bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(244)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(244)
				if ((tmp15)){
					HX_STACK_LINE(244)
					::zpp_nape::constraint::ZPP_DistanceJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(244)
					::zpp_nape::constraint::ZPP_DistanceJoint tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(244)
					::zpp_nape::phys::ZPP_Body tmp19 = tmp18->b1;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(244)
					::zpp_nape::constraint::ZPP_DistanceJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(244)
					::zpp_nape::constraint::ZPP_DistanceJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(244)
					::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b2;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(244)
					tmp16 = (tmp19 != tmp22);
				}
				else{
					HX_STACK_LINE(244)
					tmp16 = false;
				}
				HX_STACK_LINE(244)
				if ((tmp16)){
					HX_STACK_LINE(246)
					::zpp_nape::constraint::ZPP_DistanceJoint tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(246)
					::zpp_nape::phys::ZPP_Body tmp18 = tmp17->b2;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(246)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(246)
					if ((tmp19)){
						HX_STACK_LINE(246)
						::zpp_nape::constraint::ZPP_DistanceJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(246)
						::zpp_nape::util::ZNPList_ZPP_Constraint tmp21 = tmp20->b2->constraints;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(246)
						::zpp_nape::constraint::ZPP_Constraint tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(246)
						tmp21->remove(tmp22);
					}
				}
				HX_STACK_LINE(249)
				::zpp_nape::constraint::ZPP_Constraint tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(249)
				bool tmp18 = tmp17->active;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(249)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(249)
				if ((tmp18)){
					HX_STACK_LINE(249)
					::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(249)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(249)
					::zpp_nape::space::ZPP_Space tmp22 = tmp21->space;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(249)
					bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(249)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(249)
					::nape::space::Space tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(249)
					bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(249)
					if ((tmp26)){
						HX_STACK_LINE(249)
						tmp25 = null();
					}
					else{
						HX_STACK_LINE(249)
						::zpp_nape::constraint::ZPP_Constraint tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(249)
						::zpp_nape::constraint::ZPP_Constraint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(249)
						::nape::space::Space tmp29 = tmp28->space->outer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(249)
						tmp25 = tmp29;
					}
					HX_STACK_LINE(249)
					tmp19 = (tmp25 != null());
				}
				else{
					HX_STACK_LINE(249)
					tmp19 = false;
				}
				HX_STACK_LINE(249)
				if ((tmp19)){
					HX_STACK_LINE(249)
					::zpp_nape::constraint::ZPP_DistanceJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(249)
					tmp20->b2->wake();
				}
			}
			HX_STACK_LINE(251)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(251)
			tmp11->b2 = inbody2;
			HX_STACK_LINE(252)
			::zpp_nape::constraint::ZPP_Constraint tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(252)
			::zpp_nape::space::ZPP_Space tmp13 = tmp12->space;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(252)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(252)
			::nape::space::Space tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(252)
			if ((tmp14)){
				HX_STACK_LINE(252)
				tmp15 = null();
			}
			else{
				HX_STACK_LINE(252)
				::zpp_nape::constraint::ZPP_Constraint tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(252)
				tmp15 = tmp16->space->outer;
			}
			HX_STACK_LINE(252)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(252)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(252)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(252)
			if ((tmp17)){
				HX_STACK_LINE(252)
				tmp18 = (inbody2 != null());
			}
			else{
				HX_STACK_LINE(252)
				tmp18 = false;
			}
			HX_STACK_LINE(252)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(252)
			if ((tmp18)){
				HX_STACK_LINE(252)
				::zpp_nape::constraint::ZPP_DistanceJoint tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(252)
				::zpp_nape::constraint::ZPP_DistanceJoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(252)
				::zpp_nape::phys::ZPP_Body tmp22 = tmp21->b1;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(252)
				::zpp_nape::phys::ZPP_Body tmp23 = inbody2;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(252)
				tmp19 = (tmp22 != tmp23);
			}
			else{
				HX_STACK_LINE(252)
				tmp19 = false;
			}
			HX_STACK_LINE(252)
			if ((tmp19)){
				HX_STACK_LINE(254)
				bool tmp20 = (inbody2 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(254)
				if ((tmp20)){
					HX_STACK_LINE(254)
					::zpp_nape::constraint::ZPP_Constraint tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(254)
					inbody2->constraints->add(tmp21);
				}
			}
			HX_STACK_LINE(257)
			::zpp_nape::constraint::ZPP_Constraint tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(257)
			bool tmp21 = tmp20->active;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(257)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(257)
			if ((tmp21)){
				HX_STACK_LINE(257)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(257)
				::zpp_nape::constraint::ZPP_Constraint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(257)
				::zpp_nape::space::ZPP_Space tmp25 = tmp24->space;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(257)
				bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(257)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(257)
				::nape::space::Space tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(257)
				bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(257)
				if ((tmp29)){
					HX_STACK_LINE(257)
					tmp28 = null();
				}
				else{
					HX_STACK_LINE(257)
					::zpp_nape::constraint::ZPP_Constraint tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(257)
					::zpp_nape::constraint::ZPP_Constraint tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(257)
					::nape::space::Space tmp32 = tmp31->space->outer;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(257)
					tmp28 = tmp32;
				}
				HX_STACK_LINE(257)
				tmp22 = (tmp28 != null());
			}
			else{
				HX_STACK_LINE(257)
				tmp22 = false;
			}
			HX_STACK_LINE(257)
			if ((tmp22)){
				HX_STACK_LINE(258)
				::zpp_nape::constraint::ZPP_Constraint tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(258)
				tmp23->wake();
				HX_STACK_LINE(259)
				bool tmp24 = (inbody2 != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(259)
				if ((tmp24)){
					HX_STACK_LINE(259)
					inbody2->wake();
				}
			}
		}
	}
	HX_STACK_LINE(263)
	::zpp_nape::constraint::ZPP_DistanceJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(263)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(263)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(263)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(263)
	if ((tmp2)){
		HX_STACK_LINE(263)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(263)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(263)
		tmp3 = tmp4->b2->outer;
	}
	HX_STACK_LINE(263)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DistanceJoint_obj,set_body2,return )

::nape::geom::Vec2 DistanceJoint_obj::get_anchor1( ){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","get_anchor1",0xb6d037ef,"nape.constraint.DistanceJoint.get_anchor1","nape/constraint/DistanceJoint.hx",272,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_LINE(273)
	::zpp_nape::constraint::ZPP_DistanceJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(273)
	::nape::geom::Vec2 tmp1 = tmp->wrap_a1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(273)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(273)
	if ((tmp2)){
		HX_STACK_LINE(273)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(273)
		tmp3->setup_a1();
	}
	HX_STACK_LINE(274)
	::zpp_nape::constraint::ZPP_DistanceJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(274)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_a1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(274)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(DistanceJoint_obj,get_anchor1,return )

::nape::geom::Vec2 DistanceJoint_obj::set_anchor1( ::nape::geom::Vec2 anchor1){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","set_anchor1",0xc13d3efb,"nape.constraint.DistanceJoint.set_anchor1","nape/constraint/DistanceJoint.hx",276,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor1,"anchor1")
	HX_STACK_LINE(277)
	{
		HX_STACK_LINE(278)
		{
			HX_STACK_LINE(280)
			bool tmp = (anchor1 != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(280)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(280)
			if ((tmp)){
				HX_STACK_LINE(280)
				tmp1 = anchor1->zpp_disp;
			}
			else{
				HX_STACK_LINE(280)
				tmp1 = false;
			}
			HX_STACK_LINE(280)
			if ((tmp1)){
				HX_STACK_LINE(280)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(280)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(280)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(284)
		bool tmp = (anchor1 == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(284)
		if ((tmp)){
			HX_STACK_LINE(284)
			::String tmp1 = HX_HCSTRING("Error: Constraint::anchor1","\xb1","\x15","\x18","\x54");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(284)
			::String tmp2 = (tmp1 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(284)
			HX_STACK_DO_THROW(tmp2);
		}
		HX_STACK_LINE(286)
		{
			HX_STACK_LINE(286)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				::zpp_nape::constraint::ZPP_DistanceJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(286)
				::nape::geom::Vec2 tmp3 = tmp2->wrap_a1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(286)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(286)
				if ((tmp4)){
					HX_STACK_LINE(286)
					::zpp_nape::constraint::ZPP_DistanceJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(286)
					tmp5->setup_a1();
				}
				HX_STACK_LINE(286)
				::zpp_nape::constraint::ZPP_DistanceJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(286)
				tmp1 = tmp5->wrap_a1;
			}
			HX_STACK_LINE(286)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(286)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(286)
				if ((tmp2)){
					HX_STACK_LINE(286)
					tmp3 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(286)
					tmp3 = false;
				}
				HX_STACK_LINE(286)
				if ((tmp3)){
					HX_STACK_LINE(286)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(286)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(286)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				bool tmp2 = (anchor1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(286)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(286)
				if ((tmp2)){
					HX_STACK_LINE(286)
					tmp3 = anchor1->zpp_disp;
				}
				else{
					HX_STACK_LINE(286)
					tmp3 = false;
				}
				HX_STACK_LINE(286)
				if ((tmp3)){
					HX_STACK_LINE(286)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(286)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(286)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(286)
				bool tmp2 = _this1->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(286)
				if ((tmp2)){
					HX_STACK_LINE(286)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(286)
				bool tmp3 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(286)
				if ((tmp3)){
					HX_STACK_LINE(286)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(286)
			bool tmp2 = (anchor1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(286)
			if ((tmp2)){
				HX_STACK_LINE(286)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
			}
			HX_STACK_LINE(286)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					bool tmp5 = (anchor1 != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(286)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(286)
					if ((tmp5)){
						HX_STACK_LINE(286)
						tmp6 = anchor1->zpp_disp;
					}
					else{
						HX_STACK_LINE(286)
						tmp6 = false;
					}
					HX_STACK_LINE(286)
					if ((tmp6)){
						HX_STACK_LINE(286)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(286)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(286)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(286)
						bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(286)
						if ((tmp7)){
							HX_STACK_LINE(286)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(286)
					tmp4 = anchor1->zpp_inner->x;
				}
				HX_STACK_LINE(286)
				Float x = tmp4;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(286)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					bool tmp6 = (anchor1 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(286)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(286)
					if ((tmp6)){
						HX_STACK_LINE(286)
						tmp7 = anchor1->zpp_disp;
					}
					else{
						HX_STACK_LINE(286)
						tmp7 = false;
					}
					HX_STACK_LINE(286)
					if ((tmp7)){
						HX_STACK_LINE(286)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(286)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(286)
						HX_STACK_DO_THROW(tmp9);
					}
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(286)
						bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(286)
						if ((tmp8)){
							HX_STACK_LINE(286)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(286)
					tmp5 = anchor1->zpp_inner->y;
				}
				HX_STACK_LINE(286)
				Float y = tmp5;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(286)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(286)
					if ((tmp6)){
						HX_STACK_LINE(286)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(286)
						tmp7 = false;
					}
					HX_STACK_LINE(286)
					if ((tmp7)){
						HX_STACK_LINE(286)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(286)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(286)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(286)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(286)
					if ((tmp6)){
						HX_STACK_LINE(286)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(286)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(286)
					if ((tmp7)){
						HX_STACK_LINE(286)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(286)
				bool tmp6 = (x != x);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(286)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(286)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(286)
				if ((tmp7)){
					HX_STACK_LINE(286)
					tmp8 = (y != y);
				}
				else{
					HX_STACK_LINE(286)
					tmp8 = true;
				}
				HX_STACK_LINE(286)
				if ((tmp8)){
					HX_STACK_LINE(286)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(286)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(286)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(286)
						if ((tmp10)){
							HX_STACK_LINE(286)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(286)
							tmp11 = false;
						}
						HX_STACK_LINE(286)
						if ((tmp11)){
							HX_STACK_LINE(286)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(286)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(286)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(286)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(286)
						if ((tmp10)){
							HX_STACK_LINE(286)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(286)
					tmp9 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(286)
				Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(286)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(286)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(286)
				if ((tmp11)){
					HX_STACK_LINE(286)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						{
							HX_STACK_LINE(286)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(286)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(286)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(286)
							bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(286)
							if ((tmp17)){
								HX_STACK_LINE(286)
								tmp16 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(286)
								tmp16 = false;
							}
							HX_STACK_LINE(286)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(286)
							if ((tmp18)){
								HX_STACK_LINE(286)
								::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(286)
								::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(286)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(286)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(286)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(286)
								HX_STACK_DO_THROW(tmp23);
							}
						}
						HX_STACK_LINE(286)
						{
							HX_STACK_LINE(286)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(286)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(286)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(286)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(286)
							if ((tmp16)){
								HX_STACK_LINE(286)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(286)
						Float tmp14 = _this->zpp_inner->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(286)
						tmp13 = tmp14;
					}
					HX_STACK_LINE(286)
					Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(286)
					tmp12 = (tmp13 == tmp14);
				}
				else{
					HX_STACK_LINE(286)
					tmp12 = false;
				}
				HX_STACK_LINE(286)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(286)
				if ((tmp13)){
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(286)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(286)
						{
						}
					}
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(286)
						bool tmp14 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(286)
						if ((tmp14)){
							HX_STACK_LINE(286)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = _this1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(286)
							_this1->_invalidate(tmp15);
						}
					}
				}
				HX_STACK_LINE(286)
				tmp3 = _this;
			}
			HX_STACK_LINE(286)
			::nape::geom::Vec2 ret = tmp3;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(286)
				tmp4 = anchor1->zpp_inner->weak;
				HX_STACK_LINE(286)
				if ((tmp4)){
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						{
							HX_STACK_LINE(286)
							bool tmp5 = (anchor1 != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(286)
							bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(286)
							if ((tmp5)){
								HX_STACK_LINE(286)
								tmp6 = anchor1->zpp_disp;
							}
							else{
								HX_STACK_LINE(286)
								tmp6 = false;
							}
							HX_STACK_LINE(286)
							if ((tmp6)){
								HX_STACK_LINE(286)
								::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(286)
								::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(286)
								HX_STACK_DO_THROW(tmp8);
							}
						}
						HX_STACK_LINE(286)
						{
							HX_STACK_LINE(286)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor1->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(286)
							bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(286)
							if ((tmp5)){
								HX_STACK_LINE(286)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(286)
							bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(286)
							if ((tmp6)){
								HX_STACK_LINE(286)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(286)
						bool tmp5 = anchor1->zpp_inner->_inuse;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(286)
						if ((tmp5)){
							HX_STACK_LINE(286)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(286)
						::zpp_nape::geom::ZPP_Vec2 inner = anchor1->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(286)
						anchor1->zpp_inner->outer = null();
						HX_STACK_LINE(286)
						anchor1->zpp_inner = null();
						HX_STACK_LINE(286)
						{
							HX_STACK_LINE(286)
							::nape::geom::Vec2 o = anchor1;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(286)
							o->zpp_pool = null();
							HX_STACK_LINE(286)
							::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(286)
							bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(286)
							if ((tmp7)){
								HX_STACK_LINE(286)
								::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(286)
								tmp8->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(286)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(286)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(286)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(286)
						{
							HX_STACK_LINE(286)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(286)
							{
								HX_STACK_LINE(286)
								bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(286)
								if ((tmp6)){
									HX_STACK_LINE(286)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(286)
									o->outer = null();
								}
								HX_STACK_LINE(286)
								o->_isimmutable = null();
								HX_STACK_LINE(286)
								o->_validate = null();
								HX_STACK_LINE(286)
								o->_invalidate = null();
							}
							HX_STACK_LINE(286)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(286)
							o->next = tmp6;
							HX_STACK_LINE(286)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(286)
					true;
				}
				else{
					HX_STACK_LINE(286)
					false;
				}
			}
			HX_STACK_LINE(286)
			ret;
		}
	}
	HX_STACK_LINE(288)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(288)
	{
		HX_STACK_LINE(288)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(288)
		::nape::geom::Vec2 tmp2 = tmp1->wrap_a1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(288)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(288)
		if ((tmp3)){
			HX_STACK_LINE(288)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(288)
			tmp4->setup_a1();
		}
		HX_STACK_LINE(288)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(288)
		tmp = tmp4->wrap_a1;
	}
	HX_STACK_LINE(288)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DistanceJoint_obj,set_anchor1,return )

::nape::geom::Vec2 DistanceJoint_obj::get_anchor2( ){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","get_anchor2",0xb6d037f0,"nape.constraint.DistanceJoint.get_anchor2","nape/constraint/DistanceJoint.hx",297,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_LINE(298)
	::zpp_nape::constraint::ZPP_DistanceJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(298)
	::nape::geom::Vec2 tmp1 = tmp->wrap_a2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(298)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(298)
	if ((tmp2)){
		HX_STACK_LINE(298)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(298)
		tmp3->setup_a2();
	}
	HX_STACK_LINE(299)
	::zpp_nape::constraint::ZPP_DistanceJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(299)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_a2;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(299)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(DistanceJoint_obj,get_anchor2,return )

::nape::geom::Vec2 DistanceJoint_obj::set_anchor2( ::nape::geom::Vec2 anchor2){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","set_anchor2",0xc13d3efc,"nape.constraint.DistanceJoint.set_anchor2","nape/constraint/DistanceJoint.hx",301,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anchor2,"anchor2")
	HX_STACK_LINE(302)
	{
		HX_STACK_LINE(303)
		{
			HX_STACK_LINE(305)
			bool tmp = (anchor2 != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(305)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(305)
			if ((tmp)){
				HX_STACK_LINE(305)
				tmp1 = anchor2->zpp_disp;
			}
			else{
				HX_STACK_LINE(305)
				tmp1 = false;
			}
			HX_STACK_LINE(305)
			if ((tmp1)){
				HX_STACK_LINE(305)
				::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(305)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(305)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(309)
		bool tmp = (anchor2 == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(309)
		if ((tmp)){
			HX_STACK_LINE(309)
			::String tmp1 = HX_HCSTRING("Error: Constraint::anchor2","\xb2","\x15","\x18","\x54");		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(309)
			::String tmp2 = (tmp1 + HX_HCSTRING(" cannot be null","\x07","\xdc","\x5d","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(309)
			HX_STACK_DO_THROW(tmp2);
		}
		HX_STACK_LINE(311)
		{
			HX_STACK_LINE(311)
			::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(311)
			{
				HX_STACK_LINE(311)
				::zpp_nape::constraint::ZPP_DistanceJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(311)
				::nape::geom::Vec2 tmp3 = tmp2->wrap_a2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(311)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(311)
				if ((tmp4)){
					HX_STACK_LINE(311)
					::zpp_nape::constraint::ZPP_DistanceJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(311)
					tmp5->setup_a2();
				}
				HX_STACK_LINE(311)
				::zpp_nape::constraint::ZPP_DistanceJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(311)
				tmp1 = tmp5->wrap_a2;
			}
			HX_STACK_LINE(311)
			::nape::geom::Vec2 _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(311)
			{
				HX_STACK_LINE(311)
				bool tmp2 = (_this != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(311)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(311)
				if ((tmp2)){
					HX_STACK_LINE(311)
					tmp3 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(311)
					tmp3 = false;
				}
				HX_STACK_LINE(311)
				if ((tmp3)){
					HX_STACK_LINE(311)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(311)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(311)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(311)
			{
				HX_STACK_LINE(311)
				bool tmp2 = (anchor2 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(311)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(311)
				if ((tmp2)){
					HX_STACK_LINE(311)
					tmp3 = anchor2->zpp_disp;
				}
				else{
					HX_STACK_LINE(311)
					tmp3 = false;
				}
				HX_STACK_LINE(311)
				if ((tmp3)){
					HX_STACK_LINE(311)
					::String tmp4 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(311)
					::String tmp5 = (tmp4 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(311)
					HX_STACK_DO_THROW(tmp5);
				}
			}
			HX_STACK_LINE(311)
			{
				HX_STACK_LINE(311)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(311)
				bool tmp2 = _this1->_immutable;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(311)
				if ((tmp2)){
					HX_STACK_LINE(311)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(311)
				bool tmp3 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(311)
				if ((tmp3)){
					HX_STACK_LINE(311)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(311)
			bool tmp2 = (anchor2 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(311)
			if ((tmp2)){
				HX_STACK_LINE(311)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
			}
			HX_STACK_LINE(311)
			::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(311)
			{
				HX_STACK_LINE(311)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(311)
				{
					HX_STACK_LINE(311)
					bool tmp5 = (anchor2 != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(311)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(311)
					if ((tmp5)){
						HX_STACK_LINE(311)
						tmp6 = anchor2->zpp_disp;
					}
					else{
						HX_STACK_LINE(311)
						tmp6 = false;
					}
					HX_STACK_LINE(311)
					if ((tmp6)){
						HX_STACK_LINE(311)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(311)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(311)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(311)
					{
						HX_STACK_LINE(311)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(311)
						bool tmp7 = (_this1->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(311)
						if ((tmp7)){
							HX_STACK_LINE(311)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(311)
					tmp4 = anchor2->zpp_inner->x;
				}
				HX_STACK_LINE(311)
				Float x = tmp4;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(311)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(311)
				{
					HX_STACK_LINE(311)
					bool tmp6 = (anchor2 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(311)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(311)
					if ((tmp6)){
						HX_STACK_LINE(311)
						tmp7 = anchor2->zpp_disp;
					}
					else{
						HX_STACK_LINE(311)
						tmp7 = false;
					}
					HX_STACK_LINE(311)
					if ((tmp7)){
						HX_STACK_LINE(311)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(311)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(311)
						HX_STACK_DO_THROW(tmp9);
					}
					HX_STACK_LINE(311)
					{
						HX_STACK_LINE(311)
						::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(311)
						bool tmp8 = (_this1->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(311)
						if ((tmp8)){
							HX_STACK_LINE(311)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(311)
					tmp5 = anchor2->zpp_inner->y;
				}
				HX_STACK_LINE(311)
				Float y = tmp5;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(311)
				{
					HX_STACK_LINE(311)
					bool tmp6 = (_this != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(311)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(311)
					if ((tmp6)){
						HX_STACK_LINE(311)
						tmp7 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(311)
						tmp7 = false;
					}
					HX_STACK_LINE(311)
					if ((tmp7)){
						HX_STACK_LINE(311)
						::String tmp8 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(311)
						::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(311)
						HX_STACK_DO_THROW(tmp9);
					}
				}
				HX_STACK_LINE(311)
				{
					HX_STACK_LINE(311)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(311)
					bool tmp6 = _this1->_immutable;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(311)
					if ((tmp6)){
						HX_STACK_LINE(311)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(311)
					bool tmp7 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(311)
					if ((tmp7)){
						HX_STACK_LINE(311)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(311)
				bool tmp6 = (x != x);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(311)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(311)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(311)
				if ((tmp7)){
					HX_STACK_LINE(311)
					tmp8 = (y != y);
				}
				else{
					HX_STACK_LINE(311)
					tmp8 = true;
				}
				HX_STACK_LINE(311)
				if ((tmp8)){
					HX_STACK_LINE(311)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(311)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(311)
				{
					HX_STACK_LINE(311)
					{
						HX_STACK_LINE(311)
						bool tmp10 = (_this != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(311)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(311)
						if ((tmp10)){
							HX_STACK_LINE(311)
							tmp11 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(311)
							tmp11 = false;
						}
						HX_STACK_LINE(311)
						if ((tmp11)){
							HX_STACK_LINE(311)
							::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(311)
							::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(311)
							HX_STACK_DO_THROW(tmp13);
						}
					}
					HX_STACK_LINE(311)
					{
						HX_STACK_LINE(311)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(311)
						bool tmp10 = (_this1->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(311)
						if ((tmp10)){
							HX_STACK_LINE(311)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(311)
					tmp9 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(311)
				Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(311)
				bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(311)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(311)
				if ((tmp11)){
					HX_STACK_LINE(311)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(311)
					{
						HX_STACK_LINE(311)
						{
							HX_STACK_LINE(311)
							bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(311)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(311)
							bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(311)
							bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(311)
							if ((tmp17)){
								HX_STACK_LINE(311)
								tmp16 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(311)
								tmp16 = false;
							}
							HX_STACK_LINE(311)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(311)
							if ((tmp18)){
								HX_STACK_LINE(311)
								::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(311)
								::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(311)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(311)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(311)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(311)
								HX_STACK_DO_THROW(tmp23);
							}
						}
						HX_STACK_LINE(311)
						{
							HX_STACK_LINE(311)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(311)
							bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(311)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(311)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(311)
							if ((tmp16)){
								HX_STACK_LINE(311)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(311)
						Float tmp14 = _this->zpp_inner->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(311)
						tmp13 = tmp14;
					}
					HX_STACK_LINE(311)
					Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(311)
					tmp12 = (tmp13 == tmp14);
				}
				else{
					HX_STACK_LINE(311)
					tmp12 = false;
				}
				HX_STACK_LINE(311)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(311)
				if ((tmp13)){
					HX_STACK_LINE(311)
					{
						HX_STACK_LINE(311)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(311)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(311)
						{
						}
					}
					HX_STACK_LINE(311)
					{
						HX_STACK_LINE(311)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(311)
						bool tmp14 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(311)
						if ((tmp14)){
							HX_STACK_LINE(311)
							::zpp_nape::geom::ZPP_Vec2 tmp15 = _this1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(311)
							_this1->_invalidate(tmp15);
						}
					}
				}
				HX_STACK_LINE(311)
				tmp3 = _this;
			}
			HX_STACK_LINE(311)
			::nape::geom::Vec2 ret = tmp3;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(311)
			{
				HX_STACK_LINE(311)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(311)
				tmp4 = anchor2->zpp_inner->weak;
				HX_STACK_LINE(311)
				if ((tmp4)){
					HX_STACK_LINE(311)
					{
						HX_STACK_LINE(311)
						{
							HX_STACK_LINE(311)
							bool tmp5 = (anchor2 != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(311)
							bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(311)
							if ((tmp5)){
								HX_STACK_LINE(311)
								tmp6 = anchor2->zpp_disp;
							}
							else{
								HX_STACK_LINE(311)
								tmp6 = false;
							}
							HX_STACK_LINE(311)
							if ((tmp6)){
								HX_STACK_LINE(311)
								::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(311)
								::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(311)
								HX_STACK_DO_THROW(tmp8);
							}
						}
						HX_STACK_LINE(311)
						{
							HX_STACK_LINE(311)
							::zpp_nape::geom::ZPP_Vec2 _this1 = anchor2->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(311)
							bool tmp5 = _this1->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(311)
							if ((tmp5)){
								HX_STACK_LINE(311)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(311)
							bool tmp6 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(311)
							if ((tmp6)){
								HX_STACK_LINE(311)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(311)
						bool tmp5 = anchor2->zpp_inner->_inuse;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(311)
						if ((tmp5)){
							HX_STACK_LINE(311)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(311)
						::zpp_nape::geom::ZPP_Vec2 inner = anchor2->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(311)
						anchor2->zpp_inner->outer = null();
						HX_STACK_LINE(311)
						anchor2->zpp_inner = null();
						HX_STACK_LINE(311)
						{
							HX_STACK_LINE(311)
							::nape::geom::Vec2 o = anchor2;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(311)
							o->zpp_pool = null();
							HX_STACK_LINE(311)
							::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(311)
							bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(311)
							if ((tmp7)){
								HX_STACK_LINE(311)
								::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(311)
								tmp8->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(311)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(311)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(311)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(311)
						{
							HX_STACK_LINE(311)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(311)
							{
								HX_STACK_LINE(311)
								bool tmp6 = (o->outer != null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(311)
								if ((tmp6)){
									HX_STACK_LINE(311)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(311)
									o->outer = null();
								}
								HX_STACK_LINE(311)
								o->_isimmutable = null();
								HX_STACK_LINE(311)
								o->_validate = null();
								HX_STACK_LINE(311)
								o->_invalidate = null();
							}
							HX_STACK_LINE(311)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(311)
							o->next = tmp6;
							HX_STACK_LINE(311)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(311)
					true;
				}
				else{
					HX_STACK_LINE(311)
					false;
				}
			}
			HX_STACK_LINE(311)
			ret;
		}
	}
	HX_STACK_LINE(313)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(313)
	{
		HX_STACK_LINE(313)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp1 = this->zpp_inner_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		::nape::geom::Vec2 tmp2 = tmp1->wrap_a2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(313)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(313)
		if ((tmp3)){
			HX_STACK_LINE(313)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(313)
			tmp4->setup_a2();
		}
		HX_STACK_LINE(313)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(313)
		tmp = tmp4->wrap_a2;
	}
	HX_STACK_LINE(313)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DistanceJoint_obj,set_anchor2,return )

Float DistanceJoint_obj::get_jointMin( ){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","get_jointMin",0x497a0735,"nape.constraint.DistanceJoint.get_jointMin","nape/constraint/DistanceJoint.hx",322,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_LINE(323)
	::zpp_nape::constraint::ZPP_DistanceJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(323)
	Float tmp1 = tmp->jointMin;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(323)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DistanceJoint_obj,get_jointMin,return )

Float DistanceJoint_obj::set_jointMin( Float jointMin){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","set_jointMin",0x5e732aa9,"nape.constraint.DistanceJoint.set_jointMin","nape/constraint/DistanceJoint.hx",325,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jointMin,"jointMin")
	HX_STACK_LINE(326)
	{
		HX_STACK_LINE(327)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(327)
		tmp->immutable_midstep(HX_HCSTRING("DistanceJoint::jointMin","\x1d","\xa7","\xfa","\x3d"));
		HX_STACK_LINE(329)
		bool tmp1 = (jointMin != jointMin);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(329)
		if ((tmp1)){
			HX_STACK_LINE(330)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: DistanceJoint::jointMin cannot be NaN","\xea","\xfb","\x5c","\xcd"));
		}
		HX_STACK_LINE(332)
		bool tmp2 = (jointMin < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(332)
		if ((tmp2)){
			HX_STACK_LINE(333)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: DistanceJoint::jointMin must be >= 0","\xa6","\x74","\x41","\x57"));
		}
		HX_STACK_LINE(336)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(336)
		Float tmp4 = tmp3->jointMin;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(336)
		Float tmp5 = jointMin;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(336)
		bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(336)
		if ((tmp6)){
			HX_STACK_LINE(337)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(337)
			tmp7->jointMin = jointMin;
			HX_STACK_LINE(338)
			::zpp_nape::constraint::ZPP_Constraint tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(338)
			tmp8->wake();
		}
	}
	HX_STACK_LINE(341)
	::zpp_nape::constraint::ZPP_DistanceJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(341)
	Float tmp1 = tmp->jointMin;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(341)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DistanceJoint_obj,set_jointMin,return )

Float DistanceJoint_obj::get_jointMax( ){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","get_jointMax",0x497a0047,"nape.constraint.DistanceJoint.get_jointMax","nape/constraint/DistanceJoint.hx",350,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_LINE(351)
	::zpp_nape::constraint::ZPP_DistanceJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(351)
	Float tmp1 = tmp->jointMax;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(351)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DistanceJoint_obj,get_jointMax,return )

Float DistanceJoint_obj::set_jointMax( Float jointMax){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","set_jointMax",0x5e7323bb,"nape.constraint.DistanceJoint.set_jointMax","nape/constraint/DistanceJoint.hx",353,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jointMax,"jointMax")
	HX_STACK_LINE(354)
	{
		HX_STACK_LINE(355)
		::zpp_nape::constraint::ZPP_Constraint tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(355)
		tmp->immutable_midstep(HX_HCSTRING("DistanceJoint::jointMax","\x2f","\xa0","\xfa","\x3d"));
		HX_STACK_LINE(357)
		bool tmp1 = (jointMax != jointMax);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(357)
		if ((tmp1)){
			HX_STACK_LINE(358)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: DistanceJoint::jointMax cannot be NaN","\x7c","\xf0","\xaf","\x65"));
		}
		HX_STACK_LINE(360)
		bool tmp2 = (jointMax < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(360)
		if ((tmp2)){
			HX_STACK_LINE(361)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: DistanceJoint::jointMax must be >= 0","\x54","\xb8","\x29","\x4a"));
		}
		HX_STACK_LINE(364)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(364)
		Float tmp4 = tmp3->jointMax;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(364)
		Float tmp5 = jointMax;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(364)
		bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(364)
		if ((tmp6)){
			HX_STACK_LINE(365)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(365)
			tmp7->jointMax = jointMax;
			HX_STACK_LINE(366)
			::zpp_nape::constraint::ZPP_Constraint tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(366)
			tmp8->wake();
		}
	}
	HX_STACK_LINE(369)
	::zpp_nape::constraint::ZPP_DistanceJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(369)
	Float tmp1 = tmp->jointMax;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(369)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DistanceJoint_obj,set_jointMax,return )

bool DistanceJoint_obj::isSlack( ){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","isSlack",0xe033b3c2,"nape.constraint.DistanceJoint.isSlack","nape/constraint/DistanceJoint.hx",382,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_LINE(384)
	::zpp_nape::constraint::ZPP_DistanceJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(384)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(384)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(384)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(384)
	if ((tmp2)){
		HX_STACK_LINE(384)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(384)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(384)
		tmp3 = tmp4->b1->outer;
	}
	HX_STACK_LINE(384)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(384)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(384)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(384)
	if ((tmp5)){
		HX_STACK_LINE(384)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(384)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(384)
		::zpp_nape::phys::ZPP_Body tmp9 = tmp8->b2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(384)
		bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(384)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(384)
		::nape::phys::Body tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(384)
		bool tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(384)
		if ((tmp13)){
			HX_STACK_LINE(384)
			tmp12 = null();
		}
		else{
			HX_STACK_LINE(384)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp14 = this->zpp_inner_zn;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(384)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(384)
			::nape::phys::Body tmp16 = tmp15->b2->outer;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(384)
			tmp12 = tmp16;
		}
		HX_STACK_LINE(384)
		tmp6 = (tmp12 == null());
	}
	else{
		HX_STACK_LINE(384)
		tmp6 = true;
	}
	HX_STACK_LINE(384)
	if ((tmp6)){
		HX_STACK_LINE(385)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot compute slack for DistanceJoint if either body is null.","\xed","\x15","\x31","\xa3"));
	}
	HX_STACK_LINE(388)
	::zpp_nape::constraint::ZPP_DistanceJoint tmp7 = this->zpp_inner_zn;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(388)
	bool tmp8 = tmp7->slack;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(388)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(DistanceJoint_obj,isSlack,return )

::nape::geom::MatMN DistanceJoint_obj::impulse( ){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","impulse",0x32a9ae71,"nape.constraint.DistanceJoint.impulse","nape/constraint/DistanceJoint.hx",428,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_LINE(429)
	::nape::geom::MatMN ret = ::nape::geom::MatMN_obj::__new((int)1,(int)1);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(430)
	{
		HX_STACK_LINE(430)
		bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(430)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(430)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(430)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(430)
		if ((tmp2)){
			HX_STACK_LINE(430)
			tmp3 = false;
		}
		else{
			HX_STACK_LINE(430)
			tmp3 = true;
		}
		HX_STACK_LINE(430)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(430)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(430)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(430)
		if ((tmp5)){
			HX_STACK_LINE(430)
			int tmp7 = ret->zpp_inner->m;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(430)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(430)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(430)
			tmp6 = ((int)0 >= tmp9);
		}
		else{
			HX_STACK_LINE(430)
			tmp6 = true;
		}
		HX_STACK_LINE(430)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(430)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(430)
		if ((tmp7)){
			HX_STACK_LINE(430)
			int tmp9 = ret->zpp_inner->n;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(430)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(430)
			tmp8 = ((int)0 >= tmp10);
		}
		else{
			HX_STACK_LINE(430)
			tmp8 = true;
		}
		HX_STACK_LINE(430)
		if ((tmp8)){
			HX_STACK_LINE(430)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: MatMN indices out of range","\xcc","\x72","\x58","\xe6"));
		}
		HX_STACK_LINE(430)
		Array< Float > tmp9 = ret->zpp_inner->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(430)
		int tmp10 = ret->zpp_inner->n;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(430)
		int tmp11 = ((int)0 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(430)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(430)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp13 = this->zpp_inner_zn;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(430)
		Float tmp14 = tmp13->jAcc;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(430)
		tmp9[tmp12] = tmp14;
	}
	HX_STACK_LINE(431)
	::nape::geom::MatMN tmp = ret;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(431)
	return tmp;
}


::nape::geom::Vec3 DistanceJoint_obj::bodyImpulse( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.constraint.DistanceJoint","bodyImpulse",0x8dd661ef,"nape.constraint.DistanceJoint.bodyImpulse","nape/constraint/DistanceJoint.hx",436,0x7df58474)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(438)
	bool tmp = (body == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(438)
	if ((tmp)){
		HX_STACK_LINE(439)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot evaluate impulse on null body","\x9d","\xb5","\xdc","\x16"));
	}
	HX_STACK_LINE(441)
	::nape::phys::Body tmp1 = body;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(441)
	::zpp_nape::constraint::ZPP_DistanceJoint tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(441)
	::zpp_nape::phys::ZPP_Body tmp3 = tmp2->b1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(441)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(441)
	::nape::phys::Body tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(441)
	if ((tmp4)){
		HX_STACK_LINE(441)
		tmp5 = null();
	}
	else{
		HX_STACK_LINE(441)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp6 = this->zpp_inner_zn;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(441)
		tmp5 = tmp6->b1->outer;
	}
	HX_STACK_LINE(441)
	bool tmp6 = (tmp1 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(441)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(441)
	if ((tmp6)){
		HX_STACK_LINE(441)
		::nape::phys::Body tmp8 = body;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(441)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(441)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(441)
		::zpp_nape::phys::ZPP_Body tmp11 = tmp10->b2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(441)
		bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(441)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(441)
		::nape::phys::Body tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(441)
		bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(441)
		if ((tmp15)){
			HX_STACK_LINE(441)
			tmp14 = null();
		}
		else{
			HX_STACK_LINE(441)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp16 = this->zpp_inner_zn;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(441)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(441)
			::nape::phys::Body tmp18 = tmp17->b2->outer;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(441)
			tmp14 = tmp18;
		}
		HX_STACK_LINE(441)
		tmp7 = (tmp8 != tmp14);
	}
	else{
		HX_STACK_LINE(441)
		tmp7 = false;
	}
	HX_STACK_LINE(441)
	if ((tmp7)){
		HX_STACK_LINE(442)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Body is not linked to this constraint","\x2e","\xe5","\x48","\xbf"));
	}
	HX_STACK_LINE(445)
	::zpp_nape::constraint::ZPP_Constraint tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(445)
	bool tmp9 = tmp8->active;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(445)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(445)
	if ((tmp10)){
		HX_STACK_LINE(446)
		::nape::geom::Vec3 tmp11 = ::nape::geom::Vec3_obj::get(null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(446)
		return tmp11;
	}
	else{
		HX_STACK_LINE(449)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(449)
		::zpp_nape::phys::ZPP_Body tmp12 = body->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(449)
		::nape::geom::Vec3 tmp13 = tmp11->bodyImpulse(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(449)
		return tmp13;
	}
	HX_STACK_LINE(445)
	return null();
}


Void DistanceJoint_obj::visitBodies( Dynamic lambda){
{
		HX_STACK_FRAME("nape.constraint.DistanceJoint","visitBodies",0x1292df67,"nape.constraint.DistanceJoint.visitBodies","nape/constraint/DistanceJoint.hx",455,0x7df58474)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lambda,"lambda")
		HX_STACK_LINE(456)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(456)
		::zpp_nape::phys::ZPP_Body tmp1 = tmp->b1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(456)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(456)
		::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(456)
		if ((tmp2)){
			HX_STACK_LINE(456)
			tmp3 = null();
		}
		else{
			HX_STACK_LINE(456)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(456)
			tmp3 = tmp4->b1->outer;
		}
		HX_STACK_LINE(456)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(456)
		if ((tmp4)){
			HX_STACK_LINE(457)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(457)
			::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(457)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(457)
			::nape::phys::Body tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(457)
			if ((tmp7)){
				HX_STACK_LINE(457)
				tmp8 = null();
			}
			else{
				HX_STACK_LINE(457)
				::zpp_nape::constraint::ZPP_DistanceJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(457)
				tmp8 = tmp9->b1->outer;
			}
			HX_STACK_LINE(457)
			lambda(tmp8).Cast< Void >();
		}
		HX_STACK_LINE(459)
		::zpp_nape::constraint::ZPP_DistanceJoint tmp5 = this->zpp_inner_zn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(459)
		::zpp_nape::phys::ZPP_Body tmp6 = tmp5->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(459)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(459)
		::nape::phys::Body tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(459)
		if ((tmp7)){
			HX_STACK_LINE(459)
			tmp8 = null();
		}
		else{
			HX_STACK_LINE(459)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp9 = this->zpp_inner_zn;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(459)
			tmp8 = tmp9->b2->outer;
		}
		HX_STACK_LINE(459)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(459)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(459)
		if ((tmp9)){
			HX_STACK_LINE(459)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(459)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(459)
			::zpp_nape::phys::ZPP_Body tmp13 = tmp12->b2;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(459)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(459)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(459)
			::nape::phys::Body tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(459)
			bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(459)
			if ((tmp17)){
				HX_STACK_LINE(459)
				tmp16 = null();
			}
			else{
				HX_STACK_LINE(459)
				::zpp_nape::constraint::ZPP_DistanceJoint tmp18 = this->zpp_inner_zn;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(459)
				::zpp_nape::constraint::ZPP_DistanceJoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(459)
				::nape::phys::Body tmp20 = tmp19->b2->outer;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(459)
				tmp16 = tmp20;
			}
			HX_STACK_LINE(459)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp18 = this->zpp_inner_zn;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(459)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(459)
			::zpp_nape::phys::ZPP_Body tmp20 = tmp19->b1;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(459)
			bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(459)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(459)
			::nape::phys::Body tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(459)
			bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(459)
			if ((tmp24)){
				HX_STACK_LINE(459)
				tmp23 = null();
			}
			else{
				HX_STACK_LINE(459)
				::zpp_nape::constraint::ZPP_DistanceJoint tmp25 = this->zpp_inner_zn;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(459)
				::zpp_nape::constraint::ZPP_DistanceJoint tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(459)
				::nape::phys::Body tmp27 = tmp26->b1->outer;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(459)
				tmp23 = tmp27;
			}
			HX_STACK_LINE(459)
			tmp10 = (tmp16 != tmp23);
		}
		else{
			HX_STACK_LINE(459)
			tmp10 = false;
		}
		HX_STACK_LINE(459)
		if ((tmp10)){
			HX_STACK_LINE(460)
			::zpp_nape::constraint::ZPP_DistanceJoint tmp11 = this->zpp_inner_zn;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(460)
			::zpp_nape::phys::ZPP_Body tmp12 = tmp11->b2;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(460)
			bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(460)
			::nape::phys::Body tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(460)
			if ((tmp13)){
				HX_STACK_LINE(460)
				tmp14 = null();
			}
			else{
				HX_STACK_LINE(460)
				::zpp_nape::constraint::ZPP_DistanceJoint tmp15 = this->zpp_inner_zn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(460)
				tmp14 = tmp15->b2->outer;
			}
			HX_STACK_LINE(460)
			lambda(tmp14).Cast< Void >();
		}
	}
return null();
}



DistanceJoint_obj::DistanceJoint_obj()
{
}

void DistanceJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DistanceJoint);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DistanceJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::constraint::Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DistanceJoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"body1") ) { if (inCallProp == hx::paccAlways) return get_body1(); }
		if (HX_FIELD_EQ(inName,"body2") ) { if (inCallProp == hx::paccAlways) return get_body2(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"anchor1") ) { if (inCallProp == hx::paccAlways) return get_anchor1(); }
		if (HX_FIELD_EQ(inName,"anchor2") ) { if (inCallProp == hx::paccAlways) return get_anchor2(); }
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
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DistanceJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::constraint::ZPP_DistanceJoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DistanceJoint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void DistanceJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"));
	outFields->push(HX_HCSTRING("body1","\x4f","\xd3","\xef","\xb6"));
	outFields->push(HX_HCSTRING("body2","\x50","\xd3","\xef","\xb6"));
	outFields->push(HX_HCSTRING("anchor1","\x1c","\xec","\xa1","\x02"));
	outFields->push(HX_HCSTRING("anchor2","\x1d","\xec","\xa1","\x02"));
	outFields->push(HX_HCSTRING("jointMin","\x68","\xfa","\x25","\x55"));
	outFields->push(HX_HCSTRING("jointMax","\x7a","\xf3","\x25","\x55"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::constraint::ZPP_DistanceJoint*/ ,(int)offsetof(DistanceJoint_obj,zpp_inner_zn),HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0")},
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
	HX_HCSTRING("get_jointMin","\x71","\xae","\x3f","\x0a"),
	HX_HCSTRING("set_jointMin","\xe5","\xd1","\x38","\x1f"),
	HX_HCSTRING("get_jointMax","\x83","\xa7","\x3f","\x0a"),
	HX_HCSTRING("set_jointMax","\xf7","\xca","\x38","\x1f"),
	HX_HCSTRING("isSlack","\x06","\x56","\x47","\x1b"),
	HX_HCSTRING("impulse","\xb5","\x50","\xbd","\x6d"),
	HX_HCSTRING("bodyImpulse","\x33","\x76","\xa2","\x5f"),
	HX_HCSTRING("visitBodies","\xab","\xf3","\x5e","\xe4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DistanceJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DistanceJoint_obj::__mClass,"__mClass");
};

#endif

hx::Class DistanceJoint_obj::__mClass;

void DistanceJoint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.constraint.DistanceJoint","\x2a","\xa2","\xce","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &DistanceJoint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DistanceJoint_obj >;
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
