#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_LineJoint
#include <nape/constraint/LineJoint.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_LineJoint
#include <zpp_nape/constraint/ZPP_LineJoint.h>
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

Void ZPP_LineJoint_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","new",0x0c76ec53,"zpp_nape.constraint.ZPP_LineJoint.new","zpp_nape/constraint/LineJoint.hx",174,0x4b59f258)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(440)
	this->biasy = ((Float)0.0);
	HX_STACK_LINE(439)
	this->biasx = ((Float)0.0);
	HX_STACK_LINE(436)
	this->jAccy = ((Float)0.0);
	HX_STACK_LINE(435)
	this->jAccx = ((Float)0.0);
	HX_STACK_LINE(434)
	this->kMassc = ((Float)0.0);
	HX_STACK_LINE(433)
	this->kMassb = ((Float)0.0);
	HX_STACK_LINE(432)
	this->kMassa = ((Float)0.0);
	HX_STACK_LINE(401)
	this->wrap_n = null();
	HX_STACK_LINE(345)
	this->nrely = ((Float)0.0);
	HX_STACK_LINE(344)
	this->nrelx = ((Float)0.0);
	HX_STACK_LINE(343)
	this->nlocaly = ((Float)0.0);
	HX_STACK_LINE(342)
	this->nlocalx = ((Float)0.0);
	HX_STACK_LINE(340)
	this->wrap_a2 = null();
	HX_STACK_LINE(287)
	this->a2rely = ((Float)0.0);
	HX_STACK_LINE(286)
	this->a2relx = ((Float)0.0);
	HX_STACK_LINE(285)
	this->a2localy = ((Float)0.0);
	HX_STACK_LINE(284)
	this->a2localx = ((Float)0.0);
	HX_STACK_LINE(282)
	this->wrap_a1 = null();
	HX_STACK_LINE(229)
	this->a1rely = ((Float)0.0);
	HX_STACK_LINE(228)
	this->a1relx = ((Float)0.0);
	HX_STACK_LINE(227)
	this->a1localy = ((Float)0.0);
	HX_STACK_LINE(226)
	this->a1localx = ((Float)0.0);
	HX_STACK_LINE(183)
	this->cx2 = ((Float)0.0);
	HX_STACK_LINE(182)
	this->cx1 = ((Float)0.0);
	HX_STACK_LINE(181)
	this->dot2 = ((Float)0.0);
	HX_STACK_LINE(180)
	this->dot1 = ((Float)0.0);
	HX_STACK_LINE(179)
	this->equal = false;
	HX_STACK_LINE(178)
	this->jointMax = ((Float)0.0);
	HX_STACK_LINE(177)
	this->jointMin = ((Float)0.0);
	HX_STACK_LINE(176)
	this->scale = ((Float)0.0);
	HX_STACK_LINE(175)
	this->outer_zn = null();
	HX_STACK_LINE(490)
	super::__construct();
	HX_STACK_LINE(491)
	{
		HX_STACK_LINE(492)
		{
			HX_STACK_LINE(493)
			this->a1localx = (int)0;
			HX_STACK_LINE(494)
			this->a1localy = (int)0;
			HX_STACK_LINE(503)
			{
			}
		}
		HX_STACK_LINE(512)
		{
			HX_STACK_LINE(513)
			this->a1relx = (int)0;
			HX_STACK_LINE(514)
			this->a1rely = (int)0;
			HX_STACK_LINE(523)
			{
			}
		}
	}
	HX_STACK_LINE(533)
	{
		HX_STACK_LINE(534)
		{
			HX_STACK_LINE(535)
			this->a2localx = (int)0;
			HX_STACK_LINE(536)
			this->a2localy = (int)0;
			HX_STACK_LINE(545)
			{
			}
		}
		HX_STACK_LINE(554)
		{
			HX_STACK_LINE(555)
			this->a2relx = (int)0;
			HX_STACK_LINE(556)
			this->a2rely = (int)0;
			HX_STACK_LINE(565)
			{
			}
		}
	}
	HX_STACK_LINE(575)
	{
		HX_STACK_LINE(576)
		{
			HX_STACK_LINE(577)
			this->nlocalx = (int)0;
			HX_STACK_LINE(578)
			this->nlocaly = (int)0;
			HX_STACK_LINE(587)
			{
			}
		}
		HX_STACK_LINE(596)
		{
			HX_STACK_LINE(597)
			this->nrelx = (int)0;
			HX_STACK_LINE(598)
			this->nrely = (int)0;
			HX_STACK_LINE(607)
			{
			}
		}
	}
	HX_STACK_LINE(617)
	{
		HX_STACK_LINE(618)
		this->jAccx = (int)0;
		HX_STACK_LINE(619)
		this->jAccy = (int)0;
		HX_STACK_LINE(628)
		{
		}
	}
	HX_STACK_LINE(637)
	Float tmp = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(637)
	this->jMax = tmp;
	HX_STACK_LINE(638)
	Float tmp1 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(638)
	this->jointMin = tmp1;
	HX_STACK_LINE(639)
	Float tmp2 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(639)
	this->jointMax = tmp2;
	HX_STACK_LINE(640)
	this->stepped = false;
}
;
	return null();
}

//ZPP_LineJoint_obj::~ZPP_LineJoint_obj() { }

Dynamic ZPP_LineJoint_obj::__CreateEmpty() { return  new ZPP_LineJoint_obj; }
hx::ObjectPtr< ZPP_LineJoint_obj > ZPP_LineJoint_obj::__new()
{  hx::ObjectPtr< ZPP_LineJoint_obj > _result_ = new ZPP_LineJoint_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_LineJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_LineJoint_obj > _result_ = new ZPP_LineJoint_obj();
	_result_->__construct();
	return _result_;}

