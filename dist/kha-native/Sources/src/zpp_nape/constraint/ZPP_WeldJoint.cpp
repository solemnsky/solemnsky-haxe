#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_PivotJoint
#include <nape/constraint/PivotJoint.h>
#endif
#ifndef INCLUDED_nape_constraint_WeldJoint
#include <nape/constraint/WeldJoint.h>
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
#ifndef INCLUDED_zpp_nape_constraint_ZPP_PivotJoint
#include <zpp_nape/constraint/ZPP_PivotJoint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_WeldJoint
#include <zpp_nape/constraint/ZPP_WeldJoint.h>
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

Void ZPP_WeldJoint_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.constraint.ZPP_WeldJoint","new",0x42b74c01,"zpp_nape.constraint.ZPP_WeldJoint.new","zpp_nape/constraint/WeldJoint.hx",174,0xc793a26a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(330)
	this->stepped = false;
	HX_STACK_LINE(329)
	this->biasz = ((Float)0.0);
	HX_STACK_LINE(328)
	this->biasy = ((Float)0.0);
	HX_STACK_LINE(327)
	this->biasx = ((Float)0.0);
	HX_STACK_LINE(326)
	this->gamma = ((Float)0.0);
	HX_STACK_LINE(325)
	this->jMax = ((Float)0.0);
	HX_STACK_LINE(324)
	this->jAccz = ((Float)0.0);
	HX_STACK_LINE(323)
	this->jAccy = ((Float)0.0);
	HX_STACK_LINE(322)
	this->jAccx = ((Float)0.0);
	HX_STACK_LINE(321)
	this->kMassf = ((Float)0.0);
	HX_STACK_LINE(320)
	this->kMasse = ((Float)0.0);
	HX_STACK_LINE(319)
	this->kMassc = ((Float)0.0);
	HX_STACK_LINE(318)
	this->kMassd = ((Float)0.0);
	HX_STACK_LINE(317)
	this->kMassb = ((Float)0.0);
	HX_STACK_LINE(316)
	this->kMassa = ((Float)0.0);
	HX_STACK_LINE(315)
	this->phase = ((Float)0.0);
	HX_STACK_LINE(314)
	this->wrap_a2 = null();
	HX_STACK_LINE(261)
	this->a2rely = ((Float)0.0);
	HX_STACK_LINE(260)
	this->a2relx = ((Float)0.0);
	HX_STACK_LINE(259)
	this->a2localy = ((Float)0.0);
	HX_STACK_LINE(258)
	this->a2localx = ((Float)0.0);
	HX_STACK_LINE(257)
	this->b2 = null();
	HX_STACK_LINE(256)
	this->wrap_a1 = null();
	HX_STACK_LINE(203)
	this->a1rely = ((Float)0.0);
	HX_STACK_LINE(202)
	this->a1relx = ((Float)0.0);
	HX_STACK_LINE(201)
	this->a1localy = ((Float)0.0);
	HX_STACK_LINE(200)
	this->a1localx = ((Float)0.0);
	HX_STACK_LINE(199)
	this->b1 = null();
	HX_STACK_LINE(175)
	this->outer_zn = null();
	HX_STACK_LINE(379)
	super::__construct();
	HX_STACK_LINE(380)
	this->phase = (int)0;
	HX_STACK_LINE(381)
	{
		HX_STACK_LINE(382)
		{
			HX_STACK_LINE(383)
			this->jAccx = (int)0;
			HX_STACK_LINE(384)
			this->jAccy = (int)0;
			HX_STACK_LINE(393)
			{
			}
		}
		HX_STACK_LINE(402)
		this->jAccz = (int)0;
	}
	HX_STACK_LINE(404)
	Float tmp = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(404)
	this->jMax = tmp;
	HX_STACK_LINE(405)
	this->stepped = false;
	HX_STACK_LINE(406)
	{
		HX_STACK_LINE(407)
		{
			HX_STACK_LINE(408)
			this->a1localx = (int)0;
			HX_STACK_LINE(409)
			this->a1localy = (int)0;
			HX_STACK_LINE(418)
			{
			}
		}
		HX_STACK_LINE(427)
		{
			HX_STACK_LINE(428)
			this->a1relx = (int)0;
			HX_STACK_LINE(429)
			this->a1rely = (int)0;
			HX_STACK_LINE(438)
			{
			}
		}
	}
	HX_STACK_LINE(448)
	{
		HX_STACK_LINE(449)
		{
			HX_STACK_LINE(450)
			this->a2localx = (int)0;
			HX_STACK_LINE(451)
			this->a2localy = (int)0;
			HX_STACK_LINE(460)
			{
			}
		}
		HX_STACK_LINE(469)
		{
			HX_STACK_LINE(470)
			this->a2relx = (int)0;
			HX_STACK_LINE(471)
			this->a2rely = (int)0;
			HX_STACK_LINE(480)
			{
			}
		}
	}
}
;
	return null();
}

//ZPP_WeldJoint_obj::~ZPP_WeldJoint_obj() { }

Dynamic ZPP_WeldJoint_obj::__CreateEmpty() { return  new ZPP_WeldJoint_obj; }
hx::ObjectPtr< ZPP_WeldJoint_obj > ZPP_WeldJoint_obj::__new()
{  hx::ObjectPtr< ZPP_WeldJoint_obj > _result_ = new ZPP_WeldJoint_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_WeldJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_WeldJoint_obj > _result_ = new ZPP_WeldJoint_obj();
	_result_->__construct();
	return _result_;}

