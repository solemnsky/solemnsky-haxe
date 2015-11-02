#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterType
#include <nape/dynamics/ArbiterType.h>
#endif
#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#include <nape/dynamics/CollisionArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_FluidArbiter
#include <nape/dynamics/FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SensorArbiter
#include <zpp_nape/dynamics/ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPList_ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace dynamics{

Void ZPP_Arbiter_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Arbiter","new",0x586cbfbd,"zpp_nape.dynamics.ZPP_Arbiter.new","zpp_nape/dynamics/Arbiter.hx",174,0x26846f2e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(267)
	this->sensorarb = null();
	HX_STACK_LINE(266)
	this->fluidarb = null();
	HX_STACK_LINE(265)
	this->colarb = null();
	HX_STACK_LINE(260)
	this->type = (int)0;
	HX_STACK_LINE(232)
	this->pair = null();
	HX_STACK_LINE(231)
	this->ws2 = null();
	HX_STACK_LINE(230)
	this->ws1 = null();
	HX_STACK_LINE(229)
	this->b2 = null();
	HX_STACK_LINE(228)
	this->b1 = null();
	HX_STACK_LINE(227)
	this->invalidated = false;
	HX_STACK_LINE(221)
	this->immState = (int)0;
	HX_STACK_LINE(220)
	this->fresh = false;
	HX_STACK_LINE(219)
	this->continuous = false;
	HX_STACK_LINE(218)
	this->presentable = false;
	HX_STACK_LINE(217)
	this->intchange = false;
	HX_STACK_LINE(216)
	this->present = (int)0;
	HX_STACK_LINE(215)
	this->sleeping = false;
	HX_STACK_LINE(214)
	this->cleared = false;
	HX_STACK_LINE(213)
	this->active = false;
	HX_STACK_LINE(212)
	this->endGenerated = (int)0;
	HX_STACK_LINE(211)
	this->sleep_stamp = (int)0;
	HX_STACK_LINE(210)
	this->up_stamp = (int)0;
	HX_STACK_LINE(209)
	this->stamp = (int)0;
	HX_STACK_LINE(208)
	this->di = (int)0;
	HX_STACK_LINE(207)
	this->id = (int)0;
	HX_STACK_LINE(202)
	this->hnext = null();
	HX_STACK_LINE(175)
	this->outer = null();
}
;
	return null();
}

//ZPP_Arbiter_obj::~ZPP_Arbiter_obj() { }

Dynamic ZPP_Arbiter_obj::__CreateEmpty() { return  new ZPP_Arbiter_obj; }
hx::ObjectPtr< ZPP_Arbiter_obj > ZPP_Arbiter_obj::__new()
{  hx::ObjectPtr< ZPP_Arbiter_obj > _result_ = new ZPP_Arbiter_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Arbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Arbiter_obj > _result_ = new ZPP_Arbiter_obj();
	_result_->__construct();
	return _result_;}

::nape::dynamics::Arbiter ZPP_Arbiter_obj::wrapper( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Arbiter","wrapper",0xa2653730,"zpp_nape.dynamics.ZPP_Arbiter.wrapper","zpp_nape/dynamics/Arbiter.hx",180,0x26846f2e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(181)
	::nape::dynamics::Arbiter tmp = this->outer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(181)
	if ((tmp1)){
		HX_STACK_LINE(182)
		::zpp_nape::dynamics::ZPP_Arbiter_obj::internal = true;
		HX_STACK_LINE(183)
		int tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		int tmp3 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(183)
		if ((tmp4)){
			HX_STACK_LINE(184)
			::nape::dynamics::CollisionArbiter tmp5 = ::nape::dynamics::CollisionArbiter_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(184)
			::zpp_nape::dynamics::ZPP_ColArbiter tmp6 = this->colarb;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(184)
			tmp6->outer_zn = tmp5;
			HX_STACK_LINE(185)
			::zpp_nape::dynamics::ZPP_ColArbiter tmp7 = this->colarb;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(185)
			this->outer = tmp7->outer_zn;
		}
		else{
			HX_STACK_LINE(187)
			int tmp5 = this->type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(187)
			int tmp6 = ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(187)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(187)
			if ((tmp7)){
				HX_STACK_LINE(188)
				::nape::dynamics::FluidArbiter tmp8 = ::nape::dynamics::FluidArbiter_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(188)
				::zpp_nape::dynamics::ZPP_FluidArbiter tmp9 = this->fluidarb;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(188)
				tmp9->outer_zn = tmp8;
				HX_STACK_LINE(189)
				::zpp_nape::dynamics::ZPP_FluidArbiter tmp10 = this->fluidarb;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(189)
				this->outer = tmp10->outer_zn;
			}
			else{
				HX_STACK_LINE(191)
				::nape::dynamics::Arbiter tmp8 = ::nape::dynamics::Arbiter_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(191)
				this->outer = tmp8;
			}
		}
		HX_STACK_LINE(192)
		::nape::dynamics::Arbiter tmp5 = this->outer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(192)
		tmp5->zpp_inner = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(193)
		::zpp_nape::dynamics::ZPP_Arbiter_obj::internal = false;
	}
	HX_STACK_LINE(195)
	::nape::dynamics::Arbiter tmp2 = this->outer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(195)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Arbiter_obj,wrapper,return )

bool ZPP_Arbiter_obj::inactiveme( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Arbiter","inactiveme",0xa2bbcdc6,"zpp_nape.dynamics.ZPP_Arbiter.inactiveme","zpp_nape/dynamics/Arbiter.hx",199,0x26846f2e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(200)
	bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(200)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Arbiter_obj,inactiveme,return )

