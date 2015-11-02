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

Void ZPP_PivotJoint_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.constraint.ZPP_PivotJoint","new",0x51312e0f,"zpp_nape.constraint.ZPP_PivotJoint.new","zpp_nape/constraint/PivotJoint.hx",174,0x4ef23406)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(324)
	this->stepped = false;
	HX_STACK_LINE(323)
	this->biasy = ((Float)0.0);
	HX_STACK_LINE(322)
	this->biasx = ((Float)0.0);
	HX_STACK_LINE(321)
	this->gamma = ((Float)0.0);
	HX_STACK_LINE(320)
	this->jMax = ((Float)0.0);
	HX_STACK_LINE(319)
	this->jAccy = ((Float)0.0);
	HX_STACK_LINE(318)
	this->jAccx = ((Float)0.0);
	HX_STACK_LINE(317)
	this->kMassc = ((Float)0.0);
	HX_STACK_LINE(316)
	this->kMassb = ((Float)0.0);
	HX_STACK_LINE(315)
	this->kMassa = ((Float)0.0);
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
	HX_STACK_LINE(373)
	super::__construct();
	HX_STACK_LINE(374)
	this->stepped = false;
	HX_STACK_LINE(375)
	{
		HX_STACK_LINE(376)
		this->jAccx = (int)0;
		HX_STACK_LINE(377)
		this->jAccy = (int)0;
		HX_STACK_LINE(386)
		{
		}
	}
	HX_STACK_LINE(395)
	Float tmp = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(395)
	this->jMax = tmp;
	HX_STACK_LINE(396)
	{
		HX_STACK_LINE(397)
		{
			HX_STACK_LINE(398)
			this->a1localx = (int)0;
			HX_STACK_LINE(399)
			this->a1localy = (int)0;
			HX_STACK_LINE(408)
			{
			}
		}
		HX_STACK_LINE(417)
		{
			HX_STACK_LINE(418)
			this->a1relx = (int)0;
			HX_STACK_LINE(419)
			this->a1rely = (int)0;
			HX_STACK_LINE(428)
			{
			}
		}
	}
	HX_STACK_LINE(438)
	{
		HX_STACK_LINE(439)
		{
			HX_STACK_LINE(440)
			this->a2localx = (int)0;
			HX_STACK_LINE(441)
			this->a2localy = (int)0;
			HX_STACK_LINE(450)
			{
			}
		}
		HX_STACK_LINE(459)
		{
			HX_STACK_LINE(460)
			this->a2relx = (int)0;
			HX_STACK_LINE(461)
			this->a2rely = (int)0;
			HX_STACK_LINE(470)
			{
			}
		}
	}
}
;
	return null();
}

//ZPP_PivotJoint_obj::~ZPP_PivotJoint_obj() { }

Dynamic ZPP_PivotJoint_obj::__CreateEmpty() { return  new ZPP_PivotJoint_obj; }
hx::ObjectPtr< ZPP_PivotJoint_obj > ZPP_PivotJoint_obj::__new()
{  hx::ObjectPtr< ZPP_PivotJoint_obj > _result_ = new ZPP_PivotJoint_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_PivotJoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_PivotJoint_obj > _result_ = new ZPP_PivotJoint_obj();
	_result_->__construct();
	return _result_;}