::nape::geom::Vec3 ZPP_WeldJoint_obj::bodyImpulse( ::zpp_nape::phys::ZPP_Body b){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_WeldJoint","bodyImpulse",0xe44bfad4,"zpp_nape.constraint.ZPP_WeldJoint.bodyImpulse","zpp_nape/constraint/WeldJoint.hx",176,0xc793a26a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(177)
	bool tmp = this->stepped;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	if ((tmp)){
		HX_STACK_LINE(178)
		::zpp_nape::phys::ZPP_Body tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(178)
		bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(178)
		if ((tmp3)){
			HX_STACK_LINE(178)
			Float tmp4 = this->jAccx;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(178)
			Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(178)
			Float tmp6 = this->jAccy;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(178)
			Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(178)
			Float tmp8 = this->jAccy;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(178)
			Float tmp9 = this->a1relx;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(178)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(178)
			Float tmp11 = this->jAccx;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(178)
			Float tmp12 = this->a1rely;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(178)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(178)
			Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(178)
			Float tmp15 = this->jAccz;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(178)
			Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(178)
			Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(178)
			::nape::geom::Vec3 tmp18 = ::nape::geom::Vec3_obj::get(tmp5,tmp7,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(178)
			return tmp18;
		}
		else{
			HX_STACK_LINE(179)
			Float tmp4 = this->jAccx;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(179)
			Float tmp5 = this->jAccy;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(179)
			Float tmp6 = this->jAccy;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(179)
			Float tmp7 = this->a2relx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(179)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(179)
			Float tmp9 = this->jAccx;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(179)
			Float tmp10 = this->a2rely;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(179)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(179)
			Float tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(179)
			Float tmp13 = this->jAccz;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(179)
			Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(179)
			::nape::geom::Vec3 tmp15 = ::nape::geom::Vec3_obj::get(tmp4,tmp5,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(179)
			return tmp15;
		}
	}
	else{
		HX_STACK_LINE(181)
		::nape::geom::Vec3 tmp1 = ::nape::geom::Vec3_obj::get((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(181)
		return tmp1;
	}
	HX_STACK_LINE(177)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_WeldJoint_obj,bodyImpulse,return )

Void ZPP_WeldJoint_obj::activeBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_WeldJoint","activeBodies",0x4aa2f225,"zpp_nape.constraint.ZPP_WeldJoint.activeBodies","zpp_nape/constraint/WeldJoint.hx",183,0xc793a26a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(184)
		{
			HX_STACK_LINE(185)
			::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(185)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(185)
			if ((tmp1)){
				HX_STACK_LINE(185)
				::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(185)
				tmp2->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(187)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		::zpp_nape::phys::ZPP_Body tmp1 = this->b1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		if ((tmp2)){
			HX_STACK_LINE(188)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(188)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(188)
			if ((tmp4)){
				HX_STACK_LINE(188)
				::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(188)
				tmp5->constraints->add(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_WeldJoint_obj::inactiveBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_WeldJoint","inactiveBodies",0x4251df4a,"zpp_nape.constraint.ZPP_WeldJoint.inactiveBodies","zpp_nape/constraint/WeldJoint.hx",191,0xc793a26a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(192)
		{
			HX_STACK_LINE(193)
			::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(193)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(193)
			if ((tmp1)){
				HX_STACK_LINE(193)
				::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(193)
				tmp2->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(195)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(195)
		::zpp_nape::phys::ZPP_Body tmp1 = this->b1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(195)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(195)
		if ((tmp2)){
			HX_STACK_LINE(196)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(196)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(196)
			if ((tmp4)){
				HX_STACK_LINE(196)
				::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(196)
				tmp5->constraints->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


Void ZPP_WeldJoint_obj::validate_a1( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_WeldJoint","validate_a1",0x4f76209a,"zpp_nape.constraint.ZPP_WeldJoint.validate_a1","zpp_nape/constraint/WeldJoint.hx",205,0xc793a26a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(206)
		Float tmp = this->a1localx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		::nape::geom::Vec2 tmp1 = this->wrap_a1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		tmp1->zpp_inner->x = tmp;
		HX_STACK_LINE(207)
		Float tmp2 = this->a1localy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(207)
		::nape::geom::Vec2 tmp3 = this->wrap_a1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(207)
		tmp3->zpp_inner->y = tmp2;
		HX_STACK_LINE(216)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_WeldJoint_obj,validate_a1,(void))

Void ZPP_WeldJoint_obj::invalidate_a1( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_WeldJoint","invalidate_a1",0xcc8ddf15,"zpp_nape.constraint.ZPP_WeldJoint.invalidate_a1","zpp_nape/constraint/WeldJoint.hx",226,0xc793a26a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(227)
		::String tmp = HX_HCSTRING("Constraint::a1","\x6d","\x3e","\xe8","\x0d");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		this->immutable_midstep(tmp);
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(229)
			this->a1localx = x->x;
			HX_STACK_LINE(230)
			this->a1localy = x->y;
			HX_STACK_LINE(239)
			{
			}
		}
		HX_STACK_LINE(248)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_WeldJoint_obj,invalidate_a1,(void))

Void ZPP_WeldJoint_obj::setup_a1( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_WeldJoint","setup_a1",0x9ecce531,"zpp_nape.constraint.ZPP_WeldJoint.setup_a1","zpp_nape/constraint/WeldJoint.hx",250,0xc793a26a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(251)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(251)
		{
			HX_STACK_LINE(251)
			Float tmp1 = this->a1localx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(251)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(251)
			Float tmp2 = this->a1localy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(251)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(251)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(251)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(251)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(251)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(251)
			if ((tmp4)){
				HX_STACK_LINE(251)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(251)
				tmp5 = true;
			}
			HX_STACK_LINE(251)
			if ((tmp5)){
				HX_STACK_LINE(251)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(251)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(251)
			{
				HX_STACK_LINE(251)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(251)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(251)
				if ((tmp7)){
					HX_STACK_LINE(251)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(251)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(251)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(251)
					ret = tmp8;
					HX_STACK_LINE(251)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(251)
					ret->zpp_pool = null();
					HX_STACK_LINE(251)
					ret->zpp_disp = false;
					HX_STACK_LINE(251)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(251)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(251)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(251)
					if ((tmp11)){
						HX_STACK_LINE(251)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(251)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(251)
			if ((tmp6)){
				HX_STACK_LINE(251)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(251)
				{
					HX_STACK_LINE(251)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(251)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(251)
					{
						HX_STACK_LINE(251)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(251)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(251)
						if ((tmp9)){
							HX_STACK_LINE(251)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(251)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(251)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(251)
							ret1 = tmp10;
							HX_STACK_LINE(251)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(251)
							ret1->next = null();
						}
						HX_STACK_LINE(251)
						ret1->weak = false;
					}
					HX_STACK_LINE(251)
					ret1->_immutable = immutable;
					HX_STACK_LINE(251)
					{
						HX_STACK_LINE(251)
						ret1->x = x;
						HX_STACK_LINE(251)
						ret1->y = y;
						HX_STACK_LINE(251)
						{
						}
					}
					HX_STACK_LINE(251)
					tmp7 = ret1;
				}
				HX_STACK_LINE(251)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(251)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(251)
				{
					HX_STACK_LINE(251)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(251)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(251)
					if ((tmp7)){
						HX_STACK_LINE(251)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(251)
						tmp8 = false;
					}
					HX_STACK_LINE(251)
					if ((tmp8)){
						HX_STACK_LINE(251)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(251)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(251)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(251)
				{
					HX_STACK_LINE(251)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(251)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(251)
					if ((tmp7)){
						HX_STACK_LINE(251)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(251)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(251)
					if ((tmp8)){
						HX_STACK_LINE(251)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(251)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(251)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(251)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(251)
				if ((tmp8)){
					HX_STACK_LINE(251)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(251)
					tmp9 = true;
				}
				HX_STACK_LINE(251)
				if ((tmp9)){
					HX_STACK_LINE(251)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(251)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(251)
				{
					HX_STACK_LINE(251)
					{
						HX_STACK_LINE(251)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(251)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(251)
						if ((tmp11)){
							HX_STACK_LINE(251)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(251)
							tmp12 = false;
						}
						HX_STACK_LINE(251)
						if ((tmp12)){
							HX_STACK_LINE(251)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(251)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(251)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(251)
					{
						HX_STACK_LINE(251)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(251)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(251)
						if ((tmp11)){
							HX_STACK_LINE(251)
							_this->_validate();
						}
					}
					HX_STACK_LINE(251)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(251)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(251)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(251)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(251)
				if ((tmp12)){
					HX_STACK_LINE(251)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(251)
					{
						HX_STACK_LINE(251)
						{
							HX_STACK_LINE(251)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(251)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(251)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(251)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(251)
							if ((tmp18)){
								HX_STACK_LINE(251)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(251)
								tmp17 = false;
							}
							HX_STACK_LINE(251)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(251)
							if ((tmp19)){
								HX_STACK_LINE(251)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(251)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(251)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(251)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(251)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(251)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(251)
						{
							HX_STACK_LINE(251)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(251)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(251)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(251)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(251)
							if ((tmp17)){
								HX_STACK_LINE(251)
								_this->_validate();
							}
						}
						HX_STACK_LINE(251)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(251)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(251)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(251)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(251)
					tmp13 = false;
				}
				HX_STACK_LINE(251)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(251)
				if ((tmp14)){
					HX_STACK_LINE(251)
					{
						HX_STACK_LINE(251)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(251)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(251)
						{
						}
					}
					HX_STACK_LINE(251)
					{
						HX_STACK_LINE(251)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(251)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(251)
						if ((tmp15)){
							HX_STACK_LINE(251)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(251)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(251)
				ret;
			}
			HX_STACK_LINE(251)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(251)
			tmp = ret;
		}
		HX_STACK_LINE(251)
		this->wrap_a1 = tmp;
		HX_STACK_LINE(252)
		::nape::geom::Vec2 tmp1 = this->wrap_a1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(252)
		tmp1->zpp_inner->_inuse = true;
		HX_STACK_LINE(253)
		Dynamic tmp2 = this->validate_a1_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(253)
		::nape::geom::Vec2 tmp3 = this->wrap_a1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(253)
		tmp3->zpp_inner->_validate = tmp2;
		HX_STACK_LINE(254)
		Dynamic tmp4 = this->invalidate_a1_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(254)
		::nape::geom::Vec2 tmp5 = this->wrap_a1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(254)
		tmp5->zpp_inner->_invalidate = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_WeldJoint_obj,setup_a1,(void))

Void ZPP_WeldJoint_obj::validate_a2( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_WeldJoint","validate_a2",0x4f76209b,"zpp_nape.constraint.ZPP_WeldJoint.validate_a2","zpp_nape/constraint/WeldJoint.hx",263,0xc793a26a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(264)
		Float tmp = this->a2localx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(264)
		::nape::geom::Vec2 tmp1 = this->wrap_a2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(264)
		tmp1->zpp_inner->x = tmp;
		HX_STACK_LINE(265)
		Float tmp2 = this->a2localy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(265)
		::nape::geom::Vec2 tmp3 = this->wrap_a2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(265)
		tmp3->zpp_inner->y = tmp2;
		HX_STACK_LINE(274)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_WeldJoint_obj,validate_a2,(void))

Void ZPP_WeldJoint_obj::invalidate_a2( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_WeldJoint","invalidate_a2",0xcc8ddf16,"zpp_nape.constraint.ZPP_WeldJoint.invalidate_a2","zpp_nape/constraint/WeldJoint.hx",284,0xc793a26a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(285)
		::String tmp = HX_HCSTRING("Constraint::a2","\x6e","\x3e","\xe8","\x0d");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(285)
		this->immutable_midstep(tmp);
		HX_STACK_LINE(286)
		{
			HX_STACK_LINE(287)
			this->a2localx = x->x;
			HX_STACK_LINE(288)
			this->a2localy = x->y;
			HX_STACK_LINE(297)
			{
			}
		}
		HX_STACK_LINE(306)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_WeldJoint_obj,invalidate_a2,(void))

Void ZPP_WeldJoint_obj::setup_a2( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_WeldJoint","setup_a2",0x9ecce532,"zpp_nape.constraint.ZPP_WeldJoint.setup_a2","zpp_nape/constraint/WeldJoint.hx",308,0xc793a26a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(309)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			Float tmp1 = this->a2localx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(309)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(309)
			Float tmp2 = this->a2localy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(309)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(309)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(309)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(309)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(309)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(309)
			if ((tmp4)){
				HX_STACK_LINE(309)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(309)
				tmp5 = true;
			}
			HX_STACK_LINE(309)
			if ((tmp5)){
				HX_STACK_LINE(309)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(309)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(309)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(309)
				if ((tmp7)){
					HX_STACK_LINE(309)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(309)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(309)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(309)
					ret = tmp8;
					HX_STACK_LINE(309)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(309)
					ret->zpp_pool = null();
					HX_STACK_LINE(309)
					ret->zpp_disp = false;
					HX_STACK_LINE(309)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(309)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(309)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(309)
					if ((tmp11)){
						HX_STACK_LINE(309)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(309)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(309)
			if ((tmp6)){
				HX_STACK_LINE(309)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(309)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(309)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(309)
						if ((tmp9)){
							HX_STACK_LINE(309)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(309)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(309)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(309)
							ret1 = tmp10;
							HX_STACK_LINE(309)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(309)
							ret1->next = null();
						}
						HX_STACK_LINE(309)
						ret1->weak = false;
					}
					HX_STACK_LINE(309)
					ret1->_immutable = immutable;
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						ret1->x = x;
						HX_STACK_LINE(309)
						ret1->y = y;
						HX_STACK_LINE(309)
						{
						}
					}
					HX_STACK_LINE(309)
					tmp7 = ret1;
				}
				HX_STACK_LINE(309)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(309)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(309)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(309)
					if ((tmp7)){
						HX_STACK_LINE(309)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(309)
						tmp8 = false;
					}
					HX_STACK_LINE(309)
					if ((tmp8)){
						HX_STACK_LINE(309)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(309)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(309)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(309)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(309)
					if ((tmp7)){
						HX_STACK_LINE(309)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(309)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(309)
					if ((tmp8)){
						HX_STACK_LINE(309)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(309)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(309)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(309)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(309)
				if ((tmp8)){
					HX_STACK_LINE(309)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(309)
					tmp9 = true;
				}
				HX_STACK_LINE(309)
				if ((tmp9)){
					HX_STACK_LINE(309)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(309)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(309)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(309)
						if ((tmp11)){
							HX_STACK_LINE(309)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(309)
							tmp12 = false;
						}
						HX_STACK_LINE(309)
						if ((tmp12)){
							HX_STACK_LINE(309)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(309)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(309)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(309)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(309)
						if ((tmp11)){
							HX_STACK_LINE(309)
							_this->_validate();
						}
					}
					HX_STACK_LINE(309)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(309)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(309)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(309)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(309)
				if ((tmp12)){
					HX_STACK_LINE(309)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						{
							HX_STACK_LINE(309)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(309)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(309)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(309)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(309)
							if ((tmp18)){
								HX_STACK_LINE(309)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(309)
								tmp17 = false;
							}
							HX_STACK_LINE(309)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(309)
							if ((tmp19)){
								HX_STACK_LINE(309)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(309)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(309)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(309)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(309)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(309)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(309)
						{
							HX_STACK_LINE(309)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(309)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(309)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(309)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(309)
							if ((tmp17)){
								HX_STACK_LINE(309)
								_this->_validate();
							}
						}
						HX_STACK_LINE(309)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(309)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(309)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(309)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(309)
					tmp13 = false;
				}
				HX_STACK_LINE(309)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(309)
				if ((tmp14)){
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(309)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(309)
						{
						}
					}
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(309)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(309)
						if ((tmp15)){
							HX_STACK_LINE(309)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(309)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(309)
				ret;
			}
			HX_STACK_LINE(309)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(309)
			tmp = ret;
		}
		HX_STACK_LINE(309)
		this->wrap_a2 = tmp;
		HX_STACK_LINE(310)
		::nape::geom::Vec2 tmp1 = this->wrap_a2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(310)
		tmp1->zpp_inner->_inuse = true;
		HX_STACK_LINE(311)
		Dynamic tmp2 = this->validate_a2_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(311)
		::nape::geom::Vec2 tmp3 = this->wrap_a2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(311)
		tmp3->zpp_inner->_validate = tmp2;
		HX_STACK_LINE(312)
		Dynamic tmp4 = this->invalidate_a2_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(312)
		::nape::geom::Vec2 tmp5 = this->wrap_a2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(312)
		tmp5->zpp_inner->_invalidate = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_WeldJoint_obj,setup_a2,(void))

::nape::constraint::Constraint ZPP_WeldJoint_obj::copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_WeldJoint","copy",0x166d6cf4,"zpp_nape.constraint.ZPP_WeldJoint.copy","zpp_nape/constraint/WeldJoint.hx",331,0xc793a26a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dict,"dict")
	HX_STACK_ARG(todo,"todo")
	HX_STACK_LINE(332)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(332)
	{
		HX_STACK_LINE(332)
		::nape::constraint::WeldJoint tmp1 = this->outer_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(332)
		::nape::constraint::WeldJoint _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(332)
		::nape::geom::Vec2 tmp2 = _this->zpp_inner_zn->wrap_a1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(332)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(332)
		if ((tmp3)){
			HX_STACK_LINE(332)
			_this->zpp_inner_zn->setup_a1();
		}
		HX_STACK_LINE(332)
		tmp = _this->zpp_inner_zn->wrap_a1;
	}
	HX_STACK_LINE(332)
	::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(332)
	{
		HX_STACK_LINE(332)
		::nape::constraint::WeldJoint tmp2 = this->outer_zn;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(332)
		::nape::constraint::WeldJoint _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(332)
		::nape::geom::Vec2 tmp3 = _this->zpp_inner_zn->wrap_a2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(332)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(332)
		if ((tmp4)){
			HX_STACK_LINE(332)
			_this->zpp_inner_zn->setup_a2();
		}
		HX_STACK_LINE(332)
		tmp1 = _this->zpp_inner_zn->wrap_a2;
	}
	HX_STACK_LINE(332)
	::nape::constraint::PivotJoint tmp2 = ::nape::constraint::PivotJoint_obj::__new(null(),null(),tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(332)
	::nape::constraint::PivotJoint ret = tmp2;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(333)
	::nape::constraint::PivotJoint tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(333)
	this->copyto(tmp3);
	HX_STACK_LINE(334)
	{
		HX_STACK_LINE(335)
		bool tmp4 = (dict != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(335)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(335)
		if ((tmp4)){
			HX_STACK_LINE(335)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(335)
			::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(335)
			tmp5 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(335)
			tmp5 = false;
		}
		HX_STACK_LINE(335)
		if ((tmp5)){
			HX_STACK_LINE(344)
			::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(345)
			{
				HX_STACK_LINE(345)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(345)
				while((true)){
					HX_STACK_LINE(345)
					bool tmp6 = (_g < dict->length);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(345)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(345)
					if ((tmp7)){
						HX_STACK_LINE(345)
						break;
					}
					HX_STACK_LINE(345)
					::zpp_nape::constraint::ZPP_CopyHelper tmp8 = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(345)
					::zpp_nape::constraint::ZPP_CopyHelper idc = tmp8;		HX_STACK_VAR(idc,"idc");
					HX_STACK_LINE(345)
					++(_g);
					HX_STACK_LINE(346)
					int tmp9 = idc->id;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(346)
					::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(346)
					int tmp11 = tmp10->id;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(346)
					bool tmp12 = (tmp9 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(346)
					if ((tmp12)){
						HX_STACK_LINE(347)
						b = idc->bc;
						HX_STACK_LINE(348)
						break;
					}
				}
			}
			HX_STACK_LINE(351)
			bool tmp6 = (b != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(351)
			if ((tmp6)){
				HX_STACK_LINE(351)
				ret->zpp_inner_zn->b1 = b->zpp_inner;
			}
			else{
				HX_STACK_LINE(352)
				::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(352)
				int tmp8 = tmp7->id;		HX_STACK_VAR(tmp8,"tmp8");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::nape::constraint::PivotJoint,ret)
				int __ArgCount() const { return 1; }
				Void run(::nape::phys::Body b1){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","zpp_nape/constraint/WeldJoint.hx",352,0xc793a26a)
					HX_STACK_ARG(b1,"b1")
					{
						HX_STACK_LINE(352)
						ret->zpp_inner_zn->b1 = b1->zpp_inner;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(352)
				::zpp_nape::constraint::ZPP_CopyHelper tmp9 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(tmp8, Dynamic(new _Function_4_1(ret)));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(352)
				todo->push(tmp9);
			}
		}
	}
	HX_STACK_LINE(355)
	{
		HX_STACK_LINE(356)
		bool tmp4 = (dict != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(356)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(356)
		if ((tmp4)){
			HX_STACK_LINE(356)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(356)
			::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(356)
			tmp5 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(356)
			tmp5 = false;
		}
		HX_STACK_LINE(356)
		if ((tmp5)){
			HX_STACK_LINE(365)
			::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(366)
			{
				HX_STACK_LINE(366)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(366)
				while((true)){
					HX_STACK_LINE(366)
					bool tmp6 = (_g < dict->length);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(366)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(366)
					if ((tmp7)){
						HX_STACK_LINE(366)
						break;
					}
					HX_STACK_LINE(366)
					::zpp_nape::constraint::ZPP_CopyHelper tmp8 = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(366)
					::zpp_nape::constraint::ZPP_CopyHelper idc = tmp8;		HX_STACK_VAR(idc,"idc");
					HX_STACK_LINE(366)
					++(_g);
					HX_STACK_LINE(367)
					int tmp9 = idc->id;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(367)
					::zpp_nape::phys::ZPP_Body tmp10 = this->b2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(367)
					int tmp11 = tmp10->id;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(367)
					bool tmp12 = (tmp9 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(367)
					if ((tmp12)){
						HX_STACK_LINE(368)
						b = idc->bc;
						HX_STACK_LINE(369)
						break;
					}
				}
			}
			HX_STACK_LINE(372)
			bool tmp6 = (b != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(372)
			if ((tmp6)){
				HX_STACK_LINE(372)
				ret->zpp_inner_zn->b2 = b->zpp_inner;
			}
			else{
				HX_STACK_LINE(373)
				::zpp_nape::phys::ZPP_Body tmp7 = this->b2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(373)
				int tmp8 = tmp7->id;		HX_STACK_VAR(tmp8,"tmp8");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::nape::constraint::PivotJoint,ret)
				int __ArgCount() const { return 1; }
				Void run(::nape::phys::Body b1){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","zpp_nape/constraint/WeldJoint.hx",373,0xc793a26a)
					HX_STACK_ARG(b1,"b1")
					{
						HX_STACK_LINE(373)
						ret->zpp_inner_zn->b2 = b1->zpp_inner;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(373)
				::zpp_nape::constraint::ZPP_CopyHelper tmp9 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(tmp8, Dynamic(new _Function_4_1(ret)));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(373)
				todo->push(tmp9);
			}
		}
	}
	HX_STACK_LINE(376)
	::nape::constraint::PivotJoint tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(376)
	return tmp4;
}


Void ZPP_WeldJoint_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_WeldJoint","validate",0x80778d55,"zpp_nape.constraint.ZPP_WeldJoint.validate","zpp_nape/constraint/WeldJoint.hx",491,0xc793a26a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(492)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(492)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(492)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(492)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(492)
		if ((tmp2)){
			HX_STACK_LINE(492)
			::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(492)
			::zpp_nape::phys::ZPP_Body tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(492)
			tmp3 = (tmp5 == null());
		}
		else{
			HX_STACK_LINE(492)
			tmp3 = true;
		}
		HX_STACK_LINE(492)
		if ((tmp3)){
			HX_STACK_LINE(492)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: AngleJoint cannot be simulated null bodies","\xfe","\x18","\x41","\x78"));
		}
		HX_STACK_LINE(493)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(493)
		::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(493)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(493)
		if ((tmp6)){
			HX_STACK_LINE(493)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: WeldJoint cannot be simulated with body1 == body2","\x31","\xe8","\x4a","\x66"));
		}
		HX_STACK_LINE(494)
		::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(494)
		::zpp_nape::space::ZPP_Space tmp8 = tmp7->space;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(494)
		::zpp_nape::space::ZPP_Space tmp9 = this->space;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(494)
		bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(494)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(494)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(494)
		if ((tmp11)){
			HX_STACK_LINE(494)
			::zpp_nape::phys::ZPP_Body tmp13 = this->b2;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(494)
			::zpp_nape::phys::ZPP_Body tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(494)
			::zpp_nape::space::ZPP_Space tmp15 = tmp14->space;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(494)
			::zpp_nape::space::ZPP_Space tmp16 = this->space;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(494)
			::zpp_nape::space::ZPP_Space tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(494)
			tmp12 = (tmp15 != tmp17);
		}
		else{
			HX_STACK_LINE(494)
			tmp12 = true;
		}
		HX_STACK_LINE(494)
		if ((tmp12)){
			HX_STACK_LINE(494)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraints must have each body within the same space to which the constraint has been assigned","\xe8","\x8c","\x93","\x57"));
		}
		HX_STACK_LINE(495)
		::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(495)
		int tmp14 = tmp13->type;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(495)
		int tmp15 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(495)
		bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(495)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(495)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(495)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(495)
		if ((tmp18)){
			HX_STACK_LINE(495)
			::zpp_nape::phys::ZPP_Body tmp20 = this->b2;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(495)
			::zpp_nape::phys::ZPP_Body tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(495)
			int tmp22 = tmp21->type;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(495)
			int tmp23 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(495)
			int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(495)
			bool tmp25 = (tmp22 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(495)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(495)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(495)
			tmp19 = !(tmp27);
		}
		else{
			HX_STACK_LINE(495)
			tmp19 = false;
		}
		HX_STACK_LINE(495)
		if ((tmp19)){
			HX_STACK_LINE(495)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Constraints cannot have both bodies non-dynamic","\xcb","\xb3","\x6c","\xeb"));
		}
	}
return null();
}


Void ZPP_WeldJoint_obj::wake_connected( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_WeldJoint","wake_connected",0xf36a25ad,"zpp_nape.constraint.ZPP_WeldJoint.wake_connected","zpp_nape/constraint/WeldJoint.hx",497,0xc793a26a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(498)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(498)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(498)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(498)
		if ((tmp1)){
			HX_STACK_LINE(498)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(498)
			::zpp_nape::phys::ZPP_Body tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(498)
			int tmp5 = tmp4->type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(498)
			int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(498)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(498)
			tmp2 = (tmp5 == tmp7);
		}
		else{
			HX_STACK_LINE(498)
			tmp2 = false;
		}
		HX_STACK_LINE(498)
		if ((tmp2)){
			HX_STACK_LINE(498)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(498)
			tmp3->wake();
		}
		HX_STACK_LINE(499)
		::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(499)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(499)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(499)
		if ((tmp4)){
			HX_STACK_LINE(499)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(499)
			::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(499)
			int tmp8 = tmp7->type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(499)
			int tmp9 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(499)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(499)
			tmp5 = (tmp8 == tmp10);
		}
		else{
			HX_STACK_LINE(499)
			tmp5 = false;
		}
		HX_STACK_LINE(499)
		if ((tmp5)){
			HX_STACK_LINE(499)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(499)
			tmp6->wake();
		}
	}
return null();
}


Void ZPP_WeldJoint_obj::forest( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_WeldJoint","forest",0xd2af4bdc,"zpp_nape.constraint.ZPP_WeldJoint.forest","zpp_nape/constraint/WeldJoint.hx",501,0xc793a26a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(502)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(502)
		int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(502)
		int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(502)
		bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(502)
		if ((tmp3)){
			HX_STACK_LINE(503)
			::zpp_nape::space::ZPP_Component tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(503)
			{
				HX_STACK_LINE(504)
				::zpp_nape::phys::ZPP_Body tmp5 = this->b1;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(504)
				::zpp_nape::space::ZPP_Component tmp6 = tmp5->component;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(504)
				::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(504)
				::zpp_nape::space::ZPP_Component tmp8 = tmp7->component->parent;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(504)
				bool tmp9 = (tmp6 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(504)
				if ((tmp9)){
					HX_STACK_LINE(504)
					::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(504)
					tmp4 = tmp10->component;
				}
				else{
					HX_STACK_LINE(506)
					::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(506)
					::zpp_nape::space::ZPP_Component obj = tmp10->component;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(507)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(508)
					while((true)){
						HX_STACK_LINE(508)
						bool tmp11 = (obj != obj->parent);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(508)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(508)
						if ((tmp12)){
							HX_STACK_LINE(508)
							break;
						}
						HX_STACK_LINE(509)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(510)
						obj->parent = stack;
						HX_STACK_LINE(511)
						stack = obj;
						HX_STACK_LINE(512)
						obj = nxt;
					}
					HX_STACK_LINE(514)
					while((true)){
						HX_STACK_LINE(514)
						bool tmp11 = (stack != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(514)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(514)
						if ((tmp12)){
							HX_STACK_LINE(514)
							break;
						}
						HX_STACK_LINE(515)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(516)
						stack->parent = obj;
						HX_STACK_LINE(517)
						stack = nxt;
					}
					HX_STACK_LINE(519)
					tmp4 = obj;
				}
			}
			HX_STACK_LINE(503)
			::zpp_nape::space::ZPP_Component xr = tmp4;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(522)
			::zpp_nape::space::ZPP_Component tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(522)
			{
				HX_STACK_LINE(523)
				::zpp_nape::space::ZPP_Component tmp6 = this->component;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(523)
				::zpp_nape::space::ZPP_Component tmp7 = this->component;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(523)
				::zpp_nape::space::ZPP_Component tmp8 = tmp7->parent;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(523)
				bool tmp9 = (tmp6 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(523)
				if ((tmp9)){
					HX_STACK_LINE(523)
					tmp5 = this->component;
				}
				else{
					HX_STACK_LINE(525)
					::zpp_nape::space::ZPP_Component tmp10 = this->component;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(525)
					::zpp_nape::space::ZPP_Component obj = tmp10;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(526)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(527)
					while((true)){
						HX_STACK_LINE(527)
						bool tmp11 = (obj != obj->parent);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(527)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(527)
						if ((tmp12)){
							HX_STACK_LINE(527)
							break;
						}
						HX_STACK_LINE(528)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(529)
						obj->parent = stack;
						HX_STACK_LINE(530)
						stack = obj;
						HX_STACK_LINE(531)
						obj = nxt;
					}
					HX_STACK_LINE(533)
					while((true)){
						HX_STACK_LINE(533)
						bool tmp11 = (stack != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(533)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(533)
						if ((tmp12)){
							HX_STACK_LINE(533)
							break;
						}
						HX_STACK_LINE(534)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(535)
						stack->parent = obj;
						HX_STACK_LINE(536)
						stack = nxt;
					}
					HX_STACK_LINE(538)
					tmp5 = obj;
				}
			}
			HX_STACK_LINE(522)
			::zpp_nape::space::ZPP_Component yr = tmp5;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(541)
			bool tmp6 = (xr != yr);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(541)
			if ((tmp6)){
				HX_STACK_LINE(542)
				bool tmp7 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(542)
				if ((tmp7)){
					HX_STACK_LINE(542)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(543)
					bool tmp8 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(543)
					if ((tmp8)){
						HX_STACK_LINE(543)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(545)
						yr->parent = xr;
						HX_STACK_LINE(546)
						(xr->rank)++;
					}
				}
			}
		}
		HX_STACK_LINE(550)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(550)
		int tmp5 = tmp4->type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(550)
		int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(550)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(550)
		if ((tmp7)){
			HX_STACK_LINE(551)
			::zpp_nape::space::ZPP_Component tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(551)
			{
				HX_STACK_LINE(552)
				::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(552)
				::zpp_nape::space::ZPP_Component tmp10 = tmp9->component;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(552)
				::zpp_nape::phys::ZPP_Body tmp11 = this->b2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(552)
				::zpp_nape::space::ZPP_Component tmp12 = tmp11->component->parent;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(552)
				bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(552)
				if ((tmp13)){
					HX_STACK_LINE(552)
					::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(552)
					tmp8 = tmp14->component;
				}
				else{
					HX_STACK_LINE(554)
					::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(554)
					::zpp_nape::space::ZPP_Component obj = tmp14->component;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(555)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(556)
					while((true)){
						HX_STACK_LINE(556)
						bool tmp15 = (obj != obj->parent);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(556)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(556)
						if ((tmp16)){
							HX_STACK_LINE(556)
							break;
						}
						HX_STACK_LINE(557)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(558)
						obj->parent = stack;
						HX_STACK_LINE(559)
						stack = obj;
						HX_STACK_LINE(560)
						obj = nxt;
					}
					HX_STACK_LINE(562)
					while((true)){
						HX_STACK_LINE(562)
						bool tmp15 = (stack != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(562)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(562)
						if ((tmp16)){
							HX_STACK_LINE(562)
							break;
						}
						HX_STACK_LINE(563)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(564)
						stack->parent = obj;
						HX_STACK_LINE(565)
						stack = nxt;
					}
					HX_STACK_LINE(567)
					tmp8 = obj;
				}
			}
			HX_STACK_LINE(551)
			::zpp_nape::space::ZPP_Component xr = tmp8;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(570)
			::zpp_nape::space::ZPP_Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(570)
			{
				HX_STACK_LINE(571)
				::zpp_nape::space::ZPP_Component tmp10 = this->component;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(571)
				::zpp_nape::space::ZPP_Component tmp11 = this->component;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(571)
				::zpp_nape::space::ZPP_Component tmp12 = tmp11->parent;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(571)
				bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(571)
				if ((tmp13)){
					HX_STACK_LINE(571)
					tmp9 = this->component;
				}
				else{
					HX_STACK_LINE(573)
					::zpp_nape::space::ZPP_Component tmp14 = this->component;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(573)
					::zpp_nape::space::ZPP_Component obj = tmp14;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(574)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(575)
					while((true)){
						HX_STACK_LINE(575)
						bool tmp15 = (obj != obj->parent);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(575)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(575)
						if ((tmp16)){
							HX_STACK_LINE(575)
							break;
						}
						HX_STACK_LINE(576)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(577)
						obj->parent = stack;
						HX_STACK_LINE(578)
						stack = obj;
						HX_STACK_LINE(579)
						obj = nxt;
					}
					HX_STACK_LINE(581)
					while((true)){
						HX_STACK_LINE(581)
						bool tmp15 = (stack != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(581)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(581)
						if ((tmp16)){
							HX_STACK_LINE(581)
							break;
						}
						HX_STACK_LINE(582)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(583)
						stack->parent = obj;
						HX_STACK_LINE(584)
						stack = nxt;
					}
					HX_STACK_LINE(586)
					tmp9 = obj;
				}
			}
			HX_STACK_LINE(570)
			::zpp_nape::space::ZPP_Component yr = tmp9;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(589)
			bool tmp10 = (xr != yr);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(589)
			if ((tmp10)){
				HX_STACK_LINE(590)
				bool tmp11 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(590)
				if ((tmp11)){
					HX_STACK_LINE(590)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(591)
					bool tmp12 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(591)
					if ((tmp12)){
						HX_STACK_LINE(591)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(593)
						yr->parent = xr;
						HX_STACK_LINE(594)
						(xr->rank)++;
					}
				}
			}
		}
	}
return null();
}


bool ZPP_WeldJoint_obj::pair_exists( int id,int di){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_WeldJoint","pair_exists",0xee01ef42,"zpp_nape.constraint.ZPP_WeldJoint.pair_exists","zpp_nape/constraint/WeldJoint.hx",599,0xc793a26a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(600)
	::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(600)
	int tmp1 = tmp->id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(600)
	int tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(600)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(600)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(600)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(600)
	if ((tmp4)){
		HX_STACK_LINE(600)
		::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(600)
		::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(600)
		::zpp_nape::phys::ZPP_Body tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(600)
		int tmp9 = tmp8->id;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(600)
		int tmp10 = di;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(600)
		tmp5 = (tmp9 == tmp10);
	}
	else{
		HX_STACK_LINE(600)
		tmp5 = false;
	}
	HX_STACK_LINE(600)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(600)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(600)
	if ((tmp6)){
		HX_STACK_LINE(600)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(600)
		::zpp_nape::phys::ZPP_Body tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(600)
		int tmp10 = tmp9->id;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(600)
		int tmp11 = di;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(600)
		bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(600)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(600)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(600)
		if ((tmp14)){
			HX_STACK_LINE(600)
			::zpp_nape::phys::ZPP_Body tmp15 = this->b2;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(600)
			::zpp_nape::phys::ZPP_Body tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(600)
			::zpp_nape::phys::ZPP_Body tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(600)
			int tmp18 = tmp17->id;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(600)
			int tmp19 = id;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(600)
			tmp7 = (tmp18 == tmp19);
		}
		else{
			HX_STACK_LINE(600)
			tmp7 = false;
		}
	}
	else{
		HX_STACK_LINE(600)
		tmp7 = true;
	}
	HX_STACK_LINE(600)
	return tmp7;
}


Void ZPP_WeldJoint_obj::clearcache( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_WeldJoint","clearcache",0xd87d1414,"zpp_nape.constraint.ZPP_WeldJoint.clearcache","zpp_nape/constraint/WeldJoint.hx",602,0xc793a26a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(603)
		{
			HX_STACK_LINE(604)
			{
				HX_STACK_LINE(605)
				this->jAccx = (int)0;
				HX_STACK_LINE(606)
				this->jAccy = (int)0;
				HX_STACK_LINE(615)
				{
				}
			}
			HX_STACK_LINE(624)
			this->jAccz = (int)0;
		}
		HX_STACK_LINE(626)
		this->pre_dt = ((Float)-1.0);
	}
return null();
}


bool ZPP_WeldJoint_obj::preStep( Float dt){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_WeldJoint","preStep",0xd1812130,"zpp_nape.constraint.ZPP_WeldJoint.preStep","zpp_nape/constraint/WeldJoint.hx",628,0xc793a26a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dt,"dt")
	HX_STACK_LINE(629)
	Float tmp = this->pre_dt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(629)
	bool tmp1 = (tmp == ((Float)-1.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(629)
	if ((tmp1)){
		HX_STACK_LINE(629)
		this->pre_dt = dt;
	}
	HX_STACK_LINE(630)
	Float tmp2 = dt;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(630)
	Float tmp3 = this->pre_dt;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(630)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(630)
	Float dtratio = tmp4;		HX_STACK_VAR(dtratio,"dtratio");
	HX_STACK_LINE(631)
	this->pre_dt = dt;
	HX_STACK_LINE(632)
	this->stepped = true;
	HX_STACK_LINE(633)
	{
		HX_STACK_LINE(634)
		::zpp_nape::phys::ZPP_Body tmp5 = this->b1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(634)
		Float tmp6 = tmp5->axisy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(634)
		Float tmp7 = this->a1localx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(634)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(634)
		::zpp_nape::phys::ZPP_Body tmp9 = this->b1;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(634)
		Float tmp10 = tmp9->axisx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(634)
		Float tmp11 = this->a1localy;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(634)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(634)
		Float tmp13 = (tmp8 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(634)
		this->a1relx = tmp13;
		HX_STACK_LINE(635)
		Float tmp14 = this->a1localx;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(635)
		::zpp_nape::phys::ZPP_Body tmp15 = this->b1;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(635)
		Float tmp16 = tmp15->axisx;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(635)
		Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(635)
		Float tmp18 = this->a1localy;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(635)
		::zpp_nape::phys::ZPP_Body tmp19 = this->b1;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(635)
		Float tmp20 = tmp19->axisy;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(635)
		Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(635)
		Float tmp22 = (tmp17 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(635)
		this->a1rely = tmp22;
	}
	HX_STACK_LINE(637)
	{
		HX_STACK_LINE(638)
		::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(638)
		Float tmp6 = tmp5->axisy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(638)
		Float tmp7 = this->a2localx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(638)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(638)
		::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(638)
		Float tmp10 = tmp9->axisx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(638)
		Float tmp11 = this->a2localy;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(638)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(638)
		Float tmp13 = (tmp8 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(638)
		this->a2relx = tmp13;
		HX_STACK_LINE(639)
		Float tmp14 = this->a2localx;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(639)
		::zpp_nape::phys::ZPP_Body tmp15 = this->b2;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(639)
		Float tmp16 = tmp15->axisx;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(639)
		Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(639)
		Float tmp18 = this->a2localy;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(639)
		::zpp_nape::phys::ZPP_Body tmp19 = this->b2;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(639)
		Float tmp20 = tmp19->axisy;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(639)
		Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(639)
		Float tmp22 = (tmp17 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(639)
		this->a2rely = tmp22;
	}
	HX_STACK_LINE(641)
	{
		HX_STACK_LINE(642)
		::zpp_nape::phys::ZPP_Body tmp5 = this->b1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(642)
		Float tmp6 = tmp5->smass;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(642)
		::zpp_nape::phys::ZPP_Body tmp7 = this->b2;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(642)
		Float tmp8 = tmp7->smass;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(642)
		Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(642)
		Float m = tmp9;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(643)
		{
			HX_STACK_LINE(644)
			this->kMassa = m;
			HX_STACK_LINE(645)
			this->kMassb = (int)0;
			HX_STACK_LINE(646)
			this->kMassd = m;
			HX_STACK_LINE(647)
			this->kMassc = (int)0;
			HX_STACK_LINE(648)
			this->kMasse = (int)0;
			HX_STACK_LINE(649)
			this->kMassf = (int)0;
		}
		HX_STACK_LINE(651)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(651)
		Float tmp11 = tmp10->sinertia;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(651)
		bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(651)
		if ((tmp12)){
			HX_STACK_LINE(652)
			Float tmp13 = this->a1relx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(652)
			::zpp_nape::phys::ZPP_Body tmp14 = this->b1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(652)
			Float tmp15 = tmp14->sinertia;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(652)
			Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(652)
			Float X = tmp16;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(653)
			Float tmp17 = this->a1rely;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(653)
			::zpp_nape::phys::ZPP_Body tmp18 = this->b1;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(653)
			Float tmp19 = tmp18->sinertia;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(653)
			Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(653)
			Float Y = tmp20;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(654)
			{
				HX_STACK_LINE(655)
				Float tmp21 = Y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(655)
				Float tmp22 = this->a1rely;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(655)
				Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(655)
				hx::AddEq(this->kMassa,tmp23);
				HX_STACK_LINE(656)
				Float tmp24 = Y;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(656)
				Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(656)
				Float tmp26 = this->a1relx;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(656)
				Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(656)
				hx::AddEq(this->kMassb,tmp27);
				HX_STACK_LINE(657)
				Float tmp28 = X;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(657)
				Float tmp29 = this->a1relx;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(657)
				Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(657)
				hx::AddEq(this->kMassd,tmp30);
				HX_STACK_LINE(658)
				Float tmp31 = Y;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(658)
				Float tmp32 = -(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(658)
				hx::AddEq(this->kMassc,tmp32);
				HX_STACK_LINE(659)
				hx::AddEq(this->kMasse,X);
				HX_STACK_LINE(660)
				::zpp_nape::phys::ZPP_Body tmp33 = this->b1;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(660)
				hx::AddEq(this->kMassf,tmp33->sinertia);
			}
		}
		HX_STACK_LINE(663)
		::zpp_nape::phys::ZPP_Body tmp13 = this->b2;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(663)
		Float tmp14 = tmp13->sinertia;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(663)
		bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(663)
		if ((tmp15)){
			HX_STACK_LINE(664)
			Float tmp16 = this->a2relx;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(664)
			::zpp_nape::phys::ZPP_Body tmp17 = this->b2;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(664)
			Float tmp18 = tmp17->sinertia;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(664)
			Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(664)
			Float X = tmp19;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(665)
			Float tmp20 = this->a2rely;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(665)
			::zpp_nape::phys::ZPP_Body tmp21 = this->b2;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(665)
			Float tmp22 = tmp21->sinertia;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(665)
			Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(665)
			Float Y = tmp23;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(666)
			{
				HX_STACK_LINE(667)
				Float tmp24 = Y;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(667)
				Float tmp25 = this->a2rely;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(667)
				Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(667)
				hx::AddEq(this->kMassa,tmp26);
				HX_STACK_LINE(668)
				Float tmp27 = Y;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(668)
				Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(668)
				Float tmp29 = this->a2relx;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(668)
				Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(668)
				hx::AddEq(this->kMassb,tmp30);
				HX_STACK_LINE(669)
				Float tmp31 = X;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(669)
				Float tmp32 = this->a2relx;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(669)
				Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(669)
				hx::AddEq(this->kMassd,tmp33);
				HX_STACK_LINE(670)
				Float tmp34 = Y;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(670)
				Float tmp35 = -(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(670)
				hx::AddEq(this->kMassc,tmp35);
				HX_STACK_LINE(671)
				hx::AddEq(this->kMasse,X);
				HX_STACK_LINE(672)
				::zpp_nape::phys::ZPP_Body tmp36 = this->b2;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(672)
				hx::AddEq(this->kMassf,tmp36->sinertia);
			}
		}
	}
	HX_STACK_LINE(676)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(676)
	{
		HX_STACK_LINE(677)
		Float tmp6 = this->kMassa;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(677)
		Float tmp7 = this->kMassd;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(677)
		Float tmp8 = this->kMassf;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(677)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(677)
		Float tmp10 = this->kMasse;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(677)
		Float tmp11 = this->kMasse;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(677)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(677)
		Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(677)
		Float tmp14 = (tmp6 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(677)
		Float tmp15 = this->kMassb;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(677)
		Float tmp16 = this->kMassc;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(677)
		Float tmp17 = this->kMasse;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(677)
		Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(677)
		Float tmp19 = this->kMassb;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(677)
		Float tmp20 = this->kMassf;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(677)
		Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(677)
		Float tmp22 = (tmp18 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(677)
		Float tmp23 = (tmp15 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(677)
		Float tmp24 = (tmp14 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(677)
		Float tmp25 = this->kMassc;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(677)
		Float tmp26 = this->kMassb;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(677)
		Float tmp27 = this->kMasse;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(677)
		Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(677)
		Float tmp29 = this->kMassc;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(677)
		Float tmp30 = this->kMassd;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(677)
		Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(677)
		Float tmp32 = (tmp28 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(677)
		Float tmp33 = (tmp25 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(677)
		Float tmp34 = (tmp24 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(677)
		Float det = tmp34;		HX_STACK_VAR(det,"det");
		HX_STACK_LINE(678)
		bool tmp35 = (det != det);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(678)
		if ((tmp35)){
			HX_STACK_LINE(679)
			{
				HX_STACK_LINE(680)
				this->kMassa = (int)0;
				HX_STACK_LINE(681)
				this->kMassb = (int)0;
				HX_STACK_LINE(682)
				this->kMassd = (int)0;
				HX_STACK_LINE(683)
				this->kMassc = (int)0;
				HX_STACK_LINE(684)
				this->kMasse = (int)0;
				HX_STACK_LINE(685)
				this->kMassf = (int)0;
			}
			HX_STACK_LINE(687)
			tmp5 = (int)7;
		}
		else{
			HX_STACK_LINE(689)
			bool tmp36 = (det == (int)0);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(689)
			if ((tmp36)){
				HX_STACK_LINE(690)
				int flag = (int)0;		HX_STACK_VAR(flag,"flag");
				HX_STACK_LINE(691)
				Float tmp37 = this->kMassa;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(691)
				bool tmp38 = (tmp37 != (int)0);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(691)
				if ((tmp38)){
					HX_STACK_LINE(691)
					Float tmp39 = this->kMassa;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(691)
					Float tmp40 = (Float((int)1) / Float(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(691)
					this->kMassa = tmp40;
				}
				else{
					HX_STACK_LINE(693)
					this->kMassa = (int)0;
					HX_STACK_LINE(694)
					hx::OrEq(flag,(int)1);
				}
				HX_STACK_LINE(696)
				Float tmp39 = this->kMassd;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(696)
				bool tmp40 = (tmp39 != (int)0);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(696)
				if ((tmp40)){
					HX_STACK_LINE(696)
					Float tmp41 = this->kMassd;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(696)
					Float tmp42 = (Float((int)1) / Float(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(696)
					this->kMassd = tmp42;
				}
				else{
					HX_STACK_LINE(698)
					this->kMassd = (int)0;
					HX_STACK_LINE(699)
					hx::OrEq(flag,(int)2);
				}
				HX_STACK_LINE(701)
				Float tmp41 = this->kMassf;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(701)
				bool tmp42 = (tmp41 != (int)0);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(701)
				if ((tmp42)){
					HX_STACK_LINE(701)
					Float tmp43 = this->kMassf;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(701)
					Float tmp44 = (Float((int)1) / Float(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(701)
					this->kMassf = tmp44;
				}
				else{
					HX_STACK_LINE(703)
					this->kMassf = (int)0;
					HX_STACK_LINE(704)
					hx::OrEq(flag,(int)4);
				}
				HX_STACK_LINE(706)
				Float tmp43 = this->kMasse = ((Float)0.0);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(706)
				Float tmp44 = this->kMassc = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(706)
				this->kMassb = tmp44;
				HX_STACK_LINE(707)
				tmp5 = flag;
			}
			else{
				HX_STACK_LINE(710)
				Float tmp37 = (Float((int)1) / Float(det));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(710)
				det = tmp37;
				HX_STACK_LINE(711)
				Float tmp38 = det;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(711)
				Float tmp39 = this->kMassd;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(711)
				Float tmp40 = this->kMassf;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(711)
				Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(711)
				Float tmp42 = this->kMasse;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(711)
				Float tmp43 = this->kMasse;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(711)
				Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(711)
				Float tmp45 = (tmp41 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(711)
				Float tmp46 = (tmp38 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(711)
				Float A = tmp46;		HX_STACK_VAR(A,"A");
				HX_STACK_LINE(712)
				Float tmp47 = det;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(712)
				Float tmp48 = this->kMasse;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(712)
				Float tmp49 = this->kMassc;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(712)
				Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(712)
				Float tmp51 = this->kMassb;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(712)
				Float tmp52 = this->kMassf;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(712)
				Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(712)
				Float tmp54 = (tmp50 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(712)
				Float tmp55 = (tmp47 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(712)
				Float B = tmp55;		HX_STACK_VAR(B,"B");
				HX_STACK_LINE(713)
				Float tmp56 = det;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(713)
				Float tmp57 = this->kMassa;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(713)
				Float tmp58 = this->kMassf;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(713)
				Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(713)
				Float tmp60 = this->kMassc;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(713)
				Float tmp61 = this->kMassc;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(713)
				Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(713)
				Float tmp63 = (tmp59 - tmp62);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(713)
				Float tmp64 = (tmp56 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(713)
				Float D = tmp64;		HX_STACK_VAR(D,"D");
				HX_STACK_LINE(714)
				Float tmp65 = det;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(714)
				Float tmp66 = this->kMassb;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(714)
				Float tmp67 = this->kMasse;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(714)
				Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(714)
				Float tmp69 = this->kMassc;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(714)
				Float tmp70 = this->kMassd;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(714)
				Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(714)
				Float tmp72 = (tmp68 - tmp71);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(714)
				Float tmp73 = (tmp65 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(714)
				Float C = tmp73;		HX_STACK_VAR(C,"C");
				HX_STACK_LINE(715)
				Float tmp74 = det;		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(715)
				Float tmp75 = this->kMassb;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(715)
				Float tmp76 = this->kMassc;		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(715)
				Float tmp77 = (tmp75 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(715)
				Float tmp78 = this->kMassa;		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(715)
				Float tmp79 = this->kMasse;		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(715)
				Float tmp80 = (tmp78 * tmp79);		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(715)
				Float tmp81 = (tmp77 - tmp80);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(715)
				Float tmp82 = (tmp74 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(715)
				Float E = tmp82;		HX_STACK_VAR(E,"E");
				HX_STACK_LINE(716)
				Float tmp83 = det;		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(716)
				Float tmp84 = this->kMassa;		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(716)
				Float tmp85 = this->kMassd;		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(716)
				Float tmp86 = (tmp84 * tmp85);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(716)
				Float tmp87 = this->kMassb;		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(716)
				Float tmp88 = this->kMassb;		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(716)
				Float tmp89 = (tmp87 * tmp88);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(716)
				Float tmp90 = (tmp86 - tmp89);		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(716)
				Float tmp91 = (tmp83 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(716)
				Float F = tmp91;		HX_STACK_VAR(F,"F");
				HX_STACK_LINE(717)
				{
					HX_STACK_LINE(718)
					this->kMassa = A;
					HX_STACK_LINE(719)
					this->kMassb = B;
					HX_STACK_LINE(720)
					this->kMassd = D;
					HX_STACK_LINE(721)
					this->kMassc = C;
					HX_STACK_LINE(722)
					this->kMasse = E;
					HX_STACK_LINE(723)
					this->kMassf = F;
				}
				HX_STACK_LINE(725)
				tmp5 = (int)0;
			}
		}
	}
	HX_STACK_LINE(676)
	int flag = tmp5;		HX_STACK_VAR(flag,"flag");
	HX_STACK_LINE(728)
	int tmp6 = (int(flag) & int((int)1));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(728)
	bool tmp7 = (tmp6 != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(728)
	if ((tmp7)){
		HX_STACK_LINE(728)
		this->jAccx = (int)0;
	}
	HX_STACK_LINE(729)
	int tmp8 = (int(flag) & int((int)2));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(729)
	bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(729)
	if ((tmp9)){
		HX_STACK_LINE(729)
		this->jAccy = (int)0;
	}
	HX_STACK_LINE(730)
	int tmp10 = (int(flag) & int((int)4));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(730)
	bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(730)
	if ((tmp11)){
		HX_STACK_LINE(730)
		this->jAccz = (int)0;
	}
	HX_STACK_LINE(731)
	bool tmp12 = this->stiff;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(731)
	bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(731)
	if ((tmp13)){
		HX_STACK_LINE(732)
		Float biasCoef;		HX_STACK_VAR(biasCoef,"biasCoef");
		HX_STACK_LINE(733)
		{
			HX_STACK_LINE(734)
			Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(734)
			{
				HX_STACK_LINE(735)
				Float tmp15 = ::Math_obj::PI;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(735)
				Float tmp16 = ((int)2 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(735)
				Float tmp17 = this->frequency;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(735)
				Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(735)
				Float omega = tmp18;		HX_STACK_VAR(omega,"omega");
				HX_STACK_LINE(736)
				Float tmp19 = (dt * omega);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(736)
				Float tmp20 = this->damping;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(736)
				Float tmp21 = ((int)2 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(736)
				Float tmp22 = (omega * dt);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(736)
				Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(736)
				Float tmp24 = (tmp19 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(736)
				Float tmp25 = (Float((int)1) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(736)
				this->gamma = tmp25;
				HX_STACK_LINE(737)
				Float tmp26 = this->gamma;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(737)
				Float tmp27 = ((int)1 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(737)
				Float tmp28 = (Float((int)1) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(737)
				Float ig = tmp28;		HX_STACK_VAR(ig,"ig");
				HX_STACK_LINE(738)
				Float tmp29 = (dt * omega);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(738)
				Float tmp30 = omega;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(738)
				Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(738)
				Float tmp32 = this->gamma;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(738)
				Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(738)
				biasCoef = tmp33;
				HX_STACK_LINE(739)
				hx::MultEq(this->gamma,ig);
				HX_STACK_LINE(740)
				tmp14 = ig;
			}
			HX_STACK_LINE(734)
			Float X = tmp14;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(742)
			hx::MultEq(this->kMassa,X);
			HX_STACK_LINE(743)
			hx::MultEq(this->kMassb,X);
			HX_STACK_LINE(744)
			hx::MultEq(this->kMassd,X);
			HX_STACK_LINE(745)
			hx::MultEq(this->kMassc,X);
			HX_STACK_LINE(746)
			hx::MultEq(this->kMasse,X);
			HX_STACK_LINE(747)
			hx::MultEq(this->kMassf,X);
		}
		HX_STACK_LINE(749)
		{
			HX_STACK_LINE(750)
			::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(750)
			Float tmp15 = tmp14->posx;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(750)
			Float tmp16 = this->a2relx;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(750)
			Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(750)
			::zpp_nape::phys::ZPP_Body tmp18 = this->b1;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(750)
			Float tmp19 = tmp18->posx;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(750)
			Float tmp20 = this->a1relx;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(750)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(750)
			Float tmp22 = (tmp17 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(750)
			this->biasx = tmp22;
			HX_STACK_LINE(751)
			::zpp_nape::phys::ZPP_Body tmp23 = this->b2;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(751)
			Float tmp24 = tmp23->posy;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(751)
			Float tmp25 = this->a2rely;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(751)
			Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(751)
			::zpp_nape::phys::ZPP_Body tmp27 = this->b1;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(751)
			Float tmp28 = tmp27->posy;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(751)
			Float tmp29 = this->a1rely;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(751)
			Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(751)
			Float tmp31 = (tmp26 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(751)
			this->biasy = tmp31;
			HX_STACK_LINE(752)
			::zpp_nape::phys::ZPP_Body tmp32 = this->b2;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(752)
			Float tmp33 = tmp32->rot;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(752)
			::zpp_nape::phys::ZPP_Body tmp34 = this->b1;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(752)
			Float tmp35 = tmp34->rot;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(752)
			Float tmp36 = (tmp33 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(752)
			Float tmp37 = this->phase;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(752)
			Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(752)
			this->biasz = tmp38;
		}
		HX_STACK_LINE(754)
		bool tmp14 = this->breakUnderError;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(754)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(754)
		if ((tmp14)){
			HX_STACK_LINE(754)
			Float tmp16 = this->biasx;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(754)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(754)
			Float tmp18 = this->biasx;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(754)
			Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(754)
			Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(754)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(754)
			Float tmp22 = this->biasy;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(754)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(754)
			Float tmp24 = this->biasy;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(754)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(754)
			Float tmp26 = (tmp23 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(754)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(754)
			Float tmp28 = (tmp21 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(754)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(754)
			Float tmp30 = this->biasz;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(754)
			Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(754)
			Float tmp32 = this->biasz;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(754)
			Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(754)
			Float tmp34 = (tmp31 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(754)
			Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(754)
			Float tmp36 = (tmp29 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(754)
			Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(754)
			Float tmp38 = this->maxError;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(754)
			Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(754)
			Float tmp40 = this->maxError;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(754)
			Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(754)
			Float tmp42 = (tmp39 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(754)
			Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(754)
			tmp15 = (tmp37 > tmp43);
		}
		else{
			HX_STACK_LINE(754)
			tmp15 = false;
		}
		HX_STACK_LINE(754)
		if ((tmp15)){
			HX_STACK_LINE(754)
			return true;
		}
		HX_STACK_LINE(755)
		{
			HX_STACK_LINE(756)
			Float tmp16 = biasCoef;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(756)
			Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(756)
			Float t = tmp17;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(757)
			{
				HX_STACK_LINE(758)
				Float t1 = t;		HX_STACK_VAR(t1,"t1");
				HX_STACK_LINE(767)
				hx::MultEq(this->biasx,t1);
				HX_STACK_LINE(768)
				hx::MultEq(this->biasy,t1);
			}
			HX_STACK_LINE(770)
			hx::MultEq(this->biasz,t);
		}
		HX_STACK_LINE(772)
		{
			HX_STACK_LINE(773)
			Float tmp16 = this->maxError;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(773)
			Float t = tmp16;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(782)
			Float tmp17 = this->biasx;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(782)
			Float tmp18 = this->biasx;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(782)
			Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(782)
			Float tmp20 = this->biasy;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(782)
			Float tmp21 = this->biasy;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(782)
			Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(782)
			Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(782)
			Float tmp24 = this->biasz;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(782)
			Float tmp25 = this->biasz;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(782)
			Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(782)
			Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(782)
			Float ls = tmp27;		HX_STACK_VAR(ls,"ls");
			HX_STACK_LINE(783)
			Float tmp28 = ls;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(783)
			Float tmp29 = (t * t);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(783)
			bool tmp30 = (tmp28 > tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(783)
			if ((tmp30)){
				HX_STACK_LINE(793)
				Float tmp31 = t;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(793)
				Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(793)
				{
					HX_STACK_LINE(793)
					Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(793)
					{
						HX_STACK_LINE(793)
						Float tmp34 = ls;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(793)
						tmp33 = ::Math_obj::sqrt(tmp34);
					}
					HX_STACK_LINE(793)
					tmp32 = (Float(((Float)1.0)) / Float(tmp33));
				}
				HX_STACK_LINE(793)
				Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(793)
				Float t1 = tmp33;		HX_STACK_VAR(t1,"t1");
				HX_STACK_LINE(794)
				{
					HX_STACK_LINE(795)
					Float t2 = t1;		HX_STACK_VAR(t2,"t2");
					HX_STACK_LINE(804)
					hx::MultEq(this->biasx,t2);
					HX_STACK_LINE(805)
					hx::MultEq(this->biasy,t2);
				}
				HX_STACK_LINE(807)
				hx::MultEq(this->biasz,t1);
			}
		}
	}
	else{
		HX_STACK_LINE(813)
		{
			HX_STACK_LINE(814)
			{
				HX_STACK_LINE(815)
				this->biasx = (int)0;
				HX_STACK_LINE(816)
				this->biasy = (int)0;
				HX_STACK_LINE(825)
				{
				}
			}
			HX_STACK_LINE(834)
			this->biasz = (int)0;
		}
		HX_STACK_LINE(836)
		this->gamma = (int)0;
	}
	HX_STACK_LINE(838)
	{
		HX_STACK_LINE(839)
		Float t = dtratio;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(840)
		{
			HX_STACK_LINE(841)
			Float t1 = t;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(850)
			hx::MultEq(this->jAccx,t1);
			HX_STACK_LINE(851)
			hx::MultEq(this->jAccy,t1);
		}
		HX_STACK_LINE(853)
		hx::MultEq(this->jAccz,t);
	}
	HX_STACK_LINE(855)
	Float tmp14 = this->maxForce;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(855)
	Float tmp15 = dt;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(855)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(855)
	this->jMax = tmp16;
	HX_STACK_LINE(856)
	return false;
}


Void ZPP_WeldJoint_obj::warmStart( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_WeldJoint","warmStart",0x90b4923e,"zpp_nape.constraint.ZPP_WeldJoint.warmStart","zpp_nape/constraint/WeldJoint.hx",890,0xc793a26a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(891)
		{
			HX_STACK_LINE(892)
			::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(892)
			Float t = tmp->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(901)
			Float tmp1 = this->jAccx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(901)
			Float tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(901)
			Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(901)
			::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(901)
			hx::SubEq(tmp4->velx,tmp3);
			HX_STACK_LINE(902)
			Float tmp5 = this->jAccy;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(902)
			Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(902)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(902)
			::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(902)
			hx::SubEq(tmp8->vely,tmp7);
		}
		HX_STACK_LINE(904)
		{
			HX_STACK_LINE(905)
			::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(905)
			Float t = tmp->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(914)
			Float tmp1 = this->jAccx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(914)
			Float tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(914)
			Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(914)
			::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(914)
			hx::AddEq(tmp4->velx,tmp3);
			HX_STACK_LINE(915)
			Float tmp5 = this->jAccy;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(915)
			Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(915)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(915)
			::zpp_nape::phys::ZPP_Body tmp8 = this->b2;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(915)
			hx::AddEq(tmp8->vely,tmp7);
		}
		HX_STACK_LINE(917)
		Float tmp = this->jAccy;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(917)
		Float tmp1 = this->a1relx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(917)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(917)
		Float tmp3 = this->jAccx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(917)
		Float tmp4 = this->a1rely;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(917)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(917)
		Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(917)
		Float tmp7 = this->jAccz;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(917)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(917)
		::zpp_nape::phys::ZPP_Body tmp9 = this->b1;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(917)
		Float tmp10 = tmp9->iinertia;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(917)
		Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(917)
		::zpp_nape::phys::ZPP_Body tmp12 = this->b1;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(917)
		hx::SubEq(tmp12->angvel,tmp11);
		HX_STACK_LINE(918)
		Float tmp13 = this->jAccy;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(918)
		Float tmp14 = this->a2relx;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(918)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(918)
		Float tmp16 = this->jAccx;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(918)
		Float tmp17 = this->a2rely;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(918)
		Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(918)
		Float tmp19 = (tmp15 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(918)
		Float tmp20 = this->jAccz;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(918)
		Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(918)
		::zpp_nape::phys::ZPP_Body tmp22 = this->b2;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(918)
		Float tmp23 = tmp22->iinertia;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(918)
		Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(918)
		::zpp_nape::phys::ZPP_Body tmp25 = this->b2;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(918)
		hx::AddEq(tmp25->angvel,tmp24);
	}
return null();
}


bool ZPP_WeldJoint_obj::applyImpulseVel( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_WeldJoint","applyImpulseVel",0x448fb0d7,"zpp_nape.constraint.ZPP_WeldJoint.applyImpulseVel","zpp_nape/constraint/WeldJoint.hx",922,0xc793a26a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(923)
	Float Ex = ((Float)0.0);		HX_STACK_VAR(Ex,"Ex");
	HX_STACK_LINE(924)
	Float Ey = ((Float)0.0);		HX_STACK_VAR(Ey,"Ey");
	HX_STACK_LINE(925)
	Float Ez = ((Float)0.0);		HX_STACK_VAR(Ez,"Ez");
	HX_STACK_LINE(926)
	{
		HX_STACK_LINE(927)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(927)
		Float tmp1 = tmp->velx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(927)
		::zpp_nape::phys::ZPP_Body tmp2 = this->b2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(927)
		Float tmp3 = tmp2->kinvelx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(927)
		Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(927)
		Float tmp5 = this->a2rely;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(927)
		::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(927)
		Float tmp7 = tmp6->angvel;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(927)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(927)
		Float tmp9 = tmp8->kinangvel;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(927)
		Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(927)
		Float tmp11 = (tmp5 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(927)
		Float tmp12 = (tmp4 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(927)
		::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(927)
		Float tmp14 = tmp13->velx;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(927)
		::zpp_nape::phys::ZPP_Body tmp15 = this->b1;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(927)
		Float tmp16 = tmp15->kinvelx;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(927)
		Float tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(927)
		Float tmp18 = this->a1rely;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(927)
		::zpp_nape::phys::ZPP_Body tmp19 = this->b1;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(927)
		Float tmp20 = tmp19->angvel;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(927)
		::zpp_nape::phys::ZPP_Body tmp21 = this->b1;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(927)
		Float tmp22 = tmp21->kinangvel;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(927)
		Float tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(927)
		Float tmp24 = (tmp18 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(927)
		Float tmp25 = (tmp17 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(927)
		Float tmp26 = (tmp12 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(927)
		Ex = tmp26;
		HX_STACK_LINE(928)
		::zpp_nape::phys::ZPP_Body tmp27 = this->b2;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(928)
		Float tmp28 = tmp27->vely;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(928)
		::zpp_nape::phys::ZPP_Body tmp29 = this->b2;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(928)
		Float tmp30 = tmp29->kinvely;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(928)
		Float tmp31 = (tmp28 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(928)
		Float tmp32 = this->a2relx;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(928)
		::zpp_nape::phys::ZPP_Body tmp33 = this->b2;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(928)
		Float tmp34 = tmp33->angvel;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(928)
		::zpp_nape::phys::ZPP_Body tmp35 = this->b2;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(928)
		Float tmp36 = tmp35->kinangvel;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(928)
		Float tmp37 = (tmp34 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(928)
		Float tmp38 = (tmp32 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(928)
		Float tmp39 = (tmp31 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(928)
		::zpp_nape::phys::ZPP_Body tmp40 = this->b1;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(928)
		Float tmp41 = tmp40->vely;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(928)
		::zpp_nape::phys::ZPP_Body tmp42 = this->b1;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(928)
		Float tmp43 = tmp42->kinvely;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(928)
		Float tmp44 = (tmp41 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(928)
		Float tmp45 = this->a1relx;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(928)
		::zpp_nape::phys::ZPP_Body tmp46 = this->b1;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(928)
		Float tmp47 = tmp46->angvel;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(928)
		::zpp_nape::phys::ZPP_Body tmp48 = this->b1;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(928)
		Float tmp49 = tmp48->kinangvel;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(928)
		Float tmp50 = (tmp47 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(928)
		Float tmp51 = (tmp45 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(928)
		Float tmp52 = (tmp44 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(928)
		Float tmp53 = (tmp39 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(928)
		Ey = tmp53;
		HX_STACK_LINE(929)
		::zpp_nape::phys::ZPP_Body tmp54 = this->b2;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(929)
		Float tmp55 = tmp54->angvel;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(929)
		::zpp_nape::phys::ZPP_Body tmp56 = this->b2;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(929)
		Float tmp57 = tmp56->kinangvel;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(929)
		Float tmp58 = (tmp55 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(929)
		::zpp_nape::phys::ZPP_Body tmp59 = this->b1;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(929)
		Float tmp60 = tmp59->angvel;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(929)
		Float tmp61 = (tmp58 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(929)
		::zpp_nape::phys::ZPP_Body tmp62 = this->b1;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(929)
		Float tmp63 = tmp62->kinangvel;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(929)
		Float tmp64 = (tmp61 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(929)
		Ez = tmp64;
	}
	HX_STACK_LINE(931)
	Float Jx = ((Float)0.0);		HX_STACK_VAR(Jx,"Jx");
	HX_STACK_LINE(932)
	Float Jy = ((Float)0.0);		HX_STACK_VAR(Jy,"Jy");
	HX_STACK_LINE(933)
	Float Jz = ((Float)0.0);		HX_STACK_VAR(Jz,"Jz");
	HX_STACK_LINE(934)
	{
		HX_STACK_LINE(935)
		{
			HX_STACK_LINE(936)
			Float tmp = this->biasx;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(936)
			Float tmp1 = Ex;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(936)
			Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(936)
			Jx = tmp2;
			HX_STACK_LINE(937)
			Float tmp3 = this->biasy;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(937)
			Float tmp4 = Ey;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(937)
			Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(937)
			Jy = tmp5;
		}
		HX_STACK_LINE(939)
		Float tmp = this->biasz;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(939)
		Float tmp1 = Ez;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(939)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(939)
		Jz = tmp2;
	}
	HX_STACK_LINE(941)
	{
		HX_STACK_LINE(942)
		Float tmp = this->kMassa;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(942)
		Float tmp1 = Jx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(942)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(942)
		Float tmp3 = this->kMassb;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(942)
		Float tmp4 = Jy;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(942)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(942)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(942)
		Float tmp7 = this->kMassc;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(942)
		Float tmp8 = Jz;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(942)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(942)
		Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(942)
		Float X = tmp10;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(943)
		Float tmp11 = this->kMassb;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(943)
		Float tmp12 = Jx;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(943)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(943)
		Float tmp14 = this->kMassd;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(943)
		Float tmp15 = Jy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(943)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(943)
		Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(943)
		Float tmp18 = this->kMasse;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(943)
		Float tmp19 = Jz;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(943)
		Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(943)
		Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(943)
		Float Y = tmp21;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(944)
		Float tmp22 = this->kMassc;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(944)
		Float tmp23 = Jx;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(944)
		Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(944)
		Float tmp25 = this->kMasse;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(944)
		Float tmp26 = Jy;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(944)
		Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(944)
		Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(944)
		Float tmp29 = this->kMassf;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(944)
		Float tmp30 = Jz;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(944)
		Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(944)
		Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(944)
		Jz = tmp32;
		HX_STACK_LINE(945)
		{
			HX_STACK_LINE(946)
			Jx = X;
			HX_STACK_LINE(947)
			Jy = Y;
			HX_STACK_LINE(956)
			{
			}
		}
	}
	HX_STACK_LINE(966)
	{
		HX_STACK_LINE(967)
		Float tmp = this->gamma;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(967)
		Float t = tmp;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(968)
		{
			HX_STACK_LINE(969)
			Float t1 = t;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(978)
			Float tmp1 = this->jAccx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(978)
			Float tmp2 = t1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(978)
			Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(978)
			hx::SubEq(Jx,tmp3);
			HX_STACK_LINE(979)
			Float tmp4 = this->jAccy;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(979)
			Float tmp5 = t1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(979)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(979)
			hx::SubEq(Jy,tmp6);
		}
		HX_STACK_LINE(981)
		Float tmp1 = this->jAccz;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(981)
		Float tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(981)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(981)
		hx::SubEq(Jz,tmp3);
	}
	HX_STACK_LINE(983)
	{
		HX_STACK_LINE(984)
		Float jOldx = ((Float)0.0);		HX_STACK_VAR(jOldx,"jOldx");
		HX_STACK_LINE(985)
		Float jOldy = ((Float)0.0);		HX_STACK_VAR(jOldy,"jOldy");
		HX_STACK_LINE(986)
		Float jOldz = ((Float)0.0);		HX_STACK_VAR(jOldz,"jOldz");
		HX_STACK_LINE(987)
		{
			HX_STACK_LINE(988)
			{
				HX_STACK_LINE(989)
				Float tmp = this->jAccx;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(989)
				jOldx = tmp;
				HX_STACK_LINE(990)
				Float tmp1 = this->jAccy;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(990)
				jOldy = tmp1;
				HX_STACK_LINE(999)
				{
				}
			}
			HX_STACK_LINE(1008)
			Float tmp = this->jAccz;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1008)
			jOldz = tmp;
		}
		HX_STACK_LINE(1010)
		{
			HX_STACK_LINE(1011)
			int t = (int)1;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1012)
			{
				HX_STACK_LINE(1013)
				int t1 = t;		HX_STACK_VAR(t1,"t1");
				HX_STACK_LINE(1022)
				Float tmp = (Jx * t1);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(1022)
				hx::AddEq(this->jAccx,tmp);
				HX_STACK_LINE(1023)
				Float tmp1 = (Jy * t1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1023)
				hx::AddEq(this->jAccy,tmp1);
			}
			HX_STACK_LINE(1025)
			Float tmp = (Jz * t);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1025)
			hx::AddEq(this->jAccz,tmp);
		}
		HX_STACK_LINE(1027)
		{
			HX_STACK_LINE(1028)
			bool tmp = this->breakUnderForce;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1028)
			if ((tmp)){
				HX_STACK_LINE(1029)
				Float tmp1 = this->jAccx;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1029)
				Float tmp2 = this->jAccx;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1029)
				Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1029)
				Float tmp4 = this->jAccy;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1029)
				Float tmp5 = this->jAccy;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1029)
				Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1029)
				Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1029)
				Float tmp8 = this->jAccz;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1029)
				Float tmp9 = this->jAccz;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1029)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1029)
				Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1029)
				Float tmp12 = this->jMax;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1029)
				Float tmp13 = this->jMax;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1029)
				Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1029)
				bool tmp15 = (tmp11 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1029)
				if ((tmp15)){
					HX_STACK_LINE(1029)
					return true;
				}
			}
			else{
				HX_STACK_LINE(1031)
				bool tmp1 = this->stiff;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1031)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1031)
				if ((tmp2)){
					HX_STACK_LINE(1032)
					Float tmp3 = this->jMax;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1032)
					Float t = tmp3;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1041)
					Float tmp4 = this->jAccx;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1041)
					Float tmp5 = this->jAccx;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1041)
					Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1041)
					Float tmp7 = this->jAccy;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1041)
					Float tmp8 = this->jAccy;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1041)
					Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1041)
					Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1041)
					Float tmp11 = this->jAccz;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1041)
					Float tmp12 = this->jAccz;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1041)
					Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1041)
					Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1041)
					Float ls = tmp14;		HX_STACK_VAR(ls,"ls");
					HX_STACK_LINE(1042)
					Float tmp15 = ls;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1042)
					Float tmp16 = (t * t);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1042)
					bool tmp17 = (tmp15 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1042)
					if ((tmp17)){
						HX_STACK_LINE(1052)
						Float tmp18 = t;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1052)
						Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1052)
						{
							HX_STACK_LINE(1052)
							Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1052)
							{
								HX_STACK_LINE(1052)
								Float tmp21 = ls;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1052)
								tmp20 = ::Math_obj::sqrt(tmp21);
							}
							HX_STACK_LINE(1052)
							tmp19 = (Float(((Float)1.0)) / Float(tmp20));
						}
						HX_STACK_LINE(1052)
						Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1052)
						Float t1 = tmp20;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(1053)
						{
							HX_STACK_LINE(1054)
							Float t2 = t1;		HX_STACK_VAR(t2,"t2");
							HX_STACK_LINE(1063)
							hx::MultEq(this->jAccx,t2);
							HX_STACK_LINE(1064)
							hx::MultEq(this->jAccy,t2);
						}
						HX_STACK_LINE(1066)
						hx::MultEq(this->jAccz,t1);
					}
				}
			}
		}
		HX_STACK_LINE(1071)
		{
			HX_STACK_LINE(1072)
			{
				HX_STACK_LINE(1073)
				Float tmp = this->jAccx;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(1073)
				Float tmp1 = jOldx;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1073)
				Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1073)
				Jx = tmp2;
				HX_STACK_LINE(1074)
				Float tmp3 = this->jAccy;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1074)
				Float tmp4 = jOldy;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1074)
				Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1074)
				Jy = tmp5;
			}
			HX_STACK_LINE(1076)
			Float tmp = this->jAccz;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1076)
			Float tmp1 = jOldz;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1076)
			Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1076)
			Jz = tmp2;
		}
	}
	HX_STACK_LINE(1110)
	{
		HX_STACK_LINE(1111)
		{
			HX_STACK_LINE(1112)
			::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1112)
			Float t = tmp->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1121)
			Float tmp1 = (Jx * t);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1121)
			::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1121)
			hx::SubEq(tmp2->velx,tmp1);
			HX_STACK_LINE(1122)
			Float tmp3 = (Jy * t);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1122)
			::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1122)
			hx::SubEq(tmp4->vely,tmp3);
		}
		HX_STACK_LINE(1124)
		{
			HX_STACK_LINE(1125)
			::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1125)
			Float t = tmp->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1134)
			Float tmp1 = (Jx * t);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1134)
			::zpp_nape::phys::ZPP_Body tmp2 = this->b2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1134)
			hx::AddEq(tmp2->velx,tmp1);
			HX_STACK_LINE(1135)
			Float tmp3 = (Jy * t);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1135)
			::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1135)
			hx::AddEq(tmp4->vely,tmp3);
		}
		HX_STACK_LINE(1137)
		Float tmp = Jy;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1137)
		Float tmp1 = this->a1relx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1137)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1137)
		Float tmp3 = Jx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1137)
		Float tmp4 = this->a1rely;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1137)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1137)
		Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1137)
		Float tmp7 = Jz;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1137)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1137)
		::zpp_nape::phys::ZPP_Body tmp9 = this->b1;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1137)
		Float tmp10 = tmp9->iinertia;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1137)
		Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1137)
		::zpp_nape::phys::ZPP_Body tmp12 = this->b1;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1137)
		hx::SubEq(tmp12->angvel,tmp11);
		HX_STACK_LINE(1138)
		Float tmp13 = Jy;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1138)
		Float tmp14 = this->a2relx;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1138)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1138)
		Float tmp16 = Jx;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1138)
		Float tmp17 = this->a2rely;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1138)
		Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1138)
		Float tmp19 = (tmp15 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1138)
		Float tmp20 = Jz;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1138)
		Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1138)
		::zpp_nape::phys::ZPP_Body tmp22 = this->b2;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1138)
		Float tmp23 = tmp22->iinertia;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1138)
		Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1138)
		::zpp_nape::phys::ZPP_Body tmp25 = this->b2;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1138)
		hx::AddEq(tmp25->angvel,tmp24);
	}
	HX_STACK_LINE(1141)
	return false;
}


bool ZPP_WeldJoint_obj::applyImpulsePos( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_WeldJoint","applyImpulsePos",0x448b2c0e,"zpp_nape.constraint.ZPP_WeldJoint.applyImpulsePos","zpp_nape/constraint/WeldJoint.hx",1143,0xc793a26a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1144)
	Float r1x = ((Float)0.0);		HX_STACK_VAR(r1x,"r1x");
	HX_STACK_LINE(1145)
	Float r1y = ((Float)0.0);		HX_STACK_VAR(r1y,"r1y");
	HX_STACK_LINE(1147)
	{
		HX_STACK_LINE(1148)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1148)
		Float tmp1 = tmp->axisy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1148)
		Float tmp2 = this->a1localx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1148)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1148)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1148)
		Float tmp5 = tmp4->axisx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1148)
		Float tmp6 = this->a1localy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1148)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1148)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1148)
		r1x = tmp8;
		HX_STACK_LINE(1149)
		Float tmp9 = this->a1localx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1149)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1149)
		Float tmp11 = tmp10->axisx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1149)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1149)
		Float tmp13 = this->a1localy;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1149)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b1;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1149)
		Float tmp15 = tmp14->axisy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1149)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1149)
		Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1149)
		r1y = tmp17;
	}
	HX_STACK_LINE(1152)
	Float r2x = ((Float)0.0);		HX_STACK_VAR(r2x,"r2x");
	HX_STACK_LINE(1153)
	Float r2y = ((Float)0.0);		HX_STACK_VAR(r2y,"r2y");
	HX_STACK_LINE(1155)
	{
		HX_STACK_LINE(1156)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1156)
		Float tmp1 = tmp->axisy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1156)
		Float tmp2 = this->a2localx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1156)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1156)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1156)
		Float tmp5 = tmp4->axisx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1156)
		Float tmp6 = this->a2localy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1156)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1156)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1156)
		r2x = tmp8;
		HX_STACK_LINE(1157)
		Float tmp9 = this->a2localx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1157)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b2;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1157)
		Float tmp11 = tmp10->axisx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1157)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1157)
		Float tmp13 = this->a2localy;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1157)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1157)
		Float tmp15 = tmp14->axisy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1157)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1157)
		Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1157)
		r2y = tmp17;
	}
	HX_STACK_LINE(1160)
	Float Ex = ((Float)0.0);		HX_STACK_VAR(Ex,"Ex");
	HX_STACK_LINE(1161)
	Float Ey = ((Float)0.0);		HX_STACK_VAR(Ey,"Ey");
	HX_STACK_LINE(1162)
	Float Ez = ((Float)0.0);		HX_STACK_VAR(Ez,"Ez");
	HX_STACK_LINE(1163)
	{
		HX_STACK_LINE(1164)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1164)
		Float tmp1 = tmp->posx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1164)
		Float tmp2 = r2x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1164)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1164)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1164)
		Float tmp5 = tmp4->posx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1164)
		Float tmp6 = r1x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1164)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1164)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1164)
		Ex = tmp8;
		HX_STACK_LINE(1165)
		::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1165)
		Float tmp10 = tmp9->posy;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1165)
		Float tmp11 = r2y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1165)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1165)
		::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1165)
		Float tmp14 = tmp13->posy;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1165)
		Float tmp15 = r1y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1165)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1165)
		Float tmp17 = (tmp12 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1165)
		Ey = tmp17;
		HX_STACK_LINE(1166)
		::zpp_nape::phys::ZPP_Body tmp18 = this->b2;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1166)
		Float tmp19 = tmp18->rot;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1166)
		::zpp_nape::phys::ZPP_Body tmp20 = this->b1;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1166)
		Float tmp21 = tmp20->rot;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1166)
		Float tmp22 = (tmp19 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1166)
		Float tmp23 = this->phase;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1166)
		Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1166)
		Ez = tmp24;
	}
	HX_STACK_LINE(1168)
	Float Jx = ((Float)0.0);		HX_STACK_VAR(Jx,"Jx");
	HX_STACK_LINE(1169)
	Float Jy = ((Float)0.0);		HX_STACK_VAR(Jy,"Jy");
	HX_STACK_LINE(1170)
	Float Jz = ((Float)0.0);		HX_STACK_VAR(Jz,"Jz");
	HX_STACK_LINE(1171)
	bool tmp = this->breakUnderError;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1171)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1171)
	if ((tmp)){
		HX_STACK_LINE(1171)
		Float tmp2 = (Ex * Ex);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1171)
		Float tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1171)
		Float tmp4 = (Ey * Ey);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1171)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1171)
		Float tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1171)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1171)
		Float tmp8 = (Ez * Ez);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1171)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1171)
		Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1171)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1171)
		Float tmp12 = this->maxError;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1171)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1171)
		Float tmp14 = this->maxError;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1171)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1171)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1171)
		Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1171)
		tmp1 = (tmp11 > tmp17);
	}
	else{
		HX_STACK_LINE(1171)
		tmp1 = false;
	}
	HX_STACK_LINE(1171)
	if ((tmp1)){
		HX_STACK_LINE(1171)
		return true;
	}
	HX_STACK_LINE(1172)
	bool cont = true;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(1173)
	Float tmp2 = (Ex * Ex);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1173)
	Float tmp3 = (Ey * Ey);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1173)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1173)
	Float tmp5 = ::nape::Config_obj::constraintLinearSlop;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1173)
	Float tmp6 = ::nape::Config_obj::constraintLinearSlop;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1173)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1173)
	bool tmp8 = (tmp4 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1173)
	if ((tmp8)){
		HX_STACK_LINE(1174)
		cont = false;
		HX_STACK_LINE(1175)
		{
			HX_STACK_LINE(1176)
			Ex = (int)0;
			HX_STACK_LINE(1177)
			Ey = (int)0;
			HX_STACK_LINE(1186)
			{
			}
		}
	}
	HX_STACK_LINE(1196)
	Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1196)
	tmp9 = (Ez * Ez);
	HX_STACK_LINE(1196)
	Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1196)
	{
		HX_STACK_LINE(1196)
		Float tmp11 = ::nape::Config_obj::constraintAngularSlop;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1196)
		Float x = tmp11;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1196)
		tmp10 = (x * x);
	}
	HX_STACK_LINE(1196)
	bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1196)
	if ((tmp11)){
		HX_STACK_LINE(1197)
		bool tmp12 = cont;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1197)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1197)
		if ((tmp13)){
			HX_STACK_LINE(1197)
			return false;
		}
		else{
			HX_STACK_LINE(1198)
			Ez = (int)0;
		}
	}
	HX_STACK_LINE(1200)
	{
		HX_STACK_LINE(1201)
		Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(1202)
		{
			HX_STACK_LINE(1203)
			Float t1 = t;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(1212)
			hx::MultEq(Ex,t1);
			HX_STACK_LINE(1213)
			hx::MultEq(Ey,t1);
		}
		HX_STACK_LINE(1215)
		hx::MultEq(Ez,t);
	}
	HX_STACK_LINE(1217)
	Float tmp12 = (Ex * Ex);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1217)
	Float tmp13 = (Ey * Ey);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1217)
	Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1217)
	bool tmp15 = (tmp14 > (int)6);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1217)
	if ((tmp15)){
		HX_STACK_LINE(1218)
		::zpp_nape::phys::ZPP_Body tmp16 = this->b1;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1218)
		Float tmp17 = tmp16->smass;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1218)
		::zpp_nape::phys::ZPP_Body tmp18 = this->b2;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1218)
		Float tmp19 = tmp18->smass;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1218)
		Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1218)
		Float k = tmp20;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(1219)
		Float tmp21 = k;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1219)
		Float tmp22 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1219)
		bool tmp23 = (tmp21 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1219)
		if ((tmp23)){
			HX_STACK_LINE(1220)
			Float tmp24 = (Float(((Float)0.75)) / Float(k));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1220)
			k = tmp24;
			HX_STACK_LINE(1221)
			{
				HX_STACK_LINE(1222)
				Float tmp25 = Ex;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1222)
				Float tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1222)
				Float tmp27 = k;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1222)
				Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1222)
				Jx = tmp28;
				HX_STACK_LINE(1223)
				Float tmp29 = Ey;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1223)
				Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1223)
				Float tmp31 = k;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1223)
				Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1223)
				Jy = tmp32;
				HX_STACK_LINE(1232)
				{
				}
			}
			HX_STACK_LINE(1241)
			{
				HX_STACK_LINE(1242)
				int t = (int)20;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1251)
				Float tmp25 = (Jx * Jx);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1251)
				Float tmp26 = (Jy * Jy);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1251)
				Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1251)
				Float ls = tmp27;		HX_STACK_VAR(ls,"ls");
				HX_STACK_LINE(1252)
				Float tmp28 = ls;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1252)
				int tmp29 = (t * t);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1252)
				bool tmp30 = (tmp28 > tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1252)
				if ((tmp30)){
					HX_STACK_LINE(1262)
					int tmp31 = t;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1262)
					Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1262)
					{
						HX_STACK_LINE(1262)
						Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1262)
						{
							HX_STACK_LINE(1262)
							Float tmp34 = ls;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1262)
							tmp33 = ::Math_obj::sqrt(tmp34);
						}
						HX_STACK_LINE(1262)
						tmp32 = (Float(((Float)1.0)) / Float(tmp33));
					}
					HX_STACK_LINE(1262)
					Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1262)
					Float t1 = tmp33;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(1271)
					hx::MultEq(Jx,t1);
					HX_STACK_LINE(1272)
					hx::MultEq(Jy,t1);
				}
			}
			HX_STACK_LINE(1276)
			{
				HX_STACK_LINE(1277)
				::zpp_nape::phys::ZPP_Body tmp25 = this->b1;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1277)
				Float t = tmp25->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1286)
				Float tmp26 = (Jx * t);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1286)
				::zpp_nape::phys::ZPP_Body tmp27 = this->b1;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1286)
				hx::SubEq(tmp27->posx,tmp26);
				HX_STACK_LINE(1287)
				Float tmp28 = (Jy * t);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1287)
				::zpp_nape::phys::ZPP_Body tmp29 = this->b1;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1287)
				hx::SubEq(tmp29->posy,tmp28);
			}
			HX_STACK_LINE(1289)
			{
				HX_STACK_LINE(1290)
				::zpp_nape::phys::ZPP_Body tmp25 = this->b2;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1290)
				Float t = tmp25->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1299)
				Float tmp26 = (Jx * t);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1299)
				::zpp_nape::phys::ZPP_Body tmp27 = this->b2;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1299)
				hx::AddEq(tmp27->posx,tmp26);
				HX_STACK_LINE(1300)
				Float tmp28 = (Jy * t);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1300)
				::zpp_nape::phys::ZPP_Body tmp29 = this->b2;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1300)
				hx::AddEq(tmp29->posy,tmp28);
			}
			HX_STACK_LINE(1302)
			{
				HX_STACK_LINE(1303)
				::zpp_nape::phys::ZPP_Body tmp25 = this->b2;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1303)
				Float tmp26 = tmp25->posx;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1303)
				Float tmp27 = r2x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1303)
				Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1303)
				::zpp_nape::phys::ZPP_Body tmp29 = this->b1;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1303)
				Float tmp30 = tmp29->posx;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1303)
				Float tmp31 = r1x;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1303)
				Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1303)
				Float tmp33 = (tmp28 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1303)
				Ex = tmp33;
				HX_STACK_LINE(1304)
				::zpp_nape::phys::ZPP_Body tmp34 = this->b2;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1304)
				Float tmp35 = tmp34->posy;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1304)
				Float tmp36 = r2y;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1304)
				Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1304)
				::zpp_nape::phys::ZPP_Body tmp38 = this->b1;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1304)
				Float tmp39 = tmp38->posy;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1304)
				Float tmp40 = r1y;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1304)
				Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1304)
				Float tmp42 = (tmp37 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1304)
				Ey = tmp42;
				HX_STACK_LINE(1305)
				::zpp_nape::phys::ZPP_Body tmp43 = this->b2;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1305)
				Float tmp44 = tmp43->rot;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1305)
				::zpp_nape::phys::ZPP_Body tmp45 = this->b1;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1305)
				Float tmp46 = tmp45->rot;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1305)
				Float tmp47 = (tmp44 - tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(1305)
				Float tmp48 = this->phase;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(1305)
				Float tmp49 = (tmp47 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(1305)
				Ez = tmp49;
			}
			HX_STACK_LINE(1307)
			{
				HX_STACK_LINE(1308)
				Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1309)
				{
					HX_STACK_LINE(1310)
					Float t1 = t;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(1319)
					hx::MultEq(Ex,t1);
					HX_STACK_LINE(1320)
					hx::MultEq(Ey,t1);
				}
				HX_STACK_LINE(1322)
				hx::MultEq(Ez,t);
			}
		}
	}
	HX_STACK_LINE(1326)
	Float Ka = ((Float)0.0);		HX_STACK_VAR(Ka,"Ka");
	HX_STACK_LINE(1327)
	Float Kb = ((Float)0.0);		HX_STACK_VAR(Kb,"Kb");
	HX_STACK_LINE(1328)
	Float Kd = ((Float)0.0);		HX_STACK_VAR(Kd,"Kd");
	HX_STACK_LINE(1329)
	Float Kc = ((Float)0.0);		HX_STACK_VAR(Kc,"Kc");
	HX_STACK_LINE(1330)
	Float Ke = ((Float)0.0);		HX_STACK_VAR(Ke,"Ke");
	HX_STACK_LINE(1331)
	Float Kf = ((Float)0.0);		HX_STACK_VAR(Kf,"Kf");
	HX_STACK_LINE(1332)
	{
		HX_STACK_LINE(1333)
		::zpp_nape::phys::ZPP_Body tmp16 = this->b1;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1333)
		Float tmp17 = tmp16->smass;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1333)
		::zpp_nape::phys::ZPP_Body tmp18 = this->b2;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1333)
		Float tmp19 = tmp18->smass;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1333)
		Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1333)
		Float m = tmp20;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(1334)
		{
			HX_STACK_LINE(1335)
			Ka = m;
			HX_STACK_LINE(1336)
			Kb = (int)0;
			HX_STACK_LINE(1337)
			Kd = m;
			HX_STACK_LINE(1338)
			Kc = (int)0;
			HX_STACK_LINE(1339)
			Ke = (int)0;
			HX_STACK_LINE(1340)
			Kf = (int)0;
		}
		HX_STACK_LINE(1342)
		::zpp_nape::phys::ZPP_Body tmp21 = this->b1;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1342)
		Float tmp22 = tmp21->sinertia;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1342)
		bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1342)
		if ((tmp23)){
			HX_STACK_LINE(1343)
			Float tmp24 = r1x;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1343)
			::zpp_nape::phys::ZPP_Body tmp25 = this->b1;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1343)
			Float tmp26 = tmp25->sinertia;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1343)
			Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1343)
			Float X = tmp27;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(1344)
			Float tmp28 = r1y;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1344)
			::zpp_nape::phys::ZPP_Body tmp29 = this->b1;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1344)
			Float tmp30 = tmp29->sinertia;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1344)
			Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1344)
			Float Y = tmp31;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(1345)
			{
				HX_STACK_LINE(1346)
				Float tmp32 = (Y * r1y);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1346)
				hx::AddEq(Ka,tmp32);
				HX_STACK_LINE(1347)
				Float tmp33 = Y;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1347)
				Float tmp34 = -(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1347)
				Float tmp35 = r1x;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1347)
				Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1347)
				hx::AddEq(Kb,tmp36);
				HX_STACK_LINE(1348)
				Float tmp37 = (X * r1x);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1348)
				hx::AddEq(Kd,tmp37);
				HX_STACK_LINE(1349)
				Float tmp38 = Y;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1349)
				Float tmp39 = -(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1349)
				hx::AddEq(Kc,tmp39);
				HX_STACK_LINE(1350)
				hx::AddEq(Ke,X);
				HX_STACK_LINE(1351)
				::zpp_nape::phys::ZPP_Body tmp40 = this->b1;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1351)
				hx::AddEq(Kf,tmp40->sinertia);
			}
		}
		HX_STACK_LINE(1354)
		::zpp_nape::phys::ZPP_Body tmp24 = this->b2;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1354)
		Float tmp25 = tmp24->sinertia;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1354)
		bool tmp26 = (tmp25 != (int)0);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1354)
		if ((tmp26)){
			HX_STACK_LINE(1355)
			Float tmp27 = r2x;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1355)
			::zpp_nape::phys::ZPP_Body tmp28 = this->b2;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1355)
			Float tmp29 = tmp28->sinertia;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1355)
			Float tmp30 = (tmp27 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1355)
			Float X = tmp30;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(1356)
			Float tmp31 = r2y;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1356)
			::zpp_nape::phys::ZPP_Body tmp32 = this->b2;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1356)
			Float tmp33 = tmp32->sinertia;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1356)
			Float tmp34 = (tmp31 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1356)
			Float Y = tmp34;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(1357)
			{
				HX_STACK_LINE(1358)
				Float tmp35 = (Y * r2y);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1358)
				hx::AddEq(Ka,tmp35);
				HX_STACK_LINE(1359)
				Float tmp36 = Y;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1359)
				Float tmp37 = -(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1359)
				Float tmp38 = r2x;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1359)
				Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1359)
				hx::AddEq(Kb,tmp39);
				HX_STACK_LINE(1360)
				Float tmp40 = (X * r2x);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1360)
				hx::AddEq(Kd,tmp40);
				HX_STACK_LINE(1361)
				Float tmp41 = Y;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1361)
				Float tmp42 = -(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1361)
				hx::AddEq(Kc,tmp42);
				HX_STACK_LINE(1362)
				hx::AddEq(Ke,X);
				HX_STACK_LINE(1363)
				::zpp_nape::phys::ZPP_Body tmp43 = this->b2;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1363)
				hx::AddEq(Kf,tmp43->sinertia);
			}
		}
	}
	HX_STACK_LINE(1367)
	{
		HX_STACK_LINE(1368)
		{
			HX_STACK_LINE(1369)
			Float tmp16 = Ex;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1369)
			Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1369)
			Jx = tmp17;
			HX_STACK_LINE(1370)
			Float tmp18 = Ey;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1370)
			Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1370)
			Jy = tmp19;
			HX_STACK_LINE(1379)
			{
			}
		}
		HX_STACK_LINE(1388)
		Float tmp16 = Ez;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1388)
		Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1388)
		Jz = tmp17;
	}
	HX_STACK_LINE(1390)
	{
		HX_STACK_LINE(1391)
		int t = (int)6;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(1400)
		Float tmp16 = (Jx * Jx);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1400)
		Float tmp17 = (Jy * Jy);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1400)
		Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1400)
		Float ls = tmp18;		HX_STACK_VAR(ls,"ls");
		HX_STACK_LINE(1401)
		Float tmp19 = ls;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1401)
		int tmp20 = (t * t);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1401)
		bool tmp21 = (tmp19 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1401)
		if ((tmp21)){
			HX_STACK_LINE(1411)
			int tmp22 = t;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1411)
			Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1411)
			{
				HX_STACK_LINE(1411)
				Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1411)
				{
					HX_STACK_LINE(1411)
					Float tmp25 = ls;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1411)
					tmp24 = ::Math_obj::sqrt(tmp25);
				}
				HX_STACK_LINE(1411)
				tmp23 = (Float(((Float)1.0)) / Float(tmp24));
			}
			HX_STACK_LINE(1411)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1411)
			Float t1 = tmp24;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(1420)
			hx::MultEq(Jx,t1);
			HX_STACK_LINE(1421)
			hx::MultEq(Jy,t1);
		}
	}
	HX_STACK_LINE(1425)
	{
		HX_STACK_LINE(1425)
		Float tmp16 = ((Float)-0.25);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1425)
		Float a = tmp16;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1425)
		bool tmp17 = (Jz < a);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1425)
		if ((tmp17)){
			HX_STACK_LINE(1425)
			a;
		}
		else{
			HX_STACK_LINE(1425)
			bool tmp18 = (Jz > ((Float)0.25));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1425)
			if ((tmp18)){
				HX_STACK_LINE(1425)
				((Float)0.25);
			}
			else{
				HX_STACK_LINE(1425)
				Jz;
			}
		}
	}
	HX_STACK_LINE(1426)
	{
		HX_STACK_LINE(1427)
		Float tmp16 = Ka;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1427)
		Float tmp17 = (Kd * Kf);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1427)
		Float tmp18 = (Ke * Ke);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1427)
		Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1427)
		Float tmp20 = (tmp16 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1427)
		Float tmp21 = Kb;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1427)
		Float tmp22 = (Kc * Ke);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1427)
		Float tmp23 = (Kb * Kf);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1427)
		Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1427)
		Float tmp25 = (tmp21 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1427)
		Float tmp26 = (tmp20 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1427)
		Float tmp27 = Kc;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1427)
		Float tmp28 = (Kb * Ke);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1427)
		Float tmp29 = (Kc * Kd);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1427)
		Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1427)
		Float tmp31 = (tmp27 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1427)
		Float tmp32 = (tmp26 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1427)
		Float det = tmp32;		HX_STACK_VAR(det,"det");
		HX_STACK_LINE(1428)
		bool tmp33 = (det != det);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1428)
		if ((tmp33)){
			HX_STACK_LINE(1428)
			Float tmp34 = Jz = (int)0;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1428)
			Float tmp35 = Jy = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1428)
			Jx = tmp35;
		}
		else{
			HX_STACK_LINE(1429)
			bool tmp34 = (det == (int)0);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1429)
			if ((tmp34)){
				HX_STACK_LINE(1430)
				bool tmp35 = (Ka != (int)0);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1430)
				if ((tmp35)){
					HX_STACK_LINE(1430)
					hx::DivEq(Jx,Ka);
				}
				else{
					HX_STACK_LINE(1431)
					Jx = (int)0;
				}
				HX_STACK_LINE(1432)
				bool tmp36 = (Kd != (int)0);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1432)
				if ((tmp36)){
					HX_STACK_LINE(1432)
					hx::DivEq(Jy,Kd);
				}
				else{
					HX_STACK_LINE(1433)
					Jy = (int)0;
				}
				HX_STACK_LINE(1434)
				bool tmp37 = (Kf != (int)0);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1434)
				if ((tmp37)){
					HX_STACK_LINE(1434)
					hx::DivEq(Jz,Kf);
				}
				else{
					HX_STACK_LINE(1435)
					Jz = (int)0;
				}
			}
			else{
				HX_STACK_LINE(1438)
				Float tmp35 = (Float((int)1) / Float(det));		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1438)
				det = tmp35;
				HX_STACK_LINE(1439)
				Float tmp36 = (Ke * Kc);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1439)
				Float tmp37 = (Kb * Kf);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1439)
				Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1439)
				Float B = tmp38;		HX_STACK_VAR(B,"B");
				HX_STACK_LINE(1440)
				Float tmp39 = (Kb * Ke);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1440)
				Float tmp40 = (Kc * Kd);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1440)
				Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1440)
				Float C = tmp41;		HX_STACK_VAR(C,"C");
				HX_STACK_LINE(1441)
				Float tmp42 = (Kb * Kc);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1441)
				Float tmp43 = (Ka * Ke);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1441)
				Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1441)
				Float E = tmp44;		HX_STACK_VAR(E,"E");
				HX_STACK_LINE(1442)
				Float tmp45 = det;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1442)
				Float tmp46 = Jx;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1442)
				Float tmp47 = (Kd * Kf);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(1442)
				Float tmp48 = (Ke * Ke);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(1442)
				Float tmp49 = (tmp47 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(1442)
				Float tmp50 = (tmp46 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1442)
				Float tmp51 = (Jy * B);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1442)
				Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(1442)
				Float tmp53 = (Jz * C);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(1442)
				Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(1442)
				Float tmp55 = (tmp45 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(1442)
				Float X = tmp55;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(1443)
				Float tmp56 = det;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(1443)
				Float tmp57 = (Jx * B);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(1443)
				Float tmp58 = Jy;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(1443)
				Float tmp59 = (Ka * Kf);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(1443)
				Float tmp60 = (Kc * Kc);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(1443)
				Float tmp61 = (tmp59 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(1443)
				Float tmp62 = (tmp58 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(1443)
				Float tmp63 = (tmp57 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(1443)
				Float tmp64 = (Jz * E);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(1443)
				Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(1443)
				Float tmp66 = (tmp56 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(1443)
				Float Y = tmp66;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(1444)
				Float tmp67 = det;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(1444)
				Float tmp68 = (Jx * C);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(1444)
				Float tmp69 = (Jy * E);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(1444)
				Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(1444)
				Float tmp71 = Jz;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(1444)
				Float tmp72 = (Ka * Kd);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(1444)
				Float tmp73 = (Kb * Kb);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(1444)
				Float tmp74 = (tmp72 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(1444)
				Float tmp75 = (tmp71 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(1444)
				Float tmp76 = (tmp70 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(1444)
				Float tmp77 = (tmp67 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(1444)
				Jz = tmp77;
				HX_STACK_LINE(1445)
				{
					HX_STACK_LINE(1446)
					Jx = X;
					HX_STACK_LINE(1447)
					Jy = Y;
					HX_STACK_LINE(1456)
					{
					}
				}
			}
		}
	}
	HX_STACK_LINE(1468)
	{
		HX_STACK_LINE(1469)
		{
			HX_STACK_LINE(1470)
			::zpp_nape::phys::ZPP_Body tmp16 = this->b1;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1470)
			Float t = tmp16->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1479)
			Float tmp17 = (Jx * t);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1479)
			::zpp_nape::phys::ZPP_Body tmp18 = this->b1;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1479)
			hx::SubEq(tmp18->posx,tmp17);
			HX_STACK_LINE(1480)
			Float tmp19 = (Jy * t);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1480)
			::zpp_nape::phys::ZPP_Body tmp20 = this->b1;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1480)
			hx::SubEq(tmp20->posy,tmp19);
		}
		HX_STACK_LINE(1482)
		{
			HX_STACK_LINE(1483)
			::zpp_nape::phys::ZPP_Body tmp16 = this->b2;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1483)
			Float t = tmp16->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1492)
			Float tmp17 = (Jx * t);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1492)
			::zpp_nape::phys::ZPP_Body tmp18 = this->b2;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1492)
			hx::AddEq(tmp18->posx,tmp17);
			HX_STACK_LINE(1493)
			Float tmp19 = (Jy * t);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1493)
			::zpp_nape::phys::ZPP_Body tmp20 = this->b2;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1493)
			hx::AddEq(tmp20->posy,tmp19);
		}
		HX_STACK_LINE(1495)
		{
			HX_STACK_LINE(1495)
			::zpp_nape::phys::ZPP_Body tmp16 = this->b1;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1495)
			::zpp_nape::phys::ZPP_Body _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1495)
			Float tmp17 = (Jy * r1x);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1495)
			Float tmp18 = (Jx * r1y);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1495)
			Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1495)
			Float tmp20 = Jz;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1495)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1495)
			Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1495)
			::zpp_nape::phys::ZPP_Body tmp23 = this->b1;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1495)
			Float tmp24 = tmp23->iinertia;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1495)
			Float tmp25 = (tmp22 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1495)
			Float dr = tmp25;		HX_STACK_VAR(dr,"dr");
			HX_STACK_LINE(1495)
			hx::AddEq(_this->rot,dr);
			HX_STACK_LINE(1495)
			Float tmp26 = (dr * dr);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1495)
			bool tmp27 = (tmp26 > ((Float)0.0001));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1495)
			if ((tmp27)){
				HX_STACK_LINE(1495)
				Float tmp28 = _this->rot;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1495)
				Float tmp29 = ::Math_obj::sin(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1495)
				_this->axisx = tmp29;
				HX_STACK_LINE(1495)
				Float tmp30 = _this->rot;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1495)
				Float tmp31 = ::Math_obj::cos(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1495)
				_this->axisy = tmp31;
				HX_STACK_LINE(1495)
				Dynamic();
			}
			else{
				HX_STACK_LINE(1495)
				Float tmp28 = (dr * dr);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1495)
				Float d2 = tmp28;		HX_STACK_VAR(d2,"d2");
				HX_STACK_LINE(1495)
				Float tmp29 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1495)
				Float tmp30 = ((int)1 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1495)
				Float p = tmp30;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1495)
				Float tmp31 = (d2 * d2);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1495)
				Float tmp32 = (Float(tmp31) / Float((int)8));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1495)
				Float tmp33 = ((int)1 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1495)
				Float m = tmp33;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(1495)
				Float tmp34 = (p * _this->axisx);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1495)
				Float tmp35 = (dr * _this->axisy);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1495)
				Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1495)
				Float tmp37 = m;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1495)
				Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1495)
				Float nx = tmp38;		HX_STACK_VAR(nx,"nx");
				HX_STACK_LINE(1495)
				Float tmp39 = (p * _this->axisy);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1495)
				Float tmp40 = (dr * _this->axisx);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1495)
				Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1495)
				Float tmp42 = m;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1495)
				Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1495)
				_this->axisy = tmp43;
				HX_STACK_LINE(1495)
				_this->axisx = nx;
			}
		}
		HX_STACK_LINE(1496)
		{
			HX_STACK_LINE(1496)
			::zpp_nape::phys::ZPP_Body tmp16 = this->b2;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1496)
			::zpp_nape::phys::ZPP_Body _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1496)
			Float tmp17 = (Jy * r2x);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1496)
			Float tmp18 = (Jx * r2y);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1496)
			Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1496)
			Float tmp20 = Jz;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1496)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1496)
			::zpp_nape::phys::ZPP_Body tmp22 = this->b2;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1496)
			Float tmp23 = tmp22->iinertia;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1496)
			Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1496)
			Float dr = tmp24;		HX_STACK_VAR(dr,"dr");
			HX_STACK_LINE(1496)
			hx::AddEq(_this->rot,dr);
			HX_STACK_LINE(1496)
			Float tmp25 = (dr * dr);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1496)
			bool tmp26 = (tmp25 > ((Float)0.0001));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1496)
			if ((tmp26)){
				HX_STACK_LINE(1496)
				Float tmp27 = _this->rot;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1496)
				Float tmp28 = ::Math_obj::sin(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1496)
				_this->axisx = tmp28;
				HX_STACK_LINE(1496)
				Float tmp29 = _this->rot;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1496)
				Float tmp30 = ::Math_obj::cos(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1496)
				_this->axisy = tmp30;
				HX_STACK_LINE(1496)
				Dynamic();
			}
			else{
				HX_STACK_LINE(1496)
				Float tmp27 = (dr * dr);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1496)
				Float d2 = tmp27;		HX_STACK_VAR(d2,"d2");
				HX_STACK_LINE(1496)
				Float tmp28 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1496)
				Float tmp29 = ((int)1 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1496)
				Float p = tmp29;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1496)
				Float tmp30 = (d2 * d2);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1496)
				Float tmp31 = (Float(tmp30) / Float((int)8));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1496)
				Float tmp32 = ((int)1 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1496)
				Float m = tmp32;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(1496)
				Float tmp33 = (p * _this->axisx);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1496)
				Float tmp34 = (dr * _this->axisy);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1496)
				Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1496)
				Float tmp36 = m;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1496)
				Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1496)
				Float nx = tmp37;		HX_STACK_VAR(nx,"nx");
				HX_STACK_LINE(1496)
				Float tmp38 = (p * _this->axisy);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1496)
				Float tmp39 = (dr * _this->axisx);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1496)
				Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1496)
				Float tmp41 = m;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1496)
				Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1496)
				_this->axisy = tmp42;
				HX_STACK_LINE(1496)
				_this->axisx = nx;
			}
		}
	}
	HX_STACK_LINE(1529)
	return false;
}


