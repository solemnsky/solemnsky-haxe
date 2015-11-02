#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_FluidArbiter
#include <nape/dynamics/FluidArbiter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_FluidProperties
#include <zpp_nape/phys/ZPP_FluidProperties.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <zpp_nape/shape/ZPP_Circle.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace dynamics{

Void ZPP_FluidArbiter_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","new",0xb3e8b5cf,"zpp_nape.dynamics.ZPP_FluidArbiter.new","zpp_nape/dynamics/Arbiter.hx",446,0x26846f2e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(706)
	this->pre_dt = ((Float)0.0);
	HX_STACK_LINE(668)
	this->_mutable = false;
	HX_STACK_LINE(565)
	this->wrap_position = null();
	HX_STACK_LINE(517)
	this->buoyy = ((Float)0.0);
	HX_STACK_LINE(516)
	this->buoyx = ((Float)0.0);
	HX_STACK_LINE(515)
	this->ny = ((Float)0.0);
	HX_STACK_LINE(514)
	this->nx = ((Float)0.0);
	HX_STACK_LINE(513)
	this->lgamma = ((Float)0.0);
	HX_STACK_LINE(512)
	this->dampy = ((Float)0.0);
	HX_STACK_LINE(511)
	this->dampx = ((Float)0.0);
	HX_STACK_LINE(510)
	this->vMassc = ((Float)0.0);
	HX_STACK_LINE(509)
	this->vMassb = ((Float)0.0);
	HX_STACK_LINE(508)
	this->vMassa = ((Float)0.0);
	HX_STACK_LINE(507)
	this->agamma = ((Float)0.0);
	HX_STACK_LINE(506)
	this->adamp = ((Float)0.0);
	HX_STACK_LINE(505)
	this->wMass = ((Float)0.0);
	HX_STACK_LINE(504)
	this->nodrag = false;
	HX_STACK_LINE(503)
	this->r2y = ((Float)0.0);
	HX_STACK_LINE(502)
	this->r2x = ((Float)0.0);
	HX_STACK_LINE(501)
	this->r1y = ((Float)0.0);
	HX_STACK_LINE(500)
	this->r1x = ((Float)0.0);
	HX_STACK_LINE(499)
	this->overlap = ((Float)0.0);
	HX_STACK_LINE(498)
	this->centroidy = ((Float)0.0);
	HX_STACK_LINE(497)
	this->centroidx = ((Float)0.0);
	HX_STACK_LINE(448)
	this->next = null();
	HX_STACK_LINE(447)
	this->outer_zn = null();
	HX_STACK_LINE(574)
	super::__construct();
	HX_STACK_LINE(575)
	int tmp = ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(575)
	this->type = tmp;
	HX_STACK_LINE(576)
	this->fluidarb = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(577)
	{
		HX_STACK_LINE(578)
		this->buoyx = (int)0;
		HX_STACK_LINE(579)
		this->buoyy = (int)0;
		HX_STACK_LINE(588)
		{
		}
	}
	HX_STACK_LINE(597)
	this->pre_dt = ((Float)-1.0);
}
;
	return null();
}

//ZPP_FluidArbiter_obj::~ZPP_FluidArbiter_obj() { }

