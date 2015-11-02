#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_PulleyJoint
#include <nape/constraint/PulleyJoint.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_PulleyJoint
#include <zpp_nape/constraint/ZPP_PulleyJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec3
#include <zpp_nape/geom/ZPP_Vec3.h>
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

Void ZPP_PulleyJoint_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","new",0xe3d84cee,"zpp_nape.constraint.ZPP_PulleyJoint.new","zpp_nape/constraint/PulleyJoint.hx",174,0xdaffcadd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(645)
	this->stepped = false;
	HX_STACK_LINE(644)
	this->bias = ((Float)0.0);
	HX_STACK_LINE(643)
	this->gamma = ((Float)0.0);
	HX_STACK_LINE(642)
	this->jMax = ((Float)0.0);
	HX_STACK_LINE(641)
	this->jAcc = ((Float)0.0);
	HX_STACK_LINE(640)
	this->kMass = ((Float)0.0);
	HX_STACK_LINE(639)
	this->wrap_a4 = null();
	HX_STACK_LINE(586)
	this->a4rely = ((Float)0.0);
	HX_STACK_LINE(585)
	this->a4relx = ((Float)0.0);
	HX_STACK_LINE(584)
	this->a4localy = ((Float)0.0);
	HX_STACK_LINE(583)
	this->a4localx = ((Float)0.0);
	HX_STACK_LINE(582)
	this->b4 = null();
	HX_STACK_LINE(581)
	this->wrap_a3 = null();
	HX_STACK_LINE(528)
	this->a3rely = ((Float)0.0);
	HX_STACK_LINE(527)
	this->a3relx = ((Float)0.0);
	HX_STACK_LINE(526)
	this->a3localy = ((Float)0.0);
	HX_STACK_LINE(525)
	this->a3localx = ((Float)0.0);
	HX_STACK_LINE(524)
	this->b3 = null();
	HX_STACK_LINE(523)
	this->wrap_a2 = null();
	HX_STACK_LINE(470)
	this->a2rely = ((Float)0.0);
	HX_STACK_LINE(469)
	this->a2relx = ((Float)0.0);
	HX_STACK_LINE(468)
	this->a2localy = ((Float)0.0);
	HX_STACK_LINE(467)
	this->a2localx = ((Float)0.0);
	HX_STACK_LINE(466)
	this->b2 = null();
	HX_STACK_LINE(465)
	this->wrap_a1 = null();
	HX_STACK_LINE(412)
	this->a1rely = ((Float)0.0);
	HX_STACK_LINE(411)
	this->a1relx = ((Float)0.0);
	HX_STACK_LINE(410)
	this->a1localy = ((Float)0.0);
	HX_STACK_LINE(409)
	this->a1localx = ((Float)0.0);
	HX_STACK_LINE(408)
	this->b1 = null();
	HX_STACK_LINE(352)
	this->cx4 = ((Float)0.0);
	HX_STACK_LINE(351)
	this->cx3 = ((Float)0.0);
	HX_STACK_LINE(350)
	this->cx2 = ((Float)0.0);
	HX_STACK_LINE(349)
	this->cx1 = ((Float)0.0);
	HX_STACK_LINE(348)
	this->n34y = ((Float)0.0);
	HX_STACK_LINE(347)
	this->n34x = ((Float)0.0);
	HX_STACK_LINE(346)
	this->n12y = ((Float)0.0);
	HX_STACK_LINE(345)
	this->n12x = ((Float)0.0);
	HX_STACK_LINE(180)
	this->equal = false;
	HX_STACK_LINE(179)
	this->slack = false;
	HX_STACK_LINE(178)
	this->jointMax = ((Float)0.0);
	HX_STACK_LINE(177)
	this->jointMin = ((Float)0.0);
	HX_STACK_LINE(176)
	this->ratio = ((Float)1.0);
	HX_STACK_LINE(175)
	this->outer_zn = null();
	HX_STACK_LINE(736)
	super::__construct();
	HX_STACK_LINE(737)
	{
		HX_STACK_LINE(738)
		{
			HX_STACK_LINE(739)
			this->a1localx = (int)0;
			HX_STACK_LINE(740)
			this->a1localy = (int)0;
			HX_STACK_LINE(749)
			{
			}
		}
		HX_STACK_LINE(758)
		{
			HX_STACK_LINE(759)
			this->a1relx = (int)0;
			HX_STACK_LINE(760)
			this->a1rely = (int)0;
			HX_STACK_LINE(769)
			{
			}
		}
	}
	HX_STACK_LINE(779)
	{
		HX_STACK_LINE(780)
		{
			HX_STACK_LINE(781)
			this->a2localx = (int)0;
			HX_STACK_LINE(782)
			this->a2localy = (int)0;
			HX_STACK_LINE(791)
			{
			}
		}
		HX_STACK_LINE(800)
		{
			HX_STACK_LINE(801)
			this->a2relx = (int)0;
			HX_STACK_LINE(802)
			this->a2rely = (int)0;
			HX_STACK_LINE(811)
			{
			}
		}
	}
	HX_STACK_LINE(821)
	{
		HX_STACK_LINE(822)
		{
			HX_STACK_LINE(823)
			this->a3localx = (int)0;
			HX_STACK_LINE(824)
			this->a3localy = (int)0;
			HX_STACK_LINE(833)
			{
			}
		}
		HX_STACK_LINE(842)
		{
			HX_STACK_LINE(843)
			this->a3relx = (int)0;
			HX_STACK_LINE(844)
			this->a3rely = (int)0;
			HX_STACK_LINE(853)
			{
			}
		}
	}
	HX_STACK_LINE(863)
	{
		HX_STACK_LINE(864)
		{
			HX_STACK_LINE(865)
			this->a4localx = (int)0;
			HX_STACK_LINE(866)
			this->a4localy = (int)0;
			HX_STACK_LINE(875)
			{
			}
		}
		HX_STACK_LINE(884)
		{
			HX_STACK_LINE(885)
			this->a4relx = (int)0;
			HX_STACK_LINE(886)
			this->a4rely = (int)0;
			HX_STACK_LINE(895)
			{
			}
		}
	}
	HX_STACK_LINE(905)
	{
		HX_STACK_LINE(906)
		this->n12x = (int)1;
		HX_STACK_LINE(907)
		this->n12y = (int)0;
		HX_STACK_LINE(916)
		{
		}
	}
	HX_STACK_LINE(925)
	{
		HX_STACK_LINE(926)
		this->n34x = (int)1;
		HX_STACK_LINE(927)
		this->n34y = (int)0;
		HX_STACK_LINE(936)
		{
		}
	}
	HX_STACK_LINE(945)
	this->jAcc = (int)0;
	HX_STACK_LINE(946)
	Float tmp = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(946)
	this->jMax = tmp;
	HX_STACK_LINE(947)
	this->stepped = false;
	HX_STACK_LINE(948)
	Float tmp1 = this->cx4 = (int)0;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(948)
	Float tmp2 = this->cx3 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(948)
	Float tmp3 = this->cx2 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(948)
	this->cx1 = tmp3;
}
;
	return null();
}

//ZPP_PulleyJoint_obj::~ZPP_PulleyJoint_obj() { }

Dynamic ZPP_PulleyJoint_obj::__CreateEmpty() { return  new ZPP_PulleyJoint_obj; }
hx::ObjectPtr< ZPP_PulleyJoint_obj > ZPP_PulleyJoint_obj::__new()
{  hx::ObjectPtr< ZPP_PulleyJoint_obj > _result_ = new ZPP_PulleyJoint_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_PulleyJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_PulleyJoint_obj > _result_ = new ZPP_PulleyJoint_obj();
	_result_->__construct();
	return _result_;}

