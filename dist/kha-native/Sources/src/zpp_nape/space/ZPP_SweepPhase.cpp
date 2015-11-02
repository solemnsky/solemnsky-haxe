#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
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
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
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
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Broadphase
#include <zpp_nape/space/ZPP_Broadphase.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_SweepData
#include <zpp_nape/space/ZPP_SweepData.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_SweepPhase
#include <zpp_nape/space/ZPP_SweepPhase.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_SweepPhase_obj::__construct(::zpp_nape::space::ZPP_Space space)
{
HX_STACK_FRAME("zpp_nape.space.ZPP_SweepPhase","new",0x56ef2fef,"zpp_nape.space.ZPP_SweepPhase.new","zpp_nape/space/SweepPhase.hx",221,0x6f338844)
HX_STACK_THIS(this)
HX_STACK_ARG(space,"space")
{
	HX_STACK_LINE(498)
	this->failed = null();
	HX_STACK_LINE(222)
	this->list = null();
	HX_STACK_LINE(223)
	super::__construct();
	HX_STACK_LINE(224)
	this->space = space;
	HX_STACK_LINE(225)
	this->is_sweep = true;
	HX_STACK_LINE(226)
	this->sweep = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//ZPP_SweepPhase_obj::~ZPP_SweepPhase_obj() { }

Dynamic ZPP_SweepPhase_obj::__CreateEmpty() { return  new ZPP_SweepPhase_obj; }
hx::ObjectPtr< ZPP_SweepPhase_obj > ZPP_SweepPhase_obj::__new(::zpp_nape::space::ZPP_Space space)
{  hx::ObjectPtr< ZPP_SweepPhase_obj > _result_ = new ZPP_SweepPhase_obj();
	_result_->__construct(space);
	return _result_;}

Dynamic ZPP_SweepPhase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SweepPhase_obj > _result_ = new ZPP_SweepPhase_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void ZPP_SweepPhase_obj::__insert( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_SweepPhase","__insert",0x31e1886a,"zpp_nape.space.ZPP_SweepPhase.__insert","zpp_nape/space/SweepPhase.hx",228,0x6f338844)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(237)
		::zpp_nape::space::ZPP_SweepData dat;		HX_STACK_VAR(dat,"dat");
		HX_STACK_LINE(238)
		{
			HX_STACK_LINE(239)
			::zpp_nape::space::ZPP_SweepData tmp = ::zpp_nape::space::ZPP_SweepData_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(239)
			bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(239)
			if ((tmp1)){
				HX_STACK_LINE(240)
				::zpp_nape::space::ZPP_SweepData tmp2 = ::zpp_nape::space::ZPP_SweepData_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(240)
				dat = tmp2;
			}
			else{
				HX_STACK_LINE(246)
				::zpp_nape::space::ZPP_SweepData tmp2 = ::zpp_nape::space::ZPP_SweepData_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(246)
				dat = tmp2;
				HX_STACK_LINE(247)
				::zpp_nape::space::ZPP_SweepData_obj::zpp_pool = dat->next;
				HX_STACK_LINE(248)
				dat->next = null();
			}
			HX_STACK_LINE(253)
			Dynamic();
		}
		HX_STACK_LINE(255)
		shape->sweep = dat;
		HX_STACK_LINE(256)
		dat->shape = shape;
		HX_STACK_LINE(257)
		dat->aabb = shape->aabb;
		HX_STACK_LINE(258)
		::zpp_nape::space::ZPP_SweepData tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		dat->next = tmp;
		HX_STACK_LINE(259)
		::zpp_nape::space::ZPP_SweepData tmp1 = this->list;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(259)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(259)
		if ((tmp2)){
			HX_STACK_LINE(259)
			::zpp_nape::space::ZPP_SweepData tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(259)
			tmp3->prev = dat;
		}
		HX_STACK_LINE(260)
		this->list = dat;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_SweepPhase_obj,__insert,(void))

Void ZPP_SweepPhase_obj::__remove( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_SweepPhase","__remove",0x988ce175,"zpp_nape.space.ZPP_SweepPhase.__remove","zpp_nape/space/SweepPhase.hx",262,0x6f338844)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(271)
		::zpp_nape::space::ZPP_SweepData dat = shape->sweep;		HX_STACK_VAR(dat,"dat");
		HX_STACK_LINE(272)
		bool tmp = (dat->prev == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(272)
		if ((tmp)){
			HX_STACK_LINE(272)
			this->list = dat->next;
		}
		else{
			HX_STACK_LINE(273)
			dat->prev->next = dat->next;
		}
		HX_STACK_LINE(274)
		bool tmp1 = (dat->next != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(274)
		if ((tmp1)){
			HX_STACK_LINE(274)
			dat->next->prev = dat->prev;
		}
		HX_STACK_LINE(275)
		shape->sweep = null();
		HX_STACK_LINE(276)
		{
			HX_STACK_LINE(277)
			::zpp_nape::space::ZPP_SweepData o = dat;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				o->prev = null();
				HX_STACK_LINE(286)
				o->shape = null();
				HX_STACK_LINE(286)
				o->aabb = null();
			}
			HX_STACK_LINE(287)
			::zpp_nape::space::ZPP_SweepData tmp2 = ::zpp_nape::space::ZPP_SweepData_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(287)
			o->next = tmp2;
			HX_STACK_LINE(288)
			::zpp_nape::space::ZPP_SweepData_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_SweepPhase_obj,__remove,(void))

Void ZPP_SweepPhase_obj::__sync( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_SweepPhase","__sync",0xa167a14c,"zpp_nape.space.ZPP_SweepPhase.__sync","zpp_nape/space/SweepPhase.hx",296,0x6f338844)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_LINE(305)
		::zpp_nape::space::ZPP_Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(305)
		bool tmp1 = tmp->continuous;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(305)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(305)
		if ((tmp2)){
			HX_STACK_LINE(305)
			bool tmp3 = shape->zip_aabb;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(305)
			if ((tmp3)){
				HX_STACK_LINE(305)
				bool tmp4 = (shape->body != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(305)
				if ((tmp4)){
					HX_STACK_LINE(305)
					shape->zip_aabb = false;
					HX_STACK_LINE(305)
					int tmp5 = shape->type;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(305)
					int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(305)
					bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(305)
					if ((tmp7)){
						HX_STACK_LINE(305)
						::zpp_nape::shape::ZPP_Circle _this = shape->circle;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							bool tmp8 = _this->zip_worldCOM;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(305)
							if ((tmp8)){
								HX_STACK_LINE(305)
								bool tmp9 = (_this->body != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(305)
								if ((tmp9)){
									HX_STACK_LINE(305)
									_this->zip_worldCOM = false;
									HX_STACK_LINE(305)
									{
										HX_STACK_LINE(305)
										bool tmp10 = _this->zip_localCOM;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(305)
										if ((tmp10)){
											HX_STACK_LINE(305)
											_this->zip_localCOM = false;
											HX_STACK_LINE(305)
											int tmp11 = _this->type;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(305)
											int tmp12 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(305)
											bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(305)
											if ((tmp13)){
												HX_STACK_LINE(305)
												::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(305)
												::zpp_nape::geom::ZPP_Vec2 tmp14 = _this1->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(305)
												bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(305)
												if ((tmp15)){
													HX_STACK_LINE(305)
													HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
												}
												HX_STACK_LINE(305)
												::zpp_nape::geom::ZPP_Vec2 tmp16 = _this1->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(305)
												::zpp_nape::geom::ZPP_Vec2 tmp17 = tmp16->next;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(305)
												bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(305)
												if ((tmp18)){
													HX_STACK_LINE(305)
													::zpp_nape::geom::ZPP_Vec2 tmp19 = _this1->lverts->next;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(305)
													_this1->localCOMx = tmp19->x;
													HX_STACK_LINE(305)
													::zpp_nape::geom::ZPP_Vec2 tmp20 = _this1->lverts->next;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(305)
													_this1->localCOMy = tmp20->y;
													HX_STACK_LINE(305)
													Dynamic();
												}
												else{
													HX_STACK_LINE(305)
													::zpp_nape::geom::ZPP_Vec2 tmp19 = _this1->lverts->next;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(305)
													::zpp_nape::geom::ZPP_Vec2 tmp20 = tmp19->next->next;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(305)
													bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(305)
													if ((tmp21)){
														HX_STACK_LINE(305)
														{
															HX_STACK_LINE(305)
															::zpp_nape::geom::ZPP_Vec2 tmp22 = _this1->lverts->next;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(305)
															_this1->localCOMx = tmp22->x;
															HX_STACK_LINE(305)
															::zpp_nape::geom::ZPP_Vec2 tmp23 = _this1->lverts->next;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(305)
															_this1->localCOMy = tmp23->y;
															HX_STACK_LINE(305)
															{
															}
														}
														HX_STACK_LINE(305)
														{
															HX_STACK_LINE(305)
															Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(305)
															::zpp_nape::geom::ZPP_Vec2 tmp22 = _this1->lverts->next;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(305)
															Float tmp23 = tmp22->next->x;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(305)
															Float tmp24 = t;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(305)
															Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(305)
															hx::AddEq(_this1->localCOMx,tmp25);
															HX_STACK_LINE(305)
															::zpp_nape::geom::ZPP_Vec2 tmp26 = _this1->lverts->next;		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(305)
															Float tmp27 = tmp26->next->y;		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(305)
															Float tmp28 = t;		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(305)
															Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(305)
															hx::AddEq(_this1->localCOMy,tmp29);
														}
														HX_STACK_LINE(305)
														{
															HX_STACK_LINE(305)
															Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(305)
															hx::MultEq(_this1->localCOMx,t);
															HX_STACK_LINE(305)
															hx::MultEq(_this1->localCOMy,t);
														}
													}
													else{
														HX_STACK_LINE(305)
														{
															HX_STACK_LINE(305)
															_this1->localCOMx = (int)0;
															HX_STACK_LINE(305)
															_this1->localCOMy = (int)0;
															HX_STACK_LINE(305)
															{
															}
														}
														HX_STACK_LINE(305)
														Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
														HX_STACK_LINE(305)
														{
															HX_STACK_LINE(305)
															::zpp_nape::geom::ZPP_Vec2 tmp22 = _this1->lverts->next;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(305)
															::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp22;		HX_STACK_VAR(cx_ite,"cx_ite");
															HX_STACK_LINE(305)
															::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
															HX_STACK_LINE(305)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(305)
															::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
															HX_STACK_LINE(305)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(305)
															while((true)){
																HX_STACK_LINE(305)
																bool tmp23 = (cx_ite != null());		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(305)
																bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(305)
																if ((tmp24)){
																	HX_STACK_LINE(305)
																	break;
																}
																HX_STACK_LINE(305)
																::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																HX_STACK_LINE(305)
																{
																	HX_STACK_LINE(305)
																	Float tmp25 = v->x;		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(305)
																	Float tmp26 = (w->y - u->y);		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(305)
																	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(305)
																	hx::AddEq(area,tmp27);
																	HX_STACK_LINE(305)
																	Float tmp28 = (w->y * v->x);		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(305)
																	Float tmp29 = (w->x * v->y);		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(305)
																	Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(305)
																	Float cf = tmp30;		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(305)
																	Float tmp31 = (v->x + w->x);		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(305)
																	Float tmp32 = cf;		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(305)
																	Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(305)
																	hx::AddEq(_this1->localCOMx,tmp33);
																	HX_STACK_LINE(305)
																	Float tmp34 = (v->y + w->y);		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(305)
																	Float tmp35 = cf;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(305)
																	Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(305)
																	hx::AddEq(_this1->localCOMy,tmp36);
																}
																HX_STACK_LINE(305)
																u = v;
																HX_STACK_LINE(305)
																v = w;
																HX_STACK_LINE(305)
																cx_ite = cx_ite->next;
															}
															HX_STACK_LINE(305)
															::zpp_nape::geom::ZPP_Vec2 tmp23 = _this1->lverts->next;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(305)
															cx_ite = tmp23;
															HX_STACK_LINE(305)
															::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
															HX_STACK_LINE(305)
															{
																HX_STACK_LINE(305)
																Float tmp24 = v->x;		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(305)
																Float tmp25 = (w->y - u->y);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(305)
																Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(305)
																hx::AddEq(area,tmp26);
																HX_STACK_LINE(305)
																Float tmp27 = (w->y * v->x);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(305)
																Float tmp28 = (w->x * v->y);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(305)
																Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(305)
																Float cf = tmp29;		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(305)
																Float tmp30 = (v->x + w->x);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(305)
																Float tmp31 = cf;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(305)
																Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(305)
																hx::AddEq(_this1->localCOMx,tmp32);
																HX_STACK_LINE(305)
																Float tmp33 = (v->y + w->y);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(305)
																Float tmp34 = cf;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(305)
																Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(305)
																hx::AddEq(_this1->localCOMy,tmp35);
															}
															HX_STACK_LINE(305)
															u = v;
															HX_STACK_LINE(305)
															v = w;
															HX_STACK_LINE(305)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(305)
															::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
															HX_STACK_LINE(305)
															{
																HX_STACK_LINE(305)
																Float tmp24 = v->x;		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(305)
																Float tmp25 = (w1->y - u->y);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(305)
																Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(305)
																hx::AddEq(area,tmp26);
																HX_STACK_LINE(305)
																Float tmp27 = (w1->y * v->x);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(305)
																Float tmp28 = (w1->x * v->y);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(305)
																Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(305)
																Float cf = tmp29;		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(305)
																Float tmp30 = (v->x + w1->x);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(305)
																Float tmp31 = cf;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(305)
																Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(305)
																hx::AddEq(_this1->localCOMx,tmp32);
																HX_STACK_LINE(305)
																Float tmp33 = (v->y + w1->y);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(305)
																Float tmp34 = cf;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(305)
																Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(305)
																hx::AddEq(_this1->localCOMy,tmp35);
															}
														}
														HX_STACK_LINE(305)
														Float tmp22 = ((int)3 * area);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(305)
														Float tmp23 = (Float((int)1) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(305)
														area = tmp23;
														HX_STACK_LINE(305)
														{
															HX_STACK_LINE(305)
															Float t = area;		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(305)
															hx::MultEq(_this1->localCOMx,t);
															HX_STACK_LINE(305)
															hx::MultEq(_this1->localCOMy,t);
														}
													}
												}
											}
											HX_STACK_LINE(305)
											bool tmp14 = (_this->wrap_localCOM != null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(305)
											if ((tmp14)){
												HX_STACK_LINE(305)
												::zpp_nape::geom::ZPP_Vec2 tmp15 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(305)
												tmp15->x = _this->localCOMx;
												HX_STACK_LINE(305)
												::zpp_nape::geom::ZPP_Vec2 tmp16 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(305)
												tmp16->y = _this->localCOMy;
												HX_STACK_LINE(305)
												{
												}
											}
										}
									}
									HX_STACK_LINE(305)
									{
										HX_STACK_LINE(305)
										::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(305)
										bool tmp10 = _this1->zip_axis;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(305)
										if ((tmp10)){
											HX_STACK_LINE(305)
											_this1->zip_axis = false;
											HX_STACK_LINE(305)
											{
												HX_STACK_LINE(305)
												Float tmp11 = _this1->rot;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(305)
												Float tmp12 = ::Math_obj::sin(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(305)
												_this1->axisx = tmp12;
												HX_STACK_LINE(305)
												Float tmp13 = _this1->rot;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(305)
												Float tmp14 = ::Math_obj::cos(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(305)
												_this1->axisy = tmp14;
												HX_STACK_LINE(305)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(305)
									{
										HX_STACK_LINE(305)
										Float tmp10 = _this->body->posx;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(305)
										Float tmp11 = _this->body->axisy;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(305)
										Float tmp12 = _this->localCOMx;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(305)
										Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(305)
										Float tmp14 = _this->body->axisx;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(305)
										Float tmp15 = _this->localCOMy;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(305)
										Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(305)
										Float tmp17 = (tmp13 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(305)
										Float tmp18 = (tmp10 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(305)
										_this->worldCOMx = tmp18;
										HX_STACK_LINE(305)
										Float tmp19 = _this->body->posy;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(305)
										Float tmp20 = _this->localCOMx;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(305)
										Float tmp21 = _this->body->axisx;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(305)
										Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(305)
										Float tmp23 = _this->localCOMy;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(305)
										Float tmp24 = _this->body->axisy;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(305)
										Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(305)
										Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(305)
										Float tmp27 = (tmp19 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(305)
										_this->worldCOMy = tmp27;
									}
								}
							}
						}
						HX_STACK_LINE(305)
						Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
						HX_STACK_LINE(305)
						Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							Float tmp8 = (_this->worldCOMx - rx);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(305)
							_this->aabb->minx = tmp8;
							HX_STACK_LINE(305)
							Float tmp9 = (_this->worldCOMy - ry);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(305)
							_this->aabb->miny = tmp9;
						}
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							Float tmp8 = (_this->worldCOMx + rx);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(305)
							_this->aabb->maxx = tmp8;
							HX_STACK_LINE(305)
							Float tmp9 = (_this->worldCOMy + ry);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(305)
							_this->aabb->maxy = tmp9;
						}
					}
					else{
						HX_STACK_LINE(305)
						::zpp_nape::shape::ZPP_Polygon _this = shape->polygon;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							bool tmp8 = _this->zip_gverts;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(305)
							if ((tmp8)){
								HX_STACK_LINE(305)
								bool tmp9 = (_this->body != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(305)
								if ((tmp9)){
									HX_STACK_LINE(305)
									_this->zip_gverts = false;
									HX_STACK_LINE(305)
									_this->validate_lverts();
									HX_STACK_LINE(305)
									{
										HX_STACK_LINE(305)
										::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(305)
										bool tmp10 = _this1->zip_axis;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(305)
										if ((tmp10)){
											HX_STACK_LINE(305)
											_this1->zip_axis = false;
											HX_STACK_LINE(305)
											{
												HX_STACK_LINE(305)
												Float tmp11 = _this1->rot;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(305)
												Float tmp12 = ::Math_obj::sin(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(305)
												_this1->axisx = tmp12;
												HX_STACK_LINE(305)
												Float tmp13 = _this1->rot;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(305)
												Float tmp14 = ::Math_obj::cos(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(305)
												_this1->axisy = tmp14;
												HX_STACK_LINE(305)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(305)
									::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(305)
									::zpp_nape::geom::ZPP_Vec2 li = tmp10;		HX_STACK_VAR(li,"li");
									HX_STACK_LINE(305)
									{
										HX_STACK_LINE(305)
										::zpp_nape::geom::ZPP_Vec2 tmp11 = _this->gverts->next;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(305)
										::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp11;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(305)
										while((true)){
											HX_STACK_LINE(305)
											bool tmp12 = (cx_ite != null());		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(305)
											bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(305)
											if ((tmp13)){
												HX_STACK_LINE(305)
												break;
											}
											HX_STACK_LINE(305)
											::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(305)
											{
												HX_STACK_LINE(305)
												::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
												HX_STACK_LINE(305)
												li = li->next;
												HX_STACK_LINE(305)
												{
													HX_STACK_LINE(305)
													Float tmp14 = _this->body->posx;		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(305)
													Float tmp15 = _this->body->axisy;		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(305)
													Float tmp16 = l->x;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(305)
													Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(305)
													Float tmp18 = _this->body->axisx;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(305)
													Float tmp19 = l->y;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(305)
													Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(305)
													Float tmp21 = (tmp17 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(305)
													Float tmp22 = (tmp14 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(305)
													g->x = tmp22;
													HX_STACK_LINE(305)
													Float tmp23 = _this->body->posy;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(305)
													Float tmp24 = l->x;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(305)
													Float tmp25 = _this->body->axisx;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(305)
													Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(305)
													Float tmp27 = l->y;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(305)
													Float tmp28 = _this->body->axisy;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(305)
													Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(305)
													Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(305)
													Float tmp31 = (tmp23 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(305)
													g->y = tmp31;
												}
											}
											HX_STACK_LINE(305)
											cx_ite = cx_ite->next;
										}
									}
								}
							}
						}
						HX_STACK_LINE(305)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = _this->lverts->next;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(305)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(305)
						if ((tmp9)){
							HX_STACK_LINE(305)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful bounds","\xda","\x28","\x5b","\xf5"));
						}
						HX_STACK_LINE(305)
						::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->gverts->next;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(305)
						::zpp_nape::geom::ZPP_Vec2 p0 = tmp10;		HX_STACK_VAR(p0,"p0");
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							_this->aabb->minx = p0->x;
							HX_STACK_LINE(305)
							_this->aabb->miny = p0->y;
							HX_STACK_LINE(305)
							{
							}
						}
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							_this->aabb->maxx = p0->x;
							HX_STACK_LINE(305)
							_this->aabb->maxy = p0->y;
							HX_STACK_LINE(305)
							{
							}
						}
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							::zpp_nape::geom::ZPP_Vec2 tmp11 = _this->gverts->next;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(305)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp11->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(305)
							while((true)){
								HX_STACK_LINE(305)
								bool tmp12 = (cx_ite != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(305)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(305)
								if ((tmp13)){
									HX_STACK_LINE(305)
									break;
								}
								HX_STACK_LINE(305)
								::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(305)
								{
									HX_STACK_LINE(305)
									Float tmp14 = p->x;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(305)
									Float tmp15 = _this->aabb->minx;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(305)
									bool tmp16 = (tmp14 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(305)
									if ((tmp16)){
										HX_STACK_LINE(305)
										_this->aabb->minx = p->x;
									}
									HX_STACK_LINE(305)
									Float tmp17 = p->x;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(305)
									Float tmp18 = _this->aabb->maxx;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(305)
									bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(305)
									if ((tmp19)){
										HX_STACK_LINE(305)
										_this->aabb->maxx = p->x;
									}
									HX_STACK_LINE(305)
									Float tmp20 = p->y;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(305)
									Float tmp21 = _this->aabb->miny;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(305)
									bool tmp22 = (tmp20 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(305)
									if ((tmp22)){
										HX_STACK_LINE(305)
										_this->aabb->miny = p->y;
									}
									HX_STACK_LINE(305)
									Float tmp23 = p->y;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(305)
									Float tmp24 = _this->aabb->maxy;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(305)
									bool tmp25 = (tmp23 > tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(305)
									if ((tmp25)){
										HX_STACK_LINE(305)
										_this->aabb->maxy = p->y;
									}
								}
								HX_STACK_LINE(305)
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


HX_DEFINE_DYNAMIC_FUNC1(ZPP_SweepPhase_obj,__sync,(void))

Void ZPP_SweepPhase_obj::sync_broadphase( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_SweepPhase","sync_broadphase",0xb98da26c,"zpp_nape.space.ZPP_SweepPhase.sync_broadphase","zpp_nape/space/SweepPhase.hx",307,0x6f338844)
		HX_STACK_THIS(this)
		HX_STACK_LINE(308)
		::zpp_nape::space::ZPP_Space tmp = this->space;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(308)
		tmp->validation();
		HX_STACK_LINE(309)
		::zpp_nape::space::ZPP_SweepData tmp1 = this->list;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(309)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(309)
		if ((tmp2)){
			HX_STACK_LINE(309)
			::zpp_nape::space::ZPP_SweepData tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(309)
			::zpp_nape::space::ZPP_SweepData a = tmp3->next;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(309)
			while((true)){
				HX_STACK_LINE(309)
				bool tmp4 = (a != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(309)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(309)
				if ((tmp5)){
					HX_STACK_LINE(309)
					break;
				}
				HX_STACK_LINE(309)
				::zpp_nape::space::ZPP_SweepData n = a->next;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(309)
				::zpp_nape::space::ZPP_SweepData b = a->prev;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(309)
				Float tmp6 = a->aabb->minx;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(309)
				Float tmp7 = b->aabb->minx;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(309)
				bool tmp8 = (tmp6 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(309)
				if ((tmp8)){
					HX_STACK_LINE(309)
					a = n;
					HX_STACK_LINE(309)
					continue;
				}
				HX_STACK_LINE(309)
				while((true)){
					HX_STACK_LINE(309)
					bool tmp9 = (b->prev != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(309)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(309)
					if ((tmp9)){
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_AABB tmp11 = b->prev->aabb;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(309)
						::zpp_nape::geom::ZPP_AABB tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(309)
						Float tmp13 = tmp12->minx;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(309)
						Float tmp14 = a->aabb->minx;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(309)
						Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(309)
						tmp10 = (tmp13 > tmp15);
					}
					else{
						HX_STACK_LINE(309)
						tmp10 = false;
					}
					HX_STACK_LINE(309)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(309)
					if ((tmp11)){
						HX_STACK_LINE(309)
						break;
					}
					HX_STACK_LINE(309)
					b = b->prev;
				}
				HX_STACK_LINE(309)
				::zpp_nape::space::ZPP_SweepData prev = a->prev;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(309)
				prev->next = a->next;
				HX_STACK_LINE(309)
				bool tmp9 = (a->next != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(309)
				if ((tmp9)){
					HX_STACK_LINE(309)
					a->next->prev = prev;
				}
				HX_STACK_LINE(309)
				bool tmp10 = (b->prev == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(309)
				if ((tmp10)){
					HX_STACK_LINE(309)
					a->prev = null();
					HX_STACK_LINE(309)
					this->list = a;
					HX_STACK_LINE(309)
					a->next = b;
					HX_STACK_LINE(309)
					b->prev = a;
				}
				else{
					HX_STACK_LINE(309)
					a->prev = b->prev;
					HX_STACK_LINE(309)
					b->prev = a;
					HX_STACK_LINE(309)
					a->prev->next = a;
					HX_STACK_LINE(309)
					a->next = b;
				}
				HX_STACK_LINE(309)
				a = n;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SweepPhase_obj,sync_broadphase,(void))

Void ZPP_SweepPhase_obj::sync_broadphase_fast( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_SweepPhase","sync_broadphase_fast",0x7d18f48f,"zpp_nape.space.ZPP_SweepPhase.sync_broadphase_fast","zpp_nape/space/SweepPhase.hx",313,0x6f338844)
		HX_STACK_THIS(this)
		HX_STACK_LINE(314)
		::zpp_nape::space::ZPP_SweepData tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(314)
		::zpp_nape::space::ZPP_SweepData a = tmp->next;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(315)
		while((true)){
			HX_STACK_LINE(315)
			bool tmp1 = (a != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(315)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(315)
			if ((tmp2)){
				HX_STACK_LINE(315)
				break;
			}
			HX_STACK_LINE(318)
			::zpp_nape::space::ZPP_SweepData n = a->next;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(319)
			::zpp_nape::space::ZPP_SweepData b = a->prev;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(320)
			Float tmp3 = a->aabb->minx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(320)
			Float tmp4 = b->aabb->minx;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(320)
			bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(320)
			if ((tmp5)){
				HX_STACK_LINE(321)
				a = n;
				HX_STACK_LINE(322)
				continue;
			}
			HX_STACK_LINE(326)
			while((true)){
				HX_STACK_LINE(326)
				bool tmp6 = (b->prev != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(326)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(326)
				if ((tmp6)){
					HX_STACK_LINE(326)
					::zpp_nape::geom::ZPP_AABB tmp8 = b->prev->aabb;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(326)
					::zpp_nape::geom::ZPP_AABB tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(326)
					Float tmp10 = tmp9->minx;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(326)
					Float tmp11 = a->aabb->minx;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(326)
					Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(326)
					tmp7 = (tmp10 > tmp12);
				}
				else{
					HX_STACK_LINE(326)
					tmp7 = false;
				}
				HX_STACK_LINE(326)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(326)
				if ((tmp8)){
					HX_STACK_LINE(326)
					break;
				}
				HX_STACK_LINE(326)
				b = b->prev;
			}
			HX_STACK_LINE(327)
			::zpp_nape::space::ZPP_SweepData prev = a->prev;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(328)
			prev->next = a->next;
			HX_STACK_LINE(329)
			bool tmp6 = (a->next != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(329)
			if ((tmp6)){
				HX_STACK_LINE(329)
				a->next->prev = prev;
			}
			HX_STACK_LINE(330)
			bool tmp7 = (b->prev == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(330)
			if ((tmp7)){
				HX_STACK_LINE(331)
				a->prev = null();
				HX_STACK_LINE(332)
				this->list = a;
				HX_STACK_LINE(333)
				a->next = b;
				HX_STACK_LINE(334)
				b->prev = a;
			}
			else{
				HX_STACK_LINE(337)
				a->prev = b->prev;
				HX_STACK_LINE(338)
				b->prev = a;
				HX_STACK_LINE(339)
				a->prev->next = a;
				HX_STACK_LINE(340)
				a->next = b;
			}
			HX_STACK_LINE(342)
			a = n;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_SweepPhase_obj,sync_broadphase_fast,(void))

Void ZPP_SweepPhase_obj::broadphase( ::zpp_nape::space::ZPP_Space space,bool discrete){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_SweepPhase","broadphase",0x06699e0a,"zpp_nape.space.ZPP_SweepPhase.broadphase","zpp_nape/space/SweepPhase.hx",345,0x6f338844)
		HX_STACK_THIS(this)
		HX_STACK_ARG(space,"space")
		HX_STACK_ARG(discrete,"discrete")
		HX_STACK_LINE(346)
		::zpp_nape::space::ZPP_SweepData tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(346)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(346)
		if ((tmp1)){
			HX_STACK_LINE(347)
			{
				HX_STACK_LINE(347)
				::zpp_nape::space::ZPP_SweepData tmp2 = this->list;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(347)
				::zpp_nape::space::ZPP_SweepData a = tmp2->next;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(347)
				while((true)){
					HX_STACK_LINE(347)
					bool tmp3 = (a != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(347)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(347)
					if ((tmp4)){
						HX_STACK_LINE(347)
						break;
					}
					HX_STACK_LINE(347)
					::zpp_nape::space::ZPP_SweepData n = a->next;		HX_STACK_VAR(n,"n");
					HX_STACK_LINE(347)
					::zpp_nape::space::ZPP_SweepData b = a->prev;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(347)
					Float tmp5 = a->aabb->minx;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(347)
					Float tmp6 = b->aabb->minx;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(347)
					bool tmp7 = (tmp5 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(347)
					if ((tmp7)){
						HX_STACK_LINE(347)
						a = n;
						HX_STACK_LINE(347)
						continue;
					}
					HX_STACK_LINE(347)
					while((true)){
						HX_STACK_LINE(347)
						bool tmp8 = (b->prev != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(347)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(347)
						if ((tmp8)){
							HX_STACK_LINE(347)
							::zpp_nape::geom::ZPP_AABB tmp10 = b->prev->aabb;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(347)
							::zpp_nape::geom::ZPP_AABB tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(347)
							Float tmp12 = tmp11->minx;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(347)
							Float tmp13 = a->aabb->minx;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(347)
							Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(347)
							tmp9 = (tmp12 > tmp14);
						}
						else{
							HX_STACK_LINE(347)
							tmp9 = false;
						}
						HX_STACK_LINE(347)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(347)
						if ((tmp10)){
							HX_STACK_LINE(347)
							break;
						}
						HX_STACK_LINE(347)
						b = b->prev;
					}
					HX_STACK_LINE(347)
					::zpp_nape::space::ZPP_SweepData prev = a->prev;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(347)
					prev->next = a->next;
					HX_STACK_LINE(347)
					bool tmp8 = (a->next != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(347)
					if ((tmp8)){
						HX_STACK_LINE(347)
						a->next->prev = prev;
					}
					HX_STACK_LINE(347)
					bool tmp9 = (b->prev == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(347)
					if ((tmp9)){
						HX_STACK_LINE(347)
						a->prev = null();
						HX_STACK_LINE(347)
						this->list = a;
						HX_STACK_LINE(347)
						a->next = b;
						HX_STACK_LINE(347)
						b->prev = a;
					}
					else{
						HX_STACK_LINE(347)
						a->prev = b->prev;
						HX_STACK_LINE(347)
						b->prev = a;
						HX_STACK_LINE(347)
						a->prev->next = a;
						HX_STACK_LINE(347)
						a->next = b;
					}
					HX_STACK_LINE(347)
					a = n;
				}
			}
			HX_STACK_LINE(348)
			::zpp_nape::space::ZPP_SweepData tmp2 = this->list;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(348)
			::zpp_nape::space::ZPP_SweepData d1 = tmp2;		HX_STACK_VAR(d1,"d1");
			HX_STACK_LINE(349)
			while((true)){
				HX_STACK_LINE(349)
				bool tmp3 = (d1 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(349)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(349)
				if ((tmp4)){
					HX_STACK_LINE(349)
					break;
				}
				HX_STACK_LINE(350)
				::zpp_nape::space::ZPP_SweepData d2 = d1->next;		HX_STACK_VAR(d2,"d2");
				HX_STACK_LINE(351)
				::zpp_nape::shape::ZPP_Shape s1 = d1->shape;		HX_STACK_VAR(s1,"s1");
				HX_STACK_LINE(352)
				::zpp_nape::phys::ZPP_Body b1 = s1->body;		HX_STACK_VAR(b1,"b1");
				HX_STACK_LINE(353)
				Float tmp5 = d1->aabb->maxx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(353)
				Float bottom = tmp5;		HX_STACK_VAR(bottom,"bottom");
				HX_STACK_LINE(354)
				while((true)){
					HX_STACK_LINE(354)
					bool tmp6 = (d2 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(354)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(354)
					if ((tmp7)){
						HX_STACK_LINE(354)
						break;
					}
					HX_STACK_LINE(355)
					Float tmp8 = d2->aabb->minx;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(355)
					Float tmp9 = bottom;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(355)
					bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(355)
					if ((tmp10)){
						HX_STACK_LINE(355)
						break;
					}
					HX_STACK_LINE(356)
					::zpp_nape::shape::ZPP_Shape s2 = d2->shape;		HX_STACK_VAR(s2,"s2");
					HX_STACK_LINE(357)
					::zpp_nape::phys::ZPP_Body b2 = s2->body;		HX_STACK_VAR(b2,"b2");
					HX_STACK_LINE(358)
					bool tmp11 = (b2 == b1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(358)
					if ((tmp11)){
						HX_STACK_LINE(359)
						d2 = d2->next;
						HX_STACK_LINE(360)
						continue;
					}
					HX_STACK_LINE(362)
					int tmp12 = b1->type;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(362)
					int tmp13 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(362)
					bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(362)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(362)
					if ((tmp14)){
						HX_STACK_LINE(362)
						int tmp16 = b2->type;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(362)
						int tmp17 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(362)
						int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(362)
						tmp15 = (tmp16 == tmp18);
					}
					else{
						HX_STACK_LINE(362)
						tmp15 = false;
					}
					HX_STACK_LINE(362)
					if ((tmp15)){
						HX_STACK_LINE(363)
						d2 = d2->next;
						HX_STACK_LINE(364)
						continue;
					}
					HX_STACK_LINE(366)
					bool tmp16 = b1->component->sleeping;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(366)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(366)
					if ((tmp16)){
						HX_STACK_LINE(366)
						tmp17 = b2->component->sleeping;
					}
					else{
						HX_STACK_LINE(366)
						tmp17 = false;
					}
					HX_STACK_LINE(366)
					if ((tmp17)){
						HX_STACK_LINE(367)
						d2 = d2->next;
						HX_STACK_LINE(368)
						continue;
					}
					HX_STACK_LINE(370)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(370)
					{
						HX_STACK_LINE(370)
						::zpp_nape::geom::ZPP_AABB _this = s1->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(370)
						::zpp_nape::geom::ZPP_AABB x = s2->aabb;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(370)
						bool tmp19 = (x->miny > _this->maxy);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(370)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(370)
						bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(370)
						if ((tmp20)){
							HX_STACK_LINE(370)
							tmp21 = (_this->miny > x->maxy);
						}
						else{
							HX_STACK_LINE(370)
							tmp21 = true;
						}
						HX_STACK_LINE(370)
						tmp18 = !(tmp21);
					}
					HX_STACK_LINE(370)
					if ((tmp18)){
						HX_STACK_LINE(371)
						bool tmp19 = discrete;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(371)
						if ((tmp19)){
							HX_STACK_LINE(372)
							::zpp_nape::shape::ZPP_Shape tmp20 = s1;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(372)
							::zpp_nape::shape::ZPP_Shape tmp21 = s2;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(372)
							int tmp22 = b1->type;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(372)
							int tmp23 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(372)
							bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(372)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(372)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(372)
							bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(372)
							bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(372)
							if ((tmp27)){
								HX_STACK_LINE(372)
								int tmp29 = b2->type;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(372)
								int tmp30 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(372)
								int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(372)
								bool tmp32 = (tmp29 == tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(372)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(372)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(372)
								tmp28 = !(tmp34);
							}
							else{
								HX_STACK_LINE(372)
								tmp28 = true;
							}
							HX_STACK_LINE(372)
							space->narrowPhase(tmp20,tmp21,tmp28,null(),false);
						}
						else{
							HX_STACK_LINE(375)
							::zpp_nape::shape::ZPP_Shape tmp20 = s1;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(375)
							::zpp_nape::shape::ZPP_Shape tmp21 = s2;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(375)
							int tmp22 = b1->type;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(375)
							int tmp23 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(375)
							bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(375)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(375)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(375)
							bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(375)
							bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(375)
							if ((tmp27)){
								HX_STACK_LINE(375)
								int tmp29 = b2->type;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(375)
								int tmp30 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(375)
								int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(375)
								bool tmp32 = (tmp29 == tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(375)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(375)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(375)
								tmp28 = !(tmp34);
							}
							else{
								HX_STACK_LINE(375)
								tmp28 = true;
							}
							HX_STACK_LINE(375)
							space->continuousEvent(tmp20,tmp21,tmp28,null(),false);
						}
					}
					HX_STACK_LINE(378)
					d2 = d2->next;
				}
				HX_STACK_LINE(380)
				d1 = d1->next;
			}
		}
	}
return null();
}


Void ZPP_SweepPhase_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.space.ZPP_SweepPhase","clear",0x043912dc,"zpp_nape.space.ZPP_SweepPhase.clear","zpp_nape/space/SweepPhase.hx",385,0x6f338844)
		HX_STACK_THIS(this)
		HX_STACK_LINE(385)
		while((true)){
			HX_STACK_LINE(385)
			::zpp_nape::space::ZPP_SweepData tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(385)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(385)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(385)
			if ((tmp2)){
				HX_STACK_LINE(385)
				break;
			}
			HX_STACK_LINE(386)
			::zpp_nape::space::ZPP_SweepData tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(386)
			tmp3->shape->removedFromSpace();
			HX_STACK_LINE(387)
			::zpp_nape::space::ZPP_SweepData tmp4 = this->list;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(387)
			::zpp_nape::shape::ZPP_Shape tmp5 = tmp4->shape;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(387)
			this->__remove(tmp5);
		}
	}
return null();
}


::nape::shape::ShapeList ZPP_SweepPhase_obj::shapesUnderPoint( Float x,Float y,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_SweepPhase","shapesUnderPoint",0xbd03bffb,"zpp_nape.space.ZPP_SweepPhase.shapesUnderPoint","zpp_nape/space/SweepPhase.hx",390,0x6f338844)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(391)
	this->sync_broadphase();
	HX_STACK_LINE(392)
	::zpp_nape::geom::ZPP_Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(392)
	{
		HX_STACK_LINE(392)
		bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
		HX_STACK_LINE(392)
		::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(392)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(392)
			if ((tmp2)){
				HX_STACK_LINE(392)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(392)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(392)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(392)
				ret = tmp3;
				HX_STACK_LINE(392)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
				HX_STACK_LINE(392)
				ret->next = null();
			}
			HX_STACK_LINE(392)
			ret->weak = false;
		}
		HX_STACK_LINE(392)
		ret->_immutable = immutable;
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			ret->x = x;
			HX_STACK_LINE(392)
			ret->y = y;
			HX_STACK_LINE(392)
			{
			}
		}
		HX_STACK_LINE(392)
		tmp = ret;
	}
	HX_STACK_LINE(392)
	::zpp_nape::geom::ZPP_Vec2 v = tmp;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(393)
	bool tmp1 = (output == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(393)
	::nape::shape::ShapeList tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(393)
	if ((tmp1)){
		HX_STACK_LINE(393)
		tmp2 = ::nape::shape::ShapeList_obj::__new();
	}
	else{
		HX_STACK_LINE(393)
		tmp2 = output;
	}
	HX_STACK_LINE(393)
	::nape::shape::ShapeList ret = tmp2;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(394)
	::zpp_nape::space::ZPP_SweepData tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(394)
	::zpp_nape::space::ZPP_SweepData a = tmp3;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(395)
	while((true)){
		HX_STACK_LINE(395)
		bool tmp4 = (a != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(395)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(395)
		if ((tmp4)){
			HX_STACK_LINE(395)
			Float tmp6 = a->aabb->minx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(395)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(395)
			Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(395)
			tmp5 = (tmp7 > tmp8);
		}
		else{
			HX_STACK_LINE(395)
			tmp5 = false;
		}
		HX_STACK_LINE(395)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(395)
		if ((tmp6)){
			HX_STACK_LINE(395)
			break;
		}
		HX_STACK_LINE(395)
		a = a->next;
	}
	HX_STACK_LINE(396)
	while((true)){
		HX_STACK_LINE(396)
		bool tmp4 = (a != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(396)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(396)
		if ((tmp4)){
			HX_STACK_LINE(396)
			Float tmp6 = a->aabb->minx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(396)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(396)
			Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(396)
			tmp5 = (tmp7 <= tmp8);
		}
		else{
			HX_STACK_LINE(396)
			tmp5 = false;
		}
		HX_STACK_LINE(396)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(396)
		if ((tmp6)){
			HX_STACK_LINE(396)
			break;
		}
		HX_STACK_LINE(397)
		Float tmp7 = a->aabb->maxx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(397)
		Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(397)
		bool tmp9 = (tmp7 >= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(397)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(397)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(397)
		if ((tmp10)){
			HX_STACK_LINE(397)
			Float tmp12 = a->aabb->miny;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(397)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(397)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(397)
			Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(397)
			tmp11 = (tmp14 <= tmp15);
		}
		else{
			HX_STACK_LINE(397)
			tmp11 = false;
		}
		HX_STACK_LINE(397)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(397)
		if ((tmp11)){
			HX_STACK_LINE(397)
			Float tmp13 = a->aabb->maxy;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(397)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(397)
			Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(397)
			tmp12 = (tmp14 >= tmp15);
		}
		else{
			HX_STACK_LINE(397)
			tmp12 = false;
		}
		HX_STACK_LINE(397)
		if ((tmp12)){
			HX_STACK_LINE(398)
			::zpp_nape::shape::ZPP_Shape shape = a->shape;		HX_STACK_VAR(shape,"shape");
			HX_STACK_LINE(399)
			bool tmp13 = (filter == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(399)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(399)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(399)
			if ((tmp14)){
				HX_STACK_LINE(399)
				::zpp_nape::dynamics::ZPP_InteractionFilter _this = shape->filter;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(399)
				int tmp16 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(399)
				int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(399)
				bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(399)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(399)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(399)
				if ((tmp20)){
					HX_STACK_LINE(399)
					int tmp21 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(399)
					int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(399)
					int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(399)
					tmp15 = (tmp23 != (int)0);
				}
				else{
					HX_STACK_LINE(399)
					tmp15 = false;
				}
			}
			else{
				HX_STACK_LINE(399)
				tmp15 = true;
			}
			HX_STACK_LINE(399)
			if ((tmp15)){
				HX_STACK_LINE(400)
				int tmp16 = shape->type;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(400)
				int tmp17 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(400)
				bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(400)
				if ((tmp18)){
					HX_STACK_LINE(401)
					::zpp_nape::shape::ZPP_Circle tmp19 = shape->circle;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(401)
					::zpp_nape::geom::ZPP_Vec2 tmp20 = v;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(401)
					bool tmp21 = ::zpp_nape::geom::ZPP_Collide_obj::circleContains(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(401)
					if ((tmp21)){
						HX_STACK_LINE(401)
						::nape::shape::Shape tmp22 = shape->outer;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(401)
						ret->push(tmp22);
					}
				}
				else{
					HX_STACK_LINE(404)
					::zpp_nape::shape::ZPP_Polygon tmp19 = shape->polygon;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(404)
					::zpp_nape::geom::ZPP_Vec2 tmp20 = v;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(404)
					bool tmp21 = ::zpp_nape::geom::ZPP_Collide_obj::polyContains(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(404)
					if ((tmp21)){
						HX_STACK_LINE(404)
						::nape::shape::Shape tmp22 = shape->outer;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(404)
						ret->push(tmp22);
					}
				}
			}
		}
		HX_STACK_LINE(408)
		a = a->next;
	}
	HX_STACK_LINE(410)
	{
		HX_STACK_LINE(411)
		::zpp_nape::geom::ZPP_Vec2 o = v;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(420)
		{
			HX_STACK_LINE(420)
			bool tmp4 = (o->outer != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(420)
			if ((tmp4)){
				HX_STACK_LINE(420)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(420)
				o->outer = null();
			}
			HX_STACK_LINE(420)
			o->_isimmutable = null();
			HX_STACK_LINE(420)
			o->_validate = null();
			HX_STACK_LINE(420)
			o->_invalidate = null();
		}
		HX_STACK_LINE(421)
		::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(421)
		o->next = tmp4;
		HX_STACK_LINE(422)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(427)
	::nape::shape::ShapeList tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(427)
	return tmp4;
}


::nape::phys::BodyList ZPP_SweepPhase_obj::bodiesUnderPoint( Float x,Float y,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_SweepPhase","bodiesUnderPoint",0xf576eec9,"zpp_nape.space.ZPP_SweepPhase.bodiesUnderPoint","zpp_nape/space/SweepPhase.hx",429,0x6f338844)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(430)
	this->sync_broadphase();
	HX_STACK_LINE(431)
	::zpp_nape::geom::ZPP_Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(431)
	{
		HX_STACK_LINE(431)
		bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
		HX_STACK_LINE(431)
		::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(431)
		{
			HX_STACK_LINE(431)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(431)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(431)
			if ((tmp2)){
				HX_STACK_LINE(431)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(431)
				ret = tmp3;
			}
			else{
				HX_STACK_LINE(431)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(431)
				ret = tmp3;
				HX_STACK_LINE(431)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
				HX_STACK_LINE(431)
				ret->next = null();
			}
			HX_STACK_LINE(431)
			ret->weak = false;
		}
		HX_STACK_LINE(431)
		ret->_immutable = immutable;
		HX_STACK_LINE(431)
		{
			HX_STACK_LINE(431)
			ret->x = x;
			HX_STACK_LINE(431)
			ret->y = y;
			HX_STACK_LINE(431)
			{
			}
		}
		HX_STACK_LINE(431)
		tmp = ret;
	}
	HX_STACK_LINE(431)
	::zpp_nape::geom::ZPP_Vec2 v = tmp;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(432)
	bool tmp1 = (output == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(432)
	::nape::phys::BodyList tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(432)
	if ((tmp1)){
		HX_STACK_LINE(432)
		tmp2 = ::nape::phys::BodyList_obj::__new();
	}
	else{
		HX_STACK_LINE(432)
		tmp2 = output;
	}
	HX_STACK_LINE(432)
	::nape::phys::BodyList ret = tmp2;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(433)
	::zpp_nape::space::ZPP_SweepData tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(433)
	::zpp_nape::space::ZPP_SweepData a = tmp3;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(434)
	while((true)){
		HX_STACK_LINE(434)
		bool tmp4 = (a != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(434)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(434)
		if ((tmp4)){
			HX_STACK_LINE(434)
			Float tmp6 = a->aabb->minx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(434)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(434)
			Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(434)
			tmp5 = (tmp7 > tmp8);
		}
		else{
			HX_STACK_LINE(434)
			tmp5 = false;
		}
		HX_STACK_LINE(434)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(434)
		if ((tmp6)){
			HX_STACK_LINE(434)
			break;
		}
		HX_STACK_LINE(434)
		a = a->next;
	}
	HX_STACK_LINE(435)
	while((true)){
		HX_STACK_LINE(435)
		bool tmp4 = (a != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(435)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(435)
		if ((tmp4)){
			HX_STACK_LINE(435)
			Float tmp6 = a->aabb->minx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(435)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(435)
			Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(435)
			tmp5 = (tmp7 <= tmp8);
		}
		else{
			HX_STACK_LINE(435)
			tmp5 = false;
		}
		HX_STACK_LINE(435)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(435)
		if ((tmp6)){
			HX_STACK_LINE(435)
			break;
		}
		HX_STACK_LINE(436)
		Float tmp7 = a->aabb->maxx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(436)
		Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(436)
		bool tmp9 = (tmp7 >= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(436)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(436)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(436)
		if ((tmp10)){
			HX_STACK_LINE(436)
			Float tmp12 = a->aabb->miny;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(436)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(436)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(436)
			Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(436)
			tmp11 = (tmp14 <= tmp15);
		}
		else{
			HX_STACK_LINE(436)
			tmp11 = false;
		}
		HX_STACK_LINE(436)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(436)
		if ((tmp11)){
			HX_STACK_LINE(436)
			Float tmp13 = a->aabb->maxy;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(436)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(436)
			Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(436)
			tmp12 = (tmp14 >= tmp15);
		}
		else{
			HX_STACK_LINE(436)
			tmp12 = false;
		}
		HX_STACK_LINE(436)
		if ((tmp12)){
			HX_STACK_LINE(437)
			::zpp_nape::shape::ZPP_Shape shape = a->shape;		HX_STACK_VAR(shape,"shape");
			HX_STACK_LINE(438)
			::nape::phys::Body tmp13 = shape->body->outer;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(438)
			::nape::phys::Body body = tmp13;		HX_STACK_VAR(body,"body");
			HX_STACK_LINE(439)
			::nape::phys::Body tmp14 = body;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(439)
			bool tmp15 = ret->has(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(439)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(439)
			if ((tmp16)){
				HX_STACK_LINE(440)
				bool tmp17 = (filter == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(440)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(440)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(440)
				if ((tmp18)){
					HX_STACK_LINE(440)
					::zpp_nape::dynamics::ZPP_InteractionFilter _this = shape->filter;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(440)
					int tmp20 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(440)
					int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(440)
					bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(440)
					bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(440)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(440)
					if ((tmp24)){
						HX_STACK_LINE(440)
						int tmp25 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(440)
						int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(440)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(440)
						tmp19 = (tmp27 != (int)0);
					}
					else{
						HX_STACK_LINE(440)
						tmp19 = false;
					}
				}
				else{
					HX_STACK_LINE(440)
					tmp19 = true;
				}
				HX_STACK_LINE(440)
				if ((tmp19)){
					HX_STACK_LINE(441)
					int tmp20 = shape->type;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(441)
					int tmp21 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(441)
					bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(441)
					if ((tmp22)){
						HX_STACK_LINE(442)
						::zpp_nape::shape::ZPP_Circle tmp23 = shape->circle;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(442)
						::zpp_nape::geom::ZPP_Vec2 tmp24 = v;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(442)
						bool tmp25 = ::zpp_nape::geom::ZPP_Collide_obj::circleContains(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(442)
						if ((tmp25)){
							HX_STACK_LINE(442)
							::nape::phys::Body tmp26 = body;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(442)
							ret->push(tmp26);
						}
					}
					else{
						HX_STACK_LINE(445)
						::zpp_nape::shape::ZPP_Polygon tmp23 = shape->polygon;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(445)
						::zpp_nape::geom::ZPP_Vec2 tmp24 = v;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(445)
						bool tmp25 = ::zpp_nape::geom::ZPP_Collide_obj::polyContains(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(445)
						if ((tmp25)){
							HX_STACK_LINE(445)
							::nape::phys::Body tmp26 = body;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(445)
							ret->push(tmp26);
						}
					}
				}
			}
		}
		HX_STACK_LINE(450)
		a = a->next;
	}
	HX_STACK_LINE(452)
	{
		HX_STACK_LINE(453)
		::zpp_nape::geom::ZPP_Vec2 o = v;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(462)
		{
			HX_STACK_LINE(462)
			bool tmp4 = (o->outer != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(462)
			if ((tmp4)){
				HX_STACK_LINE(462)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(462)
				o->outer = null();
			}
			HX_STACK_LINE(462)
			o->_isimmutable = null();
			HX_STACK_LINE(462)
			o->_validate = null();
			HX_STACK_LINE(462)
			o->_invalidate = null();
		}
		HX_STACK_LINE(463)
		::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(463)
		o->next = tmp4;
		HX_STACK_LINE(464)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(469)
	::nape::phys::BodyList tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(469)
	return tmp4;
}


::nape::shape::ShapeList ZPP_SweepPhase_obj::shapesInAABB( ::zpp_nape::geom::ZPP_AABB aabb,bool strict,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_SweepPhase","shapesInAABB",0x839dd368,"zpp_nape.space.ZPP_SweepPhase.shapesInAABB","zpp_nape/space/SweepPhase.hx",471,0x6f338844)
	HX_STACK_THIS(this)
	HX_STACK_ARG(aabb,"aabb")
	HX_STACK_ARG(strict,"strict")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(472)
	this->sync_broadphase();
	HX_STACK_LINE(473)
	::zpp_nape::geom::ZPP_AABB tmp = aabb;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(473)
	this->updateAABBShape(tmp);
	HX_STACK_LINE(474)
	::nape::shape::Shape tmp1 = this->aabbShape;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(474)
	::zpp_nape::geom::ZPP_AABB tmp2 = tmp1->zpp_inner->aabb;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(474)
	::zpp_nape::geom::ZPP_AABB ab = tmp2;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(475)
	bool tmp3 = (output == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(475)
	::nape::shape::ShapeList tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(475)
	if ((tmp3)){
		HX_STACK_LINE(475)
		tmp4 = ::nape::shape::ShapeList_obj::__new();
	}
	else{
		HX_STACK_LINE(475)
		tmp4 = output;
	}
	HX_STACK_LINE(475)
	::nape::shape::ShapeList ret = tmp4;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(476)
	::zpp_nape::space::ZPP_SweepData tmp5 = this->list;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(476)
	::zpp_nape::space::ZPP_SweepData a = tmp5;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(477)
	while((true)){
		HX_STACK_LINE(477)
		bool tmp6 = (a != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(477)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(477)
		if ((tmp6)){
			HX_STACK_LINE(477)
			Float tmp8 = a->aabb->maxx;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(477)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(477)
			Float tmp10 = ab->minx;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(477)
			tmp7 = (tmp9 < tmp10);
		}
		else{
			HX_STACK_LINE(477)
			tmp7 = false;
		}
		HX_STACK_LINE(477)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(477)
		if ((tmp8)){
			HX_STACK_LINE(477)
			break;
		}
		HX_STACK_LINE(477)
		a = a->next;
	}
	HX_STACK_LINE(478)
	while((true)){
		HX_STACK_LINE(478)
		bool tmp6 = (a != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(478)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(478)
		if ((tmp6)){
			HX_STACK_LINE(478)
			Float tmp8 = a->aabb->minx;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(478)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(478)
			Float tmp10 = ab->maxx;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(478)
			tmp7 = (tmp9 <= tmp10);
		}
		else{
			HX_STACK_LINE(478)
			tmp7 = false;
		}
		HX_STACK_LINE(478)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(478)
		if ((tmp8)){
			HX_STACK_LINE(478)
			break;
		}
		HX_STACK_LINE(479)
		::zpp_nape::shape::ZPP_Shape shape = a->shape;		HX_STACK_VAR(shape,"shape");
		HX_STACK_LINE(480)
		bool tmp9 = (filter == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(480)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(480)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(480)
		if ((tmp10)){
			HX_STACK_LINE(480)
			::zpp_nape::dynamics::ZPP_InteractionFilter _this = shape->filter;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(480)
			int tmp12 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(480)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(480)
			bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(480)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(480)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(480)
			if ((tmp16)){
				HX_STACK_LINE(480)
				int tmp17 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(480)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(480)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(480)
				tmp11 = (tmp19 != (int)0);
			}
			else{
				HX_STACK_LINE(480)
				tmp11 = false;
			}
		}
		else{
			HX_STACK_LINE(480)
			tmp11 = true;
		}
		HX_STACK_LINE(480)
		if ((tmp11)){
			HX_STACK_LINE(481)
			bool tmp12 = strict;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(481)
			if ((tmp12)){
				HX_STACK_LINE(482)
				bool tmp13 = containment;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(482)
				if ((tmp13)){
					HX_STACK_LINE(483)
					::nape::shape::Shape tmp14 = this->aabbShape;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(483)
					::zpp_nape::shape::ZPP_Shape tmp15 = tmp14->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(483)
					::zpp_nape::shape::ZPP_Shape tmp16 = shape;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(483)
					bool tmp17 = ::zpp_nape::geom::ZPP_Collide_obj::containTest(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(483)
					if ((tmp17)){
						HX_STACK_LINE(483)
						::nape::shape::Shape tmp18 = shape->outer;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(483)
						ret->push(tmp18);
					}
				}
				else{
					HX_STACK_LINE(486)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(486)
					{
						HX_STACK_LINE(486)
						::zpp_nape::geom::ZPP_AABB x = a->aabb;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(486)
						bool tmp15 = (x->minx >= ab->minx);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(486)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(486)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(486)
						if ((tmp16)){
							HX_STACK_LINE(486)
							tmp17 = (x->miny >= ab->miny);
						}
						else{
							HX_STACK_LINE(486)
							tmp17 = false;
						}
						HX_STACK_LINE(486)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(486)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(486)
						if ((tmp18)){
							HX_STACK_LINE(486)
							tmp19 = (x->maxx <= ab->maxx);
						}
						else{
							HX_STACK_LINE(486)
							tmp19 = false;
						}
						HX_STACK_LINE(486)
						if ((tmp19)){
							HX_STACK_LINE(486)
							tmp14 = (x->maxy <= ab->maxy);
						}
						else{
							HX_STACK_LINE(486)
							tmp14 = false;
						}
					}
					HX_STACK_LINE(486)
					if ((tmp14)){
						HX_STACK_LINE(486)
						::nape::shape::Shape tmp15 = shape->outer;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(486)
						ret->push(tmp15);
					}
					else{
						HX_STACK_LINE(487)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(487)
						{
							HX_STACK_LINE(487)
							::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(487)
							bool tmp16 = (ab->miny <= _this->maxy);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(487)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(487)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(487)
							if ((tmp17)){
								HX_STACK_LINE(487)
								tmp18 = (_this->miny <= ab->maxy);
							}
							else{
								HX_STACK_LINE(487)
								tmp18 = false;
							}
							HX_STACK_LINE(487)
							bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(487)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(487)
							if ((tmp19)){
								HX_STACK_LINE(487)
								tmp20 = (ab->minx <= _this->maxx);
							}
							else{
								HX_STACK_LINE(487)
								tmp20 = false;
							}
							HX_STACK_LINE(487)
							if ((tmp20)){
								HX_STACK_LINE(487)
								tmp15 = (_this->minx <= ab->maxx);
							}
							else{
								HX_STACK_LINE(487)
								tmp15 = false;
							}
						}
						HX_STACK_LINE(487)
						if ((tmp15)){
							HX_STACK_LINE(488)
							::zpp_nape::shape::ZPP_Shape tmp16 = shape;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(488)
							::nape::shape::Shape tmp17 = this->aabbShape;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(488)
							::zpp_nape::shape::ZPP_Shape tmp18 = tmp17->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(488)
							bool tmp19 = ::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(tmp16,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(488)
							if ((tmp19)){
								HX_STACK_LINE(488)
								::nape::shape::Shape tmp20 = shape->outer;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(488)
								ret->push(tmp20);
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(492)
				bool tmp13 = containment;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(492)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(492)
				if ((tmp13)){
					HX_STACK_LINE(492)
					::zpp_nape::geom::ZPP_AABB x = a->aabb;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(492)
					bool tmp15 = (x->minx >= ab->minx);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(492)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(492)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(492)
					if ((tmp16)){
						HX_STACK_LINE(492)
						tmp17 = (x->miny >= ab->miny);
					}
					else{
						HX_STACK_LINE(492)
						tmp17 = false;
					}
					HX_STACK_LINE(492)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(492)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(492)
					if ((tmp18)){
						HX_STACK_LINE(492)
						tmp19 = (x->maxx <= ab->maxx);
					}
					else{
						HX_STACK_LINE(492)
						tmp19 = false;
					}
					HX_STACK_LINE(492)
					if ((tmp19)){
						HX_STACK_LINE(492)
						tmp14 = (x->maxy <= ab->maxy);
					}
					else{
						HX_STACK_LINE(492)
						tmp14 = false;
					}
				}
				else{
					HX_STACK_LINE(492)
					::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(492)
					bool tmp15 = (ab->miny <= _this->maxy);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(492)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(492)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(492)
					if ((tmp16)){
						HX_STACK_LINE(492)
						tmp17 = (_this->miny <= ab->maxy);
					}
					else{
						HX_STACK_LINE(492)
						tmp17 = false;
					}
					HX_STACK_LINE(492)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(492)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(492)
					if ((tmp18)){
						HX_STACK_LINE(492)
						tmp19 = (ab->minx <= _this->maxx);
					}
					else{
						HX_STACK_LINE(492)
						tmp19 = false;
					}
					HX_STACK_LINE(492)
					if ((tmp19)){
						HX_STACK_LINE(492)
						tmp14 = (_this->minx <= ab->maxx);
					}
					else{
						HX_STACK_LINE(492)
						tmp14 = false;
					}
				}
				HX_STACK_LINE(492)
				if ((tmp14)){
					HX_STACK_LINE(492)
					::nape::shape::Shape tmp15 = shape->outer;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(492)
					ret->push(tmp15);
				}
			}
		}
		HX_STACK_LINE(494)
		a = a->next;
	}
	HX_STACK_LINE(496)
	::nape::shape::ShapeList tmp6 = ret;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(496)
	return tmp6;
}


::nape::phys::BodyList ZPP_SweepPhase_obj::bodiesInAABB( ::zpp_nape::geom::ZPP_AABB aabb,bool strict,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_SweepPhase","bodiesInAABB",0x28420336,"zpp_nape.space.ZPP_SweepPhase.bodiesInAABB","zpp_nape/space/SweepPhase.hx",499,0x6f338844)
	HX_STACK_THIS(this)
	HX_STACK_ARG(aabb,"aabb")
	HX_STACK_ARG(strict,"strict")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(500)
	this->sync_broadphase();
	HX_STACK_LINE(501)
	::zpp_nape::geom::ZPP_AABB tmp = aabb;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(501)
	this->updateAABBShape(tmp);
	HX_STACK_LINE(502)
	::nape::shape::Shape tmp1 = this->aabbShape;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(502)
	::zpp_nape::geom::ZPP_AABB tmp2 = tmp1->zpp_inner->aabb;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(502)
	::zpp_nape::geom::ZPP_AABB ab = tmp2;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(503)
	bool tmp3 = (output == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(503)
	::nape::phys::BodyList tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(503)
	if ((tmp3)){
		HX_STACK_LINE(503)
		tmp4 = ::nape::phys::BodyList_obj::__new();
	}
	else{
		HX_STACK_LINE(503)
		tmp4 = output;
	}
	HX_STACK_LINE(503)
	::nape::phys::BodyList ret = tmp4;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(504)
	::nape::phys::BodyList tmp5 = this->failed;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(504)
	bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(504)
	if ((tmp6)){
		HX_STACK_LINE(504)
		::nape::phys::BodyList tmp7 = ::nape::phys::BodyList_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(504)
		this->failed = tmp7;
	}
	HX_STACK_LINE(505)
	::zpp_nape::space::ZPP_SweepData tmp7 = this->list;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(505)
	::zpp_nape::space::ZPP_SweepData a = tmp7;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(506)
	while((true)){
		HX_STACK_LINE(506)
		bool tmp8 = (a != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(506)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(506)
		if ((tmp8)){
			HX_STACK_LINE(506)
			Float tmp10 = a->aabb->maxx;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(506)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(506)
			Float tmp12 = ab->minx;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(506)
			tmp9 = (tmp11 < tmp12);
		}
		else{
			HX_STACK_LINE(506)
			tmp9 = false;
		}
		HX_STACK_LINE(506)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(506)
		if ((tmp10)){
			HX_STACK_LINE(506)
			break;
		}
		HX_STACK_LINE(506)
		a = a->next;
	}
	HX_STACK_LINE(507)
	while((true)){
		HX_STACK_LINE(507)
		bool tmp8 = (a != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(507)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(507)
		if ((tmp8)){
			HX_STACK_LINE(507)
			Float tmp10 = a->aabb->minx;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(507)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(507)
			Float tmp12 = ab->maxx;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(507)
			tmp9 = (tmp11 <= tmp12);
		}
		else{
			HX_STACK_LINE(507)
			tmp9 = false;
		}
		HX_STACK_LINE(507)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(507)
		if ((tmp10)){
			HX_STACK_LINE(507)
			break;
		}
		HX_STACK_LINE(508)
		::zpp_nape::shape::ZPP_Shape shape = a->shape;		HX_STACK_VAR(shape,"shape");
		HX_STACK_LINE(509)
		::nape::phys::Body tmp11 = shape->body->outer;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(509)
		::nape::phys::Body body = tmp11;		HX_STACK_VAR(body,"body");
		HX_STACK_LINE(510)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(510)
		{
			HX_STACK_LINE(510)
			::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(510)
			bool tmp13 = (ab->miny <= _this->maxy);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(510)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(510)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(510)
			if ((tmp14)){
				HX_STACK_LINE(510)
				tmp15 = (_this->miny <= ab->maxy);
			}
			else{
				HX_STACK_LINE(510)
				tmp15 = false;
			}
			HX_STACK_LINE(510)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(510)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(510)
			if ((tmp16)){
				HX_STACK_LINE(510)
				tmp17 = (ab->minx <= _this->maxx);
			}
			else{
				HX_STACK_LINE(510)
				tmp17 = false;
			}
			HX_STACK_LINE(510)
			if ((tmp17)){
				HX_STACK_LINE(510)
				tmp12 = (_this->minx <= ab->maxx);
			}
			else{
				HX_STACK_LINE(510)
				tmp12 = false;
			}
		}
		HX_STACK_LINE(510)
		if ((tmp12)){
			HX_STACK_LINE(511)
			bool tmp13 = (filter == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(511)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(511)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(511)
			if ((tmp14)){
				HX_STACK_LINE(511)
				::zpp_nape::dynamics::ZPP_InteractionFilter _this = shape->filter;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(511)
				int tmp16 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(511)
				int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(511)
				bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(511)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(511)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(511)
				if ((tmp20)){
					HX_STACK_LINE(511)
					int tmp21 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(511)
					int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(511)
					int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(511)
					tmp15 = (tmp23 != (int)0);
				}
				else{
					HX_STACK_LINE(511)
					tmp15 = false;
				}
			}
			else{
				HX_STACK_LINE(511)
				tmp15 = true;
			}
			HX_STACK_LINE(511)
			if ((tmp15)){
				HX_STACK_LINE(512)
				bool tmp16 = strict;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(512)
				if ((tmp16)){
					HX_STACK_LINE(513)
					bool tmp17 = containment;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(513)
					if ((tmp17)){
						HX_STACK_LINE(514)
						::nape::phys::BodyList tmp18 = this->failed;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(514)
						::nape::phys::Body tmp19 = body;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(514)
						bool tmp20 = tmp18->has(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(514)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(514)
						if ((tmp21)){
							HX_STACK_LINE(515)
							::nape::shape::Shape tmp22 = this->aabbShape;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(515)
							::zpp_nape::shape::ZPP_Shape tmp23 = tmp22->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(515)
							::zpp_nape::shape::ZPP_Shape tmp24 = shape;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(515)
							bool tmp25 = ::zpp_nape::geom::ZPP_Collide_obj::containTest(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(515)
							bool col = tmp25;		HX_STACK_VAR(col,"col");
							HX_STACK_LINE(516)
							::nape::phys::Body tmp26 = body;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(516)
							bool tmp27 = ret->has(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(516)
							bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(516)
							bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(516)
							bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(516)
							if ((tmp29)){
								HX_STACK_LINE(516)
								tmp30 = col;
							}
							else{
								HX_STACK_LINE(516)
								tmp30 = false;
							}
							HX_STACK_LINE(516)
							if ((tmp30)){
								HX_STACK_LINE(516)
								::nape::phys::Body tmp31 = body;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(516)
								ret->push(tmp31);
							}
							else{
								HX_STACK_LINE(517)
								bool tmp31 = col;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(517)
								bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(517)
								if ((tmp32)){
									HX_STACK_LINE(518)
									::nape::phys::Body tmp33 = body;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(518)
									ret->remove(tmp33);
									HX_STACK_LINE(519)
									::nape::phys::BodyList tmp34 = this->failed;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(519)
									::nape::phys::Body tmp35 = body;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(519)
									tmp34->push(tmp35);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(523)
						::nape::phys::Body tmp18 = body;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(523)
						bool tmp19 = ret->has(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(523)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(523)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(523)
						bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(523)
						if ((tmp21)){
							HX_STACK_LINE(523)
							::zpp_nape::shape::ZPP_Shape tmp23 = shape;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(523)
							::nape::shape::Shape tmp24 = this->aabbShape;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(523)
							::nape::shape::Shape tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(523)
							::zpp_nape::shape::ZPP_Shape tmp26 = tmp25->zpp_inner;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(523)
							::zpp_nape::shape::ZPP_Shape tmp27 = tmp23;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(523)
							::zpp_nape::shape::ZPP_Shape tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(523)
							tmp22 = ::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(tmp27,tmp28);
						}
						else{
							HX_STACK_LINE(523)
							tmp22 = false;
						}
						HX_STACK_LINE(523)
						if ((tmp22)){
							HX_STACK_LINE(524)
							::nape::phys::Body tmp23 = body;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(524)
							ret->push(tmp23);
						}
					}
				}
				else{
					HX_STACK_LINE(528)
					bool tmp17 = containment;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(528)
					if ((tmp17)){
						HX_STACK_LINE(529)
						::nape::phys::BodyList tmp18 = this->failed;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(529)
						::nape::phys::Body tmp19 = body;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(529)
						bool tmp20 = tmp18->has(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(529)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(529)
						if ((tmp21)){
							HX_STACK_LINE(530)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(530)
							{
								HX_STACK_LINE(530)
								::zpp_nape::geom::ZPP_AABB x = shape->aabb;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(530)
								bool tmp23 = (x->minx >= ab->minx);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(530)
								bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(530)
								bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(530)
								if ((tmp24)){
									HX_STACK_LINE(530)
									tmp25 = (x->miny >= ab->miny);
								}
								else{
									HX_STACK_LINE(530)
									tmp25 = false;
								}
								HX_STACK_LINE(530)
								bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(530)
								bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(530)
								if ((tmp26)){
									HX_STACK_LINE(530)
									tmp27 = (x->maxx <= ab->maxx);
								}
								else{
									HX_STACK_LINE(530)
									tmp27 = false;
								}
								HX_STACK_LINE(530)
								if ((tmp27)){
									HX_STACK_LINE(530)
									tmp22 = (x->maxy <= ab->maxy);
								}
								else{
									HX_STACK_LINE(530)
									tmp22 = false;
								}
							}
							HX_STACK_LINE(530)
							bool col = tmp22;		HX_STACK_VAR(col,"col");
							HX_STACK_LINE(531)
							::nape::phys::Body tmp23 = body;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(531)
							bool tmp24 = ret->has(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(531)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(531)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(531)
							bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(531)
							if ((tmp26)){
								HX_STACK_LINE(531)
								tmp27 = col;
							}
							else{
								HX_STACK_LINE(531)
								tmp27 = false;
							}
							HX_STACK_LINE(531)
							if ((tmp27)){
								HX_STACK_LINE(531)
								::nape::phys::Body tmp28 = body;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(531)
								ret->push(tmp28);
							}
							else{
								HX_STACK_LINE(532)
								bool tmp28 = col;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(532)
								bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(532)
								if ((tmp29)){
									HX_STACK_LINE(533)
									::nape::phys::Body tmp30 = body;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(533)
									ret->remove(tmp30);
									HX_STACK_LINE(534)
									::nape::phys::BodyList tmp31 = this->failed;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(534)
									::nape::phys::Body tmp32 = body;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(534)
									tmp31->push(tmp32);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(538)
						::nape::phys::Body tmp18 = body;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(538)
						bool tmp19 = ret->has(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(538)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(538)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(538)
						bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(538)
						if ((tmp21)){
							HX_STACK_LINE(538)
							::zpp_nape::geom::ZPP_AABB x = shape->aabb;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(538)
							bool tmp23 = (x->minx >= ab->minx);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(538)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(538)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(538)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(538)
							bool tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(538)
							if ((tmp27)){
								HX_STACK_LINE(538)
								bool tmp28 = (x->miny >= ab->miny);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(538)
								tmp26 = tmp28;
							}
							else{
								HX_STACK_LINE(538)
								tmp26 = false;
							}
							HX_STACK_LINE(538)
							bool tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(538)
							bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(538)
							bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(538)
							if ((tmp30)){
								HX_STACK_LINE(538)
								bool tmp31 = (x->maxx <= ab->maxx);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(538)
								tmp29 = tmp31;
							}
							else{
								HX_STACK_LINE(538)
								tmp29 = false;
							}
							HX_STACK_LINE(538)
							bool tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(538)
							if ((tmp31)){
								HX_STACK_LINE(538)
								tmp22 = (x->maxy <= ab->maxy);
							}
							else{
								HX_STACK_LINE(538)
								tmp22 = false;
							}
						}
						else{
							HX_STACK_LINE(538)
							tmp22 = false;
						}
						HX_STACK_LINE(538)
						if ((tmp22)){
							HX_STACK_LINE(539)
							::nape::phys::Body tmp23 = body;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(539)
							ret->push(tmp23);
						}
					}
				}
			}
		}
		HX_STACK_LINE(544)
		a = a->next;
	}
	HX_STACK_LINE(546)
	::nape::phys::BodyList tmp8 = this->failed;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(546)
	tmp8->clear();
	HX_STACK_LINE(547)
	::nape::phys::BodyList tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(547)
	return tmp9;
}


::nape::shape::ShapeList ZPP_SweepPhase_obj::shapesInCircle( Float x,Float y,Float r,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_SweepPhase","shapesInCircle",0xf9d910f8,"zpp_nape.space.ZPP_SweepPhase.shapesInCircle","zpp_nape/space/SweepPhase.hx",549,0x6f338844)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(550)
	this->sync_broadphase();
	HX_STACK_LINE(551)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(551)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(551)
	Float tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(551)
	this->updateCircShape(tmp,tmp1,tmp2);
	HX_STACK_LINE(552)
	::nape::shape::Shape tmp3 = this->circShape;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(552)
	::zpp_nape::geom::ZPP_AABB tmp4 = tmp3->zpp_inner->aabb;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(552)
	::zpp_nape::geom::ZPP_AABB ab = tmp4;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(553)
	bool tmp5 = (output == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(553)
	::nape::shape::ShapeList tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(553)
	if ((tmp5)){
		HX_STACK_LINE(553)
		tmp6 = ::nape::shape::ShapeList_obj::__new();
	}
	else{
		HX_STACK_LINE(553)
		tmp6 = output;
	}
	HX_STACK_LINE(553)
	::nape::shape::ShapeList ret = tmp6;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(554)
	::zpp_nape::space::ZPP_SweepData tmp7 = this->list;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(554)
	::zpp_nape::space::ZPP_SweepData a = tmp7;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(555)
	while((true)){
		HX_STACK_LINE(555)
		bool tmp8 = (a != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(555)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(555)
		if ((tmp8)){
			HX_STACK_LINE(555)
			Float tmp10 = a->aabb->maxx;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(555)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(555)
			Float tmp12 = ab->minx;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(555)
			tmp9 = (tmp11 < tmp12);
		}
		else{
			HX_STACK_LINE(555)
			tmp9 = false;
		}
		HX_STACK_LINE(555)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(555)
		if ((tmp10)){
			HX_STACK_LINE(555)
			break;
		}
		HX_STACK_LINE(555)
		a = a->next;
	}
	HX_STACK_LINE(556)
	while((true)){
		HX_STACK_LINE(556)
		bool tmp8 = (a != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(556)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(556)
		if ((tmp8)){
			HX_STACK_LINE(556)
			Float tmp10 = a->aabb->minx;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(556)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(556)
			Float tmp12 = ab->maxx;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(556)
			tmp9 = (tmp11 <= tmp12);
		}
		else{
			HX_STACK_LINE(556)
			tmp9 = false;
		}
		HX_STACK_LINE(556)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(556)
		if ((tmp10)){
			HX_STACK_LINE(556)
			break;
		}
		HX_STACK_LINE(557)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(557)
		{
			HX_STACK_LINE(557)
			::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(557)
			bool tmp12 = (ab->miny <= _this->maxy);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(557)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(557)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(557)
			if ((tmp13)){
				HX_STACK_LINE(557)
				tmp14 = (_this->miny <= ab->maxy);
			}
			else{
				HX_STACK_LINE(557)
				tmp14 = false;
			}
			HX_STACK_LINE(557)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(557)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(557)
			if ((tmp15)){
				HX_STACK_LINE(557)
				tmp16 = (ab->minx <= _this->maxx);
			}
			else{
				HX_STACK_LINE(557)
				tmp16 = false;
			}
			HX_STACK_LINE(557)
			if ((tmp16)){
				HX_STACK_LINE(557)
				tmp11 = (_this->minx <= ab->maxx);
			}
			else{
				HX_STACK_LINE(557)
				tmp11 = false;
			}
		}
		HX_STACK_LINE(557)
		if ((tmp11)){
			HX_STACK_LINE(558)
			::zpp_nape::shape::ZPP_Shape shape = a->shape;		HX_STACK_VAR(shape,"shape");
			HX_STACK_LINE(559)
			bool tmp12 = (filter == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(559)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(559)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(559)
			if ((tmp13)){
				HX_STACK_LINE(559)
				::zpp_nape::dynamics::ZPP_InteractionFilter _this = shape->filter;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(559)
				int tmp15 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(559)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(559)
				bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(559)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(559)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(559)
				if ((tmp19)){
					HX_STACK_LINE(559)
					int tmp20 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(559)
					int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(559)
					int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(559)
					tmp14 = (tmp22 != (int)0);
				}
				else{
					HX_STACK_LINE(559)
					tmp14 = false;
				}
			}
			else{
				HX_STACK_LINE(559)
				tmp14 = true;
			}
			HX_STACK_LINE(559)
			if ((tmp14)){
				HX_STACK_LINE(560)
				bool tmp15 = containment;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(560)
				if ((tmp15)){
					HX_STACK_LINE(561)
					::nape::shape::Shape tmp16 = this->circShape;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(561)
					::zpp_nape::shape::ZPP_Shape tmp17 = tmp16->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(561)
					::zpp_nape::shape::ZPP_Shape tmp18 = shape;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(561)
					bool tmp19 = ::zpp_nape::geom::ZPP_Collide_obj::containTest(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(561)
					if ((tmp19)){
						HX_STACK_LINE(561)
						::nape::shape::Shape tmp20 = shape->outer;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(561)
						ret->push(tmp20);
					}
				}
				else{
					HX_STACK_LINE(563)
					::zpp_nape::shape::ZPP_Shape tmp16 = shape;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(563)
					::nape::shape::Shape tmp17 = this->circShape;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(563)
					::zpp_nape::shape::ZPP_Shape tmp18 = tmp17->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(563)
					bool tmp19 = ::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(tmp16,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(563)
					if ((tmp19)){
						HX_STACK_LINE(563)
						::nape::shape::Shape tmp20 = shape->outer;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(563)
						ret->push(tmp20);
					}
				}
			}
		}
		HX_STACK_LINE(566)
		a = a->next;
	}
	HX_STACK_LINE(568)
	::nape::shape::ShapeList tmp8 = ret;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(568)
	return tmp8;
}


::nape::phys::BodyList ZPP_SweepPhase_obj::bodiesInCircle( Float x,Float y,Float r,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_SweepPhase","bodiesInCircle",0x33c35046,"zpp_nape.space.ZPP_SweepPhase.bodiesInCircle","zpp_nape/space/SweepPhase.hx",570,0x6f338844)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(571)
	this->sync_broadphase();
	HX_STACK_LINE(572)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(572)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(572)
	Float tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(572)
	this->updateCircShape(tmp,tmp1,tmp2);
	HX_STACK_LINE(573)
	::nape::shape::Shape tmp3 = this->circShape;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(573)
	::zpp_nape::geom::ZPP_AABB tmp4 = tmp3->zpp_inner->aabb;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(573)
	::zpp_nape::geom::ZPP_AABB ab = tmp4;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(574)
	bool tmp5 = (output == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(574)
	::nape::phys::BodyList tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(574)
	if ((tmp5)){
		HX_STACK_LINE(574)
		tmp6 = ::nape::phys::BodyList_obj::__new();
	}
	else{
		HX_STACK_LINE(574)
		tmp6 = output;
	}
	HX_STACK_LINE(574)
	::nape::phys::BodyList ret = tmp6;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(575)
	::nape::phys::BodyList tmp7 = this->failed;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(575)
	bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(575)
	if ((tmp8)){
		HX_STACK_LINE(575)
		::nape::phys::BodyList tmp9 = ::nape::phys::BodyList_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(575)
		this->failed = tmp9;
	}
	HX_STACK_LINE(576)
	::zpp_nape::space::ZPP_SweepData tmp9 = this->list;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(576)
	::zpp_nape::space::ZPP_SweepData a = tmp9;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(577)
	while((true)){
		HX_STACK_LINE(577)
		bool tmp10 = (a != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(577)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(577)
		if ((tmp10)){
			HX_STACK_LINE(577)
			Float tmp12 = a->aabb->maxx;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(577)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(577)
			Float tmp14 = ab->minx;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(577)
			tmp11 = (tmp13 < tmp14);
		}
		else{
			HX_STACK_LINE(577)
			tmp11 = false;
		}
		HX_STACK_LINE(577)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(577)
		if ((tmp12)){
			HX_STACK_LINE(577)
			break;
		}
		HX_STACK_LINE(577)
		a = a->next;
	}
	HX_STACK_LINE(578)
	while((true)){
		HX_STACK_LINE(578)
		bool tmp10 = (a != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(578)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(578)
		if ((tmp10)){
			HX_STACK_LINE(578)
			Float tmp12 = a->aabb->minx;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(578)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(578)
			Float tmp14 = ab->maxx;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(578)
			tmp11 = (tmp13 <= tmp14);
		}
		else{
			HX_STACK_LINE(578)
			tmp11 = false;
		}
		HX_STACK_LINE(578)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(578)
		if ((tmp12)){
			HX_STACK_LINE(578)
			break;
		}
		HX_STACK_LINE(579)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(579)
		{
			HX_STACK_LINE(579)
			::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(579)
			bool tmp14 = (ab->miny <= _this->maxy);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(579)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(579)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(579)
			if ((tmp15)){
				HX_STACK_LINE(579)
				tmp16 = (_this->miny <= ab->maxy);
			}
			else{
				HX_STACK_LINE(579)
				tmp16 = false;
			}
			HX_STACK_LINE(579)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(579)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(579)
			if ((tmp17)){
				HX_STACK_LINE(579)
				tmp18 = (ab->minx <= _this->maxx);
			}
			else{
				HX_STACK_LINE(579)
				tmp18 = false;
			}
			HX_STACK_LINE(579)
			if ((tmp18)){
				HX_STACK_LINE(579)
				tmp13 = (_this->minx <= ab->maxx);
			}
			else{
				HX_STACK_LINE(579)
				tmp13 = false;
			}
		}
		HX_STACK_LINE(579)
		if ((tmp13)){
			HX_STACK_LINE(580)
			::zpp_nape::shape::ZPP_Shape shape = a->shape;		HX_STACK_VAR(shape,"shape");
			HX_STACK_LINE(581)
			::nape::phys::Body tmp14 = shape->body->outer;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(581)
			::nape::phys::Body body = tmp14;		HX_STACK_VAR(body,"body");
			HX_STACK_LINE(582)
			bool tmp15 = (filter == null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(582)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(582)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(582)
			if ((tmp16)){
				HX_STACK_LINE(582)
				::zpp_nape::dynamics::ZPP_InteractionFilter _this = shape->filter;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(582)
				int tmp18 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(582)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(582)
				bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(582)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(582)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(582)
				if ((tmp22)){
					HX_STACK_LINE(582)
					int tmp23 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(582)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(582)
					int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(582)
					tmp17 = (tmp25 != (int)0);
				}
				else{
					HX_STACK_LINE(582)
					tmp17 = false;
				}
			}
			else{
				HX_STACK_LINE(582)
				tmp17 = true;
			}
			HX_STACK_LINE(582)
			if ((tmp17)){
				HX_STACK_LINE(583)
				bool tmp18 = containment;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(583)
				if ((tmp18)){
					HX_STACK_LINE(584)
					::nape::phys::BodyList tmp19 = this->failed;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(584)
					::nape::phys::Body tmp20 = body;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(584)
					bool tmp21 = tmp19->has(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(584)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(584)
					if ((tmp22)){
						HX_STACK_LINE(585)
						::nape::shape::Shape tmp23 = this->circShape;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(585)
						::zpp_nape::shape::ZPP_Shape tmp24 = tmp23->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(585)
						::zpp_nape::shape::ZPP_Shape tmp25 = shape;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(585)
						bool tmp26 = ::zpp_nape::geom::ZPP_Collide_obj::containTest(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(585)
						bool col = tmp26;		HX_STACK_VAR(col,"col");
						HX_STACK_LINE(586)
						::nape::phys::Body tmp27 = body;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(586)
						bool tmp28 = ret->has(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(586)
						bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(586)
						bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(586)
						bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(586)
						if ((tmp30)){
							HX_STACK_LINE(586)
							tmp31 = col;
						}
						else{
							HX_STACK_LINE(586)
							tmp31 = false;
						}
						HX_STACK_LINE(586)
						if ((tmp31)){
							HX_STACK_LINE(586)
							::nape::phys::Body tmp32 = body;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(586)
							ret->push(tmp32);
						}
						else{
							HX_STACK_LINE(587)
							bool tmp32 = col;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(587)
							bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(587)
							if ((tmp33)){
								HX_STACK_LINE(588)
								::nape::phys::Body tmp34 = body;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(588)
								ret->remove(tmp34);
								HX_STACK_LINE(589)
								::nape::phys::BodyList tmp35 = this->failed;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(589)
								::nape::phys::Body tmp36 = body;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(589)
								tmp35->push(tmp36);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(593)
					::nape::phys::Body tmp19 = body;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(593)
					bool tmp20 = ret->has(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(593)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(593)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(593)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(593)
					if ((tmp22)){
						HX_STACK_LINE(593)
						::zpp_nape::shape::ZPP_Shape tmp24 = shape;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(593)
						::nape::shape::Shape tmp25 = this->circShape;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(593)
						::nape::shape::Shape tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(593)
						::zpp_nape::shape::ZPP_Shape tmp27 = tmp26->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(593)
						::zpp_nape::shape::ZPP_Shape tmp28 = tmp24;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(593)
						::zpp_nape::shape::ZPP_Shape tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(593)
						tmp23 = ::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(tmp28,tmp29);
					}
					else{
						HX_STACK_LINE(593)
						tmp23 = false;
					}
					HX_STACK_LINE(593)
					if ((tmp23)){
						HX_STACK_LINE(594)
						::nape::phys::Body tmp24 = body;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(594)
						ret->push(tmp24);
					}
				}
			}
		}
		HX_STACK_LINE(598)
		a = a->next;
	}
	HX_STACK_LINE(600)
	::nape::phys::BodyList tmp10 = this->failed;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(600)
	tmp10->clear();
	HX_STACK_LINE(601)
	::nape::phys::BodyList tmp11 = ret;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(601)
	return tmp11;
}


::nape::shape::ShapeList ZPP_SweepPhase_obj::shapesInShape( ::zpp_nape::shape::ZPP_Shape shape,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_SweepPhase","shapesInShape",0x1d909939,"zpp_nape.space.ZPP_SweepPhase.shapesInShape","zpp_nape/space/SweepPhase.hx",603,0x6f338844)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shape,"shape")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(604)
	this->sync_broadphase();
	HX_STACK_LINE(605)
	::zpp_nape::shape::ZPP_Shape tmp = shape;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(605)
	this->validateShape(tmp);
	HX_STACK_LINE(606)
	::zpp_nape::geom::ZPP_AABB ab = shape->aabb;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(607)
	bool tmp1 = (output == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(607)
	::nape::shape::ShapeList tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(607)
	if ((tmp1)){
		HX_STACK_LINE(607)
		tmp2 = ::nape::shape::ShapeList_obj::__new();
	}
	else{
		HX_STACK_LINE(607)
		tmp2 = output;
	}
	HX_STACK_LINE(607)
	::nape::shape::ShapeList ret = tmp2;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(608)
	::zpp_nape::space::ZPP_SweepData tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(608)
	::zpp_nape::space::ZPP_SweepData a = tmp3;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(609)
	while((true)){
		HX_STACK_LINE(609)
		bool tmp4 = (a != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(609)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(609)
		if ((tmp4)){
			HX_STACK_LINE(609)
			Float tmp6 = a->aabb->maxx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(609)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(609)
			Float tmp8 = ab->minx;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(609)
			tmp5 = (tmp7 < tmp8);
		}
		else{
			HX_STACK_LINE(609)
			tmp5 = false;
		}
		HX_STACK_LINE(609)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(609)
		if ((tmp6)){
			HX_STACK_LINE(609)
			break;
		}
		HX_STACK_LINE(609)
		a = a->next;
	}
	HX_STACK_LINE(610)
	while((true)){
		HX_STACK_LINE(610)
		bool tmp4 = (a != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(610)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(610)
		if ((tmp4)){
			HX_STACK_LINE(610)
			Float tmp6 = a->aabb->minx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(610)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(610)
			Float tmp8 = ab->maxx;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(610)
			tmp5 = (tmp7 <= tmp8);
		}
		else{
			HX_STACK_LINE(610)
			tmp5 = false;
		}
		HX_STACK_LINE(610)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(610)
		if ((tmp6)){
			HX_STACK_LINE(610)
			break;
		}
		HX_STACK_LINE(611)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(611)
		{
			HX_STACK_LINE(611)
			::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(611)
			bool tmp8 = (ab->miny <= _this->maxy);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(611)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(611)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(611)
			if ((tmp9)){
				HX_STACK_LINE(611)
				tmp10 = (_this->miny <= ab->maxy);
			}
			else{
				HX_STACK_LINE(611)
				tmp10 = false;
			}
			HX_STACK_LINE(611)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(611)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(611)
			if ((tmp11)){
				HX_STACK_LINE(611)
				tmp12 = (ab->minx <= _this->maxx);
			}
			else{
				HX_STACK_LINE(611)
				tmp12 = false;
			}
			HX_STACK_LINE(611)
			if ((tmp12)){
				HX_STACK_LINE(611)
				tmp7 = (_this->minx <= ab->maxx);
			}
			else{
				HX_STACK_LINE(611)
				tmp7 = false;
			}
		}
		HX_STACK_LINE(611)
		if ((tmp7)){
			HX_STACK_LINE(612)
			::zpp_nape::shape::ZPP_Shape shape2 = a->shape;		HX_STACK_VAR(shape2,"shape2");
			HX_STACK_LINE(613)
			bool tmp8 = (filter == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(613)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(613)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(613)
			if ((tmp9)){
				HX_STACK_LINE(613)
				::zpp_nape::dynamics::ZPP_InteractionFilter _this = shape2->filter;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(613)
				int tmp11 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(613)
				int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(613)
				bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(613)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(613)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(613)
				if ((tmp15)){
					HX_STACK_LINE(613)
					int tmp16 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(613)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(613)
					int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(613)
					tmp10 = (tmp18 != (int)0);
				}
				else{
					HX_STACK_LINE(613)
					tmp10 = false;
				}
			}
			else{
				HX_STACK_LINE(613)
				tmp10 = true;
			}
			HX_STACK_LINE(613)
			if ((tmp10)){
				HX_STACK_LINE(614)
				bool tmp11 = containment;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(614)
				if ((tmp11)){
					HX_STACK_LINE(615)
					::zpp_nape::shape::ZPP_Shape tmp12 = shape;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(615)
					::zpp_nape::shape::ZPP_Shape tmp13 = shape2;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(615)
					bool tmp14 = ::zpp_nape::geom::ZPP_Collide_obj::containTest(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(615)
					if ((tmp14)){
						HX_STACK_LINE(615)
						::nape::shape::Shape tmp15 = shape2->outer;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(615)
						ret->push(tmp15);
					}
				}
				else{
					HX_STACK_LINE(617)
					::zpp_nape::shape::ZPP_Shape tmp12 = shape2;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(617)
					::zpp_nape::shape::ZPP_Shape tmp13 = shape;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(617)
					bool tmp14 = ::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(617)
					if ((tmp14)){
						HX_STACK_LINE(617)
						::nape::shape::Shape tmp15 = shape2->outer;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(617)
						ret->push(tmp15);
					}
				}
			}
		}
		HX_STACK_LINE(620)
		a = a->next;
	}
	HX_STACK_LINE(622)
	::nape::shape::ShapeList tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(622)
	return tmp4;
}


::nape::phys::BodyList ZPP_SweepPhase_obj::bodiesInShape( ::zpp_nape::shape::ZPP_Shape shape,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_SweepPhase","bodiesInShape",0x88963dab,"zpp_nape.space.ZPP_SweepPhase.bodiesInShape","zpp_nape/space/SweepPhase.hx",624,0x6f338844)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shape,"shape")
	HX_STACK_ARG(containment,"containment")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(625)
	this->sync_broadphase();
	HX_STACK_LINE(626)
	::zpp_nape::shape::ZPP_Shape tmp = shape;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(626)
	this->validateShape(tmp);
	HX_STACK_LINE(627)
	::zpp_nape::geom::ZPP_AABB ab = shape->aabb;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(628)
	bool tmp1 = (output == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(628)
	::nape::phys::BodyList tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(628)
	if ((tmp1)){
		HX_STACK_LINE(628)
		tmp2 = ::nape::phys::BodyList_obj::__new();
	}
	else{
		HX_STACK_LINE(628)
		tmp2 = output;
	}
	HX_STACK_LINE(628)
	::nape::phys::BodyList ret = tmp2;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(629)
	::nape::phys::BodyList tmp3 = this->failed;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(629)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(629)
	if ((tmp4)){
		HX_STACK_LINE(629)
		::nape::phys::BodyList tmp5 = ::nape::phys::BodyList_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(629)
		this->failed = tmp5;
	}
	HX_STACK_LINE(630)
	::zpp_nape::space::ZPP_SweepData tmp5 = this->list;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(630)
	::zpp_nape::space::ZPP_SweepData a = tmp5;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(631)
	while((true)){
		HX_STACK_LINE(631)
		bool tmp6 = (a != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(631)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(631)
		if ((tmp6)){
			HX_STACK_LINE(631)
			Float tmp8 = a->aabb->maxx;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(631)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(631)
			Float tmp10 = ab->minx;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(631)
			tmp7 = (tmp9 < tmp10);
		}
		else{
			HX_STACK_LINE(631)
			tmp7 = false;
		}
		HX_STACK_LINE(631)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(631)
		if ((tmp8)){
			HX_STACK_LINE(631)
			break;
		}
		HX_STACK_LINE(631)
		a = a->next;
	}
	HX_STACK_LINE(632)
	while((true)){
		HX_STACK_LINE(632)
		bool tmp6 = (a != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(632)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(632)
		if ((tmp6)){
			HX_STACK_LINE(632)
			Float tmp8 = a->aabb->minx;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(632)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(632)
			Float tmp10 = ab->maxx;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(632)
			tmp7 = (tmp9 <= tmp10);
		}
		else{
			HX_STACK_LINE(632)
			tmp7 = false;
		}
		HX_STACK_LINE(632)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(632)
		if ((tmp8)){
			HX_STACK_LINE(632)
			break;
		}
		HX_STACK_LINE(633)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(633)
		{
			HX_STACK_LINE(633)
			::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(633)
			bool tmp10 = (ab->miny <= _this->maxy);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(633)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(633)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(633)
			if ((tmp11)){
				HX_STACK_LINE(633)
				tmp12 = (_this->miny <= ab->maxy);
			}
			else{
				HX_STACK_LINE(633)
				tmp12 = false;
			}
			HX_STACK_LINE(633)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(633)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(633)
			if ((tmp13)){
				HX_STACK_LINE(633)
				tmp14 = (ab->minx <= _this->maxx);
			}
			else{
				HX_STACK_LINE(633)
				tmp14 = false;
			}
			HX_STACK_LINE(633)
			if ((tmp14)){
				HX_STACK_LINE(633)
				tmp9 = (_this->minx <= ab->maxx);
			}
			else{
				HX_STACK_LINE(633)
				tmp9 = false;
			}
		}
		HX_STACK_LINE(633)
		if ((tmp9)){
			HX_STACK_LINE(634)
			::zpp_nape::shape::ZPP_Shape shape2 = a->shape;		HX_STACK_VAR(shape2,"shape2");
			HX_STACK_LINE(635)
			::nape::phys::Body tmp10 = shape2->body->outer;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(635)
			::nape::phys::Body body = tmp10;		HX_STACK_VAR(body,"body");
			HX_STACK_LINE(636)
			bool tmp11 = (filter == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(636)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(636)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(636)
			if ((tmp12)){
				HX_STACK_LINE(636)
				::zpp_nape::dynamics::ZPP_InteractionFilter _this = shape2->filter;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(636)
				int tmp14 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(636)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(636)
				bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(636)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(636)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(636)
				if ((tmp18)){
					HX_STACK_LINE(636)
					int tmp19 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(636)
					int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(636)
					int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(636)
					tmp13 = (tmp21 != (int)0);
				}
				else{
					HX_STACK_LINE(636)
					tmp13 = false;
				}
			}
			else{
				HX_STACK_LINE(636)
				tmp13 = true;
			}
			HX_STACK_LINE(636)
			if ((tmp13)){
				HX_STACK_LINE(637)
				bool tmp14 = containment;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(637)
				if ((tmp14)){
					HX_STACK_LINE(638)
					::nape::phys::BodyList tmp15 = this->failed;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(638)
					::nape::phys::Body tmp16 = body;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(638)
					bool tmp17 = tmp15->has(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(638)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(638)
					if ((tmp18)){
						HX_STACK_LINE(639)
						::zpp_nape::shape::ZPP_Shape tmp19 = shape;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(639)
						::zpp_nape::shape::ZPP_Shape tmp20 = shape2;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(639)
						bool tmp21 = ::zpp_nape::geom::ZPP_Collide_obj::containTest(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(639)
						bool col = tmp21;		HX_STACK_VAR(col,"col");
						HX_STACK_LINE(640)
						::nape::phys::Body tmp22 = body;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(640)
						bool tmp23 = ret->has(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(640)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(640)
						bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(640)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(640)
						if ((tmp25)){
							HX_STACK_LINE(640)
							tmp26 = col;
						}
						else{
							HX_STACK_LINE(640)
							tmp26 = false;
						}
						HX_STACK_LINE(640)
						if ((tmp26)){
							HX_STACK_LINE(640)
							::nape::phys::Body tmp27 = body;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(640)
							ret->push(tmp27);
						}
						else{
							HX_STACK_LINE(641)
							bool tmp27 = col;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(641)
							bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(641)
							if ((tmp28)){
								HX_STACK_LINE(642)
								::nape::phys::Body tmp29 = body;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(642)
								ret->remove(tmp29);
								HX_STACK_LINE(643)
								::nape::phys::BodyList tmp30 = this->failed;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(643)
								::nape::phys::Body tmp31 = body;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(643)
								tmp30->push(tmp31);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(647)
					::nape::phys::Body tmp15 = body;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(647)
					bool tmp16 = ret->has(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(647)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(647)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(647)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(647)
					if ((tmp18)){
						HX_STACK_LINE(647)
						::zpp_nape::shape::ZPP_Shape tmp20 = shape;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(647)
						::zpp_nape::shape::ZPP_Shape tmp21 = shape2;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(647)
						::zpp_nape::shape::ZPP_Shape tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(647)
						::zpp_nape::shape::ZPP_Shape tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(647)
						tmp19 = ::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(tmp22,tmp23);
					}
					else{
						HX_STACK_LINE(647)
						tmp19 = false;
					}
					HX_STACK_LINE(647)
					if ((tmp19)){
						HX_STACK_LINE(648)
						::nape::phys::Body tmp20 = body;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(648)
						ret->push(tmp20);
					}
				}
			}
		}
		HX_STACK_LINE(652)
		a = a->next;
	}
	HX_STACK_LINE(654)
	::nape::phys::BodyList tmp6 = this->failed;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(654)
	tmp6->clear();
	HX_STACK_LINE(655)
	::nape::phys::BodyList tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(655)
	return tmp7;
}


::nape::geom::RayResult ZPP_SweepPhase_obj::rayCast( ::zpp_nape::geom::ZPP_Ray ray,bool inner,::zpp_nape::dynamics::ZPP_InteractionFilter filter){
	HX_STACK_FRAME("zpp_nape.space.ZPP_SweepPhase","rayCast",0xccc030d8,"zpp_nape.space.ZPP_SweepPhase.rayCast","zpp_nape/space/SweepPhase.hx",657,0x6f338844)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(inner,"inner")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(658)
	this->sync_broadphase();
	HX_STACK_LINE(659)
	ray->validate_dir();
	HX_STACK_LINE(660)
	::zpp_nape::geom::ZPP_AABB tmp = ray->rayAABB();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(660)
	::zpp_nape::geom::ZPP_AABB rayab = tmp;		HX_STACK_VAR(rayab,"rayab");
	HX_STACK_LINE(661)
	Float mint = ray->maxdist;		HX_STACK_VAR(mint,"mint");
	HX_STACK_LINE(662)
	::nape::geom::RayResult minres = null();		HX_STACK_VAR(minres,"minres");
	HX_STACK_LINE(663)
	bool tmp1 = (ray->dirx == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(663)
	if ((tmp1)){
		HX_STACK_LINE(664)
		::zpp_nape::space::ZPP_SweepData tmp2 = this->list;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(664)
		::zpp_nape::space::ZPP_SweepData a = tmp2;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(665)
		while((true)){
			HX_STACK_LINE(665)
			bool tmp3 = (a != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(665)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(665)
			if ((tmp3)){
				HX_STACK_LINE(665)
				Float tmp5 = a->aabb->minx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(665)
				Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(665)
				Float tmp7 = rayab->minx;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(665)
				tmp4 = (tmp6 <= tmp7);
			}
			else{
				HX_STACK_LINE(665)
				tmp4 = false;
			}
			HX_STACK_LINE(665)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(665)
			if ((tmp5)){
				HX_STACK_LINE(665)
				break;
			}
			HX_STACK_LINE(666)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(666)
			{
				HX_STACK_LINE(666)
				::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(666)
				bool tmp7 = (rayab->miny <= _this->maxy);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(666)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(666)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(666)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(666)
				bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(666)
				if ((tmp11)){
					HX_STACK_LINE(666)
					bool tmp12 = (_this->miny <= rayab->maxy);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(666)
					tmp10 = tmp12;
				}
				else{
					HX_STACK_LINE(666)
					tmp10 = false;
				}
				HX_STACK_LINE(666)
				bool tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(666)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(666)
				bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(666)
				if ((tmp14)){
					HX_STACK_LINE(666)
					bool tmp15 = (rayab->minx <= _this->maxx);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(666)
					tmp13 = tmp15;
				}
				else{
					HX_STACK_LINE(666)
					tmp13 = false;
				}
				HX_STACK_LINE(666)
				bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(666)
				if ((tmp15)){
					HX_STACK_LINE(666)
					tmp6 = (_this->minx <= rayab->maxx);
				}
				else{
					HX_STACK_LINE(666)
					tmp6 = false;
				}
			}
			HX_STACK_LINE(666)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(666)
			if ((tmp6)){
				HX_STACK_LINE(666)
				bool tmp8 = (filter == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(666)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(666)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(666)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(666)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(666)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(666)
				if ((tmp13)){
					HX_STACK_LINE(666)
					::zpp_nape::dynamics::ZPP_InteractionFilter tmp14 = a->shape->filter;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(666)
					::zpp_nape::dynamics::ZPP_InteractionFilter tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(666)
					::zpp_nape::dynamics::ZPP_InteractionFilter tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(666)
					::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp16;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(666)
					int tmp17 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(666)
					int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(666)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(666)
					bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(666)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(666)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(666)
					bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(666)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(666)
					if ((tmp24)){
						HX_STACK_LINE(666)
						int tmp25 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(666)
						int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(666)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(666)
						int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(666)
						tmp7 = (tmp28 != (int)0);
					}
					else{
						HX_STACK_LINE(666)
						tmp7 = false;
					}
				}
				else{
					HX_STACK_LINE(666)
					tmp7 = true;
				}
			}
			else{
				HX_STACK_LINE(666)
				tmp7 = false;
			}
			HX_STACK_LINE(666)
			if ((tmp7)){
				HX_STACK_LINE(667)
				::zpp_nape::geom::ZPP_AABB tmp8 = a->aabb;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(667)
				Float tmp9 = ray->aabbsect(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(667)
				Float t = tmp9;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(668)
				bool tmp10 = (t >= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(668)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(668)
				if ((tmp10)){
					HX_STACK_LINE(668)
					tmp11 = (t < mint);
				}
				else{
					HX_STACK_LINE(668)
					tmp11 = false;
				}
				HX_STACK_LINE(668)
				if ((tmp11)){
					HX_STACK_LINE(669)
					int tmp12 = a->shape->type;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(669)
					int tmp13 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(669)
					bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(669)
					::nape::geom::RayResult tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(669)
					if ((tmp14)){
						HX_STACK_LINE(669)
						::zpp_nape::shape::ZPP_Circle tmp16 = a->shape->circle;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(669)
						bool tmp17 = inner;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(669)
						Float tmp18 = mint;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(669)
						tmp15 = ray->circlesect(tmp16,tmp17,tmp18);
					}
					else{
						HX_STACK_LINE(669)
						::zpp_nape::shape::ZPP_Polygon tmp16 = a->shape->polygon;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(669)
						bool tmp17 = inner;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(669)
						Float tmp18 = mint;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(669)
						tmp15 = ray->polysect(tmp16,tmp17,tmp18);
					}
					HX_STACK_LINE(669)
					::nape::geom::RayResult result = tmp15;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(670)
					bool tmp16 = (result != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(670)
					if ((tmp16)){
						HX_STACK_LINE(671)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(671)
						{
							HX_STACK_LINE(671)
							{
								HX_STACK_LINE(671)
								::zpp_nape::geom::ZPP_ConvexRayResult tmp18 = result->zpp_inner->next;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(671)
								bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(671)
								if ((tmp19)){
									HX_STACK_LINE(671)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
								}
							}
							HX_STACK_LINE(671)
							tmp17 = result->zpp_inner->toiDistance;
						}
						HX_STACK_LINE(671)
						mint = tmp17;
						HX_STACK_LINE(672)
						bool tmp18 = (minres != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(672)
						if ((tmp18)){
							HX_STACK_LINE(673)
							{
								HX_STACK_LINE(673)
								::zpp_nape::geom::ZPP_ConvexRayResult tmp19 = minres->zpp_inner->next;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(673)
								bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(673)
								if ((tmp20)){
									HX_STACK_LINE(673)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
								}
							}
							HX_STACK_LINE(673)
							minres->zpp_inner->free();
						}
						HX_STACK_LINE(675)
						minres = result;
					}
				}
			}
			HX_STACK_LINE(679)
			a = a->next;
		}
	}
	else{
		HX_STACK_LINE(682)
		bool tmp2 = (ray->dirx < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(682)
		if ((tmp2)){
			HX_STACK_LINE(683)
			::zpp_nape::space::ZPP_SweepData tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(683)
			::zpp_nape::space::ZPP_SweepData a = tmp3;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(684)
			::zpp_nape::space::ZPP_SweepData b = null();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(685)
			while((true)){
				HX_STACK_LINE(685)
				bool tmp4 = (a != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(685)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(685)
				if ((tmp4)){
					HX_STACK_LINE(685)
					Float tmp6 = a->aabb->minx;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(685)
					Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(685)
					Float tmp8 = rayab->maxx;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(685)
					tmp5 = (tmp7 <= tmp8);
				}
				else{
					HX_STACK_LINE(685)
					tmp5 = false;
				}
				HX_STACK_LINE(685)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(685)
				if ((tmp6)){
					HX_STACK_LINE(685)
					break;
				}
				HX_STACK_LINE(686)
				b = a;
				HX_STACK_LINE(687)
				a = a->next;
			}
			HX_STACK_LINE(689)
			a = b;
			HX_STACK_LINE(690)
			while((true)){
				HX_STACK_LINE(690)
				bool tmp4 = (a != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(690)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(690)
				if ((tmp5)){
					HX_STACK_LINE(690)
					break;
				}
				HX_STACK_LINE(691)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(691)
				{
					HX_STACK_LINE(691)
					::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(691)
					bool tmp7 = (rayab->miny <= _this->maxy);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(691)
					bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(691)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(691)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(691)
					bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(691)
					if ((tmp11)){
						HX_STACK_LINE(691)
						bool tmp12 = (_this->miny <= rayab->maxy);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(691)
						tmp10 = tmp12;
					}
					else{
						HX_STACK_LINE(691)
						tmp10 = false;
					}
					HX_STACK_LINE(691)
					bool tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(691)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(691)
					bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(691)
					if ((tmp14)){
						HX_STACK_LINE(691)
						bool tmp15 = (rayab->minx <= _this->maxx);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(691)
						tmp13 = tmp15;
					}
					else{
						HX_STACK_LINE(691)
						tmp13 = false;
					}
					HX_STACK_LINE(691)
					bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(691)
					if ((tmp15)){
						HX_STACK_LINE(691)
						tmp6 = (_this->minx <= rayab->maxx);
					}
					else{
						HX_STACK_LINE(691)
						tmp6 = false;
					}
				}
				HX_STACK_LINE(691)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(691)
				if ((tmp6)){
					HX_STACK_LINE(691)
					bool tmp8 = (filter == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(691)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(691)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(691)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(691)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(691)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(691)
					if ((tmp13)){
						HX_STACK_LINE(691)
						::zpp_nape::dynamics::ZPP_InteractionFilter tmp14 = a->shape->filter;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(691)
						::zpp_nape::dynamics::ZPP_InteractionFilter tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(691)
						::zpp_nape::dynamics::ZPP_InteractionFilter tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(691)
						::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp16;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(691)
						int tmp17 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(691)
						int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(691)
						int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(691)
						bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(691)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(691)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(691)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(691)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(691)
						if ((tmp24)){
							HX_STACK_LINE(691)
							int tmp25 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(691)
							int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(691)
							int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(691)
							int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(691)
							tmp7 = (tmp28 != (int)0);
						}
						else{
							HX_STACK_LINE(691)
							tmp7 = false;
						}
					}
					else{
						HX_STACK_LINE(691)
						tmp7 = true;
					}
				}
				else{
					HX_STACK_LINE(691)
					tmp7 = false;
				}
				HX_STACK_LINE(691)
				if ((tmp7)){
					HX_STACK_LINE(692)
					::zpp_nape::geom::ZPP_AABB tmp8 = a->aabb;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(692)
					Float tmp9 = ray->aabbsect(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(692)
					Float t = tmp9;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(693)
					bool tmp10 = (t >= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(693)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(693)
					if ((tmp10)){
						HX_STACK_LINE(693)
						tmp11 = (t < mint);
					}
					else{
						HX_STACK_LINE(693)
						tmp11 = false;
					}
					HX_STACK_LINE(693)
					if ((tmp11)){
						HX_STACK_LINE(694)
						int tmp12 = a->shape->type;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(694)
						int tmp13 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(694)
						bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(694)
						::nape::geom::RayResult tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(694)
						if ((tmp14)){
							HX_STACK_LINE(694)
							::zpp_nape::shape::ZPP_Circle tmp16 = a->shape->circle;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(694)
							bool tmp17 = inner;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(694)
							Float tmp18 = mint;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(694)
							tmp15 = ray->circlesect(tmp16,tmp17,tmp18);
						}
						else{
							HX_STACK_LINE(694)
							::zpp_nape::shape::ZPP_Polygon tmp16 = a->shape->polygon;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(694)
							bool tmp17 = inner;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(694)
							Float tmp18 = mint;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(694)
							tmp15 = ray->polysect(tmp16,tmp17,tmp18);
						}
						HX_STACK_LINE(694)
						::nape::geom::RayResult result = tmp15;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(695)
						bool tmp16 = (result != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(695)
						if ((tmp16)){
							HX_STACK_LINE(696)
							Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(696)
							{
								HX_STACK_LINE(696)
								{
									HX_STACK_LINE(696)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp18 = result->zpp_inner->next;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(696)
									bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(696)
									if ((tmp19)){
										HX_STACK_LINE(696)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
									}
								}
								HX_STACK_LINE(696)
								tmp17 = result->zpp_inner->toiDistance;
							}
							HX_STACK_LINE(696)
							mint = tmp17;
							HX_STACK_LINE(697)
							bool tmp18 = (minres != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(697)
							if ((tmp18)){
								HX_STACK_LINE(698)
								{
									HX_STACK_LINE(698)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp19 = minres->zpp_inner->next;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(698)
									bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(698)
									if ((tmp20)){
										HX_STACK_LINE(698)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
									}
								}
								HX_STACK_LINE(698)
								minres->zpp_inner->free();
							}
							HX_STACK_LINE(700)
							minres = result;
						}
					}
				}
				HX_STACK_LINE(704)
				a = a->prev;
			}
		}
		else{
			HX_STACK_LINE(708)
			::zpp_nape::space::ZPP_SweepData tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(708)
			::zpp_nape::space::ZPP_SweepData a = tmp3;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(709)
			while((true)){
				HX_STACK_LINE(709)
				bool tmp4 = (a != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(709)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(709)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(709)
				if ((tmp5)){
					HX_STACK_LINE(709)
					Float tmp7 = a->aabb->minx;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(709)
					Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(709)
					Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(709)
					Float tmp10 = rayab->maxx;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(709)
					tmp6 = (tmp9 <= tmp10);
				}
				else{
					HX_STACK_LINE(709)
					tmp6 = false;
				}
				HX_STACK_LINE(709)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(709)
				if ((tmp6)){
					HX_STACK_LINE(709)
					Float tmp8 = a->aabb->minx;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(709)
					Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(709)
					Float tmp10 = ray->originx;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(709)
					Float tmp11 = (ray->dirx * mint);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(709)
					Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(709)
					Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(709)
					Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(709)
					tmp7 = (tmp9 < tmp14);
				}
				else{
					HX_STACK_LINE(709)
					tmp7 = false;
				}
				HX_STACK_LINE(709)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(709)
				if ((tmp8)){
					HX_STACK_LINE(709)
					break;
				}
				HX_STACK_LINE(710)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(710)
				{
					HX_STACK_LINE(710)
					::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(710)
					bool tmp10 = (rayab->miny <= _this->maxy);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(710)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(710)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(710)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(710)
					bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(710)
					if ((tmp14)){
						HX_STACK_LINE(710)
						bool tmp15 = (_this->miny <= rayab->maxy);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(710)
						tmp13 = tmp15;
					}
					else{
						HX_STACK_LINE(710)
						tmp13 = false;
					}
					HX_STACK_LINE(710)
					bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(710)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(710)
					bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(710)
					if ((tmp17)){
						HX_STACK_LINE(710)
						bool tmp18 = (rayab->minx <= _this->maxx);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(710)
						tmp16 = tmp18;
					}
					else{
						HX_STACK_LINE(710)
						tmp16 = false;
					}
					HX_STACK_LINE(710)
					bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(710)
					if ((tmp18)){
						HX_STACK_LINE(710)
						tmp9 = (_this->minx <= rayab->maxx);
					}
					else{
						HX_STACK_LINE(710)
						tmp9 = false;
					}
				}
				HX_STACK_LINE(710)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(710)
				if ((tmp9)){
					HX_STACK_LINE(710)
					bool tmp11 = (filter == null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(710)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(710)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(710)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(710)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(710)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(710)
					if ((tmp16)){
						HX_STACK_LINE(710)
						::zpp_nape::dynamics::ZPP_InteractionFilter tmp17 = a->shape->filter;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(710)
						::zpp_nape::dynamics::ZPP_InteractionFilter tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(710)
						::zpp_nape::dynamics::ZPP_InteractionFilter tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(710)
						::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp19;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(710)
						int tmp20 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(710)
						int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(710)
						int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(710)
						bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(710)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(710)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(710)
						bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(710)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(710)
						if ((tmp27)){
							HX_STACK_LINE(710)
							int tmp28 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(710)
							int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(710)
							int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(710)
							int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(710)
							tmp10 = (tmp31 != (int)0);
						}
						else{
							HX_STACK_LINE(710)
							tmp10 = false;
						}
					}
					else{
						HX_STACK_LINE(710)
						tmp10 = true;
					}
				}
				else{
					HX_STACK_LINE(710)
					tmp10 = false;
				}
				HX_STACK_LINE(710)
				if ((tmp10)){
					HX_STACK_LINE(711)
					::zpp_nape::geom::ZPP_AABB tmp11 = a->aabb;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(711)
					Float tmp12 = ray->aabbsect(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(711)
					Float t = tmp12;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(712)
					bool tmp13 = (t >= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(712)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(712)
					if ((tmp13)){
						HX_STACK_LINE(712)
						tmp14 = (t < mint);
					}
					else{
						HX_STACK_LINE(712)
						tmp14 = false;
					}
					HX_STACK_LINE(712)
					if ((tmp14)){
						HX_STACK_LINE(713)
						int tmp15 = a->shape->type;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(713)
						int tmp16 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(713)
						bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(713)
						::nape::geom::RayResult tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(713)
						if ((tmp17)){
							HX_STACK_LINE(713)
							::zpp_nape::shape::ZPP_Circle tmp19 = a->shape->circle;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(713)
							bool tmp20 = inner;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(713)
							Float tmp21 = mint;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(713)
							tmp18 = ray->circlesect(tmp19,tmp20,tmp21);
						}
						else{
							HX_STACK_LINE(713)
							::zpp_nape::shape::ZPP_Polygon tmp19 = a->shape->polygon;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(713)
							bool tmp20 = inner;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(713)
							Float tmp21 = mint;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(713)
							tmp18 = ray->polysect(tmp19,tmp20,tmp21);
						}
						HX_STACK_LINE(713)
						::nape::geom::RayResult result = tmp18;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(714)
						bool tmp19 = (result != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(714)
						if ((tmp19)){
							HX_STACK_LINE(715)
							Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(715)
							{
								HX_STACK_LINE(715)
								{
									HX_STACK_LINE(715)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp21 = result->zpp_inner->next;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(715)
									bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(715)
									if ((tmp22)){
										HX_STACK_LINE(715)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
									}
								}
								HX_STACK_LINE(715)
								tmp20 = result->zpp_inner->toiDistance;
							}
							HX_STACK_LINE(715)
							mint = tmp20;
							HX_STACK_LINE(716)
							bool tmp21 = (minres != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(716)
							if ((tmp21)){
								HX_STACK_LINE(717)
								{
									HX_STACK_LINE(717)
									::zpp_nape::geom::ZPP_ConvexRayResult tmp22 = minres->zpp_inner->next;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(717)
									bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(717)
									if ((tmp23)){
										HX_STACK_LINE(717)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This object has been disposed of and cannot be used","\x15","\x39","\x6c","\xf1"));
									}
								}
								HX_STACK_LINE(717)
								minres->zpp_inner->free();
							}
							HX_STACK_LINE(719)
							minres = result;
						}
					}
				}
				HX_STACK_LINE(723)
				a = a->next;
			}
		}
	}
	HX_STACK_LINE(726)
	{
		HX_STACK_LINE(727)
		::zpp_nape::geom::ZPP_AABB o = rayab;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(736)
		{
			HX_STACK_LINE(736)
			bool tmp2 = (o->outer != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(736)
			if ((tmp2)){
				HX_STACK_LINE(736)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(736)
				o->outer = null();
			}
			HX_STACK_LINE(736)
			::nape::geom::Vec2 tmp3 = o->wrap_max = null();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(736)
			o->wrap_min = tmp3;
			HX_STACK_LINE(736)
			o->_invalidate = null();
			HX_STACK_LINE(736)
			o->_validate = null();
		}
		HX_STACK_LINE(737)
		::zpp_nape::geom::ZPP_AABB tmp2 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(737)
		o->next = tmp2;
		HX_STACK_LINE(738)
		::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o;
	}
	HX_STACK_LINE(743)
	::nape::geom::RayResult tmp2 = minres;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(743)
	return tmp2;
}


::nape::geom::RayResultList ZPP_SweepPhase_obj::rayMultiCast( ::zpp_nape::geom::ZPP_Ray ray,bool inner,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::geom::RayResultList output){
	HX_STACK_FRAME("zpp_nape.space.ZPP_SweepPhase","rayMultiCast",0xad96b91f,"zpp_nape.space.ZPP_SweepPhase.rayMultiCast","zpp_nape/space/SweepPhase.hx",745,0x6f338844)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ray,"ray")
	HX_STACK_ARG(inner,"inner")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(746)
	this->sync_broadphase();
	HX_STACK_LINE(747)
	ray->validate_dir();
	HX_STACK_LINE(748)
	::zpp_nape::geom::ZPP_AABB tmp = ray->rayAABB();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(748)
	::zpp_nape::geom::ZPP_AABB rayab = tmp;		HX_STACK_VAR(rayab,"rayab");
	HX_STACK_LINE(749)
	bool tmp1 = (output == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(749)
	::nape::geom::RayResultList tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(749)
	if ((tmp1)){
		HX_STACK_LINE(749)
		tmp2 = ::nape::geom::RayResultList_obj::__new();
	}
	else{
		HX_STACK_LINE(749)
		tmp2 = output;
	}
	HX_STACK_LINE(749)
	::nape::geom::RayResultList ret = tmp2;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(750)
	bool tmp3 = (ray->dirx == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(750)
	if ((tmp3)){
		HX_STACK_LINE(751)
		::zpp_nape::space::ZPP_SweepData tmp4 = this->list;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(751)
		::zpp_nape::space::ZPP_SweepData a = tmp4;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(752)
		while((true)){
			HX_STACK_LINE(752)
			bool tmp5 = (a != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(752)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(752)
			if ((tmp5)){
				HX_STACK_LINE(752)
				Float tmp7 = a->aabb->minx;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(752)
				Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(752)
				Float tmp9 = rayab->minx;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(752)
				tmp6 = (tmp8 <= tmp9);
			}
			else{
				HX_STACK_LINE(752)
				tmp6 = false;
			}
			HX_STACK_LINE(752)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(752)
			if ((tmp7)){
				HX_STACK_LINE(752)
				break;
			}
			HX_STACK_LINE(753)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(753)
			{
				HX_STACK_LINE(753)
				::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(753)
				bool tmp9 = (rayab->miny <= _this->maxy);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(753)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(753)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(753)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(753)
				bool tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(753)
				if ((tmp13)){
					HX_STACK_LINE(753)
					bool tmp14 = (_this->miny <= rayab->maxy);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(753)
					tmp12 = tmp14;
				}
				else{
					HX_STACK_LINE(753)
					tmp12 = false;
				}
				HX_STACK_LINE(753)
				bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(753)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(753)
				bool tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(753)
				if ((tmp16)){
					HX_STACK_LINE(753)
					bool tmp17 = (rayab->minx <= _this->maxx);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(753)
					tmp15 = tmp17;
				}
				else{
					HX_STACK_LINE(753)
					tmp15 = false;
				}
				HX_STACK_LINE(753)
				bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(753)
				if ((tmp17)){
					HX_STACK_LINE(753)
					tmp8 = (_this->minx <= rayab->maxx);
				}
				else{
					HX_STACK_LINE(753)
					tmp8 = false;
				}
			}
			HX_STACK_LINE(753)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(753)
			if ((tmp8)){
				HX_STACK_LINE(753)
				bool tmp10 = (filter == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(753)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(753)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(753)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(753)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(753)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(753)
				if ((tmp15)){
					HX_STACK_LINE(753)
					::zpp_nape::dynamics::ZPP_InteractionFilter tmp16 = a->shape->filter;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(753)
					::zpp_nape::dynamics::ZPP_InteractionFilter tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(753)
					::zpp_nape::dynamics::ZPP_InteractionFilter tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(753)
					::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp18;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(753)
					int tmp19 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(753)
					int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(753)
					int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(753)
					bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(753)
					bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(753)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(753)
					bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(753)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(753)
					if ((tmp26)){
						HX_STACK_LINE(753)
						int tmp27 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(753)
						int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(753)
						int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(753)
						int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(753)
						tmp9 = (tmp30 != (int)0);
					}
					else{
						HX_STACK_LINE(753)
						tmp9 = false;
					}
				}
				else{
					HX_STACK_LINE(753)
					tmp9 = true;
				}
			}
			else{
				HX_STACK_LINE(753)
				tmp9 = false;
			}
			HX_STACK_LINE(753)
			if ((tmp9)){
				HX_STACK_LINE(754)
				::zpp_nape::geom::ZPP_AABB tmp10 = a->aabb;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(754)
				Float tmp11 = ray->aabbsect(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(754)
				Float t = tmp11;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(755)
				bool tmp12 = (t >= (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(755)
				if ((tmp12)){
					HX_STACK_LINE(756)
					int tmp13 = a->shape->type;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(756)
					int tmp14 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(756)
					bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(756)
					if ((tmp15)){
						HX_STACK_LINE(756)
						::zpp_nape::shape::ZPP_Circle tmp16 = a->shape->circle;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(756)
						bool tmp17 = inner;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(756)
						::nape::geom::RayResultList tmp18 = ret;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(756)
						ray->circlesect2(tmp16,tmp17,tmp18);
					}
					else{
						HX_STACK_LINE(757)
						::zpp_nape::shape::ZPP_Polygon tmp16 = a->shape->polygon;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(757)
						bool tmp17 = inner;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(757)
						::nape::geom::RayResultList tmp18 = ret;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(757)
						ray->polysect2(tmp16,tmp17,tmp18);
					}
				}
			}
			HX_STACK_LINE(760)
			a = a->next;
		}
	}
	else{
		HX_STACK_LINE(763)
		bool tmp4 = (ray->dirx < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(763)
		if ((tmp4)){
			HX_STACK_LINE(764)
			::zpp_nape::space::ZPP_SweepData tmp5 = this->list;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(764)
			::zpp_nape::space::ZPP_SweepData a = tmp5;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(765)
			::zpp_nape::space::ZPP_SweepData b = null();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(766)
			while((true)){
				HX_STACK_LINE(766)
				bool tmp6 = (a != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(766)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(766)
				if ((tmp6)){
					HX_STACK_LINE(766)
					Float tmp8 = a->aabb->minx;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(766)
					Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(766)
					Float tmp10 = rayab->maxx;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(766)
					tmp7 = (tmp9 <= tmp10);
				}
				else{
					HX_STACK_LINE(766)
					tmp7 = false;
				}
				HX_STACK_LINE(766)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(766)
				if ((tmp8)){
					HX_STACK_LINE(766)
					break;
				}
				HX_STACK_LINE(767)
				b = a;
				HX_STACK_LINE(768)
				a = a->next;
			}
			HX_STACK_LINE(770)
			a = b;
			HX_STACK_LINE(771)
			while((true)){
				HX_STACK_LINE(771)
				bool tmp6 = (a != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(771)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(771)
				if ((tmp7)){
					HX_STACK_LINE(771)
					break;
				}
				HX_STACK_LINE(772)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(772)
				{
					HX_STACK_LINE(772)
					::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(772)
					bool tmp9 = (rayab->miny <= _this->maxy);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(772)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(772)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(772)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(772)
					bool tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(772)
					if ((tmp13)){
						HX_STACK_LINE(772)
						bool tmp14 = (_this->miny <= rayab->maxy);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(772)
						tmp12 = tmp14;
					}
					else{
						HX_STACK_LINE(772)
						tmp12 = false;
					}
					HX_STACK_LINE(772)
					bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(772)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(772)
					bool tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(772)
					if ((tmp16)){
						HX_STACK_LINE(772)
						bool tmp17 = (rayab->minx <= _this->maxx);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(772)
						tmp15 = tmp17;
					}
					else{
						HX_STACK_LINE(772)
						tmp15 = false;
					}
					HX_STACK_LINE(772)
					bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(772)
					if ((tmp17)){
						HX_STACK_LINE(772)
						tmp8 = (_this->minx <= rayab->maxx);
					}
					else{
						HX_STACK_LINE(772)
						tmp8 = false;
					}
				}
				HX_STACK_LINE(772)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(772)
				if ((tmp8)){
					HX_STACK_LINE(772)
					bool tmp10 = (filter == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(772)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(772)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(772)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(772)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(772)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(772)
					if ((tmp15)){
						HX_STACK_LINE(772)
						::zpp_nape::dynamics::ZPP_InteractionFilter tmp16 = a->shape->filter;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(772)
						::zpp_nape::dynamics::ZPP_InteractionFilter tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(772)
						::zpp_nape::dynamics::ZPP_InteractionFilter tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(772)
						::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp18;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(772)
						int tmp19 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(772)
						int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(772)
						int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(772)
						bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(772)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(772)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(772)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(772)
						bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(772)
						if ((tmp26)){
							HX_STACK_LINE(772)
							int tmp27 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(772)
							int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(772)
							int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(772)
							int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(772)
							tmp9 = (tmp30 != (int)0);
						}
						else{
							HX_STACK_LINE(772)
							tmp9 = false;
						}
					}
					else{
						HX_STACK_LINE(772)
						tmp9 = true;
					}
				}
				else{
					HX_STACK_LINE(772)
					tmp9 = false;
				}
				HX_STACK_LINE(772)
				if ((tmp9)){
					HX_STACK_LINE(773)
					::zpp_nape::geom::ZPP_AABB tmp10 = a->aabb;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(773)
					Float tmp11 = ray->aabbsect(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(773)
					Float t = tmp11;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(774)
					bool tmp12 = (t >= (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(774)
					if ((tmp12)){
						HX_STACK_LINE(775)
						int tmp13 = a->shape->type;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(775)
						int tmp14 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(775)
						bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(775)
						if ((tmp15)){
							HX_STACK_LINE(775)
							::zpp_nape::shape::ZPP_Circle tmp16 = a->shape->circle;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(775)
							bool tmp17 = inner;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(775)
							::nape::geom::RayResultList tmp18 = ret;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(775)
							ray->circlesect2(tmp16,tmp17,tmp18);
						}
						else{
							HX_STACK_LINE(776)
							::zpp_nape::shape::ZPP_Polygon tmp16 = a->shape->polygon;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(776)
							bool tmp17 = inner;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(776)
							::nape::geom::RayResultList tmp18 = ret;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(776)
							ray->polysect2(tmp16,tmp17,tmp18);
						}
					}
				}
				HX_STACK_LINE(779)
				a = a->prev;
			}
		}
		else{
			HX_STACK_LINE(783)
			::zpp_nape::space::ZPP_SweepData tmp5 = this->list;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(783)
			::zpp_nape::space::ZPP_SweepData a = tmp5;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(784)
			while((true)){
				HX_STACK_LINE(784)
				bool tmp6 = (a != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(784)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(784)
				if ((tmp6)){
					HX_STACK_LINE(784)
					Float tmp8 = a->aabb->minx;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(784)
					Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(784)
					Float tmp10 = rayab->maxx;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(784)
					tmp7 = (tmp9 <= tmp10);
				}
				else{
					HX_STACK_LINE(784)
					tmp7 = false;
				}
				HX_STACK_LINE(784)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(784)
				if ((tmp8)){
					HX_STACK_LINE(784)
					break;
				}
				HX_STACK_LINE(785)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(785)
				{
					HX_STACK_LINE(785)
					::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(785)
					bool tmp10 = (rayab->miny <= _this->maxy);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(785)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(785)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(785)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(785)
					bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(785)
					if ((tmp14)){
						HX_STACK_LINE(785)
						bool tmp15 = (_this->miny <= rayab->maxy);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(785)
						tmp13 = tmp15;
					}
					else{
						HX_STACK_LINE(785)
						tmp13 = false;
					}
					HX_STACK_LINE(785)
					bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(785)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(785)
					bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(785)
					if ((tmp17)){
						HX_STACK_LINE(785)
						bool tmp18 = (rayab->minx <= _this->maxx);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(785)
						tmp16 = tmp18;
					}
					else{
						HX_STACK_LINE(785)
						tmp16 = false;
					}
					HX_STACK_LINE(785)
					bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(785)
					if ((tmp18)){
						HX_STACK_LINE(785)
						tmp9 = (_this->minx <= rayab->maxx);
					}
					else{
						HX_STACK_LINE(785)
						tmp9 = false;
					}
				}
				HX_STACK_LINE(785)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(785)
				if ((tmp9)){
					HX_STACK_LINE(785)
					bool tmp11 = (filter == null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(785)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(785)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(785)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(785)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(785)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(785)
					if ((tmp16)){
						HX_STACK_LINE(785)
						::zpp_nape::dynamics::ZPP_InteractionFilter tmp17 = a->shape->filter;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(785)
						::zpp_nape::dynamics::ZPP_InteractionFilter tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(785)
						::zpp_nape::dynamics::ZPP_InteractionFilter tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(785)
						::zpp_nape::dynamics::ZPP_InteractionFilter _this = tmp19;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(785)
						int tmp20 = (int(_this->collisionMask) & int(filter->collisionGroup));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(785)
						int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(785)
						int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(785)
						bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(785)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(785)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(785)
						bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(785)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(785)
						if ((tmp27)){
							HX_STACK_LINE(785)
							int tmp28 = (int(filter->collisionMask) & int(_this->collisionGroup));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(785)
							int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(785)
							int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(785)
							int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(785)
							tmp10 = (tmp31 != (int)0);
						}
						else{
							HX_STACK_LINE(785)
							tmp10 = false;
						}
					}
					else{
						HX_STACK_LINE(785)
						tmp10 = true;
					}
				}
				else{
					HX_STACK_LINE(785)
					tmp10 = false;
				}
				HX_STACK_LINE(785)
				if ((tmp10)){
					HX_STACK_LINE(786)
					::zpp_nape::geom::ZPP_AABB tmp11 = a->aabb;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(786)
					Float tmp12 = ray->aabbsect(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(786)
					Float t = tmp12;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(787)
					bool tmp13 = (t >= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(787)
					if ((tmp13)){
						HX_STACK_LINE(788)
						int tmp14 = a->shape->type;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(788)
						int tmp15 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(788)
						bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(788)
						if ((tmp16)){
							HX_STACK_LINE(788)
							::zpp_nape::shape::ZPP_Circle tmp17 = a->shape->circle;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(788)
							bool tmp18 = inner;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(788)
							::nape::geom::RayResultList tmp19 = ret;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(788)
							ray->circlesect2(tmp17,tmp18,tmp19);
						}
						else{
							HX_STACK_LINE(789)
							::zpp_nape::shape::ZPP_Polygon tmp17 = a->shape->polygon;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(789)
							bool tmp18 = inner;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(789)
							::nape::geom::RayResultList tmp19 = ret;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(789)
							ray->polysect2(tmp17,tmp18,tmp19);
						}
					}
				}
				HX_STACK_LINE(792)
				a = a->next;
			}
		}
	}
	HX_STACK_LINE(795)
	{
		HX_STACK_LINE(796)
		::zpp_nape::geom::ZPP_AABB o = rayab;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(805)
		{
			HX_STACK_LINE(805)
			bool tmp4 = (o->outer != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(805)
			if ((tmp4)){
				HX_STACK_LINE(805)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(805)
				o->outer = null();
			}
			HX_STACK_LINE(805)
			::nape::geom::Vec2 tmp5 = o->wrap_max = null();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(805)
			o->wrap_min = tmp5;
			HX_STACK_LINE(805)
			o->_invalidate = null();
			HX_STACK_LINE(805)
			o->_validate = null();
		}
		HX_STACK_LINE(806)
		::zpp_nape::geom::ZPP_AABB tmp4 = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(806)
		o->next = tmp4;
		HX_STACK_LINE(807)
		::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o;
	}
	HX_STACK_LINE(812)
	::nape::geom::RayResultList tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(812)
	return tmp4;
}



ZPP_SweepPhase_obj::ZPP_SweepPhase_obj()
{
}

void ZPP_SweepPhase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SweepPhase);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(failed,"failed");
	::zpp_nape::space::ZPP_Broadphase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_SweepPhase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(failed,"failed");
	::zpp_nape::space::ZPP_Broadphase_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_SweepPhase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__sync") ) { return __sync_dyn(); }
		if (HX_FIELD_EQ(inName,"failed") ) { return failed; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rayCast") ) { return rayCast_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__insert") ) { return __insert_dyn(); }
		if (HX_FIELD_EQ(inName,"__remove") ) { return __remove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"broadphase") ) { return broadphase_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shapesInAABB") ) { return shapesInAABB_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInAABB") ) { return bodiesInAABB_dyn(); }
		if (HX_FIELD_EQ(inName,"rayMultiCast") ) { return rayMultiCast_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shapesInShape") ) { return shapesInShape_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInShape") ) { return bodiesInShape_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"shapesInCircle") ) { return shapesInCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInCircle") ) { return bodiesInCircle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sync_broadphase") ) { return sync_broadphase_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"shapesUnderPoint") ) { return shapesUnderPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesUnderPoint") ) { return bodiesUnderPoint_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"sync_broadphase_fast") ) { return sync_broadphase_fast_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_SweepPhase_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::zpp_nape::space::ZPP_SweepData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"failed") ) { failed=inValue.Cast< ::nape::phys::BodyList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_SweepPhase_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_SweepPhase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("failed","\xbd","\xc5","\xfe","\xe7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::space::ZPP_SweepData*/ ,(int)offsetof(ZPP_SweepPhase_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsObject /*::nape::phys::BodyList*/ ,(int)offsetof(ZPP_SweepPhase_obj,failed),HX_HCSTRING("failed","\xbd","\xc5","\xfe","\xe7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("__insert","\x59","\xae","\x0c","\x46"),
	HX_HCSTRING("__remove","\x64","\x07","\xb8","\xac"),
	HX_HCSTRING("__sync","\x7b","\x1d","\x58","\xfb"),
	HX_HCSTRING("sync_broadphase","\x5d","\xa8","\x59","\x01"),
	HX_HCSTRING("sync_broadphase_fast","\xfe","\xc4","\x9c","\x96"),
	HX_HCSTRING("broadphase","\xb9","\x5d","\x1d","\xd8"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("shapesUnderPoint","\xea","\xec","\xbc","\x47"),
	HX_HCSTRING("bodiesUnderPoint","\xb8","\x1b","\x30","\x80"),
	HX_HCSTRING("shapesInAABB","\xd7","\x1c","\x84","\xf9"),
	HX_HCSTRING("failed","\xbd","\xc5","\xfe","\xe7"),
	HX_HCSTRING("bodiesInAABB","\xa5","\x4c","\x28","\x9e"),
	HX_HCSTRING("shapesInCircle","\x27","\xd4","\xf7","\x6c"),
	HX_HCSTRING("bodiesInCircle","\x75","\x13","\xe2","\xa6"),
	HX_HCSTRING("shapesInShape","\xea","\x90","\x2a","\xd1"),
	HX_HCSTRING("bodiesInShape","\x5c","\x35","\x30","\x3c"),
	HX_HCSTRING("rayCast","\xc9","\x5d","\x3c","\x25"),
	HX_HCSTRING("rayMultiCast","\x8e","\x02","\x7d","\x23"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SweepPhase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SweepPhase_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_SweepPhase_obj::__mClass;

void ZPP_SweepPhase_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.space.ZPP_SweepPhase","\x7d","\x0c","\xa7","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_SweepPhase_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_SweepPhase_obj >;
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
} // end namespace space