Dynamic ZPP_FluidArbiter_obj::__CreateEmpty() { return  new ZPP_FluidArbiter_obj; }
hx::ObjectPtr< ZPP_FluidArbiter_obj > ZPP_FluidArbiter_obj::__new()
{  hx::ObjectPtr< ZPP_FluidArbiter_obj > _result_ = new ZPP_FluidArbiter_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_FluidArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_FluidArbiter_obj > _result_ = new ZPP_FluidArbiter_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_FluidArbiter_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","alloc",0x904003a4,"zpp_nape.dynamics.ZPP_FluidArbiter.alloc","zpp_nape/dynamics/Arbiter.hx",476,0x26846f2e)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidArbiter_obj,alloc,(void))

Void ZPP_FluidArbiter_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","free",0xb276785d,"zpp_nape.dynamics.ZPP_FluidArbiter.free","zpp_nape/dynamics/Arbiter.hx",488,0x26846f2e)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidArbiter_obj,free,(void))

Void ZPP_FluidArbiter_obj::position_validate( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","position_validate",0xcbea33db,"zpp_nape.dynamics.ZPP_FluidArbiter.position_validate","zpp_nape/dynamics/Arbiter.hx",518,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(520)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(520)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(520)
		if ((tmp1)){
			HX_STACK_LINE(520)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
		}
		HX_STACK_LINE(522)
		{
			HX_STACK_LINE(523)
			Float tmp2 = this->centroidx;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(523)
			::nape::geom::Vec2 tmp3 = this->wrap_position;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(523)
			tmp3->zpp_inner->x = tmp2;
			HX_STACK_LINE(524)
			Float tmp4 = this->centroidy;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(524)
			::nape::geom::Vec2 tmp5 = this->wrap_position;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(524)
			tmp5->zpp_inner->y = tmp4;
			HX_STACK_LINE(533)
			{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidArbiter_obj,position_validate,(void))

Void ZPP_FluidArbiter_obj::position_invalidate( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","position_invalidate",0xe7039800,"zpp_nape.dynamics.ZPP_FluidArbiter.position_invalidate","zpp_nape/dynamics/Arbiter.hx",544,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(545)
		this->centroidx = x->x;
		HX_STACK_LINE(546)
		this->centroidy = x->y;
		HX_STACK_LINE(555)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_FluidArbiter_obj,position_invalidate,(void))

Void ZPP_FluidArbiter_obj::getposition( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","getposition",0xe86b13ae,"zpp_nape.dynamics.ZPP_FluidArbiter.getposition","zpp_nape/dynamics/Arbiter.hx",566,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(567)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(567)
		{
			HX_STACK_LINE(567)
			Float x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(567)
			Float y = (int)0;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(567)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(567)
			bool tmp1 = (x != x);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(567)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(567)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(567)
			if ((tmp2)){
				HX_STACK_LINE(567)
				tmp3 = (y != y);
			}
			else{
				HX_STACK_LINE(567)
				tmp3 = true;
			}
			HX_STACK_LINE(567)
			if ((tmp3)){
				HX_STACK_LINE(567)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(567)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(567)
			{
				HX_STACK_LINE(567)
				::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(567)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(567)
				if ((tmp5)){
					HX_STACK_LINE(567)
					::nape::geom::Vec2 tmp6 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(567)
					ret = tmp6;
				}
				else{
					HX_STACK_LINE(567)
					::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(567)
					ret = tmp6;
					HX_STACK_LINE(567)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(567)
					ret->zpp_pool = null();
					HX_STACK_LINE(567)
					ret->zpp_disp = false;
					HX_STACK_LINE(567)
					::nape::geom::Vec2 tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(567)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(567)
					bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(567)
					if ((tmp9)){
						HX_STACK_LINE(567)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(567)
			bool tmp4 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(567)
			if ((tmp4)){
				HX_STACK_LINE(567)
				::zpp_nape::geom::ZPP_Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(567)
				{
					HX_STACK_LINE(567)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(567)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(567)
					{
						HX_STACK_LINE(567)
						::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(567)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(567)
						if ((tmp7)){
							HX_STACK_LINE(567)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(567)
							ret1 = tmp8;
						}
						else{
							HX_STACK_LINE(567)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(567)
							ret1 = tmp8;
							HX_STACK_LINE(567)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(567)
							ret1->next = null();
						}
						HX_STACK_LINE(567)
						ret1->weak = false;
					}
					HX_STACK_LINE(567)
					ret1->_immutable = immutable;
					HX_STACK_LINE(567)
					{
						HX_STACK_LINE(567)
						ret1->x = x;
						HX_STACK_LINE(567)
						ret1->y = y;
						HX_STACK_LINE(567)
						{
						}
					}
					HX_STACK_LINE(567)
					tmp5 = ret1;
				}
				HX_STACK_LINE(567)
				ret->zpp_inner = tmp5;
				HX_STACK_LINE(567)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(567)
				{
					HX_STACK_LINE(567)
					bool tmp5 = (ret != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(567)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(567)
					if ((tmp5)){
						HX_STACK_LINE(567)
						tmp6 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(567)
						tmp6 = false;
					}
					HX_STACK_LINE(567)
					if ((tmp6)){
						HX_STACK_LINE(567)
						::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(567)
						::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(567)
						HX_STACK_DO_THROW(tmp8);
					}
				}
				HX_STACK_LINE(567)
				{
					HX_STACK_LINE(567)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(567)
					bool tmp5 = _this->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(567)
					if ((tmp5)){
						HX_STACK_LINE(567)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(567)
					bool tmp6 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(567)
					if ((tmp6)){
						HX_STACK_LINE(567)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(567)
				bool tmp5 = (x != x);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(567)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(567)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(567)
				if ((tmp6)){
					HX_STACK_LINE(567)
					tmp7 = (y != y);
				}
				else{
					HX_STACK_LINE(567)
					tmp7 = true;
				}
				HX_STACK_LINE(567)
				if ((tmp7)){
					HX_STACK_LINE(567)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(567)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(567)
				{
					HX_STACK_LINE(567)
					{
						HX_STACK_LINE(567)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(567)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(567)
						if ((tmp9)){
							HX_STACK_LINE(567)
							tmp10 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(567)
							tmp10 = false;
						}
						HX_STACK_LINE(567)
						if ((tmp10)){
							HX_STACK_LINE(567)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(567)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(567)
							HX_STACK_DO_THROW(tmp12);
						}
					}
					HX_STACK_LINE(567)
					{
						HX_STACK_LINE(567)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(567)
						bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(567)
						if ((tmp9)){
							HX_STACK_LINE(567)
							_this->_validate();
						}
					}
					HX_STACK_LINE(567)
					tmp8 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(567)
				Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(567)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(567)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(567)
				if ((tmp10)){
					HX_STACK_LINE(567)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(567)
					{
						HX_STACK_LINE(567)
						{
							HX_STACK_LINE(567)
							bool tmp13 = (ret != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(567)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(567)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(567)
							bool tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(567)
							if ((tmp16)){
								HX_STACK_LINE(567)
								tmp15 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(567)
								tmp15 = false;
							}
							HX_STACK_LINE(567)
							bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(567)
							if ((tmp17)){
								HX_STACK_LINE(567)
								::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(567)
								::String tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(567)
								::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(567)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(567)
								::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(567)
								HX_STACK_DO_THROW(tmp22);
							}
						}
						HX_STACK_LINE(567)
						{
							HX_STACK_LINE(567)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(567)
							bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(567)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(567)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(567)
							if ((tmp15)){
								HX_STACK_LINE(567)
								_this->_validate();
							}
						}
						HX_STACK_LINE(567)
						Float tmp13 = ret->zpp_inner->y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(567)
						tmp12 = tmp13;
					}
					HX_STACK_LINE(567)
					Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(567)
					tmp11 = (tmp12 == tmp13);
				}
				else{
					HX_STACK_LINE(567)
					tmp11 = false;
				}
				HX_STACK_LINE(567)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(567)
				if ((tmp12)){
					HX_STACK_LINE(567)
					{
						HX_STACK_LINE(567)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(567)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(567)
						{
						}
					}
					HX_STACK_LINE(567)
					{
						HX_STACK_LINE(567)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(567)
						bool tmp13 = (_this->_invalidate != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(567)
						if ((tmp13)){
							HX_STACK_LINE(567)
							::zpp_nape::geom::ZPP_Vec2 tmp14 = _this;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(567)
							_this->_invalidate(tmp14);
						}
					}
				}
				HX_STACK_LINE(567)
				ret;
			}
			HX_STACK_LINE(567)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(567)
			tmp = ret;
		}
		HX_STACK_LINE(567)
		this->wrap_position = tmp;
		HX_STACK_LINE(568)
		::nape::geom::Vec2 tmp1 = this->wrap_position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(568)
		tmp1->zpp_inner->_inuse = true;
		HX_STACK_LINE(569)
		bool tmp2 = this->_mutable;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(569)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(569)
		::nape::geom::Vec2 tmp4 = this->wrap_position;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(569)
		tmp4->zpp_inner->_immutable = tmp3;
		HX_STACK_LINE(570)
		Dynamic tmp5 = this->position_validate_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(570)
		::nape::geom::Vec2 tmp6 = this->wrap_position;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(570)
		tmp6->zpp_inner->_validate = tmp5;
		HX_STACK_LINE(571)
		Dynamic tmp7 = this->position_invalidate_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(571)
		::nape::geom::Vec2 tmp8 = this->wrap_position;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(571)
		tmp8->zpp_inner->_invalidate = tmp7;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidArbiter_obj,getposition,(void))

Void ZPP_FluidArbiter_obj::assign( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,int id,int di){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","assign",0xb42d3020,"zpp_nape.dynamics.ZPP_FluidArbiter.assign","zpp_nape/dynamics/Arbiter.hx",601,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s1,"s1")
		HX_STACK_ARG(s2,"s2")
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(di,"di")
		HX_STACK_LINE(602)
		{
			HX_STACK_LINE(602)
			this->b1 = s1->body;
			HX_STACK_LINE(602)
			this->ws1 = s1;
			HX_STACK_LINE(602)
			this->b2 = s2->body;
			HX_STACK_LINE(602)
			this->ws2 = s2;
			HX_STACK_LINE(602)
			this->id = id;
			HX_STACK_LINE(602)
			this->di = di;
			HX_STACK_LINE(602)
			{
				HX_STACK_LINE(602)
				::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(602)
				::zpp_nape::util::ZNPList_ZPP_Arbiter _this = tmp->arbiters;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(602)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(602)
				{
					HX_STACK_LINE(602)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(602)
					{
						HX_STACK_LINE(602)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(602)
						bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(602)
						if ((tmp3)){
							HX_STACK_LINE(602)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(602)
							ret = tmp4;
						}
						else{
							HX_STACK_LINE(602)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(602)
							ret = tmp4;
							HX_STACK_LINE(602)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
							HX_STACK_LINE(602)
							ret->next = null();
						}
						HX_STACK_LINE(602)
						Dynamic();
					}
					HX_STACK_LINE(602)
					ret->elt = hx::ObjectPtr<OBJ_>(this);
					HX_STACK_LINE(602)
					tmp1 = ret;
				}
				HX_STACK_LINE(602)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = tmp1;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(602)
				temp->next = _this->head;
				HX_STACK_LINE(602)
				_this->head = temp;
				HX_STACK_LINE(602)
				_this->modified = true;
				HX_STACK_LINE(602)
				(_this->length)++;
				HX_STACK_LINE(602)
				hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(602)
			{
				HX_STACK_LINE(602)
				::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(602)
				::zpp_nape::util::ZNPList_ZPP_Arbiter _this = tmp->arbiters;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(602)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(602)
				{
					HX_STACK_LINE(602)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(602)
					{
						HX_STACK_LINE(602)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp2 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(602)
						bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(602)
						if ((tmp3)){
							HX_STACK_LINE(602)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(602)
							ret = tmp4;
						}
						else{
							HX_STACK_LINE(602)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp4 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(602)
							ret = tmp4;
							HX_STACK_LINE(602)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
							HX_STACK_LINE(602)
							ret->next = null();
						}
						HX_STACK_LINE(602)
						Dynamic();
					}
					HX_STACK_LINE(602)
					ret->elt = hx::ObjectPtr<OBJ_>(this);
					HX_STACK_LINE(602)
					tmp1 = ret;
				}
				HX_STACK_LINE(602)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = tmp1;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(602)
				temp->next = _this->head;
				HX_STACK_LINE(602)
				_this->head = temp;
				HX_STACK_LINE(602)
				_this->modified = true;
				HX_STACK_LINE(602)
				(_this->length)++;
				HX_STACK_LINE(602)
				hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(602)
			this->active = true;
			HX_STACK_LINE(602)
			this->present = (int)0;
			HX_STACK_LINE(602)
			this->cleared = false;
			HX_STACK_LINE(602)
			this->sleeping = false;
			HX_STACK_LINE(602)
			this->fresh = false;
			HX_STACK_LINE(602)
			this->presentable = false;
		}
		HX_STACK_LINE(603)
		{
			HX_STACK_LINE(604)
			this->nx = (int)0;
			HX_STACK_LINE(605)
			this->ny = (int)1;
			HX_STACK_LINE(614)
			{
			}
		}
		HX_STACK_LINE(623)
		{
			HX_STACK_LINE(624)
			this->dampx = (int)0;
			HX_STACK_LINE(625)
			this->dampy = (int)0;
			HX_STACK_LINE(634)
			{
			}
		}
		HX_STACK_LINE(643)
		this->adamp = ((Float)0.0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_FluidArbiter_obj,assign,(void))

Void ZPP_FluidArbiter_obj::retire( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","retire",0x714b738c,"zpp_nape.dynamics.ZPP_FluidArbiter.retire","zpp_nape/dynamics/Arbiter.hx",647,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(648)
		{
			HX_STACK_LINE(648)
			bool tmp = this->cleared;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(648)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(648)
			if ((tmp1)){
				HX_STACK_LINE(648)
				{
					HX_STACK_LINE(648)
					::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(648)
					::zpp_nape::util::ZNPList_ZPP_Arbiter _this = tmp2->arbiters;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(648)
					{
						HX_STACK_LINE(648)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(648)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(648)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(648)
						while((true)){
							HX_STACK_LINE(648)
							bool tmp3 = (cur != null());		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(648)
							bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(648)
							if ((tmp4)){
								HX_STACK_LINE(648)
								break;
							}
							HX_STACK_LINE(648)
							bool tmp5 = (cur->elt == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(648)
							if ((tmp5)){
								HX_STACK_LINE(648)
								{
									HX_STACK_LINE(648)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(648)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(648)
									bool tmp6 = (pre == null());		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(648)
									if ((tmp6)){
										HX_STACK_LINE(648)
										old = _this->head;
										HX_STACK_LINE(648)
										ret1 = old->next;
										HX_STACK_LINE(648)
										_this->head = ret1;
										HX_STACK_LINE(648)
										bool tmp7 = (_this->head == null());		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(648)
										if ((tmp7)){
											HX_STACK_LINE(648)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(648)
										old = pre->next;
										HX_STACK_LINE(648)
										ret1 = old->next;
										HX_STACK_LINE(648)
										pre->next = ret1;
										HX_STACK_LINE(648)
										bool tmp7 = (ret1 == null());		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(648)
										if ((tmp7)){
											HX_STACK_LINE(648)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(648)
									{
										HX_STACK_LINE(648)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(648)
										o->elt = null();
										HX_STACK_LINE(648)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp7 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(648)
										o->next = tmp7;
										HX_STACK_LINE(648)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
									}
									HX_STACK_LINE(648)
									_this->modified = true;
									HX_STACK_LINE(648)
									(_this->length)--;
									HX_STACK_LINE(648)
									_this->pushmod = true;
									HX_STACK_LINE(648)
									ret1;
								}
								HX_STACK_LINE(648)
								ret = true;
								HX_STACK_LINE(648)
								break;
							}
							HX_STACK_LINE(648)
							pre = cur;
							HX_STACK_LINE(648)
							cur = cur->next;
						}
						HX_STACK_LINE(648)
						ret;
					}
				}
				HX_STACK_LINE(648)
				{
					HX_STACK_LINE(648)
					::zpp_nape::phys::ZPP_Body tmp2 = this->b2;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(648)
					::zpp_nape::util::ZNPList_ZPP_Arbiter _this = tmp2->arbiters;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(648)
					{
						HX_STACK_LINE(648)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(648)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(648)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(648)
						while((true)){
							HX_STACK_LINE(648)
							bool tmp3 = (cur != null());		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(648)
							bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(648)
							if ((tmp4)){
								HX_STACK_LINE(648)
								break;
							}
							HX_STACK_LINE(648)
							bool tmp5 = (cur->elt == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(648)
							if ((tmp5)){
								HX_STACK_LINE(648)
								{
									HX_STACK_LINE(648)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(648)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(648)
									bool tmp6 = (pre == null());		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(648)
									if ((tmp6)){
										HX_STACK_LINE(648)
										old = _this->head;
										HX_STACK_LINE(648)
										ret1 = old->next;
										HX_STACK_LINE(648)
										_this->head = ret1;
										HX_STACK_LINE(648)
										bool tmp7 = (_this->head == null());		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(648)
										if ((tmp7)){
											HX_STACK_LINE(648)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(648)
										old = pre->next;
										HX_STACK_LINE(648)
										ret1 = old->next;
										HX_STACK_LINE(648)
										pre->next = ret1;
										HX_STACK_LINE(648)
										bool tmp7 = (ret1 == null());		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(648)
										if ((tmp7)){
											HX_STACK_LINE(648)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(648)
									{
										HX_STACK_LINE(648)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(648)
										o->elt = null();
										HX_STACK_LINE(648)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter tmp7 = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(648)
										o->next = tmp7;
										HX_STACK_LINE(648)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
									}
									HX_STACK_LINE(648)
									_this->modified = true;
									HX_STACK_LINE(648)
									(_this->length)--;
									HX_STACK_LINE(648)
									_this->pushmod = true;
									HX_STACK_LINE(648)
									ret1;
								}
								HX_STACK_LINE(648)
								ret = true;
								HX_STACK_LINE(648)
								break;
							}
							HX_STACK_LINE(648)
							pre = cur;
							HX_STACK_LINE(648)
							cur = cur->next;
						}
						HX_STACK_LINE(648)
						ret;
					}
				}
				HX_STACK_LINE(648)
				::zpp_nape::space::ZPP_AABBPair tmp2 = this->pair;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(648)
				bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(648)
				if ((tmp3)){
					HX_STACK_LINE(648)
					::zpp_nape::space::ZPP_AABBPair tmp4 = this->pair;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(648)
					tmp4->arb = null();
					HX_STACK_LINE(648)
					this->pair = null();
				}
			}
			HX_STACK_LINE(648)
			::zpp_nape::phys::ZPP_Body tmp2 = this->b2 = null();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(648)
			this->b1 = tmp2;
			HX_STACK_LINE(648)
			this->active = false;
			HX_STACK_LINE(648)
			this->intchange = false;
		}
		HX_STACK_LINE(649)
		{
			HX_STACK_LINE(650)
			::zpp_nape::dynamics::ZPP_FluidArbiter o = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(660)
			::zpp_nape::dynamics::ZPP_FluidArbiter tmp = ::zpp_nape::dynamics::ZPP_FluidArbiter_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(660)
			o->next = tmp;
			HX_STACK_LINE(661)
			::zpp_nape::dynamics::ZPP_FluidArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(666)
		this->pre_dt = ((Float)-1.0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidArbiter_obj,retire,(void))

Void ZPP_FluidArbiter_obj::makemutable( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","makemutable",0xcf2febe7,"zpp_nape.dynamics.ZPP_FluidArbiter.makemutable","zpp_nape/dynamics/Arbiter.hx",671,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(672)
		this->_mutable = true;
		HX_STACK_LINE(673)
		::nape::geom::Vec2 tmp = this->wrap_position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(673)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(673)
		if ((tmp1)){
			HX_STACK_LINE(673)
			::nape::geom::Vec2 tmp2 = this->wrap_position;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(673)
			tmp2->zpp_inner->_immutable = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidArbiter_obj,makemutable,(void))

Void ZPP_FluidArbiter_obj::makeimmutable( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","makeimmutable",0x0892e6c3,"zpp_nape.dynamics.ZPP_FluidArbiter.makeimmutable","zpp_nape/dynamics/Arbiter.hx",677,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(678)
		this->_mutable = false;
		HX_STACK_LINE(679)
		::nape::geom::Vec2 tmp = this->wrap_position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(679)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(679)
		if ((tmp1)){
			HX_STACK_LINE(679)
			::nape::geom::Vec2 tmp2 = this->wrap_position;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(679)
			tmp2->zpp_inner->_immutable = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidArbiter_obj,makeimmutable,(void))

Void ZPP_FluidArbiter_obj::inject( Float area,Float cx,Float cy){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","inject",0x00113482,"zpp_nape.dynamics.ZPP_FluidArbiter.inject","zpp_nape/dynamics/Arbiter.hx",683,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(area,"area")
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_LINE(684)
		this->overlap = area;
		HX_STACK_LINE(685)
		{
			HX_STACK_LINE(686)
			this->centroidx = cx;
			HX_STACK_LINE(687)
			this->centroidy = cy;
			HX_STACK_LINE(696)
			{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_FluidArbiter_obj,inject,(void))

Void ZPP_FluidArbiter_obj::preStep( ::zpp_nape::space::ZPP_Space s,Float dt){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","preStep",0xdea689fe,"zpp_nape.dynamics.ZPP_FluidArbiter.preStep","zpp_nape/dynamics/Arbiter.hx",709,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(dt,"dt")
		HX_STACK_LINE(710)
		Float tmp = this->pre_dt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(710)
		bool tmp1 = (tmp == ((Float)-1.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(710)
		if ((tmp1)){
			HX_STACK_LINE(710)
			this->pre_dt = dt;
		}
		HX_STACK_LINE(711)
		Float tmp2 = dt;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(711)
		Float tmp3 = this->pre_dt;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(711)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(711)
		Float dtratio = tmp4;		HX_STACK_VAR(dtratio,"dtratio");
		HX_STACK_LINE(712)
		this->pre_dt = dt;
		HX_STACK_LINE(713)
		{
			HX_STACK_LINE(714)
			Float tmp5 = this->centroidx;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(714)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(714)
			Float tmp7 = tmp6->posx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(714)
			Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(714)
			this->r1x = tmp8;
			HX_STACK_LINE(715)
			Float tmp9 = this->centroidy;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(715)
			::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(715)
			Float tmp11 = tmp10->posy;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(715)
			Float tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(715)
			this->r1y = tmp12;
		}
		HX_STACK_LINE(717)
		{
			HX_STACK_LINE(718)
			Float tmp5 = this->centroidx;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(718)
			::zpp_nape::phys::ZPP_Body tmp6 = this->b2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(718)
			Float tmp7 = tmp6->posx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(718)
			Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(718)
			this->r2x = tmp8;
			HX_STACK_LINE(719)
			Float tmp9 = this->centroidy;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(719)
			::zpp_nape::phys::ZPP_Body tmp10 = this->b2;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(719)
			Float tmp11 = tmp10->posy;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(719)
			Float tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(719)
			this->r2y = tmp12;
		}
		HX_STACK_LINE(721)
		Float g1x = ((Float)0.0);		HX_STACK_VAR(g1x,"g1x");
		HX_STACK_LINE(722)
		Float g1y = ((Float)0.0);		HX_STACK_VAR(g1y,"g1y");
		HX_STACK_LINE(723)
		::zpp_nape::shape::ZPP_Shape tmp5 = this->ws1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(723)
		bool tmp6 = tmp5->fluidEnabled;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(723)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(723)
		if ((tmp6)){
			HX_STACK_LINE(723)
			::zpp_nape::shape::ZPP_Shape tmp8 = this->ws1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(723)
			::zpp_nape::shape::ZPP_Shape tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(723)
			::nape::geom::Vec2 tmp10 = tmp9->fluidProperties->wrap_gravity;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(723)
			::nape::geom::Vec2 tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(723)
			tmp7 = (tmp11 != null());
		}
		else{
			HX_STACK_LINE(723)
			tmp7 = false;
		}
		HX_STACK_LINE(723)
		if ((tmp7)){
			HX_STACK_LINE(724)
			::zpp_nape::shape::ZPP_Shape tmp8 = this->ws1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(724)
			Float tmp9 = tmp8->fluidProperties->gravityx;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(724)
			g1x = tmp9;
			HX_STACK_LINE(725)
			::zpp_nape::shape::ZPP_Shape tmp10 = this->ws1;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(725)
			Float tmp11 = tmp10->fluidProperties->gravityy;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(725)
			g1y = tmp11;
			HX_STACK_LINE(734)
			{
			}
		}
		else{
			HX_STACK_LINE(744)
			g1x = s->gravityx;
			HX_STACK_LINE(745)
			g1y = s->gravityy;
			HX_STACK_LINE(754)
			{
			}
		}
		HX_STACK_LINE(763)
		Float g2x = ((Float)0.0);		HX_STACK_VAR(g2x,"g2x");
		HX_STACK_LINE(764)
		Float g2y = ((Float)0.0);		HX_STACK_VAR(g2y,"g2y");
		HX_STACK_LINE(765)
		::zpp_nape::shape::ZPP_Shape tmp8 = this->ws2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(765)
		bool tmp9 = tmp8->fluidEnabled;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(765)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(765)
		if ((tmp9)){
			HX_STACK_LINE(765)
			::zpp_nape::shape::ZPP_Shape tmp11 = this->ws2;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(765)
			::zpp_nape::shape::ZPP_Shape tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(765)
			::nape::geom::Vec2 tmp13 = tmp12->fluidProperties->wrap_gravity;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(765)
			::nape::geom::Vec2 tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(765)
			tmp10 = (tmp14 != null());
		}
		else{
			HX_STACK_LINE(765)
			tmp10 = false;
		}
		HX_STACK_LINE(765)
		if ((tmp10)){
			HX_STACK_LINE(766)
			::zpp_nape::shape::ZPP_Shape tmp11 = this->ws2;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(766)
			Float tmp12 = tmp11->fluidProperties->gravityx;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(766)
			g2x = tmp12;
			HX_STACK_LINE(767)
			::zpp_nape::shape::ZPP_Shape tmp13 = this->ws2;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(767)
			Float tmp14 = tmp13->fluidProperties->gravityy;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(767)
			g2y = tmp14;
			HX_STACK_LINE(776)
			{
			}
		}
		else{
			HX_STACK_LINE(786)
			g2x = s->gravityx;
			HX_STACK_LINE(787)
			g2y = s->gravityy;
			HX_STACK_LINE(796)
			{
			}
		}
		HX_STACK_LINE(805)
		Float buoyx = (int)0;		HX_STACK_VAR(buoyx,"buoyx");
		HX_STACK_LINE(806)
		Float buoyy = (int)0;		HX_STACK_VAR(buoyy,"buoyy");
		HX_STACK_LINE(823)
		::zpp_nape::shape::ZPP_Shape tmp11 = this->ws1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(823)
		bool tmp12 = tmp11->fluidEnabled;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(823)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(823)
		if ((tmp12)){
			HX_STACK_LINE(823)
			::zpp_nape::shape::ZPP_Shape tmp14 = this->ws2;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(823)
			::zpp_nape::shape::ZPP_Shape tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(823)
			tmp13 = tmp15->fluidEnabled;
		}
		else{
			HX_STACK_LINE(823)
			tmp13 = false;
		}
		HX_STACK_LINE(823)
		if ((tmp13)){
			HX_STACK_LINE(824)
			Float tmp14 = this->overlap;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(824)
			::zpp_nape::shape::ZPP_Shape tmp15 = this->ws1;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(824)
			Float tmp16 = tmp15->fluidProperties->density;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(824)
			Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(824)
			Float mass1 = tmp17;		HX_STACK_VAR(mass1,"mass1");
			HX_STACK_LINE(825)
			Float tmp18 = this->overlap;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(825)
			::zpp_nape::shape::ZPP_Shape tmp19 = this->ws2;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(825)
			Float tmp20 = tmp19->fluidProperties->density;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(825)
			Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(825)
			Float mass2 = tmp21;		HX_STACK_VAR(mass2,"mass2");
			HX_STACK_LINE(826)
			bool tmp22 = (mass1 > mass2);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(826)
			if ((tmp22)){
				HX_STACK_LINE(827)
				Float tmp23 = (mass1 + mass2);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(827)
				Float t = tmp23;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(836)
				Float tmp24 = (g1x * t);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(836)
				hx::SubEq(buoyx,tmp24);
				HX_STACK_LINE(837)
				Float tmp25 = (g1y * t);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(837)
				hx::SubEq(buoyy,tmp25);
			}
			else{
				HX_STACK_LINE(839)
				bool tmp23 = (mass1 < mass2);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(839)
				if ((tmp23)){
					HX_STACK_LINE(840)
					Float tmp24 = (mass1 + mass2);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(840)
					Float t = tmp24;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(849)
					Float tmp25 = (g2x * t);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(849)
					hx::AddEq(buoyx,tmp25);
					HX_STACK_LINE(850)
					Float tmp26 = (g2y * t);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(850)
					hx::AddEq(buoyy,tmp26);
				}
				else{
					HX_STACK_LINE(853)
					Float gx = ((Float)0.0);		HX_STACK_VAR(gx,"gx");
					HX_STACK_LINE(854)
					Float gy = ((Float)0.0);		HX_STACK_VAR(gy,"gy");
					HX_STACK_LINE(855)
					{
						HX_STACK_LINE(856)
						Float tmp24 = (g1x + g2x);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(856)
						gx = tmp24;
						HX_STACK_LINE(857)
						Float tmp25 = (g1y + g2y);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(857)
						gy = tmp25;
					}
					HX_STACK_LINE(859)
					{
						HX_STACK_LINE(860)
						Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(869)
						hx::MultEq(gx,t);
						HX_STACK_LINE(870)
						hx::MultEq(gy,t);
					}
					HX_STACK_LINE(872)
					::zpp_nape::shape::ZPP_Shape tmp24 = this->ws1;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(872)
					Float tmp25 = tmp24->worldCOMx;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(872)
					Float tmp26 = gx;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(872)
					Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(872)
					::zpp_nape::shape::ZPP_Shape tmp28 = this->ws1;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(872)
					Float tmp29 = tmp28->worldCOMy;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(872)
					Float tmp30 = gy;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(872)
					Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(872)
					Float tmp32 = (tmp27 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(872)
					::zpp_nape::shape::ZPP_Shape tmp33 = this->ws2;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(872)
					Float tmp34 = tmp33->worldCOMx;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(872)
					Float tmp35 = gx;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(872)
					Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(872)
					::zpp_nape::shape::ZPP_Shape tmp37 = this->ws2;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(872)
					Float tmp38 = tmp37->worldCOMy;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(872)
					Float tmp39 = gy;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(872)
					Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(872)
					Float tmp41 = (tmp36 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(872)
					bool tmp42 = (tmp32 > tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(872)
					if ((tmp42)){
						HX_STACK_LINE(873)
						Float tmp43 = (mass1 + mass2);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(873)
						Float t = tmp43;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(882)
						Float tmp44 = (gx * t);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(882)
						hx::SubEq(buoyx,tmp44);
						HX_STACK_LINE(883)
						Float tmp45 = (gy * t);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(883)
						hx::SubEq(buoyy,tmp45);
					}
					else{
						HX_STACK_LINE(886)
						Float tmp43 = (mass1 + mass2);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(886)
						Float t = tmp43;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(895)
						Float tmp44 = (gx * t);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(895)
						hx::AddEq(buoyx,tmp44);
						HX_STACK_LINE(896)
						Float tmp45 = (gy * t);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(896)
						hx::AddEq(buoyy,tmp45);
					}
				}
			}
		}
		else{
			HX_STACK_LINE(900)
			::zpp_nape::shape::ZPP_Shape tmp14 = this->ws1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(900)
			bool tmp15 = tmp14->fluidEnabled;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(900)
			if ((tmp15)){
				HX_STACK_LINE(901)
				Float tmp16 = this->overlap;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(901)
				::zpp_nape::shape::ZPP_Shape tmp17 = this->ws1;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(901)
				Float tmp18 = tmp17->fluidProperties->density;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(901)
				Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(901)
				Float mass = tmp19;		HX_STACK_VAR(mass,"mass");
				HX_STACK_LINE(902)
				{
					HX_STACK_LINE(903)
					Float t = mass;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(912)
					Float tmp20 = (g1x * t);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(912)
					hx::SubEq(buoyx,tmp20);
					HX_STACK_LINE(913)
					Float tmp21 = (g1y * t);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(913)
					hx::SubEq(buoyy,tmp21);
				}
			}
			else{
				HX_STACK_LINE(916)
				::zpp_nape::shape::ZPP_Shape tmp16 = this->ws2;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(916)
				bool tmp17 = tmp16->fluidEnabled;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(916)
				if ((tmp17)){
					HX_STACK_LINE(917)
					Float tmp18 = this->overlap;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(917)
					::zpp_nape::shape::ZPP_Shape tmp19 = this->ws2;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(917)
					Float tmp20 = tmp19->fluidProperties->density;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(917)
					Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(917)
					Float mass = tmp21;		HX_STACK_VAR(mass,"mass");
					HX_STACK_LINE(918)
					{
						HX_STACK_LINE(919)
						Float t = mass;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(928)
						Float tmp22 = (g2x * t);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(928)
						hx::AddEq(buoyx,tmp22);
						HX_STACK_LINE(929)
						Float tmp23 = (g2y * t);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(929)
						hx::AddEq(buoyy,tmp23);
					}
				}
			}
		}
		HX_STACK_LINE(932)
		{
			HX_STACK_LINE(933)
			Float t = dt;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(942)
			hx::MultEq(buoyx,t);
			HX_STACK_LINE(943)
			hx::MultEq(buoyy,t);
		}
		HX_STACK_LINE(945)
		{
			HX_STACK_LINE(946)
			this->buoyx = buoyx;
			HX_STACK_LINE(947)
			this->buoyy = buoyy;
			HX_STACK_LINE(956)
			{
			}
		}
		HX_STACK_LINE(965)
		::zpp_nape::phys::ZPP_Body tmp14 = this->b1;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(965)
		int tmp15 = tmp14->type;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(965)
		int tmp16 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(965)
		bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(965)
		if ((tmp17)){
			HX_STACK_LINE(966)
			{
				HX_STACK_LINE(967)
				::zpp_nape::phys::ZPP_Body tmp18 = this->b1;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(967)
				Float t = tmp18->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(976)
				Float tmp19 = (buoyx * t);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(976)
				::zpp_nape::phys::ZPP_Body tmp20 = this->b1;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(976)
				hx::SubEq(tmp20->velx,tmp19);
				HX_STACK_LINE(977)
				Float tmp21 = (buoyy * t);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(977)
				::zpp_nape::phys::ZPP_Body tmp22 = this->b1;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(977)
				hx::SubEq(tmp22->vely,tmp21);
			}
			HX_STACK_LINE(979)
			Float tmp18 = buoyy;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(979)
			Float tmp19 = this->r1x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(979)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(979)
			Float tmp21 = buoyx;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(979)
			Float tmp22 = this->r1y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(979)
			Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(979)
			Float tmp24 = (tmp20 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(979)
			::zpp_nape::phys::ZPP_Body tmp25 = this->b1;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(979)
			Float tmp26 = tmp25->iinertia;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(979)
			Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(979)
			::zpp_nape::phys::ZPP_Body tmp28 = this->b1;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(979)
			hx::SubEq(tmp28->angvel,tmp27);
		}
		HX_STACK_LINE(981)
		::zpp_nape::phys::ZPP_Body tmp18 = this->b2;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(981)
		int tmp19 = tmp18->type;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(981)
		int tmp20 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(981)
		bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(981)
		if ((tmp21)){
			HX_STACK_LINE(982)
			{
				HX_STACK_LINE(983)
				::zpp_nape::phys::ZPP_Body tmp22 = this->b2;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(983)
				Float t = tmp22->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(992)
				Float tmp23 = (buoyx * t);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(992)
				::zpp_nape::phys::ZPP_Body tmp24 = this->b2;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(992)
				hx::AddEq(tmp24->velx,tmp23);
				HX_STACK_LINE(993)
				Float tmp25 = (buoyy * t);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(993)
				::zpp_nape::phys::ZPP_Body tmp26 = this->b2;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(993)
				hx::AddEq(tmp26->vely,tmp25);
			}
			HX_STACK_LINE(995)
			Float tmp22 = buoyy;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(995)
			Float tmp23 = this->r2x;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(995)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(995)
			Float tmp25 = buoyx;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(995)
			Float tmp26 = this->r2y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(995)
			Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(995)
			Float tmp28 = (tmp24 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(995)
			::zpp_nape::phys::ZPP_Body tmp29 = this->b2;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(995)
			Float tmp30 = tmp29->iinertia;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(995)
			Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(995)
			::zpp_nape::phys::ZPP_Body tmp32 = this->b2;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(995)
			hx::AddEq(tmp32->angvel,tmp31);
		}
		HX_STACK_LINE(997)
		::zpp_nape::shape::ZPP_Shape tmp22 = this->ws1;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(997)
		bool tmp23 = tmp22->fluidEnabled;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(997)
		bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(997)
		bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(997)
		bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(997)
		bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(997)
		bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(997)
		if ((tmp27)){
			HX_STACK_LINE(997)
			::zpp_nape::shape::ZPP_Shape tmp29 = this->ws1;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(997)
			::zpp_nape::shape::ZPP_Shape tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(997)
			::zpp_nape::shape::ZPP_Shape tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(997)
			Float tmp32 = tmp31->fluidProperties->viscosity;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(997)
			Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(997)
			Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(997)
			tmp28 = (tmp34 == (int)0);
		}
		else{
			HX_STACK_LINE(997)
			tmp28 = true;
		}
		HX_STACK_LINE(997)
		bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(997)
		if ((tmp28)){
			HX_STACK_LINE(997)
			::zpp_nape::shape::ZPP_Shape tmp30 = this->ws2;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(997)
			::zpp_nape::shape::ZPP_Shape tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(997)
			bool tmp32 = tmp31->fluidEnabled;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(997)
			bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(997)
			bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(997)
			bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(997)
			bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(997)
			bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(997)
			bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(997)
			bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(997)
			bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(997)
			if ((tmp40)){
				HX_STACK_LINE(997)
				::zpp_nape::shape::ZPP_Shape tmp41 = this->ws2;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(997)
				::zpp_nape::shape::ZPP_Shape tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(997)
				::zpp_nape::shape::ZPP_Shape tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(997)
				Float tmp44 = tmp43->fluidProperties->viscosity;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(997)
				Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(997)
				Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(997)
				tmp29 = (tmp46 == (int)0);
			}
			else{
				HX_STACK_LINE(997)
				tmp29 = true;
			}
		}
		else{
			HX_STACK_LINE(997)
			tmp29 = false;
		}
		HX_STACK_LINE(997)
		if ((tmp29)){
			HX_STACK_LINE(998)
			this->nodrag = true;
			HX_STACK_LINE(999)
			{
				HX_STACK_LINE(1000)
				this->dampx = (int)0;
				HX_STACK_LINE(1001)
				this->dampy = (int)0;
				HX_STACK_LINE(1010)
				{
				}
			}
			HX_STACK_LINE(1019)
			this->adamp = (int)0;
		}
		else{
			HX_STACK_LINE(1022)
			this->nodrag = false;
			HX_STACK_LINE(1023)
			Float tViscosity = ((Float)0.0);		HX_STACK_VAR(tViscosity,"tViscosity");
			HX_STACK_LINE(1024)
			::zpp_nape::shape::ZPP_Shape tmp30 = this->ws1;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1024)
			bool tmp31 = tmp30->fluidEnabled;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1024)
			if ((tmp31)){
				HX_STACK_LINE(1025)
				::zpp_nape::shape::ZPP_Shape tmp32 = this->ws2;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1025)
				tmp32->validate_angDrag();
				HX_STACK_LINE(1026)
				::zpp_nape::shape::ZPP_Shape tmp33 = this->ws1;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1026)
				Float tmp34 = tmp33->fluidProperties->viscosity;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1026)
				::zpp_nape::shape::ZPP_Shape tmp35 = this->ws2;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1026)
				Float tmp36 = tmp35->angDrag;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1026)
				Float tmp37 = (tmp34 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1026)
				Float tmp38 = this->overlap;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1026)
				Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1026)
				::zpp_nape::shape::ZPP_Shape tmp40 = this->ws2;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1026)
				Float tmp41 = tmp40->area;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1026)
				Float tmp42 = (Float(tmp39) / Float(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1026)
				hx::AddEq(tViscosity,tmp42);
			}
			HX_STACK_LINE(1028)
			::zpp_nape::shape::ZPP_Shape tmp32 = this->ws2;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1028)
			bool tmp33 = tmp32->fluidEnabled;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1028)
			if ((tmp33)){
				HX_STACK_LINE(1029)
				::zpp_nape::shape::ZPP_Shape tmp34 = this->ws1;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1029)
				tmp34->validate_angDrag();
				HX_STACK_LINE(1030)
				::zpp_nape::shape::ZPP_Shape tmp35 = this->ws2;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1030)
				Float tmp36 = tmp35->fluidProperties->viscosity;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1030)
				::zpp_nape::shape::ZPP_Shape tmp37 = this->ws1;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1030)
				Float tmp38 = tmp37->angDrag;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1030)
				Float tmp39 = (tmp36 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1030)
				Float tmp40 = this->overlap;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1030)
				Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1030)
				::zpp_nape::shape::ZPP_Shape tmp42 = this->ws1;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1030)
				Float tmp43 = tmp42->area;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1030)
				Float tmp44 = (Float(tmp41) / Float(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1030)
				hx::AddEq(tViscosity,tmp44);
			}
			HX_STACK_LINE(1032)
			bool tmp34 = (tViscosity != (int)0);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1032)
			if ((tmp34)){
				HX_STACK_LINE(1033)
				::zpp_nape::phys::ZPP_Body tmp35 = this->b1;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1033)
				Float tmp36 = tmp35->sinertia;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1033)
				::zpp_nape::phys::ZPP_Body tmp37 = this->b2;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1033)
				Float tmp38 = tmp37->sinertia;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1033)
				Float tmp39 = (tmp36 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1033)
				Float iSum = tmp39;		HX_STACK_VAR(iSum,"iSum");
				HX_STACK_LINE(1034)
				bool tmp40 = (iSum != (int)0);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1034)
				if ((tmp40)){
					HX_STACK_LINE(1034)
					Float tmp41 = (Float((int)1) / Float(iSum));		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1034)
					this->wMass = tmp41;
				}
				else{
					HX_STACK_LINE(1035)
					this->wMass = ((Float)0.0);
				}
				HX_STACK_LINE(1036)
				Float biasCoef;		HX_STACK_VAR(biasCoef,"biasCoef");
				HX_STACK_LINE(1037)
				hx::MultEq(tViscosity,((Float)0.0004));
				HX_STACK_LINE(1038)
				Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1038)
				{
					HX_STACK_LINE(1039)
					Float tmp42 = ::Math_obj::PI;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1039)
					Float tmp43 = ((int)2 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(1039)
					Float tmp44 = tViscosity;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(1039)
					Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(1039)
					Float omega = tmp45;		HX_STACK_VAR(omega,"omega");
					HX_STACK_LINE(1040)
					Float tmp46 = (dt * omega);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(1040)
					int tmp47 = (int)2;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(1040)
					Float tmp48 = (omega * dt);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(1040)
					Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(1040)
					Float tmp50 = (tmp46 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(1040)
					Float tmp51 = (Float((int)1) / Float(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(1040)
					this->agamma = tmp51;
					HX_STACK_LINE(1041)
					Float tmp52 = this->agamma;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(1041)
					Float tmp53 = ((int)1 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(1041)
					Float tmp54 = (Float((int)1) / Float(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(1041)
					Float ig = tmp54;		HX_STACK_VAR(ig,"ig");
					HX_STACK_LINE(1042)
					Float tmp55 = (dt * omega);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(1042)
					Float tmp56 = omega;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(1042)
					Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(1042)
					Float tmp58 = this->agamma;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(1042)
					Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(1042)
					biasCoef = tmp59;
					HX_STACK_LINE(1043)
					hx::MultEq(this->agamma,ig);
					HX_STACK_LINE(1044)
					tmp41 = ig;
				}
				HX_STACK_LINE(1038)
				hx::MultEq(this->wMass,tmp41);
			}
			else{
				HX_STACK_LINE(1048)
				this->wMass = ((Float)0.0);
				HX_STACK_LINE(1049)
				this->agamma = ((Float)0.0);
			}
			HX_STACK_LINE(1051)
			::zpp_nape::phys::ZPP_Body tmp35 = this->b2;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1051)
			Float tmp36 = tmp35->velx;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1051)
			::zpp_nape::phys::ZPP_Body tmp37 = this->b2;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1051)
			Float tmp38 = tmp37->kinvelx;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1051)
			Float tmp39 = (tmp36 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1051)
			Float tmp40 = this->r2y;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1051)
			::zpp_nape::phys::ZPP_Body tmp41 = this->b2;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1051)
			Float tmp42 = tmp41->angvel;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1051)
			::zpp_nape::phys::ZPP_Body tmp43 = this->b2;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1051)
			Float tmp44 = tmp43->kinangvel;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1051)
			Float tmp45 = (tmp42 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(1051)
			Float tmp46 = (tmp40 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(1051)
			Float tmp47 = (tmp39 - tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1051)
			::zpp_nape::phys::ZPP_Body tmp48 = this->b1;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(1051)
			Float tmp49 = tmp48->velx;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(1051)
			::zpp_nape::phys::ZPP_Body tmp50 = this->b1;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(1051)
			Float tmp51 = tmp50->kinvelx;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(1051)
			Float tmp52 = (tmp49 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(1051)
			Float tmp53 = this->r1y;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(1051)
			::zpp_nape::phys::ZPP_Body tmp54 = this->b2;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(1051)
			Float tmp55 = tmp54->angvel;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(1051)
			::zpp_nape::phys::ZPP_Body tmp56 = this->b2;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(1051)
			Float tmp57 = tmp56->kinangvel;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(1051)
			Float tmp58 = (tmp55 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(1051)
			Float tmp59 = (tmp53 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(1051)
			Float tmp60 = (tmp52 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(1051)
			Float tmp61 = (tmp47 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(1051)
			Float vrnx = tmp61;		HX_STACK_VAR(vrnx,"vrnx");
			HX_STACK_LINE(1052)
			::zpp_nape::phys::ZPP_Body tmp62 = this->b2;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(1052)
			Float tmp63 = tmp62->vely;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(1052)
			::zpp_nape::phys::ZPP_Body tmp64 = this->b2;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(1052)
			Float tmp65 = tmp64->kinvely;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(1052)
			Float tmp66 = (tmp63 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(1052)
			Float tmp67 = this->r2x;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(1052)
			::zpp_nape::phys::ZPP_Body tmp68 = this->b2;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(1052)
			Float tmp69 = tmp68->angvel;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(1052)
			::zpp_nape::phys::ZPP_Body tmp70 = this->b2;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(1052)
			Float tmp71 = tmp70->kinangvel;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(1052)
			Float tmp72 = (tmp69 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(1052)
			Float tmp73 = (tmp67 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(1052)
			Float tmp74 = (tmp66 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(1052)
			::zpp_nape::phys::ZPP_Body tmp75 = this->b1;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(1052)
			Float tmp76 = tmp75->vely;		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(1052)
			::zpp_nape::phys::ZPP_Body tmp77 = this->b1;		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(1052)
			Float tmp78 = tmp77->kinvely;		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(1052)
			Float tmp79 = (tmp76 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(1052)
			Float tmp80 = this->r1x;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(1052)
			::zpp_nape::phys::ZPP_Body tmp81 = this->b1;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(1052)
			Float tmp82 = tmp81->angvel;		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(1052)
			::zpp_nape::phys::ZPP_Body tmp83 = this->b1;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(1052)
			Float tmp84 = tmp83->kinangvel;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(1052)
			Float tmp85 = (tmp82 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(1052)
			Float tmp86 = (tmp80 * tmp85);		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(1052)
			Float tmp87 = (tmp79 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(1052)
			Float tmp88 = (tmp74 - tmp87);		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(1052)
			Float vrny = tmp88;		HX_STACK_VAR(vrny,"vrny");
			HX_STACK_LINE(1069)
			Float tmp89 = (vrnx * vrnx);		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(1069)
			Float tmp90 = (vrny * vrny);		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(1069)
			Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(1069)
			Float tmp92 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(1069)
			Float tmp93 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(1069)
			Float tmp94 = (tmp92 * tmp93);		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(1069)
			bool tmp95 = (tmp91 < tmp94);		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(1069)
			if ((tmp95)){
			}
			else{
				HX_STACK_LINE(1071)
				{
					HX_STACK_LINE(1072)
					Float tmp96 = (vrnx * vrnx);		HX_STACK_VAR(tmp96,"tmp96");
					HX_STACK_LINE(1072)
					Float tmp97 = (vrny * vrny);		HX_STACK_VAR(tmp97,"tmp97");
					HX_STACK_LINE(1072)
					Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
					HX_STACK_LINE(1072)
					Float d = tmp98;		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(1081)
					Float tmp99;		HX_STACK_VAR(tmp99,"tmp99");
					HX_STACK_LINE(1081)
					{
						HX_STACK_LINE(1081)
						Float tmp100;		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(1081)
						{
							HX_STACK_LINE(1081)
							Float tmp101 = d;		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(1081)
							tmp100 = ::Math_obj::sqrt(tmp101);
						}
						HX_STACK_LINE(1081)
						tmp99 = (Float(((Float)1.0)) / Float(tmp100));
					}
					HX_STACK_LINE(1081)
					Float imag = tmp99;		HX_STACK_VAR(imag,"imag");
					HX_STACK_LINE(1082)
					{
						HX_STACK_LINE(1083)
						Float t = imag;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1092)
						hx::MultEq(vrnx,t);
						HX_STACK_LINE(1093)
						hx::MultEq(vrny,t);
					}
				}
				HX_STACK_LINE(1096)
				{
					HX_STACK_LINE(1097)
					this->nx = vrnx;
					HX_STACK_LINE(1098)
					this->ny = vrny;
					HX_STACK_LINE(1107)
					{
					}
				}
			}
			HX_STACK_LINE(1117)
			Float tViscosity1 = ((Float)0.0);		HX_STACK_VAR(tViscosity1,"tViscosity1");
			HX_STACK_LINE(1118)
			::zpp_nape::shape::ZPP_Shape tmp96 = this->ws1;		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(1118)
			bool tmp97 = tmp96->fluidEnabled;		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(1118)
			if ((tmp97)){
				HX_STACK_LINE(1119)
				::zpp_nape::shape::ZPP_Shape tmp98 = this->ws1;		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(1119)
				Float tmp99 = tmp98->fluidProperties->viscosity;		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(1119)
				Float tmp100 = -(tmp99);		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(1119)
				Float tmp101 = this->overlap;		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(1119)
				Float tmp102 = (tmp100 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(1119)
				::zpp_nape::shape::ZPP_Shape tmp103 = this->ws2;		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(1119)
				Float tmp104 = tmp103->area;		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(1119)
				Float tmp105 = (Float(tmp102) / Float(tmp104));		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(1119)
				Float f = tmp105;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(1120)
				::zpp_nape::shape::ZPP_Shape tmp106 = this->ws2;		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(1120)
				int tmp107 = tmp106->type;		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(1120)
				int tmp108 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp108,"tmp108");
				HX_STACK_LINE(1120)
				bool tmp109 = (tmp107 == tmp108);		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(1120)
				if ((tmp109)){
					HX_STACK_LINE(1120)
					Float tmp110 = f;		HX_STACK_VAR(tmp110,"tmp110");
					HX_STACK_LINE(1120)
					::zpp_nape::shape::ZPP_Shape tmp111 = this->ws2;		HX_STACK_VAR(tmp111,"tmp111");
					HX_STACK_LINE(1120)
					Float tmp112 = tmp111->circle->radius;		HX_STACK_VAR(tmp112,"tmp112");
					HX_STACK_LINE(1120)
					Float tmp113 = (tmp110 * tmp112);		HX_STACK_VAR(tmp113,"tmp113");
					HX_STACK_LINE(1120)
					Float tmp114 = ::nape::Config_obj::fluidLinearDrag;		HX_STACK_VAR(tmp114,"tmp114");
					HX_STACK_LINE(1120)
					Float tmp115 = (tmp113 * tmp114);		HX_STACK_VAR(tmp115,"tmp115");
					HX_STACK_LINE(1120)
					::zpp_nape::shape::ZPP_Shape tmp116 = this->ws2;		HX_STACK_VAR(tmp116,"tmp116");
					HX_STACK_LINE(1120)
					Float tmp117 = tmp116->circle->radius;		HX_STACK_VAR(tmp117,"tmp117");
					HX_STACK_LINE(1120)
					Float tmp118 = ((int)2 * tmp117);		HX_STACK_VAR(tmp118,"tmp118");
					HX_STACK_LINE(1120)
					Float tmp119 = ::Math_obj::PI;		HX_STACK_VAR(tmp119,"tmp119");
					HX_STACK_LINE(1120)
					Float tmp120 = (tmp118 * tmp119);		HX_STACK_VAR(tmp120,"tmp120");
					HX_STACK_LINE(1120)
					Float tmp121 = (Float(tmp115) / Float(tmp120));		HX_STACK_VAR(tmp121,"tmp121");
					HX_STACK_LINE(1120)
					hx::SubEq(tViscosity1,tmp121);
				}
				else{
					HX_STACK_LINE(1122)
					::zpp_nape::shape::ZPP_Shape tmp110 = this->ws2;		HX_STACK_VAR(tmp110,"tmp110");
					HX_STACK_LINE(1122)
					::zpp_nape::shape::ZPP_Polygon poly = tmp110->polygon;		HX_STACK_VAR(poly,"poly");
					HX_STACK_LINE(1123)
					Float bord = ((Float)0.0);		HX_STACK_VAR(bord,"bord");
					HX_STACK_LINE(1124)
					Float acc = ((Float)0.0);		HX_STACK_VAR(acc,"acc");
					HX_STACK_LINE(1125)
					{
						HX_STACK_LINE(1126)
						::zpp_nape::util::ZNPNode_ZPP_Edge tmp111 = poly->edges->head;		HX_STACK_VAR(tmp111,"tmp111");
						HX_STACK_LINE(1126)
						::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp111;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(1127)
						while((true)){
							HX_STACK_LINE(1127)
							bool tmp112 = (cx_ite != null());		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(1127)
							bool tmp113 = !(tmp112);		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(1127)
							if ((tmp113)){
								HX_STACK_LINE(1127)
								break;
							}
							HX_STACK_LINE(1128)
							::zpp_nape::shape::ZPP_Edge ex = cx_ite->elt;		HX_STACK_VAR(ex,"ex");
							HX_STACK_LINE(1129)
							{
								HX_STACK_LINE(1130)
								hx::AddEq(bord,ex->length);
								HX_STACK_LINE(1131)
								Float tmp114 = (f * ex->length);		HX_STACK_VAR(tmp114,"tmp114");
								HX_STACK_LINE(1131)
								Float tmp115 = ex->gnormx;		HX_STACK_VAR(tmp115,"tmp115");
								HX_STACK_LINE(1131)
								Float tmp116 = this->nx;		HX_STACK_VAR(tmp116,"tmp116");
								HX_STACK_LINE(1131)
								Float tmp117 = (tmp115 * tmp116);		HX_STACK_VAR(tmp117,"tmp117");
								HX_STACK_LINE(1131)
								Float tmp118 = ex->gnormy;		HX_STACK_VAR(tmp118,"tmp118");
								HX_STACK_LINE(1131)
								Float tmp119 = this->ny;		HX_STACK_VAR(tmp119,"tmp119");
								HX_STACK_LINE(1131)
								Float tmp120 = (tmp118 * tmp119);		HX_STACK_VAR(tmp120,"tmp120");
								HX_STACK_LINE(1131)
								Float tmp121 = (tmp117 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
								HX_STACK_LINE(1131)
								Float tmp122 = (tmp114 * tmp121);		HX_STACK_VAR(tmp122,"tmp122");
								HX_STACK_LINE(1131)
								Float fact = tmp122;		HX_STACK_VAR(fact,"fact");
								HX_STACK_LINE(1132)
								bool tmp123 = (fact > (int)0);		HX_STACK_VAR(tmp123,"tmp123");
								HX_STACK_LINE(1132)
								if ((tmp123)){
									HX_STACK_LINE(1132)
									Float tmp124 = ::nape::Config_obj::fluidVacuumDrag;		HX_STACK_VAR(tmp124,"tmp124");
									HX_STACK_LINE(1132)
									Float tmp125 = -(tmp124);		HX_STACK_VAR(tmp125,"tmp125");
									HX_STACK_LINE(1132)
									Float tmp126 = hx::MultEq(fact,tmp125);		HX_STACK_VAR(tmp126,"tmp126");
									HX_STACK_LINE(1132)
									fact = tmp126;
								}
								HX_STACK_LINE(1133)
								Float tmp124 = (fact * ((Float)0.5));		HX_STACK_VAR(tmp124,"tmp124");
								HX_STACK_LINE(1133)
								Float tmp125 = ::nape::Config_obj::fluidLinearDrag;		HX_STACK_VAR(tmp125,"tmp125");
								HX_STACK_LINE(1133)
								Float tmp126 = (tmp124 * tmp125);		HX_STACK_VAR(tmp126,"tmp126");
								HX_STACK_LINE(1133)
								hx::SubEq(acc,tmp126);
							}
							HX_STACK_LINE(1135)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(1138)
					Float tmp111 = (Float(acc) / Float(bord));		HX_STACK_VAR(tmp111,"tmp111");
					HX_STACK_LINE(1138)
					hx::AddEq(tViscosity1,tmp111);
				}
			}
			HX_STACK_LINE(1141)
			::zpp_nape::shape::ZPP_Shape tmp98 = this->ws2;		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(1141)
			bool tmp99 = tmp98->fluidEnabled;		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(1141)
			if ((tmp99)){
				HX_STACK_LINE(1142)
				::zpp_nape::shape::ZPP_Shape tmp100 = this->ws2;		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(1142)
				Float tmp101 = tmp100->fluidProperties->viscosity;		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(1142)
				Float tmp102 = -(tmp101);		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(1142)
				Float tmp103 = this->overlap;		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(1142)
				Float tmp104 = (tmp102 * tmp103);		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(1142)
				::zpp_nape::shape::ZPP_Shape tmp105 = this->ws1;		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(1142)
				Float tmp106 = tmp105->area;		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(1142)
				Float tmp107 = (Float(tmp104) / Float(tmp106));		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(1142)
				Float f = tmp107;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(1143)
				::zpp_nape::shape::ZPP_Shape tmp108 = this->ws1;		HX_STACK_VAR(tmp108,"tmp108");
				HX_STACK_LINE(1143)
				int tmp109 = tmp108->type;		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(1143)
				int tmp110 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(1143)
				bool tmp111 = (tmp109 == tmp110);		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(1143)
				if ((tmp111)){
					HX_STACK_LINE(1143)
					Float tmp112 = f;		HX_STACK_VAR(tmp112,"tmp112");
					HX_STACK_LINE(1143)
					::zpp_nape::shape::ZPP_Shape tmp113 = this->ws1;		HX_STACK_VAR(tmp113,"tmp113");
					HX_STACK_LINE(1143)
					Float tmp114 = tmp113->circle->radius;		HX_STACK_VAR(tmp114,"tmp114");
					HX_STACK_LINE(1143)
					Float tmp115 = (tmp112 * tmp114);		HX_STACK_VAR(tmp115,"tmp115");
					HX_STACK_LINE(1143)
					Float tmp116 = ::nape::Config_obj::fluidLinearDrag;		HX_STACK_VAR(tmp116,"tmp116");
					HX_STACK_LINE(1143)
					Float tmp117 = (tmp115 * tmp116);		HX_STACK_VAR(tmp117,"tmp117");
					HX_STACK_LINE(1143)
					::zpp_nape::shape::ZPP_Shape tmp118 = this->ws1;		HX_STACK_VAR(tmp118,"tmp118");
					HX_STACK_LINE(1143)
					Float tmp119 = tmp118->circle->radius;		HX_STACK_VAR(tmp119,"tmp119");
					HX_STACK_LINE(1143)
					Float tmp120 = ((int)2 * tmp119);		HX_STACK_VAR(tmp120,"tmp120");
					HX_STACK_LINE(1143)
					Float tmp121 = ::Math_obj::PI;		HX_STACK_VAR(tmp121,"tmp121");
					HX_STACK_LINE(1143)
					Float tmp122 = (tmp120 * tmp121);		HX_STACK_VAR(tmp122,"tmp122");
					HX_STACK_LINE(1143)
					Float tmp123 = (Float(tmp117) / Float(tmp122));		HX_STACK_VAR(tmp123,"tmp123");
					HX_STACK_LINE(1143)
					hx::SubEq(tViscosity1,tmp123);
				}
				else{
					HX_STACK_LINE(1145)
					::zpp_nape::shape::ZPP_Shape tmp112 = this->ws1;		HX_STACK_VAR(tmp112,"tmp112");
					HX_STACK_LINE(1145)
					::zpp_nape::shape::ZPP_Polygon poly = tmp112->polygon;		HX_STACK_VAR(poly,"poly");
					HX_STACK_LINE(1146)
					Float bord = ((Float)0.0);		HX_STACK_VAR(bord,"bord");
					HX_STACK_LINE(1147)
					Float acc = ((Float)0.0);		HX_STACK_VAR(acc,"acc");
					HX_STACK_LINE(1148)
					{
						HX_STACK_LINE(1149)
						::zpp_nape::util::ZNPNode_ZPP_Edge tmp113 = poly->edges->head;		HX_STACK_VAR(tmp113,"tmp113");
						HX_STACK_LINE(1149)
						::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp113;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(1150)
						while((true)){
							HX_STACK_LINE(1150)
							bool tmp114 = (cx_ite != null());		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(1150)
							bool tmp115 = !(tmp114);		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(1150)
							if ((tmp115)){
								HX_STACK_LINE(1150)
								break;
							}
							HX_STACK_LINE(1151)
							::zpp_nape::shape::ZPP_Edge ex = cx_ite->elt;		HX_STACK_VAR(ex,"ex");
							HX_STACK_LINE(1152)
							{
								HX_STACK_LINE(1153)
								hx::AddEq(bord,ex->length);
								HX_STACK_LINE(1154)
								Float tmp116 = (f * ex->length);		HX_STACK_VAR(tmp116,"tmp116");
								HX_STACK_LINE(1154)
								Float tmp117 = ex->gnormx;		HX_STACK_VAR(tmp117,"tmp117");
								HX_STACK_LINE(1154)
								Float tmp118 = this->nx;		HX_STACK_VAR(tmp118,"tmp118");
								HX_STACK_LINE(1154)
								Float tmp119 = (tmp117 * tmp118);		HX_STACK_VAR(tmp119,"tmp119");
								HX_STACK_LINE(1154)
								Float tmp120 = ex->gnormy;		HX_STACK_VAR(tmp120,"tmp120");
								HX_STACK_LINE(1154)
								Float tmp121 = this->ny;		HX_STACK_VAR(tmp121,"tmp121");
								HX_STACK_LINE(1154)
								Float tmp122 = (tmp120 * tmp121);		HX_STACK_VAR(tmp122,"tmp122");
								HX_STACK_LINE(1154)
								Float tmp123 = (tmp119 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
								HX_STACK_LINE(1154)
								Float tmp124 = (tmp116 * tmp123);		HX_STACK_VAR(tmp124,"tmp124");
								HX_STACK_LINE(1154)
								Float fact = tmp124;		HX_STACK_VAR(fact,"fact");
								HX_STACK_LINE(1155)
								bool tmp125 = (fact > (int)0);		HX_STACK_VAR(tmp125,"tmp125");
								HX_STACK_LINE(1155)
								if ((tmp125)){
									HX_STACK_LINE(1155)
									Float tmp126 = ::nape::Config_obj::fluidVacuumDrag;		HX_STACK_VAR(tmp126,"tmp126");
									HX_STACK_LINE(1155)
									Float tmp127 = -(tmp126);		HX_STACK_VAR(tmp127,"tmp127");
									HX_STACK_LINE(1155)
									Float tmp128 = hx::MultEq(fact,tmp127);		HX_STACK_VAR(tmp128,"tmp128");
									HX_STACK_LINE(1155)
									fact = tmp128;
								}
								HX_STACK_LINE(1156)
								Float tmp126 = (fact * ((Float)0.5));		HX_STACK_VAR(tmp126,"tmp126");
								HX_STACK_LINE(1156)
								Float tmp127 = ::nape::Config_obj::fluidLinearDrag;		HX_STACK_VAR(tmp127,"tmp127");
								HX_STACK_LINE(1156)
								Float tmp128 = (tmp126 * tmp127);		HX_STACK_VAR(tmp128,"tmp128");
								HX_STACK_LINE(1156)
								hx::SubEq(acc,tmp128);
							}
							HX_STACK_LINE(1158)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(1161)
					Float tmp113 = (Float(acc) / Float(bord));		HX_STACK_VAR(tmp113,"tmp113");
					HX_STACK_LINE(1161)
					hx::AddEq(tViscosity1,tmp113);
				}
			}
			HX_STACK_LINE(1164)
			bool tmp100 = (tViscosity1 != (int)0);		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(1164)
			if ((tmp100)){
				HX_STACK_LINE(1165)
				::zpp_nape::phys::ZPP_Body tmp101 = this->b1;		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(1165)
				Float tmp102 = tmp101->smass;		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(1165)
				::zpp_nape::phys::ZPP_Body tmp103 = this->b2;		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(1165)
				Float tmp104 = tmp103->smass;		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(1165)
				Float tmp105 = (tmp102 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(1165)
				Float m = tmp105;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(1166)
				Float Ka = ((Float)0.0);		HX_STACK_VAR(Ka,"Ka");
				HX_STACK_LINE(1167)
				Float Kb = ((Float)0.0);		HX_STACK_VAR(Kb,"Kb");
				HX_STACK_LINE(1168)
				Float Kc = ((Float)0.0);		HX_STACK_VAR(Kc,"Kc");
				HX_STACK_LINE(1169)
				{
					HX_STACK_LINE(1170)
					Ka = m;
					HX_STACK_LINE(1171)
					Kb = (int)0;
					HX_STACK_LINE(1172)
					Kc = m;
				}
				HX_STACK_LINE(1174)
				::zpp_nape::phys::ZPP_Body tmp106 = this->b1;		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(1174)
				Float tmp107 = tmp106->sinertia;		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(1174)
				bool tmp108 = (tmp107 != (int)0);		HX_STACK_VAR(tmp108,"tmp108");
				HX_STACK_LINE(1174)
				if ((tmp108)){
					HX_STACK_LINE(1175)
					Float tmp109 = this->r1x;		HX_STACK_VAR(tmp109,"tmp109");
					HX_STACK_LINE(1175)
					::zpp_nape::phys::ZPP_Body tmp110 = this->b1;		HX_STACK_VAR(tmp110,"tmp110");
					HX_STACK_LINE(1175)
					Float tmp111 = tmp110->sinertia;		HX_STACK_VAR(tmp111,"tmp111");
					HX_STACK_LINE(1175)
					Float tmp112 = (tmp109 * tmp111);		HX_STACK_VAR(tmp112,"tmp112");
					HX_STACK_LINE(1175)
					Float X = tmp112;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(1176)
					Float tmp113 = this->r1y;		HX_STACK_VAR(tmp113,"tmp113");
					HX_STACK_LINE(1176)
					::zpp_nape::phys::ZPP_Body tmp114 = this->b1;		HX_STACK_VAR(tmp114,"tmp114");
					HX_STACK_LINE(1176)
					Float tmp115 = tmp114->sinertia;		HX_STACK_VAR(tmp115,"tmp115");
					HX_STACK_LINE(1176)
					Float tmp116 = (tmp113 * tmp115);		HX_STACK_VAR(tmp116,"tmp116");
					HX_STACK_LINE(1176)
					Float Y = tmp116;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(1177)
					{
						HX_STACK_LINE(1178)
						Float tmp117 = Y;		HX_STACK_VAR(tmp117,"tmp117");
						HX_STACK_LINE(1178)
						Float tmp118 = this->r1y;		HX_STACK_VAR(tmp118,"tmp118");
						HX_STACK_LINE(1178)
						Float tmp119 = (tmp117 * tmp118);		HX_STACK_VAR(tmp119,"tmp119");
						HX_STACK_LINE(1178)
						hx::AddEq(Ka,tmp119);
						HX_STACK_LINE(1179)
						Float tmp120 = Y;		HX_STACK_VAR(tmp120,"tmp120");
						HX_STACK_LINE(1179)
						Float tmp121 = -(tmp120);		HX_STACK_VAR(tmp121,"tmp121");
						HX_STACK_LINE(1179)
						Float tmp122 = this->r1x;		HX_STACK_VAR(tmp122,"tmp122");
						HX_STACK_LINE(1179)
						Float tmp123 = (tmp121 * tmp122);		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(1179)
						hx::AddEq(Kb,tmp123);
						HX_STACK_LINE(1180)
						Float tmp124 = X;		HX_STACK_VAR(tmp124,"tmp124");
						HX_STACK_LINE(1180)
						Float tmp125 = this->r1x;		HX_STACK_VAR(tmp125,"tmp125");
						HX_STACK_LINE(1180)
						Float tmp126 = (tmp124 * tmp125);		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(1180)
						hx::AddEq(Kc,tmp126);
					}
				}
				HX_STACK_LINE(1183)
				::zpp_nape::phys::ZPP_Body tmp109 = this->b2;		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(1183)
				Float tmp110 = tmp109->sinertia;		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(1183)
				bool tmp111 = (tmp110 != (int)0);		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(1183)
				if ((tmp111)){
					HX_STACK_LINE(1184)
					Float tmp112 = this->r2x;		HX_STACK_VAR(tmp112,"tmp112");
					HX_STACK_LINE(1184)
					::zpp_nape::phys::ZPP_Body tmp113 = this->b2;		HX_STACK_VAR(tmp113,"tmp113");
					HX_STACK_LINE(1184)
					Float tmp114 = tmp113->sinertia;		HX_STACK_VAR(tmp114,"tmp114");
					HX_STACK_LINE(1184)
					Float tmp115 = (tmp112 * tmp114);		HX_STACK_VAR(tmp115,"tmp115");
					HX_STACK_LINE(1184)
					Float X = tmp115;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(1185)
					Float tmp116 = this->r2y;		HX_STACK_VAR(tmp116,"tmp116");
					HX_STACK_LINE(1185)
					::zpp_nape::phys::ZPP_Body tmp117 = this->b2;		HX_STACK_VAR(tmp117,"tmp117");
					HX_STACK_LINE(1185)
					Float tmp118 = tmp117->sinertia;		HX_STACK_VAR(tmp118,"tmp118");
					HX_STACK_LINE(1185)
					Float tmp119 = (tmp116 * tmp118);		HX_STACK_VAR(tmp119,"tmp119");
					HX_STACK_LINE(1185)
					Float Y = tmp119;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(1186)
					{
						HX_STACK_LINE(1187)
						Float tmp120 = Y;		HX_STACK_VAR(tmp120,"tmp120");
						HX_STACK_LINE(1187)
						Float tmp121 = this->r2y;		HX_STACK_VAR(tmp121,"tmp121");
						HX_STACK_LINE(1187)
						Float tmp122 = (tmp120 * tmp121);		HX_STACK_VAR(tmp122,"tmp122");
						HX_STACK_LINE(1187)
						hx::AddEq(Ka,tmp122);
						HX_STACK_LINE(1188)
						Float tmp123 = Y;		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(1188)
						Float tmp124 = -(tmp123);		HX_STACK_VAR(tmp124,"tmp124");
						HX_STACK_LINE(1188)
						Float tmp125 = this->r2x;		HX_STACK_VAR(tmp125,"tmp125");
						HX_STACK_LINE(1188)
						Float tmp126 = (tmp124 * tmp125);		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(1188)
						hx::AddEq(Kb,tmp126);
						HX_STACK_LINE(1189)
						Float tmp127 = X;		HX_STACK_VAR(tmp127,"tmp127");
						HX_STACK_LINE(1189)
						Float tmp128 = this->r2x;		HX_STACK_VAR(tmp128,"tmp128");
						HX_STACK_LINE(1189)
						Float tmp129 = (tmp127 * tmp128);		HX_STACK_VAR(tmp129,"tmp129");
						HX_STACK_LINE(1189)
						hx::AddEq(Kc,tmp129);
					}
				}
				HX_STACK_LINE(1192)
				{
					HX_STACK_LINE(1193)
					Float tmp112 = (Ka * Kc);		HX_STACK_VAR(tmp112,"tmp112");
					HX_STACK_LINE(1193)
					Float tmp113 = (Kb * Kb);		HX_STACK_VAR(tmp113,"tmp113");
					HX_STACK_LINE(1193)
					Float tmp114 = (tmp112 - tmp113);		HX_STACK_VAR(tmp114,"tmp114");
					HX_STACK_LINE(1193)
					Float det = tmp114;		HX_STACK_VAR(det,"det");
					HX_STACK_LINE(1194)
					bool tmp115 = (det != det);		HX_STACK_VAR(tmp115,"tmp115");
					HX_STACK_LINE(1194)
					if ((tmp115)){
						HX_STACK_LINE(1195)
						Float tmp116 = Kc = (int)0;		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(1195)
						Float tmp117 = Kb = tmp116;		HX_STACK_VAR(tmp117,"tmp117");
						HX_STACK_LINE(1195)
						Ka = tmp117;
						HX_STACK_LINE(1196)
						(int)3;
					}
					else{
						HX_STACK_LINE(1198)
						bool tmp116 = (det == (int)0);		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(1198)
						if ((tmp116)){
							HX_STACK_LINE(1199)
							int flag = (int)0;		HX_STACK_VAR(flag,"flag");
							HX_STACK_LINE(1200)
							bool tmp117 = (Ka != (int)0);		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(1200)
							if ((tmp117)){
								HX_STACK_LINE(1200)
								Float tmp118 = (Float((int)1) / Float(Ka));		HX_STACK_VAR(tmp118,"tmp118");
								HX_STACK_LINE(1200)
								Ka = tmp118;
							}
							else{
								HX_STACK_LINE(1202)
								Ka = (int)0;
								HX_STACK_LINE(1203)
								hx::OrEq(flag,(int)1);
							}
							HX_STACK_LINE(1205)
							bool tmp118 = (Kc != (int)0);		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(1205)
							if ((tmp118)){
								HX_STACK_LINE(1205)
								Float tmp119 = (Float((int)1) / Float(Kc));		HX_STACK_VAR(tmp119,"tmp119");
								HX_STACK_LINE(1205)
								Kc = tmp119;
							}
							else{
								HX_STACK_LINE(1207)
								Kc = (int)0;
								HX_STACK_LINE(1208)
								hx::OrEq(flag,(int)2);
							}
							HX_STACK_LINE(1210)
							Kb = (int)0;
							HX_STACK_LINE(1211)
							flag;
						}
						else{
							HX_STACK_LINE(1214)
							Float tmp117 = (Float((int)1) / Float(det));		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(1214)
							det = tmp117;
							HX_STACK_LINE(1215)
							Float tmp118 = (Kc * det);		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(1215)
							Float t = tmp118;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1216)
							Float tmp119 = (Ka * det);		HX_STACK_VAR(tmp119,"tmp119");
							HX_STACK_LINE(1216)
							Kc = tmp119;
							HX_STACK_LINE(1217)
							Ka = t;
							HX_STACK_LINE(1218)
							Float tmp120 = det;		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(1218)
							Float tmp121 = -(tmp120);		HX_STACK_VAR(tmp121,"tmp121");
							HX_STACK_LINE(1218)
							hx::MultEq(Kb,tmp121);
							HX_STACK_LINE(1219)
							(int)0;
						}
					}
				}
				HX_STACK_LINE(1222)
				{
					HX_STACK_LINE(1223)
					this->vMassa = Ka;
					HX_STACK_LINE(1224)
					this->vMassb = Kb;
					HX_STACK_LINE(1225)
					this->vMassc = Kc;
				}
				HX_STACK_LINE(1227)
				Float biasCoef;		HX_STACK_VAR(biasCoef,"biasCoef");
				HX_STACK_LINE(1228)
				{
					HX_STACK_LINE(1229)
					Float tmp112;		HX_STACK_VAR(tmp112,"tmp112");
					HX_STACK_LINE(1229)
					{
						HX_STACK_LINE(1230)
						Float tmp113 = ::Math_obj::PI;		HX_STACK_VAR(tmp113,"tmp113");
						HX_STACK_LINE(1230)
						Float tmp114 = ((int)2 * tmp113);		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(1230)
						Float tmp115 = tViscosity1;		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(1230)
						Float tmp116 = (tmp114 * tmp115);		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(1230)
						Float omega = tmp116;		HX_STACK_VAR(omega,"omega");
						HX_STACK_LINE(1231)
						Float tmp117 = (dt * omega);		HX_STACK_VAR(tmp117,"tmp117");
						HX_STACK_LINE(1231)
						int tmp118 = (int)2;		HX_STACK_VAR(tmp118,"tmp118");
						HX_STACK_LINE(1231)
						Float tmp119 = (omega * dt);		HX_STACK_VAR(tmp119,"tmp119");
						HX_STACK_LINE(1231)
						Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
						HX_STACK_LINE(1231)
						Float tmp121 = (tmp117 * tmp120);		HX_STACK_VAR(tmp121,"tmp121");
						HX_STACK_LINE(1231)
						Float tmp122 = (Float((int)1) / Float(tmp121));		HX_STACK_VAR(tmp122,"tmp122");
						HX_STACK_LINE(1231)
						this->lgamma = tmp122;
						HX_STACK_LINE(1232)
						Float tmp123 = this->lgamma;		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(1232)
						Float tmp124 = ((int)1 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
						HX_STACK_LINE(1232)
						Float tmp125 = (Float((int)1) / Float(tmp124));		HX_STACK_VAR(tmp125,"tmp125");
						HX_STACK_LINE(1232)
						Float ig = tmp125;		HX_STACK_VAR(ig,"ig");
						HX_STACK_LINE(1233)
						Float tmp126 = (dt * omega);		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(1233)
						Float tmp127 = omega;		HX_STACK_VAR(tmp127,"tmp127");
						HX_STACK_LINE(1233)
						Float tmp128 = (tmp126 * tmp127);		HX_STACK_VAR(tmp128,"tmp128");
						HX_STACK_LINE(1233)
						Float tmp129 = this->lgamma;		HX_STACK_VAR(tmp129,"tmp129");
						HX_STACK_LINE(1233)
						Float tmp130 = (tmp128 * tmp129);		HX_STACK_VAR(tmp130,"tmp130");
						HX_STACK_LINE(1233)
						biasCoef = tmp130;
						HX_STACK_LINE(1234)
						hx::MultEq(this->lgamma,ig);
						HX_STACK_LINE(1235)
						tmp112 = ig;
					}
					HX_STACK_LINE(1229)
					Float X = tmp112;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(1237)
					hx::MultEq(this->vMassa,X);
					HX_STACK_LINE(1238)
					hx::MultEq(this->vMassb,X);
					HX_STACK_LINE(1239)
					hx::MultEq(this->vMassc,X);
				}
			}
			else{
				HX_STACK_LINE(1243)
				{
					HX_STACK_LINE(1244)
					this->vMassa = (int)0;
					HX_STACK_LINE(1245)
					this->vMassb = (int)0;
					HX_STACK_LINE(1246)
					this->vMassc = (int)0;
				}
				HX_STACK_LINE(1248)
				this->lgamma = ((Float)0.0);
			}
		}
		HX_STACK_LINE(1251)
		{
			HX_STACK_LINE(1252)
			Float t = dtratio;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1261)
			hx::MultEq(this->dampx,t);
			HX_STACK_LINE(1262)
			hx::MultEq(this->dampy,t);
		}
		HX_STACK_LINE(1264)
		hx::MultEq(this->adamp,dtratio);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_FluidArbiter_obj,preStep,(void))

Void ZPP_FluidArbiter_obj::warmStart( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","warmStart",0x40a04a8c,"zpp_nape.dynamics.ZPP_FluidArbiter.warmStart","zpp_nape/dynamics/Arbiter.hx",1268,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1269)
		{
			HX_STACK_LINE(1270)
			::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1270)
			Float t = tmp->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1279)
			Float tmp1 = this->dampx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1279)
			Float tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1279)
			Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1279)
			::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1279)
			hx::SubEq(tmp4->velx,tmp3);
			HX_STACK_LINE(1280)
			Float tmp5 = this->dampy;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1280)
			Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1280)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1280)
			::zpp_nape::phys::ZPP_Body tmp8 = this->b1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1280)
			hx::SubEq(tmp8->vely,tmp7);
		}
		HX_STACK_LINE(1282)
		{
			HX_STACK_LINE(1283)
			::zpp_nape::phys::ZPP_Body tmp = this->b2;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1283)
			Float t = tmp->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1292)
			Float tmp1 = this->dampx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1292)
			Float tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1292)
			Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1292)
			::zpp_nape::phys::ZPP_Body tmp4 = this->b2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1292)
			hx::AddEq(tmp4->velx,tmp3);
			HX_STACK_LINE(1293)
			Float tmp5 = this->dampy;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1293)
			Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1293)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1293)
			::zpp_nape::phys::ZPP_Body tmp8 = this->b2;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1293)
			hx::AddEq(tmp8->vely,tmp7);
		}
		HX_STACK_LINE(1295)
		::zpp_nape::phys::ZPP_Body tmp = this->b1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1295)
		Float tmp1 = tmp->iinertia;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1295)
		Float tmp2 = this->dampy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1295)
		Float tmp3 = this->r1x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1295)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1295)
		Float tmp5 = this->dampx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1295)
		Float tmp6 = this->r1y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1295)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1295)
		Float tmp8 = (tmp4 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1295)
		Float tmp9 = (tmp1 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1295)
		::zpp_nape::phys::ZPP_Body tmp10 = this->b1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1295)
		hx::SubEq(tmp10->angvel,tmp9);
		HX_STACK_LINE(1296)
		::zpp_nape::phys::ZPP_Body tmp11 = this->b2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1296)
		Float tmp12 = tmp11->iinertia;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1296)
		Float tmp13 = this->dampy;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1296)
		Float tmp14 = this->r2x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1296)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1296)
		Float tmp16 = this->dampx;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1296)
		Float tmp17 = this->r2y;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1296)
		Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1296)
		Float tmp19 = (tmp15 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1296)
		Float tmp20 = (tmp12 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1296)
		::zpp_nape::phys::ZPP_Body tmp21 = this->b2;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1296)
		hx::AddEq(tmp21->angvel,tmp20);
		HX_STACK_LINE(1297)
		Float tmp22 = this->adamp;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1297)
		::zpp_nape::phys::ZPP_Body tmp23 = this->b1;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1297)
		Float tmp24 = tmp23->iinertia;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1297)
		Float tmp25 = (tmp22 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1297)
		::zpp_nape::phys::ZPP_Body tmp26 = this->b1;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1297)
		hx::SubEq(tmp26->angvel,tmp25);
		HX_STACK_LINE(1298)
		Float tmp27 = this->adamp;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1298)
		::zpp_nape::phys::ZPP_Body tmp28 = this->b2;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1298)
		Float tmp29 = tmp28->iinertia;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1298)
		Float tmp30 = (tmp27 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1298)
		::zpp_nape::phys::ZPP_Body tmp31 = this->b2;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1298)
		hx::AddEq(tmp31->angvel,tmp30);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidArbiter_obj,warmStart,(void))