bool ZPP_PulleyJoint_obj::is_slack( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","is_slack",0x83e561ad,"zpp_nape.constraint.ZPP_PulleyJoint.is_slack","zpp_nape/constraint/PulleyJoint.hx",183,0xdaffcadd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(184)
	bool slack;		HX_STACK_VAR(slack,"slack");
	HX_STACK_LINE(185)
	{
		HX_STACK_LINE(186)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		Float tmp1 = tmp->axisy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		Float tmp2 = this->a1localx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(186)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(186)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(186)
		Float tmp5 = tmp4->axisx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(186)
		Float tmp6 = this->a1localy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(186)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(186)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(186)
		this->a1relx = tmp8;
		HX_STACK_LINE(187)
		Float tmp9 = this->a1localx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(187)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(187)
		Float tmp11 = tmp10->axisx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(187)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(187)
		Float tmp13 = this->a1localy;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(187)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b1;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(187)
		Float tmp15 = tmp14->axisy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(187)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(187)
		Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(187)
		this->a1rely = tmp17;
	}
	HX_STACK_LINE(189)
	{
		HX_STACK_LINE(190)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		Float tmp1 = tmp->axisy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(190)
		Float tmp2 = this->a2localx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(190)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(190)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(190)
		Float tmp5 = tmp4->axisx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(190)
		Float tmp6 = this->a2localy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(190)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(190)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(190)
		this->a2relx = tmp8;
		HX_STACK_LINE(191)
		Float tmp9 = this->a2localx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(191)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b2;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(191)
		Float tmp11 = tmp10->axisx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(191)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(191)
		Float tmp13 = this->a2localy;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(191)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(191)
		Float tmp15 = tmp14->axisy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(191)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(191)
		Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(191)
		this->a2rely = tmp17;
	}
	HX_STACK_LINE(193)
	{
		HX_STACK_LINE(194)
		::zpp_nape::phys::ZPP_Body tmp = this->b3;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		Float tmp1 = tmp->axisy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		Float tmp2 = this->a3localx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(194)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(194)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(194)
		Float tmp5 = tmp4->axisx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(194)
		Float tmp6 = this->a3localy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(194)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(194)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(194)
		this->a3relx = tmp8;
		HX_STACK_LINE(195)
		Float tmp9 = this->a3localx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(195)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b3;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(195)
		Float tmp11 = tmp10->axisx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(195)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(195)
		Float tmp13 = this->a3localy;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(195)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b3;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(195)
		Float tmp15 = tmp14->axisy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(195)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(195)
		Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(195)
		this->a3rely = tmp17;
	}
	HX_STACK_LINE(197)
	{
		HX_STACK_LINE(198)
		::zpp_nape::phys::ZPP_Body tmp = this->b4;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		Float tmp1 = tmp->axisy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		Float tmp2 = this->a4localx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(198)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(198)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(198)
		Float tmp5 = tmp4->axisx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(198)
		Float tmp6 = this->a4localy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(198)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(198)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(198)
		this->a4relx = tmp8;
		HX_STACK_LINE(199)
		Float tmp9 = this->a4localx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(199)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b4;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(199)
		Float tmp11 = tmp10->axisx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(199)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(199)
		Float tmp13 = this->a4localy;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(199)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b4;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(199)
		Float tmp15 = tmp14->axisy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(199)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(199)
		Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(199)
		this->a4rely = tmp17;
	}
	HX_STACK_LINE(201)
	Float n12x = ((Float)0.0);		HX_STACK_VAR(n12x,"n12x");
	HX_STACK_LINE(202)
	Float n12y = ((Float)0.0);		HX_STACK_VAR(n12y,"n12y");
	HX_STACK_LINE(203)
	Float n34x = ((Float)0.0);		HX_STACK_VAR(n34x,"n34x");
	HX_STACK_LINE(204)
	Float n34y = ((Float)0.0);		HX_STACK_VAR(n34y,"n34y");
	HX_STACK_LINE(205)
	{
		HX_STACK_LINE(206)
		Float t12x = ((Float)0.0);		HX_STACK_VAR(t12x,"t12x");
		HX_STACK_LINE(207)
		Float t12y = ((Float)0.0);		HX_STACK_VAR(t12y,"t12y");
		HX_STACK_LINE(208)
		Float t34x = ((Float)0.0);		HX_STACK_VAR(t34x,"t34x");
		HX_STACK_LINE(209)
		Float t34y = ((Float)0.0);		HX_STACK_VAR(t34y,"t34y");
		HX_STACK_LINE(210)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(210)
		Float tmp1 = tmp->posx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(210)
		Float tmp2 = this->a2relx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(210)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(210)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(210)
		Float tmp5 = tmp4->posx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(210)
		Float tmp6 = this->a1relx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(210)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(210)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(210)
		t12x = tmp8;
		HX_STACK_LINE(211)
		::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(211)
		Float tmp10 = tmp9->posy;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(211)
		Float tmp11 = this->a2rely;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(211)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(211)
		::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(211)
		Float tmp14 = tmp13->posy;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(211)
		Float tmp15 = this->a1rely;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(211)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(211)
		Float tmp17 = (tmp12 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(211)
		t12y = tmp17;
		HX_STACK_LINE(212)
		::zpp_nape::phys::ZPP_Body tmp18 = this->b4;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(212)
		Float tmp19 = tmp18->posx;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(212)
		Float tmp20 = this->a4relx;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(212)
		Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(212)
		::zpp_nape::phys::ZPP_Body tmp22 = this->b3;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(212)
		Float tmp23 = tmp22->posx;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(212)
		Float tmp24 = this->a3relx;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(212)
		Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(212)
		Float tmp26 = (tmp21 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(212)
		t34x = tmp26;
		HX_STACK_LINE(213)
		::zpp_nape::phys::ZPP_Body tmp27 = this->b4;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(213)
		Float tmp28 = tmp27->posy;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(213)
		Float tmp29 = this->a4rely;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(213)
		Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(213)
		::zpp_nape::phys::ZPP_Body tmp31 = this->b3;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(213)
		Float tmp32 = tmp31->posy;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(213)
		Float tmp33 = this->a3rely;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(213)
		Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(213)
		Float tmp35 = (tmp30 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(213)
		t34y = tmp35;
		HX_STACK_LINE(214)
		Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			Float tmp37 = (t12x * t12x);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(214)
			Float tmp38 = (t12y * t12y);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(214)
			Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(214)
			tmp36 = ::Math_obj::sqrt(tmp39);
		}
		HX_STACK_LINE(214)
		Float C12 = tmp36;		HX_STACK_VAR(C12,"C12");
		HX_STACK_LINE(215)
		Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(215)
			Float tmp38 = (t34x * t34x);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(215)
			Float tmp39 = (t34y * t34y);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(215)
			Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(215)
			tmp37 = ::Math_obj::sqrt(tmp40);
		}
		HX_STACK_LINE(215)
		Float C34 = tmp37;		HX_STACK_VAR(C34,"C34");
		HX_STACK_LINE(216)
		bool tmp38 = (C12 != (int)0);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(216)
		if ((tmp38)){
			HX_STACK_LINE(218)
			Float tmp39 = (Float(((Float)1.0)) / Float(C12));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(218)
			Float t = tmp39;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(227)
			Float tmp40 = (t12x * t);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(227)
			n12x = tmp40;
			HX_STACK_LINE(228)
			Float tmp41 = (t12y * t);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(228)
			n12y = tmp41;
		}
		HX_STACK_LINE(231)
		bool tmp39 = (C34 != (int)0);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(231)
		if ((tmp39)){
			HX_STACK_LINE(232)
			{
				HX_STACK_LINE(233)
				Float tmp40 = (Float(((Float)1.0)) / Float(C34));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(233)
				Float t = tmp40;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(242)
				Float tmp41 = (t34x * t);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(242)
				n34x = tmp41;
				HX_STACK_LINE(243)
				Float tmp42 = (t34y * t);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(243)
				n34y = tmp42;
			}
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(246)
				Float tmp40 = this->ratio;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(246)
				Float t = tmp40;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(255)
				hx::MultEq(n34x,t);
				HX_STACK_LINE(256)
				hx::MultEq(n34y,t);
			}
		}
		else{
			HX_STACK_LINE(261)
			Float tmp40 = this->ratio;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(261)
			Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(261)
			{
				HX_STACK_LINE(261)
				Float tmp42 = (n34x * n34x);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(261)
				Float tmp43 = (n34y * n34y);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(261)
				Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(261)
				tmp41 = ::Math_obj::sqrt(tmp44);
			}
			HX_STACK_LINE(261)
			Float tmp42 = (Float(tmp40) / Float(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(261)
			Float t = tmp42;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(270)
			hx::MultEq(n34x,t);
			HX_STACK_LINE(271)
			hx::MultEq(n34y,t);
		}
		HX_STACK_LINE(274)
		Float tmp40 = C12;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(274)
		Float tmp41 = this->ratio;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(274)
		Float tmp42 = C34;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(274)
		Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(274)
		Float tmp44 = (tmp40 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(274)
		Float C = tmp44;		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(275)
		bool tmp45 = this->equal;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(275)
		if ((tmp45)){
			HX_STACK_LINE(276)
			Float tmp46 = this->jointMax;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(276)
			hx::SubEq(C,tmp46);
			HX_STACK_LINE(277)
			slack = false;
		}
		else{
			HX_STACK_LINE(280)
			Float tmp46 = C;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(280)
			Float tmp47 = this->jointMin;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(280)
			bool tmp48 = (tmp46 < tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(280)
			if ((tmp48)){
				HX_STACK_LINE(281)
				Float tmp49 = this->jointMin;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(281)
				Float tmp50 = C;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(281)
				Float tmp51 = (tmp49 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(281)
				C = tmp51;
				HX_STACK_LINE(282)
				{
					HX_STACK_LINE(283)
					Float tmp52 = n12x;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(283)
					Float tmp53 = -(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(283)
					n12x = tmp53;
					HX_STACK_LINE(284)
					Float tmp54 = n12y;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(284)
					Float tmp55 = -(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(284)
					n12y = tmp55;
				}
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(287)
					Float tmp52 = n34x;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(287)
					Float tmp53 = -(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(287)
					n34x = tmp53;
					HX_STACK_LINE(288)
					Float tmp54 = n34y;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(288)
					Float tmp55 = -(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(288)
					n34y = tmp55;
				}
				HX_STACK_LINE(290)
				slack = false;
			}
			else{
				HX_STACK_LINE(292)
				Float tmp49 = C;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(292)
				Float tmp50 = this->jointMax;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(292)
				bool tmp51 = (tmp49 > tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(292)
				if ((tmp51)){
					HX_STACK_LINE(293)
					Float tmp52 = this->jointMax;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(293)
					hx::SubEq(C,tmp52);
					HX_STACK_LINE(294)
					slack = false;
				}
				else{
					HX_STACK_LINE(297)
					{
						HX_STACK_LINE(298)
						n12x = (int)0;
						HX_STACK_LINE(299)
						n12y = (int)0;
						HX_STACK_LINE(308)
						{
						}
					}
					HX_STACK_LINE(317)
					{
						HX_STACK_LINE(318)
						n34x = (int)0;
						HX_STACK_LINE(319)
						n34y = (int)0;
						HX_STACK_LINE(328)
						{
						}
					}
					HX_STACK_LINE(337)
					C = (int)0;
					HX_STACK_LINE(338)
					slack = true;
				}
			}
		}
		HX_STACK_LINE(341)
		C;
	}
	HX_STACK_LINE(343)
	bool tmp = slack;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(343)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,is_slack,return )

::nape::geom::Vec3 ZPP_PulleyJoint_obj::bodyImpulse( ::zpp_nape::phys::ZPP_Body b){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","bodyImpulse",0x57eb30c1,"zpp_nape.constraint.ZPP_PulleyJoint.bodyImpulse","zpp_nape/constraint/PulleyJoint.hx",353,0xdaffcadd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(354)
	bool tmp = this->stepped;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(354)
	if ((tmp)){
		HX_STACK_LINE(355)
		::nape::geom::Vec3 tmp1 = ::nape::geom::Vec3_obj::get(null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(355)
		::nape::geom::Vec3 ret = tmp1;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(356)
		::zpp_nape::phys::ZPP_Body tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(356)
		::zpp_nape::phys::ZPP_Body tmp3 = this->b1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(356)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(356)
		if ((tmp4)){
			HX_STACK_LINE(357)
			{
				HX_STACK_LINE(357)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(357)
				{
					HX_STACK_LINE(357)
					Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(357)
					{
						HX_STACK_LINE(357)
						bool tmp6 = (_g != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(357)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(357)
						if ((tmp6)){
							HX_STACK_LINE(357)
							tmp7 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(357)
							tmp7 = false;
						}
						HX_STACK_LINE(357)
						if ((tmp7)){
							HX_STACK_LINE(357)
							::String tmp8 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(357)
							::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(357)
							HX_STACK_DO_THROW(tmp9);
						}
						HX_STACK_LINE(357)
						{
							HX_STACK_LINE(357)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(357)
							bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(357)
							if ((tmp8)){
								HX_STACK_LINE(357)
								_this->_validate();
							}
						}
						HX_STACK_LINE(357)
						tmp5 = _g->zpp_inner->x;
					}
					HX_STACK_LINE(357)
					Float tmp6 = this->jAcc;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(357)
					Float tmp7 = this->n12x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(357)
					Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(357)
					Float tmp9 = (tmp5 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(357)
					Float x = tmp9;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(357)
					{
						HX_STACK_LINE(357)
						{
							HX_STACK_LINE(357)
							bool tmp10 = (_g != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(357)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(357)
							if ((tmp10)){
								HX_STACK_LINE(357)
								tmp11 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(357)
								tmp11 = false;
							}
							HX_STACK_LINE(357)
							if ((tmp11)){
								HX_STACK_LINE(357)
								::String tmp12 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(357)
								::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(357)
								HX_STACK_DO_THROW(tmp13);
							}
						}
						HX_STACK_LINE(357)
						bool tmp10 = _g->zpp_inner->immutable;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(357)
						if ((tmp10)){
							HX_STACK_LINE(357)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
						}
						HX_STACK_LINE(357)
						_g->zpp_inner->x = x;
					}
					HX_STACK_LINE(357)
					{
						HX_STACK_LINE(357)
						{
							HX_STACK_LINE(357)
							bool tmp10 = (_g != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(357)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(357)
							if ((tmp10)){
								HX_STACK_LINE(357)
								tmp11 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(357)
								tmp11 = false;
							}
							HX_STACK_LINE(357)
							if ((tmp11)){
								HX_STACK_LINE(357)
								::String tmp12 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(357)
								::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(357)
								HX_STACK_DO_THROW(tmp13);
							}
						}
						HX_STACK_LINE(357)
						{
							HX_STACK_LINE(357)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(357)
							bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(357)
							if ((tmp10)){
								HX_STACK_LINE(357)
								_this->_validate();
							}
						}
						HX_STACK_LINE(357)
						_g->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(358)
			{
				HX_STACK_LINE(358)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(358)
					Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						bool tmp6 = (_g != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(358)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(358)
						if ((tmp6)){
							HX_STACK_LINE(358)
							tmp7 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(358)
							tmp7 = false;
						}
						HX_STACK_LINE(358)
						if ((tmp7)){
							HX_STACK_LINE(358)
							::String tmp8 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(358)
							::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(358)
							HX_STACK_DO_THROW(tmp9);
						}
						HX_STACK_LINE(358)
						{
							HX_STACK_LINE(358)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(358)
							bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(358)
							if ((tmp8)){
								HX_STACK_LINE(358)
								_this->_validate();
							}
						}
						HX_STACK_LINE(358)
						tmp5 = _g->zpp_inner->y;
					}
					HX_STACK_LINE(358)
					Float tmp6 = this->jAcc;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(358)
					Float tmp7 = this->n12y;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(358)
					Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(358)
					Float tmp9 = (tmp5 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(358)
					Float y = tmp9;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						{
							HX_STACK_LINE(358)
							bool tmp10 = (_g != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(358)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(358)
							if ((tmp10)){
								HX_STACK_LINE(358)
								tmp11 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(358)
								tmp11 = false;
							}
							HX_STACK_LINE(358)
							if ((tmp11)){
								HX_STACK_LINE(358)
								::String tmp12 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(358)
								::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(358)
								HX_STACK_DO_THROW(tmp13);
							}
						}
						HX_STACK_LINE(358)
						bool tmp10 = _g->zpp_inner->immutable;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(358)
						if ((tmp10)){
							HX_STACK_LINE(358)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
						}
						HX_STACK_LINE(358)
						_g->zpp_inner->y = y;
					}
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						{
							HX_STACK_LINE(358)
							bool tmp10 = (_g != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(358)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(358)
							if ((tmp10)){
								HX_STACK_LINE(358)
								tmp11 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(358)
								tmp11 = false;
							}
							HX_STACK_LINE(358)
							if ((tmp11)){
								HX_STACK_LINE(358)
								::String tmp12 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(358)
								::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(358)
								HX_STACK_DO_THROW(tmp13);
							}
						}
						HX_STACK_LINE(358)
						{
							HX_STACK_LINE(358)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(358)
							bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(358)
							if ((tmp10)){
								HX_STACK_LINE(358)
								_this->_validate();
							}
						}
						HX_STACK_LINE(358)
						_g->zpp_inner->y;
					}
				}
			}
			HX_STACK_LINE(359)
			{
				HX_STACK_LINE(359)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(359)
				{
					HX_STACK_LINE(359)
					Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(359)
					{
						HX_STACK_LINE(359)
						bool tmp6 = (_g != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(359)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(359)
						if ((tmp6)){
							HX_STACK_LINE(359)
							tmp7 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(359)
							tmp7 = false;
						}
						HX_STACK_LINE(359)
						if ((tmp7)){
							HX_STACK_LINE(359)
							::String tmp8 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(359)
							::String tmp9 = (tmp8 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(359)
							HX_STACK_DO_THROW(tmp9);
						}
						HX_STACK_LINE(359)
						{
							HX_STACK_LINE(359)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(359)
							bool tmp8 = (_this->_validate != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(359)
							if ((tmp8)){
								HX_STACK_LINE(359)
								_this->_validate();
							}
						}
						HX_STACK_LINE(359)
						tmp5 = _g->zpp_inner->z;
					}
					HX_STACK_LINE(359)
					Float tmp6 = this->cx1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(359)
					Float tmp7 = this->jAcc;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(359)
					Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(359)
					Float tmp9 = (tmp5 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(359)
					Float z = tmp9;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(359)
					{
						HX_STACK_LINE(359)
						{
							HX_STACK_LINE(359)
							bool tmp10 = (_g != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(359)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(359)
							if ((tmp10)){
								HX_STACK_LINE(359)
								tmp11 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(359)
								tmp11 = false;
							}
							HX_STACK_LINE(359)
							if ((tmp11)){
								HX_STACK_LINE(359)
								::String tmp12 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(359)
								::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(359)
								HX_STACK_DO_THROW(tmp13);
							}
						}
						HX_STACK_LINE(359)
						bool tmp10 = _g->zpp_inner->immutable;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(359)
						if ((tmp10)){
							HX_STACK_LINE(359)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
						}
						HX_STACK_LINE(359)
						_g->zpp_inner->z = z;
					}
					HX_STACK_LINE(359)
					{
						HX_STACK_LINE(359)
						{
							HX_STACK_LINE(359)
							bool tmp10 = (_g != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(359)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(359)
							if ((tmp10)){
								HX_STACK_LINE(359)
								tmp11 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(359)
								tmp11 = false;
							}
							HX_STACK_LINE(359)
							if ((tmp11)){
								HX_STACK_LINE(359)
								::String tmp12 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(359)
								::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(359)
								HX_STACK_DO_THROW(tmp13);
							}
						}
						HX_STACK_LINE(359)
						{
							HX_STACK_LINE(359)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(359)
							bool tmp10 = (_this->_validate != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(359)
							if ((tmp10)){
								HX_STACK_LINE(359)
								_this->_validate();
							}
						}
						HX_STACK_LINE(359)
						_g->zpp_inner->z;
					}
				}
			}
		}
		HX_STACK_LINE(361)
		::zpp_nape::phys::ZPP_Body tmp5 = b;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(361)
		::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(361)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(361)
		if ((tmp7)){
			HX_STACK_LINE(362)
			{
				HX_STACK_LINE(362)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(362)
				{
					HX_STACK_LINE(362)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(362)
					{
						HX_STACK_LINE(362)
						bool tmp9 = (_g != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(362)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(362)
						if ((tmp9)){
							HX_STACK_LINE(362)
							tmp10 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(362)
							tmp10 = false;
						}
						HX_STACK_LINE(362)
						if ((tmp10)){
							HX_STACK_LINE(362)
							::String tmp11 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(362)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(362)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(362)
						{
							HX_STACK_LINE(362)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(362)
							bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(362)
							if ((tmp11)){
								HX_STACK_LINE(362)
								_this->_validate();
							}
						}
						HX_STACK_LINE(362)
						tmp8 = _g->zpp_inner->x;
					}
					HX_STACK_LINE(362)
					Float tmp9 = this->jAcc;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(362)
					Float tmp10 = this->n12x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(362)
					Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(362)
					Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(362)
					Float x = tmp12;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(362)
					{
						HX_STACK_LINE(362)
						{
							HX_STACK_LINE(362)
							bool tmp13 = (_g != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(362)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(362)
							if ((tmp13)){
								HX_STACK_LINE(362)
								tmp14 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(362)
								tmp14 = false;
							}
							HX_STACK_LINE(362)
							if ((tmp14)){
								HX_STACK_LINE(362)
								::String tmp15 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(362)
								::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(362)
								HX_STACK_DO_THROW(tmp16);
							}
						}
						HX_STACK_LINE(362)
						bool tmp13 = _g->zpp_inner->immutable;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(362)
						if ((tmp13)){
							HX_STACK_LINE(362)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
						}
						HX_STACK_LINE(362)
						_g->zpp_inner->x = x;
					}
					HX_STACK_LINE(362)
					{
						HX_STACK_LINE(362)
						{
							HX_STACK_LINE(362)
							bool tmp13 = (_g != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(362)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(362)
							if ((tmp13)){
								HX_STACK_LINE(362)
								tmp14 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(362)
								tmp14 = false;
							}
							HX_STACK_LINE(362)
							if ((tmp14)){
								HX_STACK_LINE(362)
								::String tmp15 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(362)
								::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(362)
								HX_STACK_DO_THROW(tmp16);
							}
						}
						HX_STACK_LINE(362)
						{
							HX_STACK_LINE(362)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(362)
							bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(362)
							if ((tmp13)){
								HX_STACK_LINE(362)
								_this->_validate();
							}
						}
						HX_STACK_LINE(362)
						_g->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						bool tmp9 = (_g != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(363)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(363)
						if ((tmp9)){
							HX_STACK_LINE(363)
							tmp10 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(363)
							tmp10 = false;
						}
						HX_STACK_LINE(363)
						if ((tmp10)){
							HX_STACK_LINE(363)
							::String tmp11 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(363)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(363)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(363)
						{
							HX_STACK_LINE(363)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(363)
							bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(363)
							if ((tmp11)){
								HX_STACK_LINE(363)
								_this->_validate();
							}
						}
						HX_STACK_LINE(363)
						tmp8 = _g->zpp_inner->y;
					}
					HX_STACK_LINE(363)
					Float tmp9 = this->jAcc;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(363)
					Float tmp10 = this->n12y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(363)
					Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(363)
					Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(363)
					Float y = tmp12;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						{
							HX_STACK_LINE(363)
							bool tmp13 = (_g != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(363)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(363)
							if ((tmp13)){
								HX_STACK_LINE(363)
								tmp14 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(363)
								tmp14 = false;
							}
							HX_STACK_LINE(363)
							if ((tmp14)){
								HX_STACK_LINE(363)
								::String tmp15 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(363)
								::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(363)
								HX_STACK_DO_THROW(tmp16);
							}
						}
						HX_STACK_LINE(363)
						bool tmp13 = _g->zpp_inner->immutable;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(363)
						if ((tmp13)){
							HX_STACK_LINE(363)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
						}
						HX_STACK_LINE(363)
						_g->zpp_inner->y = y;
					}
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						{
							HX_STACK_LINE(363)
							bool tmp13 = (_g != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(363)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(363)
							if ((tmp13)){
								HX_STACK_LINE(363)
								tmp14 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(363)
								tmp14 = false;
							}
							HX_STACK_LINE(363)
							if ((tmp14)){
								HX_STACK_LINE(363)
								::String tmp15 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(363)
								::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(363)
								HX_STACK_DO_THROW(tmp16);
							}
						}
						HX_STACK_LINE(363)
						{
							HX_STACK_LINE(363)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(363)
							bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(363)
							if ((tmp13)){
								HX_STACK_LINE(363)
								_this->_validate();
							}
						}
						HX_STACK_LINE(363)
						_g->zpp_inner->y;
					}
				}
			}
			HX_STACK_LINE(364)
			{
				HX_STACK_LINE(364)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(364)
				{
					HX_STACK_LINE(364)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(364)
					{
						HX_STACK_LINE(364)
						bool tmp9 = (_g != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(364)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(364)
						if ((tmp9)){
							HX_STACK_LINE(364)
							tmp10 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(364)
							tmp10 = false;
						}
						HX_STACK_LINE(364)
						if ((tmp10)){
							HX_STACK_LINE(364)
							::String tmp11 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(364)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(364)
							HX_STACK_DO_THROW(tmp12);
						}
						HX_STACK_LINE(364)
						{
							HX_STACK_LINE(364)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(364)
							bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(364)
							if ((tmp11)){
								HX_STACK_LINE(364)
								_this->_validate();
							}
						}
						HX_STACK_LINE(364)
						tmp8 = _g->zpp_inner->z;
					}
					HX_STACK_LINE(364)
					Float tmp9 = this->cx2;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(364)
					Float tmp10 = this->jAcc;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(364)
					Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(364)
					Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(364)
					Float z = tmp12;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(364)
					{
						HX_STACK_LINE(364)
						{
							HX_STACK_LINE(364)
							bool tmp13 = (_g != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(364)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(364)
							if ((tmp13)){
								HX_STACK_LINE(364)
								tmp14 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(364)
								tmp14 = false;
							}
							HX_STACK_LINE(364)
							if ((tmp14)){
								HX_STACK_LINE(364)
								::String tmp15 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(364)
								::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(364)
								HX_STACK_DO_THROW(tmp16);
							}
						}
						HX_STACK_LINE(364)
						bool tmp13 = _g->zpp_inner->immutable;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(364)
						if ((tmp13)){
							HX_STACK_LINE(364)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
						}
						HX_STACK_LINE(364)
						_g->zpp_inner->z = z;
					}
					HX_STACK_LINE(364)
					{
						HX_STACK_LINE(364)
						{
							HX_STACK_LINE(364)
							bool tmp13 = (_g != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(364)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(364)
							if ((tmp13)){
								HX_STACK_LINE(364)
								tmp14 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(364)
								tmp14 = false;
							}
							HX_STACK_LINE(364)
							if ((tmp14)){
								HX_STACK_LINE(364)
								::String tmp15 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(364)
								::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(364)
								HX_STACK_DO_THROW(tmp16);
							}
						}
						HX_STACK_LINE(364)
						{
							HX_STACK_LINE(364)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(364)
							bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(364)
							if ((tmp13)){
								HX_STACK_LINE(364)
								_this->_validate();
							}
						}
						HX_STACK_LINE(364)
						_g->zpp_inner->z;
					}
				}
			}
		}
		HX_STACK_LINE(366)
		::zpp_nape::phys::ZPP_Body tmp8 = b;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(366)
		::zpp_nape::phys::ZPP_Body tmp9 = this->b3;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(366)
		bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(366)
		if ((tmp10)){
			HX_STACK_LINE(367)
			{
				HX_STACK_LINE(367)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(367)
				{
					HX_STACK_LINE(367)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(367)
					{
						HX_STACK_LINE(367)
						bool tmp12 = (_g != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(367)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(367)
						if ((tmp12)){
							HX_STACK_LINE(367)
							tmp13 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(367)
							tmp13 = false;
						}
						HX_STACK_LINE(367)
						if ((tmp13)){
							HX_STACK_LINE(367)
							::String tmp14 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(367)
							::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(367)
							HX_STACK_DO_THROW(tmp15);
						}
						HX_STACK_LINE(367)
						{
							HX_STACK_LINE(367)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(367)
							bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(367)
							if ((tmp14)){
								HX_STACK_LINE(367)
								_this->_validate();
							}
						}
						HX_STACK_LINE(367)
						tmp11 = _g->zpp_inner->x;
					}
					HX_STACK_LINE(367)
					Float tmp12 = this->jAcc;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(367)
					Float tmp13 = this->n34x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(367)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(367)
					Float tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(367)
					Float x = tmp15;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(367)
					{
						HX_STACK_LINE(367)
						{
							HX_STACK_LINE(367)
							bool tmp16 = (_g != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(367)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(367)
							if ((tmp16)){
								HX_STACK_LINE(367)
								tmp17 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(367)
								tmp17 = false;
							}
							HX_STACK_LINE(367)
							if ((tmp17)){
								HX_STACK_LINE(367)
								::String tmp18 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(367)
								::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(367)
								HX_STACK_DO_THROW(tmp19);
							}
						}
						HX_STACK_LINE(367)
						bool tmp16 = _g->zpp_inner->immutable;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(367)
						if ((tmp16)){
							HX_STACK_LINE(367)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
						}
						HX_STACK_LINE(367)
						_g->zpp_inner->x = x;
					}
					HX_STACK_LINE(367)
					{
						HX_STACK_LINE(367)
						{
							HX_STACK_LINE(367)
							bool tmp16 = (_g != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(367)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(367)
							if ((tmp16)){
								HX_STACK_LINE(367)
								tmp17 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(367)
								tmp17 = false;
							}
							HX_STACK_LINE(367)
							if ((tmp17)){
								HX_STACK_LINE(367)
								::String tmp18 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(367)
								::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(367)
								HX_STACK_DO_THROW(tmp19);
							}
						}
						HX_STACK_LINE(367)
						{
							HX_STACK_LINE(367)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(367)
							bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(367)
							if ((tmp16)){
								HX_STACK_LINE(367)
								_this->_validate();
							}
						}
						HX_STACK_LINE(367)
						_g->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(368)
			{
				HX_STACK_LINE(368)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(368)
				{
					HX_STACK_LINE(368)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(368)
					{
						HX_STACK_LINE(368)
						bool tmp12 = (_g != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(368)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(368)
						if ((tmp12)){
							HX_STACK_LINE(368)
							tmp13 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(368)
							tmp13 = false;
						}
						HX_STACK_LINE(368)
						if ((tmp13)){
							HX_STACK_LINE(368)
							::String tmp14 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(368)
							::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(368)
							HX_STACK_DO_THROW(tmp15);
						}
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(368)
							bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(368)
							if ((tmp14)){
								HX_STACK_LINE(368)
								_this->_validate();
							}
						}
						HX_STACK_LINE(368)
						tmp11 = _g->zpp_inner->y;
					}
					HX_STACK_LINE(368)
					Float tmp12 = this->jAcc;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(368)
					Float tmp13 = this->n34y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(368)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(368)
					Float tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(368)
					Float y = tmp15;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(368)
					{
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							bool tmp16 = (_g != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(368)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(368)
							if ((tmp16)){
								HX_STACK_LINE(368)
								tmp17 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(368)
								tmp17 = false;
							}
							HX_STACK_LINE(368)
							if ((tmp17)){
								HX_STACK_LINE(368)
								::String tmp18 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(368)
								::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(368)
								HX_STACK_DO_THROW(tmp19);
							}
						}
						HX_STACK_LINE(368)
						bool tmp16 = _g->zpp_inner->immutable;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(368)
						if ((tmp16)){
							HX_STACK_LINE(368)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
						}
						HX_STACK_LINE(368)
						_g->zpp_inner->y = y;
					}
					HX_STACK_LINE(368)
					{
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							bool tmp16 = (_g != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(368)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(368)
							if ((tmp16)){
								HX_STACK_LINE(368)
								tmp17 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(368)
								tmp17 = false;
							}
							HX_STACK_LINE(368)
							if ((tmp17)){
								HX_STACK_LINE(368)
								::String tmp18 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(368)
								::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(368)
								HX_STACK_DO_THROW(tmp19);
							}
						}
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(368)
							bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(368)
							if ((tmp16)){
								HX_STACK_LINE(368)
								_this->_validate();
							}
						}
						HX_STACK_LINE(368)
						_g->zpp_inner->y;
					}
				}
			}
			HX_STACK_LINE(369)
			{
				HX_STACK_LINE(369)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(369)
				{
					HX_STACK_LINE(369)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(369)
					{
						HX_STACK_LINE(369)
						bool tmp12 = (_g != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(369)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(369)
						if ((tmp12)){
							HX_STACK_LINE(369)
							tmp13 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(369)
							tmp13 = false;
						}
						HX_STACK_LINE(369)
						if ((tmp13)){
							HX_STACK_LINE(369)
							::String tmp14 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(369)
							::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(369)
							HX_STACK_DO_THROW(tmp15);
						}
						HX_STACK_LINE(369)
						{
							HX_STACK_LINE(369)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(369)
							bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(369)
							if ((tmp14)){
								HX_STACK_LINE(369)
								_this->_validate();
							}
						}
						HX_STACK_LINE(369)
						tmp11 = _g->zpp_inner->z;
					}
					HX_STACK_LINE(369)
					Float tmp12 = this->cx3;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(369)
					Float tmp13 = this->jAcc;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(369)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(369)
					Float tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(369)
					Float z = tmp15;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(369)
					{
						HX_STACK_LINE(369)
						{
							HX_STACK_LINE(369)
							bool tmp16 = (_g != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(369)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(369)
							if ((tmp16)){
								HX_STACK_LINE(369)
								tmp17 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(369)
								tmp17 = false;
							}
							HX_STACK_LINE(369)
							if ((tmp17)){
								HX_STACK_LINE(369)
								::String tmp18 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(369)
								::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(369)
								HX_STACK_DO_THROW(tmp19);
							}
						}
						HX_STACK_LINE(369)
						bool tmp16 = _g->zpp_inner->immutable;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(369)
						if ((tmp16)){
							HX_STACK_LINE(369)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
						}
						HX_STACK_LINE(369)
						_g->zpp_inner->z = z;
					}
					HX_STACK_LINE(369)
					{
						HX_STACK_LINE(369)
						{
							HX_STACK_LINE(369)
							bool tmp16 = (_g != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(369)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(369)
							if ((tmp16)){
								HX_STACK_LINE(369)
								tmp17 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(369)
								tmp17 = false;
							}
							HX_STACK_LINE(369)
							if ((tmp17)){
								HX_STACK_LINE(369)
								::String tmp18 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(369)
								::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(369)
								HX_STACK_DO_THROW(tmp19);
							}
						}
						HX_STACK_LINE(369)
						{
							HX_STACK_LINE(369)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(369)
							bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(369)
							if ((tmp16)){
								HX_STACK_LINE(369)
								_this->_validate();
							}
						}
						HX_STACK_LINE(369)
						_g->zpp_inner->z;
					}
				}
			}
		}
		HX_STACK_LINE(371)
		::zpp_nape::phys::ZPP_Body tmp11 = b;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(371)
		::zpp_nape::phys::ZPP_Body tmp12 = this->b4;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(371)
		bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(371)
		if ((tmp13)){
			HX_STACK_LINE(372)
			{
				HX_STACK_LINE(372)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(372)
				{
					HX_STACK_LINE(372)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(372)
					{
						HX_STACK_LINE(372)
						bool tmp15 = (_g != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(372)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(372)
						if ((tmp15)){
							HX_STACK_LINE(372)
							tmp16 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(372)
							tmp16 = false;
						}
						HX_STACK_LINE(372)
						if ((tmp16)){
							HX_STACK_LINE(372)
							::String tmp17 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(372)
							::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(372)
							HX_STACK_DO_THROW(tmp18);
						}
						HX_STACK_LINE(372)
						{
							HX_STACK_LINE(372)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(372)
							bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(372)
							if ((tmp17)){
								HX_STACK_LINE(372)
								_this->_validate();
							}
						}
						HX_STACK_LINE(372)
						tmp14 = _g->zpp_inner->x;
					}
					HX_STACK_LINE(372)
					Float tmp15 = this->jAcc;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(372)
					Float tmp16 = this->n34x;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(372)
					Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(372)
					Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(372)
					Float x = tmp18;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(372)
					{
						HX_STACK_LINE(372)
						{
							HX_STACK_LINE(372)
							bool tmp19 = (_g != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(372)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(372)
							if ((tmp19)){
								HX_STACK_LINE(372)
								tmp20 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(372)
								tmp20 = false;
							}
							HX_STACK_LINE(372)
							if ((tmp20)){
								HX_STACK_LINE(372)
								::String tmp21 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(372)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(372)
								HX_STACK_DO_THROW(tmp22);
							}
						}
						HX_STACK_LINE(372)
						bool tmp19 = _g->zpp_inner->immutable;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(372)
						if ((tmp19)){
							HX_STACK_LINE(372)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
						}
						HX_STACK_LINE(372)
						_g->zpp_inner->x = x;
					}
					HX_STACK_LINE(372)
					{
						HX_STACK_LINE(372)
						{
							HX_STACK_LINE(372)
							bool tmp19 = (_g != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(372)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(372)
							if ((tmp19)){
								HX_STACK_LINE(372)
								tmp20 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(372)
								tmp20 = false;
							}
							HX_STACK_LINE(372)
							if ((tmp20)){
								HX_STACK_LINE(372)
								::String tmp21 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(372)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(372)
								HX_STACK_DO_THROW(tmp22);
							}
						}
						HX_STACK_LINE(372)
						{
							HX_STACK_LINE(372)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(372)
							bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(372)
							if ((tmp19)){
								HX_STACK_LINE(372)
								_this->_validate();
							}
						}
						HX_STACK_LINE(372)
						_g->zpp_inner->x;
					}
				}
			}
			HX_STACK_LINE(373)
			{
				HX_STACK_LINE(373)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						bool tmp15 = (_g != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(373)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(373)
						if ((tmp15)){
							HX_STACK_LINE(373)
							tmp16 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(373)
							tmp16 = false;
						}
						HX_STACK_LINE(373)
						if ((tmp16)){
							HX_STACK_LINE(373)
							::String tmp17 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(373)
							::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(373)
							HX_STACK_DO_THROW(tmp18);
						}
						HX_STACK_LINE(373)
						{
							HX_STACK_LINE(373)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(373)
							bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(373)
							if ((tmp17)){
								HX_STACK_LINE(373)
								_this->_validate();
							}
						}
						HX_STACK_LINE(373)
						tmp14 = _g->zpp_inner->y;
					}
					HX_STACK_LINE(373)
					Float tmp15 = this->jAcc;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(373)
					Float tmp16 = this->n34y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(373)
					Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(373)
					Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(373)
					Float y = tmp18;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						{
							HX_STACK_LINE(373)
							bool tmp19 = (_g != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(373)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(373)
							if ((tmp19)){
								HX_STACK_LINE(373)
								tmp20 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(373)
								tmp20 = false;
							}
							HX_STACK_LINE(373)
							if ((tmp20)){
								HX_STACK_LINE(373)
								::String tmp21 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(373)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(373)
								HX_STACK_DO_THROW(tmp22);
							}
						}
						HX_STACK_LINE(373)
						bool tmp19 = _g->zpp_inner->immutable;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(373)
						if ((tmp19)){
							HX_STACK_LINE(373)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
						}
						HX_STACK_LINE(373)
						_g->zpp_inner->y = y;
					}
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						{
							HX_STACK_LINE(373)
							bool tmp19 = (_g != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(373)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(373)
							if ((tmp19)){
								HX_STACK_LINE(373)
								tmp20 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(373)
								tmp20 = false;
							}
							HX_STACK_LINE(373)
							if ((tmp20)){
								HX_STACK_LINE(373)
								::String tmp21 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(373)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(373)
								HX_STACK_DO_THROW(tmp22);
							}
						}
						HX_STACK_LINE(373)
						{
							HX_STACK_LINE(373)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(373)
							bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(373)
							if ((tmp19)){
								HX_STACK_LINE(373)
								_this->_validate();
							}
						}
						HX_STACK_LINE(373)
						_g->zpp_inner->y;
					}
				}
			}
			HX_STACK_LINE(374)
			{
				HX_STACK_LINE(374)
				::nape::geom::Vec3 _g = ret;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(374)
				{
					HX_STACK_LINE(374)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(374)
					{
						HX_STACK_LINE(374)
						bool tmp15 = (_g != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(374)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(374)
						if ((tmp15)){
							HX_STACK_LINE(374)
							tmp16 = _g->zpp_disp;
						}
						else{
							HX_STACK_LINE(374)
							tmp16 = false;
						}
						HX_STACK_LINE(374)
						if ((tmp16)){
							HX_STACK_LINE(374)
							::String tmp17 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(374)
							::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(374)
							HX_STACK_DO_THROW(tmp18);
						}
						HX_STACK_LINE(374)
						{
							HX_STACK_LINE(374)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(374)
							bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(374)
							if ((tmp17)){
								HX_STACK_LINE(374)
								_this->_validate();
							}
						}
						HX_STACK_LINE(374)
						tmp14 = _g->zpp_inner->z;
					}
					HX_STACK_LINE(374)
					Float tmp15 = this->cx4;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(374)
					Float tmp16 = this->jAcc;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(374)
					Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(374)
					Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(374)
					Float z = tmp18;		HX_STACK_VAR(z,"z");
					HX_STACK_LINE(374)
					{
						HX_STACK_LINE(374)
						{
							HX_STACK_LINE(374)
							bool tmp19 = (_g != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(374)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(374)
							if ((tmp19)){
								HX_STACK_LINE(374)
								tmp20 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(374)
								tmp20 = false;
							}
							HX_STACK_LINE(374)
							if ((tmp20)){
								HX_STACK_LINE(374)
								::String tmp21 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(374)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(374)
								HX_STACK_DO_THROW(tmp22);
							}
						}
						HX_STACK_LINE(374)
						bool tmp19 = _g->zpp_inner->immutable;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(374)
						if ((tmp19)){
							HX_STACK_LINE(374)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec3 is immutable","\xbf","\x41","\xcd","\x7e"));
						}
						HX_STACK_LINE(374)
						_g->zpp_inner->z = z;
					}
					HX_STACK_LINE(374)
					{
						HX_STACK_LINE(374)
						{
							HX_STACK_LINE(374)
							bool tmp19 = (_g != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(374)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(374)
							if ((tmp19)){
								HX_STACK_LINE(374)
								tmp20 = _g->zpp_disp;
							}
							else{
								HX_STACK_LINE(374)
								tmp20 = false;
							}
							HX_STACK_LINE(374)
							if ((tmp20)){
								HX_STACK_LINE(374)
								::String tmp21 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(374)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(374)
								HX_STACK_DO_THROW(tmp22);
							}
						}
						HX_STACK_LINE(374)
						{
							HX_STACK_LINE(374)
							::zpp_nape::geom::ZPP_Vec3 _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(374)
							bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(374)
							if ((tmp19)){
								HX_STACK_LINE(374)
								_this->_validate();
							}
						}
						HX_STACK_LINE(374)
						_g->zpp_inner->z;
					}
				}
			}
		}
		HX_STACK_LINE(376)
		::nape::geom::Vec3 tmp14 = ret;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(376)
		return tmp14;
	}
	else{
		HX_STACK_LINE(378)
		::nape::geom::Vec3 tmp1 = ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(378)
		return tmp1;
	}
	HX_STACK_LINE(354)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PulleyJoint_obj,bodyImpulse,return )

Void ZPP_PulleyJoint_obj::activeBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","activeBodies",0x0252eb98,"zpp_nape.constraint.ZPP_PulleyJoint.activeBodies","zpp_nape/constraint/PulleyJoint.hx",380,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(381)
		{
			HX_STACK_LINE(382)
			::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(382)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(382)
			if ((tmp1)){
				HX_STACK_LINE(382)
				::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(382)
				tmp2->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(384)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(384)
		::zpp_nape::phys::ZPP_Body tmp1 = this->b1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(384)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(384)
		if ((tmp2)){
			HX_STACK_LINE(385)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(385)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(385)
			if ((tmp4)){
				HX_STACK_LINE(385)
				::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(385)
				tmp5->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(387)
		::zpp_nape::phys::ZPP_Body tmp3 = this->b3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(387)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(387)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(387)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(387)
		if ((tmp5)){
			HX_STACK_LINE(387)
			::zpp_nape::phys::ZPP_Body tmp7 = this->b3;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(387)
			::zpp_nape::phys::ZPP_Body tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(387)
			::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(387)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(387)
			tmp6 = (tmp8 != tmp10);
		}
		else{
			HX_STACK_LINE(387)
			tmp6 = false;
		}
		HX_STACK_LINE(387)
		if ((tmp6)){
			HX_STACK_LINE(388)
			::zpp_nape::phys::ZPP_Body tmp7 = this->b3;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(388)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(388)
			if ((tmp8)){
				HX_STACK_LINE(388)
				::zpp_nape::phys::ZPP_Body tmp9 = this->b3;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(388)
				tmp9->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(390)
		::zpp_nape::phys::ZPP_Body tmp7 = this->b4;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(390)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(390)
		bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(390)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(390)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(390)
		if ((tmp10)){
			HX_STACK_LINE(390)
			::zpp_nape::phys::ZPP_Body tmp12 = this->b4;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(390)
			::zpp_nape::phys::ZPP_Body tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(390)
			::zpp_nape::phys::ZPP_Body tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(390)
			::zpp_nape::phys::ZPP_Body tmp15 = this->b2;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(390)
			::zpp_nape::phys::ZPP_Body tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(390)
			::zpp_nape::phys::ZPP_Body tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(390)
			tmp11 = (tmp14 != tmp17);
		}
		else{
			HX_STACK_LINE(390)
			tmp11 = false;
		}
		HX_STACK_LINE(390)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(390)
		if ((tmp11)){
			HX_STACK_LINE(390)
			::zpp_nape::phys::ZPP_Body tmp13 = this->b4;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(390)
			::zpp_nape::phys::ZPP_Body tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(390)
			::zpp_nape::phys::ZPP_Body tmp15 = this->b3;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(390)
			::zpp_nape::phys::ZPP_Body tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(390)
			tmp12 = (tmp14 != tmp16);
		}
		else{
			HX_STACK_LINE(390)
			tmp12 = false;
		}
		HX_STACK_LINE(390)
		if ((tmp12)){
			HX_STACK_LINE(391)
			::zpp_nape::phys::ZPP_Body tmp13 = this->b4;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(391)
			bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(391)
			if ((tmp14)){
				HX_STACK_LINE(391)
				::zpp_nape::phys::ZPP_Body tmp15 = this->b4;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(391)
				tmp15->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_PulleyJoint_obj::inactiveBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","inactiveBodies",0x41095b7d,"zpp_nape.constraint.ZPP_PulleyJoint.inactiveBodies","zpp_nape/constraint/PulleyJoint.hx",394,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(395)
		{
			HX_STACK_LINE(396)
			::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(396)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(396)
			if ((tmp1)){
				HX_STACK_LINE(396)
				::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(396)
				tmp2->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(398)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(398)
		::zpp_nape::phys::ZPP_Body tmp1 = this->b1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(398)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(398)
		if ((tmp2)){
			HX_STACK_LINE(399)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(399)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(399)
			if ((tmp4)){
				HX_STACK_LINE(399)
				::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(399)
				tmp5->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(401)
		::zpp_nape::phys::ZPP_Body tmp3 = this->b3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(401)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(401)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(401)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(401)
		if ((tmp5)){
			HX_STACK_LINE(401)
			::zpp_nape::phys::ZPP_Body tmp7 = this->b3;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(401)
			::zpp_nape::phys::ZPP_Body tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(401)
			::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(401)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(401)
			tmp6 = (tmp8 != tmp10);
		}
		else{
			HX_STACK_LINE(401)
			tmp6 = false;
		}
		HX_STACK_LINE(401)
		if ((tmp6)){
			HX_STACK_LINE(402)
			::zpp_nape::phys::ZPP_Body tmp7 = this->b3;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(402)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(402)
			if ((tmp8)){
				HX_STACK_LINE(402)
				::zpp_nape::phys::ZPP_Body tmp9 = this->b3;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(402)
				tmp9->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(404)
		::zpp_nape::phys::ZPP_Body tmp7 = this->b4;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(404)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(404)
		bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(404)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(404)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(404)
		if ((tmp10)){
			HX_STACK_LINE(404)
			::zpp_nape::phys::ZPP_Body tmp12 = this->b4;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(404)
			::zpp_nape::phys::ZPP_Body tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(404)
			::zpp_nape::phys::ZPP_Body tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(404)
			::zpp_nape::phys::ZPP_Body tmp15 = this->b2;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(404)
			::zpp_nape::phys::ZPP_Body tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(404)
			::zpp_nape::phys::ZPP_Body tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(404)
			tmp11 = (tmp14 != tmp17);
		}
		else{
			HX_STACK_LINE(404)
			tmp11 = false;
		}
		HX_STACK_LINE(404)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(404)
		if ((tmp11)){
			HX_STACK_LINE(404)
			::zpp_nape::phys::ZPP_Body tmp13 = this->b4;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(404)
			::zpp_nape::phys::ZPP_Body tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(404)
			::zpp_nape::phys::ZPP_Body tmp15 = this->b3;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(404)
			::zpp_nape::phys::ZPP_Body tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(404)
			tmp12 = (tmp14 != tmp16);
		}
		else{
			HX_STACK_LINE(404)
			tmp12 = false;
		}
		HX_STACK_LINE(404)
		if ((tmp12)){
			HX_STACK_LINE(405)
			::zpp_nape::phys::ZPP_Body tmp13 = this->b4;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(405)
			bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(405)
			if ((tmp14)){
				HX_STACK_LINE(405)
				::zpp_nape::phys::ZPP_Body tmp15 = this->b4;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(405)
				tmp15->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_PulleyJoint_obj::validate_a1( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","validate_a1",0xc3155687,"zpp_nape.constraint.ZPP_PulleyJoint.validate_a1","zpp_nape/constraint/PulleyJoint.hx",414,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(415)
		Float tmp = this->a1localx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(415)
		::nape::geom::Vec2 tmp1 = this->wrap_a1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(415)
		tmp1->zpp_inner->x = tmp;
		HX_STACK_LINE(416)
		Float tmp2 = this->a1localy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(416)
		::nape::geom::Vec2 tmp3 = this->wrap_a1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(416)
		tmp3->zpp_inner->y = tmp2;
		HX_STACK_LINE(425)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,validate_a1,(void))

Void ZPP_PulleyJoint_obj::invalidate_a1( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","invalidate_a1",0xced82a42,"zpp_nape.constraint.ZPP_PulleyJoint.invalidate_a1","zpp_nape/constraint/PulleyJoint.hx",435,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(436)
		::String tmp = HX_HCSTRING("Constraint::a1","\x6d","\x3e","\xe8","\x0d");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(436)
		this->immutable_midstep(tmp);
		HX_STACK_LINE(437)
		{
			HX_STACK_LINE(438)
			this->a1localx = x->x;
			HX_STACK_LINE(439)
			this->a1localy = x->y;
			HX_STACK_LINE(448)
			{
			}
		}
		HX_STACK_LINE(457)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PulleyJoint_obj,invalidate_a1,(void))

Void ZPP_PulleyJoint_obj::setup_a1( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","setup_a1",0x08a06924,"zpp_nape.constraint.ZPP_PulleyJoint.setup_a1","zpp_nape/constraint/PulleyJoint.hx",459,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(460)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(460)
		{
			HX_STACK_LINE(460)
			Float tmp1 = this->a1localx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(460)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(460)
			Float tmp2 = this->a1localy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(460)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(460)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(460)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(460)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(460)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(460)
			if ((tmp4)){
				HX_STACK_LINE(460)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(460)
				tmp5 = true;
			}
			HX_STACK_LINE(460)
			if ((tmp5)){
				HX_STACK_LINE(460)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(460)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(460)
			{
				HX_STACK_LINE(460)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(460)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(460)
				if ((tmp7)){
					HX_STACK_LINE(460)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(460)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(460)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(460)
					ret = tmp8;
					HX_STACK_LINE(460)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(460)
					ret->zpp_pool = null();
					HX_STACK_LINE(460)
					ret->zpp_disp = false;
					HX_STACK_LINE(460)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(460)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(460)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(460)
					if ((tmp11)){
						HX_STACK_LINE(460)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(460)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(460)
			if ((tmp6)){
				HX_STACK_LINE(460)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(460)
				{
					HX_STACK_LINE(460)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(460)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(460)
					{
						HX_STACK_LINE(460)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(460)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(460)
						if ((tmp9)){
							HX_STACK_LINE(460)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(460)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(460)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(460)
							ret1 = tmp10;
							HX_STACK_LINE(460)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(460)
							ret1->next = null();
						}
						HX_STACK_LINE(460)
						ret1->weak = false;
					}
					HX_STACK_LINE(460)
					ret1->_immutable = immutable;
					HX_STACK_LINE(460)
					{
						HX_STACK_LINE(460)
						ret1->x = x;
						HX_STACK_LINE(460)
						ret1->y = y;
						HX_STACK_LINE(460)
						{
						}
					}
					HX_STACK_LINE(460)
					tmp7 = ret1;
				}
				HX_STACK_LINE(460)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(460)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(460)
				{
					HX_STACK_LINE(460)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(460)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(460)
					if ((tmp7)){
						HX_STACK_LINE(460)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(460)
						tmp8 = false;
					}
					HX_STACK_LINE(460)
					if ((tmp8)){
						HX_STACK_LINE(460)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(460)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(460)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(460)
				{
					HX_STACK_LINE(460)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(460)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(460)
					if ((tmp7)){
						HX_STACK_LINE(460)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(460)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(460)
					if ((tmp8)){
						HX_STACK_LINE(460)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(460)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(460)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(460)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(460)
				if ((tmp8)){
					HX_STACK_LINE(460)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(460)
					tmp9 = true;
				}
				HX_STACK_LINE(460)
				if ((tmp9)){
					HX_STACK_LINE(460)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(460)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(460)
				{
					HX_STACK_LINE(460)
					{
						HX_STACK_LINE(460)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(460)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(460)
						if ((tmp11)){
							HX_STACK_LINE(460)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(460)
							tmp12 = false;
						}
						HX_STACK_LINE(460)
						if ((tmp12)){
							HX_STACK_LINE(460)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(460)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(460)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(460)
					{
						HX_STACK_LINE(460)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(460)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(460)
						if ((tmp11)){
							HX_STACK_LINE(460)
							_this->_validate();
						}
					}
					HX_STACK_LINE(460)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(460)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(460)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(460)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(460)
				if ((tmp12)){
					HX_STACK_LINE(460)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(460)
					{
						HX_STACK_LINE(460)
						{
							HX_STACK_LINE(460)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(460)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(460)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(460)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(460)
							if ((tmp18)){
								HX_STACK_LINE(460)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(460)
								tmp17 = false;
							}
							HX_STACK_LINE(460)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(460)
							if ((tmp19)){
								HX_STACK_LINE(460)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(460)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(460)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(460)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(460)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(460)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(460)
						{
							HX_STACK_LINE(460)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(460)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(460)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(460)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(460)
							if ((tmp17)){
								HX_STACK_LINE(460)
								_this->_validate();
							}
						}
						HX_STACK_LINE(460)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(460)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(460)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(460)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(460)
					tmp13 = false;
				}
				HX_STACK_LINE(460)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(460)
				if ((tmp14)){
					HX_STACK_LINE(460)
					{
						HX_STACK_LINE(460)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(460)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(460)
						{
						}
					}
					HX_STACK_LINE(460)
					{
						HX_STACK_LINE(460)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(460)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(460)
						if ((tmp15)){
							HX_STACK_LINE(460)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(460)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(460)
				ret;
			}
			HX_STACK_LINE(460)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(460)
			tmp = ret;
		}
		HX_STACK_LINE(460)
		this->wrap_a1 = tmp;
		HX_STACK_LINE(461)
		::nape::geom::Vec2 tmp1 = this->wrap_a1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(461)
		tmp1->zpp_inner->_inuse = true;
		HX_STACK_LINE(462)
		Dynamic tmp2 = this->validate_a1_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(462)
		::nape::geom::Vec2 tmp3 = this->wrap_a1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(462)
		tmp3->zpp_inner->_validate = tmp2;
		HX_STACK_LINE(463)
		Dynamic tmp4 = this->invalidate_a1_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(463)
		::nape::geom::Vec2 tmp5 = this->wrap_a1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(463)
		tmp5->zpp_inner->_invalidate = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,setup_a1,(void))

Void ZPP_PulleyJoint_obj::validate_a2( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","validate_a2",0xc3155688,"zpp_nape.constraint.ZPP_PulleyJoint.validate_a2","zpp_nape/constraint/PulleyJoint.hx",472,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(473)
		Float tmp = this->a2localx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(473)
		::nape::geom::Vec2 tmp1 = this->wrap_a2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(473)
		tmp1->zpp_inner->x = tmp;
		HX_STACK_LINE(474)
		Float tmp2 = this->a2localy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(474)
		::nape::geom::Vec2 tmp3 = this->wrap_a2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(474)
		tmp3->zpp_inner->y = tmp2;
		HX_STACK_LINE(483)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,validate_a2,(void))

Void ZPP_PulleyJoint_obj::invalidate_a2( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","invalidate_a2",0xced82a43,"zpp_nape.constraint.ZPP_PulleyJoint.invalidate_a2","zpp_nape/constraint/PulleyJoint.hx",493,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(494)
		::String tmp = HX_HCSTRING("Constraint::a2","\x6e","\x3e","\xe8","\x0d");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(494)
		this->immutable_midstep(tmp);
		HX_STACK_LINE(495)
		{
			HX_STACK_LINE(496)
			this->a2localx = x->x;
			HX_STACK_LINE(497)
			this->a2localy = x->y;
			HX_STACK_LINE(506)
			{
			}
		}
		HX_STACK_LINE(515)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PulleyJoint_obj,invalidate_a2,(void))

Void ZPP_PulleyJoint_obj::setup_a2( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","setup_a2",0x08a06925,"zpp_nape.constraint.ZPP_PulleyJoint.setup_a2","zpp_nape/constraint/PulleyJoint.hx",517,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(518)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(518)
		{
			HX_STACK_LINE(518)
			Float tmp1 = this->a2localx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(518)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(518)
			Float tmp2 = this->a2localy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(518)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(518)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(518)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(518)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(518)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(518)
			if ((tmp4)){
				HX_STACK_LINE(518)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(518)
				tmp5 = true;
			}
			HX_STACK_LINE(518)
			if ((tmp5)){
				HX_STACK_LINE(518)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(518)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(518)
			{
				HX_STACK_LINE(518)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(518)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(518)
				if ((tmp7)){
					HX_STACK_LINE(518)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(518)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(518)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(518)
					ret = tmp8;
					HX_STACK_LINE(518)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(518)
					ret->zpp_pool = null();
					HX_STACK_LINE(518)
					ret->zpp_disp = false;
					HX_STACK_LINE(518)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(518)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(518)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(518)
					if ((tmp11)){
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(518)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(518)
			if ((tmp6)){
				HX_STACK_LINE(518)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(518)
				{
					HX_STACK_LINE(518)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(518)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(518)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(518)
						if ((tmp9)){
							HX_STACK_LINE(518)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(518)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(518)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(518)
							ret1 = tmp10;
							HX_STACK_LINE(518)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(518)
							ret1->next = null();
						}
						HX_STACK_LINE(518)
						ret1->weak = false;
					}
					HX_STACK_LINE(518)
					ret1->_immutable = immutable;
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						ret1->x = x;
						HX_STACK_LINE(518)
						ret1->y = y;
						HX_STACK_LINE(518)
						{
						}
					}
					HX_STACK_LINE(518)
					tmp7 = ret1;
				}
				HX_STACK_LINE(518)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(518)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(518)
				{
					HX_STACK_LINE(518)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(518)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(518)
					if ((tmp7)){
						HX_STACK_LINE(518)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(518)
						tmp8 = false;
					}
					HX_STACK_LINE(518)
					if ((tmp8)){
						HX_STACK_LINE(518)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(518)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(518)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(518)
				{
					HX_STACK_LINE(518)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(518)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(518)
					if ((tmp7)){
						HX_STACK_LINE(518)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(518)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(518)
					if ((tmp8)){
						HX_STACK_LINE(518)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(518)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(518)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(518)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(518)
				if ((tmp8)){
					HX_STACK_LINE(518)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(518)
					tmp9 = true;
				}
				HX_STACK_LINE(518)
				if ((tmp9)){
					HX_STACK_LINE(518)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(518)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(518)
				{
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(518)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(518)
						if ((tmp11)){
							HX_STACK_LINE(518)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(518)
							tmp12 = false;
						}
						HX_STACK_LINE(518)
						if ((tmp12)){
							HX_STACK_LINE(518)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(518)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(518)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(518)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(518)
						if ((tmp11)){
							HX_STACK_LINE(518)
							_this->_validate();
						}
					}
					HX_STACK_LINE(518)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(518)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(518)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(518)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(518)
				if ((tmp12)){
					HX_STACK_LINE(518)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(518)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(518)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(518)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(518)
							if ((tmp18)){
								HX_STACK_LINE(518)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(518)
								tmp17 = false;
							}
							HX_STACK_LINE(518)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(518)
							if ((tmp19)){
								HX_STACK_LINE(518)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(518)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(518)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(518)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(518)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(518)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(518)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(518)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(518)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(518)
							if ((tmp17)){
								HX_STACK_LINE(518)
								_this->_validate();
							}
						}
						HX_STACK_LINE(518)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(518)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(518)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(518)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(518)
					tmp13 = false;
				}
				HX_STACK_LINE(518)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(518)
				if ((tmp14)){
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(518)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(518)
						{
						}
					}
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(518)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(518)
						if ((tmp15)){
							HX_STACK_LINE(518)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(518)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(518)
				ret;
			}
			HX_STACK_LINE(518)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(518)
			tmp = ret;
		}
		HX_STACK_LINE(518)
		this->wrap_a2 = tmp;
		HX_STACK_LINE(519)
		::nape::geom::Vec2 tmp1 = this->wrap_a2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(519)
		tmp1->zpp_inner->_inuse = true;
		HX_STACK_LINE(520)
		Dynamic tmp2 = this->validate_a2_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(520)
		::nape::geom::Vec2 tmp3 = this->wrap_a2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(520)
		tmp3->zpp_inner->_validate = tmp2;
		HX_STACK_LINE(521)
		Dynamic tmp4 = this->invalidate_a2_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(521)
		::nape::geom::Vec2 tmp5 = this->wrap_a2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(521)
		tmp5->zpp_inner->_invalidate = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,setup_a2,(void))

Void ZPP_PulleyJoint_obj::validate_a3( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","validate_a3",0xc3155689,"zpp_nape.constraint.ZPP_PulleyJoint.validate_a3","zpp_nape/constraint/PulleyJoint.hx",530,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(531)
		Float tmp = this->a3localx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(531)
		::nape::geom::Vec2 tmp1 = this->wrap_a3;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(531)
		tmp1->zpp_inner->x = tmp;
		HX_STACK_LINE(532)
		Float tmp2 = this->a3localy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(532)
		::nape::geom::Vec2 tmp3 = this->wrap_a3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(532)
		tmp3->zpp_inner->y = tmp2;
		HX_STACK_LINE(541)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,validate_a3,(void))

Void ZPP_PulleyJoint_obj::invalidate_a3( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","invalidate_a3",0xced82a44,"zpp_nape.constraint.ZPP_PulleyJoint.invalidate_a3","zpp_nape/constraint/PulleyJoint.hx",551,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(552)
		::String tmp = HX_HCSTRING("Constraint::a3","\x6f","\x3e","\xe8","\x0d");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(552)
		this->immutable_midstep(tmp);
		HX_STACK_LINE(553)
		{
			HX_STACK_LINE(554)
			this->a3localx = x->x;
			HX_STACK_LINE(555)
			this->a3localy = x->y;
			HX_STACK_LINE(564)
			{
			}
		}
		HX_STACK_LINE(573)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PulleyJoint_obj,invalidate_a3,(void))

Void ZPP_PulleyJoint_obj::setup_a3( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","setup_a3",0x08a06926,"zpp_nape.constraint.ZPP_PulleyJoint.setup_a3","zpp_nape/constraint/PulleyJoint.hx",575,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(576)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(576)
		{
			HX_STACK_LINE(576)
			Float tmp1 = this->a3localx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(576)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(576)
			Float tmp2 = this->a3localy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(576)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(576)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(576)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(576)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(576)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(576)
			if ((tmp4)){
				HX_STACK_LINE(576)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(576)
				tmp5 = true;
			}
			HX_STACK_LINE(576)
			if ((tmp5)){
				HX_STACK_LINE(576)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(576)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(576)
			{
				HX_STACK_LINE(576)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(576)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(576)
				if ((tmp7)){
					HX_STACK_LINE(576)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(576)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(576)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(576)
					ret = tmp8;
					HX_STACK_LINE(576)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(576)
					ret->zpp_pool = null();
					HX_STACK_LINE(576)
					ret->zpp_disp = false;
					HX_STACK_LINE(576)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(576)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(576)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(576)
					if ((tmp11)){
						HX_STACK_LINE(576)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(576)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(576)
			if ((tmp6)){
				HX_STACK_LINE(576)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(576)
				{
					HX_STACK_LINE(576)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(576)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(576)
					{
						HX_STACK_LINE(576)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(576)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(576)
						if ((tmp9)){
							HX_STACK_LINE(576)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(576)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(576)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(576)
							ret1 = tmp10;
							HX_STACK_LINE(576)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(576)
							ret1->next = null();
						}
						HX_STACK_LINE(576)
						ret1->weak = false;
					}
					HX_STACK_LINE(576)
					ret1->_immutable = immutable;
					HX_STACK_LINE(576)
					{
						HX_STACK_LINE(576)
						ret1->x = x;
						HX_STACK_LINE(576)
						ret1->y = y;
						HX_STACK_LINE(576)
						{
						}
					}
					HX_STACK_LINE(576)
					tmp7 = ret1;
				}
				HX_STACK_LINE(576)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(576)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(576)
				{
					HX_STACK_LINE(576)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(576)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(576)
					if ((tmp7)){
						HX_STACK_LINE(576)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(576)
						tmp8 = false;
					}
					HX_STACK_LINE(576)
					if ((tmp8)){
						HX_STACK_LINE(576)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(576)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(576)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(576)
				{
					HX_STACK_LINE(576)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(576)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(576)
					if ((tmp7)){
						HX_STACK_LINE(576)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(576)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(576)
					if ((tmp8)){
						HX_STACK_LINE(576)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(576)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(576)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(576)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(576)
				if ((tmp8)){
					HX_STACK_LINE(576)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(576)
					tmp9 = true;
				}
				HX_STACK_LINE(576)
				if ((tmp9)){
					HX_STACK_LINE(576)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(576)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(576)
				{
					HX_STACK_LINE(576)
					{
						HX_STACK_LINE(576)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(576)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(576)
						if ((tmp11)){
							HX_STACK_LINE(576)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(576)
							tmp12 = false;
						}
						HX_STACK_LINE(576)
						if ((tmp12)){
							HX_STACK_LINE(576)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(576)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(576)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(576)
					{
						HX_STACK_LINE(576)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(576)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(576)
						if ((tmp11)){
							HX_STACK_LINE(576)
							_this->_validate();
						}
					}
					HX_STACK_LINE(576)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(576)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(576)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(576)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(576)
				if ((tmp12)){
					HX_STACK_LINE(576)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(576)
					{
						HX_STACK_LINE(576)
						{
							HX_STACK_LINE(576)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(576)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(576)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(576)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(576)
							if ((tmp18)){
								HX_STACK_LINE(576)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(576)
								tmp17 = false;
							}
							HX_STACK_LINE(576)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(576)
							if ((tmp19)){
								HX_STACK_LINE(576)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(576)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(576)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(576)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(576)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(576)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(576)
						{
							HX_STACK_LINE(576)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(576)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(576)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(576)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(576)
							if ((tmp17)){
								HX_STACK_LINE(576)
								_this->_validate();
							}
						}
						HX_STACK_LINE(576)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(576)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(576)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(576)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(576)
					tmp13 = false;
				}
				HX_STACK_LINE(576)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(576)
				if ((tmp14)){
					HX_STACK_LINE(576)
					{
						HX_STACK_LINE(576)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(576)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(576)
						{
						}
					}
					HX_STACK_LINE(576)
					{
						HX_STACK_LINE(576)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(576)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(576)
						if ((tmp15)){
							HX_STACK_LINE(576)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(576)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(576)
				ret;
			}
			HX_STACK_LINE(576)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(576)
			tmp = ret;
		}
		HX_STACK_LINE(576)
		this->wrap_a3 = tmp;
		HX_STACK_LINE(577)
		::nape::geom::Vec2 tmp1 = this->wrap_a3;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(577)
		tmp1->zpp_inner->_inuse = true;
		HX_STACK_LINE(578)
		Dynamic tmp2 = this->validate_a3_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(578)
		::nape::geom::Vec2 tmp3 = this->wrap_a3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(578)
		tmp3->zpp_inner->_validate = tmp2;
		HX_STACK_LINE(579)
		Dynamic tmp4 = this->invalidate_a3_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(579)
		::nape::geom::Vec2 tmp5 = this->wrap_a3;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(579)
		tmp5->zpp_inner->_invalidate = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,setup_a3,(void))

Void ZPP_PulleyJoint_obj::validate_a4( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","validate_a4",0xc315568a,"zpp_nape.constraint.ZPP_PulleyJoint.validate_a4","zpp_nape/constraint/PulleyJoint.hx",588,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(589)
		Float tmp = this->a4localx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(589)
		::nape::geom::Vec2 tmp1 = this->wrap_a4;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(589)
		tmp1->zpp_inner->x = tmp;
		HX_STACK_LINE(590)
		Float tmp2 = this->a4localy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(590)
		::nape::geom::Vec2 tmp3 = this->wrap_a4;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(590)
		tmp3->zpp_inner->y = tmp2;
		HX_STACK_LINE(599)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,validate_a4,(void))

Void ZPP_PulleyJoint_obj::invalidate_a4( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","invalidate_a4",0xced82a45,"zpp_nape.constraint.ZPP_PulleyJoint.invalidate_a4","zpp_nape/constraint/PulleyJoint.hx",609,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(610)
		::String tmp = HX_HCSTRING("Constraint::a4","\x70","\x3e","\xe8","\x0d");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(610)
		this->immutable_midstep(tmp);
		HX_STACK_LINE(611)
		{
			HX_STACK_LINE(612)
			this->a4localx = x->x;
			HX_STACK_LINE(613)
			this->a4localy = x->y;
			HX_STACK_LINE(622)
			{
			}
		}
		HX_STACK_LINE(631)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PulleyJoint_obj,invalidate_a4,(void))

Void ZPP_PulleyJoint_obj::setup_a4( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","setup_a4",0x08a06927,"zpp_nape.constraint.ZPP_PulleyJoint.setup_a4","zpp_nape/constraint/PulleyJoint.hx",633,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(634)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(634)
		{
			HX_STACK_LINE(634)
			Float tmp1 = this->a4localx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(634)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(634)
			Float tmp2 = this->a4localy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(634)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(634)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(634)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(634)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(634)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(634)
			if ((tmp4)){
				HX_STACK_LINE(634)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(634)
				tmp5 = true;
			}
			HX_STACK_LINE(634)
			if ((tmp5)){
				HX_STACK_LINE(634)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(634)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(634)
			{
				HX_STACK_LINE(634)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(634)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(634)
				if ((tmp7)){
					HX_STACK_LINE(634)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(634)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(634)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(634)
					ret = tmp8;
					HX_STACK_LINE(634)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(634)
					ret->zpp_pool = null();
					HX_STACK_LINE(634)
					ret->zpp_disp = false;
					HX_STACK_LINE(634)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(634)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(634)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(634)
					if ((tmp11)){
						HX_STACK_LINE(634)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(634)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(634)
			if ((tmp6)){
				HX_STACK_LINE(634)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(634)
				{
					HX_STACK_LINE(634)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(634)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(634)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(634)
						if ((tmp9)){
							HX_STACK_LINE(634)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(634)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(634)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(634)
							ret1 = tmp10;
							HX_STACK_LINE(634)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(634)
							ret1->next = null();
						}
						HX_STACK_LINE(634)
						ret1->weak = false;
					}
					HX_STACK_LINE(634)
					ret1->_immutable = immutable;
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						ret1->x = x;
						HX_STACK_LINE(634)
						ret1->y = y;
						HX_STACK_LINE(634)
						{
						}
					}
					HX_STACK_LINE(634)
					tmp7 = ret1;
				}
				HX_STACK_LINE(634)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(634)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(634)
				{
					HX_STACK_LINE(634)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(634)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(634)
					if ((tmp7)){
						HX_STACK_LINE(634)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(634)
						tmp8 = false;
					}
					HX_STACK_LINE(634)
					if ((tmp8)){
						HX_STACK_LINE(634)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(634)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(634)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(634)
				{
					HX_STACK_LINE(634)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(634)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(634)
					if ((tmp7)){
						HX_STACK_LINE(634)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(634)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(634)
					if ((tmp8)){
						HX_STACK_LINE(634)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(634)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(634)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(634)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(634)
				if ((tmp8)){
					HX_STACK_LINE(634)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(634)
					tmp9 = true;
				}
				HX_STACK_LINE(634)
				if ((tmp9)){
					HX_STACK_LINE(634)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(634)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(634)
				{
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(634)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(634)
						if ((tmp11)){
							HX_STACK_LINE(634)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(634)
							tmp12 = false;
						}
						HX_STACK_LINE(634)
						if ((tmp12)){
							HX_STACK_LINE(634)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(634)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(634)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(634)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(634)
						if ((tmp11)){
							HX_STACK_LINE(634)
							_this->_validate();
						}
					}
					HX_STACK_LINE(634)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(634)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(634)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(634)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(634)
				if ((tmp12)){
					HX_STACK_LINE(634)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						{
							HX_STACK_LINE(634)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(634)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(634)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(634)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(634)
							if ((tmp18)){
								HX_STACK_LINE(634)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(634)
								tmp17 = false;
							}
							HX_STACK_LINE(634)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(634)
							if ((tmp19)){
								HX_STACK_LINE(634)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(634)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(634)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(634)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(634)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(634)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(634)
						{
							HX_STACK_LINE(634)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(634)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(634)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(634)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(634)
							if ((tmp17)){
								HX_STACK_LINE(634)
								_this->_validate();
							}
						}
						HX_STACK_LINE(634)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(634)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(634)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(634)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(634)
					tmp13 = false;
				}
				HX_STACK_LINE(634)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(634)
				if ((tmp14)){
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(634)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(634)
						{
						}
					}
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(634)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(634)
						if ((tmp15)){
							HX_STACK_LINE(634)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(634)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(634)
				ret;
			}
			HX_STACK_LINE(634)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(634)
			tmp = ret;
		}
		HX_STACK_LINE(634)
		this->wrap_a4 = tmp;
		HX_STACK_LINE(635)
		::nape::geom::Vec2 tmp1 = this->wrap_a4;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(635)
		tmp1->zpp_inner->_inuse = true;
		HX_STACK_LINE(636)
		Dynamic tmp2 = this->validate_a4_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(636)
		::nape::geom::Vec2 tmp3 = this->wrap_a4;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(636)
		tmp3->zpp_inner->_validate = tmp2;
		HX_STACK_LINE(637)
		Dynamic tmp4 = this->invalidate_a4_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(637)
		::nape::geom::Vec2 tmp5 = this->wrap_a4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(637)
		tmp5->zpp_inner->_invalidate = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PulleyJoint_obj,setup_a4,(void))

::nape::constraint::Constraint ZPP_PulleyJoint_obj::copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","copy",0x722d3b67,"zpp_nape.constraint.ZPP_PulleyJoint.copy","zpp_nape/constraint/PulleyJoint.hx",646,0xdaffcadd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dict,"dict")
	HX_STACK_ARG(todo,"todo")
	HX_STACK_LINE(647)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(647)
	{
		HX_STACK_LINE(647)
		::nape::constraint::PulleyJoint tmp1 = this->outer_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(647)
		::nape::constraint::PulleyJoint _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(647)
		::nape::geom::Vec2 tmp2 = _this->zpp_inner_zn->wrap_a1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(647)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(647)
		if ((tmp3)){
			HX_STACK_LINE(647)
			_this->zpp_inner_zn->setup_a1();
		}
		HX_STACK_LINE(647)
		tmp = _this->zpp_inner_zn->wrap_a1;
	}
	HX_STACK_LINE(647)
	::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(647)
	{
		HX_STACK_LINE(647)
		::nape::constraint::PulleyJoint tmp2 = this->outer_zn;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(647)
		::nape::constraint::PulleyJoint _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(647)
		::nape::geom::Vec2 tmp3 = _this->zpp_inner_zn->wrap_a2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(647)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(647)
		if ((tmp4)){
			HX_STACK_LINE(647)
			_this->zpp_inner_zn->setup_a2();
		}
		HX_STACK_LINE(647)
		tmp1 = _this->zpp_inner_zn->wrap_a2;
	}
	HX_STACK_LINE(647)
	::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(647)
	{
		HX_STACK_LINE(647)
		::nape::constraint::PulleyJoint tmp3 = this->outer_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(647)
		::nape::constraint::PulleyJoint _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(647)
		::nape::geom::Vec2 tmp4 = _this->zpp_inner_zn->wrap_a3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(647)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(647)
		if ((tmp5)){
			HX_STACK_LINE(647)
			_this->zpp_inner_zn->setup_a3();
		}
		HX_STACK_LINE(647)
		tmp2 = _this->zpp_inner_zn->wrap_a3;
	}
	HX_STACK_LINE(647)
	::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(647)
	{
		HX_STACK_LINE(647)
		::nape::constraint::PulleyJoint tmp4 = this->outer_zn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(647)
		::nape::constraint::PulleyJoint _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(647)
		::nape::geom::Vec2 tmp5 = _this->zpp_inner_zn->wrap_a4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(647)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(647)
		if ((tmp6)){
			HX_STACK_LINE(647)
			_this->zpp_inner_zn->setup_a4();
		}
		HX_STACK_LINE(647)
		tmp3 = _this->zpp_inner_zn->wrap_a4;
	}
	HX_STACK_LINE(647)
	Float tmp4 = this->jointMin;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(647)
	Float tmp5 = this->jointMax;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(647)
	Float tmp6 = this->ratio;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(647)
	::nape::constraint::PulleyJoint tmp7 = ::nape::constraint::PulleyJoint_obj::__new(null(),null(),null(),null(),tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(647)
	::nape::constraint::PulleyJoint ret = tmp7;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(648)
	::nape::constraint::PulleyJoint tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(648)
	this->copyto(tmp8);
	HX_STACK_LINE(649)
	{
		HX_STACK_LINE(650)
		bool tmp9 = (dict != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(650)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(650)
		if ((tmp9)){
			HX_STACK_LINE(650)
			::zpp_nape::phys::ZPP_Body tmp11 = this->b1;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(650)
			::zpp_nape::phys::ZPP_Body tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(650)
			tmp10 = (tmp12 != null());
		}
		else{
			HX_STACK_LINE(650)
			tmp10 = false;
		}
		HX_STACK_LINE(650)
		if ((tmp10)){
			HX_STACK_LINE(659)
			::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(660)
			{
				HX_STACK_LINE(660)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(660)
				while((true)){
					HX_STACK_LINE(660)
					bool tmp11 = (_g < dict->length);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(660)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(660)
					if ((tmp12)){
						HX_STACK_LINE(660)
						break;
					}
					HX_STACK_LINE(660)
					::zpp_nape::constraint::ZPP_CopyHelper tmp13 = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(660)
					::zpp_nape::constraint::ZPP_CopyHelper idc = tmp13;		HX_STACK_VAR(idc,"idc");
					HX_STACK_LINE(660)
					++(_g);
					HX_STACK_LINE(661)
					int tmp14 = idc->id;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(661)
					::zpp_nape::phys::ZPP_Body tmp15 = this->b1;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(661)
					int tmp16 = tmp15->id;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(661)
					bool tmp17 = (tmp14 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(661)
					if ((tmp17)){
						HX_STACK_LINE(662)
						b = idc->bc;
						HX_STACK_LINE(663)
						break;
					}
				}
			}
			HX_STACK_LINE(666)
			bool tmp11 = (b != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(666)
			if ((tmp11)){
				HX_STACK_LINE(666)
				ret->zpp_inner_zn->b1 = b->zpp_inner;
			}
			else{
				HX_STACK_LINE(667)
				::zpp_nape::phys::ZPP_Body tmp12 = this->b1;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(667)
				int tmp13 = tmp12->id;		HX_STACK_VAR(tmp13,"tmp13");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::nape::constraint::PulleyJoint,ret)
				int __ArgCount() const { return 1; }
				Void run(::nape::phys::Body b1){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","zpp_nape/constraint/PulleyJoint.hx",667,0xdaffcadd)
					HX_STACK_ARG(b1,"b1")
					{
						HX_STACK_LINE(667)
						ret->zpp_inner_zn->b1 = b1->zpp_inner;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(667)
				::zpp_nape::constraint::ZPP_CopyHelper tmp14 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(tmp13, Dynamic(new _Function_4_1(ret)));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(667)
				todo->push(tmp14);
			}
		}
	}
	HX_STACK_LINE(670)
	{
		HX_STACK_LINE(671)
		bool tmp9 = (dict != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(671)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(671)
		if ((tmp9)){
			HX_STACK_LINE(671)
			::zpp_nape::phys::ZPP_Body tmp11 = this->b2;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(671)
			::zpp_nape::phys::ZPP_Body tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(671)
			tmp10 = (tmp12 != null());
		}
		else{
			HX_STACK_LINE(671)
			tmp10 = false;
		}
		HX_STACK_LINE(671)
		if ((tmp10)){
			HX_STACK_LINE(680)
			::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(681)
			{
				HX_STACK_LINE(681)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(681)
				while((true)){
					HX_STACK_LINE(681)
					bool tmp11 = (_g < dict->length);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(681)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(681)
					if ((tmp12)){
						HX_STACK_LINE(681)
						break;
					}
					HX_STACK_LINE(681)
					::zpp_nape::constraint::ZPP_CopyHelper tmp13 = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(681)
					::zpp_nape::constraint::ZPP_CopyHelper idc = tmp13;		HX_STACK_VAR(idc,"idc");
					HX_STACK_LINE(681)
					++(_g);
					HX_STACK_LINE(682)
					int tmp14 = idc->id;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(682)
					::zpp_nape::phys::ZPP_Body tmp15 = this->b2;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(682)
					int tmp16 = tmp15->id;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(682)
					bool tmp17 = (tmp14 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(682)
					if ((tmp17)){
						HX_STACK_LINE(683)
						b = idc->bc;
						HX_STACK_LINE(684)
						break;
					}
				}
			}
			HX_STACK_LINE(687)
			bool tmp11 = (b != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(687)
			if ((tmp11)){
				HX_STACK_LINE(687)
				ret->zpp_inner_zn->b2 = b->zpp_inner;
			}
			else{
				HX_STACK_LINE(688)
				::zpp_nape::phys::ZPP_Body tmp12 = this->b2;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(688)
				int tmp13 = tmp12->id;		HX_STACK_VAR(tmp13,"tmp13");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::nape::constraint::PulleyJoint,ret)
				int __ArgCount() const { return 1; }
				Void run(::nape::phys::Body b1){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","zpp_nape/constraint/PulleyJoint.hx",688,0xdaffcadd)
					HX_STACK_ARG(b1,"b1")
					{
						HX_STACK_LINE(688)
						ret->zpp_inner_zn->b2 = b1->zpp_inner;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(688)
				::zpp_nape::constraint::ZPP_CopyHelper tmp14 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(tmp13, Dynamic(new _Function_4_1(ret)));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(688)
				todo->push(tmp14);
			}
		}
	}
	HX_STACK_LINE(691)
	{
		HX_STACK_LINE(692)
		bool tmp9 = (dict != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(692)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(692)
		if ((tmp9)){
			HX_STACK_LINE(692)
			::zpp_nape::phys::ZPP_Body tmp11 = this->b3;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(692)
			::zpp_nape::phys::ZPP_Body tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(692)
			tmp10 = (tmp12 != null());
		}
		else{
			HX_STACK_LINE(692)
			tmp10 = false;
		}
		HX_STACK_LINE(692)
		if ((tmp10)){
			HX_STACK_LINE(701)
			::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(702)
			{
				HX_STACK_LINE(702)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(702)
				while((true)){
					HX_STACK_LINE(702)
					bool tmp11 = (_g < dict->length);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(702)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(702)
					if ((tmp12)){
						HX_STACK_LINE(702)
						break;
					}
					HX_STACK_LINE(702)
					::zpp_nape::constraint::ZPP_CopyHelper tmp13 = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(702)
					::zpp_nape::constraint::ZPP_CopyHelper idc = tmp13;		HX_STACK_VAR(idc,"idc");
					HX_STACK_LINE(702)
					++(_g);
					HX_STACK_LINE(703)
					int tmp14 = idc->id;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(703)
					::zpp_nape::phys::ZPP_Body tmp15 = this->b3;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(703)
					int tmp16 = tmp15->id;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(703)
					bool tmp17 = (tmp14 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(703)
					if ((tmp17)){
						HX_STACK_LINE(704)
						b = idc->bc;
						HX_STACK_LINE(705)
						break;
					}
				}
			}
			HX_STACK_LINE(708)
			bool tmp11 = (b != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(708)
			if ((tmp11)){
				HX_STACK_LINE(708)
				ret->zpp_inner_zn->b3 = b->zpp_inner;
			}
			else{
				HX_STACK_LINE(709)
				::zpp_nape::phys::ZPP_Body tmp12 = this->b3;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(709)
				int tmp13 = tmp12->id;		HX_STACK_VAR(tmp13,"tmp13");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::nape::constraint::PulleyJoint,ret)
				int __ArgCount() const { return 1; }
				Void run(::nape::phys::Body b1){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","zpp_nape/constraint/PulleyJoint.hx",709,0xdaffcadd)
					HX_STACK_ARG(b1,"b1")
					{
						HX_STACK_LINE(709)
						ret->zpp_inner_zn->b3 = b1->zpp_inner;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(709)
				::zpp_nape::constraint::ZPP_CopyHelper tmp14 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(tmp13, Dynamic(new _Function_4_1(ret)));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(709)
				todo->push(tmp14);
			}
		}
	}
	HX_STACK_LINE(712)
	{
		HX_STACK_LINE(713)
		bool tmp9 = (dict != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(713)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(713)
		if ((tmp9)){
			HX_STACK_LINE(713)
			::zpp_nape::phys::ZPP_Body tmp11 = this->b4;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(713)
			::zpp_nape::phys::ZPP_Body tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(713)
			tmp10 = (tmp12 != null());
		}
		else{
			HX_STACK_LINE(713)
			tmp10 = false;
		}
		HX_STACK_LINE(713)
		if ((tmp10)){
			HX_STACK_LINE(722)
			::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(723)
			{
				HX_STACK_LINE(723)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(723)
				while((true)){
					HX_STACK_LINE(723)
					bool tmp11 = (_g < dict->length);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(723)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(723)
					if ((tmp12)){
						HX_STACK_LINE(723)
						break;
					}
					HX_STACK_LINE(723)
					::zpp_nape::constraint::ZPP_CopyHelper tmp13 = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(723)
					::zpp_nape::constraint::ZPP_CopyHelper idc = tmp13;		HX_STACK_VAR(idc,"idc");
					HX_STACK_LINE(723)
					++(_g);
					HX_STACK_LINE(724)
					int tmp14 = idc->id;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(724)
					::zpp_nape::phys::ZPP_Body tmp15 = this->b4;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(724)
					int tmp16 = tmp15->id;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(724)
					bool tmp17 = (tmp14 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(724)
					if ((tmp17)){
						HX_STACK_LINE(725)
						b = idc->bc;
						HX_STACK_LINE(726)
						break;
					}
				}
			}
			HX_STACK_LINE(729)
			bool tmp11 = (b != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(729)
			if ((tmp11)){
				HX_STACK_LINE(729)
				ret->zpp_inner_zn->b4 = b->zpp_inner;
			}
			else{
				HX_STACK_LINE(730)
				::zpp_nape::phys::ZPP_Body tmp12 = this->b4;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(730)
				int tmp13 = tmp12->id;		HX_STACK_VAR(tmp13,"tmp13");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::nape::constraint::PulleyJoint,ret)
				int __ArgCount() const { return 1; }
				Void run(::nape::phys::Body b1){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","zpp_nape/constraint/PulleyJoint.hx",730,0xdaffcadd)
					HX_STACK_ARG(b1,"b1")
					{
						HX_STACK_LINE(730)
						ret->zpp_inner_zn->b4 = b1->zpp_inner;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(730)
				::zpp_nape::constraint::ZPP_CopyHelper tmp14 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(tmp13, Dynamic(new _Function_4_1(ret)));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(730)
				todo->push(tmp14);
			}
		}
	}
	HX_STACK_LINE(733)
	::nape::constraint::PulleyJoint tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(733)
	return tmp9;
}


Void ZPP_PulleyJoint_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","validate",0xea4b1148,"zpp_nape.constraint.ZPP_PulleyJoint.validate","zpp_nape/constraint/PulleyJoint.hx",950,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(951)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(951)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(951)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(951)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(951)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(951)
		if ((tmp3)){
			HX_STACK_LINE(951)
			::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(951)
			::zpp_nape::phys::ZPP_Body tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(951)
			::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(951)
			tmp4 = (tmp7 == null());
		}
		else{
			HX_STACK_LINE(951)
			tmp4 = true;
		}
		HX_STACK_LINE(951)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(951)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(951)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(951)
		if ((tmp6)){
			HX_STACK_LINE(951)
			::zpp_nape::phys::ZPP_Body tmp8 = this->b3;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(951)
			::zpp_nape::phys::ZPP_Body tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(951)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(951)
			tmp7 = (tmp10 == null());
		}
		else{
			HX_STACK_LINE(951)
			tmp7 = true;
		}
		HX_STACK_LINE(951)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(951)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(951)
		if ((tmp8)){
			HX_STACK_LINE(951)
			::zpp_nape::phys::ZPP_Body tmp10 = this->b4;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(951)
			::zpp_nape::phys::ZPP_Body tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(951)
			tmp9 = (tmp11 == null());
		}
		else{
			HX_STACK_LINE(951)
			tmp9 = true;
		}
		HX_STACK_LINE(951)
		if ((tmp9)){
			HX_STACK_LINE(951)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: PulleyJoint cannot be simulated with null bodies","\xfc","\xbf","\x51","\x2e"));
		}
		HX_STACK_LINE(952)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(952)
		::zpp_nape::phys::ZPP_Body tmp11 = this->b2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(952)
		bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(952)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(952)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(952)
		if ((tmp13)){
			HX_STACK_LINE(952)
			::zpp_nape::phys::ZPP_Body tmp15 = this->b3;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(952)
			::zpp_nape::phys::ZPP_Body tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(952)
			::zpp_nape::phys::ZPP_Body tmp17 = this->b4;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(952)
			::zpp_nape::phys::ZPP_Body tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(952)
			tmp14 = (tmp16 == tmp18);
		}
		else{
			HX_STACK_LINE(952)
			tmp14 = true;
		}
		HX_STACK_LINE(952)
		if ((tmp14)){
			HX_STACK_LINE(952)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: PulleyJoint cannot have body1==body2 or body3==body4","\xf7","\xec","\x91","\x21"));
		}
		HX_STACK_LINE(953)
		::zpp_nape::phys::ZPP_Body tmp15 = this->b1;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(953)
		::zpp_nape::space::ZPP_Space tmp16 = tmp15->space;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(953)
		::zpp_nape::space::ZPP_Space tmp17 = this->space;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(953)
		bool tmp18 = (tmp16 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(953)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(953)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(953)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(953)
		if ((tmp20)){
			HX_STACK_LINE(953)
			::zpp_nape::phys::ZPP_Body tmp22 = this->b2;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(953)
			::zpp_nape::phys::ZPP_Body tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(953)
			::zpp_nape::phys::ZPP_Body tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(953)
			::zpp_nape::space::ZPP_Space tmp25 = tmp24->space;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(953)
			::zpp_nape::space::ZPP_Space tmp26 = this->space;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(953)
			::zpp_nape::space::ZPP_Space tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(953)
			::zpp_nape::space::ZPP_Space tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(953)
			tmp21 = (tmp25 != tmp28);
		}
		else{
			HX_STACK_LINE(953)
			tmp21 = true;
		}
		HX_STACK_LINE(953)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(953)
		bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(953)
		bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(953)
		if ((tmp23)){
			HX_STACK_LINE(953)
			::zpp_nape::phys::ZPP_Body tmp25 = this->b3;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(953)
			::zpp_nape::phys::ZPP_Body tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(953)
			::zpp_nape::phys::ZPP_Body tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(953)
			::zpp_nape::space::ZPP_Space tmp28 = tmp27->space;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(953)
			::zpp_nape::space::ZPP_Space tmp29 = this->space;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(953)
			::zpp_nape::space::ZPP_Space tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(953)
			::zpp_nape::space::ZPP_Space tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(953)
			tmp24 = (tmp28 != tmp31);
		}
		else{
			HX_STACK_LINE(953)
			tmp24 = true;
		}
		HX_STACK_LINE(953)
		bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(953)
		bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(953)
		if ((tmp25)){
			HX_STACK_LINE(953)
			::zpp_nape::phys::ZPP_Body tmp27 = this->b4;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(953)
			::zpp_nape::phys::ZPP_Body tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(953)
			::zpp_nape::space::ZPP_Space tmp29 = tmp28->space;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(953)
			::zpp_nape::space::ZPP_Space tmp30 = this->space;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(953)
			::zpp_nape::space::ZPP_Space tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(953)
			tmp26 = (tmp29 != tmp31);
		}
		else{
			HX_STACK_LINE(953)
			tmp26 = true;
		}
		HX_STACK_LINE(953)
		if ((tmp26)){
			HX_STACK_LINE(953)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraints must have each body within the same space to which the constraint has been assigned","\xe8","\x8c","\x93","\x57"));
		}
		HX_STACK_LINE(954)
		Float tmp27 = this->jointMin;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(954)
		Float tmp28 = this->jointMax;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(954)
		bool tmp29 = (tmp27 > tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(954)
		if ((tmp29)){
			HX_STACK_LINE(954)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: PulleyJoint must have jointMin <= jointMax","\x3f","\x77","\x0d","\xdb"));
		}
		HX_STACK_LINE(955)
		::zpp_nape::phys::ZPP_Body tmp30 = this->b1;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(955)
		int tmp31 = tmp30->type;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(955)
		int tmp32 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(955)
		bool tmp33 = (tmp31 == tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(955)
		bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(955)
		bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(955)
		bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(955)
		if ((tmp35)){
			HX_STACK_LINE(955)
			::zpp_nape::phys::ZPP_Body tmp37 = this->b2;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(955)
			::zpp_nape::phys::ZPP_Body tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(955)
			int tmp39 = tmp38->type;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(955)
			int tmp40 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(955)
			int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(955)
			bool tmp42 = (tmp39 == tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(955)
			bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(955)
			bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(955)
			tmp36 = !(tmp44);
		}
		else{
			HX_STACK_LINE(955)
			tmp36 = false;
		}
		HX_STACK_LINE(955)
		if ((tmp36)){
			HX_STACK_LINE(955)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: PulleyJoint cannot have both bodies in a linked pair non-dynamic","\x9f","\xa4","\x74","\x61"));
		}
		HX_STACK_LINE(956)
		::zpp_nape::phys::ZPP_Body tmp37 = this->b3;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(956)
		int tmp38 = tmp37->type;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(956)
		int tmp39 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(956)
		bool tmp40 = (tmp38 == tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(956)
		bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(956)
		bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(956)
		bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(956)
		if ((tmp42)){
			HX_STACK_LINE(956)
			::zpp_nape::phys::ZPP_Body tmp44 = this->b4;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(956)
			::zpp_nape::phys::ZPP_Body tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(956)
			int tmp46 = tmp45->type;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(956)
			int tmp47 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(956)
			int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(956)
			bool tmp49 = (tmp46 == tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(956)
			bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(956)
			bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(956)
			tmp43 = !(tmp51);
		}
		else{
			HX_STACK_LINE(956)
			tmp43 = false;
		}
		HX_STACK_LINE(956)
		if ((tmp43)){
			HX_STACK_LINE(956)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: PulleyJoint cannot have both bodies in a linked pair non-dynamic","\x9f","\xa4","\x74","\x61"));
		}
	}
return null();
}


Void ZPP_PulleyJoint_obj::wake_connected( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","wake_connected",0xf221a1e0,"zpp_nape.constraint.ZPP_PulleyJoint.wake_connected","zpp_nape/constraint/PulleyJoint.hx",958,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(959)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(959)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(959)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(959)
		if ((tmp1)){
			HX_STACK_LINE(959)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(959)
			::zpp_nape::phys::ZPP_Body tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(959)
			int tmp5 = tmp4->type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(959)
			int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(959)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(959)
			tmp2 = (tmp5 == tmp7);
		}
		else{
			HX_STACK_LINE(959)
			tmp2 = false;
		}
		HX_STACK_LINE(959)
		if ((tmp2)){
			HX_STACK_LINE(959)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(959)
			tmp3->wake();
		}
		HX_STACK_LINE(960)
		::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(960)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(960)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(960)
		if ((tmp4)){
			HX_STACK_LINE(960)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(960)
			::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(960)
			int tmp8 = tmp7->type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(960)
			int tmp9 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(960)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(960)
			tmp5 = (tmp8 == tmp10);
		}
		else{
			HX_STACK_LINE(960)
			tmp5 = false;
		}
		HX_STACK_LINE(960)
		if ((tmp5)){
			HX_STACK_LINE(960)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(960)
			tmp6->wake();
		}
		HX_STACK_LINE(961)
		::zpp_nape::phys::ZPP_Body tmp6 = this->b3;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(961)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(961)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(961)
		if ((tmp7)){
			HX_STACK_LINE(961)
			::zpp_nape::phys::ZPP_Body tmp9 = this->b3;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(961)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(961)
			int tmp11 = tmp10->type;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(961)
			int tmp12 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(961)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(961)
			tmp8 = (tmp11 == tmp13);
		}
		else{
			HX_STACK_LINE(961)
			tmp8 = false;
		}
		HX_STACK_LINE(961)
		if ((tmp8)){
			HX_STACK_LINE(961)
			::zpp_nape::phys::ZPP_Body tmp9 = this->b3;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(961)
			tmp9->wake();
		}
		HX_STACK_LINE(962)
		::zpp_nape::phys::ZPP_Body tmp9 = this->b4;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(962)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(962)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(962)
		if ((tmp10)){
			HX_STACK_LINE(962)
			::zpp_nape::phys::ZPP_Body tmp12 = this->b4;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(962)
			::zpp_nape::phys::ZPP_Body tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(962)
			int tmp14 = tmp13->type;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(962)
			int tmp15 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(962)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(962)
			tmp11 = (tmp14 == tmp16);
		}
		else{
			HX_STACK_LINE(962)
			tmp11 = false;
		}
		HX_STACK_LINE(962)
		if ((tmp11)){
			HX_STACK_LINE(962)
			::zpp_nape::phys::ZPP_Body tmp12 = this->b4;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(962)
			tmp12->wake();
		}
	}
return null();
}


Void ZPP_PulleyJoint_obj::forest( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","forest",0x78d5dd0f,"zpp_nape.constraint.ZPP_PulleyJoint.forest","zpp_nape/constraint/PulleyJoint.hx",964,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(965)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(965)
		int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(965)
		int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(965)
		bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(965)
		if ((tmp3)){
			HX_STACK_LINE(966)
			::zpp_nape::space::ZPP_Component tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(966)
			{
				HX_STACK_LINE(967)
				::zpp_nape::phys::ZPP_Body tmp5 = this->b1;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(967)
				::zpp_nape::space::ZPP_Component tmp6 = tmp5->component;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(967)
				::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(967)
				::zpp_nape::space::ZPP_Component tmp8 = tmp7->component->parent;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(967)
				bool tmp9 = (tmp6 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(967)
				if ((tmp9)){
					HX_STACK_LINE(967)
					::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(967)
					tmp4 = tmp10->component;
				}
				else{
					HX_STACK_LINE(969)
					::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(969)
					::zpp_nape::space::ZPP_Component obj = tmp10->component;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(970)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(971)
					while((true)){
						HX_STACK_LINE(971)
						bool tmp11 = (obj != obj->parent);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(971)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(971)
						if ((tmp12)){
							HX_STACK_LINE(971)
							break;
						}
						HX_STACK_LINE(972)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(973)
						obj->parent = stack;
						HX_STACK_LINE(974)
						stack = obj;
						HX_STACK_LINE(975)
						obj = nxt;
					}
					HX_STACK_LINE(977)
					while((true)){
						HX_STACK_LINE(977)
						bool tmp11 = (stack != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(977)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(977)
						if ((tmp12)){
							HX_STACK_LINE(977)
							break;
						}
						HX_STACK_LINE(978)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(979)
						stack->parent = obj;
						HX_STACK_LINE(980)
						stack = nxt;
					}
					HX_STACK_LINE(982)
					tmp4 = obj;
				}
			}
			HX_STACK_LINE(966)
			::zpp_nape::space::ZPP_Component xr = tmp4;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(985)
			::zpp_nape::space::ZPP_Component tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(985)
			{
				HX_STACK_LINE(986)
				::zpp_nape::space::ZPP_Component tmp6 = this->component;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(986)
				::zpp_nape::space::ZPP_Component tmp7 = this->component;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(986)
				::zpp_nape::space::ZPP_Component tmp8 = tmp7->parent;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(986)
				bool tmp9 = (tmp6 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(986)
				if ((tmp9)){
					HX_STACK_LINE(986)
					tmp5 = this->component;
				}
				else{
					HX_STACK_LINE(988)
					::zpp_nape::space::ZPP_Component tmp10 = this->component;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(988)
					::zpp_nape::space::ZPP_Component obj = tmp10;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(989)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(990)
					while((true)){
						HX_STACK_LINE(990)
						bool tmp11 = (obj != obj->parent);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(990)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(990)
						if ((tmp12)){
							HX_STACK_LINE(990)
							break;
						}
						HX_STACK_LINE(991)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(992)
						obj->parent = stack;
						HX_STACK_LINE(993)
						stack = obj;
						HX_STACK_LINE(994)
						obj = nxt;
					}
					HX_STACK_LINE(996)
					while((true)){
						HX_STACK_LINE(996)
						bool tmp11 = (stack != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(996)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(996)
						if ((tmp12)){
							HX_STACK_LINE(996)
							break;
						}
						HX_STACK_LINE(997)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(998)
						stack->parent = obj;
						HX_STACK_LINE(999)
						stack = nxt;
					}
					HX_STACK_LINE(1001)
					tmp5 = obj;
				}
			}
			HX_STACK_LINE(985)
			::zpp_nape::space::ZPP_Component yr = tmp5;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(1004)
			bool tmp6 = (xr != yr);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1004)
			if ((tmp6)){
				HX_STACK_LINE(1005)
				bool tmp7 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1005)
				if ((tmp7)){
					HX_STACK_LINE(1005)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(1006)
					bool tmp8 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1006)
					if ((tmp8)){
						HX_STACK_LINE(1006)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(1008)
						yr->parent = xr;
						HX_STACK_LINE(1009)
						(xr->rank)++;
					}
				}
			}
		}
		HX_STACK_LINE(1013)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1013)
		int tmp5 = tmp4->type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1013)
		int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1013)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1013)
		if ((tmp7)){
			HX_STACK_LINE(1014)
			::zpp_nape::space::ZPP_Component tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1014)
			{
				HX_STACK_LINE(1015)
				::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1015)
				::zpp_nape::space::ZPP_Component tmp10 = tmp9->component;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1015)
				::zpp_nape::phys::ZPP_Body tmp11 = this->b2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1015)
				::zpp_nape::space::ZPP_Component tmp12 = tmp11->component->parent;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1015)
				bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1015)
				if ((tmp13)){
					HX_STACK_LINE(1015)
					::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1015)
					tmp8 = tmp14->component;
				}
				else{
					HX_STACK_LINE(1017)
					::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1017)
					::zpp_nape::space::ZPP_Component obj = tmp14->component;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(1018)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(1019)
					while((true)){
						HX_STACK_LINE(1019)
						bool tmp15 = (obj != obj->parent);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1019)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1019)
						if ((tmp16)){
							HX_STACK_LINE(1019)
							break;
						}
						HX_STACK_LINE(1020)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(1021)
						obj->parent = stack;
						HX_STACK_LINE(1022)
						stack = obj;
						HX_STACK_LINE(1023)
						obj = nxt;
					}
					HX_STACK_LINE(1025)
					while((true)){
						HX_STACK_LINE(1025)
						bool tmp15 = (stack != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1025)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1025)
						if ((tmp16)){
							HX_STACK_LINE(1025)
							break;
						}
						HX_STACK_LINE(1026)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(1027)
						stack->parent = obj;
						HX_STACK_LINE(1028)
						stack = nxt;
					}
					HX_STACK_LINE(1030)
					tmp8 = obj;
				}
			}
			HX_STACK_LINE(1014)
			::zpp_nape::space::ZPP_Component xr = tmp8;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(1033)
			::zpp_nape::space::ZPP_Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1033)
			{
				HX_STACK_LINE(1034)
				::zpp_nape::space::ZPP_Component tmp10 = this->component;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1034)
				::zpp_nape::space::ZPP_Component tmp11 = this->component;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1034)
				::zpp_nape::space::ZPP_Component tmp12 = tmp11->parent;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1034)
				bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1034)
				if ((tmp13)){
					HX_STACK_LINE(1034)
					tmp9 = this->component;
				}
				else{
					HX_STACK_LINE(1036)
					::zpp_nape::space::ZPP_Component tmp14 = this->component;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1036)
					::zpp_nape::space::ZPP_Component obj = tmp14;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(1037)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(1038)
					while((true)){
						HX_STACK_LINE(1038)
						bool tmp15 = (obj != obj->parent);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1038)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1038)
						if ((tmp16)){
							HX_STACK_LINE(1038)
							break;
						}
						HX_STACK_LINE(1039)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(1040)
						obj->parent = stack;
						HX_STACK_LINE(1041)
						stack = obj;
						HX_STACK_LINE(1042)
						obj = nxt;
					}
					HX_STACK_LINE(1044)
					while((true)){
						HX_STACK_LINE(1044)
						bool tmp15 = (stack != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1044)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1044)
						if ((tmp16)){
							HX_STACK_LINE(1044)
							break;
						}
						HX_STACK_LINE(1045)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(1046)
						stack->parent = obj;
						HX_STACK_LINE(1047)
						stack = nxt;
					}
					HX_STACK_LINE(1049)
					tmp9 = obj;
				}
			}
			HX_STACK_LINE(1033)
			::zpp_nape::space::ZPP_Component yr = tmp9;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(1052)
			bool tmp10 = (xr != yr);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1052)
			if ((tmp10)){
				HX_STACK_LINE(1053)
				bool tmp11 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1053)
				if ((tmp11)){
					HX_STACK_LINE(1053)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(1054)
					bool tmp12 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1054)
					if ((tmp12)){
						HX_STACK_LINE(1054)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(1056)
						yr->parent = xr;
						HX_STACK_LINE(1057)
						(xr->rank)++;
					}
				}
			}
		}
		HX_STACK_LINE(1061)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b3;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1061)
		int tmp9 = tmp8->type;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1061)
		int tmp10 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1061)
		bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1061)
		if ((tmp11)){
			HX_STACK_LINE(1062)
			::zpp_nape::space::ZPP_Component tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1062)
			{
				HX_STACK_LINE(1063)
				::zpp_nape::phys::ZPP_Body tmp13 = this->b3;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1063)
				::zpp_nape::space::ZPP_Component tmp14 = tmp13->component;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1063)
				::zpp_nape::phys::ZPP_Body tmp15 = this->b3;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1063)
				::zpp_nape::space::ZPP_Component tmp16 = tmp15->component->parent;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1063)
				bool tmp17 = (tmp14 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1063)
				if ((tmp17)){
					HX_STACK_LINE(1063)
					::zpp_nape::phys::ZPP_Body tmp18 = this->b3;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1063)
					tmp12 = tmp18->component;
				}
				else{
					HX_STACK_LINE(1065)
					::zpp_nape::phys::ZPP_Body tmp18 = this->b3;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1065)
					::zpp_nape::space::ZPP_Component obj = tmp18->component;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(1066)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(1067)
					while((true)){
						HX_STACK_LINE(1067)
						bool tmp19 = (obj != obj->parent);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1067)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1067)
						if ((tmp20)){
							HX_STACK_LINE(1067)
							break;
						}
						HX_STACK_LINE(1068)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(1069)
						obj->parent = stack;
						HX_STACK_LINE(1070)
						stack = obj;
						HX_STACK_LINE(1071)
						obj = nxt;
					}
					HX_STACK_LINE(1073)
					while((true)){
						HX_STACK_LINE(1073)
						bool tmp19 = (stack != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1073)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1073)
						if ((tmp20)){
							HX_STACK_LINE(1073)
							break;
						}
						HX_STACK_LINE(1074)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(1075)
						stack->parent = obj;
						HX_STACK_LINE(1076)
						stack = nxt;
					}
					HX_STACK_LINE(1078)
					tmp12 = obj;
				}
			}
			HX_STACK_LINE(1062)
			::zpp_nape::space::ZPP_Component xr = tmp12;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(1081)
			::zpp_nape::space::ZPP_Component tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1081)
			{
				HX_STACK_LINE(1082)
				::zpp_nape::space::ZPP_Component tmp14 = this->component;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1082)
				::zpp_nape::space::ZPP_Component tmp15 = this->component;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1082)
				::zpp_nape::space::ZPP_Component tmp16 = tmp15->parent;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1082)
				bool tmp17 = (tmp14 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1082)
				if ((tmp17)){
					HX_STACK_LINE(1082)
					tmp13 = this->component;
				}
				else{
					HX_STACK_LINE(1084)
					::zpp_nape::space::ZPP_Component tmp18 = this->component;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1084)
					::zpp_nape::space::ZPP_Component obj = tmp18;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(1085)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(1086)
					while((true)){
						HX_STACK_LINE(1086)
						bool tmp19 = (obj != obj->parent);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1086)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1086)
						if ((tmp20)){
							HX_STACK_LINE(1086)
							break;
						}
						HX_STACK_LINE(1087)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(1088)
						obj->parent = stack;
						HX_STACK_LINE(1089)
						stack = obj;
						HX_STACK_LINE(1090)
						obj = nxt;
					}
					HX_STACK_LINE(1092)
					while((true)){
						HX_STACK_LINE(1092)
						bool tmp19 = (stack != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1092)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1092)
						if ((tmp20)){
							HX_STACK_LINE(1092)
							break;
						}
						HX_STACK_LINE(1093)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(1094)
						stack->parent = obj;
						HX_STACK_LINE(1095)
						stack = nxt;
					}
					HX_STACK_LINE(1097)
					tmp13 = obj;
				}
			}
			HX_STACK_LINE(1081)
			::zpp_nape::space::ZPP_Component yr = tmp13;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(1100)
			bool tmp14 = (xr != yr);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1100)
			if ((tmp14)){
				HX_STACK_LINE(1101)
				bool tmp15 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1101)
				if ((tmp15)){
					HX_STACK_LINE(1101)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(1102)
					bool tmp16 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1102)
					if ((tmp16)){
						HX_STACK_LINE(1102)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(1104)
						yr->parent = xr;
						HX_STACK_LINE(1105)
						(xr->rank)++;
					}
				}
			}
		}
		HX_STACK_LINE(1109)
		::zpp_nape::phys::ZPP_Body tmp12 = this->b4;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1109)
		int tmp13 = tmp12->type;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1109)
		int tmp14 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1109)
		bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1109)
		if ((tmp15)){
			HX_STACK_LINE(1110)
			::zpp_nape::space::ZPP_Component tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1110)
			{
				HX_STACK_LINE(1111)
				::zpp_nape::phys::ZPP_Body tmp17 = this->b4;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1111)
				::zpp_nape::space::ZPP_Component tmp18 = tmp17->component;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1111)
				::zpp_nape::phys::ZPP_Body tmp19 = this->b4;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1111)
				::zpp_nape::space::ZPP_Component tmp20 = tmp19->component->parent;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1111)
				bool tmp21 = (tmp18 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1111)
				if ((tmp21)){
					HX_STACK_LINE(1111)
					::zpp_nape::phys::ZPP_Body tmp22 = this->b4;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1111)
					tmp16 = tmp22->component;
				}
				else{
					HX_STACK_LINE(1113)
					::zpp_nape::phys::ZPP_Body tmp22 = this->b4;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1113)
					::zpp_nape::space::ZPP_Component obj = tmp22->component;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(1114)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(1115)
					while((true)){
						HX_STACK_LINE(1115)
						bool tmp23 = (obj != obj->parent);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1115)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1115)
						if ((tmp24)){
							HX_STACK_LINE(1115)
							break;
						}
						HX_STACK_LINE(1116)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(1117)
						obj->parent = stack;
						HX_STACK_LINE(1118)
						stack = obj;
						HX_STACK_LINE(1119)
						obj = nxt;
					}
					HX_STACK_LINE(1121)
					while((true)){
						HX_STACK_LINE(1121)
						bool tmp23 = (stack != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1121)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1121)
						if ((tmp24)){
							HX_STACK_LINE(1121)
							break;
						}
						HX_STACK_LINE(1122)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(1123)
						stack->parent = obj;
						HX_STACK_LINE(1124)
						stack = nxt;
					}
					HX_STACK_LINE(1126)
					tmp16 = obj;
				}
			}
			HX_STACK_LINE(1110)
			::zpp_nape::space::ZPP_Component xr = tmp16;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(1129)
			::zpp_nape::space::ZPP_Component tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1129)
			{
				HX_STACK_LINE(1130)
				::zpp_nape::space::ZPP_Component tmp18 = this->component;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1130)
				::zpp_nape::space::ZPP_Component tmp19 = this->component;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1130)
				::zpp_nape::space::ZPP_Component tmp20 = tmp19->parent;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1130)
				bool tmp21 = (tmp18 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1130)
				if ((tmp21)){
					HX_STACK_LINE(1130)
					tmp17 = this->component;
				}
				else{
					HX_STACK_LINE(1132)
					::zpp_nape::space::ZPP_Component tmp22 = this->component;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1132)
					::zpp_nape::space::ZPP_Component obj = tmp22;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(1133)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(1134)
					while((true)){
						HX_STACK_LINE(1134)
						bool tmp23 = (obj != obj->parent);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1134)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1134)
						if ((tmp24)){
							HX_STACK_LINE(1134)
							break;
						}
						HX_STACK_LINE(1135)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(1136)
						obj->parent = stack;
						HX_STACK_LINE(1137)
						stack = obj;
						HX_STACK_LINE(1138)
						obj = nxt;
					}
					HX_STACK_LINE(1140)
					while((true)){
						HX_STACK_LINE(1140)
						bool tmp23 = (stack != null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1140)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1140)
						if ((tmp24)){
							HX_STACK_LINE(1140)
							break;
						}
						HX_STACK_LINE(1141)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(1142)
						stack->parent = obj;
						HX_STACK_LINE(1143)
						stack = nxt;
					}
					HX_STACK_LINE(1145)
					tmp17 = obj;
				}
			}
			HX_STACK_LINE(1129)
			::zpp_nape::space::ZPP_Component yr = tmp17;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(1148)
			bool tmp18 = (xr != yr);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1148)
			if ((tmp18)){
				HX_STACK_LINE(1149)
				bool tmp19 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1149)
				if ((tmp19)){
					HX_STACK_LINE(1149)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(1150)
					bool tmp20 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1150)
					if ((tmp20)){
						HX_STACK_LINE(1150)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(1152)
						yr->parent = xr;
						HX_STACK_LINE(1153)
						(xr->rank)++;
					}
				}
			}
		}
	}
return null();
}


bool ZPP_PulleyJoint_obj::pair_exists( int id,int di){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","pair_exists",0x61a1252f,"zpp_nape.constraint.ZPP_PulleyJoint.pair_exists","zpp_nape/constraint/PulleyJoint.hx",1158,0xdaffcadd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(1159)
	::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1159)
	int tmp1 = tmp->id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1159)
	int tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1159)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1159)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1159)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1159)
	if ((tmp4)){
		HX_STACK_LINE(1159)
		::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1159)
		::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1159)
		::zpp_nape::phys::ZPP_Body tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1159)
		int tmp9 = tmp8->id;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1159)
		int tmp10 = di;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1159)
		bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1159)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1159)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1159)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1159)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1159)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1159)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1159)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1159)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1159)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1159)
		bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1159)
		bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1159)
		if ((tmp22)){
			HX_STACK_LINE(1159)
			::zpp_nape::phys::ZPP_Body tmp23 = this->b3;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1159)
			::zpp_nape::phys::ZPP_Body tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1159)
			::zpp_nape::phys::ZPP_Body tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1159)
			::zpp_nape::phys::ZPP_Body tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1159)
			::zpp_nape::phys::ZPP_Body tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1159)
			int tmp28 = tmp27->id;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1159)
			int tmp29 = di;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1159)
			bool tmp30 = (tmp28 == tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1159)
			bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1159)
			tmp20 = tmp31;
		}
		else{
			HX_STACK_LINE(1159)
			tmp20 = true;
		}
		HX_STACK_LINE(1159)
		bool tmp23 = tmp20;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1159)
		bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1159)
		bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1159)
		bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1159)
		bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1159)
		bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1159)
		bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1159)
		if ((tmp29)){
			HX_STACK_LINE(1159)
			::zpp_nape::phys::ZPP_Body tmp30 = this->b4;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1159)
			::zpp_nape::phys::ZPP_Body tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1159)
			::zpp_nape::phys::ZPP_Body tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1159)
			::zpp_nape::phys::ZPP_Body tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1159)
			int tmp34 = tmp33->id;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1159)
			int tmp35 = di;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1159)
			tmp5 = (tmp34 == tmp35);
		}
		else{
			HX_STACK_LINE(1159)
			tmp5 = true;
		}
	}
	else{
		HX_STACK_LINE(1159)
		tmp5 = false;
	}
	HX_STACK_LINE(1159)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1159)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1159)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1159)
	if ((tmp7)){
		HX_STACK_LINE(1159)
		::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1159)
		::zpp_nape::phys::ZPP_Body tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1159)
		::zpp_nape::phys::ZPP_Body tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1159)
		int tmp12 = tmp11->id;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1159)
		int tmp13 = id;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1159)
		bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1159)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1159)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1159)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1159)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1159)
		if ((tmp18)){
			HX_STACK_LINE(1159)
			::zpp_nape::phys::ZPP_Body tmp19 = this->b3;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1159)
			::zpp_nape::phys::ZPP_Body tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1159)
			::zpp_nape::phys::ZPP_Body tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1159)
			::zpp_nape::phys::ZPP_Body tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1159)
			int tmp23 = tmp22->id;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1159)
			int tmp24 = di;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1159)
			bool tmp25 = (tmp23 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1159)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1159)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1159)
			bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1159)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1159)
			bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1159)
			bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1159)
			bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1159)
			bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1159)
			bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1159)
			bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1159)
			bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1159)
			bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1159)
			bool tmp38 = tmp36;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1159)
			bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1159)
			bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1159)
			if ((tmp40)){
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp41 = this->b4;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1159)
				int tmp47 = tmp46->id;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(1159)
				int tmp48 = di;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(1159)
				bool tmp49 = (tmp47 == tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(1159)
				bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1159)
				bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1159)
				tmp37 = tmp51;
			}
			else{
				HX_STACK_LINE(1159)
				tmp37 = true;
			}
			HX_STACK_LINE(1159)
			bool tmp41 = tmp37;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1159)
			bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1159)
			bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1159)
			bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1159)
			bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(1159)
			bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(1159)
			bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1159)
			bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(1159)
			bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(1159)
			bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(1159)
			if ((tmp50)){
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp51 = this->b1;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(1159)
				int tmp56 = tmp55->id;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(1159)
				int tmp57 = di;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(1159)
				tmp8 = (tmp56 == tmp57);
			}
			else{
				HX_STACK_LINE(1159)
				tmp8 = true;
			}
		}
		else{
			HX_STACK_LINE(1159)
			tmp8 = false;
		}
	}
	else{
		HX_STACK_LINE(1159)
		tmp8 = true;
	}
	HX_STACK_LINE(1159)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1159)
	bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1159)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1159)
	if ((tmp10)){
		HX_STACK_LINE(1159)
		::zpp_nape::phys::ZPP_Body tmp12 = this->b3;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1159)
		::zpp_nape::phys::ZPP_Body tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1159)
		::zpp_nape::phys::ZPP_Body tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1159)
		int tmp15 = tmp14->id;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1159)
		int tmp16 = id;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1159)
		bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1159)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1159)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1159)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1159)
		bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1159)
		if ((tmp21)){
			HX_STACK_LINE(1159)
			::zpp_nape::phys::ZPP_Body tmp22 = this->b4;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1159)
			::zpp_nape::phys::ZPP_Body tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1159)
			::zpp_nape::phys::ZPP_Body tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1159)
			::zpp_nape::phys::ZPP_Body tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1159)
			int tmp26 = tmp25->id;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1159)
			int tmp27 = di;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1159)
			bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1159)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1159)
			bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1159)
			bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1159)
			bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1159)
			bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1159)
			bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1159)
			bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1159)
			bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1159)
			bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1159)
			bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1159)
			bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1159)
			bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1159)
			bool tmp41 = tmp39;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1159)
			bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1159)
			bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1159)
			if ((tmp43)){
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp44 = this->b1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(1159)
				int tmp50 = tmp49->id;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1159)
				int tmp51 = di;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1159)
				bool tmp52 = (tmp50 == tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(1159)
				bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(1159)
				bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(1159)
				tmp40 = tmp54;
			}
			else{
				HX_STACK_LINE(1159)
				tmp40 = true;
			}
			HX_STACK_LINE(1159)
			bool tmp44 = tmp40;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1159)
			bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(1159)
			bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(1159)
			bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1159)
			bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(1159)
			bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(1159)
			bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(1159)
			bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(1159)
			bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(1159)
			bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(1159)
			if ((tmp53)){
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp54 = this->b2;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(1159)
				int tmp59 = tmp58->id;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(1159)
				int tmp60 = di;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(1159)
				tmp11 = (tmp59 == tmp60);
			}
			else{
				HX_STACK_LINE(1159)
				tmp11 = true;
			}
		}
		else{
			HX_STACK_LINE(1159)
			tmp11 = false;
		}
	}
	else{
		HX_STACK_LINE(1159)
		tmp11 = true;
	}
	HX_STACK_LINE(1159)
	bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1159)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1159)
	if ((tmp12)){
		HX_STACK_LINE(1159)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b4;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1159)
		::zpp_nape::phys::ZPP_Body tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1159)
		int tmp16 = tmp15->id;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1159)
		int tmp17 = id;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1159)
		bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1159)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1159)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1159)
		if ((tmp20)){
			HX_STACK_LINE(1159)
			::zpp_nape::phys::ZPP_Body tmp21 = this->b1;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1159)
			::zpp_nape::phys::ZPP_Body tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1159)
			::zpp_nape::phys::ZPP_Body tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1159)
			int tmp24 = tmp23->id;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1159)
			int tmp25 = di;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1159)
			bool tmp26 = (tmp24 == tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1159)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1159)
			bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1159)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1159)
			bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1159)
			bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1159)
			bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1159)
			bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1159)
			bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1159)
			bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1159)
			bool tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1159)
			bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1159)
			if ((tmp37)){
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp38 = this->b2;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1159)
				int tmp43 = tmp42->id;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1159)
				int tmp44 = di;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1159)
				bool tmp45 = (tmp43 == tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1159)
				bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1159)
				tmp35 = tmp46;
			}
			else{
				HX_STACK_LINE(1159)
				tmp35 = true;
			}
			HX_STACK_LINE(1159)
			bool tmp38 = tmp35;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1159)
			bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1159)
			bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1159)
			bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1159)
			bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1159)
			bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1159)
			bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1159)
			if ((tmp44)){
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp45 = this->b3;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(1159)
				::zpp_nape::phys::ZPP_Body tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(1159)
				int tmp49 = tmp48->id;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(1159)
				int tmp50 = di;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1159)
				tmp13 = (tmp49 == tmp50);
			}
			else{
				HX_STACK_LINE(1159)
				tmp13 = true;
			}
		}
		else{
			HX_STACK_LINE(1159)
			tmp13 = false;
		}
	}
	else{
		HX_STACK_LINE(1159)
		tmp13 = true;
	}
	HX_STACK_LINE(1159)
	return tmp13;
}