bool ZPP_Arbiter_obj::acting( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Arbiter","acting",0x14a58393,"zpp_nape.dynamics.ZPP_Arbiter.acting","zpp_nape/dynamics/Arbiter.hx",224,0x26846f2e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(225)
	bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(225)
	if ((tmp)){
		HX_STACK_LINE(225)
		int tmp2 = this->immState;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(225)
		int tmp4 = ::zpp_nape::util::ZPP_Flags_obj::id_ImmState_ACCEPT;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(225)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(225)
		int tmp6 = (int(tmp3) & int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(225)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(225)
		tmp1 = (tmp7 != (int)0);
	}
	else{
		HX_STACK_LINE(225)
		tmp1 = false;
	}
	HX_STACK_LINE(225)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Arbiter_obj,acting,return )

Void ZPP_Arbiter_obj::swap_features( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Arbiter","swap_features",0x11c37506,"zpp_nape.dynamics.ZPP_Arbiter.swap_features","zpp_nape/dynamics/Arbiter.hx",235,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(244)
		{
			HX_STACK_LINE(245)
			::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(245)
			::zpp_nape::phys::ZPP_Body t = tmp;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(246)
			::zpp_nape::phys::ZPP_Body tmp1 = this->b2;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(246)
			this->b1 = tmp1;
			HX_STACK_LINE(247)
			this->b2 = t;
		}
		HX_STACK_LINE(249)
		{
			HX_STACK_LINE(250)
			::zpp_nape::shape::ZPP_Shape tmp = this->ws1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(250)
			::zpp_nape::shape::ZPP_Shape t = tmp;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(251)
			::zpp_nape::shape::ZPP_Shape tmp1 = this->ws2;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(251)
			this->ws1 = tmp1;
			HX_STACK_LINE(252)
			this->ws2 = t;
		}
		HX_STACK_LINE(254)
		{
			HX_STACK_LINE(255)
			::zpp_nape::dynamics::ZPP_ColArbiter tmp = this->colarb;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(255)
			::zpp_nape::shape::ZPP_Shape t = tmp->s1;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(256)
			::zpp_nape::dynamics::ZPP_ColArbiter tmp1 = this->colarb;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(256)
			::zpp_nape::dynamics::ZPP_ColArbiter tmp2 = this->colarb;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(256)
			tmp2->s1 = tmp1->s2;
			HX_STACK_LINE(257)
			::zpp_nape::dynamics::ZPP_ColArbiter tmp3 = this->colarb;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(257)
			tmp3->s2 = t;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Arbiter_obj,swap_features,(void))

Void ZPP_Arbiter_obj::lazyRetire( ::zpp_nape::space::ZPP_Space s,::zpp_nape::phys::ZPP_Body b){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Arbiter","lazyRetire",0x6f124372,"zpp_nape.dynamics.ZPP_Arbiter.lazyRetire","zpp_nape/dynamics/Arbiter.hx",270,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(279)
		this->cleared = true;
		HX_STACK_LINE(280)
		bool tmp = (b == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(280)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(280)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(280)
		if ((tmp1)){
			HX_STACK_LINE(280)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(280)
			::zpp_nape::phys::ZPP_Body tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(280)
			::zpp_nape::phys::ZPP_Body tmp5 = b;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(280)
			tmp2 = (tmp4 == tmp5);
		}
		else{
			HX_STACK_LINE(280)
			tmp2 = true;
		}
		HX_STACK_LINE(280)
		if ((tmp2)){
			HX_STACK_LINE(280)
			::zpp_nape::phys::ZPP_Body tmp3 = this->b1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(280)
			::zpp_nape::util::ZNPList_ZPP_Arbiter _this = tmp3->arbiters;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(280)
			{
				HX_STACK_LINE(280)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(280)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(280)
				bool ret = false;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(280)
				while((true)){
					HX_STACK_LINE(280)
					bool tmp4 = (cur != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(280)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(280)
					if ((tmp5)){
						HX_STACK_LINE(280)
						break;
					}
					HX_STACK_LINE(280)
					bool tmp6 = (cur->elt == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(280)
					if ((tmp6)){
						HX_STACK_LINE(280)
						{
							HX_STACK_LINE(280)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
							HX_STACK_LINE(280)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(280)
							bool tmp7 = (pre == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(280)
							if ((tmp7)){
								HX_STACK_LINE(280)
								old = _this->head;
								HX_STACK_LINE(280)
								ret1 = old->next;
								HX_STACK_LINE(280)
								_this->head = ret1;
								HX_STACK_LINE(280)
								bool tmp8 = (_this->head == null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(280)
								if ((tmp8)){
									HX_STACK_LINE(280)
									_this->pushmod = true;
								}
							}
							else{
								HX_STACK_LINE(280)
								old = pre->next;
								HX_STACK_LINE(280)
								ret1 = old->next;
								HX_STACK_LINE(280)
								pre->next = ret1;
								HX_STACK_LINE(280)
								bool tmp8 = (ret1 == null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(280)
								if ((tmp8)){
									HX_STACK_LINE(280)
									_this->pushmod = true;
								}
							}
							HX_STACK_LINE(280)
							{
								HX_STACK_LINE(280)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(280)
								o->elt = null();
								HX_STACK_LINE(280)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp8 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(280)
								o->next = tmp8;
								HX_STACK_LINE(280)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
							}
							HX_STACK_LINE(280)
							_this->modified = true;
							HX_STACK_LINE(280)
							(_this->length)--;
							HX_STACK_LINE(280)
							_this->pushmod = true;
							HX_STACK_LINE(280)
							ret1;
						}
						HX_STACK_LINE(280)
						ret = true;
						HX_STACK_LINE(280)
						break;
					}
					HX_STACK_LINE(280)
					pre = cur;
					HX_STACK_LINE(280)
					cur = cur->next;
				}
				HX_STACK_LINE(280)
				ret;
			}
		}
		HX_STACK_LINE(281)
		bool tmp3 = (b == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(281)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(281)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(281)
		if ((tmp4)){
			HX_STACK_LINE(281)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(281)
			::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(281)
			::zpp_nape::phys::ZPP_Body tmp8 = b;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(281)
			tmp5 = (tmp7 == tmp8);
		}
		else{
			HX_STACK_LINE(281)
			tmp5 = true;
		}
		HX_STACK_LINE(281)
		if ((tmp5)){
			HX_STACK_LINE(281)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(281)
			::zpp_nape::util::ZNPList_ZPP_Arbiter _this = tmp6->arbiters;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(281)
			{
				HX_STACK_LINE(281)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(281)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(281)
				bool ret = false;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(281)
				while((true)){
					HX_STACK_LINE(281)
					bool tmp7 = (cur != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(281)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(281)
					if ((tmp8)){
						HX_STACK_LINE(281)
						break;
					}
					HX_STACK_LINE(281)
					bool tmp9 = (cur->elt == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(281)
					if ((tmp9)){
						HX_STACK_LINE(281)
						{
							HX_STACK_LINE(281)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
							HX_STACK_LINE(281)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(281)
							bool tmp10 = (pre == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(281)
							if ((tmp10)){
								HX_STACK_LINE(281)
								old = _this->head;
								HX_STACK_LINE(281)
								ret1 = old->next;
								HX_STACK_LINE(281)
								_this->head = ret1;
								HX_STACK_LINE(281)
								bool tmp11 = (_this->head == null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(281)
								if ((tmp11)){
									HX_STACK_LINE(281)
									_this->pushmod = true;
								}
							}
							else{
								HX_STACK_LINE(281)
								old = pre->next;
								HX_STACK_LINE(281)
								ret1 = old->next;
								HX_STACK_LINE(281)
								pre->next = ret1;
								HX_STACK_LINE(281)
								bool tmp11 = (ret1 == null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(281)
								if ((tmp11)){
									HX_STACK_LINE(281)
									_this->pushmod = true;
								}
							}
							HX_STACK_LINE(281)
							{
								HX_STACK_LINE(281)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(281)
								o->elt = null();
								HX_STACK_LINE(281)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp11 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(281)
								o->next = tmp11;
								HX_STACK_LINE(281)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
							}
							HX_STACK_LINE(281)
							_this->modified = true;
							HX_STACK_LINE(281)
							(_this->length)--;
							HX_STACK_LINE(281)
							_this->pushmod = true;
							HX_STACK_LINE(281)
							ret1;
						}
						HX_STACK_LINE(281)
						ret = true;
						HX_STACK_LINE(281)
						break;
					}
					HX_STACK_LINE(281)
					pre = cur;
					HX_STACK_LINE(281)
					cur = cur->next;
				}
				HX_STACK_LINE(281)
				ret;
			}
		}
		HX_STACK_LINE(282)
		::zpp_nape::space::ZPP_AABBPair tmp6 = this->pair;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(282)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(282)
		if ((tmp7)){
			HX_STACK_LINE(283)
			::zpp_nape::space::ZPP_AABBPair tmp8 = this->pair;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(283)
			tmp8->arb = null();
			HX_STACK_LINE(284)
			this->pair = null();
		}
		HX_STACK_LINE(286)
		this->active = false;
		HX_STACK_LINE(287)
		s->f_arbiters->modified = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Arbiter_obj,lazyRetire,(void))

Void ZPP_Arbiter_obj::sup_assign( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,int id,int di){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Arbiter","sup_assign",0xc51e8243,"zpp_nape.dynamics.ZPP_Arbiter.sup_assign","zpp_nape/dynamics/Arbiter.hx",291,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s1,"s1")
		HX_STACK_ARG(s2,"s2")
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(di,"di")
		HX_STACK_LINE(292)
		this->b1 = s1->body;
		HX_STACK_LINE(293)
		this->ws1 = s1;
		HX_STACK_LINE(294)
		this->b2 = s2->body;
		HX_STACK_LINE(295)
		this->ws2 = s2;
		HX_STACK_LINE(296)
		this->id = id;
		HX_STACK_LINE(297)
		this->di = di;
		HX_STACK_LINE(298)
		{
			HX_STACK_LINE(298)
			::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(298)
			::zpp_nape::util::ZNPList_ZPP_Arbiter _this = tmp->arbiters;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(298)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(298)
			{
				HX_STACK_LINE(298)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(298)
				{
					HX_STACK_LINE(298)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(298)
					bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(298)
					if ((tmp3)){
						HX_STACK_LINE(298)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(298)
						ret = tmp4;
					}
					else{
						HX_STACK_LINE(298)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(298)
						ret = tmp4;
						HX_STACK_LINE(298)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
						HX_STACK_LINE(298)
						ret->next = null();
					}
					HX_STACK_LINE(298)
					Dynamic();
				}
				HX_STACK_LINE(298)
				ret->elt = hx::ObjectPtr<OBJ_>(this);
				HX_STACK_LINE(298)
				tmp1 = ret;
			}
			HX_STACK_LINE(298)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = tmp1;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(298)
			temp->next = _this->head;
			HX_STACK_LINE(298)
			_this->head = temp;
			HX_STACK_LINE(298)
			_this->modified = true;
			HX_STACK_LINE(298)
			(_this->length)++;
			HX_STACK_LINE(298)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(299)
		{
			HX_STACK_LINE(299)
			::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(299)
			::zpp_nape::util::ZNPList_ZPP_Arbiter _this = tmp->arbiters;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(299)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(299)
			{
				HX_STACK_LINE(299)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(299)
				{
					HX_STACK_LINE(299)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(299)
					bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(299)
					if ((tmp3)){
						HX_STACK_LINE(299)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(299)
						ret = tmp4;
					}
					else{
						HX_STACK_LINE(299)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(299)
						ret = tmp4;
						HX_STACK_LINE(299)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
						HX_STACK_LINE(299)
						ret->next = null();
					}
					HX_STACK_LINE(299)
					Dynamic();
				}
				HX_STACK_LINE(299)
				ret->elt = hx::ObjectPtr<OBJ_>(this);
				HX_STACK_LINE(299)
				tmp1 = ret;
			}
			HX_STACK_LINE(299)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = tmp1;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(299)
			temp->next = _this->head;
			HX_STACK_LINE(299)
			_this->head = temp;
			HX_STACK_LINE(299)
			_this->modified = true;
			HX_STACK_LINE(299)
			(_this->length)++;
			HX_STACK_LINE(299)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(300)
		this->active = true;
		HX_STACK_LINE(301)
		this->present = (int)0;
		HX_STACK_LINE(302)
		this->cleared = false;
		HX_STACK_LINE(303)
		this->sleeping = false;
		HX_STACK_LINE(304)
		this->fresh = false;
		HX_STACK_LINE(305)
		this->presentable = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_Arbiter_obj,sup_assign,(void))

Void ZPP_Arbiter_obj::sup_retire( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_Arbiter","sup_retire",0x823cc5af,"zpp_nape.dynamics.ZPP_Arbiter.sup_retire","zpp_nape/dynamics/Arbiter.hx",309,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(342)
		bool tmp = this->cleared;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(342)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(342)
		if ((tmp1)){
			HX_STACK_LINE(343)
			{
				HX_STACK_LINE(343)
				::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(343)
				::zpp_nape::util::ZNPList_ZPP_Arbiter _this = tmp2->arbiters;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(343)
				{
					HX_STACK_LINE(343)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(343)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(343)
					bool ret = false;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(343)
					while((true)){
						HX_STACK_LINE(343)
						bool tmp3 = (cur != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(343)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(343)
						if ((tmp4)){
							HX_STACK_LINE(343)
							break;
						}
						HX_STACK_LINE(343)
						bool tmp5 = (cur->elt == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(343)
						if ((tmp5)){
							HX_STACK_LINE(343)
							{
								HX_STACK_LINE(343)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
								HX_STACK_LINE(343)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(343)
								bool tmp6 = (pre == null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(343)
								if ((tmp6)){
									HX_STACK_LINE(343)
									old = _this->head;
									HX_STACK_LINE(343)
									ret1 = old->next;
									HX_STACK_LINE(343)
									_this->head = ret1;
									HX_STACK_LINE(343)
									bool tmp7 = (_this->head == null());		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(343)
									if ((tmp7)){
										HX_STACK_LINE(343)
										_this->pushmod = true;
									}
								}
								else{
									HX_STACK_LINE(343)
									old = pre->next;
									HX_STACK_LINE(343)
									ret1 = old->next;
									HX_STACK_LINE(343)
									pre->next = ret1;
									HX_STACK_LINE(343)
									bool tmp7 = (ret1 == null());		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(343)
									if ((tmp7)){
										HX_STACK_LINE(343)
										_this->pushmod = true;
									}
								}
								HX_STACK_LINE(343)
								{
									HX_STACK_LINE(343)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(343)
									o->elt = null();
									HX_STACK_LINE(343)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp7 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(343)
									o->next = tmp7;
									HX_STACK_LINE(343)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
								}
								HX_STACK_LINE(343)
								_this->modified = true;
								HX_STACK_LINE(343)
								(_this->length)--;
								HX_STACK_LINE(343)
								_this->pushmod = true;
								HX_STACK_LINE(343)
								ret1;
							}
							HX_STACK_LINE(343)
							ret = true;
							HX_STACK_LINE(343)
							break;
						}
						HX_STACK_LINE(343)
						pre = cur;
						HX_STACK_LINE(343)
						cur = cur->next;
					}
					HX_STACK_LINE(343)
					ret;
				}
			}
			HX_STACK_LINE(344)
			{
				HX_STACK_LINE(344)
				::zpp_nape::phys::ZPP_Body tmp2 = this->b2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(344)
				::zpp_nape::util::ZNPList_ZPP_Arbiter _this = tmp2->arbiters;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(344)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(344)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(344)
					bool ret = false;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(344)
					while((true)){
						HX_STACK_LINE(344)
						bool tmp3 = (cur != null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(344)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(344)
						if ((tmp4)){
							HX_STACK_LINE(344)
							break;
						}
						HX_STACK_LINE(344)
						bool tmp5 = (cur->elt == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(344)
						if ((tmp5)){
							HX_STACK_LINE(344)
							{
								HX_STACK_LINE(344)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
								HX_STACK_LINE(344)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(344)
								bool tmp6 = (pre == null());		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(344)
								if ((tmp6)){
									HX_STACK_LINE(344)
									old = _this->head;
									HX_STACK_LINE(344)
									ret1 = old->next;
									HX_STACK_LINE(344)
									_this->head = ret1;
									HX_STACK_LINE(344)
									bool tmp7 = (_this->head == null());		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(344)
									if ((tmp7)){
										HX_STACK_LINE(344)
										_this->pushmod = true;
									}
								}
								else{
									HX_STACK_LINE(344)
									old = pre->next;
									HX_STACK_LINE(344)
									ret1 = old->next;
									HX_STACK_LINE(344)
									pre->next = ret1;
									HX_STACK_LINE(344)
									bool tmp7 = (ret1 == null());		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(344)
									if ((tmp7)){
										HX_STACK_LINE(344)
										_this->pushmod = true;
									}
								}
								HX_STACK_LINE(344)
								{
									HX_STACK_LINE(344)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(344)
									o->elt = null();
									HX_STACK_LINE(344)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp7 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(344)
									o->next = tmp7;
									HX_STACK_LINE(344)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
								}
								HX_STACK_LINE(344)
								_this->modified = true;
								HX_STACK_LINE(344)
								(_this->length)--;
								HX_STACK_LINE(344)
								_this->pushmod = true;
								HX_STACK_LINE(344)
								ret1;
							}
							HX_STACK_LINE(344)
							ret = true;
							HX_STACK_LINE(344)
							break;
						}
						HX_STACK_LINE(344)
						pre = cur;
						HX_STACK_LINE(344)
						cur = cur->next;
					}
					HX_STACK_LINE(344)
					ret;
				}
			}
			HX_STACK_LINE(345)
			::zpp_nape::space::ZPP_AABBPair tmp2 = this->pair;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(345)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(345)
			if ((tmp3)){
				HX_STACK_LINE(346)
				::zpp_nape::space::ZPP_AABBPair tmp4 = this->pair;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(346)
				tmp4->arb = null();
				HX_STACK_LINE(347)
				this->pair = null();
			}
		}
		HX_STACK_LINE(350)
		::zpp_nape::phys::ZPP_Body tmp2 = this->b2 = null();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(350)
		this->b1 = tmp2;
		HX_STACK_LINE(351)
		this->active = false;
		HX_STACK_LINE(352)
		this->intchange = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Arbiter_obj,sup_retire,(void))

bool ZPP_Arbiter_obj::internal;

int ZPP_Arbiter_obj::COL;

int ZPP_Arbiter_obj::FLUID;

int ZPP_Arbiter_obj::SENSOR;

Array< ::Dynamic > ZPP_Arbiter_obj::types;


ZPP_Arbiter_obj::ZPP_Arbiter_obj()
{
}

void ZPP_Arbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Arbiter);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(hnext,"hnext");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(di,"di");
	HX_MARK_MEMBER_NAME(stamp,"stamp");
	HX_MARK_MEMBER_NAME(up_stamp,"up_stamp");
	HX_MARK_MEMBER_NAME(sleep_stamp,"sleep_stamp");
	HX_MARK_MEMBER_NAME(endGenerated,"endGenerated");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(cleared,"cleared");
	HX_MARK_MEMBER_NAME(sleeping,"sleeping");
	HX_MARK_MEMBER_NAME(present,"present");
	HX_MARK_MEMBER_NAME(intchange,"intchange");
	HX_MARK_MEMBER_NAME(presentable,"presentable");
	HX_MARK_MEMBER_NAME(continuous,"continuous");
	HX_MARK_MEMBER_NAME(fresh,"fresh");
	HX_MARK_MEMBER_NAME(immState,"immState");
	HX_MARK_MEMBER_NAME(invalidated,"invalidated");
	HX_MARK_MEMBER_NAME(b1,"b1");
	HX_MARK_MEMBER_NAME(b2,"b2");
	HX_MARK_MEMBER_NAME(ws1,"ws1");
	HX_MARK_MEMBER_NAME(ws2,"ws2");
	HX_MARK_MEMBER_NAME(pair,"pair");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(colarb,"colarb");
	HX_MARK_MEMBER_NAME(fluidarb,"fluidarb");
	HX_MARK_MEMBER_NAME(sensorarb,"sensorarb");
	HX_MARK_END_CLASS();
}

void ZPP_Arbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(hnext,"hnext");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(di,"di");
	HX_VISIT_MEMBER_NAME(stamp,"stamp");
	HX_VISIT_MEMBER_NAME(up_stamp,"up_stamp");
	HX_VISIT_MEMBER_NAME(sleep_stamp,"sleep_stamp");
	HX_VISIT_MEMBER_NAME(endGenerated,"endGenerated");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(cleared,"cleared");
	HX_VISIT_MEMBER_NAME(sleeping,"sleeping");
	HX_VISIT_MEMBER_NAME(present,"present");
	HX_VISIT_MEMBER_NAME(intchange,"intchange");
	HX_VISIT_MEMBER_NAME(presentable,"presentable");
	HX_VISIT_MEMBER_NAME(continuous,"continuous");
	HX_VISIT_MEMBER_NAME(fresh,"fresh");
	HX_VISIT_MEMBER_NAME(immState,"immState");
	HX_VISIT_MEMBER_NAME(invalidated,"invalidated");
	HX_VISIT_MEMBER_NAME(b1,"b1");
	HX_VISIT_MEMBER_NAME(b2,"b2");
	HX_VISIT_MEMBER_NAME(ws1,"ws1");
	HX_VISIT_MEMBER_NAME(ws2,"ws2");
	HX_VISIT_MEMBER_NAME(pair,"pair");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(colarb,"colarb");
	HX_VISIT_MEMBER_NAME(fluidarb,"fluidarb");
	HX_VISIT_MEMBER_NAME(sensorarb,"sensorarb");
}

Dynamic ZPP_Arbiter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		if (HX_FIELD_EQ(inName,"di") ) { return di; }
		if (HX_FIELD_EQ(inName,"b1") ) { return b1; }
		if (HX_FIELD_EQ(inName,"b2") ) { return b2; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ws1") ) { return ws1; }
		if (HX_FIELD_EQ(inName,"ws2") ) { return ws2; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pair") ) { return pair; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"hnext") ) { return hnext; }
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp; }
		if (HX_FIELD_EQ(inName,"fresh") ) { return fresh; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"acting") ) { return acting_dyn(); }
		if (HX_FIELD_EQ(inName,"colarb") ) { return colarb; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		if (HX_FIELD_EQ(inName,"cleared") ) { return cleared; }
		if (HX_FIELD_EQ(inName,"present") ) { return present; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"up_stamp") ) { return up_stamp; }
		if (HX_FIELD_EQ(inName,"sleeping") ) { return sleeping; }
		if (HX_FIELD_EQ(inName,"immState") ) { return immState; }
		if (HX_FIELD_EQ(inName,"fluidarb") ) { return fluidarb; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intchange") ) { return intchange; }
		if (HX_FIELD_EQ(inName,"sensorarb") ) { return sensorarb; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"inactiveme") ) { return inactiveme_dyn(); }
		if (HX_FIELD_EQ(inName,"continuous") ) { return continuous; }
		if (HX_FIELD_EQ(inName,"lazyRetire") ) { return lazyRetire_dyn(); }
		if (HX_FIELD_EQ(inName,"sup_assign") ) { return sup_assign_dyn(); }
		if (HX_FIELD_EQ(inName,"sup_retire") ) { return sup_retire_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sleep_stamp") ) { return sleep_stamp; }
		if (HX_FIELD_EQ(inName,"presentable") ) { return presentable; }
		if (HX_FIELD_EQ(inName,"invalidated") ) { return invalidated; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endGenerated") ) { return endGenerated; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"swap_features") ) { return swap_features_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_Arbiter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"COL") ) { outValue = COL; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FLUID") ) { outValue = FLUID; return true;  }
		if (HX_FIELD_EQ(inName,"types") ) { outValue = types; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SENSOR") ) { outValue = SENSOR; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { outValue = internal; return true;  }
	}
	return false;
}

Dynamic ZPP_Arbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"di") ) { di=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b1") ) { b1=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b2") ) { b2=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ws1") ) { ws1=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ws2") ) { ws2=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pair") ) { pair=inValue.Cast< ::zpp_nape::space::ZPP_AABBPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::dynamics::Arbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hnext") ) { hnext=inValue.Cast< ::zpp_nape::dynamics::ZPP_Arbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stamp") ) { stamp=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fresh") ) { fresh=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colarb") ) { colarb=inValue.Cast< ::zpp_nape::dynamics::ZPP_ColArbiter >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cleared") ) { cleared=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"present") ) { present=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"up_stamp") ) { up_stamp=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sleeping") ) { sleeping=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"immState") ) { immState=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fluidarb") ) { fluidarb=inValue.Cast< ::zpp_nape::dynamics::ZPP_FluidArbiter >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intchange") ) { intchange=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sensorarb") ) { sensorarb=inValue.Cast< ::zpp_nape::dynamics::ZPP_SensorArbiter >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"continuous") ) { continuous=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sleep_stamp") ) { sleep_stamp=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"presentable") ) { presentable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"invalidated") ) { invalidated=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endGenerated") ) { endGenerated=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Arbiter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"COL") ) { COL=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FLUID") ) { FLUID=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"types") ) { types=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SENSOR") ) { SENSOR=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void ZPP_Arbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("hnext","\x5b","\xd9","\xae","\x2a"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("di","\x85","\x57","\x00","\x00"));
	outFields->push(HX_HCSTRING("stamp","\x03","\x70","\x0b","\x84"));
	outFields->push(HX_HCSTRING("up_stamp","\xdf","\xd3","\x64","\xd5"));
	outFields->push(HX_HCSTRING("sleep_stamp","\x9b","\xdf","\xd0","\x7e"));
	outFields->push(HX_HCSTRING("endGenerated","\x34","\xf8","\x72","\xa3"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("cleared","\x2c","\x07","\x45","\xab"));
	outFields->push(HX_HCSTRING("sleeping","\x2b","\x58","\x93","\x10"));
	outFields->push(HX_HCSTRING("present","\xfb","\x3a","\xdc","\x39"));
	outFields->push(HX_HCSTRING("intchange","\x9f","\x7b","\xdd","\xa7"));
	outFields->push(HX_HCSTRING("presentable","\x15","\x42","\x7d","\x5b"));
	outFields->push(HX_HCSTRING("continuous","\x0f","\x05","\x17","\xde"));
	outFields->push(HX_HCSTRING("fresh","\x6e","\x86","\x86","\x06"));
	outFields->push(HX_HCSTRING("immState","\x48","\x99","\x73","\xd6"));
	outFields->push(HX_HCSTRING("invalidated","\x89","\x32","\xac","\xbd"));
	outFields->push(HX_HCSTRING("b1","\x8f","\x55","\x00","\x00"));
	outFields->push(HX_HCSTRING("b2","\x90","\x55","\x00","\x00"));
	outFields->push(HX_HCSTRING("ws1","\x95","\xb0","\x5a","\x00"));
	outFields->push(HX_HCSTRING("ws2","\x96","\xb0","\x5a","\x00"));
	outFields->push(HX_HCSTRING("pair","\x1a","\xdc","\x51","\x4a"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("colarb","\x11","\x26","\x7c","\xc6"));
	outFields->push(HX_HCSTRING("fluidarb","\x87","\x06","\x5f","\xd4"));
	outFields->push(HX_HCSTRING("sensorarb","\x57","\x6c","\xbb","\x61"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::dynamics::Arbiter*/ ,(int)offsetof(ZPP_Arbiter_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_Arbiter*/ ,(int)offsetof(ZPP_Arbiter_obj,hnext),HX_HCSTRING("hnext","\x5b","\xd9","\xae","\x2a")},
	{hx::fsInt,(int)offsetof(ZPP_Arbiter_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(ZPP_Arbiter_obj,di),HX_HCSTRING("di","\x85","\x57","\x00","\x00")},
	{hx::fsInt,(int)offsetof(ZPP_Arbiter_obj,stamp),HX_HCSTRING("stamp","\x03","\x70","\x0b","\x84")},
	{hx::fsInt,(int)offsetof(ZPP_Arbiter_obj,up_stamp),HX_HCSTRING("up_stamp","\xdf","\xd3","\x64","\xd5")},
	{hx::fsInt,(int)offsetof(ZPP_Arbiter_obj,sleep_stamp),HX_HCSTRING("sleep_stamp","\x9b","\xdf","\xd0","\x7e")},
	{hx::fsInt,(int)offsetof(ZPP_Arbiter_obj,endGenerated),HX_HCSTRING("endGenerated","\x34","\xf8","\x72","\xa3")},
	{hx::fsBool,(int)offsetof(ZPP_Arbiter_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsBool,(int)offsetof(ZPP_Arbiter_obj,cleared),HX_HCSTRING("cleared","\x2c","\x07","\x45","\xab")},
	{hx::fsBool,(int)offsetof(ZPP_Arbiter_obj,sleeping),HX_HCSTRING("sleeping","\x2b","\x58","\x93","\x10")},
	{hx::fsInt,(int)offsetof(ZPP_Arbiter_obj,present),HX_HCSTRING("present","\xfb","\x3a","\xdc","\x39")},
	{hx::fsBool,(int)offsetof(ZPP_Arbiter_obj,intchange),HX_HCSTRING("intchange","\x9f","\x7b","\xdd","\xa7")},
	{hx::fsBool,(int)offsetof(ZPP_Arbiter_obj,presentable),HX_HCSTRING("presentable","\x15","\x42","\x7d","\x5b")},
	{hx::fsBool,(int)offsetof(ZPP_Arbiter_obj,continuous),HX_HCSTRING("continuous","\x0f","\x05","\x17","\xde")},
	{hx::fsBool,(int)offsetof(ZPP_Arbiter_obj,fresh),HX_HCSTRING("fresh","\x6e","\x86","\x86","\x06")},
	{hx::fsInt,(int)offsetof(ZPP_Arbiter_obj,immState),HX_HCSTRING("immState","\x48","\x99","\x73","\xd6")},
	{hx::fsBool,(int)offsetof(ZPP_Arbiter_obj,invalidated),HX_HCSTRING("invalidated","\x89","\x32","\xac","\xbd")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_Arbiter_obj,b1),HX_HCSTRING("b1","\x8f","\x55","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_Arbiter_obj,b2),HX_HCSTRING("b2","\x90","\x55","\x00","\x00")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Shape*/ ,(int)offsetof(ZPP_Arbiter_obj,ws1),HX_HCSTRING("ws1","\x95","\xb0","\x5a","\x00")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Shape*/ ,(int)offsetof(ZPP_Arbiter_obj,ws2),HX_HCSTRING("ws2","\x96","\xb0","\x5a","\x00")},
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBPair*/ ,(int)offsetof(ZPP_Arbiter_obj,pair),HX_HCSTRING("pair","\x1a","\xdc","\x51","\x4a")},
	{hx::fsInt,(int)offsetof(ZPP_Arbiter_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_ColArbiter*/ ,(int)offsetof(ZPP_Arbiter_obj,colarb),HX_HCSTRING("colarb","\x11","\x26","\x7c","\xc6")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_FluidArbiter*/ ,(int)offsetof(ZPP_Arbiter_obj,fluidarb),HX_HCSTRING("fluidarb","\x87","\x06","\x5f","\xd4")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_SensorArbiter*/ ,(int)offsetof(ZPP_Arbiter_obj,sensorarb),HX_HCSTRING("sensorarb","\x57","\x6c","\xbb","\x61")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &ZPP_Arbiter_obj::internal,HX_HCSTRING("internal","\x3d","\x67","\x76","\x28")},
	{hx::fsInt,(void *) &ZPP_Arbiter_obj::COL,HX_HCSTRING("COL","\x20","\x1c","\x33","\x00")},
	{hx::fsInt,(void *) &ZPP_Arbiter_obj::FLUID,HX_HCSTRING("FLUID","\xea","\x91","\x89","\x80")},
	{hx::fsInt,(void *) &ZPP_Arbiter_obj::SENSOR,HX_HCSTRING("SENSOR","\x3a","\xde","\x12","\x1e")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &ZPP_Arbiter_obj::types,HX_HCSTRING("types","\x79","\x70","\xcb","\x1a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("wrapper","\x53","\xd5","\x64","\x0d"),
	HX_HCSTRING("inactiveme","\x83","\x67","\xf5","\x67"),
	HX_HCSTRING("hnext","\x5b","\xd9","\xae","\x2a"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("di","\x85","\x57","\x00","\x00"),
	HX_HCSTRING("stamp","\x03","\x70","\x0b","\x84"),
	HX_HCSTRING("up_stamp","\xdf","\xd3","\x64","\xd5"),
	HX_HCSTRING("sleep_stamp","\x9b","\xdf","\xd0","\x7e"),
	HX_HCSTRING("endGenerated","\x34","\xf8","\x72","\xa3"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("cleared","\x2c","\x07","\x45","\xab"),
	HX_HCSTRING("sleeping","\x2b","\x58","\x93","\x10"),
	HX_HCSTRING("present","\xfb","\x3a","\xdc","\x39"),
	HX_HCSTRING("intchange","\x9f","\x7b","\xdd","\xa7"),
	HX_HCSTRING("presentable","\x15","\x42","\x7d","\x5b"),
	HX_HCSTRING("continuous","\x0f","\x05","\x17","\xde"),
	HX_HCSTRING("fresh","\x6e","\x86","\x86","\x06"),
	HX_HCSTRING("immState","\x48","\x99","\x73","\xd6"),
	HX_HCSTRING("acting","\xd0","\x3a","\x46","\x16"),
	HX_HCSTRING("invalidated","\x89","\x32","\xac","\xbd"),
	HX_HCSTRING("b1","\x8f","\x55","\x00","\x00"),
	HX_HCSTRING("b2","\x90","\x55","\x00","\x00"),
	HX_HCSTRING("ws1","\x95","\xb0","\x5a","\x00"),
	HX_HCSTRING("ws2","\x96","\xb0","\x5a","\x00"),
	HX_HCSTRING("pair","\x1a","\xdc","\x51","\x4a"),
	HX_HCSTRING("swap_features","\x69","\xcf","\xbc","\x34"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("colarb","\x11","\x26","\x7c","\xc6"),
	HX_HCSTRING("fluidarb","\x87","\x06","\x5f","\xd4"),
	HX_HCSTRING("sensorarb","\x57","\x6c","\xbb","\x61"),
	HX_HCSTRING("lazyRetire","\x2f","\xdd","\x4b","\x34"),
	HX_HCSTRING("sup_assign","\x00","\x1c","\x58","\x8a"),
	HX_HCSTRING("sup_retire","\x6c","\x5f","\x76","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Arbiter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Arbiter_obj::internal,"internal");
	HX_MARK_MEMBER_NAME(ZPP_Arbiter_obj::COL,"COL");
	HX_MARK_MEMBER_NAME(ZPP_Arbiter_obj::FLUID,"FLUID");
	HX_MARK_MEMBER_NAME(ZPP_Arbiter_obj::SENSOR,"SENSOR");
	HX_MARK_MEMBER_NAME(ZPP_Arbiter_obj::types,"types");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Arbiter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Arbiter_obj::internal,"internal");
	HX_VISIT_MEMBER_NAME(ZPP_Arbiter_obj::COL,"COL");
	HX_VISIT_MEMBER_NAME(ZPP_Arbiter_obj::FLUID,"FLUID");
	HX_VISIT_MEMBER_NAME(ZPP_Arbiter_obj::SENSOR,"SENSOR");
	HX_VISIT_MEMBER_NAME(ZPP_Arbiter_obj::types,"types");
};

#endif

hx::Class ZPP_Arbiter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("internal","\x3d","\x67","\x76","\x28"),
	HX_HCSTRING("COL","\x20","\x1c","\x33","\x00"),
	HX_HCSTRING("FLUID","\xea","\x91","\x89","\x80"),
	HX_HCSTRING("SENSOR","\x3a","\xde","\x12","\x1e"),
	HX_HCSTRING("types","\x79","\x70","\xcb","\x1a"),
	::String(null()) };

void ZPP_Arbiter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.dynamics.ZPP_Arbiter","\x4b","\x1d","\x51","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Arbiter_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Arbiter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Arbiter_obj >;
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

void ZPP_Arbiter_obj::__boot()
{
	internal= false;
	COL= (int)1;
	FLUID= (int)4;
	SENSOR= (int)2;
struct _Function_0_1{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/dynamics/Arbiter.hx",264,0x26846f2e)
		{
			HX_STACK_LINE(264)
			::nape::dynamics::ArbiterType tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(264)
			{
				HX_STACK_LINE(264)
				::nape::dynamics::ArbiterType tmp1 = ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(264)
				bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(264)
				if ((tmp2)){
					HX_STACK_LINE(264)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(264)
					::nape::dynamics::ArbiterType tmp3 = ::nape::dynamics::ArbiterType_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(264)
					::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION = tmp3;
					HX_STACK_LINE(264)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(264)
				tmp = ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_COLLISION;
			}
			HX_STACK_LINE(264)
			::nape::dynamics::ArbiterType tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(264)
			{
				HX_STACK_LINE(264)
				::nape::dynamics::ArbiterType tmp2 = ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(264)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(264)
				if ((tmp3)){
					HX_STACK_LINE(264)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(264)
					::nape::dynamics::ArbiterType tmp4 = ::nape::dynamics::ArbiterType_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(264)
					::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR = tmp4;
					HX_STACK_LINE(264)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(264)
				tmp1 = ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_SENSOR;
			}
			HX_STACK_LINE(264)
			::nape::dynamics::ArbiterType tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(264)
			{
				HX_STACK_LINE(264)
				::nape::dynamics::ArbiterType tmp3 = ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(264)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(264)
				if ((tmp4)){
					HX_STACK_LINE(264)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(264)
					::nape::dynamics::ArbiterType tmp5 = ::nape::dynamics::ArbiterType_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(264)
					::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID = tmp5;
					HX_STACK_LINE(264)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(264)
				tmp2 = ::zpp_nape::util::ZPP_Flags_obj::ArbiterType_FLUID;
			}
			HX_STACK_LINE(264)
			return Array_obj< ::Dynamic >::__new().Add(null()).Add(tmp).Add(tmp1).Add(null()).Add(tmp2);
		}
		return null();
	}
};
	types= _Function_0_1::Block();
}

} // end namespace zpp_nape
} // end namespace dynamics
