#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_geom_RayResult
#include <nape/geom/RayResult.h>
#endif
#ifndef INCLUDED_nape_geom_RayResultList
#include <nape/geom/RayResultList.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ConvexRayResult
#include <zpp_nape/geom/ZPP_ConvexRayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Ray
#include <zpp_nape/geom/ZPP_Ray.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_RayResult
#include <zpp_nape/util/ZNPList_RayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_RayResult
#include <zpp_nape/util/ZNPNode_RayResult.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_RayResultList
#include <zpp_nape/util/ZPP_RayResultList.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Ray_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","new",0x8196e766,"zpp_nape.geom.ZPP_Ray.new","zpp_nape/geom/Ray.hx",174,0x908d5ea5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(284)
	this->zip_dir = false;
	HX_STACK_LINE(191)
	this->absnormaly = ((Float)0.0);
	HX_STACK_LINE(190)
	this->absnormalx = ((Float)0.0);
	HX_STACK_LINE(189)
	this->normaly = ((Float)0.0);
	HX_STACK_LINE(188)
	this->normalx = ((Float)0.0);
	HX_STACK_LINE(187)
	this->idiry = ((Float)0.0);
	HX_STACK_LINE(186)
	this->idirx = ((Float)0.0);
	HX_STACK_LINE(185)
	this->diry = ((Float)0.0);
	HX_STACK_LINE(184)
	this->dirx = ((Float)0.0);
	HX_STACK_LINE(183)
	this->originy = ((Float)0.0);
	HX_STACK_LINE(182)
	this->originx = ((Float)0.0);
	HX_STACK_LINE(181)
	this->userData = null();
	HX_STACK_LINE(180)
	this->maxdist = ((Float)0.0);
	HX_STACK_LINE(179)
	this->direction = null();
	HX_STACK_LINE(178)
	this->origin = null();
	HX_STACK_LINE(238)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	{
		HX_STACK_LINE(238)
		Float x = (int)0;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(238)
		Float y = (int)0;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(238)
		bool weak = false;		HX_STACK_VAR(weak,"weak");
		HX_STACK_LINE(238)
		bool tmp1 = (x != x);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(238)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(238)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		if ((tmp2)){
			HX_STACK_LINE(238)
			tmp3 = (y != y);
		}
		else{
			HX_STACK_LINE(238)
			tmp3 = true;
		}
		HX_STACK_LINE(238)
		if ((tmp3)){
			HX_STACK_LINE(238)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
		}
		HX_STACK_LINE(238)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(238)
		{
			HX_STACK_LINE(238)
			::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(238)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(238)
			if ((tmp5)){
				HX_STACK_LINE(238)
				::nape::geom::Vec2 tmp6 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(238)
				ret = tmp6;
			}
			else{
				HX_STACK_LINE(238)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(238)
				ret = tmp6;
				HX_STACK_LINE(238)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(238)
				ret->zpp_pool = null();
				HX_STACK_LINE(238)
				ret->zpp_disp = false;
				HX_STACK_LINE(238)
				::nape::geom::Vec2 tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(238)
				::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(238)
				bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(238)
				if ((tmp9)){
					HX_STACK_LINE(238)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
				}
			}
		}
		HX_STACK_LINE(238)
		bool tmp4 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(238)
		if ((tmp4)){
			HX_STACK_LINE(238)
			::zpp_nape::geom::ZPP_Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(238)
			{
				HX_STACK_LINE(238)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(238)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(238)
					bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(238)
					if ((tmp7)){
						HX_STACK_LINE(238)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(238)
						ret1 = tmp8;
					}
					else{
						HX_STACK_LINE(238)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(238)
						ret1 = tmp8;
						HX_STACK_LINE(238)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(238)
						ret1->next = null();
					}
					HX_STACK_LINE(238)
					ret1->weak = false;
				}
				HX_STACK_LINE(238)
				ret1->_immutable = immutable;
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					ret1->x = x;
					HX_STACK_LINE(238)
					ret1->y = y;
					HX_STACK_LINE(238)
					{
					}
				}
				HX_STACK_LINE(238)
				tmp5 = ret1;
			}
			HX_STACK_LINE(238)
			ret->zpp_inner = tmp5;
			HX_STACK_LINE(238)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(238)
			{
				HX_STACK_LINE(238)
				bool tmp5 = (ret != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(238)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(238)
				if ((tmp5)){
					HX_STACK_LINE(238)
					tmp6 = ret->zpp_disp;
				}
				else{
					HX_STACK_LINE(238)
					tmp6 = false;
				}
				HX_STACK_LINE(238)
				if ((tmp6)){
					HX_STACK_LINE(238)
					::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(238)
					::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(238)
					HX_STACK_DO_THROW(tmp8);
				}
			}
			HX_STACK_LINE(238)
			{
				HX_STACK_LINE(238)
				::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(238)
				bool tmp5 = _this->_immutable;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(238)
				if ((tmp5)){
					HX_STACK_LINE(238)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(238)
				bool tmp6 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(238)
				if ((tmp6)){
					HX_STACK_LINE(238)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(238)
			bool tmp5 = (x != x);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(238)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(238)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(238)
			if ((tmp6)){
				HX_STACK_LINE(238)
				tmp7 = (y != y);
			}
			else{
				HX_STACK_LINE(238)
				tmp7 = true;
			}
			HX_STACK_LINE(238)
			if ((tmp7)){
				HX_STACK_LINE(238)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(238)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(238)
			{
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(238)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(238)
					if ((tmp9)){
						HX_STACK_LINE(238)
						tmp10 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(238)
						tmp10 = false;
					}
					HX_STACK_LINE(238)
					if ((tmp10)){
						HX_STACK_LINE(238)
						::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(238)
						::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(238)
						HX_STACK_DO_THROW(tmp12);
					}
				}
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(238)
					bool tmp9 = (_this->_validate != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(238)
					if ((tmp9)){
						HX_STACK_LINE(238)
						_this->_validate();
					}
				}
				HX_STACK_LINE(238)
				tmp8 = ret->zpp_inner->x;
			}
			HX_STACK_LINE(238)
			Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(238)
			bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(238)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(238)
			if ((tmp10)){
				HX_STACK_LINE(238)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						bool tmp13 = (ret != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(238)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(238)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(238)
						bool tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(238)
						if ((tmp16)){
							HX_STACK_LINE(238)
							tmp15 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(238)
							tmp15 = false;
						}
						HX_STACK_LINE(238)
						bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(238)
						if ((tmp17)){
							HX_STACK_LINE(238)
							::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(238)
							::String tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(238)
							::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(238)
							::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(238)
							::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(238)
							HX_STACK_DO_THROW(tmp22);
						}
					}
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(238)
						bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(238)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(238)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(238)
						if ((tmp15)){
							HX_STACK_LINE(238)
							_this->_validate();
						}
					}
					HX_STACK_LINE(238)
					Float tmp13 = ret->zpp_inner->y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(238)
					tmp12 = tmp13;
				}
				HX_STACK_LINE(238)
				Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(238)
				tmp11 = (tmp12 == tmp13);
			}
			else{
				HX_STACK_LINE(238)
				tmp11 = false;
			}
			HX_STACK_LINE(238)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(238)
			if ((tmp12)){
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					ret->zpp_inner->x = x;
					HX_STACK_LINE(238)
					ret->zpp_inner->y = y;
					HX_STACK_LINE(238)
					{
					}
				}
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(238)
					bool tmp13 = (_this->_invalidate != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(238)
					if ((tmp13)){
						HX_STACK_LINE(238)
						::zpp_nape::geom::ZPP_Vec2 tmp14 = _this;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(238)
						_this->_invalidate(tmp14);
					}
				}
			}
			HX_STACK_LINE(238)
			ret;
		}
		HX_STACK_LINE(238)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(238)
		tmp = ret;
	}
	HX_STACK_LINE(238)
	this->origin = tmp;
	HX_STACK_LINE(239)
	Dynamic tmp1 = this->origin_invalidate_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	::nape::geom::Vec2 tmp2 = this->origin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(239)
	tmp2->zpp_inner->_invalidate = tmp1;
	HX_STACK_LINE(240)
	::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(240)
	{
		HX_STACK_LINE(240)
		Float x = (int)0;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(240)
		Float y = (int)0;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(240)
		bool weak = false;		HX_STACK_VAR(weak,"weak");
		HX_STACK_LINE(240)
		bool tmp4 = (x != x);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(240)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(240)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(240)
		if ((tmp5)){
			HX_STACK_LINE(240)
			tmp6 = (y != y);
		}
		else{
			HX_STACK_LINE(240)
			tmp6 = true;
		}
		HX_STACK_LINE(240)
		if ((tmp6)){
			HX_STACK_LINE(240)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
		}
		HX_STACK_LINE(240)
		::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(240)
		{
			HX_STACK_LINE(240)
			::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(240)
			bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(240)
			if ((tmp8)){
				HX_STACK_LINE(240)
				::nape::geom::Vec2 tmp9 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(240)
				ret = tmp9;
			}
			else{
				HX_STACK_LINE(240)
				::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(240)
				ret = tmp9;
				HX_STACK_LINE(240)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(240)
				ret->zpp_pool = null();
				HX_STACK_LINE(240)
				ret->zpp_disp = false;
				HX_STACK_LINE(240)
				::nape::geom::Vec2 tmp10 = ret;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(240)
				::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(240)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(240)
				if ((tmp12)){
					HX_STACK_LINE(240)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
				}
			}
		}
		HX_STACK_LINE(240)
		bool tmp7 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(240)
		if ((tmp7)){
			HX_STACK_LINE(240)
			::zpp_nape::geom::ZPP_Vec2 tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(240)
			{
				HX_STACK_LINE(240)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(240)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(240)
					bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(240)
					if ((tmp10)){
						HX_STACK_LINE(240)
						::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(240)
						ret1 = tmp11;
					}
					else{
						HX_STACK_LINE(240)
						::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(240)
						ret1 = tmp11;
						HX_STACK_LINE(240)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(240)
						ret1->next = null();
					}
					HX_STACK_LINE(240)
					ret1->weak = false;
				}
				HX_STACK_LINE(240)
				ret1->_immutable = immutable;
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					ret1->x = x;
					HX_STACK_LINE(240)
					ret1->y = y;
					HX_STACK_LINE(240)
					{
					}
				}
				HX_STACK_LINE(240)
				tmp8 = ret1;
			}
			HX_STACK_LINE(240)
			ret->zpp_inner = tmp8;
			HX_STACK_LINE(240)
			ret->zpp_inner->outer = ret;
		}
		else{
			HX_STACK_LINE(240)
			{
				HX_STACK_LINE(240)
				bool tmp8 = (ret != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(240)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(240)
				if ((tmp8)){
					HX_STACK_LINE(240)
					tmp9 = ret->zpp_disp;
				}
				else{
					HX_STACK_LINE(240)
					tmp9 = false;
				}
				HX_STACK_LINE(240)
				if ((tmp9)){
					HX_STACK_LINE(240)
					::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(240)
					::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(240)
					HX_STACK_DO_THROW(tmp11);
				}
			}
			HX_STACK_LINE(240)
			{
				HX_STACK_LINE(240)
				::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(240)
				bool tmp8 = _this->_immutable;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(240)
				if ((tmp8)){
					HX_STACK_LINE(240)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(240)
				bool tmp9 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(240)
				if ((tmp9)){
					HX_STACK_LINE(240)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(240)
			bool tmp8 = (x != x);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(240)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(240)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(240)
			if ((tmp9)){
				HX_STACK_LINE(240)
				tmp10 = (y != y);
			}
			else{
				HX_STACK_LINE(240)
				tmp10 = true;
			}
			HX_STACK_LINE(240)
			if ((tmp10)){
				HX_STACK_LINE(240)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(240)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(240)
			{
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					bool tmp12 = (ret != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(240)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(240)
					if ((tmp12)){
						HX_STACK_LINE(240)
						tmp13 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(240)
						tmp13 = false;
					}
					HX_STACK_LINE(240)
					if ((tmp13)){
						HX_STACK_LINE(240)
						::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(240)
						::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(240)
						HX_STACK_DO_THROW(tmp15);
					}
				}
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(240)
					bool tmp12 = (_this->_validate != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(240)
					if ((tmp12)){
						HX_STACK_LINE(240)
						_this->_validate();
					}
				}
				HX_STACK_LINE(240)
				tmp11 = ret->zpp_inner->x;
			}
			HX_STACK_LINE(240)
			Float tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(240)
			bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(240)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(240)
			if ((tmp13)){
				HX_STACK_LINE(240)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					{
						HX_STACK_LINE(240)
						bool tmp16 = (ret != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(240)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(240)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(240)
						bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(240)
						if ((tmp19)){
							HX_STACK_LINE(240)
							tmp18 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(240)
							tmp18 = false;
						}
						HX_STACK_LINE(240)
						bool tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(240)
						if ((tmp20)){
							HX_STACK_LINE(240)
							::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(240)
							::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(240)
							::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(240)
							::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(240)
							::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(240)
							HX_STACK_DO_THROW(tmp25);
						}
					}
					HX_STACK_LINE(240)
					{
						HX_STACK_LINE(240)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(240)
						bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(240)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(240)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(240)
						if ((tmp18)){
							HX_STACK_LINE(240)
							_this->_validate();
						}
					}
					HX_STACK_LINE(240)
					Float tmp16 = ret->zpp_inner->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(240)
					tmp15 = tmp16;
				}
				HX_STACK_LINE(240)
				Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(240)
				tmp14 = (tmp15 == tmp16);
			}
			else{
				HX_STACK_LINE(240)
				tmp14 = false;
			}
			HX_STACK_LINE(240)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(240)
			if ((tmp15)){
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					ret->zpp_inner->x = x;
					HX_STACK_LINE(240)
					ret->zpp_inner->y = y;
					HX_STACK_LINE(240)
					{
					}
				}
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(240)
					bool tmp16 = (_this->_invalidate != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(240)
					if ((tmp16)){
						HX_STACK_LINE(240)
						::zpp_nape::geom::ZPP_Vec2 tmp17 = _this;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(240)
						_this->_invalidate(tmp17);
					}
				}
			}
			HX_STACK_LINE(240)
			ret;
		}
		HX_STACK_LINE(240)
		ret->zpp_inner->weak = weak;
		HX_STACK_LINE(240)
		tmp3 = ret;
	}
	HX_STACK_LINE(240)
	this->direction = tmp3;
	HX_STACK_LINE(241)
	Dynamic tmp4 = this->direction_invalidate_dyn();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(241)
	::nape::geom::Vec2 tmp5 = this->direction;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(241)
	tmp5->zpp_inner->_invalidate = tmp4;
	HX_STACK_LINE(242)
	{
		HX_STACK_LINE(243)
		this->originx = (int)0;
		HX_STACK_LINE(244)
		this->originy = (int)0;
		HX_STACK_LINE(253)
		{
		}
	}
	HX_STACK_LINE(262)
	{
		HX_STACK_LINE(263)
		this->dirx = (int)0;
		HX_STACK_LINE(264)
		this->diry = (int)0;
		HX_STACK_LINE(273)
		{
		}
	}
	HX_STACK_LINE(282)
	this->zip_dir = false;
}
;
	return null();
}

//ZPP_Ray_obj::~ZPP_Ray_obj() { }

Dynamic ZPP_Ray_obj::__CreateEmpty() { return  new ZPP_Ray_obj; }
hx::ObjectPtr< ZPP_Ray_obj > ZPP_Ray_obj::__new()
{  hx::ObjectPtr< ZPP_Ray_obj > _result_ = new ZPP_Ray_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Ray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Ray_obj > _result_ = new ZPP_Ray_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_Ray_obj::origin_invalidate( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","origin_invalidate",0x49c6fffa,"zpp_nape.geom.ZPP_Ray.origin_invalidate","zpp_nape/geom/Ray.hx",193,0x908d5ea5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(194)
		this->originx = x->x;
		HX_STACK_LINE(195)
		this->originy = x->y;
		HX_STACK_LINE(204)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Ray_obj,origin_invalidate,(void))

Void ZPP_Ray_obj::direction_invalidate( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","direction_invalidate",0x73b160f5,"zpp_nape.geom.ZPP_Ray.direction_invalidate","zpp_nape/geom/Ray.hx",214,0x908d5ea5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(216)
			this->dirx = x->x;
			HX_STACK_LINE(217)
			this->diry = x->y;
			HX_STACK_LINE(226)
			{
			}
		}
		HX_STACK_LINE(235)
		this->zip_dir = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Ray_obj,direction_invalidate,(void))

Void ZPP_Ray_obj::invalidate_dir( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","invalidate_dir",0x06fe5003,"zpp_nape.geom.ZPP_Ray.invalidate_dir","zpp_nape/geom/Ray.hx",288,0x908d5ea5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(288)
		this->zip_dir = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Ray_obj,invalidate_dir,(void))

Void ZPP_Ray_obj::validate_dir( ){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","validate_dir",0x991f2e1e,"zpp_nape.geom.ZPP_Ray.validate_dir","zpp_nape/geom/Ray.hx",290,0x908d5ea5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(291)
		bool tmp = this->zip_dir;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(291)
		if ((tmp)){
			HX_STACK_LINE(292)
			this->zip_dir = false;
			HX_STACK_LINE(294)
			Float tmp1 = this->dirx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(294)
			Float tmp2 = this->dirx;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(294)
			Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(294)
			Float tmp4 = this->diry;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(294)
			Float tmp5 = this->diry;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(294)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(294)
			Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(294)
			Float tmp8 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(294)
			bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(294)
			if ((tmp9)){
				HX_STACK_LINE(295)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Ray::direction is degenerate","\x0f","\x9a","\x8b","\xe5"));
			}
			HX_STACK_LINE(298)
			{
				HX_STACK_LINE(299)
				Float tmp10 = this->dirx;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(299)
				Float tmp11 = this->dirx;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(299)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(299)
				Float tmp13 = this->diry;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(299)
				Float tmp14 = this->diry;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(299)
				Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(299)
				Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(299)
				Float d = tmp16;		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(308)
				Float tmp17 = d;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(308)
				Float tmp18 = ::Math_obj::sqrt(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(308)
				Float tmp19 = (Float(((Float)1.0)) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(308)
				Float imag = tmp19;		HX_STACK_VAR(imag,"imag");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(310)
					Float t = imag;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(319)
					hx::MultEq(this->dirx,t);
					HX_STACK_LINE(320)
					hx::MultEq(this->diry,t);
				}
			}
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(324)
				Float tmp10 = this->dirx;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(324)
				Float tmp11 = (Float((int)1) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(324)
				this->idirx = tmp11;
				HX_STACK_LINE(325)
				Float tmp12 = this->diry;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(325)
				Float tmp13 = (Float((int)1) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(325)
				this->idiry = tmp13;
				HX_STACK_LINE(334)
				{
				}
			}
			HX_STACK_LINE(343)
			{
				HX_STACK_LINE(344)
				Float tmp10 = this->diry;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(344)
				Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(344)
				this->normalx = tmp11;
				HX_STACK_LINE(345)
				Float tmp12 = this->dirx;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(345)
				this->normaly = tmp12;
				HX_STACK_LINE(354)
				{
				}
			}
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(364)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(364)
				{
					HX_STACK_LINE(365)
					Float tmp11 = this->normalx;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(365)
					Float x = tmp11;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(366)
					bool tmp12 = (x < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(366)
					if ((tmp12)){
						HX_STACK_LINE(366)
						Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(366)
						tmp10 = -(tmp13);
					}
					else{
						HX_STACK_LINE(366)
						tmp10 = x;
					}
				}
				HX_STACK_LINE(364)
				this->absnormalx = tmp10;
				HX_STACK_LINE(368)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(368)
				{
					HX_STACK_LINE(369)
					Float tmp12 = this->normaly;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(369)
					Float x = tmp12;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(370)
					bool tmp13 = (x < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(370)
					if ((tmp13)){
						HX_STACK_LINE(370)
						Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(370)
						tmp11 = -(tmp14);
					}
					else{
						HX_STACK_LINE(370)
						tmp11 = x;
					}
				}
				HX_STACK_LINE(368)
				this->absnormaly = tmp11;
				HX_STACK_LINE(380)
				{
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Ray_obj,validate_dir,(void))

::zpp_nape::geom::ZPP_AABB ZPP_Ray_obj::rayAABB( ){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","rayAABB",0xae538f90,"zpp_nape.geom.ZPP_Ray.rayAABB","zpp_nape/geom/Ray.hx",391,0x908d5ea5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(392)
	Float tmp = this->originx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(392)
	Float x0 = tmp;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(393)
	Float x1 = x0;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(394)
	Float tmp1 = this->originy;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(394)
	Float y0 = tmp1;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(395)
	Float y1 = y0;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(396)
	Float tmp2 = this->maxdist;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(396)
	Float tmp3 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(396)
	bool tmp4 = (tmp2 >= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(396)
	if ((tmp4)){
		HX_STACK_LINE(397)
		Float tmp5 = this->dirx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(397)
		bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(397)
		if ((tmp6)){
			HX_STACK_LINE(398)
			Float tmp7 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(398)
			x1 = tmp7;
		}
		else{
			HX_STACK_LINE(400)
			Float tmp7 = this->dirx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(400)
			bool tmp8 = (tmp7 < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(400)
			if ((tmp8)){
				HX_STACK_LINE(401)
				Float tmp9 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(401)
				x1 = tmp9;
			}
		}
		HX_STACK_LINE(403)
		Float tmp7 = this->diry;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(403)
		bool tmp8 = (tmp7 > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(403)
		if ((tmp8)){
			HX_STACK_LINE(404)
			Float tmp9 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(404)
			y1 = tmp9;
		}
		else{
			HX_STACK_LINE(406)
			Float tmp9 = this->diry;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(406)
			bool tmp10 = (tmp9 < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(406)
			if ((tmp10)){
				HX_STACK_LINE(407)
				Float tmp11 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(407)
				y1 = tmp11;
			}
		}
	}
	else{
		HX_STACK_LINE(411)
		Float tmp5 = this->maxdist;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(411)
		Float tmp6 = this->dirx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(411)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(411)
		hx::AddEq(x1,tmp7);
		HX_STACK_LINE(412)
		Float tmp8 = this->maxdist;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(412)
		Float tmp9 = this->diry;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(412)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(412)
		hx::AddEq(y1,tmp10);
	}
	HX_STACK_LINE(414)
	bool tmp5 = (x1 < x0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(414)
	if ((tmp5)){
		HX_STACK_LINE(415)
		Float t = x0;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(416)
		x0 = x1;
		HX_STACK_LINE(417)
		x1 = t;
	}
	HX_STACK_LINE(419)
	bool tmp6 = (y1 < y0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(419)
	if ((tmp6)){
		HX_STACK_LINE(420)
		Float t = y0;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(421)
		y0 = y1;
		HX_STACK_LINE(422)
		y1 = t;
	}
	HX_STACK_LINE(424)
	::zpp_nape::geom::ZPP_AABB tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(424)
	{
		HX_STACK_LINE(424)
		::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(424)
		{
			HX_STACK_LINE(424)
			::zpp_nape::geom::ZPP_AABB tmp8 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(424)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(424)
			if ((tmp9)){
				HX_STACK_LINE(424)
				::zpp_nape::geom::ZPP_AABB tmp10 = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(424)
				ret = tmp10;
			}
			else{
				HX_STACK_LINE(424)
				::zpp_nape::geom::ZPP_AABB tmp10 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(424)
				ret = tmp10;
				HX_STACK_LINE(424)
				::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
				HX_STACK_LINE(424)
				ret->next = null();
			}
			HX_STACK_LINE(424)
			Dynamic();
		}
		HX_STACK_LINE(424)
		{
			HX_STACK_LINE(424)
			ret->minx = x0;
			HX_STACK_LINE(424)
			ret->miny = y0;
			HX_STACK_LINE(424)
			{
			}
		}
		HX_STACK_LINE(424)
		{
			HX_STACK_LINE(424)
			ret->maxx = x1;
			HX_STACK_LINE(424)
			ret->maxy = y1;
			HX_STACK_LINE(424)
			{
			}
		}
		HX_STACK_LINE(424)
		tmp7 = ret;
	}
	HX_STACK_LINE(424)
	::zpp_nape::geom::ZPP_AABB rayab = tmp7;		HX_STACK_VAR(rayab,"rayab");
	HX_STACK_LINE(425)
	::zpp_nape::geom::ZPP_AABB tmp8 = rayab;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(425)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Ray_obj,rayAABB,return )

bool ZPP_Ray_obj::aabbtest( ::zpp_nape::geom::ZPP_AABB a){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","aabbtest",0xfe44ee2c,"zpp_nape.geom.ZPP_Ray.aabbtest","zpp_nape/geom/Ray.hx",427,0x908d5ea5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(428)
	Float tmp = this->normalx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(428)
	Float tmp1 = this->originx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(428)
	Float tmp2 = (a->minx + a->maxx);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(428)
	Float tmp3 = (((Float)0.5) * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(428)
	Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(428)
	Float tmp5 = (tmp * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(428)
	Float tmp6 = this->normaly;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(428)
	Float tmp7 = this->originy;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(428)
	Float tmp8 = (a->miny + a->maxy);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(428)
	Float tmp9 = (((Float)0.5) * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(428)
	Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(428)
	Float tmp11 = (tmp6 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(428)
	Float tmp12 = (tmp5 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(428)
	Float dot1 = tmp12;		HX_STACK_VAR(dot1,"dot1");
	HX_STACK_LINE(429)
	Float tmp13 = this->absnormalx;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(429)
	Float tmp14 = (tmp13 * ((Float)0.5));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(429)
	Float tmp15 = (a->maxx - a->minx);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(429)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(429)
	Float tmp17 = this->absnormaly;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(429)
	Float tmp18 = (tmp17 * ((Float)0.5));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(429)
	Float tmp19 = (a->maxy - a->miny);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(429)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(429)
	Float tmp21 = (tmp16 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(429)
	Float dot2 = tmp21;		HX_STACK_VAR(dot2,"dot2");
	HX_STACK_LINE(430)
	Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(430)
	{
		HX_STACK_LINE(431)
		Float x = dot1;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(432)
		bool tmp23 = (x < (int)0);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(432)
		if ((tmp23)){
			HX_STACK_LINE(432)
			Float tmp24 = x;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(432)
			tmp22 = -(tmp24);
		}
		else{
			HX_STACK_LINE(432)
			tmp22 = x;
		}
	}
	HX_STACK_LINE(433)
	Float tmp23 = dot2;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(430)
	bool tmp24 = (tmp22 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(430)
	return tmp24;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Ray_obj,aabbtest,return )

Float ZPP_Ray_obj::aabbsect( ::zpp_nape::geom::ZPP_AABB a){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","aabbsect",0xfd9ba99d,"zpp_nape.geom.ZPP_Ray.aabbsect","zpp_nape/geom/Ray.hx",435,0x908d5ea5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(436)
	Float tmp = this->originx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(436)
	Float tmp1 = a->minx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(436)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(436)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(436)
	if ((tmp2)){
		HX_STACK_LINE(436)
		Float tmp4 = this->originx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(436)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(436)
		Float tmp6 = a->maxx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(436)
		tmp3 = (tmp5 <= tmp6);
	}
	else{
		HX_STACK_LINE(436)
		tmp3 = false;
	}
	HX_STACK_LINE(436)
	bool cx = tmp3;		HX_STACK_VAR(cx,"cx");
	HX_STACK_LINE(437)
	Float tmp4 = this->originy;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(437)
	Float tmp5 = a->miny;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(437)
	bool tmp6 = (tmp4 >= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(437)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(437)
	if ((tmp6)){
		HX_STACK_LINE(437)
		Float tmp8 = this->originy;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(437)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(437)
		Float tmp10 = a->maxy;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(437)
		tmp7 = (tmp9 <= tmp10);
	}
	else{
		HX_STACK_LINE(437)
		tmp7 = false;
	}
	HX_STACK_LINE(437)
	bool cy = tmp7;		HX_STACK_VAR(cy,"cy");
	HX_STACK_LINE(438)
	bool tmp8 = cx;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(438)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(438)
	if ((tmp8)){
		HX_STACK_LINE(438)
		tmp9 = cy;
	}
	else{
		HX_STACK_LINE(438)
		tmp9 = false;
	}
	HX_STACK_LINE(438)
	if ((tmp9)){
		HX_STACK_LINE(438)
		return ((Float)0.0);
	}
	else{
		HX_STACK_LINE(440)
		Float ret = ((Float)-1.0);		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(441)
		while((true)){
			HX_STACK_LINE(442)
			Float tmp10 = this->dirx;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(442)
			bool tmp11 = (tmp10 >= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(442)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(442)
			if ((tmp11)){
				HX_STACK_LINE(442)
				Float tmp13 = this->originx;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(442)
				Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(442)
				Float tmp15 = a->maxx;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(442)
				tmp12 = (tmp14 >= tmp15);
			}
			else{
				HX_STACK_LINE(442)
				tmp12 = false;
			}
			HX_STACK_LINE(442)
			if ((tmp12)){
				HX_STACK_LINE(442)
				break;
			}
			HX_STACK_LINE(443)
			Float tmp13 = this->dirx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(443)
			bool tmp14 = (tmp13 <= (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(443)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(443)
			if ((tmp14)){
				HX_STACK_LINE(443)
				Float tmp16 = this->originx;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(443)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(443)
				Float tmp18 = a->minx;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(443)
				tmp15 = (tmp17 <= tmp18);
			}
			else{
				HX_STACK_LINE(443)
				tmp15 = false;
			}
			HX_STACK_LINE(443)
			if ((tmp15)){
				HX_STACK_LINE(443)
				break;
			}
			HX_STACK_LINE(444)
			Float tmp16 = this->diry;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(444)
			bool tmp17 = (tmp16 >= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(444)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(444)
			if ((tmp17)){
				HX_STACK_LINE(444)
				Float tmp19 = this->originy;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(444)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(444)
				Float tmp21 = a->maxy;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(444)
				tmp18 = (tmp20 >= tmp21);
			}
			else{
				HX_STACK_LINE(444)
				tmp18 = false;
			}
			HX_STACK_LINE(444)
			if ((tmp18)){
				HX_STACK_LINE(444)
				break;
			}
			HX_STACK_LINE(445)
			Float tmp19 = this->diry;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(445)
			bool tmp20 = (tmp19 <= (int)0);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(445)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(445)
			if ((tmp20)){
				HX_STACK_LINE(445)
				Float tmp22 = this->originy;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(445)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(445)
				Float tmp24 = a->miny;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(445)
				tmp21 = (tmp23 <= tmp24);
			}
			else{
				HX_STACK_LINE(445)
				tmp21 = false;
			}
			HX_STACK_LINE(445)
			if ((tmp21)){
				HX_STACK_LINE(445)
				break;
			}
			HX_STACK_LINE(446)
			Float tmp22 = this->dirx;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(446)
			bool tmp23 = (tmp22 > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(446)
			if ((tmp23)){
				HX_STACK_LINE(447)
				Float tmp24 = a->minx;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(447)
				Float tmp25 = this->originx;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(447)
				Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(447)
				Float tmp27 = this->idirx;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(447)
				Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(447)
				Float t = tmp28;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(448)
				bool tmp29 = (t >= (int)0);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(448)
				bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(448)
				if ((tmp29)){
					HX_STACK_LINE(448)
					Float tmp31 = t;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(448)
					Float tmp32 = this->maxdist;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(448)
					Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(448)
					tmp30 = (tmp31 <= tmp33);
				}
				else{
					HX_STACK_LINE(448)
					tmp30 = false;
				}
				HX_STACK_LINE(448)
				if ((tmp30)){
					HX_STACK_LINE(449)
					Float tmp31 = this->originy;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(449)
					Float tmp32 = t;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(449)
					Float tmp33 = this->diry;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(449)
					Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(449)
					Float tmp35 = (tmp31 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(449)
					Float y = tmp35;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(450)
					bool tmp36 = (y >= a->miny);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(450)
					bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(450)
					if ((tmp36)){
						HX_STACK_LINE(450)
						tmp37 = (y <= a->maxy);
					}
					else{
						HX_STACK_LINE(450)
						tmp37 = false;
					}
					HX_STACK_LINE(450)
					if ((tmp37)){
						HX_STACK_LINE(451)
						ret = t;
						HX_STACK_LINE(452)
						break;
					}
				}
			}
			else{
				HX_STACK_LINE(456)
				Float tmp24 = this->dirx;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(456)
				bool tmp25 = (tmp24 < (int)0);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(456)
				if ((tmp25)){
					HX_STACK_LINE(457)
					Float tmp26 = a->maxx;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(457)
					Float tmp27 = this->originx;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(457)
					Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(457)
					Float tmp29 = this->idirx;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(457)
					Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(457)
					Float t = tmp30;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(458)
					bool tmp31 = (t >= (int)0);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(458)
					bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(458)
					if ((tmp31)){
						HX_STACK_LINE(458)
						Float tmp33 = t;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(458)
						Float tmp34 = this->maxdist;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(458)
						Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(458)
						tmp32 = (tmp33 <= tmp35);
					}
					else{
						HX_STACK_LINE(458)
						tmp32 = false;
					}
					HX_STACK_LINE(458)
					if ((tmp32)){
						HX_STACK_LINE(459)
						Float tmp33 = this->originy;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(459)
						Float tmp34 = t;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(459)
						Float tmp35 = this->diry;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(459)
						Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(459)
						Float tmp37 = (tmp33 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(459)
						Float y = tmp37;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(460)
						bool tmp38 = (y >= a->miny);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(460)
						bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(460)
						if ((tmp38)){
							HX_STACK_LINE(460)
							tmp39 = (y <= a->maxy);
						}
						else{
							HX_STACK_LINE(460)
							tmp39 = false;
						}
						HX_STACK_LINE(460)
						if ((tmp39)){
							HX_STACK_LINE(461)
							ret = t;
							HX_STACK_LINE(462)
							break;
						}
					}
				}
			}
			HX_STACK_LINE(466)
			Float tmp24 = this->diry;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(466)
			bool tmp25 = (tmp24 > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(466)
			if ((tmp25)){
				HX_STACK_LINE(467)
				Float tmp26 = a->miny;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(467)
				Float tmp27 = this->originy;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(467)
				Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(467)
				Float tmp29 = this->idiry;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(467)
				Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(467)
				Float t = tmp30;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(468)
				bool tmp31 = (t >= (int)0);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(468)
				bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(468)
				if ((tmp31)){
					HX_STACK_LINE(468)
					Float tmp33 = t;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(468)
					Float tmp34 = this->maxdist;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(468)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(468)
					tmp32 = (tmp33 <= tmp35);
				}
				else{
					HX_STACK_LINE(468)
					tmp32 = false;
				}
				HX_STACK_LINE(468)
				if ((tmp32)){
					HX_STACK_LINE(469)
					Float tmp33 = this->originx;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(469)
					Float tmp34 = t;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(469)
					Float tmp35 = this->dirx;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(469)
					Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(469)
					Float tmp37 = (tmp33 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(469)
					Float x = tmp37;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(470)
					bool tmp38 = (x >= a->minx);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(470)
					bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(470)
					if ((tmp38)){
						HX_STACK_LINE(470)
						tmp39 = (x <= a->maxx);
					}
					else{
						HX_STACK_LINE(470)
						tmp39 = false;
					}
					HX_STACK_LINE(470)
					if ((tmp39)){
						HX_STACK_LINE(471)
						ret = t;
						HX_STACK_LINE(472)
						break;
					}
				}
			}
			else{
				HX_STACK_LINE(476)
				Float tmp26 = this->diry;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(476)
				bool tmp27 = (tmp26 < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(476)
				if ((tmp27)){
					HX_STACK_LINE(477)
					Float tmp28 = a->maxy;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(477)
					Float tmp29 = this->originy;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(477)
					Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(477)
					Float tmp31 = this->idiry;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(477)
					Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(477)
					Float t = tmp32;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(478)
					bool tmp33 = (t >= (int)0);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(478)
					bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(478)
					if ((tmp33)){
						HX_STACK_LINE(478)
						Float tmp35 = t;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(478)
						Float tmp36 = this->maxdist;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(478)
						Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(478)
						tmp34 = (tmp35 <= tmp37);
					}
					else{
						HX_STACK_LINE(478)
						tmp34 = false;
					}
					HX_STACK_LINE(478)
					if ((tmp34)){
						HX_STACK_LINE(479)
						Float tmp35 = this->originx;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(479)
						Float tmp36 = t;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(479)
						Float tmp37 = this->dirx;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(479)
						Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(479)
						Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(479)
						Float x = tmp39;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(480)
						bool tmp40 = (x >= a->minx);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(480)
						bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(480)
						if ((tmp40)){
							HX_STACK_LINE(480)
							tmp41 = (x <= a->maxx);
						}
						else{
							HX_STACK_LINE(480)
							tmp41 = false;
						}
						HX_STACK_LINE(480)
						if ((tmp41)){
							HX_STACK_LINE(481)
							ret = t;
							HX_STACK_LINE(482)
							break;
						}
					}
				}
			}
			HX_STACK_LINE(487)
			bool tmp26 = true;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(441)
			if ((tmp26)){
				HX_STACK_LINE(441)
				break;
			}
		}
		HX_STACK_LINE(488)
		Float tmp10 = ret;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(488)
		return tmp10;
	}
	HX_STACK_LINE(438)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Ray_obj,aabbsect,return )

::nape::geom::RayResult ZPP_Ray_obj::circlesect( ::zpp_nape::shape::ZPP_Circle c,bool inner,Float mint){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","circlesect",0x6df4b38d,"zpp_nape.geom.ZPP_Ray.circlesect","zpp_nape/geom/Ray.hx",491,0x908d5ea5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(inner,"inner")
	HX_STACK_ARG(mint,"mint")
	HX_STACK_LINE(492)
	{
		HX_STACK_LINE(492)
		bool tmp = c->zip_worldCOM;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(492)
		if ((tmp)){
			HX_STACK_LINE(492)
			bool tmp1 = (c->body != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(492)
			if ((tmp1)){
				HX_STACK_LINE(492)
				c->zip_worldCOM = false;
				HX_STACK_LINE(492)
				{
					HX_STACK_LINE(492)
					bool tmp2 = c->zip_localCOM;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(492)
					if ((tmp2)){
						HX_STACK_LINE(492)
						c->zip_localCOM = false;
						HX_STACK_LINE(492)
						int tmp3 = c->type;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(492)
						int tmp4 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(492)
						bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(492)
						if ((tmp5)){
							HX_STACK_LINE(492)
							::zpp_nape::shape::ZPP_Polygon _this = c->polygon;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(492)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = _this->lverts->next;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(492)
							bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(492)
							if ((tmp7)){
								HX_STACK_LINE(492)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
							}
							HX_STACK_LINE(492)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = _this->lverts->next;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(492)
							::zpp_nape::geom::ZPP_Vec2 tmp9 = tmp8->next;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(492)
							bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(492)
							if ((tmp10)){
								HX_STACK_LINE(492)
								::zpp_nape::geom::ZPP_Vec2 tmp11 = _this->lverts->next;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(492)
								_this->localCOMx = tmp11->x;
								HX_STACK_LINE(492)
								::zpp_nape::geom::ZPP_Vec2 tmp12 = _this->lverts->next;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(492)
								_this->localCOMy = tmp12->y;
								HX_STACK_LINE(492)
								Dynamic();
							}
							else{
								HX_STACK_LINE(492)
								::zpp_nape::geom::ZPP_Vec2 tmp11 = _this->lverts->next;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(492)
								::zpp_nape::geom::ZPP_Vec2 tmp12 = tmp11->next->next;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(492)
								bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(492)
								if ((tmp13)){
									HX_STACK_LINE(492)
									{
										HX_STACK_LINE(492)
										::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(492)
										_this->localCOMx = tmp14->x;
										HX_STACK_LINE(492)
										::zpp_nape::geom::ZPP_Vec2 tmp15 = _this->lverts->next;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(492)
										_this->localCOMy = tmp15->y;
										HX_STACK_LINE(492)
										{
										}
									}
									HX_STACK_LINE(492)
									{
										HX_STACK_LINE(492)
										Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(492)
										::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(492)
										Float tmp15 = tmp14->next->x;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(492)
										Float tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(492)
										Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(492)
										hx::AddEq(_this->localCOMx,tmp17);
										HX_STACK_LINE(492)
										::zpp_nape::geom::ZPP_Vec2 tmp18 = _this->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(492)
										Float tmp19 = tmp18->next->y;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(492)
										Float tmp20 = t;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(492)
										Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(492)
										hx::AddEq(_this->localCOMy,tmp21);
									}
									HX_STACK_LINE(492)
									{
										HX_STACK_LINE(492)
										Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(492)
										hx::MultEq(_this->localCOMx,t);
										HX_STACK_LINE(492)
										hx::MultEq(_this->localCOMy,t);
									}
								}
								else{
									HX_STACK_LINE(492)
									{
										HX_STACK_LINE(492)
										_this->localCOMx = (int)0;
										HX_STACK_LINE(492)
										_this->localCOMy = (int)0;
										HX_STACK_LINE(492)
										{
										}
									}
									HX_STACK_LINE(492)
									Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
									HX_STACK_LINE(492)
									{
										HX_STACK_LINE(492)
										::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(492)
										::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp14;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(492)
										::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
										HX_STACK_LINE(492)
										cx_ite = cx_ite->next;
										HX_STACK_LINE(492)
										::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(492)
										cx_ite = cx_ite->next;
										HX_STACK_LINE(492)
										while((true)){
											HX_STACK_LINE(492)
											bool tmp15 = (cx_ite != null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(492)
											bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(492)
											if ((tmp16)){
												HX_STACK_LINE(492)
												break;
											}
											HX_STACK_LINE(492)
											::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
											HX_STACK_LINE(492)
											{
												HX_STACK_LINE(492)
												Float tmp17 = v->x;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(492)
												Float tmp18 = (w->y - u->y);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(492)
												Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(492)
												hx::AddEq(area,tmp19);
												HX_STACK_LINE(492)
												Float tmp20 = (w->y * v->x);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(492)
												Float tmp21 = (w->x * v->y);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(492)
												Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(492)
												Float cf = tmp22;		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(492)
												Float tmp23 = (v->x + w->x);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(492)
												Float tmp24 = cf;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(492)
												Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(492)
												hx::AddEq(_this->localCOMx,tmp25);
												HX_STACK_LINE(492)
												Float tmp26 = (v->y + w->y);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(492)
												Float tmp27 = cf;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(492)
												Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(492)
												hx::AddEq(_this->localCOMy,tmp28);
											}
											HX_STACK_LINE(492)
											u = v;
											HX_STACK_LINE(492)
											v = w;
											HX_STACK_LINE(492)
											cx_ite = cx_ite->next;
										}
										HX_STACK_LINE(492)
										::zpp_nape::geom::ZPP_Vec2 tmp15 = _this->lverts->next;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(492)
										cx_ite = tmp15;
										HX_STACK_LINE(492)
										::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
										HX_STACK_LINE(492)
										{
											HX_STACK_LINE(492)
											Float tmp16 = v->x;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(492)
											Float tmp17 = (w->y - u->y);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(492)
											Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(492)
											hx::AddEq(area,tmp18);
											HX_STACK_LINE(492)
											Float tmp19 = (w->y * v->x);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(492)
											Float tmp20 = (w->x * v->y);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(492)
											Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(492)
											Float cf = tmp21;		HX_STACK_VAR(cf,"cf");
											HX_STACK_LINE(492)
											Float tmp22 = (v->x + w->x);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(492)
											Float tmp23 = cf;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(492)
											Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(492)
											hx::AddEq(_this->localCOMx,tmp24);
											HX_STACK_LINE(492)
											Float tmp25 = (v->y + w->y);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(492)
											Float tmp26 = cf;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(492)
											Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(492)
											hx::AddEq(_this->localCOMy,tmp27);
										}
										HX_STACK_LINE(492)
										u = v;
										HX_STACK_LINE(492)
										v = w;
										HX_STACK_LINE(492)
										cx_ite = cx_ite->next;
										HX_STACK_LINE(492)
										::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
										HX_STACK_LINE(492)
										{
											HX_STACK_LINE(492)
											Float tmp16 = v->x;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(492)
											Float tmp17 = (w1->y - u->y);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(492)
											Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(492)
											hx::AddEq(area,tmp18);
											HX_STACK_LINE(492)
											Float tmp19 = (w1->y * v->x);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(492)
											Float tmp20 = (w1->x * v->y);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(492)
											Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(492)
											Float cf = tmp21;		HX_STACK_VAR(cf,"cf");
											HX_STACK_LINE(492)
											Float tmp22 = (v->x + w1->x);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(492)
											Float tmp23 = cf;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(492)
											Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(492)
											hx::AddEq(_this->localCOMx,tmp24);
											HX_STACK_LINE(492)
											Float tmp25 = (v->y + w1->y);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(492)
											Float tmp26 = cf;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(492)
											Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(492)
											hx::AddEq(_this->localCOMy,tmp27);
										}
									}
									HX_STACK_LINE(492)
									Float tmp14 = ((int)3 * area);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(492)
									Float tmp15 = (Float((int)1) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(492)
									area = tmp15;
									HX_STACK_LINE(492)
									{
										HX_STACK_LINE(492)
										Float t = area;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(492)
										hx::MultEq(_this->localCOMx,t);
										HX_STACK_LINE(492)
										hx::MultEq(_this->localCOMy,t);
									}
								}
							}
						}
						HX_STACK_LINE(492)
						bool tmp6 = (c->wrap_localCOM != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(492)
						if ((tmp6)){
							HX_STACK_LINE(492)
							::zpp_nape::geom::ZPP_Vec2 tmp7 = c->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(492)
							tmp7->x = c->localCOMx;
							HX_STACK_LINE(492)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = c->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(492)
							tmp8->y = c->localCOMy;
							HX_STACK_LINE(492)
							{
							}
						}
					}
				}
				HX_STACK_LINE(492)
				{
					HX_STACK_LINE(492)
					::zpp_nape::phys::ZPP_Body _this = c->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(492)
					bool tmp2 = _this->zip_axis;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(492)
					if ((tmp2)){
						HX_STACK_LINE(492)
						_this->zip_axis = false;
						HX_STACK_LINE(492)
						{
							HX_STACK_LINE(492)
							Float tmp3 = _this->rot;		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(492)
							Float tmp4 = ::Math_obj::sin(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(492)
							_this->axisx = tmp4;
							HX_STACK_LINE(492)
							Float tmp5 = _this->rot;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(492)
							Float tmp6 = ::Math_obj::cos(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(492)
							_this->axisy = tmp6;
							HX_STACK_LINE(492)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(492)
				{
					HX_STACK_LINE(492)
					Float tmp2 = c->body->posx;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(492)
					Float tmp3 = c->body->axisy;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(492)
					Float tmp4 = c->localCOMx;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(492)
					Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(492)
					Float tmp6 = c->body->axisx;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(492)
					Float tmp7 = c->localCOMy;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(492)
					Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(492)
					Float tmp9 = (tmp5 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(492)
					Float tmp10 = (tmp2 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(492)
					c->worldCOMx = tmp10;
					HX_STACK_LINE(492)
					Float tmp11 = c->body->posy;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(492)
					Float tmp12 = c->localCOMx;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(492)
					Float tmp13 = c->body->axisx;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(492)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(492)
					Float tmp15 = c->localCOMy;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(492)
					Float tmp16 = c->body->axisy;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(492)
					Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(492)
					Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(492)
					Float tmp19 = (tmp11 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(492)
					c->worldCOMy = tmp19;
				}
			}
		}
	}
	HX_STACK_LINE(493)
	Float acx = ((Float)0.0);		HX_STACK_VAR(acx,"acx");
	HX_STACK_LINE(494)
	Float acy = ((Float)0.0);		HX_STACK_VAR(acy,"acy");
	HX_STACK_LINE(495)
	{
		HX_STACK_LINE(496)
		Float tmp = this->originx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(496)
		Float tmp1 = c->worldCOMx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(496)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(496)
		acx = tmp2;
		HX_STACK_LINE(497)
		Float tmp3 = this->originy;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(497)
		Float tmp4 = c->worldCOMy;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(497)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(497)
		acy = tmp5;
	}
	HX_STACK_LINE(499)
	Float tmp = this->dirx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(499)
	Float tmp1 = this->dirx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(499)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(499)
	Float tmp3 = this->diry;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(499)
	Float tmp4 = this->diry;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(499)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(499)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(499)
	Float A = tmp6;		HX_STACK_VAR(A,"A");
	HX_STACK_LINE(500)
	Float tmp7 = acx;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(500)
	Float tmp8 = this->dirx;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(500)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(500)
	Float tmp10 = acy;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(500)
	Float tmp11 = this->diry;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(500)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(500)
	Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(500)
	Float tmp14 = ((int)2 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(500)
	Float B = tmp14;		HX_STACK_VAR(B,"B");
	HX_STACK_LINE(501)
	Float tmp15 = (acx * acx);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(501)
	Float tmp16 = (acy * acy);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(501)
	Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(501)
	Float tmp18 = (c->radius * c->radius);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(501)
	Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(501)
	Float C = tmp19;		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(502)
	Float tmp20 = (B * B);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(502)
	Float tmp21 = ((int)4 * A);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(502)
	Float tmp22 = C;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(502)
	Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(502)
	Float tmp24 = (tmp20 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(502)
	Float det = tmp24;		HX_STACK_VAR(det,"det");
	HX_STACK_LINE(503)
	bool tmp25 = (det == (int)0);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(503)
	if ((tmp25)){
		HX_STACK_LINE(504)
		Float tmp26 = B;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(504)
		Float tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(504)
		Float tmp28 = (Float(tmp27) / Float((int)2));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(504)
		Float tmp29 = A;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(504)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(504)
		Float t = tmp30;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(505)
		bool tmp31 = inner;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(505)
		bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(505)
		bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(505)
		bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(505)
		bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(505)
		bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(505)
		if ((tmp35)){
			HX_STACK_LINE(505)
			tmp36 = (C > (int)0);
		}
		else{
			HX_STACK_LINE(505)
			tmp36 = true;
		}
		HX_STACK_LINE(505)
		bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(505)
		bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(505)
		if ((tmp37)){
			HX_STACK_LINE(505)
			tmp38 = (t > (int)0);
		}
		else{
			HX_STACK_LINE(505)
			tmp38 = false;
		}
		HX_STACK_LINE(505)
		bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(505)
		bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(505)
		if ((tmp39)){
			HX_STACK_LINE(505)
			tmp40 = (t < mint);
		}
		else{
			HX_STACK_LINE(505)
			tmp40 = false;
		}
		HX_STACK_LINE(505)
		bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(505)
		if ((tmp40)){
			HX_STACK_LINE(505)
			Float tmp42 = t;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(505)
			Float tmp43 = this->maxdist;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(505)
			Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(505)
			tmp41 = (tmp42 <= tmp44);
		}
		else{
			HX_STACK_LINE(505)
			tmp41 = false;
		}
		HX_STACK_LINE(505)
		if ((tmp41)){
			HX_STACK_LINE(506)
			Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(507)
			Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
			HX_STACK_LINE(508)
			{
				HX_STACK_LINE(509)
				Float tmp42 = this->originx;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(509)
				nx = tmp42;
				HX_STACK_LINE(510)
				Float tmp43 = this->originy;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(510)
				ny = tmp43;
				HX_STACK_LINE(519)
				{
				}
			}
			HX_STACK_LINE(528)
			{
				HX_STACK_LINE(529)
				Float t1 = t;		HX_STACK_VAR(t1,"t1");
				HX_STACK_LINE(538)
				Float tmp42 = this->dirx;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(538)
				Float tmp43 = t1;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(538)
				Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(538)
				hx::AddEq(nx,tmp44);
				HX_STACK_LINE(539)
				Float tmp45 = this->diry;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(539)
				Float tmp46 = t1;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(539)
				Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(539)
				hx::AddEq(ny,tmp47);
			}
			HX_STACK_LINE(541)
			{
				HX_STACK_LINE(542)
				Float t1 = ((Float)1.0);		HX_STACK_VAR(t1,"t1");
				HX_STACK_LINE(551)
				Float tmp42 = (c->worldCOMx * t1);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(551)
				hx::SubEq(nx,tmp42);
				HX_STACK_LINE(552)
				Float tmp43 = (c->worldCOMy * t1);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(552)
				hx::SubEq(ny,tmp43);
			}
			HX_STACK_LINE(554)
			{
				HX_STACK_LINE(555)
				Float tmp42 = (nx * nx);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(555)
				Float tmp43 = (ny * ny);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(555)
				Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(555)
				Float d = tmp44;		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(564)
				Float tmp45 = d;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(564)
				Float tmp46 = ::Math_obj::sqrt(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(564)
				Float tmp47 = (Float(((Float)1.0)) / Float(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(564)
				Float imag = tmp47;		HX_STACK_VAR(imag,"imag");
				HX_STACK_LINE(565)
				{
					HX_STACK_LINE(566)
					Float t1 = imag;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(575)
					hx::MultEq(nx,t1);
					HX_STACK_LINE(576)
					hx::MultEq(ny,t1);
				}
			}
			HX_STACK_LINE(579)
			bool tmp42 = (C <= (int)0);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(579)
			if ((tmp42)){
				HX_STACK_LINE(580)
				Float tmp43 = nx;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(580)
				Float tmp44 = -(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(580)
				nx = tmp44;
				HX_STACK_LINE(581)
				Float tmp45 = ny;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(581)
				Float tmp46 = -(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(581)
				ny = tmp46;
			}
			HX_STACK_LINE(583)
			::nape::geom::Vec2 tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(583)
			{
				HX_STACK_LINE(583)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(583)
				bool tmp44 = (nx != nx);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(583)
				bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(583)
				bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(583)
				if ((tmp45)){
					HX_STACK_LINE(583)
					tmp46 = (ny != ny);
				}
				else{
					HX_STACK_LINE(583)
					tmp46 = true;
				}
				HX_STACK_LINE(583)
				if ((tmp46)){
					HX_STACK_LINE(583)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(583)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(583)
				{
					HX_STACK_LINE(583)
					::nape::geom::Vec2 tmp47 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(583)
					bool tmp48 = (tmp47 == null());		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(583)
					if ((tmp48)){
						HX_STACK_LINE(583)
						::nape::geom::Vec2 tmp49 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(583)
						ret = tmp49;
					}
					else{
						HX_STACK_LINE(583)
						::nape::geom::Vec2 tmp49 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(583)
						ret = tmp49;
						HX_STACK_LINE(583)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(583)
						ret->zpp_pool = null();
						HX_STACK_LINE(583)
						ret->zpp_disp = false;
						HX_STACK_LINE(583)
						::nape::geom::Vec2 tmp50 = ret;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(583)
						::nape::geom::Vec2 tmp51 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(583)
						bool tmp52 = (tmp50 == tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(583)
						if ((tmp52)){
							HX_STACK_LINE(583)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
				}
				HX_STACK_LINE(583)
				bool tmp47 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(583)
				if ((tmp47)){
					HX_STACK_LINE(583)
					::zpp_nape::geom::ZPP_Vec2 tmp48;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(583)
					{
						HX_STACK_LINE(583)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(583)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(583)
						{
							HX_STACK_LINE(583)
							::zpp_nape::geom::ZPP_Vec2 tmp49 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(583)
							bool tmp50 = (tmp49 == null());		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(583)
							if ((tmp50)){
								HX_STACK_LINE(583)
								::zpp_nape::geom::ZPP_Vec2 tmp51 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(583)
								ret1 = tmp51;
							}
							else{
								HX_STACK_LINE(583)
								::zpp_nape::geom::ZPP_Vec2 tmp51 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(583)
								ret1 = tmp51;
								HX_STACK_LINE(583)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(583)
								ret1->next = null();
							}
							HX_STACK_LINE(583)
							ret1->weak = false;
						}
						HX_STACK_LINE(583)
						ret1->_immutable = immutable;
						HX_STACK_LINE(583)
						{
							HX_STACK_LINE(583)
							ret1->x = nx;
							HX_STACK_LINE(583)
							ret1->y = ny;
							HX_STACK_LINE(583)
							{
							}
						}
						HX_STACK_LINE(583)
						tmp48 = ret1;
					}
					HX_STACK_LINE(583)
					ret->zpp_inner = tmp48;
					HX_STACK_LINE(583)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(583)
					{
						HX_STACK_LINE(583)
						bool tmp48 = (ret != null());		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(583)
						bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(583)
						if ((tmp48)){
							HX_STACK_LINE(583)
							tmp49 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(583)
							tmp49 = false;
						}
						HX_STACK_LINE(583)
						if ((tmp49)){
							HX_STACK_LINE(583)
							::String tmp50 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(583)
							::String tmp51 = (tmp50 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(583)
							HX_STACK_DO_THROW(tmp51);
						}
					}
					HX_STACK_LINE(583)
					{
						HX_STACK_LINE(583)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(583)
						bool tmp48 = _this->_immutable;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(583)
						if ((tmp48)){
							HX_STACK_LINE(583)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(583)
						bool tmp49 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(583)
						if ((tmp49)){
							HX_STACK_LINE(583)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(583)
					bool tmp48 = (nx != nx);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(583)
					bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(583)
					bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(583)
					if ((tmp49)){
						HX_STACK_LINE(583)
						tmp50 = (ny != ny);
					}
					else{
						HX_STACK_LINE(583)
						tmp50 = true;
					}
					HX_STACK_LINE(583)
					if ((tmp50)){
						HX_STACK_LINE(583)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(583)
					Float tmp51;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(583)
					{
						HX_STACK_LINE(583)
						{
							HX_STACK_LINE(583)
							bool tmp52 = (ret != null());		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(583)
							bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(583)
							if ((tmp52)){
								HX_STACK_LINE(583)
								tmp53 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(583)
								tmp53 = false;
							}
							HX_STACK_LINE(583)
							if ((tmp53)){
								HX_STACK_LINE(583)
								::String tmp54 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(583)
								::String tmp55 = (tmp54 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(583)
								HX_STACK_DO_THROW(tmp55);
							}
						}
						HX_STACK_LINE(583)
						{
							HX_STACK_LINE(583)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(583)
							bool tmp52 = (_this->_validate != null());		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(583)
							if ((tmp52)){
								HX_STACK_LINE(583)
								_this->_validate();
							}
						}
						HX_STACK_LINE(583)
						tmp51 = ret->zpp_inner->x;
					}
					HX_STACK_LINE(583)
					Float tmp52 = nx;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(583)
					bool tmp53 = (tmp51 == tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(583)
					bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(583)
					if ((tmp53)){
						HX_STACK_LINE(583)
						Float tmp55;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(583)
						{
							HX_STACK_LINE(583)
							{
								HX_STACK_LINE(583)
								bool tmp56 = (ret != null());		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(583)
								bool tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(583)
								bool tmp58;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(583)
								bool tmp59 = tmp57;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(583)
								if ((tmp59)){
									HX_STACK_LINE(583)
									tmp58 = ret->zpp_disp;
								}
								else{
									HX_STACK_LINE(583)
									tmp58 = false;
								}
								HX_STACK_LINE(583)
								bool tmp60 = tmp58;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(583)
								if ((tmp60)){
									HX_STACK_LINE(583)
									::String tmp61 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(583)
									::String tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(583)
									::String tmp63 = (tmp62 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(583)
									::String tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(583)
									::String tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(583)
									HX_STACK_DO_THROW(tmp65);
								}
							}
							HX_STACK_LINE(583)
							{
								HX_STACK_LINE(583)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(583)
								bool tmp56 = (_this->_validate != null());		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(583)
								bool tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(583)
								bool tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(583)
								if ((tmp58)){
									HX_STACK_LINE(583)
									_this->_validate();
								}
							}
							HX_STACK_LINE(583)
							Float tmp56 = ret->zpp_inner->y;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(583)
							tmp55 = tmp56;
						}
						HX_STACK_LINE(583)
						Float tmp56 = ny;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(583)
						tmp54 = (tmp55 == tmp56);
					}
					else{
						HX_STACK_LINE(583)
						tmp54 = false;
					}
					HX_STACK_LINE(583)
					bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(583)
					if ((tmp55)){
						HX_STACK_LINE(583)
						{
							HX_STACK_LINE(583)
							ret->zpp_inner->x = nx;
							HX_STACK_LINE(583)
							ret->zpp_inner->y = ny;
							HX_STACK_LINE(583)
							{
							}
						}
						HX_STACK_LINE(583)
						{
							HX_STACK_LINE(583)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(583)
							bool tmp56 = (_this->_invalidate != null());		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(583)
							if ((tmp56)){
								HX_STACK_LINE(583)
								::zpp_nape::geom::ZPP_Vec2 tmp57 = _this;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(583)
								_this->_invalidate(tmp57);
							}
						}
					}
					HX_STACK_LINE(583)
					ret;
				}
				HX_STACK_LINE(583)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(583)
				tmp43 = ret;
			}
			HX_STACK_LINE(583)
			Float tmp44 = t;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(583)
			bool tmp45 = (C <= (int)0);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(583)
			::nape::shape::Shape tmp46 = c->outer;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(583)
			::nape::geom::RayResult tmp47 = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::getRay(tmp43,tmp44,tmp45,tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(583)
			return tmp47;
		}
		else{
			HX_STACK_LINE(585)
			return null();
		}
	}
	else{
		HX_STACK_LINE(588)
		Float tmp26 = det;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(588)
		Float tmp27 = ::Math_obj::sqrt(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(588)
		det = tmp27;
		HX_STACK_LINE(589)
		Float tmp28 = ((int)2 * A);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(589)
		Float tmp29 = (Float((int)1) / Float(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(589)
		A = tmp29;
		HX_STACK_LINE(590)
		Float tmp30 = B;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(590)
		Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(590)
		Float tmp32 = det;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(590)
		Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(590)
		Float tmp34 = A;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(590)
		Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(590)
		Float t0 = tmp35;		HX_STACK_VAR(t0,"t0");
		HX_STACK_LINE(591)
		Float tmp36 = B;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(591)
		Float tmp37 = -(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(591)
		Float tmp38 = det;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(591)
		Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(591)
		Float tmp40 = A;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(591)
		Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(591)
		Float t1 = tmp41;		HX_STACK_VAR(t1,"t1");
		HX_STACK_LINE(592)
		bool tmp42 = (t0 > (int)0);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(592)
		if ((tmp42)){
			HX_STACK_LINE(593)
			bool tmp43 = (t0 < mint);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(593)
			bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(593)
			if ((tmp43)){
				HX_STACK_LINE(593)
				Float tmp45 = t0;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(593)
				Float tmp46 = this->maxdist;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(593)
				Float tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(593)
				tmp44 = (tmp45 <= tmp47);
			}
			else{
				HX_STACK_LINE(593)
				tmp44 = false;
			}
			HX_STACK_LINE(593)
			if ((tmp44)){
				HX_STACK_LINE(594)
				Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
				HX_STACK_LINE(595)
				Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
				HX_STACK_LINE(596)
				{
					HX_STACK_LINE(597)
					Float tmp45 = this->originx;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(597)
					nx = tmp45;
					HX_STACK_LINE(598)
					Float tmp46 = this->originy;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(598)
					ny = tmp46;
					HX_STACK_LINE(607)
					{
					}
				}
				HX_STACK_LINE(616)
				{
					HX_STACK_LINE(617)
					Float t = t0;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(626)
					Float tmp45 = this->dirx;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(626)
					Float tmp46 = t;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(626)
					Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(626)
					hx::AddEq(nx,tmp47);
					HX_STACK_LINE(627)
					Float tmp48 = this->diry;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(627)
					Float tmp49 = t;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(627)
					Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(627)
					hx::AddEq(ny,tmp50);
				}
				HX_STACK_LINE(629)
				{
					HX_STACK_LINE(630)
					Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(639)
					Float tmp45 = (c->worldCOMx * t);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(639)
					hx::SubEq(nx,tmp45);
					HX_STACK_LINE(640)
					Float tmp46 = (c->worldCOMy * t);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(640)
					hx::SubEq(ny,tmp46);
				}
				HX_STACK_LINE(642)
				{
					HX_STACK_LINE(643)
					Float tmp45 = (nx * nx);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(643)
					Float tmp46 = (ny * ny);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(643)
					Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(643)
					Float d = tmp47;		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(652)
					Float tmp48 = d;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(652)
					Float tmp49 = ::Math_obj::sqrt(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(652)
					Float tmp50 = (Float(((Float)1.0)) / Float(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(652)
					Float imag = tmp50;		HX_STACK_VAR(imag,"imag");
					HX_STACK_LINE(653)
					{
						HX_STACK_LINE(654)
						Float t = imag;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(663)
						hx::MultEq(nx,t);
						HX_STACK_LINE(664)
						hx::MultEq(ny,t);
					}
				}
				HX_STACK_LINE(671)
				::nape::geom::Vec2 tmp45;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(671)
				{
					HX_STACK_LINE(671)
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(671)
					bool tmp46 = (nx != nx);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(671)
					bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(671)
					bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(671)
					if ((tmp47)){
						HX_STACK_LINE(671)
						tmp48 = (ny != ny);
					}
					else{
						HX_STACK_LINE(671)
						tmp48 = true;
					}
					HX_STACK_LINE(671)
					if ((tmp48)){
						HX_STACK_LINE(671)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(671)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(671)
					{
						HX_STACK_LINE(671)
						::nape::geom::Vec2 tmp49 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(671)
						bool tmp50 = (tmp49 == null());		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(671)
						if ((tmp50)){
							HX_STACK_LINE(671)
							::nape::geom::Vec2 tmp51 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(671)
							ret = tmp51;
						}
						else{
							HX_STACK_LINE(671)
							::nape::geom::Vec2 tmp51 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(671)
							ret = tmp51;
							HX_STACK_LINE(671)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
							HX_STACK_LINE(671)
							ret->zpp_pool = null();
							HX_STACK_LINE(671)
							ret->zpp_disp = false;
							HX_STACK_LINE(671)
							::nape::geom::Vec2 tmp52 = ret;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(671)
							::nape::geom::Vec2 tmp53 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(671)
							bool tmp54 = (tmp52 == tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(671)
							if ((tmp54)){
								HX_STACK_LINE(671)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
							}
						}
					}
					HX_STACK_LINE(671)
					bool tmp49 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(671)
					if ((tmp49)){
						HX_STACK_LINE(671)
						::zpp_nape::geom::ZPP_Vec2 tmp50;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(671)
						{
							HX_STACK_LINE(671)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(671)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(671)
							{
								HX_STACK_LINE(671)
								::zpp_nape::geom::ZPP_Vec2 tmp51 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(671)
								bool tmp52 = (tmp51 == null());		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(671)
								if ((tmp52)){
									HX_STACK_LINE(671)
									::zpp_nape::geom::ZPP_Vec2 tmp53 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(671)
									ret1 = tmp53;
								}
								else{
									HX_STACK_LINE(671)
									::zpp_nape::geom::ZPP_Vec2 tmp53 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(671)
									ret1 = tmp53;
									HX_STACK_LINE(671)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(671)
									ret1->next = null();
								}
								HX_STACK_LINE(671)
								ret1->weak = false;
							}
							HX_STACK_LINE(671)
							ret1->_immutable = immutable;
							HX_STACK_LINE(671)
							{
								HX_STACK_LINE(671)
								ret1->x = nx;
								HX_STACK_LINE(671)
								ret1->y = ny;
								HX_STACK_LINE(671)
								{
								}
							}
							HX_STACK_LINE(671)
							tmp50 = ret1;
						}
						HX_STACK_LINE(671)
						ret->zpp_inner = tmp50;
						HX_STACK_LINE(671)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(671)
						{
							HX_STACK_LINE(671)
							bool tmp50 = (ret != null());		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(671)
							bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(671)
							if ((tmp50)){
								HX_STACK_LINE(671)
								tmp51 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(671)
								tmp51 = false;
							}
							HX_STACK_LINE(671)
							if ((tmp51)){
								HX_STACK_LINE(671)
								::String tmp52 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(671)
								::String tmp53 = (tmp52 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(671)
								HX_STACK_DO_THROW(tmp53);
							}
						}
						HX_STACK_LINE(671)
						{
							HX_STACK_LINE(671)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(671)
							bool tmp50 = _this->_immutable;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(671)
							if ((tmp50)){
								HX_STACK_LINE(671)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(671)
							bool tmp51 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(671)
							if ((tmp51)){
								HX_STACK_LINE(671)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(671)
						bool tmp50 = (nx != nx);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(671)
						bool tmp51 = !(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(671)
						bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(671)
						if ((tmp51)){
							HX_STACK_LINE(671)
							tmp52 = (ny != ny);
						}
						else{
							HX_STACK_LINE(671)
							tmp52 = true;
						}
						HX_STACK_LINE(671)
						if ((tmp52)){
							HX_STACK_LINE(671)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
						}
						HX_STACK_LINE(671)
						Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(671)
						{
							HX_STACK_LINE(671)
							{
								HX_STACK_LINE(671)
								bool tmp54 = (ret != null());		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(671)
								bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(671)
								if ((tmp54)){
									HX_STACK_LINE(671)
									tmp55 = ret->zpp_disp;
								}
								else{
									HX_STACK_LINE(671)
									tmp55 = false;
								}
								HX_STACK_LINE(671)
								if ((tmp55)){
									HX_STACK_LINE(671)
									::String tmp56 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(671)
									::String tmp57 = (tmp56 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(671)
									HX_STACK_DO_THROW(tmp57);
								}
							}
							HX_STACK_LINE(671)
							{
								HX_STACK_LINE(671)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(671)
								bool tmp54 = (_this->_validate != null());		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(671)
								if ((tmp54)){
									HX_STACK_LINE(671)
									_this->_validate();
								}
							}
							HX_STACK_LINE(671)
							tmp53 = ret->zpp_inner->x;
						}
						HX_STACK_LINE(671)
						Float tmp54 = nx;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(671)
						bool tmp55 = (tmp53 == tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(671)
						bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(671)
						if ((tmp55)){
							HX_STACK_LINE(671)
							Float tmp57;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(671)
							{
								HX_STACK_LINE(671)
								{
									HX_STACK_LINE(671)
									bool tmp58 = (ret != null());		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(671)
									bool tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(671)
									bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(671)
									bool tmp61 = tmp59;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(671)
									if ((tmp61)){
										HX_STACK_LINE(671)
										tmp60 = ret->zpp_disp;
									}
									else{
										HX_STACK_LINE(671)
										tmp60 = false;
									}
									HX_STACK_LINE(671)
									bool tmp62 = tmp60;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(671)
									if ((tmp62)){
										HX_STACK_LINE(671)
										::String tmp63 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(671)
										::String tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(671)
										::String tmp65 = (tmp64 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(671)
										::String tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(671)
										::String tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(671)
										HX_STACK_DO_THROW(tmp67);
									}
								}
								HX_STACK_LINE(671)
								{
									HX_STACK_LINE(671)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(671)
									bool tmp58 = (_this->_validate != null());		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(671)
									bool tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(671)
									bool tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(671)
									if ((tmp60)){
										HX_STACK_LINE(671)
										_this->_validate();
									}
								}
								HX_STACK_LINE(671)
								Float tmp58 = ret->zpp_inner->y;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(671)
								tmp57 = tmp58;
							}
							HX_STACK_LINE(671)
							Float tmp58 = ny;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(671)
							tmp56 = (tmp57 == tmp58);
						}
						else{
							HX_STACK_LINE(671)
							tmp56 = false;
						}
						HX_STACK_LINE(671)
						bool tmp57 = !(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(671)
						if ((tmp57)){
							HX_STACK_LINE(671)
							{
								HX_STACK_LINE(671)
								ret->zpp_inner->x = nx;
								HX_STACK_LINE(671)
								ret->zpp_inner->y = ny;
								HX_STACK_LINE(671)
								{
								}
							}
							HX_STACK_LINE(671)
							{
								HX_STACK_LINE(671)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(671)
								bool tmp58 = (_this->_invalidate != null());		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(671)
								if ((tmp58)){
									HX_STACK_LINE(671)
									::zpp_nape::geom::ZPP_Vec2 tmp59 = _this;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(671)
									_this->_invalidate(tmp59);
								}
							}
						}
						HX_STACK_LINE(671)
						ret;
					}
					HX_STACK_LINE(671)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(671)
					tmp45 = ret;
				}
				HX_STACK_LINE(671)
				Float tmp46 = t0;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(671)
				::nape::shape::Shape tmp47 = c->outer;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(671)
				::nape::geom::RayResult tmp48 = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::getRay(tmp45,tmp46,false,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(671)
				return tmp48;
			}
			else{
				HX_STACK_LINE(673)
				return null();
			}
		}
		else{
			HX_STACK_LINE(675)
			bool tmp43 = (t1 > (int)0);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(675)
			bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(675)
			if ((tmp43)){
				HX_STACK_LINE(675)
				tmp44 = inner;
			}
			else{
				HX_STACK_LINE(675)
				tmp44 = false;
			}
			HX_STACK_LINE(675)
			if ((tmp44)){
				HX_STACK_LINE(676)
				bool tmp45 = (t1 < mint);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(676)
				bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(676)
				if ((tmp45)){
					HX_STACK_LINE(676)
					Float tmp47 = t1;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(676)
					Float tmp48 = this->maxdist;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(676)
					Float tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(676)
					tmp46 = (tmp47 <= tmp49);
				}
				else{
					HX_STACK_LINE(676)
					tmp46 = false;
				}
				HX_STACK_LINE(676)
				if ((tmp46)){
					HX_STACK_LINE(677)
					Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(678)
					Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
					HX_STACK_LINE(679)
					{
						HX_STACK_LINE(680)
						Float tmp47 = this->originx;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(680)
						nx = tmp47;
						HX_STACK_LINE(681)
						Float tmp48 = this->originy;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(681)
						ny = tmp48;
						HX_STACK_LINE(690)
						{
						}
					}
					HX_STACK_LINE(699)
					{
						HX_STACK_LINE(700)
						Float t = t1;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(709)
						Float tmp47 = this->dirx;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(709)
						Float tmp48 = t;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(709)
						Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(709)
						hx::AddEq(nx,tmp49);
						HX_STACK_LINE(710)
						Float tmp50 = this->diry;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(710)
						Float tmp51 = t;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(710)
						Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(710)
						hx::AddEq(ny,tmp52);
					}
					HX_STACK_LINE(712)
					{
						HX_STACK_LINE(713)
						Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(722)
						Float tmp47 = (c->worldCOMx * t);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(722)
						hx::SubEq(nx,tmp47);
						HX_STACK_LINE(723)
						Float tmp48 = (c->worldCOMy * t);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(723)
						hx::SubEq(ny,tmp48);
					}
					HX_STACK_LINE(725)
					{
						HX_STACK_LINE(726)
						Float tmp47 = (nx * nx);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(726)
						Float tmp48 = (ny * ny);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(726)
						Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(726)
						Float d = tmp49;		HX_STACK_VAR(d,"d");
						HX_STACK_LINE(735)
						Float tmp50 = d;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(735)
						Float tmp51 = ::Math_obj::sqrt(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(735)
						Float tmp52 = (Float(((Float)1.0)) / Float(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(735)
						Float imag = tmp52;		HX_STACK_VAR(imag,"imag");
						HX_STACK_LINE(736)
						{
							HX_STACK_LINE(737)
							Float t = imag;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(746)
							hx::MultEq(nx,t);
							HX_STACK_LINE(747)
							hx::MultEq(ny,t);
						}
					}
					HX_STACK_LINE(750)
					{
						HX_STACK_LINE(751)
						Float tmp47 = nx;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(751)
						Float tmp48 = -(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(751)
						nx = tmp48;
						HX_STACK_LINE(752)
						Float tmp49 = ny;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(752)
						Float tmp50 = -(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(752)
						ny = tmp50;
					}
					HX_STACK_LINE(754)
					::nape::geom::Vec2 tmp47;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(754)
					{
						HX_STACK_LINE(754)
						bool weak = false;		HX_STACK_VAR(weak,"weak");
						HX_STACK_LINE(754)
						bool tmp48 = (nx != nx);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(754)
						bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(754)
						bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(754)
						if ((tmp49)){
							HX_STACK_LINE(754)
							tmp50 = (ny != ny);
						}
						else{
							HX_STACK_LINE(754)
							tmp50 = true;
						}
						HX_STACK_LINE(754)
						if ((tmp50)){
							HX_STACK_LINE(754)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
						}
						HX_STACK_LINE(754)
						::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(754)
						{
							HX_STACK_LINE(754)
							::nape::geom::Vec2 tmp51 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(754)
							bool tmp52 = (tmp51 == null());		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(754)
							if ((tmp52)){
								HX_STACK_LINE(754)
								::nape::geom::Vec2 tmp53 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(754)
								ret = tmp53;
							}
							else{
								HX_STACK_LINE(754)
								::nape::geom::Vec2 tmp53 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(754)
								ret = tmp53;
								HX_STACK_LINE(754)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
								HX_STACK_LINE(754)
								ret->zpp_pool = null();
								HX_STACK_LINE(754)
								ret->zpp_disp = false;
								HX_STACK_LINE(754)
								::nape::geom::Vec2 tmp54 = ret;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(754)
								::nape::geom::Vec2 tmp55 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(754)
								bool tmp56 = (tmp54 == tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(754)
								if ((tmp56)){
									HX_STACK_LINE(754)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
								}
							}
						}
						HX_STACK_LINE(754)
						bool tmp51 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(754)
						if ((tmp51)){
							HX_STACK_LINE(754)
							::zpp_nape::geom::ZPP_Vec2 tmp52;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(754)
							{
								HX_STACK_LINE(754)
								bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
								HX_STACK_LINE(754)
								::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(754)
								{
									HX_STACK_LINE(754)
									::zpp_nape::geom::ZPP_Vec2 tmp53 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(754)
									bool tmp54 = (tmp53 == null());		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(754)
									if ((tmp54)){
										HX_STACK_LINE(754)
										::zpp_nape::geom::ZPP_Vec2 tmp55 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(754)
										ret1 = tmp55;
									}
									else{
										HX_STACK_LINE(754)
										::zpp_nape::geom::ZPP_Vec2 tmp55 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(754)
										ret1 = tmp55;
										HX_STACK_LINE(754)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
										HX_STACK_LINE(754)
										ret1->next = null();
									}
									HX_STACK_LINE(754)
									ret1->weak = false;
								}
								HX_STACK_LINE(754)
								ret1->_immutable = immutable;
								HX_STACK_LINE(754)
								{
									HX_STACK_LINE(754)
									ret1->x = nx;
									HX_STACK_LINE(754)
									ret1->y = ny;
									HX_STACK_LINE(754)
									{
									}
								}
								HX_STACK_LINE(754)
								tmp52 = ret1;
							}
							HX_STACK_LINE(754)
							ret->zpp_inner = tmp52;
							HX_STACK_LINE(754)
							ret->zpp_inner->outer = ret;
						}
						else{
							HX_STACK_LINE(754)
							{
								HX_STACK_LINE(754)
								bool tmp52 = (ret != null());		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(754)
								bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(754)
								if ((tmp52)){
									HX_STACK_LINE(754)
									tmp53 = ret->zpp_disp;
								}
								else{
									HX_STACK_LINE(754)
									tmp53 = false;
								}
								HX_STACK_LINE(754)
								if ((tmp53)){
									HX_STACK_LINE(754)
									::String tmp54 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(754)
									::String tmp55 = (tmp54 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(754)
									HX_STACK_DO_THROW(tmp55);
								}
							}
							HX_STACK_LINE(754)
							{
								HX_STACK_LINE(754)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(754)
								bool tmp52 = _this->_immutable;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(754)
								if ((tmp52)){
									HX_STACK_LINE(754)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
								}
								HX_STACK_LINE(754)
								bool tmp53 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(754)
								if ((tmp53)){
									HX_STACK_LINE(754)
									_this->_isimmutable();
								}
							}
							HX_STACK_LINE(754)
							bool tmp52 = (nx != nx);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(754)
							bool tmp53 = !(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(754)
							bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(754)
							if ((tmp53)){
								HX_STACK_LINE(754)
								tmp54 = (ny != ny);
							}
							else{
								HX_STACK_LINE(754)
								tmp54 = true;
							}
							HX_STACK_LINE(754)
							if ((tmp54)){
								HX_STACK_LINE(754)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
							}
							HX_STACK_LINE(754)
							Float tmp55;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(754)
							{
								HX_STACK_LINE(754)
								{
									HX_STACK_LINE(754)
									bool tmp56 = (ret != null());		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(754)
									bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(754)
									if ((tmp56)){
										HX_STACK_LINE(754)
										tmp57 = ret->zpp_disp;
									}
									else{
										HX_STACK_LINE(754)
										tmp57 = false;
									}
									HX_STACK_LINE(754)
									if ((tmp57)){
										HX_STACK_LINE(754)
										::String tmp58 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(754)
										::String tmp59 = (tmp58 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(754)
										HX_STACK_DO_THROW(tmp59);
									}
								}
								HX_STACK_LINE(754)
								{
									HX_STACK_LINE(754)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(754)
									bool tmp56 = (_this->_validate != null());		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(754)
									if ((tmp56)){
										HX_STACK_LINE(754)
										_this->_validate();
									}
								}
								HX_STACK_LINE(754)
								tmp55 = ret->zpp_inner->x;
							}
							HX_STACK_LINE(754)
							Float tmp56 = nx;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(754)
							bool tmp57 = (tmp55 == tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(754)
							bool tmp58;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(754)
							if ((tmp57)){
								HX_STACK_LINE(754)
								Float tmp59;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(754)
								{
									HX_STACK_LINE(754)
									{
										HX_STACK_LINE(754)
										bool tmp60 = (ret != null());		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(754)
										bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(754)
										bool tmp62;		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(754)
										bool tmp63 = tmp61;		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(754)
										if ((tmp63)){
											HX_STACK_LINE(754)
											tmp62 = ret->zpp_disp;
										}
										else{
											HX_STACK_LINE(754)
											tmp62 = false;
										}
										HX_STACK_LINE(754)
										bool tmp64 = tmp62;		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(754)
										if ((tmp64)){
											HX_STACK_LINE(754)
											::String tmp65 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(754)
											::String tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(754)
											::String tmp67 = (tmp66 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(754)
											::String tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(754)
											::String tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(754)
											HX_STACK_DO_THROW(tmp69);
										}
									}
									HX_STACK_LINE(754)
									{
										HX_STACK_LINE(754)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(754)
										bool tmp60 = (_this->_validate != null());		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(754)
										bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(754)
										bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(754)
										if ((tmp62)){
											HX_STACK_LINE(754)
											_this->_validate();
										}
									}
									HX_STACK_LINE(754)
									Float tmp60 = ret->zpp_inner->y;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(754)
									tmp59 = tmp60;
								}
								HX_STACK_LINE(754)
								Float tmp60 = ny;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(754)
								tmp58 = (tmp59 == tmp60);
							}
							else{
								HX_STACK_LINE(754)
								tmp58 = false;
							}
							HX_STACK_LINE(754)
							bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(754)
							if ((tmp59)){
								HX_STACK_LINE(754)
								{
									HX_STACK_LINE(754)
									ret->zpp_inner->x = nx;
									HX_STACK_LINE(754)
									ret->zpp_inner->y = ny;
									HX_STACK_LINE(754)
									{
									}
								}
								HX_STACK_LINE(754)
								{
									HX_STACK_LINE(754)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(754)
									bool tmp60 = (_this->_invalidate != null());		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(754)
									if ((tmp60)){
										HX_STACK_LINE(754)
										::zpp_nape::geom::ZPP_Vec2 tmp61 = _this;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(754)
										_this->_invalidate(tmp61);
									}
								}
							}
							HX_STACK_LINE(754)
							ret;
						}
						HX_STACK_LINE(754)
						ret->zpp_inner->weak = weak;
						HX_STACK_LINE(754)
						tmp47 = ret;
					}
					HX_STACK_LINE(754)
					Float tmp48 = t1;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(754)
					::nape::shape::Shape tmp49 = c->outer;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(754)
					::nape::geom::RayResult tmp50 = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::getRay(tmp47,tmp48,true,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(754)
					return tmp50;
				}
				else{
					HX_STACK_LINE(756)
					return null();
				}
			}
			else{
				HX_STACK_LINE(758)
				return null();
			}
		}
	}
	HX_STACK_LINE(503)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_Ray_obj,circlesect,return )

Void ZPP_Ray_obj::circlesect2( ::zpp_nape::shape::ZPP_Circle c,bool inner,::nape::geom::RayResultList list){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","circlesect2",0xc8286805,"zpp_nape.geom.ZPP_Ray.circlesect2","zpp_nape/geom/Ray.hx",761,0x908d5ea5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(inner,"inner")
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(762)
		{
			HX_STACK_LINE(762)
			bool tmp = c->zip_worldCOM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(762)
			if ((tmp)){
				HX_STACK_LINE(762)
				bool tmp1 = (c->body != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(762)
				if ((tmp1)){
					HX_STACK_LINE(762)
					c->zip_worldCOM = false;
					HX_STACK_LINE(762)
					{
						HX_STACK_LINE(762)
						bool tmp2 = c->zip_localCOM;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(762)
						if ((tmp2)){
							HX_STACK_LINE(762)
							c->zip_localCOM = false;
							HX_STACK_LINE(762)
							int tmp3 = c->type;		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(762)
							int tmp4 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(762)
							bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(762)
							if ((tmp5)){
								HX_STACK_LINE(762)
								::zpp_nape::shape::ZPP_Polygon _this = c->polygon;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(762)
								::zpp_nape::geom::ZPP_Vec2 tmp6 = _this->lverts->next;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(762)
								bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(762)
								if ((tmp7)){
									HX_STACK_LINE(762)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
								}
								HX_STACK_LINE(762)
								::zpp_nape::geom::ZPP_Vec2 tmp8 = _this->lverts->next;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(762)
								::zpp_nape::geom::ZPP_Vec2 tmp9 = tmp8->next;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(762)
								bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(762)
								if ((tmp10)){
									HX_STACK_LINE(762)
									::zpp_nape::geom::ZPP_Vec2 tmp11 = _this->lverts->next;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(762)
									_this->localCOMx = tmp11->x;
									HX_STACK_LINE(762)
									::zpp_nape::geom::ZPP_Vec2 tmp12 = _this->lverts->next;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(762)
									_this->localCOMy = tmp12->y;
									HX_STACK_LINE(762)
									Dynamic();
								}
								else{
									HX_STACK_LINE(762)
									::zpp_nape::geom::ZPP_Vec2 tmp11 = _this->lverts->next;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(762)
									::zpp_nape::geom::ZPP_Vec2 tmp12 = tmp11->next->next;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(762)
									bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(762)
									if ((tmp13)){
										HX_STACK_LINE(762)
										{
											HX_STACK_LINE(762)
											::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(762)
											_this->localCOMx = tmp14->x;
											HX_STACK_LINE(762)
											::zpp_nape::geom::ZPP_Vec2 tmp15 = _this->lverts->next;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(762)
											_this->localCOMy = tmp15->y;
											HX_STACK_LINE(762)
											{
											}
										}
										HX_STACK_LINE(762)
										{
											HX_STACK_LINE(762)
											Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(762)
											::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(762)
											Float tmp15 = tmp14->next->x;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(762)
											Float tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(762)
											Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(762)
											hx::AddEq(_this->localCOMx,tmp17);
											HX_STACK_LINE(762)
											::zpp_nape::geom::ZPP_Vec2 tmp18 = _this->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(762)
											Float tmp19 = tmp18->next->y;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(762)
											Float tmp20 = t;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(762)
											Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(762)
											hx::AddEq(_this->localCOMy,tmp21);
										}
										HX_STACK_LINE(762)
										{
											HX_STACK_LINE(762)
											Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(762)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(762)
											hx::MultEq(_this->localCOMy,t);
										}
									}
									else{
										HX_STACK_LINE(762)
										{
											HX_STACK_LINE(762)
											_this->localCOMx = (int)0;
											HX_STACK_LINE(762)
											_this->localCOMy = (int)0;
											HX_STACK_LINE(762)
											{
											}
										}
										HX_STACK_LINE(762)
										Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
										HX_STACK_LINE(762)
										{
											HX_STACK_LINE(762)
											::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(762)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp14;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(762)
											::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
											HX_STACK_LINE(762)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(762)
											::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(762)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(762)
											while((true)){
												HX_STACK_LINE(762)
												bool tmp15 = (cx_ite != null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(762)
												bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(762)
												if ((tmp16)){
													HX_STACK_LINE(762)
													break;
												}
												HX_STACK_LINE(762)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(762)
												{
													HX_STACK_LINE(762)
													Float tmp17 = v->x;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(762)
													Float tmp18 = (w->y - u->y);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(762)
													Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(762)
													hx::AddEq(area,tmp19);
													HX_STACK_LINE(762)
													Float tmp20 = (w->y * v->x);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(762)
													Float tmp21 = (w->x * v->y);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(762)
													Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(762)
													Float cf = tmp22;		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(762)
													Float tmp23 = (v->x + w->x);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(762)
													Float tmp24 = cf;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(762)
													Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(762)
													hx::AddEq(_this->localCOMx,tmp25);
													HX_STACK_LINE(762)
													Float tmp26 = (v->y + w->y);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(762)
													Float tmp27 = cf;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(762)
													Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(762)
													hx::AddEq(_this->localCOMy,tmp28);
												}
												HX_STACK_LINE(762)
												u = v;
												HX_STACK_LINE(762)
												v = w;
												HX_STACK_LINE(762)
												cx_ite = cx_ite->next;
											}
											HX_STACK_LINE(762)
											::zpp_nape::geom::ZPP_Vec2 tmp15 = _this->lverts->next;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(762)
											cx_ite = tmp15;
											HX_STACK_LINE(762)
											::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
											HX_STACK_LINE(762)
											{
												HX_STACK_LINE(762)
												Float tmp16 = v->x;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(762)
												Float tmp17 = (w->y - u->y);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(762)
												Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(762)
												hx::AddEq(area,tmp18);
												HX_STACK_LINE(762)
												Float tmp19 = (w->y * v->x);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(762)
												Float tmp20 = (w->x * v->y);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(762)
												Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(762)
												Float cf = tmp21;		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(762)
												Float tmp22 = (v->x + w->x);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(762)
												Float tmp23 = cf;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(762)
												Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(762)
												hx::AddEq(_this->localCOMx,tmp24);
												HX_STACK_LINE(762)
												Float tmp25 = (v->y + w->y);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(762)
												Float tmp26 = cf;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(762)
												Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(762)
												hx::AddEq(_this->localCOMy,tmp27);
											}
											HX_STACK_LINE(762)
											u = v;
											HX_STACK_LINE(762)
											v = w;
											HX_STACK_LINE(762)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(762)
											::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
											HX_STACK_LINE(762)
											{
												HX_STACK_LINE(762)
												Float tmp16 = v->x;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(762)
												Float tmp17 = (w1->y - u->y);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(762)
												Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(762)
												hx::AddEq(area,tmp18);
												HX_STACK_LINE(762)
												Float tmp19 = (w1->y * v->x);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(762)
												Float tmp20 = (w1->x * v->y);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(762)
												Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(762)
												Float cf = tmp21;		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(762)
												Float tmp22 = (v->x + w1->x);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(762)
												Float tmp23 = cf;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(762)
												Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(762)
												hx::AddEq(_this->localCOMx,tmp24);
												HX_STACK_LINE(762)
												Float tmp25 = (v->y + w1->y);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(762)
												Float tmp26 = cf;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(762)
												Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(762)
												hx::AddEq(_this->localCOMy,tmp27);
											}
										}
										HX_STACK_LINE(762)
										Float tmp14 = ((int)3 * area);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(762)
										Float tmp15 = (Float((int)1) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(762)
										area = tmp15;
										HX_STACK_LINE(762)
										{
											HX_STACK_LINE(762)
											Float t = area;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(762)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(762)
											hx::MultEq(_this->localCOMy,t);
										}
									}
								}
							}
							HX_STACK_LINE(762)
							bool tmp6 = (c->wrap_localCOM != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(762)
							if ((tmp6)){
								HX_STACK_LINE(762)
								::zpp_nape::geom::ZPP_Vec2 tmp7 = c->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(762)
								tmp7->x = c->localCOMx;
								HX_STACK_LINE(762)
								::zpp_nape::geom::ZPP_Vec2 tmp8 = c->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(762)
								tmp8->y = c->localCOMy;
								HX_STACK_LINE(762)
								{
								}
							}
						}
					}
					HX_STACK_LINE(762)
					{
						HX_STACK_LINE(762)
						::zpp_nape::phys::ZPP_Body _this = c->body;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(762)
						bool tmp2 = _this->zip_axis;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(762)
						if ((tmp2)){
							HX_STACK_LINE(762)
							_this->zip_axis = false;
							HX_STACK_LINE(762)
							{
								HX_STACK_LINE(762)
								Float tmp3 = _this->rot;		HX_STACK_VAR(tmp3,"tmp3");
								HX_STACK_LINE(762)
								Float tmp4 = ::Math_obj::sin(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(762)
								_this->axisx = tmp4;
								HX_STACK_LINE(762)
								Float tmp5 = _this->rot;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(762)
								Float tmp6 = ::Math_obj::cos(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(762)
								_this->axisy = tmp6;
								HX_STACK_LINE(762)
								Dynamic();
							}
						}
					}
					HX_STACK_LINE(762)
					{
						HX_STACK_LINE(762)
						Float tmp2 = c->body->posx;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(762)
						Float tmp3 = c->body->axisy;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(762)
						Float tmp4 = c->localCOMx;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(762)
						Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(762)
						Float tmp6 = c->body->axisx;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(762)
						Float tmp7 = c->localCOMy;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(762)
						Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(762)
						Float tmp9 = (tmp5 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(762)
						Float tmp10 = (tmp2 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(762)
						c->worldCOMx = tmp10;
						HX_STACK_LINE(762)
						Float tmp11 = c->body->posy;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(762)
						Float tmp12 = c->localCOMx;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(762)
						Float tmp13 = c->body->axisx;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(762)
						Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(762)
						Float tmp15 = c->localCOMy;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(762)
						Float tmp16 = c->body->axisy;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(762)
						Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(762)
						Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(762)
						Float tmp19 = (tmp11 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(762)
						c->worldCOMy = tmp19;
					}
				}
			}
		}
		HX_STACK_LINE(763)
		Float acx = ((Float)0.0);		HX_STACK_VAR(acx,"acx");
		HX_STACK_LINE(764)
		Float acy = ((Float)0.0);		HX_STACK_VAR(acy,"acy");
		HX_STACK_LINE(765)
		{
			HX_STACK_LINE(766)
			Float tmp = this->originx;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(766)
			Float tmp1 = c->worldCOMx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(766)
			Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(766)
			acx = tmp2;
			HX_STACK_LINE(767)
			Float tmp3 = this->originy;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(767)
			Float tmp4 = c->worldCOMy;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(767)
			Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(767)
			acy = tmp5;
		}
		HX_STACK_LINE(769)
		Float tmp = this->dirx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(769)
		Float tmp1 = this->dirx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(769)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(769)
		Float tmp3 = this->diry;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(769)
		Float tmp4 = this->diry;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(769)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(769)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(769)
		Float A = tmp6;		HX_STACK_VAR(A,"A");
		HX_STACK_LINE(770)
		Float tmp7 = acx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(770)
		Float tmp8 = this->dirx;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(770)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(770)
		Float tmp10 = acy;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(770)
		Float tmp11 = this->diry;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(770)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(770)
		Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(770)
		Float tmp14 = ((int)2 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(770)
		Float B = tmp14;		HX_STACK_VAR(B,"B");
		HX_STACK_LINE(771)
		Float tmp15 = (acx * acx);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(771)
		Float tmp16 = (acy * acy);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(771)
		Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(771)
		Float tmp18 = (c->radius * c->radius);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(771)
		Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(771)
		Float C = tmp19;		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(772)
		Float tmp20 = (B * B);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(772)
		Float tmp21 = ((int)4 * A);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(772)
		Float tmp22 = C;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(772)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(772)
		Float tmp24 = (tmp20 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(772)
		Float det = tmp24;		HX_STACK_VAR(det,"det");
		HX_STACK_LINE(773)
		bool tmp25 = (det == (int)0);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(773)
		if ((tmp25)){
			HX_STACK_LINE(774)
			Float tmp26 = B;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(774)
			Float tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(774)
			Float tmp28 = (Float(tmp27) / Float((int)2));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(774)
			Float tmp29 = A;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(774)
			Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(774)
			Float t = tmp30;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(775)
			bool tmp31 = inner;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(775)
			bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(775)
			bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(775)
			bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(775)
			bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(775)
			bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(775)
			if ((tmp35)){
				HX_STACK_LINE(775)
				tmp36 = (C > (int)0);
			}
			else{
				HX_STACK_LINE(775)
				tmp36 = true;
			}
			HX_STACK_LINE(775)
			bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(775)
			bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(775)
			if ((tmp37)){
				HX_STACK_LINE(775)
				tmp38 = (t > (int)0);
			}
			else{
				HX_STACK_LINE(775)
				tmp38 = false;
			}
			HX_STACK_LINE(775)
			bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(775)
			if ((tmp38)){
				HX_STACK_LINE(775)
				Float tmp40 = t;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(775)
				Float tmp41 = this->maxdist;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(775)
				Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(775)
				tmp39 = (tmp40 <= tmp42);
			}
			else{
				HX_STACK_LINE(775)
				tmp39 = false;
			}
			HX_STACK_LINE(775)
			if ((tmp39)){
				HX_STACK_LINE(776)
				Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
				HX_STACK_LINE(777)
				Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
				HX_STACK_LINE(778)
				{
					HX_STACK_LINE(779)
					Float tmp40 = this->originx;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(779)
					nx = tmp40;
					HX_STACK_LINE(780)
					Float tmp41 = this->originy;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(780)
					ny = tmp41;
					HX_STACK_LINE(789)
					{
					}
				}
				HX_STACK_LINE(798)
				{
					HX_STACK_LINE(799)
					Float t1 = t;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(808)
					Float tmp40 = this->dirx;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(808)
					Float tmp41 = t1;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(808)
					Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(808)
					hx::AddEq(nx,tmp42);
					HX_STACK_LINE(809)
					Float tmp43 = this->diry;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(809)
					Float tmp44 = t1;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(809)
					Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(809)
					hx::AddEq(ny,tmp45);
				}
				HX_STACK_LINE(811)
				{
					HX_STACK_LINE(812)
					Float t1 = ((Float)1.0);		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(821)
					Float tmp40 = (c->worldCOMx * t1);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(821)
					hx::SubEq(nx,tmp40);
					HX_STACK_LINE(822)
					Float tmp41 = (c->worldCOMy * t1);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(822)
					hx::SubEq(ny,tmp41);
				}
				HX_STACK_LINE(824)
				{
					HX_STACK_LINE(825)
					Float tmp40 = (nx * nx);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(825)
					Float tmp41 = (ny * ny);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(825)
					Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(825)
					Float d = tmp42;		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(834)
					Float tmp43 = d;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(834)
					Float tmp44 = ::Math_obj::sqrt(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(834)
					Float tmp45 = (Float(((Float)1.0)) / Float(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(834)
					Float imag = tmp45;		HX_STACK_VAR(imag,"imag");
					HX_STACK_LINE(835)
					{
						HX_STACK_LINE(836)
						Float t1 = imag;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(845)
						hx::MultEq(nx,t1);
						HX_STACK_LINE(846)
						hx::MultEq(ny,t1);
					}
				}
				HX_STACK_LINE(849)
				bool tmp40 = (C <= (int)0);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(849)
				if ((tmp40)){
					HX_STACK_LINE(850)
					Float tmp41 = nx;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(850)
					Float tmp42 = -(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(850)
					nx = tmp42;
					HX_STACK_LINE(851)
					Float tmp43 = ny;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(851)
					Float tmp44 = -(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(851)
					ny = tmp44;
				}
				HX_STACK_LINE(853)
				::nape::geom::Vec2 tmp41;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(853)
				{
					HX_STACK_LINE(853)
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(853)
					bool tmp42 = (nx != nx);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(853)
					bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(853)
					bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(853)
					if ((tmp43)){
						HX_STACK_LINE(853)
						tmp44 = (ny != ny);
					}
					else{
						HX_STACK_LINE(853)
						tmp44 = true;
					}
					HX_STACK_LINE(853)
					if ((tmp44)){
						HX_STACK_LINE(853)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(853)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(853)
					{
						HX_STACK_LINE(853)
						::nape::geom::Vec2 tmp45 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(853)
						bool tmp46 = (tmp45 == null());		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(853)
						if ((tmp46)){
							HX_STACK_LINE(853)
							::nape::geom::Vec2 tmp47 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(853)
							ret = tmp47;
						}
						else{
							HX_STACK_LINE(853)
							::nape::geom::Vec2 tmp47 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(853)
							ret = tmp47;
							HX_STACK_LINE(853)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
							HX_STACK_LINE(853)
							ret->zpp_pool = null();
							HX_STACK_LINE(853)
							ret->zpp_disp = false;
							HX_STACK_LINE(853)
							::nape::geom::Vec2 tmp48 = ret;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(853)
							::nape::geom::Vec2 tmp49 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(853)
							bool tmp50 = (tmp48 == tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(853)
							if ((tmp50)){
								HX_STACK_LINE(853)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
							}
						}
					}
					HX_STACK_LINE(853)
					bool tmp45 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(853)
					if ((tmp45)){
						HX_STACK_LINE(853)
						::zpp_nape::geom::ZPP_Vec2 tmp46;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(853)
						{
							HX_STACK_LINE(853)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(853)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(853)
							{
								HX_STACK_LINE(853)
								::zpp_nape::geom::ZPP_Vec2 tmp47 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(853)
								bool tmp48 = (tmp47 == null());		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(853)
								if ((tmp48)){
									HX_STACK_LINE(853)
									::zpp_nape::geom::ZPP_Vec2 tmp49 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(853)
									ret1 = tmp49;
								}
								else{
									HX_STACK_LINE(853)
									::zpp_nape::geom::ZPP_Vec2 tmp49 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(853)
									ret1 = tmp49;
									HX_STACK_LINE(853)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(853)
									ret1->next = null();
								}
								HX_STACK_LINE(853)
								ret1->weak = false;
							}
							HX_STACK_LINE(853)
							ret1->_immutable = immutable;
							HX_STACK_LINE(853)
							{
								HX_STACK_LINE(853)
								ret1->x = nx;
								HX_STACK_LINE(853)
								ret1->y = ny;
								HX_STACK_LINE(853)
								{
								}
							}
							HX_STACK_LINE(853)
							tmp46 = ret1;
						}
						HX_STACK_LINE(853)
						ret->zpp_inner = tmp46;
						HX_STACK_LINE(853)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(853)
						{
							HX_STACK_LINE(853)
							bool tmp46 = (ret != null());		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(853)
							bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(853)
							if ((tmp46)){
								HX_STACK_LINE(853)
								tmp47 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(853)
								tmp47 = false;
							}
							HX_STACK_LINE(853)
							if ((tmp47)){
								HX_STACK_LINE(853)
								::String tmp48 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(853)
								::String tmp49 = (tmp48 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(853)
								HX_STACK_DO_THROW(tmp49);
							}
						}
						HX_STACK_LINE(853)
						{
							HX_STACK_LINE(853)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(853)
							bool tmp46 = _this->_immutable;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(853)
							if ((tmp46)){
								HX_STACK_LINE(853)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(853)
							bool tmp47 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(853)
							if ((tmp47)){
								HX_STACK_LINE(853)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(853)
						bool tmp46 = (nx != nx);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(853)
						bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(853)
						bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(853)
						if ((tmp47)){
							HX_STACK_LINE(853)
							tmp48 = (ny != ny);
						}
						else{
							HX_STACK_LINE(853)
							tmp48 = true;
						}
						HX_STACK_LINE(853)
						if ((tmp48)){
							HX_STACK_LINE(853)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
						}
						HX_STACK_LINE(853)
						Float tmp49;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(853)
						{
							HX_STACK_LINE(853)
							{
								HX_STACK_LINE(853)
								bool tmp50 = (ret != null());		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(853)
								bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(853)
								if ((tmp50)){
									HX_STACK_LINE(853)
									tmp51 = ret->zpp_disp;
								}
								else{
									HX_STACK_LINE(853)
									tmp51 = false;
								}
								HX_STACK_LINE(853)
								if ((tmp51)){
									HX_STACK_LINE(853)
									::String tmp52 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(853)
									::String tmp53 = (tmp52 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(853)
									HX_STACK_DO_THROW(tmp53);
								}
							}
							HX_STACK_LINE(853)
							{
								HX_STACK_LINE(853)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(853)
								bool tmp50 = (_this->_validate != null());		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(853)
								if ((tmp50)){
									HX_STACK_LINE(853)
									_this->_validate();
								}
							}
							HX_STACK_LINE(853)
							tmp49 = ret->zpp_inner->x;
						}
						HX_STACK_LINE(853)
						Float tmp50 = nx;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(853)
						bool tmp51 = (tmp49 == tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(853)
						bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(853)
						if ((tmp51)){
							HX_STACK_LINE(853)
							Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(853)
							{
								HX_STACK_LINE(853)
								{
									HX_STACK_LINE(853)
									bool tmp54 = (ret != null());		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(853)
									bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(853)
									bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(853)
									bool tmp57 = tmp55;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(853)
									if ((tmp57)){
										HX_STACK_LINE(853)
										tmp56 = ret->zpp_disp;
									}
									else{
										HX_STACK_LINE(853)
										tmp56 = false;
									}
									HX_STACK_LINE(853)
									bool tmp58 = tmp56;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(853)
									if ((tmp58)){
										HX_STACK_LINE(853)
										::String tmp59 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(853)
										::String tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(853)
										::String tmp61 = (tmp60 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(853)
										::String tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(853)
										::String tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(853)
										HX_STACK_DO_THROW(tmp63);
									}
								}
								HX_STACK_LINE(853)
								{
									HX_STACK_LINE(853)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(853)
									bool tmp54 = (_this->_validate != null());		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(853)
									bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(853)
									bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(853)
									if ((tmp56)){
										HX_STACK_LINE(853)
										_this->_validate();
									}
								}
								HX_STACK_LINE(853)
								Float tmp54 = ret->zpp_inner->y;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(853)
								tmp53 = tmp54;
							}
							HX_STACK_LINE(853)
							Float tmp54 = ny;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(853)
							tmp52 = (tmp53 == tmp54);
						}
						else{
							HX_STACK_LINE(853)
							tmp52 = false;
						}
						HX_STACK_LINE(853)
						bool tmp53 = !(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(853)
						if ((tmp53)){
							HX_STACK_LINE(853)
							{
								HX_STACK_LINE(853)
								ret->zpp_inner->x = nx;
								HX_STACK_LINE(853)
								ret->zpp_inner->y = ny;
								HX_STACK_LINE(853)
								{
								}
							}
							HX_STACK_LINE(853)
							{
								HX_STACK_LINE(853)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(853)
								bool tmp54 = (_this->_invalidate != null());		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(853)
								if ((tmp54)){
									HX_STACK_LINE(853)
									::zpp_nape::geom::ZPP_Vec2 tmp55 = _this;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(853)
									_this->_invalidate(tmp55);
								}
							}
						}
						HX_STACK_LINE(853)
						ret;
					}
					HX_STACK_LINE(853)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(853)
					tmp41 = ret;
				}
				HX_STACK_LINE(853)
				Float tmp42 = t;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(853)
				bool tmp43 = (C <= (int)0);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(853)
				::nape::shape::Shape tmp44 = c->outer;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(853)
				::nape::geom::RayResult tmp45 = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::getRay(tmp41,tmp42,tmp43,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(853)
				::nape::geom::RayResult res = tmp45;		HX_STACK_VAR(res,"res");
				HX_STACK_LINE(854)
				{
					HX_STACK_LINE(855)
					::zpp_nape::util::ZNPNode_RayResult pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(856)
					{
						HX_STACK_LINE(857)
						::zpp_nape::util::ZNPList_RayResult tmp46 = list->zpp_inner->inner;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(857)
						::zpp_nape::util::ZNPNode_RayResult cx_ite = tmp46->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(858)
						while((true)){
							HX_STACK_LINE(858)
							bool tmp47 = (cx_ite != null());		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(858)
							bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(858)
							if ((tmp48)){
								HX_STACK_LINE(858)
								break;
							}
							HX_STACK_LINE(859)
							::nape::geom::RayResult j = cx_ite->elt;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(860)
							{
								HX_STACK_LINE(861)
								Float tmp49;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(861)
								{
									HX_STACK_LINE(861)
									{
										HX_STACK_LINE(861)
										::zpp_nape::geom::ZPP_ConvexRayResult tmp50 = res->zpp_inner->next;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(861)
										bool tmp51 = (tmp50 != null());		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(861)
										if ((tmp51)){
											HX_STACK_LINE(861)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
										}
									}
									HX_STACK_LINE(861)
									tmp49 = res->zpp_inner->toiDistance;
								}
								HX_STACK_LINE(861)
								Float tmp50;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(861)
								{
									HX_STACK_LINE(861)
									{
										HX_STACK_LINE(861)
										::zpp_nape::geom::ZPP_ConvexRayResult tmp51 = j->zpp_inner->next;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(861)
										bool tmp52 = (tmp51 != null());		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(861)
										if ((tmp52)){
											HX_STACK_LINE(861)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
										}
									}
									HX_STACK_LINE(861)
									tmp50 = j->zpp_inner->toiDistance;
								}
								HX_STACK_LINE(861)
								bool tmp51 = (tmp49 < tmp50);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(861)
								if ((tmp51)){
									HX_STACK_LINE(861)
									break;
								}
								HX_STACK_LINE(862)
								pre = cx_ite;
							}
							HX_STACK_LINE(864)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(867)
					{
						HX_STACK_LINE(867)
						::zpp_nape::util::ZNPList_RayResult tmp46 = list->zpp_inner->inner;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(867)
						::zpp_nape::util::ZNPList_RayResult _this = tmp46;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(867)
						::zpp_nape::util::ZNPNode_RayResult tmp47;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(867)
						{
							HX_STACK_LINE(867)
							::zpp_nape::util::ZNPNode_RayResult ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(867)
							{
								HX_STACK_LINE(867)
								::zpp_nape::util::ZNPNode_RayResult tmp48 = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(867)
								bool tmp49 = (tmp48 == null());		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(867)
								if ((tmp49)){
									HX_STACK_LINE(867)
									::zpp_nape::util::ZNPNode_RayResult tmp50 = ::zpp_nape::util::ZNPNode_RayResult_obj::__new();		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(867)
									ret = tmp50;
								}
								else{
									HX_STACK_LINE(867)
									::zpp_nape::util::ZNPNode_RayResult tmp50 = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(867)
									ret = tmp50;
									HX_STACK_LINE(867)
									::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = ret->next;
									HX_STACK_LINE(867)
									ret->next = null();
								}
								HX_STACK_LINE(867)
								Dynamic();
							}
							HX_STACK_LINE(867)
							ret->elt = res;
							HX_STACK_LINE(867)
							tmp47 = ret;
						}
						HX_STACK_LINE(867)
						::zpp_nape::util::ZNPNode_RayResult temp = tmp47;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(867)
						bool tmp48 = (pre == null());		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(867)
						if ((tmp48)){
							HX_STACK_LINE(867)
							temp->next = _this->head;
							HX_STACK_LINE(867)
							_this->head = temp;
						}
						else{
							HX_STACK_LINE(867)
							temp->next = pre->next;
							HX_STACK_LINE(867)
							pre->next = temp;
						}
						HX_STACK_LINE(867)
						bool tmp49 = _this->modified = true;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(867)
						_this->pushmod = tmp49;
						HX_STACK_LINE(867)
						(_this->length)++;
						HX_STACK_LINE(867)
						temp;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(872)
			Float tmp26 = det;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(872)
			Float tmp27 = ::Math_obj::sqrt(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(872)
			det = tmp27;
			HX_STACK_LINE(873)
			Float tmp28 = ((int)2 * A);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(873)
			Float tmp29 = (Float((int)1) / Float(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(873)
			A = tmp29;
			HX_STACK_LINE(874)
			Float tmp30 = B;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(874)
			Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(874)
			Float tmp32 = det;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(874)
			Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(874)
			Float tmp34 = A;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(874)
			Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(874)
			Float t0 = tmp35;		HX_STACK_VAR(t0,"t0");
			HX_STACK_LINE(875)
			Float tmp36 = B;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(875)
			Float tmp37 = -(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(875)
			Float tmp38 = det;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(875)
			Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(875)
			Float tmp40 = A;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(875)
			Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(875)
			Float t1 = tmp41;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(876)
			bool tmp42 = (t0 > (int)0);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(876)
			bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(876)
			if ((tmp42)){
				HX_STACK_LINE(876)
				Float tmp44 = t0;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(876)
				Float tmp45 = this->maxdist;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(876)
				Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(876)
				tmp43 = (tmp44 <= tmp46);
			}
			else{
				HX_STACK_LINE(876)
				tmp43 = false;
			}
			HX_STACK_LINE(876)
			if ((tmp43)){
				HX_STACK_LINE(877)
				Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
				HX_STACK_LINE(878)
				Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
				HX_STACK_LINE(879)
				{
					HX_STACK_LINE(880)
					Float tmp44 = this->originx;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(880)
					nx = tmp44;
					HX_STACK_LINE(881)
					Float tmp45 = this->originy;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(881)
					ny = tmp45;
					HX_STACK_LINE(890)
					{
					}
				}
				HX_STACK_LINE(899)
				{
					HX_STACK_LINE(900)
					Float t = t0;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(909)
					Float tmp44 = this->dirx;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(909)
					Float tmp45 = t;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(909)
					Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(909)
					hx::AddEq(nx,tmp46);
					HX_STACK_LINE(910)
					Float tmp47 = this->diry;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(910)
					Float tmp48 = t;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(910)
					Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(910)
					hx::AddEq(ny,tmp49);
				}
				HX_STACK_LINE(912)
				{
					HX_STACK_LINE(913)
					Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(922)
					Float tmp44 = (c->worldCOMx * t);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(922)
					hx::SubEq(nx,tmp44);
					HX_STACK_LINE(923)
					Float tmp45 = (c->worldCOMy * t);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(923)
					hx::SubEq(ny,tmp45);
				}
				HX_STACK_LINE(925)
				{
					HX_STACK_LINE(926)
					Float tmp44 = (nx * nx);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(926)
					Float tmp45 = (ny * ny);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(926)
					Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(926)
					Float d = tmp46;		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(935)
					Float tmp47 = d;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(935)
					Float tmp48 = ::Math_obj::sqrt(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(935)
					Float tmp49 = (Float(((Float)1.0)) / Float(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(935)
					Float imag = tmp49;		HX_STACK_VAR(imag,"imag");
					HX_STACK_LINE(936)
					{
						HX_STACK_LINE(937)
						Float t = imag;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(946)
						hx::MultEq(nx,t);
						HX_STACK_LINE(947)
						hx::MultEq(ny,t);
					}
				}
				HX_STACK_LINE(954)
				::nape::geom::Vec2 tmp44;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(954)
				{
					HX_STACK_LINE(954)
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(954)
					bool tmp45 = (nx != nx);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(954)
					bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(954)
					bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(954)
					if ((tmp46)){
						HX_STACK_LINE(954)
						tmp47 = (ny != ny);
					}
					else{
						HX_STACK_LINE(954)
						tmp47 = true;
					}
					HX_STACK_LINE(954)
					if ((tmp47)){
						HX_STACK_LINE(954)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(954)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(954)
					{
						HX_STACK_LINE(954)
						::nape::geom::Vec2 tmp48 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(954)
						bool tmp49 = (tmp48 == null());		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(954)
						if ((tmp49)){
							HX_STACK_LINE(954)
							::nape::geom::Vec2 tmp50 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(954)
							ret = tmp50;
						}
						else{
							HX_STACK_LINE(954)
							::nape::geom::Vec2 tmp50 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(954)
							ret = tmp50;
							HX_STACK_LINE(954)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
							HX_STACK_LINE(954)
							ret->zpp_pool = null();
							HX_STACK_LINE(954)
							ret->zpp_disp = false;
							HX_STACK_LINE(954)
							::nape::geom::Vec2 tmp51 = ret;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(954)
							::nape::geom::Vec2 tmp52 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(954)
							bool tmp53 = (tmp51 == tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(954)
							if ((tmp53)){
								HX_STACK_LINE(954)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
							}
						}
					}
					HX_STACK_LINE(954)
					bool tmp48 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(954)
					if ((tmp48)){
						HX_STACK_LINE(954)
						::zpp_nape::geom::ZPP_Vec2 tmp49;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(954)
						{
							HX_STACK_LINE(954)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(954)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(954)
							{
								HX_STACK_LINE(954)
								::zpp_nape::geom::ZPP_Vec2 tmp50 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(954)
								bool tmp51 = (tmp50 == null());		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(954)
								if ((tmp51)){
									HX_STACK_LINE(954)
									::zpp_nape::geom::ZPP_Vec2 tmp52 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(954)
									ret1 = tmp52;
								}
								else{
									HX_STACK_LINE(954)
									::zpp_nape::geom::ZPP_Vec2 tmp52 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(954)
									ret1 = tmp52;
									HX_STACK_LINE(954)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(954)
									ret1->next = null();
								}
								HX_STACK_LINE(954)
								ret1->weak = false;
							}
							HX_STACK_LINE(954)
							ret1->_immutable = immutable;
							HX_STACK_LINE(954)
							{
								HX_STACK_LINE(954)
								ret1->x = nx;
								HX_STACK_LINE(954)
								ret1->y = ny;
								HX_STACK_LINE(954)
								{
								}
							}
							HX_STACK_LINE(954)
							tmp49 = ret1;
						}
						HX_STACK_LINE(954)
						ret->zpp_inner = tmp49;
						HX_STACK_LINE(954)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(954)
						{
							HX_STACK_LINE(954)
							bool tmp49 = (ret != null());		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(954)
							bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(954)
							if ((tmp49)){
								HX_STACK_LINE(954)
								tmp50 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(954)
								tmp50 = false;
							}
							HX_STACK_LINE(954)
							if ((tmp50)){
								HX_STACK_LINE(954)
								::String tmp51 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(954)
								::String tmp52 = (tmp51 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(954)
								HX_STACK_DO_THROW(tmp52);
							}
						}
						HX_STACK_LINE(954)
						{
							HX_STACK_LINE(954)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(954)
							bool tmp49 = _this->_immutable;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(954)
							if ((tmp49)){
								HX_STACK_LINE(954)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(954)
							bool tmp50 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(954)
							if ((tmp50)){
								HX_STACK_LINE(954)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(954)
						bool tmp49 = (nx != nx);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(954)
						bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(954)
						bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(954)
						if ((tmp50)){
							HX_STACK_LINE(954)
							tmp51 = (ny != ny);
						}
						else{
							HX_STACK_LINE(954)
							tmp51 = true;
						}
						HX_STACK_LINE(954)
						if ((tmp51)){
							HX_STACK_LINE(954)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
						}
						HX_STACK_LINE(954)
						Float tmp52;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(954)
						{
							HX_STACK_LINE(954)
							{
								HX_STACK_LINE(954)
								bool tmp53 = (ret != null());		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(954)
								bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(954)
								if ((tmp53)){
									HX_STACK_LINE(954)
									tmp54 = ret->zpp_disp;
								}
								else{
									HX_STACK_LINE(954)
									tmp54 = false;
								}
								HX_STACK_LINE(954)
								if ((tmp54)){
									HX_STACK_LINE(954)
									::String tmp55 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(954)
									::String tmp56 = (tmp55 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(954)
									HX_STACK_DO_THROW(tmp56);
								}
							}
							HX_STACK_LINE(954)
							{
								HX_STACK_LINE(954)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(954)
								bool tmp53 = (_this->_validate != null());		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(954)
								if ((tmp53)){
									HX_STACK_LINE(954)
									_this->_validate();
								}
							}
							HX_STACK_LINE(954)
							tmp52 = ret->zpp_inner->x;
						}
						HX_STACK_LINE(954)
						Float tmp53 = nx;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(954)
						bool tmp54 = (tmp52 == tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(954)
						bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(954)
						if ((tmp54)){
							HX_STACK_LINE(954)
							Float tmp56;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(954)
							{
								HX_STACK_LINE(954)
								{
									HX_STACK_LINE(954)
									bool tmp57 = (ret != null());		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(954)
									bool tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(954)
									bool tmp59;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(954)
									bool tmp60 = tmp58;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(954)
									if ((tmp60)){
										HX_STACK_LINE(954)
										tmp59 = ret->zpp_disp;
									}
									else{
										HX_STACK_LINE(954)
										tmp59 = false;
									}
									HX_STACK_LINE(954)
									bool tmp61 = tmp59;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(954)
									if ((tmp61)){
										HX_STACK_LINE(954)
										::String tmp62 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(954)
										::String tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(954)
										::String tmp64 = (tmp63 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(954)
										::String tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(954)
										::String tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(954)
										HX_STACK_DO_THROW(tmp66);
									}
								}
								HX_STACK_LINE(954)
								{
									HX_STACK_LINE(954)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(954)
									bool tmp57 = (_this->_validate != null());		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(954)
									bool tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(954)
									bool tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(954)
									if ((tmp59)){
										HX_STACK_LINE(954)
										_this->_validate();
									}
								}
								HX_STACK_LINE(954)
								Float tmp57 = ret->zpp_inner->y;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(954)
								tmp56 = tmp57;
							}
							HX_STACK_LINE(954)
							Float tmp57 = ny;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(954)
							tmp55 = (tmp56 == tmp57);
						}
						else{
							HX_STACK_LINE(954)
							tmp55 = false;
						}
						HX_STACK_LINE(954)
						bool tmp56 = !(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(954)
						if ((tmp56)){
							HX_STACK_LINE(954)
							{
								HX_STACK_LINE(954)
								ret->zpp_inner->x = nx;
								HX_STACK_LINE(954)
								ret->zpp_inner->y = ny;
								HX_STACK_LINE(954)
								{
								}
							}
							HX_STACK_LINE(954)
							{
								HX_STACK_LINE(954)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(954)
								bool tmp57 = (_this->_invalidate != null());		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(954)
								if ((tmp57)){
									HX_STACK_LINE(954)
									::zpp_nape::geom::ZPP_Vec2 tmp58 = _this;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(954)
									_this->_invalidate(tmp58);
								}
							}
						}
						HX_STACK_LINE(954)
						ret;
					}
					HX_STACK_LINE(954)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(954)
					tmp44 = ret;
				}
				HX_STACK_LINE(954)
				Float tmp45 = t0;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(954)
				::nape::shape::Shape tmp46 = c->outer;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(954)
				::nape::geom::RayResult tmp47 = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::getRay(tmp44,tmp45,false,tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(954)
				::nape::geom::RayResult res = tmp47;		HX_STACK_VAR(res,"res");
				HX_STACK_LINE(955)
				{
					HX_STACK_LINE(956)
					::zpp_nape::util::ZNPNode_RayResult pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(957)
					{
						HX_STACK_LINE(958)
						::zpp_nape::util::ZNPList_RayResult tmp48 = list->zpp_inner->inner;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(958)
						::zpp_nape::util::ZNPNode_RayResult cx_ite = tmp48->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(959)
						while((true)){
							HX_STACK_LINE(959)
							bool tmp49 = (cx_ite != null());		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(959)
							bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(959)
							if ((tmp50)){
								HX_STACK_LINE(959)
								break;
							}
							HX_STACK_LINE(960)
							::nape::geom::RayResult j = cx_ite->elt;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(961)
							{
								HX_STACK_LINE(962)
								Float tmp51;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(962)
								{
									HX_STACK_LINE(962)
									{
										HX_STACK_LINE(962)
										::zpp_nape::geom::ZPP_ConvexRayResult tmp52 = res->zpp_inner->next;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(962)
										bool tmp53 = (tmp52 != null());		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(962)
										if ((tmp53)){
											HX_STACK_LINE(962)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
										}
									}
									HX_STACK_LINE(962)
									tmp51 = res->zpp_inner->toiDistance;
								}
								HX_STACK_LINE(962)
								Float tmp52;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(962)
								{
									HX_STACK_LINE(962)
									{
										HX_STACK_LINE(962)
										::zpp_nape::geom::ZPP_ConvexRayResult tmp53 = j->zpp_inner->next;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(962)
										bool tmp54 = (tmp53 != null());		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(962)
										if ((tmp54)){
											HX_STACK_LINE(962)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
										}
									}
									HX_STACK_LINE(962)
									tmp52 = j->zpp_inner->toiDistance;
								}
								HX_STACK_LINE(962)
								bool tmp53 = (tmp51 < tmp52);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(962)
								if ((tmp53)){
									HX_STACK_LINE(962)
									break;
								}
								HX_STACK_LINE(963)
								pre = cx_ite;
							}
							HX_STACK_LINE(965)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(968)
					{
						HX_STACK_LINE(968)
						::zpp_nape::util::ZNPList_RayResult tmp48 = list->zpp_inner->inner;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(968)
						::zpp_nape::util::ZNPList_RayResult _this = tmp48;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(968)
						::zpp_nape::util::ZNPNode_RayResult tmp49;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(968)
						{
							HX_STACK_LINE(968)
							::zpp_nape::util::ZNPNode_RayResult ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(968)
							{
								HX_STACK_LINE(968)
								::zpp_nape::util::ZNPNode_RayResult tmp50 = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(968)
								bool tmp51 = (tmp50 == null());		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(968)
								if ((tmp51)){
									HX_STACK_LINE(968)
									::zpp_nape::util::ZNPNode_RayResult tmp52 = ::zpp_nape::util::ZNPNode_RayResult_obj::__new();		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(968)
									ret = tmp52;
								}
								else{
									HX_STACK_LINE(968)
									::zpp_nape::util::ZNPNode_RayResult tmp52 = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(968)
									ret = tmp52;
									HX_STACK_LINE(968)
									::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = ret->next;
									HX_STACK_LINE(968)
									ret->next = null();
								}
								HX_STACK_LINE(968)
								Dynamic();
							}
							HX_STACK_LINE(968)
							ret->elt = res;
							HX_STACK_LINE(968)
							tmp49 = ret;
						}
						HX_STACK_LINE(968)
						::zpp_nape::util::ZNPNode_RayResult temp = tmp49;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(968)
						bool tmp50 = (pre == null());		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(968)
						if ((tmp50)){
							HX_STACK_LINE(968)
							temp->next = _this->head;
							HX_STACK_LINE(968)
							_this->head = temp;
						}
						else{
							HX_STACK_LINE(968)
							temp->next = pre->next;
							HX_STACK_LINE(968)
							pre->next = temp;
						}
						HX_STACK_LINE(968)
						bool tmp51 = _this->modified = true;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(968)
						_this->pushmod = tmp51;
						HX_STACK_LINE(968)
						(_this->length)++;
						HX_STACK_LINE(968)
						temp;
					}
				}
			}
			HX_STACK_LINE(971)
			bool tmp44 = (t1 > (int)0);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(971)
			bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(971)
			bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(971)
			if ((tmp45)){
				HX_STACK_LINE(971)
				Float tmp47 = t1;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(971)
				Float tmp48 = this->maxdist;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(971)
				Float tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(971)
				Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(971)
				tmp46 = (tmp47 <= tmp50);
			}
			else{
				HX_STACK_LINE(971)
				tmp46 = false;
			}
			HX_STACK_LINE(971)
			bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(971)
			if ((tmp46)){
				HX_STACK_LINE(971)
				tmp47 = inner;
			}
			else{
				HX_STACK_LINE(971)
				tmp47 = false;
			}
			HX_STACK_LINE(971)
			if ((tmp47)){
				HX_STACK_LINE(972)
				Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
				HX_STACK_LINE(973)
				Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
				HX_STACK_LINE(974)
				{
					HX_STACK_LINE(975)
					Float tmp48 = this->originx;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(975)
					nx = tmp48;
					HX_STACK_LINE(976)
					Float tmp49 = this->originy;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(976)
					ny = tmp49;
					HX_STACK_LINE(985)
					{
					}
				}
				HX_STACK_LINE(994)
				{
					HX_STACK_LINE(995)
					Float t = t1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1004)
					Float tmp48 = this->dirx;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(1004)
					Float tmp49 = t;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(1004)
					Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(1004)
					hx::AddEq(nx,tmp50);
					HX_STACK_LINE(1005)
					Float tmp51 = this->diry;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(1005)
					Float tmp52 = t;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(1005)
					Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(1005)
					hx::AddEq(ny,tmp53);
				}
				HX_STACK_LINE(1007)
				{
					HX_STACK_LINE(1008)
					Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1017)
					Float tmp48 = (c->worldCOMx * t);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(1017)
					hx::SubEq(nx,tmp48);
					HX_STACK_LINE(1018)
					Float tmp49 = (c->worldCOMy * t);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(1018)
					hx::SubEq(ny,tmp49);
				}
				HX_STACK_LINE(1020)
				{
					HX_STACK_LINE(1021)
					Float tmp48 = (nx * nx);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(1021)
					Float tmp49 = (ny * ny);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(1021)
					Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(1021)
					Float d = tmp50;		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(1030)
					Float tmp51 = d;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(1030)
					Float tmp52 = ::Math_obj::sqrt(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(1030)
					Float tmp53 = (Float(((Float)1.0)) / Float(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(1030)
					Float imag = tmp53;		HX_STACK_VAR(imag,"imag");
					HX_STACK_LINE(1031)
					{
						HX_STACK_LINE(1032)
						Float t = imag;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1041)
						hx::MultEq(nx,t);
						HX_STACK_LINE(1042)
						hx::MultEq(ny,t);
					}
				}
				HX_STACK_LINE(1045)
				{
					HX_STACK_LINE(1046)
					Float tmp48 = nx;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(1046)
					Float tmp49 = -(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(1046)
					nx = tmp49;
					HX_STACK_LINE(1047)
					Float tmp50 = ny;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(1047)
					Float tmp51 = -(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(1047)
					ny = tmp51;
				}
				HX_STACK_LINE(1049)
				::nape::geom::Vec2 tmp48;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(1049)
				{
					HX_STACK_LINE(1049)
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(1049)
					bool tmp49 = (nx != nx);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(1049)
					bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(1049)
					bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(1049)
					if ((tmp50)){
						HX_STACK_LINE(1049)
						tmp51 = (ny != ny);
					}
					else{
						HX_STACK_LINE(1049)
						tmp51 = true;
					}
					HX_STACK_LINE(1049)
					if ((tmp51)){
						HX_STACK_LINE(1049)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(1049)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1049)
					{
						HX_STACK_LINE(1049)
						::nape::geom::Vec2 tmp52 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1049)
						bool tmp53 = (tmp52 == null());		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1049)
						if ((tmp53)){
							HX_STACK_LINE(1049)
							::nape::geom::Vec2 tmp54 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1049)
							ret = tmp54;
						}
						else{
							HX_STACK_LINE(1049)
							::nape::geom::Vec2 tmp54 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1049)
							ret = tmp54;
							HX_STACK_LINE(1049)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
							HX_STACK_LINE(1049)
							ret->zpp_pool = null();
							HX_STACK_LINE(1049)
							ret->zpp_disp = false;
							HX_STACK_LINE(1049)
							::nape::geom::Vec2 tmp55 = ret;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1049)
							::nape::geom::Vec2 tmp56 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1049)
							bool tmp57 = (tmp55 == tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1049)
							if ((tmp57)){
								HX_STACK_LINE(1049)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
							}
						}
					}
					HX_STACK_LINE(1049)
					bool tmp52 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(1049)
					if ((tmp52)){
						HX_STACK_LINE(1049)
						::zpp_nape::geom::ZPP_Vec2 tmp53;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1049)
						{
							HX_STACK_LINE(1049)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(1049)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(1049)
							{
								HX_STACK_LINE(1049)
								::zpp_nape::geom::ZPP_Vec2 tmp54 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(1049)
								bool tmp55 = (tmp54 == null());		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(1049)
								if ((tmp55)){
									HX_STACK_LINE(1049)
									::zpp_nape::geom::ZPP_Vec2 tmp56 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(1049)
									ret1 = tmp56;
								}
								else{
									HX_STACK_LINE(1049)
									::zpp_nape::geom::ZPP_Vec2 tmp56 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(1049)
									ret1 = tmp56;
									HX_STACK_LINE(1049)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(1049)
									ret1->next = null();
								}
								HX_STACK_LINE(1049)
								ret1->weak = false;
							}
							HX_STACK_LINE(1049)
							ret1->_immutable = immutable;
							HX_STACK_LINE(1049)
							{
								HX_STACK_LINE(1049)
								ret1->x = nx;
								HX_STACK_LINE(1049)
								ret1->y = ny;
								HX_STACK_LINE(1049)
								{
								}
							}
							HX_STACK_LINE(1049)
							tmp53 = ret1;
						}
						HX_STACK_LINE(1049)
						ret->zpp_inner = tmp53;
						HX_STACK_LINE(1049)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1049)
						{
							HX_STACK_LINE(1049)
							bool tmp53 = (ret != null());		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1049)
							bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1049)
							if ((tmp53)){
								HX_STACK_LINE(1049)
								tmp54 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(1049)
								tmp54 = false;
							}
							HX_STACK_LINE(1049)
							if ((tmp54)){
								HX_STACK_LINE(1049)
								::String tmp55 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(1049)
								::String tmp56 = (tmp55 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(1049)
								HX_STACK_DO_THROW(tmp56);
							}
						}
						HX_STACK_LINE(1049)
						{
							HX_STACK_LINE(1049)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1049)
							bool tmp53 = _this->_immutable;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1049)
							if ((tmp53)){
								HX_STACK_LINE(1049)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(1049)
							bool tmp54 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1049)
							if ((tmp54)){
								HX_STACK_LINE(1049)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1049)
						bool tmp53 = (nx != nx);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1049)
						bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(1049)
						bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(1049)
						if ((tmp54)){
							HX_STACK_LINE(1049)
							tmp55 = (ny != ny);
						}
						else{
							HX_STACK_LINE(1049)
							tmp55 = true;
						}
						HX_STACK_LINE(1049)
						if ((tmp55)){
							HX_STACK_LINE(1049)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
						}
						HX_STACK_LINE(1049)
						Float tmp56;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(1049)
						{
							HX_STACK_LINE(1049)
							{
								HX_STACK_LINE(1049)
								bool tmp57 = (ret != null());		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(1049)
								bool tmp58;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(1049)
								if ((tmp57)){
									HX_STACK_LINE(1049)
									tmp58 = ret->zpp_disp;
								}
								else{
									HX_STACK_LINE(1049)
									tmp58 = false;
								}
								HX_STACK_LINE(1049)
								if ((tmp58)){
									HX_STACK_LINE(1049)
									::String tmp59 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(1049)
									::String tmp60 = (tmp59 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(1049)
									HX_STACK_DO_THROW(tmp60);
								}
							}
							HX_STACK_LINE(1049)
							{
								HX_STACK_LINE(1049)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1049)
								bool tmp57 = (_this->_validate != null());		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(1049)
								if ((tmp57)){
									HX_STACK_LINE(1049)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1049)
							tmp56 = ret->zpp_inner->x;
						}
						HX_STACK_LINE(1049)
						Float tmp57 = nx;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(1049)
						bool tmp58 = (tmp56 == tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(1049)
						bool tmp59;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(1049)
						if ((tmp58)){
							HX_STACK_LINE(1049)
							Float tmp60;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1049)
							{
								HX_STACK_LINE(1049)
								{
									HX_STACK_LINE(1049)
									bool tmp61 = (ret != null());		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(1049)
									bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(1049)
									bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(1049)
									bool tmp64 = tmp62;		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(1049)
									if ((tmp64)){
										HX_STACK_LINE(1049)
										tmp63 = ret->zpp_disp;
									}
									else{
										HX_STACK_LINE(1049)
										tmp63 = false;
									}
									HX_STACK_LINE(1049)
									bool tmp65 = tmp63;		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(1049)
									if ((tmp65)){
										HX_STACK_LINE(1049)
										::String tmp66 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(1049)
										::String tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(1049)
										::String tmp68 = (tmp67 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(1049)
										::String tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(1049)
										::String tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(1049)
										HX_STACK_DO_THROW(tmp70);
									}
								}
								HX_STACK_LINE(1049)
								{
									HX_STACK_LINE(1049)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1049)
									bool tmp61 = (_this->_validate != null());		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(1049)
									bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(1049)
									bool tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(1049)
									if ((tmp63)){
										HX_STACK_LINE(1049)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1049)
								Float tmp61 = ret->zpp_inner->y;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(1049)
								tmp60 = tmp61;
							}
							HX_STACK_LINE(1049)
							Float tmp61 = ny;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1049)
							tmp59 = (tmp60 == tmp61);
						}
						else{
							HX_STACK_LINE(1049)
							tmp59 = false;
						}
						HX_STACK_LINE(1049)
						bool tmp60 = !(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(1049)
						if ((tmp60)){
							HX_STACK_LINE(1049)
							{
								HX_STACK_LINE(1049)
								ret->zpp_inner->x = nx;
								HX_STACK_LINE(1049)
								ret->zpp_inner->y = ny;
								HX_STACK_LINE(1049)
								{
								}
							}
							HX_STACK_LINE(1049)
							{
								HX_STACK_LINE(1049)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1049)
								bool tmp61 = (_this->_invalidate != null());		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(1049)
								if ((tmp61)){
									HX_STACK_LINE(1049)
									::zpp_nape::geom::ZPP_Vec2 tmp62 = _this;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(1049)
									_this->_invalidate(tmp62);
								}
							}
						}
						HX_STACK_LINE(1049)
						ret;
					}
					HX_STACK_LINE(1049)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1049)
					tmp48 = ret;
				}
				HX_STACK_LINE(1049)
				Float tmp49 = t1;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(1049)
				::nape::shape::Shape tmp50 = c->outer;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1049)
				::nape::geom::RayResult tmp51 = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::getRay(tmp48,tmp49,true,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1049)
				::nape::geom::RayResult res = tmp51;		HX_STACK_VAR(res,"res");
				HX_STACK_LINE(1050)
				{
					HX_STACK_LINE(1051)
					::zpp_nape::util::ZNPNode_RayResult pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(1052)
					{
						HX_STACK_LINE(1053)
						::zpp_nape::util::ZNPList_RayResult tmp52 = list->zpp_inner->inner;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1053)
						::zpp_nape::util::ZNPNode_RayResult cx_ite = tmp52->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(1054)
						while((true)){
							HX_STACK_LINE(1054)
							bool tmp53 = (cx_ite != null());		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1054)
							bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1054)
							if ((tmp54)){
								HX_STACK_LINE(1054)
								break;
							}
							HX_STACK_LINE(1055)
							::nape::geom::RayResult j = cx_ite->elt;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(1056)
							{
								HX_STACK_LINE(1057)
								Float tmp55;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(1057)
								{
									HX_STACK_LINE(1057)
									{
										HX_STACK_LINE(1057)
										::zpp_nape::geom::ZPP_ConvexRayResult tmp56 = res->zpp_inner->next;		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(1057)
										bool tmp57 = (tmp56 != null());		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(1057)
										if ((tmp57)){
											HX_STACK_LINE(1057)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
										}
									}
									HX_STACK_LINE(1057)
									tmp55 = res->zpp_inner->toiDistance;
								}
								HX_STACK_LINE(1057)
								Float tmp56;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(1057)
								{
									HX_STACK_LINE(1057)
									{
										HX_STACK_LINE(1057)
										::zpp_nape::geom::ZPP_ConvexRayResult tmp57 = j->zpp_inner->next;		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(1057)
										bool tmp58 = (tmp57 != null());		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(1057)
										if ((tmp58)){
											HX_STACK_LINE(1057)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
										}
									}
									HX_STACK_LINE(1057)
									tmp56 = j->zpp_inner->toiDistance;
								}
								HX_STACK_LINE(1057)
								bool tmp57 = (tmp55 < tmp56);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(1057)
								if ((tmp57)){
									HX_STACK_LINE(1057)
									break;
								}
								HX_STACK_LINE(1058)
								pre = cx_ite;
							}
							HX_STACK_LINE(1060)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(1063)
					{
						HX_STACK_LINE(1063)
						::zpp_nape::util::ZNPList_RayResult tmp52 = list->zpp_inner->inner;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1063)
						::zpp_nape::util::ZNPList_RayResult _this = tmp52;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1063)
						::zpp_nape::util::ZNPNode_RayResult tmp53;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1063)
						{
							HX_STACK_LINE(1063)
							::zpp_nape::util::ZNPNode_RayResult ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(1063)
							{
								HX_STACK_LINE(1063)
								::zpp_nape::util::ZNPNode_RayResult tmp54 = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(1063)
								bool tmp55 = (tmp54 == null());		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(1063)
								if ((tmp55)){
									HX_STACK_LINE(1063)
									::zpp_nape::util::ZNPNode_RayResult tmp56 = ::zpp_nape::util::ZNPNode_RayResult_obj::__new();		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(1063)
									ret = tmp56;
								}
								else{
									HX_STACK_LINE(1063)
									::zpp_nape::util::ZNPNode_RayResult tmp56 = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(1063)
									ret = tmp56;
									HX_STACK_LINE(1063)
									::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = ret->next;
									HX_STACK_LINE(1063)
									ret->next = null();
								}
								HX_STACK_LINE(1063)
								Dynamic();
							}
							HX_STACK_LINE(1063)
							ret->elt = res;
							HX_STACK_LINE(1063)
							tmp53 = ret;
						}
						HX_STACK_LINE(1063)
						::zpp_nape::util::ZNPNode_RayResult temp = tmp53;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(1063)
						bool tmp54 = (pre == null());		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(1063)
						if ((tmp54)){
							HX_STACK_LINE(1063)
							temp->next = _this->head;
							HX_STACK_LINE(1063)
							_this->head = temp;
						}
						else{
							HX_STACK_LINE(1063)
							temp->next = pre->next;
							HX_STACK_LINE(1063)
							pre->next = temp;
						}
						HX_STACK_LINE(1063)
						bool tmp55 = _this->modified = true;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(1063)
						_this->pushmod = tmp55;
						HX_STACK_LINE(1063)
						(_this->length)++;
						HX_STACK_LINE(1063)
						temp;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_Ray_obj,circlesect2,(void))

::nape::geom::RayResult ZPP_Ray_obj::polysect( ::zpp_nape::shape::ZPP_Polygon p,bool inner,Float mint){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","polysect",0xdb85cb49,"zpp_nape.geom.ZPP_Ray.polysect","zpp_nape/geom/Ray.hx",1068,0x908d5ea5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(inner,"inner")
	HX_STACK_ARG(mint,"mint")
	HX_STACK_LINE(1069)
	Float min = mint;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(1070)
	::zpp_nape::shape::ZPP_Edge edge = null();		HX_STACK_VAR(edge,"edge");
	HX_STACK_LINE(1071)
	::zpp_nape::util::ZNPNode_ZPP_Edge tmp = p->edges->head;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1071)
	::zpp_nape::util::ZNPNode_ZPP_Edge ei = tmp;		HX_STACK_VAR(ei,"ei");
	HX_STACK_LINE(1072)
	{
		HX_STACK_LINE(1073)
		bool cx_cont = true;		HX_STACK_VAR(cx_cont,"cx_cont");
		HX_STACK_LINE(1074)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = p->gverts->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1074)
		::zpp_nape::geom::ZPP_Vec2 cx_itei = tmp1;		HX_STACK_VAR(cx_itei,"cx_itei");
		HX_STACK_LINE(1075)
		::zpp_nape::geom::ZPP_Vec2 u = cx_itei;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(1076)
		::zpp_nape::geom::ZPP_Vec2 cx_itej = cx_itei->next;		HX_STACK_VAR(cx_itej,"cx_itej");
		HX_STACK_LINE(1077)
		while((true)){
			HX_STACK_LINE(1077)
			bool tmp2 = (cx_itej != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1077)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1077)
			if ((tmp3)){
				HX_STACK_LINE(1077)
				break;
			}
			HX_STACK_LINE(1078)
			::zpp_nape::geom::ZPP_Vec2 v = cx_itej;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(1079)
			{
				HX_STACK_LINE(1080)
				::zpp_nape::shape::ZPP_Edge e = ei->elt;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(1081)
				bool tmp4 = inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1081)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1081)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1081)
				if ((tmp5)){
					HX_STACK_LINE(1081)
					Float tmp7 = e->gnormx;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1081)
					Float tmp8 = this->dirx;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1081)
					Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1081)
					Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1081)
					Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1081)
					Float tmp12 = e->gnormy;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1081)
					Float tmp13 = this->diry;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1081)
					Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1081)
					Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1081)
					Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1081)
					Float tmp17 = (tmp11 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1081)
					Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1081)
					tmp6 = (tmp18 < (int)0);
				}
				else{
					HX_STACK_LINE(1081)
					tmp6 = true;
				}
				HX_STACK_LINE(1081)
				if ((tmp6)){
					HX_STACK_LINE(1082)
					Float _vx = ((Float)0.0);		HX_STACK_VAR(_vx,"_vx");
					HX_STACK_LINE(1083)
					Float _vy = ((Float)0.0);		HX_STACK_VAR(_vy,"_vy");
					HX_STACK_LINE(1084)
					{
						HX_STACK_LINE(1085)
						Float tmp7 = (v->x - u->x);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1085)
						_vx = tmp7;
						HX_STACK_LINE(1086)
						Float tmp8 = (v->y - u->y);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1086)
						_vy = tmp8;
					}
					HX_STACK_LINE(1088)
					Float _sx = ((Float)0.0);		HX_STACK_VAR(_sx,"_sx");
					HX_STACK_LINE(1089)
					Float _sy = ((Float)0.0);		HX_STACK_VAR(_sy,"_sy");
					HX_STACK_LINE(1090)
					{
						HX_STACK_LINE(1091)
						Float tmp7 = u->x;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1091)
						Float tmp8 = this->originx;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1091)
						Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1091)
						_sx = tmp9;
						HX_STACK_LINE(1092)
						Float tmp10 = u->y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1092)
						Float tmp11 = this->originy;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1092)
						Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1092)
						_sy = tmp12;
					}
					HX_STACK_LINE(1094)
					Float tmp7 = _vy;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1094)
					Float tmp8 = this->dirx;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1094)
					Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1094)
					Float tmp10 = _vx;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1094)
					Float tmp11 = this->diry;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1094)
					Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1094)
					Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1094)
					Float den = tmp13;		HX_STACK_VAR(den,"den");
					HX_STACK_LINE(1095)
					Float tmp14 = (den * den);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1095)
					Float tmp15 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1095)
					bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1095)
					if ((tmp16)){
						HX_STACK_LINE(1096)
						Float tmp17 = (Float((int)1) / Float(den));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1096)
						den = tmp17;
						HX_STACK_LINE(1097)
						Float tmp18 = (_vy * _sx);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1097)
						Float tmp19 = (_vx * _sy);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1097)
						Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1097)
						Float tmp21 = den;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1097)
						Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1097)
						Float sxx = tmp22;		HX_STACK_VAR(sxx,"sxx");
						HX_STACK_LINE(1098)
						bool tmp23 = (sxx > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1098)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1098)
						bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1098)
						if ((tmp24)){
							HX_STACK_LINE(1098)
							tmp25 = (sxx < min);
						}
						else{
							HX_STACK_LINE(1098)
							tmp25 = false;
						}
						HX_STACK_LINE(1098)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1098)
						if ((tmp25)){
							HX_STACK_LINE(1098)
							Float tmp27 = sxx;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1098)
							Float tmp28 = this->maxdist;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1098)
							Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1098)
							tmp26 = (tmp27 <= tmp29);
						}
						else{
							HX_STACK_LINE(1098)
							tmp26 = false;
						}
						HX_STACK_LINE(1098)
						if ((tmp26)){
							HX_STACK_LINE(1099)
							Float tmp27 = this->diry;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1099)
							Float tmp28 = _sx;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1099)
							Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1099)
							Float tmp30 = this->dirx;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1099)
							Float tmp31 = _sy;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1099)
							Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1099)
							Float tmp33 = (tmp29 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1099)
							Float tmp34 = den;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1099)
							Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1099)
							Float txx = tmp35;		HX_STACK_VAR(txx,"txx");
							HX_STACK_LINE(1100)
							Float tmp36 = txx;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1100)
							Float tmp37 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1100)
							Float tmp38 = -(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1100)
							bool tmp39 = (tmp36 > tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1100)
							bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1100)
							if ((tmp39)){
								HX_STACK_LINE(1100)
								Float tmp41 = txx;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1100)
								Float tmp42 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1100)
								Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(1100)
								Float tmp44 = ((int)1 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1100)
								Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1100)
								tmp40 = (tmp41 < tmp45);
							}
							else{
								HX_STACK_LINE(1100)
								tmp40 = false;
							}
							HX_STACK_LINE(1100)
							if ((tmp40)){
								HX_STACK_LINE(1101)
								min = sxx;
								HX_STACK_LINE(1102)
								edge = ei->elt;
							}
						}
					}
				}
				HX_STACK_LINE(1107)
				ei = ei->next;
			}
			HX_STACK_LINE(1109)
			{
				HX_STACK_LINE(1110)
				cx_itei = cx_itej;
				HX_STACK_LINE(1111)
				u = v;
				HX_STACK_LINE(1112)
				cx_itej = cx_itej->next;
			}
		}
		HX_STACK_LINE(1115)
		bool tmp2 = cx_cont;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1115)
		if ((tmp2)){
			HX_STACK_LINE(1116)
			while((true)){
				HX_STACK_LINE(1117)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = p->gverts->next;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1117)
				cx_itej = tmp3;
				HX_STACK_LINE(1118)
				::zpp_nape::geom::ZPP_Vec2 v = cx_itej;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(1119)
				{
					HX_STACK_LINE(1120)
					::zpp_nape::shape::ZPP_Edge e = ei->elt;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(1121)
					bool tmp4 = inner;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1121)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1121)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1121)
					if ((tmp5)){
						HX_STACK_LINE(1121)
						Float tmp7 = e->gnormx;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1121)
						Float tmp8 = this->dirx;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1121)
						Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1121)
						Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1121)
						Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1121)
						Float tmp12 = e->gnormy;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1121)
						Float tmp13 = this->diry;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1121)
						Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1121)
						Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1121)
						Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1121)
						Float tmp17 = (tmp11 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1121)
						Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1121)
						tmp6 = (tmp18 < (int)0);
					}
					else{
						HX_STACK_LINE(1121)
						tmp6 = true;
					}
					HX_STACK_LINE(1121)
					if ((tmp6)){
						HX_STACK_LINE(1122)
						Float _vx = ((Float)0.0);		HX_STACK_VAR(_vx,"_vx");
						HX_STACK_LINE(1123)
						Float _vy = ((Float)0.0);		HX_STACK_VAR(_vy,"_vy");
						HX_STACK_LINE(1124)
						{
							HX_STACK_LINE(1125)
							Float tmp7 = (v->x - u->x);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1125)
							_vx = tmp7;
							HX_STACK_LINE(1126)
							Float tmp8 = (v->y - u->y);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1126)
							_vy = tmp8;
						}
						HX_STACK_LINE(1128)
						Float _sx = ((Float)0.0);		HX_STACK_VAR(_sx,"_sx");
						HX_STACK_LINE(1129)
						Float _sy = ((Float)0.0);		HX_STACK_VAR(_sy,"_sy");
						HX_STACK_LINE(1130)
						{
							HX_STACK_LINE(1131)
							Float tmp7 = u->x;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1131)
							Float tmp8 = this->originx;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1131)
							Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1131)
							_sx = tmp9;
							HX_STACK_LINE(1132)
							Float tmp10 = u->y;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1132)
							Float tmp11 = this->originy;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1132)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1132)
							_sy = tmp12;
						}
						HX_STACK_LINE(1134)
						Float tmp7 = _vy;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1134)
						Float tmp8 = this->dirx;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1134)
						Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1134)
						Float tmp10 = _vx;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1134)
						Float tmp11 = this->diry;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1134)
						Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1134)
						Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1134)
						Float den = tmp13;		HX_STACK_VAR(den,"den");
						HX_STACK_LINE(1135)
						Float tmp14 = (den * den);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1135)
						Float tmp15 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1135)
						bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1135)
						if ((tmp16)){
							HX_STACK_LINE(1136)
							Float tmp17 = (Float((int)1) / Float(den));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1136)
							den = tmp17;
							HX_STACK_LINE(1137)
							Float tmp18 = (_vy * _sx);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1137)
							Float tmp19 = (_vx * _sy);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1137)
							Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1137)
							Float tmp21 = den;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1137)
							Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1137)
							Float sxx = tmp22;		HX_STACK_VAR(sxx,"sxx");
							HX_STACK_LINE(1138)
							bool tmp23 = (sxx > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1138)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1138)
							bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1138)
							if ((tmp24)){
								HX_STACK_LINE(1138)
								tmp25 = (sxx < min);
							}
							else{
								HX_STACK_LINE(1138)
								tmp25 = false;
							}
							HX_STACK_LINE(1138)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1138)
							if ((tmp25)){
								HX_STACK_LINE(1138)
								Float tmp27 = sxx;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1138)
								Float tmp28 = this->maxdist;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1138)
								Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1138)
								tmp26 = (tmp27 <= tmp29);
							}
							else{
								HX_STACK_LINE(1138)
								tmp26 = false;
							}
							HX_STACK_LINE(1138)
							if ((tmp26)){
								HX_STACK_LINE(1139)
								Float tmp27 = this->diry;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1139)
								Float tmp28 = _sx;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1139)
								Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1139)
								Float tmp30 = this->dirx;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1139)
								Float tmp31 = _sy;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1139)
								Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1139)
								Float tmp33 = (tmp29 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1139)
								Float tmp34 = den;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1139)
								Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1139)
								Float txx = tmp35;		HX_STACK_VAR(txx,"txx");
								HX_STACK_LINE(1140)
								Float tmp36 = txx;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1140)
								Float tmp37 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1140)
								Float tmp38 = -(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1140)
								bool tmp39 = (tmp36 > tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1140)
								bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1140)
								if ((tmp39)){
									HX_STACK_LINE(1140)
									Float tmp41 = txx;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1140)
									Float tmp42 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1140)
									Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1140)
									Float tmp44 = ((int)1 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1140)
									Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1140)
									tmp40 = (tmp41 < tmp45);
								}
								else{
									HX_STACK_LINE(1140)
									tmp40 = false;
								}
								HX_STACK_LINE(1140)
								if ((tmp40)){
									HX_STACK_LINE(1141)
									min = sxx;
									HX_STACK_LINE(1142)
									edge = ei->elt;
								}
							}
						}
					}
					HX_STACK_LINE(1147)
					ei = ei->next;
				}
				HX_STACK_LINE(1150)
				bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1116)
				if ((tmp4)){
					HX_STACK_LINE(1116)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(1153)
	bool tmp1 = (edge != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1153)
	if ((tmp1)){
		HX_STACK_LINE(1154)
		Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
		HX_STACK_LINE(1155)
		Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
		HX_STACK_LINE(1156)
		{
			HX_STACK_LINE(1157)
			nx = edge->gnormx;
			HX_STACK_LINE(1158)
			ny = edge->gnormy;
			HX_STACK_LINE(1167)
			{
			}
		}
		HX_STACK_LINE(1176)
		Float tmp2 = nx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1176)
		Float tmp3 = this->dirx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1176)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1176)
		Float tmp5 = ny;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1176)
		Float tmp6 = this->diry;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1176)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1176)
		Float tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1176)
		bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1176)
		bool inner1 = tmp9;		HX_STACK_VAR(inner1,"inner1");
		HX_STACK_LINE(1177)
		bool tmp10 = inner1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1177)
		if ((tmp10)){
			HX_STACK_LINE(1178)
			Float tmp11 = nx;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1178)
			Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1178)
			nx = tmp12;
			HX_STACK_LINE(1179)
			Float tmp13 = ny;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1179)
			Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1179)
			ny = tmp14;
		}
		HX_STACK_LINE(1181)
		::nape::geom::Vec2 tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1181)
		{
			HX_STACK_LINE(1181)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(1181)
			bool tmp12 = (nx != nx);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1181)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1181)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1181)
			if ((tmp13)){
				HX_STACK_LINE(1181)
				tmp14 = (ny != ny);
			}
			else{
				HX_STACK_LINE(1181)
				tmp14 = true;
			}
			HX_STACK_LINE(1181)
			if ((tmp14)){
				HX_STACK_LINE(1181)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(1181)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1181)
			{
				HX_STACK_LINE(1181)
				::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1181)
				bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1181)
				if ((tmp16)){
					HX_STACK_LINE(1181)
					::nape::geom::Vec2 tmp17 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1181)
					ret = tmp17;
				}
				else{
					HX_STACK_LINE(1181)
					::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1181)
					ret = tmp17;
					HX_STACK_LINE(1181)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1181)
					ret->zpp_pool = null();
					HX_STACK_LINE(1181)
					ret->zpp_disp = false;
					HX_STACK_LINE(1181)
					::nape::geom::Vec2 tmp18 = ret;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1181)
					::nape::geom::Vec2 tmp19 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1181)
					bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1181)
					if ((tmp20)){
						HX_STACK_LINE(1181)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(1181)
			bool tmp15 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1181)
			if ((tmp15)){
				HX_STACK_LINE(1181)
				::zpp_nape::geom::ZPP_Vec2 tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1181)
						bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1181)
						if ((tmp18)){
							HX_STACK_LINE(1181)
							::zpp_nape::geom::ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1181)
							ret1 = tmp19;
						}
						else{
							HX_STACK_LINE(1181)
							::zpp_nape::geom::ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1181)
							ret1 = tmp19;
							HX_STACK_LINE(1181)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1181)
							ret1->next = null();
						}
						HX_STACK_LINE(1181)
						ret1->weak = false;
					}
					HX_STACK_LINE(1181)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						ret1->x = nx;
						HX_STACK_LINE(1181)
						ret1->y = ny;
						HX_STACK_LINE(1181)
						{
						}
					}
					HX_STACK_LINE(1181)
					tmp16 = ret1;
				}
				HX_STACK_LINE(1181)
				ret->zpp_inner = tmp16;
				HX_STACK_LINE(1181)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					bool tmp16 = (ret != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1181)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1181)
					if ((tmp16)){
						HX_STACK_LINE(1181)
						tmp17 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(1181)
						tmp17 = false;
					}
					HX_STACK_LINE(1181)
					if ((tmp17)){
						HX_STACK_LINE(1181)
						::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1181)
						::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1181)
						HX_STACK_DO_THROW(tmp19);
					}
				}
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1181)
					bool tmp16 = _this->_immutable;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1181)
					if ((tmp16)){
						HX_STACK_LINE(1181)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1181)
					bool tmp17 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1181)
					if ((tmp17)){
						HX_STACK_LINE(1181)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1181)
				bool tmp16 = (nx != nx);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1181)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1181)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1181)
				if ((tmp17)){
					HX_STACK_LINE(1181)
					tmp18 = (ny != ny);
				}
				else{
					HX_STACK_LINE(1181)
					tmp18 = true;
				}
				HX_STACK_LINE(1181)
				if ((tmp18)){
					HX_STACK_LINE(1181)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(1181)
				Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1181)
				{
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						bool tmp20 = (ret != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1181)
						bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1181)
						if ((tmp20)){
							HX_STACK_LINE(1181)
							tmp21 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(1181)
							tmp21 = false;
						}
						HX_STACK_LINE(1181)
						if ((tmp21)){
							HX_STACK_LINE(1181)
							::String tmp22 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1181)
							::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1181)
							HX_STACK_DO_THROW(tmp23);
						}
					}
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1181)
						bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1181)
						if ((tmp20)){
							HX_STACK_LINE(1181)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1181)
					tmp19 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(1181)
				Float tmp20 = nx;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1181)
				bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1181)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1181)
				if ((tmp21)){
					HX_STACK_LINE(1181)
					Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						{
							HX_STACK_LINE(1181)
							bool tmp24 = (ret != null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1181)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1181)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1181)
							bool tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1181)
							if ((tmp27)){
								HX_STACK_LINE(1181)
								tmp26 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(1181)
								tmp26 = false;
							}
							HX_STACK_LINE(1181)
							bool tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1181)
							if ((tmp28)){
								HX_STACK_LINE(1181)
								::String tmp29 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1181)
								::String tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1181)
								::String tmp31 = (tmp30 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1181)
								::String tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1181)
								::String tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1181)
								HX_STACK_DO_THROW(tmp33);
							}
						}
						HX_STACK_LINE(1181)
						{
							HX_STACK_LINE(1181)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1181)
							bool tmp24 = (_this->_validate != null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1181)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1181)
							bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1181)
							if ((tmp26)){
								HX_STACK_LINE(1181)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1181)
						Float tmp24 = ret->zpp_inner->y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1181)
						tmp23 = tmp24;
					}
					HX_STACK_LINE(1181)
					Float tmp24 = ny;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1181)
					tmp22 = (tmp23 == tmp24);
				}
				else{
					HX_STACK_LINE(1181)
					tmp22 = false;
				}
				HX_STACK_LINE(1181)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1181)
				if ((tmp23)){
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						ret->zpp_inner->x = nx;
						HX_STACK_LINE(1181)
						ret->zpp_inner->y = ny;
						HX_STACK_LINE(1181)
						{
						}
					}
					HX_STACK_LINE(1181)
					{
						HX_STACK_LINE(1181)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1181)
						bool tmp24 = (_this->_invalidate != null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1181)
						if ((tmp24)){
							HX_STACK_LINE(1181)
							::zpp_nape::geom::ZPP_Vec2 tmp25 = _this;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1181)
							_this->_invalidate(tmp25);
						}
					}
				}
				HX_STACK_LINE(1181)
				ret;
			}
			HX_STACK_LINE(1181)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1181)
			tmp11 = ret;
		}
		HX_STACK_LINE(1181)
		Float tmp12 = min;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1181)
		bool tmp13 = inner1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1181)
		::nape::shape::Shape tmp14 = p->outer;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1181)
		::nape::geom::RayResult tmp15 = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::getRay(tmp11,tmp12,tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1181)
		return tmp15;
	}
	else{
		HX_STACK_LINE(1183)
		return null();
	}
	HX_STACK_LINE(1153)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_Ray_obj,polysect,return )

