#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#include <nape/dynamics/CollisionArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_Contact
#include <nape/dynamics/Contact.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactList
#include <nape/dynamics/ContactList.h>
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
#ifndef INCLUDED_nape_shape_Edge
#include <nape/shape/Edge.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec3
#include <zpp_nape/geom/ZPP_Vec3.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace dynamics{

Void CollisionArbiter_obj::__construct()
{
HX_STACK_FRAME("nape.dynamics.CollisionArbiter","new",0xd8a0cabd,"nape.dynamics.CollisionArbiter.new","nape/dynamics/CollisionArbiter.hx",728,0xb8178f73)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(730)
	bool tmp = ::zpp_nape::dynamics::ZPP_Arbiter_obj::internal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(730)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(730)
	if ((tmp1)){
		HX_STACK_LINE(730)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot instantiate CollisionArbiter derp!","\x1e","\x50","\xdf","\xec"));
	}
	HX_STACK_LINE(732)
	super::__construct();
}
;
	return null();
}

//CollisionArbiter_obj::~CollisionArbiter_obj() { }

Dynamic CollisionArbiter_obj::__CreateEmpty() { return  new CollisionArbiter_obj; }
hx::ObjectPtr< CollisionArbiter_obj > CollisionArbiter_obj::__new()
{  hx::ObjectPtr< CollisionArbiter_obj > _result_ = new CollisionArbiter_obj();
	_result_->__construct();
	return _result_;}

Dynamic CollisionArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CollisionArbiter_obj > _result_ = new CollisionArbiter_obj();
	_result_->__construct();
	return _result_;}

::nape::dynamics::ContactList CollisionArbiter_obj::get_contacts( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_contacts",0x33e1d7df,"nape.dynamics.CollisionArbiter.get_contacts","nape/dynamics/CollisionArbiter.hx",183,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(185)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(185)
	if ((tmp2)){
		HX_STACK_LINE(185)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
	}
	HX_STACK_LINE(187)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(187)
	::nape::dynamics::ContactList tmp4 = tmp3->colarb->wrap_contacts;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(187)
	bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(187)
	if ((tmp5)){
		HX_STACK_LINE(187)
		::zpp_nape::dynamics::ZPP_Arbiter tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(187)
		tmp6->colarb->setupcontacts();
	}
	HX_STACK_LINE(188)
	::zpp_nape::dynamics::ZPP_Arbiter tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(188)
	::nape::dynamics::ContactList tmp7 = tmp6->colarb->wrap_contacts;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(188)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_contacts,return )

::nape::geom::Vec2 CollisionArbiter_obj::get_normal( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_normal",0x34ea9d33,"nape.dynamics.CollisionArbiter.get_normal","nape/dynamics/CollisionArbiter.hx",199,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(201)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(201)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(201)
	if ((tmp2)){
		HX_STACK_LINE(201)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
	}
	HX_STACK_LINE(203)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(203)
	::nape::geom::Vec2 tmp4 = tmp3->colarb->wrap_normal;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(203)
	bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(203)
	if ((tmp5)){
		HX_STACK_LINE(203)
		::zpp_nape::dynamics::ZPP_Arbiter tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(203)
		tmp6->colarb->getnormal();
	}
	HX_STACK_LINE(204)
	::zpp_nape::dynamics::ZPP_Arbiter tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(204)
	::nape::geom::Vec2 tmp7 = tmp6->colarb->wrap_normal;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(204)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_normal,return )

Float CollisionArbiter_obj::get_radius( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_radius",0xb577fb5e,"nape.dynamics.CollisionArbiter.get_radius","nape/dynamics/CollisionArbiter.hx",213,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(215)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(215)
	if ((tmp2)){
		HX_STACK_LINE(215)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
	}
	HX_STACK_LINE(217)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(217)
	Float tmp4 = tmp3->colarb->radius;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(217)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_radius,return )