Void ZPP_PulleyJoint_obj::clearcache( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","clearcache",0x012fbac7,"zpp_nape.constraint.ZPP_PulleyJoint.clearcache","zpp_nape/constraint/PulleyJoint.hx",1161,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1162)
		this->jAcc = (int)0;
		HX_STACK_LINE(1163)
		this->pre_dt = ((Float)-1.0);
	}
return null();
}


bool ZPP_PulleyJoint_obj::preStep( Float dt){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","preStep",0x8d199c9d,"zpp_nape.constraint.ZPP_PulleyJoint.preStep","zpp_nape/constraint/PulleyJoint.hx",1165,0xdaffcadd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dt,"dt")
	HX_STACK_LINE(1166)
	Float tmp = this->pre_dt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1166)
	bool tmp1 = (tmp == ((Float)-1.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1166)
	if ((tmp1)){
		HX_STACK_LINE(1166)
		this->pre_dt = dt;
	}
	HX_STACK_LINE(1167)
	Float tmp2 = dt;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1167)
	Float tmp3 = this->pre_dt;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1167)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1167)
	Float dtratio = tmp4;		HX_STACK_VAR(dtratio,"dtratio");
	HX_STACK_LINE(1168)
	this->pre_dt = dt;
	HX_STACK_LINE(1169)
	this->stepped = true;
	HX_STACK_LINE(1170)
	Float tmp5 = this->jointMin;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1170)
	Float tmp6 = this->jointMax;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1170)
	bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1170)
	this->equal = tmp7;
	HX_STACK_LINE(1171)
	{
		HX_STACK_LINE(1172)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1172)
		Float tmp9 = tmp8->axisy;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1172)
		Float tmp10 = this->a1localx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1172)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1172)
		::zpp_nape::phys::ZPP_Body tmp12 = this->b1;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1172)
		Float tmp13 = tmp12->axisx;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1172)
		Float tmp14 = this->a1localy;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1172)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1172)
		Float tmp16 = (tmp11 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1172)
		this->a1relx = tmp16;
		HX_STACK_LINE(1173)
		Float tmp17 = this->a1localx;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1173)
		::zpp_nape::phys::ZPP_Body tmp18 = this->b1;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1173)
		Float tmp19 = tmp18->axisx;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1173)
		Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1173)
		Float tmp21 = this->a1localy;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1173)
		::zpp_nape::phys::ZPP_Body tmp22 = this->b1;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1173)
		Float tmp23 = tmp22->axisy;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1173)
		Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1173)
		Float tmp25 = (tmp20 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1173)
		this->a1rely = tmp25;
	}
	HX_STACK_LINE(1175)
	{
		HX_STACK_LINE(1176)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1176)
		Float tmp9 = tmp8->axisy;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1176)
		Float tmp10 = this->a2localx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1176)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1176)
		::zpp_nape::phys::ZPP_Body tmp12 = this->b2;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1176)
		Float tmp13 = tmp12->axisx;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1176)
		Float tmp14 = this->a2localy;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1176)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1176)
		Float tmp16 = (tmp11 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1176)
		this->a2relx = tmp16;
		HX_STACK_LINE(1177)
		Float tmp17 = this->a2localx;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1177)
		::zpp_nape::phys::ZPP_Body tmp18 = this->b2;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1177)
		Float tmp19 = tmp18->axisx;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1177)
		Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1177)
		Float tmp21 = this->a2localy;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1177)
		::zpp_nape::phys::ZPP_Body tmp22 = this->b2;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1177)
		Float tmp23 = tmp22->axisy;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1177)
		Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1177)
		Float tmp25 = (tmp20 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1177)
		this->a2rely = tmp25;
	}
	HX_STACK_LINE(1179)
	{
		HX_STACK_LINE(1180)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b3;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1180)
		Float tmp9 = tmp8->axisy;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1180)
		Float tmp10 = this->a3localx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1180)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1180)
		::zpp_nape::phys::ZPP_Body tmp12 = this->b3;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1180)
		Float tmp13 = tmp12->axisx;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1180)
		Float tmp14 = this->a3localy;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1180)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1180)
		Float tmp16 = (tmp11 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1180)
		this->a3relx = tmp16;
		HX_STACK_LINE(1181)
		Float tmp17 = this->a3localx;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1181)
		::zpp_nape::phys::ZPP_Body tmp18 = this->b3;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1181)
		Float tmp19 = tmp18->axisx;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1181)
		Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1181)
		Float tmp21 = this->a3localy;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1181)
		::zpp_nape::phys::ZPP_Body tmp22 = this->b3;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1181)
		Float tmp23 = tmp22->axisy;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1181)
		Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1181)
		Float tmp25 = (tmp20 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1181)
		this->a3rely = tmp25;
	}
	HX_STACK_LINE(1183)
	{
		HX_STACK_LINE(1184)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b4;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1184)
		Float tmp9 = tmp8->axisy;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1184)
		Float tmp10 = this->a4localx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1184)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1184)
		::zpp_nape::phys::ZPP_Body tmp12 = this->b4;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1184)
		Float tmp13 = tmp12->axisx;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1184)
		Float tmp14 = this->a4localy;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1184)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1184)
		Float tmp16 = (tmp11 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1184)
		this->a4relx = tmp16;
		HX_STACK_LINE(1185)
		Float tmp17 = this->a4localx;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1185)
		::zpp_nape::phys::ZPP_Body tmp18 = this->b4;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1185)
		Float tmp19 = tmp18->axisx;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1185)
		Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1185)
		Float tmp21 = this->a4localy;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1185)
		::zpp_nape::phys::ZPP_Body tmp22 = this->b4;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1185)
		Float tmp23 = tmp22->axisy;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1185)
		Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1185)
		Float tmp25 = (tmp20 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1185)
		this->a4rely = tmp25;
	}
	HX_STACK_LINE(1187)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1187)
	{
		HX_STACK_LINE(1188)
		Float t12x = ((Float)0.0);		HX_STACK_VAR(t12x,"t12x");
		HX_STACK_LINE(1189)
		Float t12y = ((Float)0.0);		HX_STACK_VAR(t12y,"t12y");
		HX_STACK_LINE(1190)
		Float t34x = ((Float)0.0);		HX_STACK_VAR(t34x,"t34x");
		HX_STACK_LINE(1191)
		Float t34y = ((Float)0.0);		HX_STACK_VAR(t34y,"t34y");
		HX_STACK_LINE(1192)
		::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1192)
		Float tmp10 = tmp9->posx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1192)
		Float tmp11 = this->a2relx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1192)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1192)
		::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1192)
		Float tmp14 = tmp13->posx;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1192)
		Float tmp15 = this->a1relx;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1192)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1192)
		Float tmp17 = (tmp12 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1192)
		t12x = tmp17;
		HX_STACK_LINE(1193)
		::zpp_nape::phys::ZPP_Body tmp18 = this->b2;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1193)
		Float tmp19 = tmp18->posy;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1193)
		Float tmp20 = this->a2rely;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1193)
		Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1193)
		::zpp_nape::phys::ZPP_Body tmp22 = this->b1;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1193)
		Float tmp23 = tmp22->posy;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1193)
		Float tmp24 = this->a1rely;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1193)
		Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1193)
		Float tmp26 = (tmp21 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1193)
		t12y = tmp26;
		HX_STACK_LINE(1194)
		::zpp_nape::phys::ZPP_Body tmp27 = this->b4;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1194)
		Float tmp28 = tmp27->posx;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1194)
		Float tmp29 = this->a4relx;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1194)
		Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1194)
		::zpp_nape::phys::ZPP_Body tmp31 = this->b3;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1194)
		Float tmp32 = tmp31->posx;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1194)
		Float tmp33 = this->a3relx;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1194)
		Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1194)
		Float tmp35 = (tmp30 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(1194)
		t34x = tmp35;
		HX_STACK_LINE(1195)
		::zpp_nape::phys::ZPP_Body tmp36 = this->b4;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(1195)
		Float tmp37 = tmp36->posy;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(1195)
		Float tmp38 = this->a4rely;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(1195)
		Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(1195)
		::zpp_nape::phys::ZPP_Body tmp40 = this->b3;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(1195)
		Float tmp41 = tmp40->posy;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(1195)
		Float tmp42 = this->a3rely;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(1195)
		Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(1195)
		Float tmp44 = (tmp39 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(1195)
		t34y = tmp44;
		HX_STACK_LINE(1196)
		Float tmp45;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(1196)
		{
			HX_STACK_LINE(1196)
			Float tmp46 = (t12x * t12x);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(1196)
			Float tmp47 = (t12y * t12y);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1196)
			Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(1196)
			tmp45 = ::Math_obj::sqrt(tmp48);
		}
		HX_STACK_LINE(1196)
		Float C12 = tmp45;		HX_STACK_VAR(C12,"C12");
		HX_STACK_LINE(1197)
		Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(1197)
		{
			HX_STACK_LINE(1197)
			Float tmp47 = (t34x * t34x);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1197)
			Float tmp48 = (t34y * t34y);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(1197)
			Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(1197)
			tmp46 = ::Math_obj::sqrt(tmp49);
		}
		HX_STACK_LINE(1197)
		Float C34 = tmp46;		HX_STACK_VAR(C34,"C34");
		HX_STACK_LINE(1198)
		bool tmp47 = (C12 != (int)0);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(1198)
		if ((tmp47)){
			HX_STACK_LINE(1200)
			Float tmp48 = (Float(((Float)1.0)) / Float(C12));		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(1200)
			Float t = tmp48;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1209)
			Float tmp49 = (t12x * t);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(1209)
			this->n12x = tmp49;
			HX_STACK_LINE(1210)
			Float tmp50 = (t12y * t);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(1210)
			this->n12y = tmp50;
		}
		HX_STACK_LINE(1213)
		bool tmp48 = (C34 != (int)0);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(1213)
		if ((tmp48)){
			HX_STACK_LINE(1214)
			{
				HX_STACK_LINE(1215)
				Float tmp49 = (Float(((Float)1.0)) / Float(C34));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(1215)
				Float t = tmp49;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1224)
				Float tmp50 = (t34x * t);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1224)
				this->n34x = tmp50;
				HX_STACK_LINE(1225)
				Float tmp51 = (t34y * t);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1225)
				this->n34y = tmp51;
			}
			HX_STACK_LINE(1227)
			{
				HX_STACK_LINE(1228)
				Float tmp49 = this->ratio;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(1228)
				Float t = tmp49;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1237)
				hx::MultEq(this->n34x,t);
				HX_STACK_LINE(1238)
				hx::MultEq(this->n34y,t);
			}
		}
		else{
			HX_STACK_LINE(1243)
			Float tmp49 = this->ratio;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(1243)
			Float tmp50;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(1243)
			{
				HX_STACK_LINE(1243)
				Float tmp51 = this->n34x;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1243)
				Float tmp52 = this->n34x;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(1243)
				Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(1243)
				Float tmp54 = this->n34y;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(1243)
				Float tmp55 = this->n34y;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(1243)
				Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(1243)
				Float tmp57 = (tmp53 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(1243)
				tmp50 = ::Math_obj::sqrt(tmp57);
			}
			HX_STACK_LINE(1243)
			Float tmp51 = (Float(tmp49) / Float(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(1243)
			Float t = tmp51;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1252)
			hx::MultEq(this->n34x,t);
			HX_STACK_LINE(1253)
			hx::MultEq(this->n34y,t);
		}
		HX_STACK_LINE(1256)
		Float tmp49 = C12;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(1256)
		Float tmp50 = this->ratio;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(1256)
		Float tmp51 = C34;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(1256)
		Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(1256)
		Float tmp53 = (tmp49 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(1256)
		Float C = tmp53;		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(1257)
		bool tmp54 = this->equal;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(1257)
		if ((tmp54)){
			HX_STACK_LINE(1258)
			Float tmp55 = this->jointMax;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(1258)
			hx::SubEq(C,tmp55);
			HX_STACK_LINE(1259)
			this->slack = false;
		}
		else{
			HX_STACK_LINE(1262)
			Float tmp55 = C;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(1262)
			Float tmp56 = this->jointMin;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(1262)
			bool tmp57 = (tmp55 < tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(1262)
			if ((tmp57)){
				HX_STACK_LINE(1263)
				Float tmp58 = this->jointMin;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(1263)
				Float tmp59 = C;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(1263)
				Float tmp60 = (tmp58 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(1263)
				C = tmp60;
				HX_STACK_LINE(1264)
				{
					HX_STACK_LINE(1265)
					Float tmp61 = this->n12x;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(1265)
					Float tmp62 = -(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(1265)
					this->n12x = tmp62;
					HX_STACK_LINE(1266)
					Float tmp63 = this->n12y;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(1266)
					Float tmp64 = -(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(1266)
					this->n12y = tmp64;
				}
				HX_STACK_LINE(1268)
				{
					HX_STACK_LINE(1269)
					Float tmp61 = this->n34x;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(1269)
					Float tmp62 = -(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(1269)
					this->n34x = tmp62;
					HX_STACK_LINE(1270)
					Float tmp63 = this->n34y;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(1270)
					Float tmp64 = -(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(1270)
					this->n34y = tmp64;
				}
				HX_STACK_LINE(1272)
				this->slack = false;
			}
			else{
				HX_STACK_LINE(1274)
				Float tmp58 = C;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(1274)
				Float tmp59 = this->jointMax;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(1274)
				bool tmp60 = (tmp58 > tmp59);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(1274)
				if ((tmp60)){
					HX_STACK_LINE(1275)
					Float tmp61 = this->jointMax;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(1275)
					hx::SubEq(C,tmp61);
					HX_STACK_LINE(1276)
					this->slack = false;
				}
				else{
					HX_STACK_LINE(1279)
					{
						HX_STACK_LINE(1280)
						this->n12x = (int)0;
						HX_STACK_LINE(1281)
						this->n12y = (int)0;
						HX_STACK_LINE(1290)
						{
						}
					}
					HX_STACK_LINE(1299)
					{
						HX_STACK_LINE(1300)
						this->n34x = (int)0;
						HX_STACK_LINE(1301)
						this->n34y = (int)0;
						HX_STACK_LINE(1310)
						{
						}
					}
					HX_STACK_LINE(1319)
					C = (int)0;
					HX_STACK_LINE(1320)
					this->slack = true;
				}
			}
		}
		HX_STACK_LINE(1323)
		tmp8 = C;
	}
	HX_STACK_LINE(1187)
	Float C = tmp8;		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(1325)
	bool tmp9 = this->slack;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1325)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1325)
	if ((tmp10)){
		HX_STACK_LINE(1326)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1326)
		{
			HX_STACK_LINE(1327)
			Float tmp12 = this->n12y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1327)
			Float tmp13 = this->a1relx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1327)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1327)
			Float tmp15 = this->n12x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1327)
			Float tmp16 = this->a1rely;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1327)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1327)
			Float tmp18 = (tmp14 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1327)
			this->cx1 = tmp18;
			HX_STACK_LINE(1328)
			Float tmp19 = this->n12y;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1328)
			Float tmp20 = this->a2relx;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1328)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1328)
			Float tmp22 = this->n12x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1328)
			Float tmp23 = this->a2rely;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1328)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1328)
			Float tmp25 = (tmp21 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1328)
			this->cx2 = tmp25;
			HX_STACK_LINE(1329)
			Float tmp26 = this->n34y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1329)
			Float tmp27 = this->a3relx;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1329)
			Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1329)
			Float tmp29 = this->n34x;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1329)
			Float tmp30 = this->a3rely;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1329)
			Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1329)
			Float tmp32 = (tmp28 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1329)
			this->cx3 = tmp32;
			HX_STACK_LINE(1330)
			Float tmp33 = this->n34y;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1330)
			Float tmp34 = this->a4relx;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1330)
			Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1330)
			Float tmp36 = this->n34x;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1330)
			Float tmp37 = this->a4rely;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1330)
			Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1330)
			Float tmp39 = (tmp35 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1330)
			this->cx4 = tmp39;
			HX_STACK_LINE(1331)
			Float tmp40 = this->ratio;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1331)
			Float tmp41 = this->ratio;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1331)
			Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1331)
			Float ratioSq = tmp42;		HX_STACK_VAR(ratioSq,"ratioSq");
			HX_STACK_LINE(1332)
			::zpp_nape::phys::ZPP_Body tmp43 = this->b1;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1332)
			Float tmp44 = tmp43->smass;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1332)
			::zpp_nape::phys::ZPP_Body tmp45 = this->b2;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(1332)
			Float tmp46 = tmp45->smass;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(1332)
			Float tmp47 = (tmp44 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1332)
			Float tmp48 = ratioSq;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(1332)
			::zpp_nape::phys::ZPP_Body tmp49 = this->b3;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(1332)
			Float tmp50 = tmp49->smass;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(1332)
			::zpp_nape::phys::ZPP_Body tmp51 = this->b4;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(1332)
			Float tmp52 = tmp51->smass;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(1332)
			Float tmp53 = (tmp50 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(1332)
			Float tmp54 = (tmp48 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(1332)
			Float tmp55 = (tmp47 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(1332)
			::zpp_nape::phys::ZPP_Body tmp56 = this->b1;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(1332)
			Float tmp57 = tmp56->sinertia;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(1332)
			Float tmp58 = this->cx1;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(1332)
			Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(1332)
			Float tmp60 = this->cx1;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(1332)
			Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(1332)
			Float tmp62 = (tmp55 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(1332)
			::zpp_nape::phys::ZPP_Body tmp63 = this->b2;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(1332)
			Float tmp64 = tmp63->sinertia;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(1332)
			Float tmp65 = this->cx2;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(1332)
			Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(1332)
			Float tmp67 = this->cx2;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(1332)
			Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(1332)
			Float tmp69 = (tmp62 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(1332)
			::zpp_nape::phys::ZPP_Body tmp70 = this->b3;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(1332)
			Float tmp71 = tmp70->sinertia;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(1332)
			Float tmp72 = this->cx3;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(1332)
			Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(1332)
			Float tmp74 = this->cx3;		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(1332)
			Float tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(1332)
			Float tmp76 = (tmp69 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(1332)
			::zpp_nape::phys::ZPP_Body tmp77 = this->b4;		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(1332)
			Float tmp78 = tmp77->sinertia;		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(1332)
			Float tmp79 = this->cx4;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(1332)
			Float tmp80 = (tmp78 * tmp79);		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(1332)
			Float tmp81 = this->cx4;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(1332)
			Float tmp82 = (tmp80 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(1332)
			Float tmp83 = (tmp76 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(1332)
			Float K = tmp83;		HX_STACK_VAR(K,"K");
			HX_STACK_LINE(1333)
			::zpp_nape::phys::ZPP_Body tmp84 = this->b1;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(1333)
			::zpp_nape::phys::ZPP_Body tmp85 = this->b4;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(1333)
			bool tmp86 = (tmp84 == tmp85);		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(1333)
			if ((tmp86)){
				HX_STACK_LINE(1333)
				Float tmp87 = this->n12x;		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(1333)
				Float tmp88 = this->n34x;		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(1333)
				Float tmp89 = (tmp87 * tmp88);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(1333)
				Float tmp90 = this->n12y;		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(1333)
				Float tmp91 = this->n34y;		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(1333)
				Float tmp92 = (tmp90 * tmp91);		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(1333)
				Float tmp93 = (tmp89 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(1333)
				::zpp_nape::phys::ZPP_Body tmp94 = this->b1;		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(1333)
				Float tmp95 = tmp94->smass;		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(1333)
				Float tmp96 = (tmp93 * tmp95);		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(1333)
				Float tmp97 = this->cx1;		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(1333)
				Float tmp98 = this->cx4;		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(1333)
				Float tmp99 = (tmp97 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(1333)
				::zpp_nape::phys::ZPP_Body tmp100 = this->b1;		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(1333)
				Float tmp101 = tmp100->sinertia;		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(1333)
				Float tmp102 = (tmp99 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(1333)
				Float tmp103 = (tmp96 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(1333)
				Float tmp104 = ((int)2 * tmp103);		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(1333)
				hx::SubEq(K,tmp104);
			}
			HX_STACK_LINE(1334)
			::zpp_nape::phys::ZPP_Body tmp87 = this->b1;		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(1334)
			::zpp_nape::phys::ZPP_Body tmp88 = this->b3;		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(1334)
			bool tmp89 = (tmp87 == tmp88);		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(1334)
			if ((tmp89)){
				HX_STACK_LINE(1334)
				Float tmp90 = this->n12x;		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(1334)
				Float tmp91 = this->n34x;		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(1334)
				Float tmp92 = (tmp90 * tmp91);		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(1334)
				Float tmp93 = this->n12y;		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(1334)
				Float tmp94 = this->n34y;		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(1334)
				Float tmp95 = (tmp93 * tmp94);		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(1334)
				Float tmp96 = (tmp92 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(1334)
				::zpp_nape::phys::ZPP_Body tmp97 = this->b1;		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(1334)
				Float tmp98 = tmp97->smass;		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(1334)
				Float tmp99 = (tmp96 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(1334)
				Float tmp100 = this->cx1;		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(1334)
				Float tmp101 = this->cx3;		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(1334)
				Float tmp102 = (tmp100 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(1334)
				::zpp_nape::phys::ZPP_Body tmp103 = this->b1;		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(1334)
				Float tmp104 = tmp103->sinertia;		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(1334)
				Float tmp105 = (tmp102 * tmp104);		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(1334)
				Float tmp106 = (tmp99 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(1334)
				Float tmp107 = ((int)2 * tmp106);		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(1334)
				hx::AddEq(K,tmp107);
			}
			HX_STACK_LINE(1335)
			::zpp_nape::phys::ZPP_Body tmp90 = this->b2;		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(1335)
			::zpp_nape::phys::ZPP_Body tmp91 = this->b3;		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(1335)
			bool tmp92 = (tmp90 == tmp91);		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(1335)
			if ((tmp92)){
				HX_STACK_LINE(1335)
				Float tmp93 = this->n12x;		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(1335)
				Float tmp94 = this->n34x;		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(1335)
				Float tmp95 = (tmp93 * tmp94);		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(1335)
				Float tmp96 = this->n12y;		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(1335)
				Float tmp97 = this->n34y;		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(1335)
				Float tmp98 = (tmp96 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(1335)
				Float tmp99 = (tmp95 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(1335)
				::zpp_nape::phys::ZPP_Body tmp100 = this->b2;		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(1335)
				Float tmp101 = tmp100->smass;		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(1335)
				Float tmp102 = (tmp99 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(1335)
				Float tmp103 = this->cx2;		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(1335)
				Float tmp104 = this->cx3;		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(1335)
				Float tmp105 = (tmp103 * tmp104);		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(1335)
				::zpp_nape::phys::ZPP_Body tmp106 = this->b2;		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(1335)
				Float tmp107 = tmp106->sinertia;		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(1335)
				Float tmp108 = (tmp105 * tmp107);		HX_STACK_VAR(tmp108,"tmp108");
				HX_STACK_LINE(1335)
				Float tmp109 = (tmp102 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(1335)
				Float tmp110 = ((int)2 * tmp109);		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(1335)
				hx::SubEq(K,tmp110);
			}
			HX_STACK_LINE(1336)
			::zpp_nape::phys::ZPP_Body tmp93 = this->b2;		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(1336)
			::zpp_nape::phys::ZPP_Body tmp94 = this->b4;		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(1336)
			bool tmp95 = (tmp93 == tmp94);		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(1336)
			if ((tmp95)){
				HX_STACK_LINE(1336)
				Float tmp96 = this->n12x;		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(1336)
				Float tmp97 = this->n34x;		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(1336)
				Float tmp98 = (tmp96 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(1336)
				Float tmp99 = this->n12y;		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(1336)
				Float tmp100 = this->n34y;		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(1336)
				Float tmp101 = (tmp99 * tmp100);		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(1336)
				Float tmp102 = (tmp98 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(1336)
				::zpp_nape::phys::ZPP_Body tmp103 = this->b2;		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(1336)
				Float tmp104 = tmp103->smass;		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(1336)
				Float tmp105 = (tmp102 * tmp104);		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(1336)
				Float tmp106 = this->cx2;		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(1336)
				Float tmp107 = this->cx4;		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(1336)
				Float tmp108 = (tmp106 * tmp107);		HX_STACK_VAR(tmp108,"tmp108");
				HX_STACK_LINE(1336)
				::zpp_nape::phys::ZPP_Body tmp109 = this->b2;		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(1336)
				Float tmp110 = tmp109->sinertia;		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(1336)
				Float tmp111 = (tmp108 * tmp110);		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(1336)
				Float tmp112 = (tmp105 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(1336)
				Float tmp113 = ((int)2 * tmp112);		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(1336)
				hx::AddEq(K,tmp113);
			}
			HX_STACK_LINE(1337)
			tmp11 = K;
		}
		HX_STACK_LINE(1326)
		this->kMass = tmp11;
		HX_STACK_LINE(1339)
		Float tmp12 = this->kMass;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1339)
		bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1339)
		if ((tmp13)){
			HX_STACK_LINE(1339)
			Float tmp14 = this->kMass;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1339)
			Float tmp15 = (Float((int)1) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1339)
			this->kMass = tmp15;
		}
		else{
			HX_STACK_LINE(1340)
			this->jAcc = (int)0;
		}
		HX_STACK_LINE(1341)
		bool tmp14 = this->stiff;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1341)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1341)
		if ((tmp15)){
			HX_STACK_LINE(1342)
			bool tmp16 = this->breakUnderError;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1342)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1342)
			if ((tmp16)){
				HX_STACK_LINE(1342)
				Float tmp18 = (C * C);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1342)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1342)
				Float tmp20 = this->maxError;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1342)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1342)
				Float tmp22 = this->maxError;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1342)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1342)
				Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1342)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1342)
				tmp17 = (tmp19 > tmp25);
			}
			else{
				HX_STACK_LINE(1342)
				tmp17 = false;
			}
			HX_STACK_LINE(1342)
			if ((tmp17)){
				HX_STACK_LINE(1342)
				return true;
			}
			HX_STACK_LINE(1343)
			Float biasCoef;		HX_STACK_VAR(biasCoef,"biasCoef");
			HX_STACK_LINE(1344)
			Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1344)
			{
				HX_STACK_LINE(1345)
				Float tmp19 = ::Math_obj::PI;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1345)
				Float tmp20 = ((int)2 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1345)
				Float tmp21 = this->frequency;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1345)
				Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1345)
				Float omega = tmp22;		HX_STACK_VAR(omega,"omega");
				HX_STACK_LINE(1346)
				Float tmp23 = (dt * omega);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1346)
				Float tmp24 = this->damping;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1346)
				Float tmp25 = ((int)2 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1346)
				Float tmp26 = (omega * dt);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1346)
				Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1346)
				Float tmp28 = (tmp23 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1346)
				Float tmp29 = (Float((int)1) / Float(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1346)
				this->gamma = tmp29;
				HX_STACK_LINE(1347)
				Float tmp30 = this->gamma;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1347)
				Float tmp31 = ((int)1 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1347)
				Float tmp32 = (Float((int)1) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1347)
				Float ig = tmp32;		HX_STACK_VAR(ig,"ig");
				HX_STACK_LINE(1348)
				Float tmp33 = (dt * omega);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1348)
				Float tmp34 = omega;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1348)
				Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1348)
				Float tmp36 = this->gamma;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1348)
				Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1348)
				biasCoef = tmp37;
				HX_STACK_LINE(1349)
				hx::MultEq(this->gamma,ig);
				HX_STACK_LINE(1350)
				tmp18 = ig;
			}
			HX_STACK_LINE(1344)
			hx::MultEq(this->kMass,tmp18);
			HX_STACK_LINE(1352)
			Float tmp19 = C;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1352)
			Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1352)
			Float tmp21 = biasCoef;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1352)
			Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1352)
			this->bias = tmp22;
			HX_STACK_LINE(1353)
			{
				HX_STACK_LINE(1354)
				Float tmp23 = this->bias;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1354)
				Float tmp24 = this->maxError;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1354)
				Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1354)
				bool tmp26 = (tmp23 < tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1354)
				if ((tmp26)){
					HX_STACK_LINE(1354)
					Float tmp27 = this->maxError;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1354)
					Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1354)
					this->bias = tmp28;
				}
				else{
					HX_STACK_LINE(1355)
					Float tmp27 = this->bias;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1355)
					Float tmp28 = this->maxError;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1355)
					bool tmp29 = (tmp27 > tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1355)
					if ((tmp29)){
						HX_STACK_LINE(1355)
						Float tmp30 = this->maxError;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1355)
						this->bias = tmp30;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(1359)
			this->bias = (int)0;
			HX_STACK_LINE(1360)
			this->gamma = (int)0;
		}
		HX_STACK_LINE(1362)
		hx::MultEq(this->jAcc,dtratio);
		HX_STACK_LINE(1363)
		Float tmp16 = this->maxForce;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1363)
		Float tmp17 = dt;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1363)
		Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1363)
		this->jMax = tmp18;
	}
	HX_STACK_LINE(1365)
	return false;
}