Void ZPP_Ray_obj::polysect2( ::zpp_nape::shape::ZPP_Polygon p,bool inner,::nape::geom::RayResultList list){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Ray","polysect2",0x398c14c9,"zpp_nape.geom.ZPP_Ray.polysect2","zpp_nape/geom/Ray.hx",1185,0x908d5ea5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(inner,"inner")
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(1186)
		Float tmp = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1186)
		Float min = tmp;		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(1187)
		Float max = ((Float)-1.0);		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(1188)
		::zpp_nape::shape::ZPP_Edge edge = null();		HX_STACK_VAR(edge,"edge");
		HX_STACK_LINE(1189)
		::zpp_nape::shape::ZPP_Edge edgemax = null();		HX_STACK_VAR(edgemax,"edgemax");
		HX_STACK_LINE(1190)
		::zpp_nape::util::ZNPNode_ZPP_Edge tmp1 = p->edges->head;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1190)
		::zpp_nape::util::ZNPNode_ZPP_Edge ei = tmp1;		HX_STACK_VAR(ei,"ei");
		HX_STACK_LINE(1191)
		{
			HX_STACK_LINE(1192)
			bool cx_cont = true;		HX_STACK_VAR(cx_cont,"cx_cont");
			HX_STACK_LINE(1193)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = p->gverts->next;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1193)
			::zpp_nape::geom::ZPP_Vec2 cx_itei = tmp2;		HX_STACK_VAR(cx_itei,"cx_itei");
			HX_STACK_LINE(1194)
			::zpp_nape::geom::ZPP_Vec2 u = cx_itei;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(1195)
			::zpp_nape::geom::ZPP_Vec2 cx_itej = cx_itei->next;		HX_STACK_VAR(cx_itej,"cx_itej");
			HX_STACK_LINE(1196)
			while((true)){
				HX_STACK_LINE(1196)
				bool tmp3 = (cx_itej != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1196)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1196)
				if ((tmp4)){
					HX_STACK_LINE(1196)
					break;
				}
				HX_STACK_LINE(1197)
				::zpp_nape::geom::ZPP_Vec2 v = cx_itej;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(1198)
				{
					HX_STACK_LINE(1199)
					::zpp_nape::shape::ZPP_Edge e = ei->elt;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(1200)
					bool tmp5 = inner;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1200)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1200)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1200)
					if ((tmp6)){
						HX_STACK_LINE(1200)
						Float tmp8 = e->gnormx;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1200)
						Float tmp9 = this->dirx;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1200)
						Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1200)
						Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1200)
						Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1200)
						Float tmp13 = e->gnormy;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1200)
						Float tmp14 = this->diry;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1200)
						Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1200)
						Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1200)
						Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1200)
						Float tmp18 = (tmp12 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1200)
						Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1200)
						tmp7 = (tmp19 < (int)0);
					}
					else{
						HX_STACK_LINE(1200)
						tmp7 = true;
					}
					HX_STACK_LINE(1200)
					if ((tmp7)){
						HX_STACK_LINE(1201)
						Float _vx = ((Float)0.0);		HX_STACK_VAR(_vx,"_vx");
						HX_STACK_LINE(1202)
						Float _vy = ((Float)0.0);		HX_STACK_VAR(_vy,"_vy");
						HX_STACK_LINE(1203)
						{
							HX_STACK_LINE(1204)
							Float tmp8 = (v->x - u->x);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1204)
							_vx = tmp8;
							HX_STACK_LINE(1205)
							Float tmp9 = (v->y - u->y);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1205)
							_vy = tmp9;
						}
						HX_STACK_LINE(1207)
						Float _sx = ((Float)0.0);		HX_STACK_VAR(_sx,"_sx");
						HX_STACK_LINE(1208)
						Float _sy = ((Float)0.0);		HX_STACK_VAR(_sy,"_sy");
						HX_STACK_LINE(1209)
						{
							HX_STACK_LINE(1210)
							Float tmp8 = u->x;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1210)
							Float tmp9 = this->originx;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1210)
							Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1210)
							_sx = tmp10;
							HX_STACK_LINE(1211)
							Float tmp11 = u->y;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1211)
							Float tmp12 = this->originy;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1211)
							Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1211)
							_sy = tmp13;
						}
						HX_STACK_LINE(1213)
						Float tmp8 = _vy;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1213)
						Float tmp9 = this->dirx;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1213)
						Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1213)
						Float tmp11 = _vx;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1213)
						Float tmp12 = this->diry;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1213)
						Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1213)
						Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1213)
						Float den = tmp14;		HX_STACK_VAR(den,"den");
						HX_STACK_LINE(1214)
						Float tmp15 = (den * den);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1214)
						Float tmp16 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1214)
						bool tmp17 = (tmp15 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1214)
						if ((tmp17)){
							HX_STACK_LINE(1215)
							Float tmp18 = (Float((int)1) / Float(den));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1215)
							den = tmp18;
							HX_STACK_LINE(1216)
							Float tmp19 = (_vy * _sx);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1216)
							Float tmp20 = (_vx * _sy);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1216)
							Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1216)
							Float tmp22 = den;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1216)
							Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1216)
							Float sxx = tmp23;		HX_STACK_VAR(sxx,"sxx");
							HX_STACK_LINE(1217)
							bool tmp24 = (sxx > (int)0);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1217)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1217)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1217)
							if ((tmp25)){
								HX_STACK_LINE(1217)
								Float tmp27 = sxx;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1217)
								Float tmp28 = this->maxdist;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1217)
								Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1217)
								Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1217)
								tmp26 = (tmp27 <= tmp30);
							}
							else{
								HX_STACK_LINE(1217)
								tmp26 = false;
							}
							HX_STACK_LINE(1217)
							bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1217)
							if ((tmp26)){
								HX_STACK_LINE(1217)
								bool tmp28 = (sxx < min);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1217)
								bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1217)
								bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1217)
								bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1217)
								bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1217)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1217)
								if ((tmp33)){
									HX_STACK_LINE(1217)
									tmp27 = (sxx > max);
								}
								else{
									HX_STACK_LINE(1217)
									tmp27 = true;
								}
							}
							else{
								HX_STACK_LINE(1217)
								tmp27 = false;
							}
							HX_STACK_LINE(1217)
							if ((tmp27)){
								HX_STACK_LINE(1218)
								Float tmp28 = this->diry;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1218)
								Float tmp29 = _sx;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1218)
								Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1218)
								Float tmp31 = this->dirx;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1218)
								Float tmp32 = _sy;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1218)
								Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1218)
								Float tmp34 = (tmp30 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1218)
								Float tmp35 = den;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1218)
								Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1218)
								Float txx = tmp36;		HX_STACK_VAR(txx,"txx");
								HX_STACK_LINE(1219)
								Float tmp37 = txx;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1219)
								Float tmp38 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1219)
								Float tmp39 = -(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1219)
								bool tmp40 = (tmp37 > tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1219)
								bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1219)
								if ((tmp40)){
									HX_STACK_LINE(1219)
									Float tmp42 = txx;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1219)
									Float tmp43 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1219)
									Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1219)
									Float tmp45 = ((int)1 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1219)
									Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1219)
									tmp41 = (tmp42 < tmp46);
								}
								else{
									HX_STACK_LINE(1219)
									tmp41 = false;
								}
								HX_STACK_LINE(1219)
								if ((tmp41)){
									HX_STACK_LINE(1220)
									bool tmp42 = (sxx < min);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1220)
									if ((tmp42)){
										HX_STACK_LINE(1221)
										min = sxx;
										HX_STACK_LINE(1222)
										edge = ei->elt;
									}
									HX_STACK_LINE(1224)
									bool tmp43 = (sxx > max);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1224)
									if ((tmp43)){
										HX_STACK_LINE(1225)
										max = sxx;
										HX_STACK_LINE(1226)
										edgemax = ei->elt;
									}
								}
							}
						}
					}
					HX_STACK_LINE(1232)
					ei = ei->next;
				}
				HX_STACK_LINE(1234)
				{
					HX_STACK_LINE(1235)
					cx_itei = cx_itej;
					HX_STACK_LINE(1236)
					u = v;
					HX_STACK_LINE(1237)
					cx_itej = cx_itej->next;
				}
			}
			HX_STACK_LINE(1240)
			bool tmp3 = cx_cont;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1240)
			if ((tmp3)){
				HX_STACK_LINE(1241)
				while((true)){
					HX_STACK_LINE(1242)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = p->gverts->next;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1242)
					cx_itej = tmp4;
					HX_STACK_LINE(1243)
					::zpp_nape::geom::ZPP_Vec2 v = cx_itej;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1244)
					{
						HX_STACK_LINE(1245)
						::zpp_nape::shape::ZPP_Edge e = ei->elt;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(1246)
						bool tmp5 = inner;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1246)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1246)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1246)
						if ((tmp6)){
							HX_STACK_LINE(1246)
							Float tmp8 = e->gnormx;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1246)
							Float tmp9 = this->dirx;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1246)
							Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1246)
							Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1246)
							Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1246)
							Float tmp13 = e->gnormy;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1246)
							Float tmp14 = this->diry;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1246)
							Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1246)
							Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1246)
							Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1246)
							Float tmp18 = (tmp12 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1246)
							Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1246)
							tmp7 = (tmp19 < (int)0);
						}
						else{
							HX_STACK_LINE(1246)
							tmp7 = true;
						}
						HX_STACK_LINE(1246)
						if ((tmp7)){
							HX_STACK_LINE(1247)
							Float _vx = ((Float)0.0);		HX_STACK_VAR(_vx,"_vx");
							HX_STACK_LINE(1248)
							Float _vy = ((Float)0.0);		HX_STACK_VAR(_vy,"_vy");
							HX_STACK_LINE(1249)
							{
								HX_STACK_LINE(1250)
								Float tmp8 = (v->x - u->x);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1250)
								_vx = tmp8;
								HX_STACK_LINE(1251)
								Float tmp9 = (v->y - u->y);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1251)
								_vy = tmp9;
							}
							HX_STACK_LINE(1253)
							Float _sx = ((Float)0.0);		HX_STACK_VAR(_sx,"_sx");
							HX_STACK_LINE(1254)
							Float _sy = ((Float)0.0);		HX_STACK_VAR(_sy,"_sy");
							HX_STACK_LINE(1255)
							{
								HX_STACK_LINE(1256)
								Float tmp8 = u->x;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1256)
								Float tmp9 = this->originx;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1256)
								Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1256)
								_sx = tmp10;
								HX_STACK_LINE(1257)
								Float tmp11 = u->y;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1257)
								Float tmp12 = this->originy;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1257)
								Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1257)
								_sy = tmp13;
							}
							HX_STACK_LINE(1259)
							Float tmp8 = _vy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1259)
							Float tmp9 = this->dirx;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1259)
							Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1259)
							Float tmp11 = _vx;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1259)
							Float tmp12 = this->diry;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1259)
							Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1259)
							Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1259)
							Float den = tmp14;		HX_STACK_VAR(den,"den");
							HX_STACK_LINE(1260)
							Float tmp15 = (den * den);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1260)
							Float tmp16 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1260)
							bool tmp17 = (tmp15 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1260)
							if ((tmp17)){
								HX_STACK_LINE(1261)
								Float tmp18 = (Float((int)1) / Float(den));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1261)
								den = tmp18;
								HX_STACK_LINE(1262)
								Float tmp19 = (_vy * _sx);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1262)
								Float tmp20 = (_vx * _sy);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1262)
								Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1262)
								Float tmp22 = den;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1262)
								Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1262)
								Float sxx = tmp23;		HX_STACK_VAR(sxx,"sxx");
								HX_STACK_LINE(1263)
								bool tmp24 = (sxx > (int)0);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1263)
								bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1263)
								bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1263)
								if ((tmp25)){
									HX_STACK_LINE(1263)
									Float tmp27 = sxx;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1263)
									Float tmp28 = this->maxdist;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1263)
									Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1263)
									Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1263)
									tmp26 = (tmp27 <= tmp30);
								}
								else{
									HX_STACK_LINE(1263)
									tmp26 = false;
								}
								HX_STACK_LINE(1263)
								bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1263)
								if ((tmp26)){
									HX_STACK_LINE(1263)
									bool tmp28 = (sxx < min);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1263)
									bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1263)
									bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1263)
									bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1263)
									bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1263)
									bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1263)
									if ((tmp33)){
										HX_STACK_LINE(1263)
										tmp27 = (sxx > max);
									}
									else{
										HX_STACK_LINE(1263)
										tmp27 = true;
									}
								}
								else{
									HX_STACK_LINE(1263)
									tmp27 = false;
								}
								HX_STACK_LINE(1263)
								if ((tmp27)){
									HX_STACK_LINE(1264)
									Float tmp28 = this->diry;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1264)
									Float tmp29 = _sx;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1264)
									Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1264)
									Float tmp31 = this->dirx;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1264)
									Float tmp32 = _sy;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1264)
									Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1264)
									Float tmp34 = (tmp30 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1264)
									Float tmp35 = den;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1264)
									Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1264)
									Float txx = tmp36;		HX_STACK_VAR(txx,"txx");
									HX_STACK_LINE(1265)
									Float tmp37 = txx;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1265)
									Float tmp38 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1265)
									Float tmp39 = -(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1265)
									bool tmp40 = (tmp37 > tmp39);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1265)
									bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1265)
									if ((tmp40)){
										HX_STACK_LINE(1265)
										Float tmp42 = txx;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(1265)
										Float tmp43 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(1265)
										Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(1265)
										Float tmp45 = ((int)1 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(1265)
										Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(1265)
										tmp41 = (tmp42 < tmp46);
									}
									else{
										HX_STACK_LINE(1265)
										tmp41 = false;
									}
									HX_STACK_LINE(1265)
									if ((tmp41)){
										HX_STACK_LINE(1266)
										bool tmp42 = (sxx < min);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(1266)
										if ((tmp42)){
											HX_STACK_LINE(1267)
											min = sxx;
											HX_STACK_LINE(1268)
											edge = ei->elt;
										}
										HX_STACK_LINE(1270)
										bool tmp43 = (sxx > max);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(1270)
										if ((tmp43)){
											HX_STACK_LINE(1271)
											max = sxx;
											HX_STACK_LINE(1272)
											edgemax = ei->elt;
										}
									}
								}
							}
						}
						HX_STACK_LINE(1278)
						ei = ei->next;
					}
					HX_STACK_LINE(1281)
					bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1241)
					if ((tmp5)){
						HX_STACK_LINE(1241)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(1284)
		bool tmp2 = (edge != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1284)
		if ((tmp2)){
			HX_STACK_LINE(1285)
			Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(1286)
			Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
			HX_STACK_LINE(1287)
			{
				HX_STACK_LINE(1288)
				nx = edge->gnormx;
				HX_STACK_LINE(1289)
				ny = edge->gnormy;
				HX_STACK_LINE(1298)
				{
				}
			}
			HX_STACK_LINE(1307)
			Float tmp3 = nx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1307)
			Float tmp4 = this->dirx;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1307)
			Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1307)
			Float tmp6 = ny;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1307)
			Float tmp7 = this->diry;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1307)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1307)
			Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1307)
			bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1307)
			bool inner1 = tmp10;		HX_STACK_VAR(inner1,"inner1");
			HX_STACK_LINE(1308)
			bool tmp11 = inner1;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1308)
			if ((tmp11)){
				HX_STACK_LINE(1309)
				Float tmp12 = nx;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1309)
				Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1309)
				nx = tmp13;
				HX_STACK_LINE(1310)
				Float tmp14 = ny;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1310)
				Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1310)
				ny = tmp15;
			}
			HX_STACK_LINE(1312)
			::nape::geom::Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1312)
			{
				HX_STACK_LINE(1312)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(1312)
				bool tmp13 = (nx != nx);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1312)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1312)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1312)
				if ((tmp14)){
					HX_STACK_LINE(1312)
					tmp15 = (ny != ny);
				}
				else{
					HX_STACK_LINE(1312)
					tmp15 = true;
				}
				HX_STACK_LINE(1312)
				if ((tmp15)){
					HX_STACK_LINE(1312)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(1312)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1312)
				{
					HX_STACK_LINE(1312)
					::nape::geom::Vec2 tmp16 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1312)
					bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1312)
					if ((tmp17)){
						HX_STACK_LINE(1312)
						::nape::geom::Vec2 tmp18 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1312)
						ret = tmp18;
					}
					else{
						HX_STACK_LINE(1312)
						::nape::geom::Vec2 tmp18 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1312)
						ret = tmp18;
						HX_STACK_LINE(1312)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1312)
						ret->zpp_pool = null();
						HX_STACK_LINE(1312)
						ret->zpp_disp = false;
						HX_STACK_LINE(1312)
						::nape::geom::Vec2 tmp19 = ret;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1312)
						::nape::geom::Vec2 tmp20 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1312)
						bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1312)
						if ((tmp21)){
							HX_STACK_LINE(1312)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
				}
				HX_STACK_LINE(1312)
				bool tmp16 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1312)
				if ((tmp16)){
					HX_STACK_LINE(1312)
					::zpp_nape::geom::ZPP_Vec2 tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1312)
					{
						HX_STACK_LINE(1312)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(1312)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1312)
						{
							HX_STACK_LINE(1312)
							::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1312)
							bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1312)
							if ((tmp19)){
								HX_STACK_LINE(1312)
								::zpp_nape::geom::ZPP_Vec2 tmp20 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1312)
								ret1 = tmp20;
							}
							else{
								HX_STACK_LINE(1312)
								::zpp_nape::geom::ZPP_Vec2 tmp20 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1312)
								ret1 = tmp20;
								HX_STACK_LINE(1312)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(1312)
								ret1->next = null();
							}
							HX_STACK_LINE(1312)
							ret1->weak = false;
						}
						HX_STACK_LINE(1312)
						ret1->_immutable = immutable;
						HX_STACK_LINE(1312)
						{
							HX_STACK_LINE(1312)
							ret1->x = nx;
							HX_STACK_LINE(1312)
							ret1->y = ny;
							HX_STACK_LINE(1312)
							{
							}
						}
						HX_STACK_LINE(1312)
						tmp17 = ret1;
					}
					HX_STACK_LINE(1312)
					ret->zpp_inner = tmp17;
					HX_STACK_LINE(1312)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(1312)
					{
						HX_STACK_LINE(1312)
						bool tmp17 = (ret != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1312)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1312)
						if ((tmp17)){
							HX_STACK_LINE(1312)
							tmp18 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(1312)
							tmp18 = false;
						}
						HX_STACK_LINE(1312)
						if ((tmp18)){
							HX_STACK_LINE(1312)
							::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1312)
							::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1312)
							HX_STACK_DO_THROW(tmp20);
						}
					}
					HX_STACK_LINE(1312)
					{
						HX_STACK_LINE(1312)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1312)
						bool tmp17 = _this->_immutable;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1312)
						if ((tmp17)){
							HX_STACK_LINE(1312)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(1312)
						bool tmp18 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1312)
						if ((tmp18)){
							HX_STACK_LINE(1312)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(1312)
					bool tmp17 = (nx != nx);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1312)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1312)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1312)
					if ((tmp18)){
						HX_STACK_LINE(1312)
						tmp19 = (ny != ny);
					}
					else{
						HX_STACK_LINE(1312)
						tmp19 = true;
					}
					HX_STACK_LINE(1312)
					if ((tmp19)){
						HX_STACK_LINE(1312)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(1312)
					Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1312)
					{
						HX_STACK_LINE(1312)
						{
							HX_STACK_LINE(1312)
							bool tmp21 = (ret != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1312)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1312)
							if ((tmp21)){
								HX_STACK_LINE(1312)
								tmp22 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(1312)
								tmp22 = false;
							}
							HX_STACK_LINE(1312)
							if ((tmp22)){
								HX_STACK_LINE(1312)
								::String tmp23 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1312)
								::String tmp24 = (tmp23 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1312)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(1312)
						{
							HX_STACK_LINE(1312)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1312)
							bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1312)
							if ((tmp21)){
								HX_STACK_LINE(1312)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1312)
						tmp20 = ret->zpp_inner->x;
					}
					HX_STACK_LINE(1312)
					Float tmp21 = nx;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1312)
					bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1312)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1312)
					if ((tmp22)){
						HX_STACK_LINE(1312)
						Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1312)
						{
							HX_STACK_LINE(1312)
							{
								HX_STACK_LINE(1312)
								bool tmp25 = (ret != null());		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1312)
								bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1312)
								bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1312)
								bool tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1312)
								if ((tmp28)){
									HX_STACK_LINE(1312)
									tmp27 = ret->zpp_disp;
								}
								else{
									HX_STACK_LINE(1312)
									tmp27 = false;
								}
								HX_STACK_LINE(1312)
								bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1312)
								if ((tmp29)){
									HX_STACK_LINE(1312)
									::String tmp30 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1312)
									::String tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1312)
									::String tmp32 = (tmp31 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1312)
									::String tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1312)
									::String tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1312)
									HX_STACK_DO_THROW(tmp34);
								}
							}
							HX_STACK_LINE(1312)
							{
								HX_STACK_LINE(1312)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1312)
								bool tmp25 = (_this->_validate != null());		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1312)
								bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1312)
								bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1312)
								if ((tmp27)){
									HX_STACK_LINE(1312)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1312)
							Float tmp25 = ret->zpp_inner->y;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1312)
							tmp24 = tmp25;
						}
						HX_STACK_LINE(1312)
						Float tmp25 = ny;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1312)
						tmp23 = (tmp24 == tmp25);
					}
					else{
						HX_STACK_LINE(1312)
						tmp23 = false;
					}
					HX_STACK_LINE(1312)
					bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1312)
					if ((tmp24)){
						HX_STACK_LINE(1312)
						{
							HX_STACK_LINE(1312)
							ret->zpp_inner->x = nx;
							HX_STACK_LINE(1312)
							ret->zpp_inner->y = ny;
							HX_STACK_LINE(1312)
							{
							}
						}
						HX_STACK_LINE(1312)
						{
							HX_STACK_LINE(1312)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1312)
							bool tmp25 = (_this->_invalidate != null());		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1312)
							if ((tmp25)){
								HX_STACK_LINE(1312)
								::zpp_nape::geom::ZPP_Vec2 tmp26 = _this;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1312)
								_this->_invalidate(tmp26);
							}
						}
					}
					HX_STACK_LINE(1312)
					ret;
				}
				HX_STACK_LINE(1312)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(1312)
				tmp12 = ret;
			}
			HX_STACK_LINE(1312)
			Float tmp13 = min;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1312)
			bool tmp14 = inner1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1312)
			::nape::shape::Shape tmp15 = p->outer;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1312)
			::nape::geom::RayResult tmp16 = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::getRay(tmp12,tmp13,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1312)
			::nape::geom::RayResult ret = tmp16;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1313)
			{
				HX_STACK_LINE(1314)
				::zpp_nape::util::ZNPNode_RayResult pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(1315)
				{
					HX_STACK_LINE(1316)
					::zpp_nape::util::ZNPList_RayResult tmp17 = list->zpp_inner->inner;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1316)
					::zpp_nape::util::ZNPNode_RayResult cx_ite = tmp17->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(1317)
					while((true)){
						HX_STACK_LINE(1317)
						bool tmp18 = (cx_ite != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1317)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1317)
						if ((tmp19)){
							HX_STACK_LINE(1317)
							break;
						}
						HX_STACK_LINE(1318)
						::nape::geom::RayResult j = cx_ite->elt;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1319)
						{
							HX_STACK_LINE(1320)
							Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1320)
							{
								HX_STACK_LINE(1320)
								{
									HX_STACK_LINE(1320)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp21 = ret->zpp_inner->next;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1320)
									bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1320)
									if ((tmp22)){
										HX_STACK_LINE(1320)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
									}
								}
								HX_STACK_LINE(1320)
								tmp20 = ret->zpp_inner->toiDistance;
							}
							HX_STACK_LINE(1320)
							Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1320)
							{
								HX_STACK_LINE(1320)
								{
									HX_STACK_LINE(1320)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp22 = j->zpp_inner->next;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1320)
									bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1320)
									if ((tmp23)){
										HX_STACK_LINE(1320)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
									}
								}
								HX_STACK_LINE(1320)
								tmp21 = j->zpp_inner->toiDistance;
							}
							HX_STACK_LINE(1320)
							bool tmp22 = (tmp20 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1320)
							if ((tmp22)){
								HX_STACK_LINE(1320)
								break;
							}
							HX_STACK_LINE(1321)
							pre = cx_ite;
						}
						HX_STACK_LINE(1323)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(1326)
				{
					HX_STACK_LINE(1326)
					::zpp_nape::util::ZNPList_RayResult tmp17 = list->zpp_inner->inner;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1326)
					::zpp_nape::util::ZNPList_RayResult _this = tmp17;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1326)
					::zpp_nape::util::ZNPNode_RayResult tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1326)
					{
						HX_STACK_LINE(1326)
						::zpp_nape::util::ZNPNode_RayResult ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1326)
						{
							HX_STACK_LINE(1326)
							::zpp_nape::util::ZNPNode_RayResult tmp19 = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1326)
							bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1326)
							if ((tmp20)){
								HX_STACK_LINE(1326)
								::zpp_nape::util::ZNPNode_RayResult tmp21 = ::zpp_nape::util::ZNPNode_RayResult_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1326)
								ret1 = tmp21;
							}
							else{
								HX_STACK_LINE(1326)
								::zpp_nape::util::ZNPNode_RayResult tmp21 = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1326)
								ret1 = tmp21;
								HX_STACK_LINE(1326)
								::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(1326)
								ret1->next = null();
							}
							HX_STACK_LINE(1326)
							Dynamic();
						}
						HX_STACK_LINE(1326)
						ret1->elt = ret;
						HX_STACK_LINE(1326)
						tmp18 = ret1;
					}
					HX_STACK_LINE(1326)
					::zpp_nape::util::ZNPNode_RayResult temp = tmp18;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(1326)
					bool tmp19 = (pre == null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1326)
					if ((tmp19)){
						HX_STACK_LINE(1326)
						temp->next = _this->head;
						HX_STACK_LINE(1326)
						_this->head = temp;
					}
					else{
						HX_STACK_LINE(1326)
						temp->next = pre->next;
						HX_STACK_LINE(1326)
						pre->next = temp;
					}
					HX_STACK_LINE(1326)
					bool tmp20 = _this->modified = true;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1326)
					_this->pushmod = tmp20;
					HX_STACK_LINE(1326)
					(_this->length)++;
					HX_STACK_LINE(1326)
					temp;
				}
			}
		}
		HX_STACK_LINE(1329)
		bool tmp3 = (edgemax != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1329)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1329)
		if ((tmp3)){
			HX_STACK_LINE(1329)
			tmp4 = (edge != edgemax);
		}
		else{
			HX_STACK_LINE(1329)
			tmp4 = false;
		}
		HX_STACK_LINE(1329)
		if ((tmp4)){
			HX_STACK_LINE(1330)
			Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(1331)
			Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
			HX_STACK_LINE(1332)
			{
				HX_STACK_LINE(1333)
				nx = edgemax->gnormx;
				HX_STACK_LINE(1334)
				ny = edgemax->gnormy;
				HX_STACK_LINE(1343)
				{
				}
			}
			HX_STACK_LINE(1352)
			Float tmp5 = nx;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1352)
			Float tmp6 = this->dirx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1352)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1352)
			Float tmp8 = ny;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1352)
			Float tmp9 = this->diry;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1352)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1352)
			Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1352)
			bool tmp12 = (tmp11 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1352)
			bool inner1 = tmp12;		HX_STACK_VAR(inner1,"inner1");
			HX_STACK_LINE(1353)
			bool tmp13 = inner1;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1353)
			if ((tmp13)){
				HX_STACK_LINE(1354)
				Float tmp14 = nx;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1354)
				Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1354)
				nx = tmp15;
				HX_STACK_LINE(1355)
				Float tmp16 = ny;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1355)
				Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1355)
				ny = tmp17;
			}
			HX_STACK_LINE(1357)
			::nape::geom::Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1357)
			{
				HX_STACK_LINE(1357)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(1357)
				bool tmp15 = (nx != nx);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1357)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1357)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1357)
				if ((tmp16)){
					HX_STACK_LINE(1357)
					tmp17 = (ny != ny);
				}
				else{
					HX_STACK_LINE(1357)
					tmp17 = true;
				}
				HX_STACK_LINE(1357)
				if ((tmp17)){
					HX_STACK_LINE(1357)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(1357)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1357)
				{
					HX_STACK_LINE(1357)
					::nape::geom::Vec2 tmp18 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1357)
					bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1357)
					if ((tmp19)){
						HX_STACK_LINE(1357)
						::nape::geom::Vec2 tmp20 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1357)
						ret = tmp20;
					}
					else{
						HX_STACK_LINE(1357)
						::nape::geom::Vec2 tmp20 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1357)
						ret = tmp20;
						HX_STACK_LINE(1357)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1357)
						ret->zpp_pool = null();
						HX_STACK_LINE(1357)
						ret->zpp_disp = false;
						HX_STACK_LINE(1357)
						::nape::geom::Vec2 tmp21 = ret;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1357)
						::nape::geom::Vec2 tmp22 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1357)
						bool tmp23 = (tmp21 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1357)
						if ((tmp23)){
							HX_STACK_LINE(1357)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
				}
				HX_STACK_LINE(1357)
				bool tmp18 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1357)
				if ((tmp18)){
					HX_STACK_LINE(1357)
					::zpp_nape::geom::ZPP_Vec2 tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1357)
					{
						HX_STACK_LINE(1357)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(1357)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							::zpp_nape::geom::ZPP_Vec2 tmp20 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1357)
							bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1357)
							if ((tmp21)){
								HX_STACK_LINE(1357)
								::zpp_nape::geom::ZPP_Vec2 tmp22 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1357)
								ret1 = tmp22;
							}
							else{
								HX_STACK_LINE(1357)
								::zpp_nape::geom::ZPP_Vec2 tmp22 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1357)
								ret1 = tmp22;
								HX_STACK_LINE(1357)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(1357)
								ret1->next = null();
							}
							HX_STACK_LINE(1357)
							ret1->weak = false;
						}
						HX_STACK_LINE(1357)
						ret1->_immutable = immutable;
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							ret1->x = nx;
							HX_STACK_LINE(1357)
							ret1->y = ny;
							HX_STACK_LINE(1357)
							{
							}
						}
						HX_STACK_LINE(1357)
						tmp19 = ret1;
					}
					HX_STACK_LINE(1357)
					ret->zpp_inner = tmp19;
					HX_STACK_LINE(1357)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(1357)
					{
						HX_STACK_LINE(1357)
						bool tmp19 = (ret != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1357)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1357)
						if ((tmp19)){
							HX_STACK_LINE(1357)
							tmp20 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(1357)
							tmp20 = false;
						}
						HX_STACK_LINE(1357)
						if ((tmp20)){
							HX_STACK_LINE(1357)
							::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1357)
							::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1357)
							HX_STACK_DO_THROW(tmp22);
						}
					}
					HX_STACK_LINE(1357)
					{
						HX_STACK_LINE(1357)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1357)
						bool tmp19 = _this->_immutable;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1357)
						if ((tmp19)){
							HX_STACK_LINE(1357)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(1357)
						bool tmp20 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1357)
						if ((tmp20)){
							HX_STACK_LINE(1357)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(1357)
					bool tmp19 = (nx != nx);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1357)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1357)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1357)
					if ((tmp20)){
						HX_STACK_LINE(1357)
						tmp21 = (ny != ny);
					}
					else{
						HX_STACK_LINE(1357)
						tmp21 = true;
					}
					HX_STACK_LINE(1357)
					if ((tmp21)){
						HX_STACK_LINE(1357)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(1357)
					Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1357)
					{
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							bool tmp23 = (ret != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1357)
							bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1357)
							if ((tmp23)){
								HX_STACK_LINE(1357)
								tmp24 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(1357)
								tmp24 = false;
							}
							HX_STACK_LINE(1357)
							if ((tmp24)){
								HX_STACK_LINE(1357)
								::String tmp25 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1357)
								::String tmp26 = (tmp25 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1357)
								HX_STACK_DO_THROW(tmp26);
							}
						}
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1357)
							bool tmp23 = (_this->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1357)
							if ((tmp23)){
								HX_STACK_LINE(1357)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1357)
						tmp22 = ret->zpp_inner->x;
					}
					HX_STACK_LINE(1357)
					Float tmp23 = nx;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1357)
					bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1357)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1357)
					if ((tmp24)){
						HX_STACK_LINE(1357)
						Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							{
								HX_STACK_LINE(1357)
								bool tmp27 = (ret != null());		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1357)
								bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1357)
								bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1357)
								bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1357)
								if ((tmp30)){
									HX_STACK_LINE(1357)
									tmp29 = ret->zpp_disp;
								}
								else{
									HX_STACK_LINE(1357)
									tmp29 = false;
								}
								HX_STACK_LINE(1357)
								bool tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1357)
								if ((tmp31)){
									HX_STACK_LINE(1357)
									::String tmp32 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1357)
									::String tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1357)
									::String tmp34 = (tmp33 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1357)
									::String tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1357)
									::String tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1357)
									HX_STACK_DO_THROW(tmp36);
								}
							}
							HX_STACK_LINE(1357)
							{
								HX_STACK_LINE(1357)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1357)
								bool tmp27 = (_this->_validate != null());		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1357)
								bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1357)
								bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1357)
								if ((tmp29)){
									HX_STACK_LINE(1357)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1357)
							Float tmp27 = ret->zpp_inner->y;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1357)
							tmp26 = tmp27;
						}
						HX_STACK_LINE(1357)
						Float tmp27 = ny;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1357)
						tmp25 = (tmp26 == tmp27);
					}
					else{
						HX_STACK_LINE(1357)
						tmp25 = false;
					}
					HX_STACK_LINE(1357)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1357)
					if ((tmp26)){
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							ret->zpp_inner->x = nx;
							HX_STACK_LINE(1357)
							ret->zpp_inner->y = ny;
							HX_STACK_LINE(1357)
							{
							}
						}
						HX_STACK_LINE(1357)
						{
							HX_STACK_LINE(1357)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1357)
							bool tmp27 = (_this->_invalidate != null());		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1357)
							if ((tmp27)){
								HX_STACK_LINE(1357)
								::zpp_nape::geom::ZPP_Vec2 tmp28 = _this;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1357)
								_this->_invalidate(tmp28);
							}
						}
					}
					HX_STACK_LINE(1357)
					ret;
				}
				HX_STACK_LINE(1357)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(1357)
				tmp14 = ret;
			}
			HX_STACK_LINE(1357)
			Float tmp15 = max;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1357)
			bool tmp16 = inner1;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1357)
			::nape::shape::Shape tmp17 = p->outer;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1357)
			::nape::geom::RayResult tmp18 = ::zpp_nape::geom::ZPP_ConvexRayResult_obj::getRay(tmp14,tmp15,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1357)
			::nape::geom::RayResult ret = tmp18;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1358)
			{
				HX_STACK_LINE(1359)
				::zpp_nape::util::ZNPNode_RayResult pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(1360)
				{
					HX_STACK_LINE(1361)
					::zpp_nape::util::ZNPList_RayResult tmp19 = list->zpp_inner->inner;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1361)
					::zpp_nape::util::ZNPNode_RayResult cx_ite = tmp19->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(1362)
					while((true)){
						HX_STACK_LINE(1362)
						bool tmp20 = (cx_ite != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1362)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1362)
						if ((tmp21)){
							HX_STACK_LINE(1362)
							break;
						}
						HX_STACK_LINE(1363)
						::nape::geom::RayResult j = cx_ite->elt;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1364)
						{
							HX_STACK_LINE(1365)
							Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1365)
							{
								HX_STACK_LINE(1365)
								{
									HX_STACK_LINE(1365)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp23 = ret->zpp_inner->next;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1365)
									bool tmp24 = (tmp23 != null());		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1365)
									if ((tmp24)){
										HX_STACK_LINE(1365)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
									}
								}
								HX_STACK_LINE(1365)
								tmp22 = ret->zpp_inner->toiDistance;
							}
							HX_STACK_LINE(1365)
							Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1365)
							{
								HX_STACK_LINE(1365)
								{
									HX_STACK_LINE(1365)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp24 = j->zpp_inner->next;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1365)
									bool tmp25 = (tmp24 != null());		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1365)
									if ((tmp25)){
										HX_STACK_LINE(1365)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
									}
								}
								HX_STACK_LINE(1365)
								tmp23 = j->zpp_inner->toiDistance;
							}
							HX_STACK_LINE(1365)
							bool tmp24 = (tmp22 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1365)
							if ((tmp24)){
								HX_STACK_LINE(1365)
								break;
							}
							HX_STACK_LINE(1366)
							pre = cx_ite;
						}
						HX_STACK_LINE(1368)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(1371)
				{
					HX_STACK_LINE(1371)
					::zpp_nape::util::ZNPList_RayResult tmp19 = list->zpp_inner->inner;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1371)
					::zpp_nape::util::ZNPList_RayResult _this = tmp19;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1371)
					::zpp_nape::util::ZNPNode_RayResult tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1371)
					{
						HX_STACK_LINE(1371)
						::zpp_nape::util::ZNPNode_RayResult ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1371)
						{
							HX_STACK_LINE(1371)
							::zpp_nape::util::ZNPNode_RayResult tmp21 = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1371)
							bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1371)
							if ((tmp22)){
								HX_STACK_LINE(1371)
								::zpp_nape::util::ZNPNode_RayResult tmp23 = ::zpp_nape::util::ZNPNode_RayResult_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1371)
								ret1 = tmp23;
							}
							else{
								HX_STACK_LINE(1371)
								::zpp_nape::util::ZNPNode_RayResult tmp23 = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1371)
								ret1 = tmp23;
								HX_STACK_LINE(1371)
								::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(1371)
								ret1->next = null();
							}
							HX_STACK_LINE(1371)
							Dynamic();
						}
						HX_STACK_LINE(1371)
						ret1->elt = ret;
						HX_STACK_LINE(1371)
						tmp20 = ret1;
					}
					HX_STACK_LINE(1371)
					::zpp_nape::util::ZNPNode_RayResult temp = tmp20;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(1371)
					bool tmp21 = (pre == null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1371)
					if ((tmp21)){
						HX_STACK_LINE(1371)
						temp->next = _this->head;
						HX_STACK_LINE(1371)
						_this->head = temp;
					}
					else{
						HX_STACK_LINE(1371)
						temp->next = pre->next;
						HX_STACK_LINE(1371)
						pre->next = temp;
					}
					HX_STACK_LINE(1371)
					bool tmp22 = _this->modified = true;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1371)
					_this->pushmod = tmp22;
					HX_STACK_LINE(1371)
					(_this->length)++;
					HX_STACK_LINE(1371)
					temp;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_Ray_obj,polysect2,(void))