Void ZPP_FluidArbiter_obj::applyImpulseVel( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_FluidArbiter","applyImpulseVel",0x4f9f97a5,"zpp_nape.dynamics.ZPP_FluidArbiter.applyImpulseVel","zpp_nape/dynamics/Arbiter.hx",1302,0x26846f2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1303)
		bool tmp = this->nodrag;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1303)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1303)
		if ((tmp1)){
			HX_STACK_LINE(1304)
			::zpp_nape::phys::ZPP_Body tmp2 = this->b1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1304)
			Float tmp3 = tmp2->angvel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1304)
			::zpp_nape::phys::ZPP_Body tmp4 = this->b1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1304)
			Float tmp5 = tmp4->kinangvel;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1304)
			Float tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1304)
			Float w1 = tmp6;		HX_STACK_VAR(w1,"w1");
			HX_STACK_LINE(1305)
			::zpp_nape::phys::ZPP_Body tmp7 = this->b2;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1305)
			Float tmp8 = tmp7->angvel;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1305)
			::zpp_nape::phys::ZPP_Body tmp9 = this->b2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1305)
			Float tmp10 = tmp9->kinangvel;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1305)
			Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1305)
			Float w2 = tmp11;		HX_STACK_VAR(w2,"w2");
			HX_STACK_LINE(1306)
			::zpp_nape::phys::ZPP_Body tmp12 = this->b1;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1306)
			Float tmp13 = tmp12->velx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1306)
			::zpp_nape::phys::ZPP_Body tmp14 = this->b1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1306)
			Float tmp15 = tmp14->kinvelx;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1306)
			Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1306)
			Float tmp17 = this->r1y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1306)
			Float tmp18 = w1;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1306)
			Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1306)
			Float tmp20 = (tmp16 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1306)
			::zpp_nape::phys::ZPP_Body tmp21 = this->b2;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1306)
			Float tmp22 = tmp21->velx;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1306)
			::zpp_nape::phys::ZPP_Body tmp23 = this->b2;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1306)
			Float tmp24 = tmp23->kinvelx;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1306)
			Float tmp25 = (tmp22 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1306)
			Float tmp26 = this->r2y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1306)
			Float tmp27 = w2;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1306)
			Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1306)
			Float tmp29 = (tmp25 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1306)
			Float tmp30 = (tmp20 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1306)
			Float jx = tmp30;		HX_STACK_VAR(jx,"jx");
			HX_STACK_LINE(1307)
			::zpp_nape::phys::ZPP_Body tmp31 = this->b1;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1307)
			Float tmp32 = tmp31->vely;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1307)
			::zpp_nape::phys::ZPP_Body tmp33 = this->b1;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1307)
			Float tmp34 = tmp33->kinvely;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1307)
			Float tmp35 = (tmp32 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1307)
			Float tmp36 = this->r1x;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1307)
			Float tmp37 = w1;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1307)
			Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1307)
			Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1307)
			::zpp_nape::phys::ZPP_Body tmp40 = this->b2;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1307)
			Float tmp41 = tmp40->vely;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1307)
			::zpp_nape::phys::ZPP_Body tmp42 = this->b2;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1307)
			Float tmp43 = tmp42->kinvely;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1307)
			Float tmp44 = (tmp41 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1307)
			Float tmp45 = this->r2x;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(1307)
			Float tmp46 = w2;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(1307)
			Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1307)
			Float tmp48 = (tmp44 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(1307)
			Float tmp49 = (tmp39 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(1307)
			Float jy = tmp49;		HX_STACK_VAR(jy,"jy");
			HX_STACK_LINE(1324)
			{
				HX_STACK_LINE(1325)
				Float tmp50 = this->vMassa;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1325)
				Float tmp51 = jx;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1325)
				Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(1325)
				Float tmp53 = this->vMassb;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(1325)
				Float tmp54 = jy;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(1325)
				Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(1325)
				Float tmp56 = (tmp52 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(1325)
				Float t = tmp56;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1326)
				Float tmp57 = this->vMassb;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(1326)
				Float tmp58 = jx;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(1326)
				Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(1326)
				Float tmp60 = this->vMassc;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(1326)
				Float tmp61 = jy;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(1326)
				Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(1326)
				Float tmp63 = (tmp59 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(1326)
				jy = tmp63;
				HX_STACK_LINE(1327)
				jx = t;
			}
			HX_STACK_LINE(1329)
			{
				HX_STACK_LINE(1330)
				Float tmp50 = this->lgamma;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1330)
				Float t = tmp50;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1339)
				Float tmp51 = this->dampx;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1339)
				Float tmp52 = t;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(1339)
				Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(1339)
				hx::SubEq(jx,tmp53);
				HX_STACK_LINE(1340)
				Float tmp54 = this->dampy;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(1340)
				Float tmp55 = t;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(1340)
				Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(1340)
				hx::SubEq(jy,tmp56);
			}
			HX_STACK_LINE(1342)
			{
				HX_STACK_LINE(1343)
				Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1352)
				Float tmp50 = (jx * t);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1352)
				hx::AddEq(this->dampx,tmp50);
				HX_STACK_LINE(1353)
				Float tmp51 = (jy * t);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1353)
				hx::AddEq(this->dampy,tmp51);
			}
			HX_STACK_LINE(1355)
			{
				HX_STACK_LINE(1356)
				::zpp_nape::phys::ZPP_Body tmp50 = this->b1;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1356)
				Float t = tmp50->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1365)
				Float tmp51 = (jx * t);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1365)
				::zpp_nape::phys::ZPP_Body tmp52 = this->b1;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(1365)
				hx::SubEq(tmp52->velx,tmp51);
				HX_STACK_LINE(1366)
				Float tmp53 = (jy * t);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(1366)
				::zpp_nape::phys::ZPP_Body tmp54 = this->b1;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(1366)
				hx::SubEq(tmp54->vely,tmp53);
			}
			HX_STACK_LINE(1368)
			{
				HX_STACK_LINE(1369)
				::zpp_nape::phys::ZPP_Body tmp50 = this->b2;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1369)
				Float t = tmp50->imass;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1378)
				Float tmp51 = (jx * t);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1378)
				::zpp_nape::phys::ZPP_Body tmp52 = this->b2;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(1378)
				hx::AddEq(tmp52->velx,tmp51);
				HX_STACK_LINE(1379)
				Float tmp53 = (jy * t);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(1379)
				::zpp_nape::phys::ZPP_Body tmp54 = this->b2;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(1379)
				hx::AddEq(tmp54->vely,tmp53);
			}
			HX_STACK_LINE(1381)
			::zpp_nape::phys::ZPP_Body tmp50 = this->b1;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(1381)
			Float tmp51 = tmp50->iinertia;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(1381)
			Float tmp52 = jy;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(1381)
			Float tmp53 = this->r1x;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(1381)
			Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(1381)
			Float tmp55 = jx;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(1381)
			Float tmp56 = this->r1y;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(1381)
			Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(1381)
			Float tmp58 = (tmp54 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(1381)
			Float tmp59 = (tmp51 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(1381)
			::zpp_nape::phys::ZPP_Body tmp60 = this->b1;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(1381)
			hx::SubEq(tmp60->angvel,tmp59);
			HX_STACK_LINE(1382)
			::zpp_nape::phys::ZPP_Body tmp61 = this->b2;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(1382)
			Float tmp62 = tmp61->iinertia;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(1382)
			Float tmp63 = jy;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(1382)
			Float tmp64 = this->r2x;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(1382)
			Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(1382)
			Float tmp66 = jx;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(1382)
			Float tmp67 = this->r2y;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(1382)
			Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(1382)
			Float tmp69 = (tmp65 - tmp68);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(1382)
			Float tmp70 = (tmp62 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(1382)
			::zpp_nape::phys::ZPP_Body tmp71 = this->b2;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(1382)
			hx::AddEq(tmp71->angvel,tmp70);
			HX_STACK_LINE(1383)
			Float tmp72 = (w1 - w2);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(1383)
			Float tmp73 = this->wMass;		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(1383)
			Float tmp74 = (tmp72 * tmp73);		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(1383)
			Float tmp75 = this->adamp;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(1383)
			Float tmp76 = this->agamma;		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(1383)
			Float tmp77 = (tmp75 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(1383)
			Float tmp78 = (tmp74 - tmp77);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(1383)
			Float j_damp = tmp78;		HX_STACK_VAR(j_damp,"j_damp");
			HX_STACK_LINE(1384)
			hx::AddEq(this->adamp,j_damp);
			HX_STACK_LINE(1385)
			Float tmp79 = j_damp;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(1385)
			::zpp_nape::phys::ZPP_Body tmp80 = this->b1;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(1385)
			Float tmp81 = tmp80->iinertia;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(1385)
			Float tmp82 = (tmp79 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(1385)
			::zpp_nape::phys::ZPP_Body tmp83 = this->b1;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(1385)
			hx::SubEq(tmp83->angvel,tmp82);
			HX_STACK_LINE(1386)
			Float tmp84 = j_damp;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(1386)
			::zpp_nape::phys::ZPP_Body tmp85 = this->b2;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(1386)
			Float tmp86 = tmp85->iinertia;		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(1386)
			Float tmp87 = (tmp84 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(1386)
			::zpp_nape::phys::ZPP_Body tmp88 = this->b2;		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(1386)
			hx::AddEq(tmp88->angvel,tmp87);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_FluidArbiter_obj,applyImpulseVel,(void))

::zpp_nape::dynamics::ZPP_FluidArbiter ZPP_FluidArbiter_obj::zpp_pool;


ZPP_FluidArbiter_obj::ZPP_FluidArbiter_obj()
{
}

void ZPP_FluidArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_FluidArbiter);
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(centroidx,"centroidx");
	HX_MARK_MEMBER_NAME(centroidy,"centroidy");
	HX_MARK_MEMBER_NAME(overlap,"overlap");
	HX_MARK_MEMBER_NAME(r1x,"r1x");
	HX_MARK_MEMBER_NAME(r1y,"r1y");
	HX_MARK_MEMBER_NAME(r2x,"r2x");
	HX_MARK_MEMBER_NAME(r2y,"r2y");
	HX_MARK_MEMBER_NAME(nodrag,"nodrag");
	HX_MARK_MEMBER_NAME(wMass,"wMass");
	HX_MARK_MEMBER_NAME(adamp,"adamp");
	HX_MARK_MEMBER_NAME(agamma,"agamma");
	HX_MARK_MEMBER_NAME(vMassa,"vMassa");
	HX_MARK_MEMBER_NAME(vMassb,"vMassb");
	HX_MARK_MEMBER_NAME(vMassc,"vMassc");
	HX_MARK_MEMBER_NAME(dampx,"dampx");
	HX_MARK_MEMBER_NAME(dampy,"dampy");
	HX_MARK_MEMBER_NAME(lgamma,"lgamma");
	HX_MARK_MEMBER_NAME(nx,"nx");
	HX_MARK_MEMBER_NAME(ny,"ny");
	HX_MARK_MEMBER_NAME(buoyx,"buoyx");
	HX_MARK_MEMBER_NAME(buoyy,"buoyy");
	HX_MARK_MEMBER_NAME(wrap_position,"wrap_position");
	HX_MARK_MEMBER_NAME(_mutable,"mutable");
	HX_MARK_MEMBER_NAME(pre_dt,"pre_dt");
	::zpp_nape::dynamics::ZPP_Arbiter_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_FluidArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(centroidx,"centroidx");
	HX_VISIT_MEMBER_NAME(centroidy,"centroidy");
	HX_VISIT_MEMBER_NAME(overlap,"overlap");
	HX_VISIT_MEMBER_NAME(r1x,"r1x");
	HX_VISIT_MEMBER_NAME(r1y,"r1y");
	HX_VISIT_MEMBER_NAME(r2x,"r2x");
	HX_VISIT_MEMBER_NAME(r2y,"r2y");
	HX_VISIT_MEMBER_NAME(nodrag,"nodrag");
	HX_VISIT_MEMBER_NAME(wMass,"wMass");
	HX_VISIT_MEMBER_NAME(adamp,"adamp");
	HX_VISIT_MEMBER_NAME(agamma,"agamma");
	HX_VISIT_MEMBER_NAME(vMassa,"vMassa");
	HX_VISIT_MEMBER_NAME(vMassb,"vMassb");
	HX_VISIT_MEMBER_NAME(vMassc,"vMassc");
	HX_VISIT_MEMBER_NAME(dampx,"dampx");
	HX_VISIT_MEMBER_NAME(dampy,"dampy");
	HX_VISIT_MEMBER_NAME(lgamma,"lgamma");
	HX_VISIT_MEMBER_NAME(nx,"nx");
	HX_VISIT_MEMBER_NAME(ny,"ny");
	HX_VISIT_MEMBER_NAME(buoyx,"buoyx");
	HX_VISIT_MEMBER_NAME(buoyy,"buoyy");
	HX_VISIT_MEMBER_NAME(wrap_position,"wrap_position");
	HX_VISIT_MEMBER_NAME(_mutable,"mutable");
	HX_VISIT_MEMBER_NAME(pre_dt,"pre_dt");
	::zpp_nape::dynamics::ZPP_Arbiter_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_FluidArbiter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"nx") ) { return nx; }
		if (HX_FIELD_EQ(inName,"ny") ) { return ny; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"r1x") ) { return r1x; }
		if (HX_FIELD_EQ(inName,"r1y") ) { return r1y; }
		if (HX_FIELD_EQ(inName,"r2x") ) { return r2x; }
		if (HX_FIELD_EQ(inName,"r2y") ) { return r2y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"wMass") ) { return wMass; }
		if (HX_FIELD_EQ(inName,"adamp") ) { return adamp; }
		if (HX_FIELD_EQ(inName,"dampx") ) { return dampx; }
		if (HX_FIELD_EQ(inName,"dampy") ) { return dampy; }
		if (HX_FIELD_EQ(inName,"buoyx") ) { return buoyx; }
		if (HX_FIELD_EQ(inName,"buoyy") ) { return buoyy; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"nodrag") ) { return nodrag; }
		if (HX_FIELD_EQ(inName,"agamma") ) { return agamma; }
		if (HX_FIELD_EQ(inName,"vMassa") ) { return vMassa; }
		if (HX_FIELD_EQ(inName,"vMassb") ) { return vMassb; }
		if (HX_FIELD_EQ(inName,"vMassc") ) { return vMassc; }
		if (HX_FIELD_EQ(inName,"lgamma") ) { return lgamma; }
		if (HX_FIELD_EQ(inName,"assign") ) { return assign_dyn(); }
		if (HX_FIELD_EQ(inName,"retire") ) { return retire_dyn(); }
		if (HX_FIELD_EQ(inName,"inject") ) { return inject_dyn(); }
		if (HX_FIELD_EQ(inName,"pre_dt") ) { return pre_dt; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"overlap") ) { return overlap; }
		if (HX_FIELD_EQ(inName,"mutable") ) { return _mutable; }
		if (HX_FIELD_EQ(inName,"preStep") ) { return preStep_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"centroidx") ) { return centroidx; }
		if (HX_FIELD_EQ(inName,"centroidy") ) { return centroidy; }
		if (HX_FIELD_EQ(inName,"warmStart") ) { return warmStart_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getposition") ) { return getposition_dyn(); }
		if (HX_FIELD_EQ(inName,"makemutable") ) { return makemutable_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_position") ) { return wrap_position; }
		if (HX_FIELD_EQ(inName,"makeimmutable") ) { return makeimmutable_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyImpulseVel") ) { return applyImpulseVel_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"position_validate") ) { return position_validate_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"position_invalidate") ) { return position_invalidate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_FluidArbiter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
	}
	return false;
}

Dynamic ZPP_FluidArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"nx") ) { nx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ny") ) { ny=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"r1x") ) { r1x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r1y") ) { r1y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r2x") ) { r2x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r2y") ) { r2y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::dynamics::ZPP_FluidArbiter >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"wMass") ) { wMass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"adamp") ) { adamp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dampx") ) { dampx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dampy") ) { dampy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buoyx") ) { buoyx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buoyy") ) { buoyy=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"nodrag") ) { nodrag=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"agamma") ) { agamma=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vMassa") ) { vMassa=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vMassb") ) { vMassb=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vMassc") ) { vMassc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lgamma") ) { lgamma=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_dt") ) { pre_dt=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"overlap") ) { overlap=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mutable") ) { _mutable=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::dynamics::FluidArbiter >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"centroidx") ) { centroidx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"centroidy") ) { centroidy=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_position") ) { wrap_position=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_FluidArbiter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::dynamics::ZPP_FluidArbiter >(); return true; }
	}
	return false;
}