Void ZPP_PulleyJoint_obj::warmStart( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","warmStart",0xbff482eb,"zpp_nape.constraint.ZPP_PulleyJoint.warmStart","zpp_nape/constraint/PulleyJoint.hx",1367,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1368)
		bool tmp = this->slack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1368)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1368)
		if ((tmp1)){
			HX_STACK_LINE(1428)
			{
				HX_STACK_LINE(1429)
				::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1429)
				Float tmp3 = tmp2->imass;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1429)
				Float tmp4 = this->jAcc;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1429)
				Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1429)
				Float t = tmp5;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1438)
				Float tmp6 = this->n12x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1438)
				Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1438)
				Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1438)
				::zpp_nape::phys::ZPP_Body tmp9 = this->b1;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1438)
				hx::SubEq(tmp9->velx,tmp8);
				HX_STACK_LINE(1439)
				Float tmp10 = this->n12y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1439)
				Float tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1439)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1439)
				::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1439)
				hx::SubEq(tmp13->vely,tmp12);
			}
			HX_STACK_LINE(1441)
			{
				HX_STACK_LINE(1442)
				::zpp_nape::phys::ZPP_Body tmp2 = this->b2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1442)
				Float tmp3 = tmp2->imass;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1442)
				Float tmp4 = this->jAcc;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1442)
				Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1442)
				Float t = tmp5;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1451)
				Float tmp6 = this->n12x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1451)
				Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1451)
				Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1451)
				::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1451)
				hx::AddEq(tmp9->velx,tmp8);
				HX_STACK_LINE(1452)
				Float tmp10 = this->n12y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1452)
				Float tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1452)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1452)
				::zpp_nape::phys::ZPP_Body tmp13 = this->b2;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1452)
				hx::AddEq(tmp13->vely,tmp12);
			}
			HX_STACK_LINE(1454)
			{
				HX_STACK_LINE(1455)
				::zpp_nape::phys::ZPP_Body tmp2 = this->b3;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1455)
				Float tmp3 = tmp2->imass;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1455)
				Float tmp4 = this->jAcc;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1455)
				Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1455)
				Float t = tmp5;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1464)
				Float tmp6 = this->n34x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1464)
				Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1464)
				Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1464)
				::zpp_nape::phys::ZPP_Body tmp9 = this->b3;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1464)
				hx::SubEq(tmp9->velx,tmp8);
				HX_STACK_LINE(1465)
				Float tmp10 = this->n34y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1465)
				Float tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1465)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1465)
				::zpp_nape::phys::ZPP_Body tmp13 = this->b3;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1465)
				hx::SubEq(tmp13->vely,tmp12);
			}
			HX_STACK_LINE(1467)
			{
				HX_STACK_LINE(1468)
				::zpp_nape::phys::ZPP_Body tmp2 = this->b4;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1468)
				Float tmp3 = tmp2->imass;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1468)
				Float tmp4 = this->jAcc;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1468)
				Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1468)
				Float t = tmp5;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1477)
				Float tmp6 = this->n34x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1477)
				Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1477)
				Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1477)
				::zpp_nape::phys::ZPP_Body tmp9 = this->b4;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1477)
				hx::AddEq(tmp9->velx,tmp8);
				HX_STACK_LINE(1478)
				Float tmp10 = this->n34y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1478)
				Float tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1478)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1478)
				::zpp_nape::phys::ZPP_Body tmp13 = this->b4;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1478)
				hx::AddEq(tmp13->vely,tmp12);
			}
			HX_STACK_LINE(1480)
			Float tmp2 = this->cx1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1480)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1480)
			Float tmp4 = tmp3->iinertia;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1480)
			Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1480)
			Float tmp6 = this->jAcc;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1480)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1480)
			::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1480)
			hx::SubEq(tmp8->angvel,tmp7);
			HX_STACK_LINE(1481)
			Float tmp9 = this->cx2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1481)
			::zpp_nape::phys::ZPP_Body tmp10 = this->b2;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1481)
			Float tmp11 = tmp10->iinertia;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1481)
			Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1481)
			Float tmp13 = this->jAcc;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1481)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1481)
			::zpp_nape::phys::ZPP_Body tmp15 = this->b2;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1481)
			hx::AddEq(tmp15->angvel,tmp14);
			HX_STACK_LINE(1482)
			Float tmp16 = this->cx3;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1482)
			::zpp_nape::phys::ZPP_Body tmp17 = this->b3;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1482)
			Float tmp18 = tmp17->iinertia;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1482)
			Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1482)
			Float tmp20 = this->jAcc;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1482)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1482)
			::zpp_nape::phys::ZPP_Body tmp22 = this->b3;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1482)
			hx::SubEq(tmp22->angvel,tmp21);
			HX_STACK_LINE(1483)
			Float tmp23 = this->cx4;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1483)
			::zpp_nape::phys::ZPP_Body tmp24 = this->b4;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1483)
			Float tmp25 = tmp24->iinertia;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1483)
			Float tmp26 = (tmp23 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1483)
			Float tmp27 = this->jAcc;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1483)
			Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1483)
			::zpp_nape::phys::ZPP_Body tmp29 = this->b4;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1483)
			hx::AddEq(tmp29->angvel,tmp28);
		}
	}