bool ZPP_Ray_obj::internal;


ZPP_Ray_obj::ZPP_Ray_obj()
{
}

void ZPP_Ray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Ray);
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(direction,"direction");
	HX_MARK_MEMBER_NAME(maxdist,"maxdist");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(originx,"originx");
	HX_MARK_MEMBER_NAME(originy,"originy");
	HX_MARK_MEMBER_NAME(dirx,"dirx");
	HX_MARK_MEMBER_NAME(diry,"diry");
	HX_MARK_MEMBER_NAME(idirx,"idirx");
	HX_MARK_MEMBER_NAME(idiry,"idiry");
	HX_MARK_MEMBER_NAME(normalx,"normalx");
	HX_MARK_MEMBER_NAME(normaly,"normaly");
	HX_MARK_MEMBER_NAME(absnormalx,"absnormalx");
	HX_MARK_MEMBER_NAME(absnormaly,"absnormaly");
	HX_MARK_MEMBER_NAME(zip_dir,"zip_dir");
	HX_MARK_END_CLASS();
}

void ZPP_Ray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(direction,"direction");
	HX_VISIT_MEMBER_NAME(maxdist,"maxdist");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(originx,"originx");
	HX_VISIT_MEMBER_NAME(originy,"originy");
	HX_VISIT_MEMBER_NAME(dirx,"dirx");
	HX_VISIT_MEMBER_NAME(diry,"diry");
	HX_VISIT_MEMBER_NAME(idirx,"idirx");
	HX_VISIT_MEMBER_NAME(idiry,"idiry");
	HX_VISIT_MEMBER_NAME(normalx,"normalx");
	HX_VISIT_MEMBER_NAME(normaly,"normaly");
	HX_VISIT_MEMBER_NAME(absnormalx,"absnormalx");
	HX_VISIT_MEMBER_NAME(absnormaly,"absnormaly");
	HX_VISIT_MEMBER_NAME(zip_dir,"zip_dir");
}

