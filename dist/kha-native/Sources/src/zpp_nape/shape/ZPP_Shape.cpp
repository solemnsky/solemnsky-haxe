#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
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
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
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
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_SweepData
#include <zpp_nape/space/ZPP_SweepData.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_AABBPair
#include <zpp_nape/util/ZNPList_ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace shape{

Void ZPP_Shape_obj::__construct(int type)
{
HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","new",0xc06ffa20,"zpp_nape.shape.ZPP_Shape.new","zpp_nape/shape/Shape.hx",174,0xb83747cd)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
{
	HX_STACK_LINE(231)
	this->zip_aabb = false;
	HX_STACK_LINE(230)
	this->aabb = null();
	HX_STACK_LINE(225)
	this->pairs = null();
	HX_STACK_LINE(224)
	this->node = null();
	HX_STACK_LINE(223)
	this->sweep = null();
	HX_STACK_LINE(222)
	this->sensorEnabled = false;
	HX_STACK_LINE(221)
	this->fluidEnabled = false;
	HX_STACK_LINE(220)
	this->fluidProperties = null();
	HX_STACK_LINE(219)
	this->filter = null();
	HX_STACK_LINE(218)
	this->material = null();
	HX_STACK_LINE(217)
	this->refmaterial = null();
	HX_STACK_LINE(216)
	this->polygon = null();
	HX_STACK_LINE(215)
	this->circle = null();
	HX_STACK_LINE(202)
	this->sweepCoef = ((Float)0.0);
	HX_STACK_LINE(201)
	this->zip_sweepRadius = false;
	HX_STACK_LINE(200)
	this->sweepRadius = ((Float)0.0);
	HX_STACK_LINE(199)
	this->wrap_worldCOM = null();
	HX_STACK_LINE(198)
	this->wrap_localCOM = null();
	HX_STACK_LINE(197)
	this->zip_worldCOM = false;
	HX_STACK_LINE(196)
	this->worldCOMy = ((Float)0.0);
	HX_STACK_LINE(195)
	this->worldCOMx = ((Float)0.0);
	HX_STACK_LINE(194)
	this->zip_localCOM = false;
	HX_STACK_LINE(193)
	this->localCOMy = ((Float)0.0);
	HX_STACK_LINE(192)
	this->localCOMx = ((Float)0.0);
	HX_STACK_LINE(191)
	this->zip_angDrag = false;
	HX_STACK_LINE(190)
	this->angDrag = ((Float)0.0);
	HX_STACK_LINE(189)
	this->inertia = ((Float)0.0);
	HX_STACK_LINE(188)
	this->zip_area_inertia = false;
	HX_STACK_LINE(187)
	this->area = ((Float)0.0);
	HX_STACK_LINE(177)
	this->type = (int)0;
	HX_STACK_LINE(176)
	this->body = null();
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(392)
	super::__construct();
	HX_STACK_LINE(393)
	::zpp_nape::util::ZNPList_ZPP_AABBPair tmp = ::zpp_nape::util::ZNPList_ZPP_AABBPair_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(393)
	this->pairs = tmp;
	HX_STACK_LINE(394)
	this->ishape = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(395)
	this->type = type;
	HX_STACK_LINE(396)
	::zpp_nape::geom::ZPP_AABB tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(396)
	{
		HX_STACK_LINE(396)
		::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(396)
		{
			HX_STACK_LINE(396)
			::zpp_nape::geom::ZPP_AABB tmp2 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(396)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(396)
			if ((tmp3)){
				HX_STACK_LINE(396)
				::zpp_nape::geom::ZPP_AABB tmp4 = ::zpp_nape::geom::ZPP_AABB_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(396)
				ret = tmp4;
			}
			else{
				HX_STACK_LINE(396)
				::zpp_nape::geom::ZPP_AABB tmp4 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(396)
				ret = tmp4;
				HX_STACK_LINE(396)
				::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
				HX_STACK_LINE(396)
				ret->next = null();
			}
			HX_STACK_LINE(396)
			Dynamic();
		}
		HX_STACK_LINE(396)
		{
			HX_STACK_LINE(396)
			ret->minx = (int)0;
			HX_STACK_LINE(396)
			ret->miny = (int)0;
			HX_STACK_LINE(396)
			{
			}
		}
		HX_STACK_LINE(396)
		{
			HX_STACK_LINE(396)
			ret->maxx = (int)0;
			HX_STACK_LINE(396)
			ret->maxy = (int)0;
			HX_STACK_LINE(396)
			{
			}
		}
		HX_STACK_LINE(396)
		tmp1 = ret;
	}
	HX_STACK_LINE(396)
	this->aabb = tmp1;
	HX_STACK_LINE(397)
	::zpp_nape::geom::ZPP_AABB tmp2 = this->aabb;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(397)
	tmp2->_immutable = true;
	HX_STACK_LINE(398)
	::zpp_nape::shape::ZPP_Shape me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
	HX_STACK_LINE(399)
	Dynamic tmp3 = this->aabb_validate_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(399)
	::zpp_nape::geom::ZPP_AABB tmp4 = this->aabb;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(399)
	tmp4->_validate = tmp3;
	HX_STACK_LINE(400)
	bool tmp5 = this->zip_sweepRadius = true;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(400)
	bool tmp6 = this->zip_localCOM = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(400)
	bool tmp7 = this->zip_angDrag = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(400)
	this->zip_area_inertia = tmp7;
	HX_STACK_LINE(401)
	{
		HX_STACK_LINE(402)
		this->localCOMx = (int)0;
		HX_STACK_LINE(403)
		this->localCOMy = (int)0;
		HX_STACK_LINE(412)
		{
		}
	}
	HX_STACK_LINE(421)
	{
		HX_STACK_LINE(422)
		this->worldCOMx = (int)0;
		HX_STACK_LINE(423)
		this->worldCOMy = (int)0;
		HX_STACK_LINE(432)
		{
		}
	}
	HX_STACK_LINE(441)
	this->fluidEnabled = false;
	HX_STACK_LINE(442)
	this->sensorEnabled = false;
	HX_STACK_LINE(443)
	this->fluidProperties = null();
	HX_STACK_LINE(444)
	this->body = null();
	HX_STACK_LINE(445)
	::zpp_nape::phys::ZPP_Material tmp8 = ::zpp_nape::phys::ZPP_Material_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(445)
	this->refmaterial = tmp8;
	HX_STACK_LINE(446)
	Float tmp9 = this->sweepCoef = (int)0;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(446)
	this->sweepRadius = tmp9;
}
;
	return null();
}

//ZPP_Shape_obj::~ZPP_Shape_obj() { }

Dynamic ZPP_Shape_obj::__CreateEmpty() { return  new ZPP_Shape_obj; }
hx::ObjectPtr< ZPP_Shape_obj > ZPP_Shape_obj::__new(int type)
{  hx::ObjectPtr< ZPP_Shape_obj > _result_ = new ZPP_Shape_obj();
	_result_->__construct(type);
	return _result_;}