::nape::geom::Vec3 ZPP_LineJoint_obj::bodyImpulse( ::zpp_nape::phys::ZPP_Body b){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","bodyImpulse",0x77ff3d26,"zpp_nape.constraint.ZPP_LineJoint.bodyImpulse","zpp_nape/constraint/LineJoint.hx",184,0x4b59f258)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(185)
	bool tmp = this->stepped;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	if ((tmp)){
		HX_STACK_LINE(186)
		Float tmp1 = this->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		Float tmp2 = this->nrelx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(186)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(186)
		Float tmp4 = this->jAccy;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(186)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(186)
		Float tmp6 = this->nrely;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(186)
		Float tmp7 = this->jAccx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(186)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(186)
		Float tmp9 = (tmp5 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(186)
		Float jx = tmp9;		HX_STACK_VAR(jx,"jx");
		HX_STACK_LINE(187)
		Float tmp10 = this->nrelx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(187)
		Float tmp11 = this->jAccx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(187)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(187)
		Float tmp13 = this->scale;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(187)
		Float tmp14 = this->nrely;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(187)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(187)
		Float tmp16 = this->jAccy;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(187)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(187)
		Float tmp18 = (tmp12 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(187)
		Float jy = tmp18;		HX_STACK_VAR(jy,"jy");
		HX_STACK_LINE(204)
		::zpp_nape::phys::ZPP_Body tmp19 = b;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(204)
		::zpp_nape::phys::ZPP_Body tmp20 = this->b1;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(204)
		bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(204)
		if ((tmp21)){
			HX_STACK_LINE(204)
			Float tmp22 = jx;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(204)
			Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(204)
			Float tmp24 = jy;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(204)
			Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(204)
			Float tmp26 = this->scale;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(204)
			Float tmp27 = this->cx1;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(204)
			Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(204)
			Float tmp29 = jy;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(204)
			Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(204)
			Float tmp31 = this->dot1;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(204)
			Float tmp32 = jx;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(204)
			Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(204)
			Float tmp34 = (tmp30 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(204)
			::nape::geom::Vec3 tmp35 = ::nape::geom::Vec3_obj::get(tmp23,tmp25,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(204)
			return tmp35;
		}
		else{
			HX_STACK_LINE(205)
			Float tmp22 = jx;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(205)
			Float tmp23 = jy;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(205)
			Float tmp24 = this->scale;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(205)
			Float tmp25 = this->cx1;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(205)
			Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(205)
			Float tmp27 = jy;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(205)
			Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(205)
			Float tmp29 = this->dot1;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(205)
			Float tmp30 = jx;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(205)
			Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(205)
			Float tmp32 = (tmp28 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(205)
			::nape::geom::Vec3 tmp33 = ::nape::geom::Vec3_obj::get(tmp22,tmp23,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(205)
			return tmp33;
		}
	}
	else{
		HX_STACK_LINE(207)
		::nape::geom::Vec3 tmp1 = ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		return tmp1;
	}
	HX_STACK_LINE(185)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_LineJoint_obj,bodyImpulse,return )

Void ZPP_LineJoint_obj::activeBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","activeBodies",0xf3c9b793,"zpp_nape.constraint.ZPP_LineJoint.activeBodies","zpp_nape/constraint/LineJoint.hx",209,0x4b59f258)
		HX_STACK_THIS(this)
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(211)
			::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(211)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(211)
			if ((tmp1)){
				HX_STACK_LINE(211)
				::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(211)
				tmp2->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(213)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(213)
		::zpp_nape::phys::ZPP_Body tmp1 = this->b1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(213)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(213)
		if ((tmp2)){
			HX_STACK_LINE(214)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(214)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(214)
			if ((tmp4)){
				HX_STACK_LINE(214)
				::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(214)
				tmp5->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_LineJoint_obj::inactiveBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","inactiveBodies",0x96c75c38,"zpp_nape.constraint.ZPP_LineJoint.inactiveBodies","zpp_nape/constraint/LineJoint.hx",217,0x4b59f258)
		HX_STACK_THIS(this)
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(219)
			::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(219)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(219)
			if ((tmp1)){
				HX_STACK_LINE(219)
				::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(219)
				tmp2->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(221)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(221)
		::zpp_nape::phys::ZPP_Body tmp1 = this->b1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(221)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(221)
		if ((tmp2)){
			HX_STACK_LINE(222)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(222)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(222)
			if ((tmp4)){
				HX_STACK_LINE(222)
				::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(222)
				tmp5->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_LineJoint_obj::validate_a1( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","validate_a1",0xe32962ec,"zpp_nape.constraint.ZPP_LineJoint.validate_a1","zpp_nape/constraint/LineJoint.hx",231,0x4b59f258)
		HX_STACK_THIS(this)
		HX_STACK_LINE(232)
		Float tmp = this->a1localx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		::nape::geom::Vec2 tmp1 = this->wrap_a1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(232)
		tmp1->zpp_inner->x = tmp;
		HX_STACK_LINE(233)
		Float tmp2 = this->a1localy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(233)
		::nape::geom::Vec2 tmp3 = this->wrap_a1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(233)
		tmp3->zpp_inner->y = tmp2;
		HX_STACK_LINE(242)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_LineJoint_obj,validate_a1,(void))

Void ZPP_LineJoint_obj::invalidate_a1( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","invalidate_a1",0x2553d9e7,"zpp_nape.constraint.ZPP_LineJoint.invalidate_a1","zpp_nape/constraint/LineJoint.hx",252,0x4b59f258)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(253)
		::String tmp = HX_HCSTRING("Constraint::a1","\x6d","\x3e","\xe8","\x0d");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(253)
		this->immutable_midstep(tmp);
		HX_STACK_LINE(254)
		{
			HX_STACK_LINE(255)
			this->a1localx = x->x;
			HX_STACK_LINE(256)
			this->a1localy = x->y;
			HX_STACK_LINE(265)
			{
			}
		}
		HX_STACK_LINE(274)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_LineJoint_obj,invalidate_a1,(void))

Void ZPP_LineJoint_obj::setup_a1( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","setup_a1",0x03acdb9f,"zpp_nape.constraint.ZPP_LineJoint.setup_a1","zpp_nape/constraint/LineJoint.hx",276,0x4b59f258)
		HX_STACK_THIS(this)
		HX_STACK_LINE(277)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(277)
		{
			HX_STACK_LINE(277)
			Float tmp1 = this->a1localx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(277)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(277)
			Float tmp2 = this->a1localy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(277)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(277)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(277)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(277)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(277)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(277)
			if ((tmp4)){
				HX_STACK_LINE(277)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(277)
				tmp5 = true;
			}
			HX_STACK_LINE(277)
			if ((tmp5)){
				HX_STACK_LINE(277)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(277)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(277)
			{
				HX_STACK_LINE(277)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(277)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(277)
				if ((tmp7)){
					HX_STACK_LINE(277)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(277)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(277)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(277)
					ret = tmp8;
					HX_STACK_LINE(277)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(277)
					ret->zpp_pool = null();
					HX_STACK_LINE(277)
					ret->zpp_disp = false;
					HX_STACK_LINE(277)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(277)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(277)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(277)
					if ((tmp11)){
						HX_STACK_LINE(277)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(277)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(277)
			if ((tmp6)){
				HX_STACK_LINE(277)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(277)
				{
					HX_STACK_LINE(277)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(277)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(277)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(277)
						if ((tmp9)){
							HX_STACK_LINE(277)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(277)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(277)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(277)
							ret1 = tmp10;
							HX_STACK_LINE(277)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(277)
							ret1->next = null();
						}
						HX_STACK_LINE(277)
						ret1->weak = false;
					}
					HX_STACK_LINE(277)
					ret1->_immutable = immutable;
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						ret1->x = x;
						HX_STACK_LINE(277)
						ret1->y = y;
						HX_STACK_LINE(277)
						{
						}
					}
					HX_STACK_LINE(277)
					tmp7 = ret1;
				}
				HX_STACK_LINE(277)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(277)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(277)
				{
					HX_STACK_LINE(277)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(277)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(277)
					if ((tmp7)){
						HX_STACK_LINE(277)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(277)
						tmp8 = false;
					}
					HX_STACK_LINE(277)
					if ((tmp8)){
						HX_STACK_LINE(277)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(277)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(277)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(277)
				{
					HX_STACK_LINE(277)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(277)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(277)
					if ((tmp7)){
						HX_STACK_LINE(277)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(277)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(277)
					if ((tmp8)){
						HX_STACK_LINE(277)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(277)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(277)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(277)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(277)
				if ((tmp8)){
					HX_STACK_LINE(277)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(277)
					tmp9 = true;
				}
				HX_STACK_LINE(277)
				if ((tmp9)){
					HX_STACK_LINE(277)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(277)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(277)
				{
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(277)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(277)
						if ((tmp11)){
							HX_STACK_LINE(277)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(277)
							tmp12 = false;
						}
						HX_STACK_LINE(277)
						if ((tmp12)){
							HX_STACK_LINE(277)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(277)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(277)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(277)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(277)
						if ((tmp11)){
							HX_STACK_LINE(277)
							_this->_validate();
						}
					}
					HX_STACK_LINE(277)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(277)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(277)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(277)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(277)
				if ((tmp12)){
					HX_STACK_LINE(277)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						{
							HX_STACK_LINE(277)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(277)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(277)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(277)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(277)
							if ((tmp18)){
								HX_STACK_LINE(277)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(277)
								tmp17 = false;
							}
							HX_STACK_LINE(277)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(277)
							if ((tmp19)){
								HX_STACK_LINE(277)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(277)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(277)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(277)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(277)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(277)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(277)
						{
							HX_STACK_LINE(277)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(277)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(277)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(277)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(277)
							if ((tmp17)){
								HX_STACK_LINE(277)
								_this->_validate();
							}
						}
						HX_STACK_LINE(277)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(277)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(277)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(277)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(277)
					tmp13 = false;
				}
				HX_STACK_LINE(277)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(277)
				if ((tmp14)){
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(277)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(277)
						{
						}
					}
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(277)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(277)
						if ((tmp15)){
							HX_STACK_LINE(277)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(277)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(277)
				ret;
			}
			HX_STACK_LINE(277)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(277)
			tmp = ret;
		}
		HX_STACK_LINE(277)
		this->wrap_a1 = tmp;
		HX_STACK_LINE(278)
		::nape::geom::Vec2 tmp1 = this->wrap_a1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(278)
		tmp1->zpp_inner->_inuse = true;
		HX_STACK_LINE(279)
		Dynamic tmp2 = this->validate_a1_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(279)
		::nape::geom::Vec2 tmp3 = this->wrap_a1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(279)
		tmp3->zpp_inner->_validate = tmp2;
		HX_STACK_LINE(280)
		Dynamic tmp4 = this->invalidate_a1_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(280)
		::nape::geom::Vec2 tmp5 = this->wrap_a1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(280)
		tmp5->zpp_inner->_invalidate = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_LineJoint_obj,setup_a1,(void))

Void ZPP_LineJoint_obj::validate_a2( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","validate_a2",0xe32962ed,"zpp_nape.constraint.ZPP_LineJoint.validate_a2","zpp_nape/constraint/LineJoint.hx",289,0x4b59f258)
		HX_STACK_THIS(this)
		HX_STACK_LINE(290)
		Float tmp = this->a2localx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(290)
		::nape::geom::Vec2 tmp1 = this->wrap_a2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(290)
		tmp1->zpp_inner->x = tmp;
		HX_STACK_LINE(291)
		Float tmp2 = this->a2localy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(291)
		::nape::geom::Vec2 tmp3 = this->wrap_a2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(291)
		tmp3->zpp_inner->y = tmp2;
		HX_STACK_LINE(300)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_LineJoint_obj,validate_a2,(void))

Void ZPP_LineJoint_obj::invalidate_a2( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","invalidate_a2",0x2553d9e8,"zpp_nape.constraint.ZPP_LineJoint.invalidate_a2","zpp_nape/constraint/LineJoint.hx",310,0x4b59f258)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(311)
		::String tmp = HX_HCSTRING("Constraint::a2","\x6e","\x3e","\xe8","\x0d");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(311)
		this->immutable_midstep(tmp);
		HX_STACK_LINE(312)
		{
			HX_STACK_LINE(313)
			this->a2localx = x->x;
			HX_STACK_LINE(314)
			this->a2localy = x->y;
			HX_STACK_LINE(323)
			{
			}
		}
		HX_STACK_LINE(332)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_LineJoint_obj,invalidate_a2,(void))

Void ZPP_LineJoint_obj::setup_a2( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","setup_a2",0x03acdba0,"zpp_nape.constraint.ZPP_LineJoint.setup_a2","zpp_nape/constraint/LineJoint.hx",334,0x4b59f258)
		HX_STACK_THIS(this)
		HX_STACK_LINE(335)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(335)
		{
			HX_STACK_LINE(335)
			Float tmp1 = this->a2localx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(335)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(335)
			Float tmp2 = this->a2localy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(335)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(335)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(335)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(335)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(335)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(335)
			if ((tmp4)){
				HX_STACK_LINE(335)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(335)
				tmp5 = true;
			}
			HX_STACK_LINE(335)
			if ((tmp5)){
				HX_STACK_LINE(335)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(335)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(335)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(335)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(335)
				if ((tmp7)){
					HX_STACK_LINE(335)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(335)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(335)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(335)
					ret = tmp8;
					HX_STACK_LINE(335)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(335)
					ret->zpp_pool = null();
					HX_STACK_LINE(335)
					ret->zpp_disp = false;
					HX_STACK_LINE(335)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(335)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(335)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(335)
					if ((tmp11)){
						HX_STACK_LINE(335)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(335)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(335)
			if ((tmp6)){
				HX_STACK_LINE(335)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(335)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(335)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(335)
						if ((tmp9)){
							HX_STACK_LINE(335)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(335)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(335)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(335)
							ret1 = tmp10;
							HX_STACK_LINE(335)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(335)
							ret1->next = null();
						}
						HX_STACK_LINE(335)
						ret1->weak = false;
					}
					HX_STACK_LINE(335)
					ret1->_immutable = immutable;
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						ret1->x = x;
						HX_STACK_LINE(335)
						ret1->y = y;
						HX_STACK_LINE(335)
						{
						}
					}
					HX_STACK_LINE(335)
					tmp7 = ret1;
				}
				HX_STACK_LINE(335)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(335)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(335)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(335)
					if ((tmp7)){
						HX_STACK_LINE(335)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(335)
						tmp8 = false;
					}
					HX_STACK_LINE(335)
					if ((tmp8)){
						HX_STACK_LINE(335)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(335)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(335)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(335)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(335)
					if ((tmp7)){
						HX_STACK_LINE(335)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(335)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(335)
					if ((tmp8)){
						HX_STACK_LINE(335)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(335)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(335)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(335)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(335)
				if ((tmp8)){
					HX_STACK_LINE(335)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(335)
					tmp9 = true;
				}
				HX_STACK_LINE(335)
				if ((tmp9)){
					HX_STACK_LINE(335)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(335)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(335)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(335)
						if ((tmp11)){
							HX_STACK_LINE(335)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(335)
							tmp12 = false;
						}
						HX_STACK_LINE(335)
						if ((tmp12)){
							HX_STACK_LINE(335)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(335)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(335)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(335)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(335)
						if ((tmp11)){
							HX_STACK_LINE(335)
							_this->_validate();
						}
					}
					HX_STACK_LINE(335)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(335)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(335)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(335)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(335)
				if ((tmp12)){
					HX_STACK_LINE(335)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						{
							HX_STACK_LINE(335)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(335)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(335)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(335)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(335)
							if ((tmp18)){
								HX_STACK_LINE(335)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(335)
								tmp17 = false;
							}
							HX_STACK_LINE(335)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(335)
							if ((tmp19)){
								HX_STACK_LINE(335)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(335)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(335)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(335)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(335)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(335)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(335)
						{
							HX_STACK_LINE(335)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(335)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(335)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(335)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(335)
							if ((tmp17)){
								HX_STACK_LINE(335)
								_this->_validate();
							}
						}
						HX_STACK_LINE(335)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(335)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(335)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(335)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(335)
					tmp13 = false;
				}
				HX_STACK_LINE(335)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(335)
				if ((tmp14)){
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(335)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(335)
						{
						}
					}
					HX_STACK_LINE(335)
					{
						HX_STACK_LINE(335)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(335)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(335)
						if ((tmp15)){
							HX_STACK_LINE(335)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(335)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(335)
				ret;
			}
			HX_STACK_LINE(335)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(335)
			tmp = ret;
		}
		HX_STACK_LINE(335)
		this->wrap_a2 = tmp;
		HX_STACK_LINE(336)
		::nape::geom::Vec2 tmp1 = this->wrap_a2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(336)
		tmp1->zpp_inner->_inuse = true;
		HX_STACK_LINE(337)
		Dynamic tmp2 = this->validate_a2_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(337)
		::nape::geom::Vec2 tmp3 = this->wrap_a2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(337)
		tmp3->zpp_inner->_validate = tmp2;
		HX_STACK_LINE(338)
		Dynamic tmp4 = this->invalidate_a2_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(338)
		::nape::geom::Vec2 tmp5 = this->wrap_a2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(338)
		tmp5->zpp_inner->_invalidate = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_LineJoint_obj,setup_a2,(void))

Void ZPP_LineJoint_obj::validate_n( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","validate_n",0x8d128db2,"zpp_nape.constraint.ZPP_LineJoint.validate_n","zpp_nape/constraint/LineJoint.hx",347,0x4b59f258)
		HX_STACK_THIS(this)
		HX_STACK_LINE(348)
		Float tmp = this->nlocalx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(348)
		::nape::geom::Vec2 tmp1 = this->wrap_n;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(348)
		tmp1->zpp_inner->x = tmp;
		HX_STACK_LINE(349)
		Float tmp2 = this->nlocaly;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(349)
		::nape::geom::Vec2 tmp3 = this->wrap_n;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(349)
		tmp3->zpp_inner->y = tmp2;
		HX_STACK_LINE(358)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_LineJoint_obj,validate_n,(void))

Void ZPP_LineJoint_obj::invalidate_n( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","invalidate_n",0x71d14f17,"zpp_nape.constraint.ZPP_LineJoint.invalidate_n","zpp_nape/constraint/LineJoint.hx",368,0x4b59f258)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(369)
		::String tmp = HX_HCSTRING("Constraint::n","\x51","\x5d","\x49","\xf2");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(369)
		this->immutable_midstep(tmp);
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(371)
			this->nlocalx = x->x;
			HX_STACK_LINE(372)
			this->nlocaly = x->y;
			HX_STACK_LINE(381)
			{
			}
		}
		HX_STACK_LINE(391)
		this->zip_n = true;
		HX_STACK_LINE(393)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_LineJoint_obj,invalidate_n,(void))

Void ZPP_LineJoint_obj::setup_n( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","setup_n",0x3e01ec5f,"zpp_nape.constraint.ZPP_LineJoint.setup_n","zpp_nape/constraint/LineJoint.hx",395,0x4b59f258)
		HX_STACK_THIS(this)
		HX_STACK_LINE(396)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(396)
		{
			HX_STACK_LINE(396)
			Float tmp1 = this->nlocalx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(396)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(396)
			Float tmp2 = this->nlocaly;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(396)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(396)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(396)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(396)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(396)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(396)
			if ((tmp4)){
				HX_STACK_LINE(396)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(396)
				tmp5 = true;
			}
			HX_STACK_LINE(396)
			if ((tmp5)){
				HX_STACK_LINE(396)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(396)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(396)
			{
				HX_STACK_LINE(396)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(396)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(396)
				if ((tmp7)){
					HX_STACK_LINE(396)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(396)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(396)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(396)
					ret = tmp8;
					HX_STACK_LINE(396)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(396)
					ret->zpp_pool = null();
					HX_STACK_LINE(396)
					ret->zpp_disp = false;
					HX_STACK_LINE(396)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(396)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(396)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(396)
					if ((tmp11)){
						HX_STACK_LINE(396)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(396)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(396)
			if ((tmp6)){
				HX_STACK_LINE(396)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(396)
				{
					HX_STACK_LINE(396)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(396)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(396)
					{
						HX_STACK_LINE(396)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(396)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(396)
						if ((tmp9)){
							HX_STACK_LINE(396)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(396)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(396)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(396)
							ret1 = tmp10;
							HX_STACK_LINE(396)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(396)
							ret1->next = null();
						}
						HX_STACK_LINE(396)
						ret1->weak = false;
					}
					HX_STACK_LINE(396)
					ret1->_immutable = immutable;
					HX_STACK_LINE(396)
					{
						HX_STACK_LINE(396)
						ret1->x = x;
						HX_STACK_LINE(396)
						ret1->y = y;
						HX_STACK_LINE(396)
						{
						}
					}
					HX_STACK_LINE(396)
					tmp7 = ret1;
				}
				HX_STACK_LINE(396)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(396)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(396)
				{
					HX_STACK_LINE(396)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(396)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(396)
					if ((tmp7)){
						HX_STACK_LINE(396)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(396)
						tmp8 = false;
					}
					HX_STACK_LINE(396)
					if ((tmp8)){
						HX_STACK_LINE(396)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(396)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(396)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(396)
				{
					HX_STACK_LINE(396)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(396)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(396)
					if ((tmp7)){
						HX_STACK_LINE(396)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(396)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(396)
					if ((tmp8)){
						HX_STACK_LINE(396)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(396)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(396)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(396)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(396)
				if ((tmp8)){
					HX_STACK_LINE(396)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(396)
					tmp9 = true;
				}
				HX_STACK_LINE(396)
				if ((tmp9)){
					HX_STACK_LINE(396)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(396)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(396)
				{
					HX_STACK_LINE(396)
					{
						HX_STACK_LINE(396)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(396)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(396)
						if ((tmp11)){
							HX_STACK_LINE(396)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(396)
							tmp12 = false;
						}
						HX_STACK_LINE(396)
						if ((tmp12)){
							HX_STACK_LINE(396)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(396)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(396)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(396)
					{
						HX_STACK_LINE(396)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(396)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(396)
						if ((tmp11)){
							HX_STACK_LINE(396)
							_this->_validate();
						}
					}
					HX_STACK_LINE(396)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(396)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(396)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(396)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(396)
				if ((tmp12)){
					HX_STACK_LINE(396)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(396)
					{
						HX_STACK_LINE(396)
						{
							HX_STACK_LINE(396)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(396)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(396)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(396)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(396)
							if ((tmp18)){
								HX_STACK_LINE(396)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(396)
								tmp17 = false;
							}
							HX_STACK_LINE(396)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(396)
							if ((tmp19)){
								HX_STACK_LINE(396)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(396)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(396)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(396)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(396)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(396)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(396)
						{
							HX_STACK_LINE(396)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(396)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(396)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(396)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(396)
							if ((tmp17)){
								HX_STACK_LINE(396)
								_this->_validate();
							}
						}
						HX_STACK_LINE(396)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(396)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(396)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(396)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(396)
					tmp13 = false;
				}
				HX_STACK_LINE(396)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(396)
				if ((tmp14)){
					HX_STACK_LINE(396)
					{
						HX_STACK_LINE(396)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(396)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(396)
						{
						}
					}
					HX_STACK_LINE(396)
					{
						HX_STACK_LINE(396)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(396)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(396)
						if ((tmp15)){
							HX_STACK_LINE(396)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(396)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(396)
				ret;
			}
			HX_STACK_LINE(396)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(396)
			tmp = ret;
		}
		HX_STACK_LINE(396)
		this->wrap_n = tmp;
		HX_STACK_LINE(397)
		::nape::geom::Vec2 tmp1 = this->wrap_n;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(397)
		tmp1->zpp_inner->_inuse = true;
		HX_STACK_LINE(398)
		Dynamic tmp2 = this->validate_n_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(398)
		::nape::geom::Vec2 tmp3 = this->wrap_n;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(398)
		tmp3->zpp_inner->_validate = tmp2;
		HX_STACK_LINE(399)
		Dynamic tmp4 = this->invalidate_n_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(399)
		::nape::geom::Vec2 tmp5 = this->wrap_n;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(399)
		tmp5->zpp_inner->_invalidate = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_LineJoint_obj,setup_n,(void))

Void ZPP_LineJoint_obj::validate_norm( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","validate_norm",0x13402b78,"zpp_nape.constraint.ZPP_LineJoint.validate_norm","zpp_nape/constraint/LineJoint.hx",402,0x4b59f258)
		HX_STACK_THIS(this)
		HX_STACK_LINE(403)
		bool tmp = this->zip_n;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(403)
		if ((tmp)){
			HX_STACK_LINE(404)
			this->zip_n = false;
			HX_STACK_LINE(405)
			{
				HX_STACK_LINE(406)
				Float tmp1 = this->nlocalx;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(406)
				Float tmp2 = this->nlocalx;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(406)
				Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(406)
				Float tmp4 = this->nlocaly;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(406)
				Float tmp5 = this->nlocaly;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(406)
				Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(406)
				Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(406)
				Float d = tmp7;		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(415)
				Float tmp8 = d;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(415)
				Float tmp9 = ::Math_obj::sqrt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(415)
				Float tmp10 = (Float(((Float)1.0)) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(415)
				Float imag = tmp10;		HX_STACK_VAR(imag,"imag");
				HX_STACK_LINE(416)
				{
					HX_STACK_LINE(417)
					Float t = imag;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(426)
					hx::MultEq(this->nlocalx,t);
					HX_STACK_LINE(427)
					hx::MultEq(this->nlocaly,t);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_LineJoint_obj,validate_norm,(void))

::nape::constraint::Constraint ZPP_LineJoint_obj::copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","copy",0xd45a1462,"zpp_nape.constraint.ZPP_LineJoint.copy","zpp_nape/constraint/LineJoint.hx",442,0x4b59f258)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dict,"dict")
	HX_STACK_ARG(todo,"todo")
	HX_STACK_LINE(443)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(443)
	{
		HX_STACK_LINE(443)
		::nape::constraint::LineJoint tmp1 = this->outer_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(443)
		::nape::constraint::LineJoint _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(443)
		::nape::geom::Vec2 tmp2 = _this->zpp_inner_zn->wrap_a1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(443)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(443)
		if ((tmp3)){
			HX_STACK_LINE(443)
			_this->zpp_inner_zn->setup_a1();
		}
		HX_STACK_LINE(443)
		tmp = _this->zpp_inner_zn->wrap_a1;
	}
	HX_STACK_LINE(443)
	::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(443)
	{
		HX_STACK_LINE(443)
		::nape::constraint::LineJoint tmp2 = this->outer_zn;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(443)
		::nape::constraint::LineJoint _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(443)
		::nape::geom::Vec2 tmp3 = _this->zpp_inner_zn->wrap_a2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(443)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(443)
		if ((tmp4)){
			HX_STACK_LINE(443)
			_this->zpp_inner_zn->setup_a2();
		}
		HX_STACK_LINE(443)
		tmp1 = _this->zpp_inner_zn->wrap_a2;
	}
	HX_STACK_LINE(443)
	::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(443)
	{
		HX_STACK_LINE(443)
		::nape::constraint::LineJoint tmp3 = this->outer_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(443)
		::nape::constraint::LineJoint _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(443)
		::nape::geom::Vec2 tmp4 = _this->zpp_inner_zn->wrap_n;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(443)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(443)
		if ((tmp5)){
			HX_STACK_LINE(443)
			_this->zpp_inner_zn->setup_n();
		}
		HX_STACK_LINE(443)
		tmp2 = _this->zpp_inner_zn->wrap_n;
	}
	HX_STACK_LINE(443)
	Float tmp3 = this->jointMin;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(443)
	Float tmp4 = this->jointMax;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(443)
	::nape::constraint::LineJoint tmp5 = ::nape::constraint::LineJoint_obj::__new(null(),null(),tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(443)
	::nape::constraint::LineJoint ret = tmp5;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(444)
	::nape::constraint::LineJoint tmp6 = ret;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(444)
	this->copyto(tmp6);
	HX_STACK_LINE(445)
	{
		HX_STACK_LINE(446)
		bool tmp7 = (dict != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(446)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(446)
		if ((tmp7)){
			HX_STACK_LINE(446)
			::zpp_nape::phys::ZPP_Body tmp9 = this->b1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(446)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(446)
			tmp8 = (tmp10 != null());
		}
		else{
			HX_STACK_LINE(446)
			tmp8 = false;
		}
		HX_STACK_LINE(446)
		if ((tmp8)){
			HX_STACK_LINE(455)
			::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(456)
			{
				HX_STACK_LINE(456)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(456)
				while((true)){
					HX_STACK_LINE(456)
					bool tmp9 = (_g < dict->length);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(456)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(456)
					if ((tmp10)){
						HX_STACK_LINE(456)
						break;
					}
					HX_STACK_LINE(456)
					::zpp_nape::constraint::ZPP_CopyHelper tmp11 = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(456)
					::zpp_nape::constraint::ZPP_CopyHelper idc = tmp11;		HX_STACK_VAR(idc,"idc");
					HX_STACK_LINE(456)
					++(_g);
					HX_STACK_LINE(457)
					int tmp12 = idc->id;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(457)
					::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(457)
					int tmp14 = tmp13->id;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(457)
					bool tmp15 = (tmp12 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(457)
					if ((tmp15)){
						HX_STACK_LINE(458)
						b = idc->bc;
						HX_STACK_LINE(459)
						break;
					}
				}
			}
			HX_STACK_LINE(462)
			bool tmp9 = (b != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(462)
			if ((tmp9)){
				HX_STACK_LINE(462)
				ret->zpp_inner_zn->b1 = b->zpp_inner;
			}
			else{
				HX_STACK_LINE(463)
				::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(463)
				int tmp11 = tmp10->id;		HX_STACK_VAR(tmp11,"tmp11");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::nape::constraint::LineJoint,ret)
				int __ArgCount() const { return 1; }
				Void run(::nape::phys::Body b1){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","zpp_nape/constraint/LineJoint.hx",463,0x4b59f258)
					HX_STACK_ARG(b1,"b1")
					{
						HX_STACK_LINE(463)
						ret->zpp_inner_zn->b1 = b1->zpp_inner;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(463)
				::zpp_nape::constraint::ZPP_CopyHelper tmp12 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(tmp11, Dynamic(new _Function_4_1(ret)));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(463)
				todo->push(tmp12);
			}
		}
	}
	HX_STACK_LINE(466)
	{
		HX_STACK_LINE(467)
		bool tmp7 = (dict != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(467)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(467)
		if ((tmp7)){
			HX_STACK_LINE(467)
			::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(467)
			::zpp_nape::phys::ZPP_Body tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(467)
			tmp8 = (tmp10 != null());
		}
		else{
			HX_STACK_LINE(467)
			tmp8 = false;
		}
		HX_STACK_LINE(467)
		if ((tmp8)){
			HX_STACK_LINE(476)
			::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(477)
			{
				HX_STACK_LINE(477)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(477)
				while((true)){
					HX_STACK_LINE(477)
					bool tmp9 = (_g < dict->length);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(477)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(477)
					if ((tmp10)){
						HX_STACK_LINE(477)
						break;
					}
					HX_STACK_LINE(477)
					::zpp_nape::constraint::ZPP_CopyHelper tmp11 = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(477)
					::zpp_nape::constraint::ZPP_CopyHelper idc = tmp11;		HX_STACK_VAR(idc,"idc");
					HX_STACK_LINE(477)
					++(_g);
					HX_STACK_LINE(478)
					int tmp12 = idc->id;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(478)
					::zpp_nape::phys::ZPP_Body tmp13 = this->b2;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(478)
					int tmp14 = tmp13->id;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(478)
					bool tmp15 = (tmp12 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(478)
					if ((tmp15)){
						HX_STACK_LINE(479)
						b = idc->bc;
						HX_STACK_LINE(480)
						break;
					}
				}
			}
			HX_STACK_LINE(483)
			bool tmp9 = (b != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(483)
			if ((tmp9)){
				HX_STACK_LINE(483)
				ret->zpp_inner_zn->b2 = b->zpp_inner;
			}
			else{
				HX_STACK_LINE(484)
				::zpp_nape::phys::ZPP_Body tmp10 = this->b2;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(484)
				int tmp11 = tmp10->id;		HX_STACK_VAR(tmp11,"tmp11");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::nape::constraint::LineJoint,ret)
				int __ArgCount() const { return 1; }
				Void run(::nape::phys::Body b1){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","zpp_nape/constraint/LineJoint.hx",484,0x4b59f258)
					HX_STACK_ARG(b1,"b1")
					{
						HX_STACK_LINE(484)
						ret->zpp_inner_zn->b2 = b1->zpp_inner;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(484)
				::zpp_nape::constraint::ZPP_CopyHelper tmp12 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(tmp11, Dynamic(new _Function_4_1(ret)));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(484)
				todo->push(tmp12);
			}
		}
	}
	HX_STACK_LINE(487)
	::nape::constraint::LineJoint tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(487)
	return tmp7;
}


Void ZPP_LineJoint_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","validate",0xe55783c3,"zpp_nape.constraint.ZPP_LineJoint.validate","zpp_nape/constraint/LineJoint.hx",642,0x4b59f258)
		HX_STACK_THIS(this)
		HX_STACK_LINE(643)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(643)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(643)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(643)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(643)
		if ((tmp2)){
			HX_STACK_LINE(643)
			::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(643)
			::zpp_nape::phys::ZPP_Body tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(643)
			tmp3 = (tmp5 == null());
		}
		else{
			HX_STACK_LINE(643)
			tmp3 = true;
		}
		HX_STACK_LINE(643)
		if ((tmp3)){
			HX_STACK_LINE(643)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: AngleJoint cannot be simulated null bodies","\xfe","\x18","\x41","\x78"));
		}
		HX_STACK_LINE(644)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(644)
		::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(644)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(644)
		if ((tmp6)){
			HX_STACK_LINE(644)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: DistanceJoint cannot be simulated with body1 == body2","\xa2","\x9e","\x0d","\xa5"));
		}
		HX_STACK_LINE(645)
		::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(645)
		::zpp_nape::space::ZPP_Space tmp8 = tmp7->space;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(645)
		::zpp_nape::space::ZPP_Space tmp9 = this->space;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(645)
		bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(645)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(645)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(645)
		if ((tmp11)){
			HX_STACK_LINE(645)
			::zpp_nape::phys::ZPP_Body tmp13 = this->b2;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(645)
			::zpp_nape::phys::ZPP_Body tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(645)
			::zpp_nape::space::ZPP_Space tmp15 = tmp14->space;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(645)
			::zpp_nape::space::ZPP_Space tmp16 = this->space;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(645)
			::zpp_nape::space::ZPP_Space tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(645)
			tmp12 = (tmp15 != tmp17);
		}
		else{
			HX_STACK_LINE(645)
			tmp12 = true;
		}
		HX_STACK_LINE(645)
		if ((tmp12)){
			HX_STACK_LINE(645)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraints must have each body within the same space to which the constraint has been assigned","\xe8","\x8c","\x93","\x57"));
		}
		HX_STACK_LINE(646)
		Float tmp13 = this->jointMin;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(646)
		Float tmp14 = this->jointMax;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(646)
		bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(646)
		if ((tmp15)){
			HX_STACK_LINE(646)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: DistanceJoint must have jointMin <= jointMax","\x7b","\x40","\x7d","\x69"));
		}
		HX_STACK_LINE(647)
		Float tmp16 = this->nlocalx;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(647)
		Float tmp17 = this->nlocalx;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(647)
		Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(647)
		Float tmp19 = this->nlocaly;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(647)
		Float tmp20 = this->nlocaly;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(647)
		Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(647)
		Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(647)
		Float tmp23 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(647)
		bool tmp24 = (tmp22 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(647)
		if ((tmp24)){
			HX_STACK_LINE(647)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: DistanceJoint direction must be non-degenerate","\x76","\xb7","\x0d","\x04"));
		}
		HX_STACK_LINE(648)
		::zpp_nape::phys::ZPP_Body tmp25 = this->b1;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(648)
		int tmp26 = tmp25->type;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(648)
		int tmp27 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(648)
		bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(648)
		bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(648)
		bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(648)
		bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(648)
		if ((tmp30)){
			HX_STACK_LINE(648)
			::zpp_nape::phys::ZPP_Body tmp32 = this->b2;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(648)
			::zpp_nape::phys::ZPP_Body tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(648)
			int tmp34 = tmp33->type;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(648)
			int tmp35 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(648)
			int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(648)
			bool tmp37 = (tmp34 == tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(648)
			bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(648)
			bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(648)
			tmp31 = !(tmp39);
		}
		else{
			HX_STACK_LINE(648)
			tmp31 = false;
		}
		HX_STACK_LINE(648)
		if ((tmp31)){
			HX_STACK_LINE(648)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraints cannot have both bodies non-dynamic","\xcb","\xb3","\x6c","\xeb"));
		}
	}
return null();
}


Void ZPP_LineJoint_obj::wake_connected( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","wake_connected",0x47dfa29b,"zpp_nape.constraint.ZPP_LineJoint.wake_connected","zpp_nape/constraint/LineJoint.hx",650,0x4b59f258)
		HX_STACK_THIS(this)
		HX_STACK_LINE(651)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(651)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(651)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(651)
		if ((tmp1)){
			HX_STACK_LINE(651)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(651)
			::zpp_nape::phys::ZPP_Body tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(651)
			int tmp5 = tmp4->type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(651)
			int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(651)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(651)
			tmp2 = (tmp5 == tmp7);
		}
		else{
			HX_STACK_LINE(651)
			tmp2 = false;
		}
		HX_STACK_LINE(651)
		if ((tmp2)){
			HX_STACK_LINE(651)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(651)
			tmp3->wake();
		}
		HX_STACK_LINE(652)
		::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(652)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(652)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(652)
		if ((tmp4)){
			HX_STACK_LINE(652)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(652)
			::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(652)
			int tmp8 = tmp7->type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(652)
			int tmp9 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(652)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(652)
			tmp5 = (tmp8 == tmp10);
		}
		else{
			HX_STACK_LINE(652)
			tmp5 = false;
		}
		HX_STACK_LINE(652)
		if ((tmp5)){
			HX_STACK_LINE(652)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(652)
			tmp6->wake();
		}
	}
return null();
}


Void ZPP_LineJoint_obj::forest( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","forest",0x62a72aca,"zpp_nape.constraint.ZPP_LineJoint.forest","zpp_nape/constraint/LineJoint.hx",654,0x4b59f258)
		HX_STACK_THIS(this)
		HX_STACK_LINE(655)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(655)
		int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(655)
		int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(655)
		bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(655)
		if ((tmp3)){
			HX_STACK_LINE(656)
			::zpp_nape::space::ZPP_Component tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(656)
			{
				HX_STACK_LINE(657)
				::zpp_nape::phys::ZPP_Body tmp5 = this->b1;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(657)
				::zpp_nape::space::ZPP_Component tmp6 = tmp5->component;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(657)
				::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(657)
				::zpp_nape::space::ZPP_Component tmp8 = tmp7->component->parent;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(657)
				bool tmp9 = (tmp6 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(657)
				if ((tmp9)){
					HX_STACK_LINE(657)
					::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(657)
					tmp4 = tmp10->component;
				}
				else{
					HX_STACK_LINE(659)
					::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(659)
					::zpp_nape::space::ZPP_Component obj = tmp10->component;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(660)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(661)
					while((true)){
						HX_STACK_LINE(661)
						bool tmp11 = (obj != obj->parent);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(661)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(661)
						if ((tmp12)){
							HX_STACK_LINE(661)
							break;
						}
						HX_STACK_LINE(662)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(663)
						obj->parent = stack;
						HX_STACK_LINE(664)
						stack = obj;
						HX_STACK_LINE(665)
						obj = nxt;
					}
					HX_STACK_LINE(667)
					while((true)){
						HX_STACK_LINE(667)
						bool tmp11 = (stack != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(667)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(667)
						if ((tmp12)){
							HX_STACK_LINE(667)
							break;
						}
						HX_STACK_LINE(668)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(669)
						stack->parent = obj;
						HX_STACK_LINE(670)
						stack = nxt;
					}
					HX_STACK_LINE(672)
					tmp4 = obj;
				}
			}
			HX_STACK_LINE(656)
			::zpp_nape::space::ZPP_Component xr = tmp4;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(675)
			::zpp_nape::space::ZPP_Component tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(675)
			{
				HX_STACK_LINE(676)
				::zpp_nape::space::ZPP_Component tmp6 = this->component;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(676)
				::zpp_nape::space::ZPP_Component tmp7 = this->component;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(676)
				::zpp_nape::space::ZPP_Component tmp8 = tmp7->parent;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(676)
				bool tmp9 = (tmp6 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(676)
				if ((tmp9)){
					HX_STACK_LINE(676)
					tmp5 = this->component;
				}
				else{
					HX_STACK_LINE(678)
					::zpp_nape::space::ZPP_Component tmp10 = this->component;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(678)
					::zpp_nape::space::ZPP_Component obj = tmp10;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(679)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(680)
					while((true)){
						HX_STACK_LINE(680)
						bool tmp11 = (obj != obj->parent);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(680)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(680)
						if ((tmp12)){
							HX_STACK_LINE(680)
							break;
						}
						HX_STACK_LINE(681)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(682)
						obj->parent = stack;
						HX_STACK_LINE(683)
						stack = obj;
						HX_STACK_LINE(684)
						obj = nxt;
					}
					HX_STACK_LINE(686)
					while((true)){
						HX_STACK_LINE(686)
						bool tmp11 = (stack != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(686)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(686)
						if ((tmp12)){
							HX_STACK_LINE(686)
							break;
						}
						HX_STACK_LINE(687)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(688)
						stack->parent = obj;
						HX_STACK_LINE(689)
						stack = nxt;
					}
					HX_STACK_LINE(691)
					tmp5 = obj;
				}
			}
			HX_STACK_LINE(675)
			::zpp_nape::space::ZPP_Component yr = tmp5;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(694)
			bool tmp6 = (xr != yr);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(694)
			if ((tmp6)){
				HX_STACK_LINE(695)
				bool tmp7 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(695)
				if ((tmp7)){
					HX_STACK_LINE(695)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(696)
					bool tmp8 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(696)
					if ((tmp8)){
						HX_STACK_LINE(696)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(698)
						yr->parent = xr;
						HX_STACK_LINE(699)
						(xr->rank)++;
					}
				}
			}
		}
		HX_STACK_LINE(703)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(703)
		int tmp5 = tmp4->type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(703)
		int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(703)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(703)
		if ((tmp7)){
			HX_STACK_LINE(704)
			::zpp_nape::space::ZPP_Component tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(704)
			{
				HX_STACK_LINE(705)
				::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(705)
				::zpp_nape::space::ZPP_Component tmp10 = tmp9->component;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(705)
				::zpp_nape::phys::ZPP_Body tmp11 = this->b2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(705)
				::zpp_nape::space::ZPP_Component tmp12 = tmp11->component->parent;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(705)
				bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(705)
				if ((tmp13)){
					HX_STACK_LINE(705)
					::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(705)
					tmp8 = tmp14->component;
				}
				else{
					HX_STACK_LINE(707)
					::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(707)
					::zpp_nape::space::ZPP_Component obj = tmp14->component;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(708)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(709)
					while((true)){
						HX_STACK_LINE(709)
						bool tmp15 = (obj != obj->parent);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(709)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(709)
						if ((tmp16)){
							HX_STACK_LINE(709)
							break;
						}
						HX_STACK_LINE(710)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(711)
						obj->parent = stack;
						HX_STACK_LINE(712)
						stack = obj;
						HX_STACK_LINE(713)
						obj = nxt;
					}
					HX_STACK_LINE(715)
					while((true)){
						HX_STACK_LINE(715)
						bool tmp15 = (stack != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(715)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(715)
						if ((tmp16)){
							HX_STACK_LINE(715)
							break;
						}
						HX_STACK_LINE(716)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(717)
						stack->parent = obj;
						HX_STACK_LINE(718)
						stack = nxt;
					}
					HX_STACK_LINE(720)
					tmp8 = obj;
				}
			}
			HX_STACK_LINE(704)
			::zpp_nape::space::ZPP_Component xr = tmp8;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(723)
			::zpp_nape::space::ZPP_Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(723)
			{
				HX_STACK_LINE(724)
				::zpp_nape::space::ZPP_Component tmp10 = this->component;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(724)
				::zpp_nape::space::ZPP_Component tmp11 = this->component;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(724)
				::zpp_nape::space::ZPP_Component tmp12 = tmp11->parent;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(724)
				bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(724)
				if ((tmp13)){
					HX_STACK_LINE(724)
					tmp9 = this->component;
				}
				else{
					HX_STACK_LINE(726)
					::zpp_nape::space::ZPP_Component tmp14 = this->component;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(726)
					::zpp_nape::space::ZPP_Component obj = tmp14;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(727)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(728)
					while((true)){
						HX_STACK_LINE(728)
						bool tmp15 = (obj != obj->parent);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(728)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(728)
						if ((tmp16)){
							HX_STACK_LINE(728)
							break;
						}
						HX_STACK_LINE(729)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(730)
						obj->parent = stack;
						HX_STACK_LINE(731)
						stack = obj;
						HX_STACK_LINE(732)
						obj = nxt;
					}
					HX_STACK_LINE(734)
					while((true)){
						HX_STACK_LINE(734)
						bool tmp15 = (stack != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(734)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(734)
						if ((tmp16)){
							HX_STACK_LINE(734)
							break;
						}
						HX_STACK_LINE(735)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(736)
						stack->parent = obj;
						HX_STACK_LINE(737)
						stack = nxt;
					}
					HX_STACK_LINE(739)
					tmp9 = obj;
				}
			}
			HX_STACK_LINE(723)
			::zpp_nape::space::ZPP_Component yr = tmp9;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(742)
			bool tmp10 = (xr != yr);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(742)
			if ((tmp10)){
				HX_STACK_LINE(743)
				bool tmp11 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(743)
				if ((tmp11)){
					HX_STACK_LINE(743)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(744)
					bool tmp12 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(744)
					if ((tmp12)){
						HX_STACK_LINE(744)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(746)
						yr->parent = xr;
						HX_STACK_LINE(747)
						(xr->rank)++;
					}
				}
			}
		}
	}
return null();
}


bool ZPP_LineJoint_obj::pair_exists( int id,int di){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","pair_exists",0x81b53194,"zpp_nape.constraint.ZPP_LineJoint.pair_exists","zpp_nape/constraint/LineJoint.hx",752,0x4b59f258)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(753)
	::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(753)
	int tmp1 = tmp->id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(753)
	int tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(753)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(753)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(753)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(753)
	if ((tmp4)){
		HX_STACK_LINE(753)
		::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(753)
		::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(753)
		::zpp_nape::phys::ZPP_Body tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(753)
		int tmp9 = tmp8->id;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(753)
		int tmp10 = di;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(753)
		tmp5 = (tmp9 == tmp10);
	}
	else{
		HX_STACK_LINE(753)
		tmp5 = false;
	}
	HX_STACK_LINE(753)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(753)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(753)
	if ((tmp6)){
		HX_STACK_LINE(753)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(753)
		::zpp_nape::phys::ZPP_Body tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(753)
		int tmp10 = tmp9->id;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(753)
		int tmp11 = di;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(753)
		bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(753)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(753)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(753)
		if ((tmp14)){
			HX_STACK_LINE(753)
			::zpp_nape::phys::ZPP_Body tmp15 = this->b2;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(753)
			::zpp_nape::phys::ZPP_Body tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(753)
			::zpp_nape::phys::ZPP_Body tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(753)
			int tmp18 = tmp17->id;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(753)
			int tmp19 = id;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(753)
			tmp7 = (tmp18 == tmp19);
		}
		else{
			HX_STACK_LINE(753)
			tmp7 = false;
		}
	}
	else{
		HX_STACK_LINE(753)
		tmp7 = true;
	}
	HX_STACK_LINE(753)
	return tmp7;
}


Void ZPP_LineJoint_obj::clearcache( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","clearcache",0x2e1a0202,"zpp_nape.constraint.ZPP_LineJoint.clearcache","zpp_nape/constraint/LineJoint.hx",755,0x4b59f258)
		HX_STACK_THIS(this)
		HX_STACK_LINE(756)
		{
			HX_STACK_LINE(757)
			this->jAccx = (int)0;
			HX_STACK_LINE(758)
			this->jAccy = (int)0;
			HX_STACK_LINE(767)
			{
			}
		}
		HX_STACK_LINE(776)
		this->pre_dt = ((Float)-1.0);
	}
return null();
}


bool ZPP_LineJoint_obj::preStep( Float dt){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","preStep",0x3a6c5282,"zpp_nape.constraint.ZPP_LineJoint.preStep","zpp_nape/constraint/LineJoint.hx",778,0x4b59f258)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dt,"dt")
	HX_STACK_LINE(779)
	Float tmp = this->pre_dt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(779)
	bool tmp1 = (tmp == ((Float)-1.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(779)
	if ((tmp1)){
		HX_STACK_LINE(779)
		this->pre_dt = dt;
	}
	HX_STACK_LINE(780)
	Float tmp2 = dt;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(780)
	Float tmp3 = this->pre_dt;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(780)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(780)
	Float dtratio = tmp4;		HX_STACK_VAR(dtratio,"dtratio");
	HX_STACK_LINE(781)
	this->pre_dt = dt;
	HX_STACK_LINE(782)
	Float tmp5 = this->jointMin;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(782)
	Float tmp6 = this->jointMax;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(782)
	bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(782)
	this->equal = tmp7;
	HX_STACK_LINE(783)
	this->stepped = true;
	HX_STACK_LINE(784)
	this->validate_norm();
	HX_STACK_LINE(785)
	{
		HX_STACK_LINE(786)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(786)
		Float tmp9 = tmp8->axisy;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(786)
		Float tmp10 = this->a1localx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(786)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(786)
		::zpp_nape::phys::ZPP_Body tmp12 = this->b1;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(786)
		Float tmp13 = tmp12->axisx;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(786)
		Float tmp14 = this->a1localy;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(786)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(786)
		Float tmp16 = (tmp11 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(786)
		this->a1relx = tmp16;
		HX_STACK_LINE(787)
		Float tmp17 = this->a1localx;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(787)
		::zpp_nape::phys::ZPP_Body tmp18 = this->b1;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(787)
		Float tmp19 = tmp18->axisx;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(787)
		Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(787)
		Float tmp21 = this->a1localy;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(787)
		::zpp_nape::phys::ZPP_Body tmp22 = this->b1;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(787)
		Float tmp23 = tmp22->axisy;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(787)
		Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(787)
		Float tmp25 = (tmp20 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(787)
		this->a1rely = tmp25;
	}
	HX_STACK_LINE(789)
	{
		HX_STACK_LINE(790)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(790)
		Float tmp9 = tmp8->axisy;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(790)
		Float tmp10 = this->nlocalx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(790)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(790)
		::zpp_nape::phys::ZPP_Body tmp12 = this->b1;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(790)
		Float tmp13 = tmp12->axisx;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(790)
		Float tmp14 = this->nlocaly;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(790)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(790)
		Float tmp16 = (tmp11 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(790)
		this->nrelx = tmp16;
		HX_STACK_LINE(791)
		Float tmp17 = this->nlocalx;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(791)
		::zpp_nape::phys::ZPP_Body tmp18 = this->b1;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(791)
		Float tmp19 = tmp18->axisx;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(791)
		Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(791)
		Float tmp21 = this->nlocaly;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(791)
		::zpp_nape::phys::ZPP_Body tmp22 = this->b1;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(791)
		Float tmp23 = tmp22->axisy;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(791)
		Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(791)
		Float tmp25 = (tmp20 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(791)
		this->nrely = tmp25;
	}
	HX_STACK_LINE(793)
	{
		HX_STACK_LINE(794)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(794)
		Float tmp9 = tmp8->axisy;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(794)
		Float tmp10 = this->a2localx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(794)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(794)
		::zpp_nape::phys::ZPP_Body tmp12 = this->b2;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(794)
		Float tmp13 = tmp12->axisx;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(794)
		Float tmp14 = this->a2localy;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(794)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(794)
		Float tmp16 = (tmp11 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(794)
		this->a2relx = tmp16;
		HX_STACK_LINE(795)
		Float tmp17 = this->a2localx;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(795)
		::zpp_nape::phys::ZPP_Body tmp18 = this->b2;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(795)
		Float tmp19 = tmp18->axisx;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(795)
		Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(795)
		Float tmp21 = this->a2localy;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(795)
		::zpp_nape::phys::ZPP_Body tmp22 = this->b2;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(795)
		Float tmp23 = tmp22->axisy;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(795)
		Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(795)
		Float tmp25 = (tmp20 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(795)
		this->a2rely = tmp25;
	}
	HX_STACK_LINE(797)
	Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(798)
	Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(799)
	Float Cx = ((Float)0.0);		HX_STACK_VAR(Cx,"Cx");
	HX_STACK_LINE(800)
	Float Cy = ((Float)0.0);		HX_STACK_VAR(Cy,"Cy");
	HX_STACK_LINE(801)
	{
		HX_STACK_LINE(802)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(802)
		Float tmp9 = tmp8->posx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(802)
		Float tmp10 = this->a2relx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(802)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(802)
		::zpp_nape::phys::ZPP_Body tmp12 = this->b1;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(802)
		Float tmp13 = tmp12->posx;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(802)
		Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(802)
		Float tmp15 = this->a1relx;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(802)
		Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(802)
		dx = tmp16;
		HX_STACK_LINE(803)
		::zpp_nape::phys::ZPP_Body tmp17 = this->b2;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(803)
		Float tmp18 = tmp17->posy;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(803)
		Float tmp19 = this->a2rely;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(803)
		Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(803)
		::zpp_nape::phys::ZPP_Body tmp21 = this->b1;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(803)
		Float tmp22 = tmp21->posy;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(803)
		Float tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(803)
		Float tmp24 = this->a1rely;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(803)
		Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(803)
		dy = tmp25;
		HX_STACK_LINE(804)
		Float tmp26 = dy;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(804)
		Float tmp27 = this->nrelx;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(804)
		Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(804)
		Float tmp29 = dx;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(804)
		Float tmp30 = this->nrely;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(804)
		Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(804)
		Float tmp32 = (tmp28 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(804)
		Cx = tmp32;
		HX_STACK_LINE(805)
		Float tmp33 = this->nrelx;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(805)
		Float tmp34 = dx;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(805)
		Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(805)
		Float tmp36 = this->nrely;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(805)
		Float tmp37 = dy;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(805)
		Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(805)
		Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(805)
		Cy = tmp39;
		HX_STACK_LINE(806)
		bool tmp40 = this->equal;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(806)
		if ((tmp40)){
			HX_STACK_LINE(807)
			Float tmp41 = this->jointMin;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(807)
			hx::SubEq(Cy,tmp41);
			HX_STACK_LINE(808)
			this->scale = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(810)
			Float tmp41 = Cy;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(810)
			Float tmp42 = this->jointMax;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(810)
			bool tmp43 = (tmp41 > tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(810)
			if ((tmp43)){
				HX_STACK_LINE(811)
				Float tmp44 = this->jointMax;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(811)
				hx::SubEq(Cy,tmp44);
				HX_STACK_LINE(812)
				this->scale = ((Float)1.0);
			}
			else{
				HX_STACK_LINE(814)
				Float tmp44 = Cy;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(814)
				Float tmp45 = this->jointMin;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(814)
				bool tmp46 = (tmp44 < tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(814)
				if ((tmp46)){
					HX_STACK_LINE(815)
					Float tmp47 = this->jointMin;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(815)
					Float tmp48 = Cy;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(815)
					Float tmp49 = (tmp47 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(815)
					Cy = tmp49;
					HX_STACK_LINE(816)
					this->scale = ((Float)-1.0);
				}
				else{
					HX_STACK_LINE(819)
					Cy = (int)0;
					HX_STACK_LINE(820)
					this->scale = (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(823)
	{
		HX_STACK_LINE(824)
		Float drx = ((Float)0.0);		HX_STACK_VAR(drx,"drx");
		HX_STACK_LINE(825)
		Float dry = ((Float)0.0);		HX_STACK_VAR(dry,"dry");
		HX_STACK_LINE(826)
		{
			HX_STACK_LINE(827)
			Float tmp8 = dx;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(827)
			Float tmp9 = this->a1relx;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(827)
			Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(827)
			drx = tmp10;
			HX_STACK_LINE(828)
			Float tmp11 = dy;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(828)
			Float tmp12 = this->a1rely;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(828)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(828)
			dry = tmp13;
		}
		HX_STACK_LINE(830)
		Float tmp8 = this->nrelx;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(830)
		Float tmp9 = drx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(830)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(830)
		Float tmp11 = this->nrely;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(830)
		Float tmp12 = dry;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(830)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(830)
		Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(830)
		this->dot1 = tmp14;
		HX_STACK_LINE(831)
		Float tmp15 = dry;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(831)
		Float tmp16 = this->nrelx;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(831)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(831)
		Float tmp18 = drx;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(831)
		Float tmp19 = this->nrely;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(831)
		Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(831)
		Float tmp21 = (tmp17 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(831)
		this->cx1 = tmp21;
		HX_STACK_LINE(832)
		Float tmp22 = this->nrelx;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(832)
		Float tmp23 = this->a2relx;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(832)
		Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(832)
		Float tmp25 = this->nrely;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(832)
		Float tmp26 = this->a2rely;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(832)
		Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(832)
		Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(832)
		this->dot2 = tmp28;
		HX_STACK_LINE(833)
		Float tmp29 = this->a2rely;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(833)
		Float tmp30 = this->nrelx;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(833)
		Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(833)
		Float tmp32 = this->a2relx;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(833)
		Float tmp33 = this->nrely;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(833)
		Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(833)
		Float tmp35 = (tmp31 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(833)
		this->cx2 = tmp35;
		HX_STACK_LINE(834)
		::zpp_nape::phys::ZPP_Body tmp36 = this->b1;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(834)
		Float tmp37 = tmp36->smass;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(834)
		::zpp_nape::phys::ZPP_Body tmp38 = this->b2;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(834)
		Float tmp39 = tmp38->smass;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(834)
		Float tmp40 = (tmp37 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(834)
		Float tmp41 = this->dot1;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(834)
		Float tmp42 = this->dot1;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(834)
		Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(834)
		::zpp_nape::phys::ZPP_Body tmp44 = this->b1;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(834)
		Float tmp45 = tmp44->sinertia;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(834)
		Float tmp46 = (tmp43 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(834)
		Float tmp47 = (tmp40 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(834)
		Float tmp48 = this->dot2;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(834)
		Float tmp49 = this->dot2;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(834)
		Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(834)
		::zpp_nape::phys::ZPP_Body tmp51 = this->b2;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(834)
		Float tmp52 = tmp51->sinertia;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(834)
		Float tmp53 = (tmp50 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(834)
		Float tmp54 = (tmp47 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(834)
		this->kMassa = tmp54;
		HX_STACK_LINE(835)
		Float tmp55 = this->scale;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(835)
		Float tmp56 = -(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(835)
		Float tmp57 = this->dot1;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(835)
		Float tmp58 = this->cx1;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(835)
		Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(835)
		::zpp_nape::phys::ZPP_Body tmp60 = this->b1;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(835)
		Float tmp61 = tmp60->sinertia;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(835)
		Float tmp62 = (tmp59 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(835)
		Float tmp63 = this->dot2;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(835)
		Float tmp64 = this->cx2;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(835)
		Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(835)
		::zpp_nape::phys::ZPP_Body tmp66 = this->b2;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(835)
		Float tmp67 = tmp66->sinertia;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(835)
		Float tmp68 = (tmp65 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(835)
		Float tmp69 = (tmp62 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(835)
		Float tmp70 = (tmp56 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(835)
		this->kMassb = tmp70;
		HX_STACK_LINE(836)
		Float tmp71 = this->scale;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(836)
		Float tmp72 = this->scale;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(836)
		Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(836)
		::zpp_nape::phys::ZPP_Body tmp74 = this->b1;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(836)
		Float tmp75 = tmp74->smass;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(836)
		::zpp_nape::phys::ZPP_Body tmp76 = this->b2;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(836)
		Float tmp77 = tmp76->smass;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(836)
		Float tmp78 = (tmp75 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(836)
		Float tmp79 = this->cx1;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(836)
		Float tmp80 = this->cx1;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(836)
		Float tmp81 = (tmp79 * tmp80);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(836)
		::zpp_nape::phys::ZPP_Body tmp82 = this->b1;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(836)
		Float tmp83 = tmp82->sinertia;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(836)
		Float tmp84 = (tmp81 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(836)
		Float tmp85 = (tmp78 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(836)
		Float tmp86 = this->cx2;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(836)
		Float tmp87 = this->cx2;		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(836)
		Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(836)
		::zpp_nape::phys::ZPP_Body tmp89 = this->b2;		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(836)
		Float tmp90 = tmp89->sinertia;		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(836)
		Float tmp91 = (tmp88 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(836)
		Float tmp92 = (tmp85 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(836)
		Float tmp93 = (tmp73 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(836)
		this->kMassc = tmp93;
	}
	HX_STACK_LINE(838)
	int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(838)
	{
		HX_STACK_LINE(839)
		Float tmp9 = this->kMassa;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(839)
		Float tmp10 = this->kMassc;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(839)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(839)
		Float tmp12 = this->kMassb;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(839)
		Float tmp13 = this->kMassb;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(839)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(839)
		Float tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(839)
		Float det = tmp15;		HX_STACK_VAR(det,"det");
		HX_STACK_LINE(840)
		bool tmp16 = (det != det);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(840)
		if ((tmp16)){
			HX_STACK_LINE(841)
			Float tmp17 = this->kMassc = (int)0;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(841)
			Float tmp18 = this->kMassb = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(841)
			this->kMassa = tmp18;
			HX_STACK_LINE(842)
			tmp8 = (int)3;
		}
		else{
			HX_STACK_LINE(844)
			bool tmp17 = (det == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(844)
			if ((tmp17)){
				HX_STACK_LINE(845)
				int flag = (int)0;		HX_STACK_VAR(flag,"flag");
				HX_STACK_LINE(846)
				Float tmp18 = this->kMassa;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(846)
				bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(846)
				if ((tmp19)){
					HX_STACK_LINE(846)
					Float tmp20 = this->kMassa;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(846)
					Float tmp21 = (Float((int)1) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(846)
					this->kMassa = tmp21;
				}
				else{
					HX_STACK_LINE(848)
					this->kMassa = (int)0;
					HX_STACK_LINE(849)
					hx::OrEq(flag,(int)1);
				}
				HX_STACK_LINE(851)
				Float tmp20 = this->kMassc;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(851)
				bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(851)
				if ((tmp21)){
					HX_STACK_LINE(851)
					Float tmp22 = this->kMassc;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(851)
					Float tmp23 = (Float((int)1) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(851)
					this->kMassc = tmp23;
				}
				else{
					HX_STACK_LINE(853)
					this->kMassc = (int)0;
					HX_STACK_LINE(854)
					hx::OrEq(flag,(int)2);
				}
				HX_STACK_LINE(856)
				this->kMassb = (int)0;
				HX_STACK_LINE(857)
				tmp8 = flag;
			}
			else{
				HX_STACK_LINE(860)
				Float tmp18 = (Float((int)1) / Float(det));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(860)
				det = tmp18;
				HX_STACK_LINE(861)
				Float tmp19 = this->kMassc;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(861)
				Float tmp20 = det;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(861)
				Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(861)
				Float t = tmp21;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(862)
				Float tmp22 = this->kMassa;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(862)
				Float tmp23 = det;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(862)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(862)
				this->kMassc = tmp24;
				HX_STACK_LINE(863)
				this->kMassa = t;
				HX_STACK_LINE(864)
				Float tmp25 = det;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(864)
				Float tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(864)
				hx::MultEq(this->kMassb,tmp26);
				HX_STACK_LINE(865)
				tmp8 = (int)0;
			}
		}
	}
	HX_STACK_LINE(838)
	int flag = tmp8;		HX_STACK_VAR(flag,"flag");
	HX_STACK_LINE(868)
	int tmp9 = (int(flag) & int((int)1));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(868)
	bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(868)
	if ((tmp10)){
		HX_STACK_LINE(868)
		this->jAccx = (int)0;
	}
	HX_STACK_LINE(869)
	int tmp11 = (int(flag) & int((int)2));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(869)
	bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(869)
	if ((tmp12)){
		HX_STACK_LINE(869)
		this->jAccy = (int)0;
	}
	HX_STACK_LINE(870)
	bool tmp13 = this->stiff;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(870)
	bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(870)
	if ((tmp14)){
		HX_STACK_LINE(871)
		bool tmp15 = this->breakUnderError;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(871)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(871)
		if ((tmp15)){
			HX_STACK_LINE(871)
			Float tmp17 = (Cx * Cx);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(871)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(871)
			Float tmp19 = (Cy * Cy);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(871)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(871)
			Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(871)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(871)
			Float tmp23 = this->maxError;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(871)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(871)
			Float tmp25 = this->maxError;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(871)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(871)
			Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(871)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(871)
			tmp16 = (tmp22 > tmp28);
		}
		else{
			HX_STACK_LINE(871)
			tmp16 = false;
		}
		HX_STACK_LINE(871)
		if ((tmp16)){
			HX_STACK_LINE(871)
			return true;
		}
		HX_STACK_LINE(872)
		Float biasCoef;		HX_STACK_VAR(biasCoef,"biasCoef");
		HX_STACK_LINE(873)
		{
			HX_STACK_LINE(874)
			Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(874)
			{
				HX_STACK_LINE(875)
				Float tmp18 = ::Math_obj::PI;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(875)
				Float tmp19 = ((int)2 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(875)
				Float tmp20 = this->frequency;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(875)
				Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(875)
				Float omega = tmp21;		HX_STACK_VAR(omega,"omega");
				HX_STACK_LINE(876)
				Float tmp22 = (dt * omega);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(876)
				Float tmp23 = this->damping;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(876)
				Float tmp24 = ((int)2 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(876)
				Float tmp25 = (omega * dt);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(876)
				Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(876)
				Float tmp27 = (tmp22 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(876)
				Float tmp28 = (Float((int)1) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(876)
				this->gamma = tmp28;
				HX_STACK_LINE(877)
				Float tmp29 = this->gamma;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(877)
				Float tmp30 = ((int)1 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(877)
				Float tmp31 = (Float((int)1) / Float(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(877)
				Float ig = tmp31;		HX_STACK_VAR(ig,"ig");
				HX_STACK_LINE(878)
				Float tmp32 = (dt * omega);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(878)
				Float tmp33 = omega;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(878)
				Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(878)
				Float tmp35 = this->gamma;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(878)
				Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(878)
				biasCoef = tmp36;
				HX_STACK_LINE(879)
				hx::MultEq(this->gamma,ig);
				HX_STACK_LINE(880)
				tmp17 = ig;
			}
			HX_STACK_LINE(874)
			Float X = tmp17;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(882)
			hx::MultEq(this->kMassa,X);
			HX_STACK_LINE(883)
			hx::MultEq(this->kMassb,X);
			HX_STACK_LINE(884)
			hx::MultEq(this->kMassc,X);
		}
		HX_STACK_LINE(886)
		{
			HX_STACK_LINE(887)
			this->biasx = Cx;
			HX_STACK_LINE(888)
			this->biasy = Cy;
			HX_STACK_LINE(897)
			{
			}
		}
		HX_STACK_LINE(906)
		{
			HX_STACK_LINE(907)
			Float tmp17 = biasCoef;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(907)
			Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(907)
			Float t = tmp18;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(916)
			hx::MultEq(this->biasx,t);
			HX_STACK_LINE(917)
			hx::MultEq(this->biasy,t);
		}
		HX_STACK_LINE(919)
		{
			HX_STACK_LINE(920)
			Float tmp17 = this->maxError;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(920)
			Float t = tmp17;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(929)
			Float tmp18 = this->biasx;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(929)
			Float tmp19 = this->biasx;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(929)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(929)
			Float tmp21 = this->biasy;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(929)
			Float tmp22 = this->biasy;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(929)
			Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(929)
			Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(929)
			Float ls = tmp24;		HX_STACK_VAR(ls,"ls");
			HX_STACK_LINE(930)
			Float tmp25 = ls;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(930)
			Float tmp26 = (t * t);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(930)
			bool tmp27 = (tmp25 > tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(930)
			if ((tmp27)){
				HX_STACK_LINE(940)
				Float tmp28 = t;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(940)
				Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(940)
				{
					HX_STACK_LINE(940)
					Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(940)
					{
						HX_STACK_LINE(940)
						Float tmp31 = ls;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(940)
						tmp30 = ::Math_obj::sqrt(tmp31);
					}
					HX_STACK_LINE(940)
					tmp29 = (Float(((Float)1.0)) / Float(tmp30));
				}
				HX_STACK_LINE(940)
				Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(940)
				Float t1 = tmp30;		HX_STACK_VAR(t1,"t1");
				HX_STACK_LINE(949)
				hx::MultEq(this->biasx,t1);
				HX_STACK_LINE(950)
				hx::MultEq(this->biasy,t1);
			}
		}
	}
	else{
		HX_STACK_LINE(956)
		this->gamma = (int)0;
		HX_STACK_LINE(957)
		{
			HX_STACK_LINE(958)
			this->biasx = (int)0;
			HX_STACK_LINE(959)
			this->biasy = (int)0;
			HX_STACK_LINE(968)
			{
			}
		}
	}
	HX_STACK_LINE(978)
	{
		HX_STACK_LINE(979)
		Float t = dtratio;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(988)
		hx::MultEq(this->jAccx,t);
		HX_STACK_LINE(989)
		hx::MultEq(this->jAccy,t);
	}
	HX_STACK_LINE(991)
	Float tmp15 = this->maxForce;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(991)
	Float tmp16 = dt;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(991)
	Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(991)
	this->jMax = tmp17;
	HX_STACK_LINE(992)
	return false;
}


Void ZPP_LineJoint_obj::warmStart( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","warmStart",0x6fcc3c10,"zpp_nape.constraint.ZPP_LineJoint.warmStart","zpp_nape/constraint/LineJoint.hx",995,0x4b59f258)
		HX_STACK_THIS(this)
		HX_STACK_LINE(996)
		Float tmp = this->scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(996)
		Float tmp1 = this->nrelx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(996)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(996)
		Float tmp3 = this->jAccy;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(996)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(996)
		Float tmp5 = this->nrely;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(996)
		Float tmp6 = this->jAccx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(996)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(996)
		Float tmp8 = (tmp4 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(996)
		Float J2x = tmp8;		HX_STACK_VAR(J2x,"J2x");
		HX_STACK_LINE(997)
		Float tmp9 = this->nrelx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(997)
		Float tmp10 = this->jAccx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(997)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(997)
		Float tmp12 = this->scale;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(997)
		Float tmp13 = this->nrely;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(997)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(997)
		Float tmp15 = this->jAccy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(997)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(997)
		Float tmp17 = (tmp11 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(997)
		Float J2y = tmp17;		HX_STACK_VAR(J2y,"J2y");
		HX_STACK_LINE(1044)
		{
			HX_STACK_LINE(1045)
			{
				HX_STACK_LINE(1046)
				::zpp_nape::phys::ZPP_Body tmp18 = this->b1;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1046)
				Float t = tmp18->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1055)
				Float tmp19 = (J2x * t);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1055)
				::zpp_nape::phys::ZPP_Body tmp20 = this->b1;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1055)
				hx::SubEq(tmp20->velx,tmp19);
				HX_STACK_LINE(1056)
				Float tmp21 = (J2y * t);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1056)
				::zpp_nape::phys::ZPP_Body tmp22 = this->b1;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1056)
				hx::SubEq(tmp22->vely,tmp21);
			}
			HX_STACK_LINE(1058)
			{
				HX_STACK_LINE(1059)
				::zpp_nape::phys::ZPP_Body tmp18 = this->b2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1059)
				Float t = tmp18->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1068)
				Float tmp19 = (J2x * t);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1068)
				::zpp_nape::phys::ZPP_Body tmp20 = this->b2;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1068)
				hx::AddEq(tmp20->velx,tmp19);
				HX_STACK_LINE(1069)
				Float tmp21 = (J2y * t);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1069)
				::zpp_nape::phys::ZPP_Body tmp22 = this->b2;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1069)
				hx::AddEq(tmp22->vely,tmp21);
			}
			HX_STACK_LINE(1071)
			Float tmp18 = this->scale;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1071)
			Float tmp19 = this->cx1;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1071)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1071)
			Float tmp21 = this->jAccy;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1071)
			Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1071)
			Float tmp23 = this->dot1;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1071)
			Float tmp24 = this->jAccx;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1071)
			Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1071)
			Float tmp26 = (tmp22 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1071)
			::zpp_nape::phys::ZPP_Body tmp27 = this->b1;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1071)
			Float tmp28 = tmp27->iinertia;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1071)
			Float tmp29 = (tmp26 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1071)
			::zpp_nape::phys::ZPP_Body tmp30 = this->b1;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1071)
			hx::AddEq(tmp30->angvel,tmp29);
			HX_STACK_LINE(1072)
			Float tmp31 = this->dot2;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1072)
			Float tmp32 = this->jAccx;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1072)
			Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1072)
			Float tmp34 = this->scale;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1072)
			Float tmp35 = this->cx2;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1072)
			Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1072)
			Float tmp37 = this->jAccy;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1072)
			Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1072)
			Float tmp39 = (tmp33 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1072)
			::zpp_nape::phys::ZPP_Body tmp40 = this->b2;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1072)
			Float tmp41 = tmp40->iinertia;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1072)
			Float tmp42 = (tmp39 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1072)
			::zpp_nape::phys::ZPP_Body tmp43 = this->b2;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1072)
			hx::AddEq(tmp43->angvel,tmp42);
		}
	}
return null();
}


bool ZPP_LineJoint_obj::applyImpulseVel( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","applyImpulseVel",0xd6e78429,"zpp_nape.constraint.ZPP_LineJoint.applyImpulseVel","zpp_nape/constraint/LineJoint.hx",1076,0x4b59f258)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1077)
	Float Ex = ((Float)0.0);		HX_STACK_VAR(Ex,"Ex");
	HX_STACK_LINE(1078)
	Float Ey = ((Float)0.0);		HX_STACK_VAR(Ey,"Ey");
	HX_STACK_LINE(1079)
	{
		HX_STACK_LINE(1080)
		Float dvx = ((Float)0.0);		HX_STACK_VAR(dvx,"dvx");
		HX_STACK_LINE(1081)
		Float dvy = ((Float)0.0);		HX_STACK_VAR(dvy,"dvy");
		HX_STACK_LINE(1082)
		{
			HX_STACK_LINE(1083)
			::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1083)
			Float tmp1 = tmp->velx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1083)
			::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1083)
			Float tmp3 = tmp2->velx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1083)
			Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1083)
			dvx = tmp4;
			HX_STACK_LINE(1084)
			::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1084)
			Float tmp6 = tmp5->vely;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1084)
			::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1084)
			Float tmp8 = tmp7->vely;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1084)
			Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1084)
			dvy = tmp9;
		}
		HX_STACK_LINE(1086)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1086)
		Float tmp1 = tmp->kinvelx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1086)
		::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1086)
		Float tmp3 = tmp2->kinvelx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1086)
		Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1086)
		hx::AddEq(dvx,tmp4);
		HX_STACK_LINE(1087)
		::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1087)
		Float tmp6 = tmp5->kinvely;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1087)
		::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1087)
		Float tmp8 = tmp7->kinvely;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1087)
		Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1087)
		hx::AddEq(dvy,tmp9);
		HX_STACK_LINE(1088)
		Float tmp10 = dvy;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1088)
		Float tmp11 = this->nrelx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1088)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1088)
		Float tmp13 = dvx;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1088)
		Float tmp14 = this->nrely;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1088)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1088)
		Float tmp16 = (tmp12 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1088)
		::zpp_nape::phys::ZPP_Body tmp17 = this->b2;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1088)
		Float tmp18 = tmp17->angvel;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1088)
		::zpp_nape::phys::ZPP_Body tmp19 = this->b2;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1088)
		Float tmp20 = tmp19->kinangvel;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1088)
		Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1088)
		Float tmp22 = this->dot2;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1088)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1088)
		Float tmp24 = (tmp16 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1088)
		::zpp_nape::phys::ZPP_Body tmp25 = this->b1;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1088)
		Float tmp26 = tmp25->angvel;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1088)
		::zpp_nape::phys::ZPP_Body tmp27 = this->b1;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1088)
		Float tmp28 = tmp27->kinangvel;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1088)
		Float tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1088)
		Float tmp30 = this->dot1;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1088)
		Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1088)
		Float tmp32 = (tmp24 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1088)
		Ex = tmp32;
		HX_STACK_LINE(1089)
		Float tmp33 = this->scale;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1089)
		Float tmp34 = this->nrelx;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1089)
		Float tmp35 = dvx;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(1089)
		Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(1089)
		Float tmp37 = this->nrely;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(1089)
		Float tmp38 = dvy;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(1089)
		Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(1089)
		Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(1089)
		::zpp_nape::phys::ZPP_Body tmp41 = this->b2;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(1089)
		Float tmp42 = tmp41->angvel;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(1089)
		::zpp_nape::phys::ZPP_Body tmp43 = this->b2;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(1089)
		Float tmp44 = tmp43->kinangvel;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(1089)
		Float tmp45 = (tmp42 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(1089)
		Float tmp46 = this->cx2;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(1089)
		Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(1089)
		Float tmp48 = (tmp40 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(1089)
		::zpp_nape::phys::ZPP_Body tmp49 = this->b1;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(1089)
		Float tmp50 = tmp49->angvel;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(1089)
		::zpp_nape::phys::ZPP_Body tmp51 = this->b1;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(1089)
		Float tmp52 = tmp51->kinangvel;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(1089)
		Float tmp53 = (tmp50 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(1089)
		Float tmp54 = this->cx1;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(1089)
		Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(1089)
		Float tmp56 = (tmp48 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(1089)
		Float tmp57 = (tmp33 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(1089)
		Ey = tmp57;
	}
	HX_STACK_LINE(1091)
	Float Jx = ((Float)0.0);		HX_STACK_VAR(Jx,"Jx");
	HX_STACK_LINE(1092)
	Float Jy = ((Float)0.0);		HX_STACK_VAR(Jy,"Jy");
	HX_STACK_LINE(1093)
	{
		HX_STACK_LINE(1094)
		Float tmp = this->biasx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1094)
		Float tmp1 = Ex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1094)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1094)
		Jx = tmp2;
		HX_STACK_LINE(1095)
		Float tmp3 = this->biasy;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1095)
		Float tmp4 = Ey;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1095)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1095)
		Jy = tmp5;
	}
	HX_STACK_LINE(1097)
	{
		HX_STACK_LINE(1098)
		Float tmp = this->kMassa;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1098)
		Float tmp1 = Jx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1098)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1098)
		Float tmp3 = this->kMassb;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1098)
		Float tmp4 = Jy;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1098)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1098)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1098)
		Float t = tmp6;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(1099)
		Float tmp7 = this->kMassb;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1099)
		Float tmp8 = Jx;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1099)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1099)
		Float tmp10 = this->kMassc;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1099)
		Float tmp11 = Jy;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1099)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1099)
		Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1099)
		Jy = tmp13;
		HX_STACK_LINE(1100)
		Jx = t;
	}
	HX_STACK_LINE(1102)
	{
		HX_STACK_LINE(1103)
		Float tmp = this->gamma;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1103)
		Float t = tmp;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(1112)
		Float tmp1 = this->jAccx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1112)
		Float tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1112)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1112)
		hx::SubEq(Jx,tmp3);
		HX_STACK_LINE(1113)
		Float tmp4 = this->jAccy;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1113)
		Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1113)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1113)
		hx::SubEq(Jy,tmp6);
	}
	HX_STACK_LINE(1115)
	{
		HX_STACK_LINE(1116)
		Float jOldx = ((Float)0.0);		HX_STACK_VAR(jOldx,"jOldx");
		HX_STACK_LINE(1117)
		Float jOldy = ((Float)0.0);		HX_STACK_VAR(jOldy,"jOldy");
		HX_STACK_LINE(1118)
		{
			HX_STACK_LINE(1119)
			Float tmp = this->jAccx;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1119)
			jOldx = tmp;
			HX_STACK_LINE(1120)
			Float tmp1 = this->jAccy;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1120)
			jOldy = tmp1;
			HX_STACK_LINE(1129)
			{
			}
		}
		HX_STACK_LINE(1138)
		{
			HX_STACK_LINE(1139)
			Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1148)
			Float tmp = (Jx * t);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1148)
			hx::AddEq(this->jAccx,tmp);
			HX_STACK_LINE(1149)
			Float tmp1 = (Jy * t);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1149)
			hx::AddEq(this->jAccy,tmp1);
		}
		HX_STACK_LINE(1151)
		{
			HX_STACK_LINE(1152)
			Float tmp = this->jAccy;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1152)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1152)
			if ((tmp1)){
				HX_STACK_LINE(1152)
				this->jAccy = (int)0;
			}
			HX_STACK_LINE(1153)
			bool tmp2 = this->breakUnderForce;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1153)
			if ((tmp2)){
				HX_STACK_LINE(1154)
				Float tmp3 = this->jAccx;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1154)
				Float tmp4 = this->jAccx;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1154)
				Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1154)
				Float tmp6 = this->jAccy;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1154)
				Float tmp7 = this->jAccy;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1154)
				Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1154)
				Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1154)
				Float tmp10 = this->jMax;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1154)
				Float tmp11 = this->jMax;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1154)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1154)
				bool tmp13 = (tmp9 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1154)
				if ((tmp13)){
					HX_STACK_LINE(1154)
					return true;
				}
			}
			else{
				HX_STACK_LINE(1156)
				bool tmp3 = this->stiff;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1156)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1156)
				if ((tmp4)){
					HX_STACK_LINE(1157)
					Float tmp5 = this->jMax;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1157)
					Float t = tmp5;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1166)
					Float tmp6 = this->jAccx;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1166)
					Float tmp7 = this->jAccx;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1166)
					Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1166)
					Float tmp9 = this->jAccy;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1166)
					Float tmp10 = this->jAccy;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1166)
					Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1166)
					Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1166)
					Float ls = tmp12;		HX_STACK_VAR(ls,"ls");
					HX_STACK_LINE(1167)
					Float tmp13 = ls;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1167)
					Float tmp14 = (t * t);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1167)
					bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1167)
					if ((tmp15)){
						HX_STACK_LINE(1177)
						Float tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1177)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1177)
						{
							HX_STACK_LINE(1177)
							Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1177)
							{
								HX_STACK_LINE(1177)
								Float tmp19 = ls;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1177)
								tmp18 = ::Math_obj::sqrt(tmp19);
							}
							HX_STACK_LINE(1177)
							tmp17 = (Float(((Float)1.0)) / Float(tmp18));
						}
						HX_STACK_LINE(1177)
						Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1177)
						Float t1 = tmp18;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(1186)
						hx::MultEq(this->jAccx,t1);
						HX_STACK_LINE(1187)
						hx::MultEq(this->jAccy,t1);
					}
				}
			}
		}
		HX_STACK_LINE(1192)
		{
			HX_STACK_LINE(1193)
			Float tmp = this->jAccx;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1193)
			Float tmp1 = jOldx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1193)
			Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1193)
			Jx = tmp2;
			HX_STACK_LINE(1194)
			Float tmp3 = this->jAccy;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1194)
			Float tmp4 = jOldy;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1194)
			Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1194)
			Jy = tmp5;
		}
	}
	HX_STACK_LINE(1197)
	{
		HX_STACK_LINE(1198)
		Float tmp = this->scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1198)
		Float tmp1 = this->nrelx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1198)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1198)
		Float tmp3 = Jy;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1198)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1198)
		Float tmp5 = this->nrely;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1198)
		Float tmp6 = Jx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1198)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1198)
		Float tmp8 = (tmp4 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1198)
		Float J2x = tmp8;		HX_STACK_VAR(J2x,"J2x");
		HX_STACK_LINE(1199)
		Float tmp9 = this->nrelx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1199)
		Float tmp10 = Jx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1199)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1199)
		Float tmp12 = this->scale;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1199)
		Float tmp13 = this->nrely;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1199)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1199)
		Float tmp15 = Jy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1199)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1199)
		Float tmp17 = (tmp11 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1199)
		Float J2y = tmp17;		HX_STACK_VAR(J2y,"J2y");
		HX_STACK_LINE(1246)
		{
			HX_STACK_LINE(1247)
			{
				HX_STACK_LINE(1248)
				::zpp_nape::phys::ZPP_Body tmp18 = this->b1;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1248)
				Float t = tmp18->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1257)
				Float tmp19 = (J2x * t);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1257)
				::zpp_nape::phys::ZPP_Body tmp20 = this->b1;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1257)
				hx::SubEq(tmp20->velx,tmp19);
				HX_STACK_LINE(1258)
				Float tmp21 = (J2y * t);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1258)
				::zpp_nape::phys::ZPP_Body tmp22 = this->b1;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1258)
				hx::SubEq(tmp22->vely,tmp21);
			}
			HX_STACK_LINE(1260)
			{
				HX_STACK_LINE(1261)
				::zpp_nape::phys::ZPP_Body tmp18 = this->b2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1261)
				Float t = tmp18->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1270)
				Float tmp19 = (J2x * t);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1270)
				::zpp_nape::phys::ZPP_Body tmp20 = this->b2;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1270)
				hx::AddEq(tmp20->velx,tmp19);
				HX_STACK_LINE(1271)
				Float tmp21 = (J2y * t);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1271)
				::zpp_nape::phys::ZPP_Body tmp22 = this->b2;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1271)
				hx::AddEq(tmp22->vely,tmp21);
			}
			HX_STACK_LINE(1273)
			Float tmp18 = this->scale;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1273)
			Float tmp19 = this->cx1;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1273)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1273)
			Float tmp21 = Jy;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1273)
			Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1273)
			Float tmp23 = this->dot1;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1273)
			Float tmp24 = Jx;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1273)
			Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1273)
			Float tmp26 = (tmp22 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1273)
			::zpp_nape::phys::ZPP_Body tmp27 = this->b1;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1273)
			Float tmp28 = tmp27->iinertia;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1273)
			Float tmp29 = (tmp26 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1273)
			::zpp_nape::phys::ZPP_Body tmp30 = this->b1;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1273)
			hx::AddEq(tmp30->angvel,tmp29);
			HX_STACK_LINE(1274)
			Float tmp31 = this->dot2;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1274)
			Float tmp32 = Jx;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1274)
			Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1274)
			Float tmp34 = this->scale;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1274)
			Float tmp35 = this->cx2;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1274)
			Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1274)
			Float tmp37 = Jy;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1274)
			Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1274)
			Float tmp39 = (tmp33 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1274)
			::zpp_nape::phys::ZPP_Body tmp40 = this->b2;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1274)
			Float tmp41 = tmp40->iinertia;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1274)
			Float tmp42 = (tmp39 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1274)
			::zpp_nape::phys::ZPP_Body tmp43 = this->b2;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1274)
			hx::AddEq(tmp43->angvel,tmp42);
		}
	}
	HX_STACK_LINE(1277)
	return false;
}