Dynamic ZPP_Ray_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dirx") ) { return dirx; }
		if (HX_FIELD_EQ(inName,"diry") ) { return diry; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"idirx") ) { return idirx; }
		if (HX_FIELD_EQ(inName,"idiry") ) { return idiry; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"maxdist") ) { return maxdist; }
		if (HX_FIELD_EQ(inName,"originx") ) { return originx; }
		if (HX_FIELD_EQ(inName,"originy") ) { return originy; }
		if (HX_FIELD_EQ(inName,"normalx") ) { return normalx; }
		if (HX_FIELD_EQ(inName,"normaly") ) { return normaly; }
		if (HX_FIELD_EQ(inName,"zip_dir") ) { return zip_dir; }
		if (HX_FIELD_EQ(inName,"rayAABB") ) { return rayAABB_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		if (HX_FIELD_EQ(inName,"aabbtest") ) { return aabbtest_dyn(); }
		if (HX_FIELD_EQ(inName,"aabbsect") ) { return aabbsect_dyn(); }
		if (HX_FIELD_EQ(inName,"polysect") ) { return polysect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return direction; }
		if (HX_FIELD_EQ(inName,"polysect2") ) { return polysect2_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"absnormalx") ) { return absnormalx; }
		if (HX_FIELD_EQ(inName,"absnormaly") ) { return absnormaly; }
		if (HX_FIELD_EQ(inName,"circlesect") ) { return circlesect_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"circlesect2") ) { return circlesect2_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validate_dir") ) { return validate_dir_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"invalidate_dir") ) { return invalidate_dir_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"origin_invalidate") ) { return origin_invalidate_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"direction_invalidate") ) { return direction_invalidate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_Ray_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { outValue = internal; return true;  }
	}
	return false;
}