Dynamic ZPP_Shape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Shape_obj > _result_ = new ZPP_Shape_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool ZPP_Shape_obj::isCircle( ){
	HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","isCircle",0x6f2b8bda,"zpp_nape.shape.ZPP_Shape.isCircle","zpp_nape/shape/Shape.hx",180,0xb83747cd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(181)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(181)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(181)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,isCircle,return )

bool ZPP_Shape_obj::isPolygon( ){
	HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","isPolygon",0xf3c97970,"zpp_nape.shape.ZPP_Shape.isPolygon","zpp_nape/shape/Shape.hx",184,0xb83747cd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(185)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(185)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,isPolygon,return )

Void ZPP_Shape_obj::invalidate_sweepRadius( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","invalidate_sweepRadius",0xa6cb159a,"zpp_nape.shape.ZPP_Shape.invalidate_sweepRadius","zpp_nape/shape/Shape.hx",206,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(206)
		this->zip_sweepRadius = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_sweepRadius,(void))

Void ZPP_Shape_obj::validate_sweepRadius( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","validate_sweepRadius",0x4c647935,"zpp_nape.shape.ZPP_Shape.validate_sweepRadius","zpp_nape/shape/Shape.hx",208,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(209)
		bool tmp = this->zip_sweepRadius;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		if ((tmp)){
			HX_STACK_LINE(210)
			this->zip_sweepRadius = false;
			HX_STACK_LINE(211)
			int tmp1 = this->type;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(211)
			int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(211)
			bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(211)
			if ((tmp3)){
				HX_STACK_LINE(211)
				::zpp_nape::shape::ZPP_Circle tmp4 = this->circle;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(211)
				tmp4->__validate_sweepRadius();
			}
			else{
				HX_STACK_LINE(212)
				::zpp_nape::shape::ZPP_Polygon tmp4 = this->polygon;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(212)
				tmp4->__validate_sweepRadius();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,validate_sweepRadius,(void))

Void ZPP_Shape_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","clear",0x67258b4d,"zpp_nape.shape.ZPP_Shape.clear","zpp_nape/shape/Shape.hx",226,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(227)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(227)
		if ((tmp2)){
			HX_STACK_LINE(227)
			::zpp_nape::shape::ZPP_Circle tmp3 = this->circle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(227)
			tmp3->__clear();
		}
		else{
			HX_STACK_LINE(228)
			::zpp_nape::shape::ZPP_Polygon tmp3 = this->polygon;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(228)
			tmp3->__clear();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,clear,(void))

Void ZPP_Shape_obj::validate_aabb( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","validate_aabb",0x4d64e7e9,"zpp_nape.shape.ZPP_Shape.validate_aabb","zpp_nape/shape/Shape.hx",234,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(235)
		bool tmp = this->zip_aabb;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(235)
		if ((tmp)){
			HX_STACK_LINE(236)
			::zpp_nape::phys::ZPP_Body tmp1 = this->body;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(236)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(236)
			if ((tmp2)){
				HX_STACK_LINE(237)
				this->zip_aabb = false;
				HX_STACK_LINE(238)
				int tmp3 = this->type;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(238)
				int tmp4 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(238)
				bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(238)
				if ((tmp5)){
					HX_STACK_LINE(238)
					::zpp_nape::shape::ZPP_Circle tmp6 = this->circle;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(238)
					::zpp_nape::shape::ZPP_Circle _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						bool tmp7 = _this->zip_worldCOM;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(238)
						if ((tmp7)){
							HX_STACK_LINE(238)
							bool tmp8 = (_this->body != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(238)
							if ((tmp8)){
								HX_STACK_LINE(238)
								_this->zip_worldCOM = false;
								HX_STACK_LINE(238)
								{
									HX_STACK_LINE(238)
									bool tmp9 = _this->zip_localCOM;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(238)
									if ((tmp9)){
										HX_STACK_LINE(238)
										_this->zip_localCOM = false;
										HX_STACK_LINE(238)
										int tmp10 = _this->type;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(238)
										int tmp11 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(238)
										bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(238)
										if ((tmp12)){
											HX_STACK_LINE(238)
											::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(238)
											::zpp_nape::geom::ZPP_Vec2 tmp13 = _this1->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(238)
											bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(238)
											if ((tmp14)){
												HX_STACK_LINE(238)
												HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
											}
											HX_STACK_LINE(238)
											::zpp_nape::geom::ZPP_Vec2 tmp15 = _this1->lverts->next;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(238)
											::zpp_nape::geom::ZPP_Vec2 tmp16 = tmp15->next;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(238)
											bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(238)
											if ((tmp17)){
												HX_STACK_LINE(238)
												::zpp_nape::geom::ZPP_Vec2 tmp18 = _this1->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(238)
												_this1->localCOMx = tmp18->x;
												HX_STACK_LINE(238)
												::zpp_nape::geom::ZPP_Vec2 tmp19 = _this1->lverts->next;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(238)
												_this1->localCOMy = tmp19->y;
												HX_STACK_LINE(238)
												Dynamic();
											}
											else{
												HX_STACK_LINE(238)
												::zpp_nape::geom::ZPP_Vec2 tmp18 = _this1->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(238)
												::zpp_nape::geom::ZPP_Vec2 tmp19 = tmp18->next->next;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(238)
												bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(238)
												if ((tmp20)){
													HX_STACK_LINE(238)
													{
														HX_STACK_LINE(238)
														::zpp_nape::geom::ZPP_Vec2 tmp21 = _this1->lverts->next;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(238)
														_this1->localCOMx = tmp21->x;
														HX_STACK_LINE(238)
														::zpp_nape::geom::ZPP_Vec2 tmp22 = _this1->lverts->next;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(238)
														_this1->localCOMy = tmp22->y;
														HX_STACK_LINE(238)
														{
														}
													}
													HX_STACK_LINE(238)
													{
														HX_STACK_LINE(238)
														Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(238)
														::zpp_nape::geom::ZPP_Vec2 tmp21 = _this1->lverts->next;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(238)
														Float tmp22 = tmp21->next->x;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(238)
														Float tmp23 = t;		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(238)
														Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(238)
														hx::AddEq(_this1->localCOMx,tmp24);
														HX_STACK_LINE(238)
														::zpp_nape::geom::ZPP_Vec2 tmp25 = _this1->lverts->next;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(238)
														Float tmp26 = tmp25->next->y;		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(238)
														Float tmp27 = t;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(238)
														Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(238)
														hx::AddEq(_this1->localCOMy,tmp28);
													}
													HX_STACK_LINE(238)
													{
														HX_STACK_LINE(238)
														Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(238)
														hx::MultEq(_this1->localCOMx,t);
														HX_STACK_LINE(238)
														hx::MultEq(_this1->localCOMy,t);
													}
												}
												else{
													HX_STACK_LINE(238)
													{
														HX_STACK_LINE(238)
														_this1->localCOMx = (int)0;
														HX_STACK_LINE(238)
														_this1->localCOMy = (int)0;
														HX_STACK_LINE(238)
														{
														}
													}
													HX_STACK_LINE(238)
													Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
													HX_STACK_LINE(238)
													{
														HX_STACK_LINE(238)
														::zpp_nape::geom::ZPP_Vec2 tmp21 = _this1->lverts->next;		HX_STACK_VAR(tmp21,"tmp21");
														HX_STACK_LINE(238)
														::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp21;		HX_STACK_VAR(cx_ite,"cx_ite");
														HX_STACK_LINE(238)
														::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
														HX_STACK_LINE(238)
														cx_ite = cx_ite->next;
														HX_STACK_LINE(238)
														::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(238)
														cx_ite = cx_ite->next;
														HX_STACK_LINE(238)
														while((true)){
															HX_STACK_LINE(238)
															bool tmp22 = (cx_ite != null());		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(238)
															bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(238)
															if ((tmp23)){
																HX_STACK_LINE(238)
																break;
															}
															HX_STACK_LINE(238)
															::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
															HX_STACK_LINE(238)
															{
																HX_STACK_LINE(238)
																Float tmp24 = v->x;		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(238)
																Float tmp25 = (w->y - u->y);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(238)
																Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(238)
																hx::AddEq(area,tmp26);
																HX_STACK_LINE(238)
																Float tmp27 = (w->y * v->x);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(238)
																Float tmp28 = (w->x * v->y);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(238)
																Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(238)
																Float cf = tmp29;		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(238)
																Float tmp30 = (v->x + w->x);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(238)
																Float tmp31 = cf;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(238)
																Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(238)
																hx::AddEq(_this1->localCOMx,tmp32);
																HX_STACK_LINE(238)
																Float tmp33 = (v->y + w->y);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(238)
																Float tmp34 = cf;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(238)
																Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(238)
																hx::AddEq(_this1->localCOMy,tmp35);
															}
															HX_STACK_LINE(238)
															u = v;
															HX_STACK_LINE(238)
															v = w;
															HX_STACK_LINE(238)
															cx_ite = cx_ite->next;
														}
														HX_STACK_LINE(238)
														::zpp_nape::geom::ZPP_Vec2 tmp22 = _this1->lverts->next;		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(238)
														cx_ite = tmp22;
														HX_STACK_LINE(238)
														::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
														HX_STACK_LINE(238)
														{
															HX_STACK_LINE(238)
															Float tmp23 = v->x;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(238)
															Float tmp24 = (w->y - u->y);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(238)
															Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(238)
															hx::AddEq(area,tmp25);
															HX_STACK_LINE(238)
															Float tmp26 = (w->y * v->x);		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(238)
															Float tmp27 = (w->x * v->y);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(238)
															Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(238)
															Float cf = tmp28;		HX_STACK_VAR(cf,"cf");
															HX_STACK_LINE(238)
															Float tmp29 = (v->x + w->x);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(238)
															Float tmp30 = cf;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(238)
															Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(238)
															hx::AddEq(_this1->localCOMx,tmp31);
															HX_STACK_LINE(238)
															Float tmp32 = (v->y + w->y);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(238)
															Float tmp33 = cf;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(238)
															Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(238)
															hx::AddEq(_this1->localCOMy,tmp34);
														}
														HX_STACK_LINE(238)
														u = v;
														HX_STACK_LINE(238)
														v = w;
														HX_STACK_LINE(238)
														cx_ite = cx_ite->next;
														HX_STACK_LINE(238)
														::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
														HX_STACK_LINE(238)
														{
															HX_STACK_LINE(238)
															Float tmp23 = v->x;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(238)
															Float tmp24 = (w1->y - u->y);		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(238)
															Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(238)
															hx::AddEq(area,tmp25);
															HX_STACK_LINE(238)
															Float tmp26 = (w1->y * v->x);		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(238)
															Float tmp27 = (w1->x * v->y);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(238)
															Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(238)
															Float cf = tmp28;		HX_STACK_VAR(cf,"cf");
															HX_STACK_LINE(238)
															Float tmp29 = (v->x + w1->x);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(238)
															Float tmp30 = cf;		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(238)
															Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(238)
															hx::AddEq(_this1->localCOMx,tmp31);
															HX_STACK_LINE(238)
															Float tmp32 = (v->y + w1->y);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(238)
															Float tmp33 = cf;		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(238)
															Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(238)
															hx::AddEq(_this1->localCOMy,tmp34);
														}
													}
													HX_STACK_LINE(238)
													Float tmp21 = ((int)3 * area);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(238)
													Float tmp22 = (Float((int)1) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(238)
													area = tmp22;
													HX_STACK_LINE(238)
													{
														HX_STACK_LINE(238)
														Float t = area;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(238)
														hx::MultEq(_this1->localCOMx,t);
														HX_STACK_LINE(238)
														hx::MultEq(_this1->localCOMy,t);
													}
												}
											}
										}
										HX_STACK_LINE(238)
										bool tmp13 = (_this->wrap_localCOM != null());		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(238)
										if ((tmp13)){
											HX_STACK_LINE(238)
											::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(238)
											tmp14->x = _this->localCOMx;
											HX_STACK_LINE(238)
											::zpp_nape::geom::ZPP_Vec2 tmp15 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(238)
											tmp15->y = _this->localCOMy;
											HX_STACK_LINE(238)
											{
											}
										}
									}
								}
								HX_STACK_LINE(238)
								{
									HX_STACK_LINE(238)
									::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(238)
									bool tmp9 = _this1->zip_axis;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(238)
									if ((tmp9)){
										HX_STACK_LINE(238)
										_this1->zip_axis = false;
										HX_STACK_LINE(238)
										{
											HX_STACK_LINE(238)
											Float tmp10 = _this1->rot;		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(238)
											Float tmp11 = ::Math_obj::sin(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(238)
											_this1->axisx = tmp11;
											HX_STACK_LINE(238)
											Float tmp12 = _this1->rot;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(238)
											Float tmp13 = ::Math_obj::cos(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(238)
											_this1->axisy = tmp13;
											HX_STACK_LINE(238)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(238)
								{
									HX_STACK_LINE(238)
									Float tmp9 = _this->body->posx;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(238)
									Float tmp10 = _this->body->axisy;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(238)
									Float tmp11 = _this->localCOMx;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(238)
									Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(238)
									Float tmp13 = _this->body->axisx;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(238)
									Float tmp14 = _this->localCOMy;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(238)
									Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(238)
									Float tmp16 = (tmp12 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(238)
									Float tmp17 = (tmp9 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(238)
									_this->worldCOMx = tmp17;
									HX_STACK_LINE(238)
									Float tmp18 = _this->body->posy;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(238)
									Float tmp19 = _this->localCOMx;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(238)
									Float tmp20 = _this->body->axisx;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(238)
									Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(238)
									Float tmp22 = _this->localCOMy;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(238)
									Float tmp23 = _this->body->axisy;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(238)
									Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(238)
									Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(238)
									Float tmp26 = (tmp18 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(238)
									_this->worldCOMy = tmp26;
								}
							}
						}
					}
					HX_STACK_LINE(238)
					Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
					HX_STACK_LINE(238)
					Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						Float tmp7 = (_this->worldCOMx - rx);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(238)
						_this->aabb->minx = tmp7;
						HX_STACK_LINE(238)
						Float tmp8 = (_this->worldCOMy - ry);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(238)
						_this->aabb->miny = tmp8;
					}
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						Float tmp7 = (_this->worldCOMx + rx);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(238)
						_this->aabb->maxx = tmp7;
						HX_STACK_LINE(238)
						Float tmp8 = (_this->worldCOMy + ry);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(238)
						_this->aabb->maxy = tmp8;
					}
				}
				else{
					HX_STACK_LINE(239)
					::zpp_nape::shape::ZPP_Polygon tmp6 = this->polygon;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(239)
					::zpp_nape::shape::ZPP_Polygon _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(239)
					{
						HX_STACK_LINE(239)
						bool tmp7 = _this->zip_gverts;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(239)
						if ((tmp7)){
							HX_STACK_LINE(239)
							bool tmp8 = (_this->body != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(239)
							if ((tmp8)){
								HX_STACK_LINE(239)
								_this->zip_gverts = false;
								HX_STACK_LINE(239)
								_this->validate_lverts();
								HX_STACK_LINE(239)
								{
									HX_STACK_LINE(239)
									::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(239)
									bool tmp9 = _this1->zip_axis;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(239)
									if ((tmp9)){
										HX_STACK_LINE(239)
										_this1->zip_axis = false;
										HX_STACK_LINE(239)
										{
											HX_STACK_LINE(239)
											Float tmp10 = _this1->rot;		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(239)
											Float tmp11 = ::Math_obj::sin(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(239)
											_this1->axisx = tmp11;
											HX_STACK_LINE(239)
											Float tmp12 = _this1->rot;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(239)
											Float tmp13 = ::Math_obj::cos(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(239)
											_this1->axisy = tmp13;
											HX_STACK_LINE(239)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(239)
								::zpp_nape::geom::ZPP_Vec2 tmp9 = _this->lverts->next;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(239)
								::zpp_nape::geom::ZPP_Vec2 li = tmp9;		HX_STACK_VAR(li,"li");
								HX_STACK_LINE(239)
								{
									HX_STACK_LINE(239)
									::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->gverts->next;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(239)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp10;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(239)
									while((true)){
										HX_STACK_LINE(239)
										bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(239)
										bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(239)
										if ((tmp12)){
											HX_STACK_LINE(239)
											break;
										}
										HX_STACK_LINE(239)
										::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(239)
										{
											HX_STACK_LINE(239)
											::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
											HX_STACK_LINE(239)
											li = li->next;
											HX_STACK_LINE(239)
											{
												HX_STACK_LINE(239)
												Float tmp13 = _this->body->posx;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(239)
												Float tmp14 = _this->body->axisy;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(239)
												Float tmp15 = l->x;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(239)
												Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(239)
												Float tmp17 = _this->body->axisx;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(239)
												Float tmp18 = l->y;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(239)
												Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(239)
												Float tmp20 = (tmp16 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(239)
												Float tmp21 = (tmp13 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(239)
												g->x = tmp21;
												HX_STACK_LINE(239)
												Float tmp22 = _this->body->posy;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(239)
												Float tmp23 = l->x;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(239)
												Float tmp24 = _this->body->axisx;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(239)
												Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(239)
												Float tmp26 = l->y;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(239)
												Float tmp27 = _this->body->axisy;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(239)
												Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(239)
												Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(239)
												Float tmp30 = (tmp22 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(239)
												g->y = tmp30;
											}
										}
										HX_STACK_LINE(239)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
					}
					HX_STACK_LINE(239)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = _this->lverts->next;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(239)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(239)
					if ((tmp8)){
						HX_STACK_LINE(239)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful bounds","\xda","\x28","\x5b","\xf5"));
					}
					HX_STACK_LINE(239)
					::zpp_nape::geom::ZPP_Vec2 tmp9 = _this->gverts->next;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(239)
					::zpp_nape::geom::ZPP_Vec2 p0 = tmp9;		HX_STACK_VAR(p0,"p0");
					HX_STACK_LINE(239)
					{
						HX_STACK_LINE(239)
						_this->aabb->minx = p0->x;
						HX_STACK_LINE(239)
						_this->aabb->miny = p0->y;
						HX_STACK_LINE(239)
						{
						}
					}
					HX_STACK_LINE(239)
					{
						HX_STACK_LINE(239)
						_this->aabb->maxx = p0->x;
						HX_STACK_LINE(239)
						_this->aabb->maxy = p0->y;
						HX_STACK_LINE(239)
						{
						}
					}
					HX_STACK_LINE(239)
					{
						HX_STACK_LINE(239)
						::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->gverts->next;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(239)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp10->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(239)
						while((true)){
							HX_STACK_LINE(239)
							bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(239)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(239)
							if ((tmp12)){
								HX_STACK_LINE(239)
								break;
							}
							HX_STACK_LINE(239)
							::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(239)
							{
								HX_STACK_LINE(239)
								Float tmp13 = p->x;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(239)
								Float tmp14 = _this->aabb->minx;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(239)
								bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(239)
								if ((tmp15)){
									HX_STACK_LINE(239)
									_this->aabb->minx = p->x;
								}
								HX_STACK_LINE(239)
								Float tmp16 = p->x;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(239)
								Float tmp17 = _this->aabb->maxx;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(239)
								bool tmp18 = (tmp16 > tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(239)
								if ((tmp18)){
									HX_STACK_LINE(239)
									_this->aabb->maxx = p->x;
								}
								HX_STACK_LINE(239)
								Float tmp19 = p->y;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(239)
								Float tmp20 = _this->aabb->miny;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(239)
								bool tmp21 = (tmp19 < tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(239)
								if ((tmp21)){
									HX_STACK_LINE(239)
									_this->aabb->miny = p->y;
								}
								HX_STACK_LINE(239)
								Float tmp22 = p->y;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(239)
								Float tmp23 = _this->aabb->maxy;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(239)
								bool tmp24 = (tmp22 > tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(239)
								if ((tmp24)){
									HX_STACK_LINE(239)
									_this->aabb->maxy = p->y;
								}
							}
							HX_STACK_LINE(239)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,validate_aabb,(void))

Void ZPP_Shape_obj::force_validate_aabb( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","force_validate_aabb",0xe23cbf55,"zpp_nape.shape.ZPP_Shape.force_validate_aabb","zpp_nape/shape/Shape.hx",245,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(246)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(246)
		int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(246)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(246)
		if ((tmp2)){
			HX_STACK_LINE(246)
			::zpp_nape::shape::ZPP_Circle tmp3 = this->circle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(246)
			::zpp_nape::shape::ZPP_Circle _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(246)
			{
				HX_STACK_LINE(246)
				Float tmp4 = _this->body->posx;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(246)
				Float tmp5 = _this->body->axisy;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(246)
				Float tmp6 = _this->localCOMx;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(246)
				Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(246)
				Float tmp8 = _this->body->axisx;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(246)
				Float tmp9 = _this->localCOMy;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(246)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(246)
				Float tmp11 = (tmp7 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(246)
				Float tmp12 = (tmp4 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(246)
				_this->worldCOMx = tmp12;
				HX_STACK_LINE(246)
				Float tmp13 = _this->body->posy;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(246)
				Float tmp14 = _this->localCOMx;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(246)
				Float tmp15 = _this->body->axisx;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(246)
				Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(246)
				Float tmp17 = _this->localCOMy;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(246)
				Float tmp18 = _this->body->axisy;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(246)
				Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(246)
				Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(246)
				Float tmp21 = (tmp13 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(246)
				_this->worldCOMy = tmp21;
			}
			HX_STACK_LINE(246)
			Float tmp4 = (_this->worldCOMx - _this->radius);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(246)
			_this->aabb->minx = tmp4;
			HX_STACK_LINE(246)
			Float tmp5 = (_this->worldCOMy - _this->radius);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(246)
			_this->aabb->miny = tmp5;
			HX_STACK_LINE(246)
			Float tmp6 = (_this->worldCOMx + _this->radius);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(246)
			_this->aabb->maxx = tmp6;
			HX_STACK_LINE(246)
			Float tmp7 = (_this->worldCOMy + _this->radius);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(246)
			_this->aabb->maxy = tmp7;
		}
		else{
			HX_STACK_LINE(247)
			::zpp_nape::shape::ZPP_Polygon tmp3 = this->polygon;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(247)
			::zpp_nape::shape::ZPP_Polygon _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(247)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = _this->lverts->next;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(247)
			::zpp_nape::geom::ZPP_Vec2 li = tmp4;		HX_STACK_VAR(li,"li");
			HX_STACK_LINE(247)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = _this->gverts->next;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(247)
			::zpp_nape::geom::ZPP_Vec2 p0 = tmp5;		HX_STACK_VAR(p0,"p0");
			HX_STACK_LINE(247)
			::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(247)
			li = li->next;
			HX_STACK_LINE(247)
			{
				HX_STACK_LINE(247)
				Float tmp6 = _this->body->posx;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(247)
				Float tmp7 = _this->body->axisy;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(247)
				Float tmp8 = l->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(247)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(247)
				Float tmp10 = _this->body->axisx;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(247)
				Float tmp11 = l->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(247)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(247)
				Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(247)
				Float tmp14 = (tmp6 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(247)
				p0->x = tmp14;
				HX_STACK_LINE(247)
				Float tmp15 = _this->body->posy;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(247)
				Float tmp16 = l->x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(247)
				Float tmp17 = _this->body->axisx;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(247)
				Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(247)
				Float tmp19 = l->y;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(247)
				Float tmp20 = _this->body->axisy;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(247)
				Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(247)
				Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(247)
				Float tmp23 = (tmp15 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(247)
				p0->y = tmp23;
			}
			HX_STACK_LINE(247)
			{
				HX_STACK_LINE(247)
				_this->aabb->minx = p0->x;
				HX_STACK_LINE(247)
				_this->aabb->miny = p0->y;
				HX_STACK_LINE(247)
				{
				}
			}
			HX_STACK_LINE(247)
			{
				HX_STACK_LINE(247)
				_this->aabb->maxx = p0->x;
				HX_STACK_LINE(247)
				_this->aabb->maxy = p0->y;
				HX_STACK_LINE(247)
				{
				}
			}
			HX_STACK_LINE(247)
			{
				HX_STACK_LINE(247)
				::zpp_nape::geom::ZPP_Vec2 tmp6 = _this->gverts->next;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(247)
				::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp6->next;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(247)
				while((true)){
					HX_STACK_LINE(247)
					bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(247)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(247)
					if ((tmp8)){
						HX_STACK_LINE(247)
						break;
					}
					HX_STACK_LINE(247)
					::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(247)
					{
						HX_STACK_LINE(247)
						::zpp_nape::geom::ZPP_Vec2 l1 = li;		HX_STACK_VAR(l1,"l1");
						HX_STACK_LINE(247)
						li = li->next;
						HX_STACK_LINE(247)
						{
							HX_STACK_LINE(247)
							Float tmp9 = _this->body->posx;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(247)
							Float tmp10 = _this->body->axisy;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(247)
							Float tmp11 = l1->x;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(247)
							Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(247)
							Float tmp13 = _this->body->axisx;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(247)
							Float tmp14 = l1->y;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(247)
							Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(247)
							Float tmp16 = (tmp12 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(247)
							Float tmp17 = (tmp9 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(247)
							p->x = tmp17;
							HX_STACK_LINE(247)
							Float tmp18 = _this->body->posy;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(247)
							Float tmp19 = l1->x;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(247)
							Float tmp20 = _this->body->axisx;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(247)
							Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(247)
							Float tmp22 = l1->y;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(247)
							Float tmp23 = _this->body->axisy;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(247)
							Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(247)
							Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(247)
							Float tmp26 = (tmp18 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(247)
							p->y = tmp26;
						}
						HX_STACK_LINE(247)
						Float tmp9 = p->x;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(247)
						Float tmp10 = _this->aabb->minx;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(247)
						bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(247)
						if ((tmp11)){
							HX_STACK_LINE(247)
							_this->aabb->minx = p->x;
						}
						HX_STACK_LINE(247)
						Float tmp12 = p->x;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(247)
						Float tmp13 = _this->aabb->maxx;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(247)
						bool tmp14 = (tmp12 > tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(247)
						if ((tmp14)){
							HX_STACK_LINE(247)
							_this->aabb->maxx = p->x;
						}
						HX_STACK_LINE(247)
						Float tmp15 = p->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(247)
						Float tmp16 = _this->aabb->miny;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(247)
						bool tmp17 = (tmp15 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(247)
						if ((tmp17)){
							HX_STACK_LINE(247)
							_this->aabb->miny = p->y;
						}
						HX_STACK_LINE(247)
						Float tmp18 = p->y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(247)
						Float tmp19 = _this->aabb->maxy;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(247)
						bool tmp20 = (tmp18 > tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(247)
						if ((tmp20)){
							HX_STACK_LINE(247)
							_this->aabb->maxy = p->y;
						}
					}
					HX_STACK_LINE(247)
					cx_ite = cx_ite->next;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,force_validate_aabb,(void))

Void ZPP_Shape_obj::invalidate_aabb( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","invalidate_aabb",0xec8d30e4,"zpp_nape.shape.ZPP_Shape.invalidate_aabb","zpp_nape/shape/Shape.hx",251,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(252)
		this->zip_aabb = true;
		HX_STACK_LINE(253)
		::zpp_nape::phys::ZPP_Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(253)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(253)
		if ((tmp1)){
			HX_STACK_LINE(253)
			::zpp_nape::phys::ZPP_Body tmp2 = this->body;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(253)
			tmp2->zip_aabb = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_aabb,(void))

Void ZPP_Shape_obj::validate_area_inertia( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","validate_area_inertia",0xd802a151,"zpp_nape.shape.ZPP_Shape.validate_area_inertia","zpp_nape/shape/Shape.hx",255,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(256)
		bool tmp = this->zip_area_inertia;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(256)
		if ((tmp)){
			HX_STACK_LINE(257)
			this->zip_area_inertia = false;
			HX_STACK_LINE(258)
			int tmp1 = this->type;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(258)
			int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(258)
			bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(258)
			if ((tmp3)){
				HX_STACK_LINE(258)
				::zpp_nape::shape::ZPP_Circle tmp4 = this->circle;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(258)
				tmp4->__validate_area_inertia();
			}
			else{
				HX_STACK_LINE(259)
				::zpp_nape::shape::ZPP_Polygon tmp4 = this->polygon;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(259)
				tmp4->__validate_area_inertia();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,validate_area_inertia,(void))

Void ZPP_Shape_obj::validate_angDrag( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","validate_angDrag",0x738f3645,"zpp_nape.shape.ZPP_Shape.validate_angDrag","zpp_nape/shape/Shape.hx",262,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(263)
		bool tmp = this->zip_angDrag;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(263)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(263)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(263)
		if ((tmp1)){
			HX_STACK_LINE(263)
			::zpp_nape::phys::ZPP_Material tmp3 = this->refmaterial;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(263)
			::zpp_nape::phys::ZPP_Material tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(263)
			Float tmp5 = tmp4->dynamicFriction;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(263)
			::zpp_nape::phys::ZPP_Material tmp6 = this->material;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(263)
			::zpp_nape::phys::ZPP_Material tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(263)
			Float tmp8 = tmp7->dynamicFriction;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(263)
			tmp2 = (tmp5 != tmp8);
		}
		else{
			HX_STACK_LINE(263)
			tmp2 = true;
		}
		HX_STACK_LINE(263)
		if ((tmp2)){
			HX_STACK_LINE(264)
			this->zip_angDrag = false;
			HX_STACK_LINE(265)
			::zpp_nape::phys::ZPP_Material tmp3 = this->material;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(265)
			::zpp_nape::phys::ZPP_Material tmp4 = this->refmaterial;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(265)
			tmp4->dynamicFriction = tmp3->dynamicFriction;
			HX_STACK_LINE(266)
			int tmp5 = this->type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(266)
			int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(266)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(266)
			if ((tmp7)){
				HX_STACK_LINE(266)
				::zpp_nape::shape::ZPP_Circle tmp8 = this->circle;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(266)
				tmp8->__validate_angDrag();
			}
			else{
				HX_STACK_LINE(267)
				::zpp_nape::shape::ZPP_Polygon tmp8 = this->polygon;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(267)
				tmp8->__validate_angDrag();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,validate_angDrag,(void))

Void ZPP_Shape_obj::validate_localCOM( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","validate_localCOM",0x5da3e55f,"zpp_nape.shape.ZPP_Shape.validate_localCOM","zpp_nape/shape/Shape.hx",272,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(273)
		bool tmp = this->zip_localCOM;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(273)
		if ((tmp)){
			HX_STACK_LINE(274)
			this->zip_localCOM = false;
			HX_STACK_LINE(275)
			int tmp1 = this->type;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(275)
			int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(275)
			bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(275)
			if ((tmp3)){
				HX_STACK_LINE(275)
				::zpp_nape::shape::ZPP_Polygon tmp4 = this->polygon;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(275)
				::zpp_nape::shape::ZPP_Polygon _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(275)
				::zpp_nape::geom::ZPP_Vec2 tmp5 = _this->lverts->next;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(275)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(275)
				if ((tmp6)){
					HX_STACK_LINE(275)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
				}
				HX_STACK_LINE(275)
				::zpp_nape::geom::ZPP_Vec2 tmp7 = _this->lverts->next;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(275)
				::zpp_nape::geom::ZPP_Vec2 tmp8 = tmp7->next;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(275)
				bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(275)
				if ((tmp9)){
					HX_STACK_LINE(275)
					::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(275)
					_this->localCOMx = tmp10->x;
					HX_STACK_LINE(275)
					::zpp_nape::geom::ZPP_Vec2 tmp11 = _this->lverts->next;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(275)
					_this->localCOMy = tmp11->y;
					HX_STACK_LINE(275)
					Dynamic();
				}
				else{
					HX_STACK_LINE(275)
					::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(275)
					::zpp_nape::geom::ZPP_Vec2 tmp11 = tmp10->next->next;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(275)
					bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(275)
					if ((tmp12)){
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(275)
							_this->localCOMx = tmp13->x;
							HX_STACK_LINE(275)
							::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(275)
							_this->localCOMy = tmp14->y;
							HX_STACK_LINE(275)
							{
							}
						}
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(275)
							::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(275)
							Float tmp14 = tmp13->next->x;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(275)
							Float tmp15 = t;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(275)
							Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(275)
							hx::AddEq(_this->localCOMx,tmp16);
							HX_STACK_LINE(275)
							::zpp_nape::geom::ZPP_Vec2 tmp17 = _this->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(275)
							Float tmp18 = tmp17->next->y;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(275)
							Float tmp19 = t;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(275)
							Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(275)
							hx::AddEq(_this->localCOMy,tmp20);
						}
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(275)
							hx::MultEq(_this->localCOMx,t);
							HX_STACK_LINE(275)
							hx::MultEq(_this->localCOMy,t);
						}
					}
					else{
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							_this->localCOMx = (int)0;
							HX_STACK_LINE(275)
							_this->localCOMy = (int)0;
							HX_STACK_LINE(275)
							{
							}
						}
						HX_STACK_LINE(275)
						Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(275)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(275)
							::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
							HX_STACK_LINE(275)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(275)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(275)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(275)
							while((true)){
								HX_STACK_LINE(275)
								bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(275)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(275)
								if ((tmp15)){
									HX_STACK_LINE(275)
									break;
								}
								HX_STACK_LINE(275)
								::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
								HX_STACK_LINE(275)
								{
									HX_STACK_LINE(275)
									Float tmp16 = v->x;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(275)
									Float tmp17 = (w->y - u->y);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(275)
									Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(275)
									hx::AddEq(area,tmp18);
									HX_STACK_LINE(275)
									Float tmp19 = (w->y * v->x);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(275)
									Float tmp20 = (w->x * v->y);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(275)
									Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(275)
									Float cf = tmp21;		HX_STACK_VAR(cf,"cf");
									HX_STACK_LINE(275)
									Float tmp22 = (v->x + w->x);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(275)
									Float tmp23 = cf;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(275)
									Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(275)
									hx::AddEq(_this->localCOMx,tmp24);
									HX_STACK_LINE(275)
									Float tmp25 = (v->y + w->y);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(275)
									Float tmp26 = cf;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(275)
									Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(275)
									hx::AddEq(_this->localCOMy,tmp27);
								}
								HX_STACK_LINE(275)
								u = v;
								HX_STACK_LINE(275)
								v = w;
								HX_STACK_LINE(275)
								cx_ite = cx_ite->next;
							}
							HX_STACK_LINE(275)
							::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(275)
							cx_ite = tmp14;
							HX_STACK_LINE(275)
							::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
							HX_STACK_LINE(275)
							{
								HX_STACK_LINE(275)
								Float tmp15 = v->x;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(275)
								Float tmp16 = (w->y - u->y);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(275)
								Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(275)
								hx::AddEq(area,tmp17);
								HX_STACK_LINE(275)
								Float tmp18 = (w->y * v->x);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(275)
								Float tmp19 = (w->x * v->y);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(275)
								Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(275)
								Float cf = tmp20;		HX_STACK_VAR(cf,"cf");
								HX_STACK_LINE(275)
								Float tmp21 = (v->x + w->x);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(275)
								Float tmp22 = cf;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(275)
								Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(275)
								hx::AddEq(_this->localCOMx,tmp23);
								HX_STACK_LINE(275)
								Float tmp24 = (v->y + w->y);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(275)
								Float tmp25 = cf;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(275)
								Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(275)
								hx::AddEq(_this->localCOMy,tmp26);
							}
							HX_STACK_LINE(275)
							u = v;
							HX_STACK_LINE(275)
							v = w;
							HX_STACK_LINE(275)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(275)
							::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
							HX_STACK_LINE(275)
							{
								HX_STACK_LINE(275)
								Float tmp15 = v->x;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(275)
								Float tmp16 = (w1->y - u->y);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(275)
								Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(275)
								hx::AddEq(area,tmp17);
								HX_STACK_LINE(275)
								Float tmp18 = (w1->y * v->x);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(275)
								Float tmp19 = (w1->x * v->y);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(275)
								Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(275)
								Float cf = tmp20;		HX_STACK_VAR(cf,"cf");
								HX_STACK_LINE(275)
								Float tmp21 = (v->x + w1->x);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(275)
								Float tmp22 = cf;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(275)
								Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(275)
								hx::AddEq(_this->localCOMx,tmp23);
								HX_STACK_LINE(275)
								Float tmp24 = (v->y + w1->y);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(275)
								Float tmp25 = cf;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(275)
								Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(275)
								hx::AddEq(_this->localCOMy,tmp26);
							}
						}
						HX_STACK_LINE(275)
						Float tmp13 = ((int)3 * area);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(275)
						Float tmp14 = (Float((int)1) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(275)
						area = tmp14;
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							Float t = area;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(275)
							hx::MultEq(_this->localCOMx,t);
							HX_STACK_LINE(275)
							hx::MultEq(_this->localCOMy,t);
						}
					}
				}
			}
			HX_STACK_LINE(276)
			::nape::geom::Vec2 tmp4 = this->wrap_localCOM;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(276)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(276)
			if ((tmp5)){
				HX_STACK_LINE(277)
				Float tmp6 = this->localCOMx;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(277)
				::nape::geom::Vec2 tmp7 = this->wrap_localCOM;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(277)
				tmp7->zpp_inner->x = tmp6;
				HX_STACK_LINE(278)
				Float tmp8 = this->localCOMy;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(278)
				::nape::geom::Vec2 tmp9 = this->wrap_localCOM;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(278)
				tmp9->zpp_inner->y = tmp8;
				HX_STACK_LINE(287)
				{
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,validate_localCOM,(void))

Void ZPP_Shape_obj::validate_worldCOM( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","validate_worldCOM",0x2247e2d8,"zpp_nape.shape.ZPP_Shape.validate_worldCOM","zpp_nape/shape/Shape.hx",300,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(301)
		bool tmp = this->zip_worldCOM;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(301)
		if ((tmp)){
			HX_STACK_LINE(302)
			::zpp_nape::phys::ZPP_Body tmp1 = this->body;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(302)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(302)
			if ((tmp2)){
				HX_STACK_LINE(303)
				this->zip_worldCOM = false;
				HX_STACK_LINE(304)
				{
					HX_STACK_LINE(304)
					bool tmp3 = this->zip_localCOM;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(304)
					if ((tmp3)){
						HX_STACK_LINE(304)
						this->zip_localCOM = false;
						HX_STACK_LINE(304)
						int tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(304)
						int tmp5 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(304)
						bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(304)
						if ((tmp6)){
							HX_STACK_LINE(304)
							::zpp_nape::shape::ZPP_Polygon tmp7 = this->polygon;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(304)
							::zpp_nape::shape::ZPP_Polygon _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(304)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = _this->lverts->next;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(304)
							bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(304)
							if ((tmp9)){
								HX_STACK_LINE(304)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
							}
							HX_STACK_LINE(304)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(304)
							::zpp_nape::geom::ZPP_Vec2 tmp11 = tmp10->next;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(304)
							bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(304)
							if ((tmp12)){
								HX_STACK_LINE(304)
								::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(304)
								_this->localCOMx = tmp13->x;
								HX_STACK_LINE(304)
								::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(304)
								_this->localCOMy = tmp14->y;
								HX_STACK_LINE(304)
								Dynamic();
							}
							else{
								HX_STACK_LINE(304)
								::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(304)
								::zpp_nape::geom::ZPP_Vec2 tmp14 = tmp13->next->next;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(304)
								bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(304)
								if ((tmp15)){
									HX_STACK_LINE(304)
									{
										HX_STACK_LINE(304)
										::zpp_nape::geom::ZPP_Vec2 tmp16 = _this->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(304)
										_this->localCOMx = tmp16->x;
										HX_STACK_LINE(304)
										::zpp_nape::geom::ZPP_Vec2 tmp17 = _this->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(304)
										_this->localCOMy = tmp17->y;
										HX_STACK_LINE(304)
										{
										}
									}
									HX_STACK_LINE(304)
									{
										HX_STACK_LINE(304)
										Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(304)
										::zpp_nape::geom::ZPP_Vec2 tmp16 = _this->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(304)
										Float tmp17 = tmp16->next->x;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(304)
										Float tmp18 = t;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(304)
										Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(304)
										hx::AddEq(_this->localCOMx,tmp19);
										HX_STACK_LINE(304)
										::zpp_nape::geom::ZPP_Vec2 tmp20 = _this->lverts->next;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(304)
										Float tmp21 = tmp20->next->y;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(304)
										Float tmp22 = t;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(304)
										Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(304)
										hx::AddEq(_this->localCOMy,tmp23);
									}
									HX_STACK_LINE(304)
									{
										HX_STACK_LINE(304)
										Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(304)
										hx::MultEq(_this->localCOMx,t);
										HX_STACK_LINE(304)
										hx::MultEq(_this->localCOMy,t);
									}
								}
								else{
									HX_STACK_LINE(304)
									{
										HX_STACK_LINE(304)
										_this->localCOMx = (int)0;
										HX_STACK_LINE(304)
										_this->localCOMy = (int)0;
										HX_STACK_LINE(304)
										{
										}
									}
									HX_STACK_LINE(304)
									Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
									HX_STACK_LINE(304)
									{
										HX_STACK_LINE(304)
										::zpp_nape::geom::ZPP_Vec2 tmp16 = _this->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(304)
										::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp16;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(304)
										::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
										HX_STACK_LINE(304)
										cx_ite = cx_ite->next;
										HX_STACK_LINE(304)
										::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(304)
										cx_ite = cx_ite->next;
										HX_STACK_LINE(304)
										while((true)){
											HX_STACK_LINE(304)
											bool tmp17 = (cx_ite != null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(304)
											bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(304)
											if ((tmp18)){
												HX_STACK_LINE(304)
												break;
											}
											HX_STACK_LINE(304)
											::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
											HX_STACK_LINE(304)
											{
												HX_STACK_LINE(304)
												Float tmp19 = v->x;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(304)
												Float tmp20 = (w->y - u->y);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(304)
												Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(304)
												hx::AddEq(area,tmp21);
												HX_STACK_LINE(304)
												Float tmp22 = (w->y * v->x);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(304)
												Float tmp23 = (w->x * v->y);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(304)
												Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(304)
												Float cf = tmp24;		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(304)
												Float tmp25 = (v->x + w->x);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(304)
												Float tmp26 = cf;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(304)
												Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(304)
												hx::AddEq(_this->localCOMx,tmp27);
												HX_STACK_LINE(304)
												Float tmp28 = (v->y + w->y);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(304)
												Float tmp29 = cf;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(304)
												Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(304)
												hx::AddEq(_this->localCOMy,tmp30);
											}
											HX_STACK_LINE(304)
											u = v;
											HX_STACK_LINE(304)
											v = w;
											HX_STACK_LINE(304)
											cx_ite = cx_ite->next;
										}
										HX_STACK_LINE(304)
										::zpp_nape::geom::ZPP_Vec2 tmp17 = _this->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(304)
										cx_ite = tmp17;
										HX_STACK_LINE(304)
										::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
										HX_STACK_LINE(304)
										{
											HX_STACK_LINE(304)
											Float tmp18 = v->x;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(304)
											Float tmp19 = (w->y - u->y);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(304)
											Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(304)
											hx::AddEq(area,tmp20);
											HX_STACK_LINE(304)
											Float tmp21 = (w->y * v->x);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(304)
											Float tmp22 = (w->x * v->y);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(304)
											Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(304)
											Float cf = tmp23;		HX_STACK_VAR(cf,"cf");
											HX_STACK_LINE(304)
											Float tmp24 = (v->x + w->x);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(304)
											Float tmp25 = cf;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(304)
											Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(304)
											hx::AddEq(_this->localCOMx,tmp26);
											HX_STACK_LINE(304)
											Float tmp27 = (v->y + w->y);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(304)
											Float tmp28 = cf;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(304)
											Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(304)
											hx::AddEq(_this->localCOMy,tmp29);
										}
										HX_STACK_LINE(304)
										u = v;
										HX_STACK_LINE(304)
										v = w;
										HX_STACK_LINE(304)
										cx_ite = cx_ite->next;
										HX_STACK_LINE(304)
										::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
										HX_STACK_LINE(304)
										{
											HX_STACK_LINE(304)
											Float tmp18 = v->x;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(304)
											Float tmp19 = (w1->y - u->y);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(304)
											Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(304)
											hx::AddEq(area,tmp20);
											HX_STACK_LINE(304)
											Float tmp21 = (w1->y * v->x);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(304)
											Float tmp22 = (w1->x * v->y);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(304)
											Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(304)
											Float cf = tmp23;		HX_STACK_VAR(cf,"cf");
											HX_STACK_LINE(304)
											Float tmp24 = (v->x + w1->x);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(304)
											Float tmp25 = cf;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(304)
											Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(304)
											hx::AddEq(_this->localCOMx,tmp26);
											HX_STACK_LINE(304)
											Float tmp27 = (v->y + w1->y);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(304)
											Float tmp28 = cf;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(304)
											Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(304)
											hx::AddEq(_this->localCOMy,tmp29);
										}
									}
									HX_STACK_LINE(304)
									Float tmp16 = ((int)3 * area);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(304)
									Float tmp17 = (Float((int)1) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(304)
									area = tmp17;
									HX_STACK_LINE(304)
									{
										HX_STACK_LINE(304)
										Float t = area;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(304)
										hx::MultEq(_this->localCOMx,t);
										HX_STACK_LINE(304)
										hx::MultEq(_this->localCOMy,t);
									}
								}
							}
						}
						HX_STACK_LINE(304)
						::nape::geom::Vec2 tmp7 = this->wrap_localCOM;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(304)
						bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(304)
						if ((tmp8)){
							HX_STACK_LINE(304)
							Float tmp9 = this->localCOMx;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(304)
							::nape::geom::Vec2 tmp10 = this->wrap_localCOM;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(304)
							tmp10->zpp_inner->x = tmp9;
							HX_STACK_LINE(304)
							Float tmp11 = this->localCOMy;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(304)
							::nape::geom::Vec2 tmp12 = this->wrap_localCOM;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(304)
							tmp12->zpp_inner->y = tmp11;
							HX_STACK_LINE(304)
							{
							}
						}
					}
				}
				HX_STACK_LINE(305)
				{
					HX_STACK_LINE(305)
					::zpp_nape::phys::ZPP_Body tmp3 = this->body;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(305)
					::zpp_nape::phys::ZPP_Body _this = tmp3;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(305)
					bool tmp4 = _this->zip_axis;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(305)
					if ((tmp4)){
						HX_STACK_LINE(305)
						_this->zip_axis = false;
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							Float tmp5 = _this->rot;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(305)
							Float tmp6 = ::Math_obj::sin(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(305)
							_this->axisx = tmp6;
							HX_STACK_LINE(305)
							Float tmp7 = _this->rot;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(305)
							Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(305)
							_this->axisy = tmp8;
							HX_STACK_LINE(305)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(306)
				{
					HX_STACK_LINE(307)
					::zpp_nape::phys::ZPP_Body tmp3 = this->body;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(307)
					Float tmp4 = tmp3->posx;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(307)
					::zpp_nape::phys::ZPP_Body tmp5 = this->body;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(307)
					Float tmp6 = tmp5->axisy;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(307)
					Float tmp7 = this->localCOMx;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(307)
					Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(307)
					::zpp_nape::phys::ZPP_Body tmp9 = this->body;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(307)
					Float tmp10 = tmp9->axisx;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(307)
					Float tmp11 = this->localCOMy;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(307)
					Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(307)
					Float tmp13 = (tmp8 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(307)
					Float tmp14 = (tmp4 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(307)
					this->worldCOMx = tmp14;
					HX_STACK_LINE(308)
					::zpp_nape::phys::ZPP_Body tmp15 = this->body;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(308)
					Float tmp16 = tmp15->posy;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(308)
					Float tmp17 = this->localCOMx;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(308)
					::zpp_nape::phys::ZPP_Body tmp18 = this->body;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(308)
					Float tmp19 = tmp18->axisx;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(308)
					Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(308)
					Float tmp21 = this->localCOMy;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(308)
					::zpp_nape::phys::ZPP_Body tmp22 = this->body;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(308)
					Float tmp23 = tmp22->axisy;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(308)
					Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(308)
					Float tmp25 = (tmp20 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(308)
					Float tmp26 = (tmp16 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(308)
					this->worldCOMy = tmp26;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,validate_worldCOM,(void))

Void ZPP_Shape_obj::getworldCOM( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","getworldCOM",0x0bc1b565,"zpp_nape.shape.ZPP_Shape.getworldCOM","zpp_nape/shape/Shape.hx",313,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(315)
		::zpp_nape::phys::ZPP_Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(315)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(315)
		if ((tmp1)){
			HX_STACK_LINE(315)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: worldCOM only makes sense when Shape belongs to a Body","\x33","\xae","\x6f","\x8c"));
		}
		HX_STACK_LINE(317)
		{
			HX_STACK_LINE(317)
			bool tmp2 = this->zip_worldCOM;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(317)
			if ((tmp2)){
				HX_STACK_LINE(317)
				::zpp_nape::phys::ZPP_Body tmp3 = this->body;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(317)
				bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(317)
				if ((tmp4)){
					HX_STACK_LINE(317)
					this->zip_worldCOM = false;
					HX_STACK_LINE(317)
					{
						HX_STACK_LINE(317)
						bool tmp5 = this->zip_localCOM;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(317)
						if ((tmp5)){
							HX_STACK_LINE(317)
							this->zip_localCOM = false;
							HX_STACK_LINE(317)
							int tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(317)
							int tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(317)
							bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(317)
							if ((tmp8)){
								HX_STACK_LINE(317)
								::zpp_nape::shape::ZPP_Polygon tmp9 = this->polygon;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(317)
								::zpp_nape::shape::ZPP_Polygon _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(317)
								::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(317)
								bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(317)
								if ((tmp11)){
									HX_STACK_LINE(317)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
								}
								HX_STACK_LINE(317)
								::zpp_nape::geom::ZPP_Vec2 tmp12 = _this->lverts->next;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(317)
								::zpp_nape::geom::ZPP_Vec2 tmp13 = tmp12->next;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(317)
								bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(317)
								if ((tmp14)){
									HX_STACK_LINE(317)
									::zpp_nape::geom::ZPP_Vec2 tmp15 = _this->lverts->next;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(317)
									_this->localCOMx = tmp15->x;
									HX_STACK_LINE(317)
									::zpp_nape::geom::ZPP_Vec2 tmp16 = _this->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(317)
									_this->localCOMy = tmp16->y;
									HX_STACK_LINE(317)
									Dynamic();
								}
								else{
									HX_STACK_LINE(317)
									::zpp_nape::geom::ZPP_Vec2 tmp15 = _this->lverts->next;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(317)
									::zpp_nape::geom::ZPP_Vec2 tmp16 = tmp15->next->next;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(317)
									bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(317)
									if ((tmp17)){
										HX_STACK_LINE(317)
										{
											HX_STACK_LINE(317)
											::zpp_nape::geom::ZPP_Vec2 tmp18 = _this->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(317)
											_this->localCOMx = tmp18->x;
											HX_STACK_LINE(317)
											::zpp_nape::geom::ZPP_Vec2 tmp19 = _this->lverts->next;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(317)
											_this->localCOMy = tmp19->y;
											HX_STACK_LINE(317)
											{
											}
										}
										HX_STACK_LINE(317)
										{
											HX_STACK_LINE(317)
											Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(317)
											::zpp_nape::geom::ZPP_Vec2 tmp18 = _this->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(317)
											Float tmp19 = tmp18->next->x;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(317)
											Float tmp20 = t;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(317)
											Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(317)
											hx::AddEq(_this->localCOMx,tmp21);
											HX_STACK_LINE(317)
											::zpp_nape::geom::ZPP_Vec2 tmp22 = _this->lverts->next;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(317)
											Float tmp23 = tmp22->next->y;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(317)
											Float tmp24 = t;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(317)
											Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(317)
											hx::AddEq(_this->localCOMy,tmp25);
										}
										HX_STACK_LINE(317)
										{
											HX_STACK_LINE(317)
											Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(317)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(317)
											hx::MultEq(_this->localCOMy,t);
										}
									}
									else{
										HX_STACK_LINE(317)
										{
											HX_STACK_LINE(317)
											_this->localCOMx = (int)0;
											HX_STACK_LINE(317)
											_this->localCOMy = (int)0;
											HX_STACK_LINE(317)
											{
											}
										}
										HX_STACK_LINE(317)
										Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
										HX_STACK_LINE(317)
										{
											HX_STACK_LINE(317)
											::zpp_nape::geom::ZPP_Vec2 tmp18 = _this->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(317)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp18;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(317)
											::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
											HX_STACK_LINE(317)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(317)
											::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(317)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(317)
											while((true)){
												HX_STACK_LINE(317)
												bool tmp19 = (cx_ite != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(317)
												bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(317)
												if ((tmp20)){
													HX_STACK_LINE(317)
													break;
												}
												HX_STACK_LINE(317)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(317)
												{
													HX_STACK_LINE(317)
													Float tmp21 = v->x;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(317)
													Float tmp22 = (w->y - u->y);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(317)
													Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(317)
													hx::AddEq(area,tmp23);
													HX_STACK_LINE(317)
													Float tmp24 = (w->y * v->x);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(317)
													Float tmp25 = (w->x * v->y);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(317)
													Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(317)
													Float cf = tmp26;		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(317)
													Float tmp27 = (v->x + w->x);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(317)
													Float tmp28 = cf;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(317)
													Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(317)
													hx::AddEq(_this->localCOMx,tmp29);
													HX_STACK_LINE(317)
													Float tmp30 = (v->y + w->y);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(317)
													Float tmp31 = cf;		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(317)
													Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(317)
													hx::AddEq(_this->localCOMy,tmp32);
												}
												HX_STACK_LINE(317)
												u = v;
												HX_STACK_LINE(317)
												v = w;
												HX_STACK_LINE(317)
												cx_ite = cx_ite->next;
											}
											HX_STACK_LINE(317)
											::zpp_nape::geom::ZPP_Vec2 tmp19 = _this->lverts->next;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(317)
											cx_ite = tmp19;
											HX_STACK_LINE(317)
											::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
											HX_STACK_LINE(317)
											{
												HX_STACK_LINE(317)
												Float tmp20 = v->x;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(317)
												Float tmp21 = (w->y - u->y);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(317)
												Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(317)
												hx::AddEq(area,tmp22);
												HX_STACK_LINE(317)
												Float tmp23 = (w->y * v->x);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(317)
												Float tmp24 = (w->x * v->y);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(317)
												Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(317)
												Float cf = tmp25;		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(317)
												Float tmp26 = (v->x + w->x);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(317)
												Float tmp27 = cf;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(317)
												Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(317)
												hx::AddEq(_this->localCOMx,tmp28);
												HX_STACK_LINE(317)
												Float tmp29 = (v->y + w->y);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(317)
												Float tmp30 = cf;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(317)
												Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(317)
												hx::AddEq(_this->localCOMy,tmp31);
											}
											HX_STACK_LINE(317)
											u = v;
											HX_STACK_LINE(317)
											v = w;
											HX_STACK_LINE(317)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(317)
											::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
											HX_STACK_LINE(317)
											{
												HX_STACK_LINE(317)
												Float tmp20 = v->x;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(317)
												Float tmp21 = (w1->y - u->y);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(317)
												Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(317)
												hx::AddEq(area,tmp22);
												HX_STACK_LINE(317)
												Float tmp23 = (w1->y * v->x);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(317)
												Float tmp24 = (w1->x * v->y);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(317)
												Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(317)
												Float cf = tmp25;		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(317)
												Float tmp26 = (v->x + w1->x);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(317)
												Float tmp27 = cf;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(317)
												Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(317)
												hx::AddEq(_this->localCOMx,tmp28);
												HX_STACK_LINE(317)
												Float tmp29 = (v->y + w1->y);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(317)
												Float tmp30 = cf;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(317)
												Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(317)
												hx::AddEq(_this->localCOMy,tmp31);
											}
										}
										HX_STACK_LINE(317)
										Float tmp18 = ((int)3 * area);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(317)
										Float tmp19 = (Float((int)1) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(317)
										area = tmp19;
										HX_STACK_LINE(317)
										{
											HX_STACK_LINE(317)
											Float t = area;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(317)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(317)
											hx::MultEq(_this->localCOMy,t);
										}
									}
								}
							}
							HX_STACK_LINE(317)
							::nape::geom::Vec2 tmp9 = this->wrap_localCOM;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(317)
							bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(317)
							if ((tmp10)){
								HX_STACK_LINE(317)
								Float tmp11 = this->localCOMx;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(317)
								::nape::geom::Vec2 tmp12 = this->wrap_localCOM;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(317)
								tmp12->zpp_inner->x = tmp11;
								HX_STACK_LINE(317)
								Float tmp13 = this->localCOMy;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(317)
								::nape::geom::Vec2 tmp14 = this->wrap_localCOM;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(317)
								tmp14->zpp_inner->y = tmp13;
								HX_STACK_LINE(317)
								{
								}
							}
						}
					}
					HX_STACK_LINE(317)
					{
						HX_STACK_LINE(317)
						::zpp_nape::phys::ZPP_Body tmp5 = this->body;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(317)
						::zpp_nape::phys::ZPP_Body _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(317)
						bool tmp6 = _this->zip_axis;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(317)
						if ((tmp6)){
							HX_STACK_LINE(317)
							_this->zip_axis = false;
							HX_STACK_LINE(317)
							{
								HX_STACK_LINE(317)
								Float tmp7 = _this->rot;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(317)
								Float tmp8 = ::Math_obj::sin(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(317)
								_this->axisx = tmp8;
								HX_STACK_LINE(317)
								Float tmp9 = _this->rot;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(317)
								Float tmp10 = ::Math_obj::cos(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(317)
								_this->axisy = tmp10;
								HX_STACK_LINE(317)
								Dynamic();
							}
						}
					}
					HX_STACK_LINE(317)
					{
						HX_STACK_LINE(317)
						::zpp_nape::phys::ZPP_Body tmp5 = this->body;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(317)
						Float tmp6 = tmp5->posx;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(317)
						::zpp_nape::phys::ZPP_Body tmp7 = this->body;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(317)
						Float tmp8 = tmp7->axisy;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(317)
						Float tmp9 = this->localCOMx;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(317)
						Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(317)
						::zpp_nape::phys::ZPP_Body tmp11 = this->body;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(317)
						Float tmp12 = tmp11->axisx;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(317)
						Float tmp13 = this->localCOMy;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(317)
						Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(317)
						Float tmp15 = (tmp10 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(317)
						Float tmp16 = (tmp6 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(317)
						this->worldCOMx = tmp16;
						HX_STACK_LINE(317)
						::zpp_nape::phys::ZPP_Body tmp17 = this->body;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(317)
						Float tmp18 = tmp17->posy;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(317)
						Float tmp19 = this->localCOMx;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(317)
						::zpp_nape::phys::ZPP_Body tmp20 = this->body;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(317)
						Float tmp21 = tmp20->axisx;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(317)
						Float tmp22 = (tmp19 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(317)
						Float tmp23 = this->localCOMy;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(317)
						::zpp_nape::phys::ZPP_Body tmp24 = this->body;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(317)
						Float tmp25 = tmp24->axisy;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(317)
						Float tmp26 = (tmp23 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(317)
						Float tmp27 = (tmp22 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(317)
						Float tmp28 = (tmp18 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(317)
						this->worldCOMy = tmp28;
					}
				}
			}
		}
		HX_STACK_LINE(318)
		{
			HX_STACK_LINE(319)
			Float tmp2 = this->worldCOMx;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(319)
			::nape::geom::Vec2 tmp3 = this->wrap_worldCOM;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(319)
			tmp3->zpp_inner->x = tmp2;
			HX_STACK_LINE(320)
			Float tmp4 = this->worldCOMy;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(320)
			::nape::geom::Vec2 tmp5 = this->wrap_worldCOM;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(320)
			tmp5->zpp_inner->y = tmp4;
			HX_STACK_LINE(329)
			{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,getworldCOM,(void))

Void ZPP_Shape_obj::invalidate_area_inertia( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","invalidate_area_inertia",0x9764dd4c,"zpp_nape.shape.ZPP_Shape.invalidate_area_inertia","zpp_nape/shape/Shape.hx",339,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(340)
		this->zip_area_inertia = true;
		HX_STACK_LINE(341)
		::zpp_nape::phys::ZPP_Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(341)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(341)
		if ((tmp1)){
			HX_STACK_LINE(342)
			{
				HX_STACK_LINE(342)
				::zpp_nape::phys::ZPP_Body tmp2 = this->body;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(342)
				::zpp_nape::phys::ZPP_Body _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(342)
				_this->zip_localCOM = true;
				HX_STACK_LINE(342)
				_this->zip_worldCOM = true;
			}
			HX_STACK_LINE(343)
			::zpp_nape::phys::ZPP_Body tmp2 = this->body;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(343)
			tmp2->invalidate_mass();
			HX_STACK_LINE(344)
			::zpp_nape::phys::ZPP_Body tmp3 = this->body;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(344)
			tmp3->invalidate_inertia();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_area_inertia,(void))

Void ZPP_Shape_obj::invalidate_angDrag( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","invalidate_angDrag",0xfaac7c2a,"zpp_nape.shape.ZPP_Shape.invalidate_angDrag","zpp_nape/shape/Shape.hx",348,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(348)
		this->zip_angDrag = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_angDrag,(void))

Void ZPP_Shape_obj::invalidate_localCOM( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","invalidate_localCOM",0x1023c7da,"zpp_nape.shape.ZPP_Shape.invalidate_localCOM","zpp_nape/shape/Shape.hx",350,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(351)
		this->zip_localCOM = true;
		HX_STACK_LINE(352)
		this->invalidate_area_inertia();
		HX_STACK_LINE(353)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(353)
		int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(353)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(353)
		if ((tmp2)){
			HX_STACK_LINE(353)
			this->zip_sweepRadius = true;
		}
		HX_STACK_LINE(354)
		this->invalidate_angDrag();
		HX_STACK_LINE(355)
		this->invalidate_worldCOM();
		HX_STACK_LINE(356)
		::zpp_nape::phys::ZPP_Body tmp3 = this->body;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(356)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(356)
		if ((tmp4)){
			HX_STACK_LINE(356)
			::zpp_nape::phys::ZPP_Body tmp5 = this->body;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(356)
			::zpp_nape::phys::ZPP_Body _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(356)
			_this->zip_localCOM = true;
			HX_STACK_LINE(356)
			_this->zip_worldCOM = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_localCOM,(void))

Void ZPP_Shape_obj::invalidate_worldCOM( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","invalidate_worldCOM",0xd4c7c553,"zpp_nape.shape.ZPP_Shape.invalidate_worldCOM","zpp_nape/shape/Shape.hx",358,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(359)
		this->zip_worldCOM = true;
		HX_STACK_LINE(360)
		{
			HX_STACK_LINE(360)
			this->zip_aabb = true;
			HX_STACK_LINE(360)
			::zpp_nape::phys::ZPP_Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(360)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(360)
			if ((tmp1)){
				HX_STACK_LINE(360)
				::zpp_nape::phys::ZPP_Body tmp2 = this->body;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(360)
				tmp2->zip_aabb = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_worldCOM,(void))

Void ZPP_Shape_obj::invalidate_material( int flags){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","invalidate_material",0x20e95ceb,"zpp_nape.shape.ZPP_Shape.invalidate_material","zpp_nape/shape/Shape.hx",362,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(flags,"flags")
		HX_STACK_LINE(363)
		int tmp = flags;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(363)
		int tmp1 = ::zpp_nape::phys::ZPP_Material_obj::WAKE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(363)
		int tmp2 = (int(tmp) & int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(363)
		bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(363)
		if ((tmp3)){
			HX_STACK_LINE(363)
			this->wake();
		}
		HX_STACK_LINE(364)
		int tmp4 = flags;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(364)
		int tmp5 = ::zpp_nape::phys::ZPP_Material_obj::ARBITERS;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(364)
		int tmp6 = (int(tmp4) & int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(364)
		bool tmp7 = (tmp6 != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(364)
		if ((tmp7)){
			HX_STACK_LINE(365)
			::zpp_nape::phys::ZPP_Body tmp8 = this->body;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(365)
			bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(365)
			if ((tmp9)){
				HX_STACK_LINE(365)
				::zpp_nape::phys::ZPP_Body tmp10 = this->body;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(365)
				tmp10->refreshArbiters();
			}
		}
		HX_STACK_LINE(367)
		int tmp8 = flags;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(367)
		int tmp9 = ::zpp_nape::phys::ZPP_Material_obj::PROPS;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(367)
		int tmp10 = (int(tmp8) & int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(367)
		bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(367)
		if ((tmp11)){
			HX_STACK_LINE(368)
			::zpp_nape::phys::ZPP_Body tmp12 = this->body;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(368)
			bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(368)
			if ((tmp13)){
				HX_STACK_LINE(369)
				{
					HX_STACK_LINE(369)
					::zpp_nape::phys::ZPP_Body tmp14 = this->body;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(369)
					::zpp_nape::phys::ZPP_Body _this = tmp14;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(369)
					_this->zip_localCOM = true;
					HX_STACK_LINE(369)
					_this->zip_worldCOM = true;
				}
				HX_STACK_LINE(370)
				::zpp_nape::phys::ZPP_Body tmp14 = this->body;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(370)
				tmp14->invalidate_mass();
				HX_STACK_LINE(371)
				::zpp_nape::phys::ZPP_Body tmp15 = this->body;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(371)
				tmp15->invalidate_inertia();
			}
		}
		HX_STACK_LINE(374)
		int tmp12 = flags;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(374)
		int tmp13 = ::zpp_nape::phys::ZPP_Material_obj::ANGDRAG;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(374)
		int tmp14 = (int(tmp12) & int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(374)
		bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(374)
		if ((tmp15)){
			HX_STACK_LINE(375)
			this->invalidate_angDrag();
		}
		HX_STACK_LINE(377)
		::zpp_nape::phys::ZPP_Material tmp16 = this->refmaterial;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(377)
		::zpp_nape::phys::ZPP_Material tmp17 = this->material;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(377)
		tmp16->set(tmp17);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Shape_obj,invalidate_material,(void))

Void ZPP_Shape_obj::invalidate_filter( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","invalidate_filter",0xb08dc6fc,"zpp_nape.shape.ZPP_Shape.invalidate_filter","zpp_nape/shape/Shape.hx",380,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(380)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_filter,(void))

Void ZPP_Shape_obj::invalidate_fluidprops( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","invalidate_fluidprops",0x5b97826a,"zpp_nape.shape.ZPP_Shape.invalidate_fluidprops","zpp_nape/shape/Shape.hx",382,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(383)
		bool tmp = this->fluidEnabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(383)
		if ((tmp)){
			HX_STACK_LINE(383)
			this->wake();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,invalidate_fluidprops,(void))

Void ZPP_Shape_obj::aabb_validate( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","aabb_validate",0x56b2ab15,"zpp_nape.shape.ZPP_Shape.aabb_validate","zpp_nape/shape/Shape.hx",385,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(387)
		::zpp_nape::phys::ZPP_Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(387)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(387)
		if ((tmp1)){
			HX_STACK_LINE(387)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: bounds only makes sense when Shape belongs to a Body","\x99","\x3e","\x44","\x1a"));
		}
		HX_STACK_LINE(389)
		{
			HX_STACK_LINE(389)
			bool tmp2 = this->zip_aabb;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(389)
			if ((tmp2)){
				HX_STACK_LINE(389)
				::zpp_nape::phys::ZPP_Body tmp3 = this->body;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(389)
				bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(389)
				if ((tmp4)){
					HX_STACK_LINE(389)
					this->zip_aabb = false;
					HX_STACK_LINE(389)
					int tmp5 = this->type;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(389)
					int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(389)
					bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(389)
					if ((tmp7)){
						HX_STACK_LINE(389)
						::zpp_nape::shape::ZPP_Circle tmp8 = this->circle;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(389)
						::zpp_nape::shape::ZPP_Circle _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(389)
						{
							HX_STACK_LINE(389)
							bool tmp9 = _this->zip_worldCOM;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(389)
							if ((tmp9)){
								HX_STACK_LINE(389)
								bool tmp10 = (_this->body != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(389)
								if ((tmp10)){
									HX_STACK_LINE(389)
									_this->zip_worldCOM = false;
									HX_STACK_LINE(389)
									{
										HX_STACK_LINE(389)
										bool tmp11 = _this->zip_localCOM;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(389)
										if ((tmp11)){
											HX_STACK_LINE(389)
											_this->zip_localCOM = false;
											HX_STACK_LINE(389)
											int tmp12 = _this->type;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(389)
											int tmp13 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(389)
											bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(389)
											if ((tmp14)){
												HX_STACK_LINE(389)
												::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(389)
												::zpp_nape::geom::ZPP_Vec2 tmp15 = _this1->lverts->next;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(389)
												bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(389)
												if ((tmp16)){
													HX_STACK_LINE(389)
													HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
												}
												HX_STACK_LINE(389)
												::zpp_nape::geom::ZPP_Vec2 tmp17 = _this1->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(389)
												::zpp_nape::geom::ZPP_Vec2 tmp18 = tmp17->next;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(389)
												bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(389)
												if ((tmp19)){
													HX_STACK_LINE(389)
													::zpp_nape::geom::ZPP_Vec2 tmp20 = _this1->lverts->next;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(389)
													_this1->localCOMx = tmp20->x;
													HX_STACK_LINE(389)
													::zpp_nape::geom::ZPP_Vec2 tmp21 = _this1->lverts->next;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(389)
													_this1->localCOMy = tmp21->y;
													HX_STACK_LINE(389)
													Dynamic();
												}
												else{
													HX_STACK_LINE(389)
													::zpp_nape::geom::ZPP_Vec2 tmp20 = _this1->lverts->next;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(389)
													::zpp_nape::geom::ZPP_Vec2 tmp21 = tmp20->next->next;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(389)
													bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(389)
													if ((tmp22)){
														HX_STACK_LINE(389)
														{
															HX_STACK_LINE(389)
															::zpp_nape::geom::ZPP_Vec2 tmp23 = _this1->lverts->next;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(389)
															_this1->localCOMx = tmp23->x;
															HX_STACK_LINE(389)
															::zpp_nape::geom::ZPP_Vec2 tmp24 = _this1->lverts->next;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(389)
															_this1->localCOMy = tmp24->y;
															HX_STACK_LINE(389)
															{
															}
														}
														HX_STACK_LINE(389)
														{
															HX_STACK_LINE(389)
															Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(389)
															::zpp_nape::geom::ZPP_Vec2 tmp23 = _this1->lverts->next;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(389)
															Float tmp24 = tmp23->next->x;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(389)
															Float tmp25 = t;		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(389)
															Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(389)
															hx::AddEq(_this1->localCOMx,tmp26);
															HX_STACK_LINE(389)
															::zpp_nape::geom::ZPP_Vec2 tmp27 = _this1->lverts->next;		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(389)
															Float tmp28 = tmp27->next->y;		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(389)
															Float tmp29 = t;		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(389)
															Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(389)
															hx::AddEq(_this1->localCOMy,tmp30);
														}
														HX_STACK_LINE(389)
														{
															HX_STACK_LINE(389)
															Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(389)
															hx::MultEq(_this1->localCOMx,t);
															HX_STACK_LINE(389)
															hx::MultEq(_this1->localCOMy,t);
														}
													}
													else{
														HX_STACK_LINE(389)
														{
															HX_STACK_LINE(389)
															_this1->localCOMx = (int)0;
															HX_STACK_LINE(389)
															_this1->localCOMy = (int)0;
															HX_STACK_LINE(389)
															{
															}
														}
														HX_STACK_LINE(389)
														Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
														HX_STACK_LINE(389)
														{
															HX_STACK_LINE(389)
															::zpp_nape::geom::ZPP_Vec2 tmp23 = _this1->lverts->next;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(389)
															::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp23;		HX_STACK_VAR(cx_ite,"cx_ite");
															HX_STACK_LINE(389)
															::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
															HX_STACK_LINE(389)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(389)
															::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
															HX_STACK_LINE(389)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(389)
															while((true)){
																HX_STACK_LINE(389)
																bool tmp24 = (cx_ite != null());		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(389)
																bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(389)
																if ((tmp25)){
																	HX_STACK_LINE(389)
																	break;
																}
																HX_STACK_LINE(389)
																::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																HX_STACK_LINE(389)
																{
																	HX_STACK_LINE(389)
																	Float tmp26 = v->x;		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(389)
																	Float tmp27 = (w->y - u->y);		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(389)
																	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(389)
																	hx::AddEq(area,tmp28);
																	HX_STACK_LINE(389)
																	Float tmp29 = (w->y * v->x);		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(389)
																	Float tmp30 = (w->x * v->y);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(389)
																	Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(389)
																	Float cf = tmp31;		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(389)
																	Float tmp32 = (v->x + w->x);		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(389)
																	Float tmp33 = cf;		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(389)
																	Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(389)
																	hx::AddEq(_this1->localCOMx,tmp34);
																	HX_STACK_LINE(389)
																	Float tmp35 = (v->y + w->y);		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(389)
																	Float tmp36 = cf;		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(389)
																	Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
																	HX_STACK_LINE(389)
																	hx::AddEq(_this1->localCOMy,tmp37);
																}
																HX_STACK_LINE(389)
																u = v;
																HX_STACK_LINE(389)
																v = w;
																HX_STACK_LINE(389)
																cx_ite = cx_ite->next;
															}
															HX_STACK_LINE(389)
															::zpp_nape::geom::ZPP_Vec2 tmp24 = _this1->lverts->next;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(389)
															cx_ite = tmp24;
															HX_STACK_LINE(389)
															::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
															HX_STACK_LINE(389)
															{
																HX_STACK_LINE(389)
																Float tmp25 = v->x;		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(389)
																Float tmp26 = (w->y - u->y);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(389)
																Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(389)
																hx::AddEq(area,tmp27);
																HX_STACK_LINE(389)
																Float tmp28 = (w->y * v->x);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(389)
																Float tmp29 = (w->x * v->y);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(389)
																Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(389)
																Float cf = tmp30;		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(389)
																Float tmp31 = (v->x + w->x);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(389)
																Float tmp32 = cf;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(389)
																Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(389)
																hx::AddEq(_this1->localCOMx,tmp33);
																HX_STACK_LINE(389)
																Float tmp34 = (v->y + w->y);		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(389)
																Float tmp35 = cf;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(389)
																Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(389)
																hx::AddEq(_this1->localCOMy,tmp36);
															}
															HX_STACK_LINE(389)
															u = v;
															HX_STACK_LINE(389)
															v = w;
															HX_STACK_LINE(389)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(389)
															::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
															HX_STACK_LINE(389)
															{
																HX_STACK_LINE(389)
																Float tmp25 = v->x;		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(389)
																Float tmp26 = (w1->y - u->y);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(389)
																Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(389)
																hx::AddEq(area,tmp27);
																HX_STACK_LINE(389)
																Float tmp28 = (w1->y * v->x);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(389)
																Float tmp29 = (w1->x * v->y);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(389)
																Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(389)
																Float cf = tmp30;		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(389)
																Float tmp31 = (v->x + w1->x);		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(389)
																Float tmp32 = cf;		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(389)
																Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(389)
																hx::AddEq(_this1->localCOMx,tmp33);
																HX_STACK_LINE(389)
																Float tmp34 = (v->y + w1->y);		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(389)
																Float tmp35 = cf;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(389)
																Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(389)
																hx::AddEq(_this1->localCOMy,tmp36);
															}
														}
														HX_STACK_LINE(389)
														Float tmp23 = ((int)3 * area);		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(389)
														Float tmp24 = (Float((int)1) / Float(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(389)
														area = tmp24;
														HX_STACK_LINE(389)
														{
															HX_STACK_LINE(389)
															Float t = area;		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(389)
															hx::MultEq(_this1->localCOMx,t);
															HX_STACK_LINE(389)
															hx::MultEq(_this1->localCOMy,t);
														}
													}
												}
											}
											HX_STACK_LINE(389)
											bool tmp15 = (_this->wrap_localCOM != null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(389)
											if ((tmp15)){
												HX_STACK_LINE(389)
												::zpp_nape::geom::ZPP_Vec2 tmp16 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(389)
												tmp16->x = _this->localCOMx;
												HX_STACK_LINE(389)
												::zpp_nape::geom::ZPP_Vec2 tmp17 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(389)
												tmp17->y = _this->localCOMy;
												HX_STACK_LINE(389)
												{
												}
											}
										}
									}
									HX_STACK_LINE(389)
									{
										HX_STACK_LINE(389)
										::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(389)
										bool tmp11 = _this1->zip_axis;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(389)
										if ((tmp11)){
											HX_STACK_LINE(389)
											_this1->zip_axis = false;
											HX_STACK_LINE(389)
											{
												HX_STACK_LINE(389)
												Float tmp12 = _this1->rot;		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(389)
												Float tmp13 = ::Math_obj::sin(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(389)
												_this1->axisx = tmp13;
												HX_STACK_LINE(389)
												Float tmp14 = _this1->rot;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(389)
												Float tmp15 = ::Math_obj::cos(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(389)
												_this1->axisy = tmp15;
												HX_STACK_LINE(389)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(389)
									{
										HX_STACK_LINE(389)
										Float tmp11 = _this->body->posx;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(389)
										Float tmp12 = _this->body->axisy;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(389)
										Float tmp13 = _this->localCOMx;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(389)
										Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(389)
										Float tmp15 = _this->body->axisx;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(389)
										Float tmp16 = _this->localCOMy;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(389)
										Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(389)
										Float tmp18 = (tmp14 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(389)
										Float tmp19 = (tmp11 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(389)
										_this->worldCOMx = tmp19;
										HX_STACK_LINE(389)
										Float tmp20 = _this->body->posy;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(389)
										Float tmp21 = _this->localCOMx;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(389)
										Float tmp22 = _this->body->axisx;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(389)
										Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(389)
										Float tmp24 = _this->localCOMy;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(389)
										Float tmp25 = _this->body->axisy;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(389)
										Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(389)
										Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(389)
										Float tmp28 = (tmp20 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(389)
										_this->worldCOMy = tmp28;
									}
								}
							}
						}
						HX_STACK_LINE(389)
						Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
						HX_STACK_LINE(389)
						Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
						HX_STACK_LINE(389)
						{
							HX_STACK_LINE(389)
							Float tmp9 = (_this->worldCOMx - rx);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(389)
							_this->aabb->minx = tmp9;
							HX_STACK_LINE(389)
							Float tmp10 = (_this->worldCOMy - ry);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(389)
							_this->aabb->miny = tmp10;
						}
						HX_STACK_LINE(389)
						{
							HX_STACK_LINE(389)
							Float tmp9 = (_this->worldCOMx + rx);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(389)
							_this->aabb->maxx = tmp9;
							HX_STACK_LINE(389)
							Float tmp10 = (_this->worldCOMy + ry);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(389)
							_this->aabb->maxy = tmp10;
						}
					}
					else{
						HX_STACK_LINE(389)
						::zpp_nape::shape::ZPP_Polygon tmp8 = this->polygon;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(389)
						::zpp_nape::shape::ZPP_Polygon _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(389)
						{
							HX_STACK_LINE(389)
							bool tmp9 = _this->zip_gverts;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(389)
							if ((tmp9)){
								HX_STACK_LINE(389)
								bool tmp10 = (_this->body != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(389)
								if ((tmp10)){
									HX_STACK_LINE(389)
									_this->zip_gverts = false;
									HX_STACK_LINE(389)
									_this->validate_lverts();
									HX_STACK_LINE(389)
									{
										HX_STACK_LINE(389)
										::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(389)
										bool tmp11 = _this1->zip_axis;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(389)
										if ((tmp11)){
											HX_STACK_LINE(389)
											_this1->zip_axis = false;
											HX_STACK_LINE(389)
											{
												HX_STACK_LINE(389)
												Float tmp12 = _this1->rot;		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(389)
												Float tmp13 = ::Math_obj::sin(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(389)
												_this1->axisx = tmp13;
												HX_STACK_LINE(389)
												Float tmp14 = _this1->rot;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(389)
												Float tmp15 = ::Math_obj::cos(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(389)
												_this1->axisy = tmp15;
												HX_STACK_LINE(389)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(389)
									::zpp_nape::geom::ZPP_Vec2 tmp11 = _this->lverts->next;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(389)
									::zpp_nape::geom::ZPP_Vec2 li = tmp11;		HX_STACK_VAR(li,"li");
									HX_STACK_LINE(389)
									{
										HX_STACK_LINE(389)
										::zpp_nape::geom::ZPP_Vec2 tmp12 = _this->gverts->next;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(389)
										::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp12;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(389)
										while((true)){
											HX_STACK_LINE(389)
											bool tmp13 = (cx_ite != null());		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(389)
											bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(389)
											if ((tmp14)){
												HX_STACK_LINE(389)
												break;
											}
											HX_STACK_LINE(389)
											::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(389)
											{
												HX_STACK_LINE(389)
												::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
												HX_STACK_LINE(389)
												li = li->next;
												HX_STACK_LINE(389)
												{
													HX_STACK_LINE(389)
													Float tmp15 = _this->body->posx;		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(389)
													Float tmp16 = _this->body->axisy;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(389)
													Float tmp17 = l->x;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(389)
													Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(389)
													Float tmp19 = _this->body->axisx;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(389)
													Float tmp20 = l->y;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(389)
													Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(389)
													Float tmp22 = (tmp18 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(389)
													Float tmp23 = (tmp15 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(389)
													g->x = tmp23;
													HX_STACK_LINE(389)
													Float tmp24 = _this->body->posy;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(389)
													Float tmp25 = l->x;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(389)
													Float tmp26 = _this->body->axisx;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(389)
													Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(389)
													Float tmp28 = l->y;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(389)
													Float tmp29 = _this->body->axisy;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(389)
													Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(389)
													Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(389)
													Float tmp32 = (tmp24 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(389)
													g->y = tmp32;
												}
											}
											HX_STACK_LINE(389)
											cx_ite = cx_ite->next;
										}
									}
								}
							}
						}
						HX_STACK_LINE(389)
						::zpp_nape::geom::ZPP_Vec2 tmp9 = _this->lverts->next;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(389)
						bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(389)
						if ((tmp10)){
							HX_STACK_LINE(389)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful bounds","\xda","\x28","\x5b","\xf5"));
						}
						HX_STACK_LINE(389)
						::zpp_nape::geom::ZPP_Vec2 tmp11 = _this->gverts->next;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(389)
						::zpp_nape::geom::ZPP_Vec2 p0 = tmp11;		HX_STACK_VAR(p0,"p0");
						HX_STACK_LINE(389)
						{
							HX_STACK_LINE(389)
							_this->aabb->minx = p0->x;
							HX_STACK_LINE(389)
							_this->aabb->miny = p0->y;
							HX_STACK_LINE(389)
							{
							}
						}
						HX_STACK_LINE(389)
						{
							HX_STACK_LINE(389)
							_this->aabb->maxx = p0->x;
							HX_STACK_LINE(389)
							_this->aabb->maxy = p0->y;
							HX_STACK_LINE(389)
							{
							}
						}
						HX_STACK_LINE(389)
						{
							HX_STACK_LINE(389)
							::zpp_nape::geom::ZPP_Vec2 tmp12 = _this->gverts->next;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(389)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp12->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(389)
							while((true)){
								HX_STACK_LINE(389)
								bool tmp13 = (cx_ite != null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(389)
								bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(389)
								if ((tmp14)){
									HX_STACK_LINE(389)
									break;
								}
								HX_STACK_LINE(389)
								::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(389)
								{
									HX_STACK_LINE(389)
									Float tmp15 = p->x;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(389)
									Float tmp16 = _this->aabb->minx;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(389)
									bool tmp17 = (tmp15 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(389)
									if ((tmp17)){
										HX_STACK_LINE(389)
										_this->aabb->minx = p->x;
									}
									HX_STACK_LINE(389)
									Float tmp18 = p->x;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(389)
									Float tmp19 = _this->aabb->maxx;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(389)
									bool tmp20 = (tmp18 > tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(389)
									if ((tmp20)){
										HX_STACK_LINE(389)
										_this->aabb->maxx = p->x;
									}
									HX_STACK_LINE(389)
									Float tmp21 = p->y;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(389)
									Float tmp22 = _this->aabb->miny;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(389)
									bool tmp23 = (tmp21 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(389)
									if ((tmp23)){
										HX_STACK_LINE(389)
										_this->aabb->miny = p->y;
									}
									HX_STACK_LINE(389)
									Float tmp24 = p->y;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(389)
									Float tmp25 = _this->aabb->maxy;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(389)
									bool tmp26 = (tmp24 > tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(389)
									if ((tmp26)){
										HX_STACK_LINE(389)
										_this->aabb->maxy = p->y;
									}
								}
								HX_STACK_LINE(389)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,aabb_validate,(void))

Void ZPP_Shape_obj::setMaterial( ::zpp_nape::phys::ZPP_Material material){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","setMaterial",0x3c021029,"zpp_nape.shape.ZPP_Shape.setMaterial","zpp_nape/shape/Shape.hx",448,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(material,"material")
		HX_STACK_LINE(449)
		::zpp_nape::phys::ZPP_Material tmp = this->material;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(449)
		::zpp_nape::phys::ZPP_Material tmp1 = material;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(449)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(449)
		if ((tmp2)){
			HX_STACK_LINE(450)
			::zpp_nape::phys::ZPP_Body tmp3 = this->body;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(450)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(450)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(450)
			if ((tmp4)){
				HX_STACK_LINE(450)
				::zpp_nape::phys::ZPP_Body tmp6 = this->body;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(450)
				::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(450)
				::zpp_nape::space::ZPP_Space tmp8 = tmp7->space;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(450)
				tmp5 = (tmp8 != null());
			}
			else{
				HX_STACK_LINE(450)
				tmp5 = false;
			}
			HX_STACK_LINE(450)
			if ((tmp5)){
				HX_STACK_LINE(451)
				::zpp_nape::phys::ZPP_Material tmp6 = this->material;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(451)
				bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(451)
				if ((tmp7)){
					HX_STACK_LINE(451)
					::zpp_nape::phys::ZPP_Material tmp8 = this->material;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(451)
					tmp8->shapes->remove(hx::ObjectPtr<OBJ_>(this));
				}
			}
			HX_STACK_LINE(453)
			this->material = material;
			HX_STACK_LINE(454)
			::zpp_nape::phys::ZPP_Body tmp6 = this->body;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(454)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(454)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(454)
			if ((tmp7)){
				HX_STACK_LINE(454)
				::zpp_nape::phys::ZPP_Body tmp9 = this->body;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(454)
				::zpp_nape::phys::ZPP_Body tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(454)
				::zpp_nape::space::ZPP_Space tmp11 = tmp10->space;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(454)
				tmp8 = (tmp11 != null());
			}
			else{
				HX_STACK_LINE(454)
				tmp8 = false;
			}
			HX_STACK_LINE(454)
			if ((tmp8)){
				HX_STACK_LINE(454)
				material->shapes->add(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(455)
			this->wake();
			HX_STACK_LINE(456)
			::zpp_nape::phys::ZPP_Body tmp9 = this->body;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(456)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(456)
			if ((tmp10)){
				HX_STACK_LINE(456)
				::zpp_nape::phys::ZPP_Body tmp11 = this->body;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(456)
				tmp11->refreshArbiters();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Shape_obj,setMaterial,(void))

Void ZPP_Shape_obj::setFilter( ::zpp_nape::dynamics::ZPP_InteractionFilter filter){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","setFilter",0xc2168eba,"zpp_nape.shape.ZPP_Shape.setFilter","zpp_nape/shape/Shape.hx",459,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filter,"filter")
		HX_STACK_LINE(460)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->filter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(460)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp1 = filter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(460)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(460)
		if ((tmp2)){
			HX_STACK_LINE(461)
			::zpp_nape::phys::ZPP_Body tmp3 = this->body;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(461)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(461)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(461)
			if ((tmp4)){
				HX_STACK_LINE(461)
				::zpp_nape::phys::ZPP_Body tmp6 = this->body;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(461)
				::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(461)
				::zpp_nape::space::ZPP_Space tmp8 = tmp7->space;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(461)
				tmp5 = (tmp8 != null());
			}
			else{
				HX_STACK_LINE(461)
				tmp5 = false;
			}
			HX_STACK_LINE(461)
			if ((tmp5)){
				HX_STACK_LINE(462)
				::zpp_nape::dynamics::ZPP_InteractionFilter tmp6 = this->filter;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(462)
				bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(462)
				if ((tmp7)){
					HX_STACK_LINE(462)
					::zpp_nape::dynamics::ZPP_InteractionFilter tmp8 = this->filter;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(462)
					tmp8->shapes->remove(hx::ObjectPtr<OBJ_>(this));
				}
			}
			HX_STACK_LINE(464)
			this->filter = filter;
			HX_STACK_LINE(465)
			::zpp_nape::phys::ZPP_Body tmp6 = this->body;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(465)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(465)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(465)
			if ((tmp7)){
				HX_STACK_LINE(465)
				::zpp_nape::phys::ZPP_Body tmp9 = this->body;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(465)
				::zpp_nape::phys::ZPP_Body tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(465)
				::zpp_nape::space::ZPP_Space tmp11 = tmp10->space;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(465)
				tmp8 = (tmp11 != null());
			}
			else{
				HX_STACK_LINE(465)
				tmp8 = false;
			}
			HX_STACK_LINE(465)
			if ((tmp8)){
				HX_STACK_LINE(465)
				filter->shapes->add(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(466)
			this->wake();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Shape_obj,setFilter,(void))

Void ZPP_Shape_obj::setFluid( ::zpp_nape::phys::ZPP_FluidProperties fluid){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","setFluid",0xd1844148,"zpp_nape.shape.ZPP_Shape.setFluid","zpp_nape/shape/Shape.hx",469,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fluid,"fluid")
		HX_STACK_LINE(470)
		::zpp_nape::phys::ZPP_FluidProperties tmp = this->fluidProperties;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(470)
		::zpp_nape::phys::ZPP_FluidProperties tmp1 = fluid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(470)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(470)
		if ((tmp2)){
			HX_STACK_LINE(471)
			::zpp_nape::phys::ZPP_Body tmp3 = this->body;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(471)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(471)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(471)
			if ((tmp4)){
				HX_STACK_LINE(471)
				::zpp_nape::phys::ZPP_Body tmp6 = this->body;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(471)
				::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(471)
				::zpp_nape::space::ZPP_Space tmp8 = tmp7->space;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(471)
				tmp5 = (tmp8 != null());
			}
			else{
				HX_STACK_LINE(471)
				tmp5 = false;
			}
			HX_STACK_LINE(471)
			if ((tmp5)){
				HX_STACK_LINE(472)
				::zpp_nape::phys::ZPP_FluidProperties tmp6 = this->fluidProperties;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(472)
				bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(472)
				if ((tmp7)){
					HX_STACK_LINE(472)
					::zpp_nape::phys::ZPP_FluidProperties tmp8 = this->fluidProperties;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(472)
					tmp8->shapes->remove(hx::ObjectPtr<OBJ_>(this));
				}
			}
			HX_STACK_LINE(474)
			this->fluidProperties = fluid;
			HX_STACK_LINE(475)
			::zpp_nape::phys::ZPP_Body tmp6 = this->body;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(475)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(475)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(475)
			if ((tmp7)){
				HX_STACK_LINE(475)
				::zpp_nape::phys::ZPP_Body tmp9 = this->body;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(475)
				::zpp_nape::phys::ZPP_Body tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(475)
				::zpp_nape::space::ZPP_Space tmp11 = tmp10->space;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(475)
				tmp8 = (tmp11 != null());
			}
			else{
				HX_STACK_LINE(475)
				tmp8 = false;
			}
			HX_STACK_LINE(475)
			if ((tmp8)){
				HX_STACK_LINE(475)
				fluid->shapes->add(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(476)
			bool tmp9 = this->fluidEnabled;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(476)
			if ((tmp9)){
				HX_STACK_LINE(476)
				this->wake();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Shape_obj,setFluid,(void))

Void ZPP_Shape_obj::__immutable_midstep( ::String name){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","__immutable_midstep",0x993ac337,"zpp_nape.shape.ZPP_Shape.__immutable_midstep","zpp_nape/shape/Shape.hx",479,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(481)
		::zpp_nape::phys::ZPP_Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(481)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(481)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(481)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(481)
		if ((tmp2)){
			HX_STACK_LINE(481)
			::zpp_nape::phys::ZPP_Body tmp4 = this->body;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(481)
			::zpp_nape::phys::ZPP_Body tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(481)
			::zpp_nape::phys::ZPP_Body tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(481)
			::zpp_nape::space::ZPP_Space tmp7 = tmp6->space;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(481)
			tmp3 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(481)
			tmp3 = false;
		}
		HX_STACK_LINE(481)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(481)
		if ((tmp3)){
			HX_STACK_LINE(481)
			::zpp_nape::phys::ZPP_Body tmp5 = this->body;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(481)
			::zpp_nape::phys::ZPP_Body tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(481)
			tmp4 = tmp6->space->midstep;
		}
		else{
			HX_STACK_LINE(481)
			tmp4 = false;
		}
		HX_STACK_LINE(481)
		if ((tmp4)){
			HX_STACK_LINE(481)
			::String tmp5 = (HX_HCSTRING("Error: ","\x4e","\xa8","\x5b","\xb7") + name);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(481)
			::String tmp6 = (tmp5 + HX_HCSTRING(" cannot be set during a space step()","\x87","\xd5","\x6a","\xc1"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(481)
			HX_STACK_DO_THROW(tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Shape_obj,__immutable_midstep,(void))

Void ZPP_Shape_obj::addedToBody( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","addedToBody",0xed59285d,"zpp_nape.shape.ZPP_Shape.addedToBody","zpp_nape/shape/Shape.hx",484,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(485)
		this->invalidate_worldCOM();
		HX_STACK_LINE(486)
		{
			HX_STACK_LINE(486)
			this->zip_aabb = true;
			HX_STACK_LINE(486)
			::zpp_nape::phys::ZPP_Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(486)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(486)
			if ((tmp1)){
				HX_STACK_LINE(486)
				::zpp_nape::phys::ZPP_Body tmp2 = this->body;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(486)
				tmp2->zip_aabb = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,addedToBody,(void))

Void ZPP_Shape_obj::removedFromBody( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","removedFromBody",0x1cc58eac,"zpp_nape.shape.ZPP_Shape.removedFromBody","zpp_nape/shape/Shape.hx",488,0xb83747cd)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,removedFromBody,(void))

Void ZPP_Shape_obj::addedToSpace( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","addedToSpace",0x8b20e2ab,"zpp_nape.shape.ZPP_Shape.addedToSpace","zpp_nape/shape/Shape.hx",489,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(490)
		this->__iaddedToSpace();
		HX_STACK_LINE(491)
		{
			HX_STACK_LINE(491)
			::zpp_nape::phys::ZPP_Material tmp = this->material;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(491)
			tmp->shapes->add(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(492)
		{
			HX_STACK_LINE(492)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->filter;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(492)
			tmp->shapes->add(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(493)
		::zpp_nape::phys::ZPP_FluidProperties tmp = this->fluidProperties;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(493)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(493)
		if ((tmp1)){
			HX_STACK_LINE(493)
			::zpp_nape::phys::ZPP_FluidProperties tmp2 = this->fluidProperties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(493)
			tmp2->shapes->add(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,addedToSpace,(void))

Void ZPP_Shape_obj::removedFromSpace( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","removedFromSpace",0xda8e017c,"zpp_nape.shape.ZPP_Shape.removedFromSpace","zpp_nape/shape/Shape.hx",495,0xb83747cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(496)
		this->__iremovedFromSpace();
		HX_STACK_LINE(497)
		{
			HX_STACK_LINE(497)
			::zpp_nape::phys::ZPP_Material tmp = this->material;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(497)
			tmp->shapes->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp = this->filter;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(498)
			tmp->shapes->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(499)
		::zpp_nape::phys::ZPP_FluidProperties tmp = this->fluidProperties;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(499)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(499)
		if ((tmp1)){
			HX_STACK_LINE(499)
			::zpp_nape::phys::ZPP_FluidProperties tmp2 = this->fluidProperties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(499)
			tmp2->shapes->remove(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,removedFromSpace,(void))

::nape::shape::Shape ZPP_Shape_obj::copy( ){
	HX_STACK_FRAME("zpp_nape.shape.ZPP_Shape","copy",0x9a4d19f5,"zpp_nape.shape.ZPP_Shape.copy","zpp_nape/shape/Shape.hx",501,0xb83747cd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(502)
	::zpp_nape::shape::ZPP_Shape ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(503)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(503)
	int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(503)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(503)
	if ((tmp2)){
		HX_STACK_LINE(503)
		::zpp_nape::shape::ZPP_Circle tmp3 = this->circle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(503)
		::zpp_nape::shape::ZPP_Circle tmp4 = tmp3->__copy();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(503)
		ret = tmp4;
	}
	else{
		HX_STACK_LINE(504)
		::zpp_nape::shape::ZPP_Polygon tmp3 = this->polygon;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(504)
		::zpp_nape::shape::ZPP_Polygon tmp4 = tmp3->__copy();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(504)
		ret = tmp4;
	}
	HX_STACK_LINE(505)
	bool tmp3 = this->zip_area_inertia;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(505)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(505)
	if ((tmp4)){
		HX_STACK_LINE(506)
		Float tmp5 = this->area;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(506)
		ret->area = tmp5;
		HX_STACK_LINE(507)
		Float tmp6 = this->inertia;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(507)
		ret->inertia = tmp6;
	}
	else{
		HX_STACK_LINE(509)
		ret->invalidate_area_inertia();
	}
	HX_STACK_LINE(510)
	bool tmp5 = this->zip_sweepRadius;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(510)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(510)
	if ((tmp6)){
		HX_STACK_LINE(511)
		Float tmp7 = this->sweepRadius;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(511)
		ret->sweepRadius = tmp7;
		HX_STACK_LINE(512)
		Float tmp8 = this->sweepCoef;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(512)
		ret->sweepCoef = tmp8;
	}
	else{
		HX_STACK_LINE(514)
		ret->zip_sweepRadius = true;
	}
	HX_STACK_LINE(515)
	bool tmp7 = this->zip_angDrag;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(515)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(515)
	if ((tmp8)){
		HX_STACK_LINE(515)
		Float tmp9 = this->angDrag;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(515)
		ret->angDrag = tmp9;
	}
	else{
		HX_STACK_LINE(516)
		ret->invalidate_angDrag();
	}
	HX_STACK_LINE(517)
	bool tmp9 = this->zip_aabb;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(517)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(517)
	if ((tmp10)){
		HX_STACK_LINE(518)
		{
			HX_STACK_LINE(519)
			::zpp_nape::geom::ZPP_AABB tmp11 = this->aabb;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(519)
			ret->aabb->minx = tmp11->minx;
			HX_STACK_LINE(520)
			::zpp_nape::geom::ZPP_AABB tmp12 = this->aabb;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(520)
			ret->aabb->miny = tmp12->miny;
			HX_STACK_LINE(529)
			{
			}
		}
		HX_STACK_LINE(538)
		{
			HX_STACK_LINE(539)
			::zpp_nape::geom::ZPP_AABB tmp11 = this->aabb;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(539)
			ret->aabb->maxx = tmp11->maxx;
			HX_STACK_LINE(540)
			::zpp_nape::geom::ZPP_AABB tmp12 = this->aabb;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(540)
			ret->aabb->maxy = tmp12->maxy;
			HX_STACK_LINE(549)
			{
			}
		}
	}
	else{
		HX_STACK_LINE(559)
		ret->zip_aabb = true;
		HX_STACK_LINE(559)
		bool tmp11 = (ret->body != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(559)
		if ((tmp11)){
			HX_STACK_LINE(559)
			ret->body->zip_aabb = true;
		}
	}
	HX_STACK_LINE(560)
	{
		HX_STACK_LINE(561)
		::zpp_nape::phys::ZPP_Material o = ret->material;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(570)
		o->outer = null();
		HX_STACK_LINE(571)
		::zpp_nape::phys::ZPP_Material tmp11 = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(571)
		o->next = tmp11;
		HX_STACK_LINE(572)
		::zpp_nape::phys::ZPP_Material_obj::zpp_pool = o;
	}
	HX_STACK_LINE(577)
	{
		HX_STACK_LINE(578)
		::zpp_nape::dynamics::ZPP_InteractionFilter o = ret->filter;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(587)
		o->outer = null();
		HX_STACK_LINE(588)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp11 = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(588)
		o->next = tmp11;
		HX_STACK_LINE(589)
		::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool = o;
	}
	HX_STACK_LINE(594)
	::zpp_nape::phys::ZPP_Material tmp11 = this->material;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(594)
	ret->material = tmp11;
	HX_STACK_LINE(595)
	::zpp_nape::dynamics::ZPP_InteractionFilter tmp12 = this->filter;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(595)
	ret->filter = tmp12;
	HX_STACK_LINE(596)
	::zpp_nape::phys::ZPP_FluidProperties tmp13 = this->fluidProperties;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(596)
	bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(596)
	if ((tmp14)){
		HX_STACK_LINE(596)
		::zpp_nape::phys::ZPP_FluidProperties tmp15 = this->fluidProperties;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(596)
		ret->fluidProperties = tmp15;
	}
	HX_STACK_LINE(597)
	bool tmp15 = this->fluidEnabled;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(597)
	ret->fluidEnabled = tmp15;
	HX_STACK_LINE(598)
	bool tmp16 = this->sensorEnabled;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(598)
	ret->sensorEnabled = tmp16;
	HX_STACK_LINE(599)
	Dynamic tmp17 = this->userData;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(599)
	bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(599)
	if ((tmp18)){
		HX_STACK_LINE(599)
		Dynamic tmp19 = this->userData;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(599)
		Dynamic tmp20 = ::Reflect_obj::copy(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(599)
		ret->userData = tmp20;
	}
	HX_STACK_LINE(600)
	::nape::shape::Shape tmp19 = ret->outer;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(600)
	this->copyto(tmp19);
	HX_STACK_LINE(601)
	::nape::shape::Shape tmp20 = ret->outer;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(601)
	return tmp20;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Shape_obj,copy,return )

Array< ::Dynamic > ZPP_Shape_obj::types;


ZPP_Shape_obj::ZPP_Shape_obj()
{
}

void ZPP_Shape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Shape);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(area,"area");
	HX_MARK_MEMBER_NAME(zip_area_inertia,"zip_area_inertia");
	HX_MARK_MEMBER_NAME(inertia,"inertia");
	HX_MARK_MEMBER_NAME(angDrag,"angDrag");
	HX_MARK_MEMBER_NAME(zip_angDrag,"zip_angDrag");
	HX_MARK_MEMBER_NAME(localCOMx,"localCOMx");
	HX_MARK_MEMBER_NAME(localCOMy,"localCOMy");
	HX_MARK_MEMBER_NAME(zip_localCOM,"zip_localCOM");
	HX_MARK_MEMBER_NAME(worldCOMx,"worldCOMx");
	HX_MARK_MEMBER_NAME(worldCOMy,"worldCOMy");
	HX_MARK_MEMBER_NAME(zip_worldCOM,"zip_worldCOM");
	HX_MARK_MEMBER_NAME(wrap_localCOM,"wrap_localCOM");
	HX_MARK_MEMBER_NAME(wrap_worldCOM,"wrap_worldCOM");
	HX_MARK_MEMBER_NAME(sweepRadius,"sweepRadius");
	HX_MARK_MEMBER_NAME(zip_sweepRadius,"zip_sweepRadius");
	HX_MARK_MEMBER_NAME(sweepCoef,"sweepCoef");
	HX_MARK_MEMBER_NAME(circle,"circle");
	HX_MARK_MEMBER_NAME(polygon,"polygon");
	HX_MARK_MEMBER_NAME(refmaterial,"refmaterial");
	HX_MARK_MEMBER_NAME(material,"material");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(fluidProperties,"fluidProperties");
	HX_MARK_MEMBER_NAME(fluidEnabled,"fluidEnabled");
	HX_MARK_MEMBER_NAME(sensorEnabled,"sensorEnabled");
	HX_MARK_MEMBER_NAME(sweep,"sweep");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_MEMBER_NAME(pairs,"pairs");
	HX_MARK_MEMBER_NAME(aabb,"aabb");
	HX_MARK_MEMBER_NAME(zip_aabb,"zip_aabb");
	::zpp_nape::phys::ZPP_Interactor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_Shape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(area,"area");
	HX_VISIT_MEMBER_NAME(zip_area_inertia,"zip_area_inertia");
	HX_VISIT_MEMBER_NAME(inertia,"inertia");
	HX_VISIT_MEMBER_NAME(angDrag,"angDrag");
	HX_VISIT_MEMBER_NAME(zip_angDrag,"zip_angDrag");
	HX_VISIT_MEMBER_NAME(localCOMx,"localCOMx");
	HX_VISIT_MEMBER_NAME(localCOMy,"localCOMy");
	HX_VISIT_MEMBER_NAME(zip_localCOM,"zip_localCOM");
	HX_VISIT_MEMBER_NAME(worldCOMx,"worldCOMx");
	HX_VISIT_MEMBER_NAME(worldCOMy,"worldCOMy");
	HX_VISIT_MEMBER_NAME(zip_worldCOM,"zip_worldCOM");
	HX_VISIT_MEMBER_NAME(wrap_localCOM,"wrap_localCOM");
	HX_VISIT_MEMBER_NAME(wrap_worldCOM,"wrap_worldCOM");
	HX_VISIT_MEMBER_NAME(sweepRadius,"sweepRadius");
	HX_VISIT_MEMBER_NAME(zip_sweepRadius,"zip_sweepRadius");
	HX_VISIT_MEMBER_NAME(sweepCoef,"sweepCoef");
	HX_VISIT_MEMBER_NAME(circle,"circle");
	HX_VISIT_MEMBER_NAME(polygon,"polygon");
	HX_VISIT_MEMBER_NAME(refmaterial,"refmaterial");
	HX_VISIT_MEMBER_NAME(material,"material");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(fluidProperties,"fluidProperties");
	HX_VISIT_MEMBER_NAME(fluidEnabled,"fluidEnabled");
	HX_VISIT_MEMBER_NAME(sensorEnabled,"sensorEnabled");
	HX_VISIT_MEMBER_NAME(sweep,"sweep");
	HX_VISIT_MEMBER_NAME(node,"node");
	HX_VISIT_MEMBER_NAME(pairs,"pairs");
	HX_VISIT_MEMBER_NAME(aabb,"aabb");
	HX_VISIT_MEMBER_NAME(zip_aabb,"zip_aabb");
	::zpp_nape::phys::ZPP_Interactor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_Shape_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"area") ) { return area; }
		if (HX_FIELD_EQ(inName,"node") ) { return node; }
		if (HX_FIELD_EQ(inName,"aabb") ) { return aabb; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"sweep") ) { return sweep; }
		if (HX_FIELD_EQ(inName,"pairs") ) { return pairs; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"circle") ) { return circle; }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inertia") ) { return inertia; }
		if (HX_FIELD_EQ(inName,"angDrag") ) { return angDrag; }
		if (HX_FIELD_EQ(inName,"polygon") ) { return polygon; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isCircle") ) { return isCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"material") ) { return material; }
		if (HX_FIELD_EQ(inName,"zip_aabb") ) { return zip_aabb; }
		if (HX_FIELD_EQ(inName,"setFluid") ) { return setFluid_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPolygon") ) { return isPolygon_dyn(); }
		if (HX_FIELD_EQ(inName,"localCOMx") ) { return localCOMx; }
		if (HX_FIELD_EQ(inName,"localCOMy") ) { return localCOMy; }
		if (HX_FIELD_EQ(inName,"worldCOMx") ) { return worldCOMx; }
		if (HX_FIELD_EQ(inName,"worldCOMy") ) { return worldCOMy; }
		if (HX_FIELD_EQ(inName,"sweepCoef") ) { return sweepCoef; }
		if (HX_FIELD_EQ(inName,"setFilter") ) { return setFilter_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"zip_angDrag") ) { return zip_angDrag; }
		if (HX_FIELD_EQ(inName,"sweepRadius") ) { return sweepRadius; }
		if (HX_FIELD_EQ(inName,"refmaterial") ) { return refmaterial; }
		if (HX_FIELD_EQ(inName,"getworldCOM") ) { return getworldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"setMaterial") ) { return setMaterial_dyn(); }
		if (HX_FIELD_EQ(inName,"addedToBody") ) { return addedToBody_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zip_localCOM") ) { return zip_localCOM; }
		if (HX_FIELD_EQ(inName,"zip_worldCOM") ) { return zip_worldCOM; }
		if (HX_FIELD_EQ(inName,"fluidEnabled") ) { return fluidEnabled; }
		if (HX_FIELD_EQ(inName,"addedToSpace") ) { return addedToSpace_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_localCOM") ) { return wrap_localCOM; }
		if (HX_FIELD_EQ(inName,"wrap_worldCOM") ) { return wrap_worldCOM; }
		if (HX_FIELD_EQ(inName,"sensorEnabled") ) { return sensorEnabled; }
		if (HX_FIELD_EQ(inName,"validate_aabb") ) { return validate_aabb_dyn(); }
		if (HX_FIELD_EQ(inName,"aabb_validate") ) { return aabb_validate_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"zip_sweepRadius") ) { return zip_sweepRadius; }
		if (HX_FIELD_EQ(inName,"fluidProperties") ) { return fluidProperties; }
		if (HX_FIELD_EQ(inName,"invalidate_aabb") ) { return invalidate_aabb_dyn(); }
		if (HX_FIELD_EQ(inName,"removedFromBody") ) { return removedFromBody_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"zip_area_inertia") ) { return zip_area_inertia; }
		if (HX_FIELD_EQ(inName,"validate_angDrag") ) { return validate_angDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"removedFromSpace") ) { return removedFromSpace_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"validate_localCOM") ) { return validate_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_worldCOM") ) { return validate_worldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_filter") ) { return invalidate_filter_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"invalidate_angDrag") ) { return invalidate_angDrag_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"force_validate_aabb") ) { return force_validate_aabb_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_localCOM") ) { return invalidate_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_worldCOM") ) { return invalidate_worldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_material") ) { return invalidate_material_dyn(); }
		if (HX_FIELD_EQ(inName,"__immutable_midstep") ) { return __immutable_midstep_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"validate_sweepRadius") ) { return validate_sweepRadius_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"validate_area_inertia") ) { return validate_area_inertia_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_fluidprops") ) { return invalidate_fluidprops_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"invalidate_sweepRadius") ) { return invalidate_sweepRadius_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"invalidate_area_inertia") ) { return invalidate_area_inertia_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_Shape_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { outValue = types; return true;  }
	}
	return false;
}

Dynamic ZPP_Shape_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"area") ) { area=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aabb") ) { aabb=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::shape::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweep") ) { sweep=inValue.Cast< ::zpp_nape::space::ZPP_SweepData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pairs") ) { pairs=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_AABBPair >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"circle") ) { circle=inValue.Cast< ::zpp_nape::shape::ZPP_Circle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast< ::zpp_nape::dynamics::ZPP_InteractionFilter >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inertia") ) { inertia=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angDrag") ) { angDrag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"polygon") ) { polygon=inValue.Cast< ::zpp_nape::shape::ZPP_Polygon >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"material") ) { material=inValue.Cast< ::zpp_nape::phys::ZPP_Material >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_aabb") ) { zip_aabb=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"localCOMx") ) { localCOMx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localCOMy") ) { localCOMy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worldCOMx") ) { worldCOMx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worldCOMy") ) { worldCOMy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweepCoef") ) { sweepCoef=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"zip_angDrag") ) { zip_angDrag=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweepRadius") ) { sweepRadius=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"refmaterial") ) { refmaterial=inValue.Cast< ::zpp_nape::phys::ZPP_Material >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zip_localCOM") ) { zip_localCOM=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_worldCOM") ) { zip_worldCOM=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fluidEnabled") ) { fluidEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_localCOM") ) { wrap_localCOM=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_worldCOM") ) { wrap_worldCOM=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sensorEnabled") ) { sensorEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"zip_sweepRadius") ) { zip_sweepRadius=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fluidProperties") ) { fluidProperties=inValue.Cast< ::zpp_nape::phys::ZPP_FluidProperties >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"zip_area_inertia") ) { zip_area_inertia=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Shape_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { types=ioValue.Cast< Array< ::Dynamic > >(); return true; }
	}
	return false;
}

void ZPP_Shape_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("area","\x8d","\x8b","\x74","\x40"));
	outFields->push(HX_HCSTRING("zip_area_inertia","\x66","\x96","\x4c","\xe4"));
	outFields->push(HX_HCSTRING("inertia","\xfa","\xb0","\xba","\x7c"));
	outFields->push(HX_HCSTRING("angDrag","\xee","\xc7","\x72","\x38"));
	outFields->push(HX_HCSTRING("zip_angDrag","\x50","\x59","\x53","\x04"));
	outFields->push(HX_HCSTRING("localCOMx","\x22","\xdc","\xee","\x03"));
	outFields->push(HX_HCSTRING("localCOMy","\x23","\xdc","\xee","\x03"));
	outFields->push(HX_HCSTRING("zip_localCOM","\xf4","\x6b","\x7e","\x78"));
	outFields->push(HX_HCSTRING("worldCOMx","\x89","\xa8","\xc8","\x4e"));
	outFields->push(HX_HCSTRING("worldCOMy","\x8a","\xa8","\xc8","\x4e"));
	outFields->push(HX_HCSTRING("zip_worldCOM","\x6d","\x69","\x22","\x3d"));
	outFields->push(HX_HCSTRING("wrap_localCOM","\xeb","\xfb","\x09","\xd0"));
	outFields->push(HX_HCSTRING("wrap_worldCOM","\x64","\xf9","\xad","\x94"));
	outFields->push(HX_HCSTRING("sweepRadius","\x5e","\x93","\x9c","\x27"));
	outFields->push(HX_HCSTRING("zip_sweepRadius","\xc0","\x7d","\xde","\xea"));
	outFields->push(HX_HCSTRING("sweepCoef","\x19","\x5a","\x67","\xcc"));
	outFields->push(HX_HCSTRING("circle","\x10","\x72","\x0d","\x56"));
	outFields->push(HX_HCSTRING("polygon","\x7a","\x02","\x91","\x12"));
	outFields->push(HX_HCSTRING("refmaterial","\xfa","\x40","\x42","\x3d"));
	outFields->push(HX_HCSTRING("material","\xa7","\x5c","\xa5","\xf0"));
	outFields->push(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"));
	outFields->push(HX_HCSTRING("fluidProperties","\x9d","\x0a","\x80","\x04"));
	outFields->push(HX_HCSTRING("fluidEnabled","\x97","\x87","\x5e","\x9a"));
	outFields->push(HX_HCSTRING("sensorEnabled","\x67","\x15","\xaa","\x41"));
	outFields->push(HX_HCSTRING("sweep","\xec","\x15","\x0a","\x86"));
	outFields->push(HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"));
	outFields->push(HX_HCSTRING("pairs","\x19","\xbb","\x4e","\xbd"));
	outFields->push(HX_HCSTRING("aabb","\xa0","\xa2","\x67","\x40"));
	outFields->push(HX_HCSTRING("zip_aabb","\xfe","\x3f","\xc9","\x0b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::shape::Shape*/ ,(int)offsetof(ZPP_Shape_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Body*/ ,(int)offsetof(ZPP_Shape_obj,body),HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41")},
	{hx::fsInt,(int)offsetof(ZPP_Shape_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(ZPP_Shape_obj,area),HX_HCSTRING("area","\x8d","\x8b","\x74","\x40")},
	{hx::fsBool,(int)offsetof(ZPP_Shape_obj,zip_area_inertia),HX_HCSTRING("zip_area_inertia","\x66","\x96","\x4c","\xe4")},
	{hx::fsFloat,(int)offsetof(ZPP_Shape_obj,inertia),HX_HCSTRING("inertia","\xfa","\xb0","\xba","\x7c")},
	{hx::fsFloat,(int)offsetof(ZPP_Shape_obj,angDrag),HX_HCSTRING("angDrag","\xee","\xc7","\x72","\x38")},
	{hx::fsBool,(int)offsetof(ZPP_Shape_obj,zip_angDrag),HX_HCSTRING("zip_angDrag","\x50","\x59","\x53","\x04")},
	{hx::fsFloat,(int)offsetof(ZPP_Shape_obj,localCOMx),HX_HCSTRING("localCOMx","\x22","\xdc","\xee","\x03")},
	{hx::fsFloat,(int)offsetof(ZPP_Shape_obj,localCOMy),HX_HCSTRING("localCOMy","\x23","\xdc","\xee","\x03")},
	{hx::fsBool,(int)offsetof(ZPP_Shape_obj,zip_localCOM),HX_HCSTRING("zip_localCOM","\xf4","\x6b","\x7e","\x78")},
	{hx::fsFloat,(int)offsetof(ZPP_Shape_obj,worldCOMx),HX_HCSTRING("worldCOMx","\x89","\xa8","\xc8","\x4e")},
	{hx::fsFloat,(int)offsetof(ZPP_Shape_obj,worldCOMy),HX_HCSTRING("worldCOMy","\x8a","\xa8","\xc8","\x4e")},
	{hx::fsBool,(int)offsetof(ZPP_Shape_obj,zip_worldCOM),HX_HCSTRING("zip_worldCOM","\x6d","\x69","\x22","\x3d")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Shape_obj,wrap_localCOM),HX_HCSTRING("wrap_localCOM","\xeb","\xfb","\x09","\xd0")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Shape_obj,wrap_worldCOM),HX_HCSTRING("wrap_worldCOM","\x64","\xf9","\xad","\x94")},
	{hx::fsFloat,(int)offsetof(ZPP_Shape_obj,sweepRadius),HX_HCSTRING("sweepRadius","\x5e","\x93","\x9c","\x27")},
	{hx::fsBool,(int)offsetof(ZPP_Shape_obj,zip_sweepRadius),HX_HCSTRING("zip_sweepRadius","\xc0","\x7d","\xde","\xea")},
	{hx::fsFloat,(int)offsetof(ZPP_Shape_obj,sweepCoef),HX_HCSTRING("sweepCoef","\x19","\x5a","\x67","\xcc")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Circle*/ ,(int)offsetof(ZPP_Shape_obj,circle),HX_HCSTRING("circle","\x10","\x72","\x0d","\x56")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Polygon*/ ,(int)offsetof(ZPP_Shape_obj,polygon),HX_HCSTRING("polygon","\x7a","\x02","\x91","\x12")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Material*/ ,(int)offsetof(ZPP_Shape_obj,refmaterial),HX_HCSTRING("refmaterial","\xfa","\x40","\x42","\x3d")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Material*/ ,(int)offsetof(ZPP_Shape_obj,material),HX_HCSTRING("material","\xa7","\x5c","\xa5","\xf0")},
	{hx::fsObject /*::zpp_nape::dynamics::ZPP_InteractionFilter*/ ,(int)offsetof(ZPP_Shape_obj,filter),HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_FluidProperties*/ ,(int)offsetof(ZPP_Shape_obj,fluidProperties),HX_HCSTRING("fluidProperties","\x9d","\x0a","\x80","\x04")},
	{hx::fsBool,(int)offsetof(ZPP_Shape_obj,fluidEnabled),HX_HCSTRING("fluidEnabled","\x97","\x87","\x5e","\x9a")},
	{hx::fsBool,(int)offsetof(ZPP_Shape_obj,sensorEnabled),HX_HCSTRING("sensorEnabled","\x67","\x15","\xaa","\x41")},
	{hx::fsObject /*::zpp_nape::space::ZPP_SweepData*/ ,(int)offsetof(ZPP_Shape_obj,sweep),HX_HCSTRING("sweep","\xec","\x15","\x0a","\x86")},
	{hx::fsObject /*::zpp_nape::space::ZPP_AABBNode*/ ,(int)offsetof(ZPP_Shape_obj,node),HX_HCSTRING("node","\x02","\x0a","\x0a","\x49")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_AABBPair*/ ,(int)offsetof(ZPP_Shape_obj,pairs),HX_HCSTRING("pairs","\x19","\xbb","\x4e","\xbd")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_AABB*/ ,(int)offsetof(ZPP_Shape_obj,aabb),HX_HCSTRING("aabb","\xa0","\xa2","\x67","\x40")},
	{hx::fsBool,(int)offsetof(ZPP_Shape_obj,zip_aabb),HX_HCSTRING("zip_aabb","\xfe","\x3f","\xc9","\x0b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &ZPP_Shape_obj::types,HX_HCSTRING("types","\x79","\x70","\xcb","\x1a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("body","\xa2","\x7a","\x1b","\x41"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("isCircle","\x9a","\x0d","\x77","\xae"),
	HX_HCSTRING("isPolygon","\xb0","\x7f","\x8f","\x16"),
	HX_HCSTRING("area","\x8d","\x8b","\x74","\x40"),
	HX_HCSTRING("zip_area_inertia","\x66","\x96","\x4c","\xe4"),
	HX_HCSTRING("inertia","\xfa","\xb0","\xba","\x7c"),
	HX_HCSTRING("angDrag","\xee","\xc7","\x72","\x38"),
	HX_HCSTRING("zip_angDrag","\x50","\x59","\x53","\x04"),
	HX_HCSTRING("localCOMx","\x22","\xdc","\xee","\x03"),
	HX_HCSTRING("localCOMy","\x23","\xdc","\xee","\x03"),
	HX_HCSTRING("zip_localCOM","\xf4","\x6b","\x7e","\x78"),
	HX_HCSTRING("worldCOMx","\x89","\xa8","\xc8","\x4e"),
	HX_HCSTRING("worldCOMy","\x8a","\xa8","\xc8","\x4e"),
	HX_HCSTRING("zip_worldCOM","\x6d","\x69","\x22","\x3d"),
	HX_HCSTRING("wrap_localCOM","\xeb","\xfb","\x09","\xd0"),
	HX_HCSTRING("wrap_worldCOM","\x64","\xf9","\xad","\x94"),
	HX_HCSTRING("sweepRadius","\x5e","\x93","\x9c","\x27"),
	HX_HCSTRING("zip_sweepRadius","\xc0","\x7d","\xde","\xea"),
	HX_HCSTRING("sweepCoef","\x19","\x5a","\x67","\xcc"),
	HX_HCSTRING("invalidate_sweepRadius","\x5a","\x27","\x8e","\x7b"),
	HX_HCSTRING("validate_sweepRadius","\xf5","\x9a","\xcb","\x1f"),
	HX_HCSTRING("circle","\x10","\x72","\x0d","\x56"),
	HX_HCSTRING("polygon","\x7a","\x02","\x91","\x12"),
	HX_HCSTRING("refmaterial","\xfa","\x40","\x42","\x3d"),
	HX_HCSTRING("material","\xa7","\x5c","\xa5","\xf0"),
	HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"),
	HX_HCSTRING("fluidProperties","\x9d","\x0a","\x80","\x04"),
	HX_HCSTRING("fluidEnabled","\x97","\x87","\x5e","\x9a"),
	HX_HCSTRING("sensorEnabled","\x67","\x15","\xaa","\x41"),
	HX_HCSTRING("sweep","\xec","\x15","\x0a","\x86"),
	HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"),
	HX_HCSTRING("pairs","\x19","\xbb","\x4e","\xbd"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("aabb","\xa0","\xa2","\x67","\x40"),
	HX_HCSTRING("zip_aabb","\xfe","\x3f","\xc9","\x0b"),
	HX_HCSTRING("validate_aabb","\x29","\x0e","\x4b","\x8c"),
	HX_HCSTRING("force_validate_aabb","\x95","\x15","\xa1","\xe6"),
	HX_HCSTRING("invalidate_aabb","\x24","\x67","\xf9","\x4d"),
	HX_HCSTRING("validate_area_inertia","\x91","\x07","\xd9","\xfe"),
	HX_HCSTRING("validate_angDrag","\x05","\x78","\xd2","\x50"),
	HX_HCSTRING("validate_localCOM","\x9f","\x2b","\x3a","\x1b"),
	HX_HCSTRING("validate_worldCOM","\x18","\x29","\xde","\xdf"),
	HX_HCSTRING("getworldCOM","\xa5","\xcb","\xc5","\xf0"),
	HX_HCSTRING("invalidate_area_inertia","\x8c","\x53","\x51","\xed"),
	HX_HCSTRING("invalidate_angDrag","\xea","\xad","\x93","\x20"),
	HX_HCSTRING("invalidate_localCOM","\x1a","\x1e","\x88","\x14"),
	HX_HCSTRING("invalidate_worldCOM","\x93","\x1b","\x2c","\xd9"),
	HX_HCSTRING("invalidate_material","\x2b","\xb3","\x4d","\x25"),
	HX_HCSTRING("invalidate_filter","\x3c","\x0d","\x24","\x6e"),
	HX_HCSTRING("invalidate_fluidprops","\xaa","\xe8","\x6d","\x82"),
	HX_HCSTRING("aabb_validate","\x55","\xd1","\x98","\x95"),
	HX_HCSTRING("setMaterial","\x69","\x26","\x06","\x21"),
	HX_HCSTRING("setFilter","\xfa","\x94","\xdc","\xe4"),
	HX_HCSTRING("setFluid","\x08","\xc3","\xcf","\x10"),
	HX_HCSTRING("__immutable_midstep","\x77","\x19","\x9f","\x9d"),
	HX_HCSTRING("addedToBody","\x9d","\x3e","\x5d","\xd2"),
	HX_HCSTRING("removedFromBody","\xec","\xc4","\x31","\x7e"),
	HX_HCSTRING("addedToSpace","\x6b","\x44","\xb0","\x09"),
	HX_HCSTRING("removedFromSpace","\x3c","\x43","\xd1","\xb7"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Shape_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Shape_obj::types,"types");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Shape_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Shape_obj::types,"types");
};

#endif

hx::Class ZPP_Shape_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("types","\x79","\x70","\xcb","\x1a"),
	::String(null()) };

void ZPP_Shape_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.shape.ZPP_Shape","\x2e","\xaa","\xa8","\x92");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Shape_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Shape_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Shape_obj >;
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

void ZPP_Shape_obj::__boot()
{
struct _Function_0_1{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/shape/Shape.hx",178,0xb83747cd)
		{
			HX_STACK_LINE(178)
			::nape::shape::ShapeType tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(178)
			{
				HX_STACK_LINE(178)
				::nape::shape::ShapeType tmp1 = ::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(178)
				bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(178)
				if ((tmp2)){
					HX_STACK_LINE(178)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(178)
					::nape::shape::ShapeType tmp3 = ::nape::shape::ShapeType_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(178)
					::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE = tmp3;
					HX_STACK_LINE(178)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(178)
				tmp = ::zpp_nape::util::ZPP_Flags_obj::ShapeType_CIRCLE;
			}
			HX_STACK_LINE(178)
			::nape::shape::ShapeType tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(178)
			{
				HX_STACK_LINE(178)
				::nape::shape::ShapeType tmp2 = ::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(178)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(178)
				if ((tmp3)){
					HX_STACK_LINE(178)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(178)
					::nape::shape::ShapeType tmp4 = ::nape::shape::ShapeType_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(178)
					::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON = tmp4;
					HX_STACK_LINE(178)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(178)
				tmp1 = ::zpp_nape::util::ZPP_Flags_obj::ShapeType_POLYGON;
			}
			HX_STACK_LINE(178)
			return Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1);
		}
		return null();
	}
};
	types= _Function_0_1::Block();
}

} // end namespace zpp_nape
} // end namespace shape
