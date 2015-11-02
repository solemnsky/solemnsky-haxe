#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_geom_Geom
#include <nape/geom/Geom.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
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
#ifndef INCLUDED_zpp_nape_geom_ZPP_SweepDistance
#include <zpp_nape/geom/ZPP_SweepDistance.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace nape{
namespace geom{

Void Geom_obj::__construct()
{
	return null();
}

//Geom_obj::~Geom_obj() { }

Dynamic Geom_obj::__CreateEmpty() { return  new Geom_obj; }
hx::ObjectPtr< Geom_obj > Geom_obj::__new()
{  hx::ObjectPtr< Geom_obj > _result_ = new Geom_obj();
	_result_->__construct();
	return _result_;}

Dynamic Geom_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Geom_obj > _result_ = new Geom_obj();
	_result_->__construct();
	return _result_;}

Float Geom_obj::distanceBody( ::nape::phys::Body body1,::nape::phys::Body body2,::nape::geom::Vec2 out1,::nape::geom::Vec2 out2){
	HX_STACK_FRAME("nape.geom.Geom","distanceBody",0x7c10c5dd,"nape.geom.Geom.distanceBody","nape/geom/Geom.hx",223,0xa217fc96)
	HX_STACK_ARG(body1,"body1")
	HX_STACK_ARG(body2,"body2")
	HX_STACK_ARG(out1,"out1")
	HX_STACK_ARG(out2,"out2")
	HX_STACK_LINE(224)
	{
		HX_STACK_LINE(226)
		bool tmp = (out1 != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(226)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(226)
		if ((tmp)){
			HX_STACK_LINE(226)
			tmp1 = out1->zpp_disp;
		}
		else{
			HX_STACK_LINE(226)
			tmp1 = false;
		}
		HX_STACK_LINE(226)
		if ((tmp1)){
			HX_STACK_LINE(226)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(226)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(226)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(229)
	{
		HX_STACK_LINE(231)
		bool tmp = (out2 != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		if ((tmp)){
			HX_STACK_LINE(231)
			tmp1 = out2->zpp_disp;
		}
		else{
			HX_STACK_LINE(231)
			tmp1 = false;
		}
		HX_STACK_LINE(231)
		if ((tmp1)){
			HX_STACK_LINE(231)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(231)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(231)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(234)
	{
		HX_STACK_LINE(234)
		::zpp_nape::geom::ZPP_Vec2 _this = out1->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(234)
		bool tmp = _this->_immutable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(234)
		if ((tmp)){
			HX_STACK_LINE(234)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
		}
		HX_STACK_LINE(234)
		bool tmp1 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(234)
		if ((tmp1)){
			HX_STACK_LINE(234)
			_this->_isimmutable();
		}
	}
	HX_STACK_LINE(235)
	{
		HX_STACK_LINE(235)
		::zpp_nape::geom::ZPP_Vec2 _this = out2->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(235)
		bool tmp = _this->_immutable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(235)
		if ((tmp)){
			HX_STACK_LINE(235)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
		}
		HX_STACK_LINE(235)
		bool tmp1 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(235)
		if ((tmp1)){
			HX_STACK_LINE(235)
			_this->_isimmutable();
		}
	}
	HX_STACK_LINE(237)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(237)
	{
		HX_STACK_LINE(237)
		::nape::shape::ShapeList tmp1 = body1->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		::nape::shape::ShapeList tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(237)
		::nape::shape::ShapeList _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(237)
		{
			HX_STACK_LINE(237)
			::zpp_nape::util::ZNPList_ZPP_Shape tmp3 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(237)
			::zpp_nape::util::ZNPList_ZPP_Shape tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(237)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp5 = tmp4->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(237)
			tmp = (tmp5 == null());
		}
	}
	HX_STACK_LINE(237)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(237)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(237)
	if ((tmp1)){
		HX_STACK_LINE(237)
		::nape::shape::ShapeList tmp3 = body2->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(237)
		::nape::shape::ShapeList tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(237)
		::nape::shape::ShapeList _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(237)
		{
			HX_STACK_LINE(237)
			::zpp_nape::util::ZNPList_ZPP_Shape tmp5 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(237)
			::zpp_nape::util::ZNPList_ZPP_Shape tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(237)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp7 = tmp6->head;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(237)
			tmp2 = (tmp7 == null());
		}
	}
	else{
		HX_STACK_LINE(237)
		tmp2 = true;
	}
	HX_STACK_LINE(237)
	if ((tmp2)){
		HX_STACK_LINE(237)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Bodies cannot be empty in calculating distances","\x2b","\x04","\x64","\xcf"));
	}
	HX_STACK_LINE(239)
	{
		HX_STACK_LINE(240)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp3 = body1->zpp_inner->shapes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(240)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp3->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(241)
		while((true)){
			HX_STACK_LINE(241)
			bool tmp4 = (cx_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(241)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(241)
			if ((tmp5)){
				HX_STACK_LINE(241)
				break;
			}
			HX_STACK_LINE(242)
			::zpp_nape::shape::ZPP_Shape i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(243)
			::zpp_nape::shape::ZPP_Shape tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(243)
			::zpp_nape::geom::ZPP_Geom_obj::validateShape(tmp6);
			HX_STACK_LINE(244)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(247)
	{
		HX_STACK_LINE(248)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp3 = body2->zpp_inner->shapes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(248)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp3->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(249)
		while((true)){
			HX_STACK_LINE(249)
			bool tmp4 = (cx_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(249)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(249)
			if ((tmp5)){
				HX_STACK_LINE(249)
				break;
			}
			HX_STACK_LINE(250)
			::zpp_nape::shape::ZPP_Shape i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(251)
			::zpp_nape::shape::ZPP_Shape tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(251)
			::zpp_nape::geom::ZPP_Geom_obj::validateShape(tmp6);
			HX_STACK_LINE(252)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(255)
	::zpp_nape::phys::ZPP_Body tmp3 = body1->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(255)
	::zpp_nape::phys::ZPP_Body tmp4 = body2->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(255)
	::zpp_nape::geom::ZPP_Vec2 tmp5 = out1->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(255)
	::zpp_nape::geom::ZPP_Vec2 tmp6 = out2->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(255)
	Float tmp7 = ::zpp_nape::geom::ZPP_SweepDistance_obj::distanceBody(tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(255)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Geom_obj,distanceBody,return )

Float Geom_obj::distance( ::nape::shape::Shape shape1,::nape::shape::Shape shape2,::nape::geom::Vec2 out1,::nape::geom::Vec2 out2){
	HX_STACK_FRAME("nape.geom.Geom","distance",0x3581b59b,"nape.geom.Geom.distance","nape/geom/Geom.hx",301,0xa217fc96)
	HX_STACK_ARG(shape1,"shape1")
	HX_STACK_ARG(shape2,"shape2")
	HX_STACK_ARG(out1,"out1")
	HX_STACK_ARG(out2,"out2")
	HX_STACK_LINE(302)
	{
		HX_STACK_LINE(304)
		bool tmp = (out1 != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(304)
		if ((tmp)){
			HX_STACK_LINE(304)
			tmp1 = out1->zpp_disp;
		}
		else{
			HX_STACK_LINE(304)
			tmp1 = false;
		}
		HX_STACK_LINE(304)
		if ((tmp1)){
			HX_STACK_LINE(304)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(304)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(304)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(307)
	{
		HX_STACK_LINE(309)
		bool tmp = (out2 != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(309)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(309)
		if ((tmp)){
			HX_STACK_LINE(309)
			tmp1 = out2->zpp_disp;
		}
		else{
			HX_STACK_LINE(309)
			tmp1 = false;
		}
		HX_STACK_LINE(309)
		if ((tmp1)){
			HX_STACK_LINE(309)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(309)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(309)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(312)
	{
		HX_STACK_LINE(312)
		::zpp_nape::geom::ZPP_Vec2 _this = out1->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(312)
		bool tmp = _this->_immutable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(312)
		if ((tmp)){
			HX_STACK_LINE(312)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
		}
		HX_STACK_LINE(312)
		bool tmp1 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(312)
		if ((tmp1)){
			HX_STACK_LINE(312)
			_this->_isimmutable();
		}
	}
	HX_STACK_LINE(313)
	{
		HX_STACK_LINE(313)
		::zpp_nape::geom::ZPP_Vec2 _this = out2->zpp_inner;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(313)
		bool tmp = _this->_immutable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(313)
		if ((tmp)){
			HX_STACK_LINE(313)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
		}
		HX_STACK_LINE(313)
		bool tmp1 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		if ((tmp1)){
			HX_STACK_LINE(313)
			_this->_isimmutable();
		}
	}
	HX_STACK_LINE(315)
	::zpp_nape::phys::ZPP_Body tmp = shape1->zpp_inner->body;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(315)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(315)
	::nape::phys::Body tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(315)
	if ((tmp1)){
		HX_STACK_LINE(315)
		::zpp_nape::phys::ZPP_Body tmp3 = shape1->zpp_inner->body;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(315)
		tmp2 = tmp3->outer;
	}
	else{
		HX_STACK_LINE(315)
		tmp2 = null();
	}
	HX_STACK_LINE(315)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(315)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(315)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(315)
	if ((tmp4)){
		HX_STACK_LINE(315)
		::zpp_nape::phys::ZPP_Body tmp6 = shape2->zpp_inner->body;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(315)
		::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(315)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(315)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(315)
		::nape::phys::Body tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(315)
		bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(315)
		if ((tmp11)){
			HX_STACK_LINE(315)
			::zpp_nape::phys::ZPP_Body tmp12 = shape2->zpp_inner->body;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(315)
			::zpp_nape::phys::ZPP_Body tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(315)
			tmp10 = tmp13->outer;
		}
		else{
			HX_STACK_LINE(315)
			tmp10 = null();
		}
		HX_STACK_LINE(315)
		tmp5 = (tmp10 == null());
	}
	else{
		HX_STACK_LINE(315)
		tmp5 = true;
	}
	HX_STACK_LINE(315)
	if ((tmp5)){
		HX_STACK_LINE(315)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Shape must be part of a Body to calculate distances","\x8f","\x3a","\x06","\xf1"));
	}
	HX_STACK_LINE(317)
	::zpp_nape::shape::ZPP_Shape tmp6 = shape1->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(317)
	::zpp_nape::geom::ZPP_Geom_obj::validateShape(tmp6);
	HX_STACK_LINE(318)
	::zpp_nape::shape::ZPP_Shape tmp7 = shape2->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(318)
	::zpp_nape::geom::ZPP_Geom_obj::validateShape(tmp7);
	HX_STACK_LINE(319)
	::zpp_nape::geom::ZPP_Vec2 tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(320)
	{
		HX_STACK_LINE(321)
		::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(321)
		bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(321)
		if ((tmp10)){
			HX_STACK_LINE(322)
			::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(322)
			tmp8 = tmp11;
		}
		else{
			HX_STACK_LINE(328)
			::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(328)
			tmp8 = tmp11;
			HX_STACK_LINE(329)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = tmp8->next;
			HX_STACK_LINE(330)
			tmp8->next = null();
		}
		HX_STACK_LINE(335)
		tmp8->weak = false;
	}
	HX_STACK_LINE(337)
	Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(337)
	{
		HX_STACK_LINE(337)
		::zpp_nape::shape::ZPP_Shape s1 = shape1->zpp_inner;		HX_STACK_VAR(s1,"s1");
		HX_STACK_LINE(337)
		::zpp_nape::shape::ZPP_Shape s2 = shape2->zpp_inner;		HX_STACK_VAR(s2,"s2");
		HX_STACK_LINE(337)
		::zpp_nape::geom::ZPP_Vec2 w1 = out1->zpp_inner;		HX_STACK_VAR(w1,"w1");
		HX_STACK_LINE(337)
		::zpp_nape::geom::ZPP_Vec2 w2 = out2->zpp_inner;		HX_STACK_VAR(w2,"w2");
		HX_STACK_LINE(337)
		int tmp10 = s1->type;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(337)
		int tmp11 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(337)
		bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(337)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(337)
		if ((tmp12)){
			HX_STACK_LINE(337)
			int tmp14 = s2->type;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(337)
			int tmp15 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(337)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(337)
			tmp13 = (tmp14 == tmp16);
		}
		else{
			HX_STACK_LINE(337)
			tmp13 = false;
		}
		HX_STACK_LINE(337)
		if ((tmp13)){
			HX_STACK_LINE(337)
			::zpp_nape::shape::ZPP_Circle c1 = s1->circle;		HX_STACK_VAR(c1,"c1");
			HX_STACK_LINE(337)
			::zpp_nape::shape::ZPP_Circle c2 = s2->circle;		HX_STACK_VAR(c2,"c2");
			HX_STACK_LINE(337)
			Float dist;		HX_STACK_VAR(dist,"dist");
			HX_STACK_LINE(337)
			{
				HX_STACK_LINE(337)
				Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
				HX_STACK_LINE(337)
				Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
				HX_STACK_LINE(337)
				{
					HX_STACK_LINE(337)
					Float tmp14 = (c2->worldCOMx - c1->worldCOMx);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(337)
					nx = tmp14;
					HX_STACK_LINE(337)
					Float tmp15 = (c2->worldCOMy - c1->worldCOMy);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(337)
					ny = tmp15;
				}
				HX_STACK_LINE(337)
				Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(337)
				{
					HX_STACK_LINE(337)
					Float tmp15 = (nx * nx);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(337)
					Float tmp16 = (ny * ny);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(337)
					Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(337)
					tmp14 = ::Math_obj::sqrt(tmp17);
				}
				HX_STACK_LINE(337)
				Float len = tmp14;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(337)
				Float tmp15 = len;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(337)
				Float tmp16 = (c1->radius + c2->radius);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(337)
				Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(337)
				dist = tmp17;
				HX_STACK_LINE(337)
				bool tmp18 = (dist < ((Float)1e100));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(337)
				if ((tmp18)){
					HX_STACK_LINE(337)
					bool tmp19 = (len == (int)0);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(337)
					if ((tmp19)){
						HX_STACK_LINE(337)
						nx = (int)1;
						HX_STACK_LINE(337)
						ny = (int)0;
						HX_STACK_LINE(337)
						{
						}
					}
					else{
						HX_STACK_LINE(337)
						Float tmp20 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(337)
						Float t = tmp20;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(337)
						hx::MultEq(nx,t);
						HX_STACK_LINE(337)
						hx::MultEq(ny,t);
					}
					HX_STACK_LINE(337)
					{
						HX_STACK_LINE(337)
						Float t = c1->radius;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(337)
						Float tmp20 = c1->worldCOMx;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(337)
						Float tmp21 = (nx * t);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(337)
						Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(337)
						w1->x = tmp22;
						HX_STACK_LINE(337)
						Float tmp23 = c1->worldCOMy;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(337)
						Float tmp24 = (ny * t);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(337)
						Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(337)
						w1->y = tmp25;
					}
					HX_STACK_LINE(337)
					{
						HX_STACK_LINE(337)
						Float tmp20 = c2->radius;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(337)
						Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(337)
						Float t = tmp21;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(337)
						Float tmp22 = c2->worldCOMx;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(337)
						Float tmp23 = (nx * t);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(337)
						Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(337)
						w2->x = tmp24;
						HX_STACK_LINE(337)
						Float tmp25 = c2->worldCOMy;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(337)
						Float tmp26 = (ny * t);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(337)
						Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(337)
						w2->y = tmp27;
					}
					HX_STACK_LINE(337)
					{
						HX_STACK_LINE(337)
						tmp8->x = nx;
						HX_STACK_LINE(337)
						tmp8->y = ny;
						HX_STACK_LINE(337)
						{
						}
					}
				}
			}
			HX_STACK_LINE(337)
			tmp9 = dist;
		}
		else{
			HX_STACK_LINE(337)
			bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
			HX_STACK_LINE(337)
			int tmp14 = s1->type;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(337)
			int tmp15 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(337)
			bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(337)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(337)
			if ((tmp16)){
				HX_STACK_LINE(337)
				int tmp18 = s2->type;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(337)
				int tmp19 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(337)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(337)
				tmp17 = (tmp18 == tmp20);
			}
			else{
				HX_STACK_LINE(337)
				tmp17 = false;
			}
			HX_STACK_LINE(337)
			if ((tmp17)){
				HX_STACK_LINE(337)
				::zpp_nape::shape::ZPP_Shape tmp18 = s1;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(337)
				s1 = s2;
				HX_STACK_LINE(337)
				s2 = tmp18;
				HX_STACK_LINE(337)
				::zpp_nape::geom::ZPP_Vec2 tmp21 = w1;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(337)
				w1 = w2;
				HX_STACK_LINE(337)
				w2 = tmp21;
				HX_STACK_LINE(337)
				swapped = true;
			}
			HX_STACK_LINE(337)
			int tmp18 = s1->type;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(337)
			int tmp19 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(337)
			bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(337)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(337)
			if ((tmp20)){
				HX_STACK_LINE(337)
				int tmp22 = s2->type;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(337)
				int tmp23 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(337)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(337)
				tmp21 = (tmp22 == tmp24);
			}
			else{
				HX_STACK_LINE(337)
				tmp21 = false;
			}
			HX_STACK_LINE(337)
			if ((tmp21)){
				HX_STACK_LINE(337)
				::zpp_nape::shape::ZPP_Polygon poly = s1->polygon;		HX_STACK_VAR(poly,"poly");
				HX_STACK_LINE(337)
				::zpp_nape::shape::ZPP_Circle circle = s2->circle;		HX_STACK_VAR(circle,"circle");
				HX_STACK_LINE(337)
				Float tmp22 = ((Float)-1e+100);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(337)
				Float best = tmp22;		HX_STACK_VAR(best,"best");
				HX_STACK_LINE(337)
				::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
				HX_STACK_LINE(337)
				{
					HX_STACK_LINE(337)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp23 = poly->edges->head;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(337)
					::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp23;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(337)
					while((true)){
						HX_STACK_LINE(337)
						bool tmp24 = (cx_ite != null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(337)
						bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(337)
						if ((tmp25)){
							HX_STACK_LINE(337)
							break;
						}
						HX_STACK_LINE(337)
						::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(337)
						{
							HX_STACK_LINE(337)
							Float tmp26 = (a->gnormx * circle->worldCOMx);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(337)
							Float tmp27 = (a->gnormy * circle->worldCOMy);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(337)
							Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(337)
							Float tmp29 = a->gprojection;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(337)
							Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(337)
							Float tmp31 = circle->radius;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(337)
							Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(337)
							Float dist = tmp32;		HX_STACK_VAR(dist,"dist");
							HX_STACK_LINE(337)
							bool tmp33 = (dist > ((Float)1e100));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(337)
							if ((tmp33)){
								HX_STACK_LINE(337)
								best = dist;
								HX_STACK_LINE(337)
								break;
							}
							HX_STACK_LINE(337)
							bool tmp34 = (dist > (int)0);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(337)
							if ((tmp34)){
								HX_STACK_LINE(337)
								bool tmp35 = (dist > best);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(337)
								if ((tmp35)){
									HX_STACK_LINE(337)
									best = dist;
									HX_STACK_LINE(337)
									a0 = a;
								}
							}
							else{
								HX_STACK_LINE(337)
								bool tmp35 = (best < (int)0);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(337)
								bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(337)
								if ((tmp35)){
									HX_STACK_LINE(337)
									tmp36 = (dist > best);
								}
								else{
									HX_STACK_LINE(337)
									tmp36 = false;
								}
								HX_STACK_LINE(337)
								if ((tmp36)){
									HX_STACK_LINE(337)
									best = dist;
									HX_STACK_LINE(337)
									a0 = a;
								}
							}
						}
						HX_STACK_LINE(337)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(337)
				bool tmp23 = (best < ((Float)1e100));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(337)
				if ((tmp23)){
					HX_STACK_LINE(337)
					::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
					HX_STACK_LINE(337)
					::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
					HX_STACK_LINE(337)
					Float tmp24 = (circle->worldCOMy * a0->gnormx);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(337)
					Float tmp25 = (circle->worldCOMx * a0->gnormy);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(337)
					Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(337)
					Float dt = tmp26;		HX_STACK_VAR(dt,"dt");
					HX_STACK_LINE(337)
					Float tmp27 = dt;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(337)
					Float tmp28 = (v0->y * a0->gnormx);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(337)
					Float tmp29 = (v0->x * a0->gnormy);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(337)
					Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(337)
					bool tmp31 = (tmp27 <= tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(337)
					if ((tmp31)){
						HX_STACK_LINE(337)
						Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
						HX_STACK_LINE(337)
						Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
						HX_STACK_LINE(337)
						{
							HX_STACK_LINE(337)
							Float tmp32 = (circle->worldCOMx - v0->x);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(337)
							nx = tmp32;
							HX_STACK_LINE(337)
							Float tmp33 = (circle->worldCOMy - v0->y);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(337)
							ny = tmp33;
						}
						HX_STACK_LINE(337)
						Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(337)
						{
							HX_STACK_LINE(337)
							Float tmp33 = (nx * nx);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(337)
							Float tmp34 = (ny * ny);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(337)
							Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(337)
							tmp32 = ::Math_obj::sqrt(tmp35);
						}
						HX_STACK_LINE(337)
						Float len = tmp32;		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(337)
						Float tmp33 = len;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(337)
						Float tmp34 = circle->radius;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(337)
						Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(337)
						best = tmp35;
						HX_STACK_LINE(337)
						bool tmp36 = (best < ((Float)1e100));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(337)
						if ((tmp36)){
							HX_STACK_LINE(337)
							bool tmp37 = (len == (int)0);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(337)
							if ((tmp37)){
								HX_STACK_LINE(337)
								nx = (int)1;
								HX_STACK_LINE(337)
								ny = (int)0;
								HX_STACK_LINE(337)
								{
								}
							}
							else{
								HX_STACK_LINE(337)
								Float tmp38 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(337)
								Float t = tmp38;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(337)
								hx::MultEq(nx,t);
								HX_STACK_LINE(337)
								hx::MultEq(ny,t);
							}
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								int t = (int)0;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(337)
								Float tmp38 = v0->x;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(337)
								Float tmp39 = (nx * t);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(337)
								Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(337)
								w1->x = tmp40;
								HX_STACK_LINE(337)
								Float tmp41 = v0->y;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(337)
								Float tmp42 = (ny * t);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(337)
								Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(337)
								w1->y = tmp43;
							}
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								Float tmp38 = circle->radius;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(337)
								Float tmp39 = -(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(337)
								Float t = tmp39;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(337)
								Float tmp40 = circle->worldCOMx;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(337)
								Float tmp41 = (nx * t);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(337)
								Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(337)
								w2->x = tmp42;
								HX_STACK_LINE(337)
								Float tmp43 = circle->worldCOMy;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(337)
								Float tmp44 = (ny * t);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(337)
								Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(337)
								w2->y = tmp45;
							}
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								tmp8->x = nx;
								HX_STACK_LINE(337)
								tmp8->y = ny;
								HX_STACK_LINE(337)
								{
								}
							}
						}
					}
					else{
						HX_STACK_LINE(337)
						Float tmp32 = dt;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(337)
						Float tmp33 = (v1->y * a0->gnormx);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(337)
						Float tmp34 = (v1->x * a0->gnormy);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(337)
						Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(337)
						bool tmp36 = (tmp32 >= tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(337)
						if ((tmp36)){
							HX_STACK_LINE(337)
							Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(337)
							Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								Float tmp37 = (circle->worldCOMx - v1->x);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(337)
								nx = tmp37;
								HX_STACK_LINE(337)
								Float tmp38 = (circle->worldCOMy - v1->y);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(337)
								ny = tmp38;
							}
							HX_STACK_LINE(337)
							Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								Float tmp38 = (nx * nx);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(337)
								Float tmp39 = (ny * ny);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(337)
								Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(337)
								tmp37 = ::Math_obj::sqrt(tmp40);
							}
							HX_STACK_LINE(337)
							Float len = tmp37;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(337)
							Float tmp38 = len;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(337)
							Float tmp39 = circle->radius;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(337)
							Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(337)
							best = tmp40;
							HX_STACK_LINE(337)
							bool tmp41 = (best < ((Float)1e100));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(337)
							if ((tmp41)){
								HX_STACK_LINE(337)
								bool tmp42 = (len == (int)0);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(337)
								if ((tmp42)){
									HX_STACK_LINE(337)
									nx = (int)1;
									HX_STACK_LINE(337)
									ny = (int)0;
									HX_STACK_LINE(337)
									{
									}
								}
								else{
									HX_STACK_LINE(337)
									Float tmp43 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(337)
									Float t = tmp43;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(337)
									hx::MultEq(nx,t);
									HX_STACK_LINE(337)
									hx::MultEq(ny,t);
								}
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									int t = (int)0;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(337)
									Float tmp43 = v1->x;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(337)
									Float tmp44 = (nx * t);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(337)
									Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(337)
									w1->x = tmp45;
									HX_STACK_LINE(337)
									Float tmp46 = v1->y;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(337)
									Float tmp47 = (ny * t);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(337)
									Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(337)
									w1->y = tmp48;
								}
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									Float tmp43 = circle->radius;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(337)
									Float tmp44 = -(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(337)
									Float t = tmp44;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(337)
									Float tmp45 = circle->worldCOMx;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(337)
									Float tmp46 = (nx * t);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(337)
									Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(337)
									w2->x = tmp47;
									HX_STACK_LINE(337)
									Float tmp48 = circle->worldCOMy;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(337)
									Float tmp49 = (ny * t);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(337)
									Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(337)
									w2->y = tmp50;
								}
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									tmp8->x = nx;
									HX_STACK_LINE(337)
									tmp8->y = ny;
									HX_STACK_LINE(337)
									{
									}
								}
							}
						}
						else{
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								Float tmp37 = circle->radius;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(337)
								Float tmp38 = -(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(337)
								Float t = tmp38;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(337)
								Float tmp39 = circle->worldCOMx;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(337)
								Float tmp40 = (a0->gnormx * t);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(337)
								Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(337)
								w2->x = tmp41;
								HX_STACK_LINE(337)
								Float tmp42 = circle->worldCOMy;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(337)
								Float tmp43 = (a0->gnormy * t);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(337)
								Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(337)
								w2->y = tmp44;
							}
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								Float tmp37 = best;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(337)
								Float tmp38 = -(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(337)
								Float t = tmp38;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(337)
								Float tmp39 = w2->x;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(337)
								Float tmp40 = (a0->gnormx * t);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(337)
								Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(337)
								w1->x = tmp41;
								HX_STACK_LINE(337)
								Float tmp42 = w2->y;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(337)
								Float tmp43 = (a0->gnormy * t);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(337)
								Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(337)
								w1->y = tmp44;
							}
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								tmp8->x = a0->gnormx;
								HX_STACK_LINE(337)
								tmp8->y = a0->gnormy;
								HX_STACK_LINE(337)
								{
								}
							}
						}
					}
				}
				HX_STACK_LINE(337)
				bool tmp24 = swapped;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(337)
				if ((tmp24)){
					HX_STACK_LINE(337)
					Float tmp25 = tmp8->x;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(337)
					Float tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(337)
					tmp8->x = tmp26;
					HX_STACK_LINE(337)
					Float tmp27 = tmp8->y;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(337)
					Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(337)
					tmp8->y = tmp28;
				}
				HX_STACK_LINE(337)
				tmp9 = best;
			}
			else{
				HX_STACK_LINE(337)
				::zpp_nape::shape::ZPP_Polygon p1 = s1->polygon;		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(337)
				::zpp_nape::shape::ZPP_Polygon p2 = s2->polygon;		HX_STACK_VAR(p2,"p2");
				HX_STACK_LINE(337)
				Float tmp22 = ((Float)-1e+100);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(337)
				Float best = tmp22;		HX_STACK_VAR(best,"best");
				HX_STACK_LINE(337)
				::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
				HX_STACK_LINE(337)
				::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
				HX_STACK_LINE(337)
				int besti = (int)0;		HX_STACK_VAR(besti,"besti");
				HX_STACK_LINE(337)
				{
					HX_STACK_LINE(337)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp23 = p1->edges->head;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(337)
					::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp23;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(337)
					while((true)){
						HX_STACK_LINE(337)
						bool tmp24 = (cx_ite != null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(337)
						bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(337)
						if ((tmp25)){
							HX_STACK_LINE(337)
							break;
						}
						HX_STACK_LINE(337)
						::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(337)
						{
							HX_STACK_LINE(337)
							Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								::zpp_nape::geom::ZPP_Vec2 tmp26 = p2->gverts->next;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(337)
								::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp26;		HX_STACK_VAR(cx_ite1,"cx_ite1");
								HX_STACK_LINE(337)
								while((true)){
									HX_STACK_LINE(337)
									bool tmp27 = (cx_ite1 != null());		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(337)
									bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(337)
									if ((tmp28)){
										HX_STACK_LINE(337)
										break;
									}
									HX_STACK_LINE(337)
									::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(337)
									{
										HX_STACK_LINE(337)
										Float tmp29 = (a->gnormx * v->x);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(337)
										Float tmp30 = (a->gnormy * v->y);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(337)
										Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(337)
										Float k = tmp31;		HX_STACK_VAR(k,"k");
										HX_STACK_LINE(337)
										bool tmp32 = (k < min);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(337)
										if ((tmp32)){
											HX_STACK_LINE(337)
											min = k;
										}
									}
									HX_STACK_LINE(337)
									cx_ite1 = cx_ite1->next;
								}
							}
							HX_STACK_LINE(337)
							hx::SubEq(min,a->gprojection);
							HX_STACK_LINE(337)
							bool tmp26 = (min > ((Float)1e100));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(337)
							if ((tmp26)){
								HX_STACK_LINE(337)
								best = min;
								HX_STACK_LINE(337)
								break;
							}
							HX_STACK_LINE(337)
							bool tmp27 = (min > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(337)
							if ((tmp27)){
								HX_STACK_LINE(337)
								bool tmp28 = (min > best);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(337)
								if ((tmp28)){
									HX_STACK_LINE(337)
									best = min;
									HX_STACK_LINE(337)
									a1 = a;
									HX_STACK_LINE(337)
									besti = (int)1;
								}
							}
							else{
								HX_STACK_LINE(337)
								bool tmp28 = (best < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(337)
								bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(337)
								if ((tmp28)){
									HX_STACK_LINE(337)
									tmp29 = (min > best);
								}
								else{
									HX_STACK_LINE(337)
									tmp29 = false;
								}
								HX_STACK_LINE(337)
								if ((tmp29)){
									HX_STACK_LINE(337)
									best = min;
									HX_STACK_LINE(337)
									a1 = a;
									HX_STACK_LINE(337)
									besti = (int)1;
								}
							}
						}
						HX_STACK_LINE(337)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(337)
				bool tmp23 = (best < ((Float)1e100));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(337)
				if ((tmp23)){
					HX_STACK_LINE(337)
					{
						HX_STACK_LINE(337)
						::zpp_nape::util::ZNPNode_ZPP_Edge tmp24 = p2->edges->head;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(337)
						::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp24;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(337)
						while((true)){
							HX_STACK_LINE(337)
							bool tmp25 = (cx_ite != null());		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(337)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(337)
							if ((tmp26)){
								HX_STACK_LINE(337)
								break;
							}
							HX_STACK_LINE(337)
							::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									::zpp_nape::geom::ZPP_Vec2 tmp27 = p1->gverts->next;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(337)
									::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp27;		HX_STACK_VAR(cx_ite1,"cx_ite1");
									HX_STACK_LINE(337)
									while((true)){
										HX_STACK_LINE(337)
										bool tmp28 = (cx_ite1 != null());		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(337)
										bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(337)
										if ((tmp29)){
											HX_STACK_LINE(337)
											break;
										}
										HX_STACK_LINE(337)
										::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(337)
										{
											HX_STACK_LINE(337)
											Float tmp30 = (a->gnormx * v->x);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(337)
											Float tmp31 = (a->gnormy * v->y);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(337)
											Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(337)
											Float k = tmp32;		HX_STACK_VAR(k,"k");
											HX_STACK_LINE(337)
											bool tmp33 = (k < min);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(337)
											if ((tmp33)){
												HX_STACK_LINE(337)
												min = k;
											}
										}
										HX_STACK_LINE(337)
										cx_ite1 = cx_ite1->next;
									}
								}
								HX_STACK_LINE(337)
								hx::SubEq(min,a->gprojection);
								HX_STACK_LINE(337)
								bool tmp27 = (min > ((Float)1e100));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(337)
								if ((tmp27)){
									HX_STACK_LINE(337)
									best = min;
									HX_STACK_LINE(337)
									break;
								}
								HX_STACK_LINE(337)
								bool tmp28 = (min > (int)0);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(337)
								if ((tmp28)){
									HX_STACK_LINE(337)
									bool tmp29 = (min > best);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(337)
									if ((tmp29)){
										HX_STACK_LINE(337)
										best = min;
										HX_STACK_LINE(337)
										a2 = a;
										HX_STACK_LINE(337)
										besti = (int)2;
									}
								}
								else{
									HX_STACK_LINE(337)
									bool tmp29 = (best < (int)0);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(337)
									bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(337)
									if ((tmp29)){
										HX_STACK_LINE(337)
										tmp30 = (min > best);
									}
									else{
										HX_STACK_LINE(337)
										tmp30 = false;
									}
									HX_STACK_LINE(337)
									if ((tmp30)){
										HX_STACK_LINE(337)
										best = min;
										HX_STACK_LINE(337)
										a2 = a;
										HX_STACK_LINE(337)
										besti = (int)2;
									}
								}
							}
							HX_STACK_LINE(337)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(337)
					bool tmp24 = (best < ((Float)1e100));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(337)
					if ((tmp24)){
						HX_STACK_LINE(337)
						::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
						HX_STACK_LINE(337)
						::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
						HX_STACK_LINE(337)
						::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
						HX_STACK_LINE(337)
						bool tmp25 = (besti == (int)1);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(337)
						if ((tmp25)){
							HX_STACK_LINE(337)
							q1 = p1;
							HX_STACK_LINE(337)
							q2 = p2;
							HX_STACK_LINE(337)
							ax = a1;
						}
						else{
							HX_STACK_LINE(337)
							q1 = p2;
							HX_STACK_LINE(337)
							q2 = p1;
							HX_STACK_LINE(337)
							ax = a2;
							HX_STACK_LINE(337)
							::zpp_nape::geom::ZPP_Vec2 tmp26 = w1;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(337)
							w1 = w2;
							HX_STACK_LINE(337)
							w2 = tmp26;
							HX_STACK_LINE(337)
							bool tmp27 = swapped;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(337)
							bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(337)
							swapped = tmp28;
						}
						HX_STACK_LINE(337)
						::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
						HX_STACK_LINE(337)
						Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
						HX_STACK_LINE(337)
						{
							HX_STACK_LINE(337)
							::zpp_nape::util::ZNPNode_ZPP_Edge tmp26 = q2->edges->head;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(337)
							::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp26;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(337)
							while((true)){
								HX_STACK_LINE(337)
								bool tmp27 = (cx_ite != null());		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(337)
								bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(337)
								if ((tmp28)){
									HX_STACK_LINE(337)
									break;
								}
								HX_STACK_LINE(337)
								::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									Float tmp29 = (ax->gnormx * a->gnormx);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(337)
									Float tmp30 = (ax->gnormy * a->gnormy);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(337)
									Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(337)
									Float k = tmp31;		HX_STACK_VAR(k,"k");
									HX_STACK_LINE(337)
									bool tmp32 = (k < min);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(337)
									if ((tmp32)){
										HX_STACK_LINE(337)
										min = k;
										HX_STACK_LINE(337)
										ay = a;
									}
								}
								HX_STACK_LINE(337)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(337)
						bool tmp26 = swapped;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(337)
						if ((tmp26)){
							HX_STACK_LINE(337)
							Float tmp27 = ax->gnormx;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(337)
							Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(337)
							tmp8->x = tmp28;
							HX_STACK_LINE(337)
							Float tmp29 = ax->gnormy;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(337)
							Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(337)
							tmp8->y = tmp30;
							HX_STACK_LINE(337)
							{
							}
						}
						else{
							HX_STACK_LINE(337)
							tmp8->x = ax->gnormx;
							HX_STACK_LINE(337)
							tmp8->y = ax->gnormy;
							HX_STACK_LINE(337)
							{
							}
						}
						HX_STACK_LINE(337)
						bool tmp27 = (best >= (int)0);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(337)
						if ((tmp27)){
							HX_STACK_LINE(337)
							::zpp_nape::geom::ZPP_Vec2 v0 = ax->gp0;		HX_STACK_VAR(v0,"v0");
							HX_STACK_LINE(337)
							::zpp_nape::geom::ZPP_Vec2 v1 = ax->gp1;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(337)
							::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
							HX_STACK_LINE(337)
							::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
							HX_STACK_LINE(337)
							Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
							HX_STACK_LINE(337)
							Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
							HX_STACK_LINE(337)
							Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
							HX_STACK_LINE(337)
							Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								Float tmp28 = (v1->x - v0->x);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(337)
								vx = tmp28;
								HX_STACK_LINE(337)
								Float tmp29 = (v1->y - v0->y);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(337)
								vy = tmp29;
							}
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								Float tmp28 = (q11->x - q0->x);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(337)
								qx = tmp28;
								HX_STACK_LINE(337)
								Float tmp29 = (q11->y - q0->y);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(337)
								qy = tmp29;
							}
							HX_STACK_LINE(337)
							Float tmp28 = (vx * vx);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(337)
							Float tmp29 = (vy * vy);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(337)
							Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(337)
							Float tmp31 = (Float((int)1) / Float(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(337)
							Float vdot = tmp31;		HX_STACK_VAR(vdot,"vdot");
							HX_STACK_LINE(337)
							Float tmp32 = (qx * qx);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(337)
							Float tmp33 = (qy * qy);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(337)
							Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(337)
							Float tmp35 = (Float((int)1) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(337)
							Float qdot = tmp35;		HX_STACK_VAR(qdot,"qdot");
							HX_STACK_LINE(337)
							Float tmp36 = vx;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(337)
							Float tmp37 = (v0->x - q0->x);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(337)
							Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(337)
							Float tmp39 = vy;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(337)
							Float tmp40 = (v0->y - q0->y);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(337)
							Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(337)
							Float tmp42 = (tmp38 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(337)
							Float tmp43 = -(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(337)
							Float tmp44 = vdot;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(337)
							Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(337)
							Float t1 = tmp45;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(337)
							Float tmp46 = vx;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(337)
							Float tmp47 = (v0->x - q11->x);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(337)
							Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(337)
							Float tmp49 = vy;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(337)
							Float tmp50 = (v0->y - q11->y);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(337)
							Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(337)
							Float tmp52 = (tmp48 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(337)
							Float tmp53 = -(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(337)
							Float tmp54 = vdot;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(337)
							Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(337)
							Float t2 = tmp55;		HX_STACK_VAR(t2,"t2");
							HX_STACK_LINE(337)
							Float tmp56 = qx;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(337)
							Float tmp57 = (q0->x - v0->x);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(337)
							Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(337)
							Float tmp59 = qy;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(337)
							Float tmp60 = (q0->y - v0->y);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(337)
							Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(337)
							Float tmp62 = (tmp58 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(337)
							Float tmp63 = -(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(337)
							Float tmp64 = qdot;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(337)
							Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(337)
							Float s11 = tmp65;		HX_STACK_VAR(s11,"s11");
							HX_STACK_LINE(337)
							Float tmp66 = qx;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(337)
							Float tmp67 = (q0->x - v1->x);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(337)
							Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(337)
							Float tmp69 = qy;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(337)
							Float tmp70 = (q0->y - v1->y);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(337)
							Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(337)
							Float tmp72 = (tmp68 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(337)
							Float tmp73 = -(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(337)
							Float tmp74 = qdot;		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(337)
							Float tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(337)
							Float s21 = tmp75;		HX_STACK_VAR(s21,"s21");
							HX_STACK_LINE(337)
							bool tmp76 = (t1 < (int)0);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(337)
							if ((tmp76)){
								HX_STACK_LINE(337)
								t1 = (int)0;
							}
							else{
								HX_STACK_LINE(337)
								bool tmp77 = (t1 > (int)1);		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(337)
								if ((tmp77)){
									HX_STACK_LINE(337)
									t1 = (int)1;
								}
							}
							HX_STACK_LINE(337)
							bool tmp77 = (t2 < (int)0);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(337)
							if ((tmp77)){
								HX_STACK_LINE(337)
								t2 = (int)0;
							}
							else{
								HX_STACK_LINE(337)
								bool tmp78 = (t2 > (int)1);		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(337)
								if ((tmp78)){
									HX_STACK_LINE(337)
									t2 = (int)1;
								}
							}
							HX_STACK_LINE(337)
							bool tmp78 = (s11 < (int)0);		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(337)
							if ((tmp78)){
								HX_STACK_LINE(337)
								s11 = (int)0;
							}
							else{
								HX_STACK_LINE(337)
								bool tmp79 = (s11 > (int)1);		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(337)
								if ((tmp79)){
									HX_STACK_LINE(337)
									s11 = (int)1;
								}
							}
							HX_STACK_LINE(337)
							bool tmp79 = (s21 < (int)0);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(337)
							if ((tmp79)){
								HX_STACK_LINE(337)
								s21 = (int)0;
							}
							else{
								HX_STACK_LINE(337)
								bool tmp80 = (s21 > (int)1);		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(337)
								if ((tmp80)){
									HX_STACK_LINE(337)
									s21 = (int)1;
								}
							}
							HX_STACK_LINE(337)
							Float f1x = ((Float)0.0);		HX_STACK_VAR(f1x,"f1x");
							HX_STACK_LINE(337)
							Float f1y = ((Float)0.0);		HX_STACK_VAR(f1y,"f1y");
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								Float t = t1;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(337)
								Float tmp80 = v0->x;		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(337)
								Float tmp81 = (vx * t);		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(337)
								Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(337)
								f1x = tmp82;
								HX_STACK_LINE(337)
								Float tmp83 = v0->y;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(337)
								Float tmp84 = (vy * t);		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(337)
								Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(337)
								f1y = tmp85;
							}
							HX_STACK_LINE(337)
							Float f2x = ((Float)0.0);		HX_STACK_VAR(f2x,"f2x");
							HX_STACK_LINE(337)
							Float f2y = ((Float)0.0);		HX_STACK_VAR(f2y,"f2y");
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								Float t = t2;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(337)
								Float tmp80 = v0->x;		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(337)
								Float tmp81 = (vx * t);		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(337)
								Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(337)
								f2x = tmp82;
								HX_STACK_LINE(337)
								Float tmp83 = v0->y;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(337)
								Float tmp84 = (vy * t);		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(337)
								Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(337)
								f2y = tmp85;
							}
							HX_STACK_LINE(337)
							Float g1x = ((Float)0.0);		HX_STACK_VAR(g1x,"g1x");
							HX_STACK_LINE(337)
							Float g1y = ((Float)0.0);		HX_STACK_VAR(g1y,"g1y");
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								Float t = s11;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(337)
								Float tmp80 = q0->x;		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(337)
								Float tmp81 = (qx * t);		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(337)
								Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(337)
								g1x = tmp82;
								HX_STACK_LINE(337)
								Float tmp83 = q0->y;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(337)
								Float tmp84 = (qy * t);		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(337)
								Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(337)
								g1y = tmp85;
							}
							HX_STACK_LINE(337)
							Float g2x = ((Float)0.0);		HX_STACK_VAR(g2x,"g2x");
							HX_STACK_LINE(337)
							Float g2y = ((Float)0.0);		HX_STACK_VAR(g2y,"g2y");
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								Float t = s21;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(337)
								Float tmp80 = q0->x;		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(337)
								Float tmp81 = (qx * t);		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(337)
								Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(337)
								g2x = tmp82;
								HX_STACK_LINE(337)
								Float tmp83 = q0->y;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(337)
								Float tmp84 = (qy * t);		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(337)
								Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(337)
								g2y = tmp85;
							}
							HX_STACK_LINE(337)
							Float tmp80;		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
								HX_STACK_LINE(337)
								Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									Float tmp81 = (f1x - q0->x);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(337)
									dx = tmp81;
									HX_STACK_LINE(337)
									Float tmp82 = (f1y - q0->y);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(337)
									dy = tmp82;
								}
								HX_STACK_LINE(337)
								Float tmp81 = (dx * dx);		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(337)
								Float tmp82 = (dy * dy);		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(337)
								tmp80 = (tmp81 + tmp82);
							}
							HX_STACK_LINE(337)
							Float d1 = tmp80;		HX_STACK_VAR(d1,"d1");
							HX_STACK_LINE(337)
							Float tmp81;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
								HX_STACK_LINE(337)
								Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									Float tmp82 = (f2x - q11->x);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(337)
									dx = tmp82;
									HX_STACK_LINE(337)
									Float tmp83 = (f2y - q11->y);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(337)
									dy = tmp83;
								}
								HX_STACK_LINE(337)
								Float tmp82 = (dx * dx);		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(337)
								Float tmp83 = (dy * dy);		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(337)
								tmp81 = (tmp82 + tmp83);
							}
							HX_STACK_LINE(337)
							Float d2 = tmp81;		HX_STACK_VAR(d2,"d2");
							HX_STACK_LINE(337)
							Float tmp82;		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
								HX_STACK_LINE(337)
								Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									Float tmp83 = (g1x - v0->x);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(337)
									dx = tmp83;
									HX_STACK_LINE(337)
									Float tmp84 = (g1y - v0->y);		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(337)
									dy = tmp84;
								}
								HX_STACK_LINE(337)
								Float tmp83 = (dx * dx);		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(337)
								Float tmp84 = (dy * dy);		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(337)
								tmp82 = (tmp83 + tmp84);
							}
							HX_STACK_LINE(337)
							Float e1 = tmp82;		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(337)
							Float tmp83;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
								HX_STACK_LINE(337)
								Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									Float tmp84 = (g2x - v1->x);		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(337)
									dx = tmp84;
									HX_STACK_LINE(337)
									Float tmp85 = (g2y - v1->y);		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(337)
									dy = tmp85;
								}
								HX_STACK_LINE(337)
								Float tmp84 = (dx * dx);		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(337)
								Float tmp85 = (dy * dy);		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(337)
								tmp83 = (tmp84 + tmp85);
							}
							HX_STACK_LINE(337)
							Float e2 = tmp83;		HX_STACK_VAR(e2,"e2");
							HX_STACK_LINE(337)
							Float minfx = ((Float)0.0);		HX_STACK_VAR(minfx,"minfx");
							HX_STACK_LINE(337)
							Float minfy = ((Float)0.0);		HX_STACK_VAR(minfy,"minfy");
							HX_STACK_LINE(337)
							::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
							HX_STACK_LINE(337)
							bool tmp84 = (d1 < d2);		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(337)
							if ((tmp84)){
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									minfx = f1x;
									HX_STACK_LINE(337)
									minfy = f1y;
									HX_STACK_LINE(337)
									{
									}
								}
								HX_STACK_LINE(337)
								minq = q0;
							}
							else{
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									minfx = f2x;
									HX_STACK_LINE(337)
									minfy = f2y;
									HX_STACK_LINE(337)
									{
									}
								}
								HX_STACK_LINE(337)
								minq = q11;
								HX_STACK_LINE(337)
								d1 = d2;
							}
							HX_STACK_LINE(337)
							Float mingx = ((Float)0.0);		HX_STACK_VAR(mingx,"mingx");
							HX_STACK_LINE(337)
							Float mingy = ((Float)0.0);		HX_STACK_VAR(mingy,"mingy");
							HX_STACK_LINE(337)
							::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
							HX_STACK_LINE(337)
							bool tmp85 = (e1 < e2);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(337)
							if ((tmp85)){
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									mingx = g1x;
									HX_STACK_LINE(337)
									mingy = g1y;
									HX_STACK_LINE(337)
									{
									}
								}
								HX_STACK_LINE(337)
								minv = v0;
							}
							else{
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									mingx = g2x;
									HX_STACK_LINE(337)
									mingy = g2y;
									HX_STACK_LINE(337)
									{
									}
								}
								HX_STACK_LINE(337)
								minv = v1;
								HX_STACK_LINE(337)
								e1 = e2;
							}
							HX_STACK_LINE(337)
							bool tmp86 = (d1 < e1);		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(337)
							if ((tmp86)){
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									w1->x = minfx;
									HX_STACK_LINE(337)
									w1->y = minfy;
									HX_STACK_LINE(337)
									{
									}
								}
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									w2->x = minq->x;
									HX_STACK_LINE(337)
									w2->y = minq->y;
									HX_STACK_LINE(337)
									{
									}
								}
								HX_STACK_LINE(337)
								Float tmp87 = d1;		HX_STACK_VAR(tmp87,"tmp87");
								HX_STACK_LINE(337)
								Float tmp88 = ::Math_obj::sqrt(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(337)
								best = tmp88;
							}
							else{
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									w2->x = mingx;
									HX_STACK_LINE(337)
									w2->y = mingy;
									HX_STACK_LINE(337)
									{
									}
								}
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									w1->x = minv->x;
									HX_STACK_LINE(337)
									w1->y = minv->y;
									HX_STACK_LINE(337)
									{
									}
								}
								HX_STACK_LINE(337)
								Float tmp87 = e1;		HX_STACK_VAR(tmp87,"tmp87");
								HX_STACK_LINE(337)
								Float tmp88 = ::Math_obj::sqrt(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(337)
								best = tmp88;
							}
							HX_STACK_LINE(337)
							bool tmp87 = (best != (int)0);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(337)
							if ((tmp87)){
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									Float tmp88 = (w2->x - w1->x);		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(337)
									tmp8->x = tmp88;
									HX_STACK_LINE(337)
									Float tmp89 = (w2->y - w1->y);		HX_STACK_VAR(tmp89,"tmp89");
									HX_STACK_LINE(337)
									tmp8->y = tmp89;
								}
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									Float tmp88 = (Float(((Float)1.0)) / Float(best));		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(337)
									Float t = tmp88;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(337)
									hx::MultEq(tmp8->x,t);
									HX_STACK_LINE(337)
									hx::MultEq(tmp8->y,t);
								}
								HX_STACK_LINE(337)
								bool tmp88 = swapped;		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(337)
								if ((tmp88)){
									HX_STACK_LINE(337)
									Float tmp89 = tmp8->x;		HX_STACK_VAR(tmp89,"tmp89");
									HX_STACK_LINE(337)
									Float tmp90 = -(tmp89);		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(337)
									tmp8->x = tmp90;
									HX_STACK_LINE(337)
									Float tmp91 = tmp8->y;		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(337)
									Float tmp92 = -(tmp91);		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(337)
									tmp8->y = tmp92;
								}
							}
							HX_STACK_LINE(337)
							tmp9 = best;
						}
						else{
							HX_STACK_LINE(337)
							Float c0x = ((Float)0.0);		HX_STACK_VAR(c0x,"c0x");
							HX_STACK_LINE(337)
							Float c0y = ((Float)0.0);		HX_STACK_VAR(c0y,"c0y");
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								Float tmp28 = ay->gp0->x;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(337)
								c0x = tmp28;
								HX_STACK_LINE(337)
								Float tmp29 = ay->gp0->y;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(337)
								c0y = tmp29;
								HX_STACK_LINE(337)
								{
								}
							}
							HX_STACK_LINE(337)
							Float c1x = ((Float)0.0);		HX_STACK_VAR(c1x,"c1x");
							HX_STACK_LINE(337)
							Float c1y = ((Float)0.0);		HX_STACK_VAR(c1y,"c1y");
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								Float tmp28 = ay->gp1->x;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(337)
								c1x = tmp28;
								HX_STACK_LINE(337)
								Float tmp29 = ay->gp1->y;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(337)
								c1y = tmp29;
								HX_STACK_LINE(337)
								{
								}
							}
							HX_STACK_LINE(337)
							Float dvx = ((Float)0.0);		HX_STACK_VAR(dvx,"dvx");
							HX_STACK_LINE(337)
							Float dvy = ((Float)0.0);		HX_STACK_VAR(dvy,"dvy");
							HX_STACK_LINE(337)
							{
								HX_STACK_LINE(337)
								Float tmp28 = (c1x - c0x);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(337)
								dvx = tmp28;
								HX_STACK_LINE(337)
								Float tmp29 = (c1y - c0y);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(337)
								dvy = tmp29;
							}
							HX_STACK_LINE(337)
							Float tmp28 = (ax->gnormy * c0x);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(337)
							Float tmp29 = (ax->gnormx * c0y);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(337)
							Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(337)
							Float d0 = tmp30;		HX_STACK_VAR(d0,"d0");
							HX_STACK_LINE(337)
							Float tmp31 = (ax->gnormy * c1x);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(337)
							Float tmp32 = (ax->gnormx * c1y);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(337)
							Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(337)
							Float d1 = tmp33;		HX_STACK_VAR(d1,"d1");
							HX_STACK_LINE(337)
							Float tmp34 = (d1 - d0);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(337)
							Float tmp35 = (Float((int)1) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(337)
							Float den = tmp35;		HX_STACK_VAR(den,"den");
							HX_STACK_LINE(337)
							Float tmp36 = ax->tp1;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(337)
							Float tmp37 = -(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(337)
							Float tmp38 = d0;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(337)
							Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(337)
							Float tmp40 = den;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(337)
							Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(337)
							Float t = tmp41;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(337)
							Float tmp42 = t;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(337)
							Float tmp43 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(337)
							bool tmp44 = (tmp42 > tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(337)
							if ((tmp44)){
								HX_STACK_LINE(337)
								Float t1 = t;		HX_STACK_VAR(t1,"t1");
								HX_STACK_LINE(337)
								Float tmp45 = (dvx * t1);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(337)
								hx::AddEq(c0x,tmp45);
								HX_STACK_LINE(337)
								Float tmp46 = (dvy * t1);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(337)
								hx::AddEq(c0y,tmp46);
							}
							HX_STACK_LINE(337)
							Float tmp45 = ax->tp0;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(337)
							Float tmp46 = -(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(337)
							Float tmp47 = d1;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(337)
							Float tmp48 = (tmp46 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(337)
							Float tmp49 = den;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(337)
							Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(337)
							Float t1 = tmp50;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(337)
							Float tmp51 = t1;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(337)
							Float tmp52 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(337)
							Float tmp53 = -(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(337)
							bool tmp54 = (tmp51 < tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(337)
							if ((tmp54)){
								HX_STACK_LINE(337)
								Float t2 = t1;		HX_STACK_VAR(t2,"t2");
								HX_STACK_LINE(337)
								Float tmp55 = (dvx * t2);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(337)
								hx::AddEq(c1x,tmp55);
								HX_STACK_LINE(337)
								Float tmp56 = (dvy * t2);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(337)
								hx::AddEq(c1y,tmp56);
							}
							HX_STACK_LINE(337)
							Float tmp55 = (c0x * ax->gnormx);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(337)
							Float tmp56 = (c0y * ax->gnormy);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(337)
							Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(337)
							Float tmp58 = ax->gprojection;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(337)
							Float tmp59 = (tmp57 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(337)
							Float c0d = tmp59;		HX_STACK_VAR(c0d,"c0d");
							HX_STACK_LINE(337)
							Float tmp60 = (c1x * ax->gnormx);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(337)
							Float tmp61 = (c1y * ax->gnormy);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(337)
							Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(337)
							Float tmp63 = ax->gprojection;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(337)
							Float tmp64 = (tmp62 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(337)
							Float c1d = tmp64;		HX_STACK_VAR(c1d,"c1d");
							HX_STACK_LINE(337)
							bool tmp65 = (c0d < c1d);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(337)
							if ((tmp65)){
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									w2->x = c0x;
									HX_STACK_LINE(337)
									w2->y = c0y;
									HX_STACK_LINE(337)
									{
									}
								}
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									Float tmp66 = c0d;		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(337)
									Float tmp67 = -(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(337)
									Float t2 = tmp67;		HX_STACK_VAR(t2,"t2");
									HX_STACK_LINE(337)
									Float tmp68 = w2->x;		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(337)
									Float tmp69 = (ax->gnormx * t2);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(337)
									Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(337)
									w1->x = tmp70;
									HX_STACK_LINE(337)
									Float tmp71 = w2->y;		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(337)
									Float tmp72 = (ax->gnormy * t2);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(337)
									Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(337)
									w1->y = tmp73;
								}
								HX_STACK_LINE(337)
								tmp9 = c0d;
							}
							else{
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									w2->x = c1x;
									HX_STACK_LINE(337)
									w2->y = c1y;
									HX_STACK_LINE(337)
									{
									}
								}
								HX_STACK_LINE(337)
								{
									HX_STACK_LINE(337)
									Float tmp66 = c1d;		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(337)
									Float tmp67 = -(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(337)
									Float t2 = tmp67;		HX_STACK_VAR(t2,"t2");
									HX_STACK_LINE(337)
									Float tmp68 = w2->x;		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(337)
									Float tmp69 = (ax->gnormx * t2);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(337)
									Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(337)
									w1->x = tmp70;
									HX_STACK_LINE(337)
									Float tmp71 = w2->y;		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(337)
									Float tmp72 = (ax->gnormy * t2);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(337)
									Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(337)
									w1->y = tmp73;
								}
								HX_STACK_LINE(337)
								tmp9 = c1d;
							}
						}
					}
					else{
						HX_STACK_LINE(337)
						tmp9 = ((Float)1e100);
					}
				}
				else{
					HX_STACK_LINE(337)
					tmp9 = ((Float)1e100);
				}
			}
		}
	}
	HX_STACK_LINE(337)
	Float ret = tmp9;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(338)
	{
		HX_STACK_LINE(339)
		::zpp_nape::geom::ZPP_Vec2 o = tmp8;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(348)
		{
			HX_STACK_LINE(348)
			bool tmp10 = (o->outer != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(348)
			if ((tmp10)){
				HX_STACK_LINE(348)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(348)
				o->outer = null();
			}
			HX_STACK_LINE(348)
			o->_isimmutable = null();
			HX_STACK_LINE(348)
			o->_validate = null();
			HX_STACK_LINE(348)
			o->_invalidate = null();
		}
		HX_STACK_LINE(349)
		::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(349)
		o->next = tmp10;
		HX_STACK_LINE(350)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(355)
	Float tmp10 = ret;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(355)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Geom_obj,distance,return )

bool Geom_obj::intersectsBody( ::nape::phys::Body body1,::nape::phys::Body body2){
	HX_STACK_FRAME("nape.geom.Geom","intersectsBody",0x4ce4c65c,"nape.geom.Geom.intersectsBody","nape/geom/Geom.hx",370,0xa217fc96)
	HX_STACK_ARG(body1,"body1")
	HX_STACK_ARG(body2,"body2")
	HX_STACK_LINE(372)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(372)
	{
		HX_STACK_LINE(372)
		::nape::shape::ShapeList tmp1 = body1->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(372)
		::nape::shape::ShapeList tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(372)
		::nape::shape::ShapeList _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(372)
		{
			HX_STACK_LINE(372)
			::zpp_nape::util::ZNPList_ZPP_Shape tmp3 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(372)
			::zpp_nape::util::ZNPList_ZPP_Shape tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(372)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp5 = tmp4->head;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(372)
			tmp = (tmp5 == null());
		}
	}
	HX_STACK_LINE(372)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(372)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(372)
	if ((tmp1)){
		HX_STACK_LINE(372)
		::nape::shape::ShapeList tmp3 = body2->zpp_inner->wrap_shapes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(372)
		::nape::shape::ShapeList tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(372)
		::nape::shape::ShapeList _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(372)
		{
			HX_STACK_LINE(372)
			::zpp_nape::util::ZNPList_ZPP_Shape tmp5 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(372)
			::zpp_nape::util::ZNPList_ZPP_Shape tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(372)
			::zpp_nape::util::ZNPNode_ZPP_Shape tmp7 = tmp6->head;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(372)
			tmp2 = (tmp7 == null());
		}
	}
	else{
		HX_STACK_LINE(372)
		tmp2 = true;
	}
	HX_STACK_LINE(372)
	if ((tmp2)){
		HX_STACK_LINE(372)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Bodies must have shapes to test for intersection.","\x8a","\x35","\xfe","\x55"));
	}
	HX_STACK_LINE(374)
	{
		HX_STACK_LINE(375)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp3 = body1->zpp_inner->shapes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(375)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp3->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(376)
		while((true)){
			HX_STACK_LINE(376)
			bool tmp4 = (cx_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(376)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(376)
			if ((tmp5)){
				HX_STACK_LINE(376)
				break;
			}
			HX_STACK_LINE(377)
			::zpp_nape::shape::ZPP_Shape i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(378)
			::zpp_nape::shape::ZPP_Shape tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(378)
			::zpp_nape::geom::ZPP_Geom_obj::validateShape(tmp6);
			HX_STACK_LINE(379)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(382)
	{
		HX_STACK_LINE(383)
		::zpp_nape::util::ZNPList_ZPP_Shape tmp3 = body2->zpp_inner->shapes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(383)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp3->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(384)
		while((true)){
			HX_STACK_LINE(384)
			bool tmp4 = (cx_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(384)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(384)
			if ((tmp5)){
				HX_STACK_LINE(384)
				break;
			}
			HX_STACK_LINE(385)
			::zpp_nape::shape::ZPP_Shape i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(386)
			::zpp_nape::shape::ZPP_Shape tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(386)
			::zpp_nape::geom::ZPP_Geom_obj::validateShape(tmp6);
			HX_STACK_LINE(387)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(390)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(390)
	{
		HX_STACK_LINE(390)
		::zpp_nape::geom::ZPP_AABB tmp4 = body1->zpp_inner->aabb;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(390)
		::zpp_nape::geom::ZPP_AABB _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(390)
		::zpp_nape::geom::ZPP_AABB tmp5 = body2->zpp_inner->aabb;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(390)
		::zpp_nape::geom::ZPP_AABB x = tmp5;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(390)
		bool tmp6 = (x->miny <= _this->maxy);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(390)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(390)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(390)
		if ((tmp7)){
			HX_STACK_LINE(390)
			tmp8 = (_this->miny <= x->maxy);
		}
		else{
			HX_STACK_LINE(390)
			tmp8 = false;
		}
		HX_STACK_LINE(390)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(390)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(390)
		if ((tmp9)){
			HX_STACK_LINE(390)
			tmp10 = (x->minx <= _this->maxx);
		}
		else{
			HX_STACK_LINE(390)
			tmp10 = false;
		}
		HX_STACK_LINE(390)
		if ((tmp10)){
			HX_STACK_LINE(390)
			tmp3 = (_this->minx <= x->maxx);
		}
		else{
			HX_STACK_LINE(390)
			tmp3 = false;
		}
	}
	HX_STACK_LINE(390)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(390)
	if ((tmp4)){
		HX_STACK_LINE(391)
		return false;
	}
	else{
		HX_STACK_LINE(394)
		{
			HX_STACK_LINE(395)
			::zpp_nape::util::ZNPList_ZPP_Shape tmp5 = body1->zpp_inner->shapes;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(395)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp5->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(396)
			while((true)){
				HX_STACK_LINE(396)
				bool tmp6 = (cx_ite != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(396)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(396)
				if ((tmp7)){
					HX_STACK_LINE(396)
					break;
				}
				HX_STACK_LINE(397)
				::zpp_nape::shape::ZPP_Shape s1 = cx_ite->elt;		HX_STACK_VAR(s1,"s1");
				HX_STACK_LINE(399)
				{
					HX_STACK_LINE(400)
					::zpp_nape::util::ZNPList_ZPP_Shape tmp8 = body2->zpp_inner->shapes;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(400)
					::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite1 = tmp8->head;		HX_STACK_VAR(cx_ite1,"cx_ite1");
					HX_STACK_LINE(401)
					while((true)){
						HX_STACK_LINE(401)
						bool tmp9 = (cx_ite1 != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(401)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(401)
						if ((tmp10)){
							HX_STACK_LINE(401)
							break;
						}
						HX_STACK_LINE(402)
						::zpp_nape::shape::ZPP_Shape s2 = cx_ite1->elt;		HX_STACK_VAR(s2,"s2");
						HX_STACK_LINE(403)
						{
							HX_STACK_LINE(404)
							::zpp_nape::shape::ZPP_Shape tmp11 = s1;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(404)
							::zpp_nape::shape::ZPP_Shape tmp12 = s2;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(404)
							bool tmp13 = ::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(404)
							if ((tmp13)){
								HX_STACK_LINE(405)
								return true;
							}
						}
						HX_STACK_LINE(408)
						cx_ite1 = cx_ite1->next;
					}
				}
				HX_STACK_LINE(412)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(415)
		return false;
	}
	HX_STACK_LINE(390)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Geom_obj,intersectsBody,return )

bool Geom_obj::intersects( ::nape::shape::Shape shape1,::nape::shape::Shape shape2){
	HX_STACK_FRAME("nape.geom.Geom","intersects",0x398dca9a,"nape.geom.Geom.intersects","nape/geom/Geom.hx",435,0xa217fc96)
	HX_STACK_ARG(shape1,"shape1")
	HX_STACK_ARG(shape2,"shape2")
	HX_STACK_LINE(437)
	::zpp_nape::phys::ZPP_Body tmp = shape1->zpp_inner->body;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(437)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(437)
	::nape::phys::Body tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(437)
	if ((tmp1)){
		HX_STACK_LINE(437)
		::zpp_nape::phys::ZPP_Body tmp3 = shape1->zpp_inner->body;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(437)
		tmp2 = tmp3->outer;
	}
	else{
		HX_STACK_LINE(437)
		tmp2 = null();
	}
	HX_STACK_LINE(437)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(437)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(437)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(437)
	if ((tmp4)){
		HX_STACK_LINE(437)
		::zpp_nape::phys::ZPP_Body tmp6 = shape2->zpp_inner->body;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(437)
		::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(437)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(437)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(437)
		::nape::phys::Body tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(437)
		bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(437)
		if ((tmp11)){
			HX_STACK_LINE(437)
			::zpp_nape::phys::ZPP_Body tmp12 = shape2->zpp_inner->body;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(437)
			::zpp_nape::phys::ZPP_Body tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(437)
			tmp10 = tmp13->outer;
		}
		else{
			HX_STACK_LINE(437)
			tmp10 = null();
		}
		HX_STACK_LINE(437)
		tmp5 = (tmp10 == null());
	}
	else{
		HX_STACK_LINE(437)
		tmp5 = true;
	}
	HX_STACK_LINE(437)
	if ((tmp5)){
		HX_STACK_LINE(437)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Shape must be part of a Body to calculate intersection","\xf8","\xcf","\x01","\x20"));
	}
	HX_STACK_LINE(439)
	::zpp_nape::shape::ZPP_Shape tmp6 = shape1->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(439)
	::zpp_nape::geom::ZPP_Geom_obj::validateShape(tmp6);
	HX_STACK_LINE(440)
	::zpp_nape::shape::ZPP_Shape tmp7 = shape2->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(440)
	::zpp_nape::geom::ZPP_Geom_obj::validateShape(tmp7);
	HX_STACK_LINE(441)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(441)
	{
		HX_STACK_LINE(441)
		::zpp_nape::geom::ZPP_AABB tmp9 = shape1->zpp_inner->aabb;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(441)
		::zpp_nape::geom::ZPP_AABB tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(441)
		::zpp_nape::geom::ZPP_AABB _this = tmp10;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(441)
		::zpp_nape::geom::ZPP_AABB tmp11 = shape2->zpp_inner->aabb;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(441)
		::zpp_nape::geom::ZPP_AABB tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(441)
		::zpp_nape::geom::ZPP_AABB x = tmp12;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(441)
		bool tmp13 = (x->miny <= _this->maxy);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(441)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(441)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(441)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(441)
		bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(441)
		if ((tmp17)){
			HX_STACK_LINE(441)
			bool tmp18 = (_this->miny <= x->maxy);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(441)
			tmp16 = tmp18;
		}
		else{
			HX_STACK_LINE(441)
			tmp16 = false;
		}
		HX_STACK_LINE(441)
		bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(441)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(441)
		bool tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(441)
		if ((tmp20)){
			HX_STACK_LINE(441)
			bool tmp21 = (x->minx <= _this->maxx);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(441)
			tmp19 = tmp21;
		}
		else{
			HX_STACK_LINE(441)
			tmp19 = false;
		}
		HX_STACK_LINE(441)
		bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(441)
		if ((tmp21)){
			HX_STACK_LINE(441)
			tmp8 = (_this->minx <= x->maxx);
		}
		else{
			HX_STACK_LINE(441)
			tmp8 = false;
		}
	}
	HX_STACK_LINE(441)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(441)
	if ((tmp8)){
		HX_STACK_LINE(441)
		::zpp_nape::shape::ZPP_Shape tmp10 = shape1->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(441)
		::zpp_nape::shape::ZPP_Shape tmp11 = shape2->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(441)
		::zpp_nape::shape::ZPP_Shape tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(441)
		::zpp_nape::shape::ZPP_Shape tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(441)
		tmp9 = ::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(tmp12,tmp13);
	}
	else{
		HX_STACK_LINE(441)
		tmp9 = false;
	}
	HX_STACK_LINE(441)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Geom_obj,intersects,return )

bool Geom_obj::contains( ::nape::shape::Shape shape1,::nape::shape::Shape shape2){
	HX_STACK_FRAME("nape.geom.Geom","contains",0xf6037c85,"nape.geom.Geom.contains","nape/geom/Geom.hx",456,0xa217fc96)
	HX_STACK_ARG(shape1,"shape1")
	HX_STACK_ARG(shape2,"shape2")
	HX_STACK_LINE(458)
	::zpp_nape::phys::ZPP_Body tmp = shape1->zpp_inner->body;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(458)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(458)
	::nape::phys::Body tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(458)
	if ((tmp1)){
		HX_STACK_LINE(458)
		::zpp_nape::phys::ZPP_Body tmp3 = shape1->zpp_inner->body;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(458)
		tmp2 = tmp3->outer;
	}
	else{
		HX_STACK_LINE(458)
		tmp2 = null();
	}
	HX_STACK_LINE(458)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(458)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(458)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(458)
	if ((tmp4)){
		HX_STACK_LINE(458)
		::zpp_nape::phys::ZPP_Body tmp6 = shape2->zpp_inner->body;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(458)
		::zpp_nape::phys::ZPP_Body tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(458)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(458)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(458)
		::nape::phys::Body tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(458)
		bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(458)
		if ((tmp11)){
			HX_STACK_LINE(458)
			::zpp_nape::phys::ZPP_Body tmp12 = shape2->zpp_inner->body;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(458)
			::zpp_nape::phys::ZPP_Body tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(458)
			tmp10 = tmp13->outer;
		}
		else{
			HX_STACK_LINE(458)
			tmp10 = null();
		}
		HX_STACK_LINE(458)
		tmp5 = (tmp10 == null());
	}
	else{
		HX_STACK_LINE(458)
		tmp5 = true;
	}
	HX_STACK_LINE(458)
	if ((tmp5)){
		HX_STACK_LINE(458)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Shape must be part of a Body to calculate containment","\xa3","\x9c","\xfd","\x27"));
	}
	HX_STACK_LINE(460)
	::zpp_nape::shape::ZPP_Shape tmp6 = shape1->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(460)
	::zpp_nape::geom::ZPP_Geom_obj::validateShape(tmp6);
	HX_STACK_LINE(461)
	::zpp_nape::shape::ZPP_Shape tmp7 = shape2->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(461)
	::zpp_nape::geom::ZPP_Geom_obj::validateShape(tmp7);
	HX_STACK_LINE(462)
	::zpp_nape::shape::ZPP_Shape tmp8 = shape1->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(462)
	::zpp_nape::shape::ZPP_Shape tmp9 = shape2->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(462)
	bool tmp10 = ::zpp_nape::geom::ZPP_Collide_obj::containTest(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(462)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Geom_obj,contains,return )


Geom_obj::Geom_obj()
{
}

bool Geom_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"contains") ) { outValue = contains_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"intersects") ) { outValue = intersects_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"distanceBody") ) { outValue = distanceBody_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"intersectsBody") ) { outValue = intersectsBody_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Geom_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Geom_obj::__mClass,"__mClass");
};

#endif

hx::Class Geom_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("distanceBody","\x77","\x78","\xf0","\xf3"),
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	HX_HCSTRING("intersectsBody","\x76","\xd3","\x09","\x42"),
	HX_HCSTRING("intersects","\xb4","\xc2","\xeb","\xe3"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	::String(null()) };

void Geom_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.geom.Geom","\xc8","\x22","\xb2","\xf5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Geom_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Geom_obj >;
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

} // end namespace nape
} // end namespace geom