return null();
}


bool ZPP_PulleyJoint_obj::applyImpulseVel( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","applyImpulseVel",0x2664e144,"zpp_nape.constraint.ZPP_PulleyJoint.applyImpulseVel","zpp_nape/constraint/PulleyJoint.hx",1487,0xdaffcadd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1488)
	bool tmp = this->slack;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1488)
	if ((tmp)){
		HX_STACK_LINE(1488)
		return false;
	}
	HX_STACK_LINE(1489)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1489)
	{
		HX_STACK_LINE(1490)
		Float tmp2 = this->n12x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1490)
		Float tmp4 = tmp3->velx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1490)
		Float tmp6 = tmp5->kinvelx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1490)
		Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1490)
		Float tmp9 = tmp8->velx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1490)
		Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp11 = this->b1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1490)
		Float tmp12 = tmp11->kinvelx;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1490)
		Float tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1490)
		Float tmp14 = (tmp2 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1490)
		Float tmp15 = this->n12y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp16 = this->b2;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1490)
		Float tmp17 = tmp16->vely;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp18 = this->b2;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1490)
		Float tmp19 = tmp18->kinvely;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1490)
		Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp21 = this->b1;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1490)
		Float tmp22 = tmp21->vely;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1490)
		Float tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp24 = this->b1;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1490)
		Float tmp25 = tmp24->kinvely;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1490)
		Float tmp26 = (tmp23 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1490)
		Float tmp27 = (tmp15 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1490)
		Float tmp28 = (tmp14 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1490)
		Float tmp29 = this->n34x;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp30 = this->b4;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1490)
		Float tmp31 = tmp30->velx;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp32 = this->b4;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1490)
		Float tmp33 = tmp32->kinvelx;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1490)
		Float tmp34 = (tmp31 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp35 = this->b3;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(1490)
		Float tmp36 = tmp35->velx;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(1490)
		Float tmp37 = (tmp34 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp38 = this->b3;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(1490)
		Float tmp39 = tmp38->kinvelx;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(1490)
		Float tmp40 = (tmp37 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(1490)
		Float tmp41 = (tmp29 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(1490)
		Float tmp42 = (tmp28 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(1490)
		Float tmp43 = this->n34y;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp44 = this->b4;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(1490)
		Float tmp45 = tmp44->vely;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp46 = this->b4;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(1490)
		Float tmp47 = tmp46->kinvely;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(1490)
		Float tmp48 = (tmp45 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp49 = this->b3;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(1490)
		Float tmp50 = tmp49->vely;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(1490)
		Float tmp51 = (tmp48 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp52 = this->b3;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(1490)
		Float tmp53 = tmp52->kinvely;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(1490)
		Float tmp54 = (tmp51 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(1490)
		Float tmp55 = (tmp43 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(1490)
		Float tmp56 = (tmp42 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp57 = this->b2;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(1490)
		Float tmp58 = tmp57->angvel;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp59 = this->b2;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(1490)
		Float tmp60 = tmp59->kinangvel;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(1490)
		Float tmp61 = (tmp58 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(1490)
		Float tmp62 = this->cx2;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(1490)
		Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(1490)
		Float tmp64 = (tmp56 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp65 = this->b1;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(1490)
		Float tmp66 = tmp65->angvel;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp67 = this->b1;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(1490)
		Float tmp68 = tmp67->kinangvel;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(1490)
		Float tmp69 = (tmp66 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(1490)
		Float tmp70 = this->cx1;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(1490)
		Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(1490)
		Float tmp72 = (tmp64 - tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp73 = this->b4;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(1490)
		Float tmp74 = tmp73->angvel;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp75 = this->b4;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(1490)
		Float tmp76 = tmp75->kinangvel;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(1490)
		Float tmp77 = (tmp74 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(1490)
		Float tmp78 = this->cx4;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(1490)
		Float tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(1490)
		Float tmp80 = (tmp72 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp81 = this->b3;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(1490)
		Float tmp82 = tmp81->angvel;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(1490)
		::zpp_nape::phys::ZPP_Body tmp83 = this->b3;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(1490)
		Float tmp84 = tmp83->kinangvel;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(1490)
		Float tmp85 = (tmp82 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(1490)
		Float tmp86 = this->cx3;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(1490)
		Float tmp87 = (tmp85 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(1490)
		tmp1 = (tmp80 - tmp87);
	}
	HX_STACK_LINE(1489)
	Float E = tmp1;		HX_STACK_VAR(E,"E");
	HX_STACK_LINE(1492)
	Float tmp2 = this->kMass;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1492)
	Float tmp3 = this->bias;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1492)
	Float tmp4 = E;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1492)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1492)
	Float tmp6 = (tmp2 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1492)
	Float tmp7 = this->jAcc;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1492)
	Float tmp8 = this->gamma;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1492)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1492)
	Float tmp10 = (tmp6 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1492)
	Float j = tmp10;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(1493)
	{
		HX_STACK_LINE(1502)
		Float tmp11 = this->jAcc;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1502)
		Float jOld = tmp11;		HX_STACK_VAR(jOld,"jOld");
		HX_STACK_LINE(1503)
		hx::AddEq(this->jAcc,j);
		HX_STACK_LINE(1504)
		{
			HX_STACK_LINE(1505)
			bool tmp12 = this->equal;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1505)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1505)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1505)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1505)
			if ((tmp14)){
				HX_STACK_LINE(1505)
				Float tmp16 = this->jAcc;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1505)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1505)
				tmp15 = (tmp17 > (int)0);
			}
			else{
				HX_STACK_LINE(1505)
				tmp15 = false;
			}
			HX_STACK_LINE(1505)
			if ((tmp15)){
				HX_STACK_LINE(1505)
				this->jAcc = (int)0;
			}
			HX_STACK_LINE(1506)
			bool tmp16 = this->breakUnderForce;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1506)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1506)
			if ((tmp16)){
				HX_STACK_LINE(1506)
				Float tmp18 = this->jAcc;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1506)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1506)
				Float tmp20 = this->jMax;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1506)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1506)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1506)
				Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1506)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1506)
				tmp17 = (tmp19 < tmp24);
			}
			else{
				HX_STACK_LINE(1506)
				tmp17 = false;
			}
			HX_STACK_LINE(1506)
			if ((tmp17)){
				HX_STACK_LINE(1506)
				return true;
			}
			HX_STACK_LINE(1507)
			bool tmp18 = this->stiff;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1507)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1507)
			if ((tmp19)){
				HX_STACK_LINE(1508)
				Float tmp20 = this->jAcc;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1508)
				Float tmp21 = this->jMax;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1508)
				Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1508)
				bool tmp23 = (tmp20 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1508)
				if ((tmp23)){
					HX_STACK_LINE(1508)
					Float tmp24 = this->jMax;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1508)
					Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1508)
					this->jAcc = tmp25;
				}
			}
		}
		HX_STACK_LINE(1511)
		Float tmp12 = this->jAcc;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1511)
		Float tmp13 = jOld;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1511)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1511)
		j = tmp14;
	}
	HX_STACK_LINE(1572)
	{
		HX_STACK_LINE(1573)
		{
			HX_STACK_LINE(1574)
			::zpp_nape::phys::ZPP_Body tmp11 = this->b1;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1574)
			Float tmp12 = tmp11->imass;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1574)
			Float tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1574)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1574)
			Float t = tmp14;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1583)
			Float tmp15 = this->n12x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1583)
			Float tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1583)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1583)
			::zpp_nape::phys::ZPP_Body tmp18 = this->b1;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1583)
			hx::SubEq(tmp18->velx,tmp17);
			HX_STACK_LINE(1584)
			Float tmp19 = this->n12y;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1584)
			Float tmp20 = t;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1584)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1584)
			::zpp_nape::phys::ZPP_Body tmp22 = this->b1;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1584)
			hx::SubEq(tmp22->vely,tmp21);
		}
		HX_STACK_LINE(1586)
		{
			HX_STACK_LINE(1587)
			::zpp_nape::phys::ZPP_Body tmp11 = this->b2;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1587)
			Float tmp12 = tmp11->imass;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1587)
			Float tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1587)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1587)
			Float t = tmp14;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1596)
			Float tmp15 = this->n12x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1596)
			Float tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1596)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1596)
			::zpp_nape::phys::ZPP_Body tmp18 = this->b2;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1596)
			hx::AddEq(tmp18->velx,tmp17);
			HX_STACK_LINE(1597)
			Float tmp19 = this->n12y;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1597)
			Float tmp20 = t;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1597)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1597)
			::zpp_nape::phys::ZPP_Body tmp22 = this->b2;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1597)
			hx::AddEq(tmp22->vely,tmp21);
		}
		HX_STACK_LINE(1599)
		{
			HX_STACK_LINE(1600)
			::zpp_nape::phys::ZPP_Body tmp11 = this->b3;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1600)
			Float tmp12 = tmp11->imass;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1600)
			Float tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1600)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1600)
			Float t = tmp14;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1609)
			Float tmp15 = this->n34x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1609)
			Float tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1609)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1609)
			::zpp_nape::phys::ZPP_Body tmp18 = this->b3;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1609)
			hx::SubEq(tmp18->velx,tmp17);
			HX_STACK_LINE(1610)
			Float tmp19 = this->n34y;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1610)
			Float tmp20 = t;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1610)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1610)
			::zpp_nape::phys::ZPP_Body tmp22 = this->b3;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1610)
			hx::SubEq(tmp22->vely,tmp21);
		}
		HX_STACK_LINE(1612)
		{
			HX_STACK_LINE(1613)
			::zpp_nape::phys::ZPP_Body tmp11 = this->b4;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1613)
			Float tmp12 = tmp11->imass;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1613)
			Float tmp13 = j;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1613)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1613)
			Float t = tmp14;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1622)
			Float tmp15 = this->n34x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1622)
			Float tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1622)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1622)
			::zpp_nape::phys::ZPP_Body tmp18 = this->b4;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1622)
			hx::AddEq(tmp18->velx,tmp17);
			HX_STACK_LINE(1623)
			Float tmp19 = this->n34y;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1623)
			Float tmp20 = t;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1623)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1623)
			::zpp_nape::phys::ZPP_Body tmp22 = this->b4;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1623)
			hx::AddEq(tmp22->vely,tmp21);
		}
		HX_STACK_LINE(1625)
		Float tmp11 = this->cx1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1625)
		::zpp_nape::phys::ZPP_Body tmp12 = this->b1;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1625)
		Float tmp13 = tmp12->iinertia;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1625)
		Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1625)
		Float tmp15 = j;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1625)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1625)
		::zpp_nape::phys::ZPP_Body tmp17 = this->b1;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1625)
		hx::SubEq(tmp17->angvel,tmp16);
		HX_STACK_LINE(1626)
		Float tmp18 = this->cx2;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1626)
		::zpp_nape::phys::ZPP_Body tmp19 = this->b2;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1626)
		Float tmp20 = tmp19->iinertia;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1626)
		Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1626)
		Float tmp22 = j;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1626)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1626)
		::zpp_nape::phys::ZPP_Body tmp24 = this->b2;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1626)
		hx::AddEq(tmp24->angvel,tmp23);
		HX_STACK_LINE(1627)
		Float tmp25 = this->cx3;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1627)
		::zpp_nape::phys::ZPP_Body tmp26 = this->b3;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1627)
		Float tmp27 = tmp26->iinertia;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1627)
		Float tmp28 = (tmp25 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1627)
		Float tmp29 = j;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1627)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1627)
		::zpp_nape::phys::ZPP_Body tmp31 = this->b3;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1627)
		hx::SubEq(tmp31->angvel,tmp30);
		HX_STACK_LINE(1628)
		Float tmp32 = this->cx4;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1628)
		::zpp_nape::phys::ZPP_Body tmp33 = this->b4;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1628)
		Float tmp34 = tmp33->iinertia;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1628)
		Float tmp35 = (tmp32 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(1628)
		Float tmp36 = j;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(1628)
		Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(1628)
		::zpp_nape::phys::ZPP_Body tmp38 = this->b4;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(1628)
		hx::AddEq(tmp38->angvel,tmp37);
	}
	HX_STACK_LINE(1631)
	return false;
}