void ZPP_FluidArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("centroidx","\x38","\x58","\x3e","\x51"));
	outFields->push(HX_HCSTRING("centroidy","\x39","\x58","\x3e","\x51"));
	outFields->push(HX_HCSTRING("overlap","\x87","\x43","\x10","\xa9"));
	outFields->push(HX_HCSTRING("r1x","\x19","\xac","\x56","\x00"));
	outFields->push(HX_HCSTRING("r1y","\x1a","\xac","\x56","\x00"));
	outFields->push(HX_HCSTRING("r2x","\xf8","\xac","\x56","\x00"));
	outFields->push(HX_HCSTRING("r2y","\xf9","\xac","\x56","\x00"));
	outFields->push(HX_HCSTRING("nodrag","\xb5","\x40","\x2c","\x27"));
	outFields->push(HX_HCSTRING("wMass","\x0b","\x75","\xde","\xb7"));
	outFields->push(HX_HCSTRING("adamp","\x01","\x95","\x41","\x1c"));
	outFields->push(HX_HCSTRING("agamma","\x26","\x87","\x54","\x57"));
	outFields->push(HX_HCSTRING("vMassa","\x97","\x98","\x6c","\xc4"));
	outFields->push(HX_HCSTRING("vMassb","\x98","\x98","\x6c","\xc4"));
	outFields->push(HX_HCSTRING("vMassc","\x99","\x98","\x6c","\xc4"));
	outFields->push(HX_HCSTRING("dampx","\x58","\xcc","\x82","\xd4"));
	outFields->push(HX_HCSTRING("dampy","\x59","\xcc","\x82","\xd4"));
	outFields->push(HX_HCSTRING("lgamma","\x3b","\x7f","\x41","\xbd"));
	outFields->push(HX_HCSTRING("nx","\x4a","\x60","\x00","\x00"));
	outFields->push(HX_HCSTRING("ny","\x4b","\x60","\x00","\x00"));
	outFields->push(HX_HCSTRING("buoyx","\x1b","\x74","\xef","\xba"));
	outFields->push(HX_HCSTRING("buoyy","\x1c","\x74","\xef","\xba"));
	outFields->push(HX_HCSTRING("wrap_position","\xfe","\xd4","\x24","\xbb"));
	outFields->push(HX_HCSTRING("mutable","\xa6","\x7f","\x48","\x87"));
	outFields->push(HX_HCSTRING("pre_dt","\x6c","\x85","\xb1","\xae"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::dynamics::FluidArbiter*/ ,(int)offsetof(ZPP_FluidArbiter_obj,outer_zn),HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_FluidArbiter*/ ,(int)offsetof(ZPP_FluidArbiter_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,centroidx),HX_HCSTRING("centroidx","\x38","\x58","\x3e","\x51")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,centroidy),HX_HCSTRING("centroidy","\x39","\x58","\x3e","\x51")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,overlap),HX_HCSTRING("overlap","\x87","\x43","\x10","\xa9")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,r1x),HX_HCSTRING("r1x","\x19","\xac","\x56","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,r1y),HX_HCSTRING("r1y","\x1a","\xac","\x56","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,r2x),HX_HCSTRING("r2x","\xf8","\xac","\x56","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,r2y),HX_HCSTRING("r2y","\xf9","\xac","\x56","\x00")},
	{hx::fsBool,(int)offsetof(ZPP_FluidArbiter_obj,nodrag),HX_HCSTRING("nodrag","\xb5","\x40","\x2c","\x27")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,wMass),HX_HCSTRING("wMass","\x0b","\x75","\xde","\xb7")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,adamp),HX_HCSTRING("adamp","\x01","\x95","\x41","\x1c")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,agamma),HX_HCSTRING("agamma","\x26","\x87","\x54","\x57")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,vMassa),HX_HCSTRING("vMassa","\x97","\x98","\x6c","\xc4")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,vMassb),HX_HCSTRING("vMassb","\x98","\x98","\x6c","\xc4")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,vMassc),HX_HCSTRING("vMassc","\x99","\x98","\x6c","\xc4")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,dampx),HX_HCSTRING("dampx","\x58","\xcc","\x82","\xd4")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,dampy),HX_HCSTRING("dampy","\x59","\xcc","\x82","\xd4")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,lgamma),HX_HCSTRING("lgamma","\x3b","\x7f","\x41","\xbd")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,nx),HX_HCSTRING("nx","\x4a","\x60","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,ny),HX_HCSTRING("ny","\x4b","\x60","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,buoyx),HX_HCSTRING("buoyx","\x1b","\x74","\xef","\xba")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,buoyy),HX_HCSTRING("buoyy","\x1c","\x74","\xef","\xba")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_FluidArbiter_obj,wrap_position),HX_HCSTRING("wrap_position","\xfe","\xd4","\x24","\xbb")},
	{hx::fsBool,(int)offsetof(ZPP_FluidArbiter_obj,_mutable),HX_HCSTRING("mutable","\xa6","\x7f","\x48","\x87")},
	{hx::fsFloat,(int)offsetof(ZPP_FluidArbiter_obj,pre_dt),HX_HCSTRING("pre_dt","\x6c","\x85","\xb1","\xae")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_FluidArbiter*/ ,(void *) &ZPP_FluidArbiter_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("centroidx","\x38","\x58","\x3e","\x51"),
	HX_HCSTRING("centroidy","\x39","\x58","\x3e","\x51"),
	HX_HCSTRING("overlap","\x87","\x43","\x10","\xa9"),
	HX_HCSTRING("r1x","\x19","\xac","\x56","\x00"),
	HX_HCSTRING("r1y","\x1a","\xac","\x56","\x00"),
	HX_HCSTRING("r2x","\xf8","\xac","\x56","\x00"),
	HX_HCSTRING("r2y","\xf9","\xac","\x56","\x00"),
	HX_HCSTRING("nodrag","\xb5","\x40","\x2c","\x27"),
	HX_HCSTRING("wMass","\x0b","\x75","\xde","\xb7"),
	HX_HCSTRING("adamp","\x01","\x95","\x41","\x1c"),
	HX_HCSTRING("agamma","\x26","\x87","\x54","\x57"),
	HX_HCSTRING("vMassa","\x97","\x98","\x6c","\xc4"),
	HX_HCSTRING("vMassb","\x98","\x98","\x6c","\xc4"),
	HX_HCSTRING("vMassc","\x99","\x98","\x6c","\xc4"),
	HX_HCSTRING("dampx","\x58","\xcc","\x82","\xd4"),
	HX_HCSTRING("dampy","\x59","\xcc","\x82","\xd4"),
	HX_HCSTRING("lgamma","\x3b","\x7f","\x41","\xbd"),
	HX_HCSTRING("nx","\x4a","\x60","\x00","\x00"),
	HX_HCSTRING("ny","\x4b","\x60","\x00","\x00"),
	HX_HCSTRING("buoyx","\x1b","\x74","\xef","\xba"),
	HX_HCSTRING("buoyy","\x1c","\x74","\xef","\xba"),
	HX_HCSTRING("position_validate","\x2c","\x4a","\x54","\xce"),
	HX_HCSTRING("position_invalidate","\x91","\xa4","\xdc","\xe8"),
	HX_HCSTRING("wrap_position","\xfe","\xd4","\x24","\xbb"),
	HX_HCSTRING("getposition","\x3f","\xa7","\x3c","\x17"),
	HX_HCSTRING("assign","\x2f","\x46","\x06","\x4c"),
	HX_HCSTRING("retire","\x9b","\x89","\x24","\x09"),
	HX_HCSTRING("mutable","\xa6","\x7f","\x48","\x87"),
	HX_HCSTRING("makemutable","\x78","\x7f","\x01","\xfe"),
	HX_HCSTRING("makeimmutable","\x94","\x40","\x9d","\xbd"),
	HX_HCSTRING("inject","\x91","\x4a","\xea","\x97"),
	HX_HCSTRING("pre_dt","\x6c","\x85","\xb1","\xae"),
	HX_HCSTRING("preStep","\x0f","\xc1","\xc0","\x24"),
	HX_HCSTRING("warmStart","\xdd","\x27","\x03","\xeb"),
	HX_HCSTRING("applyImpulseVel","\xb6","\xc7","\x50","\x1f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_FluidArbiter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_FluidArbiter_obj::zpp_pool,"zpp_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_FluidArbiter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_FluidArbiter_obj::zpp_pool,"zpp_pool");
};

#endif

hx::Class ZPP_FluidArbiter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	::String(null()) };

void ZPP_FluidArbiter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.dynamics.ZPP_FluidArbiter","\x5d","\x22","\x30","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_FluidArbiter_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_FluidArbiter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_FluidArbiter_obj >;
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

void ZPP_FluidArbiter_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace dynamics