Void ZPP_WeldJoint_obj::draw( ::nape::util::Debug g){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_WeldJoint","draw",0x1718dd43,"zpp_nape.constraint.ZPP_WeldJoint.draw","zpp_nape/constraint/WeldJoint.hx",1531,0xc793a26a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
	}
return null();
}



ZPP_WeldJoint_obj::ZPP_WeldJoint_obj()
{
}

void ZPP_WeldJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_WeldJoint);
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
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
	HX_MARK_MEMBER_NAME(phase,"phase");
	HX_MARK_MEMBER_NAME(kMassa,"kMassa");
	HX_MARK_MEMBER_NAME(kMassb,"kMassb");
	HX_MARK_MEMBER_NAME(kMassd,"kMassd");
	HX_MARK_MEMBER_NAME(kMassc,"kMassc");
	HX_MARK_MEMBER_NAME(kMasse,"kMasse");
	HX_MARK_MEMBER_NAME(kMassf,"kMassf");
	HX_MARK_MEMBER_NAME(jAccx,"jAccx");
	HX_MARK_MEMBER_NAME(jAccy,"jAccy");
	HX_MARK_MEMBER_NAME(jAccz,"jAccz");
	HX_MARK_MEMBER_NAME(jMax,"jMax");
	HX_MARK_MEMBER_NAME(gamma,"gamma");
	HX_MARK_MEMBER_NAME(biasx,"biasx");
	HX_MARK_MEMBER_NAME(biasy,"biasy");
	HX_MARK_MEMBER_NAME(biasz,"biasz");
	HX_MARK_MEMBER_NAME(stepped,"stepped");
	::zpp_nape::constraint::ZPP_Constraint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_WeldJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
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
	HX_VISIT_MEMBER_NAME(phase,"phase");
	HX_VISIT_MEMBER_NAME(kMassa,"kMassa");
	HX_VISIT_MEMBER_NAME(kMassb,"kMassb");
	HX_VISIT_MEMBER_NAME(kMassd,"kMassd");
	HX_VISIT_MEMBER_NAME(kMassc,"kMassc");
	HX_VISIT_MEMBER_NAME(kMasse,"kMasse");
	HX_VISIT_MEMBER_NAME(kMassf,"kMassf");
	HX_VISIT_MEMBER_NAME(jAccx,"jAccx");
	HX_VISIT_MEMBER_NAME(jAccy,"jAccy");
	HX_VISIT_MEMBER_NAME(jAccz,"jAccz");
	HX_VISIT_MEMBER_NAME(jMax,"jMax");
	HX_VISIT_MEMBER_NAME(gamma,"gamma");
	HX_VISIT_MEMBER_NAME(biasx,"biasx");
	HX_VISIT_MEMBER_NAME(biasy,"biasy");
	HX_VISIT_MEMBER_NAME(biasz,"biasz");
	HX_VISIT_MEMBER_NAME(stepped,"stepped");
	::zpp_nape::constraint::ZPP_Constraint_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_WeldJoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b1") ) { return b1; }
		if (HX_FIELD_EQ(inName,"b2") ) { return b2; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jMax") ) { return jMax; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"phase") ) { return phase; }
		if (HX_FIELD_EQ(inName,"jAccx") ) { return jAccx; }
		if (HX_FIELD_EQ(inName,"jAccy") ) { return jAccy; }
		if (HX_FIELD_EQ(inName,"jAccz") ) { return jAccz; }
		if (HX_FIELD_EQ(inName,"gamma") ) { return gamma; }
		if (HX_FIELD_EQ(inName,"biasx") ) { return biasx; }
		if (HX_FIELD_EQ(inName,"biasy") ) { return biasy; }
		if (HX_FIELD_EQ(inName,"biasz") ) { return biasz; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"a1relx") ) { return a1relx; }
		if (HX_FIELD_EQ(inName,"a1rely") ) { return a1rely; }
		if (HX_FIELD_EQ(inName,"a2relx") ) { return a2relx; }
		if (HX_FIELD_EQ(inName,"a2rely") ) { return a2rely; }
		if (HX_FIELD_EQ(inName,"kMassa") ) { return kMassa; }
		if (HX_FIELD_EQ(inName,"kMassb") ) { return kMassb; }
		if (HX_FIELD_EQ(inName,"kMassd") ) { return kMassd; }
		if (HX_FIELD_EQ(inName,"kMassc") ) { return kMassc; }
		if (HX_FIELD_EQ(inName,"kMasse") ) { return kMasse; }
		if (HX_FIELD_EQ(inName,"kMassf") ) { return kMassf; }
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