bool ZPP_LineJoint_obj::applyImpulsePos( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","applyImpulsePos",0xd6e2ff60,"zpp_nape.constraint.ZPP_LineJoint.applyImpulsePos","zpp_nape/constraint/LineJoint.hx",1279,0x4b59f258)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1280)
	Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
	HX_STACK_LINE(1281)
	Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
	HX_STACK_LINE(1283)
	{
		HX_STACK_LINE(1284)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1284)
		Float tmp1 = tmp->axisy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1284)
		Float tmp2 = this->nlocalx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1284)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1284)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1284)
		Float tmp5 = tmp4->axisx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1284)
		Float tmp6 = this->nlocaly;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1284)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1284)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1284)
		nx = tmp8;
		HX_STACK_LINE(1285)
		Float tmp9 = this->nlocalx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1285)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1285)
		Float tmp11 = tmp10->axisx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1285)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1285)
		Float tmp13 = this->nlocaly;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1285)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b1;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1285)
		Float tmp15 = tmp14->axisy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1285)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1285)
		Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1285)
		ny = tmp17;
	}
	HX_STACK_LINE(1288)
	Float r1x = ((Float)0.0);		HX_STACK_VAR(r1x,"r1x");
	HX_STACK_LINE(1289)
	Float r1y = ((Float)0.0);		HX_STACK_VAR(r1y,"r1y");
	HX_STACK_LINE(1291)
	{
		HX_STACK_LINE(1292)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1292)
		Float tmp1 = tmp->axisy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1292)
		Float tmp2 = this->a1localx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1292)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1292)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1292)
		Float tmp5 = tmp4->axisx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1292)
		Float tmp6 = this->a1localy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1292)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1292)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1292)
		r1x = tmp8;
		HX_STACK_LINE(1293)
		Float tmp9 = this->a1localx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1293)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1293)
		Float tmp11 = tmp10->axisx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1293)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1293)
		Float tmp13 = this->a1localy;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1293)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b1;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1293)
		Float tmp15 = tmp14->axisy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1293)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1293)
		Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1293)
		r1y = tmp17;
	}
	HX_STACK_LINE(1296)
	Float r2x = ((Float)0.0);		HX_STACK_VAR(r2x,"r2x");
	HX_STACK_LINE(1297)
	Float r2y = ((Float)0.0);		HX_STACK_VAR(r2y,"r2y");
	HX_STACK_LINE(1299)
	{
		HX_STACK_LINE(1300)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1300)
		Float tmp1 = tmp->axisy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1300)
		Float tmp2 = this->a2localx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1300)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1300)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1300)
		Float tmp5 = tmp4->axisx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1300)
		Float tmp6 = this->a2localy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1300)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1300)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1300)
		r2x = tmp8;
		HX_STACK_LINE(1301)
		Float tmp9 = this->a2localx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1301)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b2;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1301)
		Float tmp11 = tmp10->axisx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1301)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1301)
		Float tmp13 = this->a2localy;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1301)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1301)
		Float tmp15 = tmp14->axisy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1301)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1301)
		Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1301)
		r2y = tmp17;
	}
	HX_STACK_LINE(1304)
	Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(1305)
	Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(1306)
	Float scale;		HX_STACK_VAR(scale,"scale");
	HX_STACK_LINE(1307)
	Float Ex = ((Float)0.0);		HX_STACK_VAR(Ex,"Ex");
	HX_STACK_LINE(1308)
	Float Ey = ((Float)0.0);		HX_STACK_VAR(Ey,"Ey");
	HX_STACK_LINE(1309)
	{
		HX_STACK_LINE(1310)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1310)
		Float tmp1 = tmp->posx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1310)
		Float tmp2 = r2x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1310)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1310)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1310)
		Float tmp5 = tmp4->posx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1310)
		Float tmp6 = (tmp3 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1310)
		Float tmp7 = r1x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1310)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1310)
		dx = tmp8;
		HX_STACK_LINE(1311)
		::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1311)
		Float tmp10 = tmp9->posy;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1311)
		Float tmp11 = r2y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1311)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1311)
		::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1311)
		Float tmp14 = tmp13->posy;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1311)
		Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1311)
		Float tmp16 = r1y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1311)
		Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1311)
		dy = tmp17;
		HX_STACK_LINE(1312)
		Float tmp18 = (dy * nx);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1312)
		Float tmp19 = (dx * ny);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1312)
		Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1312)
		Ex = tmp20;
		HX_STACK_LINE(1313)
		Float tmp21 = (nx * dx);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1313)
		Float tmp22 = (ny * dy);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1313)
		Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1313)
		Ey = tmp23;
		HX_STACK_LINE(1314)
		bool tmp24 = this->equal;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1314)
		if ((tmp24)){
			HX_STACK_LINE(1315)
			Float tmp25 = this->jointMin;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1315)
			hx::SubEq(Ey,tmp25);
			HX_STACK_LINE(1316)
			scale = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(1318)
			Float tmp25 = Ey;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1318)
			Float tmp26 = this->jointMax;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1318)
			bool tmp27 = (tmp25 > tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1318)
			if ((tmp27)){
				HX_STACK_LINE(1319)
				Float tmp28 = this->jointMax;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1319)
				hx::SubEq(Ey,tmp28);
				HX_STACK_LINE(1320)
				scale = ((Float)1.0);
			}
			else{
				HX_STACK_LINE(1322)
				Float tmp28 = Ey;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1322)
				Float tmp29 = this->jointMin;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1322)
				bool tmp30 = (tmp28 < tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1322)
				if ((tmp30)){
					HX_STACK_LINE(1323)
					Float tmp31 = this->jointMin;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1323)
					Float tmp32 = Ey;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1323)
					Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1323)
					Ey = tmp33;
					HX_STACK_LINE(1324)
					scale = ((Float)-1.0);
				}
				else{
					HX_STACK_LINE(1327)
					Ey = (int)0;
					HX_STACK_LINE(1328)
					scale = (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(1331)
	bool tmp = this->breakUnderError;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1331)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1331)
	if ((tmp)){
		HX_STACK_LINE(1331)
		Float tmp2 = (Ex * Ex);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1331)
		Float tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1331)
		Float tmp4 = (Ey * Ey);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1331)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1331)
		Float tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1331)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1331)
		Float tmp8 = this->maxError;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1331)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1331)
		Float tmp10 = this->maxError;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1331)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1331)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1331)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1331)
		tmp1 = (tmp7 > tmp13);
	}
	else{
		HX_STACK_LINE(1331)
		tmp1 = false;
	}
	HX_STACK_LINE(1331)
	if ((tmp1)){
		HX_STACK_LINE(1331)
		return true;
	}
	HX_STACK_LINE(1332)
	Float tmp2 = (Ex * Ex);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1332)
	Float tmp3 = (Ey * Ey);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1332)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1332)
	Float tmp5 = ::nape::Config_obj::constraintLinearSlop;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1332)
	Float tmp6 = ::nape::Config_obj::constraintLinearSlop;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1332)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1332)
	bool tmp8 = (tmp4 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1332)
	if ((tmp8)){
		HX_STACK_LINE(1332)
		return false;
	}
	HX_STACK_LINE(1333)
	Float Jx = ((Float)0.0);		HX_STACK_VAR(Jx,"Jx");
	HX_STACK_LINE(1334)
	Float Jy = ((Float)0.0);		HX_STACK_VAR(Jy,"Jy");
	HX_STACK_LINE(1335)
	{
		HX_STACK_LINE(1336)
		Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(1345)
		hx::MultEq(Ex,t);
		HX_STACK_LINE(1346)
		hx::MultEq(Ey,t);
	}
	HX_STACK_LINE(1348)
	Float tmp9 = (Ex * Ex);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1348)
	Float tmp10 = (Ey * Ey);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1348)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1348)
	bool tmp12 = (tmp11 > (int)6);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1348)
	if ((tmp12)){
		HX_STACK_LINE(1349)
		::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1349)
		Float tmp14 = tmp13->smass;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1349)
		::zpp_nape::phys::ZPP_Body tmp15 = this->b2;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1349)
		Float tmp16 = tmp15->smass;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1349)
		Float tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1349)
		Float k = tmp17;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(1350)
		Float tmp18 = k;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1350)
		Float tmp19 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1350)
		bool tmp20 = (tmp18 > tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1350)
		if ((tmp20)){
			HX_STACK_LINE(1351)
			Float tmp21 = (Float(((Float)0.8)) / Float(k));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1351)
			k = tmp21;
			HX_STACK_LINE(1352)
			Float tmp22 = k;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1352)
			Float tmp23 = (ny * Ex);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1352)
			Float tmp24 = (scale * nx);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1352)
			Float tmp25 = Ey;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1352)
			Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1352)
			Float tmp27 = (tmp23 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1352)
			Float tmp28 = (tmp22 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1352)
			Float Jx1 = tmp28;		HX_STACK_VAR(Jx1,"Jx1");
			HX_STACK_LINE(1353)
			Float tmp29 = k;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1353)
			Float tmp30 = (nx * Ex);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1353)
			Float tmp31 = scale;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1353)
			Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1353)
			Float tmp33 = (ny * Ex);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1353)
			Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1353)
			Float tmp35 = (tmp29 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1353)
			Float Jy1 = tmp35;		HX_STACK_VAR(Jy1,"Jy1");
			HX_STACK_LINE(1370)
			{
				HX_STACK_LINE(1371)
				::zpp_nape::phys::ZPP_Body tmp36 = this->b1;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1371)
				Float t = tmp36->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1380)
				Float tmp37 = (Jx1 * t);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1380)
				::zpp_nape::phys::ZPP_Body tmp38 = this->b1;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1380)
				hx::SubEq(tmp38->posx,tmp37);
				HX_STACK_LINE(1381)
				Float tmp39 = (Jy1 * t);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1381)
				::zpp_nape::phys::ZPP_Body tmp40 = this->b1;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1381)
				hx::SubEq(tmp40->posy,tmp39);
			}
			HX_STACK_LINE(1383)
			{
				HX_STACK_LINE(1384)
				::zpp_nape::phys::ZPP_Body tmp36 = this->b2;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1384)
				Float t = tmp36->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1393)
				Float tmp37 = (Jx1 * t);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1393)
				::zpp_nape::phys::ZPP_Body tmp38 = this->b2;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1393)
				hx::AddEq(tmp38->posx,tmp37);
				HX_STACK_LINE(1394)
				Float tmp39 = (Jy1 * t);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1394)
				::zpp_nape::phys::ZPP_Body tmp40 = this->b2;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1394)
				hx::AddEq(tmp40->posy,tmp39);
			}
			HX_STACK_LINE(1396)
			{
				HX_STACK_LINE(1397)
				::zpp_nape::phys::ZPP_Body tmp36 = this->b2;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1397)
				Float tmp37 = tmp36->posx;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1397)
				Float tmp38 = r2x;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1397)
				Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1397)
				::zpp_nape::phys::ZPP_Body tmp40 = this->b1;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1397)
				Float tmp41 = tmp40->posx;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1397)
				Float tmp42 = (tmp39 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1397)
				Float tmp43 = r1x;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1397)
				Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1397)
				dx = tmp44;
				HX_STACK_LINE(1398)
				::zpp_nape::phys::ZPP_Body tmp45 = this->b2;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1398)
				Float tmp46 = tmp45->posy;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1398)
				Float tmp47 = r2y;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(1398)
				Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(1398)
				::zpp_nape::phys::ZPP_Body tmp49 = this->b1;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(1398)
				Float tmp50 = tmp49->posy;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1398)
				Float tmp51 = (tmp48 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1398)
				Float tmp52 = r1y;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(1398)
				Float tmp53 = (tmp51 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(1398)
				dy = tmp53;
				HX_STACK_LINE(1399)
				Float tmp54 = (dy * nx);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(1399)
				Float tmp55 = (dx * ny);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(1399)
				Float tmp56 = (tmp54 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(1399)
				Ex = tmp56;
				HX_STACK_LINE(1400)
				Float tmp57 = (nx * dx);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(1400)
				Float tmp58 = (ny * dy);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(1400)
				Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(1400)
				Ey = tmp59;
				HX_STACK_LINE(1401)
				bool tmp60 = this->equal;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(1401)
				if ((tmp60)){
					HX_STACK_LINE(1402)
					Float tmp61 = this->jointMin;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(1402)
					hx::SubEq(Ey,tmp61);
					HX_STACK_LINE(1403)
					scale = ((Float)1.0);
				}
				else{
					HX_STACK_LINE(1405)
					Float tmp61 = Ey;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(1405)
					Float tmp62 = this->jointMax;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(1405)
					bool tmp63 = (tmp61 > tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(1405)
					if ((tmp63)){
						HX_STACK_LINE(1406)
						Float tmp64 = this->jointMax;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(1406)
						hx::SubEq(Ey,tmp64);
						HX_STACK_LINE(1407)
						scale = ((Float)1.0);
					}
					else{
						HX_STACK_LINE(1409)
						Float tmp64 = Ey;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(1409)
						Float tmp65 = this->jointMin;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(1409)
						bool tmp66 = (tmp64 < tmp65);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(1409)
						if ((tmp66)){
							HX_STACK_LINE(1410)
							Float tmp67 = this->jointMin;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(1410)
							Float tmp68 = Ey;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(1410)
							Float tmp69 = (tmp67 - tmp68);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(1410)
							Ey = tmp69;
							HX_STACK_LINE(1411)
							scale = ((Float)-1.0);
						}
						else{
							HX_STACK_LINE(1414)
							Ey = (int)0;
							HX_STACK_LINE(1415)
							scale = (int)0;
						}
					}
				}
			}
			HX_STACK_LINE(1418)
			{
				HX_STACK_LINE(1419)
				Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1428)
				hx::MultEq(Ex,t);
				HX_STACK_LINE(1429)
				hx::MultEq(Ey,t);
			}
		}
	}
	HX_STACK_LINE(1433)
	Float dot1;		HX_STACK_VAR(dot1,"dot1");
	HX_STACK_LINE(1433)
	Float dot2;		HX_STACK_VAR(dot2,"dot2");
	HX_STACK_LINE(1433)
	Float cx1;		HX_STACK_VAR(cx1,"cx1");
	HX_STACK_LINE(1433)
	Float cx2;		HX_STACK_VAR(cx2,"cx2");
	HX_STACK_LINE(1434)
	Float Ka = ((Float)0.0);		HX_STACK_VAR(Ka,"Ka");
	HX_STACK_LINE(1435)
	Float Kb = ((Float)0.0);		HX_STACK_VAR(Kb,"Kb");
	HX_STACK_LINE(1436)
	Float Kc = ((Float)0.0);		HX_STACK_VAR(Kc,"Kc");
	HX_STACK_LINE(1437)
	{
		HX_STACK_LINE(1438)
		Float drx = ((Float)0.0);		HX_STACK_VAR(drx,"drx");
		HX_STACK_LINE(1439)
		Float dry = ((Float)0.0);		HX_STACK_VAR(dry,"dry");
		HX_STACK_LINE(1440)
		{
			HX_STACK_LINE(1441)
			Float tmp13 = (dx + r1x);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1441)
			drx = tmp13;
			HX_STACK_LINE(1442)
			Float tmp14 = (dy + r1y);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1442)
			dry = tmp14;
		}
		HX_STACK_LINE(1444)
		Float tmp13 = (nx * drx);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1444)
		Float tmp14 = (ny * dry);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1444)
		Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1444)
		dot1 = tmp15;
		HX_STACK_LINE(1445)
		Float tmp16 = (dry * nx);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1445)
		Float tmp17 = (drx * ny);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1445)
		Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1445)
		cx1 = tmp18;
		HX_STACK_LINE(1446)
		Float tmp19 = (nx * r2x);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1446)
		Float tmp20 = (ny * r2y);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1446)
		Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1446)
		dot2 = tmp21;
		HX_STACK_LINE(1447)
		Float tmp22 = (r2y * nx);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1447)
		Float tmp23 = (r2x * ny);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1447)
		Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1447)
		cx2 = tmp24;
		HX_STACK_LINE(1448)
		::zpp_nape::phys::ZPP_Body tmp25 = this->b1;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1448)
		Float tmp26 = tmp25->smass;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1448)
		::zpp_nape::phys::ZPP_Body tmp27 = this->b2;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1448)
		Float tmp28 = tmp27->smass;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1448)
		Float tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1448)
		Float tmp30 = (dot1 * dot1);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1448)
		::zpp_nape::phys::ZPP_Body tmp31 = this->b1;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1448)
		Float tmp32 = tmp31->sinertia;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1448)
		Float tmp33 = (tmp30 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1448)
		Float tmp34 = (tmp29 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1448)
		Float tmp35 = (dot2 * dot2);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(1448)
		::zpp_nape::phys::ZPP_Body tmp36 = this->b2;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(1448)
		Float tmp37 = tmp36->sinertia;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(1448)
		Float tmp38 = (tmp35 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(1448)
		Float tmp39 = (tmp34 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(1448)
		Ka = tmp39;
		HX_STACK_LINE(1449)
		Float tmp40 = scale;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(1449)
		Float tmp41 = -(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(1449)
		Float tmp42 = (dot1 * cx1);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(1449)
		::zpp_nape::phys::ZPP_Body tmp43 = this->b1;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(1449)
		Float tmp44 = tmp43->sinertia;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(1449)
		Float tmp45 = (tmp42 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(1449)
		Float tmp46 = (dot2 * cx2);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(1449)
		::zpp_nape::phys::ZPP_Body tmp47 = this->b2;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(1449)
		Float tmp48 = tmp47->sinertia;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(1449)
		Float tmp49 = (tmp46 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(1449)
		Float tmp50 = (tmp45 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(1449)
		Float tmp51 = (tmp41 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(1449)
		Kb = tmp51;
		HX_STACK_LINE(1450)
		Float tmp52 = (scale * scale);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(1450)
		::zpp_nape::phys::ZPP_Body tmp53 = this->b1;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(1450)
		Float tmp54 = tmp53->smass;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(1450)
		::zpp_nape::phys::ZPP_Body tmp55 = this->b2;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(1450)
		Float tmp56 = tmp55->smass;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(1450)
		Float tmp57 = (tmp54 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(1450)
		Float tmp58 = (cx1 * cx1);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(1450)
		::zpp_nape::phys::ZPP_Body tmp59 = this->b1;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(1450)
		Float tmp60 = tmp59->sinertia;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(1450)
		Float tmp61 = (tmp58 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(1450)
		Float tmp62 = (tmp57 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(1450)
		Float tmp63 = (cx2 * cx2);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(1450)
		::zpp_nape::phys::ZPP_Body tmp64 = this->b2;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(1450)
		Float tmp65 = tmp64->sinertia;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(1450)
		Float tmp66 = (tmp63 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(1450)
		Float tmp67 = (tmp62 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(1450)
		Float tmp68 = (tmp52 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(1450)
		Kc = tmp68;
	}
	HX_STACK_LINE(1452)
	{
		HX_STACK_LINE(1453)
		Float tmp13 = Ex;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1453)
		Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1453)
		Jx = tmp14;
		HX_STACK_LINE(1454)
		Float tmp15 = Ey;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1454)
		Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1454)
		Jy = tmp16;
		HX_STACK_LINE(1463)
		{
		}
	}
	HX_STACK_LINE(1472)
	{
		HX_STACK_LINE(1473)
		Float tmp13 = (Ka * Kc);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1473)
		Float tmp14 = (Kb * Kb);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1473)
		Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1473)
		Float det = tmp15;		HX_STACK_VAR(det,"det");
		HX_STACK_LINE(1474)
		bool tmp16 = (det != det);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1474)
		if ((tmp16)){
			HX_STACK_LINE(1474)
			Float tmp17 = Jy = (int)0;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1474)
			Jx = tmp17;
		}
		else{
			HX_STACK_LINE(1475)
			bool tmp17 = (det == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1475)
			if ((tmp17)){
				HX_STACK_LINE(1476)
				bool tmp18 = (Ka != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1476)
				if ((tmp18)){
					HX_STACK_LINE(1476)
					hx::DivEq(Jx,Ka);
				}
				else{
					HX_STACK_LINE(1477)
					Jx = (int)0;
				}
				HX_STACK_LINE(1478)
				bool tmp19 = (Kc != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1478)
				if ((tmp19)){
					HX_STACK_LINE(1478)
					hx::DivEq(Jy,Kc);
				}
				else{
					HX_STACK_LINE(1479)
					Jy = (int)0;
				}
			}
			else{
				HX_STACK_LINE(1482)
				Float tmp18 = (Float((int)1) / Float(det));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1482)
				det = tmp18;
				HX_STACK_LINE(1483)
				Float tmp19 = det;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1483)
				Float tmp20 = (Kc * Jx);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1483)
				Float tmp21 = (Kb * Jy);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1483)
				Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1483)
				Float tmp23 = (tmp19 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1483)
				Float t = tmp23;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1484)
				Float tmp24 = det;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1484)
				Float tmp25 = (Ka * Jy);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1484)
				Float tmp26 = (Kb * Jx);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1484)
				Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1484)
				Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1484)
				Jy = tmp28;
				HX_STACK_LINE(1485)
				Jx = t;
			}
		}
	}
	HX_STACK_LINE(1488)
	bool tmp13 = (Jy > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1488)
	if ((tmp13)){
		HX_STACK_LINE(1488)
		Jy = (int)0;
	}
	HX_STACK_LINE(1489)
	{
		HX_STACK_LINE(1490)
		Float tmp14 = (scale * nx);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1490)
		Float tmp15 = Jy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1490)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1490)
		Float tmp17 = (ny * Jx);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1490)
		Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1490)
		Float J2x = tmp18;		HX_STACK_VAR(J2x,"J2x");
		HX_STACK_LINE(1491)
		Float tmp19 = (nx * Jx);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1491)
		Float tmp20 = (scale * ny);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1491)
		Float tmp21 = Jy;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1491)
		Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1491)
		Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1491)
		Float J2y = tmp23;		HX_STACK_VAR(J2y,"J2y");
		HX_STACK_LINE(1508)
		{
			HX_STACK_LINE(1509)
			{
				HX_STACK_LINE(1510)
				::zpp_nape::phys::ZPP_Body tmp24 = this->b1;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1510)
				Float t = tmp24->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1519)
				Float tmp25 = (J2x * t);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1519)
				::zpp_nape::phys::ZPP_Body tmp26 = this->b1;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1519)
				hx::SubEq(tmp26->posx,tmp25);
				HX_STACK_LINE(1520)
				Float tmp27 = (J2y * t);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1520)
				::zpp_nape::phys::ZPP_Body tmp28 = this->b1;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1520)
				hx::SubEq(tmp28->posy,tmp27);
			}
			HX_STACK_LINE(1522)
			{
				HX_STACK_LINE(1523)
				::zpp_nape::phys::ZPP_Body tmp24 = this->b2;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1523)
				Float t = tmp24->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1532)
				Float tmp25 = (J2x * t);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1532)
				::zpp_nape::phys::ZPP_Body tmp26 = this->b2;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1532)
				hx::AddEq(tmp26->posx,tmp25);
				HX_STACK_LINE(1533)
				Float tmp27 = (J2y * t);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1533)
				::zpp_nape::phys::ZPP_Body tmp28 = this->b2;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1533)
				hx::AddEq(tmp28->posy,tmp27);
			}
			HX_STACK_LINE(1535)
			{
				HX_STACK_LINE(1535)
				::zpp_nape::phys::ZPP_Body tmp24 = this->b1;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1535)
				::zpp_nape::phys::ZPP_Body _this = tmp24;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1535)
				Float tmp25 = (scale * cx1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1535)
				Float tmp26 = Jy;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1535)
				Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1535)
				Float tmp28 = (dot1 * Jx);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1535)
				Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1535)
				::zpp_nape::phys::ZPP_Body tmp30 = this->b1;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1535)
				Float tmp31 = tmp30->iinertia;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1535)
				Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1535)
				Float dr = tmp32;		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(1535)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(1535)
				Float tmp33 = (dr * dr);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1535)
				bool tmp34 = (tmp33 > ((Float)0.0001));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1535)
				if ((tmp34)){
					HX_STACK_LINE(1535)
					Float tmp35 = _this->rot;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1535)
					Float tmp36 = ::Math_obj::sin(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1535)
					_this->axisx = tmp36;
					HX_STACK_LINE(1535)
					Float tmp37 = _this->rot;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1535)
					Float tmp38 = ::Math_obj::cos(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1535)
					_this->axisy = tmp38;
					HX_STACK_LINE(1535)
					Dynamic();
				}
				else{
					HX_STACK_LINE(1535)
					Float tmp35 = (dr * dr);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1535)
					Float d2 = tmp35;		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(1535)
					Float tmp36 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1535)
					Float tmp37 = ((int)1 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1535)
					Float p = tmp37;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(1535)
					Float tmp38 = (d2 * d2);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1535)
					Float tmp39 = (Float(tmp38) / Float((int)8));		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1535)
					Float tmp40 = ((int)1 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1535)
					Float m = tmp40;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(1535)
					Float tmp41 = (p * _this->axisx);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1535)
					Float tmp42 = (dr * _this->axisy);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1535)
					Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(1535)
					Float tmp44 = m;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(1535)
					Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(1535)
					Float nx1 = tmp45;		HX_STACK_VAR(nx1,"nx1");
					HX_STACK_LINE(1535)
					Float tmp46 = (p * _this->axisy);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(1535)
					Float tmp47 = (dr * _this->axisx);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(1535)
					Float tmp48 = (tmp46 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(1535)
					Float tmp49 = m;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(1535)
					Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(1535)
					_this->axisy = tmp50;
					HX_STACK_LINE(1535)
					_this->axisx = nx1;
				}
			}
			HX_STACK_LINE(1536)
			{
				HX_STACK_LINE(1536)
				::zpp_nape::phys::ZPP_Body tmp24 = this->b2;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1536)
				::zpp_nape::phys::ZPP_Body _this = tmp24;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1536)
				Float tmp25 = (dot2 * Jx);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1536)
				Float tmp26 = (scale * cx2);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1536)
				Float tmp27 = Jy;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1536)
				Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1536)
				Float tmp29 = (tmp25 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1536)
				::zpp_nape::phys::ZPP_Body tmp30 = this->b2;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1536)
				Float tmp31 = tmp30->iinertia;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1536)
				Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1536)
				Float dr = tmp32;		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(1536)
				hx::AddEq(_this->rot,dr);
				HX_STACK_LINE(1536)
				Float tmp33 = (dr * dr);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1536)
				bool tmp34 = (tmp33 > ((Float)0.0001));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1536)
				if ((tmp34)){
					HX_STACK_LINE(1536)
					Float tmp35 = _this->rot;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1536)
					Float tmp36 = ::Math_obj::sin(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1536)
					_this->axisx = tmp36;
					HX_STACK_LINE(1536)
					Float tmp37 = _this->rot;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1536)
					Float tmp38 = ::Math_obj::cos(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1536)
					_this->axisy = tmp38;
					HX_STACK_LINE(1536)
					Dynamic();
				}
				else{
					HX_STACK_LINE(1536)
					Float tmp35 = (dr * dr);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1536)
					Float d2 = tmp35;		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(1536)
					Float tmp36 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1536)
					Float tmp37 = ((int)1 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1536)
					Float p = tmp37;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(1536)
					Float tmp38 = (d2 * d2);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1536)
					Float tmp39 = (Float(tmp38) / Float((int)8));		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1536)
					Float tmp40 = ((int)1 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1536)
					Float m = tmp40;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(1536)
					Float tmp41 = (p * _this->axisx);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1536)
					Float tmp42 = (dr * _this->axisy);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1536)
					Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(1536)
					Float tmp44 = m;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(1536)
					Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(1536)
					Float nx1 = tmp45;		HX_STACK_VAR(nx1,"nx1");
					HX_STACK_LINE(1536)
					Float tmp46 = (p * _this->axisy);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(1536)
					Float tmp47 = (dr * _this->axisx);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(1536)
					Float tmp48 = (tmp46 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(1536)
					Float tmp49 = m;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(1536)
					Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(1536)
					_this->axisy = tmp50;
					HX_STACK_LINE(1536)
					_this->axisx = nx1;
				}
			}
		}
	}
	HX_STACK_LINE(1569)
	return false;
}


