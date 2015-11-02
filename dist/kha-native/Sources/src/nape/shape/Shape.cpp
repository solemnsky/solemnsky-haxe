#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_FluidProperties
#include <nape/phys/FluidProperties.h>
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
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeType
#include <nape/shape/ShapeType.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Collide
#include <zpp_nape/geom/ZPP_Collide.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Geom
#include <zpp_nape/geom/ZPP_Geom.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace nape{
namespace shape{

Void Shape_obj::__construct()
{
HX_STACK_FRAME("nape.shape.Shape","new",0x749b3160,"nape.shape.Shape.new","nape/shape/Shape.hx",177,0x036d22d2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(181)
	this->zpp_inner = null();
	HX_STACK_LINE(218)
	::nape::phys::Interactor_obj::zpp_internalAlloc = true;
	HX_STACK_LINE(219)
	super::__construct();
	HX_STACK_LINE(220)
	::nape::phys::Interactor_obj::zpp_internalAlloc = false;
	HX_STACK_LINE(226)
	bool tmp = ::nape::shape::Shape_obj::zpp_internalAlloc;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(226)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(226)
	if ((tmp1)){
		HX_STACK_LINE(226)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Shape cannot be instantiated derp!","\x49","\x63","\x3e","\x47"));
	}
}
;
	return null();
}

//Shape_obj::~Shape_obj() { }

Dynamic Shape_obj::__CreateEmpty() { return  new Shape_obj; }
hx::ObjectPtr< Shape_obj > Shape_obj::__new()
{  hx::ObjectPtr< Shape_obj > _result_ = new Shape_obj();
	_result_->__construct();
	return _result_;}

Dynamic Shape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shape_obj > _result_ = new Shape_obj();
	_result_->__construct();
	return _result_;}

