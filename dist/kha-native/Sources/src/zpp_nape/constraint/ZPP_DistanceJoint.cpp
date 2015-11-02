#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_DistanceJoint
#include <nape/constraint/DistanceJoint.h>
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
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_DistanceJoint
#include <zpp_nape/constraint/ZPP_DistanceJoint.h>
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
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace constraint{

Void ZPP_DistanceJoint_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","new",0x66d03272,"zpp_nape.constraint.ZPP_DistanceJoint.new","zpp_nape/constraint/DistanceJoint.hx",174,0x52959e99)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(432)
	this->stepped = false;
	HX_STACK_LINE(431)
	this->bias = ((Float)0.0);
	HX_STACK_LINE(430)
	this->gamma = ((Float)0.0);
	HX_STACK_LINE(429)
	this->jMax = ((Float)0.0);
	HX_STACK_LINE(428)
	this->jAcc = ((Float)0.0);
	HX_STACK_LINE(427)
	this->kMass = ((Float)0.0);
	HX_STACK_LINE(426)
	this->wrap_a2 = null();
	HX_STACK_LINE(373)
	this->a2rely = ((Float)0.0);
	HX_STACK_LINE(372)
	this->a2relx = ((Float)0.0);
	HX_STACK_LINE(371)
	this->a2localy = ((Float)0.0);
	HX_STACK_LINE(370)
	this->a2localx = ((Float)0.0);
	HX_STACK_LINE(369)
	this->b2 = null();
	HX_STACK_LINE(368)
	this->wrap_a1 = null();
	HX_STACK_LINE(315)
	this->a1rely = ((Float)0.0);
	HX_STACK_LINE(314)
	this->a1relx = ((Float)0.0);
	HX_STACK_LINE(313)
	this->a1localy = ((Float)0.0);
	HX_STACK_LINE(312)
	this->a1localx = ((Float)0.0);
	HX_STACK_LINE(311)
	this->b1 = null();
	HX_STACK_LINE(287)
	this->cx2 = ((Float)0.0);
	HX_STACK_LINE(286)
	this->cx1 = ((Float)0.0);
	HX_STACK_LINE(285)
	this->ny = ((Float)0.0);
	HX_STACK_LINE(284)
	this->nx = ((Float)0.0);
	HX_STACK_LINE(179)
	this->equal = false;
	HX_STACK_LINE(178)
	this->slack = false;
	HX_STACK_LINE(177)
	this->jointMax = ((Float)0.0);
	HX_STACK_LINE(176)
	this->jointMin = ((Float)0.0);
	HX_STACK_LINE(175)
	this->outer_zn = null();
	HX_STACK_LINE(481)
	super::__construct();
	HX_STACK_LINE(482)
	{
		HX_STACK_LINE(483)
		{
			HX_STACK_LINE(484)
			this->a1localx = (int)0;
			HX_STACK_LINE(485)
			this->a1localy = (int)0;
			HX_STACK_LINE(494)
			{
			}
		}
		HX_STACK_LINE(503)
		{
			HX_STACK_LINE(504)
			this->a1relx = (int)0;
			HX_STACK_LINE(505)
			this->a1rely = (int)0;
			HX_STACK_LINE(514)
			{
			}
		}
	}
	HX_STACK_LINE(524)
	{
		HX_STACK_LINE(525)
		{
			HX_STACK_LINE(526)
			this->a2localx = (int)0;
			HX_STACK_LINE(527)
			this->a2localy = (int)0;
			HX_STACK_LINE(536)
			{
			}
		}
		HX_STACK_LINE(545)
		{
			HX_STACK_LINE(546)
			this->a2relx = (int)0;
			HX_STACK_LINE(547)
			this->a2rely = (int)0;
			HX_STACK_LINE(556)
			{
			}
		}
	}
	HX_STACK_LINE(566)
	this->jAcc = (int)0;
	HX_STACK_LINE(567)
	Float tmp = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(567)
	this->jMax = tmp;
	HX_STACK_LINE(568)
	this->stepped = false;
	HX_STACK_LINE(569)
	Float tmp1 = this->cx2 = (int)0;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(569)
	this->cx1 = tmp1;
}
;
	return null();
}

//ZPP_DistanceJoint_obj::~ZPP_DistanceJoint_obj() { }

Dynamic ZPP_DistanceJoint_obj::__CreateEmpty() { return  new ZPP_DistanceJoint_obj; }
hx::ObjectPtr< ZPP_DistanceJoint_obj > ZPP_DistanceJoint_obj::__new()
{  hx::ObjectPtr< ZPP_DistanceJoint_obj > _result_ = new ZPP_DistanceJoint_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_DistanceJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_DistanceJoint_obj > _result_ = new ZPP_DistanceJoint_obj();
	_result_->__construct();
	return _result_;}