bool ZPP_PulleyJoint_obj::applyImpulsePos( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","applyImpulsePos",0x26605c7b,"zpp_nape.constraint.ZPP_PulleyJoint.applyImpulsePos","zpp_nape/constraint/PulleyJoint.hx",1633,0xdaffcadd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1634)
	Float E;		HX_STACK_VAR(E,"E");
	HX_STACK_LINE(1635)
	Float j;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(1636)
	Float r1x = ((Float)0.0);		HX_STACK_VAR(r1x,"r1x");
	HX_STACK_LINE(1637)
	Float r1y = ((Float)0.0);		HX_STACK_VAR(r1y,"r1y");
	HX_STACK_LINE(1639)
	{
		HX_STACK_LINE(1640)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1640)
		Float tmp1 = tmp->axisy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1640)
		Float tmp2 = this->a1localx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1640)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1640)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1640)
		Float tmp5 = tmp4->axisx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1640)
		Float tmp6 = this->a1localy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1640)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1640)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1640)
		r1x = tmp8;
		HX_STACK_LINE(1641)
		Float tmp9 = this->a1localx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1641)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1641)
		Float tmp11 = tmp10->axisx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1641)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1641)
		Float tmp13 = this->a1localy;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1641)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b1;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1641)
		Float tmp15 = tmp14->axisy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1641)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1641)
		Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1641)
		r1y = tmp17;
	}
	HX_STACK_LINE(1644)
	Float r2x = ((Float)0.0);		HX_STACK_VAR(r2x,"r2x");
	HX_STACK_LINE(1645)
	Float r2y = ((Float)0.0);		HX_STACK_VAR(r2y,"r2y");
	HX_STACK_LINE(1647)
	{
		HX_STACK_LINE(1648)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1648)
		Float tmp1 = tmp->axisy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1648)
		Float tmp2 = this->a2localx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1648)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1648)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1648)
		Float tmp5 = tmp4->axisx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1648)
		Float tmp6 = this->a2localy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1648)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1648)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1648)
		r2x = tmp8;
		HX_STACK_LINE(1649)
		Float tmp9 = this->a2localx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1649)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b2;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1649)
		Float tmp11 = tmp10->axisx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1649)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1649)
		Float tmp13 = this->a2localy;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1649)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1649)
		Float tmp15 = tmp14->axisy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1649)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1649)
		Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1649)
		r2y = tmp17;
	}
	HX_STACK_LINE(1652)
	Float r3x = ((Float)0.0);		HX_STACK_VAR(r3x,"r3x");
	HX_STACK_LINE(1653)
	Float r3y = ((Float)0.0);		HX_STACK_VAR(r3y,"r3y");
	HX_STACK_LINE(1655)
	{
		HX_STACK_LINE(1656)
		::zpp_nape::phys::ZPP_Body tmp = this->b3;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1656)
		Float tmp1 = tmp->axisy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1656)
		Float tmp2 = this->a3localx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1656)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1656)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1656)
		Float tmp5 = tmp4->axisx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1656)
		Float tmp6 = this->a3localy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1656)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1656)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1656)
		r3x = tmp8;
		HX_STACK_LINE(1657)
		Float tmp9 = this->a3localx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1657)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b3;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1657)
		Float tmp11 = tmp10->axisx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1657)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1657)
		Float tmp13 = this->a3localy;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1657)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b3;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1657)
		Float tmp15 = tmp14->axisy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1657)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1657)
		Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1657)
		r3y = tmp17;
	}
	HX_STACK_LINE(1660)
	Float r4x = ((Float)0.0);		HX_STACK_VAR(r4x,"r4x");
	HX_STACK_LINE(1661)
	Float r4y = ((Float)0.0);		HX_STACK_VAR(r4y,"r4y");
	HX_STACK_LINE(1663)
	{
		HX_STACK_LINE(1664)
		::zpp_nape::phys::ZPP_Body tmp = this->b4;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1664)
		Float tmp1 = tmp->axisy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1664)
		Float tmp2 = this->a4localx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1664)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1664)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1664)
		Float tmp5 = tmp4->axisx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1664)
		Float tmp6 = this->a4localy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1664)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1664)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1664)
		r4x = tmp8;
		HX_STACK_LINE(1665)
		Float tmp9 = this->a4localx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1665)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b4;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1665)
		Float tmp11 = tmp10->axisx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1665)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1665)
		Float tmp13 = this->a4localy;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1665)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b4;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1665)
		Float tmp15 = tmp14->axisy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1665)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1665)
		Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1665)
		r4y = tmp17;
	}
	HX_STACK_LINE(1668)
	bool slack;		HX_STACK_VAR(slack,"slack");
	HX_STACK_LINE(1669)
	Float n12x = ((Float)0.0);		HX_STACK_VAR(n12x,"n12x");
	HX_STACK_LINE(1670)
	Float n12y = ((Float)0.0);		HX_STACK_VAR(n12y,"n12y");
	HX_STACK_LINE(1671)
	Float n34x = ((Float)0.0);		HX_STACK_VAR(n34x,"n34x");
	HX_STACK_LINE(1672)
	Float n34y = ((Float)0.0);		HX_STACK_VAR(n34y,"n34y");
	HX_STACK_LINE(1673)
	{
		HX_STACK_LINE(1674)
		Float tmp = this->n12x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1674)
		n12x = tmp;
		HX_STACK_LINE(1675)
		Float tmp1 = this->n12y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1675)
		n12y = tmp1;
		HX_STACK_LINE(1684)
		{
		}
	}
	HX_STACK_LINE(1693)
	{
		HX_STACK_LINE(1694)
		Float tmp = this->n34x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1694)
		n34x = tmp;
		HX_STACK_LINE(1695)
		Float tmp1 = this->n34y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1695)
		n34y = tmp1;
		HX_STACK_LINE(1704)
		{
		}
	}
	HX_STACK_LINE(1713)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1713)
	{
		HX_STACK_LINE(1714)
		Float t12x = ((Float)0.0);		HX_STACK_VAR(t12x,"t12x");
		HX_STACK_LINE(1715)
		Float t12y = ((Float)0.0);		HX_STACK_VAR(t12y,"t12y");
		HX_STACK_LINE(1716)
		Float t34x = ((Float)0.0);		HX_STACK_VAR(t34x,"t34x");
		HX_STACK_LINE(1717)
		Float t34y = ((Float)0.0);		HX_STACK_VAR(t34y,"t34y");
		HX_STACK_LINE(1718)
		::zpp_nape::phys::ZPP_Body tmp1 = this->b2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1718)
		Float tmp2 = tmp1->posx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1718)
		Float tmp3 = r2x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1718)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1718)
		::zpp_nape::phys::ZPP_Body tmp5 = this->b1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1718)
		Float tmp6 = tmp5->posx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1718)
		Float tmp7 = r1x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1718)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1718)
		Float tmp9 = (tmp4 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1718)
		t12x = tmp9;
		HX_STACK_LINE(1719)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b2;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1719)
		Float tmp11 = tmp10->posy;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1719)
		Float tmp12 = r2y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1719)
		Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1719)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b1;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1719)
		Float tmp15 = tmp14->posy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1719)
		Float tmp16 = r1y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1719)
		Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1719)
		Float tmp18 = (tmp13 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1719)
		t12y = tmp18;
		HX_STACK_LINE(1720)
		::zpp_nape::phys::ZPP_Body tmp19 = this->b4;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1720)
		Float tmp20 = tmp19->posx;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1720)
		Float tmp21 = r4x;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1720)
		Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1720)
		::zpp_nape::phys::ZPP_Body tmp23 = this->b3;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1720)
		Float tmp24 = tmp23->posx;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1720)
		Float tmp25 = r3x;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1720)
		Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1720)
		Float tmp27 = (tmp22 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1720)
		t34x = tmp27;
		HX_STACK_LINE(1721)
		::zpp_nape::phys::ZPP_Body tmp28 = this->b4;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1721)
		Float tmp29 = tmp28->posy;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1721)
		Float tmp30 = r4y;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1721)
		Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1721)
		::zpp_nape::phys::ZPP_Body tmp32 = this->b3;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1721)
		Float tmp33 = tmp32->posy;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1721)
		Float tmp34 = r3y;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1721)
		Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(1721)
		Float tmp36 = (tmp31 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(1721)
		t34y = tmp36;
		HX_STACK_LINE(1722)
		Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(1722)
		{
			HX_STACK_LINE(1722)
			Float tmp38 = (t12x * t12x);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1722)
			Float tmp39 = (t12y * t12y);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1722)
			Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1722)
			tmp37 = ::Math_obj::sqrt(tmp40);
		}
		HX_STACK_LINE(1722)
		Float C12 = tmp37;		HX_STACK_VAR(C12,"C12");
		HX_STACK_LINE(1723)
		Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(1723)
		{
			HX_STACK_LINE(1723)
			Float tmp39 = (t34x * t34x);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1723)
			Float tmp40 = (t34y * t34y);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1723)
			Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1723)
			tmp38 = ::Math_obj::sqrt(tmp41);
		}
		HX_STACK_LINE(1723)
		Float C34 = tmp38;		HX_STACK_VAR(C34,"C34");
		HX_STACK_LINE(1724)
		bool tmp39 = (C12 != (int)0);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(1724)
		if ((tmp39)){
			HX_STACK_LINE(1726)
			Float tmp40 = (Float(((Float)1.0)) / Float(C12));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1726)
			Float t = tmp40;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1735)
			Float tmp41 = (t12x * t);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1735)
			n12x = tmp41;
			HX_STACK_LINE(1736)
			Float tmp42 = (t12y * t);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1736)
			n12y = tmp42;
		}
		HX_STACK_LINE(1739)
		bool tmp40 = (C34 != (int)0);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(1739)
		if ((tmp40)){
			HX_STACK_LINE(1740)
			{
				HX_STACK_LINE(1741)
				Float tmp41 = (Float(((Float)1.0)) / Float(C34));		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1741)
				Float t = tmp41;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1750)
				Float tmp42 = (t34x * t);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1750)
				n34x = tmp42;
				HX_STACK_LINE(1751)
				Float tmp43 = (t34y * t);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1751)
				n34y = tmp43;
			}
			HX_STACK_LINE(1753)
			{
				HX_STACK_LINE(1754)
				Float tmp41 = this->ratio;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1754)
				Float t = tmp41;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1763)
				hx::MultEq(n34x,t);
				HX_STACK_LINE(1764)
				hx::MultEq(n34y,t);
			}
		}
		else{
			HX_STACK_LINE(1769)
			Float tmp41 = this->ratio;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1769)
			Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1769)
			{
				HX_STACK_LINE(1769)
				Float tmp43 = (n34x * n34x);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1769)
				Float tmp44 = (n34y * n34y);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1769)
				Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1769)
				tmp42 = ::Math_obj::sqrt(tmp45);
			}
			HX_STACK_LINE(1769)
			Float tmp43 = (Float(tmp41) / Float(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1769)
			Float t = tmp43;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1778)
			hx::MultEq(n34x,t);
			HX_STACK_LINE(1779)
			hx::MultEq(n34y,t);
		}
		HX_STACK_LINE(1782)
		Float tmp41 = C12;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(1782)
		Float tmp42 = this->ratio;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(1782)
		Float tmp43 = C34;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(1782)
		Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(1782)
		Float tmp45 = (tmp41 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(1782)
		Float C = tmp45;		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(1783)
		bool tmp46 = this->equal;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(1783)
		if ((tmp46)){
			HX_STACK_LINE(1784)
			Float tmp47 = this->jointMax;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1784)
			hx::SubEq(C,tmp47);
			HX_STACK_LINE(1785)
			slack = false;
		}
		else{
			HX_STACK_LINE(1788)
			Float tmp47 = C;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1788)
			Float tmp48 = this->jointMin;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(1788)
			bool tmp49 = (tmp47 < tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(1788)
			if ((tmp49)){
				HX_STACK_LINE(1789)
				Float tmp50 = this->jointMin;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1789)
				Float tmp51 = C;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1789)
				Float tmp52 = (tmp50 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(1789)
				C = tmp52;
				HX_STACK_LINE(1790)
				{
					HX_STACK_LINE(1791)
					Float tmp53 = n12x;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(1791)
					Float tmp54 = -(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(1791)
					n12x = tmp54;
					HX_STACK_LINE(1792)
					Float tmp55 = n12y;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(1792)
					Float tmp56 = -(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(1792)
					n12y = tmp56;
				}
				HX_STACK_LINE(1794)
				{
					HX_STACK_LINE(1795)
					Float tmp53 = n34x;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(1795)
					Float tmp54 = -(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(1795)
					n34x = tmp54;
					HX_STACK_LINE(1796)
					Float tmp55 = n34y;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(1796)
					Float tmp56 = -(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(1796)
					n34y = tmp56;
				}
				HX_STACK_LINE(1798)
				slack = false;
			}
			else{
				HX_STACK_LINE(1800)
				Float tmp50 = C;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1800)
				Float tmp51 = this->jointMax;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1800)
				bool tmp52 = (tmp50 > tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(1800)
				if ((tmp52)){
					HX_STACK_LINE(1801)
					Float tmp53 = this->jointMax;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(1801)
					hx::SubEq(C,tmp53);
					HX_STACK_LINE(1802)
					slack = false;
				}
				else{
					HX_STACK_LINE(1805)
					{
						HX_STACK_LINE(1806)
						n12x = (int)0;
						HX_STACK_LINE(1807)
						n12y = (int)0;
						HX_STACK_LINE(1816)
						{
						}
					}
					HX_STACK_LINE(1825)
					{
						HX_STACK_LINE(1826)
						n34x = (int)0;
						HX_STACK_LINE(1827)
						n34y = (int)0;
						HX_STACK_LINE(1836)
						{
						}
					}
					HX_STACK_LINE(1845)
					C = (int)0;
					HX_STACK_LINE(1846)
					slack = true;
				}
			}
		}
		HX_STACK_LINE(1849)
		tmp = C;
	}
	HX_STACK_LINE(1713)
	E = tmp;
	HX_STACK_LINE(1851)
	bool tmp1 = slack;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1851)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1851)
	if ((tmp2)){
		HX_STACK_LINE(1852)
		bool tmp3 = this->breakUnderError;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1852)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1852)
		if ((tmp3)){
			HX_STACK_LINE(1852)
			Float tmp5 = (E * E);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1852)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1852)
			Float tmp7 = this->maxError;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1852)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1852)
			Float tmp9 = this->maxError;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1852)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1852)
			Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1852)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1852)
			tmp4 = (tmp6 > tmp12);
		}
		else{
			HX_STACK_LINE(1852)
			tmp4 = false;
		}
		HX_STACK_LINE(1852)
		if ((tmp4)){
			HX_STACK_LINE(1852)
			return true;
		}
		HX_STACK_LINE(1853)
		Float tmp5 = (E * E);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1853)
		Float tmp6 = ::nape::Config_obj::constraintLinearSlop;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1853)
		Float tmp7 = ::nape::Config_obj::constraintLinearSlop;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1853)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1853)
		bool tmp9 = (tmp5 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1853)
		if ((tmp9)){
			HX_STACK_LINE(1853)
			return false;
		}
		HX_STACK_LINE(1854)
		hx::MultEq(E,((Float)0.5));
		HX_STACK_LINE(1855)
		Float tmp10 = (E * E);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1855)
		bool tmp11 = (tmp10 > (int)6);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1855)
		if ((tmp11)){
			HX_STACK_LINE(1856)
			::zpp_nape::phys::ZPP_Body tmp12 = this->b1;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1856)
			Float tmp13 = tmp12->smass;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1856)
			::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1856)
			Float tmp15 = tmp14->smass;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1856)
			Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1856)
			Float k = tmp16;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(1857)
			Float tmp17 = k;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1857)
			Float tmp18 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1857)
			bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1857)
			if ((tmp19)){
				HX_STACK_LINE(1858)
				Float tmp20 = (Float(((Float)0.75)) / Float(k));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1858)
				k = tmp20;
				HX_STACK_LINE(1859)
				Float tmp21 = E;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1859)
				Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1859)
				Float tmp23 = k;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1859)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1859)
				j = tmp24;
				HX_STACK_LINE(1860)
				bool tmp25 = this->equal;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1860)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1860)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1860)
				if ((tmp26)){
					HX_STACK_LINE(1860)
					tmp27 = (j < (int)0);
				}
				else{
					HX_STACK_LINE(1860)
					tmp27 = true;
				}
				HX_STACK_LINE(1860)
				if ((tmp27)){
					HX_STACK_LINE(1861)
					{
						HX_STACK_LINE(1862)
						Float tmp28 = j;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1862)
						::zpp_nape::phys::ZPP_Body tmp29 = this->b1;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1862)
						Float tmp30 = tmp29->imass;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1862)
						Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1862)
						Float t = tmp31;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1871)
						Float tmp32 = (n12x * t);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1871)
						::zpp_nape::phys::ZPP_Body tmp33 = this->b1;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1871)
						hx::SubEq(tmp33->posx,tmp32);
						HX_STACK_LINE(1872)
						Float tmp34 = (n12y * t);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1872)
						::zpp_nape::phys::ZPP_Body tmp35 = this->b1;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1872)
						hx::SubEq(tmp35->posy,tmp34);
					}
					HX_STACK_LINE(1874)
					{
						HX_STACK_LINE(1875)
						Float tmp28 = j;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1875)
						::zpp_nape::phys::ZPP_Body tmp29 = this->b2;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1875)
						Float tmp30 = tmp29->imass;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1875)
						Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1875)
						Float t = tmp31;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1884)
						Float tmp32 = (n12x * t);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1884)
						::zpp_nape::phys::ZPP_Body tmp33 = this->b2;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1884)
						hx::AddEq(tmp33->posx,tmp32);
						HX_STACK_LINE(1885)
						Float tmp34 = (n12y * t);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1885)
						::zpp_nape::phys::ZPP_Body tmp35 = this->b2;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1885)
						hx::AddEq(tmp35->posy,tmp34);
					}
					HX_STACK_LINE(1887)
					{
						HX_STACK_LINE(1888)
						Float tmp28 = j;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1888)
						::zpp_nape::phys::ZPP_Body tmp29 = this->b3;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1888)
						Float tmp30 = tmp29->imass;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1888)
						Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1888)
						Float t = tmp31;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1897)
						Float tmp32 = (n34x * t);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1897)
						::zpp_nape::phys::ZPP_Body tmp33 = this->b3;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1897)
						hx::SubEq(tmp33->posx,tmp32);
						HX_STACK_LINE(1898)
						Float tmp34 = (n34y * t);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1898)
						::zpp_nape::phys::ZPP_Body tmp35 = this->b3;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1898)
						hx::SubEq(tmp35->posy,tmp34);
					}
					HX_STACK_LINE(1900)
					{
						HX_STACK_LINE(1901)
						Float tmp28 = j;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1901)
						::zpp_nape::phys::ZPP_Body tmp29 = this->b4;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1901)
						Float tmp30 = tmp29->imass;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1901)
						Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1901)
						Float t = tmp31;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1910)
						Float tmp32 = (n34x * t);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1910)
						::zpp_nape::phys::ZPP_Body tmp33 = this->b4;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1910)
						hx::AddEq(tmp33->posx,tmp32);
						HX_STACK_LINE(1911)
						Float tmp34 = (n34y * t);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1911)
						::zpp_nape::phys::ZPP_Body tmp35 = this->b4;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1911)
						hx::AddEq(tmp35->posy,tmp34);
					}
					HX_STACK_LINE(1913)
					Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1913)
					{
						HX_STACK_LINE(1914)
						Float t12x = ((Float)0.0);		HX_STACK_VAR(t12x,"t12x");
						HX_STACK_LINE(1915)
						Float t12y = ((Float)0.0);		HX_STACK_VAR(t12y,"t12y");
						HX_STACK_LINE(1916)
						Float t34x = ((Float)0.0);		HX_STACK_VAR(t34x,"t34x");
						HX_STACK_LINE(1917)
						Float t34y = ((Float)0.0);		HX_STACK_VAR(t34y,"t34y");
						HX_STACK_LINE(1918)
						::zpp_nape::phys::ZPP_Body tmp29 = this->b2;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1918)
						Float tmp30 = tmp29->posx;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1918)
						Float tmp31 = r2x;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1918)
						Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1918)
						::zpp_nape::phys::ZPP_Body tmp33 = this->b1;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1918)
						Float tmp34 = tmp33->posx;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1918)
						Float tmp35 = r1x;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1918)
						Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1918)
						Float tmp37 = (tmp32 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1918)
						t12x = tmp37;
						HX_STACK_LINE(1919)
						::zpp_nape::phys::ZPP_Body tmp38 = this->b2;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1919)
						Float tmp39 = tmp38->posy;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1919)
						Float tmp40 = r2y;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1919)
						Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1919)
						::zpp_nape::phys::ZPP_Body tmp42 = this->b1;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1919)
						Float tmp43 = tmp42->posy;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1919)
						Float tmp44 = r1y;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1919)
						Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(1919)
						Float tmp46 = (tmp41 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(1919)
						t12y = tmp46;
						HX_STACK_LINE(1920)
						::zpp_nape::phys::ZPP_Body tmp47 = this->b4;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(1920)
						Float tmp48 = tmp47->posx;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(1920)
						Float tmp49 = r4x;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(1920)
						Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(1920)
						::zpp_nape::phys::ZPP_Body tmp51 = this->b3;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1920)
						Float tmp52 = tmp51->posx;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1920)
						Float tmp53 = r3x;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1920)
						Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(1920)
						Float tmp55 = (tmp50 - tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(1920)
						t34x = tmp55;
						HX_STACK_LINE(1921)
						::zpp_nape::phys::ZPP_Body tmp56 = this->b4;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(1921)
						Float tmp57 = tmp56->posy;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(1921)
						Float tmp58 = r4y;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(1921)
						Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(1921)
						::zpp_nape::phys::ZPP_Body tmp60 = this->b3;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(1921)
						Float tmp61 = tmp60->posy;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(1921)
						Float tmp62 = r3y;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(1921)
						Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(1921)
						Float tmp64 = (tmp59 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(1921)
						t34y = tmp64;
						HX_STACK_LINE(1922)
						Float tmp65;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(1922)
						{
							HX_STACK_LINE(1922)
							Float tmp66 = (t12x * t12x);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(1922)
							Float tmp67 = (t12y * t12y);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(1922)
							Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(1922)
							tmp65 = ::Math_obj::sqrt(tmp68);
						}
						HX_STACK_LINE(1922)
						Float C12 = tmp65;		HX_STACK_VAR(C12,"C12");
						HX_STACK_LINE(1923)
						Float tmp66;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(1923)
						{
							HX_STACK_LINE(1923)
							Float tmp67 = (t34x * t34x);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(1923)
							Float tmp68 = (t34y * t34y);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(1923)
							Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(1923)
							tmp66 = ::Math_obj::sqrt(tmp69);
						}
						HX_STACK_LINE(1923)
						Float C34 = tmp66;		HX_STACK_VAR(C34,"C34");
						HX_STACK_LINE(1924)
						bool tmp67 = (C12 != (int)0);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(1924)
						if ((tmp67)){
							HX_STACK_LINE(1926)
							Float tmp68 = (Float(((Float)1.0)) / Float(C12));		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(1926)
							Float t = tmp68;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1935)
							Float tmp69 = (t12x * t);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(1935)
							n12x = tmp69;
							HX_STACK_LINE(1936)
							Float tmp70 = (t12y * t);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(1936)
							n12y = tmp70;
						}
						HX_STACK_LINE(1939)
						bool tmp68 = (C34 != (int)0);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(1939)
						if ((tmp68)){
							HX_STACK_LINE(1940)
							{
								HX_STACK_LINE(1941)
								Float tmp69 = (Float(((Float)1.0)) / Float(C34));		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(1941)
								Float t = tmp69;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1950)
								Float tmp70 = (t34x * t);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(1950)
								n34x = tmp70;
								HX_STACK_LINE(1951)
								Float tmp71 = (t34y * t);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(1951)
								n34y = tmp71;
							}
							HX_STACK_LINE(1953)
							{
								HX_STACK_LINE(1954)
								Float tmp69 = this->ratio;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(1954)
								Float t = tmp69;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1963)
								hx::MultEq(n34x,t);
								HX_STACK_LINE(1964)
								hx::MultEq(n34y,t);
							}
						}
						else{
							HX_STACK_LINE(1969)
							Float tmp69 = this->ratio;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(1969)
							Float tmp70;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(1969)
							{
								HX_STACK_LINE(1969)
								Float tmp71 = (n34x * n34x);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(1969)
								Float tmp72 = (n34y * n34y);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(1969)
								Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(1969)
								tmp70 = ::Math_obj::sqrt(tmp73);
							}
							HX_STACK_LINE(1969)
							Float tmp71 = (Float(tmp69) / Float(tmp70));		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(1969)
							Float t = tmp71;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1978)
							hx::MultEq(n34x,t);
							HX_STACK_LINE(1979)
							hx::MultEq(n34y,t);
						}
						HX_STACK_LINE(1982)
						Float tmp69 = C12;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(1982)
						Float tmp70 = this->ratio;		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(1982)
						Float tmp71 = C34;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(1982)
						Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(1982)
						Float tmp73 = (tmp69 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(1982)
						Float C = tmp73;		HX_STACK_VAR(C,"C");
						HX_STACK_LINE(1983)
						bool tmp74 = this->equal;		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(1983)
						if ((tmp74)){
							HX_STACK_LINE(1984)
							Float tmp75 = this->jointMax;		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(1984)
							hx::SubEq(C,tmp75);
							HX_STACK_LINE(1985)
							slack = false;
						}
						else{
							HX_STACK_LINE(1988)
							Float tmp75 = C;		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(1988)
							Float tmp76 = this->jointMin;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(1988)
							bool tmp77 = (tmp75 < tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(1988)
							if ((tmp77)){
								HX_STACK_LINE(1989)
								Float tmp78 = this->jointMin;		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(1989)
								Float tmp79 = C;		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(1989)
								Float tmp80 = (tmp78 - tmp79);		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(1989)
								C = tmp80;
								HX_STACK_LINE(1990)
								{
									HX_STACK_LINE(1991)
									Float tmp81 = n12x;		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(1991)
									Float tmp82 = -(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(1991)
									n12x = tmp82;
									HX_STACK_LINE(1992)
									Float tmp83 = n12y;		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(1992)
									Float tmp84 = -(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(1992)
									n12y = tmp84;
								}
								HX_STACK_LINE(1994)
								{
									HX_STACK_LINE(1995)
									Float tmp81 = n34x;		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(1995)
									Float tmp82 = -(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(1995)
									n34x = tmp82;
									HX_STACK_LINE(1996)
									Float tmp83 = n34y;		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(1996)
									Float tmp84 = -(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(1996)
									n34y = tmp84;
								}
								HX_STACK_LINE(1998)
								slack = false;
							}
							else{
								HX_STACK_LINE(2000)
								Float tmp78 = C;		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(2000)
								Float tmp79 = this->jointMax;		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(2000)
								bool tmp80 = (tmp78 > tmp79);		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(2000)
								if ((tmp80)){
									HX_STACK_LINE(2001)
									Float tmp81 = this->jointMax;		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(2001)
									hx::SubEq(C,tmp81);
									HX_STACK_LINE(2002)
									slack = false;
								}
								else{
									HX_STACK_LINE(2005)
									{
										HX_STACK_LINE(2006)
										n12x = (int)0;
										HX_STACK_LINE(2007)
										n12y = (int)0;
										HX_STACK_LINE(2016)
										{
										}
									}
									HX_STACK_LINE(2025)
									{
										HX_STACK_LINE(2026)
										n34x = (int)0;
										HX_STACK_LINE(2027)
										n34y = (int)0;
										HX_STACK_LINE(2036)
										{
										}
									}
									HX_STACK_LINE(2045)
									C = (int)0;
									HX_STACK_LINE(2046)
									slack = true;
								}
							}
						}
						HX_STACK_LINE(2049)
						tmp28 = C;
					}
					HX_STACK_LINE(1913)
					E = tmp28;
					HX_STACK_LINE(2051)
					hx::MultEq(E,((Float)0.5));
				}
			}
		}
		HX_STACK_LINE(2055)
		Float cx1;		HX_STACK_VAR(cx1,"cx1");
		HX_STACK_LINE(2055)
		Float cx2;		HX_STACK_VAR(cx2,"cx2");
		HX_STACK_LINE(2055)
		Float cx3;		HX_STACK_VAR(cx3,"cx3");
		HX_STACK_LINE(2055)
		Float cx4;		HX_STACK_VAR(cx4,"cx4");
		HX_STACK_LINE(2056)
		Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(2056)
		{
			HX_STACK_LINE(2057)
			Float tmp13 = (n12y * r1x);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2057)
			Float tmp14 = (n12x * r1y);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2057)
			Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2057)
			cx1 = tmp15;
			HX_STACK_LINE(2058)
			Float tmp16 = (n12y * r2x);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2058)
			Float tmp17 = (n12x * r2y);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(2058)
			Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(2058)
			cx2 = tmp18;
			HX_STACK_LINE(2059)
			Float tmp19 = (n34y * r3x);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(2059)
			Float tmp20 = (n34x * r3y);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(2059)
			Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(2059)
			cx3 = tmp21;
			HX_STACK_LINE(2060)
			Float tmp22 = (n34y * r4x);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(2060)
			Float tmp23 = (n34x * r4y);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(2060)
			Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(2060)
			cx4 = tmp24;
			HX_STACK_LINE(2061)
			Float tmp25 = this->ratio;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(2061)
			Float tmp26 = this->ratio;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(2061)
			Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(2061)
			Float ratioSq = tmp27;		HX_STACK_VAR(ratioSq,"ratioSq");
			HX_STACK_LINE(2062)
			::zpp_nape::phys::ZPP_Body tmp28 = this->b1;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(2062)
			Float tmp29 = tmp28->smass;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(2062)
			::zpp_nape::phys::ZPP_Body tmp30 = this->b2;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(2062)
			Float tmp31 = tmp30->smass;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(2062)
			Float tmp32 = (tmp29 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(2062)
			Float tmp33 = ratioSq;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(2062)
			::zpp_nape::phys::ZPP_Body tmp34 = this->b3;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(2062)
			Float tmp35 = tmp34->smass;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(2062)
			::zpp_nape::phys::ZPP_Body tmp36 = this->b4;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(2062)
			Float tmp37 = tmp36->smass;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(2062)
			Float tmp38 = (tmp35 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(2062)
			Float tmp39 = (tmp33 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(2062)
			Float tmp40 = (tmp32 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(2062)
			::zpp_nape::phys::ZPP_Body tmp41 = this->b1;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(2062)
			Float tmp42 = tmp41->sinertia;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(2062)
			Float tmp43 = cx1;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(2062)
			Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(2062)
			Float tmp45 = cx1;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(2062)
			Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(2062)
			Float tmp47 = (tmp40 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(2062)
			::zpp_nape::phys::ZPP_Body tmp48 = this->b2;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(2062)
			Float tmp49 = tmp48->sinertia;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(2062)
			Float tmp50 = cx2;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(2062)
			Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(2062)
			Float tmp52 = cx2;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(2062)
			Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(2062)
			Float tmp54 = (tmp47 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(2062)
			::zpp_nape::phys::ZPP_Body tmp55 = this->b3;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(2062)
			Float tmp56 = tmp55->sinertia;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(2062)
			Float tmp57 = cx3;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(2062)
			Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(2062)
			Float tmp59 = cx3;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(2062)
			Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(2062)
			Float tmp61 = (tmp54 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(2062)
			::zpp_nape::phys::ZPP_Body tmp62 = this->b4;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(2062)
			Float tmp63 = tmp62->sinertia;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(2062)
			Float tmp64 = cx4;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(2062)
			Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(2062)
			Float tmp66 = cx4;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(2062)
			Float tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(2062)
			Float tmp68 = (tmp61 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(2062)
			Float K = tmp68;		HX_STACK_VAR(K,"K");
			HX_STACK_LINE(2063)
			::zpp_nape::phys::ZPP_Body tmp69 = this->b1;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(2063)
			::zpp_nape::phys::ZPP_Body tmp70 = this->b4;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(2063)
			bool tmp71 = (tmp69 == tmp70);		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(2063)
			if ((tmp71)){
				HX_STACK_LINE(2063)
				Float tmp72 = (n12x * n34x);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(2063)
				Float tmp73 = (n12y * n34y);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(2063)
				Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(2063)
				::zpp_nape::phys::ZPP_Body tmp75 = this->b1;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(2063)
				Float tmp76 = tmp75->smass;		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(2063)
				Float tmp77 = (tmp74 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(2063)
				Float tmp78 = (cx1 * cx4);		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(2063)
				::zpp_nape::phys::ZPP_Body tmp79 = this->b1;		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(2063)
				Float tmp80 = tmp79->sinertia;		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(2063)
				Float tmp81 = (tmp78 * tmp80);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(2063)
				Float tmp82 = (tmp77 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(2063)
				Float tmp83 = ((int)2 * tmp82);		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(2063)
				hx::SubEq(K,tmp83);
			}
			HX_STACK_LINE(2064)
			::zpp_nape::phys::ZPP_Body tmp72 = this->b1;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(2064)
			::zpp_nape::phys::ZPP_Body tmp73 = this->b3;		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(2064)
			bool tmp74 = (tmp72 == tmp73);		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(2064)
			if ((tmp74)){
				HX_STACK_LINE(2064)
				Float tmp75 = (n12x * n34x);		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(2064)
				Float tmp76 = (n12y * n34y);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(2064)
				Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(2064)
				::zpp_nape::phys::ZPP_Body tmp78 = this->b1;		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(2064)
				Float tmp79 = tmp78->smass;		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(2064)
				Float tmp80 = (tmp77 * tmp79);		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(2064)
				Float tmp81 = (cx1 * cx3);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(2064)
				::zpp_nape::phys::ZPP_Body tmp82 = this->b1;		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(2064)
				Float tmp83 = tmp82->sinertia;		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(2064)
				Float tmp84 = (tmp81 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(2064)
				Float tmp85 = (tmp80 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(2064)
				Float tmp86 = ((int)2 * tmp85);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(2064)
				hx::AddEq(K,tmp86);
			}
			HX_STACK_LINE(2065)
			::zpp_nape::phys::ZPP_Body tmp75 = this->b2;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(2065)
			::zpp_nape::phys::ZPP_Body tmp76 = this->b3;		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(2065)
			bool tmp77 = (tmp75 == tmp76);		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(2065)
			if ((tmp77)){
				HX_STACK_LINE(2065)
				Float tmp78 = (n12x * n34x);		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(2065)
				Float tmp79 = (n12y * n34y);		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(2065)
				Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(2065)
				::zpp_nape::phys::ZPP_Body tmp81 = this->b2;		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(2065)
				Float tmp82 = tmp81->smass;		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(2065)
				Float tmp83 = (tmp80 * tmp82);		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(2065)
				Float tmp84 = (cx2 * cx3);		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(2065)
				::zpp_nape::phys::ZPP_Body tmp85 = this->b2;		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(2065)
				Float tmp86 = tmp85->sinertia;		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(2065)
				Float tmp87 = (tmp84 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(2065)
				Float tmp88 = (tmp83 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(2065)
				Float tmp89 = ((int)2 * tmp88);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(2065)
				hx::SubEq(K,tmp89);
			}
			HX_STACK_LINE(2066)
			::zpp_nape::phys::ZPP_Body tmp78 = this->b2;		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(2066)
			::zpp_nape::phys::ZPP_Body tmp79 = this->b4;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(2066)
			bool tmp80 = (tmp78 == tmp79);		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(2066)
			if ((tmp80)){
				HX_STACK_LINE(2066)
				Float tmp81 = (n12x * n34x);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(2066)
				Float tmp82 = (n12y * n34y);		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(2066)
				Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(2066)
				::zpp_nape::phys::ZPP_Body tmp84 = this->b2;		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(2066)
				Float tmp85 = tmp84->smass;		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(2066)
				Float tmp86 = (tmp83 * tmp85);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(2066)
				Float tmp87 = (cx2 * cx4);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(2066)
				::zpp_nape::phys::ZPP_Body tmp88 = this->b2;		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(2066)
				Float tmp89 = tmp88->sinertia;		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(2066)
				Float tmp90 = (tmp87 * tmp89);		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(2066)
				Float tmp91 = (tmp86 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(2066)
				Float tmp92 = ((int)2 * tmp91);		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(2066)
				hx::AddEq(K,tmp92);
			}
			HX_STACK_LINE(2067)
			tmp12 = K;
		}
		HX_STACK_LINE(2056)
		Float k = tmp12;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(2069)
		bool tmp13 = (k != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(2069)
		if ((tmp13)){
			HX_STACK_LINE(2069)
			Float tmp14 = (Float((int)1) / Float(k));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2069)
			k = tmp14;
		}
		HX_STACK_LINE(2070)
		Float tmp14 = E;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(2070)
		Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(2070)
		Float tmp16 = k;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(2070)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(2070)
		j = tmp17;
		HX_STACK_LINE(2071)
		bool tmp18 = this->equal;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(2071)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(2071)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(2071)
		if ((tmp19)){
			HX_STACK_LINE(2071)
			tmp20 = (j < (int)0);
		}
		else{
			HX_STACK_LINE(2071)
			tmp20 = true;
		}
		HX_STACK_LINE(2071)
		if ((tmp20)){
			HX_STACK_LINE(2073)
			{
				HX_STACK_LINE(2074)
				::zpp_nape::phys::ZPP_Body tmp21 = this->b1;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2074)
				Float tmp22 = tmp21->imass;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2074)
				Float tmp23 = j;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(2074)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(2074)
				Float t = tmp24;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2083)
				Float tmp25 = (n12x * t);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(2083)
				::zpp_nape::phys::ZPP_Body tmp26 = this->b1;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(2083)
				hx::SubEq(tmp26->posx,tmp25);
				HX_STACK_LINE(2084)
				Float tmp27 = (n12y * t);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(2084)
				::zpp_nape::phys::ZPP_Body tmp28 = this->b1;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(2084)
				hx::SubEq(tmp28->posy,tmp27);
			}
			HX_STACK_LINE(2086)
			{
				HX_STACK_LINE(2087)
				::zpp_nape::phys::ZPP_Body tmp21 = this->b2;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2087)
				Float tmp22 = tmp21->imass;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2087)
				Float tmp23 = j;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(2087)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(2087)
				Float t = tmp24;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2096)
				Float tmp25 = (n12x * t);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(2096)
				::zpp_nape::phys::ZPP_Body tmp26 = this->b2;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(2096)
				hx::AddEq(tmp26->posx,tmp25);
				HX_STACK_LINE(2097)
				Float tmp27 = (n12y * t);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(2097)
				::zpp_nape::phys::ZPP_Body tmp28 = this->b2;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(2097)
				hx::AddEq(tmp28->posy,tmp27);
			}
			HX_STACK_LINE(2099)
			{
				HX_STACK_LINE(2100)
				::zpp_nape::phys::ZPP_Body tmp21 = this->b3;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2100)
				Float tmp22 = tmp21->imass;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2100)
				Float tmp23 = j;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(2100)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(2100)
				Float t = tmp24;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2109)
				Float tmp25 = (n34x * t);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(2109)
				::zpp_nape::phys::ZPP_Body tmp26 = this->b3;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(2109)
				hx::SubEq(tmp26->posx,tmp25);
				HX_STACK_LINE(2110)
				Float tmp27 = (n34y * t);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(2110)
				::zpp_nape::phys::ZPP_Body tmp28 = this->b3;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(2110)
				hx::SubEq(tmp28->posy,tmp27);
			}
			HX_STACK_LINE(2112)
			{
				HX_STACK_LINE(2113)
				::zpp_nape::phys::ZPP_Body tmp21 = this->b4;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2113)
				Float tmp22 = tmp21->imass;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2113)
				Float tmp23 = j;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(2113)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(2113)
				Float t = tmp24;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2122)
				Float tmp25 = (n34x * t);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(2122)
				::zpp_nape::phys::ZPP_Body tmp26 = this->b4;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(2122)
				hx::AddEq(tmp26->posx,tmp25);
				HX_STACK_LINE(2123)
				Float tmp27 = (n34y * t);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(2123)
				::zpp_nape::phys::ZPP_Body tmp28 = this->b4;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(2123)
				hx::AddEq(tmp28->posy,tmp27);
			}
			HX_STACK_LINE(2125)
			{
				HX_STACK_LINE(2125)
				::zpp_nape::phys::ZPP_Body tmp21 = this->b1;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2125)
				::zpp_nape::phys::ZPP_Body _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(2125)
				Float tmp22 = cx1;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2125)
				Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(2125)
				::zpp_nape::phys::ZPP_Body tmp24 = this->b1;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(2125)
				Float tmp25 = tmp24->iinertia;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(2125)
				Float tmp26 = (tmp23 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(2125)
				Float tmp27 = j;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(2125)
				Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(2125)
				Float dr = tmp28;		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(2125)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(2125)
				Float tmp29 = (dr * dr);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(2125)
				bool tmp30 = (tmp29 > ((Float)0.0001));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(2125)
				if ((tmp30)){
					HX_STACK_LINE(2125)
					Float tmp31 = _this->rot;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(2125)
					Float tmp32 = ::Math_obj::sin(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(2125)
					_this->axisx = tmp32;
					HX_STACK_LINE(2125)
					Float tmp33 = _this->rot;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(2125)
					Float tmp34 = ::Math_obj::cos(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(2125)
					_this->axisy = tmp34;
					HX_STACK_LINE(2125)
					Dynamic();
				}
				else{
					HX_STACK_LINE(2125)
					Float tmp31 = (dr * dr);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(2125)
					Float d2 = tmp31;		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(2125)
					Float tmp32 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(2125)
					Float tmp33 = ((int)1 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(2125)
					Float p = tmp33;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(2125)
					Float tmp34 = (d2 * d2);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(2125)
					Float tmp35 = (Float(tmp34) / Float((int)8));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(2125)
					Float tmp36 = ((int)1 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(2125)
					Float m = tmp36;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(2125)
					Float tmp37 = (p * _this->axisx);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(2125)
					Float tmp38 = (dr * _this->axisy);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(2125)
					Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(2125)
					Float tmp40 = m;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(2125)
					Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(2125)
					Float nx = tmp41;		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(2125)
					Float tmp42 = (p * _this->axisy);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(2125)
					Float tmp43 = (dr * _this->axisx);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(2125)
					Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(2125)
					Float tmp45 = m;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(2125)
					Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(2125)
					_this->axisy = tmp46;
					HX_STACK_LINE(2125)
					_this->axisx = nx;
				}
			}
			HX_STACK_LINE(2126)
			{
				HX_STACK_LINE(2126)
				::zpp_nape::phys::ZPP_Body tmp21 = this->b2;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2126)
				::zpp_nape::phys::ZPP_Body _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(2126)
				Float tmp22 = cx2;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2126)
				::zpp_nape::phys::ZPP_Body tmp23 = this->b2;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(2126)
				Float tmp24 = tmp23->iinertia;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(2126)
				Float tmp25 = (tmp22 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(2126)
				Float tmp26 = j;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(2126)
				Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(2126)
				Float dr = tmp27;		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(2126)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(2126)
				Float tmp28 = (dr * dr);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(2126)
				bool tmp29 = (tmp28 > ((Float)0.0001));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(2126)
				if ((tmp29)){
					HX_STACK_LINE(2126)
					Float tmp30 = _this->rot;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(2126)
					Float tmp31 = ::Math_obj::sin(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(2126)
					_this->axisx = tmp31;
					HX_STACK_LINE(2126)
					Float tmp32 = _this->rot;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(2126)
					Float tmp33 = ::Math_obj::cos(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(2126)
					_this->axisy = tmp33;
					HX_STACK_LINE(2126)
					Dynamic();
				}
				else{
					HX_STACK_LINE(2126)
					Float tmp30 = (dr * dr);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(2126)
					Float d2 = tmp30;		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(2126)
					Float tmp31 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(2126)
					Float tmp32 = ((int)1 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(2126)
					Float p = tmp32;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(2126)
					Float tmp33 = (d2 * d2);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(2126)
					Float tmp34 = (Float(tmp33) / Float((int)8));		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(2126)
					Float tmp35 = ((int)1 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(2126)
					Float m = tmp35;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(2126)
					Float tmp36 = (p * _this->axisx);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(2126)
					Float tmp37 = (dr * _this->axisy);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(2126)
					Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(2126)
					Float tmp39 = m;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(2126)
					Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(2126)
					Float nx = tmp40;		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(2126)
					Float tmp41 = (p * _this->axisy);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(2126)
					Float tmp42 = (dr * _this->axisx);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(2126)
					Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(2126)
					Float tmp44 = m;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(2126)
					Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(2126)
					_this->axisy = tmp45;
					HX_STACK_LINE(2126)
					_this->axisx = nx;
				}
			}
			HX_STACK_LINE(2127)
			{
				HX_STACK_LINE(2127)
				::zpp_nape::phys::ZPP_Body tmp21 = this->b3;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2127)
				::zpp_nape::phys::ZPP_Body _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(2127)
				Float tmp22 = cx3;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2127)
				Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(2127)
				::zpp_nape::phys::ZPP_Body tmp24 = this->b3;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(2127)
				Float tmp25 = tmp24->iinertia;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(2127)
				Float tmp26 = (tmp23 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(2127)
				Float tmp27 = j;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(2127)
				Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(2127)
				Float dr = tmp28;		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(2127)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(2127)
				Float tmp29 = (dr * dr);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(2127)
				bool tmp30 = (tmp29 > ((Float)0.0001));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(2127)
				if ((tmp30)){
					HX_STACK_LINE(2127)
					Float tmp31 = _this->rot;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(2127)
					Float tmp32 = ::Math_obj::sin(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(2127)
					_this->axisx = tmp32;
					HX_STACK_LINE(2127)
					Float tmp33 = _this->rot;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(2127)
					Float tmp34 = ::Math_obj::cos(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(2127)
					_this->axisy = tmp34;
					HX_STACK_LINE(2127)
					Dynamic();
				}
				else{
					HX_STACK_LINE(2127)
					Float tmp31 = (dr * dr);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(2127)
					Float d2 = tmp31;		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(2127)
					Float tmp32 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(2127)
					Float tmp33 = ((int)1 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(2127)
					Float p = tmp33;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(2127)
					Float tmp34 = (d2 * d2);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(2127)
					Float tmp35 = (Float(tmp34) / Float((int)8));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(2127)
					Float tmp36 = ((int)1 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(2127)
					Float m = tmp36;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(2127)
					Float tmp37 = (p * _this->axisx);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(2127)
					Float tmp38 = (dr * _this->axisy);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(2127)
					Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(2127)
					Float tmp40 = m;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(2127)
					Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(2127)
					Float nx = tmp41;		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(2127)
					Float tmp42 = (p * _this->axisy);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(2127)
					Float tmp43 = (dr * _this->axisx);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(2127)
					Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(2127)
					Float tmp45 = m;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(2127)
					Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(2127)
					_this->axisy = tmp46;
					HX_STACK_LINE(2127)
					_this->axisx = nx;
				}
			}
			HX_STACK_LINE(2128)
			{
				HX_STACK_LINE(2128)
				::zpp_nape::phys::ZPP_Body tmp21 = this->b4;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2128)
				::zpp_nape::phys::ZPP_Body _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(2128)
				Float tmp22 = cx4;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2128)
				::zpp_nape::phys::ZPP_Body tmp23 = this->b4;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(2128)
				Float tmp24 = tmp23->iinertia;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(2128)
				Float tmp25 = (tmp22 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(2128)
				Float tmp26 = j;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(2128)
				Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(2128)
				Float dr = tmp27;		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(2128)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(2128)
				Float tmp28 = (dr * dr);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(2128)
				bool tmp29 = (tmp28 > ((Float)0.0001));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(2128)
				if ((tmp29)){
					HX_STACK_LINE(2128)
					Float tmp30 = _this->rot;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(2128)
					Float tmp31 = ::Math_obj::sin(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(2128)
					_this->axisx = tmp31;
					HX_STACK_LINE(2128)
					Float tmp32 = _this->rot;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(2128)
					Float tmp33 = ::Math_obj::cos(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(2128)
					_this->axisy = tmp33;
					HX_STACK_LINE(2128)
					Dynamic();
				}
				else{
					HX_STACK_LINE(2128)
					Float tmp30 = (dr * dr);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(2128)
					Float d2 = tmp30;		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(2128)
					Float tmp31 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(2128)
					Float tmp32 = ((int)1 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(2128)
					Float p = tmp32;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(2128)
					Float tmp33 = (d2 * d2);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(2128)
					Float tmp34 = (Float(tmp33) / Float((int)8));		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(2128)
					Float tmp35 = ((int)1 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(2128)
					Float m = tmp35;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(2128)
					Float tmp36 = (p * _this->axisx);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(2128)
					Float tmp37 = (dr * _this->axisy);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(2128)
					Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(2128)
					Float tmp39 = m;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(2128)
					Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(2128)
					Float nx = tmp40;		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(2128)
					Float tmp41 = (p * _this->axisy);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(2128)
					Float tmp42 = (dr * _this->axisx);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(2128)
					Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(2128)
					Float tmp44 = m;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(2128)
					Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(2128)
					_this->axisy = tmp45;
					HX_STACK_LINE(2128)
					_this->axisx = nx;
				}
			}
		}
	}
	HX_STACK_LINE(2190)
	return false;
}


Void ZPP_PulleyJoint_obj::draw( ::nape::util::Debug g){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PulleyJoint","draw",0x72d8abb6,"zpp_nape.constraint.ZPP_PulleyJoint.draw","zpp_nape/constraint/PulleyJoint.hx",2192,0xdaffcadd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
	}
return null();
}



ZPP_PulleyJoint_obj::ZPP_PulleyJoint_obj()
{
}

void ZPP_PulleyJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_PulleyJoint);
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	HX_MARK_MEMBER_NAME(ratio,"ratio");
	HX_MARK_MEMBER_NAME(jointMin,"jointMin");
	HX_MARK_MEMBER_NAME(jointMax,"jointMax");
	HX_MARK_MEMBER_NAME(slack,"slack");
	HX_MARK_MEMBER_NAME(equal,"equal");
	HX_MARK_MEMBER_NAME(n12x,"n12x");
	HX_MARK_MEMBER_NAME(n12y,"n12y");
	HX_MARK_MEMBER_NAME(n34x,"n34x");
	HX_MARK_MEMBER_NAME(n34y,"n34y");
	HX_MARK_MEMBER_NAME(cx1,"cx1");
	HX_MARK_MEMBER_NAME(cx2,"cx2");
	HX_MARK_MEMBER_NAME(cx3,"cx3");
	HX_MARK_MEMBER_NAME(cx4,"cx4");
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
	HX_MARK_MEMBER_NAME(b3,"b3");
	HX_MARK_MEMBER_NAME(a3localx,"a3localx");
	HX_MARK_MEMBER_NAME(a3localy,"a3localy");
	HX_MARK_MEMBER_NAME(a3relx,"a3relx");
	HX_MARK_MEMBER_NAME(a3rely,"a3rely");
	HX_MARK_MEMBER_NAME(wrap_a3,"wrap_a3");
	HX_MARK_MEMBER_NAME(b4,"b4");
	HX_MARK_MEMBER_NAME(a4localx,"a4localx");
	HX_MARK_MEMBER_NAME(a4localy,"a4localy");
	HX_MARK_MEMBER_NAME(a4relx,"a4relx");
	HX_MARK_MEMBER_NAME(a4rely,"a4rely");
	HX_MARK_MEMBER_NAME(wrap_a4,"wrap_a4");
	HX_MARK_MEMBER_NAME(kMass,"kMass");
	HX_MARK_MEMBER_NAME(jAcc,"jAcc");
	HX_MARK_MEMBER_NAME(jMax,"jMax");
	HX_MARK_MEMBER_NAME(gamma,"gamma");
	HX_MARK_MEMBER_NAME(bias,"bias");
	HX_MARK_MEMBER_NAME(stepped,"stepped");
	::zpp_nape::constraint::ZPP_Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_PulleyJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	HX_VISIT_MEMBER_NAME(ratio,"ratio");
	HX_VISIT_MEMBER_NAME(jointMin,"jointMin");
	HX_VISIT_MEMBER_NAME(jointMax,"jointMax");
	HX_VISIT_MEMBER_NAME(slack,"slack");
	HX_VISIT_MEMBER_NAME(equal,"equal");
	HX_VISIT_MEMBER_NAME(n12x,"n12x");
	HX_VISIT_MEMBER_NAME(n12y,"n12y");
	HX_VISIT_MEMBER_NAME(n34x,"n34x");
	HX_VISIT_MEMBER_NAME(n34y,"n34y");
	HX_VISIT_MEMBER_NAME(cx1,"cx1");
	HX_VISIT_MEMBER_NAME(cx2,"cx2");
	HX_VISIT_MEMBER_NAME(cx3,"cx3");
	HX_VISIT_MEMBER_NAME(cx4,"cx4");
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
	HX_VISIT_MEMBER_NAME(b3,"b3");
	HX_VISIT_MEMBER_NAME(a3localx,"a3localx");
	HX_VISIT_MEMBER_NAME(a3localy,"a3localy");
	HX_VISIT_MEMBER_NAME(a3relx,"a3relx");
	HX_VISIT_MEMBER_NAME(a3rely,"a3rely");
	HX_VISIT_MEMBER_NAME(wrap_a3,"wrap_a3");
	HX_VISIT_MEMBER_NAME(b4,"b4");
	HX_VISIT_MEMBER_NAME(a4localx,"a4localx");
	HX_VISIT_MEMBER_NAME(a4localy,"a4localy");
	HX_VISIT_MEMBER_NAME(a4relx,"a4relx");
	HX_VISIT_MEMBER_NAME(a4rely,"a4rely");
	HX_VISIT_MEMBER_NAME(wrap_a4,"wrap_a4");
	HX_VISIT_MEMBER_NAME(kMass,"kMass");
	HX_VISIT_MEMBER_NAME(jAcc,"jAcc");
	HX_VISIT_MEMBER_NAME(jMax,"jMax");
	HX_VISIT_MEMBER_NAME(gamma,"gamma");
	HX_VISIT_MEMBER_NAME(bias,"bias");
	HX_VISIT_MEMBER_NAME(stepped,"stepped");
	::zpp_nape::constraint::ZPP_Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_PulleyJoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b1") ) { return b1; }
		if (HX_FIELD_EQ(inName,"b2") ) { return b2; }
		if (HX_FIELD_EQ(inName,"b3") ) { return b3; }
		if (HX_FIELD_EQ(inName,"b4") ) { return b4; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cx1") ) { return cx1; }
		if (HX_FIELD_EQ(inName,"cx2") ) { return cx2; }
		if (HX_FIELD_EQ(inName,"cx3") ) { return cx3; }
		if (HX_FIELD_EQ(inName,"cx4") ) { return cx4; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"n12x") ) { return n12x; }
		if (HX_FIELD_EQ(inName,"n12y") ) { return n12y; }
		if (HX_FIELD_EQ(inName,"n34x") ) { return n34x; }
		if (HX_FIELD_EQ(inName,"n34y") ) { return n34y; }
		if (HX_FIELD_EQ(inName,"jAcc") ) { return jAcc; }
		if (HX_FIELD_EQ(inName,"jMax") ) { return jMax; }
		if (HX_FIELD_EQ(inName,"bias") ) { return bias; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ratio") ) { return ratio; }
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
		if (HX_FIELD_EQ(inName,"a3relx") ) { return a3relx; }
		if (HX_FIELD_EQ(inName,"a3rely") ) { return a3rely; }
		if (HX_FIELD_EQ(inName,"a4relx") ) { return a4relx; }
		if (HX_FIELD_EQ(inName,"a4rely") ) { return a4rely; }
		if (HX_FIELD_EQ(inName,"forest") ) { return forest_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrap_a1") ) { return wrap_a1; }
		if (HX_FIELD_EQ(inName,"wrap_a2") ) { return wrap_a2; }
		if (HX_FIELD_EQ(inName,"wrap_a3") ) { return wrap_a3; }
		if (HX_FIELD_EQ(inName,"wrap_a4") ) { return wrap_a4; }
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
		if (HX_FIELD_EQ(inName,"a3localx") ) { return a3localx; }
		if (HX_FIELD_EQ(inName,"a3localy") ) { return a3localy; }
		if (HX_FIELD_EQ(inName,"setup_a3") ) { return setup_a3_dyn(); }
		if (HX_FIELD_EQ(inName,"a4localx") ) { return a4localx; }
		if (HX_FIELD_EQ(inName,"a4localy") ) { return a4localy; }
		if (HX_FIELD_EQ(inName,"setup_a4") ) { return setup_a4_dyn(); }
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
		if (HX_FIELD_EQ(inName,"validate_a3") ) { return validate_a3_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_a4") ) { return validate_a4_dyn(); }
		if (HX_FIELD_EQ(inName,"pair_exists") ) { return pair_exists_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"activeBodies") ) { return activeBodies_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"invalidate_a1") ) { return invalidate_a1_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_a2") ) { return invalidate_a2_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_a3") ) { return invalidate_a3_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_a4") ) { return invalidate_a4_dyn(); }
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

Dynamic ZPP_PulleyJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b1") ) { b1=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b2") ) { b2=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b3") ) { b3=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b4") ) { b4=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cx1") ) { cx1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cx2") ) { cx2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cx3") ) { cx3=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cx4") ) { cx4=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"n12x") ) { n12x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n12y") ) { n12y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n34x") ) { n34x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n34y") ) { n34y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jAcc") ) { jAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jMax") ) { jMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bias") ) { bias=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ratio") ) { ratio=inValue.Cast< Float >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"a3relx") ) { a3relx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a3rely") ) { a3rely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a4relx") ) { a4relx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a4rely") ) { a4rely=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrap_a1") ) { wrap_a1=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_a2") ) { wrap_a2=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_a3") ) { wrap_a3=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_a4") ) { wrap_a4=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepped") ) { stepped=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::constraint::PulleyJoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jointMin") ) { jointMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jointMax") ) { jointMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1localx") ) { a1localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1localy") ) { a1localy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2localx") ) { a2localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2localy") ) { a2localy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a3localx") ) { a3localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a3localy") ) { a3localy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a4localx") ) { a4localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a4localy") ) { a4localy=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_PulleyJoint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_PulleyJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"));
	outFields->push(HX_HCSTRING("ratio","\x0b","\x35","\x24","\xe4"));
	outFields->push(HX_HCSTRING("jointMin","\x68","\xfa","\x25","\x55"));
	outFields->push(HX_HCSTRING("jointMax","\x7a","\xf3","\x25","\x55"));
	outFields->push(HX_HCSTRING("slack","\x50","\xb2","\xc1","\x7e"));
	outFields->push(HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72"));
	outFields->push(HX_HCSTRING("n12x","\xc9","\xd2","\xda","\x48"));
	outFields->push(HX_HCSTRING("n12y","\xca","\xd2","\xda","\x48"));
	outFields->push(HX_HCSTRING("n34x","\x09","\x59","\xdc","\x48"));
	outFields->push(HX_HCSTRING("n34y","\x0a","\x59","\xdc","\x48"));
	outFields->push(HX_HCSTRING("cx1","\xdc","\x87","\x4b","\x00"));
	outFields->push(HX_HCSTRING("cx2","\xdd","\x87","\x4b","\x00"));
	outFields->push(HX_HCSTRING("cx3","\xde","\x87","\x4b","\x00"));
	outFields->push(HX_HCSTRING("cx4","\xdf","\x87","\x4b","\x00"));
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
	outFields->push(HX_HCSTRING("b3","\x91","\x55","\x00","\x00"));
	outFields->push(HX_HCSTRING("a3localx","\xdf","\x5a","\xa3","\x4e"));
	outFields->push(HX_HCSTRING("a3localy","\xe0","\x5a","\xa3","\x4e"));
	outFields->push(HX_HCSTRING("a3relx","\xb1","\xea","\xb4","\x71"));
	outFields->push(HX_HCSTRING("a3rely","\xb2","\xea","\xb4","\x71"));
	outFields->push(HX_HCSTRING("wrap_a3","\x47","\xeb","\x57","\x0d"));
	outFields->push(HX_HCSTRING("b4","\x92","\x55","\x00","\x00"));
	outFields->push(HX_HCSTRING("a4localx","\xa0","\xd1","\x38","\x78"));
	outFields->push(HX_HCSTRING("a4localy","\xa1","\xd1","\x38","\x78"));
	outFields->push(HX_HCSTRING("a4relx","\x32","\x7f","\x1b","\x05"));
	outFields->push(HX_HCSTRING("a4rely","\x33","\x7f","\x1b","\x05"));
	outFields->push(HX_HCSTRING("wrap_a4","\x48","\xeb","\x57","\x0d"));
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
	{hx::fsObject /*::nape::constraint::PulleyJoint*/ ,(int)offsetof(ZPP_PulleyJoint_obj,outer_zn),HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,ratio),HX_HCSTRING("ratio","\x0b","\x35","\x24","\xe4")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,jointMin),HX_HCSTRING("jointMin","\x68","\xfa","\x25","\x55")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,jointMax),HX_HCSTRING("jointMax","\x7a","\xf3","\x25","\x55")},
	{hx::fsBool,(int)offsetof(ZPP_PulleyJoint_obj,slack),HX_HCSTRING("slack","\x50","\xb2","\xc1","\x7e")},
	{hx::fsBool,(int)offsetof(ZPP_PulleyJoint_obj,equal),HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,n12x),HX_HCSTRING("n12x","\xc9","\xd2","\xda","\x48")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,n12y),HX_HCSTRING("n12y","\xca","\xd2","\xda","\x48")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,n34x),HX_HCSTRING("n34x","\x09","\x59","\xdc","\x48")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,n34y),HX_HCSTRING("n34y","\x0a","\x59","\xdc","\x48")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,cx1),HX_HCSTRING("cx1","\xdc","\x87","\x4b","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,cx2),HX_HCSTRING("cx2","\xdd","\x87","\x4b","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,cx3),HX_HCSTRING("cx3","\xde","\x87","\x4b","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,cx4),HX_HCSTRING("cx4","\xdf","\x87","\x4b","\x00")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_PulleyJoint_obj,b1),HX_HCSTRING("b1","\x8f","\x55","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a1localx),HX_HCSTRING("a1localx","\x5d","\x6d","\x78","\xfb")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a1localy),HX_HCSTRING("a1localy","\x5e","\x6d","\x78","\xfb")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a1relx),HX_HCSTRING("a1relx","\xaf","\xc1","\xe7","\x4a")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a1rely),HX_HCSTRING("a1rely","\xb0","\xc1","\xe7","\x4a")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_PulleyJoint_obj,wrap_a1),HX_HCSTRING("wrap_a1","\x45","\xeb","\x57","\x0d")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_PulleyJoint_obj,b2),HX_HCSTRING("b2","\x90","\x55","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a2localx),HX_HCSTRING("a2localx","\x1e","\xe4","\x0d","\x25")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a2localy),HX_HCSTRING("a2localy","\x1f","\xe4","\x0d","\x25")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a2relx),HX_HCSTRING("a2relx","\x30","\x56","\x4e","\xde")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a2rely),HX_HCSTRING("a2rely","\x31","\x56","\x4e","\xde")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_PulleyJoint_obj,wrap_a2),HX_HCSTRING("wrap_a2","\x46","\xeb","\x57","\x0d")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_PulleyJoint_obj,b3),HX_HCSTRING("b3","\x91","\x55","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a3localx),HX_HCSTRING("a3localx","\xdf","\x5a","\xa3","\x4e")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a3localy),HX_HCSTRING("a3localy","\xe0","\x5a","\xa3","\x4e")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a3relx),HX_HCSTRING("a3relx","\xb1","\xea","\xb4","\x71")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a3rely),HX_HCSTRING("a3rely","\xb2","\xea","\xb4","\x71")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_PulleyJoint_obj,wrap_a3),HX_HCSTRING("wrap_a3","\x47","\xeb","\x57","\x0d")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_PulleyJoint_obj,b4),HX_HCSTRING("b4","\x92","\x55","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a4localx),HX_HCSTRING("a4localx","\xa0","\xd1","\x38","\x78")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a4localy),HX_HCSTRING("a4localy","\xa1","\xd1","\x38","\x78")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a4relx),HX_HCSTRING("a4relx","\x32","\x7f","\x1b","\x05")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,a4rely),HX_HCSTRING("a4rely","\x33","\x7f","\x1b","\x05")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_PulleyJoint_obj,wrap_a4),HX_HCSTRING("wrap_a4","\x48","\xeb","\x57","\x0d")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,kMass),HX_HCSTRING("kMass","\xff","\x7e","\x0f","\xcf")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,jAcc),HX_HCSTRING("jAcc","\xf7","\x46","\x42","\x46")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,jMax),HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,gamma),HX_HCSTRING("gamma","\x27","\x87","\xb6","\x8e")},
	{hx::fsFloat,(int)offsetof(ZPP_PulleyJoint_obj,bias),HX_HCSTRING("bias","\x79","\xea","\x16","\x41")},
	{hx::fsBool,(int)offsetof(ZPP_PulleyJoint_obj,stepped),HX_HCSTRING("stepped","\x03","\x05","\x60","\x81")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"),
	HX_HCSTRING("ratio","\x0b","\x35","\x24","\xe4"),
	HX_HCSTRING("jointMin","\x68","\xfa","\x25","\x55"),
	HX_HCSTRING("jointMax","\x7a","\xf3","\x25","\x55"),
	HX_HCSTRING("slack","\x50","\xb2","\xc1","\x7e"),
	HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72"),
	HX_HCSTRING("is_slack","\xfb","\x20","\x7e","\x9e"),
	HX_HCSTRING("n12x","\xc9","\xd2","\xda","\x48"),
	HX_HCSTRING("n12y","\xca","\xd2","\xda","\x48"),
	HX_HCSTRING("n34x","\x09","\x59","\xdc","\x48"),
	HX_HCSTRING("n34y","\x0a","\x59","\xdc","\x48"),
	HX_HCSTRING("cx1","\xdc","\x87","\x4b","\x00"),
	HX_HCSTRING("cx2","\xdd","\x87","\x4b","\x00"),
	HX_HCSTRING("cx3","\xde","\x87","\x4b","\x00"),
	HX_HCSTRING("cx4","\xdf","\x87","\x4b","\x00"),
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
	HX_HCSTRING("b3","\x91","\x55","\x00","\x00"),
	HX_HCSTRING("a3localx","\xdf","\x5a","\xa3","\x4e"),
	HX_HCSTRING("a3localy","\xe0","\x5a","\xa3","\x4e"),
	HX_HCSTRING("a3relx","\xb1","\xea","\xb4","\x71"),
	HX_HCSTRING("a3rely","\xb2","\xea","\xb4","\x71"),
	HX_HCSTRING("validate_a3","\xfb","\x9b","\xcc","\xca"),
	HX_HCSTRING("invalidate_a3","\x36","\x30","\x01","\xa7"),
	HX_HCSTRING("setup_a3","\x74","\x28","\x39","\x23"),
	HX_HCSTRING("wrap_a3","\x47","\xeb","\x57","\x0d"),
	HX_HCSTRING("b4","\x92","\x55","\x00","\x00"),
	HX_HCSTRING("a4localx","\xa0","\xd1","\x38","\x78"),
	HX_HCSTRING("a4localy","\xa1","\xd1","\x38","\x78"),
	HX_HCSTRING("a4relx","\x32","\x7f","\x1b","\x05"),
	HX_HCSTRING("a4rely","\x33","\x7f","\x1b","\x05"),
	HX_HCSTRING("validate_a4","\xfc","\x9b","\xcc","\xca"),
	HX_HCSTRING("invalidate_a4","\x37","\x30","\x01","\xa7"),
	HX_HCSTRING("setup_a4","\x75","\x28","\x39","\x23"),
	HX_HCSTRING("wrap_a4","\x48","\xeb","\x57","\x0d"),
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
	HX_MARK_MEMBER_NAME(ZPP_PulleyJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_PulleyJoint_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_PulleyJoint_obj::__mClass;

void ZPP_PulleyJoint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.constraint.ZPP_PulleyJoint","\xfc","\xfd","\xdf","\x6f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_PulleyJoint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_PulleyJoint_obj >;
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