::nape::geom::Vec3 ZPP_PivotJoint_obj::bodyImpulse( ::zpp_nape::phys::ZPP_Body b){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_PivotJoint","bodyImpulse",0x3bab9ae2,"zpp_nape.constraint.ZPP_PivotJoint.bodyImpulse","zpp_nape/constraint/PivotJoint.hx",176,0x4ef23406)
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
			Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(178)
			::nape::geom::Vec3 tmp16 = ::nape::geom::Vec3_obj::get(tmp5,tmp7,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(178)
			return tmp16;
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
			::nape::geom::Vec3 tmp13 = ::nape::geom::Vec3_obj::get(tmp4,tmp5,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(179)
			return tmp13;
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


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PivotJoint_obj,bodyImpulse,return )

Void ZPP_PivotJoint_obj::activeBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PivotJoint","activeBodies",0x66ef5e57,"zpp_nape.constraint.ZPP_PivotJoint.activeBodies","zpp_nape/constraint/PivotJoint.hx",183,0x4ef23406)
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


Void ZPP_PivotJoint_obj::inactiveBodies( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PivotJoint","inactiveBodies",0x5bb73bfc,"zpp_nape.constraint.ZPP_PivotJoint.inactiveBodies","zpp_nape/constraint/PivotJoint.hx",191,0x4ef23406)
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


Void ZPP_PivotJoint_obj::validate_a1( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PivotJoint","validate_a1",0xa6d5c0a8,"zpp_nape.constraint.ZPP_PivotJoint.validate_a1","zpp_nape/constraint/PivotJoint.hx",205,0x4ef23406)
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


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PivotJoint_obj,validate_a1,(void))

Void ZPP_PivotJoint_obj::invalidate_a1( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PivotJoint","invalidate_a1",0x73201ea3,"zpp_nape.constraint.ZPP_PivotJoint.invalidate_a1","zpp_nape/constraint/PivotJoint.hx",226,0x4ef23406)
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


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PivotJoint_obj,invalidate_a1,(void))

Void ZPP_PivotJoint_obj::setup_a1( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PivotJoint","setup_a1",0xba3ed063,"zpp_nape.constraint.ZPP_PivotJoint.setup_a1","zpp_nape/constraint/PivotJoint.hx",250,0x4ef23406)
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


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PivotJoint_obj,setup_a1,(void))

Void ZPP_PivotJoint_obj::validate_a2( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PivotJoint","validate_a2",0xa6d5c0a9,"zpp_nape.constraint.ZPP_PivotJoint.validate_a2","zpp_nape/constraint/PivotJoint.hx",263,0x4ef23406)
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


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PivotJoint_obj,validate_a2,(void))

Void ZPP_PivotJoint_obj::invalidate_a2( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PivotJoint","invalidate_a2",0x73201ea4,"zpp_nape.constraint.ZPP_PivotJoint.invalidate_a2","zpp_nape/constraint/PivotJoint.hx",284,0x4ef23406)
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


HX_DEFINE_DYNAMIC_FUNC1(ZPP_PivotJoint_obj,invalidate_a2,(void))

Void ZPP_PivotJoint_obj::setup_a2( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PivotJoint","setup_a2",0xba3ed064,"zpp_nape.constraint.ZPP_PivotJoint.setup_a2","zpp_nape/constraint/PivotJoint.hx",308,0x4ef23406)
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


HX_DEFINE_DYNAMIC_FUNC0(ZPP_PivotJoint_obj,setup_a2,(void))

::nape::constraint::Constraint ZPP_PivotJoint_obj::copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_PivotJoint","copy",0xb2995726,"zpp_nape.constraint.ZPP_PivotJoint.copy","zpp_nape/constraint/PivotJoint.hx",325,0x4ef23406)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dict,"dict")
	HX_STACK_ARG(todo,"todo")
	HX_STACK_LINE(326)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(326)
	{
		HX_STACK_LINE(326)
		::nape::constraint::PivotJoint tmp1 = this->outer_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(326)
		::nape::constraint::PivotJoint _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(326)
		::nape::geom::Vec2 tmp2 = _this->zpp_inner_zn->wrap_a1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(326)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(326)
		if ((tmp3)){
			HX_STACK_LINE(326)
			_this->zpp_inner_zn->setup_a1();
		}
		HX_STACK_LINE(326)
		tmp = _this->zpp_inner_zn->wrap_a1;
	}
	HX_STACK_LINE(326)
	::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(326)
	{
		HX_STACK_LINE(326)
		::nape::constraint::PivotJoint tmp2 = this->outer_zn;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(326)
		::nape::constraint::PivotJoint _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(326)
		::nape::geom::Vec2 tmp3 = _this->zpp_inner_zn->wrap_a2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(326)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(326)
		if ((tmp4)){
			HX_STACK_LINE(326)
			_this->zpp_inner_zn->setup_a2();
		}
		HX_STACK_LINE(326)
		tmp1 = _this->zpp_inner_zn->wrap_a2;
	}
	HX_STACK_LINE(326)
	::nape::constraint::PivotJoint tmp2 = ::nape::constraint::PivotJoint_obj::__new(null(),null(),tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(326)
	::nape::constraint::PivotJoint ret = tmp2;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(327)
	::nape::constraint::PivotJoint tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(327)
	this->copyto(tmp3);
	HX_STACK_LINE(328)
	{
		HX_STACK_LINE(329)
		bool tmp4 = (dict != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(329)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(329)
		if ((tmp4)){
			HX_STACK_LINE(329)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(329)
			::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(329)
			tmp5 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(329)
			tmp5 = false;
		}
		HX_STACK_LINE(329)
		if ((tmp5)){
			HX_STACK_LINE(338)
			::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(339)
			{
				HX_STACK_LINE(339)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(339)
				while((true)){
					HX_STACK_LINE(339)
					bool tmp6 = (_g < dict->length);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(339)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(339)
					if ((tmp7)){
						HX_STACK_LINE(339)
						break;
					}
					HX_STACK_LINE(339)
					::zpp_nape::constraint::ZPP_CopyHelper tmp8 = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(339)
					::zpp_nape::constraint::ZPP_CopyHelper idc = tmp8;		HX_STACK_VAR(idc,"idc");
					HX_STACK_LINE(339)
					++(_g);
					HX_STACK_LINE(340)
					int tmp9 = idc->id;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(340)
					::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(340)
					int tmp11 = tmp10->id;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(340)
					bool tmp12 = (tmp9 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(340)
					if ((tmp12)){
						HX_STACK_LINE(341)
						b = idc->bc;
						HX_STACK_LINE(342)
						break;
					}
				}
			}
			HX_STACK_LINE(345)
			bool tmp6 = (b != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(345)
			if ((tmp6)){
				HX_STACK_LINE(345)
				ret->zpp_inner_zn->b1 = b->zpp_inner;
			}
			else{
				HX_STACK_LINE(346)
				::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(346)
				int tmp8 = tmp7->id;		HX_STACK_VAR(tmp8,"tmp8");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::nape::constraint::PivotJoint,ret)
				int __ArgCount() const { return 1; }
				Void run(::nape::phys::Body b1){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","zpp_nape/constraint/PivotJoint.hx",346,0x4ef23406)
					HX_STACK_ARG(b1,"b1")
					{
						HX_STACK_LINE(346)
						ret->zpp_inner_zn->b1 = b1->zpp_inner;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(346)
				::zpp_nape::constraint::ZPP_CopyHelper tmp9 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(tmp8, Dynamic(new _Function_4_1(ret)));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(346)
				todo->push(tmp9);
			}
		}
	}
	HX_STACK_LINE(349)
	{
		HX_STACK_LINE(350)
		bool tmp4 = (dict != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(350)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(350)
		if ((tmp4)){
			HX_STACK_LINE(350)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(350)
			::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(350)
			tmp5 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(350)
			tmp5 = false;
		}
		HX_STACK_LINE(350)
		if ((tmp5)){
			HX_STACK_LINE(359)
			::nape::phys::Body b = null();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(360)
			{
				HX_STACK_LINE(360)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(360)
				while((true)){
					HX_STACK_LINE(360)
					bool tmp6 = (_g < dict->length);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(360)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(360)
					if ((tmp7)){
						HX_STACK_LINE(360)
						break;
					}
					HX_STACK_LINE(360)
					::zpp_nape::constraint::ZPP_CopyHelper tmp8 = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(360)
					::zpp_nape::constraint::ZPP_CopyHelper idc = tmp8;		HX_STACK_VAR(idc,"idc");
					HX_STACK_LINE(360)
					++(_g);
					HX_STACK_LINE(361)
					int tmp9 = idc->id;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(361)
					::zpp_nape::phys::ZPP_Body tmp10 = this->b2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(361)
					int tmp11 = tmp10->id;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(361)
					bool tmp12 = (tmp9 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(361)
					if ((tmp12)){
						HX_STACK_LINE(362)
						b = idc->bc;
						HX_STACK_LINE(363)
						break;
					}
				}
			}
			HX_STACK_LINE(366)
			bool tmp6 = (b != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(366)
			if ((tmp6)){
				HX_STACK_LINE(366)
				ret->zpp_inner_zn->b2 = b->zpp_inner;
			}
			else{
				HX_STACK_LINE(367)
				::zpp_nape::phys::ZPP_Body tmp7 = this->b2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(367)
				int tmp8 = tmp7->id;		HX_STACK_VAR(tmp8,"tmp8");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::nape::constraint::PivotJoint,ret)
				int __ArgCount() const { return 1; }
				Void run(::nape::phys::Body b1){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","zpp_nape/constraint/PivotJoint.hx",367,0x4ef23406)
					HX_STACK_ARG(b1,"b1")
					{
						HX_STACK_LINE(367)
						ret->zpp_inner_zn->b2 = b1->zpp_inner;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(367)
				::zpp_nape::constraint::ZPP_CopyHelper tmp9 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::todo(tmp8, Dynamic(new _Function_4_1(ret)));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(367)
				todo->push(tmp9);
			}
		}
	}
	HX_STACK_LINE(370)
	::nape::constraint::PivotJoint tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(370)
	return tmp4;
}


Void ZPP_PivotJoint_obj::validate( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PivotJoint","validate",0x9be97887,"zpp_nape.constraint.ZPP_PivotJoint.validate","zpp_nape/constraint/PivotJoint.hx",481,0x4ef23406)
		HX_STACK_THIS(this)
		HX_STACK_LINE(482)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(482)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(482)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(482)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(482)
		if ((tmp2)){
			HX_STACK_LINE(482)
			::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(482)
			::zpp_nape::phys::ZPP_Body tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(482)
			tmp3 = (tmp5 == null());
		}
		else{
			HX_STACK_LINE(482)
			tmp3 = true;
		}
		HX_STACK_LINE(482)
		if ((tmp3)){
			HX_STACK_LINE(482)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: PivotJoint cannot be simulated null bodies","\xaf","\xf3","\xba","\xa1"));
		}
		HX_STACK_LINE(483)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(483)
		::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(483)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(483)
		if ((tmp6)){
			HX_STACK_LINE(483)
			::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(483)
			::String tmp8 = tmp7->outer->toString();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(483)
			::String tmp9 = (HX_HCSTRING("Error: PivotJoint cannot be simulated with body1 == body2 (body1=body2=","\x54","\x9d","\xc6","\x0e") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(483)
			::String tmp10 = (tmp9 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(483)
			HX_STACK_DO_THROW(tmp10);
		}
		HX_STACK_LINE(484)
		::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(484)
		::zpp_nape::space::ZPP_Space tmp8 = tmp7->space;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(484)
		::zpp_nape::space::ZPP_Space tmp9 = this->space;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(484)
		bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(484)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(484)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(484)
		if ((tmp11)){
			HX_STACK_LINE(484)
			::zpp_nape::phys::ZPP_Body tmp13 = this->b2;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(484)
			::zpp_nape::phys::ZPP_Body tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(484)
			::zpp_nape::space::ZPP_Space tmp15 = tmp14->space;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(484)
			::zpp_nape::space::ZPP_Space tmp16 = this->space;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(484)
			::zpp_nape::space::ZPP_Space tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(484)
			tmp12 = (tmp15 != tmp17);
		}
		else{
			HX_STACK_LINE(484)
			tmp12 = true;
		}
		HX_STACK_LINE(484)
		if ((tmp12)){
			HX_STACK_LINE(484)
			::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(484)
			::String tmp14 = tmp13->outer->toString();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(484)
			::String tmp15 = (HX_HCSTRING("Error: Constraints must have each body within the same space to which the constraint has been assigned (body1=","\xfe","\x98","\x58","\xd3") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(484)
			::String tmp16 = (tmp15 + HX_HCSTRING(", body2=","\x61","\x88","\x43","\x62"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(484)
			::zpp_nape::phys::ZPP_Body tmp17 = this->b2;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(484)
			::String tmp18 = tmp17->outer->toString();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(484)
			::String tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(484)
			::String tmp20 = (tmp19 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(484)
			HX_STACK_DO_THROW(tmp20);
		}
		HX_STACK_LINE(485)
		::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(485)
		int tmp14 = tmp13->type;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(485)
		int tmp15 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(485)
		bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(485)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(485)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(485)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(485)
		if ((tmp18)){
			HX_STACK_LINE(485)
			::zpp_nape::phys::ZPP_Body tmp20 = this->b2;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(485)
			::zpp_nape::phys::ZPP_Body tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(485)
			int tmp22 = tmp21->type;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(485)
			int tmp23 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(485)
			int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(485)
			bool tmp25 = (tmp22 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(485)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(485)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(485)
			tmp19 = !(tmp27);
		}
		else{
			HX_STACK_LINE(485)
			tmp19 = false;
		}
		HX_STACK_LINE(485)
		if ((tmp19)){
			HX_STACK_LINE(485)
			::zpp_nape::phys::ZPP_Body tmp20 = this->b1;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(485)
			::String tmp21 = tmp20->outer->toString();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(485)
			::String tmp22 = (HX_HCSTRING("Error: Constraints cannot have both bodies non-dynamic (body1=","\xe1","\xda","\xd7","\x49") + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(485)
			::String tmp23 = (tmp22 + HX_HCSTRING(", body2=","\x61","\x88","\x43","\x62"));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(485)
			::zpp_nape::phys::ZPP_Body tmp24 = this->b2;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(485)
			::String tmp25 = tmp24->outer->toString();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(485)
			::String tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(485)
			::String tmp27 = (tmp26 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(485)
			HX_STACK_DO_THROW(tmp27);
		}
	}
return null();
}


Void ZPP_PivotJoint_obj::wake_connected( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PivotJoint","wake_connected",0x0ccf825f,"zpp_nape.constraint.ZPP_PivotJoint.wake_connected","zpp_nape/constraint/PivotJoint.hx",487,0x4ef23406)
		HX_STACK_THIS(this)
		HX_STACK_LINE(488)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(488)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(488)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(488)
		if ((tmp1)){
			HX_STACK_LINE(488)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(488)
			::zpp_nape::phys::ZPP_Body tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(488)
			int tmp5 = tmp4->type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(488)
			int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(488)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(488)
			tmp2 = (tmp5 == tmp7);
		}
		else{
			HX_STACK_LINE(488)
			tmp2 = false;
		}
		HX_STACK_LINE(488)
		if ((tmp2)){
			HX_STACK_LINE(488)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(488)
			tmp3->wake();
		}
		HX_STACK_LINE(489)
		::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(489)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(489)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(489)
		if ((tmp4)){
			HX_STACK_LINE(489)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(489)
			::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(489)
			int tmp8 = tmp7->type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(489)
			int tmp9 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(489)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(489)
			tmp5 = (tmp8 == tmp10);
		}
		else{
			HX_STACK_LINE(489)
			tmp5 = false;
		}
		HX_STACK_LINE(489)
		if ((tmp5)){
			HX_STACK_LINE(489)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(489)
			tmp6->wake();
		}
	}
return null();
}


Void ZPP_PivotJoint_obj::forest( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PivotJoint","forest",0xc14fa68e,"zpp_nape.constraint.ZPP_PivotJoint.forest","zpp_nape/constraint/PivotJoint.hx",491,0x4ef23406)
		HX_STACK_THIS(this)
		HX_STACK_LINE(492)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(492)
		int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(492)
		int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(492)
		bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(492)
		if ((tmp3)){
			HX_STACK_LINE(493)
			::zpp_nape::space::ZPP_Component tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(493)
			{
				HX_STACK_LINE(494)
				::zpp_nape::phys::ZPP_Body tmp5 = this->b1;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(494)
				::zpp_nape::space::ZPP_Component tmp6 = tmp5->component;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(494)
				::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(494)
				::zpp_nape::space::ZPP_Component tmp8 = tmp7->component->parent;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(494)
				bool tmp9 = (tmp6 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(494)
				if ((tmp9)){
					HX_STACK_LINE(494)
					::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(494)
					tmp4 = tmp10->component;
				}
				else{
					HX_STACK_LINE(496)
					::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(496)
					::zpp_nape::space::ZPP_Component obj = tmp10->component;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(497)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(498)
					while((true)){
						HX_STACK_LINE(498)
						bool tmp11 = (obj != obj->parent);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(498)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(498)
						if ((tmp12)){
							HX_STACK_LINE(498)
							break;
						}
						HX_STACK_LINE(499)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(500)
						obj->parent = stack;
						HX_STACK_LINE(501)
						stack = obj;
						HX_STACK_LINE(502)
						obj = nxt;
					}
					HX_STACK_LINE(504)
					while((true)){
						HX_STACK_LINE(504)
						bool tmp11 = (stack != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(504)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(504)
						if ((tmp12)){
							HX_STACK_LINE(504)
							break;
						}
						HX_STACK_LINE(505)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(506)
						stack->parent = obj;
						HX_STACK_LINE(507)
						stack = nxt;
					}
					HX_STACK_LINE(509)
					tmp4 = obj;
				}
			}
			HX_STACK_LINE(493)
			::zpp_nape::space::ZPP_Component xr = tmp4;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(512)
			::zpp_nape::space::ZPP_Component tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(512)
			{
				HX_STACK_LINE(513)
				::zpp_nape::space::ZPP_Component tmp6 = this->component;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(513)
				::zpp_nape::space::ZPP_Component tmp7 = this->component;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(513)
				::zpp_nape::space::ZPP_Component tmp8 = tmp7->parent;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(513)
				bool tmp9 = (tmp6 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(513)
				if ((tmp9)){
					HX_STACK_LINE(513)
					tmp5 = this->component;
				}
				else{
					HX_STACK_LINE(515)
					::zpp_nape::space::ZPP_Component tmp10 = this->component;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(515)
					::zpp_nape::space::ZPP_Component obj = tmp10;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(516)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(517)
					while((true)){
						HX_STACK_LINE(517)
						bool tmp11 = (obj != obj->parent);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(517)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(517)
						if ((tmp12)){
							HX_STACK_LINE(517)
							break;
						}
						HX_STACK_LINE(518)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(519)
						obj->parent = stack;
						HX_STACK_LINE(520)
						stack = obj;
						HX_STACK_LINE(521)
						obj = nxt;
					}
					HX_STACK_LINE(523)
					while((true)){
						HX_STACK_LINE(523)
						bool tmp11 = (stack != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(523)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(523)
						if ((tmp12)){
							HX_STACK_LINE(523)
							break;
						}
						HX_STACK_LINE(524)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(525)
						stack->parent = obj;
						HX_STACK_LINE(526)
						stack = nxt;
					}
					HX_STACK_LINE(528)
					tmp5 = obj;
				}
			}
			HX_STACK_LINE(512)
			::zpp_nape::space::ZPP_Component yr = tmp5;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(531)
			bool tmp6 = (xr != yr);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(531)
			if ((tmp6)){
				HX_STACK_LINE(532)
				bool tmp7 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(532)
				if ((tmp7)){
					HX_STACK_LINE(532)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(533)
					bool tmp8 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(533)
					if ((tmp8)){
						HX_STACK_LINE(533)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(535)
						yr->parent = xr;
						HX_STACK_LINE(536)
						(xr->rank)++;
					}
				}
			}
		}
		HX_STACK_LINE(540)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(540)
		int tmp5 = tmp4->type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(540)
		int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(540)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(540)
		if ((tmp7)){
			HX_STACK_LINE(541)
			::zpp_nape::space::ZPP_Component tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(541)
			{
				HX_STACK_LINE(542)
				::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(542)
				::zpp_nape::space::ZPP_Component tmp10 = tmp9->component;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(542)
				::zpp_nape::phys::ZPP_Body tmp11 = this->b2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(542)
				::zpp_nape::space::ZPP_Component tmp12 = tmp11->component->parent;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(542)
				bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(542)
				if ((tmp13)){
					HX_STACK_LINE(542)
					::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(542)
					tmp8 = tmp14->component;
				}
				else{
					HX_STACK_LINE(544)
					::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(544)
					::zpp_nape::space::ZPP_Component obj = tmp14->component;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(545)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(546)
					while((true)){
						HX_STACK_LINE(546)
						bool tmp15 = (obj != obj->parent);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(546)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(546)
						if ((tmp16)){
							HX_STACK_LINE(546)
							break;
						}
						HX_STACK_LINE(547)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(548)
						obj->parent = stack;
						HX_STACK_LINE(549)
						stack = obj;
						HX_STACK_LINE(550)
						obj = nxt;
					}
					HX_STACK_LINE(552)
					while((true)){
						HX_STACK_LINE(552)
						bool tmp15 = (stack != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(552)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(552)
						if ((tmp16)){
							HX_STACK_LINE(552)
							break;
						}
						HX_STACK_LINE(553)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(554)
						stack->parent = obj;
						HX_STACK_LINE(555)
						stack = nxt;
					}
					HX_STACK_LINE(557)
					tmp8 = obj;
				}
			}
			HX_STACK_LINE(541)
			::zpp_nape::space::ZPP_Component xr = tmp8;		HX_STACK_VAR(xr,"xr");
			HX_STACK_LINE(560)
			::zpp_nape::space::ZPP_Component tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(560)
			{
				HX_STACK_LINE(561)
				::zpp_nape::space::ZPP_Component tmp10 = this->component;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(561)
				::zpp_nape::space::ZPP_Component tmp11 = this->component;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(561)
				::zpp_nape::space::ZPP_Component tmp12 = tmp11->parent;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(561)
				bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(561)
				if ((tmp13)){
					HX_STACK_LINE(561)
					tmp9 = this->component;
				}
				else{
					HX_STACK_LINE(563)
					::zpp_nape::space::ZPP_Component tmp14 = this->component;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(563)
					::zpp_nape::space::ZPP_Component obj = tmp14;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(564)
					::zpp_nape::space::ZPP_Component stack = null();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(565)
					while((true)){
						HX_STACK_LINE(565)
						bool tmp15 = (obj != obj->parent);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(565)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(565)
						if ((tmp16)){
							HX_STACK_LINE(565)
							break;
						}
						HX_STACK_LINE(566)
						::zpp_nape::space::ZPP_Component nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(567)
						obj->parent = stack;
						HX_STACK_LINE(568)
						stack = obj;
						HX_STACK_LINE(569)
						obj = nxt;
					}
					HX_STACK_LINE(571)
					while((true)){
						HX_STACK_LINE(571)
						bool tmp15 = (stack != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(571)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(571)
						if ((tmp16)){
							HX_STACK_LINE(571)
							break;
						}
						HX_STACK_LINE(572)
						::zpp_nape::space::ZPP_Component nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
						HX_STACK_LINE(573)
						stack->parent = obj;
						HX_STACK_LINE(574)
						stack = nxt;
					}
					HX_STACK_LINE(576)
					tmp9 = obj;
				}
			}
			HX_STACK_LINE(560)
			::zpp_nape::space::ZPP_Component yr = tmp9;		HX_STACK_VAR(yr,"yr");
			HX_STACK_LINE(579)
			bool tmp10 = (xr != yr);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(579)
			if ((tmp10)){
				HX_STACK_LINE(580)
				bool tmp11 = (xr->rank < yr->rank);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(580)
				if ((tmp11)){
					HX_STACK_LINE(580)
					xr->parent = yr;
				}
				else{
					HX_STACK_LINE(581)
					bool tmp12 = (xr->rank > yr->rank);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(581)
					if ((tmp12)){
						HX_STACK_LINE(581)
						yr->parent = xr;
					}
					else{
						HX_STACK_LINE(583)
						yr->parent = xr;
						HX_STACK_LINE(584)
						(xr->rank)++;
					}
				}
			}
		}
	}
return null();
}


bool ZPP_PivotJoint_obj::pair_exists( int id,int di){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_PivotJoint","pair_exists",0x45618f50,"zpp_nape.constraint.ZPP_PivotJoint.pair_exists","zpp_nape/constraint/PivotJoint.hx",589,0x4ef23406)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(di,"di")
	HX_STACK_LINE(590)
	::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(590)
	int tmp1 = tmp->id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(590)
	int tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(590)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(590)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(590)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(590)
	if ((tmp4)){
		HX_STACK_LINE(590)
		::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(590)
		::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(590)
		::zpp_nape::phys::ZPP_Body tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(590)
		int tmp9 = tmp8->id;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(590)
		int tmp10 = di;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(590)
		tmp5 = (tmp9 == tmp10);
	}
	else{
		HX_STACK_LINE(590)
		tmp5 = false;
	}
	HX_STACK_LINE(590)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(590)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(590)
	if ((tmp6)){
		HX_STACK_LINE(590)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(590)
		::zpp_nape::phys::ZPP_Body tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(590)
		int tmp10 = tmp9->id;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(590)
		int tmp11 = di;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(590)
		bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(590)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(590)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(590)
		if ((tmp14)){
			HX_STACK_LINE(590)
			::zpp_nape::phys::ZPP_Body tmp15 = this->b2;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(590)
			::zpp_nape::phys::ZPP_Body tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(590)
			::zpp_nape::phys::ZPP_Body tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(590)
			int tmp18 = tmp17->id;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(590)
			int tmp19 = id;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(590)
			tmp7 = (tmp18 == tmp19);
		}
		else{
			HX_STACK_LINE(590)
			tmp7 = false;
		}
	}
	else{
		HX_STACK_LINE(590)
		tmp7 = true;
	}
	HX_STACK_LINE(590)
	return tmp7;
}


Void ZPP_PivotJoint_obj::clearcache( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PivotJoint","clearcache",0x24a5afc6,"zpp_nape.constraint.ZPP_PivotJoint.clearcache","zpp_nape/constraint/PivotJoint.hx",592,0x4ef23406)
		HX_STACK_THIS(this)
		HX_STACK_LINE(593)
		{
			HX_STACK_LINE(594)
			this->jAccx = (int)0;
			HX_STACK_LINE(595)
			this->jAccy = (int)0;
			HX_STACK_LINE(604)
			{
			}
		}
		HX_STACK_LINE(613)
		this->pre_dt = ((Float)-1.0);
	}
return null();
}


bool ZPP_PivotJoint_obj::preStep( Float dt){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_PivotJoint","preStep",0xaf30223e,"zpp_nape.constraint.ZPP_PivotJoint.preStep","zpp_nape/constraint/PivotJoint.hx",615,0x4ef23406)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dt,"dt")
	HX_STACK_LINE(616)
	Float tmp = this->pre_dt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(616)
	bool tmp1 = (tmp == ((Float)-1.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(616)
	if ((tmp1)){
		HX_STACK_LINE(616)
		this->pre_dt = dt;
	}
	HX_STACK_LINE(617)
	Float tmp2 = dt;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(617)
	Float tmp3 = this->pre_dt;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(617)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(617)
	Float dtratio = tmp4;		HX_STACK_VAR(dtratio,"dtratio");
	HX_STACK_LINE(618)
	this->pre_dt = dt;
	HX_STACK_LINE(619)
	this->stepped = true;
	HX_STACK_LINE(620)
	{
		HX_STACK_LINE(621)
		::zpp_nape::phys::ZPP_Body tmp5 = this->b1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(621)
		Float tmp6 = tmp5->axisy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(621)
		Float tmp7 = this->a1localx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(621)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(621)
		::zpp_nape::phys::ZPP_Body tmp9 = this->b1;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(621)
		Float tmp10 = tmp9->axisx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(621)
		Float tmp11 = this->a1localy;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(621)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(621)
		Float tmp13 = (tmp8 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(621)
		this->a1relx = tmp13;
		HX_STACK_LINE(622)
		Float tmp14 = this->a1localx;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(622)
		::zpp_nape::phys::ZPP_Body tmp15 = this->b1;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(622)
		Float tmp16 = tmp15->axisx;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(622)
		Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(622)
		Float tmp18 = this->a1localy;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(622)
		::zpp_nape::phys::ZPP_Body tmp19 = this->b1;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(622)
		Float tmp20 = tmp19->axisy;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(622)
		Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(622)
		Float tmp22 = (tmp17 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(622)
		this->a1rely = tmp22;
	}
	HX_STACK_LINE(624)
	{
		HX_STACK_LINE(625)
		::zpp_nape::phys::ZPP_Body tmp5 = this->b2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(625)
		Float tmp6 = tmp5->axisy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(625)
		Float tmp7 = this->a2localx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(625)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(625)
		::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(625)
		Float tmp10 = tmp9->axisx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(625)
		Float tmp11 = this->a2localy;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(625)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(625)
		Float tmp13 = (tmp8 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(625)
		this->a2relx = tmp13;
		HX_STACK_LINE(626)
		Float tmp14 = this->a2localx;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(626)
		::zpp_nape::phys::ZPP_Body tmp15 = this->b2;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(626)
		Float tmp16 = tmp15->axisx;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(626)
		Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(626)
		Float tmp18 = this->a2localy;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(626)
		::zpp_nape::phys::ZPP_Body tmp19 = this->b2;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(626)
		Float tmp20 = tmp19->axisy;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(626)
		Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(626)
		Float tmp22 = (tmp17 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(626)
		this->a2rely = tmp22;
	}
	HX_STACK_LINE(628)
	{
		HX_STACK_LINE(629)
		::zpp_nape::phys::ZPP_Body tmp5 = this->b1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(629)
		Float tmp6 = tmp5->smass;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(629)
		::zpp_nape::phys::ZPP_Body tmp7 = this->b2;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(629)
		Float tmp8 = tmp7->smass;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(629)
		Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(629)
		Float m = tmp9;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(630)
		{
			HX_STACK_LINE(631)
			this->kMassa = m;
			HX_STACK_LINE(632)
			this->kMassb = (int)0;
			HX_STACK_LINE(633)
			this->kMassc = m;
		}
		HX_STACK_LINE(635)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(635)
		Float tmp11 = tmp10->sinertia;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(635)
		bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(635)
		if ((tmp12)){
			HX_STACK_LINE(636)
			Float tmp13 = this->a1relx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(636)
			::zpp_nape::phys::ZPP_Body tmp14 = this->b1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(636)
			Float tmp15 = tmp14->sinertia;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(636)
			Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(636)
			Float X = tmp16;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(637)
			Float tmp17 = this->a1rely;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(637)
			::zpp_nape::phys::ZPP_Body tmp18 = this->b1;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(637)
			Float tmp19 = tmp18->sinertia;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(637)
			Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(637)
			Float Y = tmp20;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(638)
			{
				HX_STACK_LINE(639)
				Float tmp21 = Y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(639)
				Float tmp22 = this->a1rely;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(639)
				Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(639)
				hx::AddEq(this->kMassa,tmp23);
				HX_STACK_LINE(640)
				Float tmp24 = Y;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(640)
				Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(640)
				Float tmp26 = this->a1relx;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(640)
				Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(640)
				hx::AddEq(this->kMassb,tmp27);
				HX_STACK_LINE(641)
				Float tmp28 = X;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(641)
				Float tmp29 = this->a1relx;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(641)
				Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(641)
				hx::AddEq(this->kMassc,tmp30);
			}
		}
		HX_STACK_LINE(644)
		::zpp_nape::phys::ZPP_Body tmp13 = this->b2;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(644)
		Float tmp14 = tmp13->sinertia;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(644)
		bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(644)
		if ((tmp15)){
			HX_STACK_LINE(645)
			Float tmp16 = this->a2relx;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(645)
			::zpp_nape::phys::ZPP_Body tmp17 = this->b2;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(645)
			Float tmp18 = tmp17->sinertia;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(645)
			Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(645)
			Float X = tmp19;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(646)
			Float tmp20 = this->a2rely;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(646)
			::zpp_nape::phys::ZPP_Body tmp21 = this->b2;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(646)
			Float tmp22 = tmp21->sinertia;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(646)
			Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(646)
			Float Y = tmp23;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(647)
			{
				HX_STACK_LINE(648)
				Float tmp24 = Y;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(648)
				Float tmp25 = this->a2rely;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(648)
				Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(648)
				hx::AddEq(this->kMassa,tmp26);
				HX_STACK_LINE(649)
				Float tmp27 = Y;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(649)
				Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(649)
				Float tmp29 = this->a2relx;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(649)
				Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(649)
				hx::AddEq(this->kMassb,tmp30);
				HX_STACK_LINE(650)
				Float tmp31 = X;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(650)
				Float tmp32 = this->a2relx;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(650)
				Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(650)
				hx::AddEq(this->kMassc,tmp33);
			}
		}
	}
	HX_STACK_LINE(654)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(654)
	{
		HX_STACK_LINE(655)
		Float tmp6 = this->kMassa;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(655)
		Float tmp7 = this->kMassc;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(655)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(655)
		Float tmp9 = this->kMassb;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(655)
		Float tmp10 = this->kMassb;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(655)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(655)
		Float tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(655)
		Float det = tmp12;		HX_STACK_VAR(det,"det");
		HX_STACK_LINE(656)
		bool tmp13 = (det != det);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(656)
		if ((tmp13)){
			HX_STACK_LINE(657)
			Float tmp14 = this->kMassc = (int)0;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(657)
			Float tmp15 = this->kMassb = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(657)
			this->kMassa = tmp15;
			HX_STACK_LINE(658)
			tmp5 = (int)3;
		}
		else{
			HX_STACK_LINE(660)
			bool tmp14 = (det == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(660)
			if ((tmp14)){
				HX_STACK_LINE(661)
				int flag = (int)0;		HX_STACK_VAR(flag,"flag");
				HX_STACK_LINE(662)
				Float tmp15 = this->kMassa;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(662)
				bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(662)
				if ((tmp16)){
					HX_STACK_LINE(662)
					Float tmp17 = this->kMassa;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(662)
					Float tmp18 = (Float((int)1) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(662)
					this->kMassa = tmp18;
				}
				else{
					HX_STACK_LINE(664)
					this->kMassa = (int)0;
					HX_STACK_LINE(665)
					hx::OrEq(flag,(int)1);
				}
				HX_STACK_LINE(667)
				Float tmp17 = this->kMassc;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(667)
				bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(667)
				if ((tmp18)){
					HX_STACK_LINE(667)
					Float tmp19 = this->kMassc;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(667)
					Float tmp20 = (Float((int)1) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(667)
					this->kMassc = tmp20;
				}
				else{
					HX_STACK_LINE(669)
					this->kMassc = (int)0;
					HX_STACK_LINE(670)
					hx::OrEq(flag,(int)2);
				}
				HX_STACK_LINE(672)
				this->kMassb = (int)0;
				HX_STACK_LINE(673)
				tmp5 = flag;
			}
			else{
				HX_STACK_LINE(676)
				Float tmp15 = (Float((int)1) / Float(det));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(676)
				det = tmp15;
				HX_STACK_LINE(677)
				Float tmp16 = this->kMassc;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(677)
				Float tmp17 = det;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(677)
				Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(677)
				Float t = tmp18;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(678)
				Float tmp19 = this->kMassa;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(678)
				Float tmp20 = det;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(678)
				Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(678)
				this->kMassc = tmp21;
				HX_STACK_LINE(679)
				this->kMassa = t;
				HX_STACK_LINE(680)
				Float tmp22 = det;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(680)
				Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(680)
				hx::MultEq(this->kMassb,tmp23);
				HX_STACK_LINE(681)
				tmp5 = (int)0;
			}
		}
	}
	HX_STACK_LINE(654)
	int flag = tmp5;		HX_STACK_VAR(flag,"flag");
	HX_STACK_LINE(684)
	int tmp6 = (int(flag) & int((int)1));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(684)
	bool tmp7 = (tmp6 != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(684)
	if ((tmp7)){
		HX_STACK_LINE(684)
		this->jAccx = (int)0;
	}
	HX_STACK_LINE(685)
	int tmp8 = (int(flag) & int((int)2));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(685)
	bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(685)
	if ((tmp9)){
		HX_STACK_LINE(685)
		this->jAccy = (int)0;
	}
	HX_STACK_LINE(686)
	bool tmp10 = this->stiff;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(686)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(686)
	if ((tmp11)){
		HX_STACK_LINE(687)
		Float biasCoef;		HX_STACK_VAR(biasCoef,"biasCoef");
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(689)
			Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(689)
			{
				HX_STACK_LINE(690)
				Float tmp13 = ::Math_obj::PI;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(690)
				Float tmp14 = ((int)2 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(690)
				Float tmp15 = this->frequency;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(690)
				Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(690)
				Float omega = tmp16;		HX_STACK_VAR(omega,"omega");
				HX_STACK_LINE(691)
				Float tmp17 = (dt * omega);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(691)
				Float tmp18 = this->damping;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(691)
				Float tmp19 = ((int)2 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(691)
				Float tmp20 = (omega * dt);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(691)
				Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(691)
				Float tmp22 = (tmp17 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(691)
				Float tmp23 = (Float((int)1) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(691)
				this->gamma = tmp23;
				HX_STACK_LINE(692)
				Float tmp24 = this->gamma;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(692)
				Float tmp25 = ((int)1 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(692)
				Float tmp26 = (Float((int)1) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(692)
				Float ig = tmp26;		HX_STACK_VAR(ig,"ig");
				HX_STACK_LINE(693)
				Float tmp27 = (dt * omega);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(693)
				Float tmp28 = omega;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(693)
				Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(693)
				Float tmp30 = this->gamma;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(693)
				Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(693)
				biasCoef = tmp31;
				HX_STACK_LINE(694)
				hx::MultEq(this->gamma,ig);
				HX_STACK_LINE(695)
				tmp12 = ig;
			}
			HX_STACK_LINE(689)
			Float X = tmp12;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(697)
			hx::MultEq(this->kMassa,X);
			HX_STACK_LINE(698)
			hx::MultEq(this->kMassb,X);
			HX_STACK_LINE(699)
			hx::MultEq(this->kMassc,X);
		}
		HX_STACK_LINE(701)
		{
			HX_STACK_LINE(702)
			::zpp_nape::phys::ZPP_Body tmp12 = this->b2;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(702)
			Float tmp13 = tmp12->posx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(702)
			Float tmp14 = this->a2relx;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(702)
			Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(702)
			::zpp_nape::phys::ZPP_Body tmp16 = this->b1;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(702)
			Float tmp17 = tmp16->posx;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(702)
			Float tmp18 = this->a1relx;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(702)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(702)
			Float tmp20 = (tmp15 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(702)
			this->biasx = tmp20;
			HX_STACK_LINE(703)
			::zpp_nape::phys::ZPP_Body tmp21 = this->b2;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(703)
			Float tmp22 = tmp21->posy;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(703)
			Float tmp23 = this->a2rely;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(703)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(703)
			::zpp_nape::phys::ZPP_Body tmp25 = this->b1;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(703)
			Float tmp26 = tmp25->posy;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(703)
			Float tmp27 = this->a1rely;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(703)
			Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(703)
			Float tmp29 = (tmp24 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(703)
			this->biasy = tmp29;
		}
		HX_STACK_LINE(705)
		bool tmp12 = this->breakUnderError;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(705)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(705)
		if ((tmp12)){
			HX_STACK_LINE(705)
			Float tmp14 = this->biasx;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(705)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(705)
			Float tmp16 = this->biasx;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(705)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(705)
			Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(705)
			Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(705)
			Float tmp20 = this->biasy;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(705)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(705)
			Float tmp22 = this->biasy;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(705)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(705)
			Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(705)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(705)
			Float tmp26 = (tmp19 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(705)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(705)
			Float tmp28 = this->maxError;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(705)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(705)
			Float tmp30 = this->maxError;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(705)
			Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(705)
			Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(705)
			Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(705)
			tmp13 = (tmp27 > tmp33);
		}
		else{
			HX_STACK_LINE(705)
			tmp13 = false;
		}
		HX_STACK_LINE(705)
		if ((tmp13)){
			HX_STACK_LINE(705)
			return true;
		}
		HX_STACK_LINE(706)
		{
			HX_STACK_LINE(707)
			Float tmp14 = biasCoef;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(707)
			Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(707)
			Float t = tmp15;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(716)
			hx::MultEq(this->biasx,t);
			HX_STACK_LINE(717)
			hx::MultEq(this->biasy,t);
		}
		HX_STACK_LINE(719)
		{
			HX_STACK_LINE(720)
			Float tmp14 = this->maxError;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(720)
			Float t = tmp14;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(729)
			Float tmp15 = this->biasx;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(729)
			Float tmp16 = this->biasx;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(729)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(729)
			Float tmp18 = this->biasy;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(729)
			Float tmp19 = this->biasy;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(729)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(729)
			Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(729)
			Float ls = tmp21;		HX_STACK_VAR(ls,"ls");
			HX_STACK_LINE(730)
			Float tmp22 = ls;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(730)
			Float tmp23 = (t * t);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(730)
			bool tmp24 = (tmp22 > tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(730)
			if ((tmp24)){
				HX_STACK_LINE(740)
				Float tmp25 = t;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(740)
				Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(740)
				{
					HX_STACK_LINE(740)
					Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(740)
					{
						HX_STACK_LINE(740)
						Float tmp28 = ls;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(740)
						tmp27 = ::Math_obj::sqrt(tmp28);
					}
					HX_STACK_LINE(740)
					tmp26 = (Float(((Float)1.0)) / Float(tmp27));
				}
				HX_STACK_LINE(740)
				Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(740)
				Float t1 = tmp27;		HX_STACK_VAR(t1,"t1");
				HX_STACK_LINE(749)
				hx::MultEq(this->biasx,t1);
				HX_STACK_LINE(750)
				hx::MultEq(this->biasy,t1);
			}
		}
	}
	else{
		HX_STACK_LINE(756)
		{
			HX_STACK_LINE(757)
			this->biasx = (int)0;
			HX_STACK_LINE(758)
			this->biasy = (int)0;
			HX_STACK_LINE(767)
			{
			}
		}
		HX_STACK_LINE(776)
		this->gamma = (int)0;
	}
	HX_STACK_LINE(778)
	{
		HX_STACK_LINE(779)
		Float t = dtratio;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(788)
		hx::MultEq(this->jAccx,t);
		HX_STACK_LINE(789)
		hx::MultEq(this->jAccy,t);
	}
	HX_STACK_LINE(791)
	Float tmp12 = this->maxForce;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(791)
	Float tmp13 = dt;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(791)
	Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(791)
	this->jMax = tmp14;
	HX_STACK_LINE(792)
	return false;
}


Void ZPP_PivotJoint_obj::warmStart( ){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PivotJoint","warmStart",0x78f072cc,"zpp_nape.constraint.ZPP_PivotJoint.warmStart","zpp_nape/constraint/PivotJoint.hx",826,0x4ef23406)
		HX_STACK_THIS(this)
		HX_STACK_LINE(827)
		{
			HX_STACK_LINE(828)
			::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(828)
			Float t = tmp->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(837)
			Float tmp1 = this->jAccx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(837)
			Float tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(837)
			Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(837)
			::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(837)
			hx::SubEq(tmp4->velx,tmp3);
			HX_STACK_LINE(838)
			Float tmp5 = this->jAccy;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(838)
			Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(838)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(838)
			::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(838)
			hx::SubEq(tmp8->vely,tmp7);
		}
		HX_STACK_LINE(840)
		{
			HX_STACK_LINE(841)
			::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(841)
			Float t = tmp->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(850)
			Float tmp1 = this->jAccx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(850)
			Float tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(850)
			Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(850)
			::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(850)
			hx::AddEq(tmp4->velx,tmp3);
			HX_STACK_LINE(851)
			Float tmp5 = this->jAccy;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(851)
			Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(851)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(851)
			::zpp_nape::phys::ZPP_Body tmp8 = this->b2;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(851)
			hx::AddEq(tmp8->vely,tmp7);
		}
		HX_STACK_LINE(853)
		Float tmp = this->jAccy;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(853)
		Float tmp1 = this->a1relx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(853)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(853)
		Float tmp3 = this->jAccx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(853)
		Float tmp4 = this->a1rely;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(853)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(853)
		Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(853)
		::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(853)
		Float tmp8 = tmp7->iinertia;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(853)
		Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(853)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(853)
		hx::SubEq(tmp10->angvel,tmp9);
		HX_STACK_LINE(854)
		Float tmp11 = this->jAccy;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(854)
		Float tmp12 = this->a2relx;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(854)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(854)
		Float tmp14 = this->jAccx;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(854)
		Float tmp15 = this->a2rely;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(854)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(854)
		Float tmp17 = (tmp13 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(854)
		::zpp_nape::phys::ZPP_Body tmp18 = this->b2;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(854)
		Float tmp19 = tmp18->iinertia;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(854)
		Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(854)
		::zpp_nape::phys::ZPP_Body tmp21 = this->b2;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(854)
		hx::AddEq(tmp21->angvel,tmp20);
	}
return null();
}


bool ZPP_PivotJoint_obj::applyImpulseVel( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_PivotJoint","applyImpulseVel",0x63db6fe5,"zpp_nape.constraint.ZPP_PivotJoint.applyImpulseVel","zpp_nape/constraint/PivotJoint.hx",858,0x4ef23406)
	HX_STACK_THIS(this)
	HX_STACK_LINE(859)
	Float Ex = ((Float)0.0);		HX_STACK_VAR(Ex,"Ex");
	HX_STACK_LINE(860)
	Float Ey = ((Float)0.0);		HX_STACK_VAR(Ey,"Ey");
	HX_STACK_LINE(861)
	{
		HX_STACK_LINE(862)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(862)
		Float tmp1 = tmp->velx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(862)
		::zpp_nape::phys::ZPP_Body tmp2 = this->b2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(862)
		Float tmp3 = tmp2->kinvelx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(862)
		Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(862)
		Float tmp5 = this->a2rely;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(862)
		::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(862)
		Float tmp7 = tmp6->angvel;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(862)
		::zpp_nape::phys::ZPP_Body tmp8 = this->b2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(862)
		Float tmp9 = tmp8->kinangvel;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(862)
		Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(862)
		Float tmp11 = (tmp5 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(862)
		Float tmp12 = (tmp4 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(862)
		::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(862)
		Float tmp14 = tmp13->velx;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(862)
		::zpp_nape::phys::ZPP_Body tmp15 = this->b1;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(862)
		Float tmp16 = tmp15->kinvelx;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(862)
		Float tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(862)
		Float tmp18 = this->a1rely;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(862)
		::zpp_nape::phys::ZPP_Body tmp19 = this->b1;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(862)
		Float tmp20 = tmp19->angvel;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(862)
		::zpp_nape::phys::ZPP_Body tmp21 = this->b1;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(862)
		Float tmp22 = tmp21->kinangvel;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(862)
		Float tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(862)
		Float tmp24 = (tmp18 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(862)
		Float tmp25 = (tmp17 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(862)
		Float tmp26 = (tmp12 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(862)
		Ex = tmp26;
		HX_STACK_LINE(863)
		::zpp_nape::phys::ZPP_Body tmp27 = this->b2;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(863)
		Float tmp28 = tmp27->vely;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(863)
		::zpp_nape::phys::ZPP_Body tmp29 = this->b2;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(863)
		Float tmp30 = tmp29->kinvely;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(863)
		Float tmp31 = (tmp28 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(863)
		Float tmp32 = this->a2relx;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(863)
		::zpp_nape::phys::ZPP_Body tmp33 = this->b2;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(863)
		Float tmp34 = tmp33->angvel;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(863)
		::zpp_nape::phys::ZPP_Body tmp35 = this->b2;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(863)
		Float tmp36 = tmp35->kinangvel;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(863)
		Float tmp37 = (tmp34 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(863)
		Float tmp38 = (tmp32 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(863)
		Float tmp39 = (tmp31 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(863)
		::zpp_nape::phys::ZPP_Body tmp40 = this->b1;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(863)
		Float tmp41 = tmp40->vely;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(863)
		::zpp_nape::phys::ZPP_Body tmp42 = this->b1;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(863)
		Float tmp43 = tmp42->kinvely;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(863)
		Float tmp44 = (tmp41 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(863)
		Float tmp45 = this->a1relx;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(863)
		::zpp_nape::phys::ZPP_Body tmp46 = this->b1;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(863)
		Float tmp47 = tmp46->angvel;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(863)
		::zpp_nape::phys::ZPP_Body tmp48 = this->b1;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(863)
		Float tmp49 = tmp48->kinangvel;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(863)
		Float tmp50 = (tmp47 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(863)
		Float tmp51 = (tmp45 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(863)
		Float tmp52 = (tmp44 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(863)
		Float tmp53 = (tmp39 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(863)
		Ey = tmp53;
	}
	HX_STACK_LINE(865)
	Float Jx = ((Float)0.0);		HX_STACK_VAR(Jx,"Jx");
	HX_STACK_LINE(866)
	Float Jy = ((Float)0.0);		HX_STACK_VAR(Jy,"Jy");
	HX_STACK_LINE(867)
	{
		HX_STACK_LINE(868)
		Float tmp = this->biasx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(868)
		Float tmp1 = Ex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(868)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(868)
		Jx = tmp2;
		HX_STACK_LINE(869)
		Float tmp3 = this->biasy;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(869)
		Float tmp4 = Ey;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(869)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(869)
		Jy = tmp5;
	}
	HX_STACK_LINE(871)
	{
		HX_STACK_LINE(872)
		Float tmp = this->kMassa;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(872)
		Float tmp1 = Jx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(872)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(872)
		Float tmp3 = this->kMassb;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(872)
		Float tmp4 = Jy;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(872)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(872)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(872)
		Float t = tmp6;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(873)
		Float tmp7 = this->kMassb;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(873)
		Float tmp8 = Jx;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(873)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(873)
		Float tmp10 = this->kMassc;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(873)
		Float tmp11 = Jy;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(873)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(873)
		Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(873)
		Jy = tmp13;
		HX_STACK_LINE(874)
		Jx = t;
	}
	HX_STACK_LINE(876)
	{
		HX_STACK_LINE(877)
		Float tmp = this->gamma;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(877)
		Float t = tmp;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(886)
		Float tmp1 = this->jAccx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(886)
		Float tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(886)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(886)
		hx::SubEq(Jx,tmp3);
		HX_STACK_LINE(887)
		Float tmp4 = this->jAccy;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(887)
		Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(887)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(887)
		hx::SubEq(Jy,tmp6);
	}
	HX_STACK_LINE(889)
	{
		HX_STACK_LINE(890)
		Float jOldx = ((Float)0.0);		HX_STACK_VAR(jOldx,"jOldx");
		HX_STACK_LINE(891)
		Float jOldy = ((Float)0.0);		HX_STACK_VAR(jOldy,"jOldy");
		HX_STACK_LINE(892)
		{
			HX_STACK_LINE(893)
			Float tmp = this->jAccx;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(893)
			jOldx = tmp;
			HX_STACK_LINE(894)
			Float tmp1 = this->jAccy;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(894)
			jOldy = tmp1;
			HX_STACK_LINE(903)
			{
			}
		}
		HX_STACK_LINE(912)
		{
			HX_STACK_LINE(913)
			Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(922)
			Float tmp = (Jx * t);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(922)
			hx::AddEq(this->jAccx,tmp);
			HX_STACK_LINE(923)
			Float tmp1 = (Jy * t);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(923)
			hx::AddEq(this->jAccy,tmp1);
		}
		HX_STACK_LINE(925)
		{
			HX_STACK_LINE(926)
			bool tmp = this->breakUnderForce;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(926)
			if ((tmp)){
				HX_STACK_LINE(927)
				Float tmp1 = this->jAccx;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(927)
				Float tmp2 = this->jAccx;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(927)
				Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(927)
				Float tmp4 = this->jAccy;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(927)
				Float tmp5 = this->jAccy;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(927)
				Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(927)
				Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(927)
				Float tmp8 = this->jMax;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(927)
				Float tmp9 = this->jMax;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(927)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(927)
				bool tmp11 = (tmp7 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(927)
				if ((tmp11)){
					HX_STACK_LINE(927)
					return true;
				}
			}
			else{
				HX_STACK_LINE(929)
				bool tmp1 = this->stiff;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(929)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(929)
				if ((tmp2)){
					HX_STACK_LINE(930)
					Float tmp3 = this->jMax;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(930)
					Float t = tmp3;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(939)
					Float tmp4 = this->jAccx;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(939)
					Float tmp5 = this->jAccx;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(939)
					Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(939)
					Float tmp7 = this->jAccy;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(939)
					Float tmp8 = this->jAccy;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(939)
					Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(939)
					Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(939)
					Float ls = tmp10;		HX_STACK_VAR(ls,"ls");
					HX_STACK_LINE(940)
					Float tmp11 = ls;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(940)
					Float tmp12 = (t * t);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(940)
					bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(940)
					if ((tmp13)){
						HX_STACK_LINE(950)
						Float tmp14 = t;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(950)
						Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(950)
						{
							HX_STACK_LINE(950)
							Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(950)
							{
								HX_STACK_LINE(950)
								Float tmp17 = ls;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(950)
								tmp16 = ::Math_obj::sqrt(tmp17);
							}
							HX_STACK_LINE(950)
							tmp15 = (Float(((Float)1.0)) / Float(tmp16));
						}
						HX_STACK_LINE(950)
						Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(950)
						Float t1 = tmp16;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(959)
						hx::MultEq(this->jAccx,t1);
						HX_STACK_LINE(960)
						hx::MultEq(this->jAccy,t1);
					}
				}
			}
		}
		HX_STACK_LINE(965)
		{
			HX_STACK_LINE(966)
			Float tmp = this->jAccx;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(966)
			Float tmp1 = jOldx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(966)
			Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(966)
			Jx = tmp2;
			HX_STACK_LINE(967)
			Float tmp3 = this->jAccy;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(967)
			Float tmp4 = jOldy;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(967)
			Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(967)
			Jy = tmp5;
		}
	}
	HX_STACK_LINE(1001)
	{
		HX_STACK_LINE(1002)
		{
			HX_STACK_LINE(1003)
			::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1003)
			Float t = tmp->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1012)
			Float tmp1 = (Jx * t);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1012)
			::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1012)
			hx::SubEq(tmp2->velx,tmp1);
			HX_STACK_LINE(1013)
			Float tmp3 = (Jy * t);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1013)
			::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1013)
			hx::SubEq(tmp4->vely,tmp3);
		}
		HX_STACK_LINE(1015)
		{
			HX_STACK_LINE(1016)
			::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1016)
			Float t = tmp->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1025)
			Float tmp1 = (Jx * t);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1025)
			::zpp_nape::phys::ZPP_Body tmp2 = this->b2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1025)
			hx::AddEq(tmp2->velx,tmp1);
			HX_STACK_LINE(1026)
			Float tmp3 = (Jy * t);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1026)
			::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1026)
			hx::AddEq(tmp4->vely,tmp3);
		}
		HX_STACK_LINE(1028)
		Float tmp = Jy;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1028)
		Float tmp1 = this->a1relx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1028)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1028)
		Float tmp3 = Jx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1028)
		Float tmp4 = this->a1rely;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1028)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1028)
		Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1028)
		::zpp_nape::phys::ZPP_Body tmp7 = this->b1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1028)
		Float tmp8 = tmp7->iinertia;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1028)
		Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1028)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1028)
		hx::SubEq(tmp10->angvel,tmp9);
		HX_STACK_LINE(1029)
		Float tmp11 = Jy;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1029)
		Float tmp12 = this->a2relx;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1029)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1029)
		Float tmp14 = Jx;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1029)
		Float tmp15 = this->a2rely;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1029)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1029)
		Float tmp17 = (tmp13 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1029)
		::zpp_nape::phys::ZPP_Body tmp18 = this->b2;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1029)
		Float tmp19 = tmp18->iinertia;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1029)
		Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1029)
		::zpp_nape::phys::ZPP_Body tmp21 = this->b2;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1029)
		hx::AddEq(tmp21->angvel,tmp20);
	}
	HX_STACK_LINE(1032)
	return false;
}


bool ZPP_PivotJoint_obj::applyImpulsePos( ){
	HX_STACK_FRAME("zpp_nape.constraint.ZPP_PivotJoint","applyImpulsePos",0x63d6eb1c,"zpp_nape.constraint.ZPP_PivotJoint.applyImpulsePos","zpp_nape/constraint/PivotJoint.hx",1034,0x4ef23406)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1035)
	Float r1x = ((Float)0.0);		HX_STACK_VAR(r1x,"r1x");
	HX_STACK_LINE(1036)
	Float r1y = ((Float)0.0);		HX_STACK_VAR(r1y,"r1y");
	HX_STACK_LINE(1038)
	{
		HX_STACK_LINE(1039)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1039)
		Float tmp1 = tmp->axisy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1039)
		Float tmp2 = this->a1localx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1039)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1039)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1039)
		Float tmp5 = tmp4->axisx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1039)
		Float tmp6 = this->a1localy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1039)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1039)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1039)
		r1x = tmp8;
		HX_STACK_LINE(1040)
		Float tmp9 = this->a1localx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1040)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1040)
		Float tmp11 = tmp10->axisx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1040)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1040)
		Float tmp13 = this->a1localy;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1040)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b1;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1040)
		Float tmp15 = tmp14->axisy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1040)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1040)
		Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1040)
		r1y = tmp17;
	}
	HX_STACK_LINE(1043)
	Float r2x = ((Float)0.0);		HX_STACK_VAR(r2x,"r2x");
	HX_STACK_LINE(1044)
	Float r2y = ((Float)0.0);		HX_STACK_VAR(r2y,"r2y");
	HX_STACK_LINE(1046)
	{
		HX_STACK_LINE(1047)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1047)
		Float tmp1 = tmp->axisy;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1047)
		Float tmp2 = this->a2localx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1047)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1047)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1047)
		Float tmp5 = tmp4->axisx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1047)
		Float tmp6 = this->a2localy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1047)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1047)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1047)
		r2x = tmp8;
		HX_STACK_LINE(1048)
		Float tmp9 = this->a2localx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1048)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b2;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1048)
		Float tmp11 = tmp10->axisx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1048)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1048)
		Float tmp13 = this->a2localy;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1048)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b2;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1048)
		Float tmp15 = tmp14->axisy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1048)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1048)
		Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1048)
		r2y = tmp17;
	}
	HX_STACK_LINE(1051)
	Float Ex = ((Float)0.0);		HX_STACK_VAR(Ex,"Ex");
	HX_STACK_LINE(1052)
	Float Ey = ((Float)0.0);		HX_STACK_VAR(Ey,"Ey");
	HX_STACK_LINE(1053)
	{
		HX_STACK_LINE(1054)
		::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1054)
		Float tmp1 = tmp->posx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1054)
		Float tmp2 = r2x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1054)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1054)
		::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1054)
		Float tmp5 = tmp4->posx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1054)
		Float tmp6 = r1x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1054)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1054)
		Float tmp8 = (tmp3 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1054)
		Ex = tmp8;
		HX_STACK_LINE(1055)
		::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1055)
		Float tmp10 = tmp9->posy;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1055)
		Float tmp11 = r2y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1055)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1055)
		::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1055)
		Float tmp14 = tmp13->posy;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1055)
		Float tmp15 = r1y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1055)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1055)
		Float tmp17 = (tmp12 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1055)
		Ey = tmp17;
	}
	HX_STACK_LINE(1057)
	bool tmp = this->breakUnderError;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1057)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1057)
	if ((tmp)){
		HX_STACK_LINE(1057)
		Float tmp2 = (Ex * Ex);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1057)
		Float tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1057)
		Float tmp4 = (Ey * Ey);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1057)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1057)
		Float tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1057)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1057)
		Float tmp8 = this->maxError;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1057)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1057)
		Float tmp10 = this->maxError;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1057)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1057)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1057)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1057)
		tmp1 = (tmp7 > tmp13);
	}
	else{
		HX_STACK_LINE(1057)
		tmp1 = false;
	}
	HX_STACK_LINE(1057)
	if ((tmp1)){
		HX_STACK_LINE(1057)
		return true;
	}
	HX_STACK_LINE(1058)
	Float tmp2 = (Ex * Ex);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1058)
	Float tmp3 = (Ey * Ey);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1058)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1058)
	Float tmp5 = ::nape::Config_obj::constraintLinearSlop;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1058)
	Float tmp6 = ::nape::Config_obj::constraintLinearSlop;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1058)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1058)
	bool tmp8 = (tmp4 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1058)
	if ((tmp8)){
		HX_STACK_LINE(1058)
		return false;
	}
	HX_STACK_LINE(1059)
	{
		HX_STACK_LINE(1060)
		Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(1069)
		hx::MultEq(Ex,t);
		HX_STACK_LINE(1070)
		hx::MultEq(Ey,t);
	}
	HX_STACK_LINE(1072)
	Float Jx = ((Float)0.0);		HX_STACK_VAR(Jx,"Jx");
	HX_STACK_LINE(1073)
	Float Jy = ((Float)0.0);		HX_STACK_VAR(Jy,"Jy");
	HX_STACK_LINE(1074)
	Float tmp9 = (Ex * Ex);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1074)
	Float tmp10 = (Ey * Ey);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1074)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1074)
	bool tmp12 = (tmp11 > (int)6);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1074)
	if ((tmp12)){
		HX_STACK_LINE(1075)
		::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1075)
		Float tmp14 = tmp13->smass;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1075)
		::zpp_nape::phys::ZPP_Body tmp15 = this->b2;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1075)
		Float tmp16 = tmp15->smass;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1075)
		Float tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1075)
		Float k = tmp17;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(1076)
		Float tmp18 = k;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1076)
		Float tmp19 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1076)
		bool tmp20 = (tmp18 > tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1076)
		if ((tmp20)){
			HX_STACK_LINE(1077)
			Float tmp21 = (Float(((Float)0.75)) / Float(k));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1077)
			k = tmp21;
			HX_STACK_LINE(1078)
			{
				HX_STACK_LINE(1079)
				Float tmp22 = Ex;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1079)
				Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1079)
				Float tmp24 = k;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1079)
				Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1079)
				Jx = tmp25;
				HX_STACK_LINE(1080)
				Float tmp26 = Ey;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1080)
				Float tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1080)
				Float tmp28 = k;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1080)
				Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1080)
				Jy = tmp29;
				HX_STACK_LINE(1089)
				{
				}
			}
			HX_STACK_LINE(1098)
			{
				HX_STACK_LINE(1099)
				int t = (int)20;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1108)
				Float tmp22 = (Jx * Jx);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1108)
				Float tmp23 = (Jy * Jy);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1108)
				Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1108)
				Float ls = tmp24;		HX_STACK_VAR(ls,"ls");
				HX_STACK_LINE(1109)
				Float tmp25 = ls;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1109)
				int tmp26 = (t * t);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1109)
				bool tmp27 = (tmp25 > tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1109)
				if ((tmp27)){
					HX_STACK_LINE(1119)
					int tmp28 = t;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1119)
					Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1119)
					{
						HX_STACK_LINE(1119)
						Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1119)
						{
							HX_STACK_LINE(1119)
							Float tmp31 = ls;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1119)
							tmp30 = ::Math_obj::sqrt(tmp31);
						}
						HX_STACK_LINE(1119)
						tmp29 = (Float(((Float)1.0)) / Float(tmp30));
					}
					HX_STACK_LINE(1119)
					Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1119)
					Float t1 = tmp30;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(1128)
					hx::MultEq(Jx,t1);
					HX_STACK_LINE(1129)
					hx::MultEq(Jy,t1);
				}
			}
			HX_STACK_LINE(1133)
			{
				HX_STACK_LINE(1134)
				::zpp_nape::phys::ZPP_Body tmp22 = this->b1;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1134)
				Float t = tmp22->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1143)
				Float tmp23 = (Jx * t);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1143)
				::zpp_nape::phys::ZPP_Body tmp24 = this->b1;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1143)
				hx::SubEq(tmp24->posx,tmp23);
				HX_STACK_LINE(1144)
				Float tmp25 = (Jy * t);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1144)
				::zpp_nape::phys::ZPP_Body tmp26 = this->b1;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1144)
				hx::SubEq(tmp26->posy,tmp25);
			}
			HX_STACK_LINE(1146)
			{
				HX_STACK_LINE(1147)
				::zpp_nape::phys::ZPP_Body tmp22 = this->b2;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1147)
				Float t = tmp22->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1156)
				Float tmp23 = (Jx * t);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1156)
				::zpp_nape::phys::ZPP_Body tmp24 = this->b2;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1156)
				hx::AddEq(tmp24->posx,tmp23);
				HX_STACK_LINE(1157)
				Float tmp25 = (Jy * t);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1157)
				::zpp_nape::phys::ZPP_Body tmp26 = this->b2;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1157)
				hx::AddEq(tmp26->posy,tmp25);
			}
			HX_STACK_LINE(1159)
			{
				HX_STACK_LINE(1160)
				::zpp_nape::phys::ZPP_Body tmp22 = this->b2;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1160)
				Float tmp23 = tmp22->posx;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1160)
				Float tmp24 = r2x;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1160)
				Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1160)
				::zpp_nape::phys::ZPP_Body tmp26 = this->b1;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1160)
				Float tmp27 = tmp26->posx;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1160)
				Float tmp28 = r1x;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1160)
				Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1160)
				Float tmp30 = (tmp25 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1160)
				Ex = tmp30;
				HX_STACK_LINE(1161)
				::zpp_nape::phys::ZPP_Body tmp31 = this->b2;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1161)
				Float tmp32 = tmp31->posy;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1161)
				Float tmp33 = r2y;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1161)
				Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1161)
				::zpp_nape::phys::ZPP_Body tmp35 = this->b1;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1161)
				Float tmp36 = tmp35->posy;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1161)
				Float tmp37 = r1y;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1161)
				Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1161)
				Float tmp39 = (tmp34 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1161)
				Ey = tmp39;
			}
			HX_STACK_LINE(1163)
			{
				HX_STACK_LINE(1164)
				Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1173)
				hx::MultEq(Ex,t);
				HX_STACK_LINE(1174)
				hx::MultEq(Ey,t);
			}
		}
	}
	HX_STACK_LINE(1178)
	Float Ka = ((Float)0.0);		HX_STACK_VAR(Ka,"Ka");
	HX_STACK_LINE(1179)
	Float Kb = ((Float)0.0);		HX_STACK_VAR(Kb,"Kb");
	HX_STACK_LINE(1180)
	Float Kc = ((Float)0.0);		HX_STACK_VAR(Kc,"Kc");
	HX_STACK_LINE(1181)
	{
		HX_STACK_LINE(1182)
		::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1182)
		Float tmp14 = tmp13->smass;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1182)
		::zpp_nape::phys::ZPP_Body tmp15 = this->b2;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1182)
		Float tmp16 = tmp15->smass;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1182)
		Float tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1182)
		Float m = tmp17;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(1183)
		{
			HX_STACK_LINE(1184)
			Ka = m;
			HX_STACK_LINE(1185)
			Kb = (int)0;
			HX_STACK_LINE(1186)
			Kc = m;
		}
		HX_STACK_LINE(1188)
		::zpp_nape::phys::ZPP_Body tmp18 = this->b1;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1188)
		Float tmp19 = tmp18->sinertia;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1188)
		bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1188)
		if ((tmp20)){
			HX_STACK_LINE(1189)
			Float tmp21 = r1x;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1189)
			::zpp_nape::phys::ZPP_Body tmp22 = this->b1;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1189)
			Float tmp23 = tmp22->sinertia;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1189)
			Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1189)
			Float X = tmp24;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(1190)
			Float tmp25 = r1y;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1190)
			::zpp_nape::phys::ZPP_Body tmp26 = this->b1;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1190)
			Float tmp27 = tmp26->sinertia;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1190)
			Float tmp28 = (tmp25 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1190)
			Float Y = tmp28;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(1191)
			{
				HX_STACK_LINE(1192)
				Float tmp29 = (Y * r1y);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1192)
				hx::AddEq(Ka,tmp29);
				HX_STACK_LINE(1193)
				Float tmp30 = Y;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1193)
				Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1193)
				Float tmp32 = r1x;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1193)
				Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1193)
				hx::AddEq(Kb,tmp33);
				HX_STACK_LINE(1194)
				Float tmp34 = (X * r1x);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1194)
				hx::AddEq(Kc,tmp34);
			}
		}
		HX_STACK_LINE(1197)
		::zpp_nape::phys::ZPP_Body tmp21 = this->b2;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1197)
		Float tmp22 = tmp21->sinertia;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1197)
		bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1197)
		if ((tmp23)){
			HX_STACK_LINE(1198)
			Float tmp24 = r2x;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1198)
			::zpp_nape::phys::ZPP_Body tmp25 = this->b2;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1198)
			Float tmp26 = tmp25->sinertia;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1198)
			Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1198)
			Float X = tmp27;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(1199)
			Float tmp28 = r2y;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1199)
			::zpp_nape::phys::ZPP_Body tmp29 = this->b2;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1199)
			Float tmp30 = tmp29->sinertia;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1199)
			Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1199)
			Float Y = tmp31;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(1200)
			{
				HX_STACK_LINE(1201)
				Float tmp32 = (Y * r2y);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1201)
				hx::AddEq(Ka,tmp32);
				HX_STACK_LINE(1202)
				Float tmp33 = Y;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1202)
				Float tmp34 = -(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1202)
				Float tmp35 = r2x;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1202)
				Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1202)
				hx::AddEq(Kb,tmp36);
				HX_STACK_LINE(1203)
				Float tmp37 = (X * r2x);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1203)
				hx::AddEq(Kc,tmp37);
			}
		}
	}
	HX_STACK_LINE(1207)
	{
		HX_STACK_LINE(1208)
		Float tmp13 = Ex;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1208)
		Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1208)
		Jx = tmp14;
		HX_STACK_LINE(1209)
		Float tmp15 = Ey;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1209)
		Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1209)
		Jy = tmp16;
		HX_STACK_LINE(1218)
		{
		}
	}
	HX_STACK_LINE(1227)
	{
		HX_STACK_LINE(1228)
		int t = (int)6;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(1237)
		Float tmp13 = (Jx * Jx);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1237)
		Float tmp14 = (Jy * Jy);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1237)
		Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1237)
		Float ls = tmp15;		HX_STACK_VAR(ls,"ls");
		HX_STACK_LINE(1238)
		Float tmp16 = ls;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1238)
		int tmp17 = (t * t);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1238)
		bool tmp18 = (tmp16 > tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1238)
		if ((tmp18)){
			HX_STACK_LINE(1248)
			int tmp19 = t;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1248)
			Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1248)
			{
				HX_STACK_LINE(1248)
				Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1248)
				{
					HX_STACK_LINE(1248)
					Float tmp22 = ls;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1248)
					tmp21 = ::Math_obj::sqrt(tmp22);
				}
				HX_STACK_LINE(1248)
				tmp20 = (Float(((Float)1.0)) / Float(tmp21));
			}
			HX_STACK_LINE(1248)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1248)
			Float t1 = tmp21;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(1257)
			hx::MultEq(Jx,t1);
			HX_STACK_LINE(1258)
			hx::MultEq(Jy,t1);
		}
	}
	HX_STACK_LINE(1262)
	{
		HX_STACK_LINE(1263)
		Float tmp13 = (Ka * Kc);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1263)
		Float tmp14 = (Kb * Kb);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1263)
		Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1263)
		Float det = tmp15;		HX_STACK_VAR(det,"det");
		HX_STACK_LINE(1264)
		bool tmp16 = (det != det);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1264)
		if ((tmp16)){
			HX_STACK_LINE(1264)
			Float tmp17 = Jy = (int)0;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1264)
			Jx = tmp17;
		}
		else{
			HX_STACK_LINE(1265)
			bool tmp17 = (det == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1265)
			if ((tmp17)){
				HX_STACK_LINE(1266)
				bool tmp18 = (Ka != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1266)
				if ((tmp18)){
					HX_STACK_LINE(1266)
					hx::DivEq(Jx,Ka);
				}
				else{
					HX_STACK_LINE(1267)
					Jx = (int)0;
				}
				HX_STACK_LINE(1268)
				bool tmp19 = (Kc != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1268)
				if ((tmp19)){
					HX_STACK_LINE(1268)
					hx::DivEq(Jy,Kc);
				}
				else{
					HX_STACK_LINE(1269)
					Jy = (int)0;
				}
			}
			else{
				HX_STACK_LINE(1272)
				Float tmp18 = (Float((int)1) / Float(det));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1272)
				det = tmp18;
				HX_STACK_LINE(1273)
				Float tmp19 = det;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1273)
				Float tmp20 = (Kc * Jx);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1273)
				Float tmp21 = (Kb * Jy);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1273)
				Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1273)
				Float tmp23 = (tmp19 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1273)
				Float t = tmp23;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1274)
				Float tmp24 = det;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1274)
				Float tmp25 = (Ka * Jy);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1274)
				Float tmp26 = (Kb * Jx);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1274)
				Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1274)
				Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1274)
				Jy = tmp28;
				HX_STACK_LINE(1275)
				Jx = t;
			}
		}
	}
	HX_STACK_LINE(1279)
	{
		HX_STACK_LINE(1280)
		{
			HX_STACK_LINE(1281)
			::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1281)
			Float t = tmp13->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1290)
			Float tmp14 = (Jx * t);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1290)
			::zpp_nape::phys::ZPP_Body tmp15 = this->b1;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1290)
			hx::SubEq(tmp15->posx,tmp14);
			HX_STACK_LINE(1291)
			Float tmp16 = (Jy * t);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1291)
			::zpp_nape::phys::ZPP_Body tmp17 = this->b1;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1291)
			hx::SubEq(tmp17->posy,tmp16);
		}
		HX_STACK_LINE(1293)
		{
			HX_STACK_LINE(1294)
			::zpp_nape::phys::ZPP_Body tmp13 = this->b2;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1294)
			Float t = tmp13->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1303)
			Float tmp14 = (Jx * t);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1303)
			::zpp_nape::phys::ZPP_Body tmp15 = this->b2;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1303)
			hx::AddEq(tmp15->posx,tmp14);
			HX_STACK_LINE(1304)
			Float tmp16 = (Jy * t);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1304)
			::zpp_nape::phys::ZPP_Body tmp17 = this->b2;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1304)
			hx::AddEq(tmp17->posy,tmp16);
		}
		HX_STACK_LINE(1306)
		{
			HX_STACK_LINE(1306)
			::zpp_nape::phys::ZPP_Body tmp13 = this->b1;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1306)
			::zpp_nape::phys::ZPP_Body _this = tmp13;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1306)
			Float tmp14 = (Jy * r1x);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1306)
			Float tmp15 = (Jx * r1y);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1306)
			Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1306)
			Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1306)
			::zpp_nape::phys::ZPP_Body tmp18 = this->b1;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1306)
			Float tmp19 = tmp18->iinertia;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1306)
			Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1306)
			Float dr = tmp20;		HX_STACK_VAR(dr,"dr");
			HX_STACK_LINE(1306)
			hx::AddEq(_this->rot,dr);
			HX_STACK_LINE(1306)
			Float tmp21 = (dr * dr);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1306)
			bool tmp22 = (tmp21 > ((Float)0.0001));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1306)
			if ((tmp22)){
				HX_STACK_LINE(1306)
				Float tmp23 = _this->rot;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1306)
				Float tmp24 = ::Math_obj::sin(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1306)
				_this->axisx = tmp24;
				HX_STACK_LINE(1306)
				Float tmp25 = _this->rot;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1306)
				Float tmp26 = ::Math_obj::cos(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1306)
				_this->axisy = tmp26;
				HX_STACK_LINE(1306)
				Dynamic();
			}
			else{
				HX_STACK_LINE(1306)
				Float tmp23 = (dr * dr);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1306)
				Float d2 = tmp23;		HX_STACK_VAR(d2,"d2");
				HX_STACK_LINE(1306)
				Float tmp24 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1306)
				Float tmp25 = ((int)1 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1306)
				Float p = tmp25;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1306)
				Float tmp26 = (d2 * d2);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1306)
				Float tmp27 = (Float(tmp26) / Float((int)8));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1306)
				Float tmp28 = ((int)1 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1306)
				Float m = tmp28;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(1306)
				Float tmp29 = (p * _this->axisx);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1306)
				Float tmp30 = (dr * _this->axisy);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1306)
				Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1306)
				Float tmp32 = m;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1306)
				Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1306)
				Float nx = tmp33;		HX_STACK_VAR(nx,"nx");
				HX_STACK_LINE(1306)
				Float tmp34 = (p * _this->axisy);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1306)
				Float tmp35 = (dr * _this->axisx);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1306)
				Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1306)
				Float tmp37 = m;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1306)
				Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1306)
				_this->axisy = tmp38;
				HX_STACK_LINE(1306)
				_this->axisx = nx;
			}
		}
		HX_STACK_LINE(1307)
		{
			HX_STACK_LINE(1307)
			::zpp_nape::phys::ZPP_Body tmp13 = this->b2;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1307)
			::zpp_nape::phys::ZPP_Body _this = tmp13;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1307)
			Float tmp14 = (Jy * r2x);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1307)
			Float tmp15 = (Jx * r2y);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1307)
			Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1307)
			::zpp_nape::phys::ZPP_Body tmp17 = this->b2;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1307)
			Float tmp18 = tmp17->iinertia;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1307)
			Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1307)
			Float dr = tmp19;		HX_STACK_VAR(dr,"dr");
			HX_STACK_LINE(1307)
			hx::AddEq(_this->rot,dr);
			HX_STACK_LINE(1307)
			Float tmp20 = (dr * dr);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1307)
			bool tmp21 = (tmp20 > ((Float)0.0001));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1307)
			if ((tmp21)){
				HX_STACK_LINE(1307)
				Float tmp22 = _this->rot;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1307)
				Float tmp23 = ::Math_obj::sin(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1307)
				_this->axisx = tmp23;
				HX_STACK_LINE(1307)
				Float tmp24 = _this->rot;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1307)
				Float tmp25 = ::Math_obj::cos(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1307)
				_this->axisy = tmp25;
				HX_STACK_LINE(1307)
				Dynamic();
			}
			else{
				HX_STACK_LINE(1307)
				Float tmp22 = (dr * dr);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1307)
				Float d2 = tmp22;		HX_STACK_VAR(d2,"d2");
				HX_STACK_LINE(1307)
				Float tmp23 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1307)
				Float tmp24 = ((int)1 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1307)
				Float p = tmp24;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1307)
				Float tmp25 = (d2 * d2);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1307)
				Float tmp26 = (Float(tmp25) / Float((int)8));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1307)
				Float tmp27 = ((int)1 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1307)
				Float m = tmp27;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(1307)
				Float tmp28 = (p * _this->axisx);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1307)
				Float tmp29 = (dr * _this->axisy);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1307)
				Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1307)
				Float tmp31 = m;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1307)
				Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1307)
				Float nx = tmp32;		HX_STACK_VAR(nx,"nx");
				HX_STACK_LINE(1307)
				Float tmp33 = (p * _this->axisy);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1307)
				Float tmp34 = (dr * _this->axisx);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1307)
				Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1307)
				Float tmp36 = m;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1307)
				Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1307)
				_this->axisy = tmp37;
				HX_STACK_LINE(1307)
				_this->axisx = nx;
			}
		}
	}
	HX_STACK_LINE(1340)
	return false;
}