bool ZPP_DistanceJoint_obj::is_slack( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","is_slack",0x624afda9,"zpp_nape.constraint.ZPP_DistanceJoint.is_slack","zpp_nape/constraint/DistanceJoint.hx",182,0x52959e99)
	HX_STACK_THIS(this)
	HX_STACK_LINE(183)
	bool slack;		HX_STACK_VAR(slack,"slack");
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(185)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(185)
		Float tmp1 = tmp->axisy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(185)
		Float tmp2 = this->a1localx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(185)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(185)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(185)
		Float tmp5 = tmp4->axisx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(185)
		Float tmp6 = this->a1localy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(185)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(185)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(185)
		this->a1relx = tmp8;
		HX_STACK_LINE(186)
		Float tmp9 = this->a1localx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(186)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(186)
		Float tmp11 = tmp10->axisx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(186)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(186)
		Float tmp13 = this->a1localy;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(186)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b1;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(186)
		Float tmp15 = tmp14->axisy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(186)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(186)
		Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(186)
		this->a1rely = tmp17;
	}
	HX_STACK_LINE(188)
	{
		HX_STACK_LINE(189)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(189)
		Float tmp1 = tmp->axisy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		Float tmp2 = this->a2localx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(189)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(189)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(189)
		Float tmp5 = tmp4->axisx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(189)
		Float tmp6 = this->a2localy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(189)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(189)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(189)
		this->a2relx = tmp8;
		HX_STACK_LINE(190)
		Float tmp9 = this->a2localx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(190)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b2;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(190)
		Float tmp11 = tmp10->axisx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(190)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(190)
		Float tmp13 = this->a2localy;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(190)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(190)
		Float tmp15 = tmp14->axisy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(190)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(190)
		Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(190)
		this->a2rely = tmp17;
	}
	HX_STACK_LINE(192)
	Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
	HX_STACK_LINE(193)
	Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
	HX_STACK_LINE(194)
	{
		HX_STACK_LINE(195)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(195)
		Float tmp1 = tmp->posx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(195)
		Float tmp2 = this->a2relx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(195)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(195)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(195)
		Float tmp5 = tmp4->posx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(195)
		Float tmp6 = this->a1relx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(195)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(195)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(195)
		nx = tmp8;
		HX_STACK_LINE(196)
		::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(196)
		Float tmp10 = tmp9->posy;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(196)
		Float tmp11 = this->a2rely;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(196)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(196)
		::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(196)
		Float tmp14 = tmp13->posy;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(196)
		Float tmp15 = this->a1rely;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(196)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(196)
		Float tmp17 = (tmp12 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(196)
		ny = tmp17;
		HX_STACK_LINE(197)
		Float tmp18 = (nx * nx);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(197)
		Float tmp19 = (ny * ny);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(197)
		Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(197)
		Float C = tmp20;		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(198)
		Float tmp21 = C;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(198)
		Float tmp22 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(198)
		bool tmp23 = (tmp21 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(198)
		if ((tmp23)){
			HX_STACK_LINE(199)
			{
				HX_STACK_LINE(200)
				nx = (int)0;
				HX_STACK_LINE(201)
				ny = (int)0;
				HX_STACK_LINE(210)
				{
				}
			}
			HX_STACK_LINE(219)
			C = (int)0;
			HX_STACK_LINE(220)
			slack = true;
		}
		else{
			HX_STACK_LINE(223)
			Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				Float tmp25 = C;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(223)
				tmp24 = ::Math_obj::sqrt(tmp25);
			}
			HX_STACK_LINE(223)
			C = tmp24;
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(225)
				Float tmp25 = (Float(((Float)1.0)) / Float(C));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(225)
				Float t = tmp25;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(234)
				hx::MultEq(nx,t);
				HX_STACK_LINE(235)
				hx::MultEq(ny,t);
			}
			HX_STACK_LINE(237)
			bool tmp25 = this->equal;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(237)
			if ((tmp25)){
				HX_STACK_LINE(238)
				Float tmp26 = this->jointMax;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(238)
				hx::SubEq(C,tmp26);
				HX_STACK_LINE(239)
				slack = false;
			}
			else{
				HX_STACK_LINE(242)
				Float tmp26 = C;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(242)
				Float tmp27 = this->jointMin;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(242)
				bool tmp28 = (tmp26 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(242)
				if ((tmp28)){
					HX_STACK_LINE(243)
					Float tmp29 = this->jointMin;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(243)
					Float tmp30 = C;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(243)
					Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(243)
					C = tmp31;
					HX_STACK_LINE(244)
					{
						HX_STACK_LINE(245)
						Float tmp32 = nx;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(245)
						Float tmp33 = -(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(245)
						nx = tmp33;
						HX_STACK_LINE(246)
						Float tmp34 = ny;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(246)
						Float tmp35 = -(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(246)
						ny = tmp35;
					}
					HX_STACK_LINE(248)
					slack = false;
				}
				else{
					HX_STACK_LINE(250)
					Float tmp29 = C;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(250)
					Float tmp30 = this->jointMax;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(250)
					bool tmp31 = (tmp29 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(250)
					if ((tmp31)){
						HX_STACK_LINE(251)
						Float tmp32 = this->jointMax;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(251)
						hx::SubEq(C,tmp32);
						HX_STACK_LINE(252)
						slack = false;
					}
					else{
						HX_STACK_LINE(255)
						{
							HX_STACK_LINE(256)
							nx = (int)0;
							HX_STACK_LINE(257)
							ny = (int)0;
							HX_STACK_LINE(266)
							{
							}
						}
						HX_STACK_LINE(275)
						C = (int)0;
						HX_STACK_LINE(276)
						slack = true;
					}
				}
			}
		}
		HX_STACK_LINE(280)
		C;
	}
	HX_STACK_LINE(282)
	bool tmp = slack;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_DistanceJoint_obj,is_slack,return )

::nape::geom::Vec3 ZPP_DistanceJoint_obj::bodyImpulse( ::zpp_nape::phys::ZPP_Body b){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","bodyImpulse",0xe14a3a45,"zpp_nape.constraint.ZPP_DistanceJoint.bodyImpulse","zpp_nape/constraint/DistanceJoint.hx",288,0x52959e99)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(289)
	bool tmp = this->stepped;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(289)
	if ((tmp)){
		HX_STACK_LINE(290)
		::zpp_nape::phys::ZPP_Body tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(290)
		::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(290)
		bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(290)
		if ((tmp3)){
			HX_STACK_LINE(290)
			Float tmp4 = this->jAcc;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(290)
			Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(290)
			Float tmp6 = this->nx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(290)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(290)
			Float tmp8 = this->jAcc;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(290)
			Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(290)
			Float tmp10 = this->ny;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(290)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(290)
			Float tmp12 = this->cx1;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(290)
			Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(290)
			Float tmp14 = this->jAcc;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(290)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(290)
			::nape::geom::Vec3 tmp16 = ::nape::geom::Vec3_obj::get(tmp7,tmp11,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(290)
			return tmp16;
		}
		else{
			HX_STACK_LINE(291)
			Float tmp4 = this->jAcc;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(291)
			Float tmp5 = this->nx;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(291)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(291)
			Float tmp7 = this->jAcc;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(291)
			Float tmp8 = this->ny;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(291)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(291)
			Float tmp10 = this->cx2;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(291)
			Float tmp11 = this->jAcc;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(291)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(291)
			::nape::geom::Vec3 tmp13 = ::nape::geom::Vec3_obj::get(tmp6,tmp9,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(291)
			return tmp13;
		}
	}
	else{
		HX_STACK_LINE(293)
		::nape::geom::Vec3 tmp1 = ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(293)
		return tmp1;
	}
	HX_STACK_LINE(289)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_DistanceJoint_obj,bodyImpulse,return )

Void ZPP_DistanceJoint_obj::activeBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","activeBodies",0xac1c3594,"zpp_nape.constraint.ZPP_DistanceJoint.activeBodies","zpp_nape/constraint/DistanceJoint.hx",295,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(296)
		{
			HX_STACK_LINE(297)
			::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(297)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(297)
			if ((tmp1)){
				HX_STACK_LINE(297)
				::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(297)
				tmp2->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(299)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(299)
		::zpp_nape::phys::ZPP_Body tmp1 = this->b1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(299)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(299)
		if ((tmp2)){
			HX_STACK_LINE(300)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(300)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(300)
			if ((tmp4)){
				HX_STACK_LINE(300)
				::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(300)
				tmp5->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_DistanceJoint_obj::inactiveBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","inactiveBodies",0xe7361c79,"zpp_nape.constraint.ZPP_DistanceJoint.inactiveBodies","zpp_nape/constraint/DistanceJoint.hx",303,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(304)
		{
			HX_STACK_LINE(305)
			::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(305)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(305)
			if ((tmp1)){
				HX_STACK_LINE(305)
				::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(305)
				tmp2->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(307)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(307)
		::zpp_nape::phys::ZPP_Body tmp1 = this->b1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(307)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(307)
		if ((tmp2)){
			HX_STACK_LINE(308)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(308)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(308)
			if ((tmp4)){
				HX_STACK_LINE(308)
				::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(308)
				tmp5->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_DistanceJoint_obj::validate_a1( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","validate_a1",0x4c74600b,"zpp_nape.constraint.ZPP_DistanceJoint.validate_a1","zpp_nape/constraint/DistanceJoint.hx",317,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(318)
		Float tmp = this->a1localx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(318)
		::nape::geom::Vec2 tmp1 = this->wrap_a1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(318)
		tmp1->zpp_inner->x = tmp;
		HX_STACK_LINE(319)
		Float tmp2 = this->a1localy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(319)
		::nape::geom::Vec2 tmp3 = this->wrap_a1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(319)
		tmp3->zpp_inner->y = tmp2;
		HX_STACK_LINE(328)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_DistanceJoint_obj,validate_a1,(void))

Void ZPP_DistanceJoint_obj::invalidate_a1( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","invalidate_a1",0xb52f9cc6,"zpp_nape.constraint.ZPP_DistanceJoint.invalidate_a1","zpp_nape/constraint/DistanceJoint.hx",338,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(339)
		::String tmp = HX_HCSTRING("Constraint::a1","\x6d","\x3e","\xe8","\x0d");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(339)
		this->immutable_midstep(tmp);
		HX_STACK_LINE(340)
		{
			HX_STACK_LINE(341)
			this->a1localx = x->x;
			HX_STACK_LINE(342)
			this->a1localy = x->y;
			HX_STACK_LINE(351)
			{
			}
		}
		HX_STACK_LINE(360)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_DistanceJoint_obj,invalidate_a1,(void))

Void ZPP_DistanceJoint_obj::setup_a1( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","setup_a1",0xe7060520,"zpp_nape.constraint.ZPP_DistanceJoint.setup_a1","zpp_nape/constraint/DistanceJoint.hx",362,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(363)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(363)
		{
			HX_STACK_LINE(363)
			Float tmp1 = this->a1localx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(363)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(363)
			Float tmp2 = this->a1localy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(363)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(363)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(363)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(363)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(363)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(363)
			if ((tmp4)){
				HX_STACK_LINE(363)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(363)
				tmp5 = true;
			}
			HX_STACK_LINE(363)
			if ((tmp5)){
				HX_STACK_LINE(363)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(363)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(363)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(363)
				if ((tmp7)){
					HX_STACK_LINE(363)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(363)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(363)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(363)
					ret = tmp8;
					HX_STACK_LINE(363)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(363)
					ret->zpp_pool = null();
					HX_STACK_LINE(363)
					ret->zpp_disp = false;
					HX_STACK_LINE(363)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(363)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(363)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(363)
					if ((tmp11)){
						HX_STACK_LINE(363)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(363)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(363)
			if ((tmp6)){
				HX_STACK_LINE(363)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(363)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(363)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(363)
						if ((tmp9)){
							HX_STACK_LINE(363)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(363)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(363)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(363)
							ret1 = tmp10;
							HX_STACK_LINE(363)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(363)
							ret1->next = null();
						}
						HX_STACK_LINE(363)
						ret1->weak = false;
					}
					HX_STACK_LINE(363)
					ret1->_immutable = immutable;
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						ret1->x = x;
						HX_STACK_LINE(363)
						ret1->y = y;
						HX_STACK_LINE(363)
						{
						}
					}
					HX_STACK_LINE(363)
					tmp7 = ret1;
				}
				HX_STACK_LINE(363)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(363)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(363)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(363)
					if ((tmp7)){
						HX_STACK_LINE(363)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(363)
						tmp8 = false;
					}
					HX_STACK_LINE(363)
					if ((tmp8)){
						HX_STACK_LINE(363)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(363)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(363)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(363)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(363)
					if ((tmp7)){
						HX_STACK_LINE(363)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(363)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(363)
					if ((tmp8)){
						HX_STACK_LINE(363)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(363)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(363)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(363)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(363)
				if ((tmp8)){
					HX_STACK_LINE(363)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(363)
					tmp9 = true;
				}
				HX_STACK_LINE(363)
				if ((tmp9)){
					HX_STACK_LINE(363)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(363)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(363)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(363)
						if ((tmp11)){
							HX_STACK_LINE(363)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(363)
							tmp12 = false;
						}
						HX_STACK_LINE(363)
						if ((tmp12)){
							HX_STACK_LINE(363)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(363)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(363)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(363)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(363)
						if ((tmp11)){
							HX_STACK_LINE(363)
							_this->_validate();
						}
					}
					HX_STACK_LINE(363)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(363)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(363)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(363)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(363)
				if ((tmp12)){
					HX_STACK_LINE(363)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						{
							HX_STACK_LINE(363)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(363)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(363)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(363)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(363)
							if ((tmp18)){
								HX_STACK_LINE(363)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(363)
								tmp17 = false;
							}
							HX_STACK_LINE(363)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(363)
							if ((tmp19)){
								HX_STACK_LINE(363)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(363)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(363)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(363)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(363)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(363)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(363)
						{
							HX_STACK_LINE(363)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(363)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(363)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(363)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(363)
							if ((tmp17)){
								HX_STACK_LINE(363)
								_this->_validate();
							}
						}
						HX_STACK_LINE(363)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(363)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(363)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(363)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(363)
					tmp13 = false;
				}
				HX_STACK_LINE(363)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(363)
				if ((tmp14)){
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(363)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(363)
						{
						}
					}
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(363)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(363)
						if ((tmp15)){
							HX_STACK_LINE(363)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(363)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(363)
				ret;
			}
			HX_STACK_LINE(363)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(363)
			tmp = ret;
		}
		HX_STACK_LINE(363)
		this->wrap_a1 = tmp;
		HX_STACK_LINE(364)
		::nape::geom::Vec2 tmp1 = this->wrap_a1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(364)
		tmp1->zpp_inner->_inuse = true;
		HX_STACK_LINE(365)
		Dynamic tmp2 = this->validate_a1_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(365)
		::nape::geom::Vec2 tmp3 = this->wrap_a1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(365)
		tmp3->zpp_inner->_validate = tmp2;
		HX_STACK_LINE(366)
		Dynamic tmp4 = this->invalidate_a1_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(366)
		::nape::geom::Vec2 tmp5 = this->wrap_a1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(366)
		tmp5->zpp_inner->_invalidate = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_DistanceJoint_obj,setup_a1,(void))

Void ZPP_DistanceJoint_obj::validate_a2( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","validate_a2",0x4c74600c,"zpp_nape.constraint.ZPP_DistanceJoint.validate_a2","zpp_nape/constraint/DistanceJoint.hx",375,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(376)
		Float tmp = this->a2localx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(376)
		::nape::geom::Vec2 tmp1 = this->wrap_a2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(376)
		tmp1->zpp_inner->x = tmp;
		HX_STACK_LINE(377)
		Float tmp2 = this->a2localy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(377)
		::nape::geom::Vec2 tmp3 = this->wrap_a2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(377)
		tmp3->zpp_inner->y = tmp2;
		HX_STACK_LINE(386)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_DistanceJoint_obj,validate_a2,(void))

Void ZPP_DistanceJoint_obj::invalidate_a2( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","invalidate_a2",0xb52f9cc7,"zpp_nape.constraint.ZPP_DistanceJoint.invalidate_a2","zpp_nape/constraint/DistanceJoint.hx",396,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(397)
		::String tmp = HX_HCSTRING("Constraint::a2","\x6e","\x3e","\xe8","\x0d");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(397)
		this->immutable_midstep(tmp);
		HX_STACK_LINE(398)
		{
			HX_STACK_LINE(399)
			this->a2localx = x->x;
			HX_STACK_LINE(400)
			this->a2localy = x->y;
			HX_STACK_LINE(409)
			{
			}
		}
		HX_STACK_LINE(418)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_DistanceJoint_obj,invalidate_a2,(void))

Void ZPP_DistanceJoint_obj::setup_a2( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","setup_a2",0xe7060521,"zpp_nape.constraint.ZPP_DistanceJoint.setup_a2","zpp_nape/constraint/DistanceJoint.hx",420,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(421)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(421)
		{
			HX_STACK_LINE(421)
			Float tmp1 = this->a2localx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(421)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(421)
			Float tmp2 = this->a2localy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(421)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(421)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(421)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(421)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(421)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(421)
			if ((tmp4)){
				HX_STACK_LINE(421)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(421)
				tmp5 = true;
			}
			HX_STACK_LINE(421)
			if ((tmp5)){
				HX_STACK_LINE(421)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(421)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(421)
			{
				HX_STACK_LINE(421)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(421)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(421)
				if ((tmp7)){
					HX_STACK_LINE(421)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(421)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(421)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(421)
					ret = tmp8;
					HX_STACK_LINE(421)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(421)
					ret->zpp_pool = null();
					HX_STACK_LINE(421)
					ret->zpp_disp = false;
					HX_STACK_LINE(421)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(421)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(421)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(421)
					if ((tmp11)){
						HX_STACK_LINE(421)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(421)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(421)
			if ((tmp6)){
				HX_STACK_LINE(421)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(421)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(421)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(421)
					{
						HX_STACK_LINE(421)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(421)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(421)
						if ((tmp9)){
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(421)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(421)
							ret1 = tmp10;
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(421)
							ret1->next = null();
						}
						HX_STACK_LINE(421)
						ret1->weak = false;
					}
					HX_STACK_LINE(421)
					ret1->_immutable = immutable;
					HX_STACK_LINE(421)
					{
						HX_STACK_LINE(421)
						ret1->x = x;
						HX_STACK_LINE(421)
						ret1->y = y;
						HX_STACK_LINE(421)
						{
						}
					}
					HX_STACK_LINE(421)
					tmp7 = ret1;
				}
				HX_STACK_LINE(421)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(421)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(421)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(421)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(421)
					if ((tmp7)){
						HX_STACK_LINE(421)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(421)
						tmp8 = false;
					}
					HX_STACK_LINE(421)
					if ((tmp8)){
						HX_STACK_LINE(421)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(421)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(421)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(421)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(421)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(421)
					if ((tmp7)){
						HX_STACK_LINE(421)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(421)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(421)
					if ((tmp8)){
						HX_STACK_LINE(421)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(421)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(421)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(421)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(421)
				if ((tmp8)){
					HX_STACK_LINE(421)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(421)
					tmp9 = true;
				}
				HX_STACK_LINE(421)
				if ((tmp9)){
					HX_STACK_LINE(421)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(421)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(421)
					{
						HX_STACK_LINE(421)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(421)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(421)
						if ((tmp11)){
							HX_STACK_LINE(421)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(421)
							tmp12 = false;
						}
						HX_STACK_LINE(421)
						if ((tmp12)){
							HX_STACK_LINE(421)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(421)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(421)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(421)
					{
						HX_STACK_LINE(421)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(421)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(421)
						if ((tmp11)){
							HX_STACK_LINE(421)
							_this->_validate();
						}
					}
					HX_STACK_LINE(421)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(421)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(421)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(421)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(421)
				if ((tmp12)){
					HX_STACK_LINE(421)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(421)
					{
						HX_STACK_LINE(421)
						{
							HX_STACK_LINE(421)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(421)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(421)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(421)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(421)
							if ((tmp18)){
								HX_STACK_LINE(421)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(421)
								tmp17 = false;
							}
							HX_STACK_LINE(421)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(421)
							if ((tmp19)){
								HX_STACK_LINE(421)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(421)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(421)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(421)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(421)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(421)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(421)
						{
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(421)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(421)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(421)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(421)
							if ((tmp17)){
								HX_STACK_LINE(421)
								_this->_validate();
							}
						}
						HX_STACK_LINE(421)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(421)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(421)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(421)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(421)
					tmp13 = false;
				}
				HX_STACK_LINE(421)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(421)
				if ((tmp14)){
					HX_STACK_LINE(421)
					{
						HX_STACK_LINE(421)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(421)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(421)
						{
						}
					}
					HX_STACK_LINE(421)
					{
						HX_STACK_LINE(421)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(421)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(421)
						if ((tmp15)){
							HX_STACK_LINE(421)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(421)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(421)
				ret;
			}
			HX_STACK_LINE(421)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(421)
			tmp = ret;
		}
		HX_STACK_LINE(421)
		this->wrap_a2 = tmp;
		HX_STACK_LINE(422)
		::nape::geom::Vec2 tmp1 = this->wrap_a2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(422)
		tmp1->zpp_inner->_inuse = true;
		HX_STACK_LINE(423)
		Dynamic tmp2 = this->validate_a2_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(423)
		::nape::geom::Vec2 tmp3 = this->wrap_a2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(423)
		tmp3->zpp_inner->_validate = tmp2;
		HX_STACK_LINE(424)
		Dynamic tmp4 = this->invalidate_a2_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(424)
		::nape::geom::Vec2 tmp5 = this->wrap_a2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(424)
		tmp5->zpp_inner->_invalidate = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_DistanceJoint_obj,setup_a2,(void))

::nape::constraint::Constraint ZPP_DistanceJoint_obj::copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","copy",0x881e2963,"zpp_nape.constraint.ZPP_DistanceJoint.copy","zpp_nape/constraint/DistanceJoint.hx",433,0x52959e99)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dict,"dict")
	HX_STACK_ARG(todo,"todo")
	HX_STACK_LINE(434)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(434)
	{
		HX_STACK_LINE(434)
		::nape::constraint::DistanceJoint tmp1 = this->outer_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(434)
		::nape::constraint::DistanceJoint _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(434)
		::nape::geom::Vec2 tmp2 = _this->zpp_inner_zn->wrap_a1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(434)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(434)
		if ((tmp3)){
			HX_STACK_LINE(434)
			_this->zpp_inner_zn->setup_a1();
		}
		HX_STACK_LINE(434)
		tmp = _this->zpp_inner_zn->wrap_a1;
	}
	HX_STACK_LINE(434)
	::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(434)
	{
		HX_STACK_LINE(434)
		::nape::constraint::DistanceJoint tmp2 = this->outer_zn;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(434)
		::nape::constraint::DistanceJoint _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(434)
		::nape::geom::Vec2 tmp3 = _this->zpp_inner_zn->wrap_a2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(434)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(434)
		if ((tmp4)){
			HX_STACK_LINE(434)
			_this->zpp_inner_zn->setup_a2();
		}
		HX_STACK_LINE(434)
		tmp1 = _this->zpp_inner_zn->wrap_a2;
	}
	HX_STACK_LINE(434)
	Float tmp2 = this->jointMin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(434)
	Float tmp3 = this->jointMax;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(434)
	::nape::constraint::DistanceJoint tmp4 = ::nape::constraint::DistanceJoint_obj::__new(null(),null(),tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(434)
	::nape::constraint::DistanceJoint ret = tmp4;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(435)
	::nape::constraint::DistanceJoint tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(435)
	this->copyto(tmp5);
	HX_STACK_LINE(436)
	{
		HX_STACK_LINE(437)
		bool tmp6 = (dict != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(437)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(437)
		if ((tmp6)){
			HX_STACK_LINE(437)
			::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(437)
			::zpp_nape::phys::ZPP_Body tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(437)
			tmp7 = (tmp9 != null());
		}
		else{
			HX_STACK_LINE(437)
			tmp7 = false;
		}
		HX_STACK_LINE(437)
		if ((tmp7)){
			HX_STACK_LINE(446)
			::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(447)
			{
				HX_STACK_LINE(447)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(447)
				while((true)){
					HX_STACK_LINE(447)
					bool tmp8 = (_g < dict->length);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(447)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(447)
					if ((tmp9)){
						HX_STACK_LINE(447)
						break;
					}
					HX_STACK_LINE(447)
					::zpp_nape::constraint::ZPP_CopyHelper tmp10 = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(447)
					::zpp_nape::constraint::ZPP_CopyHelper idc = tmp10;		HX_STACK_VAR(idc,"idc");
					HX_STACK_LINE(447)
					++(_g);
					HX_STACK_LINE(448)
					int tmp11 = idc->id;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(448)
					::zpp_nape::phys::ZPP_Body tmp12 = this->b1;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(448)
					int tmp13 = tmp12->id;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(448)
					bool tmp14 = (tmp11 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(448)
					if ((tmp14)){
						HX_STACK_LINE(449)
						b = idc->bc;
						HX_STACK_LINE(450)
						break;
					}
				}
			}
			HX_STACK_LINE(453)
			bool tmp8 = (b != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(453)
			if ((tmp8)){
				HX_STACK_LINE(453)
				ret->zpp_inner_zn->b1 = b->zpp_inner;
			}
			else{
				HX_STACK_LINE(454)
				::zpp_nape::phys::ZPP_Body tmp9 = this->b1;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(454)
				int tmp10 = tmp9->id;		HX_STACK_VAR(tmp10,"tmp10");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::nape::constraint::DistanceJoint,ret)
				int __ArgCount() const { return 1; }
				Void run(::nape::phys::Body b1){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","zpp_nape/constraint/DistanceJoint.hx",454,0x52959e99)
					HX_STACK_ARG(b1,"b1")
					{
						HX_STACK_LINE(454)
						ret->zpp_inner_zn->b1 = b1->zpp_inner;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(454)
				::zpp_nape::constraint::ZPP_CopyHelper tmp11 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(tmp10, Dynamic(new _Function_4_1(ret)));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(454)
				todo->push(tmp11);
			}
		}
	}
	HX_STACK_LINE(457)
	{
		HX_STACK_LINE(458)
		bool tmp6 = (dict != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(458)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(458)
		if ((tmp6)){
			HX_STACK_LINE(458)
			::zpp_nape::phys::ZPP_Body tmp8 = this->b2;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(458)
			::zpp_nape::phys::ZPP_Body tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(458)
			tmp7 = (tmp9 != null());
		}
		else{
			HX_STACK_LINE(458)
			tmp7 = false;
		}
		HX_STACK_LINE(458)
		if ((tmp7)){
			HX_STACK_LINE(467)
			::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(468)
			{
				HX_STACK_LINE(468)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(468)
				while((true)){
					HX_STACK_LINE(468)
					bool tmp8 = (_g < dict->length);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(468)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(468)
					if ((tmp9)){
						HX_STACK_LINE(468)
						break;
					}
					HX_STACK_LINE(468)
					::zpp_nape::constraint::ZPP_CopyHelper tmp10 = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(468)
					::zpp_nape::constraint::ZPP_CopyHelper idc = tmp10;		HX_STACK_VAR(idc,"idc");
					HX_STACK_LINE(468)
					++(_g);
					HX_STACK_LINE(469)
					int tmp11 = idc->id;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(469)
					::zpp_nape::phys::ZPP_Body tmp12 = this->b2;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(469)
					int tmp13 = tmp12->id;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(469)
					bool tmp14 = (tmp11 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(469)
					if ((tmp14)){
						HX_STACK_LINE(470)
						b = idc->bc;
						HX_STACK_LINE(471)
						break;
					}
				}
			}
			HX_STACK_LINE(474)
			bool tmp8 = (b != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(474)
			if ((tmp8)){
				HX_STACK_LINE(474)
				ret->zpp_inner_zn->b2 = b->zpp_inner;
			}
			else{
				HX_STACK_LINE(475)
				::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(475)
				int tmp10 = tmp9->id;		HX_STACK_VAR(tmp10,"tmp10");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::nape::constraint::DistanceJoint,ret)
				int __ArgCount() const { return 1; }
				Void run(::nape::phys::Body b1){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","zpp_nape/constraint/DistanceJoint.hx",475,0x52959e99)
					HX_STACK_ARG(b1,"b1")
					{
						HX_STACK_LINE(475)
						ret->zpp_inner_zn->b2 = b1->zpp_inner;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(475)
				::zpp_nape::constraint::ZPP_CopyHelper tmp11 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(tmp10, Dynamic(new _Function_4_1(ret)));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(475)
				todo->push(tmp11);
			}
		}
	}
	HX_STACK_LINE(478)
	::nape::constraint::DistanceJoint tmp6 = ret;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(478)
	return tmp6;
}


Void ZPP_DistanceJoint_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","validate",0xc8b0ad44,"zpp_nape.constraint.ZPP_DistanceJoint.validate","zpp_nape/constraint/DistanceJoint.hx",571,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(572)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(572)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(572)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(572)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(572)
		if ((tmp2)){
			HX_STACK_LINE(572)
			::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(572)
			::zpp_nape::phys::ZPP_Body tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(572)
			tmp3 = (tmp5 == null());
		}
		else{
			HX_STACK_LINE(572)
			tmp3 = true;
		}
		HX_STACK_LINE(572)
		if ((tmp3)){
			HX_STACK_LINE(572)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: DistanceJoint cannot be simulated null bodies","\x40","\xc3","\x94","\x5f"));
		}
		HX_STACK_LINE(573)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(573)
		::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(573)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(573)
		if ((tmp6)){
			HX_STACK_LINE(573)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: DistanceJoint cannot be simulated with body1 == body2","\xa2","\x9e","\x0d","\xa5"));
		}
		HX_STACK_LINE(574)
		::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(574)
		::zpp_nape::space::ZPP_Space tmp8 = tmp7->space;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(574)
		::zpp_nape::space::ZPP_Space tmp9 = this->space;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(574)
		bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(574)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(574)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(574)
		if ((tmp11)){
			HX_STACK_LINE(574)
			::zpp_nape::phys::ZPP_Body tmp13 = this->b2;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(574)
			::zpp_nape::phys::ZPP_Body tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(574)
			::zpp_nape::space::ZPP_Space tmp15 = tmp14->space;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(574)
			::zpp_nape::space::ZPP_Space tmp16 = this->space;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(574)
			::zpp_nape::space::ZPP_Space tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(574)
			tmp12 = (tmp15 != tmp17);
		}
		else{
			HX_STACK_LINE(574)
			tmp12 = true;
		}
		HX_STACK_LINE(574)
		if ((tmp12)){
			HX_STACK_LINE(574)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraints must have each body within the same space to which the constraint has been assigned","\xe8","\x8c","\x93","\x57"));
		}
		HX_STACK_LINE(575)
		Float tmp13 = this->jointMin;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(575)
		Float tmp14 = this->jointMax;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(575)
		bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(575)
		if ((tmp15)){
			HX_STACK_LINE(575)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: DistanceJoint must have jointMin <= jointMax","\x7b","\x40","\x7d","\x69"));
		}
		HX_STACK_LINE(576)
		::zpp_nape::phys::ZPP_Body tmp16 = this->b1;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(576)
		int tmp17 = tmp16->type;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(576)
		int tmp18 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(576)
		bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(576)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(576)
		bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(576)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(576)
		if ((tmp21)){
			HX_STACK_LINE(576)
			::zpp_nape::phys::ZPP_Body tmp23 = this->b2;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(576)
			::zpp_nape::phys::ZPP_Body tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(576)
			int tmp25 = tmp24->type;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(576)
			int tmp26 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(576)
			int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(576)
			bool tmp28 = (tmp25 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(576)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(576)
			bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(576)
			tmp22 = !(tmp30);
		}
		else{
			HX_STACK_LINE(576)
			tmp22 = false;
		}
		HX_STACK_LINE(576)
		if ((tmp22)){
			HX_STACK_LINE(576)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraints cannot have both bodies non-dynamic","\xcb","\xb3","\x6c","\xeb"));
		}
	}
return null();
}


Void ZPP_DistanceJoint_obj::wake_connected( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","wake_connected",0x984e62dc,"zpp_nape.constraint.ZPP_DistanceJoint.wake_connected","zpp_nape/constraint/DistanceJoint.hx",578,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(579)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(579)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(579)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(579)
		if ((tmp1)){
			HX_STACK_LINE(579)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(579)
			::zpp_nape::phys::ZPP_Body tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(579)
			int tmp5 = tmp4->type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(579)
			int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(579)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(579)
			tmp2 = (tmp5 == tmp7);
		}
		else{
			HX_STACK_LINE(579)
			tmp2 = false;
		}
		HX_STACK_LINE(579)
		if ((tmp2)){
			HX_STACK_LINE(579)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(579)
			tmp3->wake();
		}
		HX_STACK_LINE(580)
		::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(580)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(580)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(580)
		if ((tmp4)){
			HX_STACK_LINE(580)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(580)
			::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(580)
			int tmp8 = tmp7->type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(580)
			int tmp9 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(580)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(580)
			tmp5 = (tmp8 == tmp10);
		}
		else{
			HX_STACK_LINE(580)
			tmp5 = false;
		}
		HX_STACK_LINE(580)
		if ((tmp5)){
			HX_STACK_LINE(580)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(580)
			tmp6->wake();
		}
	}
return null();
}


Void ZPP_DistanceJoint_obj::forest( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","forest",0x9f5b420b,"zpp_nape.constraint.ZPP_DistanceJoint.forest","zpp_nape/constraint/DistanceJoint.hx",582,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(583)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(583)
		int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(583)
		int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(583)
		bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(583)
		if ((tmp3)){
			HX_STACK_LINE(584)
			::zpp_nape::space::ZPP_Component tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(584)
			{
				HX_STACK_LINE(585)
				::zpp_nape::phys::ZPP_Body tmp5 = this->b1;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(585)
				::zpp_nape::space::ZPP_Component tmp6 = tmp5->component;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(585)
				::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(585)
				::zpp_nape::space::ZPP_Component tmp8 = tmp7->component->parent;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(585)
				bool tmp9 = (tmp6 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(585)
				if ((tmp9)){
					HX_STACK_LINE(585)
					::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(585)
					tmp4 = tmp10->component;
				}
				else{
					HX_STACK_LINE(587)
					::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(587)
					::zpp_nape::space::ZPP_Component obj = tmp10->component;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(588)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(589)
					while((true)){
						HX_STACK_LINE(589)
						bool tmp11 = (obj != obj->parent);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(589)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(589)
						if ((tmp12)){
							HX_STACK_LINE(589)
							break;
						}
						HX_STACK_LINE(590)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(591)
						obj->parent = stack;
						HX_STACK_LINE(592)
						stack = obj;
						HX_STACK_LINE(593)
						obj = nxt;
					}
					HX_STACK_LINE(595)
					while((true)){
						HX_STACK_LINE(595)
						bool tmp11 = (stack != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(595)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(595)
						if ((tmp12)){
							HX_STACK_LINE(595)
							break;
						}
						HX_STACK_LINE(596)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(597)
						stack->parent = obj;
						HX_STACK_LINE(598)
						stack = nxt;
					}
					HX_STACK_LINE(600)
					tmp4 = obj;
				}
			}
			HX_STACK_LINE(584)
			::zpp_nape::space::ZPP_Component xr = tmp4;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(603)
			::zpp_nape::space::ZPP_Component tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(603)
			{
				HX_STACK_LINE(604)
				::zpp_nape::space::ZPP_Component tmp6 = this->component;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(604)
				::zpp_nape::space::ZPP_Component tmp7 = this->component;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(604)
				::zpp_nape::space::ZPP_Component tmp8 = tmp7->parent;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(604)
				bool tmp9 = (tmp6 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(604)
				if ((tmp9)){
					HX_STACK_LINE(604)
					tmp5 = this->component;
				}
				else{
					HX_STACK_LINE(606)
					::zpp_nape::space::ZPP_Component tmp10 = this->component;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(606)
					::zpp_nape::space::ZPP_Component obj = tmp10;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(607)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(608)
					while((true)){
						HX_STACK_LINE(608)
						bool tmp11 = (obj != obj->parent);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(608)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(608)
						if ((tmp12)){
							HX_STACK_LINE(608)
							break;
						}
						HX_STACK_LINE(609)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(610)
						obj->parent = stack;
						HX_STACK_LINE(611)
						stack = obj;
						HX_STACK_LINE(612)
						obj = nxt;
					}
					HX_STACK_LINE(614)
					while((true)){
						HX_STACK_LINE(614)
						bool tmp11 = (stack != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(614)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(614)
						if ((tmp12)){
							HX_STACK_LINE(614)
							break;
						}
						HX_STACK_LINE(615)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(616)
						stack->parent = obj;
						HX_STACK_LINE(617)
						stack = nxt;
					}
					HX_STACK_LINE(619)
					tmp5 = obj;
				}
			}
			HX_STACK_LINE(603)
			::zpp_nape::space::ZPP_Component yr = tmp5;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(622)
			bool tmp6 = (xr != yr);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(622)
			if ((tmp6)){
				HX_STACK_LINE(623)
				bool tmp7 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(623)
				if ((tmp7)){
					HX_STACK_LINE(623)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(624)
					bool tmp8 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(624)
					if ((tmp8)){
						HX_STACK_LINE(624)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(626)
						yr->parent = xr;
						HX_STACK_LINE(627)
						(xr->rank)++;
					}
				}
			}
		}
		HX_STACK_LINE(631)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(631)
		int tmp5 = tmp4->type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(631)
		int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(631)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(631)
		if ((tmp7)){
			HX_STACK_LINE(632)
			::zpp_nape::space::ZPP_Component tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(632)
			{
				HX_STACK_LINE(633)
				::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(633)
				::zpp_nape::space::ZPP_Component tmp10 = tmp9->component;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(633)
				::zpp_nape::phys::ZPP_Body tmp11 = this->b2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(633)
				::zpp_nape::space::ZPP_Component tmp12 = tmp11->component->parent;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(633)
				bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(633)
				if ((tmp13)){
					HX_STACK_LINE(633)
					::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(633)
					tmp8 = tmp14->component;
				}
				else{
					HX_STACK_LINE(635)
					::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(635)
					::zpp_nape::space::ZPP_Component obj = tmp14->component;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(636)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(637)
					while((true)){
						HX_STACK_LINE(637)
						bool tmp15 = (obj != obj->parent);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(637)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(637)
						if ((tmp16)){
							HX_STACK_LINE(637)
							break;
						}
						HX_STACK_LINE(638)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(639)
						obj->parent = stack;
						HX_STACK_LINE(640)
						stack = obj;
						HX_STACK_LINE(641)
						obj = nxt;
					}
					HX_STACK_LINE(643)
					while((true)){
						HX_STACK_LINE(643)
						bool tmp15 = (stack != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(643)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(643)
						if ((tmp16)){
							HX_STACK_LINE(643)
							break;
						}
						HX_STACK_LINE(644)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(645)
						stack->parent = obj;
						HX_STACK_LINE(646)
						stack = nxt;
					}
					HX_STACK_LINE(648)
					tmp8 = obj;
				}
			}
			HX_STACK_LINE(632)
			::zpp_nape::space::ZPP_Component xr = tmp8;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(651)
			::zpp_nape::space::ZPP_Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(651)
			{
				HX_STACK_LINE(652)
				::zpp_nape::space::ZPP_Component tmp10 = this->component;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(652)
				::zpp_nape::space::ZPP_Component tmp11 = this->component;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(652)
				::zpp_nape::space::ZPP_Component tmp12 = tmp11->parent;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(652)
				bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(652)
				if ((tmp13)){
					HX_STACK_LINE(652)
					tmp9 = this->component;
				}
				else{
					HX_STACK_LINE(654)
					::zpp_nape::space::ZPP_Component tmp14 = this->component;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(654)
					::zpp_nape::space::ZPP_Component obj = tmp14;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(655)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(656)
					while((true)){
						HX_STACK_LINE(656)
						bool tmp15 = (obj != obj->parent);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(656)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(656)
						if ((tmp16)){
							HX_STACK_LINE(656)
							break;
						}
						HX_STACK_LINE(657)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(658)
						obj->parent = stack;
						HX_STACK_LINE(659)
						stack = obj;
						HX_STACK_LINE(660)
						obj = nxt;
					}
					HX_STACK_LINE(662)
					while((true)){
						HX_STACK_LINE(662)
						bool tmp15 = (stack != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(662)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(662)
						if ((tmp16)){
							HX_STACK_LINE(662)
							break;
						}
						HX_STACK_LINE(663)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(664)
						stack->parent = obj;
						HX_STACK_LINE(665)
						stack = nxt;
					}
					HX_STACK_LINE(667)
					tmp9 = obj;
				}
			}
			HX_STACK_LINE(651)
			::zpp_nape::space::ZPP_Component yr = tmp9;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(670)
			bool tmp10 = (xr != yr);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(670)
			if ((tmp10)){
				HX_STACK_LINE(671)
				bool tmp11 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(671)
				if ((tmp11)){
					HX_STACK_LINE(671)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(672)
					bool tmp12 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(672)
					if ((tmp12)){
						HX_STACK_LINE(672)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(674)
						yr->parent = xr;
						HX_STACK_LINE(675)
						(xr->rank)++;
					}
				}
			}
		}
	}
return null();
}


bool ZPP_DistanceJoint_obj::pair_exists( int id,int di){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","pair_exists",0xeb002eb3,"zpp_nape.constraint.ZPP_DistanceJoint.pair_exists","zpp_nape/constraint/DistanceJoint.hx",680,0x52959e99)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(681)
	::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(681)
	int tmp1 = tmp->id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(681)
	int tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(681)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(681)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(681)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(681)
	if ((tmp4)){
		HX_STACK_LINE(681)
		::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(681)
		::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(681)
		::zpp_nape::phys::ZPP_Body tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(681)
		int tmp9 = tmp8->id;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(681)
		int tmp10 = di;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(681)
		tmp5 = (tmp9 == tmp10);
	}
	else{
		HX_STACK_LINE(681)
		tmp5 = false;
	}
	HX_STACK_LINE(681)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(681)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(681)
	if ((tmp6)){
		HX_STACK_LINE(681)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(681)
		::zpp_nape::phys::ZPP_Body tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(681)
		int tmp10 = tmp9->id;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(681)
		int tmp11 = di;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(681)
		bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(681)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(681)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(681)
		if ((tmp14)){
			HX_STACK_LINE(681)
			::zpp_nape::phys::ZPP_Body tmp15 = this->b2;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(681)
			::zpp_nape::phys::ZPP_Body tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(681)
			::zpp_nape::phys::ZPP_Body tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(681)
			int tmp18 = tmp17->id;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(681)
			int tmp19 = id;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(681)
			tmp7 = (tmp18 == tmp19);
		}
		else{
			HX_STACK_LINE(681)
			tmp7 = false;
		}
	}
	else{
		HX_STACK_LINE(681)
		tmp7 = true;
	}
	HX_STACK_LINE(681)
	return tmp7;
}


Void ZPP_DistanceJoint_obj::clearcache( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","clearcache",0x79314dc3,"zpp_nape.constraint.ZPP_DistanceJoint.clearcache","zpp_nape/constraint/DistanceJoint.hx",683,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(684)
		this->jAcc = (int)0;
		HX_STACK_LINE(685)
		this->pre_dt = ((Float)-1.0);
	}
return null();
}


bool ZPP_DistanceJoint_obj::preStep( Float dt){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","preStep",0x1b4c9421,"zpp_nape.constraint.ZPP_DistanceJoint.preStep","zpp_nape/constraint/DistanceJoint.hx",687,0x52959e99)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dt,"dt")
	HX_STACK_LINE(688)
	Float tmp = this->pre_dt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(688)
	bool tmp1 = (tmp == ((Float)-1.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(688)
	if ((tmp1)){
		HX_STACK_LINE(688)
		this->pre_dt = dt;
	}
	HX_STACK_LINE(689)
	Float tmp2 = dt;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(689)
	Float tmp3 = this->pre_dt;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(689)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(689)
	Float dtratio = tmp4;		HX_STACK_VAR(dtratio,"dtratio");
	HX_STACK_LINE(690)
	this->pre_dt = dt;
	HX_STACK_LINE(691)
	this->stepped = true;
	HX_STACK_LINE(692)
	Float tmp5 = this->jointMin;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(692)
	Float tmp6 = this->jointMax;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(692)
	bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(692)
	this->equal = tmp7;
	HX_STACK_LINE(693)
	{
		HX_STACK_LINE(694)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(694)
		Float tmp9 = tmp8->axisy;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(694)
		Float tmp10 = this->a1localx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(694)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(694)
		::zpp_nape::phys::ZPP_Body tmp12 = this->b1;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(694)
		Float tmp13 = tmp12->axisx;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(694)
		Float tmp14 = this->a1localy;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(694)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(694)
		Float tmp16 = (tmp11 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(694)
		this->a1relx = tmp16;
		HX_STACK_LINE(695)
		Float tmp17 = this->a1localx;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(695)
		::zpp_nape::phys::ZPP_Body tmp18 = this->b1;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(695)
		Float tmp19 = tmp18->axisx;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(695)
		Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(695)
		Float tmp21 = this->a1localy;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(695)
		::zpp_nape::phys::ZPP_Body tmp22 = this->b1;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(695)
		Float tmp23 = tmp22->axisy;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(695)
		Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(695)
		Float tmp25 = (tmp20 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(695)
		this->a1rely = tmp25;
	}
	HX_STACK_LINE(697)
	{
		HX_STACK_LINE(698)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(698)
		Float tmp9 = tmp8->axisy;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(698)
		Float tmp10 = this->a2localx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(698)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(698)
		::zpp_nape::phys::ZPP_Body tmp12 = this->b2;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(698)
		Float tmp13 = tmp12->axisx;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(698)
		Float tmp14 = this->a2localy;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(698)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(698)
		Float tmp16 = (tmp11 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(698)
		this->a2relx = tmp16;
		HX_STACK_LINE(699)
		Float tmp17 = this->a2localx;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(699)
		::zpp_nape::phys::ZPP_Body tmp18 = this->b2;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(699)
		Float tmp19 = tmp18->axisx;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(699)
		Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(699)
		Float tmp21 = this->a2localy;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(699)
		::zpp_nape::phys::ZPP_Body tmp22 = this->b2;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(699)
		Float tmp23 = tmp22->axisy;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(699)
		Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(699)
		Float tmp25 = (tmp20 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(699)
		this->a2rely = tmp25;
	}
	HX_STACK_LINE(701)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(701)
	{
		HX_STACK_LINE(702)
		::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(702)
		Float tmp10 = tmp9->posx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(702)
		Float tmp11 = this->a2relx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(702)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(702)
		::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(702)
		Float tmp14 = tmp13->posx;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(702)
		Float tmp15 = this->a1relx;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(702)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(702)
		Float tmp17 = (tmp12 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(702)
		this->nx = tmp17;
		HX_STACK_LINE(703)
		::zpp_nape::phys::ZPP_Body tmp18 = this->b2;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(703)
		Float tmp19 = tmp18->posy;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(703)
		Float tmp20 = this->a2rely;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(703)
		Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(703)
		::zpp_nape::phys::ZPP_Body tmp22 = this->b1;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(703)
		Float tmp23 = tmp22->posy;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(703)
		Float tmp24 = this->a1rely;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(703)
		Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(703)
		Float tmp26 = (tmp21 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(703)
		this->ny = tmp26;
		HX_STACK_LINE(704)
		Float tmp27 = this->nx;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(704)
		Float tmp28 = this->nx;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(704)
		Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(704)
		Float tmp30 = this->ny;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(704)
		Float tmp31 = this->ny;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(704)
		Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(704)
		Float tmp33 = (tmp29 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(704)
		Float C = tmp33;		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(705)
		Float tmp34 = C;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(705)
		Float tmp35 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(705)
		bool tmp36 = (tmp34 < tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(705)
		if ((tmp36)){
			HX_STACK_LINE(706)
			{
				HX_STACK_LINE(707)
				this->nx = (int)0;
				HX_STACK_LINE(708)
				this->ny = (int)0;
				HX_STACK_LINE(717)
				{
				}
			}
			HX_STACK_LINE(726)
			C = (int)0;
			HX_STACK_LINE(727)
			this->slack = true;
		}
		else{
			HX_STACK_LINE(730)
			Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(730)
			{
				HX_STACK_LINE(730)
				Float tmp38 = C;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(730)
				tmp37 = ::Math_obj::sqrt(tmp38);
			}
			HX_STACK_LINE(730)
			C = tmp37;
			HX_STACK_LINE(731)
			{
				HX_STACK_LINE(732)
				Float tmp38 = (Float(((Float)1.0)) / Float(C));		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(732)
				Float t = tmp38;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(741)
				hx::MultEq(this->nx,t);
				HX_STACK_LINE(742)
				hx::MultEq(this->ny,t);
			}
			HX_STACK_LINE(744)
			bool tmp38 = this->equal;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(744)
			if ((tmp38)){
				HX_STACK_LINE(745)
				Float tmp39 = this->jointMax;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(745)
				hx::SubEq(C,tmp39);
				HX_STACK_LINE(746)
				this->slack = false;
			}
			else{
				HX_STACK_LINE(749)
				Float tmp39 = C;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(749)
				Float tmp40 = this->jointMin;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(749)
				bool tmp41 = (tmp39 < tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(749)
				if ((tmp41)){
					HX_STACK_LINE(750)
					Float tmp42 = this->jointMin;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(750)
					Float tmp43 = C;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(750)
					Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(750)
					C = tmp44;
					HX_STACK_LINE(751)
					{
						HX_STACK_LINE(752)
						Float tmp45 = this->nx;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(752)
						Float tmp46 = -(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(752)
						this->nx = tmp46;
						HX_STACK_LINE(753)
						Float tmp47 = this->ny;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(753)
						Float tmp48 = -(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(753)
						this->ny = tmp48;
					}
					HX_STACK_LINE(755)
					this->slack = false;
				}
				else{
					HX_STACK_LINE(757)
					Float tmp42 = C;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(757)
					Float tmp43 = this->jointMax;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(757)
					bool tmp44 = (tmp42 > tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(757)
					if ((tmp44)){
						HX_STACK_LINE(758)
						Float tmp45 = this->jointMax;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(758)
						hx::SubEq(C,tmp45);
						HX_STACK_LINE(759)
						this->slack = false;
					}
					else{
						HX_STACK_LINE(762)
						{
							HX_STACK_LINE(763)
							this->nx = (int)0;
							HX_STACK_LINE(764)
							this->ny = (int)0;
							HX_STACK_LINE(773)
							{
							}
						}
						HX_STACK_LINE(782)
						C = (int)0;
						HX_STACK_LINE(783)
						this->slack = true;
					}
				}
			}
		}
		HX_STACK_LINE(787)
		tmp8 = C;
	}
	HX_STACK_LINE(701)
	Float C = tmp8;		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(789)
	bool tmp9 = this->slack;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(789)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(789)
	if ((tmp10)){
		HX_STACK_LINE(790)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(790)
		{
			HX_STACK_LINE(791)
			Float tmp12 = this->ny;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(791)
			Float tmp13 = this->a1relx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(791)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(791)
			Float tmp15 = this->nx;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(791)
			Float tmp16 = this->a1rely;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(791)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(791)
			Float tmp18 = (tmp14 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(791)
			this->cx1 = tmp18;
			HX_STACK_LINE(792)
			Float tmp19 = this->ny;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(792)
			Float tmp20 = this->a2relx;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(792)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(792)
			Float tmp22 = this->nx;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(792)
			Float tmp23 = this->a2rely;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(792)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(792)
			Float tmp25 = (tmp21 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(792)
			this->cx2 = tmp25;
			HX_STACK_LINE(793)
			::zpp_nape::phys::ZPP_Body tmp26 = this->b1;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(793)
			Float tmp27 = tmp26->smass;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(793)
			::zpp_nape::phys::ZPP_Body tmp28 = this->b2;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(793)
			Float tmp29 = tmp28->smass;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(793)
			Float tmp30 = (tmp27 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(793)
			Float tmp31 = this->cx1;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(793)
			Float tmp32 = this->cx1;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(793)
			Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(793)
			::zpp_nape::phys::ZPP_Body tmp34 = this->b1;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(793)
			Float tmp35 = tmp34->sinertia;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(793)
			Float tmp36 = (tmp33 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(793)
			Float tmp37 = (tmp30 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(793)
			Float tmp38 = this->cx2;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(793)
			Float tmp39 = this->cx2;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(793)
			Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(793)
			::zpp_nape::phys::ZPP_Body tmp41 = this->b2;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(793)
			Float tmp42 = tmp41->sinertia;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(793)
			Float tmp43 = (tmp40 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(793)
			tmp11 = (tmp37 + tmp43);
		}
		HX_STACK_LINE(790)
		this->kMass = tmp11;
		HX_STACK_LINE(795)
		Float tmp12 = this->kMass;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(795)
		bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(795)
		if ((tmp13)){
			HX_STACK_LINE(795)
			Float tmp14 = this->kMass;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(795)
			Float tmp15 = (Float((int)1) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(795)
			this->kMass = tmp15;
		}
		else{
			HX_STACK_LINE(796)
			this->jAcc = (int)0;
		}
		HX_STACK_LINE(797)
		bool tmp14 = this->stiff;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(797)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(797)
		if ((tmp15)){
			HX_STACK_LINE(798)
			bool tmp16 = this->breakUnderError;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(798)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(798)
			if ((tmp16)){
				HX_STACK_LINE(798)
				Float tmp18 = (C * C);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(798)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(798)
				Float tmp20 = this->maxError;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(798)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(798)
				Float tmp22 = this->maxError;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(798)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(798)
				Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(798)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(798)
				tmp17 = (tmp19 > tmp25);
			}
			else{
				HX_STACK_LINE(798)
				tmp17 = false;
			}
			HX_STACK_LINE(798)
			if ((tmp17)){
				HX_STACK_LINE(798)
				return true;
			}
			HX_STACK_LINE(799)
			Float biasCoef;		HX_STACK_VAR(biasCoef,"biasCoef");
			HX_STACK_LINE(800)
			Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(800)
			{
				HX_STACK_LINE(801)
				Float tmp19 = ::Math_obj::PI;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(801)
				Float tmp20 = ((int)2 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(801)
				Float tmp21 = this->frequency;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(801)
				Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(801)
				Float omega = tmp22;		HX_STACK_VAR(omega,"omega");
				HX_STACK_LINE(802)
				Float tmp23 = (dt * omega);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(802)
				Float tmp24 = this->damping;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(802)
				Float tmp25 = ((int)2 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(802)
				Float tmp26 = (omega * dt);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(802)
				Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(802)
				Float tmp28 = (tmp23 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(802)
				Float tmp29 = (Float((int)1) / Float(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(802)
				this->gamma = tmp29;
				HX_STACK_LINE(803)
				Float tmp30 = this->gamma;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(803)
				Float tmp31 = ((int)1 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(803)
				Float tmp32 = (Float((int)1) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(803)
				Float ig = tmp32;		HX_STACK_VAR(ig,"ig");
				HX_STACK_LINE(804)
				Float tmp33 = (dt * omega);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(804)
				Float tmp34 = omega;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(804)
				Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(804)
				Float tmp36 = this->gamma;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(804)
				Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(804)
				biasCoef = tmp37;
				HX_STACK_LINE(805)
				hx::MultEq(this->gamma,ig);
				HX_STACK_LINE(806)
				tmp18 = ig;
			}
			HX_STACK_LINE(800)
			hx::MultEq(this->kMass,tmp18);
			HX_STACK_LINE(808)
			Float tmp19 = C;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(808)
			Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(808)
			Float tmp21 = biasCoef;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(808)
			Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(808)
			this->bias = tmp22;
			HX_STACK_LINE(809)
			{
				HX_STACK_LINE(810)
				Float tmp23 = this->bias;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(810)
				Float tmp24 = this->maxError;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(810)
				Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(810)
				bool tmp26 = (tmp23 < tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(810)
				if ((tmp26)){
					HX_STACK_LINE(810)
					Float tmp27 = this->maxError;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(810)
					Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(810)
					this->bias = tmp28;
				}
				else{
					HX_STACK_LINE(811)
					Float tmp27 = this->bias;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(811)
					Float tmp28 = this->maxError;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(811)
					bool tmp29 = (tmp27 > tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(811)
					if ((tmp29)){
						HX_STACK_LINE(811)
						Float tmp30 = this->maxError;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(811)
						this->bias = tmp30;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(815)
			this->bias = (int)0;
			HX_STACK_LINE(816)
			this->gamma = (int)0;
		}
		HX_STACK_LINE(818)
		hx::MultEq(this->jAcc,dtratio);
		HX_STACK_LINE(819)
		Float tmp16 = this->maxForce;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(819)
		Float tmp17 = dt;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(819)
		Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(819)
		this->jMax = tmp18;
	}
	HX_STACK_LINE(821)
	return false;
}


Void ZPP_DistanceJoint_obj::warmStart( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","warmStart",0x7a77636f,"zpp_nape.constraint.ZPP_DistanceJoint.warmStart","zpp_nape/constraint/DistanceJoint.hx",823,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_LINE(824)
		bool tmp = this->slack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(824)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(824)
		if ((tmp1)){
			HX_STACK_LINE(856)
			{
				HX_STACK_LINE(857)
				::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(857)
				Float tmp3 = tmp2->imass;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(857)
				Float tmp4 = this->jAcc;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(857)
				Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(857)
				Float t = tmp5;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(866)
				Float tmp6 = this->nx;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(866)
				Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(866)
				Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(866)
				::zpp_nape::phys::ZPP_Body tmp9 = this->b1;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(866)
				hx::SubEq(tmp9->velx,tmp8);
				HX_STACK_LINE(867)
				Float tmp10 = this->ny;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(867)
				Float tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(867)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(867)
				::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(867)
				hx::SubEq(tmp13->vely,tmp12);
			}
			HX_STACK_LINE(869)
			{
				HX_STACK_LINE(870)
				::zpp_nape::phys::ZPP_Body tmp2 = this->b2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(870)
				Float tmp3 = tmp2->imass;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(870)
				Float tmp4 = this->jAcc;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(870)
				Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(870)
				Float t = tmp5;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(879)
				Float tmp6 = this->nx;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(879)
				Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(879)
				Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(879)
				::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(879)
				hx::AddEq(tmp9->velx,tmp8);
				HX_STACK_LINE(880)
				Float tmp10 = this->ny;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(880)
				Float tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(880)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(880)
				::zpp_nape::phys::ZPP_Body tmp13 = this->b2;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(880)
				hx::AddEq(tmp13->vely,tmp12);
			}
			HX_STACK_LINE(882)
			Float tmp2 = this->cx1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(882)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(882)
			Float tmp4 = tmp3->iinertia;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(882)
			Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(882)
			Float tmp6 = this->jAcc;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(882)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(882)
			::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(882)
			hx::SubEq(tmp8->angvel,tmp7);
			HX_STACK_LINE(883)
			Float tmp9 = this->cx2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(883)
			::zpp_nape::phys::ZPP_Body tmp10 = this->b2;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(883)
			Float tmp11 = tmp10->iinertia;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(883)
			Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(883)
			Float tmp13 = this->jAcc;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(883)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(883)
			::zpp_nape::phys::ZPP_Body tmp15 = this->b2;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(883)
			hx::AddEq(tmp15->angvel,tmp14);
		}
	}
return null();
}


bool ZPP_DistanceJoint_obj::applyImpulseVel( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","applyImpulseVel",0xe760fcc8,"zpp_nape.constraint.ZPP_DistanceJoint.applyImpulseVel","zpp_nape/constraint/DistanceJoint.hx",887,0x52959e99)
	HX_STACK_THIS(this)
	HX_STACK_LINE(888)
	bool tmp = this->slack;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(888)
	if ((tmp)){
		HX_STACK_LINE(888)
		return false;
	}
	HX_STACK_LINE(889)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(889)
	{
		HX_STACK_LINE(890)
		Float tmp2 = this->nx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(890)
		::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(890)
		Float tmp4 = tmp3->velx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(890)
		::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(890)
		Float tmp6 = tmp5->kinvelx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(890)
		Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(890)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(890)
		Float tmp9 = tmp8->velx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(890)
		Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(890)
		::zpp_nape::phys::ZPP_Body tmp11 = this->b1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(890)
		Float tmp12 = tmp11->kinvelx;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(890)
		Float tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(890)
		Float tmp14 = (tmp2 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(890)
		Float tmp15 = this->ny;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(890)
		::zpp_nape::phys::ZPP_Body tmp16 = this->b2;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(890)
		Float tmp17 = tmp16->vely;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(890)
		::zpp_nape::phys::ZPP_Body tmp18 = this->b2;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(890)
		Float tmp19 = tmp18->kinvely;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(890)
		Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(890)
		::zpp_nape::phys::ZPP_Body tmp21 = this->b1;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(890)
		Float tmp22 = tmp21->vely;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(890)
		Float tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(890)
		::zpp_nape::phys::ZPP_Body tmp24 = this->b1;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(890)
		Float tmp25 = tmp24->kinvely;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(890)
		Float tmp26 = (tmp23 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(890)
		Float tmp27 = (tmp15 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(890)
		Float tmp28 = (tmp14 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(890)
		::zpp_nape::phys::ZPP_Body tmp29 = this->b2;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(890)
		Float tmp30 = tmp29->angvel;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(890)
		::zpp_nape::phys::ZPP_Body tmp31 = this->b2;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(890)
		Float tmp32 = tmp31->kinangvel;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(890)
		Float tmp33 = (tmp30 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(890)
		Float tmp34 = this->cx2;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(890)
		Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(890)
		Float tmp36 = (tmp28 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(890)
		::zpp_nape::phys::ZPP_Body tmp37 = this->b1;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(890)
		Float tmp38 = tmp37->angvel;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(890)
		::zpp_nape::phys::ZPP_Body tmp39 = this->b1;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(890)
		Float tmp40 = tmp39->kinangvel;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(890)
		Float tmp41 = (tmp38 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(890)
		Float tmp42 = this->cx1;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(890)
		Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(890)
		tmp1 = (tmp36 - tmp43);
	}
	HX_STACK_LINE(889)
	Float E = tmp1;		HX_STACK_VAR(E,"E");
	HX_STACK_LINE(892)
	Float tmp2 = this->kMass;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(892)
	Float tmp3 = this->bias;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(892)
	Float tmp4 = E;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(892)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(892)
	Float tmp6 = (tmp2 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(892)
	Float tmp7 = this->jAcc;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(892)
	Float tmp8 = this->gamma;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(892)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(892)
	Float tmp10 = (tmp6 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(892)
	Float j = tmp10;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(893)
	{
		HX_STACK_LINE(902)
		Float tmp11 = this->jAcc;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(902)
		Float jOld = tmp11;		HX_STACK_VAR(jOld,"jOld");
		HX_STACK_LINE(903)
		hx::AddEq(this->jAcc,j);
		HX_STACK_LINE(904)
		{
			HX_STACK_LINE(905)
			bool tmp12 = this->equal;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(905)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(905)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(905)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(905)
			if ((tmp14)){
				HX_STACK_LINE(905)
				Float tmp16 = this->jAcc;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(905)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(905)
				tmp15 = (tmp17 > (int)0);
			}
			else{
				HX_STACK_LINE(905)
				tmp15 = false;
			}
			HX_STACK_LINE(905)
			if ((tmp15)){
				HX_STACK_LINE(905)
				this->jAcc = (int)0;
			}
			HX_STACK_LINE(906)
			bool tmp16 = this->breakUnderForce;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(906)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(906)
			if ((tmp16)){
				HX_STACK_LINE(906)
				Float tmp18 = this->jAcc;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(906)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(906)
				Float tmp20 = this->jMax;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(906)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(906)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(906)
				Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(906)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(906)
				tmp17 = (tmp19 < tmp24);
			}
			else{
				HX_STACK_LINE(906)
				tmp17 = false;
			}
			HX_STACK_LINE(906)
			if ((tmp17)){
				HX_STACK_LINE(906)
				return true;
			}
			HX_STACK_LINE(907)
			bool tmp18 = this->stiff;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(907)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(907)
			if ((tmp19)){
				HX_STACK_LINE(908)
				Float tmp20 = this->jAcc;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(908)
				Float tmp21 = this->jMax;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(908)
				Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(908)
				bool tmp23 = (tmp20 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(908)
				if ((tmp23)){
					HX_STACK_LINE(908)
					Float tmp24 = this->jMax;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(908)
					Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(908)
					this->jAcc = tmp25;
				}
			}
		}
		HX_STACK_LINE(911)
		Float tmp12 = this->jAcc;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(911)
		Float tmp13 = jOld;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(911)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(911)
		j = tmp14;
	}
	HX_STACK_LINE(944)
	{
		HX_STACK_LINE(945)
		{
			HX_STACK_LINE(946)
			::zpp_nape::phys::ZPP_Body tmp11 = this->b1;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(946)
			Float tmp12 = tmp11->imass;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(946)
			Float tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(946)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(946)
			Float t = tmp14;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(955)
			Float tmp15 = this->nx;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(955)
			Float tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(955)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(955)
			::zpp_nape::phys::ZPP_Body tmp18 = this->b1;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(955)
			hx::SubEq(tmp18->velx,tmp17);
			HX_STACK_LINE(956)
			Float tmp19 = this->ny;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(956)
			Float tmp20 = t;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(956)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(956)
			::zpp_nape::phys::ZPP_Body tmp22 = this->b1;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(956)
			hx::SubEq(tmp22->vely,tmp21);
		}
		HX_STACK_LINE(958)
		{
			HX_STACK_LINE(959)
			::zpp_nape::phys::ZPP_Body tmp11 = this->b2;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(959)
			Float tmp12 = tmp11->imass;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(959)
			Float tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(959)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(959)
			Float t = tmp14;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(968)
			Float tmp15 = this->nx;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(968)
			Float tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(968)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(968)
			::zpp_nape::phys::ZPP_Body tmp18 = this->b2;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(968)
			hx::AddEq(tmp18->velx,tmp17);
			HX_STACK_LINE(969)
			Float tmp19 = this->ny;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(969)
			Float tmp20 = t;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(969)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(969)
			::zpp_nape::phys::ZPP_Body tmp22 = this->b2;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(969)
			hx::AddEq(tmp22->vely,tmp21);
		}
		HX_STACK_LINE(971)
		Float tmp11 = this->cx1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(971)
		::zpp_nape::phys::ZPP_Body tmp12 = this->b1;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(971)
		Float tmp13 = tmp12->iinertia;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(971)
		Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(971)
		Float tmp15 = j;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(971)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(971)
		::zpp_nape::phys::ZPP_Body tmp17 = this->b1;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(971)
		hx::SubEq(tmp17->angvel,tmp16);
		HX_STACK_LINE(972)
		Float tmp18 = this->cx2;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(972)
		::zpp_nape::phys::ZPP_Body tmp19 = this->b2;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(972)
		Float tmp20 = tmp19->iinertia;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(972)
		Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(972)
		Float tmp22 = j;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(972)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(972)
		::zpp_nape::phys::ZPP_Body tmp24 = this->b2;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(972)
		hx::AddEq(tmp24->angvel,tmp23);
	}
	HX_STACK_LINE(975)
	return false;
}


bool ZPP_DistanceJoint_obj::applyImpulsePos( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","applyImpulsePos",0xe75c77ff,"zpp_nape.constraint.ZPP_DistanceJoint.applyImpulsePos","zpp_nape/constraint/DistanceJoint.hx",977,0x52959e99)
	HX_STACK_THIS(this)
	HX_STACK_LINE(978)
	Float E;		HX_STACK_VAR(E,"E");
	HX_STACK_LINE(979)
	Float j;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(980)
	Float r1x = ((Float)0.0);		HX_STACK_VAR(r1x,"r1x");
	HX_STACK_LINE(981)
	Float r1y = ((Float)0.0);		HX_STACK_VAR(r1y,"r1y");
	HX_STACK_LINE(983)
	{
		HX_STACK_LINE(984)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(984)
		Float tmp1 = tmp->axisy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(984)
		Float tmp2 = this->a1localx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(984)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(984)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(984)
		Float tmp5 = tmp4->axisx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(984)
		Float tmp6 = this->a1localy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(984)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(984)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(984)
		r1x = tmp8;
		HX_STACK_LINE(985)
		Float tmp9 = this->a1localx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(985)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(985)
		Float tmp11 = tmp10->axisx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(985)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(985)
		Float tmp13 = this->a1localy;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(985)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b1;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(985)
		Float tmp15 = tmp14->axisy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(985)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(985)
		Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(985)
		r1y = tmp17;
	}
	HX_STACK_LINE(988)
	Float r2x = ((Float)0.0);		HX_STACK_VAR(r2x,"r2x");
	HX_STACK_LINE(989)
	Float r2y = ((Float)0.0);		HX_STACK_VAR(r2y,"r2y");
	HX_STACK_LINE(991)
	{
		HX_STACK_LINE(992)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(992)
		Float tmp1 = tmp->axisy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(992)
		Float tmp2 = this->a2localx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(992)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(992)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(992)
		Float tmp5 = tmp4->axisx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(992)
		Float tmp6 = this->a2localy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(992)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(992)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(992)
		r2x = tmp8;
		HX_STACK_LINE(993)
		Float tmp9 = this->a2localx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(993)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b2;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(993)
		Float tmp11 = tmp10->axisx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(993)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(993)
		Float tmp13 = this->a2localy;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(993)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(993)
		Float tmp15 = tmp14->axisy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(993)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(993)
		Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(993)
		r2y = tmp17;
	}
	HX_STACK_LINE(996)
	bool slack;		HX_STACK_VAR(slack,"slack");
	HX_STACK_LINE(997)
	Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
	HX_STACK_LINE(998)
	Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
	HX_STACK_LINE(999)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(999)
	{
		HX_STACK_LINE(1000)
		::zpp_nape::phys::ZPP_Body tmp1 = this->b2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1000)
		Float tmp2 = tmp1->posx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1000)
		Float tmp3 = r2x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1000)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1000)
		::zpp_nape::phys::ZPP_Body tmp5 = this->b1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1000)
		Float tmp6 = tmp5->posx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1000)
		Float tmp7 = r1x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1000)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1000)
		Float tmp9 = (tmp4 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1000)
		nx = tmp9;
		HX_STACK_LINE(1001)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b2;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1001)
		Float tmp11 = tmp10->posy;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1001)
		Float tmp12 = r2y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1001)
		Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1001)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b1;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1001)
		Float tmp15 = tmp14->posy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1001)
		Float tmp16 = r1y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1001)
		Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1001)
		Float tmp18 = (tmp13 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1001)
		ny = tmp18;
		HX_STACK_LINE(1002)
		Float tmp19 = (nx * nx);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1002)
		Float tmp20 = (ny * ny);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1002)
		Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1002)
		Float C = tmp21;		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(1003)
		Float tmp22 = C;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1003)
		Float tmp23 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1003)
		bool tmp24 = (tmp22 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1003)
		if ((tmp24)){
			HX_STACK_LINE(1004)
			{
				HX_STACK_LINE(1005)
				nx = (int)0;
				HX_STACK_LINE(1006)
				ny = (int)0;
				HX_STACK_LINE(1015)
				{
				}
			}
			HX_STACK_LINE(1024)
			C = (int)0;
			HX_STACK_LINE(1025)
			slack = true;
		}
		else{
			HX_STACK_LINE(1028)
			Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1028)
			{
				HX_STACK_LINE(1028)
				Float tmp26 = C;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1028)
				tmp25 = ::Math_obj::sqrt(tmp26);
			}
			HX_STACK_LINE(1028)
			C = tmp25;
			HX_STACK_LINE(1029)
			{
				HX_STACK_LINE(1030)
				Float tmp26 = (Float(((Float)1.0)) / Float(C));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1030)
				Float t = tmp26;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1039)
				hx::MultEq(nx,t);
				HX_STACK_LINE(1040)
				hx::MultEq(ny,t);
			}
			HX_STACK_LINE(1042)
			bool tmp26 = this->equal;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1042)
			if ((tmp26)){
				HX_STACK_LINE(1043)
				Float tmp27 = this->jointMax;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1043)
				hx::SubEq(C,tmp27);
				HX_STACK_LINE(1044)
				slack = false;
			}
			else{
				HX_STACK_LINE(1047)
				Float tmp27 = C;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1047)
				Float tmp28 = this->jointMin;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1047)
				bool tmp29 = (tmp27 < tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1047)
				if ((tmp29)){
					HX_STACK_LINE(1048)
					Float tmp30 = this->jointMin;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1048)
					Float tmp31 = C;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1048)
					Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1048)
					C = tmp32;
					HX_STACK_LINE(1049)
					{
						HX_STACK_LINE(1050)
						Float tmp33 = nx;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1050)
						Float tmp34 = -(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1050)
						nx = tmp34;
						HX_STACK_LINE(1051)
						Float tmp35 = ny;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1051)
						Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1051)
						ny = tmp36;
					}
					HX_STACK_LINE(1053)
					slack = false;
				}
				else{
					HX_STACK_LINE(1055)
					Float tmp30 = C;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1055)
					Float tmp31 = this->jointMax;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1055)
					bool tmp32 = (tmp30 > tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1055)
					if ((tmp32)){
						HX_STACK_LINE(1056)
						Float tmp33 = this->jointMax;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1056)
						hx::SubEq(C,tmp33);
						HX_STACK_LINE(1057)
						slack = false;
					}
					else{
						HX_STACK_LINE(1060)
						{
							HX_STACK_LINE(1061)
							nx = (int)0;
							HX_STACK_LINE(1062)
							ny = (int)0;
							HX_STACK_LINE(1071)
							{
							}
						}
						HX_STACK_LINE(1080)
						C = (int)0;
						HX_STACK_LINE(1081)
						slack = true;
					}
				}
			}
		}
		HX_STACK_LINE(1085)
		tmp = C;
	}
	HX_STACK_LINE(999)
	E = tmp;
	HX_STACK_LINE(1087)
	bool tmp1 = slack;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1087)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1087)
	if ((tmp2)){
		HX_STACK_LINE(1088)
		bool tmp3 = this->breakUnderError;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1088)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1088)
		if ((tmp3)){
			HX_STACK_LINE(1088)
			Float tmp5 = (E * E);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1088)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1088)
			Float tmp7 = this->maxError;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1088)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1088)
			Float tmp9 = this->maxError;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1088)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1088)
			Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1088)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1088)
			tmp4 = (tmp6 > tmp12);
		}
		else{
			HX_STACK_LINE(1088)
			tmp4 = false;
		}
		HX_STACK_LINE(1088)
		if ((tmp4)){
			HX_STACK_LINE(1088)
			return true;
		}
		HX_STACK_LINE(1089)
		Float tmp5 = (E * E);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1089)
		Float tmp6 = ::nape::Config_obj::constraintLinearSlop;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1089)
		Float tmp7 = ::nape::Config_obj::constraintLinearSlop;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1089)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1089)
		bool tmp9 = (tmp5 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1089)
		if ((tmp9)){
			HX_STACK_LINE(1089)
			return false;
		}
		HX_STACK_LINE(1090)
		hx::MultEq(E,((Float)0.5));
		HX_STACK_LINE(1091)
		Float tmp10 = (E * E);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1091)
		bool tmp11 = (tmp10 > (int)6);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1091)
		if ((tmp11)){
			HX_STACK_LINE(1092)
			::zpp_nape::phys::ZPP_Body tmp12 = this->b1;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1092)
			Float tmp13 = tmp12->smass;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1092)
			::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1092)
			Float tmp15 = tmp14->smass;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1092)
			Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1092)
			Float k = tmp16;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(1093)
			Float tmp17 = k;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1093)
			Float tmp18 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1093)
			bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1093)
			if ((tmp19)){
				HX_STACK_LINE(1094)
				Float tmp20 = (Float(((Float)0.75)) / Float(k));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1094)
				k = tmp20;
				HX_STACK_LINE(1095)
				Float tmp21 = E;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1095)
				Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1095)
				Float tmp23 = k;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1095)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1095)
				j = tmp24;
				HX_STACK_LINE(1096)
				bool tmp25 = this->equal;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1096)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1096)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1096)
				if ((tmp26)){
					HX_STACK_LINE(1096)
					tmp27 = (j < (int)0);
				}
				else{
					HX_STACK_LINE(1096)
					tmp27 = true;
				}
				HX_STACK_LINE(1096)
				if ((tmp27)){
					HX_STACK_LINE(1097)
					{
						HX_STACK_LINE(1098)
						Float tmp28 = j;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1098)
						::zpp_nape::phys::ZPP_Body tmp29 = this->b1;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1098)
						Float tmp30 = tmp29->imass;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1098)
						Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1098)
						Float t = tmp31;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1107)
						Float tmp32 = (nx * t);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1107)
						::zpp_nape::phys::ZPP_Body tmp33 = this->b1;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1107)
						hx::SubEq(tmp33->posx,tmp32);
						HX_STACK_LINE(1108)
						Float tmp34 = (ny * t);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1108)
						::zpp_nape::phys::ZPP_Body tmp35 = this->b1;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1108)
						hx::SubEq(tmp35->posy,tmp34);
					}
					HX_STACK_LINE(1110)
					{
						HX_STACK_LINE(1111)
						Float tmp28 = j;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1111)
						::zpp_nape::phys::ZPP_Body tmp29 = this->b2;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1111)
						Float tmp30 = tmp29->imass;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1111)
						Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1111)
						Float t = tmp31;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1120)
						Float tmp32 = (nx * t);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1120)
						::zpp_nape::phys::ZPP_Body tmp33 = this->b2;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1120)
						hx::AddEq(tmp33->posx,tmp32);
						HX_STACK_LINE(1121)
						Float tmp34 = (ny * t);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1121)
						::zpp_nape::phys::ZPP_Body tmp35 = this->b2;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1121)
						hx::AddEq(tmp35->posy,tmp34);
					}
					HX_STACK_LINE(1123)
					Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1123)
					{
						HX_STACK_LINE(1124)
						::zpp_nape::phys::ZPP_Body tmp29 = this->b2;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1124)
						Float tmp30 = tmp29->posx;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1124)
						Float tmp31 = r2x;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1124)
						Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1124)
						::zpp_nape::phys::ZPP_Body tmp33 = this->b1;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1124)
						Float tmp34 = tmp33->posx;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1124)
						Float tmp35 = r1x;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1124)
						Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1124)
						Float tmp37 = (tmp32 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1124)
						nx = tmp37;
						HX_STACK_LINE(1125)
						::zpp_nape::phys::ZPP_Body tmp38 = this->b2;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1125)
						Float tmp39 = tmp38->posy;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1125)
						Float tmp40 = r2y;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1125)
						Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1125)
						::zpp_nape::phys::ZPP_Body tmp42 = this->b1;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1125)
						Float tmp43 = tmp42->posy;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1125)
						Float tmp44 = r1y;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1125)
						Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(1125)
						Float tmp46 = (tmp41 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(1125)
						ny = tmp46;
						HX_STACK_LINE(1126)
						Float tmp47 = (nx * nx);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(1126)
						Float tmp48 = (ny * ny);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(1126)
						Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(1126)
						Float C = tmp49;		HX_STACK_VAR(C,"C");
						HX_STACK_LINE(1127)
						Float tmp50 = C;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(1127)
						Float tmp51 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1127)
						bool tmp52 = (tmp50 < tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1127)
						if ((tmp52)){
							HX_STACK_LINE(1128)
							{
								HX_STACK_LINE(1129)
								nx = (int)0;
								HX_STACK_LINE(1130)
								ny = (int)0;
								HX_STACK_LINE(1139)
								{
								}
							}
							HX_STACK_LINE(1148)
							C = (int)0;
							HX_STACK_LINE(1149)
							slack = true;
						}
						else{
							HX_STACK_LINE(1152)
							Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1152)
							{
								HX_STACK_LINE(1152)
								Float tmp54 = C;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(1152)
								tmp53 = ::Math_obj::sqrt(tmp54);
							}
							HX_STACK_LINE(1152)
							C = tmp53;
							HX_STACK_LINE(1153)
							{
								HX_STACK_LINE(1154)
								Float tmp54 = (Float(((Float)1.0)) / Float(C));		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(1154)
								Float t = tmp54;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1163)
								hx::MultEq(nx,t);
								HX_STACK_LINE(1164)
								hx::MultEq(ny,t);
							}
							HX_STACK_LINE(1166)
							bool tmp54 = this->equal;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1166)
							if ((tmp54)){
								HX_STACK_LINE(1167)
								Float tmp55 = this->jointMax;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(1167)
								hx::SubEq(C,tmp55);
								HX_STACK_LINE(1168)
								slack = false;
							}
							else{
								HX_STACK_LINE(1171)
								Float tmp55 = C;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(1171)
								Float tmp56 = this->jointMin;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(1171)
								bool tmp57 = (tmp55 < tmp56);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(1171)
								if ((tmp57)){
									HX_STACK_LINE(1172)
									Float tmp58 = this->jointMin;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(1172)
									Float tmp59 = C;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(1172)
									Float tmp60 = (tmp58 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(1172)
									C = tmp60;
									HX_STACK_LINE(1173)
									{
										HX_STACK_LINE(1174)
										Float tmp61 = nx;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(1174)
										Float tmp62 = -(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(1174)
										nx = tmp62;
										HX_STACK_LINE(1175)
										Float tmp63 = ny;		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(1175)
										Float tmp64 = -(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(1175)
										ny = tmp64;
									}
									HX_STACK_LINE(1177)
									slack = false;
								}
								else{
									HX_STACK_LINE(1179)
									Float tmp58 = C;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(1179)
									Float tmp59 = this->jointMax;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(1179)
									bool tmp60 = (tmp58 > tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(1179)
									if ((tmp60)){
										HX_STACK_LINE(1180)
										Float tmp61 = this->jointMax;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(1180)
										hx::SubEq(C,tmp61);
										HX_STACK_LINE(1181)
										slack = false;
									}
									else{
										HX_STACK_LINE(1184)
										{
											HX_STACK_LINE(1185)
											nx = (int)0;
											HX_STACK_LINE(1186)
											ny = (int)0;
											HX_STACK_LINE(1195)
											{
											}
										}
										HX_STACK_LINE(1204)
										C = (int)0;
										HX_STACK_LINE(1205)
										slack = true;
									}
								}
							}
						}
						HX_STACK_LINE(1209)
						tmp28 = C;
					}
					HX_STACK_LINE(1123)
					E = tmp28;
					HX_STACK_LINE(1211)
					hx::MultEq(E,((Float)0.5));
				}
			}
		}
		HX_STACK_LINE(1215)
		Float cx1;		HX_STACK_VAR(cx1,"cx1");
		HX_STACK_LINE(1215)
		Float cx2;		HX_STACK_VAR(cx2,"cx2");
		HX_STACK_LINE(1216)
		Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1216)
		{
			HX_STACK_LINE(1217)
			Float tmp13 = (ny * r1x);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1217)
			Float tmp14 = (nx * r1y);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1217)
			Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1217)
			cx1 = tmp15;
			HX_STACK_LINE(1218)
			Float tmp16 = (ny * r2x);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1218)
			Float tmp17 = (nx * r2y);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1218)
			Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1218)
			cx2 = tmp18;
			HX_STACK_LINE(1219)
			::zpp_nape::phys::ZPP_Body tmp19 = this->b1;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1219)
			Float tmp20 = tmp19->smass;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1219)
			::zpp_nape::phys::ZPP_Body tmp21 = this->b2;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1219)
			Float tmp22 = tmp21->smass;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1219)
			Float tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1219)
			Float tmp24 = (cx1 * cx1);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1219)
			::zpp_nape::phys::ZPP_Body tmp25 = this->b1;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1219)
			Float tmp26 = tmp25->sinertia;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1219)
			Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1219)
			Float tmp28 = (tmp23 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1219)
			Float tmp29 = (cx2 * cx2);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1219)
			::zpp_nape::phys::ZPP_Body tmp30 = this->b2;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1219)
			Float tmp31 = tmp30->sinertia;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1219)
			Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1219)
			tmp12 = (tmp28 + tmp32);
		}
		HX_STACK_LINE(1216)
		Float k = tmp12;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(1221)
		bool tmp13 = (k != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1221)
		if ((tmp13)){
			HX_STACK_LINE(1221)
			Float tmp14 = (Float((int)1) / Float(k));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1221)
			k = tmp14;
		}
		HX_STACK_LINE(1222)
		Float tmp14 = E;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1222)
		Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1222)
		Float tmp16 = k;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1222)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1222)
		j = tmp17;
		HX_STACK_LINE(1223)
		bool tmp18 = this->equal;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1223)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1223)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1223)
		if ((tmp19)){
			HX_STACK_LINE(1223)
			tmp20 = (j < (int)0);
		}
		else{
			HX_STACK_LINE(1223)
			tmp20 = true;
		}
		HX_STACK_LINE(1223)
		if ((tmp20)){
			HX_STACK_LINE(1225)
			{
				HX_STACK_LINE(1226)
				::zpp_nape::phys::ZPP_Body tmp21 = this->b1;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1226)
				Float tmp22 = tmp21->imass;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1226)
				Float tmp23 = j;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1226)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1226)
				Float t = tmp24;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1235)
				Float tmp25 = (nx * t);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1235)
				::zpp_nape::phys::ZPP_Body tmp26 = this->b1;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1235)
				hx::SubEq(tmp26->posx,tmp25);
				HX_STACK_LINE(1236)
				Float tmp27 = (ny * t);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1236)
				::zpp_nape::phys::ZPP_Body tmp28 = this->b1;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1236)
				hx::SubEq(tmp28->posy,tmp27);
			}
			HX_STACK_LINE(1238)
			{
				HX_STACK_LINE(1239)
				::zpp_nape::phys::ZPP_Body tmp21 = this->b2;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1239)
				Float tmp22 = tmp21->imass;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1239)
				Float tmp23 = j;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1239)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1239)
				Float t = tmp24;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1248)
				Float tmp25 = (nx * t);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1248)
				::zpp_nape::phys::ZPP_Body tmp26 = this->b2;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1248)
				hx::AddEq(tmp26->posx,tmp25);
				HX_STACK_LINE(1249)
				Float tmp27 = (ny * t);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1249)
				::zpp_nape::phys::ZPP_Body tmp28 = this->b2;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1249)
				hx::AddEq(tmp28->posy,tmp27);
			}
			HX_STACK_LINE(1251)
			{
				HX_STACK_LINE(1251)
				::zpp_nape::phys::ZPP_Body tmp21 = this->b1;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1251)
				::zpp_nape::phys::ZPP_Body _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1251)
				Float tmp22 = cx1;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1251)
				Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1251)
				::zpp_nape::phys::ZPP_Body tmp24 = this->b1;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1251)
				Float tmp25 = tmp24->iinertia;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1251)
				Float tmp26 = (tmp23 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1251)
				Float tmp27 = j;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1251)
				Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1251)
				Float dr = tmp28;		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(1251)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(1251)
				Float tmp29 = (dr * dr);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1251)
				bool tmp30 = (tmp29 > ((Float)0.0001));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1251)
				if ((tmp30)){
					HX_STACK_LINE(1251)
					Float tmp31 = _this->rot;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1251)
					Float tmp32 = ::Math_obj::sin(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1251)
					_this->axisx = tmp32;
					HX_STACK_LINE(1251)
					Float tmp33 = _this->rot;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1251)
					Float tmp34 = ::Math_obj::cos(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1251)
					_this->axisy = tmp34;
					HX_STACK_LINE(1251)
					Dynamic();
				}
				else{
					HX_STACK_LINE(1251)
					Float tmp31 = (dr * dr);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1251)
					Float d2 = tmp31;		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(1251)
					Float tmp32 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1251)
					Float tmp33 = ((int)1 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1251)
					Float p = tmp33;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(1251)
					Float tmp34 = (d2 * d2);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1251)
					Float tmp35 = (Float(tmp34) / Float((int)8));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1251)
					Float tmp36 = ((int)1 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1251)
					Float m = tmp36;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(1251)
					Float tmp37 = (p * _this->axisx);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1251)
					Float tmp38 = (dr * _this->axisy);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1251)
					Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1251)
					Float tmp40 = m;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1251)
					Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1251)
					Float nx1 = tmp41;		HX_STACK_VAR(nx1,"nx1");
					HX_STACK_LINE(1251)
					Float tmp42 = (p * _this->axisy);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1251)
					Float tmp43 = (dr * _this->axisx);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(1251)
					Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(1251)
					Float tmp45 = m;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(1251)
					Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(1251)
					_this->axisy = tmp46;
					HX_STACK_LINE(1251)
					_this->axisx = nx1;
				}
			}
			HX_STACK_LINE(1252)
			{
				HX_STACK_LINE(1252)
				::zpp_nape::phys::ZPP_Body tmp21 = this->b2;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1252)
				::zpp_nape::phys::ZPP_Body _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1252)
				Float tmp22 = cx2;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1252)
				::zpp_nape::phys::ZPP_Body tmp23 = this->b2;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1252)
				Float tmp24 = tmp23->iinertia;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1252)
				Float tmp25 = (tmp22 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1252)
				Float tmp26 = j;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1252)
				Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1252)
				Float dr = tmp27;		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(1252)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(1252)
				Float tmp28 = (dr * dr);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1252)
				bool tmp29 = (tmp28 > ((Float)0.0001));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1252)
				if ((tmp29)){
					HX_STACK_LINE(1252)
					Float tmp30 = _this->rot;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1252)
					Float tmp31 = ::Math_obj::sin(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1252)
					_this->axisx = tmp31;
					HX_STACK_LINE(1252)
					Float tmp32 = _this->rot;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1252)
					Float tmp33 = ::Math_obj::cos(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1252)
					_this->axisy = tmp33;
					HX_STACK_LINE(1252)
					Dynamic();
				}
				else{
					HX_STACK_LINE(1252)
					Float tmp30 = (dr * dr);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1252)
					Float d2 = tmp30;		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(1252)
					Float tmp31 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1252)
					Float tmp32 = ((int)1 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1252)
					Float p = tmp32;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(1252)
					Float tmp33 = (d2 * d2);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1252)
					Float tmp34 = (Float(tmp33) / Float((int)8));		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1252)
					Float tmp35 = ((int)1 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1252)
					Float m = tmp35;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(1252)
					Float tmp36 = (p * _this->axisx);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1252)
					Float tmp37 = (dr * _this->axisy);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1252)
					Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1252)
					Float tmp39 = m;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1252)
					Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1252)
					Float nx1 = tmp40;		HX_STACK_VAR(nx1,"nx1");
					HX_STACK_LINE(1252)
					Float tmp41 = (p * _this->axisy);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1252)
					Float tmp42 = (dr * _this->axisx);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1252)
					Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(1252)
					Float tmp44 = m;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(1252)
					Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(1252)
					_this->axisy = tmp45;
					HX_STACK_LINE(1252)
					_this->axisx = nx1;
				}
			}
		}
	}
	HX_STACK_LINE(1286)
	return false;
}