Dynamic ZPP_Ray_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dirx") ) { dirx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"diry") ) { diry=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"idirx") ) { idirx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"idiry") ) { idiry=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"maxdist") ) { maxdist=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originx") ) { originx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originy") ) { originy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normalx") ) { normalx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normaly") ) { normaly=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_dir") ) { zip_dir=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"absnormalx") ) { absnormalx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"absnormaly") ) { absnormaly=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Ray_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"internal") ) { internal=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void ZPP_Ray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"));
	outFields->push(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"));
	outFields->push(HX_HCSTRING("maxdist","\x0a","\x94","\xc0","\xd7"));
	outFields->push(HX_HCSTRING("userData","\x15","\x96","\x28","\x05"));
	outFields->push(HX_HCSTRING("originx","\xd2","\x8f","\xf5","\x55"));
	outFields->push(HX_HCSTRING("originy","\xd3","\x8f","\xf5","\x55"));
	outFields->push(HX_HCSTRING("dirx","\x8b","\x66","\x69","\x42"));
	outFields->push(HX_HCSTRING("diry","\x8c","\x66","\x69","\x42"));
	outFields->push(HX_HCSTRING("idirx","\x74","\x4f","\x7c","\xb7"));
	outFields->push(HX_HCSTRING("idiry","\x75","\x4f","\x7c","\xb7"));
	outFields->push(HX_HCSTRING("normalx","\x71","\x70","\xda","\x2b"));
	outFields->push(HX_HCSTRING("normaly","\x72","\x70","\xda","\x2b"));
	outFields->push(HX_HCSTRING("absnormalx","\x3f","\x52","\x25","\x7a"));
	outFields->push(HX_HCSTRING("absnormaly","\x40","\x52","\x25","\x7a"));
	outFields->push(HX_HCSTRING("zip_dir","\xaf","\xf5","\xab","\x88"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Ray_obj,origin),HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Ray_obj,direction),HX_HCSTRING("direction","\x3f","\x62","\x40","\x10")},
	{hx::fsFloat,(int)offsetof(ZPP_Ray_obj,maxdist),HX_HCSTRING("maxdist","\x0a","\x94","\xc0","\xd7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ZPP_Ray_obj,userData),HX_HCSTRING("userData","\x15","\x96","\x28","\x05")},
	{hx::fsFloat,(int)offsetof(ZPP_Ray_obj,originx),HX_HCSTRING("originx","\xd2","\x8f","\xf5","\x55")},
	{hx::fsFloat,(int)offsetof(ZPP_Ray_obj,originy),HX_HCSTRING("originy","\xd3","\x8f","\xf5","\x55")},
	{hx::fsFloat,(int)offsetof(ZPP_Ray_obj,dirx),HX_HCSTRING("dirx","\x8b","\x66","\x69","\x42")},
	{hx::fsFloat,(int)offsetof(ZPP_Ray_obj,diry),HX_HCSTRING("diry","\x8c","\x66","\x69","\x42")},
	{hx::fsFloat,(int)offsetof(ZPP_Ray_obj,idirx),HX_HCSTRING("idirx","\x74","\x4f","\x7c","\xb7")},
	{hx::fsFloat,(int)offsetof(ZPP_Ray_obj,idiry),HX_HCSTRING("idiry","\x75","\x4f","\x7c","\xb7")},
	{hx::fsFloat,(int)offsetof(ZPP_Ray_obj,normalx),HX_HCSTRING("normalx","\x71","\x70","\xda","\x2b")},
	{hx::fsFloat,(int)offsetof(ZPP_Ray_obj,normaly),HX_HCSTRING("normaly","\x72","\x70","\xda","\x2b")},
	{hx::fsFloat,(int)offsetof(ZPP_Ray_obj,absnormalx),HX_HCSTRING("absnormalx","\x3f","\x52","\x25","\x7a")},
	{hx::fsFloat,(int)offsetof(ZPP_Ray_obj,absnormaly),HX_HCSTRING("absnormaly","\x40","\x52","\x25","\x7a")},
	{hx::fsBool,(int)offsetof(ZPP_Ray_obj,zip_dir),HX_HCSTRING("zip_dir","\xaf","\xf5","\xab","\x88")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &ZPP_Ray_obj::internal,HX_HCSTRING("internal","\x3d","\x67","\x76","\x28")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"),
	HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"),
	HX_HCSTRING("maxdist","\x0a","\x94","\xc0","\xd7"),
	HX_HCSTRING("userData","\x15","\x96","\x28","\x05"),
	HX_HCSTRING("originx","\xd2","\x8f","\xf5","\x55"),
	HX_HCSTRING("originy","\xd3","\x8f","\xf5","\x55"),
	HX_HCSTRING("dirx","\x8b","\x66","\x69","\x42"),
	HX_HCSTRING("diry","\x8c","\x66","\x69","\x42"),
	HX_HCSTRING("idirx","\x74","\x4f","\x7c","\xb7"),
	HX_HCSTRING("idiry","\x75","\x4f","\x7c","\xb7"),
	HX_HCSTRING("normalx","\x71","\x70","\xda","\x2b"),
	HX_HCSTRING("normaly","\x72","\x70","\xda","\x2b"),
	HX_HCSTRING("absnormalx","\x3f","\x52","\x25","\x7a"),
	HX_HCSTRING("absnormaly","\x40","\x52","\x25","\x7a"),
	HX_HCSTRING("origin_invalidate","\x74","\xea","\x03","\x20"),
	HX_HCSTRING("direction_invalidate","\xbb","\xbe","\x86","\x27"),
	HX_HCSTRING("zip_dir","\xaf","\xf5","\xab","\x88"),
	HX_HCSTRING("invalidate_dir","\x49","\x75","\x0b","\x7a"),
	HX_HCSTRING("validate_dir","\xe4","\x55","\x3e","\xa8"),
	HX_HCSTRING("rayAABB","\x8a","\x7d","\xd1","\x23"),
	HX_HCSTRING("aabbtest","\xf2","\x3a","\xf7","\x56"),
	HX_HCSTRING("aabbsect","\x63","\xf6","\x4d","\x56"),
	HX_HCSTRING("circlesect","\xd3","\x3d","\x68","\x11"),
	HX_HCSTRING("circlesect2","\xff","\xda","\xcd","\x29"),
	HX_HCSTRING("polysect","\x0f","\x18","\x38","\x34"),
	HX_HCSTRING("polysect2","\x43","\xf5","\xdc","\x7c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Ray_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Ray_obj::internal,"internal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Ray_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Ray_obj::internal,"internal");
};

#endif

hx::Class ZPP_Ray_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("internal","\x3d","\x67","\x76","\x28"),
	::String(null()) };

void ZPP_Ray_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_Ray","\x74","\xfc","\xb1","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Ray_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Ray_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Ray_obj >;
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

void ZPP_Ray_obj::__boot()
{
	internal= false;
}

} // end namespace zpp_nape
} // end namespace geom