Dynamic ZPP_WeldJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"b1") ) { b1=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b2") ) { b2=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jMax") ) { jMax=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"phase") ) { phase=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jAccx") ) { jAccx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jAccy") ) { jAccy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jAccz") ) { jAccz=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gamma") ) { gamma=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"biasx") ) { biasx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"biasy") ) { biasy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"biasz") ) { biasz=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"a1relx") ) { a1relx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1rely") ) { a1rely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2relx") ) { a2relx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2rely") ) { a2rely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassa") ) { kMassa=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassb") ) { kMassb=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassd") ) { kMassd=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassc") ) { kMassc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMasse") ) { kMasse=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassf") ) { kMassf=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrap_a1") ) { wrap_a1=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_a2") ) { wrap_a2=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepped") ) { stepped=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::constraint::WeldJoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1localx") ) { a1localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1localy") ) { a1localy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2localx") ) { a2localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2localy") ) { a2localy=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_WeldJoint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_WeldJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"));
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
	outFields->push(HX_HCSTRING("phase","\x3b","\x28","\xe9","\xc1"));
	outFields->push(HX_HCSTRING("kMassa","\x82","\xa0","\x7f","\x5e"));
	outFields->push(HX_HCSTRING("kMassb","\x83","\xa0","\x7f","\x5e"));
	outFields->push(HX_HCSTRING("kMassd","\x85","\xa0","\x7f","\x5e"));
	outFields->push(HX_HCSTRING("kMassc","\x84","\xa0","\x7f","\x5e"));
	outFields->push(HX_HCSTRING("kMasse","\x86","\xa0","\x7f","\x5e"));
	outFields->push(HX_HCSTRING("kMassf","\x87","\xa0","\x7f","\x5e"));
	outFields->push(HX_HCSTRING("jAccx","\xa1","\xd1","\xbb","\x33"));
	outFields->push(HX_HCSTRING("jAccy","\xa2","\xd1","\xbb","\x33"));
	outFields->push(HX_HCSTRING("jAccz","\xa3","\xd1","\xbb","\x33"));
	outFields->push(HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46"));
	outFields->push(HX_HCSTRING("gamma","\x27","\x87","\xb6","\x8e"));
	outFields->push(HX_HCSTRING("biasx","\xdf","\x3f","\xf6","\xb2"));
	outFields->push(HX_HCSTRING("biasy","\xe0","\x3f","\xf6","\xb2"));
	outFields->push(HX_HCSTRING("biasz","\xe1","\x3f","\xf6","\xb2"));
	outFields->push(HX_HCSTRING("stepped","\x03","\x05","\x60","\x81"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::constraint::WeldJoint*/ ,(int)offsetof(ZPP_WeldJoint_obj,outer_zn),HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_WeldJoint_obj,b1),HX_HCSTRING("b1","\x8f","\x55","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,a1localx),HX_HCSTRING("a1localx","\x5d","\x6d","\x78","\xfb")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,a1localy),HX_HCSTRING("a1localy","\x5e","\x6d","\x78","\xfb")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,a1relx),HX_HCSTRING("a1relx","\xaf","\xc1","\xe7","\x4a")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,a1rely),HX_HCSTRING("a1rely","\xb0","\xc1","\xe7","\x4a")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_WeldJoint_obj,wrap_a1),HX_HCSTRING("wrap_a1","\x45","\xeb","\x57","\x0d")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_WeldJoint_obj,b2),HX_HCSTRING("b2","\x90","\x55","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,a2localx),HX_HCSTRING("a2localx","\x1e","\xe4","\x0d","\x25")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,a2localy),HX_HCSTRING("a2localy","\x1f","\xe4","\x0d","\x25")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,a2relx),HX_HCSTRING("a2relx","\x30","\x56","\x4e","\xde")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,a2rely),HX_HCSTRING("a2rely","\x31","\x56","\x4e","\xde")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_WeldJoint_obj,wrap_a2),HX_HCSTRING("wrap_a2","\x46","\xeb","\x57","\x0d")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,phase),HX_HCSTRING("phase","\x3b","\x28","\xe9","\xc1")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,kMassa),HX_HCSTRING("kMassa","\x82","\xa0","\x7f","\x5e")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,kMassb),HX_HCSTRING("kMassb","\x83","\xa0","\x7f","\x5e")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,kMassd),HX_HCSTRING("kMassd","\x85","\xa0","\x7f","\x5e")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,kMassc),HX_HCSTRING("kMassc","\x84","\xa0","\x7f","\x5e")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,kMasse),HX_HCSTRING("kMasse","\x86","\xa0","\x7f","\x5e")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,kMassf),HX_HCSTRING("kMassf","\x87","\xa0","\x7f","\x5e")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,jAccx),HX_HCSTRING("jAccx","\xa1","\xd1","\xbb","\x33")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,jAccy),HX_HCSTRING("jAccy","\xa2","\xd1","\xbb","\x33")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,jAccz),HX_HCSTRING("jAccz","\xa3","\xd1","\xbb","\x33")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,jMax),HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,gamma),HX_HCSTRING("gamma","\x27","\x87","\xb6","\x8e")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,biasx),HX_HCSTRING("biasx","\xdf","\x3f","\xf6","\xb2")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,biasy),HX_HCSTRING("biasy","\xe0","\x3f","\xf6","\xb2")},
	{hx::fsFloat,(int)offsetof(ZPP_WeldJoint_obj,biasz),HX_HCSTRING("biasz","\xe1","\x3f","\xf6","\xb2")},
	{hx::fsBool,(int)offsetof(ZPP_WeldJoint_obj,stepped),HX_HCSTRING("stepped","\x03","\x05","\x60","\x81")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"),
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
	HX_HCSTRING("phase","\x3b","\x28","\xe9","\xc1"),
	HX_HCSTRING("kMassa","\x82","\xa0","\x7f","\x5e"),
	HX_HCSTRING("kMassb","\x83","\xa0","\x7f","\x5e"),
	HX_HCSTRING("kMassd","\x85","\xa0","\x7f","\x5e"),
	HX_HCSTRING("kMassc","\x84","\xa0","\x7f","\x5e"),
	HX_HCSTRING("kMasse","\x86","\xa0","\x7f","\x5e"),
	HX_HCSTRING("kMassf","\x87","\xa0","\x7f","\x5e"),
	HX_HCSTRING("jAccx","\xa1","\xd1","\xbb","\x33"),
	HX_HCSTRING("jAccy","\xa2","\xd1","\xbb","\x33"),
	HX_HCSTRING("jAccz","\xa3","\xd1","\xbb","\x33"),
	HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46"),
	HX_HCSTRING("gamma","\x27","\x87","\xb6","\x8e"),
	HX_HCSTRING("biasx","\xdf","\x3f","\xf6","\xb2"),
	HX_HCSTRING("biasy","\xe0","\x3f","\xf6","\xb2"),
	HX_HCSTRING("biasz","\xe1","\x3f","\xf6","\xb2"),
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
	HX_MARK_MEMBER_NAME(ZPP_WeldJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_WeldJoint_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_WeldJoint_obj::__mClass;

void ZPP_WeldJoint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.constraint.ZPP_WeldJoint","\x8f","\x37","\x47","\x94");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_WeldJoint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_WeldJoint_obj >;
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