Void ZPP_PivotJoint_obj::draw( ::nape::util::Debug g){
{
		HX_STACK_FRAME("zpp_nape.constraint.ZPP_PivotJoint","draw",0xb344c775,"zpp_nape.constraint.ZPP_PivotJoint.draw","zpp_nape/constraint/PivotJoint.hx",1342,0x4ef23406)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
	}
return null();
}



ZPP_PivotJoint_obj::ZPP_PivotJoint_obj()
{
}

void ZPP_PivotJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_PivotJoint);
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

void ZPP_PivotJoint_obj::__Visit(HX_VISIT_PARAMS)
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

Dynamic ZPP_PivotJoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"kMassa") ) { return kMassa; }
		if (HX_FIELD_EQ(inName,"kMassb") ) { return kMassb; }
		if (HX_FIELD_EQ(inName,"kMassc") ) { return kMassc; }
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

Dynamic ZPP_PivotJoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"kMassa") ) { kMassa=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassb") ) { kMassb=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kMassc") ) { kMassc=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrap_a1") ) { wrap_a1=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_a2") ) { wrap_a2=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepped") ) { stepped=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::constraint::PivotJoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1localx") ) { a1localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a1localy") ) { a1localy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2localx") ) { a2localx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2localy") ) { a2localy=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_PivotJoint_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_PivotJoint_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::nape::constraint::PivotJoint*/ ,(int)offsetof(ZPP_PivotJoint_obj,outer_zn),HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_PivotJoint_obj,b1),HX_HCSTRING("b1","\x8f","\x55","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_PivotJoint_obj,a1localx),HX_HCSTRING("a1localx","\x5d","\x6d","\x78","\xfb")},
	{hx::fsFloat,(int)offsetof(ZPP_PivotJoint_obj,a1localy),HX_HCSTRING("a1localy","\x5e","\x6d","\x78","\xfb")},
	{hx::fsFloat,(int)offsetof(ZPP_PivotJoint_obj,a1relx),HX_HCSTRING("a1relx","\xaf","\xc1","\xe7","\x4a")},
	{hx::fsFloat,(int)offsetof(ZPP_PivotJoint_obj,a1rely),HX_HCSTRING("a1rely","\xb0","\xc1","\xe7","\x4a")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_PivotJoint_obj,wrap_a1),HX_HCSTRING("wrap_a1","\x45","\xeb","\x57","\x0d")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_PivotJoint_obj,b2),HX_HCSTRING("b2","\x90","\x55","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_PivotJoint_obj,a2localx),HX_HCSTRING("a2localx","\x1e","\xe4","\x0d","\x25")},
	{hx::fsFloat,(int)offsetof(ZPP_PivotJoint_obj,a2localy),HX_HCSTRING("a2localy","\x1f","\xe4","\x0d","\x25")},
	{hx::fsFloat,(int)offsetof(ZPP_PivotJoint_obj,a2relx),HX_HCSTRING("a2relx","\x30","\x56","\x4e","\xde")},
	{hx::fsFloat,(int)offsetof(ZPP_PivotJoint_obj,a2rely),HX_HCSTRING("a2rely","\x31","\x56","\x4e","\xde")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_PivotJoint_obj,wrap_a2),HX_HCSTRING("wrap_a2","\x46","\xeb","\x57","\x0d")},
	{hx::fsFloat,(int)offsetof(ZPP_PivotJoint_obj,kMassa),HX_HCSTRING("kMassa","\x82","\xa0","\x7f","\x5e")},
	{hx::fsFloat,(int)offsetof(ZPP_PivotJoint_obj,kMassb),HX_HCSTRING("kMassb","\x83","\xa0","\x7f","\x5e")},
	{hx::fsFloat,(int)offsetof(ZPP_PivotJoint_obj,kMassc),HX_HCSTRING("kMassc","\x84","\xa0","\x7f","\x5e")},
	{hx::fsFloat,(int)offsetof(ZPP_PivotJoint_obj,jAccx),HX_HCSTRING("jAccx","\xa1","\xd1","\xbb","\x33")},
	{hx::fsFloat,(int)offsetof(ZPP_PivotJoint_obj,jAccy),HX_HCSTRING("jAccy","\xa2","\xd1","\xbb","\x33")},
	{hx::fsFloat,(int)offsetof(ZPP_PivotJoint_obj,jMax),HX_HCSTRING("jMax","\x5a","\x60","\x4b","\x46")},
	{hx::fsFloat,(int)offsetof(ZPP_PivotJoint_obj,gamma),HX_HCSTRING("gamma","\x27","\x87","\xb6","\x8e")},
	{hx::fsFloat,(int)offsetof(ZPP_PivotJoint_obj,biasx),HX_HCSTRING("biasx","\xdf","\x3f","\xf6","\xb2")},
	{hx::fsFloat,(int)offsetof(ZPP_PivotJoint_obj,biasy),HX_HCSTRING("biasy","\xe0","\x3f","\xf6","\xb2")},
	{hx::fsBool,(int)offsetof(ZPP_PivotJoint_obj,stepped),HX_HCSTRING("stepped","\x03","\x05","\x60","\x81")},
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
	HX_MARK_MEMBER_NAME(ZPP_PivotJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_PivotJoint_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_PivotJoint_obj::__mClass;

void ZPP_PivotJoint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.constraint.ZPP_PivotJoint","\x9d","\x7a","\x47","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_PivotJoint_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_PivotJoint_obj >;
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