Void ZPP_LineJoint_obj::draw( ::nape::util::Debug g){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_LineJoint","draw",0xd50584b1,"zpp_nape.constraint.ZPP_LineJoint.draw","zpp_nape/constraint/LineJoint.hx",1571,0x4b59f258)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
	}
return null();
}



ZPP_LineJoint_obj::ZPP_LineJoint_obj()
{
}

void ZPP_LineJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_LineJoint);
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(jointMin,"jointMin");
	HX_MARK_MEMBER_NAME(jointMax,"jointMax");
	HX_MARK_MEMBER_NAME(equal,"equal");
	HX_MARK_MEMBER_NAME(dot1,"dot1");
	HX_MARK_MEMBER_NAME(dot2,"dot2");
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
	HX_MARK_MEMBER_NAME(zip_n,"zip_n");
	HX_MARK_MEMBER_NAME(nlocalx,"nlocalx");
	HX_MARK_MEMBER_NAME(nlocaly,"nlocaly");
	HX_MARK_MEMBER_NAME(nrelx,"nrelx");
	HX_MARK_MEMBER_NAME(nrely,"nrely");
	HX_MARK_MEMBER_NAME(wrap_n,"wrap_n");
	HX_MARK_MEMBER_NAME(kMassa,"kMassa");
	HX_MARK_MEMBER_NAME(kMassb,"kMassb");
	HX_MARK_MEMBER_NAME(kMassc,"kMassc");
	HX_MARK_MEMBER_NAME(jAccx,"jAccx");
	HX_MARK_MEMBER_NAME(jAccy,"jAccy");
	HX_MARK_MEMBER_NAME(jMax,"jMax");
	HX_MARK_MEMBER_NAME(gamma,"gamma");
	HX_MARK_MEMBER_NAME(biasx,"biasx");
	HX_MARK_MEMBER_NAME(biasy,"biasy");
	HX_MARK_MEMBER_NAME(stepped,"stepped");
	::zpp_nape::constraint::ZPP_Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_LineJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(jointMin,"jointMin");
	HX_VISIT_MEMBER_NAME(jointMax,"jointMax");
	HX_VISIT_MEMBER_NAME(equal,"equal");
	HX_VISIT_MEMBER_NAME(dot1,"dot1");
	HX_VISIT_MEMBER_NAME(dot2,"dot2");
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
	HX_VISIT_MEMBER_NAME(zip_n,"zip_n");
	HX_VISIT_MEMBER_NAME(nlocalx,"nlocalx");
	HX_VISIT_MEMBER_NAME(nlocaly,"nlocaly");
	HX_VISIT_MEMBER_NAME(nrelx,"nrelx");
	HX_VISIT_MEMBER_NAME(nrely,"nrely");
	HX_VISIT_MEMBER_NAME(wrap_n,"wrap_n");
	HX_VISIT_MEMBER_NAME(kMassa,"kMassa");
	HX_VISIT_MEMBER_NAME(kMassb,"kMassb");
	HX_VISIT_MEMBER_NAME(kMassc,"kMassc");
	HX_VISIT_MEMBER_NAME(jAccx,"jAccx");
	HX_VISIT_MEMBER_NAME(jAccy,"jAccy");
	HX_VISIT_MEMBER_NAME(jMax,"jMax");
	HX_VISIT_MEMBER_NAME(gamma,"gamma");
	HX_VISIT_MEMBER_NAME(biasx,"biasx");
	HX_VISIT_MEMBER_NAME(biasy,"biasy");
	HX_VISIT_MEMBER_NAME(stepped,"stepped");
	::zpp_nape::constraint::ZPP_Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_LineJoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b1") ) { return b1; }
		if (HX_FIELD_EQ(inName,"b2") ) { return b2; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cx1") ) { return cx1; }
		if (HX_FIELD_EQ(inName,"cx2") ) { return cx2; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"dot1") ) { return dot1; }
		if (HX_FIELD_EQ(inName,"dot2") ) { return dot2; }
		if (HX_FIELD_EQ(inName,"jMax") ) { return jMax; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"equal") ) { return equal; }
		if (HX_FIELD_EQ(inName,"zip_n") ) { return zip_n; }
		if (HX_FIELD_EQ(inName,"nrelx") ) { return nrelx; }
		if (HX_FIELD_EQ(inName,"nrely") ) { return nrely; }
		if (HX_FIELD_EQ(inName,"jAccx") ) { return jAccx; }
		if (HX_FIELD_EQ(inName,"jAccy") ) { return jAccy; }
		if (HX_FIELD_EQ(inName,"gamma") ) { return gamma; }
		if (HX_FIELD_EQ(inName,"biasx") ) { return biasx; }
		if (HX_FIELD_EQ(inName,"biasy") ) { return biasy; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"a1relx") ) { return a1relx; }
		if (HX_FIELD_EQ(inName,"a1rely") ) { return a1rely; }
		if (HX_FIELD_EQ(inName,"a2relx") ) { return a2relx; }
		if (HX_FIELD_EQ(inName,"a2rely") ) { return a2rely; }
		if (HX_FIELD_EQ(inName,"wrap_n") ) { return wrap_n; }
		if (HX_FIELD_EQ(inName,"kMassa") ) { return kMassa; }
		if (HX_FIELD_EQ(inName,"kMassb") ) { return kMassb; }
		if (HX_FIELD_EQ(inName,"kMassc") ) { return kMassc; }
		if (HX_FIELD_EQ(inName,"forest") ) { return forest_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrap_a1") ) { return wrap_a1; }
		if (HX_FIELD_EQ(inName,"wrap_a2") ) { return wrap_a2; }
		if (HX_FIELD_EQ(inName,"nlocalx") ) { return nlocalx; }
		if (HX_FIELD_EQ(inName,"nlocaly") ) { return nlocaly; }
		if (HX_FIELD_EQ(inName,"setup_n") ) { return setup_n_dyn(); }
		if (HX_FIELD_EQ(inName,"stepped") ) { return stepped; }
		if (HX_FIELD_EQ(inName,"preStep") ) { return preStep_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		if (HX_FIELD_EQ(inName,"jointMin") ) { return jointMin; }
		if (HX_FIELD_EQ(inName,"jointMax") ) { return jointMax; }
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
		if (HX_FIELD_EQ(inName,"validate_n") ) { return validate_n_dyn(); }
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
		if (HX_FIELD_EQ(inName,"invalidate_n") ) { return invalidate_n_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"invalidate_a1") ) { return invalidate_a1_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_a2") ) { return invalidate_a2_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_norm") ) { return validate_norm_dyn(); }
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