::nape::shape::ShapeType Shape_obj::get_type( ){
	HX_STACK_FRAME("nape.shape.Shape","get_type",0x151cad43,"nape.shape.Shape.get_type","nape/shape/Shape.hx",187,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(188)
	Array< ::Dynamic > tmp = ::zpp_nape::shape::ZPP_Shape_obj::types;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(188)
	::zpp_nape::shape::ZPP_Shape tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(188)
	int tmp2 = tmp1->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(188)
	::nape::shape::ShapeType tmp3 = tmp->__get(tmp2).StaticCast< ::nape::shape::ShapeType >();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(188)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_type,return )

bool Shape_obj::isCircle( ){
	HX_STACK_FRAME("nape.shape.Shape","isCircle",0xf6d00c9a,"nape.shape.Shape.isCircle","nape/shape/Shape.hx",197,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(198)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(198)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(198)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,isCircle,return )

bool Shape_obj::isPolygon( ){
	HX_STACK_FRAME("nape.shape.Shape","isPolygon",0x1c15a0b0,"nape.shape.Shape.isPolygon","nape/shape/Shape.hx",207,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(208)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(208)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(208)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,isPolygon,return )

::nape::phys::Body Shape_obj::get_body( ){
	HX_STACK_FRAME("nape.shape.Shape","get_body",0x092f352b,"nape.shape.Shape.get_body","nape/shape/Shape.hx",239,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(240)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(240)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->body;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(240)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(240)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(240)
	if ((tmp2)){
		HX_STACK_LINE(240)
		::zpp_nape::shape::ZPP_Shape tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(240)
		tmp3 = tmp4->body->outer;
	}
	else{
		HX_STACK_LINE(240)
		tmp3 = null();
	}
	HX_STACK_LINE(240)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_body,return )

::nape::phys::Body Shape_obj::set_body( ::nape::phys::Body body){
	HX_STACK_FRAME("nape.shape.Shape","set_body",0xb78c8e9f,"nape.shape.Shape.set_body","nape/shape/Shape.hx",242,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_LINE(243)
	{
		HX_STACK_LINE(244)
		::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(244)
		tmp->immutable_midstep(HX_HCSTRING("Shape::body","\x23","\x17","\xec","\x18"));
		HX_STACK_LINE(245)
		::zpp_nape::shape::ZPP_Shape tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(245)
		::zpp_nape::phys::ZPP_Body tmp2 = tmp1->body;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(245)
		::nape::phys::Body tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(245)
		if ((tmp3)){
			HX_STACK_LINE(245)
			::zpp_nape::shape::ZPP_Shape tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(245)
			tmp4 = tmp5->body->outer;
		}
		else{
			HX_STACK_LINE(245)
			tmp4 = null();
		}
		HX_STACK_LINE(245)
		::nape::phys::Body tmp5 = body;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(245)
		bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(245)
		if ((tmp6)){
			HX_STACK_LINE(246)
			::zpp_nape::shape::ZPP_Shape tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(246)
			::zpp_nape::phys::ZPP_Body tmp8 = tmp7->body;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(246)
			bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(246)
			if ((tmp9)){
				HX_STACK_LINE(246)
				::zpp_nape::shape::ZPP_Shape tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(246)
				::zpp_nape::phys::ZPP_Body tmp11 = tmp10->body;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(246)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(246)
				::nape::phys::Body tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(246)
				if ((tmp12)){
					HX_STACK_LINE(246)
					::zpp_nape::shape::ZPP_Shape tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(246)
					tmp13 = tmp14->body->outer;
				}
				else{
					HX_STACK_LINE(246)
					tmp13 = null();
				}
				HX_STACK_LINE(246)
				::nape::shape::ShapeList tmp14 = tmp13->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(246)
				tmp14->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(247)
			bool tmp10 = (body != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(247)
			if ((tmp10)){
				HX_STACK_LINE(247)
				::nape::shape::ShapeList tmp11 = body->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(247)
				::nape::shape::ShapeList _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(247)
				bool tmp12 = _this->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(247)
				if ((tmp12)){
					HX_STACK_LINE(247)
					_this->push(hx::ObjectPtr<OBJ_>(this));
				}
				else{
					HX_STACK_LINE(247)
					_this->unshift(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
	}
	HX_STACK_LINE(250)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(250)
	::zpp_nape::phys::ZPP_Body tmp1 = tmp->body;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(250)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(250)
	::nape::phys::Body tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(250)
	if ((tmp2)){
		HX_STACK_LINE(250)
		::zpp_nape::shape::ZPP_Shape tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(250)
		tmp3 = tmp4->body->outer;
	}
	else{
		HX_STACK_LINE(250)
		tmp3 = null();
	}
	HX_STACK_LINE(250)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_body,return )

::nape::shape::Circle Shape_obj::get_castCircle( ){
	HX_STACK_FRAME("nape.shape.Shape","get_castCircle",0xcfe1e578,"nape.shape.Shape.get_castCircle","nape/shape/Shape.hx",257,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(258)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(258)
	int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(258)
	int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(258)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(258)
	::nape::shape::Circle tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(258)
	if ((tmp3)){
		HX_STACK_LINE(258)
		::zpp_nape::shape::ZPP_Shape tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(258)
		tmp4 = tmp5->circle->outer_zn;
	}
	else{
		HX_STACK_LINE(258)
		tmp4 = null();
	}
	HX_STACK_LINE(258)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_castCircle,return )

::nape::shape::Polygon Shape_obj::get_castPolygon( ){
	HX_STACK_FRAME("nape.shape.Shape","get_castPolygon",0x32a18a12,"nape.shape.Shape.get_castPolygon","nape/shape/Shape.hx",265,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(266)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(266)
	int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(266)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(266)
	::nape::shape::Polygon tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(266)
	if ((tmp3)){
		HX_STACK_LINE(266)
		::zpp_nape::shape::ZPP_Shape tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(266)
		tmp4 = tmp5->polygon->outer_zn;
	}
	else{
		HX_STACK_LINE(266)
		tmp4 = null();
	}
	HX_STACK_LINE(266)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_castPolygon,return )

::nape::geom::Vec2 Shape_obj::get_worldCOM( ){
	HX_STACK_FRAME("nape.shape.Shape","get_worldCOM",0xdbe1f818,"nape.shape.Shape.get_worldCOM","nape/shape/Shape.hx",279,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(280)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(280)
	::nape::geom::Vec2 tmp1 = tmp->wrap_worldCOM;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(280)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(280)
	if ((tmp2)){
		HX_STACK_LINE(281)
		::nape::geom::Vec2 tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(281)
		{
			HX_STACK_LINE(281)
			::zpp_nape::shape::ZPP_Shape tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(281)
			Float x = tmp4->worldCOMx;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(281)
			::zpp_nape::shape::ZPP_Shape tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(281)
			Float y = tmp5->worldCOMy;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(281)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(281)
			bool tmp6 = (x != x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(281)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(281)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(281)
			if ((tmp7)){
				HX_STACK_LINE(281)
				tmp8 = (y != y);
			}
			else{
				HX_STACK_LINE(281)
				tmp8 = true;
			}
			HX_STACK_LINE(281)
			if ((tmp8)){
				HX_STACK_LINE(281)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(281)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(281)
			{
				HX_STACK_LINE(281)
				::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(281)
				bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(281)
				if ((tmp10)){
					HX_STACK_LINE(281)
					::nape::geom::Vec2 tmp11 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(281)
					ret = tmp11;
				}
				else{
					HX_STACK_LINE(281)
					::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(281)
					ret = tmp11;
					HX_STACK_LINE(281)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(281)
					ret->zpp_pool = null();
					HX_STACK_LINE(281)
					ret->zpp_disp = false;
					HX_STACK_LINE(281)
					::nape::geom::Vec2 tmp12 = ret;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(281)
					::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(281)
					bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(281)
					if ((tmp14)){
						HX_STACK_LINE(281)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(281)
			bool tmp9 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(281)
			if ((tmp9)){
				HX_STACK_LINE(281)
				::zpp_nape::geom::ZPP_Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(281)
				{
					HX_STACK_LINE(281)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(281)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(281)
					{
						HX_STACK_LINE(281)
						::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(281)
						bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(281)
						if ((tmp12)){
							HX_STACK_LINE(281)
							::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(281)
							ret1 = tmp13;
						}
						else{
							HX_STACK_LINE(281)
							::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(281)
							ret1 = tmp13;
							HX_STACK_LINE(281)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(281)
							ret1->next = null();
						}
						HX_STACK_LINE(281)
						ret1->weak = false;
					}
					HX_STACK_LINE(281)
					ret1->_immutable = immutable;
					HX_STACK_LINE(281)
					{
						HX_STACK_LINE(281)
						ret1->x = x;
						HX_STACK_LINE(281)
						ret1->y = y;
						HX_STACK_LINE(281)
						{
						}
					}
					HX_STACK_LINE(281)
					tmp10 = ret1;
				}
				HX_STACK_LINE(281)
				ret->zpp_inner = tmp10;
				HX_STACK_LINE(281)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(281)
				{
					HX_STACK_LINE(281)
					bool tmp10 = (ret != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(281)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(281)
					if ((tmp10)){
						HX_STACK_LINE(281)
						tmp11 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(281)
						tmp11 = false;
					}
					HX_STACK_LINE(281)
					if ((tmp11)){
						HX_STACK_LINE(281)
						::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(281)
						::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(281)
						HX_STACK_DO_THROW(tmp13);
					}
				}
				HX_STACK_LINE(281)
				{
					HX_STACK_LINE(281)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(281)
					bool tmp10 = _this->_immutable;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(281)
					if ((tmp10)){
						HX_STACK_LINE(281)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(281)
					bool tmp11 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(281)
					if ((tmp11)){
						HX_STACK_LINE(281)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(281)
				bool tmp10 = (x != x);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(281)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(281)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(281)
				if ((tmp11)){
					HX_STACK_LINE(281)
					tmp12 = (y != y);
				}
				else{
					HX_STACK_LINE(281)
					tmp12 = true;
				}
				HX_STACK_LINE(281)
				if ((tmp12)){
					HX_STACK_LINE(281)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(281)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(281)
				{
					HX_STACK_LINE(281)
					{
						HX_STACK_LINE(281)
						bool tmp14 = (ret != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(281)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(281)
						if ((tmp14)){
							HX_STACK_LINE(281)
							tmp15 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(281)
							tmp15 = false;
						}
						HX_STACK_LINE(281)
						if ((tmp15)){
							HX_STACK_LINE(281)
							::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(281)
							::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(281)
							HX_STACK_DO_THROW(tmp17);
						}
					}
					HX_STACK_LINE(281)
					{
						HX_STACK_LINE(281)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(281)
						bool tmp14 = (_this->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(281)
						if ((tmp14)){
							HX_STACK_LINE(281)
							_this->_validate();
						}
					}
					HX_STACK_LINE(281)
					tmp13 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(281)
				Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(281)
				bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(281)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(281)
				if ((tmp15)){
					HX_STACK_LINE(281)
					Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(281)
					{
						HX_STACK_LINE(281)
						{
							HX_STACK_LINE(281)
							bool tmp18 = (ret != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(281)
							bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(281)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(281)
							bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(281)
							if ((tmp21)){
								HX_STACK_LINE(281)
								tmp20 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(281)
								tmp20 = false;
							}
							HX_STACK_LINE(281)
							bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(281)
							if ((tmp22)){
								HX_STACK_LINE(281)
								::String tmp23 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(281)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(281)
								::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(281)
								::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(281)
								::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(281)
								HX_STACK_DO_THROW(tmp27);
							}
						}
						HX_STACK_LINE(281)
						{
							HX_STACK_LINE(281)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(281)
							bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(281)
							bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(281)
							bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(281)
							if ((tmp20)){
								HX_STACK_LINE(281)
								_this->_validate();
							}
						}
						HX_STACK_LINE(281)
						Float tmp18 = ret->zpp_inner->y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(281)
						tmp17 = tmp18;
					}
					HX_STACK_LINE(281)
					Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(281)
					tmp16 = (tmp17 == tmp18);
				}
				else{
					HX_STACK_LINE(281)
					tmp16 = false;
				}
				HX_STACK_LINE(281)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(281)
				if ((tmp17)){
					HX_STACK_LINE(281)
					{
						HX_STACK_LINE(281)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(281)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(281)
						{
						}
					}
					HX_STACK_LINE(281)
					{
						HX_STACK_LINE(281)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(281)
						bool tmp18 = (_this->_invalidate != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(281)
						if ((tmp18)){
							HX_STACK_LINE(281)
							::zpp_nape::geom::ZPP_Vec2 tmp19 = _this;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(281)
							_this->_invalidate(tmp19);
						}
					}
				}
				HX_STACK_LINE(281)
				ret;
			}
			HX_STACK_LINE(281)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(281)
			tmp3 = ret;
		}
		HX_STACK_LINE(281)
		::zpp_nape::shape::ZPP_Shape tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(281)
		tmp4->wrap_worldCOM = tmp3;
		HX_STACK_LINE(282)
		::zpp_nape::shape::ZPP_Shape tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(282)
		::zpp_nape::geom::ZPP_Vec2 tmp6 = tmp5->wrap_worldCOM->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(282)
		tmp6->_inuse = true;
		HX_STACK_LINE(283)
		::zpp_nape::shape::ZPP_Shape tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(283)
		::zpp_nape::geom::ZPP_Vec2 tmp8 = tmp7->wrap_worldCOM->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(283)
		tmp8->_immutable = true;
		HX_STACK_LINE(284)
		::zpp_nape::shape::ZPP_Shape tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(284)
		::zpp_nape::shape::ZPP_Shape tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(284)
		::zpp_nape::geom::ZPP_Vec2 tmp11 = tmp10->wrap_worldCOM->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(284)
		tmp11->_validate = tmp9->getworldCOM_dyn();
	}
	HX_STACK_LINE(286)
	::zpp_nape::shape::ZPP_Shape tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(286)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_worldCOM;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(286)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_worldCOM,return )

::nape::geom::Vec2 Shape_obj::get_localCOM( ){
	HX_STACK_FRAME("nape.shape.Shape","get_localCOM",0x173dfa9f,"nape.shape.Shape.get_localCOM","nape/shape/Shape.hx",300,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(301)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(301)
	::nape::geom::Vec2 tmp1 = tmp->wrap_localCOM;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(301)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(301)
	if ((tmp2)){
		HX_STACK_LINE(302)
		::zpp_nape::shape::ZPP_Shape tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(302)
		int tmp4 = tmp3->type;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(302)
		int tmp5 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(302)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(302)
		if ((tmp6)){
			HX_STACK_LINE(302)
			::zpp_nape::shape::ZPP_Shape tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(302)
			tmp7->circle->setupLocalCOM();
		}
		else{
			HX_STACK_LINE(303)
			::zpp_nape::shape::ZPP_Shape tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(303)
			tmp7->polygon->setupLocalCOM();
		}
	}
	HX_STACK_LINE(305)
	::zpp_nape::shape::ZPP_Shape tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(305)
	::nape::geom::Vec2 tmp4 = tmp3->wrap_localCOM;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(305)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_localCOM,return )

::nape::geom::Vec2 Shape_obj::set_localCOM( ::nape::geom::Vec2 localCOM){
	HX_STACK_FRAME("nape.shape.Shape","set_localCOM",0x2c371e13,"nape.shape.Shape.set_localCOM","nape/shape/Shape.hx",307,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(localCOM,"localCOM")
	HX_STACK_LINE(308)
	{
		HX_STACK_LINE(309)
		::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(309)
		tmp->immutable_midstep(HX_HCSTRING("Body::localCOM","\x98","\x27","\x7e","\x42"));
		HX_STACK_LINE(310)
		{
			HX_STACK_LINE(312)
			bool tmp1 = (localCOM != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(312)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(312)
			if ((tmp1)){
				HX_STACK_LINE(312)
				tmp2 = localCOM->zpp_disp;
			}
			else{
				HX_STACK_LINE(312)
				tmp2 = false;
			}
			HX_STACK_LINE(312)
			if ((tmp2)){
				HX_STACK_LINE(312)
				::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(312)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(312)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(316)
		::zpp_nape::shape::ZPP_Shape tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(316)
		::zpp_nape::phys::ZPP_Body tmp2 = tmp1->body;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(316)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(316)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(316)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(316)
		if ((tmp4)){
			HX_STACK_LINE(316)
			::zpp_nape::shape::ZPP_Shape tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(316)
			::zpp_nape::shape::ZPP_Shape tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(316)
			::zpp_nape::shape::ZPP_Shape tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(316)
			::zpp_nape::space::ZPP_Space tmp9 = tmp8->body->space;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(316)
			::zpp_nape::space::ZPP_Space tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(316)
			::zpp_nape::space::ZPP_Space tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(316)
			tmp5 = (tmp11 != null());
		}
		else{
			HX_STACK_LINE(316)
			tmp5 = false;
		}
		HX_STACK_LINE(316)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(316)
		if ((tmp5)){
			HX_STACK_LINE(316)
			::zpp_nape::shape::ZPP_Shape tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(316)
			::zpp_nape::shape::ZPP_Shape tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(316)
			int tmp9 = tmp8->body->type;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(316)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(316)
			int tmp11 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(316)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(316)
			tmp6 = (tmp10 == tmp12);
		}
		else{
			HX_STACK_LINE(316)
			tmp6 = false;
		}
		HX_STACK_LINE(316)
		if ((tmp6)){
			HX_STACK_LINE(316)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot modify Shape belonging to a static Object once inside a Space","\x82","\x96","\x75","\x9f"));
		}
		HX_STACK_LINE(317)
		bool tmp7 = (localCOM == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(317)
		if ((tmp7)){
			HX_STACK_LINE(317)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Shape::localCOM cannot be null","\x1e","\x36","\xfd","\xe4"));
		}
		HX_STACK_LINE(319)
		{
			HX_STACK_LINE(319)
			::nape::geom::Vec2 tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				::zpp_nape::shape::ZPP_Shape tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(319)
				::nape::geom::Vec2 tmp10 = tmp9->wrap_localCOM;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(319)
				bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(319)
				if ((tmp11)){
					HX_STACK_LINE(319)
					::zpp_nape::shape::ZPP_Shape tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(319)
					int tmp13 = tmp12->type;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(319)
					int tmp14 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(319)
					bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(319)
					if ((tmp15)){
						HX_STACK_LINE(319)
						::zpp_nape::shape::ZPP_Shape tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(319)
						tmp16->circle->setupLocalCOM();
					}
					else{
						HX_STACK_LINE(319)
						::zpp_nape::shape::ZPP_Shape tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(319)
						tmp16->polygon->setupLocalCOM();
					}
				}
				HX_STACK_LINE(319)
				::zpp_nape::shape::ZPP_Shape tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(319)
				tmp8 = tmp12->wrap_localCOM;
			}
			HX_STACK_LINE(319)
			::nape::geom::Vec2 _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				bool tmp9 = (_this != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(319)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(319)
				if ((tmp9)){
					HX_STACK_LINE(319)
					tmp10 = _this->zpp_disp;
				}
				else{
					HX_STACK_LINE(319)
					tmp10 = false;
				}
				HX_STACK_LINE(319)
				if ((tmp10)){
					HX_STACK_LINE(319)
					::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(319)
					::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(319)
					HX_STACK_DO_THROW(tmp12);
				}
			}
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				bool tmp9 = (localCOM != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(319)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(319)
				if ((tmp9)){
					HX_STACK_LINE(319)
					tmp10 = localCOM->zpp_disp;
				}
				else{
					HX_STACK_LINE(319)
					tmp10 = false;
				}
				HX_STACK_LINE(319)
				if ((tmp10)){
					HX_STACK_LINE(319)
					::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(319)
					::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(319)
					HX_STACK_DO_THROW(tmp12);
				}
			}
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(319)
				bool tmp9 = _this1->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(319)
				if ((tmp9)){
					HX_STACK_LINE(319)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
				}
				HX_STACK_LINE(319)
				bool tmp10 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(319)
				if ((tmp10)){
					HX_STACK_LINE(319)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(319)
			bool tmp9 = (localCOM == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(319)
			if ((tmp9)){
				HX_STACK_LINE(319)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null Vec2","\x95","\x15","\x46","\x66"));
			}
			HX_STACK_LINE(319)
			::nape::geom::Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					bool tmp12 = (localCOM != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(319)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(319)
					if ((tmp12)){
						HX_STACK_LINE(319)
						tmp13 = localCOM->zpp_disp;
					}
					else{
						HX_STACK_LINE(319)
						tmp13 = false;
					}
					HX_STACK_LINE(319)
					if ((tmp13)){
						HX_STACK_LINE(319)
						::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(319)
						::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(319)
						HX_STACK_DO_THROW(tmp15);
					}
					HX_STACK_LINE(319)
					{
						HX_STACK_LINE(319)
						::zpp_nape::geom::ZPP_Vec2 _this1 = localCOM->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(319)
						bool tmp14 = (_this1->_validate != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(319)
						if ((tmp14)){
							HX_STACK_LINE(319)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(319)
					tmp11 = localCOM->zpp_inner->x;
				}
				HX_STACK_LINE(319)
				Float x = tmp11;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(319)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					bool tmp13 = (localCOM != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(319)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(319)
					if ((tmp13)){
						HX_STACK_LINE(319)
						tmp14 = localCOM->zpp_disp;
					}
					else{
						HX_STACK_LINE(319)
						tmp14 = false;
					}
					HX_STACK_LINE(319)
					if ((tmp14)){
						HX_STACK_LINE(319)
						::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(319)
						::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(319)
						HX_STACK_DO_THROW(tmp16);
					}
					HX_STACK_LINE(319)
					{
						HX_STACK_LINE(319)
						::zpp_nape::geom::ZPP_Vec2 _this1 = localCOM->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(319)
						bool tmp15 = (_this1->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(319)
						if ((tmp15)){
							HX_STACK_LINE(319)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(319)
					tmp12 = localCOM->zpp_inner->y;
				}
				HX_STACK_LINE(319)
				Float y = tmp12;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					bool tmp13 = (_this != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(319)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(319)
					if ((tmp13)){
						HX_STACK_LINE(319)
						tmp14 = _this->zpp_disp;
					}
					else{
						HX_STACK_LINE(319)
						tmp14 = false;
					}
					HX_STACK_LINE(319)
					if ((tmp14)){
						HX_STACK_LINE(319)
						::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(319)
						::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(319)
						HX_STACK_DO_THROW(tmp16);
					}
				}
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(319)
					bool tmp13 = _this1->_immutable;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(319)
					if ((tmp13)){
						HX_STACK_LINE(319)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(319)
					bool tmp14 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(319)
					if ((tmp14)){
						HX_STACK_LINE(319)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(319)
				bool tmp13 = (x != x);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(319)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(319)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(319)
				if ((tmp14)){
					HX_STACK_LINE(319)
					tmp15 = (y != y);
				}
				else{
					HX_STACK_LINE(319)
					tmp15 = true;
				}
				HX_STACK_LINE(319)
				if ((tmp15)){
					HX_STACK_LINE(319)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(319)
				Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(319)
					{
						HX_STACK_LINE(319)
						bool tmp17 = (_this != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(319)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(319)
						if ((tmp17)){
							HX_STACK_LINE(319)
							tmp18 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(319)
							tmp18 = false;
						}
						HX_STACK_LINE(319)
						if ((tmp18)){
							HX_STACK_LINE(319)
							::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(319)
							::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(319)
							HX_STACK_DO_THROW(tmp20);
						}
					}
					HX_STACK_LINE(319)
					{
						HX_STACK_LINE(319)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(319)
						bool tmp17 = (_this1->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(319)
						if ((tmp17)){
							HX_STACK_LINE(319)
							_this1->_validate();
						}
					}
					HX_STACK_LINE(319)
					tmp16 = _this->zpp_inner->x;
				}
				HX_STACK_LINE(319)
				Float tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(319)
				bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(319)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(319)
				if ((tmp18)){
					HX_STACK_LINE(319)
					Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(319)
					{
						HX_STACK_LINE(319)
						{
							HX_STACK_LINE(319)
							bool tmp21 = (_this != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(319)
							bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(319)
							bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(319)
							bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(319)
							if ((tmp24)){
								HX_STACK_LINE(319)
								tmp23 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(319)
								tmp23 = false;
							}
							HX_STACK_LINE(319)
							bool tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(319)
							if ((tmp25)){
								HX_STACK_LINE(319)
								::String tmp26 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(319)
								::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(319)
								::String tmp28 = (tmp27 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(319)
								::String tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(319)
								::String tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(319)
								HX_STACK_DO_THROW(tmp30);
							}
						}
						HX_STACK_LINE(319)
						{
							HX_STACK_LINE(319)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(319)
							bool tmp21 = (_this1->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(319)
							bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(319)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(319)
							if ((tmp23)){
								HX_STACK_LINE(319)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(319)
						Float tmp21 = _this->zpp_inner->y;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(319)
						tmp20 = tmp21;
					}
					HX_STACK_LINE(319)
					Float tmp21 = y;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(319)
					tmp19 = (tmp20 == tmp21);
				}
				else{
					HX_STACK_LINE(319)
					tmp19 = false;
				}
				HX_STACK_LINE(319)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(319)
				if ((tmp20)){
					HX_STACK_LINE(319)
					{
						HX_STACK_LINE(319)
						_this->zpp_inner->x = x;
						HX_STACK_LINE(319)
						_this->zpp_inner->y = y;
						HX_STACK_LINE(319)
						{
						}
					}
					HX_STACK_LINE(319)
					{
						HX_STACK_LINE(319)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(319)
						bool tmp21 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(319)
						if ((tmp21)){
							HX_STACK_LINE(319)
							::zpp_nape::geom::ZPP_Vec2 tmp22 = _this1;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(319)
							_this1->_invalidate(tmp22);
						}
					}
				}
				HX_STACK_LINE(319)
				tmp10 = _this;
			}
			HX_STACK_LINE(319)
			::nape::geom::Vec2 ret = tmp10;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(319)
				tmp11 = localCOM->zpp_inner->weak;
				HX_STACK_LINE(319)
				if ((tmp11)){
					HX_STACK_LINE(319)
					{
						HX_STACK_LINE(319)
						{
							HX_STACK_LINE(319)
							bool tmp12 = (localCOM != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(319)
							bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(319)
							if ((tmp12)){
								HX_STACK_LINE(319)
								tmp13 = localCOM->zpp_disp;
							}
							else{
								HX_STACK_LINE(319)
								tmp13 = false;
							}
							HX_STACK_LINE(319)
							if ((tmp13)){
								HX_STACK_LINE(319)
								::String tmp14 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(319)
								::String tmp15 = (tmp14 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(319)
								HX_STACK_DO_THROW(tmp15);
							}
						}
						HX_STACK_LINE(319)
						{
							HX_STACK_LINE(319)
							::zpp_nape::geom::ZPP_Vec2 _this1 = localCOM->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(319)
							bool tmp12 = _this1->_immutable;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(319)
							if ((tmp12)){
								HX_STACK_LINE(319)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(319)
							bool tmp13 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(319)
							if ((tmp13)){
								HX_STACK_LINE(319)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(319)
						bool tmp12 = localCOM->zpp_inner->_inuse;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(319)
						if ((tmp12)){
							HX_STACK_LINE(319)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(319)
						::zpp_nape::geom::ZPP_Vec2 inner = localCOM->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(319)
						localCOM->zpp_inner->outer = null();
						HX_STACK_LINE(319)
						localCOM->zpp_inner = null();
						HX_STACK_LINE(319)
						{
							HX_STACK_LINE(319)
							::nape::geom::Vec2 o = localCOM;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(319)
							o->zpp_pool = null();
							HX_STACK_LINE(319)
							::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(319)
							bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(319)
							if ((tmp14)){
								HX_STACK_LINE(319)
								::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(319)
								tmp15->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(319)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(319)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(319)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(319)
						{
							HX_STACK_LINE(319)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(319)
							{
								HX_STACK_LINE(319)
								bool tmp13 = (o->outer != null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(319)
								if ((tmp13)){
									HX_STACK_LINE(319)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(319)
									o->outer = null();
								}
								HX_STACK_LINE(319)
								o->_isimmutable = null();
								HX_STACK_LINE(319)
								o->_validate = null();
								HX_STACK_LINE(319)
								o->_invalidate = null();
							}
							HX_STACK_LINE(319)
							::zpp_nape::geom::ZPP_Vec2 tmp13 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(319)
							o->next = tmp13;
							HX_STACK_LINE(319)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(319)
					true;
				}
				else{
					HX_STACK_LINE(319)
					false;
				}
			}
			HX_STACK_LINE(319)
			ret;
		}
	}
	HX_STACK_LINE(321)
	::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(321)
	{
		HX_STACK_LINE(321)
		::zpp_nape::shape::ZPP_Shape tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(321)
		::nape::geom::Vec2 tmp2 = tmp1->wrap_localCOM;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(321)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(321)
		if ((tmp3)){
			HX_STACK_LINE(321)
			::zpp_nape::shape::ZPP_Shape tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(321)
			int tmp5 = tmp4->type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(321)
			int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(321)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(321)
			if ((tmp7)){
				HX_STACK_LINE(321)
				::zpp_nape::shape::ZPP_Shape tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(321)
				tmp8->circle->setupLocalCOM();
			}
			else{
				HX_STACK_LINE(321)
				::zpp_nape::shape::ZPP_Shape tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(321)
				tmp8->polygon->setupLocalCOM();
			}
		}
		HX_STACK_LINE(321)
		::zpp_nape::shape::ZPP_Shape tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(321)
		tmp = tmp4->wrap_localCOM;
	}
	HX_STACK_LINE(321)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_localCOM,return )

Float Shape_obj::get_area( ){
	HX_STACK_FRAME("nape.shape.Shape","get_area",0x08884616,"nape.shape.Shape.get_area","nape/shape/Shape.hx",328,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(329)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(329)
	tmp->validate_area_inertia();
	HX_STACK_LINE(330)
	::zpp_nape::shape::ZPP_Shape tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(330)
	Float tmp2 = tmp1->area;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(330)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_area,return )

Float Shape_obj::get_inertia( ){
	HX_STACK_FRAME("nape.shape.Shape","get_inertia",0x0ec57211,"nape.shape.Shape.get_inertia","nape/shape/Shape.hx",337,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(338)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(338)
	tmp->validate_area_inertia();
	HX_STACK_LINE(339)
	::zpp_nape::shape::ZPP_Shape tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(339)
	Float tmp2 = tmp1->inertia;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(339)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_inertia,return )

Float Shape_obj::get_angDrag( ){
	HX_STACK_FRAME("nape.shape.Shape","get_angDrag",0xca7d8905,"nape.shape.Shape.get_angDrag","nape/shape/Shape.hx",346,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(347)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(347)
	tmp->validate_angDrag();
	HX_STACK_LINE(348)
	::zpp_nape::shape::ZPP_Shape tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(348)
	Float tmp2 = tmp1->angDrag;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(348)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_angDrag,return )

::nape::phys::Material Shape_obj::get_material( ){
	HX_STACK_FRAME("nape.shape.Shape","get_material",0x28038fb0,"nape.shape.Shape.get_material","nape/shape/Shape.hx",357,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(358)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(358)
	::nape::phys::Material tmp1 = tmp->material->wrapper();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(358)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_material,return )

::nape::phys::Material Shape_obj::set_material( ::nape::phys::Material material){
	HX_STACK_FRAME("nape.shape.Shape","set_material",0x3cfcb324,"nape.shape.Shape.set_material","nape/shape/Shape.hx",360,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(material,"material")
	HX_STACK_LINE(361)
	{
		HX_STACK_LINE(362)
		::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(362)
		tmp->immutable_midstep(HX_HCSTRING("Shape::material","\xa8","\xcd","\xa4","\xb9"));
		HX_STACK_LINE(364)
		bool tmp1 = (material == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(364)
		if ((tmp1)){
			HX_STACK_LINE(364)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null as Shape material","\x9d","\xc0","\x89","\x99"));
		}
		HX_STACK_LINE(366)
		::zpp_nape::shape::ZPP_Shape tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(366)
		::zpp_nape::phys::ZPP_Material tmp3 = material->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(366)
		tmp2->setMaterial(tmp3);
	}
	HX_STACK_LINE(368)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(368)
	::nape::phys::Material tmp1 = tmp->material->wrapper();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(368)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_material,return )

::nape::dynamics::InteractionFilter Shape_obj::get_filter( ){
	HX_STACK_FRAME("nape.shape.Shape","get_filter",0x45934e81,"nape.shape.Shape.get_filter","nape/shape/Shape.hx",377,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(378)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(378)
	::nape::dynamics::InteractionFilter tmp1 = tmp->filter->wrapper();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(378)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_filter,return )

::nape::dynamics::InteractionFilter Shape_obj::set_filter( ::nape::dynamics::InteractionFilter filter){
	HX_STACK_FRAME("nape.shape.Shape","set_filter",0x4910ecf5,"nape.shape.Shape.set_filter","nape/shape/Shape.hx",380,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(381)
	{
		HX_STACK_LINE(382)
		::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(382)
		tmp->immutable_midstep(HX_HCSTRING("Shape::filter","\x79","\x9e","\xc6","\x67"));
		HX_STACK_LINE(384)
		bool tmp1 = (filter == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(384)
		if ((tmp1)){
			HX_STACK_LINE(384)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null as Shape filter","\x2e","\x7a","\x75","\x59"));
		}
		HX_STACK_LINE(386)
		::zpp_nape::shape::ZPP_Shape tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(386)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp3 = filter->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(386)
		tmp2->setFilter(tmp3);
	}
	HX_STACK_LINE(388)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(388)
	::nape::dynamics::InteractionFilter tmp1 = tmp->filter->wrapper();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(388)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_filter,return )

::nape::phys::FluidProperties Shape_obj::get_fluidProperties( ){
	HX_STACK_FRAME("nape.shape.Shape","get_fluidProperties",0xa4643ab4,"nape.shape.Shape.get_fluidProperties","nape/shape/Shape.hx",400,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(401)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(401)
	tmp->immutable_midstep(HX_HCSTRING("Shape::fluidProperties","\xbc","\x2b","\xf3","\x66"));
	HX_STACK_LINE(402)
	::zpp_nape::shape::ZPP_Shape tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(402)
	::zpp_nape::phys::ZPP_FluidProperties tmp2 = tmp1->fluidProperties;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(402)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(402)
	if ((tmp3)){
		HX_STACK_LINE(402)
		::zpp_nape::shape::ZPP_Shape tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(402)
		::nape::phys::FluidProperties tmp5 = ::nape::phys::FluidProperties_obj::__new(null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(402)
		::zpp_nape::phys::ZPP_FluidProperties tmp6 = tmp5->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(402)
		tmp4->setFluid(tmp6);
	}
	HX_STACK_LINE(403)
	::zpp_nape::shape::ZPP_Shape tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(403)
	::nape::phys::FluidProperties tmp5 = tmp4->fluidProperties->wrapper();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(403)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_fluidProperties,return )

::nape::phys::FluidProperties Shape_obj::set_fluidProperties( ::nape::phys::FluidProperties fluidProperties){
	HX_STACK_FRAME("nape.shape.Shape","set_fluidProperties",0xe1012dc0,"nape.shape.Shape.set_fluidProperties","nape/shape/Shape.hx",405,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fluidProperties,"fluidProperties")
	HX_STACK_LINE(406)
	{
		HX_STACK_LINE(408)
		bool tmp = (fluidProperties == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(408)
		if ((tmp)){
			HX_STACK_LINE(408)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null as Shape fluidProperties, disable fluids by setting fluidEnabled to false","\xb2","\xc7","\x28","\xb5"));
		}
		HX_STACK_LINE(410)
		::zpp_nape::shape::ZPP_Shape tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(410)
		::zpp_nape::phys::ZPP_FluidProperties tmp2 = fluidProperties->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(410)
		tmp1->setFluid(tmp2);
	}
	HX_STACK_LINE(412)
	::nape::phys::FluidProperties tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(412)
	{
		HX_STACK_LINE(412)
		::zpp_nape::shape::ZPP_Shape tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(412)
		tmp1->immutable_midstep(HX_HCSTRING("Shape::fluidProperties","\xbc","\x2b","\xf3","\x66"));
		HX_STACK_LINE(412)
		::zpp_nape::shape::ZPP_Shape tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(412)
		::zpp_nape::phys::ZPP_FluidProperties tmp3 = tmp2->fluidProperties;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(412)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(412)
		if ((tmp4)){
			HX_STACK_LINE(412)
			::zpp_nape::shape::ZPP_Shape tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(412)
			::nape::phys::FluidProperties tmp6 = ::nape::phys::FluidProperties_obj::__new(null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(412)
			::zpp_nape::phys::ZPP_FluidProperties tmp7 = tmp6->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(412)
			tmp5->setFluid(tmp7);
		}
		HX_STACK_LINE(412)
		::zpp_nape::shape::ZPP_Shape tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(412)
		tmp = tmp5->fluidProperties->wrapper();
	}
	HX_STACK_LINE(412)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_fluidProperties,return )

bool Shape_obj::get_fluidEnabled( ){
	HX_STACK_FRAME("nape.shape.Shape","get_fluidEnabled",0x76ed7320,"nape.shape.Shape.get_fluidEnabled","nape/shape/Shape.hx",428,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(429)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(429)
	bool tmp1 = tmp->fluidEnabled;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(429)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_fluidEnabled,return )

bool Shape_obj::set_fluidEnabled( bool fluidEnabled){
	HX_STACK_FRAME("nape.shape.Shape","set_fluidEnabled",0xcd2f6094,"nape.shape.Shape.set_fluidEnabled","nape/shape/Shape.hx",431,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fluidEnabled,"fluidEnabled")
	HX_STACK_LINE(432)
	{
		HX_STACK_LINE(433)
		::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(433)
		tmp->immutable_midstep(HX_HCSTRING("Shape::fluidEnabled","\x18","\x0d","\xd1","\x29"));
		HX_STACK_LINE(434)
		::zpp_nape::shape::ZPP_Shape tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(434)
		tmp1->fluidEnabled = fluidEnabled;
		HX_STACK_LINE(435)
		bool tmp2 = fluidEnabled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(435)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(435)
		if ((tmp2)){
			HX_STACK_LINE(435)
			::zpp_nape::shape::ZPP_Shape tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(435)
			::zpp_nape::shape::ZPP_Shape tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(435)
			::zpp_nape::phys::ZPP_FluidProperties tmp6 = tmp5->fluidProperties;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(435)
			tmp3 = (tmp6 == null());
		}
		else{
			HX_STACK_LINE(435)
			tmp3 = false;
		}
		HX_STACK_LINE(435)
		if ((tmp3)){
			HX_STACK_LINE(435)
			::nape::phys::FluidProperties fluidProperties = ::nape::phys::FluidProperties_obj::__new(null(),null());		HX_STACK_VAR(fluidProperties,"fluidProperties");
			HX_STACK_LINE(435)
			{
				HX_STACK_LINE(435)
				bool tmp4 = (fluidProperties == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(435)
				if ((tmp4)){
					HX_STACK_LINE(435)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null as Shape fluidProperties, disable fluids by setting fluidEnabled to false","\xb2","\xc7","\x28","\xb5"));
				}
				HX_STACK_LINE(435)
				::zpp_nape::shape::ZPP_Shape tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(435)
				::zpp_nape::phys::ZPP_FluidProperties tmp6 = fluidProperties->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(435)
				tmp5->setFluid(tmp6);
			}
			HX_STACK_LINE(435)
			{
				HX_STACK_LINE(435)
				::zpp_nape::shape::ZPP_Shape tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(435)
				tmp4->immutable_midstep(HX_HCSTRING("Shape::fluidProperties","\xbc","\x2b","\xf3","\x66"));
				HX_STACK_LINE(435)
				::zpp_nape::shape::ZPP_Shape tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(435)
				::zpp_nape::phys::ZPP_FluidProperties tmp6 = tmp5->fluidProperties;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(435)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(435)
				if ((tmp7)){
					HX_STACK_LINE(435)
					::zpp_nape::shape::ZPP_Shape tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(435)
					::nape::phys::FluidProperties tmp9 = ::nape::phys::FluidProperties_obj::__new(null(),null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(435)
					::zpp_nape::phys::ZPP_FluidProperties tmp10 = tmp9->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(435)
					tmp8->setFluid(tmp10);
				}
				HX_STACK_LINE(435)
				::zpp_nape::shape::ZPP_Shape tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(435)
				tmp8->fluidProperties->wrapper();
			}
		}
		HX_STACK_LINE(436)
		::zpp_nape::shape::ZPP_Shape tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(436)
		tmp4->wake();
	}
	HX_STACK_LINE(438)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(438)
	bool tmp1 = tmp->fluidEnabled;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(438)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_fluidEnabled,return )

bool Shape_obj::get_sensorEnabled( ){
	HX_STACK_FRAME("nape.shape.Shape","get_sensorEnabled",0x622941be,"nape.shape.Shape.get_sensorEnabled","nape/shape/Shape.hx",453,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(454)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(454)
	bool tmp1 = tmp->sensorEnabled;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(454)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_sensorEnabled,return )

bool Shape_obj::set_sensorEnabled( bool sensorEnabled){
	HX_STACK_FRAME("nape.shape.Shape","set_sensorEnabled",0x859719ca,"nape.shape.Shape.set_sensorEnabled","nape/shape/Shape.hx",456,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sensorEnabled,"sensorEnabled")
	HX_STACK_LINE(457)
	{
		HX_STACK_LINE(458)
		::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(458)
		tmp->immutable_midstep(HX_HCSTRING("Shape::sensorEnabled","\xc6","\x60","\x6c","\x36"));
		HX_STACK_LINE(459)
		::zpp_nape::shape::ZPP_Shape tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(459)
		tmp1->sensorEnabled = sensorEnabled;
		HX_STACK_LINE(460)
		::zpp_nape::shape::ZPP_Shape tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(460)
		tmp2->wake();
	}
	HX_STACK_LINE(462)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(462)
	bool tmp1 = tmp->sensorEnabled;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(462)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,set_sensorEnabled,return )

::nape::geom::AABB Shape_obj::get_bounds( ){
	HX_STACK_FRAME("nape.shape.Shape","get_bounds",0x267bb53e,"nape.shape.Shape.get_bounds","nape/shape/Shape.hx",475,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(476)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(476)
	::nape::geom::AABB tmp1 = tmp->aabb->wrapper();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(476)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_bounds,return )

::nape::shape::Shape Shape_obj::translate( ::nape::geom::Vec2 translation){
	HX_STACK_FRAME("nape.shape.Shape","translate",0x4f05f84e,"nape.shape.Shape.translate","nape/shape/Shape.hx",489,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(translation,"translation")
	HX_STACK_LINE(490)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(490)
	tmp->immutable_midstep(HX_HCSTRING("Shape::translate()","\x6e","\x4f","\xc5","\xdc"));
	HX_STACK_LINE(491)
	{
		HX_STACK_LINE(493)
		bool tmp1 = (translation != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(493)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(493)
		if ((tmp1)){
			HX_STACK_LINE(493)
			tmp2 = translation->zpp_disp;
		}
		else{
			HX_STACK_LINE(493)
			tmp2 = false;
		}
		HX_STACK_LINE(493)
		if ((tmp2)){
			HX_STACK_LINE(493)
			::String tmp3 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(493)
			::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(493)
			HX_STACK_DO_THROW(tmp4);
		}
	}
	HX_STACK_LINE(497)
	::zpp_nape::shape::ZPP_Shape tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(497)
	::zpp_nape::phys::ZPP_Body tmp2 = tmp1->body;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(497)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(497)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(497)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(497)
	if ((tmp4)){
		HX_STACK_LINE(497)
		::zpp_nape::shape::ZPP_Shape tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(497)
		::zpp_nape::shape::ZPP_Shape tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(497)
		::zpp_nape::shape::ZPP_Shape tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(497)
		::zpp_nape::space::ZPP_Space tmp9 = tmp8->body->space;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(497)
		::zpp_nape::space::ZPP_Space tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(497)
		::zpp_nape::space::ZPP_Space tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(497)
		tmp5 = (tmp11 != null());
	}
	else{
		HX_STACK_LINE(497)
		tmp5 = false;
	}
	HX_STACK_LINE(497)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(497)
	if ((tmp5)){
		HX_STACK_LINE(497)
		::zpp_nape::shape::ZPP_Shape tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(497)
		::zpp_nape::shape::ZPP_Shape tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(497)
		int tmp9 = tmp8->body->type;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(497)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(497)
		int tmp11 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(497)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(497)
		tmp6 = (tmp10 == tmp12);
	}
	else{
		HX_STACK_LINE(497)
		tmp6 = false;
	}
	HX_STACK_LINE(497)
	if ((tmp6)){
		HX_STACK_LINE(497)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot modify Shape belonging to a static Object once inside a Space","\x82","\x96","\x75","\x9f"));
	}
	HX_STACK_LINE(498)
	bool tmp7 = (translation == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(498)
	if ((tmp7)){
		HX_STACK_LINE(498)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot displace Shape by null Vec2","\x05","\x59","\xba","\x78"));
	}
	HX_STACK_LINE(500)
	Float tmp8 = translation->lsq();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(500)
	bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(500)
	if ((tmp9)){
		HX_STACK_LINE(501)
		::zpp_nape::shape::ZPP_Shape tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(501)
		int tmp11 = tmp10->type;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(501)
		int tmp12 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(501)
		bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(501)
		if ((tmp13)){
			HX_STACK_LINE(501)
			::zpp_nape::shape::ZPP_Shape tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(501)
			Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(501)
			{
				HX_STACK_LINE(501)
				{
					HX_STACK_LINE(501)
					bool tmp16 = (translation != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(501)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(501)
					if ((tmp16)){
						HX_STACK_LINE(501)
						tmp17 = translation->zpp_disp;
					}
					else{
						HX_STACK_LINE(501)
						tmp17 = false;
					}
					HX_STACK_LINE(501)
					if ((tmp17)){
						HX_STACK_LINE(501)
						::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(501)
						::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(501)
						HX_STACK_DO_THROW(tmp19);
					}
				}
				HX_STACK_LINE(501)
				{
					HX_STACK_LINE(501)
					::zpp_nape::geom::ZPP_Vec2 _this = translation->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(501)
					bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(501)
					if ((tmp16)){
						HX_STACK_LINE(501)
						_this->_validate();
					}
				}
				HX_STACK_LINE(501)
				tmp15 = translation->zpp_inner->x;
			}
			HX_STACK_LINE(501)
			Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(501)
			{
				HX_STACK_LINE(501)
				{
					HX_STACK_LINE(501)
					bool tmp17 = (translation != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(501)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(501)
					if ((tmp17)){
						HX_STACK_LINE(501)
						tmp18 = translation->zpp_disp;
					}
					else{
						HX_STACK_LINE(501)
						tmp18 = false;
					}
					HX_STACK_LINE(501)
					if ((tmp18)){
						HX_STACK_LINE(501)
						::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(501)
						::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(501)
						HX_STACK_DO_THROW(tmp20);
					}
				}
				HX_STACK_LINE(501)
				{
					HX_STACK_LINE(501)
					::zpp_nape::geom::ZPP_Vec2 _this = translation->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(501)
					bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(501)
					if ((tmp17)){
						HX_STACK_LINE(501)
						_this->_validate();
					}
				}
				HX_STACK_LINE(501)
				tmp16 = translation->zpp_inner->y;
			}
			HX_STACK_LINE(501)
			tmp14->circle->__translate(tmp15,tmp16);
		}
		else{
			HX_STACK_LINE(502)
			::zpp_nape::shape::ZPP_Shape tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(502)
			Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(502)
			{
				HX_STACK_LINE(502)
				{
					HX_STACK_LINE(502)
					bool tmp16 = (translation != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(502)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(502)
					if ((tmp16)){
						HX_STACK_LINE(502)
						tmp17 = translation->zpp_disp;
					}
					else{
						HX_STACK_LINE(502)
						tmp17 = false;
					}
					HX_STACK_LINE(502)
					if ((tmp17)){
						HX_STACK_LINE(502)
						::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(502)
						::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(502)
						HX_STACK_DO_THROW(tmp19);
					}
				}
				HX_STACK_LINE(502)
				{
					HX_STACK_LINE(502)
					::zpp_nape::geom::ZPP_Vec2 _this = translation->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(502)
					bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(502)
					if ((tmp16)){
						HX_STACK_LINE(502)
						_this->_validate();
					}
				}
				HX_STACK_LINE(502)
				tmp15 = translation->zpp_inner->x;
			}
			HX_STACK_LINE(502)
			Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(502)
			{
				HX_STACK_LINE(502)
				{
					HX_STACK_LINE(502)
					bool tmp17 = (translation != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(502)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(502)
					if ((tmp17)){
						HX_STACK_LINE(502)
						tmp18 = translation->zpp_disp;
					}
					else{
						HX_STACK_LINE(502)
						tmp18 = false;
					}
					HX_STACK_LINE(502)
					if ((tmp18)){
						HX_STACK_LINE(502)
						::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(502)
						::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(502)
						HX_STACK_DO_THROW(tmp20);
					}
				}
				HX_STACK_LINE(502)
				{
					HX_STACK_LINE(502)
					::zpp_nape::geom::ZPP_Vec2 _this = translation->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(502)
					bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(502)
					if ((tmp17)){
						HX_STACK_LINE(502)
						_this->_validate();
					}
				}
				HX_STACK_LINE(502)
				tmp16 = translation->zpp_inner->y;
			}
			HX_STACK_LINE(502)
			tmp14->polygon->__translate(tmp15,tmp16);
		}
	}
	HX_STACK_LINE(504)
	{
		HX_STACK_LINE(505)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(506)
		tmp10 = translation->zpp_inner->weak;
		HX_STACK_LINE(505)
		if ((tmp10)){
			HX_STACK_LINE(508)
			{
				HX_STACK_LINE(508)
				{
					HX_STACK_LINE(508)
					bool tmp11 = (translation != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(508)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(508)
					if ((tmp11)){
						HX_STACK_LINE(508)
						tmp12 = translation->zpp_disp;
					}
					else{
						HX_STACK_LINE(508)
						tmp12 = false;
					}
					HX_STACK_LINE(508)
					if ((tmp12)){
						HX_STACK_LINE(508)
						::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(508)
						::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(508)
						HX_STACK_DO_THROW(tmp14);
					}
				}
				HX_STACK_LINE(508)
				{
					HX_STACK_LINE(508)
					::zpp_nape::geom::ZPP_Vec2 _this = translation->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(508)
					bool tmp11 = _this->_immutable;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(508)
					if ((tmp11)){
						HX_STACK_LINE(508)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(508)
					bool tmp12 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(508)
					if ((tmp12)){
						HX_STACK_LINE(508)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(508)
				bool tmp11 = translation->zpp_inner->_inuse;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(508)
				if ((tmp11)){
					HX_STACK_LINE(508)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(508)
				::zpp_nape::geom::ZPP_Vec2 inner = translation->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(508)
				translation->zpp_inner->outer = null();
				HX_STACK_LINE(508)
				translation->zpp_inner = null();
				HX_STACK_LINE(508)
				{
					HX_STACK_LINE(508)
					::nape::geom::Vec2 o = translation;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(508)
					o->zpp_pool = null();
					HX_STACK_LINE(508)
					::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(508)
					bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(508)
					if ((tmp13)){
						HX_STACK_LINE(508)
						::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(508)
						tmp14->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(508)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(508)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(508)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(508)
				{
					HX_STACK_LINE(508)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(508)
					{
						HX_STACK_LINE(508)
						bool tmp12 = (o->outer != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(508)
						if ((tmp12)){
							HX_STACK_LINE(508)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(508)
							o->outer = null();
						}
						HX_STACK_LINE(508)
						o->_isimmutable = null();
						HX_STACK_LINE(508)
						o->_validate = null();
						HX_STACK_LINE(508)
						o->_invalidate = null();
					}
					HX_STACK_LINE(508)
					::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(508)
					o->next = tmp12;
					HX_STACK_LINE(508)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(509)
			true;
		}
		else{
			HX_STACK_LINE(512)
			false;
		}
	}
	HX_STACK_LINE(515)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,translate,return )

::nape::shape::Shape Shape_obj::scale( Float scalex,Float scaley){
	HX_STACK_FRAME("nape.shape.Shape","scale",0x16706f8a,"nape.shape.Shape.scale","nape/shape/Shape.hx",529,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scalex,"scalex")
	HX_STACK_ARG(scaley,"scaley")
	HX_STACK_LINE(530)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(530)
	tmp->immutable_midstep(HX_HCSTRING("Shape::scale()","\x2a","\x92","\xc4","\xc1"));
	HX_STACK_LINE(532)
	::zpp_nape::shape::ZPP_Shape tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(532)
	::zpp_nape::phys::ZPP_Body tmp2 = tmp1->body;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(532)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(532)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(532)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(532)
	if ((tmp4)){
		HX_STACK_LINE(532)
		::zpp_nape::shape::ZPP_Shape tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(532)
		::zpp_nape::shape::ZPP_Shape tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(532)
		::zpp_nape::shape::ZPP_Shape tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(532)
		::zpp_nape::space::ZPP_Space tmp9 = tmp8->body->space;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(532)
		::zpp_nape::space::ZPP_Space tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(532)
		::zpp_nape::space::ZPP_Space tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(532)
		tmp5 = (tmp11 != null());
	}
	else{
		HX_STACK_LINE(532)
		tmp5 = false;
	}
	HX_STACK_LINE(532)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(532)
	if ((tmp5)){
		HX_STACK_LINE(532)
		::zpp_nape::shape::ZPP_Shape tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(532)
		::zpp_nape::shape::ZPP_Shape tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(532)
		int tmp9 = tmp8->body->type;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(532)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(532)
		int tmp11 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(532)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(532)
		tmp6 = (tmp10 == tmp12);
	}
	else{
		HX_STACK_LINE(532)
		tmp6 = false;
	}
	HX_STACK_LINE(532)
	if ((tmp6)){
		HX_STACK_LINE(532)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot modify Shape belonging to a static Object once inside a Space","\x82","\x96","\x75","\x9f"));
	}
	HX_STACK_LINE(533)
	bool tmp7 = (scalex != scalex);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(533)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(533)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(533)
	if ((tmp8)){
		HX_STACK_LINE(533)
		tmp9 = (scaley != scaley);
	}
	else{
		HX_STACK_LINE(533)
		tmp9 = true;
	}
	HX_STACK_LINE(533)
	if ((tmp9)){
		HX_STACK_LINE(533)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot scale Shape by NaN","\x36","\xd9","\x16","\x15"));
	}
	HX_STACK_LINE(534)
	bool tmp10 = (scalex == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(534)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(534)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(534)
	if ((tmp11)){
		HX_STACK_LINE(534)
		tmp12 = (scaley == (int)0);
	}
	else{
		HX_STACK_LINE(534)
		tmp12 = true;
	}
	HX_STACK_LINE(534)
	if ((tmp12)){
		HX_STACK_LINE(534)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot Scale shape by a factor of 0","\xf4","\x37","\x0c","\x59"));
	}
	HX_STACK_LINE(536)
	::zpp_nape::shape::ZPP_Shape tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(536)
	int tmp14 = tmp13->type;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(536)
	int tmp15 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(536)
	bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(536)
	if ((tmp16)){
		HX_STACK_LINE(537)
		Float tmp17 = (scalex * scalex);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(537)
		Float tmp18 = (scaley * scaley);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(537)
		Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(537)
		Float d = tmp19;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(538)
		Float tmp20 = (d * d);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(538)
		Float tmp21 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(538)
		Float tmp22 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(538)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(538)
		bool tmp24 = (tmp20 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(538)
		if ((tmp24)){
			HX_STACK_LINE(539)
			::zpp_nape::shape::ZPP_Shape tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(539)
			Float tmp26 = scalex;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(539)
			Float tmp27 = scaley;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(539)
			tmp25->circle->__scale(tmp26,tmp27);
		}
		else{
			HX_STACK_LINE(543)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot perform a non equal scaling on a Circle","\xeb","\xc7","\x92","\x4e"));
		}
	}
	else{
		HX_STACK_LINE(547)
		::zpp_nape::shape::ZPP_Shape tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(547)
		Float tmp18 = scalex;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(547)
		Float tmp19 = scaley;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(547)
		tmp17->polygon->__scale(tmp18,tmp19);
	}
	HX_STACK_LINE(548)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Shape_obj,scale,return )

::nape::shape::Shape Shape_obj::rotate( Float angle){
	HX_STACK_FRAME("nape.shape.Shape","rotate",0x1aeb855b,"nape.shape.Shape.rotate","nape/shape/Shape.hx",559,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(560)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(560)
	tmp->immutable_midstep(HX_HCSTRING("Shape::rotate()","\x1d","\x67","\x82","\xd1"));
	HX_STACK_LINE(562)
	::zpp_nape::shape::ZPP_Shape tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(562)
	::zpp_nape::phys::ZPP_Body tmp2 = tmp1->body;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(562)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(562)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(562)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(562)
	if ((tmp4)){
		HX_STACK_LINE(562)
		::zpp_nape::shape::ZPP_Shape tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(562)
		::zpp_nape::shape::ZPP_Shape tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(562)
		::zpp_nape::shape::ZPP_Shape tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(562)
		::zpp_nape::space::ZPP_Space tmp9 = tmp8->body->space;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(562)
		::zpp_nape::space::ZPP_Space tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(562)
		::zpp_nape::space::ZPP_Space tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(562)
		tmp5 = (tmp11 != null());
	}
	else{
		HX_STACK_LINE(562)
		tmp5 = false;
	}
	HX_STACK_LINE(562)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(562)
	if ((tmp5)){
		HX_STACK_LINE(562)
		::zpp_nape::shape::ZPP_Shape tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(562)
		::zpp_nape::shape::ZPP_Shape tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(562)
		int tmp9 = tmp8->body->type;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(562)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(562)
		int tmp11 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(562)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(562)
		tmp6 = (tmp10 == tmp12);
	}
	else{
		HX_STACK_LINE(562)
		tmp6 = false;
	}
	HX_STACK_LINE(562)
	if ((tmp6)){
		HX_STACK_LINE(562)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot modify Shape belonging to a static Object once inside a Space","\x82","\x96","\x75","\x9f"));
	}
	HX_STACK_LINE(563)
	bool tmp7 = (angle != angle);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(563)
	if ((tmp7)){
		HX_STACK_LINE(563)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot rotate Shape by NaN","\x47","\xb6","\x1e","\x3b"));
	}
	HX_STACK_LINE(565)
	Float tmp8 = angle;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(565)
	Float tmp9 = ::Math_obj::PI;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(565)
	Float tmp10 = ((int)2 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(565)
	Float tmp11 = hx::Mod(tmp8,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(565)
	Float dr = tmp11;		HX_STACK_VAR(dr,"dr");
	HX_STACK_LINE(566)
	bool tmp12 = (dr != ((Float)0.0));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(566)
	if ((tmp12)){
		HX_STACK_LINE(567)
		Float tmp13 = angle;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(567)
		Float tmp14 = ::Math_obj::cos(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(567)
		Float cos = tmp14;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(568)
		Float tmp15 = angle;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(568)
		Float tmp16 = ::Math_obj::sin(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(568)
		Float sin = tmp16;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(569)
		::zpp_nape::shape::ZPP_Shape tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(569)
		int tmp18 = tmp17->type;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(569)
		int tmp19 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(569)
		bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(569)
		if ((tmp20)){
			HX_STACK_LINE(569)
			::zpp_nape::shape::ZPP_Shape tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(569)
			Float tmp22 = sin;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(569)
			Float tmp23 = cos;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(569)
			tmp21->circle->__rotate(tmp22,tmp23);
		}
		else{
			HX_STACK_LINE(570)
			::zpp_nape::shape::ZPP_Shape tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(570)
			Float tmp22 = sin;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(570)
			Float tmp23 = cos;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(570)
			tmp21->polygon->__rotate(tmp22,tmp23);
		}
	}
	HX_STACK_LINE(572)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,rotate,return )

::nape::shape::Shape Shape_obj::transform( ::nape::geom::Mat23 matrix){
	HX_STACK_FRAME("nape.shape.Shape","transform",0x4b194e6c,"nape.shape.Shape.transform","nape/shape/Shape.hx",586,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(587)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(587)
	tmp->immutable_midstep(HX_HCSTRING("Shape::transform()","\x0c","\xe9","\xf0","\x84"));
	HX_STACK_LINE(589)
	::zpp_nape::shape::ZPP_Shape tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(589)
	::zpp_nape::phys::ZPP_Body tmp2 = tmp1->body;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(589)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(589)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(589)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(589)
	if ((tmp4)){
		HX_STACK_LINE(589)
		::zpp_nape::shape::ZPP_Shape tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(589)
		::zpp_nape::shape::ZPP_Shape tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(589)
		::zpp_nape::shape::ZPP_Shape tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(589)
		::zpp_nape::space::ZPP_Space tmp9 = tmp8->body->space;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(589)
		::zpp_nape::space::ZPP_Space tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(589)
		::zpp_nape::space::ZPP_Space tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(589)
		tmp5 = (tmp11 != null());
	}
	else{
		HX_STACK_LINE(589)
		tmp5 = false;
	}
	HX_STACK_LINE(589)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(589)
	if ((tmp5)){
		HX_STACK_LINE(589)
		::zpp_nape::shape::ZPP_Shape tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(589)
		::zpp_nape::shape::ZPP_Shape tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(589)
		int tmp9 = tmp8->body->type;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(589)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(589)
		int tmp11 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(589)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(589)
		tmp6 = (tmp10 == tmp12);
	}
	else{
		HX_STACK_LINE(589)
		tmp6 = false;
	}
	HX_STACK_LINE(589)
	if ((tmp6)){
		HX_STACK_LINE(589)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot modify Shape belonging to a static Object once inside a Space","\x82","\x96","\x75","\x9f"));
	}
	HX_STACK_LINE(590)
	bool tmp7 = (matrix == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(590)
	if ((tmp7)){
		HX_STACK_LINE(590)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot transform Shape by null matrix","\xb3","\x63","\x2a","\xdf"));
	}
	HX_STACK_LINE(591)
	bool tmp8 = matrix->singular();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(591)
	if ((tmp8)){
		HX_STACK_LINE(591)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot transform Shape by a singular matrix","\x64","\x7a","\xee","\xb2"));
	}
	HX_STACK_LINE(593)
	::zpp_nape::shape::ZPP_Shape tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(593)
	int tmp10 = tmp9->type;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(593)
	int tmp11 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(593)
	bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(593)
	if ((tmp12)){
		HX_STACK_LINE(594)
		bool tmp13 = matrix->equiorthogonal();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(594)
		if ((tmp13)){
			HX_STACK_LINE(595)
			::zpp_nape::shape::ZPP_Shape tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(595)
			::nape::geom::Mat23 tmp15 = matrix;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(595)
			tmp14->circle->__transform(tmp15);
		}
		else{
			HX_STACK_LINE(599)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot transform Circle by a non equiorthogonal matrix","\xba","\x10","\xdb","\xaf"));
		}
	}
	else{
		HX_STACK_LINE(603)
		::zpp_nape::shape::ZPP_Shape tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(603)
		::nape::geom::Mat23 tmp14 = matrix;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(603)
		tmp13->polygon->__transform(tmp14);
	}
	HX_STACK_LINE(604)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,transform,return )

bool Shape_obj::contains( ::nape::geom::Vec2 point){
	HX_STACK_FRAME("nape.shape.Shape","contains",0x74d4591f,"nape.shape.Shape.contains","nape/shape/Shape.hx",618,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(619)
	{
		HX_STACK_LINE(621)
		bool tmp = (point != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(621)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(621)
		if ((tmp)){
			HX_STACK_LINE(621)
			tmp1 = point->zpp_disp;
		}
		else{
			HX_STACK_LINE(621)
			tmp1 = false;
		}
		HX_STACK_LINE(621)
		if ((tmp1)){
			HX_STACK_LINE(621)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(621)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(621)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(625)
	bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(625)
	if ((tmp)){
		HX_STACK_LINE(625)
		HX_STACK_DO_THROW(HX_HCSTRING("Cannot check null point for containment","\xa7","\x97","\xcc","\x2d"));
	}
	HX_STACK_LINE(628)
	::zpp_nape::shape::ZPP_Shape tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(628)
	::zpp_nape::phys::ZPP_Body tmp2 = tmp1->body;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(628)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(628)
	::nape::phys::Body tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(628)
	if ((tmp3)){
		HX_STACK_LINE(628)
		::zpp_nape::shape::ZPP_Shape tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(628)
		tmp4 = tmp5->body->outer;
	}
	else{
		HX_STACK_LINE(628)
		tmp4 = null();
	}
	HX_STACK_LINE(628)
	bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(628)
	if ((tmp5)){
		HX_STACK_LINE(628)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Shape is not well defined without a Body","\x4c","\xb5","\xe2","\x9d"));
	}
	HX_STACK_LINE(630)
	::zpp_nape::shape::ZPP_Shape tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(630)
	::zpp_nape::geom::ZPP_Geom_obj::validateShape(tmp6);
	HX_STACK_LINE(631)
	{
		HX_STACK_LINE(631)
		::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(631)
		bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(631)
		if ((tmp7)){
			HX_STACK_LINE(631)
			_this->_validate();
		}
	}
	HX_STACK_LINE(632)
	::zpp_nape::shape::ZPP_Shape tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(632)
	::zpp_nape::geom::ZPP_Vec2 tmp8 = point->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(632)
	bool tmp9 = ::zpp_nape::geom::ZPP_Collide_obj::shapeContains(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(632)
	bool ret = tmp9;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(633)
	{
		HX_STACK_LINE(634)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(635)
		tmp10 = point->zpp_inner->weak;
		HX_STACK_LINE(634)
		if ((tmp10)){
			HX_STACK_LINE(637)
			{
				HX_STACK_LINE(637)
				{
					HX_STACK_LINE(637)
					bool tmp11 = (point != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(637)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(637)
					if ((tmp11)){
						HX_STACK_LINE(637)
						tmp12 = point->zpp_disp;
					}
					else{
						HX_STACK_LINE(637)
						tmp12 = false;
					}
					HX_STACK_LINE(637)
					if ((tmp12)){
						HX_STACK_LINE(637)
						::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(637)
						::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(637)
						HX_STACK_DO_THROW(tmp14);
					}
				}
				HX_STACK_LINE(637)
				{
					HX_STACK_LINE(637)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(637)
					bool tmp11 = _this->_immutable;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(637)
					if ((tmp11)){
						HX_STACK_LINE(637)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(637)
					bool tmp12 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(637)
					if ((tmp12)){
						HX_STACK_LINE(637)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(637)
				bool tmp11 = point->zpp_inner->_inuse;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(637)
				if ((tmp11)){
					HX_STACK_LINE(637)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(637)
				::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(637)
				point->zpp_inner->outer = null();
				HX_STACK_LINE(637)
				point->zpp_inner = null();
				HX_STACK_LINE(637)
				{
					HX_STACK_LINE(637)
					::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(637)
					o->zpp_pool = null();
					HX_STACK_LINE(637)
					::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(637)
					bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(637)
					if ((tmp13)){
						HX_STACK_LINE(637)
						::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(637)
						tmp14->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(637)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(637)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(637)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(637)
				{
					HX_STACK_LINE(637)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(637)
					{
						HX_STACK_LINE(637)
						bool tmp12 = (o->outer != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(637)
						if ((tmp12)){
							HX_STACK_LINE(637)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(637)
							o->outer = null();
						}
						HX_STACK_LINE(637)
						o->_isimmutable = null();
						HX_STACK_LINE(637)
						o->_validate = null();
						HX_STACK_LINE(637)
						o->_invalidate = null();
					}
					HX_STACK_LINE(637)
					::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(637)
					o->next = tmp12;
					HX_STACK_LINE(637)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(638)
			true;
		}
		else{
			HX_STACK_LINE(641)
			false;
		}
	}
	HX_STACK_LINE(644)
	bool tmp10 = ret;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(644)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(Shape_obj,contains,return )

::nape::shape::Shape Shape_obj::copy( ){
	HX_STACK_FRAME("nape.shape.Shape","copy",0x8bf23ab5,"nape.shape.Shape.copy","nape/shape/Shape.hx",656,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(657)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(657)
	::nape::shape::Shape tmp1 = tmp->copy();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(657)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,copy,return )

::String Shape_obj::toString( ){
	HX_STACK_FRAME("nape.shape.Shape","toString",0x80c7cfac,"nape.shape.Shape.toString","nape/shape/Shape.hx",662,0x036d22d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(663)
	::zpp_nape::shape::ZPP_Shape tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(663)
	int tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(663)
	int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(663)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(663)
	::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(663)
	if ((tmp3)){
		HX_STACK_LINE(663)
		tmp4 = HX_HCSTRING("Circle","\x30","\xe6","\xa1","\x8a");
	}
	else{
		HX_STACK_LINE(663)
		tmp4 = HX_HCSTRING("Polygon","\x5a","\x2a","\xe2","\xdf");
	}
	HX_STACK_LINE(663)
	::String ret = tmp4;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(664)
	::String tmp5 = (ret + HX_HCSTRING("#","\x23","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(664)
	::zpp_nape::phys::ZPP_Interactor tmp6 = this->zpp_inner_i;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(664)
	int tmp7 = tmp6->id;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(664)
	::String tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(664)
	return tmp8;
}


bool Shape_obj::zpp_internalAlloc;


Shape_obj::Shape_obj()
{
}

void Shape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shape);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	::nape::phys::Interactor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Shape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	::nape::phys::Interactor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Shape_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return get_type(); }
		if (HX_FIELD_EQ(inName,"body") ) { if (inCallProp == hx::paccAlways) return get_body(); }
		if (HX_FIELD_EQ(inName,"area") ) { if (inCallProp == hx::paccAlways) return get_area(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { if (inCallProp == hx::paccAlways) return get_filter(); }
		if (HX_FIELD_EQ(inName,"bounds") ) { if (inCallProp == hx::paccAlways) return get_bounds(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inertia") ) { if (inCallProp == hx::paccAlways) return get_inertia(); }
		if (HX_FIELD_EQ(inName,"angDrag") ) { if (inCallProp == hx::paccAlways) return get_angDrag(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		if (HX_FIELD_EQ(inName,"isCircle") ) { return isCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_body") ) { return get_body_dyn(); }
		if (HX_FIELD_EQ(inName,"set_body") ) { return set_body_dyn(); }
		if (HX_FIELD_EQ(inName,"worldCOM") ) { if (inCallProp == hx::paccAlways) return get_worldCOM(); }
		if (HX_FIELD_EQ(inName,"localCOM") ) { if (inCallProp == hx::paccAlways) return get_localCOM(); }
		if (HX_FIELD_EQ(inName,"get_area") ) { return get_area_dyn(); }
		if (HX_FIELD_EQ(inName,"material") ) { if (inCallProp == hx::paccAlways) return get_material(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"isPolygon") ) { return isPolygon_dyn(); }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"castCircle") ) { if (inCallProp == hx::paccAlways) return get_castCircle(); }
		if (HX_FIELD_EQ(inName,"get_filter") ) { return get_filter_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filter") ) { return set_filter_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bounds") ) { return get_bounds_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"castPolygon") ) { if (inCallProp == hx::paccAlways) return get_castPolygon(); }
		if (HX_FIELD_EQ(inName,"get_inertia") ) { return get_inertia_dyn(); }
		if (HX_FIELD_EQ(inName,"get_angDrag") ) { return get_angDrag_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_worldCOM") ) { return get_worldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"get_localCOM") ) { return get_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"set_localCOM") ) { return set_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"get_material") ) { return get_material_dyn(); }
		if (HX_FIELD_EQ(inName,"set_material") ) { return set_material_dyn(); }
		if (HX_FIELD_EQ(inName,"fluidEnabled") ) { if (inCallProp == hx::paccAlways) return get_fluidEnabled(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sensorEnabled") ) { if (inCallProp == hx::paccAlways) return get_sensorEnabled(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_castCircle") ) { return get_castCircle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_castPolygon") ) { return get_castPolygon_dyn(); }
		if (HX_FIELD_EQ(inName,"fluidProperties") ) { if (inCallProp == hx::paccAlways) return get_fluidProperties(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_fluidEnabled") ) { return get_fluidEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fluidEnabled") ) { return set_fluidEnabled_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_sensorEnabled") ) { return get_sensorEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sensorEnabled") ) { return set_sensorEnabled_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_fluidProperties") ) { return get_fluidProperties_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fluidProperties") ) { return set_fluidProperties_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Shape_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"zpp_internalAlloc") ) { outValue = zpp_internalAlloc; return true;  }
	}
	return false;
}

Dynamic Shape_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { if (inCallProp == hx::paccAlways) return set_body(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { if (inCallProp == hx::paccAlways) return set_filter(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"localCOM") ) { if (inCallProp == hx::paccAlways) return set_localCOM(inValue); }
		if (HX_FIELD_EQ(inName,"material") ) { if (inCallProp == hx::paccAlways) return set_material(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::shape::ZPP_Shape >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fluidEnabled") ) { if (inCallProp == hx::paccAlways) return set_fluidEnabled(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sensorEnabled") ) { if (inCallProp == hx::paccAlways) return set_sensorEnabled(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fluidProperties") ) { if (inCallProp == hx::paccAlways) return set_fluidProperties(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Shape_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"zpp_internalAlloc") ) { zpp_internalAlloc=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void Shape_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"));
	outFields->push(HX_HCSTRING("castCircle","\x2f","\x1e","\x4a","\x5e"));
	outFields->push(HX_HCSTRING("castPolygon","\x7b","\xf1","\x6a","\x3f"));
	outFields->push(HX_HCSTRING("worldCOM","\x0f","\xc5","\x83","\xa4"));
	outFields->push(HX_HCSTRING("localCOM","\x96","\xc7","\xdf","\xdf"));
	outFields->push(HX_HCSTRING("area","\x8d","\x8b","\x74","\x40"));
	outFields->push(HX_HCSTRING("inertia","\xfa","\xb0","\xba","\x7c"));
	outFields->push(HX_HCSTRING("angDrag","\xee","\xc7","\x72","\x38"));
	outFields->push(HX_HCSTRING("material","\xa7","\x5c","\xa5","\xf0"));
	outFields->push(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"));
	outFields->push(HX_HCSTRING("fluidProperties","\x9d","\x0a","\x80","\x04"));
	outFields->push(HX_HCSTRING("fluidEnabled","\x97","\x87","\x5e","\x9a"));
	outFields->push(HX_HCSTRING("sensorEnabled","\x67","\x15","\xaa","\x41"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::shape::ZPP_Shape*/ ,(int)offsetof(Shape_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Shape_obj::zpp_internalAlloc,HX_HCSTRING("zpp_internalAlloc","\xb3","\x36","\x26","\x40")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("isCircle","\x9a","\x0d","\x77","\xae"),
	HX_HCSTRING("isPolygon","\xb0","\x7f","\x8f","\x16"),
	HX_HCSTRING("get_body","\x2b","\x36","\xd6","\xc0"),
	HX_HCSTRING("set_body","\x9f","\x8f","\x33","\x6f"),
	HX_HCSTRING("get_castCircle","\x78","\xa6","\x3f","\xd4"),
	HX_HCSTRING("get_castPolygon","\x12","\xa9","\x4c","\x00"),
	HX_HCSTRING("get_worldCOM","\x18","\x79","\x9d","\x59"),
	HX_HCSTRING("get_localCOM","\x9f","\x7b","\xf9","\x94"),
	HX_HCSTRING("set_localCOM","\x13","\x9f","\xf2","\xa9"),
	HX_HCSTRING("get_area","\x16","\x47","\x2f","\xc0"),
	HX_HCSTRING("get_inertia","\x11","\x11","\xb5","\x02"),
	HX_HCSTRING("get_angDrag","\x05","\x28","\x6d","\xbe"),
	HX_HCSTRING("get_material","\xb0","\x10","\xbf","\xa5"),
	HX_HCSTRING("set_material","\x24","\x34","\xb8","\xba"),
	HX_HCSTRING("get_filter","\x81","\x8f","\xbc","\x75"),
	HX_HCSTRING("set_filter","\xf5","\x2d","\x3a","\x79"),
	HX_HCSTRING("get_fluidProperties","\xb4","\xd9","\x8a","\x8f"),
	HX_HCSTRING("set_fluidProperties","\xc0","\xcc","\x27","\xcc"),
	HX_HCSTRING("get_fluidEnabled","\x20","\x74","\xfd","\x9e"),
	HX_HCSTRING("set_fluidEnabled","\x94","\x61","\x3f","\xf5"),
	HX_HCSTRING("get_sensorEnabled","\xbe","\x20","\x1a","\x48"),
	HX_HCSTRING("set_sensorEnabled","\xca","\xf8","\x87","\x6b"),
	HX_HCSTRING("get_bounds","\x3e","\xf6","\xa4","\x56"),
	HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shape_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Shape_obj::zpp_internalAlloc,"zpp_internalAlloc");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shape_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Shape_obj::zpp_internalAlloc,"zpp_internalAlloc");
};

#endif

hx::Class Shape_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_internalAlloc","\xb3","\x36","\x26","\x40"),
	::String(null()) };

void Shape_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.shape.Shape","\x6e","\x41","\x97","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Shape_obj::__GetStatic;
	__mClass->mSetStaticField = &Shape_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Shape_obj >;
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

void Shape_obj::__boot()
{
	zpp_internalAlloc= false;
}

} // end namespace nape
} // end namespace shape