::nape::shape::Edge CollisionArbiter_obj::get_referenceEdge1( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_referenceEdge1",0x7f96cc95,"nape.dynamics.CollisionArbiter.get_referenceEdge1","nape/dynamics/CollisionArbiter.hx",225,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(227)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(227)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(227)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(227)
	if ((tmp2)){
		HX_STACK_LINE(227)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
	}
	HX_STACK_LINE(229)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(229)
	::zpp_nape::shape::ZPP_Edge tmp4 = tmp3->colarb->__ref_edge1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(229)
	::zpp_nape::shape::ZPP_Edge edge = tmp4;		HX_STACK_VAR(edge,"edge");
	HX_STACK_LINE(230)
	bool tmp5 = (edge != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(230)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(230)
	if ((tmp5)){
		HX_STACK_LINE(230)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(230)
		{
			HX_STACK_LINE(230)
			::nape::shape::Shape tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(230)
			{
				HX_STACK_LINE(230)
				::zpp_nape::dynamics::ZPP_Arbiter tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(230)
				::zpp_nape::dynamics::ZPP_Arbiter tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(230)
				bool tmp11 = tmp10->active;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(230)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(230)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(230)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(230)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(230)
				if ((tmp15)){
					HX_STACK_LINE(230)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
				}
				HX_STACK_LINE(230)
				::zpp_nape::dynamics::ZPP_Arbiter tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(230)
				::zpp_nape::dynamics::ZPP_Arbiter tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(230)
				int tmp18 = tmp17->ws1->id;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(230)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(230)
				::zpp_nape::dynamics::ZPP_Arbiter tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(230)
				::zpp_nape::dynamics::ZPP_Arbiter tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(230)
				int tmp22 = tmp21->ws2->id;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(230)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(230)
				bool tmp24 = (tmp19 > tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(230)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(230)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(230)
				if ((tmp26)){
					HX_STACK_LINE(230)
					::zpp_nape::dynamics::ZPP_Arbiter tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(230)
					::zpp_nape::dynamics::ZPP_Arbiter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(230)
					::nape::shape::Shape tmp29 = tmp28->ws2->outer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(230)
					tmp8 = tmp29;
				}
				else{
					HX_STACK_LINE(230)
					::zpp_nape::dynamics::ZPP_Arbiter tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(230)
					::zpp_nape::dynamics::ZPP_Arbiter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(230)
					::nape::shape::Shape tmp29 = tmp28->ws1->outer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(230)
					tmp8 = tmp29;
				}
			}
			HX_STACK_LINE(230)
			::nape::shape::Shape _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(230)
			int tmp9 = _this->zpp_inner->type;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(230)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(230)
			int tmp11 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(230)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(230)
			bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(230)
			tmp7 = tmp13;
		}
		HX_STACK_LINE(230)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(230)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(230)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(230)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(230)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(230)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(230)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(230)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(230)
		if ((tmp15)){
			HX_STACK_LINE(230)
			::nape::shape::Shape tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(230)
			{
				HX_STACK_LINE(230)
				::zpp_nape::dynamics::ZPP_Arbiter tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(230)
				::zpp_nape::dynamics::ZPP_Arbiter tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(230)
				::zpp_nape::dynamics::ZPP_Arbiter tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(230)
				bool tmp20 = tmp19->active;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(230)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(230)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(230)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(230)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(230)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(230)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(230)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(230)
				if ((tmp27)){
					HX_STACK_LINE(230)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
				}
				HX_STACK_LINE(230)
				::zpp_nape::dynamics::ZPP_Arbiter tmp28 = this->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(230)
				::zpp_nape::dynamics::ZPP_Arbiter tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(230)
				::zpp_nape::dynamics::ZPP_Arbiter tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(230)
				int tmp31 = tmp30->ws1->id;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(230)
				int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(230)
				int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(230)
				::zpp_nape::dynamics::ZPP_Arbiter tmp34 = this->zpp_inner;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(230)
				::zpp_nape::dynamics::ZPP_Arbiter tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(230)
				::zpp_nape::dynamics::ZPP_Arbiter tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(230)
				int tmp37 = tmp36->ws2->id;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(230)
				int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(230)
				int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(230)
				bool tmp40 = (tmp33 > tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(230)
				bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(230)
				bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(230)
				bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(230)
				bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(230)
				if ((tmp44)){
					HX_STACK_LINE(230)
					::zpp_nape::dynamics::ZPP_Arbiter tmp45 = this->zpp_inner;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(230)
					::zpp_nape::dynamics::ZPP_Arbiter tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(230)
					::zpp_nape::dynamics::ZPP_Arbiter tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(230)
					::nape::shape::Shape tmp48 = tmp47->ws2->outer;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(230)
					::nape::shape::Shape tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(230)
					tmp16 = tmp49;
				}
				else{
					HX_STACK_LINE(230)
					::zpp_nape::dynamics::ZPP_Arbiter tmp45 = this->zpp_inner;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(230)
					::zpp_nape::dynamics::ZPP_Arbiter tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(230)
					::zpp_nape::dynamics::ZPP_Arbiter tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(230)
					::nape::shape::Shape tmp48 = tmp47->ws1->outer;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(230)
					::nape::shape::Shape tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(230)
					tmp16 = tmp49;
				}
			}
			HX_STACK_LINE(230)
			::zpp_nape::shape::ZPP_Shape tmp17 = tmp16->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(230)
			::zpp_nape::shape::ZPP_Polygon tmp18 = edge->polygon;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(230)
			tmp6 = (tmp17 != tmp18);
		}
		else{
			HX_STACK_LINE(230)
			tmp6 = true;
		}
	}
	else{
		HX_STACK_LINE(230)
		tmp6 = false;
	}
	HX_STACK_LINE(230)
	if ((tmp6)){
		HX_STACK_LINE(230)
		::zpp_nape::dynamics::ZPP_Arbiter tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(230)
		::zpp_nape::shape::ZPP_Edge tmp8 = tmp7->colarb->__ref_edge2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(230)
		edge = tmp8;
	}
	HX_STACK_LINE(231)
	bool tmp7 = (edge == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(231)
	::nape::shape::Edge tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(231)
	if ((tmp7)){
		HX_STACK_LINE(231)
		tmp8 = null();
	}
	else{
		HX_STACK_LINE(231)
		tmp8 = edge->wrapper();
	}
	HX_STACK_LINE(231)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_referenceEdge1,return )

::nape::shape::Edge CollisionArbiter_obj::get_referenceEdge2( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_referenceEdge2",0x7f96cc96,"nape.dynamics.CollisionArbiter.get_referenceEdge2","nape/dynamics/CollisionArbiter.hx",239,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(241)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(241)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(241)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(241)
	if ((tmp2)){
		HX_STACK_LINE(241)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
	}
	HX_STACK_LINE(243)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(243)
	::zpp_nape::shape::ZPP_Edge tmp4 = tmp3->colarb->__ref_edge1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(243)
	::zpp_nape::shape::ZPP_Edge edge = tmp4;		HX_STACK_VAR(edge,"edge");
	HX_STACK_LINE(244)
	bool tmp5 = (edge != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(244)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(244)
	if ((tmp5)){
		HX_STACK_LINE(244)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(244)
		{
			HX_STACK_LINE(244)
			::nape::shape::Shape tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(244)
			{
				HX_STACK_LINE(244)
				::zpp_nape::dynamics::ZPP_Arbiter tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(244)
				::zpp_nape::dynamics::ZPP_Arbiter tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(244)
				bool tmp11 = tmp10->active;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(244)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(244)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(244)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(244)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(244)
				if ((tmp15)){
					HX_STACK_LINE(244)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
				}
				HX_STACK_LINE(244)
				::zpp_nape::dynamics::ZPP_Arbiter tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(244)
				::zpp_nape::dynamics::ZPP_Arbiter tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(244)
				int tmp18 = tmp17->ws1->id;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(244)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(244)
				::zpp_nape::dynamics::ZPP_Arbiter tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(244)
				::zpp_nape::dynamics::ZPP_Arbiter tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(244)
				int tmp22 = tmp21->ws2->id;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(244)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(244)
				bool tmp24 = (tmp19 > tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(244)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(244)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(244)
				if ((tmp26)){
					HX_STACK_LINE(244)
					::zpp_nape::dynamics::ZPP_Arbiter tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(244)
					::zpp_nape::dynamics::ZPP_Arbiter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(244)
					::nape::shape::Shape tmp29 = tmp28->ws1->outer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(244)
					tmp8 = tmp29;
				}
				else{
					HX_STACK_LINE(244)
					::zpp_nape::dynamics::ZPP_Arbiter tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(244)
					::zpp_nape::dynamics::ZPP_Arbiter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(244)
					::nape::shape::Shape tmp29 = tmp28->ws2->outer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(244)
					tmp8 = tmp29;
				}
			}
			HX_STACK_LINE(244)
			::nape::shape::Shape _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(244)
			int tmp9 = _this->zpp_inner->type;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(244)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(244)
			int tmp11 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(244)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(244)
			bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(244)
			tmp7 = tmp13;
		}
		HX_STACK_LINE(244)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(244)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(244)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(244)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(244)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(244)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(244)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(244)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(244)
		if ((tmp15)){
			HX_STACK_LINE(244)
			::nape::shape::Shape tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(244)
			{
				HX_STACK_LINE(244)
				::zpp_nape::dynamics::ZPP_Arbiter tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(244)
				::zpp_nape::dynamics::ZPP_Arbiter tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(244)
				::zpp_nape::dynamics::ZPP_Arbiter tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(244)
				bool tmp20 = tmp19->active;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(244)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(244)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(244)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(244)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(244)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(244)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(244)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(244)
				if ((tmp27)){
					HX_STACK_LINE(244)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
				}
				HX_STACK_LINE(244)
				::zpp_nape::dynamics::ZPP_Arbiter tmp28 = this->zpp_inner;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(244)
				::zpp_nape::dynamics::ZPP_Arbiter tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(244)
				::zpp_nape::dynamics::ZPP_Arbiter tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(244)
				int tmp31 = tmp30->ws1->id;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(244)
				int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(244)
				int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(244)
				::zpp_nape::dynamics::ZPP_Arbiter tmp34 = this->zpp_inner;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(244)
				::zpp_nape::dynamics::ZPP_Arbiter tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(244)
				::zpp_nape::dynamics::ZPP_Arbiter tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(244)
				int tmp37 = tmp36->ws2->id;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(244)
				int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(244)
				int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(244)
				bool tmp40 = (tmp33 > tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(244)
				bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(244)
				bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(244)
				bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(244)
				bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(244)
				if ((tmp44)){
					HX_STACK_LINE(244)
					::zpp_nape::dynamics::ZPP_Arbiter tmp45 = this->zpp_inner;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(244)
					::zpp_nape::dynamics::ZPP_Arbiter tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(244)
					::zpp_nape::dynamics::ZPP_Arbiter tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(244)
					::nape::shape::Shape tmp48 = tmp47->ws1->outer;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(244)
					::nape::shape::Shape tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(244)
					tmp16 = tmp49;
				}
				else{
					HX_STACK_LINE(244)
					::zpp_nape::dynamics::ZPP_Arbiter tmp45 = this->zpp_inner;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(244)
					::zpp_nape::dynamics::ZPP_Arbiter tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(244)
					::zpp_nape::dynamics::ZPP_Arbiter tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(244)
					::nape::shape::Shape tmp48 = tmp47->ws2->outer;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(244)
					::nape::shape::Shape tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(244)
					tmp16 = tmp49;
				}
			}
			HX_STACK_LINE(244)
			::zpp_nape::shape::ZPP_Shape tmp17 = tmp16->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(244)
			::zpp_nape::shape::ZPP_Polygon tmp18 = edge->polygon;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(244)
			tmp6 = (tmp17 != tmp18);
		}
		else{
			HX_STACK_LINE(244)
			tmp6 = true;
		}
	}
	else{
		HX_STACK_LINE(244)
		tmp6 = false;
	}
	HX_STACK_LINE(244)
	if ((tmp6)){
		HX_STACK_LINE(244)
		::zpp_nape::dynamics::ZPP_Arbiter tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(244)
		::zpp_nape::shape::ZPP_Edge tmp8 = tmp7->colarb->__ref_edge2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(244)
		edge = tmp8;
	}
	HX_STACK_LINE(245)
	bool tmp7 = (edge == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(245)
	::nape::shape::Edge tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(245)
	if ((tmp7)){
		HX_STACK_LINE(245)
		tmp8 = null();
	}
	else{
		HX_STACK_LINE(245)
		tmp8 = edge->wrapper();
	}
	HX_STACK_LINE(245)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_referenceEdge2,return )

bool CollisionArbiter_obj::firstVertex( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","firstVertex",0xec742b11,"nape.dynamics.CollisionArbiter.firstVertex","nape/dynamics/CollisionArbiter.hx",257,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(259)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(259)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(259)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(259)
	if ((tmp2)){
		HX_STACK_LINE(259)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
	}
	HX_STACK_LINE(261)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(261)
	::zpp_nape::shape::ZPP_Edge tmp4 = tmp3->colarb->__ref_edge1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(261)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(261)
	::zpp_nape::dynamics::ZPP_Arbiter tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(261)
	::zpp_nape::shape::ZPP_Edge tmp7 = tmp6->colarb->__ref_edge2;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(261)
	bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(261)
	bool tmp9 = (tmp5 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(261)
	bool poly2circle = tmp9;		HX_STACK_VAR(poly2circle,"poly2circle");
	HX_STACK_LINE(262)
	bool tmp10 = poly2circle;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(262)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(262)
	if ((tmp10)){
		HX_STACK_LINE(262)
		::zpp_nape::dynamics::ZPP_Arbiter tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(262)
		int tmp13 = tmp12->colarb->__ref_vertex;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(262)
		tmp11 = (tmp13 == (int)-1);
	}
	else{
		HX_STACK_LINE(262)
		tmp11 = false;
	}
	HX_STACK_LINE(262)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,firstVertex,return )

bool CollisionArbiter_obj::secondVertex( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","secondVertex",0x2e747ffb,"nape.dynamics.CollisionArbiter.secondVertex","nape/dynamics/CollisionArbiter.hx",276,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(278)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(278)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(278)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(278)
	if ((tmp2)){
		HX_STACK_LINE(278)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
	}
	HX_STACK_LINE(280)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(280)
	::zpp_nape::shape::ZPP_Edge tmp4 = tmp3->colarb->__ref_edge1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(280)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(280)
	::zpp_nape::dynamics::ZPP_Arbiter tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(280)
	::zpp_nape::shape::ZPP_Edge tmp7 = tmp6->colarb->__ref_edge2;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(280)
	bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(280)
	bool tmp9 = (tmp5 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(280)
	bool poly2circle = tmp9;		HX_STACK_VAR(poly2circle,"poly2circle");
	HX_STACK_LINE(281)
	bool tmp10 = poly2circle;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(281)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(281)
	if ((tmp10)){
		HX_STACK_LINE(281)
		::zpp_nape::dynamics::ZPP_Arbiter tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(281)
		int tmp13 = tmp12->colarb->__ref_vertex;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(281)
		tmp11 = (tmp13 == (int)1);
	}
	else{
		HX_STACK_LINE(281)
		tmp11 = false;
	}
	HX_STACK_LINE(281)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,secondVertex,return )

::nape::geom::Vec3 CollisionArbiter_obj::normalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","normalImpulse",0xbc1d19eb,"nape.dynamics.CollisionArbiter.normalImpulse","nape/dynamics/CollisionArbiter.hx",300,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(302)
		::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(302)
		bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(302)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(302)
		if ((tmp2)){
			HX_STACK_LINE(302)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
		}
		HX_STACK_LINE(305)
		bool tmp3 = (body != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(305)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(305)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(305)
		if ((tmp4)){
			HX_STACK_LINE(305)
			::nape::phys::Body tmp6 = body;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(305)
			::nape::phys::Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(305)
				::zpp_nape::dynamics::ZPP_Arbiter tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(305)
				::zpp_nape::dynamics::ZPP_Arbiter tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(305)
				::zpp_nape::dynamics::ZPP_Arbiter tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(305)
				bool tmp11 = tmp10->active;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(305)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(305)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(305)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(305)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(305)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(305)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(305)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(305)
				if ((tmp18)){
					HX_STACK_LINE(305)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
				}
				HX_STACK_LINE(305)
				::zpp_nape::dynamics::ZPP_Arbiter tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(305)
				::zpp_nape::dynamics::ZPP_Arbiter tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(305)
				::zpp_nape::dynamics::ZPP_Arbiter tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(305)
				int tmp22 = tmp21->ws1->id;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(305)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(305)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(305)
				::zpp_nape::dynamics::ZPP_Arbiter tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(305)
				::zpp_nape::dynamics::ZPP_Arbiter tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(305)
				::zpp_nape::dynamics::ZPP_Arbiter tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(305)
				int tmp28 = tmp27->ws2->id;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(305)
				int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(305)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(305)
				bool tmp31 = (tmp24 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(305)
				bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(305)
				bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(305)
				bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(305)
				bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(305)
				if ((tmp35)){
					HX_STACK_LINE(305)
					::zpp_nape::dynamics::ZPP_Arbiter tmp36 = this->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(305)
					::zpp_nape::dynamics::ZPP_Arbiter tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(305)
					::zpp_nape::dynamics::ZPP_Arbiter tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(305)
					::nape::phys::Body tmp39 = tmp38->b2->outer;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(305)
					::nape::phys::Body tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(305)
					tmp7 = tmp40;
				}
				else{
					HX_STACK_LINE(305)
					::zpp_nape::dynamics::ZPP_Arbiter tmp36 = this->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(305)
					::zpp_nape::dynamics::ZPP_Arbiter tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(305)
					::zpp_nape::dynamics::ZPP_Arbiter tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(305)
					::nape::phys::Body tmp39 = tmp38->b1->outer;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(305)
					::nape::phys::Body tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(305)
					tmp7 = tmp40;
				}
			}
			HX_STACK_LINE(305)
			tmp5 = (tmp6 != tmp7);
		}
		else{
			HX_STACK_LINE(305)
			tmp5 = false;
		}
		HX_STACK_LINE(305)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(305)
		if ((tmp5)){
			HX_STACK_LINE(305)
			::nape::phys::Body tmp7 = body;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(305)
			::nape::phys::Body tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(305)
				::zpp_nape::dynamics::ZPP_Arbiter tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(305)
				::zpp_nape::dynamics::ZPP_Arbiter tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(305)
				bool tmp11 = tmp10->active;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(305)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(305)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(305)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(305)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(305)
				if ((tmp15)){
					HX_STACK_LINE(305)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
				}
				HX_STACK_LINE(305)
				::zpp_nape::dynamics::ZPP_Arbiter tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(305)
				::zpp_nape::dynamics::ZPP_Arbiter tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(305)
				int tmp18 = tmp17->ws1->id;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(305)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(305)
				::zpp_nape::dynamics::ZPP_Arbiter tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(305)
				::zpp_nape::dynamics::ZPP_Arbiter tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(305)
				int tmp22 = tmp21->ws2->id;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(305)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(305)
				bool tmp24 = (tmp19 > tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(305)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(305)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(305)
				if ((tmp26)){
					HX_STACK_LINE(305)
					::zpp_nape::dynamics::ZPP_Arbiter tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(305)
					::zpp_nape::dynamics::ZPP_Arbiter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(305)
					::nape::phys::Body tmp29 = tmp28->b1->outer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(305)
					tmp8 = tmp29;
				}
				else{
					HX_STACK_LINE(305)
					::zpp_nape::dynamics::ZPP_Arbiter tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(305)
					::zpp_nape::dynamics::ZPP_Arbiter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(305)
					::nape::phys::Body tmp29 = tmp28->b2->outer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(305)
					tmp8 = tmp29;
				}
			}
			HX_STACK_LINE(305)
			tmp6 = (tmp7 != tmp8);
		}
		else{
			HX_STACK_LINE(305)
			tmp6 = false;
		}
		HX_STACK_LINE(305)
		if ((tmp6)){
			HX_STACK_LINE(305)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter does not relate to body","\x2f","\xf6","\x45","\x99"));
		}
		HX_STACK_LINE(307)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(308)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(325)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(326)
		::zpp_nape::dynamics::ZPP_Arbiter tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(326)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp7->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(327)
		{
			HX_STACK_LINE(328)
			bool tmp8 = freshOnly;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(328)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(328)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(328)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(328)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(328)
			if ((tmp11)){
				HX_STACK_LINE(328)
				tmp12 = colarb->oc1->fresh;
			}
			else{
				HX_STACK_LINE(328)
				tmp12 = true;
			}
			HX_STACK_LINE(328)
			if ((tmp12)){
				HX_STACK_LINE(329)
				::nape::dynamics::Contact tmp13 = colarb->oc1->wrapper();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(329)
				::nape::phys::Body tmp14 = body;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(329)
				::nape::geom::Vec3 tmp15 = tmp13->normalImpulse(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(329)
				::nape::geom::Vec3 imp = tmp15;		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(330)
				{
					HX_STACK_LINE(331)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(332)
					{
						HX_STACK_LINE(333)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(342)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(342)
						{
							HX_STACK_LINE(342)
							{
								HX_STACK_LINE(342)
								bool tmp17 = (imp != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(342)
								bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(342)
								if ((tmp17)){
									HX_STACK_LINE(342)
									tmp18 = imp->zpp_disp;
								}
								else{
									HX_STACK_LINE(342)
									tmp18 = false;
								}
								HX_STACK_LINE(342)
								if ((tmp18)){
									HX_STACK_LINE(342)
									::String tmp19 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(342)
									::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(342)
									HX_STACK_DO_THROW(tmp20);
								}
							}
							HX_STACK_LINE(342)
							{
								HX_STACK_LINE(342)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(342)
								bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(342)
								if ((tmp17)){
									HX_STACK_LINE(342)
									_this->_validate();
								}
							}
							HX_STACK_LINE(342)
							tmp16 = imp->zpp_inner->x;
						}
						HX_STACK_LINE(342)
						int tmp17 = t1;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(342)
						Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(342)
						hx::AddEq(retx,tmp18);
						HX_STACK_LINE(343)
						Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(343)
						{
							HX_STACK_LINE(343)
							{
								HX_STACK_LINE(343)
								bool tmp20 = (imp != null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(343)
								bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(343)
								if ((tmp20)){
									HX_STACK_LINE(343)
									tmp21 = imp->zpp_disp;
								}
								else{
									HX_STACK_LINE(343)
									tmp21 = false;
								}
								HX_STACK_LINE(343)
								if ((tmp21)){
									HX_STACK_LINE(343)
									::String tmp22 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(343)
									::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(343)
									HX_STACK_DO_THROW(tmp23);
								}
							}
							HX_STACK_LINE(343)
							{
								HX_STACK_LINE(343)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(343)
								bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(343)
								if ((tmp20)){
									HX_STACK_LINE(343)
									_this->_validate();
								}
							}
							HX_STACK_LINE(343)
							tmp19 = imp->zpp_inner->y;
						}
						HX_STACK_LINE(343)
						int tmp20 = t1;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(343)
						Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(343)
						hx::AddEq(rety,tmp21);
					}
					HX_STACK_LINE(345)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(345)
					{
						HX_STACK_LINE(345)
						{
							HX_STACK_LINE(345)
							bool tmp17 = (imp != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(345)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(345)
							if ((tmp17)){
								HX_STACK_LINE(345)
								tmp18 = imp->zpp_disp;
							}
							else{
								HX_STACK_LINE(345)
								tmp18 = false;
							}
							HX_STACK_LINE(345)
							if ((tmp18)){
								HX_STACK_LINE(345)
								::String tmp19 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(345)
								::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(345)
								HX_STACK_DO_THROW(tmp20);
							}
						}
						HX_STACK_LINE(345)
						{
							HX_STACK_LINE(345)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(345)
							bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(345)
							if ((tmp17)){
								HX_STACK_LINE(345)
								_this->_validate();
							}
						}
						HX_STACK_LINE(345)
						tmp16 = imp->zpp_inner->z;
					}
					HX_STACK_LINE(345)
					int tmp17 = t;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(345)
					Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(345)
					hx::AddEq(retz,tmp18);
				}
				HX_STACK_LINE(347)
				imp->dispose();
			}
		}
		HX_STACK_LINE(350)
		bool tmp8 = colarb->hc2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(350)
		if ((tmp8)){
			HX_STACK_LINE(351)
			bool tmp9 = freshOnly;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(351)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(351)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(351)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(351)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(351)
			if ((tmp12)){
				HX_STACK_LINE(351)
				tmp13 = colarb->oc2->fresh;
			}
			else{
				HX_STACK_LINE(351)
				tmp13 = true;
			}
			HX_STACK_LINE(351)
			if ((tmp13)){
				HX_STACK_LINE(352)
				::nape::dynamics::Contact tmp14 = colarb->oc2->wrapper();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(352)
				::nape::phys::Body tmp15 = body;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(352)
				::nape::geom::Vec3 tmp16 = tmp14->normalImpulse(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(352)
				::nape::geom::Vec3 imp = tmp16;		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(353)
				{
					HX_STACK_LINE(354)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(355)
					{
						HX_STACK_LINE(356)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(365)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								bool tmp18 = (imp != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(365)
								bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(365)
								if ((tmp18)){
									HX_STACK_LINE(365)
									tmp19 = imp->zpp_disp;
								}
								else{
									HX_STACK_LINE(365)
									tmp19 = false;
								}
								HX_STACK_LINE(365)
								if ((tmp19)){
									HX_STACK_LINE(365)
									::String tmp20 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(365)
									::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(365)
									HX_STACK_DO_THROW(tmp21);
								}
							}
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(365)
								bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(365)
								if ((tmp18)){
									HX_STACK_LINE(365)
									_this->_validate();
								}
							}
							HX_STACK_LINE(365)
							tmp17 = imp->zpp_inner->x;
						}
						HX_STACK_LINE(365)
						int tmp18 = t1;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(365)
						Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(365)
						hx::AddEq(retx,tmp19);
						HX_STACK_LINE(366)
						Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(366)
						{
							HX_STACK_LINE(366)
							{
								HX_STACK_LINE(366)
								bool tmp21 = (imp != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(366)
								bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(366)
								if ((tmp21)){
									HX_STACK_LINE(366)
									tmp22 = imp->zpp_disp;
								}
								else{
									HX_STACK_LINE(366)
									tmp22 = false;
								}
								HX_STACK_LINE(366)
								if ((tmp22)){
									HX_STACK_LINE(366)
									::String tmp23 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(366)
									::String tmp24 = (tmp23 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(366)
									HX_STACK_DO_THROW(tmp24);
								}
							}
							HX_STACK_LINE(366)
							{
								HX_STACK_LINE(366)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(366)
								bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(366)
								if ((tmp21)){
									HX_STACK_LINE(366)
									_this->_validate();
								}
							}
							HX_STACK_LINE(366)
							tmp20 = imp->zpp_inner->y;
						}
						HX_STACK_LINE(366)
						int tmp21 = t1;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(366)
						Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(366)
						hx::AddEq(rety,tmp22);
					}
					HX_STACK_LINE(368)
					Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(368)
					{
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							bool tmp18 = (imp != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(368)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(368)
							if ((tmp18)){
								HX_STACK_LINE(368)
								tmp19 = imp->zpp_disp;
							}
							else{
								HX_STACK_LINE(368)
								tmp19 = false;
							}
							HX_STACK_LINE(368)
							if ((tmp19)){
								HX_STACK_LINE(368)
								::String tmp20 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(368)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(368)
								HX_STACK_DO_THROW(tmp21);
							}
						}
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(368)
							bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(368)
							if ((tmp18)){
								HX_STACK_LINE(368)
								_this->_validate();
							}
						}
						HX_STACK_LINE(368)
						tmp17 = imp->zpp_inner->z;
					}
					HX_STACK_LINE(368)
					int tmp18 = t;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(368)
					Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(368)
					hx::AddEq(retz,tmp19);
				}
				HX_STACK_LINE(370)
				imp->dispose();
			}
		}
		HX_STACK_LINE(373)
		Float tmp9 = retx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(373)
		Float tmp10 = rety;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(373)
		Float tmp11 = retz;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(373)
		::nape::geom::Vec3 tmp12 = ::nape::geom::Vec3_obj::get(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(373)
		return tmp12;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(CollisionArbiter_obj,normalImpulse,return )

::nape::geom::Vec3 CollisionArbiter_obj::tangentImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","tangentImpulse",0xec0a4733,"nape.dynamics.CollisionArbiter.tangentImpulse","nape/dynamics/CollisionArbiter.hx",394,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(396)
		::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(396)
		bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(396)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(396)
		if ((tmp2)){
			HX_STACK_LINE(396)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
		}
		HX_STACK_LINE(399)
		bool tmp3 = (body != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(399)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(399)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(399)
		if ((tmp4)){
			HX_STACK_LINE(399)
			::nape::phys::Body tmp6 = body;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(399)
			::nape::phys::Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(399)
			{
				HX_STACK_LINE(399)
				::zpp_nape::dynamics::ZPP_Arbiter tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(399)
				::zpp_nape::dynamics::ZPP_Arbiter tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(399)
				::zpp_nape::dynamics::ZPP_Arbiter tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(399)
				bool tmp11 = tmp10->active;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(399)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(399)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(399)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(399)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(399)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(399)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(399)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(399)
				if ((tmp18)){
					HX_STACK_LINE(399)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
				}
				HX_STACK_LINE(399)
				::zpp_nape::dynamics::ZPP_Arbiter tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(399)
				::zpp_nape::dynamics::ZPP_Arbiter tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(399)
				::zpp_nape::dynamics::ZPP_Arbiter tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(399)
				int tmp22 = tmp21->ws1->id;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(399)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(399)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(399)
				::zpp_nape::dynamics::ZPP_Arbiter tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(399)
				::zpp_nape::dynamics::ZPP_Arbiter tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(399)
				::zpp_nape::dynamics::ZPP_Arbiter tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(399)
				int tmp28 = tmp27->ws2->id;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(399)
				int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(399)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(399)
				bool tmp31 = (tmp24 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(399)
				bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(399)
				bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(399)
				bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(399)
				bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(399)
				if ((tmp35)){
					HX_STACK_LINE(399)
					::zpp_nape::dynamics::ZPP_Arbiter tmp36 = this->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(399)
					::zpp_nape::dynamics::ZPP_Arbiter tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(399)
					::zpp_nape::dynamics::ZPP_Arbiter tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(399)
					::nape::phys::Body tmp39 = tmp38->b2->outer;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(399)
					::nape::phys::Body tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(399)
					tmp7 = tmp40;
				}
				else{
					HX_STACK_LINE(399)
					::zpp_nape::dynamics::ZPP_Arbiter tmp36 = this->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(399)
					::zpp_nape::dynamics::ZPP_Arbiter tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(399)
					::zpp_nape::dynamics::ZPP_Arbiter tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(399)
					::nape::phys::Body tmp39 = tmp38->b1->outer;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(399)
					::nape::phys::Body tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(399)
					tmp7 = tmp40;
				}
			}
			HX_STACK_LINE(399)
			tmp5 = (tmp6 != tmp7);
		}
		else{
			HX_STACK_LINE(399)
			tmp5 = false;
		}
		HX_STACK_LINE(399)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(399)
		if ((tmp5)){
			HX_STACK_LINE(399)
			::nape::phys::Body tmp7 = body;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(399)
			::nape::phys::Body tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(399)
			{
				HX_STACK_LINE(399)
				::zpp_nape::dynamics::ZPP_Arbiter tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(399)
				::zpp_nape::dynamics::ZPP_Arbiter tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(399)
				bool tmp11 = tmp10->active;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(399)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(399)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(399)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(399)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(399)
				if ((tmp15)){
					HX_STACK_LINE(399)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
				}
				HX_STACK_LINE(399)
				::zpp_nape::dynamics::ZPP_Arbiter tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(399)
				::zpp_nape::dynamics::ZPP_Arbiter tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(399)
				int tmp18 = tmp17->ws1->id;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(399)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(399)
				::zpp_nape::dynamics::ZPP_Arbiter tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(399)
				::zpp_nape::dynamics::ZPP_Arbiter tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(399)
				int tmp22 = tmp21->ws2->id;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(399)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(399)
				bool tmp24 = (tmp19 > tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(399)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(399)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(399)
				if ((tmp26)){
					HX_STACK_LINE(399)
					::zpp_nape::dynamics::ZPP_Arbiter tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(399)
					::zpp_nape::dynamics::ZPP_Arbiter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(399)
					::nape::phys::Body tmp29 = tmp28->b1->outer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(399)
					tmp8 = tmp29;
				}
				else{
					HX_STACK_LINE(399)
					::zpp_nape::dynamics::ZPP_Arbiter tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(399)
					::zpp_nape::dynamics::ZPP_Arbiter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(399)
					::nape::phys::Body tmp29 = tmp28->b2->outer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(399)
					tmp8 = tmp29;
				}
			}
			HX_STACK_LINE(399)
			tmp6 = (tmp7 != tmp8);
		}
		else{
			HX_STACK_LINE(399)
			tmp6 = false;
		}
		HX_STACK_LINE(399)
		if ((tmp6)){
			HX_STACK_LINE(399)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter does not relate to body","\x2f","\xf6","\x45","\x99"));
		}
		HX_STACK_LINE(401)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(402)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(419)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(420)
		::zpp_nape::dynamics::ZPP_Arbiter tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(420)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp7->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(421)
		{
			HX_STACK_LINE(422)
			bool tmp8 = freshOnly;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(422)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(422)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(422)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(422)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(422)
			if ((tmp11)){
				HX_STACK_LINE(422)
				tmp12 = colarb->oc1->fresh;
			}
			else{
				HX_STACK_LINE(422)
				tmp12 = true;
			}
			HX_STACK_LINE(422)
			if ((tmp12)){
				HX_STACK_LINE(423)
				::nape::dynamics::Contact tmp13 = colarb->oc1->wrapper();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(423)
				::nape::phys::Body tmp14 = body;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(423)
				::nape::geom::Vec3 tmp15 = tmp13->tangentImpulse(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(423)
				::nape::geom::Vec3 imp = tmp15;		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(424)
				{
					HX_STACK_LINE(425)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(426)
					{
						HX_STACK_LINE(427)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(436)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(436)
						{
							HX_STACK_LINE(436)
							{
								HX_STACK_LINE(436)
								bool tmp17 = (imp != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(436)
								bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(436)
								if ((tmp17)){
									HX_STACK_LINE(436)
									tmp18 = imp->zpp_disp;
								}
								else{
									HX_STACK_LINE(436)
									tmp18 = false;
								}
								HX_STACK_LINE(436)
								if ((tmp18)){
									HX_STACK_LINE(436)
									::String tmp19 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(436)
									::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(436)
									HX_STACK_DO_THROW(tmp20);
								}
							}
							HX_STACK_LINE(436)
							{
								HX_STACK_LINE(436)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(436)
								bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(436)
								if ((tmp17)){
									HX_STACK_LINE(436)
									_this->_validate();
								}
							}
							HX_STACK_LINE(436)
							tmp16 = imp->zpp_inner->x;
						}
						HX_STACK_LINE(436)
						int tmp17 = t1;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(436)
						Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(436)
						hx::AddEq(retx,tmp18);
						HX_STACK_LINE(437)
						Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(437)
						{
							HX_STACK_LINE(437)
							{
								HX_STACK_LINE(437)
								bool tmp20 = (imp != null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(437)
								bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(437)
								if ((tmp20)){
									HX_STACK_LINE(437)
									tmp21 = imp->zpp_disp;
								}
								else{
									HX_STACK_LINE(437)
									tmp21 = false;
								}
								HX_STACK_LINE(437)
								if ((tmp21)){
									HX_STACK_LINE(437)
									::String tmp22 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(437)
									::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(437)
									HX_STACK_DO_THROW(tmp23);
								}
							}
							HX_STACK_LINE(437)
							{
								HX_STACK_LINE(437)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(437)
								bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(437)
								if ((tmp20)){
									HX_STACK_LINE(437)
									_this->_validate();
								}
							}
							HX_STACK_LINE(437)
							tmp19 = imp->zpp_inner->y;
						}
						HX_STACK_LINE(437)
						int tmp20 = t1;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(437)
						Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(437)
						hx::AddEq(rety,tmp21);
					}
					HX_STACK_LINE(439)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(439)
					{
						HX_STACK_LINE(439)
						{
							HX_STACK_LINE(439)
							bool tmp17 = (imp != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(439)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(439)
							if ((tmp17)){
								HX_STACK_LINE(439)
								tmp18 = imp->zpp_disp;
							}
							else{
								HX_STACK_LINE(439)
								tmp18 = false;
							}
							HX_STACK_LINE(439)
							if ((tmp18)){
								HX_STACK_LINE(439)
								::String tmp19 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(439)
								::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(439)
								HX_STACK_DO_THROW(tmp20);
							}
						}
						HX_STACK_LINE(439)
						{
							HX_STACK_LINE(439)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(439)
							bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(439)
							if ((tmp17)){
								HX_STACK_LINE(439)
								_this->_validate();
							}
						}
						HX_STACK_LINE(439)
						tmp16 = imp->zpp_inner->z;
					}
					HX_STACK_LINE(439)
					int tmp17 = t;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(439)
					Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(439)
					hx::AddEq(retz,tmp18);
				}
				HX_STACK_LINE(441)
				imp->dispose();
			}
		}
		HX_STACK_LINE(444)
		bool tmp8 = colarb->hc2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(444)
		if ((tmp8)){
			HX_STACK_LINE(445)
			bool tmp9 = freshOnly;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(445)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(445)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(445)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(445)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(445)
			if ((tmp12)){
				HX_STACK_LINE(445)
				tmp13 = colarb->oc2->fresh;
			}
			else{
				HX_STACK_LINE(445)
				tmp13 = true;
			}
			HX_STACK_LINE(445)
			if ((tmp13)){
				HX_STACK_LINE(446)
				::nape::dynamics::Contact tmp14 = colarb->oc2->wrapper();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(446)
				::nape::phys::Body tmp15 = body;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(446)
				::nape::geom::Vec3 tmp16 = tmp14->tangentImpulse(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(446)
				::nape::geom::Vec3 imp = tmp16;		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(447)
				{
					HX_STACK_LINE(448)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(449)
					{
						HX_STACK_LINE(450)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(459)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(459)
						{
							HX_STACK_LINE(459)
							{
								HX_STACK_LINE(459)
								bool tmp18 = (imp != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(459)
								bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(459)
								if ((tmp18)){
									HX_STACK_LINE(459)
									tmp19 = imp->zpp_disp;
								}
								else{
									HX_STACK_LINE(459)
									tmp19 = false;
								}
								HX_STACK_LINE(459)
								if ((tmp19)){
									HX_STACK_LINE(459)
									::String tmp20 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(459)
									::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(459)
									HX_STACK_DO_THROW(tmp21);
								}
							}
							HX_STACK_LINE(459)
							{
								HX_STACK_LINE(459)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(459)
								bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(459)
								if ((tmp18)){
									HX_STACK_LINE(459)
									_this->_validate();
								}
							}
							HX_STACK_LINE(459)
							tmp17 = imp->zpp_inner->x;
						}
						HX_STACK_LINE(459)
						int tmp18 = t1;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(459)
						Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(459)
						hx::AddEq(retx,tmp19);
						HX_STACK_LINE(460)
						Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(460)
						{
							HX_STACK_LINE(460)
							{
								HX_STACK_LINE(460)
								bool tmp21 = (imp != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(460)
								bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(460)
								if ((tmp21)){
									HX_STACK_LINE(460)
									tmp22 = imp->zpp_disp;
								}
								else{
									HX_STACK_LINE(460)
									tmp22 = false;
								}
								HX_STACK_LINE(460)
								if ((tmp22)){
									HX_STACK_LINE(460)
									::String tmp23 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(460)
									::String tmp24 = (tmp23 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(460)
									HX_STACK_DO_THROW(tmp24);
								}
							}
							HX_STACK_LINE(460)
							{
								HX_STACK_LINE(460)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(460)
								bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(460)
								if ((tmp21)){
									HX_STACK_LINE(460)
									_this->_validate();
								}
							}
							HX_STACK_LINE(460)
							tmp20 = imp->zpp_inner->y;
						}
						HX_STACK_LINE(460)
						int tmp21 = t1;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(460)
						Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(460)
						hx::AddEq(rety,tmp22);
					}
					HX_STACK_LINE(462)
					Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(462)
					{
						HX_STACK_LINE(462)
						{
							HX_STACK_LINE(462)
							bool tmp18 = (imp != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(462)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(462)
							if ((tmp18)){
								HX_STACK_LINE(462)
								tmp19 = imp->zpp_disp;
							}
							else{
								HX_STACK_LINE(462)
								tmp19 = false;
							}
							HX_STACK_LINE(462)
							if ((tmp19)){
								HX_STACK_LINE(462)
								::String tmp20 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(462)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(462)
								HX_STACK_DO_THROW(tmp21);
							}
						}
						HX_STACK_LINE(462)
						{
							HX_STACK_LINE(462)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(462)
							bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(462)
							if ((tmp18)){
								HX_STACK_LINE(462)
								_this->_validate();
							}
						}
						HX_STACK_LINE(462)
						tmp17 = imp->zpp_inner->z;
					}
					HX_STACK_LINE(462)
					int tmp18 = t;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(462)
					Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(462)
					hx::AddEq(retz,tmp19);
				}
				HX_STACK_LINE(464)
				imp->dispose();
			}
		}
		HX_STACK_LINE(467)
		Float tmp9 = retx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(467)
		Float tmp10 = rety;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(467)
		Float tmp11 = retz;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(467)
		::nape::geom::Vec3 tmp12 = ::nape::geom::Vec3_obj::get(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(467)
		return tmp12;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(CollisionArbiter_obj,tangentImpulse,return )

::nape::geom::Vec3 CollisionArbiter_obj::totalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","totalImpulse",0x690d3754,"nape.dynamics.CollisionArbiter.totalImpulse","nape/dynamics/CollisionArbiter.hx",485,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(487)
		::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(487)
		bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(487)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(487)
		if ((tmp2)){
			HX_STACK_LINE(487)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
		}
		HX_STACK_LINE(490)
		bool tmp3 = (body != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(490)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(490)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(490)
		if ((tmp4)){
			HX_STACK_LINE(490)
			::nape::phys::Body tmp6 = body;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(490)
			::nape::phys::Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(490)
			{
				HX_STACK_LINE(490)
				::zpp_nape::dynamics::ZPP_Arbiter tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(490)
				::zpp_nape::dynamics::ZPP_Arbiter tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(490)
				::zpp_nape::dynamics::ZPP_Arbiter tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(490)
				bool tmp11 = tmp10->active;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(490)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(490)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(490)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(490)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(490)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(490)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(490)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(490)
				if ((tmp18)){
					HX_STACK_LINE(490)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
				}
				HX_STACK_LINE(490)
				::zpp_nape::dynamics::ZPP_Arbiter tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(490)
				::zpp_nape::dynamics::ZPP_Arbiter tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(490)
				::zpp_nape::dynamics::ZPP_Arbiter tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(490)
				int tmp22 = tmp21->ws1->id;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(490)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(490)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(490)
				::zpp_nape::dynamics::ZPP_Arbiter tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(490)
				::zpp_nape::dynamics::ZPP_Arbiter tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(490)
				::zpp_nape::dynamics::ZPP_Arbiter tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(490)
				int tmp28 = tmp27->ws2->id;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(490)
				int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(490)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(490)
				bool tmp31 = (tmp24 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(490)
				bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(490)
				bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(490)
				bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(490)
				bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(490)
				if ((tmp35)){
					HX_STACK_LINE(490)
					::zpp_nape::dynamics::ZPP_Arbiter tmp36 = this->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(490)
					::zpp_nape::dynamics::ZPP_Arbiter tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(490)
					::zpp_nape::dynamics::ZPP_Arbiter tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(490)
					::nape::phys::Body tmp39 = tmp38->b2->outer;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(490)
					::nape::phys::Body tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(490)
					tmp7 = tmp40;
				}
				else{
					HX_STACK_LINE(490)
					::zpp_nape::dynamics::ZPP_Arbiter tmp36 = this->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(490)
					::zpp_nape::dynamics::ZPP_Arbiter tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(490)
					::zpp_nape::dynamics::ZPP_Arbiter tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(490)
					::nape::phys::Body tmp39 = tmp38->b1->outer;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(490)
					::nape::phys::Body tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(490)
					tmp7 = tmp40;
				}
			}
			HX_STACK_LINE(490)
			tmp5 = (tmp6 != tmp7);
		}
		else{
			HX_STACK_LINE(490)
			tmp5 = false;
		}
		HX_STACK_LINE(490)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(490)
		if ((tmp5)){
			HX_STACK_LINE(490)
			::nape::phys::Body tmp7 = body;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(490)
			::nape::phys::Body tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(490)
			{
				HX_STACK_LINE(490)
				::zpp_nape::dynamics::ZPP_Arbiter tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(490)
				::zpp_nape::dynamics::ZPP_Arbiter tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(490)
				bool tmp11 = tmp10->active;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(490)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(490)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(490)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(490)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(490)
				if ((tmp15)){
					HX_STACK_LINE(490)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
				}
				HX_STACK_LINE(490)
				::zpp_nape::dynamics::ZPP_Arbiter tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(490)
				::zpp_nape::dynamics::ZPP_Arbiter tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(490)
				int tmp18 = tmp17->ws1->id;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(490)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(490)
				::zpp_nape::dynamics::ZPP_Arbiter tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(490)
				::zpp_nape::dynamics::ZPP_Arbiter tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(490)
				int tmp22 = tmp21->ws2->id;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(490)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(490)
				bool tmp24 = (tmp19 > tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(490)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(490)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(490)
				if ((tmp26)){
					HX_STACK_LINE(490)
					::zpp_nape::dynamics::ZPP_Arbiter tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(490)
					::zpp_nape::dynamics::ZPP_Arbiter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(490)
					::nape::phys::Body tmp29 = tmp28->b1->outer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(490)
					tmp8 = tmp29;
				}
				else{
					HX_STACK_LINE(490)
					::zpp_nape::dynamics::ZPP_Arbiter tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(490)
					::zpp_nape::dynamics::ZPP_Arbiter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(490)
					::nape::phys::Body tmp29 = tmp28->b2->outer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(490)
					tmp8 = tmp29;
				}
			}
			HX_STACK_LINE(490)
			tmp6 = (tmp7 != tmp8);
		}
		else{
			HX_STACK_LINE(490)
			tmp6 = false;
		}
		HX_STACK_LINE(490)
		if ((tmp6)){
			HX_STACK_LINE(490)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter does not relate to body","\x2f","\xf6","\x45","\x99"));
		}
		HX_STACK_LINE(492)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(493)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(510)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(511)
		::zpp_nape::dynamics::ZPP_Arbiter tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(511)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp7->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(512)
		{
			HX_STACK_LINE(513)
			bool tmp8 = freshOnly;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(513)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(513)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(513)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(513)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(513)
			if ((tmp11)){
				HX_STACK_LINE(513)
				tmp12 = colarb->oc1->fresh;
			}
			else{
				HX_STACK_LINE(513)
				tmp12 = true;
			}
			HX_STACK_LINE(513)
			if ((tmp12)){
				HX_STACK_LINE(514)
				::nape::dynamics::Contact tmp13 = colarb->oc1->wrapper();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(514)
				::nape::phys::Body tmp14 = body;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(514)
				::nape::geom::Vec3 tmp15 = tmp13->totalImpulse(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(514)
				::nape::geom::Vec3 imp = tmp15;		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(515)
				{
					HX_STACK_LINE(516)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(517)
					{
						HX_STACK_LINE(518)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(527)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(527)
						{
							HX_STACK_LINE(527)
							{
								HX_STACK_LINE(527)
								bool tmp17 = (imp != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(527)
								bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(527)
								if ((tmp17)){
									HX_STACK_LINE(527)
									tmp18 = imp->zpp_disp;
								}
								else{
									HX_STACK_LINE(527)
									tmp18 = false;
								}
								HX_STACK_LINE(527)
								if ((tmp18)){
									HX_STACK_LINE(527)
									::String tmp19 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(527)
									::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(527)
									HX_STACK_DO_THROW(tmp20);
								}
							}
							HX_STACK_LINE(527)
							{
								HX_STACK_LINE(527)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(527)
								bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(527)
								if ((tmp17)){
									HX_STACK_LINE(527)
									_this->_validate();
								}
							}
							HX_STACK_LINE(527)
							tmp16 = imp->zpp_inner->x;
						}
						HX_STACK_LINE(527)
						int tmp17 = t1;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(527)
						Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(527)
						hx::AddEq(retx,tmp18);
						HX_STACK_LINE(528)
						Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(528)
						{
							HX_STACK_LINE(528)
							{
								HX_STACK_LINE(528)
								bool tmp20 = (imp != null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(528)
								bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(528)
								if ((tmp20)){
									HX_STACK_LINE(528)
									tmp21 = imp->zpp_disp;
								}
								else{
									HX_STACK_LINE(528)
									tmp21 = false;
								}
								HX_STACK_LINE(528)
								if ((tmp21)){
									HX_STACK_LINE(528)
									::String tmp22 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(528)
									::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(528)
									HX_STACK_DO_THROW(tmp23);
								}
							}
							HX_STACK_LINE(528)
							{
								HX_STACK_LINE(528)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(528)
								bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(528)
								if ((tmp20)){
									HX_STACK_LINE(528)
									_this->_validate();
								}
							}
							HX_STACK_LINE(528)
							tmp19 = imp->zpp_inner->y;
						}
						HX_STACK_LINE(528)
						int tmp20 = t1;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(528)
						Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(528)
						hx::AddEq(rety,tmp21);
					}
					HX_STACK_LINE(530)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(530)
					{
						HX_STACK_LINE(530)
						{
							HX_STACK_LINE(530)
							bool tmp17 = (imp != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(530)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(530)
							if ((tmp17)){
								HX_STACK_LINE(530)
								tmp18 = imp->zpp_disp;
							}
							else{
								HX_STACK_LINE(530)
								tmp18 = false;
							}
							HX_STACK_LINE(530)
							if ((tmp18)){
								HX_STACK_LINE(530)
								::String tmp19 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(530)
								::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(530)
								HX_STACK_DO_THROW(tmp20);
							}
						}
						HX_STACK_LINE(530)
						{
							HX_STACK_LINE(530)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(530)
							bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(530)
							if ((tmp17)){
								HX_STACK_LINE(530)
								_this->_validate();
							}
						}
						HX_STACK_LINE(530)
						tmp16 = imp->zpp_inner->z;
					}
					HX_STACK_LINE(530)
					int tmp17 = t;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(530)
					Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(530)
					hx::AddEq(retz,tmp18);
				}
				HX_STACK_LINE(532)
				imp->dispose();
			}
		}
		HX_STACK_LINE(535)
		bool tmp8 = colarb->hc2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(535)
		if ((tmp8)){
			HX_STACK_LINE(536)
			bool tmp9 = freshOnly;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(536)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(536)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(536)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(536)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(536)
			if ((tmp12)){
				HX_STACK_LINE(536)
				tmp13 = colarb->oc2->fresh;
			}
			else{
				HX_STACK_LINE(536)
				tmp13 = true;
			}
			HX_STACK_LINE(536)
			if ((tmp13)){
				HX_STACK_LINE(537)
				::nape::dynamics::Contact tmp14 = colarb->oc2->wrapper();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(537)
				::nape::phys::Body tmp15 = body;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(537)
				::nape::geom::Vec3 tmp16 = tmp14->totalImpulse(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(537)
				::nape::geom::Vec3 imp = tmp16;		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(538)
				{
					HX_STACK_LINE(539)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(540)
					{
						HX_STACK_LINE(541)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(550)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(550)
						{
							HX_STACK_LINE(550)
							{
								HX_STACK_LINE(550)
								bool tmp18 = (imp != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(550)
								bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(550)
								if ((tmp18)){
									HX_STACK_LINE(550)
									tmp19 = imp->zpp_disp;
								}
								else{
									HX_STACK_LINE(550)
									tmp19 = false;
								}
								HX_STACK_LINE(550)
								if ((tmp19)){
									HX_STACK_LINE(550)
									::String tmp20 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(550)
									::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(550)
									HX_STACK_DO_THROW(tmp21);
								}
							}
							HX_STACK_LINE(550)
							{
								HX_STACK_LINE(550)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(550)
								bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(550)
								if ((tmp18)){
									HX_STACK_LINE(550)
									_this->_validate();
								}
							}
							HX_STACK_LINE(550)
							tmp17 = imp->zpp_inner->x;
						}
						HX_STACK_LINE(550)
						int tmp18 = t1;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(550)
						Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(550)
						hx::AddEq(retx,tmp19);
						HX_STACK_LINE(551)
						Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(551)
						{
							HX_STACK_LINE(551)
							{
								HX_STACK_LINE(551)
								bool tmp21 = (imp != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(551)
								bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(551)
								if ((tmp21)){
									HX_STACK_LINE(551)
									tmp22 = imp->zpp_disp;
								}
								else{
									HX_STACK_LINE(551)
									tmp22 = false;
								}
								HX_STACK_LINE(551)
								if ((tmp22)){
									HX_STACK_LINE(551)
									::String tmp23 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(551)
									::String tmp24 = (tmp23 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(551)
									HX_STACK_DO_THROW(tmp24);
								}
							}
							HX_STACK_LINE(551)
							{
								HX_STACK_LINE(551)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(551)
								bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(551)
								if ((tmp21)){
									HX_STACK_LINE(551)
									_this->_validate();
								}
							}
							HX_STACK_LINE(551)
							tmp20 = imp->zpp_inner->y;
						}
						HX_STACK_LINE(551)
						int tmp21 = t1;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(551)
						Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(551)
						hx::AddEq(rety,tmp22);
					}
					HX_STACK_LINE(553)
					Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(553)
					{
						HX_STACK_LINE(553)
						{
							HX_STACK_LINE(553)
							bool tmp18 = (imp != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(553)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(553)
							if ((tmp18)){
								HX_STACK_LINE(553)
								tmp19 = imp->zpp_disp;
							}
							else{
								HX_STACK_LINE(553)
								tmp19 = false;
							}
							HX_STACK_LINE(553)
							if ((tmp19)){
								HX_STACK_LINE(553)
								::String tmp20 = HX_HCSTRING("Error: Vec3","\xcd","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(553)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(553)
								HX_STACK_DO_THROW(tmp21);
							}
						}
						HX_STACK_LINE(553)
						{
							HX_STACK_LINE(553)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(553)
							bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(553)
							if ((tmp18)){
								HX_STACK_LINE(553)
								_this->_validate();
							}
						}
						HX_STACK_LINE(553)
						tmp17 = imp->zpp_inner->z;
					}
					HX_STACK_LINE(553)
					int tmp18 = t;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(553)
					Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(553)
					hx::AddEq(retz,tmp19);
				}
				HX_STACK_LINE(555)
				imp->dispose();
			}
		}
		HX_STACK_LINE(558)
		Float tmp9 = retx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(558)
		Float tmp10 = rety;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(558)
		Float tmp11 = retz;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(558)
		::nape::geom::Vec3 tmp12 = ::nape::geom::Vec3_obj::get(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(558)
		return tmp12;
	}
}


Float CollisionArbiter_obj::rollingImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","rollingImpulse",0x51a9ce73,"nape.dynamics.CollisionArbiter.rollingImpulse","nape/dynamics/CollisionArbiter.hx",573,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(575)
		::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(575)
		bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(575)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(575)
		if ((tmp2)){
			HX_STACK_LINE(575)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
		}
		HX_STACK_LINE(578)
		bool tmp3 = (body != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(578)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(578)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(578)
		if ((tmp4)){
			HX_STACK_LINE(578)
			::nape::phys::Body tmp6 = body;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(578)
			::nape::phys::Body tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(578)
			{
				HX_STACK_LINE(578)
				::zpp_nape::dynamics::ZPP_Arbiter tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(578)
				::zpp_nape::dynamics::ZPP_Arbiter tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(578)
				::zpp_nape::dynamics::ZPP_Arbiter tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(578)
				bool tmp11 = tmp10->active;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(578)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(578)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(578)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(578)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(578)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(578)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(578)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(578)
				if ((tmp18)){
					HX_STACK_LINE(578)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
				}
				HX_STACK_LINE(578)
				::zpp_nape::dynamics::ZPP_Arbiter tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(578)
				::zpp_nape::dynamics::ZPP_Arbiter tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(578)
				::zpp_nape::dynamics::ZPP_Arbiter tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(578)
				int tmp22 = tmp21->ws1->id;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(578)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(578)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(578)
				::zpp_nape::dynamics::ZPP_Arbiter tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(578)
				::zpp_nape::dynamics::ZPP_Arbiter tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(578)
				::zpp_nape::dynamics::ZPP_Arbiter tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(578)
				int tmp28 = tmp27->ws2->id;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(578)
				int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(578)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(578)
				bool tmp31 = (tmp24 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(578)
				bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(578)
				bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(578)
				bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(578)
				bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(578)
				if ((tmp35)){
					HX_STACK_LINE(578)
					::zpp_nape::dynamics::ZPP_Arbiter tmp36 = this->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(578)
					::zpp_nape::dynamics::ZPP_Arbiter tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(578)
					::zpp_nape::dynamics::ZPP_Arbiter tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(578)
					::nape::phys::Body tmp39 = tmp38->b2->outer;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(578)
					::nape::phys::Body tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(578)
					tmp7 = tmp40;
				}
				else{
					HX_STACK_LINE(578)
					::zpp_nape::dynamics::ZPP_Arbiter tmp36 = this->zpp_inner;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(578)
					::zpp_nape::dynamics::ZPP_Arbiter tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(578)
					::zpp_nape::dynamics::ZPP_Arbiter tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(578)
					::nape::phys::Body tmp39 = tmp38->b1->outer;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(578)
					::nape::phys::Body tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(578)
					tmp7 = tmp40;
				}
			}
			HX_STACK_LINE(578)
			tmp5 = (tmp6 != tmp7);
		}
		else{
			HX_STACK_LINE(578)
			tmp5 = false;
		}
		HX_STACK_LINE(578)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(578)
		if ((tmp5)){
			HX_STACK_LINE(578)
			::nape::phys::Body tmp7 = body;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(578)
			::nape::phys::Body tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(578)
			{
				HX_STACK_LINE(578)
				::zpp_nape::dynamics::ZPP_Arbiter tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(578)
				::zpp_nape::dynamics::ZPP_Arbiter tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(578)
				bool tmp11 = tmp10->active;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(578)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(578)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(578)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(578)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(578)
				if ((tmp15)){
					HX_STACK_LINE(578)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
				}
				HX_STACK_LINE(578)
				::zpp_nape::dynamics::ZPP_Arbiter tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(578)
				::zpp_nape::dynamics::ZPP_Arbiter tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(578)
				int tmp18 = tmp17->ws1->id;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(578)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(578)
				::zpp_nape::dynamics::ZPP_Arbiter tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(578)
				::zpp_nape::dynamics::ZPP_Arbiter tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(578)
				int tmp22 = tmp21->ws2->id;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(578)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(578)
				bool tmp24 = (tmp19 > tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(578)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(578)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(578)
				if ((tmp26)){
					HX_STACK_LINE(578)
					::zpp_nape::dynamics::ZPP_Arbiter tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(578)
					::zpp_nape::dynamics::ZPP_Arbiter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(578)
					::nape::phys::Body tmp29 = tmp28->b1->outer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(578)
					tmp8 = tmp29;
				}
				else{
					HX_STACK_LINE(578)
					::zpp_nape::dynamics::ZPP_Arbiter tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(578)
					::zpp_nape::dynamics::ZPP_Arbiter tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(578)
					::nape::phys::Body tmp29 = tmp28->b2->outer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(578)
					tmp8 = tmp29;
				}
			}
			HX_STACK_LINE(578)
			tmp6 = (tmp7 != tmp8);
		}
		else{
			HX_STACK_LINE(578)
			tmp6 = false;
		}
		HX_STACK_LINE(578)
		if ((tmp6)){
			HX_STACK_LINE(578)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter does not relate to body","\x2f","\xf6","\x45","\x99"));
		}
		HX_STACK_LINE(580)
		::zpp_nape::dynamics::ZPP_Arbiter tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(580)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp7->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(581)
		bool tmp8 = freshOnly;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(581)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(581)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(581)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(581)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(581)
		if ((tmp11)){
			HX_STACK_LINE(581)
			tmp12 = colarb->oc1->fresh;
		}
		else{
			HX_STACK_LINE(581)
			tmp12 = true;
		}
		HX_STACK_LINE(581)
		if ((tmp12)){
			HX_STACK_LINE(581)
			::nape::dynamics::Contact tmp13 = colarb->oc1->wrapper();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(581)
			::nape::phys::Body tmp14 = body;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(581)
			Float tmp15 = tmp13->rollingImpulse(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(581)
			return tmp15;
		}
		else{
			HX_STACK_LINE(582)
			return ((Float)0.0);
		}
		HX_STACK_LINE(581)
		return ((Float)0.);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(CollisionArbiter_obj,rollingImpulse,return )

Float CollisionArbiter_obj::get_elasticity( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_elasticity",0x4a75c485,"nape.dynamics.CollisionArbiter.get_elasticity","nape/dynamics/CollisionArbiter.hx",596,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(598)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(598)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(598)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(598)
	if ((tmp2)){
		HX_STACK_LINE(598)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
	}
	HX_STACK_LINE(600)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(600)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp3->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(601)
	{
		HX_STACK_LINE(601)
		bool tmp4 = colarb->invalidated;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(601)
		if ((tmp4)){
			HX_STACK_LINE(601)
			colarb->invalidated = false;
			HX_STACK_LINE(601)
			{
				HX_STACK_LINE(601)
				bool tmp5 = colarb->userdef_restitution;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(601)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(601)
				if ((tmp6)){
					HX_STACK_LINE(601)
					::zpp_nape::phys::ZPP_Material tmp7 = colarb->s1->material;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(601)
					Float tmp8 = tmp7->elasticity;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(601)
					Float tmp9 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(601)
					bool tmp10 = (tmp8 <= tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(601)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(601)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(601)
					if ((tmp11)){
						HX_STACK_LINE(601)
						::zpp_nape::phys::ZPP_Material tmp13 = colarb->s2->material;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(601)
						::zpp_nape::phys::ZPP_Material tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(601)
						Float tmp15 = tmp14->elasticity;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(601)
						Float tmp16 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(601)
						Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(601)
						tmp12 = (tmp15 <= tmp17);
					}
					else{
						HX_STACK_LINE(601)
						tmp12 = true;
					}
					HX_STACK_LINE(601)
					if ((tmp12)){
						HX_STACK_LINE(601)
						colarb->restitution = (int)0;
					}
					else{
						HX_STACK_LINE(601)
						::zpp_nape::phys::ZPP_Material tmp13 = colarb->s1->material;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(601)
						Float tmp14 = tmp13->elasticity;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(601)
						Float tmp15 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(601)
						bool tmp16 = (tmp14 >= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(601)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(601)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(601)
						if ((tmp17)){
							HX_STACK_LINE(601)
							::zpp_nape::phys::ZPP_Material tmp19 = colarb->s2->material;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(601)
							::zpp_nape::phys::ZPP_Material tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(601)
							Float tmp21 = tmp20->elasticity;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(601)
							Float tmp22 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(601)
							Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(601)
							tmp18 = (tmp21 >= tmp23);
						}
						else{
							HX_STACK_LINE(601)
							tmp18 = true;
						}
						HX_STACK_LINE(601)
						if ((tmp18)){
							HX_STACK_LINE(601)
							colarb->restitution = (int)1;
						}
						else{
							HX_STACK_LINE(601)
							::zpp_nape::phys::ZPP_Material tmp19 = colarb->s1->material;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(601)
							Float tmp20 = tmp19->elasticity;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(601)
							::zpp_nape::phys::ZPP_Material tmp21 = colarb->s2->material;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(601)
							Float tmp22 = tmp21->elasticity;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(601)
							Float tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(601)
							Float tmp24 = (Float(tmp23) / Float((int)2));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(601)
							colarb->restitution = tmp24;
						}
					}
					HX_STACK_LINE(601)
					bool tmp13 = (colarb->restitution < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(601)
					if ((tmp13)){
						HX_STACK_LINE(601)
						colarb->restitution = (int)0;
					}
					HX_STACK_LINE(601)
					bool tmp14 = (colarb->restitution > (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(601)
					if ((tmp14)){
						HX_STACK_LINE(601)
						colarb->restitution = (int)1;
					}
				}
				HX_STACK_LINE(601)
				bool tmp7 = colarb->userdef_dyn_fric;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(601)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(601)
				if ((tmp8)){
					HX_STACK_LINE(601)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(601)
					{
						HX_STACK_LINE(601)
						::zpp_nape::phys::ZPP_Material tmp10 = colarb->s1->material;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(601)
						Float tmp11 = tmp10->dynamicFriction;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(601)
						::zpp_nape::phys::ZPP_Material tmp12 = colarb->s2->material;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(601)
						Float tmp13 = tmp12->dynamicFriction;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(601)
						Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(601)
						tmp9 = ::Math_obj::sqrt(tmp14);
					}
					HX_STACK_LINE(601)
					colarb->dyn_fric = tmp9;
				}
				HX_STACK_LINE(601)
				bool tmp9 = colarb->userdef_stat_fric;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(601)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(601)
				if ((tmp10)){
					HX_STACK_LINE(601)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(601)
					{
						HX_STACK_LINE(601)
						::zpp_nape::phys::ZPP_Material tmp12 = colarb->s1->material;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(601)
						Float tmp13 = tmp12->staticFriction;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(601)
						::zpp_nape::phys::ZPP_Material tmp14 = colarb->s2->material;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(601)
						Float tmp15 = tmp14->staticFriction;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(601)
						Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(601)
						tmp11 = ::Math_obj::sqrt(tmp16);
					}
					HX_STACK_LINE(601)
					colarb->stat_fric = tmp11;
				}
				HX_STACK_LINE(601)
				bool tmp11 = colarb->userdef_rfric;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(601)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(601)
				if ((tmp12)){
					HX_STACK_LINE(601)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(601)
					{
						HX_STACK_LINE(601)
						::zpp_nape::phys::ZPP_Material tmp14 = colarb->s1->material;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(601)
						Float tmp15 = tmp14->rollingFriction;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(601)
						::zpp_nape::phys::ZPP_Material tmp16 = colarb->s2->material;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(601)
						Float tmp17 = tmp16->rollingFriction;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(601)
						Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(601)
						tmp13 = ::Math_obj::sqrt(tmp18);
					}
					HX_STACK_LINE(601)
					colarb->rfric = tmp13;
				}
			}
		}
	}
	HX_STACK_LINE(602)
	Float tmp4 = colarb->restitution;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(602)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_elasticity,return )

Float CollisionArbiter_obj::set_elasticity( Float elasticity){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","set_elasticity",0x6a95acf9,"nape.dynamics.CollisionArbiter.set_elasticity","nape/dynamics/CollisionArbiter.hx",604,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(elasticity,"elasticity")
	HX_STACK_LINE(605)
	{
		HX_STACK_LINE(607)
		::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(607)
		bool tmp1 = tmp->colarb->_mutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(607)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(607)
		if ((tmp2)){
			HX_STACK_LINE(607)
			::String tmp3 = HX_HCSTRING("Error: CollisionArbiter::elasticity","\xbe","\x4b","\x45","\x07");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(607)
			::String tmp4 = (tmp3 + HX_HCSTRING(" is only mutable during a pre-handler","\xda","\x73","\x68","\x7a"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(607)
			HX_STACK_DO_THROW(tmp4);
		}
		HX_STACK_LINE(610)
		bool tmp3 = (elasticity != elasticity);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(610)
		if ((tmp3)){
			HX_STACK_LINE(610)
			::String tmp4 = HX_HCSTRING("Error: CollisionArbiter::elasticity","\xbe","\x4b","\x45","\x07");		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(610)
			::String tmp5 = (tmp4 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(610)
			HX_STACK_DO_THROW(tmp5);
		}
		HX_STACK_LINE(611)
		bool tmp4 = (elasticity < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(611)
		if ((tmp4)){
			HX_STACK_LINE(611)
			::String tmp5 = HX_HCSTRING("Error: CollisionArbiter::elasticity","\xbe","\x4b","\x45","\x07");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(611)
			::String tmp6 = (tmp5 + HX_HCSTRING(" cannot be negative","\xf5","\x23","\xbe","\x15"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(611)
			HX_STACK_DO_THROW(tmp6);
		}
		HX_STACK_LINE(612)
		bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(612)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(612)
		if ((tmp5)){
			HX_STACK_LINE(612)
			tmp6 = (elasticity > (int)1);
		}
		else{
			HX_STACK_LINE(612)
			tmp6 = false;
		}
		HX_STACK_LINE(612)
		if ((tmp6)){
			HX_STACK_LINE(612)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: CollisionArbiter::restitution cannot be greater than 1","\x73","\xfa","\x43","\xcc"));
		}
		HX_STACK_LINE(614)
		::zpp_nape::dynamics::ZPP_Arbiter tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(614)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp7->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(615)
		colarb->restitution = elasticity;
		HX_STACK_LINE(616)
		colarb->userdef_restitution = true;
	}
	HX_STACK_LINE(618)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(618)
	{
		HX_STACK_LINE(618)
		::zpp_nape::dynamics::ZPP_Arbiter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(618)
		bool tmp2 = tmp1->active;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(618)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(618)
		if ((tmp3)){
			HX_STACK_LINE(618)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
		}
		HX_STACK_LINE(618)
		::zpp_nape::dynamics::ZPP_Arbiter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(618)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp4->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(618)
		{
			HX_STACK_LINE(618)
			bool tmp5 = colarb->invalidated;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(618)
			if ((tmp5)){
				HX_STACK_LINE(618)
				colarb->invalidated = false;
				HX_STACK_LINE(618)
				{
					HX_STACK_LINE(618)
					bool tmp6 = colarb->userdef_restitution;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(618)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(618)
					if ((tmp7)){
						HX_STACK_LINE(618)
						::zpp_nape::phys::ZPP_Material tmp8 = colarb->s1->material;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(618)
						Float tmp9 = tmp8->elasticity;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(618)
						Float tmp10 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(618)
						bool tmp11 = (tmp9 <= tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(618)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(618)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(618)
						if ((tmp12)){
							HX_STACK_LINE(618)
							::zpp_nape::phys::ZPP_Material tmp14 = colarb->s2->material;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(618)
							::zpp_nape::phys::ZPP_Material tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(618)
							Float tmp16 = tmp15->elasticity;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(618)
							Float tmp17 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(618)
							Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(618)
							tmp13 = (tmp16 <= tmp18);
						}
						else{
							HX_STACK_LINE(618)
							tmp13 = true;
						}
						HX_STACK_LINE(618)
						if ((tmp13)){
							HX_STACK_LINE(618)
							colarb->restitution = (int)0;
						}
						else{
							HX_STACK_LINE(618)
							::zpp_nape::phys::ZPP_Material tmp14 = colarb->s1->material;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(618)
							Float tmp15 = tmp14->elasticity;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(618)
							Float tmp16 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(618)
							bool tmp17 = (tmp15 >= tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(618)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(618)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(618)
							if ((tmp18)){
								HX_STACK_LINE(618)
								::zpp_nape::phys::ZPP_Material tmp20 = colarb->s2->material;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(618)
								::zpp_nape::phys::ZPP_Material tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(618)
								Float tmp22 = tmp21->elasticity;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(618)
								Float tmp23 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(618)
								Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(618)
								tmp19 = (tmp22 >= tmp24);
							}
							else{
								HX_STACK_LINE(618)
								tmp19 = true;
							}
							HX_STACK_LINE(618)
							if ((tmp19)){
								HX_STACK_LINE(618)
								colarb->restitution = (int)1;
							}
							else{
								HX_STACK_LINE(618)
								::zpp_nape::phys::ZPP_Material tmp20 = colarb->s1->material;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(618)
								Float tmp21 = tmp20->elasticity;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(618)
								::zpp_nape::phys::ZPP_Material tmp22 = colarb->s2->material;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(618)
								Float tmp23 = tmp22->elasticity;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(618)
								Float tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(618)
								Float tmp25 = (Float(tmp24) / Float((int)2));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(618)
								colarb->restitution = tmp25;
							}
						}
						HX_STACK_LINE(618)
						bool tmp14 = (colarb->restitution < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(618)
						if ((tmp14)){
							HX_STACK_LINE(618)
							colarb->restitution = (int)0;
						}
						HX_STACK_LINE(618)
						bool tmp15 = (colarb->restitution > (int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(618)
						if ((tmp15)){
							HX_STACK_LINE(618)
							colarb->restitution = (int)1;
						}
					}
					HX_STACK_LINE(618)
					bool tmp8 = colarb->userdef_dyn_fric;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(618)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(618)
					if ((tmp9)){
						HX_STACK_LINE(618)
						Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(618)
						{
							HX_STACK_LINE(618)
							::zpp_nape::phys::ZPP_Material tmp11 = colarb->s1->material;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(618)
							Float tmp12 = tmp11->dynamicFriction;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(618)
							::zpp_nape::phys::ZPP_Material tmp13 = colarb->s2->material;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(618)
							Float tmp14 = tmp13->dynamicFriction;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(618)
							Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(618)
							tmp10 = ::Math_obj::sqrt(tmp15);
						}
						HX_STACK_LINE(618)
						colarb->dyn_fric = tmp10;
					}
					HX_STACK_LINE(618)
					bool tmp10 = colarb->userdef_stat_fric;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(618)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(618)
					if ((tmp11)){
						HX_STACK_LINE(618)
						Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(618)
						{
							HX_STACK_LINE(618)
							::zpp_nape::phys::ZPP_Material tmp13 = colarb->s1->material;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(618)
							Float tmp14 = tmp13->staticFriction;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(618)
							::zpp_nape::phys::ZPP_Material tmp15 = colarb->s2->material;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(618)
							Float tmp16 = tmp15->staticFriction;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(618)
							Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(618)
							tmp12 = ::Math_obj::sqrt(tmp17);
						}
						HX_STACK_LINE(618)
						colarb->stat_fric = tmp12;
					}
					HX_STACK_LINE(618)
					bool tmp12 = colarb->userdef_rfric;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(618)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(618)
					if ((tmp13)){
						HX_STACK_LINE(618)
						Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(618)
						{
							HX_STACK_LINE(618)
							::zpp_nape::phys::ZPP_Material tmp15 = colarb->s1->material;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(618)
							Float tmp16 = tmp15->rollingFriction;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(618)
							::zpp_nape::phys::ZPP_Material tmp17 = colarb->s2->material;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(618)
							Float tmp18 = tmp17->rollingFriction;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(618)
							Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(618)
							tmp14 = ::Math_obj::sqrt(tmp19);
						}
						HX_STACK_LINE(618)
						colarb->rfric = tmp14;
					}
				}
			}
		}
		HX_STACK_LINE(618)
		tmp = colarb->restitution;
	}
	HX_STACK_LINE(618)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionArbiter_obj,set_elasticity,return )

Float CollisionArbiter_obj::get_dynamicFriction( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_dynamicFriction",0x4389ff0d,"nape.dynamics.CollisionArbiter.get_dynamicFriction","nape/dynamics/CollisionArbiter.hx",631,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(633)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(633)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(633)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(633)
	if ((tmp2)){
		HX_STACK_LINE(633)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
	}
	HX_STACK_LINE(635)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(635)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp3->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(636)
	{
		HX_STACK_LINE(636)
		bool tmp4 = colarb->invalidated;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(636)
		if ((tmp4)){
			HX_STACK_LINE(636)
			colarb->invalidated = false;
			HX_STACK_LINE(636)
			{
				HX_STACK_LINE(636)
				bool tmp5 = colarb->userdef_restitution;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(636)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(636)
				if ((tmp6)){
					HX_STACK_LINE(636)
					::zpp_nape::phys::ZPP_Material tmp7 = colarb->s1->material;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(636)
					Float tmp8 = tmp7->elasticity;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(636)
					Float tmp9 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(636)
					bool tmp10 = (tmp8 <= tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(636)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(636)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(636)
					if ((tmp11)){
						HX_STACK_LINE(636)
						::zpp_nape::phys::ZPP_Material tmp13 = colarb->s2->material;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(636)
						::zpp_nape::phys::ZPP_Material tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(636)
						Float tmp15 = tmp14->elasticity;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(636)
						Float tmp16 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(636)
						Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(636)
						tmp12 = (tmp15 <= tmp17);
					}
					else{
						HX_STACK_LINE(636)
						tmp12 = true;
					}
					HX_STACK_LINE(636)
					if ((tmp12)){
						HX_STACK_LINE(636)
						colarb->restitution = (int)0;
					}
					else{
						HX_STACK_LINE(636)
						::zpp_nape::phys::ZPP_Material tmp13 = colarb->s1->material;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(636)
						Float tmp14 = tmp13->elasticity;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(636)
						Float tmp15 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(636)
						bool tmp16 = (tmp14 >= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(636)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(636)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(636)
						if ((tmp17)){
							HX_STACK_LINE(636)
							::zpp_nape::phys::ZPP_Material tmp19 = colarb->s2->material;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(636)
							::zpp_nape::phys::ZPP_Material tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(636)
							Float tmp21 = tmp20->elasticity;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(636)
							Float tmp22 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(636)
							Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(636)
							tmp18 = (tmp21 >= tmp23);
						}
						else{
							HX_STACK_LINE(636)
							tmp18 = true;
						}
						HX_STACK_LINE(636)
						if ((tmp18)){
							HX_STACK_LINE(636)
							colarb->restitution = (int)1;
						}
						else{
							HX_STACK_LINE(636)
							::zpp_nape::phys::ZPP_Material tmp19 = colarb->s1->material;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(636)
							Float tmp20 = tmp19->elasticity;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(636)
							::zpp_nape::phys::ZPP_Material tmp21 = colarb->s2->material;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(636)
							Float tmp22 = tmp21->elasticity;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(636)
							Float tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(636)
							Float tmp24 = (Float(tmp23) / Float((int)2));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(636)
							colarb->restitution = tmp24;
						}
					}
					HX_STACK_LINE(636)
					bool tmp13 = (colarb->restitution < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(636)
					if ((tmp13)){
						HX_STACK_LINE(636)
						colarb->restitution = (int)0;
					}
					HX_STACK_LINE(636)
					bool tmp14 = (colarb->restitution > (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(636)
					if ((tmp14)){
						HX_STACK_LINE(636)
						colarb->restitution = (int)1;
					}
				}
				HX_STACK_LINE(636)
				bool tmp7 = colarb->userdef_dyn_fric;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(636)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(636)
				if ((tmp8)){
					HX_STACK_LINE(636)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(636)
					{
						HX_STACK_LINE(636)
						::zpp_nape::phys::ZPP_Material tmp10 = colarb->s1->material;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(636)
						Float tmp11 = tmp10->dynamicFriction;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(636)
						::zpp_nape::phys::ZPP_Material tmp12 = colarb->s2->material;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(636)
						Float tmp13 = tmp12->dynamicFriction;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(636)
						Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(636)
						tmp9 = ::Math_obj::sqrt(tmp14);
					}
					HX_STACK_LINE(636)
					colarb->dyn_fric = tmp9;
				}
				HX_STACK_LINE(636)
				bool tmp9 = colarb->userdef_stat_fric;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(636)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(636)
				if ((tmp10)){
					HX_STACK_LINE(636)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(636)
					{
						HX_STACK_LINE(636)
						::zpp_nape::phys::ZPP_Material tmp12 = colarb->s1->material;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(636)
						Float tmp13 = tmp12->staticFriction;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(636)
						::zpp_nape::phys::ZPP_Material tmp14 = colarb->s2->material;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(636)
						Float tmp15 = tmp14->staticFriction;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(636)
						Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(636)
						tmp11 = ::Math_obj::sqrt(tmp16);
					}
					HX_STACK_LINE(636)
					colarb->stat_fric = tmp11;
				}
				HX_STACK_LINE(636)
				bool tmp11 = colarb->userdef_rfric;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(636)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(636)
				if ((tmp12)){
					HX_STACK_LINE(636)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(636)
					{
						HX_STACK_LINE(636)
						::zpp_nape::phys::ZPP_Material tmp14 = colarb->s1->material;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(636)
						Float tmp15 = tmp14->rollingFriction;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(636)
						::zpp_nape::phys::ZPP_Material tmp16 = colarb->s2->material;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(636)
						Float tmp17 = tmp16->rollingFriction;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(636)
						Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(636)
						tmp13 = ::Math_obj::sqrt(tmp18);
					}
					HX_STACK_LINE(636)
					colarb->rfric = tmp13;
				}
			}
		}
	}
	HX_STACK_LINE(637)
	Float tmp4 = colarb->dyn_fric;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(637)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_dynamicFriction,return )

Float CollisionArbiter_obj::set_dynamicFriction( Float dynamicFriction){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","set_dynamicFriction",0x8026f219,"nape.dynamics.CollisionArbiter.set_dynamicFriction","nape/dynamics/CollisionArbiter.hx",639,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dynamicFriction,"dynamicFriction")
	HX_STACK_LINE(640)
	{
		HX_STACK_LINE(642)
		::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(642)
		bool tmp1 = tmp->colarb->_mutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(642)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(642)
		if ((tmp2)){
			HX_STACK_LINE(642)
			::String tmp3 = HX_HCSTRING("Error: CollisionArbiter::dynamicFriction","\x34","\xa9","\x68","\xb0");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(642)
			::String tmp4 = (tmp3 + HX_HCSTRING(" is only mutable during a pre-handler","\xda","\x73","\x68","\x7a"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(642)
			HX_STACK_DO_THROW(tmp4);
		}
		HX_STACK_LINE(645)
		bool tmp3 = (dynamicFriction != dynamicFriction);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(645)
		if ((tmp3)){
			HX_STACK_LINE(645)
			::String tmp4 = HX_HCSTRING("Error: CollisionArbiter::dynamicFriction","\x34","\xa9","\x68","\xb0");		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(645)
			::String tmp5 = (tmp4 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(645)
			HX_STACK_DO_THROW(tmp5);
		}
		HX_STACK_LINE(646)
		bool tmp4 = (dynamicFriction < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(646)
		if ((tmp4)){
			HX_STACK_LINE(646)
			::String tmp5 = HX_HCSTRING("Error: CollisionArbiter::dynamicFriction","\x34","\xa9","\x68","\xb0");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(646)
			::String tmp6 = (tmp5 + HX_HCSTRING(" cannot be negative","\xf5","\x23","\xbe","\x15"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(646)
			HX_STACK_DO_THROW(tmp6);
		}
		HX_STACK_LINE(647)
		bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(647)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(647)
		if ((tmp5)){
			HX_STACK_LINE(647)
			tmp6 = (dynamicFriction > (int)1);
		}
		else{
			HX_STACK_LINE(647)
			tmp6 = false;
		}
		HX_STACK_LINE(647)
		if ((tmp6)){
			HX_STACK_LINE(647)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: CollisionArbiter::restitution cannot be greater than 1","\x73","\xfa","\x43","\xcc"));
		}
		HX_STACK_LINE(649)
		::zpp_nape::dynamics::ZPP_Arbiter tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(649)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp7->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(650)
		colarb->dyn_fric = dynamicFriction;
		HX_STACK_LINE(651)
		colarb->userdef_dyn_fric = true;
	}
	HX_STACK_LINE(653)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(653)
	{
		HX_STACK_LINE(653)
		::zpp_nape::dynamics::ZPP_Arbiter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(653)
		bool tmp2 = tmp1->active;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(653)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(653)
		if ((tmp3)){
			HX_STACK_LINE(653)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
		}
		HX_STACK_LINE(653)
		::zpp_nape::dynamics::ZPP_Arbiter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(653)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp4->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(653)
		{
			HX_STACK_LINE(653)
			bool tmp5 = colarb->invalidated;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(653)
			if ((tmp5)){
				HX_STACK_LINE(653)
				colarb->invalidated = false;
				HX_STACK_LINE(653)
				{
					HX_STACK_LINE(653)
					bool tmp6 = colarb->userdef_restitution;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(653)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(653)
					if ((tmp7)){
						HX_STACK_LINE(653)
						::zpp_nape::phys::ZPP_Material tmp8 = colarb->s1->material;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(653)
						Float tmp9 = tmp8->elasticity;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(653)
						Float tmp10 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(653)
						bool tmp11 = (tmp9 <= tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(653)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(653)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(653)
						if ((tmp12)){
							HX_STACK_LINE(653)
							::zpp_nape::phys::ZPP_Material tmp14 = colarb->s2->material;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(653)
							::zpp_nape::phys::ZPP_Material tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(653)
							Float tmp16 = tmp15->elasticity;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(653)
							Float tmp17 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(653)
							Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(653)
							tmp13 = (tmp16 <= tmp18);
						}
						else{
							HX_STACK_LINE(653)
							tmp13 = true;
						}
						HX_STACK_LINE(653)
						if ((tmp13)){
							HX_STACK_LINE(653)
							colarb->restitution = (int)0;
						}
						else{
							HX_STACK_LINE(653)
							::zpp_nape::phys::ZPP_Material tmp14 = colarb->s1->material;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(653)
							Float tmp15 = tmp14->elasticity;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(653)
							Float tmp16 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(653)
							bool tmp17 = (tmp15 >= tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(653)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(653)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(653)
							if ((tmp18)){
								HX_STACK_LINE(653)
								::zpp_nape::phys::ZPP_Material tmp20 = colarb->s2->material;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(653)
								::zpp_nape::phys::ZPP_Material tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(653)
								Float tmp22 = tmp21->elasticity;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(653)
								Float tmp23 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(653)
								Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(653)
								tmp19 = (tmp22 >= tmp24);
							}
							else{
								HX_STACK_LINE(653)
								tmp19 = true;
							}
							HX_STACK_LINE(653)
							if ((tmp19)){
								HX_STACK_LINE(653)
								colarb->restitution = (int)1;
							}
							else{
								HX_STACK_LINE(653)
								::zpp_nape::phys::ZPP_Material tmp20 = colarb->s1->material;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(653)
								Float tmp21 = tmp20->elasticity;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(653)
								::zpp_nape::phys::ZPP_Material tmp22 = colarb->s2->material;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(653)
								Float tmp23 = tmp22->elasticity;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(653)
								Float tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(653)
								Float tmp25 = (Float(tmp24) / Float((int)2));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(653)
								colarb->restitution = tmp25;
							}
						}
						HX_STACK_LINE(653)
						bool tmp14 = (colarb->restitution < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(653)
						if ((tmp14)){
							HX_STACK_LINE(653)
							colarb->restitution = (int)0;
						}
						HX_STACK_LINE(653)
						bool tmp15 = (colarb->restitution > (int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(653)
						if ((tmp15)){
							HX_STACK_LINE(653)
							colarb->restitution = (int)1;
						}
					}
					HX_STACK_LINE(653)
					bool tmp8 = colarb->userdef_dyn_fric;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(653)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(653)
					if ((tmp9)){
						HX_STACK_LINE(653)
						Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(653)
						{
							HX_STACK_LINE(653)
							::zpp_nape::phys::ZPP_Material tmp11 = colarb->s1->material;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(653)
							Float tmp12 = tmp11->dynamicFriction;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(653)
							::zpp_nape::phys::ZPP_Material tmp13 = colarb->s2->material;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(653)
							Float tmp14 = tmp13->dynamicFriction;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(653)
							Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(653)
							tmp10 = ::Math_obj::sqrt(tmp15);
						}
						HX_STACK_LINE(653)
						colarb->dyn_fric = tmp10;
					}
					HX_STACK_LINE(653)
					bool tmp10 = colarb->userdef_stat_fric;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(653)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(653)
					if ((tmp11)){
						HX_STACK_LINE(653)
						Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(653)
						{
							HX_STACK_LINE(653)
							::zpp_nape::phys::ZPP_Material tmp13 = colarb->s1->material;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(653)
							Float tmp14 = tmp13->staticFriction;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(653)
							::zpp_nape::phys::ZPP_Material tmp15 = colarb->s2->material;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(653)
							Float tmp16 = tmp15->staticFriction;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(653)
							Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(653)
							tmp12 = ::Math_obj::sqrt(tmp17);
						}
						HX_STACK_LINE(653)
						colarb->stat_fric = tmp12;
					}
					HX_STACK_LINE(653)
					bool tmp12 = colarb->userdef_rfric;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(653)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(653)
					if ((tmp13)){
						HX_STACK_LINE(653)
						Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(653)
						{
							HX_STACK_LINE(653)
							::zpp_nape::phys::ZPP_Material tmp15 = colarb->s1->material;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(653)
							Float tmp16 = tmp15->rollingFriction;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(653)
							::zpp_nape::phys::ZPP_Material tmp17 = colarb->s2->material;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(653)
							Float tmp18 = tmp17->rollingFriction;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(653)
							Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(653)
							tmp14 = ::Math_obj::sqrt(tmp19);
						}
						HX_STACK_LINE(653)
						colarb->rfric = tmp14;
					}
				}
			}
		}
		HX_STACK_LINE(653)
		tmp = colarb->dyn_fric;
	}
	HX_STACK_LINE(653)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionArbiter_obj,set_dynamicFriction,return )

Float CollisionArbiter_obj::get_staticFriction( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_staticFriction",0x9e3d86d4,"nape.dynamics.CollisionArbiter.get_staticFriction","nape/dynamics/CollisionArbiter.hx",666,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(668)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(668)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(668)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(668)
	if ((tmp2)){
		HX_STACK_LINE(668)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
	}
	HX_STACK_LINE(670)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(670)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp3->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(671)
	{
		HX_STACK_LINE(671)
		bool tmp4 = colarb->invalidated;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(671)
		if ((tmp4)){
			HX_STACK_LINE(671)
			colarb->invalidated = false;
			HX_STACK_LINE(671)
			{
				HX_STACK_LINE(671)
				bool tmp5 = colarb->userdef_restitution;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(671)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(671)
				if ((tmp6)){
					HX_STACK_LINE(671)
					::zpp_nape::phys::ZPP_Material tmp7 = colarb->s1->material;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(671)
					Float tmp8 = tmp7->elasticity;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(671)
					Float tmp9 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(671)
					bool tmp10 = (tmp8 <= tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(671)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(671)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(671)
					if ((tmp11)){
						HX_STACK_LINE(671)
						::zpp_nape::phys::ZPP_Material tmp13 = colarb->s2->material;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(671)
						::zpp_nape::phys::ZPP_Material tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(671)
						Float tmp15 = tmp14->elasticity;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(671)
						Float tmp16 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(671)
						Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(671)
						tmp12 = (tmp15 <= tmp17);
					}
					else{
						HX_STACK_LINE(671)
						tmp12 = true;
					}
					HX_STACK_LINE(671)
					if ((tmp12)){
						HX_STACK_LINE(671)
						colarb->restitution = (int)0;
					}
					else{
						HX_STACK_LINE(671)
						::zpp_nape::phys::ZPP_Material tmp13 = colarb->s1->material;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(671)
						Float tmp14 = tmp13->elasticity;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(671)
						Float tmp15 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(671)
						bool tmp16 = (tmp14 >= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(671)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(671)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(671)
						if ((tmp17)){
							HX_STACK_LINE(671)
							::zpp_nape::phys::ZPP_Material tmp19 = colarb->s2->material;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(671)
							::zpp_nape::phys::ZPP_Material tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(671)
							Float tmp21 = tmp20->elasticity;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(671)
							Float tmp22 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(671)
							Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(671)
							tmp18 = (tmp21 >= tmp23);
						}
						else{
							HX_STACK_LINE(671)
							tmp18 = true;
						}
						HX_STACK_LINE(671)
						if ((tmp18)){
							HX_STACK_LINE(671)
							colarb->restitution = (int)1;
						}
						else{
							HX_STACK_LINE(671)
							::zpp_nape::phys::ZPP_Material tmp19 = colarb->s1->material;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(671)
							Float tmp20 = tmp19->elasticity;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(671)
							::zpp_nape::phys::ZPP_Material tmp21 = colarb->s2->material;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(671)
							Float tmp22 = tmp21->elasticity;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(671)
							Float tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(671)
							Float tmp24 = (Float(tmp23) / Float((int)2));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(671)
							colarb->restitution = tmp24;
						}
					}
					HX_STACK_LINE(671)
					bool tmp13 = (colarb->restitution < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(671)
					if ((tmp13)){
						HX_STACK_LINE(671)
						colarb->restitution = (int)0;
					}
					HX_STACK_LINE(671)
					bool tmp14 = (colarb->restitution > (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(671)
					if ((tmp14)){
						HX_STACK_LINE(671)
						colarb->restitution = (int)1;
					}
				}
				HX_STACK_LINE(671)
				bool tmp7 = colarb->userdef_dyn_fric;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(671)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(671)
				if ((tmp8)){
					HX_STACK_LINE(671)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(671)
					{
						HX_STACK_LINE(671)
						::zpp_nape::phys::ZPP_Material tmp10 = colarb->s1->material;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(671)
						Float tmp11 = tmp10->dynamicFriction;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(671)
						::zpp_nape::phys::ZPP_Material tmp12 = colarb->s2->material;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(671)
						Float tmp13 = tmp12->dynamicFriction;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(671)
						Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(671)
						tmp9 = ::Math_obj::sqrt(tmp14);
					}
					HX_STACK_LINE(671)
					colarb->dyn_fric = tmp9;
				}
				HX_STACK_LINE(671)
				bool tmp9 = colarb->userdef_stat_fric;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(671)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(671)
				if ((tmp10)){
					HX_STACK_LINE(671)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(671)
					{
						HX_STACK_LINE(671)
						::zpp_nape::phys::ZPP_Material tmp12 = colarb->s1->material;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(671)
						Float tmp13 = tmp12->staticFriction;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(671)
						::zpp_nape::phys::ZPP_Material tmp14 = colarb->s2->material;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(671)
						Float tmp15 = tmp14->staticFriction;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(671)
						Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(671)
						tmp11 = ::Math_obj::sqrt(tmp16);
					}
					HX_STACK_LINE(671)
					colarb->stat_fric = tmp11;
				}
				HX_STACK_LINE(671)
				bool tmp11 = colarb->userdef_rfric;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(671)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(671)
				if ((tmp12)){
					HX_STACK_LINE(671)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(671)
					{
						HX_STACK_LINE(671)
						::zpp_nape::phys::ZPP_Material tmp14 = colarb->s1->material;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(671)
						Float tmp15 = tmp14->rollingFriction;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(671)
						::zpp_nape::phys::ZPP_Material tmp16 = colarb->s2->material;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(671)
						Float tmp17 = tmp16->rollingFriction;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(671)
						Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(671)
						tmp13 = ::Math_obj::sqrt(tmp18);
					}
					HX_STACK_LINE(671)
					colarb->rfric = tmp13;
				}
			}
		}
	}
	HX_STACK_LINE(672)
	Float tmp4 = colarb->stat_fric;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(672)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_staticFriction,return )

Float CollisionArbiter_obj::set_staticFriction( Float staticFriction){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","set_staticFriction",0x7aecb948,"nape.dynamics.CollisionArbiter.set_staticFriction","nape/dynamics/CollisionArbiter.hx",674,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(staticFriction,"staticFriction")
	HX_STACK_LINE(675)
	{
		HX_STACK_LINE(677)
		::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(677)
		bool tmp1 = tmp->colarb->_mutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(677)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(677)
		if ((tmp2)){
			HX_STACK_LINE(677)
			::String tmp3 = HX_HCSTRING("Error: CollisionArbiter::staticFriction","\x8d","\x9e","\xb3","\x58");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(677)
			::String tmp4 = (tmp3 + HX_HCSTRING(" is only mutable during a pre-handler","\xda","\x73","\x68","\x7a"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(677)
			HX_STACK_DO_THROW(tmp4);
		}
		HX_STACK_LINE(680)
		bool tmp3 = (staticFriction != staticFriction);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(680)
		if ((tmp3)){
			HX_STACK_LINE(680)
			::String tmp4 = HX_HCSTRING("Error: CollisionArbiter::staticFriction","\x8d","\x9e","\xb3","\x58");		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(680)
			::String tmp5 = (tmp4 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(680)
			HX_STACK_DO_THROW(tmp5);
		}
		HX_STACK_LINE(681)
		bool tmp4 = (staticFriction < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(681)
		if ((tmp4)){
			HX_STACK_LINE(681)
			::String tmp5 = HX_HCSTRING("Error: CollisionArbiter::staticFriction","\x8d","\x9e","\xb3","\x58");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(681)
			::String tmp6 = (tmp5 + HX_HCSTRING(" cannot be negative","\xf5","\x23","\xbe","\x15"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(681)
			HX_STACK_DO_THROW(tmp6);
		}
		HX_STACK_LINE(682)
		bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(682)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(682)
		if ((tmp5)){
			HX_STACK_LINE(682)
			tmp6 = (staticFriction > (int)1);
		}
		else{
			HX_STACK_LINE(682)
			tmp6 = false;
		}
		HX_STACK_LINE(682)
		if ((tmp6)){
			HX_STACK_LINE(682)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: CollisionArbiter::restitution cannot be greater than 1","\x73","\xfa","\x43","\xcc"));
		}
		HX_STACK_LINE(684)
		::zpp_nape::dynamics::ZPP_Arbiter tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(684)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp7->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(685)
		colarb->stat_fric = staticFriction;
		HX_STACK_LINE(686)
		colarb->userdef_stat_fric = true;
	}
	HX_STACK_LINE(688)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(688)
	{
		HX_STACK_LINE(688)
		::zpp_nape::dynamics::ZPP_Arbiter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(688)
		bool tmp2 = tmp1->active;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(688)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(688)
		if ((tmp3)){
			HX_STACK_LINE(688)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
		}
		HX_STACK_LINE(688)
		::zpp_nape::dynamics::ZPP_Arbiter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(688)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp4->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(688)
			bool tmp5 = colarb->invalidated;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(688)
			if ((tmp5)){
				HX_STACK_LINE(688)
				colarb->invalidated = false;
				HX_STACK_LINE(688)
				{
					HX_STACK_LINE(688)
					bool tmp6 = colarb->userdef_restitution;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(688)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(688)
					if ((tmp7)){
						HX_STACK_LINE(688)
						::zpp_nape::phys::ZPP_Material tmp8 = colarb->s1->material;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(688)
						Float tmp9 = tmp8->elasticity;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(688)
						Float tmp10 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(688)
						bool tmp11 = (tmp9 <= tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(688)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(688)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(688)
						if ((tmp12)){
							HX_STACK_LINE(688)
							::zpp_nape::phys::ZPP_Material tmp14 = colarb->s2->material;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(688)
							::zpp_nape::phys::ZPP_Material tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(688)
							Float tmp16 = tmp15->elasticity;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(688)
							Float tmp17 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(688)
							Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(688)
							tmp13 = (tmp16 <= tmp18);
						}
						else{
							HX_STACK_LINE(688)
							tmp13 = true;
						}
						HX_STACK_LINE(688)
						if ((tmp13)){
							HX_STACK_LINE(688)
							colarb->restitution = (int)0;
						}
						else{
							HX_STACK_LINE(688)
							::zpp_nape::phys::ZPP_Material tmp14 = colarb->s1->material;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(688)
							Float tmp15 = tmp14->elasticity;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(688)
							Float tmp16 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(688)
							bool tmp17 = (tmp15 >= tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(688)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(688)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(688)
							if ((tmp18)){
								HX_STACK_LINE(688)
								::zpp_nape::phys::ZPP_Material tmp20 = colarb->s2->material;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(688)
								::zpp_nape::phys::ZPP_Material tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(688)
								Float tmp22 = tmp21->elasticity;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(688)
								Float tmp23 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(688)
								Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(688)
								tmp19 = (tmp22 >= tmp24);
							}
							else{
								HX_STACK_LINE(688)
								tmp19 = true;
							}
							HX_STACK_LINE(688)
							if ((tmp19)){
								HX_STACK_LINE(688)
								colarb->restitution = (int)1;
							}
							else{
								HX_STACK_LINE(688)
								::zpp_nape::phys::ZPP_Material tmp20 = colarb->s1->material;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(688)
								Float tmp21 = tmp20->elasticity;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(688)
								::zpp_nape::phys::ZPP_Material tmp22 = colarb->s2->material;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(688)
								Float tmp23 = tmp22->elasticity;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(688)
								Float tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(688)
								Float tmp25 = (Float(tmp24) / Float((int)2));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(688)
								colarb->restitution = tmp25;
							}
						}
						HX_STACK_LINE(688)
						bool tmp14 = (colarb->restitution < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(688)
						if ((tmp14)){
							HX_STACK_LINE(688)
							colarb->restitution = (int)0;
						}
						HX_STACK_LINE(688)
						bool tmp15 = (colarb->restitution > (int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(688)
						if ((tmp15)){
							HX_STACK_LINE(688)
							colarb->restitution = (int)1;
						}
					}
					HX_STACK_LINE(688)
					bool tmp8 = colarb->userdef_dyn_fric;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(688)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(688)
					if ((tmp9)){
						HX_STACK_LINE(688)
						Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(688)
						{
							HX_STACK_LINE(688)
							::zpp_nape::phys::ZPP_Material tmp11 = colarb->s1->material;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(688)
							Float tmp12 = tmp11->dynamicFriction;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(688)
							::zpp_nape::phys::ZPP_Material tmp13 = colarb->s2->material;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(688)
							Float tmp14 = tmp13->dynamicFriction;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(688)
							Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(688)
							tmp10 = ::Math_obj::sqrt(tmp15);
						}
						HX_STACK_LINE(688)
						colarb->dyn_fric = tmp10;
					}
					HX_STACK_LINE(688)
					bool tmp10 = colarb->userdef_stat_fric;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(688)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(688)
					if ((tmp11)){
						HX_STACK_LINE(688)
						Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(688)
						{
							HX_STACK_LINE(688)
							::zpp_nape::phys::ZPP_Material tmp13 = colarb->s1->material;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(688)
							Float tmp14 = tmp13->staticFriction;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(688)
							::zpp_nape::phys::ZPP_Material tmp15 = colarb->s2->material;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(688)
							Float tmp16 = tmp15->staticFriction;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(688)
							Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(688)
							tmp12 = ::Math_obj::sqrt(tmp17);
						}
						HX_STACK_LINE(688)
						colarb->stat_fric = tmp12;
					}
					HX_STACK_LINE(688)
					bool tmp12 = colarb->userdef_rfric;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(688)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(688)
					if ((tmp13)){
						HX_STACK_LINE(688)
						Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(688)
						{
							HX_STACK_LINE(688)
							::zpp_nape::phys::ZPP_Material tmp15 = colarb->s1->material;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(688)
							Float tmp16 = tmp15->rollingFriction;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(688)
							::zpp_nape::phys::ZPP_Material tmp17 = colarb->s2->material;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(688)
							Float tmp18 = tmp17->rollingFriction;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(688)
							Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(688)
							tmp14 = ::Math_obj::sqrt(tmp19);
						}
						HX_STACK_LINE(688)
						colarb->rfric = tmp14;
					}
				}
			}
		}
		HX_STACK_LINE(688)
		tmp = colarb->stat_fric;
	}
	HX_STACK_LINE(688)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionArbiter_obj,set_staticFriction,return )

Float CollisionArbiter_obj::get_rollingFriction( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_rollingFriction",0x20008313,"nape.dynamics.CollisionArbiter.get_rollingFriction","nape/dynamics/CollisionArbiter.hx",701,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(703)
	::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(703)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(703)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(703)
	if ((tmp2)){
		HX_STACK_LINE(703)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
	}
	HX_STACK_LINE(705)
	::zpp_nape::dynamics::ZPP_Arbiter tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(705)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp3->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(706)
	{
		HX_STACK_LINE(706)
		bool tmp4 = colarb->invalidated;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(706)
		if ((tmp4)){
			HX_STACK_LINE(706)
			colarb->invalidated = false;
			HX_STACK_LINE(706)
			{
				HX_STACK_LINE(706)
				bool tmp5 = colarb->userdef_restitution;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(706)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(706)
				if ((tmp6)){
					HX_STACK_LINE(706)
					::zpp_nape::phys::ZPP_Material tmp7 = colarb->s1->material;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(706)
					Float tmp8 = tmp7->elasticity;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(706)
					Float tmp9 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(706)
					bool tmp10 = (tmp8 <= tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(706)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(706)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(706)
					if ((tmp11)){
						HX_STACK_LINE(706)
						::zpp_nape::phys::ZPP_Material tmp13 = colarb->s2->material;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(706)
						::zpp_nape::phys::ZPP_Material tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(706)
						Float tmp15 = tmp14->elasticity;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(706)
						Float tmp16 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(706)
						Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(706)
						tmp12 = (tmp15 <= tmp17);
					}
					else{
						HX_STACK_LINE(706)
						tmp12 = true;
					}
					HX_STACK_LINE(706)
					if ((tmp12)){
						HX_STACK_LINE(706)
						colarb->restitution = (int)0;
					}
					else{
						HX_STACK_LINE(706)
						::zpp_nape::phys::ZPP_Material tmp13 = colarb->s1->material;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(706)
						Float tmp14 = tmp13->elasticity;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(706)
						Float tmp15 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(706)
						bool tmp16 = (tmp14 >= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(706)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(706)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(706)
						if ((tmp17)){
							HX_STACK_LINE(706)
							::zpp_nape::phys::ZPP_Material tmp19 = colarb->s2->material;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(706)
							::zpp_nape::phys::ZPP_Material tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(706)
							Float tmp21 = tmp20->elasticity;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(706)
							Float tmp22 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(706)
							Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(706)
							tmp18 = (tmp21 >= tmp23);
						}
						else{
							HX_STACK_LINE(706)
							tmp18 = true;
						}
						HX_STACK_LINE(706)
						if ((tmp18)){
							HX_STACK_LINE(706)
							colarb->restitution = (int)1;
						}
						else{
							HX_STACK_LINE(706)
							::zpp_nape::phys::ZPP_Material tmp19 = colarb->s1->material;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(706)
							Float tmp20 = tmp19->elasticity;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(706)
							::zpp_nape::phys::ZPP_Material tmp21 = colarb->s2->material;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(706)
							Float tmp22 = tmp21->elasticity;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(706)
							Float tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(706)
							Float tmp24 = (Float(tmp23) / Float((int)2));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(706)
							colarb->restitution = tmp24;
						}
					}
					HX_STACK_LINE(706)
					bool tmp13 = (colarb->restitution < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(706)
					if ((tmp13)){
						HX_STACK_LINE(706)
						colarb->restitution = (int)0;
					}
					HX_STACK_LINE(706)
					bool tmp14 = (colarb->restitution > (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(706)
					if ((tmp14)){
						HX_STACK_LINE(706)
						colarb->restitution = (int)1;
					}
				}
				HX_STACK_LINE(706)
				bool tmp7 = colarb->userdef_dyn_fric;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(706)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(706)
				if ((tmp8)){
					HX_STACK_LINE(706)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(706)
					{
						HX_STACK_LINE(706)
						::zpp_nape::phys::ZPP_Material tmp10 = colarb->s1->material;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(706)
						Float tmp11 = tmp10->dynamicFriction;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(706)
						::zpp_nape::phys::ZPP_Material tmp12 = colarb->s2->material;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(706)
						Float tmp13 = tmp12->dynamicFriction;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(706)
						Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(706)
						tmp9 = ::Math_obj::sqrt(tmp14);
					}
					HX_STACK_LINE(706)
					colarb->dyn_fric = tmp9;
				}
				HX_STACK_LINE(706)
				bool tmp9 = colarb->userdef_stat_fric;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(706)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(706)
				if ((tmp10)){
					HX_STACK_LINE(706)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(706)
					{
						HX_STACK_LINE(706)
						::zpp_nape::phys::ZPP_Material tmp12 = colarb->s1->material;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(706)
						Float tmp13 = tmp12->staticFriction;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(706)
						::zpp_nape::phys::ZPP_Material tmp14 = colarb->s2->material;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(706)
						Float tmp15 = tmp14->staticFriction;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(706)
						Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(706)
						tmp11 = ::Math_obj::sqrt(tmp16);
					}
					HX_STACK_LINE(706)
					colarb->stat_fric = tmp11;
				}
				HX_STACK_LINE(706)
				bool tmp11 = colarb->userdef_rfric;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(706)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(706)
				if ((tmp12)){
					HX_STACK_LINE(706)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(706)
					{
						HX_STACK_LINE(706)
						::zpp_nape::phys::ZPP_Material tmp14 = colarb->s1->material;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(706)
						Float tmp15 = tmp14->rollingFriction;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(706)
						::zpp_nape::phys::ZPP_Material tmp16 = colarb->s2->material;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(706)
						Float tmp17 = tmp16->rollingFriction;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(706)
						Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(706)
						tmp13 = ::Math_obj::sqrt(tmp18);
					}
					HX_STACK_LINE(706)
					colarb->rfric = tmp13;
				}
			}
		}
	}
	HX_STACK_LINE(707)
	Float tmp4 = colarb->rfric;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(707)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_rollingFriction,return )

Float CollisionArbiter_obj::set_rollingFriction( Float rollingFriction){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","set_rollingFriction",0x5c9d761f,"nape.dynamics.CollisionArbiter.set_rollingFriction","nape/dynamics/CollisionArbiter.hx",709,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rollingFriction,"rollingFriction")
	HX_STACK_LINE(710)
	{
		HX_STACK_LINE(712)
		::zpp_nape::dynamics::ZPP_Arbiter tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(712)
		bool tmp1 = tmp->colarb->_mutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(712)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(712)
		if ((tmp2)){
			HX_STACK_LINE(712)
			::String tmp3 = HX_HCSTRING("Error: CollisionArbiter::rollingFriction","\x3a","\x2d","\xdf","\x8c");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(712)
			::String tmp4 = (tmp3 + HX_HCSTRING(" is only mutable during a pre-handler","\xda","\x73","\x68","\x7a"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(712)
			HX_STACK_DO_THROW(tmp4);
		}
		HX_STACK_LINE(715)
		bool tmp3 = (rollingFriction != rollingFriction);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(715)
		if ((tmp3)){
			HX_STACK_LINE(715)
			::String tmp4 = HX_HCSTRING("Error: CollisionArbiter::rollingFriction","\x3a","\x2d","\xdf","\x8c");		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(715)
			::String tmp5 = (tmp4 + HX_HCSTRING(" cannot be NaN","\x1b","\x77","\x40","\x38"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(715)
			HX_STACK_DO_THROW(tmp5);
		}
		HX_STACK_LINE(716)
		bool tmp4 = (rollingFriction < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(716)
		if ((tmp4)){
			HX_STACK_LINE(716)
			::String tmp5 = HX_HCSTRING("Error: CollisionArbiter::rollingFriction","\x3a","\x2d","\xdf","\x8c");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(716)
			::String tmp6 = (tmp5 + HX_HCSTRING(" cannot be negative","\xf5","\x23","\xbe","\x15"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(716)
			HX_STACK_DO_THROW(tmp6);
		}
		HX_STACK_LINE(717)
		bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(717)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(717)
		if ((tmp5)){
			HX_STACK_LINE(717)
			tmp6 = (rollingFriction > (int)1);
		}
		else{
			HX_STACK_LINE(717)
			tmp6 = false;
		}
		HX_STACK_LINE(717)
		if ((tmp6)){
			HX_STACK_LINE(717)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: CollisionArbiter::restitution cannot be greater than 1","\x73","\xfa","\x43","\xcc"));
		}
		HX_STACK_LINE(719)
		::zpp_nape::dynamics::ZPP_Arbiter tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(719)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp7->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(720)
		colarb->rfric = rollingFriction;
		HX_STACK_LINE(721)
		colarb->userdef_rfric = true;
	}
	HX_STACK_LINE(723)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(723)
	{
		HX_STACK_LINE(723)
		::zpp_nape::dynamics::ZPP_Arbiter tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(723)
		bool tmp2 = tmp1->active;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(723)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(723)
		if ((tmp3)){
			HX_STACK_LINE(723)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Arbiter not currently in use","\x18","\x2d","\x13","\xa7"));
		}
		HX_STACK_LINE(723)
		::zpp_nape::dynamics::ZPP_Arbiter tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(723)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = tmp4->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(723)
		{
			HX_STACK_LINE(723)
			bool tmp5 = colarb->invalidated;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(723)
			if ((tmp5)){
				HX_STACK_LINE(723)
				colarb->invalidated = false;
				HX_STACK_LINE(723)
				{
					HX_STACK_LINE(723)
					bool tmp6 = colarb->userdef_restitution;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(723)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(723)
					if ((tmp7)){
						HX_STACK_LINE(723)
						::zpp_nape::phys::ZPP_Material tmp8 = colarb->s1->material;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(723)
						Float tmp9 = tmp8->elasticity;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(723)
						Float tmp10 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(723)
						bool tmp11 = (tmp9 <= tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(723)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(723)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(723)
						if ((tmp12)){
							HX_STACK_LINE(723)
							::zpp_nape::phys::ZPP_Material tmp14 = colarb->s2->material;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(723)
							::zpp_nape::phys::ZPP_Material tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(723)
							Float tmp16 = tmp15->elasticity;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(723)
							Float tmp17 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(723)
							Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(723)
							tmp13 = (tmp16 <= tmp18);
						}
						else{
							HX_STACK_LINE(723)
							tmp13 = true;
						}
						HX_STACK_LINE(723)
						if ((tmp13)){
							HX_STACK_LINE(723)
							colarb->restitution = (int)0;
						}
						else{
							HX_STACK_LINE(723)
							::zpp_nape::phys::ZPP_Material tmp14 = colarb->s1->material;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(723)
							Float tmp15 = tmp14->elasticity;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(723)
							Float tmp16 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(723)
							bool tmp17 = (tmp15 >= tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(723)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(723)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(723)
							if ((tmp18)){
								HX_STACK_LINE(723)
								::zpp_nape::phys::ZPP_Material tmp20 = colarb->s2->material;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(723)
								::zpp_nape::phys::ZPP_Material tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(723)
								Float tmp22 = tmp21->elasticity;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(723)
								Float tmp23 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(723)
								Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(723)
								tmp19 = (tmp22 >= tmp24);
							}
							else{
								HX_STACK_LINE(723)
								tmp19 = true;
							}
							HX_STACK_LINE(723)
							if ((tmp19)){
								HX_STACK_LINE(723)
								colarb->restitution = (int)1;
							}
							else{
								HX_STACK_LINE(723)
								::zpp_nape::phys::ZPP_Material tmp20 = colarb->s1->material;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(723)
								Float tmp21 = tmp20->elasticity;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(723)
								::zpp_nape::phys::ZPP_Material tmp22 = colarb->s2->material;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(723)
								Float tmp23 = tmp22->elasticity;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(723)
								Float tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(723)
								Float tmp25 = (Float(tmp24) / Float((int)2));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(723)
								colarb->restitution = tmp25;
							}
						}
						HX_STACK_LINE(723)
						bool tmp14 = (colarb->restitution < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(723)
						if ((tmp14)){
							HX_STACK_LINE(723)
							colarb->restitution = (int)0;
						}
						HX_STACK_LINE(723)
						bool tmp15 = (colarb->restitution > (int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(723)
						if ((tmp15)){
							HX_STACK_LINE(723)
							colarb->restitution = (int)1;
						}
					}
					HX_STACK_LINE(723)
					bool tmp8 = colarb->userdef_dyn_fric;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(723)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(723)
					if ((tmp9)){
						HX_STACK_LINE(723)
						Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(723)
						{
							HX_STACK_LINE(723)
							::zpp_nape::phys::ZPP_Material tmp11 = colarb->s1->material;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(723)
							Float tmp12 = tmp11->dynamicFriction;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(723)
							::zpp_nape::phys::ZPP_Material tmp13 = colarb->s2->material;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(723)
							Float tmp14 = tmp13->dynamicFriction;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(723)
							Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(723)
							tmp10 = ::Math_obj::sqrt(tmp15);
						}
						HX_STACK_LINE(723)
						colarb->dyn_fric = tmp10;
					}
					HX_STACK_LINE(723)
					bool tmp10 = colarb->userdef_stat_fric;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(723)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(723)
					if ((tmp11)){
						HX_STACK_LINE(723)
						Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(723)
						{
							HX_STACK_LINE(723)
							::zpp_nape::phys::ZPP_Material tmp13 = colarb->s1->material;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(723)
							Float tmp14 = tmp13->staticFriction;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(723)
							::zpp_nape::phys::ZPP_Material tmp15 = colarb->s2->material;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(723)
							Float tmp16 = tmp15->staticFriction;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(723)
							Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(723)
							tmp12 = ::Math_obj::sqrt(tmp17);
						}
						HX_STACK_LINE(723)
						colarb->stat_fric = tmp12;
					}
					HX_STACK_LINE(723)
					bool tmp12 = colarb->userdef_rfric;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(723)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(723)
					if ((tmp13)){
						HX_STACK_LINE(723)
						Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(723)
						{
							HX_STACK_LINE(723)
							::zpp_nape::phys::ZPP_Material tmp15 = colarb->s1->material;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(723)
							Float tmp16 = tmp15->rollingFriction;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(723)
							::zpp_nape::phys::ZPP_Material tmp17 = colarb->s2->material;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(723)
							Float tmp18 = tmp17->rollingFriction;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(723)
							Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(723)
							tmp14 = ::Math_obj::sqrt(tmp19);
						}
						HX_STACK_LINE(723)
						colarb->rfric = tmp14;
					}
				}
			}
		}
		HX_STACK_LINE(723)
		tmp = colarb->rfric;
	}
	HX_STACK_LINE(723)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionArbiter_obj,set_rollingFriction,return )


CollisionArbiter_obj::CollisionArbiter_obj()
{
}

Dynamic CollisionArbiter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { if (inCallProp == hx::paccAlways) return get_normal(); }
		if (HX_FIELD_EQ(inName,"radius") ) { if (inCallProp == hx::paccAlways) return get_radius(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contacts") ) { if (inCallProp == hx::paccAlways) return get_contacts(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_normal") ) { return get_normal_dyn(); }
		if (HX_FIELD_EQ(inName,"get_radius") ) { return get_radius_dyn(); }
		if (HX_FIELD_EQ(inName,"elasticity") ) { if (inCallProp == hx::paccAlways) return get_elasticity(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstVertex") ) { return firstVertex_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_contacts") ) { return get_contacts_dyn(); }
		if (HX_FIELD_EQ(inName,"secondVertex") ) { return secondVertex_dyn(); }
		if (HX_FIELD_EQ(inName,"totalImpulse") ) { return totalImpulse_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"normalImpulse") ) { return normalImpulse_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"referenceEdge1") ) { if (inCallProp == hx::paccAlways) return get_referenceEdge1(); }
		if (HX_FIELD_EQ(inName,"referenceEdge2") ) { if (inCallProp == hx::paccAlways) return get_referenceEdge2(); }
		if (HX_FIELD_EQ(inName,"tangentImpulse") ) { return tangentImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"rollingImpulse") ) { return rollingImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"get_elasticity") ) { return get_elasticity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_elasticity") ) { return set_elasticity_dyn(); }
		if (HX_FIELD_EQ(inName,"staticFriction") ) { if (inCallProp == hx::paccAlways) return get_staticFriction(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dynamicFriction") ) { if (inCallProp == hx::paccAlways) return get_dynamicFriction(); }
		if (HX_FIELD_EQ(inName,"rollingFriction") ) { if (inCallProp == hx::paccAlways) return get_rollingFriction(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_referenceEdge1") ) { return get_referenceEdge1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_referenceEdge2") ) { return get_referenceEdge2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_staticFriction") ) { return get_staticFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_staticFriction") ) { return set_staticFriction_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_dynamicFriction") ) { return get_dynamicFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dynamicFriction") ) { return set_dynamicFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rollingFriction") ) { return get_rollingFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rollingFriction") ) { return set_rollingFriction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CollisionArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { if (inCallProp == hx::paccAlways) return set_elasticity(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"staticFriction") ) { if (inCallProp == hx::paccAlways) return set_staticFriction(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dynamicFriction") ) { if (inCallProp == hx::paccAlways) return set_dynamicFriction(inValue); }
		if (HX_FIELD_EQ(inName,"rollingFriction") ) { if (inCallProp == hx::paccAlways) return set_rollingFriction(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CollisionArbiter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void CollisionArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("contacts","\xd3","\xd1","\x76","\x2c"));
	outFields->push(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
	outFields->push(HX_HCSTRING("radius","\x52","\xd0","\xf6","\xb0"));
	outFields->push(HX_HCSTRING("referenceEdge1","\x89","\xb5","\x21","\x22"));
	outFields->push(HX_HCSTRING("referenceEdge2","\x8a","\xb5","\x21","\x22"));
	outFields->push(HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d"));
	outFields->push(HX_HCSTRING("dynamicFriction","\x99","\xeb","\x8a","\xda"));
	outFields->push(HX_HCSTRING("staticFriction","\xc8","\x6f","\xc8","\x40"));
	outFields->push(HX_HCSTRING("rollingFriction","\x9f","\x6f","\x01","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_contacts","\xdc","\x85","\x90","\xe1"),
	HX_HCSTRING("get_normal","\xf0","\xe1","\xf0","\x20"),
	HX_HCSTRING("get_radius","\x1b","\x40","\x7e","\xa1"),
	HX_HCSTRING("get_referenceEdge1","\x52","\x96","\xbb","\xbd"),
	HX_HCSTRING("get_referenceEdge2","\x53","\x96","\xbb","\xbd"),
	HX_HCSTRING("firstVertex","\xb4","\x0b","\xea","\x85"),
	HX_HCSTRING("secondVertex","\xf8","\x2d","\x23","\xdc"),
	HX_HCSTRING("normalImpulse","\x4e","\xa9","\x46","\x07"),
	HX_HCSTRING("tangentImpulse","\x70","\x2e","\x3e","\x65"),
	HX_HCSTRING("totalImpulse","\x51","\xe5","\xbb","\x16"),
	HX_HCSTRING("rollingImpulse","\xb0","\xb5","\xdd","\xca"),
	HX_HCSTRING("get_elasticity","\xc2","\xab","\xa9","\xc3"),
	HX_HCSTRING("set_elasticity","\x36","\x94","\xc9","\xe3"),
	HX_HCSTRING("get_dynamicFriction","\xb0","\xba","\x95","\x65"),
	HX_HCSTRING("set_dynamicFriction","\xbc","\xad","\x32","\xa2"),
	HX_HCSTRING("get_staticFriction","\x91","\x50","\x62","\xdc"),
	HX_HCSTRING("set_staticFriction","\x05","\x83","\x11","\xb9"),
	HX_HCSTRING("get_rollingFriction","\xb6","\x3e","\x0c","\x42"),
	HX_HCSTRING("set_rollingFriction","\xc2","\x31","\xa9","\x7e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CollisionArbiter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollisionArbiter_obj::__mClass,"__mClass");
};

#endif

hx::Class CollisionArbiter_obj::__mClass;

void CollisionArbiter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.dynamics.CollisionArbiter","\x4b","\xa8","\xe3","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &CollisionArbiter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CollisionArbiter_obj >;
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
} // end namespace dynamics