Dynamic ZPP_LineJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b1") ) { b1=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b2") ) { b2=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cx1") ) { cx1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cx2") ) { cx2=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"dot1") ) { dot1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dot2") ) { dot2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jMax") ) { jMax=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"equal") ) { equal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_n") ) { zip_n=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nrelx") ) { nrelx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nrely") ) { nrely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jAccx") ) { jAccx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jAccy") ) { jAccy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gamma") ) { gamma=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"biasx") ) { biasx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"biasy") ) { biasy=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"a1relx") ) { a1relx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1rely") ) { a1rely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2relx") ) { a2relx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2rely") ) { a2rely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_n") ) { wrap_n=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassa") ) { kMassa=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassb") ) { kMassb=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassc") ) { kMassc=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrap_a1") ) { wrap_a1=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_a2") ) { wrap_a2=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nlocalx") ) { nlocalx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nlocaly") ) { nlocaly=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepped") ) { stepped=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::constraint::LineJoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jointMin") ) { jointMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jointMax") ) { jointMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1localx") ) { a1localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1localy") ) { a1localy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2localx") ) { a2localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2localy") ) { a2localy=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_LineJoint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_LineJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("jointMin","\x68","\xfa","\x25","\x55"));
	outFields->push(HX_HCSTRING("jointMax","\x7a","\xf3","\x25","\x55"));
	outFields->push(HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72"));
	outFields->push(HX_HCSTRING("dot1","\x88","\xf5","\x6d","\x42"));
	outFields->push(HX_HCSTRING("dot2","\x89","\xf5","\x6d","\x42"));
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
	outFields->push(HX_HCSTRING("zip_n","\x50","\x7c","\x9f","\x84"));
	outFields->push(HX_HCSTRING("nlocalx","\x9b","\x7b","\xf8","\x37"));
	outFields->push(HX_HCSTRING("nlocaly","\x9c","\x7b","\xf8","\x37"));
	outFields->push(HX_HCSTRING("nrelx","\x6d","\x24","\xbb","\xa1"));
	outFields->push(HX_HCSTRING("nrely","\x6e","\x24","\xbb","\xa1"));
	outFields->push(HX_HCSTRING("wrap_n","\x79","\x13","\x99","\x78"));
	outFields->push(HX_HCSTRING("kMassa","\x82","\xa0","\x7f","\x5e"));
	outFields->push(HX_HCSTRING("kMassb","\x83","\xa0","\x7f","\x5e"));
	outFields->push(HX_HCSTRING("kMassc","\x84","\xa0","\x7f","\x5e"));
	outFields->push(HX_HCSTRING("jAccx","\xa1","\xd1","\xbb","\x33"));
	outFields->push(HX_HCSTRING("jAccy","\xa2","\xd1","\xbb","\x33"));
	outFields->push(HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46"));
	outFields->push(HX_HCSTRING("gamma","\x27","\x87","\xb6","\x8e"));
	outFields->push(HX_HCSTRING("biasx","\xdf","\x3f","\xf6","\xb2"));
	outFields->push(HX_HCSTRING("biasy","\xe0","\x3f","\xf6","\xb2"));
	outFields->push(HX_HCSTRING("stepped","\x03","\x05","\x60","\x81"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::constraint::LineJoint*/ ,(int)offsetof(ZPP_LineJoint_obj,outer_zn),HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,jointMin),HX_HCSTRING("jointMin","\x68","\xfa","\x25","\x55")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,jointMax),HX_HCSTRING("jointMax","\x7a","\xf3","\x25","\x55")},
	{hx::fsBool,(int)offsetof(ZPP_LineJoint_obj,equal),HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,dot1),HX_HCSTRING("dot1","\x88","\xf5","\x6d","\x42")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,dot2),HX_HCSTRING("dot2","\x89","\xf5","\x6d","\x42")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,cx1),HX_HCSTRING("cx1","\xdc","\x87","\x4b","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,cx2),HX_HCSTRING("cx2","\xdd","\x87","\x4b","\x00")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_LineJoint_obj,b1),HX_HCSTRING("b1","\x8f","\x55","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,a1localx),HX_HCSTRING("a1localx","\x5d","\x6d","\x78","\xfb")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,a1localy),HX_HCSTRING("a1localy","\x5e","\x6d","\x78","\xfb")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,a1relx),HX_HCSTRING("a1relx","\xaf","\xc1","\xe7","\x4a")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,a1rely),HX_HCSTRING("a1rely","\xb0","\xc1","\xe7","\x4a")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_LineJoint_obj,wrap_a1),HX_HCSTRING("wrap_a1","\x45","\xeb","\x57","\x0d")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_LineJoint_obj,b2),HX_HCSTRING("b2","\x90","\x55","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,a2localx),HX_HCSTRING("a2localx","\x1e","\xe4","\x0d","\x25")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,a2localy),HX_HCSTRING("a2localy","\x1f","\xe4","\x0d","\x25")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,a2relx),HX_HCSTRING("a2relx","\x30","\x56","\x4e","\xde")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,a2rely),HX_HCSTRING("a2rely","\x31","\x56","\x4e","\xde")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_LineJoint_obj,wrap_a2),HX_HCSTRING("wrap_a2","\x46","\xeb","\x57","\x0d")},
	{hx::fsBool,(int)offsetof(ZPP_LineJoint_obj,zip_n),HX_HCSTRING("zip_n","\x50","\x7c","\x9f","\x84")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,nlocalx),HX_HCSTRING("nlocalx","\x9b","\x7b","\xf8","\x37")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,nlocaly),HX_HCSTRING("nlocaly","\x9c","\x7b","\xf8","\x37")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,nrelx),HX_HCSTRING("nrelx","\x6d","\x24","\xbb","\xa1")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,nrely),HX_HCSTRING("nrely","\x6e","\x24","\xbb","\xa1")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_LineJoint_obj,wrap_n),HX_HCSTRING("wrap_n","\x79","\x13","\x99","\x78")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,kMassa),HX_HCSTRING("kMassa","\x82","\xa0","\x7f","\x5e")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,kMassb),HX_HCSTRING("kMassb","\x83","\xa0","\x7f","\x5e")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,kMassc),HX_HCSTRING("kMassc","\x84","\xa0","\x7f","\x5e")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,jAccx),HX_HCSTRING("jAccx","\xa1","\xd1","\xbb","\x33")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,jAccy),HX_HCSTRING("jAccy","\xa2","\xd1","\xbb","\x33")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,jMax),HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,gamma),HX_HCSTRING("gamma","\x27","\x87","\xb6","\x8e")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,biasx),HX_HCSTRING("biasx","\xdf","\x3f","\xf6","\xb2")},
	{hx::fsFloat,(int)offsetof(ZPP_LineJoint_obj,biasy),HX_HCSTRING("biasy","\xe0","\x3f","\xf6","\xb2")},
	{hx::fsBool,(int)offsetof(ZPP_LineJoint_obj,stepped),HX_HCSTRING("stepped","\x03","\x05","\x60","\x81")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("jointMin","\x68","\xfa","\x25","\x55"),
	HX_HCSTRING("jointMax","\x7a","\xf3","\x25","\x55"),
	HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72"),
	HX_HCSTRING("dot1","\x88","\xf5","\x6d","\x42"),
	HX_HCSTRING("dot2","\x89","\xf5","\x6d","\x42"),
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
	HX_HCSTRING("zip_n","\x50","\x7c","\x9f","\x84"),
	HX_HCSTRING("nlocalx","\x9b","\x7b","\xf8","\x37"),
	HX_HCSTRING("nlocaly","\x9c","\x7b","\xf8","\x37"),
	HX_HCSTRING("nrelx","\x6d","\x24","\xbb","\xa1"),
	HX_HCSTRING("nrely","\x6e","\x24","\xbb","\xa1"),
	HX_HCSTRING("validate_n","\x45","\xf5","\xe9","\xe1"),
	HX_HCSTRING("invalidate_n","\x6a","\x01","\x00","\x39"),
	HX_HCSTRING("setup_n","\xec","\x5a","\x56","\x28"),
	HX_HCSTRING("wrap_n","\x79","\x13","\x99","\x78"),
	HX_HCSTRING("validate_norm","\xc5","\x81","\xed","\x94"),
	HX_HCSTRING("kMassa","\x82","\xa0","\x7f","\x5e"),
	HX_HCSTRING("kMassb","\x83","\xa0","\x7f","\x5e"),
	HX_HCSTRING("kMassc","\x84","\xa0","\x7f","\x5e"),
	HX_HCSTRING("jAccx","\xa1","\xd1","\xbb","\x33"),
	HX_HCSTRING("jAccy","\xa2","\xd1","\xbb","\x33"),
	HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46"),
	HX_HCSTRING("gamma","\x27","\x87","\xb6","\x8e"),
	HX_HCSTRING("biasx","\xdf","\x3f","\xf6","\xb2"),
	HX_HCSTRING("biasy","\xe0","\x3f","\xf6","\xb2"),
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
	HX_MARK_MEMBER_NAME(ZPP_LineJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_LineJoint_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_LineJoint_obj::__mClass;

void ZPP_LineJoint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.constraint.ZPP_LineJoint","\xe1","\xc6","\x37","\x22");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_LineJoint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_LineJoint_obj >;
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