Void ZPP_DistanceJoint_obj::draw( ::nape::util::Debug g){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_DistanceJoint","draw",0x88c999b2,"zpp_nape.constraint.ZPP_DistanceJoint.draw","zpp_nape/constraint/DistanceJoint.hx",1288,0x52959e99)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
	}
return null();
}



ZPP_DistanceJoint_obj::ZPP_DistanceJoint_obj()
{
}

void ZPP_DistanceJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_DistanceJoint);
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	HX_MARK_MEMBER_NAME(jointMin,"jointMin");
	HX_MARK_MEMBER_NAME(jointMax,"jointMax");
	HX_MARK_MEMBER_NAME(slack,"slack");
	HX_MARK_MEMBER_NAME(equal,"equal");
	HX_MARK_MEMBER_NAME(nx,"nx");
	HX_MARK_MEMBER_NAME(ny,"ny");
	HX_MARK_MEMBER_NAME(cx1,"cx1");
	HX_MARK_MEMBER_NAME(cx2,"cx2");
	HX_MARK_MEMBER_NAME(b1,"b1");
	HX_MARK_MEMBER_NAME(a1localx,"a1localx");
	HX_MARK_MEMBER_NAME(a1localy,"a1localy");
	HX_MARK_MEMBER_NAME(a1relx,"a1relx");
	HX_MARK_MEMBER_NAME(a1rely,"a1rely");
	HX_MARK_MEMBER_NAME(wrap_a1,"wrap_a1");
	HX_MARK_MEMBER_NAME(b2,"b2");
	HX_MARK_MEMBER_NAME(a2localx,"a2localx");
	HX_MARK_MEMBER_NAME(a2localy,"a2localy");
	HX_MARK_MEMBER_NAME(a2relx,"a2relx");
	HX_MARK_MEMBER_NAME(a2rely,"a2rely");
	HX_MARK_MEMBER_NAME(wrap_a2,"wrap_a2");
	HX_MARK_MEMBER_NAME(kMass,"kMass");
	HX_MARK_MEMBER_NAME(jAcc,"jAcc");
	HX_MARK_MEMBER_NAME(jMax,"jMax");
	HX_MARK_MEMBER_NAME(gamma,"gamma");
	HX_MARK_MEMBER_NAME(bias,"bias");
	HX_MARK_MEMBER_NAME(stepped,"stepped");
	::zpp_nape::constraint::ZPP_Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_DistanceJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	HX_VISIT_MEMBER_NAME(jointMin,"jointMin");
	HX_VISIT_MEMBER_NAME(jointMax,"jointMax");
	HX_VISIT_MEMBER_NAME(slack,"slack");
	HX_VISIT_MEMBER_NAME(equal,"equal");
	HX_VISIT_MEMBER_NAME(nx,"nx");
	HX_VISIT_MEMBER_NAME(ny,"ny");
	HX_VISIT_MEMBER_NAME(cx1,"cx1");
	HX_VISIT_MEMBER_NAME(cx2,"cx2");
	HX_VISIT_MEMBER_NAME(b1,"b1");
	HX_VISIT_MEMBER_NAME(a1localx,"a1localx");
	HX_VISIT_MEMBER_NAME(a1localy,"a1localy");
	HX_VISIT_MEMBER_NAME(a1relx,"a1relx");
	HX_VISIT_MEMBER_NAME(a1rely,"a1rely");
	HX_VISIT_MEMBER_NAME(wrap_a1,"wrap_a1");
	HX_VISIT_MEMBER_NAME(b2,"b2");
	HX_VISIT_MEMBER_NAME(a2localx,"a2localx");
	HX_VISIT_MEMBER_NAME(a2localy,"a2localy");
	HX_VISIT_MEMBER_NAME(a2relx,"a2relx");
	HX_VISIT_MEMBER_NAME(a2rely,"a2rely");
	HX_VISIT_MEMBER_NAME(wrap_a2,"wrap_a2");
	HX_VISIT_MEMBER_NAME(kMass,"kMass");
	HX_VISIT_MEMBER_NAME(jAcc,"jAcc");
	HX_VISIT_MEMBER_NAME(jMax,"jMax");
	HX_VISIT_MEMBER_NAME(gamma,"gamma");
	HX_VISIT_MEMBER_NAME(bias,"bias");
	HX_VISIT_MEMBER_NAME(stepped,"stepped");
	::zpp_nape::constraint::ZPP_Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_DistanceJoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"nx") ) { return nx; }
		if (HX_FIELD_EQ(inName,"ny") ) { return ny; }
		if (HX_FIELD_EQ(inName,"b1") ) { return b1; }
		if (HX_FIELD_EQ(inName,"b2") ) { return b2; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cx1") ) { return cx1; }
		if (HX_FIELD_EQ(inName,"cx2") ) { return cx2; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jAcc") ) { return jAcc; }
		if (HX_FIELD_EQ(inName,"jMax") ) { return jMax; }
		if (HX_FIELD_EQ(inName,"bias") ) { return bias; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"slack") ) { return slack; }
		if (HX_FIELD_EQ(inName,"equal") ) { return equal; }
		if (HX_FIELD_EQ(inName,"kMass") ) { return kMass; }
		if (HX_FIELD_EQ(inName,"gamma") ) { return gamma; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"a1relx") ) { return a1relx; }
		if (HX_FIELD_EQ(inName,"a1rely") ) { return a1rely; }
		if (HX_FIELD_EQ(inName,"a2relx") ) { return a2relx; }
		if (HX_FIELD_EQ(inName,"a2rely") ) { return a2rely; }
		if (HX_FIELD_EQ(inName,"forest") ) { return forest_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrap_a1") ) { return wrap_a1; }
		if (HX_FIELD_EQ(inName,"wrap_a2") ) { return wrap_a2; }
		if (HX_FIELD_EQ(inName,"stepped") ) { return stepped; }
		if (HX_FIELD_EQ(inName,"preStep") ) { return preStep_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		if (HX_FIELD_EQ(inName,"jointMin") ) { return jointMin; }
		if (HX_FIELD_EQ(inName,"jointMax") ) { return jointMax; }
		if (HX_FIELD_EQ(inName,"is_slack") ) { return is_slack_dyn(); }
		if (HX_FIELD_EQ(inName,"a1localx") ) { return a1localx; }
		if (HX_FIELD_EQ(inName,"a1localy") ) { return a1localy; }
		if (HX_FIELD_EQ(inName,"setup_a1") ) { return setup_a1_dyn(); }
		if (HX_FIELD_EQ(inName,"a2localx") ) { return a2localx; }
		if (HX_FIELD_EQ(inName,"a2localy") ) { return a2localy; }
		if (HX_FIELD_EQ(inName,"setup_a2") ) { return setup_a2_dyn(); }
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"warmStart") ) { return warmStart_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearcache") ) { return clearcache_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bodyImpulse") ) { return bodyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_a1") ) { return validate_a1_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_a2") ) { return validate_a2_dyn(); }
		if (HX_FIELD_EQ(inName,"pair_exists") ) { return pair_exists_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"activeBodies") ) { return activeBodies_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"invalidate_a1") ) { return invalidate_a1_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_a2") ) { return invalidate_a2_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inactiveBodies") ) { return inactiveBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"wake_connected") ) { return wake_connected_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyImpulseVel") ) { return applyImpulseVel_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulsePos") ) { return applyImpulsePos_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_DistanceJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"nx") ) { nx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ny") ) { ny=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b1") ) { b1=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b2") ) { b2=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cx1") ) { cx1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cx2") ) { cx2=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jAcc") ) { jAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jMax") ) { jMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bias") ) { bias=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"slack") ) { slack=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"equal") ) { equal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMass") ) { kMass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gamma") ) { gamma=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"a1relx") ) { a1relx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1rely") ) { a1rely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2relx") ) { a2relx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2rely") ) { a2rely=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrap_a1") ) { wrap_a1=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_a2") ) { wrap_a2=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepped") ) { stepped=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::constraint::DistanceJoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jointMin") ) { jointMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jointMax") ) { jointMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1localx") ) { a1localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1localy") ) { a1localy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2localx") ) { a2localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2localy") ) { a2localy=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_DistanceJoint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_DistanceJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"));
	outFields->push(HX_HCSTRING("jointMin","\x68","\xfa","\x25","\x55"));
	outFields->push(HX_HCSTRING("jointMax","\x7a","\xf3","\x25","\x55"));
	outFields->push(HX_HCSTRING("slack","\x50","\xb2","\xc1","\x7e"));
	outFields->push(HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72"));
	outFields->push(HX_HCSTRING("nx","\x4a","\x60","\x00","\x00"));
	outFields->push(HX_HCSTRING("ny","\x4b","\x60","\x00","\x00"));
	outFields->push(HX_HCSTRING("cx1","\xdc","\x87","\x4b","\x00"));
	outFields->push(HX_HCSTRING("cx2","\xdd","\x87","\x4b","\x00"));
	outFields->push(HX_HCSTRING("b1","\x8f","\x55","\x00","\x00"));
	outFields->push(HX_HCSTRING("a1localx","\x5d","\x6d","\x78","\xfb"));
	outFields->push(HX_HCSTRING("a1localy","\x5e","\x6d","\x78","\xfb"));
	outFields->push(HX_HCSTRING("a1relx","\xaf","\xc1","\xe7","\x4a"));
	outFields->push(HX_HCSTRING("a1rely","\xb0","\xc1","\xe7","\x4a"));
	outFields->push(HX_HCSTRING("wrap_a1","\x45","\xeb","\x57","\x0d"));
	outFields->push(HX_HCSTRING("b2","\x90","\x55","\x00","\x00"));
	outFields->push(HX_HCSTRING("a2localx","\x1e","\xe4","\x0d","\x25"));
	outFields->push(HX_HCSTRING("a2localy","\x1f","\xe4","\x0d","\x25"));
	outFields->push(HX_HCSTRING("a2relx","\x30","\x56","\x4e","\xde"));
	outFields->push(HX_HCSTRING("a2rely","\x31","\x56","\x4e","\xde"));
	outFields->push(HX_HCSTRING("wrap_a2","\x46","\xeb","\x57","\x0d"));
	outFields->push(HX_HCSTRING("kMass","\xff","\x7e","\x0f","\xcf"));
	outFields->push(HX_HCSTRING("jAcc","\xf7","\x46","\x42","\x46"));
	outFields->push(HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46"));
	outFields->push(HX_HCSTRING("gamma","\x27","\x87","\xb6","\x8e"));
	outFields->push(HX_HCSTRING("bias","\x79","\xea","\x16","\x41"));
	outFields->push(HX_HCSTRING("stepped","\x03","\x05","\x60","\x81"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::constraint::DistanceJoint*/ ,(int)offsetof(ZPP_DistanceJoint_obj,outer_zn),HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,jointMin),HX_HCSTRING("jointMin","\x68","\xfa","\x25","\x55")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,jointMax),HX_HCSTRING("jointMax","\x7a","\xf3","\x25","\x55")},
	{hx::fsBool,(int)offsetof(ZPP_DistanceJoint_obj,slack),HX_HCSTRING("slack","\x50","\xb2","\xc1","\x7e")},
	{hx::fsBool,(int)offsetof(ZPP_DistanceJoint_obj,equal),HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,nx),HX_HCSTRING("nx","\x4a","\x60","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,ny),HX_HCSTRING("ny","\x4b","\x60","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,cx1),HX_HCSTRING("cx1","\xdc","\x87","\x4b","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,cx2),HX_HCSTRING("cx2","\xdd","\x87","\x4b","\x00")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_DistanceJoint_obj,b1),HX_HCSTRING("b1","\x8f","\x55","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,a1localx),HX_HCSTRING("a1localx","\x5d","\x6d","\x78","\xfb")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,a1localy),HX_HCSTRING("a1localy","\x5e","\x6d","\x78","\xfb")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,a1relx),HX_HCSTRING("a1relx","\xaf","\xc1","\xe7","\x4a")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,a1rely),HX_HCSTRING("a1rely","\xb0","\xc1","\xe7","\x4a")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_DistanceJoint_obj,wrap_a1),HX_HCSTRING("wrap_a1","\x45","\xeb","\x57","\x0d")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_DistanceJoint_obj,b2),HX_HCSTRING("b2","\x90","\x55","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,a2localx),HX_HCSTRING("a2localx","\x1e","\xe4","\x0d","\x25")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,a2localy),HX_HCSTRING("a2localy","\x1f","\xe4","\x0d","\x25")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,a2relx),HX_HCSTRING("a2relx","\x30","\x56","\x4e","\xde")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,a2rely),HX_HCSTRING("a2rely","\x31","\x56","\x4e","\xde")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_DistanceJoint_obj,wrap_a2),HX_HCSTRING("wrap_a2","\x46","\xeb","\x57","\x0d")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,kMass),HX_HCSTRING("kMass","\xff","\x7e","\x0f","\xcf")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,jAcc),HX_HCSTRING("jAcc","\xf7","\x46","\x42","\x46")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,jMax),HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,gamma),HX_HCSTRING("gamma","\x27","\x87","\xb6","\x8e")},
	{hx::fsFloat,(int)offsetof(ZPP_DistanceJoint_obj,bias),HX_HCSTRING("bias","\x79","\xea","\x16","\x41")},
	{hx::fsBool,(int)offsetof(ZPP_DistanceJoint_obj,stepped),HX_HCSTRING("stepped","\x03","\x05","\x60","\x81")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"),
	HX_HCSTRING("jointMin","\x68","\xfa","\x25","\x55"),
	HX_HCSTRING("jointMax","\x7a","\xf3","\x25","\x55"),
	HX_HCSTRING("slack","\x50","\xb2","\xc1","\x7e"),
	HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72"),
	HX_HCSTRING("is_slack","\xfb","\x20","\x7e","\x9e"),
	HX_HCSTRING("nx","\x4a","\x60","\x00","\x00"),
	HX_HCSTRING("ny","\x4b","\x60","\x00","\x00"),
	HX_HCSTRING("cx1","\xdc","\x87","\x4b","\x00"),
	HX_HCSTRING("cx2","\xdd","\x87","\x4b","\x00"),
	HX_HCSTRING("bodyImpulse","\x33","\x76","\xa2","\x5f"),
	HX_HCSTRING("activeBodies","\xe6","\x69","\xf8","\xba"),
	HX_HCSTRING("inactiveBodies","\x4b","\x89","\xc5","\x8c"),
	HX_HCSTRING("b1","\x8f","\x55","\x00","\x00"),
	HX_HCSTRING("a1localx","\x5d","\x6d","\x78","\xfb"),
	HX_HCSTRING("a1localy","\x5e","\x6d","\x78","\xfb"),
	HX_HCSTRING("a1relx","\xaf","\xc1","\xe7","\x4a"),
	HX_HCSTRING("a1rely","\xb0","\xc1","\xe7","\x4a"),
	HX_HCSTRING("validate_a1","\xf9","\x9b","\xcc","\xca"),
	HX_HCSTRING("invalidate_a1","\x34","\x30","\x01","\xa7"),
	HX_HCSTRING("setup_a1","\x72","\x28","\x39","\x23"),
	HX_HCSTRING("wrap_a1","\x45","\xeb","\x57","\x0d"),
	HX_HCSTRING("b2","\x90","\x55","\x00","\x00"),
	HX_HCSTRING("a2localx","\x1e","\xe4","\x0d","\x25"),
	HX_HCSTRING("a2localy","\x1f","\xe4","\x0d","\x25"),
	HX_HCSTRING("a2relx","\x30","\x56","\x4e","\xde"),
	HX_HCSTRING("a2rely","\x31","\x56","\x4e","\xde"),
	HX_HCSTRING("validate_a2","\xfa","\x9b","\xcc","\xca"),
	HX_HCSTRING("invalidate_a2","\x35","\x30","\x01","\xa7"),
	HX_HCSTRING("setup_a2","\x73","\x28","\x39","\x23"),
	HX_HCSTRING("wrap_a2","\x46","\xeb","\x57","\x0d"),
	HX_HCSTRING("kMass","\xff","\x7e","\x0f","\xcf"),
	HX_HCSTRING("jAcc","\xf7","\x46","\x42","\x46"),
	HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46"),
	HX_HCSTRING("gamma","\x27","\x87","\xb6","\x8e"),
	HX_HCSTRING("bias","\x79","\xea","\x16","\x41"),
	HX_HCSTRING("stepped","\x03","\x05","\x60","\x81"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("wake_connected","\xae","\xcf","\xdd","\x3d"),
	HX_HCSTRING("forest","\xdd","\x8c","\x88","\xfd"),
	HX_HCSTRING("pair_exists","\xa1","\x6a","\x58","\x69"),
	HX_HCSTRING("clearcache","\x95","\x69","\xf1","\x82"),
	HX_HCSTRING("preStep","\x0f","\xc1","\xc0","\x24"),
	HX_HCSTRING("warmStart","\xdd","\x27","\x03","\xeb"),
	HX_HCSTRING("applyImpulseVel","\xb6","\xc7","\x50","\x1f"),
	HX_HCSTRING("applyImpulsePos","\xed","\x42","\x4c","\x1f"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_DistanceJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_DistanceJoint_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_DistanceJoint_obj::__mClass;

void ZPP_DistanceJoint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.constraint.ZPP_DistanceJoint","\x80","\xd1","\x0d","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_DistanceJoint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_DistanceJoint_obj >;
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
} // end namespace constraint
