#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Circle
#include <nape/shape/Circle.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <zpp_nape/geom/ZPP_Mat23.h>
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
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <zpp_nape/shape/ZPP_Circle.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace shape{

Void ZPP_Circle_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.shape.ZPP_Circle","new",0x6cd9e4d5,"zpp_nape.shape.ZPP_Circle.new","zpp_nape/shape/Circle.hx",174,0x3e895b1e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(176)
	this->radius = ((Float)0.0);
	HX_STACK_LINE(175)
	this->outer_zn = null();
	HX_STACK_LINE(178)
	int tmp = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	super::__construct(tmp);
	HX_STACK_LINE(179)
	this->circle = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(180)
	this->zip_localCOM = false;
}
;
	return null();
}

//ZPP_Circle_obj::~ZPP_Circle_obj() { }

Dynamic ZPP_Circle_obj::__CreateEmpty() { return  new ZPP_Circle_obj; }
hx::ObjectPtr< ZPP_Circle_obj > ZPP_Circle_obj::__new()
{  hx::ObjectPtr< ZPP_Circle_obj > _result_ = new ZPP_Circle_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Circle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Circle_obj > _result_ = new ZPP_Circle_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_Circle_obj::__clear( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Circle","__clear",0x3bbbbd62,"zpp_nape.shape.ZPP_Circle.__clear","zpp_nape/shape/Circle.hx",182,0x3e895b1e)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Circle_obj,__clear,(void))

Void ZPP_Circle_obj::invalidate_radius( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Circle","invalidate_radius",0x6466d50b,"zpp_nape.shape.ZPP_Circle.invalidate_radius","zpp_nape/shape/Circle.hx",183,0x3e895b1e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(184)
		this->invalidate_area_inertia();
		HX_STACK_LINE(185)
		this->invalidate_angDrag();
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(186)
			this->zip_aabb = true;
			HX_STACK_LINE(186)
			::zpp_nape::phys::ZPP_Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(186)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(186)
			if ((tmp1)){
				HX_STACK_LINE(186)
				::zpp_nape::phys::ZPP_Body tmp2 = this->body;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(186)
				tmp2->zip_aabb = true;
			}
		}
		HX_STACK_LINE(187)
		::zpp_nape::phys::ZPP_Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		if ((tmp1)){
			HX_STACK_LINE(187)
			::zpp_nape::phys::ZPP_Body tmp2 = this->body;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(187)
			tmp2->wake();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Circle_obj,invalidate_radius,(void))

Void ZPP_Circle_obj::localCOM_validate( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Circle","localCOM_validate",0x520c74d4,"zpp_nape.shape.ZPP_Circle.localCOM_validate","zpp_nape/shape/Circle.hx",189,0x3e895b1e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(190)
		Float tmp = this->localCOMx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		::nape::geom::Vec2 tmp1 = this->wrap_localCOM;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(190)
		tmp1->zpp_inner->x = tmp;
		HX_STACK_LINE(191)
		Float tmp2 = this->localCOMy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(191)
		::nape::geom::Vec2 tmp3 = this->wrap_localCOM;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(191)
		tmp3->zpp_inner->y = tmp2;
		HX_STACK_LINE(200)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Circle_obj,localCOM_validate,(void))

Void ZPP_Circle_obj::localCOM_invalidate( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Circle","localCOM_invalidate",0xeaf2c939,"zpp_nape.shape.ZPP_Circle.localCOM_invalidate","zpp_nape/shape/Circle.hx",209,0x3e895b1e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(211)
			this->localCOMx = x->x;
			HX_STACK_LINE(212)
			this->localCOMy = x->y;
			HX_STACK_LINE(221)
			{
			}
		}
		HX_STACK_LINE(230)
		this->invalidate_localCOM();
		HX_STACK_LINE(231)
		::zpp_nape::phys::ZPP_Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		if ((tmp1)){
			HX_STACK_LINE(231)
			::zpp_nape::phys::ZPP_Body tmp2 = this->body;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(231)
			tmp2->wake();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Circle_obj,localCOM_invalidate,(void))

Void ZPP_Circle_obj::localCOM_immutable( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Circle","localCOM_immutable",0x9d2e3a44,"zpp_nape.shape.ZPP_Circle.localCOM_immutable","zpp_nape/shape/Circle.hx",234,0x3e895b1e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(235)
		::zpp_nape::phys::ZPP_Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(235)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(235)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(235)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(235)
		if ((tmp2)){
			HX_STACK_LINE(235)
			::zpp_nape::phys::ZPP_Body tmp4 = this->body;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(235)
			::zpp_nape::phys::ZPP_Body tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(235)
			::zpp_nape::phys::ZPP_Body tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(235)
			int tmp7 = tmp6->type;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(235)
			int tmp8 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(235)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(235)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(235)
			tmp3 = (tmp7 == tmp10);
		}
		else{
			HX_STACK_LINE(235)
			tmp3 = false;
		}
		HX_STACK_LINE(235)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(235)
		if ((tmp3)){
			HX_STACK_LINE(235)
			::zpp_nape::phys::ZPP_Body tmp5 = this->body;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(235)
			::zpp_nape::phys::ZPP_Body tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(235)
			::zpp_nape::space::ZPP_Space tmp7 = tmp6->space;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(235)
			tmp4 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(235)
			tmp4 = false;
		}
		HX_STACK_LINE(235)
		if ((tmp4)){
			HX_STACK_LINE(235)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot modify localCOM of Circle added to a static Body whilst within a Space","\x47","\xa1","\x5f","\x33"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Circle_obj,localCOM_immutable,(void))

Void ZPP_Circle_obj::setupLocalCOM( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Circle","setupLocalCOM",0x660d8fe8,"zpp_nape.shape.ZPP_Circle.setupLocalCOM","zpp_nape/shape/Circle.hx",238,0x3e895b1e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(239)
		::zpp_nape::shape::ZPP_Circle me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(240)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(240)
		{
			HX_STACK_LINE(240)
			Float tmp1 = this->localCOMx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(240)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(240)
			Float tmp2 = this->localCOMy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(240)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(240)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(240)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(240)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(240)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(240)
			if ((tmp4)){
				HX_STACK_LINE(240)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(240)
				tmp5 = true;
			}
			HX_STACK_LINE(240)
			if ((tmp5)){
				HX_STACK_LINE(240)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(240)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(240)
			{
				HX_STACK_LINE(240)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(240)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(240)
				if ((tmp7)){
					HX_STACK_LINE(240)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(240)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(240)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(240)
					ret = tmp8;
					HX_STACK_LINE(240)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(240)
					ret->zpp_pool = null();
					HX_STACK_LINE(240)
					ret->zpp_disp = false;
					HX_STACK_LINE(240)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(240)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(240)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(240)
					if ((tmp11)){
						HX_STACK_LINE(240)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(240)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(240)
			if ((tmp6)){
				HX_STACK_LINE(240)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(240)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(240)
					{
						HX_STACK_LINE(240)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(240)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(240)
						if ((tmp9)){
							HX_STACK_LINE(240)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(240)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(240)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(240)
							ret1 = tmp10;
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
					tmp7 = ret1;
				}
				HX_STACK_LINE(240)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(240)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(240)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(240)
					if ((tmp7)){
						HX_STACK_LINE(240)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(240)
						tmp8 = false;
					}
					HX_STACK_LINE(240)
					if ((tmp8)){
						HX_STACK_LINE(240)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(240)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(240)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(240)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(240)
					if ((tmp7)){
						HX_STACK_LINE(240)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(240)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(240)
					if ((tmp8)){
						HX_STACK_LINE(240)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(240)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(240)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(240)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(240)
				if ((tmp8)){
					HX_STACK_LINE(240)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(240)
					tmp9 = true;
				}
				HX_STACK_LINE(240)
				if ((tmp9)){
					HX_STACK_LINE(240)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(240)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					{
						HX_STACK_LINE(240)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(240)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(240)
						if ((tmp11)){
							HX_STACK_LINE(240)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(240)
							tmp12 = false;
						}
						HX_STACK_LINE(240)
						if ((tmp12)){
							HX_STACK_LINE(240)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(240)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(240)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(240)
					{
						HX_STACK_LINE(240)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(240)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(240)
						if ((tmp11)){
							HX_STACK_LINE(240)
							_this->_validate();
						}
					}
					HX_STACK_LINE(240)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(240)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(240)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(240)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(240)
				if ((tmp12)){
					HX_STACK_LINE(240)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(240)
					{
						HX_STACK_LINE(240)
						{
							HX_STACK_LINE(240)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(240)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(240)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(240)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(240)
							if ((tmp18)){
								HX_STACK_LINE(240)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(240)
								tmp17 = false;
							}
							HX_STACK_LINE(240)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(240)
							if ((tmp19)){
								HX_STACK_LINE(240)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(240)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(240)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(240)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(240)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(240)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(240)
						{
							HX_STACK_LINE(240)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(240)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(240)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(240)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(240)
							if ((tmp17)){
								HX_STACK_LINE(240)
								_this->_validate();
							}
						}
						HX_STACK_LINE(240)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(240)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(240)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(240)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(240)
					tmp13 = false;
				}
				HX_STACK_LINE(240)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(240)
				if ((tmp14)){
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
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(240)
						if ((tmp15)){
							HX_STACK_LINE(240)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(240)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(240)
				ret;
			}
			HX_STACK_LINE(240)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(240)
			tmp = ret;
		}
		HX_STACK_LINE(240)
		this->wrap_localCOM = tmp;
		HX_STACK_LINE(241)
		::nape::geom::Vec2 tmp1 = this->wrap_localCOM;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(241)
		tmp1->zpp_inner->_inuse = true;
		HX_STACK_LINE(242)
		Dynamic tmp2 = this->localCOM_validate_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(242)
		::nape::geom::Vec2 tmp3 = this->wrap_localCOM;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(242)
		tmp3->zpp_inner->_validate = tmp2;
		HX_STACK_LINE(243)
		Dynamic tmp4 = this->localCOM_invalidate_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(243)
		::nape::geom::Vec2 tmp5 = this->wrap_localCOM;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(243)
		tmp5->zpp_inner->_invalidate = tmp4;
		HX_STACK_LINE(245)
		Dynamic tmp6 = this->localCOM_immutable_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(245)
		::nape::geom::Vec2 tmp7 = this->wrap_localCOM;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(245)
		tmp7->zpp_inner->_isimmutable = tmp6;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Circle_obj,setupLocalCOM,(void))

Void ZPP_Circle_obj::__validate_aabb( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Circle","__validate_aabb",0x1c4ab6fe,"zpp_nape.shape.ZPP_Circle.__validate_aabb","zpp_nape/shape/Circle.hx",250,0x3e895b1e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(251)
		{
			HX_STACK_LINE(251)
			bool tmp = this->zip_worldCOM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(251)
			if ((tmp)){
				HX_STACK_LINE(251)
				::zpp_nape::phys::ZPP_Body tmp1 = this->body;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(251)
				bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(251)
				if ((tmp2)){
					HX_STACK_LINE(251)
					this->zip_worldCOM = false;
					HX_STACK_LINE(251)
					{
						HX_STACK_LINE(251)
						bool tmp3 = this->zip_localCOM;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(251)
						if ((tmp3)){
							HX_STACK_LINE(251)
							this->zip_localCOM = false;
							HX_STACK_LINE(251)
							int tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(251)
							int tmp5 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(251)
							bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(251)
							if ((tmp6)){
								HX_STACK_LINE(251)
								::zpp_nape::shape::ZPP_Polygon tmp7 = this->polygon;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(251)
								::zpp_nape::shape::ZPP_Polygon _this = tmp7;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(251)
								::zpp_nape::geom::ZPP_Vec2 tmp8 = _this->lverts->next;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(251)
								bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(251)
								if ((tmp9)){
									HX_STACK_LINE(251)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
								}
								HX_STACK_LINE(251)
								::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(251)
								::zpp_nape::geom::ZPP_Vec2 tmp11 = tmp10->next;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(251)
								bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(251)
								if ((tmp12)){
									HX_STACK_LINE(251)
									::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(251)
									_this->localCOMx = tmp13->x;
									HX_STACK_LINE(251)
									::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(251)
									_this->localCOMy = tmp14->y;
									HX_STACK_LINE(251)
									Dynamic();
								}
								else{
									HX_STACK_LINE(251)
									::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(251)
									::zpp_nape::geom::ZPP_Vec2 tmp14 = tmp13->next->next;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(251)
									bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(251)
									if ((tmp15)){
										HX_STACK_LINE(251)
										{
											HX_STACK_LINE(251)
											::zpp_nape::geom::ZPP_Vec2 tmp16 = _this->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(251)
											_this->localCOMx = tmp16->x;
											HX_STACK_LINE(251)
											::zpp_nape::geom::ZPP_Vec2 tmp17 = _this->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(251)
											_this->localCOMy = tmp17->y;
											HX_STACK_LINE(251)
											{
											}
										}
										HX_STACK_LINE(251)
										{
											HX_STACK_LINE(251)
											Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(251)
											::zpp_nape::geom::ZPP_Vec2 tmp16 = _this->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(251)
											Float tmp17 = tmp16->next->x;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(251)
											Float tmp18 = t;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(251)
											Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(251)
											hx::AddEq(_this->localCOMx,tmp19);
											HX_STACK_LINE(251)
											::zpp_nape::geom::ZPP_Vec2 tmp20 = _this->lverts->next;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(251)
											Float tmp21 = tmp20->next->y;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(251)
											Float tmp22 = t;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(251)
											Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(251)
											hx::AddEq(_this->localCOMy,tmp23);
										}
										HX_STACK_LINE(251)
										{
											HX_STACK_LINE(251)
											Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(251)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(251)
											hx::MultEq(_this->localCOMy,t);
										}
									}
									else{
										HX_STACK_LINE(251)
										{
											HX_STACK_LINE(251)
											_this->localCOMx = (int)0;
											HX_STACK_LINE(251)
											_this->localCOMy = (int)0;
											HX_STACK_LINE(251)
											{
											}
										}
										HX_STACK_LINE(251)
										Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
										HX_STACK_LINE(251)
										{
											HX_STACK_LINE(251)
											::zpp_nape::geom::ZPP_Vec2 tmp16 = _this->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(251)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp16;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(251)
											::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
											HX_STACK_LINE(251)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(251)
											::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(251)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(251)
											while((true)){
												HX_STACK_LINE(251)
												bool tmp17 = (cx_ite != null());		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(251)
												bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(251)
												if ((tmp18)){
													HX_STACK_LINE(251)
													break;
												}
												HX_STACK_LINE(251)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(251)
												{
													HX_STACK_LINE(251)
													Float tmp19 = v->x;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(251)
													Float tmp20 = (w->y - u->y);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(251)
													Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(251)
													hx::AddEq(area,tmp21);
													HX_STACK_LINE(251)
													Float tmp22 = (w->y * v->x);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(251)
													Float tmp23 = (w->x * v->y);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(251)
													Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(251)
													Float cf = tmp24;		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(251)
													Float tmp25 = (v->x + w->x);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(251)
													Float tmp26 = cf;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(251)
													Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(251)
													hx::AddEq(_this->localCOMx,tmp27);
													HX_STACK_LINE(251)
													Float tmp28 = (v->y + w->y);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(251)
													Float tmp29 = cf;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(251)
													Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(251)
													hx::AddEq(_this->localCOMy,tmp30);
												}
												HX_STACK_LINE(251)
												u = v;
												HX_STACK_LINE(251)
												v = w;
												HX_STACK_LINE(251)
												cx_ite = cx_ite->next;
											}
											HX_STACK_LINE(251)
											::zpp_nape::geom::ZPP_Vec2 tmp17 = _this->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(251)
											cx_ite = tmp17;
											HX_STACK_LINE(251)
											::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
											HX_STACK_LINE(251)
											{
												HX_STACK_LINE(251)
												Float tmp18 = v->x;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(251)
												Float tmp19 = (w->y - u->y);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(251)
												Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(251)
												hx::AddEq(area,tmp20);
												HX_STACK_LINE(251)
												Float tmp21 = (w->y * v->x);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(251)
												Float tmp22 = (w->x * v->y);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(251)
												Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(251)
												Float cf = tmp23;		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(251)
												Float tmp24 = (v->x + w->x);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(251)
												Float tmp25 = cf;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(251)
												Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(251)
												hx::AddEq(_this->localCOMx,tmp26);
												HX_STACK_LINE(251)
												Float tmp27 = (v->y + w->y);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(251)
												Float tmp28 = cf;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(251)
												Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(251)
												hx::AddEq(_this->localCOMy,tmp29);
											}
											HX_STACK_LINE(251)
											u = v;
											HX_STACK_LINE(251)
											v = w;
											HX_STACK_LINE(251)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(251)
											::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
											HX_STACK_LINE(251)
											{
												HX_STACK_LINE(251)
												Float tmp18 = v->x;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(251)
												Float tmp19 = (w1->y - u->y);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(251)
												Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(251)
												hx::AddEq(area,tmp20);
												HX_STACK_LINE(251)
												Float tmp21 = (w1->y * v->x);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(251)
												Float tmp22 = (w1->x * v->y);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(251)
												Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(251)
												Float cf = tmp23;		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(251)
												Float tmp24 = (v->x + w1->x);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(251)
												Float tmp25 = cf;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(251)
												Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(251)
												hx::AddEq(_this->localCOMx,tmp26);
												HX_STACK_LINE(251)
												Float tmp27 = (v->y + w1->y);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(251)
												Float tmp28 = cf;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(251)
												Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(251)
												hx::AddEq(_this->localCOMy,tmp29);
											}
										}
										HX_STACK_LINE(251)
										Float tmp16 = ((int)3 * area);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(251)
										Float tmp17 = (Float((int)1) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(251)
										area = tmp17;
										HX_STACK_LINE(251)
										{
											HX_STACK_LINE(251)
											Float t = area;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(251)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(251)
											hx::MultEq(_this->localCOMy,t);
										}
									}
								}
							}
							HX_STACK_LINE(251)
							::nape::geom::Vec2 tmp7 = this->wrap_localCOM;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(251)
							bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(251)
							if ((tmp8)){
								HX_STACK_LINE(251)
								Float tmp9 = this->localCOMx;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(251)
								::nape::geom::Vec2 tmp10 = this->wrap_localCOM;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(251)
								tmp10->zpp_inner->x = tmp9;
								HX_STACK_LINE(251)
								Float tmp11 = this->localCOMy;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(251)
								::nape::geom::Vec2 tmp12 = this->wrap_localCOM;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(251)
								tmp12->zpp_inner->y = tmp11;
								HX_STACK_LINE(251)
								{
								}
							}
						}
					}
					HX_STACK_LINE(251)
					{
						HX_STACK_LINE(251)
						::zpp_nape::phys::ZPP_Body tmp3 = this->body;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(251)
						::zpp_nape::phys::ZPP_Body _this = tmp3;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(251)
						bool tmp4 = _this->zip_axis;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(251)
						if ((tmp4)){
							HX_STACK_LINE(251)
							_this->zip_axis = false;
							HX_STACK_LINE(251)
							{
								HX_STACK_LINE(251)
								Float tmp5 = _this->rot;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(251)
								Float tmp6 = ::Math_obj::sin(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(251)
								_this->axisx = tmp6;
								HX_STACK_LINE(251)
								Float tmp7 = _this->rot;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(251)
								Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(251)
								_this->axisy = tmp8;
								HX_STACK_LINE(251)
								Dynamic();
							}
						}
					}
					HX_STACK_LINE(251)
					{
						HX_STACK_LINE(251)
						::zpp_nape::phys::ZPP_Body tmp3 = this->body;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(251)
						Float tmp4 = tmp3->posx;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(251)
						::zpp_nape::phys::ZPP_Body tmp5 = this->body;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(251)
						Float tmp6 = tmp5->axisy;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(251)
						Float tmp7 = this->localCOMx;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(251)
						Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(251)
						::zpp_nape::phys::ZPP_Body tmp9 = this->body;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(251)
						Float tmp10 = tmp9->axisx;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(251)
						Float tmp11 = this->localCOMy;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(251)
						Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(251)
						Float tmp13 = (tmp8 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(251)
						Float tmp14 = (tmp4 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(251)
						this->worldCOMx = tmp14;
						HX_STACK_LINE(251)
						::zpp_nape::phys::ZPP_Body tmp15 = this->body;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(251)
						Float tmp16 = tmp15->posy;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(251)
						Float tmp17 = this->localCOMx;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(251)
						::zpp_nape::phys::ZPP_Body tmp18 = this->body;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(251)
						Float tmp19 = tmp18->axisx;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(251)
						Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(251)
						Float tmp21 = this->localCOMy;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(251)
						::zpp_nape::phys::ZPP_Body tmp22 = this->body;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(251)
						Float tmp23 = tmp22->axisy;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(251)
						Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(251)
						Float tmp25 = (tmp20 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(251)
						Float tmp26 = (tmp16 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(251)
						this->worldCOMy = tmp26;
					}
				}
			}
		}
		HX_STACK_LINE(252)
		Float tmp = this->radius;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(252)
		Float rx = tmp;		HX_STACK_VAR(rx,"rx");
		HX_STACK_LINE(253)
		Float tmp1 = this->radius;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(253)
		Float ry = tmp1;		HX_STACK_VAR(ry,"ry");
		HX_STACK_LINE(270)
		{
			HX_STACK_LINE(271)
			Float tmp2 = this->worldCOMx;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(271)
			Float tmp3 = rx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(271)
			Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(271)
			::zpp_nape::geom::ZPP_AABB tmp5 = this->aabb;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(271)
			tmp5->minx = tmp4;
			HX_STACK_LINE(272)
			Float tmp6 = this->worldCOMy;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(272)
			Float tmp7 = ry;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(272)
			Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(272)
			::zpp_nape::geom::ZPP_AABB tmp9 = this->aabb;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(272)
			tmp9->miny = tmp8;
		}
		HX_STACK_LINE(274)
		{
			HX_STACK_LINE(275)
			Float tmp2 = this->worldCOMx;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(275)
			Float tmp3 = rx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(275)
			Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(275)
			::zpp_nape::geom::ZPP_AABB tmp5 = this->aabb;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(275)
			tmp5->maxx = tmp4;
			HX_STACK_LINE(276)
			Float tmp6 = this->worldCOMy;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(276)
			Float tmp7 = ry;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(276)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(276)
			::zpp_nape::geom::ZPP_AABB tmp9 = this->aabb;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(276)
			tmp9->maxy = tmp8;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Circle_obj,__validate_aabb,(void))

Void ZPP_Circle_obj::_force_validate_aabb( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Circle","_force_validate_aabb",0x3909c481,"zpp_nape.shape.ZPP_Circle._force_validate_aabb","zpp_nape/shape/Circle.hx",281,0x3e895b1e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(282)
		{
			HX_STACK_LINE(283)
			::zpp_nape::phys::ZPP_Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(283)
			Float tmp1 = tmp->posx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(283)
			::zpp_nape::phys::ZPP_Body tmp2 = this->body;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(283)
			Float tmp3 = tmp2->axisy;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(283)
			Float tmp4 = this->localCOMx;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(283)
			Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(283)
			::zpp_nape::phys::ZPP_Body tmp6 = this->body;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(283)
			Float tmp7 = tmp6->axisx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(283)
			Float tmp8 = this->localCOMy;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(283)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(283)
			Float tmp10 = (tmp5 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(283)
			Float tmp11 = (tmp1 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(283)
			this->worldCOMx = tmp11;
			HX_STACK_LINE(284)
			::zpp_nape::phys::ZPP_Body tmp12 = this->body;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(284)
			Float tmp13 = tmp12->posy;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(284)
			Float tmp14 = this->localCOMx;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(284)
			::zpp_nape::phys::ZPP_Body tmp15 = this->body;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(284)
			Float tmp16 = tmp15->axisx;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(284)
			Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(284)
			Float tmp18 = this->localCOMy;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(284)
			::zpp_nape::phys::ZPP_Body tmp19 = this->body;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(284)
			Float tmp20 = tmp19->axisy;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(284)
			Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(284)
			Float tmp22 = (tmp17 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(284)
			Float tmp23 = (tmp13 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(284)
			this->worldCOMy = tmp23;
		}
		HX_STACK_LINE(286)
		Float tmp = this->worldCOMx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(286)
		Float tmp1 = this->radius;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(286)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(286)
		::zpp_nape::geom::ZPP_AABB tmp3 = this->aabb;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(286)
		tmp3->minx = tmp2;
		HX_STACK_LINE(287)
		Float tmp4 = this->worldCOMy;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(287)
		Float tmp5 = this->radius;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(287)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(287)
		::zpp_nape::geom::ZPP_AABB tmp7 = this->aabb;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(287)
		tmp7->miny = tmp6;
		HX_STACK_LINE(288)
		Float tmp8 = this->worldCOMx;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(288)
		Float tmp9 = this->radius;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(288)
		Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(288)
		::zpp_nape::geom::ZPP_AABB tmp11 = this->aabb;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(288)
		tmp11->maxx = tmp10;
		HX_STACK_LINE(289)
		Float tmp12 = this->worldCOMy;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(289)
		Float tmp13 = this->radius;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(289)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(289)
		::zpp_nape::geom::ZPP_AABB tmp15 = this->aabb;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(289)
		tmp15->maxy = tmp14;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Circle_obj,_force_validate_aabb,(void))

Void ZPP_Circle_obj::__validate_sweepRadius( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Circle","__validate_sweepRadius",0xcf89e6c0,"zpp_nape.shape.ZPP_Circle.__validate_sweepRadius","zpp_nape/shape/Circle.hx",291,0x3e895b1e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(292)
		Float tmp = this->localCOMx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		Float tmp1 = this->localCOMx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(292)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(292)
		Float tmp3 = this->localCOMy;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(292)
		Float tmp4 = this->localCOMy;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(292)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(292)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(292)
		Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(292)
		this->sweepCoef = tmp7;
		HX_STACK_LINE(293)
		Float tmp8 = this->sweepCoef;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(293)
		Float tmp9 = this->radius;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(293)
		Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(293)
		this->sweepRadius = tmp10;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Circle_obj,__validate_sweepRadius,(void))

Void ZPP_Circle_obj::__validate_area_inertia( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Circle","__validate_area_inertia",0x159d0d66,"zpp_nape.shape.ZPP_Circle.__validate_area_inertia","zpp_nape/shape/Circle.hx",295,0x3e895b1e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(296)
		Float tmp = this->radius;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(296)
		Float tmp1 = this->radius;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(296)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(296)
		Float r2 = tmp2;		HX_STACK_VAR(r2,"r2");
		HX_STACK_LINE(297)
		Float tmp3 = r2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(297)
		Float tmp4 = ::Math_obj::PI;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(297)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(297)
		this->area = tmp5;
		HX_STACK_LINE(298)
		Float tmp6 = (r2 * ((Float)0.5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(298)
		Float tmp7 = this->localCOMx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(298)
		Float tmp8 = this->localCOMx;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(298)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(298)
		Float tmp10 = this->localCOMy;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(298)
		Float tmp11 = this->localCOMy;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(298)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(298)
		Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(298)
		Float tmp14 = (tmp6 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(298)
		this->inertia = tmp14;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Circle_obj,__validate_area_inertia,(void))

Void ZPP_Circle_obj::__validate_angDrag( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Circle","__validate_angDrag",0x22d64250,"zpp_nape.shape.ZPP_Circle.__validate_angDrag","zpp_nape/shape/Circle.hx",300,0x3e895b1e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(301)
		Float tmp = this->localCOMx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(301)
		Float tmp1 = this->localCOMx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(301)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(301)
		Float tmp3 = this->localCOMy;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(301)
		Float tmp4 = this->localCOMy;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(301)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(301)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(301)
		Float lc = tmp6;		HX_STACK_VAR(lc,"lc");
		HX_STACK_LINE(302)
		Float tmp7 = this->radius;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(302)
		Float tmp8 = this->radius;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(302)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(302)
		Float r2 = tmp9;		HX_STACK_VAR(r2,"r2");
		HX_STACK_LINE(303)
		::zpp_nape::phys::ZPP_Material tmp10 = this->material;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(303)
		Float tmp11 = tmp10->dynamicFriction;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(303)
		Float tmp12 = ::nape::Config_obj::fluidAngularDragFriction;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(303)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(303)
		Float skin = tmp13;		HX_STACK_VAR(skin,"skin");
		HX_STACK_LINE(304)
		Float tmp14 = lc;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(304)
		Float tmp15 = ((int)2 * r2);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(304)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(304)
		Float tmp17 = skin;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(304)
		Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(304)
		Float tmp19 = ::nape::Config_obj::fluidAngularDrag;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(304)
		Float tmp20 = (((Float)0.5) * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(304)
		Float tmp21 = ::nape::Config_obj::fluidVacuumDrag;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(304)
		Float tmp22 = ((int)1 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(304)
		Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(304)
		Float tmp24 = lc;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(304)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(304)
		Float tmp26 = (tmp18 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(304)
		this->angDrag = tmp26;
		HX_STACK_LINE(305)
		Float tmp27 = lc;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(305)
		Float tmp28 = (((Float)0.5) * r2);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(305)
		Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(305)
		Float tmp30 = ((int)2 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(305)
		hx::DivEq(this->angDrag,tmp30);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Circle_obj,__validate_angDrag,(void))

Void ZPP_Circle_obj::__scale( Float sx,Float sy){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Circle","__scale",0x6c2f1a5f,"zpp_nape.shape.ZPP_Circle.__scale","zpp_nape/shape/Circle.hx",307,0x3e895b1e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sx,"sx")
		HX_STACK_ARG(sy,"sy")
		HX_STACK_LINE(308)
		bool tmp = (sx < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(308)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(308)
		if ((tmp)){
			HX_STACK_LINE(308)
			Float tmp2 = sx;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(308)
			tmp1 = -(tmp2);
		}
		else{
			HX_STACK_LINE(308)
			tmp1 = sx;
		}
		HX_STACK_LINE(308)
		bool tmp2 = (sy < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(308)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(308)
		if ((tmp2)){
			HX_STACK_LINE(308)
			Float tmp4 = sy;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(308)
			tmp3 = -(tmp4);
		}
		else{
			HX_STACK_LINE(308)
			tmp3 = sy;
		}
		HX_STACK_LINE(308)
		Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(308)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(308)
		Float factor = tmp5;		HX_STACK_VAR(factor,"factor");
		HX_STACK_LINE(309)
		bool tmp6 = (factor < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(309)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(309)
		if ((tmp6)){
			HX_STACK_LINE(309)
			Float tmp8 = factor;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(309)
			tmp7 = -(tmp8);
		}
		else{
			HX_STACK_LINE(309)
			tmp7 = factor;
		}
		HX_STACK_LINE(309)
		hx::MultEq(this->radius,tmp7);
		HX_STACK_LINE(310)
		this->invalidate_radius();
		HX_STACK_LINE(311)
		Float tmp8 = this->localCOMx;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(311)
		Float tmp9 = this->localCOMx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(311)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(311)
		Float tmp11 = this->localCOMy;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(311)
		Float tmp12 = this->localCOMy;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(311)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(311)
		Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(311)
		bool tmp15 = (tmp14 > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(311)
		if ((tmp15)){
			HX_STACK_LINE(312)
			hx::MultEq(this->localCOMx,sx);
			HX_STACK_LINE(313)
			hx::MultEq(this->localCOMy,sy);
			HX_STACK_LINE(314)
			this->invalidate_localCOM();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Circle_obj,__scale,(void))

Void ZPP_Circle_obj::__translate( Float x,Float y){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Circle","__translate",0x1ebb31a3,"zpp_nape.shape.ZPP_Circle.__translate","zpp_nape/shape/Circle.hx",317,0x3e895b1e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(318)
		{
			HX_STACK_LINE(319)
			Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(328)
			Float tmp = (x * t);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(328)
			hx::AddEq(this->localCOMx,tmp);
			HX_STACK_LINE(329)
			Float tmp1 = (y * t);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(329)
			hx::AddEq(this->localCOMy,tmp1);
		}
		HX_STACK_LINE(331)
		this->invalidate_localCOM();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Circle_obj,__translate,(void))

Void ZPP_Circle_obj::__rotate( Float x,Float y){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Circle","__rotate",0xcc0254e6,"zpp_nape.shape.ZPP_Circle.__rotate","zpp_nape/shape/Circle.hx",333,0x3e895b1e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(334)
		Float tmp = this->localCOMx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(334)
		Float tmp1 = this->localCOMx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(334)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(334)
		Float tmp3 = this->localCOMy;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(334)
		Float tmp4 = this->localCOMy;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(334)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(334)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(334)
		bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(334)
		if ((tmp7)){
			HX_STACK_LINE(335)
			Float tx = ((Float)0.0);		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(336)
			Float ty = ((Float)0.0);		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(337)
			{
				HX_STACK_LINE(338)
				Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(338)
				Float tmp9 = this->localCOMx;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(338)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(338)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(338)
				Float tmp12 = this->localCOMy;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(338)
				Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(338)
				Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(338)
				tx = tmp14;
				HX_STACK_LINE(339)
				Float tmp15 = this->localCOMx;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(339)
				Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(339)
				Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(339)
				Float tmp18 = this->localCOMy;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(339)
				Float tmp19 = y;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(339)
				Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(339)
				Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(339)
				ty = tmp21;
			}
			HX_STACK_LINE(341)
			{
				HX_STACK_LINE(342)
				this->localCOMx = tx;
				HX_STACK_LINE(343)
				this->localCOMy = ty;
				HX_STACK_LINE(352)
				{
				}
			}
			HX_STACK_LINE(361)
			this->invalidate_localCOM();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Circle_obj,__rotate,(void))

Void ZPP_Circle_obj::__transform( ::nape::geom::Mat23 m){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Circle","__transform",0x1ace87c1,"zpp_nape.shape.ZPP_Circle.__transform","zpp_nape/shape/Circle.hx",364,0x3e895b1e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(365)
		Float tmp = m->zpp_inner->a;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(365)
		Float tmp1 = m->zpp_inner->d;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(365)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(365)
		Float tmp3 = m->zpp_inner->b;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(365)
		Float tmp4 = m->zpp_inner->c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(365)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(365)
		Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(365)
		Float det = tmp6;		HX_STACK_VAR(det,"det");
		HX_STACK_LINE(366)
		bool tmp7 = (det < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(366)
		if ((tmp7)){
			HX_STACK_LINE(366)
			Float tmp8 = det;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(366)
			Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(366)
			det = tmp9;
		}
		HX_STACK_LINE(367)
		Float tmp8 = det;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(367)
		Float tmp9 = ::Math_obj::sqrt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(367)
		hx::MultEq(this->radius,tmp9);
		HX_STACK_LINE(368)
		{
			HX_STACK_LINE(369)
			Float tmp10 = m->zpp_inner->a;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(369)
			Float tmp11 = this->localCOMx;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(369)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(369)
			Float tmp13 = m->zpp_inner->b;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(369)
			Float tmp14 = this->localCOMy;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(369)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(369)
			Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(369)
			Float tmp17 = m->zpp_inner->tx;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(369)
			Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(369)
			Float t = tmp18;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(370)
			Float tmp19 = m->zpp_inner->c;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(370)
			Float tmp20 = this->localCOMx;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(370)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(370)
			Float tmp22 = m->zpp_inner->d;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(370)
			Float tmp23 = this->localCOMy;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(370)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(370)
			Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(370)
			Float tmp26 = m->zpp_inner->ty;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(370)
			Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(370)
			this->localCOMy = tmp27;
			HX_STACK_LINE(371)
			this->localCOMx = t;
		}
		HX_STACK_LINE(373)
		this->invalidate_radius();
		HX_STACK_LINE(374)
		this->invalidate_localCOM();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Circle_obj,__transform,(void))

::zpp_nape::shape::ZPP_Circle ZPP_Circle_obj::__copy( ){
	HX_STACK_FRAME("zpp_nape.shape.ZPP_Circle","__copy",0x21918180,"zpp_nape.shape.ZPP_Circle.__copy","zpp_nape/shape/Circle.hx",376,0x3e895b1e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(377)
	Float tmp = this->radius;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(377)
	::nape::shape::Circle tmp1 = ::nape::shape::Circle_obj::__new(tmp,null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(377)
	::zpp_nape::shape::ZPP_Circle ret = tmp1->zpp_inner_zn;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(378)
	{
		HX_STACK_LINE(379)
		Float tmp2 = this->localCOMx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(379)
		ret->localCOMx = tmp2;
		HX_STACK_LINE(380)
		Float tmp3 = this->localCOMy;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(380)
		ret->localCOMy = tmp3;
		HX_STACK_LINE(389)
		{
		}
	}
	HX_STACK_LINE(398)
	ret->zip_localCOM = false;
	HX_STACK_LINE(399)
	::zpp_nape::shape::ZPP_Circle tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(399)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Circle_obj,__copy,return )


ZPP_Circle_obj::ZPP_Circle_obj()
{
}

void ZPP_Circle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Circle);
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	HX_MARK_MEMBER_NAME(radius,"radius");
	::zpp_nape::shape::ZPP_Shape_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_Circle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	HX_VISIT_MEMBER_NAME(radius,"radius");
	::zpp_nape::shape::ZPP_Shape_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_Circle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { return radius; }
		if (HX_FIELD_EQ(inName,"__copy") ) { return __copy_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__clear") ) { return __clear_dyn(); }
		if (HX_FIELD_EQ(inName,"__scale") ) { return __scale_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		if (HX_FIELD_EQ(inName,"__rotate") ) { return __rotate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__translate") ) { return __translate_dyn(); }
		if (HX_FIELD_EQ(inName,"__transform") ) { return __transform_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setupLocalCOM") ) { return setupLocalCOM_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__validate_aabb") ) { return __validate_aabb_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"invalidate_radius") ) { return invalidate_radius_dyn(); }
		if (HX_FIELD_EQ(inName,"localCOM_validate") ) { return localCOM_validate_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"localCOM_immutable") ) { return localCOM_immutable_dyn(); }
		if (HX_FIELD_EQ(inName,"__validate_angDrag") ) { return __validate_angDrag_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"localCOM_invalidate") ) { return localCOM_invalidate_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_force_validate_aabb") ) { return _force_validate_aabb_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__validate_sweepRadius") ) { return __validate_sweepRadius_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__validate_area_inertia") ) { return __validate_area_inertia_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Circle_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::shape::Circle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Circle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_Circle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"));
	outFields->push(HX_HCSTRING("radius","\x52","\xd0","\xf6","\xb0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::shape::Circle*/ ,(int)offsetof(ZPP_Circle_obj,outer_zn),HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2")},
	{hx::fsFloat,(int)offsetof(ZPP_Circle_obj,radius),HX_HCSTRING("radius","\x52","\xd0","\xf6","\xb0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"),
	HX_HCSTRING("radius","\x52","\xd0","\xf6","\xb0"),
	HX_HCSTRING("__clear","\x6d","\xca","\xb9","\xb2"),
	HX_HCSTRING("invalidate_radius","\xd6","\xbd","\xe5","\x99"),
	HX_HCSTRING("localCOM_validate","\x9f","\x5d","\x8b","\x87"),
	HX_HCSTRING("localCOM_invalidate","\xc4","\xba","\x95","\xac"),
	HX_HCSTRING("localCOM_immutable","\x19","\x03","\xbb","\x36"),
	HX_HCSTRING("setupLocalCOM","\x33","\x77","\xff","\x8f"),
	HX_HCSTRING("__validate_aabb","\x09","\x47","\xfd","\x13"),
	HX_HCSTRING("_force_validate_aabb","\x96","\x2c","\xfa","\xe5"),
	HX_HCSTRING("__validate_sweepRadius","\x15","\x3e","\x74","\xe7"),
	HX_HCSTRING("__validate_area_inertia","\x71","\x20","\xbf","\xea"),
	HX_HCSTRING("__validate_angDrag","\x25","\x0b","\x63","\xbc"),
	HX_HCSTRING("__scale","\x6a","\x27","\x2d","\xe3"),
	HX_HCSTRING("__translate","\x2e","\x20","\xac","\x77"),
	HX_HCSTRING("__rotate","\x7b","\xb1","\x4f","\x73"),
	HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"),
	HX_HCSTRING("__copy","\xd5","\x1e","\xbd","\xf0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Circle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Circle_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_Circle_obj::__mClass;

void ZPP_Circle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.shape.ZPP_Circle","\x63","\xd6","\xcf","\xf9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_Circle_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Circle_obj >;
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
} // end namespace shape
