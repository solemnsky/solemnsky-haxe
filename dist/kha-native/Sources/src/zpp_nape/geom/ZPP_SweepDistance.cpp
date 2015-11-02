#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SweepDistance
#include <zpp_nape/geom/ZPP_SweepDistance.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ToiEvent
#include <zpp_nape/geom/ZPP_ToiEvent.h>
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
namespace zpp_nape{
namespace geom{

Void ZPP_SweepDistance_obj::__construct()
{
	return null();
}

//ZPP_SweepDistance_obj::~ZPP_SweepDistance_obj() { }

Dynamic ZPP_SweepDistance_obj::__CreateEmpty() { return  new ZPP_SweepDistance_obj; }
hx::ObjectPtr< ZPP_SweepDistance_obj > ZPP_SweepDistance_obj::__new()
{  hx::ObjectPtr< ZPP_SweepDistance_obj > _result_ = new ZPP_SweepDistance_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_SweepDistance_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SweepDistance_obj > _result_ = new ZPP_SweepDistance_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_SweepDistance_obj::dynamicSweep( ::zpp_nape::geom::ZPP_ToiEvent toi,Float timeStep,Float lowerBound,Float negRadius,hx::Null< bool >  __o_userAPI){
bool userAPI = __o_userAPI.Default(false);
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SweepDistance","dynamicSweep",0x731dabf0,"zpp_nape.geom.ZPP_SweepDistance.dynamicSweep","zpp_nape/geom/SweepDistance.hx",230,0x2645f2ee)
	HX_STACK_ARG(toi,"toi")
	HX_STACK_ARG(timeStep,"timeStep")
	HX_STACK_ARG(lowerBound,"lowerBound")
	HX_STACK_ARG(negRadius,"negRadius")
	HX_STACK_ARG(userAPI,"userAPI")
{
		HX_STACK_LINE(231)
		::zpp_nape::shape::ZPP_Shape s1 = toi->s1;		HX_STACK_VAR(s1,"s1");
		HX_STACK_LINE(232)
		::zpp_nape::shape::ZPP_Shape s2 = toi->s2;		HX_STACK_VAR(s2,"s2");
		HX_STACK_LINE(233)
		::zpp_nape::phys::ZPP_Body b1 = s1->body;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(234)
		::zpp_nape::phys::ZPP_Body b2 = s2->body;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(235)
		Float deltax = ((Float)0.0);		HX_STACK_VAR(deltax,"deltax");
		HX_STACK_LINE(236)
		Float deltay = ((Float)0.0);		HX_STACK_VAR(deltay,"deltay");
		HX_STACK_LINE(237)
		{
			HX_STACK_LINE(238)
			Float tmp = (b2->velx - b1->velx);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(238)
			deltax = tmp;
			HX_STACK_LINE(239)
			Float tmp1 = (b2->vely - b1->vely);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(239)
			deltay = tmp1;
		}
		HX_STACK_LINE(241)
		Float ang1 = b1->angvel;		HX_STACK_VAR(ang1,"ang1");
		HX_STACK_LINE(242)
		bool tmp = (ang1 < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		if ((tmp)){
			HX_STACK_LINE(242)
			Float tmp1 = ang1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(242)
			Float tmp2 = -(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(242)
			ang1 = tmp2;
		}
		HX_STACK_LINE(243)
		Float ang2 = b2->angvel;		HX_STACK_VAR(ang2,"ang2");
		HX_STACK_LINE(244)
		bool tmp1 = (ang2 < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(244)
		if ((tmp1)){
			HX_STACK_LINE(244)
			Float tmp2 = ang2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(244)
			Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(244)
			ang2 = tmp3;
		}
		HX_STACK_LINE(245)
		Float tmp2 = (s1->sweepCoef * ang1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		Float tmp3 = (s2->sweepCoef * ang2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(245)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(245)
		Float angBias = tmp4;		HX_STACK_VAR(angBias,"angBias");
		HX_STACK_LINE(246)
		bool tmp5 = userAPI;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(246)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(246)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(246)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(246)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(246)
		if ((tmp8)){
			HX_STACK_LINE(246)
			bool tmp10 = toi->kinematic;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(246)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(246)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(246)
			tmp9 = !(tmp12);
		}
		else{
			HX_STACK_LINE(246)
			tmp9 = false;
		}
		HX_STACK_LINE(246)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(246)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(246)
		if ((tmp10)){
			HX_STACK_LINE(246)
			Float tmp12 = (deltax * deltax);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(246)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(246)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(246)
			Float tmp15 = (deltay * deltay);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(246)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(246)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(246)
			Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(246)
			Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(246)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(246)
			Float tmp21 = ::nape::Config_obj::dynamicSweepLinearThreshold;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(246)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(246)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(246)
			Float tmp24 = ::nape::Config_obj::dynamicSweepLinearThreshold;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(246)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(246)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(246)
			Float tmp27 = (tmp23 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(246)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(246)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(246)
			tmp11 = (tmp20 < tmp29);
		}
		else{
			HX_STACK_LINE(246)
			tmp11 = false;
		}
		HX_STACK_LINE(246)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(246)
		if ((tmp11)){
			HX_STACK_LINE(246)
			Float tmp13 = angBias;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(246)
			Float tmp14 = ::nape::Config_obj::dynamicSweepAngularThreshold;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(246)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(246)
			tmp12 = (tmp13 < tmp15);
		}
		else{
			HX_STACK_LINE(246)
			tmp12 = false;
		}
		HX_STACK_LINE(246)
		if ((tmp12)){
			HX_STACK_LINE(247)
			toi->toi = (int)-1;
			HX_STACK_LINE(248)
			toi->failed = true;
			HX_STACK_LINE(249)
			return null();
		}
		HX_STACK_LINE(251)
		::zpp_nape::geom::ZPP_Vec2 c1 = toi->c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(252)
		::zpp_nape::geom::ZPP_Vec2 c2 = toi->c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(253)
		::zpp_nape::geom::ZPP_Vec2 axis = toi->axis;		HX_STACK_VAR(axis,"axis");
		HX_STACK_LINE(254)
		Float curTOI = lowerBound;		HX_STACK_VAR(curTOI,"curTOI");
		HX_STACK_LINE(255)
		int curIter = (int)0;		HX_STACK_VAR(curIter,"curIter");
		HX_STACK_LINE(256)
		while((true)){
			HX_STACK_LINE(257)
			{
				HX_STACK_LINE(257)
				Float tmp13 = (curTOI * timeStep);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(257)
				Float dt = tmp13;		HX_STACK_VAR(dt,"dt");
				HX_STACK_LINE(257)
				Float tmp14 = (dt - b1->sweepTime);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(257)
				Float delta = tmp14;		HX_STACK_VAR(delta,"delta");
				HX_STACK_LINE(257)
				bool tmp15 = (delta != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(257)
				if ((tmp15)){
					HX_STACK_LINE(257)
					b1->sweepTime = dt;
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						Float t = delta;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(257)
						Float tmp16 = (b1->velx * t);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(257)
						hx::AddEq(b1->posx,tmp16);
						HX_STACK_LINE(257)
						Float tmp17 = (b1->vely * t);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(257)
						hx::AddEq(b1->posy,tmp17);
					}
					HX_STACK_LINE(257)
					bool tmp16 = (b1->angvel != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(257)
					if ((tmp16)){
						HX_STACK_LINE(257)
						Float tmp17 = (b1->sweep_angvel * delta);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(257)
						Float dr = tmp17;		HX_STACK_VAR(dr,"dr");
						HX_STACK_LINE(257)
						hx::AddEq(b1->rot,dr);
						HX_STACK_LINE(257)
						Float tmp18 = (dr * dr);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(257)
						bool tmp19 = (tmp18 > ((Float)0.0001));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(257)
						if ((tmp19)){
							HX_STACK_LINE(257)
							Float tmp20 = b1->rot;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(257)
							Float tmp21 = ::Math_obj::sin(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(257)
							b1->axisx = tmp21;
							HX_STACK_LINE(257)
							Float tmp22 = b1->rot;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(257)
							Float tmp23 = ::Math_obj::cos(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(257)
							b1->axisy = tmp23;
							HX_STACK_LINE(257)
							Dynamic();
						}
						else{
							HX_STACK_LINE(257)
							Float tmp20 = (dr * dr);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(257)
							Float d2 = tmp20;		HX_STACK_VAR(d2,"d2");
							HX_STACK_LINE(257)
							Float tmp21 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(257)
							Float tmp22 = ((int)1 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(257)
							Float p = tmp22;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(257)
							Float tmp23 = (d2 * d2);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(257)
							Float tmp24 = (Float(tmp23) / Float((int)8));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(257)
							Float tmp25 = ((int)1 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(257)
							Float m = tmp25;		HX_STACK_VAR(m,"m");
							HX_STACK_LINE(257)
							Float tmp26 = (p * b1->axisx);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(257)
							Float tmp27 = (dr * b1->axisy);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(257)
							Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(257)
							Float tmp29 = m;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(257)
							Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(257)
							Float nx = tmp30;		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(257)
							Float tmp31 = (p * b1->axisy);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(257)
							Float tmp32 = (dr * b1->axisx);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(257)
							Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(257)
							Float tmp34 = m;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(257)
							Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(257)
							b1->axisy = tmp35;
							HX_STACK_LINE(257)
							b1->axisx = nx;
						}
					}
				}
			}
			HX_STACK_LINE(258)
			{
				HX_STACK_LINE(258)
				int tmp13 = s1->type;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(258)
				int tmp14 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(258)
				bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(258)
				if ((tmp15)){
					HX_STACK_LINE(258)
					Float tmp16 = b1->posx;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(258)
					Float tmp17 = (b1->axisy * s1->localCOMx);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(258)
					Float tmp18 = (b1->axisx * s1->localCOMy);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(258)
					Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(258)
					Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(258)
					s1->worldCOMx = tmp20;
					HX_STACK_LINE(258)
					Float tmp21 = b1->posy;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(258)
					Float tmp22 = (s1->localCOMx * b1->axisx);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(258)
					Float tmp23 = (s1->localCOMy * b1->axisy);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(258)
					Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(258)
					Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(258)
					s1->worldCOMy = tmp25;
				}
				else{
					HX_STACK_LINE(258)
					::zpp_nape::shape::ZPP_Polygon p = s1->polygon;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(258)
					::zpp_nape::geom::ZPP_Vec2 tmp16 = p->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(258)
					::zpp_nape::geom::ZPP_Vec2 li = tmp16;		HX_STACK_VAR(li,"li");
					HX_STACK_LINE(258)
					{
						HX_STACK_LINE(258)
						::zpp_nape::geom::ZPP_Vec2 tmp17 = p->gverts->next;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(258)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp17;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(258)
						while((true)){
							HX_STACK_LINE(258)
							bool tmp18 = (cx_ite != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(258)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(258)
							if ((tmp19)){
								HX_STACK_LINE(258)
								break;
							}
							HX_STACK_LINE(258)
							::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
								HX_STACK_LINE(258)
								li = li->next;
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									Float tmp20 = b1->posx;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(258)
									Float tmp21 = (b1->axisy * l->x);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(258)
									Float tmp22 = (b1->axisx * l->y);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(258)
									Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(258)
									Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(258)
									g->x = tmp24;
									HX_STACK_LINE(258)
									Float tmp25 = b1->posy;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(258)
									Float tmp26 = (l->x * b1->axisx);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(258)
									Float tmp27 = (l->y * b1->axisy);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(258)
									Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(258)
									Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(258)
									g->y = tmp29;
								}
							}
							HX_STACK_LINE(258)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(258)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp17 = p->edges->head;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(258)
					::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp17;		HX_STACK_VAR(ite,"ite");
					HX_STACK_LINE(258)
					{
						HX_STACK_LINE(258)
						::zpp_nape::geom::ZPP_Vec2 tmp18 = p->gverts->next;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(258)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp18;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(258)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(258)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(258)
						while((true)){
							HX_STACK_LINE(258)
							bool tmp19 = (cx_ite != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(258)
							bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(258)
							if ((tmp20)){
								HX_STACK_LINE(258)
								break;
							}
							HX_STACK_LINE(258)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(258)
								ite = ite->next;
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									Float tmp21 = (b1->axisy * e->lnormx);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(258)
									Float tmp22 = (b1->axisx * e->lnormy);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(258)
									Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(258)
									e->gnormx = tmp23;
									HX_STACK_LINE(258)
									Float tmp24 = (e->lnormx * b1->axisx);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(258)
									Float tmp25 = (e->lnormy * b1->axisy);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(258)
									Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(258)
									e->gnormy = tmp26;
								}
								HX_STACK_LINE(258)
								Float tmp21 = (b1->posx * e->gnormx);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(258)
								Float tmp22 = (b1->posy * e->gnormy);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(258)
								Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(258)
								Float tmp24 = e->lprojection;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(258)
								Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(258)
								e->gprojection = tmp25;
								HX_STACK_LINE(258)
								Float tmp26 = (u->y * e->gnormx);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(258)
								Float tmp27 = (u->x * e->gnormy);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(258)
								Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(258)
								e->tp0 = tmp28;
								HX_STACK_LINE(258)
								Float tmp29 = (v->y * e->gnormx);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(258)
								Float tmp30 = (v->x * e->gnormy);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(258)
								Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(258)
								e->tp1 = tmp31;
							}
							HX_STACK_LINE(258)
							u = v;
							HX_STACK_LINE(258)
							cx_ite = cx_ite->next;
						}
						HX_STACK_LINE(258)
						::zpp_nape::geom::ZPP_Vec2 tmp19 = p->gverts->next;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(258)
						::zpp_nape::geom::ZPP_Vec2 v = tmp19;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(258)
						{
							HX_STACK_LINE(258)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(258)
							ite = ite->next;
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								Float tmp20 = (b1->axisy * e->lnormx);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(258)
								Float tmp21 = (b1->axisx * e->lnormy);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(258)
								Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(258)
								e->gnormx = tmp22;
								HX_STACK_LINE(258)
								Float tmp23 = (e->lnormx * b1->axisx);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(258)
								Float tmp24 = (e->lnormy * b1->axisy);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(258)
								Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(258)
								e->gnormy = tmp25;
							}
							HX_STACK_LINE(258)
							Float tmp20 = (b1->posx * e->gnormx);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(258)
							Float tmp21 = (b1->posy * e->gnormy);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(258)
							Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(258)
							Float tmp23 = e->lprojection;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(258)
							Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(258)
							e->gprojection = tmp24;
							HX_STACK_LINE(258)
							Float tmp25 = (u->y * e->gnormx);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(258)
							Float tmp26 = (u->x * e->gnormy);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(258)
							Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(258)
							e->tp0 = tmp27;
							HX_STACK_LINE(258)
							Float tmp28 = (v->y * e->gnormx);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(258)
							Float tmp29 = (v->x * e->gnormy);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(258)
							Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(258)
							e->tp1 = tmp30;
						}
					}
				}
			}
			HX_STACK_LINE(259)
			{
				HX_STACK_LINE(259)
				Float tmp13 = (curTOI * timeStep);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(259)
				Float dt = tmp13;		HX_STACK_VAR(dt,"dt");
				HX_STACK_LINE(259)
				Float tmp14 = (dt - b2->sweepTime);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(259)
				Float delta = tmp14;		HX_STACK_VAR(delta,"delta");
				HX_STACK_LINE(259)
				bool tmp15 = (delta != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(259)
				if ((tmp15)){
					HX_STACK_LINE(259)
					b2->sweepTime = dt;
					HX_STACK_LINE(259)
					{
						HX_STACK_LINE(259)
						Float t = delta;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(259)
						Float tmp16 = (b2->velx * t);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(259)
						hx::AddEq(b2->posx,tmp16);
						HX_STACK_LINE(259)
						Float tmp17 = (b2->vely * t);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(259)
						hx::AddEq(b2->posy,tmp17);
					}
					HX_STACK_LINE(259)
					bool tmp16 = (b2->angvel != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(259)
					if ((tmp16)){
						HX_STACK_LINE(259)
						Float tmp17 = (b2->sweep_angvel * delta);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(259)
						Float dr = tmp17;		HX_STACK_VAR(dr,"dr");
						HX_STACK_LINE(259)
						hx::AddEq(b2->rot,dr);
						HX_STACK_LINE(259)
						Float tmp18 = (dr * dr);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(259)
						bool tmp19 = (tmp18 > ((Float)0.0001));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(259)
						if ((tmp19)){
							HX_STACK_LINE(259)
							Float tmp20 = b2->rot;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(259)
							Float tmp21 = ::Math_obj::sin(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(259)
							b2->axisx = tmp21;
							HX_STACK_LINE(259)
							Float tmp22 = b2->rot;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(259)
							Float tmp23 = ::Math_obj::cos(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(259)
							b2->axisy = tmp23;
							HX_STACK_LINE(259)
							Dynamic();
						}
						else{
							HX_STACK_LINE(259)
							Float tmp20 = (dr * dr);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(259)
							Float d2 = tmp20;		HX_STACK_VAR(d2,"d2");
							HX_STACK_LINE(259)
							Float tmp21 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(259)
							Float tmp22 = ((int)1 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(259)
							Float p = tmp22;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(259)
							Float tmp23 = (d2 * d2);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(259)
							Float tmp24 = (Float(tmp23) / Float((int)8));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(259)
							Float tmp25 = ((int)1 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(259)
							Float m = tmp25;		HX_STACK_VAR(m,"m");
							HX_STACK_LINE(259)
							Float tmp26 = (p * b2->axisx);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(259)
							Float tmp27 = (dr * b2->axisy);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(259)
							Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(259)
							Float tmp29 = m;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(259)
							Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(259)
							Float nx = tmp30;		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(259)
							Float tmp31 = (p * b2->axisy);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(259)
							Float tmp32 = (dr * b2->axisx);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(259)
							Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(259)
							Float tmp34 = m;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(259)
							Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(259)
							b2->axisy = tmp35;
							HX_STACK_LINE(259)
							b2->axisx = nx;
						}
					}
				}
			}
			HX_STACK_LINE(260)
			{
				HX_STACK_LINE(260)
				int tmp13 = s2->type;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(260)
				int tmp14 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(260)
				bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(260)
				if ((tmp15)){
					HX_STACK_LINE(260)
					Float tmp16 = b2->posx;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(260)
					Float tmp17 = (b2->axisy * s2->localCOMx);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(260)
					Float tmp18 = (b2->axisx * s2->localCOMy);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(260)
					Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(260)
					Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(260)
					s2->worldCOMx = tmp20;
					HX_STACK_LINE(260)
					Float tmp21 = b2->posy;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(260)
					Float tmp22 = (s2->localCOMx * b2->axisx);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(260)
					Float tmp23 = (s2->localCOMy * b2->axisy);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(260)
					Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(260)
					Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(260)
					s2->worldCOMy = tmp25;
				}
				else{
					HX_STACK_LINE(260)
					::zpp_nape::shape::ZPP_Polygon p = s2->polygon;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(260)
					::zpp_nape::geom::ZPP_Vec2 tmp16 = p->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(260)
					::zpp_nape::geom::ZPP_Vec2 li = tmp16;		HX_STACK_VAR(li,"li");
					HX_STACK_LINE(260)
					{
						HX_STACK_LINE(260)
						::zpp_nape::geom::ZPP_Vec2 tmp17 = p->gverts->next;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(260)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp17;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(260)
						while((true)){
							HX_STACK_LINE(260)
							bool tmp18 = (cx_ite != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(260)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(260)
							if ((tmp19)){
								HX_STACK_LINE(260)
								break;
							}
							HX_STACK_LINE(260)
							::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(260)
							{
								HX_STACK_LINE(260)
								::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
								HX_STACK_LINE(260)
								li = li->next;
								HX_STACK_LINE(260)
								{
									HX_STACK_LINE(260)
									Float tmp20 = b2->posx;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(260)
									Float tmp21 = (b2->axisy * l->x);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(260)
									Float tmp22 = (b2->axisx * l->y);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(260)
									Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(260)
									Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(260)
									g->x = tmp24;
									HX_STACK_LINE(260)
									Float tmp25 = b2->posy;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(260)
									Float tmp26 = (l->x * b2->axisx);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(260)
									Float tmp27 = (l->y * b2->axisy);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(260)
									Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(260)
									Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(260)
									g->y = tmp29;
								}
							}
							HX_STACK_LINE(260)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(260)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp17 = p->edges->head;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(260)
					::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp17;		HX_STACK_VAR(ite,"ite");
					HX_STACK_LINE(260)
					{
						HX_STACK_LINE(260)
						::zpp_nape::geom::ZPP_Vec2 tmp18 = p->gverts->next;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(260)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp18;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(260)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(260)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(260)
						while((true)){
							HX_STACK_LINE(260)
							bool tmp19 = (cx_ite != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(260)
							bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(260)
							if ((tmp20)){
								HX_STACK_LINE(260)
								break;
							}
							HX_STACK_LINE(260)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(260)
							{
								HX_STACK_LINE(260)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(260)
								ite = ite->next;
								HX_STACK_LINE(260)
								{
									HX_STACK_LINE(260)
									Float tmp21 = (b2->axisy * e->lnormx);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(260)
									Float tmp22 = (b2->axisx * e->lnormy);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(260)
									Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(260)
									e->gnormx = tmp23;
									HX_STACK_LINE(260)
									Float tmp24 = (e->lnormx * b2->axisx);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(260)
									Float tmp25 = (e->lnormy * b2->axisy);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(260)
									Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(260)
									e->gnormy = tmp26;
								}
								HX_STACK_LINE(260)
								Float tmp21 = (b2->posx * e->gnormx);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(260)
								Float tmp22 = (b2->posy * e->gnormy);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(260)
								Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(260)
								Float tmp24 = e->lprojection;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(260)
								Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(260)
								e->gprojection = tmp25;
								HX_STACK_LINE(260)
								Float tmp26 = (u->y * e->gnormx);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(260)
								Float tmp27 = (u->x * e->gnormy);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(260)
								Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(260)
								e->tp0 = tmp28;
								HX_STACK_LINE(260)
								Float tmp29 = (v->y * e->gnormx);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(260)
								Float tmp30 = (v->x * e->gnormy);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(260)
								Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(260)
								e->tp1 = tmp31;
							}
							HX_STACK_LINE(260)
							u = v;
							HX_STACK_LINE(260)
							cx_ite = cx_ite->next;
						}
						HX_STACK_LINE(260)
						::zpp_nape::geom::ZPP_Vec2 tmp19 = p->gverts->next;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(260)
						::zpp_nape::geom::ZPP_Vec2 v = tmp19;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(260)
						{
							HX_STACK_LINE(260)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(260)
							ite = ite->next;
							HX_STACK_LINE(260)
							{
								HX_STACK_LINE(260)
								Float tmp20 = (b2->axisy * e->lnormx);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(260)
								Float tmp21 = (b2->axisx * e->lnormy);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(260)
								Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(260)
								e->gnormx = tmp22;
								HX_STACK_LINE(260)
								Float tmp23 = (e->lnormx * b2->axisx);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(260)
								Float tmp24 = (e->lnormy * b2->axisy);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(260)
								Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(260)
								e->gnormy = tmp25;
							}
							HX_STACK_LINE(260)
							Float tmp20 = (b2->posx * e->gnormx);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(260)
							Float tmp21 = (b2->posy * e->gnormy);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(260)
							Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(260)
							Float tmp23 = e->lprojection;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(260)
							Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(260)
							e->gprojection = tmp24;
							HX_STACK_LINE(260)
							Float tmp25 = (u->y * e->gnormx);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(260)
							Float tmp26 = (u->x * e->gnormy);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(260)
							Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(260)
							e->tp0 = tmp27;
							HX_STACK_LINE(260)
							Float tmp28 = (v->y * e->gnormx);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(260)
							Float tmp29 = (v->x * e->gnormy);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(260)
							Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(260)
							e->tp1 = tmp30;
						}
					}
				}
			}
			HX_STACK_LINE(261)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(261)
			{
				HX_STACK_LINE(261)
				::zpp_nape::shape::ZPP_Shape s11 = s1;		HX_STACK_VAR(s11,"s11");
				HX_STACK_LINE(261)
				::zpp_nape::shape::ZPP_Shape s21 = s2;		HX_STACK_VAR(s21,"s21");
				HX_STACK_LINE(261)
				::zpp_nape::geom::ZPP_Vec2 w1 = c1;		HX_STACK_VAR(w1,"w1");
				HX_STACK_LINE(261)
				::zpp_nape::geom::ZPP_Vec2 w2 = c2;		HX_STACK_VAR(w2,"w2");
				HX_STACK_LINE(261)
				Float upperBound = ((Float)1e100);		HX_STACK_VAR(upperBound,"upperBound");
				HX_STACK_LINE(261)
				int tmp14 = s11->type;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(261)
				int tmp15 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(261)
				bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(261)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(261)
				if ((tmp16)){
					HX_STACK_LINE(261)
					int tmp18 = s21->type;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(261)
					int tmp19 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(261)
					int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(261)
					tmp17 = (tmp18 == tmp20);
				}
				else{
					HX_STACK_LINE(261)
					tmp17 = false;
				}
				HX_STACK_LINE(261)
				if ((tmp17)){
					HX_STACK_LINE(261)
					::zpp_nape::shape::ZPP_Circle c11 = s11->circle;		HX_STACK_VAR(c11,"c11");
					HX_STACK_LINE(261)
					::zpp_nape::shape::ZPP_Circle c21 = s21->circle;		HX_STACK_VAR(c21,"c21");
					HX_STACK_LINE(261)
					Float dist;		HX_STACK_VAR(dist,"dist");
					HX_STACK_LINE(261)
					{
						HX_STACK_LINE(261)
						Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
						HX_STACK_LINE(261)
						Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
						HX_STACK_LINE(261)
						{
							HX_STACK_LINE(261)
							Float tmp18 = (c21->worldCOMx - c11->worldCOMx);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(261)
							nx = tmp18;
							HX_STACK_LINE(261)
							Float tmp19 = (c21->worldCOMy - c11->worldCOMy);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(261)
							ny = tmp19;
						}
						HX_STACK_LINE(261)
						Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(261)
						{
							HX_STACK_LINE(261)
							Float tmp19 = (nx * nx);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(261)
							Float tmp20 = (ny * ny);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(261)
							Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(261)
							tmp18 = ::Math_obj::sqrt(tmp21);
						}
						HX_STACK_LINE(261)
						Float len = tmp18;		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(261)
						Float tmp19 = len;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(261)
						Float tmp20 = (c11->radius + c21->radius);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(261)
						Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(261)
						dist = tmp21;
						HX_STACK_LINE(261)
						bool tmp22 = (dist < upperBound);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(261)
						if ((tmp22)){
							HX_STACK_LINE(261)
							bool tmp23 = (len == (int)0);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(261)
							if ((tmp23)){
								HX_STACK_LINE(261)
								nx = (int)1;
								HX_STACK_LINE(261)
								ny = (int)0;
								HX_STACK_LINE(261)
								{
								}
							}
							else{
								HX_STACK_LINE(261)
								Float tmp24 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(261)
								Float t = tmp24;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(261)
								hx::MultEq(nx,t);
								HX_STACK_LINE(261)
								hx::MultEq(ny,t);
							}
							HX_STACK_LINE(261)
							{
								HX_STACK_LINE(261)
								Float t = c11->radius;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(261)
								Float tmp24 = c11->worldCOMx;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(261)
								Float tmp25 = (nx * t);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(261)
								Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(261)
								w1->x = tmp26;
								HX_STACK_LINE(261)
								Float tmp27 = c11->worldCOMy;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(261)
								Float tmp28 = (ny * t);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(261)
								Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(261)
								w1->y = tmp29;
							}
							HX_STACK_LINE(261)
							{
								HX_STACK_LINE(261)
								Float tmp24 = c21->radius;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(261)
								Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(261)
								Float t = tmp25;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(261)
								Float tmp26 = c21->worldCOMx;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(261)
								Float tmp27 = (nx * t);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(261)
								Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(261)
								w2->x = tmp28;
								HX_STACK_LINE(261)
								Float tmp29 = c21->worldCOMy;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(261)
								Float tmp30 = (ny * t);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(261)
								Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(261)
								w2->y = tmp31;
							}
							HX_STACK_LINE(261)
							{
								HX_STACK_LINE(261)
								axis->x = nx;
								HX_STACK_LINE(261)
								axis->y = ny;
								HX_STACK_LINE(261)
								{
								}
							}
						}
					}
					HX_STACK_LINE(261)
					tmp13 = dist;
				}
				else{
					HX_STACK_LINE(261)
					bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
					HX_STACK_LINE(261)
					int tmp18 = s11->type;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(261)
					int tmp19 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(261)
					bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(261)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(261)
					if ((tmp20)){
						HX_STACK_LINE(261)
						int tmp22 = s21->type;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(261)
						int tmp23 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(261)
						int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(261)
						tmp21 = (tmp22 == tmp24);
					}
					else{
						HX_STACK_LINE(261)
						tmp21 = false;
					}
					HX_STACK_LINE(261)
					if ((tmp21)){
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Shape tmp22 = s11;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(261)
						s11 = s21;
						HX_STACK_LINE(261)
						s21 = tmp22;
						HX_STACK_LINE(261)
						::zpp_nape::geom::ZPP_Vec2 tmp23 = w1;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(261)
						w1 = w2;
						HX_STACK_LINE(261)
						w2 = tmp23;
						HX_STACK_LINE(261)
						swapped = true;
					}
					HX_STACK_LINE(261)
					int tmp22 = s11->type;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(261)
					int tmp23 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(261)
					bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(261)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(261)
					if ((tmp24)){
						HX_STACK_LINE(261)
						int tmp26 = s21->type;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(261)
						int tmp27 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(261)
						int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(261)
						tmp25 = (tmp26 == tmp28);
					}
					else{
						HX_STACK_LINE(261)
						tmp25 = false;
					}
					HX_STACK_LINE(261)
					if ((tmp25)){
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Polygon poly = s11->polygon;		HX_STACK_VAR(poly,"poly");
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Circle circle = s21->circle;		HX_STACK_VAR(circle,"circle");
						HX_STACK_LINE(261)
						Float tmp26 = ((Float)-1e+100);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(261)
						Float best = tmp26;		HX_STACK_VAR(best,"best");
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
						HX_STACK_LINE(261)
						{
							HX_STACK_LINE(261)
							::zpp_nape::util::ZNPNode_ZPP_Edge tmp27 = poly->edges->head;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(261)
							::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp27;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(261)
							while((true)){
								HX_STACK_LINE(261)
								bool tmp28 = (cx_ite != null());		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(261)
								bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(261)
								if ((tmp29)){
									HX_STACK_LINE(261)
									break;
								}
								HX_STACK_LINE(261)
								::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(261)
								{
									HX_STACK_LINE(261)
									Float tmp30 = (a->gnormx * circle->worldCOMx);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(261)
									Float tmp31 = (a->gnormy * circle->worldCOMy);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(261)
									Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(261)
									Float tmp33 = a->gprojection;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(261)
									Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(261)
									Float tmp35 = circle->radius;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(261)
									Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(261)
									Float dist = tmp36;		HX_STACK_VAR(dist,"dist");
									HX_STACK_LINE(261)
									bool tmp37 = (dist > upperBound);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(261)
									if ((tmp37)){
										HX_STACK_LINE(261)
										best = dist;
										HX_STACK_LINE(261)
										break;
									}
									HX_STACK_LINE(261)
									bool tmp38 = (dist > (int)0);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(261)
									if ((tmp38)){
										HX_STACK_LINE(261)
										bool tmp39 = (dist > best);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(261)
										if ((tmp39)){
											HX_STACK_LINE(261)
											best = dist;
											HX_STACK_LINE(261)
											a0 = a;
										}
									}
									else{
										HX_STACK_LINE(261)
										bool tmp39 = (best < (int)0);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(261)
										bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(261)
										if ((tmp39)){
											HX_STACK_LINE(261)
											tmp40 = (dist > best);
										}
										else{
											HX_STACK_LINE(261)
											tmp40 = false;
										}
										HX_STACK_LINE(261)
										if ((tmp40)){
											HX_STACK_LINE(261)
											best = dist;
											HX_STACK_LINE(261)
											a0 = a;
										}
									}
								}
								HX_STACK_LINE(261)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(261)
						bool tmp27 = (best < upperBound);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(261)
						if ((tmp27)){
							HX_STACK_LINE(261)
							::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
							HX_STACK_LINE(261)
							::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(261)
							Float tmp28 = (circle->worldCOMy * a0->gnormx);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(261)
							Float tmp29 = (circle->worldCOMx * a0->gnormy);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(261)
							Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(261)
							Float dt = tmp30;		HX_STACK_VAR(dt,"dt");
							HX_STACK_LINE(261)
							Float tmp31 = dt;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(261)
							Float tmp32 = (v0->y * a0->gnormx);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(261)
							Float tmp33 = (v0->x * a0->gnormy);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(261)
							Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(261)
							bool tmp35 = (tmp31 <= tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(261)
							if ((tmp35)){
								HX_STACK_LINE(261)
								Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(261)
								Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
								HX_STACK_LINE(261)
								{
									HX_STACK_LINE(261)
									Float tmp36 = (circle->worldCOMx - v0->x);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(261)
									nx = tmp36;
									HX_STACK_LINE(261)
									Float tmp37 = (circle->worldCOMy - v0->y);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(261)
									ny = tmp37;
								}
								HX_STACK_LINE(261)
								Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(261)
								{
									HX_STACK_LINE(261)
									Float tmp37 = (nx * nx);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(261)
									Float tmp38 = (ny * ny);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(261)
									Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(261)
									tmp36 = ::Math_obj::sqrt(tmp39);
								}
								HX_STACK_LINE(261)
								Float len = tmp36;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(261)
								Float tmp37 = len;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(261)
								Float tmp38 = circle->radius;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(261)
								Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(261)
								best = tmp39;
								HX_STACK_LINE(261)
								bool tmp40 = (best < upperBound);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(261)
								if ((tmp40)){
									HX_STACK_LINE(261)
									bool tmp41 = (len == (int)0);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(261)
									if ((tmp41)){
										HX_STACK_LINE(261)
										nx = (int)1;
										HX_STACK_LINE(261)
										ny = (int)0;
										HX_STACK_LINE(261)
										{
										}
									}
									else{
										HX_STACK_LINE(261)
										Float tmp42 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(261)
										Float t = tmp42;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										hx::MultEq(nx,t);
										HX_STACK_LINE(261)
										hx::MultEq(ny,t);
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										int t = (int)0;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										Float tmp42 = v0->x;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(261)
										Float tmp43 = (nx * t);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(261)
										Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(261)
										w1->x = tmp44;
										HX_STACK_LINE(261)
										Float tmp45 = v0->y;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(261)
										Float tmp46 = (ny * t);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(261)
										Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(261)
										w1->y = tmp47;
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float tmp42 = circle->radius;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(261)
										Float tmp43 = -(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(261)
										Float t = tmp43;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										Float tmp44 = circle->worldCOMx;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(261)
										Float tmp45 = (nx * t);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(261)
										Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(261)
										w2->x = tmp46;
										HX_STACK_LINE(261)
										Float tmp47 = circle->worldCOMy;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(261)
										Float tmp48 = (ny * t);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(261)
										Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(261)
										w2->y = tmp49;
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										axis->x = nx;
										HX_STACK_LINE(261)
										axis->y = ny;
										HX_STACK_LINE(261)
										{
										}
									}
								}
							}
							else{
								HX_STACK_LINE(261)
								Float tmp36 = dt;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(261)
								Float tmp37 = (v1->y * a0->gnormx);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(261)
								Float tmp38 = (v1->x * a0->gnormy);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(261)
								Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(261)
								bool tmp40 = (tmp36 >= tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(261)
								if ((tmp40)){
									HX_STACK_LINE(261)
									Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(261)
									Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float tmp41 = (circle->worldCOMx - v1->x);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(261)
										nx = tmp41;
										HX_STACK_LINE(261)
										Float tmp42 = (circle->worldCOMy - v1->y);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(261)
										ny = tmp42;
									}
									HX_STACK_LINE(261)
									Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float tmp42 = (nx * nx);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(261)
										Float tmp43 = (ny * ny);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(261)
										Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(261)
										tmp41 = ::Math_obj::sqrt(tmp44);
									}
									HX_STACK_LINE(261)
									Float len = tmp41;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(261)
									Float tmp42 = len;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(261)
									Float tmp43 = circle->radius;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(261)
									Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(261)
									best = tmp44;
									HX_STACK_LINE(261)
									bool tmp45 = (best < upperBound);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(261)
									if ((tmp45)){
										HX_STACK_LINE(261)
										bool tmp46 = (len == (int)0);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(261)
										if ((tmp46)){
											HX_STACK_LINE(261)
											nx = (int)1;
											HX_STACK_LINE(261)
											ny = (int)0;
											HX_STACK_LINE(261)
											{
											}
										}
										else{
											HX_STACK_LINE(261)
											Float tmp47 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(261)
											Float t = tmp47;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(261)
											hx::MultEq(nx,t);
											HX_STACK_LINE(261)
											hx::MultEq(ny,t);
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											int t = (int)0;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(261)
											Float tmp47 = v1->x;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(261)
											Float tmp48 = (nx * t);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(261)
											Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(261)
											w1->x = tmp49;
											HX_STACK_LINE(261)
											Float tmp50 = v1->y;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(261)
											Float tmp51 = (ny * t);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(261)
											Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(261)
											w1->y = tmp52;
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float tmp47 = circle->radius;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(261)
											Float tmp48 = -(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(261)
											Float t = tmp48;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(261)
											Float tmp49 = circle->worldCOMx;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(261)
											Float tmp50 = (nx * t);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(261)
											Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(261)
											w2->x = tmp51;
											HX_STACK_LINE(261)
											Float tmp52 = circle->worldCOMy;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(261)
											Float tmp53 = (ny * t);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(261)
											Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(261)
											w2->y = tmp54;
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											axis->x = nx;
											HX_STACK_LINE(261)
											axis->y = ny;
											HX_STACK_LINE(261)
											{
											}
										}
									}
								}
								else{
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float tmp41 = circle->radius;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(261)
										Float tmp42 = -(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(261)
										Float t = tmp42;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										Float tmp43 = circle->worldCOMx;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(261)
										Float tmp44 = (a0->gnormx * t);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(261)
										Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(261)
										w2->x = tmp45;
										HX_STACK_LINE(261)
										Float tmp46 = circle->worldCOMy;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(261)
										Float tmp47 = (a0->gnormy * t);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(261)
										Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(261)
										w2->y = tmp48;
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float tmp41 = best;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(261)
										Float tmp42 = -(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(261)
										Float t = tmp42;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										Float tmp43 = w2->x;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(261)
										Float tmp44 = (a0->gnormx * t);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(261)
										Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(261)
										w1->x = tmp45;
										HX_STACK_LINE(261)
										Float tmp46 = w2->y;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(261)
										Float tmp47 = (a0->gnormy * t);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(261)
										Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(261)
										w1->y = tmp48;
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										axis->x = a0->gnormx;
										HX_STACK_LINE(261)
										axis->y = a0->gnormy;
										HX_STACK_LINE(261)
										{
										}
									}
								}
							}
						}
						HX_STACK_LINE(261)
						bool tmp28 = swapped;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(261)
						if ((tmp28)){
							HX_STACK_LINE(261)
							Float tmp29 = axis->x;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(261)
							Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(261)
							axis->x = tmp30;
							HX_STACK_LINE(261)
							Float tmp31 = axis->y;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(261)
							Float tmp32 = -(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(261)
							axis->y = tmp32;
						}
						HX_STACK_LINE(261)
						tmp13 = best;
					}
					else{
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Polygon p1 = s11->polygon;		HX_STACK_VAR(p1,"p1");
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Polygon p2 = s21->polygon;		HX_STACK_VAR(p2,"p2");
						HX_STACK_LINE(261)
						Float tmp26 = ((Float)-1e+100);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(261)
						Float best = tmp26;		HX_STACK_VAR(best,"best");
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(261)
						::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
						HX_STACK_LINE(261)
						int besti = (int)0;		HX_STACK_VAR(besti,"besti");
						HX_STACK_LINE(261)
						{
							HX_STACK_LINE(261)
							::zpp_nape::util::ZNPNode_ZPP_Edge tmp27 = p1->edges->head;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(261)
							::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp27;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(261)
							while((true)){
								HX_STACK_LINE(261)
								bool tmp28 = (cx_ite != null());		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(261)
								bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(261)
								if ((tmp29)){
									HX_STACK_LINE(261)
									break;
								}
								HX_STACK_LINE(261)
								::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(261)
								{
									HX_STACK_LINE(261)
									Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										::zpp_nape::geom::ZPP_Vec2 tmp30 = p2->gverts->next;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(261)
										::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp30;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(261)
										while((true)){
											HX_STACK_LINE(261)
											bool tmp31 = (cx_ite1 != null());		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(261)
											bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(261)
											if ((tmp32)){
												HX_STACK_LINE(261)
												break;
											}
											HX_STACK_LINE(261)
											::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(261)
											{
												HX_STACK_LINE(261)
												Float tmp33 = (a->gnormx * v->x);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(261)
												Float tmp34 = (a->gnormy * v->y);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(261)
												Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(261)
												Float k = tmp35;		HX_STACK_VAR(k,"k");
												HX_STACK_LINE(261)
												bool tmp36 = (k < min);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(261)
												if ((tmp36)){
													HX_STACK_LINE(261)
													min = k;
												}
											}
											HX_STACK_LINE(261)
											cx_ite1 = cx_ite1->next;
										}
									}
									HX_STACK_LINE(261)
									hx::SubEq(min,a->gprojection);
									HX_STACK_LINE(261)
									bool tmp30 = (min > upperBound);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(261)
									if ((tmp30)){
										HX_STACK_LINE(261)
										best = min;
										HX_STACK_LINE(261)
										break;
									}
									HX_STACK_LINE(261)
									bool tmp31 = (min > (int)0);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(261)
									if ((tmp31)){
										HX_STACK_LINE(261)
										bool tmp32 = (min > best);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(261)
										if ((tmp32)){
											HX_STACK_LINE(261)
											best = min;
											HX_STACK_LINE(261)
											a1 = a;
											HX_STACK_LINE(261)
											besti = (int)1;
										}
									}
									else{
										HX_STACK_LINE(261)
										bool tmp32 = (best < (int)0);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(261)
										bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(261)
										if ((tmp32)){
											HX_STACK_LINE(261)
											tmp33 = (min > best);
										}
										else{
											HX_STACK_LINE(261)
											tmp33 = false;
										}
										HX_STACK_LINE(261)
										if ((tmp33)){
											HX_STACK_LINE(261)
											best = min;
											HX_STACK_LINE(261)
											a1 = a;
											HX_STACK_LINE(261)
											besti = (int)1;
										}
									}
								}
								HX_STACK_LINE(261)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(261)
						bool tmp27 = (best < upperBound);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(261)
						if ((tmp27)){
							HX_STACK_LINE(261)
							{
								HX_STACK_LINE(261)
								::zpp_nape::util::ZNPNode_ZPP_Edge tmp28 = p2->edges->head;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(261)
								::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp28;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(261)
								while((true)){
									HX_STACK_LINE(261)
									bool tmp29 = (cx_ite != null());		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(261)
									bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(261)
									if ((tmp30)){
										HX_STACK_LINE(261)
										break;
									}
									HX_STACK_LINE(261)
									::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											::zpp_nape::geom::ZPP_Vec2 tmp31 = p1->gverts->next;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(261)
											::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp31;		HX_STACK_VAR(cx_ite1,"cx_ite1");
											HX_STACK_LINE(261)
											while((true)){
												HX_STACK_LINE(261)
												bool tmp32 = (cx_ite1 != null());		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(261)
												bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(261)
												if ((tmp33)){
													HX_STACK_LINE(261)
													break;
												}
												HX_STACK_LINE(261)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(261)
												{
													HX_STACK_LINE(261)
													Float tmp34 = (a->gnormx * v->x);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(261)
													Float tmp35 = (a->gnormy * v->y);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(261)
													Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(261)
													Float k = tmp36;		HX_STACK_VAR(k,"k");
													HX_STACK_LINE(261)
													bool tmp37 = (k < min);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(261)
													if ((tmp37)){
														HX_STACK_LINE(261)
														min = k;
													}
												}
												HX_STACK_LINE(261)
												cx_ite1 = cx_ite1->next;
											}
										}
										HX_STACK_LINE(261)
										hx::SubEq(min,a->gprojection);
										HX_STACK_LINE(261)
										bool tmp31 = (min > upperBound);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(261)
										if ((tmp31)){
											HX_STACK_LINE(261)
											best = min;
											HX_STACK_LINE(261)
											break;
										}
										HX_STACK_LINE(261)
										bool tmp32 = (min > (int)0);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(261)
										if ((tmp32)){
											HX_STACK_LINE(261)
											bool tmp33 = (min > best);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(261)
											if ((tmp33)){
												HX_STACK_LINE(261)
												best = min;
												HX_STACK_LINE(261)
												a2 = a;
												HX_STACK_LINE(261)
												besti = (int)2;
											}
										}
										else{
											HX_STACK_LINE(261)
											bool tmp33 = (best < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(261)
											bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(261)
											if ((tmp33)){
												HX_STACK_LINE(261)
												tmp34 = (min > best);
											}
											else{
												HX_STACK_LINE(261)
												tmp34 = false;
											}
											HX_STACK_LINE(261)
											if ((tmp34)){
												HX_STACK_LINE(261)
												best = min;
												HX_STACK_LINE(261)
												a2 = a;
												HX_STACK_LINE(261)
												besti = (int)2;
											}
										}
									}
									HX_STACK_LINE(261)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(261)
							bool tmp28 = (best < upperBound);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(261)
							if ((tmp28)){
								HX_STACK_LINE(261)
								::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
								HX_STACK_LINE(261)
								::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
								HX_STACK_LINE(261)
								::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
								HX_STACK_LINE(261)
								bool tmp29 = (besti == (int)1);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(261)
								if ((tmp29)){
									HX_STACK_LINE(261)
									q1 = p1;
									HX_STACK_LINE(261)
									q2 = p2;
									HX_STACK_LINE(261)
									ax = a1;
								}
								else{
									HX_STACK_LINE(261)
									q1 = p2;
									HX_STACK_LINE(261)
									q2 = p1;
									HX_STACK_LINE(261)
									ax = a2;
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 tmp30 = w1;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(261)
									w1 = w2;
									HX_STACK_LINE(261)
									w2 = tmp30;
									HX_STACK_LINE(261)
									bool tmp31 = swapped;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(261)
									bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(261)
									swapped = tmp32;
								}
								HX_STACK_LINE(261)
								::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
								HX_STACK_LINE(261)
								Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
								HX_STACK_LINE(261)
								{
									HX_STACK_LINE(261)
									::zpp_nape::util::ZNPNode_ZPP_Edge tmp30 = q2->edges->head;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(261)
									::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp30;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(261)
									while((true)){
										HX_STACK_LINE(261)
										bool tmp31 = (cx_ite != null());		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(261)
										bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(261)
										if ((tmp32)){
											HX_STACK_LINE(261)
											break;
										}
										HX_STACK_LINE(261)
										::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float tmp33 = (ax->gnormx * a->gnormx);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(261)
											Float tmp34 = (ax->gnormy * a->gnormy);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(261)
											Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(261)
											Float k = tmp35;		HX_STACK_VAR(k,"k");
											HX_STACK_LINE(261)
											bool tmp36 = (k < min);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(261)
											if ((tmp36)){
												HX_STACK_LINE(261)
												min = k;
												HX_STACK_LINE(261)
												ay = a;
											}
										}
										HX_STACK_LINE(261)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(261)
								bool tmp30 = swapped;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(261)
								if ((tmp30)){
									HX_STACK_LINE(261)
									Float tmp31 = ax->gnormx;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(261)
									Float tmp32 = -(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(261)
									axis->x = tmp32;
									HX_STACK_LINE(261)
									Float tmp33 = ax->gnormy;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(261)
									Float tmp34 = -(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(261)
									axis->y = tmp34;
									HX_STACK_LINE(261)
									{
									}
								}
								else{
									HX_STACK_LINE(261)
									axis->x = ax->gnormx;
									HX_STACK_LINE(261)
									axis->y = ax->gnormy;
									HX_STACK_LINE(261)
									{
									}
								}
								HX_STACK_LINE(261)
								bool tmp31 = (best >= (int)0);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(261)
								if ((tmp31)){
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 v0 = ax->gp0;		HX_STACK_VAR(v0,"v0");
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 v1 = ax->gp1;		HX_STACK_VAR(v1,"v1");
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
									HX_STACK_LINE(261)
									Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
									HX_STACK_LINE(261)
									Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
									HX_STACK_LINE(261)
									Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
									HX_STACK_LINE(261)
									Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float tmp32 = (v1->x - v0->x);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(261)
										vx = tmp32;
										HX_STACK_LINE(261)
										Float tmp33 = (v1->y - v0->y);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(261)
										vy = tmp33;
									}
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float tmp32 = (q11->x - q0->x);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(261)
										qx = tmp32;
										HX_STACK_LINE(261)
										Float tmp33 = (q11->y - q0->y);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(261)
										qy = tmp33;
									}
									HX_STACK_LINE(261)
									Float tmp32 = (vx * vx);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(261)
									Float tmp33 = (vy * vy);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(261)
									Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(261)
									Float tmp35 = (Float((int)1) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(261)
									Float vdot = tmp35;		HX_STACK_VAR(vdot,"vdot");
									HX_STACK_LINE(261)
									Float tmp36 = (qx * qx);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(261)
									Float tmp37 = (qy * qy);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(261)
									Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(261)
									Float tmp39 = (Float((int)1) / Float(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(261)
									Float qdot = tmp39;		HX_STACK_VAR(qdot,"qdot");
									HX_STACK_LINE(261)
									Float tmp40 = vx;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(261)
									Float tmp41 = (v0->x - q0->x);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(261)
									Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(261)
									Float tmp43 = vy;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(261)
									Float tmp44 = (v0->y - q0->y);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(261)
									Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(261)
									Float tmp46 = (tmp42 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(261)
									Float tmp47 = -(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(261)
									Float tmp48 = vdot;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(261)
									Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(261)
									Float t1 = tmp49;		HX_STACK_VAR(t1,"t1");
									HX_STACK_LINE(261)
									Float tmp50 = vx;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(261)
									Float tmp51 = (v0->x - q11->x);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(261)
									Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(261)
									Float tmp53 = vy;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(261)
									Float tmp54 = (v0->y - q11->y);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(261)
									Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(261)
									Float tmp56 = (tmp52 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(261)
									Float tmp57 = -(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(261)
									Float tmp58 = vdot;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(261)
									Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(261)
									Float t2 = tmp59;		HX_STACK_VAR(t2,"t2");
									HX_STACK_LINE(261)
									Float tmp60 = qx;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(261)
									Float tmp61 = (q0->x - v0->x);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(261)
									Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(261)
									Float tmp63 = qy;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(261)
									Float tmp64 = (q0->y - v0->y);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(261)
									Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(261)
									Float tmp66 = (tmp62 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(261)
									Float tmp67 = -(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(261)
									Float tmp68 = qdot;		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(261)
									Float tmp69 = (tmp67 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(261)
									Float s12 = tmp69;		HX_STACK_VAR(s12,"s12");
									HX_STACK_LINE(261)
									Float tmp70 = qx;		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(261)
									Float tmp71 = (q0->x - v1->x);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(261)
									Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(261)
									Float tmp73 = qy;		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(261)
									Float tmp74 = (q0->y - v1->y);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(261)
									Float tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(261)
									Float tmp76 = (tmp72 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(261)
									Float tmp77 = -(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(261)
									Float tmp78 = qdot;		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(261)
									Float tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(261)
									Float s22 = tmp79;		HX_STACK_VAR(s22,"s22");
									HX_STACK_LINE(261)
									bool tmp80 = (t1 < (int)0);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(261)
									if ((tmp80)){
										HX_STACK_LINE(261)
										t1 = (int)0;
									}
									else{
										HX_STACK_LINE(261)
										bool tmp81 = (t1 > (int)1);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(261)
										if ((tmp81)){
											HX_STACK_LINE(261)
											t1 = (int)1;
										}
									}
									HX_STACK_LINE(261)
									bool tmp81 = (t2 < (int)0);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(261)
									if ((tmp81)){
										HX_STACK_LINE(261)
										t2 = (int)0;
									}
									else{
										HX_STACK_LINE(261)
										bool tmp82 = (t2 > (int)1);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(261)
										if ((tmp82)){
											HX_STACK_LINE(261)
											t2 = (int)1;
										}
									}
									HX_STACK_LINE(261)
									bool tmp82 = (s12 < (int)0);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(261)
									if ((tmp82)){
										HX_STACK_LINE(261)
										s12 = (int)0;
									}
									else{
										HX_STACK_LINE(261)
										bool tmp83 = (s12 > (int)1);		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(261)
										if ((tmp83)){
											HX_STACK_LINE(261)
											s12 = (int)1;
										}
									}
									HX_STACK_LINE(261)
									bool tmp83 = (s22 < (int)0);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(261)
									if ((tmp83)){
										HX_STACK_LINE(261)
										s22 = (int)0;
									}
									else{
										HX_STACK_LINE(261)
										bool tmp84 = (s22 > (int)1);		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(261)
										if ((tmp84)){
											HX_STACK_LINE(261)
											s22 = (int)1;
										}
									}
									HX_STACK_LINE(261)
									Float f1x = ((Float)0.0);		HX_STACK_VAR(f1x,"f1x");
									HX_STACK_LINE(261)
									Float f1y = ((Float)0.0);		HX_STACK_VAR(f1y,"f1y");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float t = t1;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										Float tmp84 = v0->x;		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(261)
										Float tmp85 = (vx * t);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(261)
										Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(261)
										f1x = tmp86;
										HX_STACK_LINE(261)
										Float tmp87 = v0->y;		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(261)
										Float tmp88 = (vy * t);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(261)
										Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(261)
										f1y = tmp89;
									}
									HX_STACK_LINE(261)
									Float f2x = ((Float)0.0);		HX_STACK_VAR(f2x,"f2x");
									HX_STACK_LINE(261)
									Float f2y = ((Float)0.0);		HX_STACK_VAR(f2y,"f2y");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float t = t2;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										Float tmp84 = v0->x;		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(261)
										Float tmp85 = (vx * t);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(261)
										Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(261)
										f2x = tmp86;
										HX_STACK_LINE(261)
										Float tmp87 = v0->y;		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(261)
										Float tmp88 = (vy * t);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(261)
										Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(261)
										f2y = tmp89;
									}
									HX_STACK_LINE(261)
									Float g1x = ((Float)0.0);		HX_STACK_VAR(g1x,"g1x");
									HX_STACK_LINE(261)
									Float g1y = ((Float)0.0);		HX_STACK_VAR(g1y,"g1y");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float t = s12;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										Float tmp84 = q0->x;		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(261)
										Float tmp85 = (qx * t);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(261)
										Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(261)
										g1x = tmp86;
										HX_STACK_LINE(261)
										Float tmp87 = q0->y;		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(261)
										Float tmp88 = (qy * t);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(261)
										Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(261)
										g1y = tmp89;
									}
									HX_STACK_LINE(261)
									Float g2x = ((Float)0.0);		HX_STACK_VAR(g2x,"g2x");
									HX_STACK_LINE(261)
									Float g2y = ((Float)0.0);		HX_STACK_VAR(g2y,"g2y");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float t = s22;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(261)
										Float tmp84 = q0->x;		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(261)
										Float tmp85 = (qx * t);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(261)
										Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(261)
										g2x = tmp86;
										HX_STACK_LINE(261)
										Float tmp87 = q0->y;		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(261)
										Float tmp88 = (qy * t);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(261)
										Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(261)
										g2y = tmp89;
									}
									HX_STACK_LINE(261)
									Float tmp84;		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(261)
										Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float tmp85 = (f1x - q0->x);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(261)
											dx = tmp85;
											HX_STACK_LINE(261)
											Float tmp86 = (f1y - q0->y);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(261)
											dy = tmp86;
										}
										HX_STACK_LINE(261)
										Float tmp85 = (dx * dx);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(261)
										Float tmp86 = (dy * dy);		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(261)
										tmp84 = (tmp85 + tmp86);
									}
									HX_STACK_LINE(261)
									Float d1 = tmp84;		HX_STACK_VAR(d1,"d1");
									HX_STACK_LINE(261)
									Float tmp85;		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(261)
										Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float tmp86 = (f2x - q11->x);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(261)
											dx = tmp86;
											HX_STACK_LINE(261)
											Float tmp87 = (f2y - q11->y);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(261)
											dy = tmp87;
										}
										HX_STACK_LINE(261)
										Float tmp86 = (dx * dx);		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(261)
										Float tmp87 = (dy * dy);		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(261)
										tmp85 = (tmp86 + tmp87);
									}
									HX_STACK_LINE(261)
									Float d2 = tmp85;		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(261)
									Float tmp86;		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(261)
										Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float tmp87 = (g1x - v0->x);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(261)
											dx = tmp87;
											HX_STACK_LINE(261)
											Float tmp88 = (g1y - v0->y);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(261)
											dy = tmp88;
										}
										HX_STACK_LINE(261)
										Float tmp87 = (dx * dx);		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(261)
										Float tmp88 = (dy * dy);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(261)
										tmp86 = (tmp87 + tmp88);
									}
									HX_STACK_LINE(261)
									Float e1 = tmp86;		HX_STACK_VAR(e1,"e1");
									HX_STACK_LINE(261)
									Float tmp87;		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(261)
										Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float tmp88 = (g2x - v1->x);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(261)
											dx = tmp88;
											HX_STACK_LINE(261)
											Float tmp89 = (g2y - v1->y);		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(261)
											dy = tmp89;
										}
										HX_STACK_LINE(261)
										Float tmp88 = (dx * dx);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(261)
										Float tmp89 = (dy * dy);		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(261)
										tmp87 = (tmp88 + tmp89);
									}
									HX_STACK_LINE(261)
									Float e2 = tmp87;		HX_STACK_VAR(e2,"e2");
									HX_STACK_LINE(261)
									Float minfx = ((Float)0.0);		HX_STACK_VAR(minfx,"minfx");
									HX_STACK_LINE(261)
									Float minfy = ((Float)0.0);		HX_STACK_VAR(minfy,"minfy");
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
									HX_STACK_LINE(261)
									bool tmp88 = (d1 < d2);		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(261)
									if ((tmp88)){
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											minfx = f1x;
											HX_STACK_LINE(261)
											minfy = f1y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										minq = q0;
									}
									else{
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											minfx = f2x;
											HX_STACK_LINE(261)
											minfy = f2y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										minq = q11;
										HX_STACK_LINE(261)
										d1 = d2;
									}
									HX_STACK_LINE(261)
									Float mingx = ((Float)0.0);		HX_STACK_VAR(mingx,"mingx");
									HX_STACK_LINE(261)
									Float mingy = ((Float)0.0);		HX_STACK_VAR(mingy,"mingy");
									HX_STACK_LINE(261)
									::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
									HX_STACK_LINE(261)
									bool tmp89 = (e1 < e2);		HX_STACK_VAR(tmp89,"tmp89");
									HX_STACK_LINE(261)
									if ((tmp89)){
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											mingx = g1x;
											HX_STACK_LINE(261)
											mingy = g1y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										minv = v0;
									}
									else{
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											mingx = g2x;
											HX_STACK_LINE(261)
											mingy = g2y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										minv = v1;
										HX_STACK_LINE(261)
										e1 = e2;
									}
									HX_STACK_LINE(261)
									bool tmp90 = (d1 < e1);		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(261)
									if ((tmp90)){
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											w1->x = minfx;
											HX_STACK_LINE(261)
											w1->y = minfy;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											w2->x = minq->x;
											HX_STACK_LINE(261)
											w2->y = minq->y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										Float tmp91 = d1;		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(261)
										Float tmp92 = ::Math_obj::sqrt(tmp91);		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(261)
										best = tmp92;
									}
									else{
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											w2->x = mingx;
											HX_STACK_LINE(261)
											w2->y = mingy;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											w1->x = minv->x;
											HX_STACK_LINE(261)
											w1->y = minv->y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										Float tmp91 = e1;		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(261)
										Float tmp92 = ::Math_obj::sqrt(tmp91);		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(261)
										best = tmp92;
									}
									HX_STACK_LINE(261)
									bool tmp91 = (best != (int)0);		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(261)
									if ((tmp91)){
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float tmp92 = (w2->x - w1->x);		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(261)
											axis->x = tmp92;
											HX_STACK_LINE(261)
											Float tmp93 = (w2->y - w1->y);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(261)
											axis->y = tmp93;
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float tmp92 = (Float(((Float)1.0)) / Float(best));		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(261)
											Float t = tmp92;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(261)
											hx::MultEq(axis->x,t);
											HX_STACK_LINE(261)
											hx::MultEq(axis->y,t);
										}
										HX_STACK_LINE(261)
										bool tmp92 = swapped;		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(261)
										if ((tmp92)){
											HX_STACK_LINE(261)
											Float tmp93 = axis->x;		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(261)
											Float tmp94 = -(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(261)
											axis->x = tmp94;
											HX_STACK_LINE(261)
											Float tmp95 = axis->y;		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(261)
											Float tmp96 = -(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(261)
											axis->y = tmp96;
										}
									}
									HX_STACK_LINE(261)
									tmp13 = best;
								}
								else{
									HX_STACK_LINE(261)
									Float c0x = ((Float)0.0);		HX_STACK_VAR(c0x,"c0x");
									HX_STACK_LINE(261)
									Float c0y = ((Float)0.0);		HX_STACK_VAR(c0y,"c0y");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float tmp32 = ay->gp0->x;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(261)
										c0x = tmp32;
										HX_STACK_LINE(261)
										Float tmp33 = ay->gp0->y;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(261)
										c0y = tmp33;
										HX_STACK_LINE(261)
										{
										}
									}
									HX_STACK_LINE(261)
									Float c1x = ((Float)0.0);		HX_STACK_VAR(c1x,"c1x");
									HX_STACK_LINE(261)
									Float c1y = ((Float)0.0);		HX_STACK_VAR(c1y,"c1y");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float tmp32 = ay->gp1->x;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(261)
										c1x = tmp32;
										HX_STACK_LINE(261)
										Float tmp33 = ay->gp1->y;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(261)
										c1y = tmp33;
										HX_STACK_LINE(261)
										{
										}
									}
									HX_STACK_LINE(261)
									Float dvx = ((Float)0.0);		HX_STACK_VAR(dvx,"dvx");
									HX_STACK_LINE(261)
									Float dvy = ((Float)0.0);		HX_STACK_VAR(dvy,"dvy");
									HX_STACK_LINE(261)
									{
										HX_STACK_LINE(261)
										Float tmp32 = (c1x - c0x);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(261)
										dvx = tmp32;
										HX_STACK_LINE(261)
										Float tmp33 = (c1y - c0y);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(261)
										dvy = tmp33;
									}
									HX_STACK_LINE(261)
									Float tmp32 = (ax->gnormy * c0x);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(261)
									Float tmp33 = (ax->gnormx * c0y);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(261)
									Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(261)
									Float d0 = tmp34;		HX_STACK_VAR(d0,"d0");
									HX_STACK_LINE(261)
									Float tmp35 = (ax->gnormy * c1x);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(261)
									Float tmp36 = (ax->gnormx * c1y);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(261)
									Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(261)
									Float d1 = tmp37;		HX_STACK_VAR(d1,"d1");
									HX_STACK_LINE(261)
									Float tmp38 = (d1 - d0);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(261)
									Float tmp39 = (Float((int)1) / Float(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(261)
									Float den = tmp39;		HX_STACK_VAR(den,"den");
									HX_STACK_LINE(261)
									Float tmp40 = ax->tp1;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(261)
									Float tmp41 = -(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(261)
									Float tmp42 = d0;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(261)
									Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(261)
									Float tmp44 = den;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(261)
									Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(261)
									Float t = tmp45;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(261)
									Float tmp46 = t;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(261)
									Float tmp47 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(261)
									bool tmp48 = (tmp46 > tmp47);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(261)
									if ((tmp48)){
										HX_STACK_LINE(261)
										Float t1 = t;		HX_STACK_VAR(t1,"t1");
										HX_STACK_LINE(261)
										Float tmp49 = (dvx * t1);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(261)
										hx::AddEq(c0x,tmp49);
										HX_STACK_LINE(261)
										Float tmp50 = (dvy * t1);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(261)
										hx::AddEq(c0y,tmp50);
									}
									HX_STACK_LINE(261)
									Float tmp49 = ax->tp0;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(261)
									Float tmp50 = -(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(261)
									Float tmp51 = d1;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(261)
									Float tmp52 = (tmp50 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(261)
									Float tmp53 = den;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(261)
									Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(261)
									Float t1 = tmp54;		HX_STACK_VAR(t1,"t1");
									HX_STACK_LINE(261)
									Float tmp55 = t1;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(261)
									Float tmp56 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(261)
									Float tmp57 = -(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(261)
									bool tmp58 = (tmp55 < tmp57);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(261)
									if ((tmp58)){
										HX_STACK_LINE(261)
										Float t2 = t1;		HX_STACK_VAR(t2,"t2");
										HX_STACK_LINE(261)
										Float tmp59 = (dvx * t2);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(261)
										hx::AddEq(c1x,tmp59);
										HX_STACK_LINE(261)
										Float tmp60 = (dvy * t2);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(261)
										hx::AddEq(c1y,tmp60);
									}
									HX_STACK_LINE(261)
									Float tmp59 = (c0x * ax->gnormx);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(261)
									Float tmp60 = (c0y * ax->gnormy);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(261)
									Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(261)
									Float tmp62 = ax->gprojection;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(261)
									Float tmp63 = (tmp61 - tmp62);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(261)
									Float c0d = tmp63;		HX_STACK_VAR(c0d,"c0d");
									HX_STACK_LINE(261)
									Float tmp64 = (c1x * ax->gnormx);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(261)
									Float tmp65 = (c1y * ax->gnormy);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(261)
									Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(261)
									Float tmp67 = ax->gprojection;		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(261)
									Float tmp68 = (tmp66 - tmp67);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(261)
									Float c1d = tmp68;		HX_STACK_VAR(c1d,"c1d");
									HX_STACK_LINE(261)
									bool tmp69 = (c0d < c1d);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(261)
									if ((tmp69)){
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											w2->x = c0x;
											HX_STACK_LINE(261)
											w2->y = c0y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float tmp70 = c0d;		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(261)
											Float tmp71 = -(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(261)
											Float t2 = tmp71;		HX_STACK_VAR(t2,"t2");
											HX_STACK_LINE(261)
											Float tmp72 = w2->x;		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(261)
											Float tmp73 = (ax->gnormx * t2);		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(261)
											Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(261)
											w1->x = tmp74;
											HX_STACK_LINE(261)
											Float tmp75 = w2->y;		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(261)
											Float tmp76 = (ax->gnormy * t2);		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(261)
											Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(261)
											w1->y = tmp77;
										}
										HX_STACK_LINE(261)
										tmp13 = c0d;
									}
									else{
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											w2->x = c1x;
											HX_STACK_LINE(261)
											w2->y = c1y;
											HX_STACK_LINE(261)
											{
											}
										}
										HX_STACK_LINE(261)
										{
											HX_STACK_LINE(261)
											Float tmp70 = c1d;		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(261)
											Float tmp71 = -(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(261)
											Float t2 = tmp71;		HX_STACK_VAR(t2,"t2");
											HX_STACK_LINE(261)
											Float tmp72 = w2->x;		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(261)
											Float tmp73 = (ax->gnormx * t2);		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(261)
											Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(261)
											w1->x = tmp74;
											HX_STACK_LINE(261)
											Float tmp75 = w2->y;		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(261)
											Float tmp76 = (ax->gnormy * t2);		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(261)
											Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(261)
											w1->y = tmp77;
										}
										HX_STACK_LINE(261)
										tmp13 = c1d;
									}
								}
							}
							else{
								HX_STACK_LINE(261)
								tmp13 = upperBound;
							}
						}
						else{
							HX_STACK_LINE(261)
							tmp13 = upperBound;
						}
					}
				}
			}
			HX_STACK_LINE(261)
			Float tmp14 = negRadius;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(261)
			Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(261)
			Float sep = tmp15;		HX_STACK_VAR(sep,"sep");
			HX_STACK_LINE(262)
			Float tmp16 = (deltax * axis->x);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(262)
			Float tmp17 = (deltay * axis->y);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(262)
			Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(262)
			Float dot = tmp18;		HX_STACK_VAR(dot,"dot");
			HX_STACK_LINE(263)
			Float tmp19 = sep;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(263)
			Float tmp20 = ::nape::Config_obj::distanceThresholdCCD;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(263)
			bool tmp21 = (tmp19 < tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(263)
			if ((tmp21)){
				HX_STACK_LINE(264)
				bool tmp22 = userAPI;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(264)
				if ((tmp22)){
					HX_STACK_LINE(265)
					break;
				}
				HX_STACK_LINE(267)
				Float d1x = ((Float)0.0);		HX_STACK_VAR(d1x,"d1x");
				HX_STACK_LINE(268)
				Float d1y = ((Float)0.0);		HX_STACK_VAR(d1y,"d1y");
				HX_STACK_LINE(269)
				{
					HX_STACK_LINE(270)
					Float tmp23 = (c1->x - b1->posx);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(270)
					d1x = tmp23;
					HX_STACK_LINE(271)
					Float tmp24 = (c1->y - b1->posy);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(271)
					d1y = tmp24;
				}
				HX_STACK_LINE(273)
				Float d2x = ((Float)0.0);		HX_STACK_VAR(d2x,"d2x");
				HX_STACK_LINE(274)
				Float d2y = ((Float)0.0);		HX_STACK_VAR(d2y,"d2y");
				HX_STACK_LINE(275)
				{
					HX_STACK_LINE(276)
					Float tmp23 = (c2->x - b2->posx);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(276)
					d2x = tmp23;
					HX_STACK_LINE(277)
					Float tmp24 = (c2->y - b2->posy);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(277)
					d2y = tmp24;
				}
				HX_STACK_LINE(279)
				Float tmp23 = dot;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(279)
				Float tmp24 = b1->sweep_angvel;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(279)
				Float tmp25 = (axis->y * d1x);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(279)
				Float tmp26 = (axis->x * d1y);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(279)
				Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(279)
				Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(279)
				Float tmp29 = (tmp23 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(279)
				Float tmp30 = b2->sweep_angvel;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(279)
				Float tmp31 = (axis->y * d2x);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(279)
				Float tmp32 = (axis->x * d2y);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(279)
				Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(279)
				Float tmp34 = (tmp30 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(279)
				Float tmp35 = (tmp29 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(279)
				Float proj = tmp35;		HX_STACK_VAR(proj,"proj");
				HX_STACK_LINE(280)
				bool tmp36 = (proj > (int)0);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(280)
				if ((tmp36)){
					HX_STACK_LINE(281)
					toi->slipped = true;
				}
				HX_STACK_LINE(283)
				bool tmp37 = (proj <= (int)0);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(283)
				bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(283)
				bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(283)
				if ((tmp38)){
					HX_STACK_LINE(283)
					Float tmp40 = sep;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(283)
					Float tmp41 = ::nape::Config_obj::distanceThresholdCCD;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(283)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(283)
					Float tmp43 = (tmp42 * ((Float)0.5));		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(283)
					Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(283)
					tmp39 = (tmp40 < tmp44);
				}
				else{
					HX_STACK_LINE(283)
					tmp39 = true;
				}
				HX_STACK_LINE(283)
				if ((tmp39)){
					HX_STACK_LINE(284)
					break;
				}
			}
			HX_STACK_LINE(287)
			Float tmp22 = (angBias - dot);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(287)
			Float tmp23 = timeStep;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(287)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(287)
			Float denom = tmp24;		HX_STACK_VAR(denom,"denom");
			HX_STACK_LINE(288)
			bool tmp25 = (denom <= (int)0);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(288)
			if ((tmp25)){
				HX_STACK_LINE(289)
				curTOI = (int)-1;
				HX_STACK_LINE(290)
				break;
			}
			HX_STACK_LINE(292)
			Float tmp26 = (Float(sep) / Float(denom));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(292)
			Float delta = tmp26;		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(293)
			bool tmp27 = (delta < ((Float)1e-6));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(293)
			if ((tmp27)){
				HX_STACK_LINE(293)
				delta = ((Float)1e-6);
			}
			HX_STACK_LINE(294)
			hx::AddEq(curTOI,delta);
			HX_STACK_LINE(295)
			bool tmp28 = (curTOI >= (int)1);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(295)
			if ((tmp28)){
				HX_STACK_LINE(296)
				curTOI = (int)1;
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					Float tmp29 = (curTOI * timeStep);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(297)
					Float dt = tmp29;		HX_STACK_VAR(dt,"dt");
					HX_STACK_LINE(297)
					Float tmp30 = (dt - b1->sweepTime);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(297)
					Float delta1 = tmp30;		HX_STACK_VAR(delta1,"delta1");
					HX_STACK_LINE(297)
					bool tmp31 = (delta1 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(297)
					if ((tmp31)){
						HX_STACK_LINE(297)
						b1->sweepTime = dt;
						HX_STACK_LINE(297)
						{
							HX_STACK_LINE(297)
							Float t = delta1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(297)
							Float tmp32 = (b1->velx * t);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(297)
							hx::AddEq(b1->posx,tmp32);
							HX_STACK_LINE(297)
							Float tmp33 = (b1->vely * t);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(297)
							hx::AddEq(b1->posy,tmp33);
						}
						HX_STACK_LINE(297)
						bool tmp32 = (b1->angvel != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(297)
						if ((tmp32)){
							HX_STACK_LINE(297)
							Float tmp33 = (b1->sweep_angvel * delta1);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(297)
							Float dr = tmp33;		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(297)
							hx::AddEq(b1->rot,dr);
							HX_STACK_LINE(297)
							Float tmp34 = (dr * dr);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(297)
							bool tmp35 = (tmp34 > ((Float)0.0001));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(297)
							if ((tmp35)){
								HX_STACK_LINE(297)
								Float tmp36 = b1->rot;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(297)
								Float tmp37 = ::Math_obj::sin(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(297)
								b1->axisx = tmp37;
								HX_STACK_LINE(297)
								Float tmp38 = b1->rot;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(297)
								Float tmp39 = ::Math_obj::cos(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(297)
								b1->axisy = tmp39;
								HX_STACK_LINE(297)
								Dynamic();
							}
							else{
								HX_STACK_LINE(297)
								Float tmp36 = (dr * dr);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(297)
								Float d2 = tmp36;		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(297)
								Float tmp37 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(297)
								Float tmp38 = ((int)1 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(297)
								Float p = tmp38;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(297)
								Float tmp39 = (d2 * d2);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(297)
								Float tmp40 = (Float(tmp39) / Float((int)8));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(297)
								Float tmp41 = ((int)1 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(297)
								Float m = tmp41;		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(297)
								Float tmp42 = (p * b1->axisx);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(297)
								Float tmp43 = (dr * b1->axisy);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(297)
								Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(297)
								Float tmp45 = m;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(297)
								Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(297)
								Float nx = tmp46;		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(297)
								Float tmp47 = (p * b1->axisy);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(297)
								Float tmp48 = (dr * b1->axisx);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(297)
								Float tmp49 = (tmp47 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(297)
								Float tmp50 = m;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(297)
								Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(297)
								b1->axisy = tmp51;
								HX_STACK_LINE(297)
								b1->axisx = nx;
							}
						}
					}
				}
				HX_STACK_LINE(298)
				{
					HX_STACK_LINE(298)
					int tmp29 = s1->type;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(298)
					int tmp30 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(298)
					bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(298)
					if ((tmp31)){
						HX_STACK_LINE(298)
						Float tmp32 = b1->posx;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(298)
						Float tmp33 = (b1->axisy * s1->localCOMx);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(298)
						Float tmp34 = (b1->axisx * s1->localCOMy);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(298)
						Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(298)
						Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(298)
						s1->worldCOMx = tmp36;
						HX_STACK_LINE(298)
						Float tmp37 = b1->posy;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(298)
						Float tmp38 = (s1->localCOMx * b1->axisx);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(298)
						Float tmp39 = (s1->localCOMy * b1->axisy);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(298)
						Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(298)
						Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(298)
						s1->worldCOMy = tmp41;
					}
					else{
						HX_STACK_LINE(298)
						::zpp_nape::shape::ZPP_Polygon p = s1->polygon;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(298)
						::zpp_nape::geom::ZPP_Vec2 tmp32 = p->lverts->next;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(298)
						::zpp_nape::geom::ZPP_Vec2 li = tmp32;		HX_STACK_VAR(li,"li");
						HX_STACK_LINE(298)
						{
							HX_STACK_LINE(298)
							::zpp_nape::geom::ZPP_Vec2 tmp33 = p->gverts->next;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(298)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp33;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(298)
							while((true)){
								HX_STACK_LINE(298)
								bool tmp34 = (cx_ite != null());		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(298)
								bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(298)
								if ((tmp35)){
									HX_STACK_LINE(298)
									break;
								}
								HX_STACK_LINE(298)
								::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(298)
								{
									HX_STACK_LINE(298)
									::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
									HX_STACK_LINE(298)
									li = li->next;
									HX_STACK_LINE(298)
									{
										HX_STACK_LINE(298)
										Float tmp36 = b1->posx;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(298)
										Float tmp37 = (b1->axisy * l->x);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(298)
										Float tmp38 = (b1->axisx * l->y);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(298)
										Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(298)
										Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(298)
										g->x = tmp40;
										HX_STACK_LINE(298)
										Float tmp41 = b1->posy;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(298)
										Float tmp42 = (l->x * b1->axisx);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(298)
										Float tmp43 = (l->y * b1->axisy);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(298)
										Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(298)
										Float tmp45 = (tmp41 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(298)
										g->y = tmp45;
									}
								}
								HX_STACK_LINE(298)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(298)
						::zpp_nape::util::ZNPNode_ZPP_Edge tmp33 = p->edges->head;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(298)
						::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp33;		HX_STACK_VAR(ite,"ite");
						HX_STACK_LINE(298)
						{
							HX_STACK_LINE(298)
							::zpp_nape::geom::ZPP_Vec2 tmp34 = p->gverts->next;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(298)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp34;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(298)
							::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
							HX_STACK_LINE(298)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(298)
							while((true)){
								HX_STACK_LINE(298)
								bool tmp35 = (cx_ite != null());		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(298)
								bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(298)
								if ((tmp36)){
									HX_STACK_LINE(298)
									break;
								}
								HX_STACK_LINE(298)
								::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(298)
								{
									HX_STACK_LINE(298)
									::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(298)
									ite = ite->next;
									HX_STACK_LINE(298)
									{
										HX_STACK_LINE(298)
										Float tmp37 = (b1->axisy * e->lnormx);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(298)
										Float tmp38 = (b1->axisx * e->lnormy);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(298)
										Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(298)
										e->gnormx = tmp39;
										HX_STACK_LINE(298)
										Float tmp40 = (e->lnormx * b1->axisx);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(298)
										Float tmp41 = (e->lnormy * b1->axisy);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(298)
										Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(298)
										e->gnormy = tmp42;
									}
									HX_STACK_LINE(298)
									Float tmp37 = (b1->posx * e->gnormx);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(298)
									Float tmp38 = (b1->posy * e->gnormy);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(298)
									Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(298)
									Float tmp40 = e->lprojection;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(298)
									Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(298)
									e->gprojection = tmp41;
									HX_STACK_LINE(298)
									Float tmp42 = (u->y * e->gnormx);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(298)
									Float tmp43 = (u->x * e->gnormy);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(298)
									Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(298)
									e->tp0 = tmp44;
									HX_STACK_LINE(298)
									Float tmp45 = (v->y * e->gnormx);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(298)
									Float tmp46 = (v->x * e->gnormy);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(298)
									Float tmp47 = (tmp45 - tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(298)
									e->tp1 = tmp47;
								}
								HX_STACK_LINE(298)
								u = v;
								HX_STACK_LINE(298)
								cx_ite = cx_ite->next;
							}
							HX_STACK_LINE(298)
							::zpp_nape::geom::ZPP_Vec2 tmp35 = p->gverts->next;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(298)
							::zpp_nape::geom::ZPP_Vec2 v = tmp35;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(298)
							{
								HX_STACK_LINE(298)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(298)
								ite = ite->next;
								HX_STACK_LINE(298)
								{
									HX_STACK_LINE(298)
									Float tmp36 = (b1->axisy * e->lnormx);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(298)
									Float tmp37 = (b1->axisx * e->lnormy);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(298)
									Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(298)
									e->gnormx = tmp38;
									HX_STACK_LINE(298)
									Float tmp39 = (e->lnormx * b1->axisx);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(298)
									Float tmp40 = (e->lnormy * b1->axisy);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(298)
									Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(298)
									e->gnormy = tmp41;
								}
								HX_STACK_LINE(298)
								Float tmp36 = (b1->posx * e->gnormx);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(298)
								Float tmp37 = (b1->posy * e->gnormy);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(298)
								Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(298)
								Float tmp39 = e->lprojection;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(298)
								Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(298)
								e->gprojection = tmp40;
								HX_STACK_LINE(298)
								Float tmp41 = (u->y * e->gnormx);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(298)
								Float tmp42 = (u->x * e->gnormy);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(298)
								Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(298)
								e->tp0 = tmp43;
								HX_STACK_LINE(298)
								Float tmp44 = (v->y * e->gnormx);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(298)
								Float tmp45 = (v->x * e->gnormy);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(298)
								Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(298)
								e->tp1 = tmp46;
							}
						}
					}
				}
				HX_STACK_LINE(299)
				{
					HX_STACK_LINE(299)
					Float tmp29 = (curTOI * timeStep);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(299)
					Float dt = tmp29;		HX_STACK_VAR(dt,"dt");
					HX_STACK_LINE(299)
					Float tmp30 = (dt - b2->sweepTime);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(299)
					Float delta1 = tmp30;		HX_STACK_VAR(delta1,"delta1");
					HX_STACK_LINE(299)
					bool tmp31 = (delta1 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(299)
					if ((tmp31)){
						HX_STACK_LINE(299)
						b2->sweepTime = dt;
						HX_STACK_LINE(299)
						{
							HX_STACK_LINE(299)
							Float t = delta1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(299)
							Float tmp32 = (b2->velx * t);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(299)
							hx::AddEq(b2->posx,tmp32);
							HX_STACK_LINE(299)
							Float tmp33 = (b2->vely * t);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(299)
							hx::AddEq(b2->posy,tmp33);
						}
						HX_STACK_LINE(299)
						bool tmp32 = (b2->angvel != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(299)
						if ((tmp32)){
							HX_STACK_LINE(299)
							Float tmp33 = (b2->sweep_angvel * delta1);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(299)
							Float dr = tmp33;		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(299)
							hx::AddEq(b2->rot,dr);
							HX_STACK_LINE(299)
							Float tmp34 = (dr * dr);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(299)
							bool tmp35 = (tmp34 > ((Float)0.0001));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(299)
							if ((tmp35)){
								HX_STACK_LINE(299)
								Float tmp36 = b2->rot;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(299)
								Float tmp37 = ::Math_obj::sin(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(299)
								b2->axisx = tmp37;
								HX_STACK_LINE(299)
								Float tmp38 = b2->rot;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(299)
								Float tmp39 = ::Math_obj::cos(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(299)
								b2->axisy = tmp39;
								HX_STACK_LINE(299)
								Dynamic();
							}
							else{
								HX_STACK_LINE(299)
								Float tmp36 = (dr * dr);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(299)
								Float d2 = tmp36;		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(299)
								Float tmp37 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(299)
								Float tmp38 = ((int)1 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(299)
								Float p = tmp38;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(299)
								Float tmp39 = (d2 * d2);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(299)
								Float tmp40 = (Float(tmp39) / Float((int)8));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(299)
								Float tmp41 = ((int)1 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(299)
								Float m = tmp41;		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(299)
								Float tmp42 = (p * b2->axisx);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(299)
								Float tmp43 = (dr * b2->axisy);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(299)
								Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(299)
								Float tmp45 = m;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(299)
								Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(299)
								Float nx = tmp46;		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(299)
								Float tmp47 = (p * b2->axisy);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(299)
								Float tmp48 = (dr * b2->axisx);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(299)
								Float tmp49 = (tmp47 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(299)
								Float tmp50 = m;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(299)
								Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(299)
								b2->axisy = tmp51;
								HX_STACK_LINE(299)
								b2->axisx = nx;
							}
						}
					}
				}
				HX_STACK_LINE(300)
				{
					HX_STACK_LINE(300)
					int tmp29 = s2->type;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(300)
					int tmp30 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(300)
					bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(300)
					if ((tmp31)){
						HX_STACK_LINE(300)
						Float tmp32 = b2->posx;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(300)
						Float tmp33 = (b2->axisy * s2->localCOMx);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(300)
						Float tmp34 = (b2->axisx * s2->localCOMy);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(300)
						Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(300)
						Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(300)
						s2->worldCOMx = tmp36;
						HX_STACK_LINE(300)
						Float tmp37 = b2->posy;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(300)
						Float tmp38 = (s2->localCOMx * b2->axisx);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(300)
						Float tmp39 = (s2->localCOMy * b2->axisy);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(300)
						Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(300)
						Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(300)
						s2->worldCOMy = tmp41;
					}
					else{
						HX_STACK_LINE(300)
						::zpp_nape::shape::ZPP_Polygon p = s2->polygon;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(300)
						::zpp_nape::geom::ZPP_Vec2 tmp32 = p->lverts->next;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(300)
						::zpp_nape::geom::ZPP_Vec2 li = tmp32;		HX_STACK_VAR(li,"li");
						HX_STACK_LINE(300)
						{
							HX_STACK_LINE(300)
							::zpp_nape::geom::ZPP_Vec2 tmp33 = p->gverts->next;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(300)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp33;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(300)
							while((true)){
								HX_STACK_LINE(300)
								bool tmp34 = (cx_ite != null());		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(300)
								bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(300)
								if ((tmp35)){
									HX_STACK_LINE(300)
									break;
								}
								HX_STACK_LINE(300)
								::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(300)
								{
									HX_STACK_LINE(300)
									::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
									HX_STACK_LINE(300)
									li = li->next;
									HX_STACK_LINE(300)
									{
										HX_STACK_LINE(300)
										Float tmp36 = b2->posx;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(300)
										Float tmp37 = (b2->axisy * l->x);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(300)
										Float tmp38 = (b2->axisx * l->y);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(300)
										Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(300)
										Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(300)
										g->x = tmp40;
										HX_STACK_LINE(300)
										Float tmp41 = b2->posy;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(300)
										Float tmp42 = (l->x * b2->axisx);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(300)
										Float tmp43 = (l->y * b2->axisy);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(300)
										Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(300)
										Float tmp45 = (tmp41 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(300)
										g->y = tmp45;
									}
								}
								HX_STACK_LINE(300)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(300)
						::zpp_nape::util::ZNPNode_ZPP_Edge tmp33 = p->edges->head;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(300)
						::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp33;		HX_STACK_VAR(ite,"ite");
						HX_STACK_LINE(300)
						{
							HX_STACK_LINE(300)
							::zpp_nape::geom::ZPP_Vec2 tmp34 = p->gverts->next;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(300)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp34;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(300)
							::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
							HX_STACK_LINE(300)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(300)
							while((true)){
								HX_STACK_LINE(300)
								bool tmp35 = (cx_ite != null());		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(300)
								bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(300)
								if ((tmp36)){
									HX_STACK_LINE(300)
									break;
								}
								HX_STACK_LINE(300)
								::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(300)
								{
									HX_STACK_LINE(300)
									::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(300)
									ite = ite->next;
									HX_STACK_LINE(300)
									{
										HX_STACK_LINE(300)
										Float tmp37 = (b2->axisy * e->lnormx);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(300)
										Float tmp38 = (b2->axisx * e->lnormy);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(300)
										Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(300)
										e->gnormx = tmp39;
										HX_STACK_LINE(300)
										Float tmp40 = (e->lnormx * b2->axisx);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(300)
										Float tmp41 = (e->lnormy * b2->axisy);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(300)
										Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(300)
										e->gnormy = tmp42;
									}
									HX_STACK_LINE(300)
									Float tmp37 = (b2->posx * e->gnormx);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(300)
									Float tmp38 = (b2->posy * e->gnormy);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(300)
									Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(300)
									Float tmp40 = e->lprojection;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(300)
									Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(300)
									e->gprojection = tmp41;
									HX_STACK_LINE(300)
									Float tmp42 = (u->y * e->gnormx);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(300)
									Float tmp43 = (u->x * e->gnormy);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(300)
									Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(300)
									e->tp0 = tmp44;
									HX_STACK_LINE(300)
									Float tmp45 = (v->y * e->gnormx);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(300)
									Float tmp46 = (v->x * e->gnormy);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(300)
									Float tmp47 = (tmp45 - tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(300)
									e->tp1 = tmp47;
								}
								HX_STACK_LINE(300)
								u = v;
								HX_STACK_LINE(300)
								cx_ite = cx_ite->next;
							}
							HX_STACK_LINE(300)
							::zpp_nape::geom::ZPP_Vec2 tmp35 = p->gverts->next;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(300)
							::zpp_nape::geom::ZPP_Vec2 v = tmp35;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(300)
							{
								HX_STACK_LINE(300)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(300)
								ite = ite->next;
								HX_STACK_LINE(300)
								{
									HX_STACK_LINE(300)
									Float tmp36 = (b2->axisy * e->lnormx);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(300)
									Float tmp37 = (b2->axisx * e->lnormy);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(300)
									Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(300)
									e->gnormx = tmp38;
									HX_STACK_LINE(300)
									Float tmp39 = (e->lnormx * b2->axisx);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(300)
									Float tmp40 = (e->lnormy * b2->axisy);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(300)
									Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(300)
									e->gnormy = tmp41;
								}
								HX_STACK_LINE(300)
								Float tmp36 = (b2->posx * e->gnormx);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(300)
								Float tmp37 = (b2->posy * e->gnormy);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(300)
								Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(300)
								Float tmp39 = e->lprojection;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(300)
								Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(300)
								e->gprojection = tmp40;
								HX_STACK_LINE(300)
								Float tmp41 = (u->y * e->gnormx);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(300)
								Float tmp42 = (u->x * e->gnormy);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(300)
								Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(300)
								e->tp0 = tmp43;
								HX_STACK_LINE(300)
								Float tmp44 = (v->y * e->gnormx);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(300)
								Float tmp45 = (v->x * e->gnormy);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(300)
								Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(300)
								e->tp1 = tmp46;
							}
						}
					}
				}
				HX_STACK_LINE(301)
				Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(301)
				{
					HX_STACK_LINE(301)
					::zpp_nape::shape::ZPP_Shape s11 = s1;		HX_STACK_VAR(s11,"s11");
					HX_STACK_LINE(301)
					::zpp_nape::shape::ZPP_Shape s21 = s2;		HX_STACK_VAR(s21,"s21");
					HX_STACK_LINE(301)
					::zpp_nape::geom::ZPP_Vec2 w1 = c1;		HX_STACK_VAR(w1,"w1");
					HX_STACK_LINE(301)
					::zpp_nape::geom::ZPP_Vec2 w2 = c2;		HX_STACK_VAR(w2,"w2");
					HX_STACK_LINE(301)
					Float upperBound = ((Float)1e100);		HX_STACK_VAR(upperBound,"upperBound");
					HX_STACK_LINE(301)
					int tmp30 = s11->type;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(301)
					int tmp31 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(301)
					bool tmp32 = (tmp30 == tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(301)
					bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(301)
					if ((tmp32)){
						HX_STACK_LINE(301)
						int tmp34 = s21->type;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(301)
						int tmp35 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(301)
						int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(301)
						tmp33 = (tmp34 == tmp36);
					}
					else{
						HX_STACK_LINE(301)
						tmp33 = false;
					}
					HX_STACK_LINE(301)
					if ((tmp33)){
						HX_STACK_LINE(301)
						::zpp_nape::shape::ZPP_Circle c11 = s11->circle;		HX_STACK_VAR(c11,"c11");
						HX_STACK_LINE(301)
						::zpp_nape::shape::ZPP_Circle c21 = s21->circle;		HX_STACK_VAR(c21,"c21");
						HX_STACK_LINE(301)
						Float dist;		HX_STACK_VAR(dist,"dist");
						HX_STACK_LINE(301)
						{
							HX_STACK_LINE(301)
							Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(301)
							Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
							HX_STACK_LINE(301)
							{
								HX_STACK_LINE(301)
								Float tmp34 = (c21->worldCOMx - c11->worldCOMx);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(301)
								nx = tmp34;
								HX_STACK_LINE(301)
								Float tmp35 = (c21->worldCOMy - c11->worldCOMy);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(301)
								ny = tmp35;
							}
							HX_STACK_LINE(301)
							Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(301)
							{
								HX_STACK_LINE(301)
								Float tmp35 = (nx * nx);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(301)
								Float tmp36 = (ny * ny);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(301)
								Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(301)
								tmp34 = ::Math_obj::sqrt(tmp37);
							}
							HX_STACK_LINE(301)
							Float len = tmp34;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(301)
							Float tmp35 = len;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(301)
							Float tmp36 = (c11->radius + c21->radius);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(301)
							Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(301)
							dist = tmp37;
							HX_STACK_LINE(301)
							bool tmp38 = (dist < upperBound);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(301)
							if ((tmp38)){
								HX_STACK_LINE(301)
								bool tmp39 = (len == (int)0);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(301)
								if ((tmp39)){
									HX_STACK_LINE(301)
									nx = (int)1;
									HX_STACK_LINE(301)
									ny = (int)0;
									HX_STACK_LINE(301)
									{
									}
								}
								else{
									HX_STACK_LINE(301)
									Float tmp40 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(301)
									Float t = tmp40;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(301)
									hx::MultEq(nx,t);
									HX_STACK_LINE(301)
									hx::MultEq(ny,t);
								}
								HX_STACK_LINE(301)
								{
									HX_STACK_LINE(301)
									Float t = c11->radius;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(301)
									Float tmp40 = c11->worldCOMx;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(301)
									Float tmp41 = (nx * t);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(301)
									Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(301)
									w1->x = tmp42;
									HX_STACK_LINE(301)
									Float tmp43 = c11->worldCOMy;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(301)
									Float tmp44 = (ny * t);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(301)
									Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(301)
									w1->y = tmp45;
								}
								HX_STACK_LINE(301)
								{
									HX_STACK_LINE(301)
									Float tmp40 = c21->radius;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(301)
									Float tmp41 = -(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(301)
									Float t = tmp41;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(301)
									Float tmp42 = c21->worldCOMx;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(301)
									Float tmp43 = (nx * t);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(301)
									Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(301)
									w2->x = tmp44;
									HX_STACK_LINE(301)
									Float tmp45 = c21->worldCOMy;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(301)
									Float tmp46 = (ny * t);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(301)
									Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(301)
									w2->y = tmp47;
								}
								HX_STACK_LINE(301)
								{
									HX_STACK_LINE(301)
									axis->x = nx;
									HX_STACK_LINE(301)
									axis->y = ny;
									HX_STACK_LINE(301)
									{
									}
								}
							}
						}
						HX_STACK_LINE(301)
						tmp29 = dist;
					}
					else{
						HX_STACK_LINE(301)
						bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
						HX_STACK_LINE(301)
						int tmp34 = s11->type;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(301)
						int tmp35 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(301)
						bool tmp36 = (tmp34 == tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(301)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(301)
						if ((tmp36)){
							HX_STACK_LINE(301)
							int tmp38 = s21->type;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(301)
							int tmp39 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(301)
							int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(301)
							tmp37 = (tmp38 == tmp40);
						}
						else{
							HX_STACK_LINE(301)
							tmp37 = false;
						}
						HX_STACK_LINE(301)
						if ((tmp37)){
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Shape tmp38 = s11;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(301)
							s11 = s21;
							HX_STACK_LINE(301)
							s21 = tmp38;
							HX_STACK_LINE(301)
							::zpp_nape::geom::ZPP_Vec2 tmp210 = w1;		HX_STACK_VAR(tmp210,"tmp210");
							HX_STACK_LINE(301)
							w1 = w2;
							HX_STACK_LINE(301)
							w2 = tmp210;
							HX_STACK_LINE(301)
							swapped = true;
						}
						HX_STACK_LINE(301)
						int tmp38 = s11->type;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(301)
						int tmp39 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(301)
						bool tmp40 = (tmp38 == tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(301)
						bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(301)
						if ((tmp40)){
							HX_STACK_LINE(301)
							int tmp42 = s21->type;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(301)
							int tmp43 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(301)
							int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(301)
							tmp41 = (tmp42 == tmp44);
						}
						else{
							HX_STACK_LINE(301)
							tmp41 = false;
						}
						HX_STACK_LINE(301)
						if ((tmp41)){
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Polygon poly = s11->polygon;		HX_STACK_VAR(poly,"poly");
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Circle circle = s21->circle;		HX_STACK_VAR(circle,"circle");
							HX_STACK_LINE(301)
							Float tmp42 = ((Float)-1e+100);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(301)
							Float best = tmp42;		HX_STACK_VAR(best,"best");
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
							HX_STACK_LINE(301)
							{
								HX_STACK_LINE(301)
								::zpp_nape::util::ZNPNode_ZPP_Edge tmp43 = poly->edges->head;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(301)
								::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp43;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(301)
								while((true)){
									HX_STACK_LINE(301)
									bool tmp44 = (cx_ite != null());		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(301)
									bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(301)
									if ((tmp45)){
										HX_STACK_LINE(301)
										break;
									}
									HX_STACK_LINE(301)
									::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(301)
									{
										HX_STACK_LINE(301)
										Float tmp46 = (a->gnormx * circle->worldCOMx);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(301)
										Float tmp47 = (a->gnormy * circle->worldCOMy);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(301)
										Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(301)
										Float tmp49 = a->gprojection;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(301)
										Float tmp50 = (tmp48 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(301)
										Float tmp51 = circle->radius;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(301)
										Float tmp52 = (tmp50 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(301)
										Float dist = tmp52;		HX_STACK_VAR(dist,"dist");
										HX_STACK_LINE(301)
										bool tmp53 = (dist > upperBound);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(301)
										if ((tmp53)){
											HX_STACK_LINE(301)
											best = dist;
											HX_STACK_LINE(301)
											break;
										}
										HX_STACK_LINE(301)
										bool tmp54 = (dist > (int)0);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(301)
										if ((tmp54)){
											HX_STACK_LINE(301)
											bool tmp55 = (dist > best);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(301)
											if ((tmp55)){
												HX_STACK_LINE(301)
												best = dist;
												HX_STACK_LINE(301)
												a0 = a;
											}
										}
										else{
											HX_STACK_LINE(301)
											bool tmp55 = (best < (int)0);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(301)
											bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(301)
											if ((tmp55)){
												HX_STACK_LINE(301)
												tmp56 = (dist > best);
											}
											else{
												HX_STACK_LINE(301)
												tmp56 = false;
											}
											HX_STACK_LINE(301)
											if ((tmp56)){
												HX_STACK_LINE(301)
												best = dist;
												HX_STACK_LINE(301)
												a0 = a;
											}
										}
									}
									HX_STACK_LINE(301)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(301)
							bool tmp43 = (best < upperBound);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(301)
							if ((tmp43)){
								HX_STACK_LINE(301)
								::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
								HX_STACK_LINE(301)
								::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
								HX_STACK_LINE(301)
								Float tmp44 = (circle->worldCOMy * a0->gnormx);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(301)
								Float tmp45 = (circle->worldCOMx * a0->gnormy);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(301)
								Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(301)
								Float dt = tmp46;		HX_STACK_VAR(dt,"dt");
								HX_STACK_LINE(301)
								Float tmp47 = dt;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(301)
								Float tmp48 = (v0->y * a0->gnormx);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(301)
								Float tmp49 = (v0->x * a0->gnormy);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(301)
								Float tmp50 = (tmp48 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(301)
								bool tmp51 = (tmp47 <= tmp50);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(301)
								if ((tmp51)){
									HX_STACK_LINE(301)
									Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(301)
									Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
									HX_STACK_LINE(301)
									{
										HX_STACK_LINE(301)
										Float tmp52 = (circle->worldCOMx - v0->x);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(301)
										nx = tmp52;
										HX_STACK_LINE(301)
										Float tmp53 = (circle->worldCOMy - v0->y);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(301)
										ny = tmp53;
									}
									HX_STACK_LINE(301)
									Float tmp52;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(301)
									{
										HX_STACK_LINE(301)
										Float tmp53 = (nx * nx);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(301)
										Float tmp54 = (ny * ny);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(301)
										Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(301)
										tmp52 = ::Math_obj::sqrt(tmp55);
									}
									HX_STACK_LINE(301)
									Float len = tmp52;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(301)
									Float tmp53 = len;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(301)
									Float tmp54 = circle->radius;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(301)
									Float tmp55 = (tmp53 - tmp54);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(301)
									best = tmp55;
									HX_STACK_LINE(301)
									bool tmp56 = (best < upperBound);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(301)
									if ((tmp56)){
										HX_STACK_LINE(301)
										bool tmp57 = (len == (int)0);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(301)
										if ((tmp57)){
											HX_STACK_LINE(301)
											nx = (int)1;
											HX_STACK_LINE(301)
											ny = (int)0;
											HX_STACK_LINE(301)
											{
											}
										}
										else{
											HX_STACK_LINE(301)
											Float tmp58 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(301)
											Float t = tmp58;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											hx::MultEq(nx,t);
											HX_STACK_LINE(301)
											hx::MultEq(ny,t);
										}
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											int t = (int)0;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											Float tmp58 = v0->x;		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(301)
											Float tmp59 = (nx * t);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(301)
											Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(301)
											w1->x = tmp60;
											HX_STACK_LINE(301)
											Float tmp61 = v0->y;		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(301)
											Float tmp62 = (ny * t);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(301)
											Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(301)
											w1->y = tmp63;
										}
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float tmp58 = circle->radius;		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(301)
											Float tmp59 = -(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(301)
											Float t = tmp59;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											Float tmp60 = circle->worldCOMx;		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(301)
											Float tmp61 = (nx * t);		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(301)
											Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(301)
											w2->x = tmp62;
											HX_STACK_LINE(301)
											Float tmp63 = circle->worldCOMy;		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(301)
											Float tmp64 = (ny * t);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(301)
											Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(301)
											w2->y = tmp65;
										}
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											axis->x = nx;
											HX_STACK_LINE(301)
											axis->y = ny;
											HX_STACK_LINE(301)
											{
											}
										}
									}
								}
								else{
									HX_STACK_LINE(301)
									Float tmp52 = dt;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(301)
									Float tmp53 = (v1->y * a0->gnormx);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(301)
									Float tmp54 = (v1->x * a0->gnormy);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(301)
									Float tmp55 = (tmp53 - tmp54);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(301)
									bool tmp56 = (tmp52 >= tmp55);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(301)
									if ((tmp56)){
										HX_STACK_LINE(301)
										Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
										HX_STACK_LINE(301)
										Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float tmp57 = (circle->worldCOMx - v1->x);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(301)
											nx = tmp57;
											HX_STACK_LINE(301)
											Float tmp58 = (circle->worldCOMy - v1->y);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(301)
											ny = tmp58;
										}
										HX_STACK_LINE(301)
										Float tmp57;		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float tmp58 = (nx * nx);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(301)
											Float tmp59 = (ny * ny);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(301)
											Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(301)
											tmp57 = ::Math_obj::sqrt(tmp60);
										}
										HX_STACK_LINE(301)
										Float len = tmp57;		HX_STACK_VAR(len,"len");
										HX_STACK_LINE(301)
										Float tmp58 = len;		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(301)
										Float tmp59 = circle->radius;		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(301)
										Float tmp60 = (tmp58 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(301)
										best = tmp60;
										HX_STACK_LINE(301)
										bool tmp61 = (best < upperBound);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(301)
										if ((tmp61)){
											HX_STACK_LINE(301)
											bool tmp62 = (len == (int)0);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(301)
											if ((tmp62)){
												HX_STACK_LINE(301)
												nx = (int)1;
												HX_STACK_LINE(301)
												ny = (int)0;
												HX_STACK_LINE(301)
												{
												}
											}
											else{
												HX_STACK_LINE(301)
												Float tmp63 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(301)
												Float t = tmp63;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(301)
												hx::MultEq(nx,t);
												HX_STACK_LINE(301)
												hx::MultEq(ny,t);
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												int t = (int)0;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(301)
												Float tmp63 = v1->x;		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(301)
												Float tmp64 = (nx * t);		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(301)
												Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(301)
												w1->x = tmp65;
												HX_STACK_LINE(301)
												Float tmp66 = v1->y;		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(301)
												Float tmp67 = (ny * t);		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(301)
												Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(301)
												w1->y = tmp68;
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float tmp63 = circle->radius;		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(301)
												Float tmp64 = -(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(301)
												Float t = tmp64;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(301)
												Float tmp65 = circle->worldCOMx;		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(301)
												Float tmp66 = (nx * t);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(301)
												Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(301)
												w2->x = tmp67;
												HX_STACK_LINE(301)
												Float tmp68 = circle->worldCOMy;		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(301)
												Float tmp69 = (ny * t);		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(301)
												Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(301)
												w2->y = tmp70;
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												axis->x = nx;
												HX_STACK_LINE(301)
												axis->y = ny;
												HX_STACK_LINE(301)
												{
												}
											}
										}
									}
									else{
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float tmp57 = circle->radius;		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(301)
											Float tmp58 = -(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(301)
											Float t = tmp58;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											Float tmp59 = circle->worldCOMx;		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(301)
											Float tmp60 = (a0->gnormx * t);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(301)
											Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(301)
											w2->x = tmp61;
											HX_STACK_LINE(301)
											Float tmp62 = circle->worldCOMy;		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(301)
											Float tmp63 = (a0->gnormy * t);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(301)
											Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(301)
											w2->y = tmp64;
										}
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float tmp57 = best;		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(301)
											Float tmp58 = -(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(301)
											Float t = tmp58;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											Float tmp59 = w2->x;		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(301)
											Float tmp60 = (a0->gnormx * t);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(301)
											Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(301)
											w1->x = tmp61;
											HX_STACK_LINE(301)
											Float tmp62 = w2->y;		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(301)
											Float tmp63 = (a0->gnormy * t);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(301)
											Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(301)
											w1->y = tmp64;
										}
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											axis->x = a0->gnormx;
											HX_STACK_LINE(301)
											axis->y = a0->gnormy;
											HX_STACK_LINE(301)
											{
											}
										}
									}
								}
							}
							HX_STACK_LINE(301)
							bool tmp44 = swapped;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(301)
							if ((tmp44)){
								HX_STACK_LINE(301)
								Float tmp45 = axis->x;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(301)
								Float tmp46 = -(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(301)
								axis->x = tmp46;
								HX_STACK_LINE(301)
								Float tmp47 = axis->y;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(301)
								Float tmp48 = -(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(301)
								axis->y = tmp48;
							}
							HX_STACK_LINE(301)
							tmp29 = best;
						}
						else{
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Polygon p1 = s11->polygon;		HX_STACK_VAR(p1,"p1");
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Polygon p2 = s21->polygon;		HX_STACK_VAR(p2,"p2");
							HX_STACK_LINE(301)
							Float tmp42 = ((Float)-1e+100);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(301)
							Float best = tmp42;		HX_STACK_VAR(best,"best");
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
							HX_STACK_LINE(301)
							::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
							HX_STACK_LINE(301)
							int besti = (int)0;		HX_STACK_VAR(besti,"besti");
							HX_STACK_LINE(301)
							{
								HX_STACK_LINE(301)
								::zpp_nape::util::ZNPNode_ZPP_Edge tmp43 = p1->edges->head;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(301)
								::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp43;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(301)
								while((true)){
									HX_STACK_LINE(301)
									bool tmp44 = (cx_ite != null());		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(301)
									bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(301)
									if ((tmp45)){
										HX_STACK_LINE(301)
										break;
									}
									HX_STACK_LINE(301)
									::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(301)
									{
										HX_STACK_LINE(301)
										Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											::zpp_nape::geom::ZPP_Vec2 tmp46 = p2->gverts->next;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(301)
											::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp46;		HX_STACK_VAR(cx_ite1,"cx_ite1");
											HX_STACK_LINE(301)
											while((true)){
												HX_STACK_LINE(301)
												bool tmp47 = (cx_ite1 != null());		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(301)
												bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(301)
												if ((tmp48)){
													HX_STACK_LINE(301)
													break;
												}
												HX_STACK_LINE(301)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(301)
												{
													HX_STACK_LINE(301)
													Float tmp49 = (a->gnormx * v->x);		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(301)
													Float tmp50 = (a->gnormy * v->y);		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(301)
													Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(301)
													Float k = tmp51;		HX_STACK_VAR(k,"k");
													HX_STACK_LINE(301)
													bool tmp52 = (k < min);		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(301)
													if ((tmp52)){
														HX_STACK_LINE(301)
														min = k;
													}
												}
												HX_STACK_LINE(301)
												cx_ite1 = cx_ite1->next;
											}
										}
										HX_STACK_LINE(301)
										hx::SubEq(min,a->gprojection);
										HX_STACK_LINE(301)
										bool tmp46 = (min > upperBound);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(301)
										if ((tmp46)){
											HX_STACK_LINE(301)
											best = min;
											HX_STACK_LINE(301)
											break;
										}
										HX_STACK_LINE(301)
										bool tmp47 = (min > (int)0);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(301)
										if ((tmp47)){
											HX_STACK_LINE(301)
											bool tmp48 = (min > best);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(301)
											if ((tmp48)){
												HX_STACK_LINE(301)
												best = min;
												HX_STACK_LINE(301)
												a1 = a;
												HX_STACK_LINE(301)
												besti = (int)1;
											}
										}
										else{
											HX_STACK_LINE(301)
											bool tmp48 = (best < (int)0);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(301)
											bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(301)
											if ((tmp48)){
												HX_STACK_LINE(301)
												tmp49 = (min > best);
											}
											else{
												HX_STACK_LINE(301)
												tmp49 = false;
											}
											HX_STACK_LINE(301)
											if ((tmp49)){
												HX_STACK_LINE(301)
												best = min;
												HX_STACK_LINE(301)
												a1 = a;
												HX_STACK_LINE(301)
												besti = (int)1;
											}
										}
									}
									HX_STACK_LINE(301)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(301)
							bool tmp43 = (best < upperBound);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(301)
							if ((tmp43)){
								HX_STACK_LINE(301)
								{
									HX_STACK_LINE(301)
									::zpp_nape::util::ZNPNode_ZPP_Edge tmp44 = p2->edges->head;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(301)
									::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp44;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(301)
									while((true)){
										HX_STACK_LINE(301)
										bool tmp45 = (cx_ite != null());		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(301)
										bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(301)
										if ((tmp46)){
											HX_STACK_LINE(301)
											break;
										}
										HX_STACK_LINE(301)
										::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												::zpp_nape::geom::ZPP_Vec2 tmp47 = p1->gverts->next;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(301)
												::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp47;		HX_STACK_VAR(cx_ite1,"cx_ite1");
												HX_STACK_LINE(301)
												while((true)){
													HX_STACK_LINE(301)
													bool tmp48 = (cx_ite1 != null());		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(301)
													bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(301)
													if ((tmp49)){
														HX_STACK_LINE(301)
														break;
													}
													HX_STACK_LINE(301)
													::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
													HX_STACK_LINE(301)
													{
														HX_STACK_LINE(301)
														Float tmp50 = (a->gnormx * v->x);		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(301)
														Float tmp51 = (a->gnormy * v->y);		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(301)
														Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(301)
														Float k = tmp52;		HX_STACK_VAR(k,"k");
														HX_STACK_LINE(301)
														bool tmp53 = (k < min);		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(301)
														if ((tmp53)){
															HX_STACK_LINE(301)
															min = k;
														}
													}
													HX_STACK_LINE(301)
													cx_ite1 = cx_ite1->next;
												}
											}
											HX_STACK_LINE(301)
											hx::SubEq(min,a->gprojection);
											HX_STACK_LINE(301)
											bool tmp47 = (min > upperBound);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(301)
											if ((tmp47)){
												HX_STACK_LINE(301)
												best = min;
												HX_STACK_LINE(301)
												break;
											}
											HX_STACK_LINE(301)
											bool tmp48 = (min > (int)0);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(301)
											if ((tmp48)){
												HX_STACK_LINE(301)
												bool tmp49 = (min > best);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(301)
												if ((tmp49)){
													HX_STACK_LINE(301)
													best = min;
													HX_STACK_LINE(301)
													a2 = a;
													HX_STACK_LINE(301)
													besti = (int)2;
												}
											}
											else{
												HX_STACK_LINE(301)
												bool tmp49 = (best < (int)0);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(301)
												bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(301)
												if ((tmp49)){
													HX_STACK_LINE(301)
													tmp50 = (min > best);
												}
												else{
													HX_STACK_LINE(301)
													tmp50 = false;
												}
												HX_STACK_LINE(301)
												if ((tmp50)){
													HX_STACK_LINE(301)
													best = min;
													HX_STACK_LINE(301)
													a2 = a;
													HX_STACK_LINE(301)
													besti = (int)2;
												}
											}
										}
										HX_STACK_LINE(301)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(301)
								bool tmp44 = (best < upperBound);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(301)
								if ((tmp44)){
									HX_STACK_LINE(301)
									::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
									HX_STACK_LINE(301)
									::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
									HX_STACK_LINE(301)
									::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
									HX_STACK_LINE(301)
									bool tmp45 = (besti == (int)1);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(301)
									if ((tmp45)){
										HX_STACK_LINE(301)
										q1 = p1;
										HX_STACK_LINE(301)
										q2 = p2;
										HX_STACK_LINE(301)
										ax = a1;
									}
									else{
										HX_STACK_LINE(301)
										q1 = p2;
										HX_STACK_LINE(301)
										q2 = p1;
										HX_STACK_LINE(301)
										ax = a2;
										HX_STACK_LINE(301)
										::zpp_nape::geom::ZPP_Vec2 tmp46 = w1;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(301)
										w1 = w2;
										HX_STACK_LINE(301)
										w2 = tmp46;
										HX_STACK_LINE(301)
										bool tmp47 = swapped;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(301)
										bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(301)
										swapped = tmp48;
									}
									HX_STACK_LINE(301)
									::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
									HX_STACK_LINE(301)
									Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
									HX_STACK_LINE(301)
									{
										HX_STACK_LINE(301)
										::zpp_nape::util::ZNPNode_ZPP_Edge tmp46 = q2->edges->head;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(301)
										::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp46;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(301)
										while((true)){
											HX_STACK_LINE(301)
											bool tmp47 = (cx_ite != null());		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(301)
											bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(301)
											if ((tmp48)){
												HX_STACK_LINE(301)
												break;
											}
											HX_STACK_LINE(301)
											::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float tmp49 = (ax->gnormx * a->gnormx);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(301)
												Float tmp50 = (ax->gnormy * a->gnormy);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(301)
												Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(301)
												Float k = tmp51;		HX_STACK_VAR(k,"k");
												HX_STACK_LINE(301)
												bool tmp52 = (k < min);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(301)
												if ((tmp52)){
													HX_STACK_LINE(301)
													min = k;
													HX_STACK_LINE(301)
													ay = a;
												}
											}
											HX_STACK_LINE(301)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(301)
									bool tmp46 = swapped;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(301)
									if ((tmp46)){
										HX_STACK_LINE(301)
										Float tmp47 = ax->gnormx;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(301)
										Float tmp48 = -(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(301)
										axis->x = tmp48;
										HX_STACK_LINE(301)
										Float tmp49 = ax->gnormy;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(301)
										Float tmp50 = -(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(301)
										axis->y = tmp50;
										HX_STACK_LINE(301)
										{
										}
									}
									else{
										HX_STACK_LINE(301)
										axis->x = ax->gnormx;
										HX_STACK_LINE(301)
										axis->y = ax->gnormy;
										HX_STACK_LINE(301)
										{
										}
									}
									HX_STACK_LINE(301)
									bool tmp47 = (best >= (int)0);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(301)
									if ((tmp47)){
										HX_STACK_LINE(301)
										::zpp_nape::geom::ZPP_Vec2 v0 = ax->gp0;		HX_STACK_VAR(v0,"v0");
										HX_STACK_LINE(301)
										::zpp_nape::geom::ZPP_Vec2 v1 = ax->gp1;		HX_STACK_VAR(v1,"v1");
										HX_STACK_LINE(301)
										::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
										HX_STACK_LINE(301)
										::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
										HX_STACK_LINE(301)
										Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
										HX_STACK_LINE(301)
										Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
										HX_STACK_LINE(301)
										Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
										HX_STACK_LINE(301)
										Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float tmp48 = (v1->x - v0->x);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(301)
											vx = tmp48;
											HX_STACK_LINE(301)
											Float tmp49 = (v1->y - v0->y);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(301)
											vy = tmp49;
										}
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float tmp48 = (q11->x - q0->x);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(301)
											qx = tmp48;
											HX_STACK_LINE(301)
											Float tmp49 = (q11->y - q0->y);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(301)
											qy = tmp49;
										}
										HX_STACK_LINE(301)
										Float tmp48 = (vx * vx);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(301)
										Float tmp49 = (vy * vy);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(301)
										Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(301)
										Float tmp51 = (Float((int)1) / Float(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(301)
										Float vdot = tmp51;		HX_STACK_VAR(vdot,"vdot");
										HX_STACK_LINE(301)
										Float tmp52 = (qx * qx);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(301)
										Float tmp53 = (qy * qy);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(301)
										Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(301)
										Float tmp55 = (Float((int)1) / Float(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(301)
										Float qdot = tmp55;		HX_STACK_VAR(qdot,"qdot");
										HX_STACK_LINE(301)
										Float tmp56 = vx;		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(301)
										Float tmp57 = (v0->x - q0->x);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(301)
										Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(301)
										Float tmp59 = vy;		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(301)
										Float tmp60 = (v0->y - q0->y);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(301)
										Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(301)
										Float tmp62 = (tmp58 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(301)
										Float tmp63 = -(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(301)
										Float tmp64 = vdot;		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(301)
										Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(301)
										Float t1 = tmp65;		HX_STACK_VAR(t1,"t1");
										HX_STACK_LINE(301)
										Float tmp66 = vx;		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(301)
										Float tmp67 = (v0->x - q11->x);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(301)
										Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(301)
										Float tmp69 = vy;		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(301)
										Float tmp70 = (v0->y - q11->y);		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(301)
										Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(301)
										Float tmp72 = (tmp68 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(301)
										Float tmp73 = -(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(301)
										Float tmp74 = vdot;		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(301)
										Float tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(301)
										Float t2 = tmp75;		HX_STACK_VAR(t2,"t2");
										HX_STACK_LINE(301)
										Float tmp76 = qx;		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(301)
										Float tmp77 = (q0->x - v0->x);		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(301)
										Float tmp78 = (tmp76 * tmp77);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(301)
										Float tmp79 = qy;		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(301)
										Float tmp80 = (q0->y - v0->y);		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(301)
										Float tmp81 = (tmp79 * tmp80);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(301)
										Float tmp82 = (tmp78 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(301)
										Float tmp83 = -(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(301)
										Float tmp84 = qdot;		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(301)
										Float tmp85 = (tmp83 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(301)
										Float s12 = tmp85;		HX_STACK_VAR(s12,"s12");
										HX_STACK_LINE(301)
										Float tmp86 = qx;		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(301)
										Float tmp87 = (q0->x - v1->x);		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(301)
										Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(301)
										Float tmp89 = qy;		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(301)
										Float tmp90 = (q0->y - v1->y);		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(301)
										Float tmp91 = (tmp89 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(301)
										Float tmp92 = (tmp88 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(301)
										Float tmp93 = -(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(301)
										Float tmp94 = qdot;		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(301)
										Float tmp95 = (tmp93 * tmp94);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(301)
										Float s22 = tmp95;		HX_STACK_VAR(s22,"s22");
										HX_STACK_LINE(301)
										bool tmp96 = (t1 < (int)0);		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(301)
										if ((tmp96)){
											HX_STACK_LINE(301)
											t1 = (int)0;
										}
										else{
											HX_STACK_LINE(301)
											bool tmp97 = (t1 > (int)1);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(301)
											if ((tmp97)){
												HX_STACK_LINE(301)
												t1 = (int)1;
											}
										}
										HX_STACK_LINE(301)
										bool tmp97 = (t2 < (int)0);		HX_STACK_VAR(tmp97,"tmp97");
										HX_STACK_LINE(301)
										if ((tmp97)){
											HX_STACK_LINE(301)
											t2 = (int)0;
										}
										else{
											HX_STACK_LINE(301)
											bool tmp98 = (t2 > (int)1);		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(301)
											if ((tmp98)){
												HX_STACK_LINE(301)
												t2 = (int)1;
											}
										}
										HX_STACK_LINE(301)
										bool tmp98 = (s12 < (int)0);		HX_STACK_VAR(tmp98,"tmp98");
										HX_STACK_LINE(301)
										if ((tmp98)){
											HX_STACK_LINE(301)
											s12 = (int)0;
										}
										else{
											HX_STACK_LINE(301)
											bool tmp99 = (s12 > (int)1);		HX_STACK_VAR(tmp99,"tmp99");
											HX_STACK_LINE(301)
											if ((tmp99)){
												HX_STACK_LINE(301)
												s12 = (int)1;
											}
										}
										HX_STACK_LINE(301)
										bool tmp99 = (s22 < (int)0);		HX_STACK_VAR(tmp99,"tmp99");
										HX_STACK_LINE(301)
										if ((tmp99)){
											HX_STACK_LINE(301)
											s22 = (int)0;
										}
										else{
											HX_STACK_LINE(301)
											bool tmp100 = (s22 > (int)1);		HX_STACK_VAR(tmp100,"tmp100");
											HX_STACK_LINE(301)
											if ((tmp100)){
												HX_STACK_LINE(301)
												s22 = (int)1;
											}
										}
										HX_STACK_LINE(301)
										Float f1x = ((Float)0.0);		HX_STACK_VAR(f1x,"f1x");
										HX_STACK_LINE(301)
										Float f1y = ((Float)0.0);		HX_STACK_VAR(f1y,"f1y");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float t = t1;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											Float tmp100 = v0->x;		HX_STACK_VAR(tmp100,"tmp100");
											HX_STACK_LINE(301)
											Float tmp101 = (vx * t);		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(301)
											Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(301)
											f1x = tmp102;
											HX_STACK_LINE(301)
											Float tmp103 = v0->y;		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(301)
											Float tmp104 = (vy * t);		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(301)
											Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(301)
											f1y = tmp105;
										}
										HX_STACK_LINE(301)
										Float f2x = ((Float)0.0);		HX_STACK_VAR(f2x,"f2x");
										HX_STACK_LINE(301)
										Float f2y = ((Float)0.0);		HX_STACK_VAR(f2y,"f2y");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float t = t2;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											Float tmp100 = v0->x;		HX_STACK_VAR(tmp100,"tmp100");
											HX_STACK_LINE(301)
											Float tmp101 = (vx * t);		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(301)
											Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(301)
											f2x = tmp102;
											HX_STACK_LINE(301)
											Float tmp103 = v0->y;		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(301)
											Float tmp104 = (vy * t);		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(301)
											Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(301)
											f2y = tmp105;
										}
										HX_STACK_LINE(301)
										Float g1x = ((Float)0.0);		HX_STACK_VAR(g1x,"g1x");
										HX_STACK_LINE(301)
										Float g1y = ((Float)0.0);		HX_STACK_VAR(g1y,"g1y");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float t = s12;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											Float tmp100 = q0->x;		HX_STACK_VAR(tmp100,"tmp100");
											HX_STACK_LINE(301)
											Float tmp101 = (qx * t);		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(301)
											Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(301)
											g1x = tmp102;
											HX_STACK_LINE(301)
											Float tmp103 = q0->y;		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(301)
											Float tmp104 = (qy * t);		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(301)
											Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(301)
											g1y = tmp105;
										}
										HX_STACK_LINE(301)
										Float g2x = ((Float)0.0);		HX_STACK_VAR(g2x,"g2x");
										HX_STACK_LINE(301)
										Float g2y = ((Float)0.0);		HX_STACK_VAR(g2y,"g2y");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float t = s22;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(301)
											Float tmp100 = q0->x;		HX_STACK_VAR(tmp100,"tmp100");
											HX_STACK_LINE(301)
											Float tmp101 = (qx * t);		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(301)
											Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(301)
											g2x = tmp102;
											HX_STACK_LINE(301)
											Float tmp103 = q0->y;		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(301)
											Float tmp104 = (qy * t);		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(301)
											Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(301)
											g2y = tmp105;
										}
										HX_STACK_LINE(301)
										Float tmp100;		HX_STACK_VAR(tmp100,"tmp100");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(301)
											Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float tmp101 = (f1x - q0->x);		HX_STACK_VAR(tmp101,"tmp101");
												HX_STACK_LINE(301)
												dx = tmp101;
												HX_STACK_LINE(301)
												Float tmp102 = (f1y - q0->y);		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(301)
												dy = tmp102;
											}
											HX_STACK_LINE(301)
											Float tmp101 = (dx * dx);		HX_STACK_VAR(tmp101,"tmp101");
											HX_STACK_LINE(301)
											Float tmp102 = (dy * dy);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(301)
											tmp100 = (tmp101 + tmp102);
										}
										HX_STACK_LINE(301)
										Float d1 = tmp100;		HX_STACK_VAR(d1,"d1");
										HX_STACK_LINE(301)
										Float tmp101;		HX_STACK_VAR(tmp101,"tmp101");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(301)
											Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float tmp102 = (f2x - q11->x);		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(301)
												dx = tmp102;
												HX_STACK_LINE(301)
												Float tmp103 = (f2y - q11->y);		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(301)
												dy = tmp103;
											}
											HX_STACK_LINE(301)
											Float tmp102 = (dx * dx);		HX_STACK_VAR(tmp102,"tmp102");
											HX_STACK_LINE(301)
											Float tmp103 = (dy * dy);		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(301)
											tmp101 = (tmp102 + tmp103);
										}
										HX_STACK_LINE(301)
										Float d2 = tmp101;		HX_STACK_VAR(d2,"d2");
										HX_STACK_LINE(301)
										Float tmp102;		HX_STACK_VAR(tmp102,"tmp102");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(301)
											Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float tmp103 = (g1x - v0->x);		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(301)
												dx = tmp103;
												HX_STACK_LINE(301)
												Float tmp104 = (g1y - v0->y);		HX_STACK_VAR(tmp104,"tmp104");
												HX_STACK_LINE(301)
												dy = tmp104;
											}
											HX_STACK_LINE(301)
											Float tmp103 = (dx * dx);		HX_STACK_VAR(tmp103,"tmp103");
											HX_STACK_LINE(301)
											Float tmp104 = (dy * dy);		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(301)
											tmp102 = (tmp103 + tmp104);
										}
										HX_STACK_LINE(301)
										Float e1 = tmp102;		HX_STACK_VAR(e1,"e1");
										HX_STACK_LINE(301)
										Float tmp103;		HX_STACK_VAR(tmp103,"tmp103");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(301)
											Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float tmp104 = (g2x - v1->x);		HX_STACK_VAR(tmp104,"tmp104");
												HX_STACK_LINE(301)
												dx = tmp104;
												HX_STACK_LINE(301)
												Float tmp105 = (g2y - v1->y);		HX_STACK_VAR(tmp105,"tmp105");
												HX_STACK_LINE(301)
												dy = tmp105;
											}
											HX_STACK_LINE(301)
											Float tmp104 = (dx * dx);		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(301)
											Float tmp105 = (dy * dy);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(301)
											tmp103 = (tmp104 + tmp105);
										}
										HX_STACK_LINE(301)
										Float e2 = tmp103;		HX_STACK_VAR(e2,"e2");
										HX_STACK_LINE(301)
										Float minfx = ((Float)0.0);		HX_STACK_VAR(minfx,"minfx");
										HX_STACK_LINE(301)
										Float minfy = ((Float)0.0);		HX_STACK_VAR(minfy,"minfy");
										HX_STACK_LINE(301)
										::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
										HX_STACK_LINE(301)
										bool tmp104 = (d1 < d2);		HX_STACK_VAR(tmp104,"tmp104");
										HX_STACK_LINE(301)
										if ((tmp104)){
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												minfx = f1x;
												HX_STACK_LINE(301)
												minfy = f1y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											minq = q0;
										}
										else{
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												minfx = f2x;
												HX_STACK_LINE(301)
												minfy = f2y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											minq = q11;
											HX_STACK_LINE(301)
											d1 = d2;
										}
										HX_STACK_LINE(301)
										Float mingx = ((Float)0.0);		HX_STACK_VAR(mingx,"mingx");
										HX_STACK_LINE(301)
										Float mingy = ((Float)0.0);		HX_STACK_VAR(mingy,"mingy");
										HX_STACK_LINE(301)
										::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
										HX_STACK_LINE(301)
										bool tmp105 = (e1 < e2);		HX_STACK_VAR(tmp105,"tmp105");
										HX_STACK_LINE(301)
										if ((tmp105)){
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												mingx = g1x;
												HX_STACK_LINE(301)
												mingy = g1y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											minv = v0;
										}
										else{
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												mingx = g2x;
												HX_STACK_LINE(301)
												mingy = g2y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											minv = v1;
											HX_STACK_LINE(301)
											e1 = e2;
										}
										HX_STACK_LINE(301)
										bool tmp106 = (d1 < e1);		HX_STACK_VAR(tmp106,"tmp106");
										HX_STACK_LINE(301)
										if ((tmp106)){
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												w1->x = minfx;
												HX_STACK_LINE(301)
												w1->y = minfy;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												w2->x = minq->x;
												HX_STACK_LINE(301)
												w2->y = minq->y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											Float tmp107 = d1;		HX_STACK_VAR(tmp107,"tmp107");
											HX_STACK_LINE(301)
											Float tmp108 = ::Math_obj::sqrt(tmp107);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(301)
											best = tmp108;
										}
										else{
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												w2->x = mingx;
												HX_STACK_LINE(301)
												w2->y = mingy;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												w1->x = minv->x;
												HX_STACK_LINE(301)
												w1->y = minv->y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											Float tmp107 = e1;		HX_STACK_VAR(tmp107,"tmp107");
											HX_STACK_LINE(301)
											Float tmp108 = ::Math_obj::sqrt(tmp107);		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(301)
											best = tmp108;
										}
										HX_STACK_LINE(301)
										bool tmp107 = (best != (int)0);		HX_STACK_VAR(tmp107,"tmp107");
										HX_STACK_LINE(301)
										if ((tmp107)){
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float tmp108 = (w2->x - w1->x);		HX_STACK_VAR(tmp108,"tmp108");
												HX_STACK_LINE(301)
												axis->x = tmp108;
												HX_STACK_LINE(301)
												Float tmp109 = (w2->y - w1->y);		HX_STACK_VAR(tmp109,"tmp109");
												HX_STACK_LINE(301)
												axis->y = tmp109;
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float tmp108 = (Float(((Float)1.0)) / Float(best));		HX_STACK_VAR(tmp108,"tmp108");
												HX_STACK_LINE(301)
												Float t = tmp108;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(301)
												hx::MultEq(axis->x,t);
												HX_STACK_LINE(301)
												hx::MultEq(axis->y,t);
											}
											HX_STACK_LINE(301)
											bool tmp108 = swapped;		HX_STACK_VAR(tmp108,"tmp108");
											HX_STACK_LINE(301)
											if ((tmp108)){
												HX_STACK_LINE(301)
												Float tmp109 = axis->x;		HX_STACK_VAR(tmp109,"tmp109");
												HX_STACK_LINE(301)
												Float tmp110 = -(tmp109);		HX_STACK_VAR(tmp110,"tmp110");
												HX_STACK_LINE(301)
												axis->x = tmp110;
												HX_STACK_LINE(301)
												Float tmp111 = axis->y;		HX_STACK_VAR(tmp111,"tmp111");
												HX_STACK_LINE(301)
												Float tmp112 = -(tmp111);		HX_STACK_VAR(tmp112,"tmp112");
												HX_STACK_LINE(301)
												axis->y = tmp112;
											}
										}
										HX_STACK_LINE(301)
										tmp29 = best;
									}
									else{
										HX_STACK_LINE(301)
										Float c0x = ((Float)0.0);		HX_STACK_VAR(c0x,"c0x");
										HX_STACK_LINE(301)
										Float c0y = ((Float)0.0);		HX_STACK_VAR(c0y,"c0y");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float tmp48 = ay->gp0->x;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(301)
											c0x = tmp48;
											HX_STACK_LINE(301)
											Float tmp49 = ay->gp0->y;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(301)
											c0y = tmp49;
											HX_STACK_LINE(301)
											{
											}
										}
										HX_STACK_LINE(301)
										Float c1x = ((Float)0.0);		HX_STACK_VAR(c1x,"c1x");
										HX_STACK_LINE(301)
										Float c1y = ((Float)0.0);		HX_STACK_VAR(c1y,"c1y");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float tmp48 = ay->gp1->x;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(301)
											c1x = tmp48;
											HX_STACK_LINE(301)
											Float tmp49 = ay->gp1->y;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(301)
											c1y = tmp49;
											HX_STACK_LINE(301)
											{
											}
										}
										HX_STACK_LINE(301)
										Float dvx = ((Float)0.0);		HX_STACK_VAR(dvx,"dvx");
										HX_STACK_LINE(301)
										Float dvy = ((Float)0.0);		HX_STACK_VAR(dvy,"dvy");
										HX_STACK_LINE(301)
										{
											HX_STACK_LINE(301)
											Float tmp48 = (c1x - c0x);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(301)
											dvx = tmp48;
											HX_STACK_LINE(301)
											Float tmp49 = (c1y - c0y);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(301)
											dvy = tmp49;
										}
										HX_STACK_LINE(301)
										Float tmp48 = (ax->gnormy * c0x);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(301)
										Float tmp49 = (ax->gnormx * c0y);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(301)
										Float tmp50 = (tmp48 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(301)
										Float d0 = tmp50;		HX_STACK_VAR(d0,"d0");
										HX_STACK_LINE(301)
										Float tmp51 = (ax->gnormy * c1x);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(301)
										Float tmp52 = (ax->gnormx * c1y);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(301)
										Float tmp53 = (tmp51 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(301)
										Float d1 = tmp53;		HX_STACK_VAR(d1,"d1");
										HX_STACK_LINE(301)
										Float tmp54 = (d1 - d0);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(301)
										Float tmp55 = (Float((int)1) / Float(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(301)
										Float den = tmp55;		HX_STACK_VAR(den,"den");
										HX_STACK_LINE(301)
										Float tmp56 = ax->tp1;		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(301)
										Float tmp57 = -(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(301)
										Float tmp58 = d0;		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(301)
										Float tmp59 = (tmp57 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(301)
										Float tmp60 = den;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(301)
										Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(301)
										Float t = tmp61;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(301)
										Float tmp62 = t;		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(301)
										Float tmp63 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(301)
										bool tmp64 = (tmp62 > tmp63);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(301)
										if ((tmp64)){
											HX_STACK_LINE(301)
											Float t1 = t;		HX_STACK_VAR(t1,"t1");
											HX_STACK_LINE(301)
											Float tmp65 = (dvx * t1);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(301)
											hx::AddEq(c0x,tmp65);
											HX_STACK_LINE(301)
											Float tmp66 = (dvy * t1);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(301)
											hx::AddEq(c0y,tmp66);
										}
										HX_STACK_LINE(301)
										Float tmp65 = ax->tp0;		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(301)
										Float tmp66 = -(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(301)
										Float tmp67 = d1;		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(301)
										Float tmp68 = (tmp66 - tmp67);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(301)
										Float tmp69 = den;		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(301)
										Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(301)
										Float t1 = tmp70;		HX_STACK_VAR(t1,"t1");
										HX_STACK_LINE(301)
										Float tmp71 = t1;		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(301)
										Float tmp72 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(301)
										Float tmp73 = -(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(301)
										bool tmp74 = (tmp71 < tmp73);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(301)
										if ((tmp74)){
											HX_STACK_LINE(301)
											Float t2 = t1;		HX_STACK_VAR(t2,"t2");
											HX_STACK_LINE(301)
											Float tmp75 = (dvx * t2);		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(301)
											hx::AddEq(c1x,tmp75);
											HX_STACK_LINE(301)
											Float tmp76 = (dvy * t2);		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(301)
											hx::AddEq(c1y,tmp76);
										}
										HX_STACK_LINE(301)
										Float tmp75 = (c0x * ax->gnormx);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(301)
										Float tmp76 = (c0y * ax->gnormy);		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(301)
										Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(301)
										Float tmp78 = ax->gprojection;		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(301)
										Float tmp79 = (tmp77 - tmp78);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(301)
										Float c0d = tmp79;		HX_STACK_VAR(c0d,"c0d");
										HX_STACK_LINE(301)
										Float tmp80 = (c1x * ax->gnormx);		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(301)
										Float tmp81 = (c1y * ax->gnormy);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(301)
										Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(301)
										Float tmp83 = ax->gprojection;		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(301)
										Float tmp84 = (tmp82 - tmp83);		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(301)
										Float c1d = tmp84;		HX_STACK_VAR(c1d,"c1d");
										HX_STACK_LINE(301)
										bool tmp85 = (c0d < c1d);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(301)
										if ((tmp85)){
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												w2->x = c0x;
												HX_STACK_LINE(301)
												w2->y = c0y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float tmp86 = c0d;		HX_STACK_VAR(tmp86,"tmp86");
												HX_STACK_LINE(301)
												Float tmp87 = -(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
												HX_STACK_LINE(301)
												Float t2 = tmp87;		HX_STACK_VAR(t2,"t2");
												HX_STACK_LINE(301)
												Float tmp88 = w2->x;		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(301)
												Float tmp89 = (ax->gnormx * t2);		HX_STACK_VAR(tmp89,"tmp89");
												HX_STACK_LINE(301)
												Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
												HX_STACK_LINE(301)
												w1->x = tmp90;
												HX_STACK_LINE(301)
												Float tmp91 = w2->y;		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(301)
												Float tmp92 = (ax->gnormy * t2);		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(301)
												Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(301)
												w1->y = tmp93;
											}
											HX_STACK_LINE(301)
											tmp29 = c0d;
										}
										else{
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												w2->x = c1x;
												HX_STACK_LINE(301)
												w2->y = c1y;
												HX_STACK_LINE(301)
												{
												}
											}
											HX_STACK_LINE(301)
											{
												HX_STACK_LINE(301)
												Float tmp86 = c1d;		HX_STACK_VAR(tmp86,"tmp86");
												HX_STACK_LINE(301)
												Float tmp87 = -(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
												HX_STACK_LINE(301)
												Float t2 = tmp87;		HX_STACK_VAR(t2,"t2");
												HX_STACK_LINE(301)
												Float tmp88 = w2->x;		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(301)
												Float tmp89 = (ax->gnormx * t2);		HX_STACK_VAR(tmp89,"tmp89");
												HX_STACK_LINE(301)
												Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
												HX_STACK_LINE(301)
												w1->x = tmp90;
												HX_STACK_LINE(301)
												Float tmp91 = w2->y;		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(301)
												Float tmp92 = (ax->gnormy * t2);		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(301)
												Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(301)
												w1->y = tmp93;
											}
											HX_STACK_LINE(301)
											tmp29 = c1d;
										}
									}
								}
								else{
									HX_STACK_LINE(301)
									tmp29 = upperBound;
								}
							}
							else{
								HX_STACK_LINE(301)
								tmp29 = upperBound;
							}
						}
					}
				}
				HX_STACK_LINE(301)
				Float tmp30 = negRadius;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(301)
				Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(301)
				Float sep1 = tmp31;		HX_STACK_VAR(sep1,"sep1");
				HX_STACK_LINE(302)
				Float tmp32 = (deltax * axis->x);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(302)
				Float tmp33 = (deltay * axis->y);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(302)
				Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(302)
				Float dot1 = tmp34;		HX_STACK_VAR(dot1,"dot1");
				HX_STACK_LINE(303)
				Float tmp35 = sep1;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(303)
				Float tmp36 = ::nape::Config_obj::distanceThresholdCCD;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(303)
				bool tmp37 = (tmp35 < tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(303)
				if ((tmp37)){
					HX_STACK_LINE(304)
					bool tmp38 = userAPI;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(304)
					if ((tmp38)){
						HX_STACK_LINE(305)
						break;
					}
					HX_STACK_LINE(307)
					Float d1x = ((Float)0.0);		HX_STACK_VAR(d1x,"d1x");
					HX_STACK_LINE(308)
					Float d1y = ((Float)0.0);		HX_STACK_VAR(d1y,"d1y");
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(310)
						Float tmp39 = (c1->x - b1->posx);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(310)
						d1x = tmp39;
						HX_STACK_LINE(311)
						Float tmp40 = (c1->y - b1->posy);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(311)
						d1y = tmp40;
					}
					HX_STACK_LINE(313)
					Float d2x = ((Float)0.0);		HX_STACK_VAR(d2x,"d2x");
					HX_STACK_LINE(314)
					Float d2y = ((Float)0.0);		HX_STACK_VAR(d2y,"d2y");
					HX_STACK_LINE(315)
					{
						HX_STACK_LINE(316)
						Float tmp39 = (c2->x - b2->posx);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(316)
						d2x = tmp39;
						HX_STACK_LINE(317)
						Float tmp40 = (c2->y - b2->posy);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(317)
						d2y = tmp40;
					}
					HX_STACK_LINE(319)
					Float tmp39 = dot1;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(319)
					Float tmp40 = b1->sweep_angvel;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(319)
					Float tmp41 = (axis->y * d1x);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(319)
					Float tmp42 = (axis->x * d1y);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(319)
					Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(319)
					Float tmp44 = (tmp40 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(319)
					Float tmp45 = (tmp39 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(319)
					Float tmp46 = b2->sweep_angvel;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(319)
					Float tmp47 = (axis->y * d2x);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(319)
					Float tmp48 = (axis->x * d2y);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(319)
					Float tmp49 = (tmp47 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(319)
					Float tmp50 = (tmp46 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(319)
					Float tmp51 = (tmp45 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(319)
					Float proj = tmp51;		HX_STACK_VAR(proj,"proj");
					HX_STACK_LINE(320)
					bool tmp52 = (proj > (int)0);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(320)
					if ((tmp52)){
						HX_STACK_LINE(321)
						toi->slipped = true;
					}
					HX_STACK_LINE(323)
					bool tmp53 = (proj <= (int)0);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(323)
					bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(323)
					bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(323)
					if ((tmp54)){
						HX_STACK_LINE(323)
						Float tmp56 = sep1;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(323)
						Float tmp57 = ::nape::Config_obj::distanceThresholdCCD;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(323)
						Float tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(323)
						Float tmp59 = (tmp58 * ((Float)0.5));		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(323)
						Float tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(323)
						tmp55 = (tmp56 < tmp60);
					}
					else{
						HX_STACK_LINE(323)
						tmp55 = true;
					}
					HX_STACK_LINE(323)
					if ((tmp55)){
						HX_STACK_LINE(324)
						break;
					}
				}
				HX_STACK_LINE(327)
				curTOI = (int)-1;
				HX_STACK_LINE(328)
				break;
			}
			HX_STACK_LINE(330)
			int tmp29 = ++(curIter);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(330)
			bool tmp30 = (tmp29 >= (int)40);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(330)
			if ((tmp30)){
				HX_STACK_LINE(331)
				bool tmp31 = (sep > negRadius);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(331)
				if ((tmp31)){
					HX_STACK_LINE(332)
					toi->failed = true;
				}
				HX_STACK_LINE(334)
				break;
			}
		}
		HX_STACK_LINE(337)
		toi->toi = curTOI;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ZPP_SweepDistance_obj,dynamicSweep,(void))

Void ZPP_SweepDistance_obj::staticSweep( ::zpp_nape::geom::ZPP_ToiEvent toi,Float timeStep,Float lowerBound,Float negRadius){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_SweepDistance","staticSweep",0x284911bb,"zpp_nape.geom.ZPP_SweepDistance.staticSweep","zpp_nape/geom/SweepDistance.hx",339,0x2645f2ee)
		HX_STACK_ARG(toi,"toi")
		HX_STACK_ARG(timeStep,"timeStep")
		HX_STACK_ARG(lowerBound,"lowerBound")
		HX_STACK_ARG(negRadius,"negRadius")
		HX_STACK_LINE(340)
		::zpp_nape::shape::ZPP_Shape s1 = toi->s1;		HX_STACK_VAR(s1,"s1");
		HX_STACK_LINE(341)
		::zpp_nape::shape::ZPP_Shape s2 = toi->s2;		HX_STACK_VAR(s2,"s2");
		HX_STACK_LINE(342)
		::zpp_nape::phys::ZPP_Body b1 = s1->body;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(343)
		::zpp_nape::phys::ZPP_Body b2 = s2->body;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(344)
		Float deltax = ((Float)0.0);		HX_STACK_VAR(deltax,"deltax");
		HX_STACK_LINE(345)
		Float deltay = ((Float)0.0);		HX_STACK_VAR(deltay,"deltay");
		HX_STACK_LINE(346)
		{
			HX_STACK_LINE(347)
			Float tmp = b1->velx;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(347)
			Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(347)
			deltax = tmp1;
			HX_STACK_LINE(348)
			Float tmp2 = b1->vely;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(348)
			Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(348)
			deltay = tmp3;
			HX_STACK_LINE(357)
			{
			}
		}
		HX_STACK_LINE(366)
		Float ang1 = b1->sweep_angvel;		HX_STACK_VAR(ang1,"ang1");
		HX_STACK_LINE(367)
		bool tmp = (ang1 < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(367)
		if ((tmp)){
			HX_STACK_LINE(367)
			Float tmp1 = ang1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(367)
			Float tmp2 = -(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(367)
			ang1 = tmp2;
		}
		HX_STACK_LINE(368)
		Float tmp1 = (s1->sweepCoef * ang1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(368)
		Float angBias = tmp1;		HX_STACK_VAR(angBias,"angBias");
		HX_STACK_LINE(369)
		::zpp_nape::geom::ZPP_Vec2 c1 = toi->c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(370)
		::zpp_nape::geom::ZPP_Vec2 c2 = toi->c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(371)
		::zpp_nape::geom::ZPP_Vec2 axis = toi->axis;		HX_STACK_VAR(axis,"axis");
		HX_STACK_LINE(372)
		Float curTOI = lowerBound;		HX_STACK_VAR(curTOI,"curTOI");
		HX_STACK_LINE(373)
		int curIter = (int)0;		HX_STACK_VAR(curIter,"curIter");
		HX_STACK_LINE(374)
		while((true)){
			HX_STACK_LINE(391)
			{
				HX_STACK_LINE(391)
				Float tmp2 = (curTOI * timeStep);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(391)
				Float dt = tmp2;		HX_STACK_VAR(dt,"dt");
				HX_STACK_LINE(391)
				Float tmp3 = (dt - b1->sweepTime);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(391)
				Float delta = tmp3;		HX_STACK_VAR(delta,"delta");
				HX_STACK_LINE(391)
				bool tmp4 = (delta != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(391)
				if ((tmp4)){
					HX_STACK_LINE(391)
					b1->sweepTime = dt;
					HX_STACK_LINE(391)
					{
						HX_STACK_LINE(391)
						Float t = delta;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(391)
						Float tmp5 = (b1->velx * t);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(391)
						hx::AddEq(b1->posx,tmp5);
						HX_STACK_LINE(391)
						Float tmp6 = (b1->vely * t);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(391)
						hx::AddEq(b1->posy,tmp6);
					}
					HX_STACK_LINE(391)
					bool tmp5 = (b1->angvel != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(391)
					if ((tmp5)){
						HX_STACK_LINE(391)
						Float tmp6 = (b1->sweep_angvel * delta);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(391)
						Float dr = tmp6;		HX_STACK_VAR(dr,"dr");
						HX_STACK_LINE(391)
						hx::AddEq(b1->rot,dr);
						HX_STACK_LINE(391)
						Float tmp7 = (dr * dr);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(391)
						bool tmp8 = (tmp7 > ((Float)0.0001));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(391)
						if ((tmp8)){
							HX_STACK_LINE(391)
							Float tmp9 = b1->rot;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(391)
							Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(391)
							b1->axisx = tmp10;
							HX_STACK_LINE(391)
							Float tmp11 = b1->rot;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(391)
							Float tmp12 = ::Math_obj::cos(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(391)
							b1->axisy = tmp12;
							HX_STACK_LINE(391)
							Dynamic();
						}
						else{
							HX_STACK_LINE(391)
							Float tmp9 = (dr * dr);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(391)
							Float d2 = tmp9;		HX_STACK_VAR(d2,"d2");
							HX_STACK_LINE(391)
							Float tmp10 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(391)
							Float tmp11 = ((int)1 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(391)
							Float p = tmp11;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(391)
							Float tmp12 = (d2 * d2);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(391)
							Float tmp13 = (Float(tmp12) / Float((int)8));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(391)
							Float tmp14 = ((int)1 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(391)
							Float m = tmp14;		HX_STACK_VAR(m,"m");
							HX_STACK_LINE(391)
							Float tmp15 = (p * b1->axisx);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(391)
							Float tmp16 = (dr * b1->axisy);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(391)
							Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(391)
							Float tmp18 = m;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(391)
							Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(391)
							Float nx = tmp19;		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(391)
							Float tmp20 = (p * b1->axisy);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(391)
							Float tmp21 = (dr * b1->axisx);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(391)
							Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(391)
							Float tmp23 = m;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(391)
							Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(391)
							b1->axisy = tmp24;
							HX_STACK_LINE(391)
							b1->axisx = nx;
						}
					}
				}
			}
			HX_STACK_LINE(392)
			{
				HX_STACK_LINE(392)
				int tmp2 = s1->type;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(392)
				int tmp3 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(392)
				bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(392)
				if ((tmp4)){
					HX_STACK_LINE(392)
					Float tmp5 = b1->posx;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(392)
					Float tmp6 = (b1->axisy * s1->localCOMx);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(392)
					Float tmp7 = (b1->axisx * s1->localCOMy);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(392)
					Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(392)
					Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(392)
					s1->worldCOMx = tmp9;
					HX_STACK_LINE(392)
					Float tmp10 = b1->posy;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(392)
					Float tmp11 = (s1->localCOMx * b1->axisx);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(392)
					Float tmp12 = (s1->localCOMy * b1->axisy);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(392)
					Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(392)
					Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(392)
					s1->worldCOMy = tmp14;
				}
				else{
					HX_STACK_LINE(392)
					::zpp_nape::shape::ZPP_Polygon p = s1->polygon;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(392)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = p->lverts->next;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(392)
					::zpp_nape::geom::ZPP_Vec2 li = tmp5;		HX_STACK_VAR(li,"li");
					HX_STACK_LINE(392)
					{
						HX_STACK_LINE(392)
						::zpp_nape::geom::ZPP_Vec2 tmp6 = p->gverts->next;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(392)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp6;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(392)
						while((true)){
							HX_STACK_LINE(392)
							bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(392)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(392)
							if ((tmp8)){
								HX_STACK_LINE(392)
								break;
							}
							HX_STACK_LINE(392)
							::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(392)
							{
								HX_STACK_LINE(392)
								::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
								HX_STACK_LINE(392)
								li = li->next;
								HX_STACK_LINE(392)
								{
									HX_STACK_LINE(392)
									Float tmp9 = b1->posx;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(392)
									Float tmp10 = (b1->axisy * l->x);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(392)
									Float tmp11 = (b1->axisx * l->y);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(392)
									Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(392)
									Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(392)
									g->x = tmp13;
									HX_STACK_LINE(392)
									Float tmp14 = b1->posy;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(392)
									Float tmp15 = (l->x * b1->axisx);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(392)
									Float tmp16 = (l->y * b1->axisy);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(392)
									Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(392)
									Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(392)
									g->y = tmp18;
								}
							}
							HX_STACK_LINE(392)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(392)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp6 = p->edges->head;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(392)
					::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp6;		HX_STACK_VAR(ite,"ite");
					HX_STACK_LINE(392)
					{
						HX_STACK_LINE(392)
						::zpp_nape::geom::ZPP_Vec2 tmp7 = p->gverts->next;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(392)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp7;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(392)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(392)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(392)
						while((true)){
							HX_STACK_LINE(392)
							bool tmp8 = (cx_ite != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(392)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(392)
							if ((tmp9)){
								HX_STACK_LINE(392)
								break;
							}
							HX_STACK_LINE(392)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(392)
							{
								HX_STACK_LINE(392)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(392)
								ite = ite->next;
								HX_STACK_LINE(392)
								{
									HX_STACK_LINE(392)
									Float tmp10 = (b1->axisy * e->lnormx);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(392)
									Float tmp11 = (b1->axisx * e->lnormy);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(392)
									Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(392)
									e->gnormx = tmp12;
									HX_STACK_LINE(392)
									Float tmp13 = (e->lnormx * b1->axisx);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(392)
									Float tmp14 = (e->lnormy * b1->axisy);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(392)
									Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(392)
									e->gnormy = tmp15;
								}
								HX_STACK_LINE(392)
								Float tmp10 = (b1->posx * e->gnormx);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(392)
								Float tmp11 = (b1->posy * e->gnormy);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(392)
								Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(392)
								Float tmp13 = e->lprojection;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(392)
								Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(392)
								e->gprojection = tmp14;
								HX_STACK_LINE(392)
								Float tmp15 = (u->y * e->gnormx);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(392)
								Float tmp16 = (u->x * e->gnormy);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(392)
								Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(392)
								e->tp0 = tmp17;
								HX_STACK_LINE(392)
								Float tmp18 = (v->y * e->gnormx);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(392)
								Float tmp19 = (v->x * e->gnormy);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(392)
								Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(392)
								e->tp1 = tmp20;
							}
							HX_STACK_LINE(392)
							u = v;
							HX_STACK_LINE(392)
							cx_ite = cx_ite->next;
						}
						HX_STACK_LINE(392)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = p->gverts->next;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(392)
						::zpp_nape::geom::ZPP_Vec2 v = tmp8;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(392)
						{
							HX_STACK_LINE(392)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(392)
							ite = ite->next;
							HX_STACK_LINE(392)
							{
								HX_STACK_LINE(392)
								Float tmp9 = (b1->axisy * e->lnormx);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(392)
								Float tmp10 = (b1->axisx * e->lnormy);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(392)
								Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(392)
								e->gnormx = tmp11;
								HX_STACK_LINE(392)
								Float tmp12 = (e->lnormx * b1->axisx);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(392)
								Float tmp13 = (e->lnormy * b1->axisy);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(392)
								Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(392)
								e->gnormy = tmp14;
							}
							HX_STACK_LINE(392)
							Float tmp9 = (b1->posx * e->gnormx);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(392)
							Float tmp10 = (b1->posy * e->gnormy);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(392)
							Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(392)
							Float tmp12 = e->lprojection;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(392)
							Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(392)
							e->gprojection = tmp13;
							HX_STACK_LINE(392)
							Float tmp14 = (u->y * e->gnormx);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(392)
							Float tmp15 = (u->x * e->gnormy);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(392)
							Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(392)
							e->tp0 = tmp16;
							HX_STACK_LINE(392)
							Float tmp17 = (v->y * e->gnormx);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(392)
							Float tmp18 = (v->x * e->gnormy);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(392)
							Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(392)
							e->tp1 = tmp19;
						}
					}
				}
			}
			HX_STACK_LINE(393)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(393)
			{
				HX_STACK_LINE(393)
				::zpp_nape::shape::ZPP_Shape s11 = s1;		HX_STACK_VAR(s11,"s11");
				HX_STACK_LINE(393)
				::zpp_nape::shape::ZPP_Shape s21 = s2;		HX_STACK_VAR(s21,"s21");
				HX_STACK_LINE(393)
				::zpp_nape::geom::ZPP_Vec2 w1 = c1;		HX_STACK_VAR(w1,"w1");
				HX_STACK_LINE(393)
				::zpp_nape::geom::ZPP_Vec2 w2 = c2;		HX_STACK_VAR(w2,"w2");
				HX_STACK_LINE(393)
				Float upperBound = ((Float)1e100);		HX_STACK_VAR(upperBound,"upperBound");
				HX_STACK_LINE(393)
				int tmp3 = s11->type;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(393)
				int tmp4 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(393)
				bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(393)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(393)
				if ((tmp5)){
					HX_STACK_LINE(393)
					int tmp7 = s21->type;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(393)
					int tmp8 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(393)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(393)
					tmp6 = (tmp7 == tmp9);
				}
				else{
					HX_STACK_LINE(393)
					tmp6 = false;
				}
				HX_STACK_LINE(393)
				if ((tmp6)){
					HX_STACK_LINE(393)
					::zpp_nape::shape::ZPP_Circle c11 = s11->circle;		HX_STACK_VAR(c11,"c11");
					HX_STACK_LINE(393)
					::zpp_nape::shape::ZPP_Circle c21 = s21->circle;		HX_STACK_VAR(c21,"c21");
					HX_STACK_LINE(393)
					Float dist;		HX_STACK_VAR(dist,"dist");
					HX_STACK_LINE(393)
					{
						HX_STACK_LINE(393)
						Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
						HX_STACK_LINE(393)
						Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
						HX_STACK_LINE(393)
						{
							HX_STACK_LINE(393)
							Float tmp7 = (c21->worldCOMx - c11->worldCOMx);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(393)
							nx = tmp7;
							HX_STACK_LINE(393)
							Float tmp8 = (c21->worldCOMy - c11->worldCOMy);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(393)
							ny = tmp8;
						}
						HX_STACK_LINE(393)
						Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(393)
						{
							HX_STACK_LINE(393)
							Float tmp8 = (nx * nx);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(393)
							Float tmp9 = (ny * ny);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(393)
							Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(393)
							tmp7 = ::Math_obj::sqrt(tmp10);
						}
						HX_STACK_LINE(393)
						Float len = tmp7;		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(393)
						Float tmp8 = len;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(393)
						Float tmp9 = (c11->radius + c21->radius);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(393)
						Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(393)
						dist = tmp10;
						HX_STACK_LINE(393)
						bool tmp11 = (dist < upperBound);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(393)
						if ((tmp11)){
							HX_STACK_LINE(393)
							bool tmp12 = (len == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(393)
							if ((tmp12)){
								HX_STACK_LINE(393)
								nx = (int)1;
								HX_STACK_LINE(393)
								ny = (int)0;
								HX_STACK_LINE(393)
								{
								}
							}
							else{
								HX_STACK_LINE(393)
								Float tmp13 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(393)
								Float t = tmp13;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(393)
								hx::MultEq(nx,t);
								HX_STACK_LINE(393)
								hx::MultEq(ny,t);
							}
							HX_STACK_LINE(393)
							{
								HX_STACK_LINE(393)
								Float t = c11->radius;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(393)
								Float tmp13 = c11->worldCOMx;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(393)
								Float tmp14 = (nx * t);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(393)
								Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(393)
								w1->x = tmp15;
								HX_STACK_LINE(393)
								Float tmp16 = c11->worldCOMy;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(393)
								Float tmp17 = (ny * t);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(393)
								Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(393)
								w1->y = tmp18;
							}
							HX_STACK_LINE(393)
							{
								HX_STACK_LINE(393)
								Float tmp13 = c21->radius;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(393)
								Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(393)
								Float t = tmp14;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(393)
								Float tmp15 = c21->worldCOMx;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(393)
								Float tmp16 = (nx * t);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(393)
								Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(393)
								w2->x = tmp17;
								HX_STACK_LINE(393)
								Float tmp18 = c21->worldCOMy;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(393)
								Float tmp19 = (ny * t);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(393)
								Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(393)
								w2->y = tmp20;
							}
							HX_STACK_LINE(393)
							{
								HX_STACK_LINE(393)
								axis->x = nx;
								HX_STACK_LINE(393)
								axis->y = ny;
								HX_STACK_LINE(393)
								{
								}
							}
						}
					}
					HX_STACK_LINE(393)
					tmp2 = dist;
				}
				else{
					HX_STACK_LINE(393)
					bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
					HX_STACK_LINE(393)
					int tmp7 = s11->type;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(393)
					int tmp8 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(393)
					bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(393)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(393)
					if ((tmp9)){
						HX_STACK_LINE(393)
						int tmp11 = s21->type;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(393)
						int tmp12 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(393)
						int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(393)
						tmp10 = (tmp11 == tmp13);
					}
					else{
						HX_STACK_LINE(393)
						tmp10 = false;
					}
					HX_STACK_LINE(393)
					if ((tmp10)){
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Shape tmp11 = s11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(393)
						s11 = s21;
						HX_STACK_LINE(393)
						s21 = tmp11;
						HX_STACK_LINE(393)
						::zpp_nape::geom::ZPP_Vec2 tmp21 = w1;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(393)
						w1 = w2;
						HX_STACK_LINE(393)
						w2 = tmp21;
						HX_STACK_LINE(393)
						swapped = true;
					}
					HX_STACK_LINE(393)
					int tmp11 = s11->type;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(393)
					int tmp12 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(393)
					bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(393)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(393)
					if ((tmp13)){
						HX_STACK_LINE(393)
						int tmp15 = s21->type;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(393)
						int tmp16 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(393)
						int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(393)
						tmp14 = (tmp15 == tmp17);
					}
					else{
						HX_STACK_LINE(393)
						tmp14 = false;
					}
					HX_STACK_LINE(393)
					if ((tmp14)){
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Polygon poly = s11->polygon;		HX_STACK_VAR(poly,"poly");
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Circle circle = s21->circle;		HX_STACK_VAR(circle,"circle");
						HX_STACK_LINE(393)
						Float tmp15 = ((Float)-1e+100);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(393)
						Float best = tmp15;		HX_STACK_VAR(best,"best");
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
						HX_STACK_LINE(393)
						{
							HX_STACK_LINE(393)
							::zpp_nape::util::ZNPNode_ZPP_Edge tmp16 = poly->edges->head;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(393)
							::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp16;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(393)
							while((true)){
								HX_STACK_LINE(393)
								bool tmp17 = (cx_ite != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(393)
								bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(393)
								if ((tmp18)){
									HX_STACK_LINE(393)
									break;
								}
								HX_STACK_LINE(393)
								::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(393)
								{
									HX_STACK_LINE(393)
									Float tmp19 = (a->gnormx * circle->worldCOMx);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(393)
									Float tmp20 = (a->gnormy * circle->worldCOMy);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(393)
									Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(393)
									Float tmp22 = a->gprojection;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(393)
									Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(393)
									Float tmp24 = circle->radius;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(393)
									Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(393)
									Float dist = tmp25;		HX_STACK_VAR(dist,"dist");
									HX_STACK_LINE(393)
									bool tmp26 = (dist > upperBound);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(393)
									if ((tmp26)){
										HX_STACK_LINE(393)
										best = dist;
										HX_STACK_LINE(393)
										break;
									}
									HX_STACK_LINE(393)
									bool tmp27 = (dist > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(393)
									if ((tmp27)){
										HX_STACK_LINE(393)
										bool tmp28 = (dist > best);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(393)
										if ((tmp28)){
											HX_STACK_LINE(393)
											best = dist;
											HX_STACK_LINE(393)
											a0 = a;
										}
									}
									else{
										HX_STACK_LINE(393)
										bool tmp28 = (best < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(393)
										bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(393)
										if ((tmp28)){
											HX_STACK_LINE(393)
											tmp29 = (dist > best);
										}
										else{
											HX_STACK_LINE(393)
											tmp29 = false;
										}
										HX_STACK_LINE(393)
										if ((tmp29)){
											HX_STACK_LINE(393)
											best = dist;
											HX_STACK_LINE(393)
											a0 = a;
										}
									}
								}
								HX_STACK_LINE(393)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(393)
						bool tmp16 = (best < upperBound);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(393)
						if ((tmp16)){
							HX_STACK_LINE(393)
							::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
							HX_STACK_LINE(393)
							::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(393)
							Float tmp17 = (circle->worldCOMy * a0->gnormx);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(393)
							Float tmp18 = (circle->worldCOMx * a0->gnormy);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(393)
							Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(393)
							Float dt = tmp19;		HX_STACK_VAR(dt,"dt");
							HX_STACK_LINE(393)
							Float tmp20 = dt;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(393)
							Float tmp21 = (v0->y * a0->gnormx);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(393)
							Float tmp22 = (v0->x * a0->gnormy);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(393)
							Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(393)
							bool tmp24 = (tmp20 <= tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(393)
							if ((tmp24)){
								HX_STACK_LINE(393)
								Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(393)
								Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
								HX_STACK_LINE(393)
								{
									HX_STACK_LINE(393)
									Float tmp25 = (circle->worldCOMx - v0->x);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(393)
									nx = tmp25;
									HX_STACK_LINE(393)
									Float tmp26 = (circle->worldCOMy - v0->y);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(393)
									ny = tmp26;
								}
								HX_STACK_LINE(393)
								Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(393)
								{
									HX_STACK_LINE(393)
									Float tmp26 = (nx * nx);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(393)
									Float tmp27 = (ny * ny);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(393)
									Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(393)
									tmp25 = ::Math_obj::sqrt(tmp28);
								}
								HX_STACK_LINE(393)
								Float len = tmp25;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(393)
								Float tmp26 = len;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(393)
								Float tmp27 = circle->radius;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(393)
								Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(393)
								best = tmp28;
								HX_STACK_LINE(393)
								bool tmp29 = (best < upperBound);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(393)
								if ((tmp29)){
									HX_STACK_LINE(393)
									bool tmp30 = (len == (int)0);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(393)
									if ((tmp30)){
										HX_STACK_LINE(393)
										nx = (int)1;
										HX_STACK_LINE(393)
										ny = (int)0;
										HX_STACK_LINE(393)
										{
										}
									}
									else{
										HX_STACK_LINE(393)
										Float tmp31 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(393)
										Float t = tmp31;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										hx::MultEq(nx,t);
										HX_STACK_LINE(393)
										hx::MultEq(ny,t);
									}
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										int t = (int)0;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										Float tmp31 = v0->x;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(393)
										Float tmp32 = (nx * t);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(393)
										Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(393)
										w1->x = tmp33;
										HX_STACK_LINE(393)
										Float tmp34 = v0->y;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(393)
										Float tmp35 = (ny * t);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(393)
										Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(393)
										w1->y = tmp36;
									}
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float tmp31 = circle->radius;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(393)
										Float tmp32 = -(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(393)
										Float t = tmp32;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										Float tmp33 = circle->worldCOMx;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(393)
										Float tmp34 = (nx * t);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(393)
										Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(393)
										w2->x = tmp35;
										HX_STACK_LINE(393)
										Float tmp36 = circle->worldCOMy;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(393)
										Float tmp37 = (ny * t);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(393)
										Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(393)
										w2->y = tmp38;
									}
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										axis->x = nx;
										HX_STACK_LINE(393)
										axis->y = ny;
										HX_STACK_LINE(393)
										{
										}
									}
								}
							}
							else{
								HX_STACK_LINE(393)
								Float tmp25 = dt;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(393)
								Float tmp26 = (v1->y * a0->gnormx);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(393)
								Float tmp27 = (v1->x * a0->gnormy);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(393)
								Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(393)
								bool tmp29 = (tmp25 >= tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(393)
								if ((tmp29)){
									HX_STACK_LINE(393)
									Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(393)
									Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float tmp30 = (circle->worldCOMx - v1->x);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(393)
										nx = tmp30;
										HX_STACK_LINE(393)
										Float tmp31 = (circle->worldCOMy - v1->y);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(393)
										ny = tmp31;
									}
									HX_STACK_LINE(393)
									Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float tmp31 = (nx * nx);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(393)
										Float tmp32 = (ny * ny);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(393)
										Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(393)
										tmp30 = ::Math_obj::sqrt(tmp33);
									}
									HX_STACK_LINE(393)
									Float len = tmp30;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(393)
									Float tmp31 = len;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(393)
									Float tmp32 = circle->radius;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(393)
									Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(393)
									best = tmp33;
									HX_STACK_LINE(393)
									bool tmp34 = (best < upperBound);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(393)
									if ((tmp34)){
										HX_STACK_LINE(393)
										bool tmp35 = (len == (int)0);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(393)
										if ((tmp35)){
											HX_STACK_LINE(393)
											nx = (int)1;
											HX_STACK_LINE(393)
											ny = (int)0;
											HX_STACK_LINE(393)
											{
											}
										}
										else{
											HX_STACK_LINE(393)
											Float tmp36 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(393)
											Float t = tmp36;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(393)
											hx::MultEq(nx,t);
											HX_STACK_LINE(393)
											hx::MultEq(ny,t);
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											int t = (int)0;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(393)
											Float tmp36 = v1->x;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(393)
											Float tmp37 = (nx * t);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(393)
											Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(393)
											w1->x = tmp38;
											HX_STACK_LINE(393)
											Float tmp39 = v1->y;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(393)
											Float tmp40 = (ny * t);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(393)
											Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(393)
											w1->y = tmp41;
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float tmp36 = circle->radius;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(393)
											Float tmp37 = -(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(393)
											Float t = tmp37;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(393)
											Float tmp38 = circle->worldCOMx;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(393)
											Float tmp39 = (nx * t);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(393)
											Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(393)
											w2->x = tmp40;
											HX_STACK_LINE(393)
											Float tmp41 = circle->worldCOMy;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(393)
											Float tmp42 = (ny * t);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(393)
											Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(393)
											w2->y = tmp43;
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											axis->x = nx;
											HX_STACK_LINE(393)
											axis->y = ny;
											HX_STACK_LINE(393)
											{
											}
										}
									}
								}
								else{
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float tmp30 = circle->radius;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(393)
										Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(393)
										Float t = tmp31;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										Float tmp32 = circle->worldCOMx;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(393)
										Float tmp33 = (a0->gnormx * t);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(393)
										Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(393)
										w2->x = tmp34;
										HX_STACK_LINE(393)
										Float tmp35 = circle->worldCOMy;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(393)
										Float tmp36 = (a0->gnormy * t);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(393)
										Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(393)
										w2->y = tmp37;
									}
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float tmp30 = best;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(393)
										Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(393)
										Float t = tmp31;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										Float tmp32 = w2->x;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(393)
										Float tmp33 = (a0->gnormx * t);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(393)
										Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(393)
										w1->x = tmp34;
										HX_STACK_LINE(393)
										Float tmp35 = w2->y;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(393)
										Float tmp36 = (a0->gnormy * t);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(393)
										Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(393)
										w1->y = tmp37;
									}
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										axis->x = a0->gnormx;
										HX_STACK_LINE(393)
										axis->y = a0->gnormy;
										HX_STACK_LINE(393)
										{
										}
									}
								}
							}
						}
						HX_STACK_LINE(393)
						bool tmp17 = swapped;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(393)
						if ((tmp17)){
							HX_STACK_LINE(393)
							Float tmp18 = axis->x;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(393)
							Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(393)
							axis->x = tmp19;
							HX_STACK_LINE(393)
							Float tmp20 = axis->y;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(393)
							Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(393)
							axis->y = tmp21;
						}
						HX_STACK_LINE(393)
						tmp2 = best;
					}
					else{
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Polygon p1 = s11->polygon;		HX_STACK_VAR(p1,"p1");
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Polygon p2 = s21->polygon;		HX_STACK_VAR(p2,"p2");
						HX_STACK_LINE(393)
						Float tmp15 = ((Float)-1e+100);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(393)
						Float best = tmp15;		HX_STACK_VAR(best,"best");
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(393)
						::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
						HX_STACK_LINE(393)
						int besti = (int)0;		HX_STACK_VAR(besti,"besti");
						HX_STACK_LINE(393)
						{
							HX_STACK_LINE(393)
							::zpp_nape::util::ZNPNode_ZPP_Edge tmp16 = p1->edges->head;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(393)
							::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp16;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(393)
							while((true)){
								HX_STACK_LINE(393)
								bool tmp17 = (cx_ite != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(393)
								bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(393)
								if ((tmp18)){
									HX_STACK_LINE(393)
									break;
								}
								HX_STACK_LINE(393)
								::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(393)
								{
									HX_STACK_LINE(393)
									Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										::zpp_nape::geom::ZPP_Vec2 tmp19 = p2->gverts->next;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(393)
										::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp19;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(393)
										while((true)){
											HX_STACK_LINE(393)
											bool tmp20 = (cx_ite1 != null());		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(393)
											bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(393)
											if ((tmp21)){
												HX_STACK_LINE(393)
												break;
											}
											HX_STACK_LINE(393)
											::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(393)
											{
												HX_STACK_LINE(393)
												Float tmp22 = (a->gnormx * v->x);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(393)
												Float tmp23 = (a->gnormy * v->y);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(393)
												Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(393)
												Float k = tmp24;		HX_STACK_VAR(k,"k");
												HX_STACK_LINE(393)
												bool tmp25 = (k < min);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(393)
												if ((tmp25)){
													HX_STACK_LINE(393)
													min = k;
												}
											}
											HX_STACK_LINE(393)
											cx_ite1 = cx_ite1->next;
										}
									}
									HX_STACK_LINE(393)
									hx::SubEq(min,a->gprojection);
									HX_STACK_LINE(393)
									bool tmp19 = (min > upperBound);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(393)
									if ((tmp19)){
										HX_STACK_LINE(393)
										best = min;
										HX_STACK_LINE(393)
										break;
									}
									HX_STACK_LINE(393)
									bool tmp20 = (min > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(393)
									if ((tmp20)){
										HX_STACK_LINE(393)
										bool tmp21 = (min > best);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(393)
										if ((tmp21)){
											HX_STACK_LINE(393)
											best = min;
											HX_STACK_LINE(393)
											a1 = a;
											HX_STACK_LINE(393)
											besti = (int)1;
										}
									}
									else{
										HX_STACK_LINE(393)
										bool tmp21 = (best < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(393)
										bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(393)
										if ((tmp21)){
											HX_STACK_LINE(393)
											tmp22 = (min > best);
										}
										else{
											HX_STACK_LINE(393)
											tmp22 = false;
										}
										HX_STACK_LINE(393)
										if ((tmp22)){
											HX_STACK_LINE(393)
											best = min;
											HX_STACK_LINE(393)
											a1 = a;
											HX_STACK_LINE(393)
											besti = (int)1;
										}
									}
								}
								HX_STACK_LINE(393)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(393)
						bool tmp16 = (best < upperBound);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(393)
						if ((tmp16)){
							HX_STACK_LINE(393)
							{
								HX_STACK_LINE(393)
								::zpp_nape::util::ZNPNode_ZPP_Edge tmp17 = p2->edges->head;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(393)
								::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp17;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(393)
								while((true)){
									HX_STACK_LINE(393)
									bool tmp18 = (cx_ite != null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(393)
									bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(393)
									if ((tmp19)){
										HX_STACK_LINE(393)
										break;
									}
									HX_STACK_LINE(393)
									::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											::zpp_nape::geom::ZPP_Vec2 tmp20 = p1->gverts->next;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(393)
											::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp20;		HX_STACK_VAR(cx_ite1,"cx_ite1");
											HX_STACK_LINE(393)
											while((true)){
												HX_STACK_LINE(393)
												bool tmp21 = (cx_ite1 != null());		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(393)
												bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(393)
												if ((tmp22)){
													HX_STACK_LINE(393)
													break;
												}
												HX_STACK_LINE(393)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(393)
												{
													HX_STACK_LINE(393)
													Float tmp23 = (a->gnormx * v->x);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(393)
													Float tmp24 = (a->gnormy * v->y);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(393)
													Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(393)
													Float k = tmp25;		HX_STACK_VAR(k,"k");
													HX_STACK_LINE(393)
													bool tmp26 = (k < min);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(393)
													if ((tmp26)){
														HX_STACK_LINE(393)
														min = k;
													}
												}
												HX_STACK_LINE(393)
												cx_ite1 = cx_ite1->next;
											}
										}
										HX_STACK_LINE(393)
										hx::SubEq(min,a->gprojection);
										HX_STACK_LINE(393)
										bool tmp20 = (min > upperBound);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(393)
										if ((tmp20)){
											HX_STACK_LINE(393)
											best = min;
											HX_STACK_LINE(393)
											break;
										}
										HX_STACK_LINE(393)
										bool tmp21 = (min > (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(393)
										if ((tmp21)){
											HX_STACK_LINE(393)
											bool tmp22 = (min > best);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(393)
											if ((tmp22)){
												HX_STACK_LINE(393)
												best = min;
												HX_STACK_LINE(393)
												a2 = a;
												HX_STACK_LINE(393)
												besti = (int)2;
											}
										}
										else{
											HX_STACK_LINE(393)
											bool tmp22 = (best < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(393)
											bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(393)
											if ((tmp22)){
												HX_STACK_LINE(393)
												tmp23 = (min > best);
											}
											else{
												HX_STACK_LINE(393)
												tmp23 = false;
											}
											HX_STACK_LINE(393)
											if ((tmp23)){
												HX_STACK_LINE(393)
												best = min;
												HX_STACK_LINE(393)
												a2 = a;
												HX_STACK_LINE(393)
												besti = (int)2;
											}
										}
									}
									HX_STACK_LINE(393)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(393)
							bool tmp17 = (best < upperBound);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(393)
							if ((tmp17)){
								HX_STACK_LINE(393)
								::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
								HX_STACK_LINE(393)
								::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
								HX_STACK_LINE(393)
								::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
								HX_STACK_LINE(393)
								bool tmp18 = (besti == (int)1);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(393)
								if ((tmp18)){
									HX_STACK_LINE(393)
									q1 = p1;
									HX_STACK_LINE(393)
									q2 = p2;
									HX_STACK_LINE(393)
									ax = a1;
								}
								else{
									HX_STACK_LINE(393)
									q1 = p2;
									HX_STACK_LINE(393)
									q2 = p1;
									HX_STACK_LINE(393)
									ax = a2;
									HX_STACK_LINE(393)
									::zpp_nape::geom::ZPP_Vec2 tmp19 = w1;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(393)
									w1 = w2;
									HX_STACK_LINE(393)
									w2 = tmp19;
									HX_STACK_LINE(393)
									bool tmp20 = swapped;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(393)
									bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(393)
									swapped = tmp21;
								}
								HX_STACK_LINE(393)
								::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
								HX_STACK_LINE(393)
								Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
								HX_STACK_LINE(393)
								{
									HX_STACK_LINE(393)
									::zpp_nape::util::ZNPNode_ZPP_Edge tmp19 = q2->edges->head;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(393)
									::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp19;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(393)
									while((true)){
										HX_STACK_LINE(393)
										bool tmp20 = (cx_ite != null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(393)
										bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(393)
										if ((tmp21)){
											HX_STACK_LINE(393)
											break;
										}
										HX_STACK_LINE(393)
										::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float tmp22 = (ax->gnormx * a->gnormx);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(393)
											Float tmp23 = (ax->gnormy * a->gnormy);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(393)
											Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(393)
											Float k = tmp24;		HX_STACK_VAR(k,"k");
											HX_STACK_LINE(393)
											bool tmp25 = (k < min);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(393)
											if ((tmp25)){
												HX_STACK_LINE(393)
												min = k;
												HX_STACK_LINE(393)
												ay = a;
											}
										}
										HX_STACK_LINE(393)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(393)
								bool tmp19 = swapped;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(393)
								if ((tmp19)){
									HX_STACK_LINE(393)
									Float tmp20 = ax->gnormx;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(393)
									Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(393)
									axis->x = tmp21;
									HX_STACK_LINE(393)
									Float tmp22 = ax->gnormy;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(393)
									Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(393)
									axis->y = tmp23;
									HX_STACK_LINE(393)
									{
									}
								}
								else{
									HX_STACK_LINE(393)
									axis->x = ax->gnormx;
									HX_STACK_LINE(393)
									axis->y = ax->gnormy;
									HX_STACK_LINE(393)
									{
									}
								}
								HX_STACK_LINE(393)
								bool tmp20 = (best >= (int)0);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(393)
								if ((tmp20)){
									HX_STACK_LINE(393)
									::zpp_nape::geom::ZPP_Vec2 v0 = ax->gp0;		HX_STACK_VAR(v0,"v0");
									HX_STACK_LINE(393)
									::zpp_nape::geom::ZPP_Vec2 v1 = ax->gp1;		HX_STACK_VAR(v1,"v1");
									HX_STACK_LINE(393)
									::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
									HX_STACK_LINE(393)
									::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
									HX_STACK_LINE(393)
									Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
									HX_STACK_LINE(393)
									Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
									HX_STACK_LINE(393)
									Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
									HX_STACK_LINE(393)
									Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float tmp21 = (v1->x - v0->x);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(393)
										vx = tmp21;
										HX_STACK_LINE(393)
										Float tmp22 = (v1->y - v0->y);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(393)
										vy = tmp22;
									}
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float tmp21 = (q11->x - q0->x);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(393)
										qx = tmp21;
										HX_STACK_LINE(393)
										Float tmp22 = (q11->y - q0->y);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(393)
										qy = tmp22;
									}
									HX_STACK_LINE(393)
									Float tmp21 = (vx * vx);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(393)
									Float tmp22 = (vy * vy);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(393)
									Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(393)
									Float tmp24 = (Float((int)1) / Float(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(393)
									Float vdot = tmp24;		HX_STACK_VAR(vdot,"vdot");
									HX_STACK_LINE(393)
									Float tmp25 = (qx * qx);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(393)
									Float tmp26 = (qy * qy);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(393)
									Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(393)
									Float tmp28 = (Float((int)1) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(393)
									Float qdot = tmp28;		HX_STACK_VAR(qdot,"qdot");
									HX_STACK_LINE(393)
									Float tmp29 = vx;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(393)
									Float tmp30 = (v0->x - q0->x);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(393)
									Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(393)
									Float tmp32 = vy;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(393)
									Float tmp33 = (v0->y - q0->y);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(393)
									Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(393)
									Float tmp35 = (tmp31 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(393)
									Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(393)
									Float tmp37 = vdot;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(393)
									Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(393)
									Float t1 = tmp38;		HX_STACK_VAR(t1,"t1");
									HX_STACK_LINE(393)
									Float tmp39 = vx;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(393)
									Float tmp40 = (v0->x - q11->x);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(393)
									Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(393)
									Float tmp42 = vy;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(393)
									Float tmp43 = (v0->y - q11->y);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(393)
									Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(393)
									Float tmp45 = (tmp41 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(393)
									Float tmp46 = -(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(393)
									Float tmp47 = vdot;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(393)
									Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(393)
									Float t2 = tmp48;		HX_STACK_VAR(t2,"t2");
									HX_STACK_LINE(393)
									Float tmp49 = qx;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(393)
									Float tmp50 = (q0->x - v0->x);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(393)
									Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(393)
									Float tmp52 = qy;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(393)
									Float tmp53 = (q0->y - v0->y);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(393)
									Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(393)
									Float tmp55 = (tmp51 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(393)
									Float tmp56 = -(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(393)
									Float tmp57 = qdot;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(393)
									Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(393)
									Float s12 = tmp58;		HX_STACK_VAR(s12,"s12");
									HX_STACK_LINE(393)
									Float tmp59 = qx;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(393)
									Float tmp60 = (q0->x - v1->x);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(393)
									Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(393)
									Float tmp62 = qy;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(393)
									Float tmp63 = (q0->y - v1->y);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(393)
									Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(393)
									Float tmp65 = (tmp61 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(393)
									Float tmp66 = -(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(393)
									Float tmp67 = qdot;		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(393)
									Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(393)
									Float s22 = tmp68;		HX_STACK_VAR(s22,"s22");
									HX_STACK_LINE(393)
									bool tmp69 = (t1 < (int)0);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(393)
									if ((tmp69)){
										HX_STACK_LINE(393)
										t1 = (int)0;
									}
									else{
										HX_STACK_LINE(393)
										bool tmp70 = (t1 > (int)1);		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(393)
										if ((tmp70)){
											HX_STACK_LINE(393)
											t1 = (int)1;
										}
									}
									HX_STACK_LINE(393)
									bool tmp70 = (t2 < (int)0);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(393)
									if ((tmp70)){
										HX_STACK_LINE(393)
										t2 = (int)0;
									}
									else{
										HX_STACK_LINE(393)
										bool tmp71 = (t2 > (int)1);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(393)
										if ((tmp71)){
											HX_STACK_LINE(393)
											t2 = (int)1;
										}
									}
									HX_STACK_LINE(393)
									bool tmp71 = (s12 < (int)0);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(393)
									if ((tmp71)){
										HX_STACK_LINE(393)
										s12 = (int)0;
									}
									else{
										HX_STACK_LINE(393)
										bool tmp72 = (s12 > (int)1);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(393)
										if ((tmp72)){
											HX_STACK_LINE(393)
											s12 = (int)1;
										}
									}
									HX_STACK_LINE(393)
									bool tmp72 = (s22 < (int)0);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(393)
									if ((tmp72)){
										HX_STACK_LINE(393)
										s22 = (int)0;
									}
									else{
										HX_STACK_LINE(393)
										bool tmp73 = (s22 > (int)1);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(393)
										if ((tmp73)){
											HX_STACK_LINE(393)
											s22 = (int)1;
										}
									}
									HX_STACK_LINE(393)
									Float f1x = ((Float)0.0);		HX_STACK_VAR(f1x,"f1x");
									HX_STACK_LINE(393)
									Float f1y = ((Float)0.0);		HX_STACK_VAR(f1y,"f1y");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float t = t1;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										Float tmp73 = v0->x;		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(393)
										Float tmp74 = (vx * t);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(393)
										Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(393)
										f1x = tmp75;
										HX_STACK_LINE(393)
										Float tmp76 = v0->y;		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(393)
										Float tmp77 = (vy * t);		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(393)
										Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(393)
										f1y = tmp78;
									}
									HX_STACK_LINE(393)
									Float f2x = ((Float)0.0);		HX_STACK_VAR(f2x,"f2x");
									HX_STACK_LINE(393)
									Float f2y = ((Float)0.0);		HX_STACK_VAR(f2y,"f2y");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float t = t2;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										Float tmp73 = v0->x;		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(393)
										Float tmp74 = (vx * t);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(393)
										Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(393)
										f2x = tmp75;
										HX_STACK_LINE(393)
										Float tmp76 = v0->y;		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(393)
										Float tmp77 = (vy * t);		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(393)
										Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(393)
										f2y = tmp78;
									}
									HX_STACK_LINE(393)
									Float g1x = ((Float)0.0);		HX_STACK_VAR(g1x,"g1x");
									HX_STACK_LINE(393)
									Float g1y = ((Float)0.0);		HX_STACK_VAR(g1y,"g1y");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float t = s12;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										Float tmp73 = q0->x;		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(393)
										Float tmp74 = (qx * t);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(393)
										Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(393)
										g1x = tmp75;
										HX_STACK_LINE(393)
										Float tmp76 = q0->y;		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(393)
										Float tmp77 = (qy * t);		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(393)
										Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(393)
										g1y = tmp78;
									}
									HX_STACK_LINE(393)
									Float g2x = ((Float)0.0);		HX_STACK_VAR(g2x,"g2x");
									HX_STACK_LINE(393)
									Float g2y = ((Float)0.0);		HX_STACK_VAR(g2y,"g2y");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float t = s22;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(393)
										Float tmp73 = q0->x;		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(393)
										Float tmp74 = (qx * t);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(393)
										Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(393)
										g2x = tmp75;
										HX_STACK_LINE(393)
										Float tmp76 = q0->y;		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(393)
										Float tmp77 = (qy * t);		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(393)
										Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(393)
										g2y = tmp78;
									}
									HX_STACK_LINE(393)
									Float tmp73;		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(393)
										Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float tmp74 = (f1x - q0->x);		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(393)
											dx = tmp74;
											HX_STACK_LINE(393)
											Float tmp75 = (f1y - q0->y);		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(393)
											dy = tmp75;
										}
										HX_STACK_LINE(393)
										Float tmp74 = (dx * dx);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(393)
										Float tmp75 = (dy * dy);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(393)
										tmp73 = (tmp74 + tmp75);
									}
									HX_STACK_LINE(393)
									Float d1 = tmp73;		HX_STACK_VAR(d1,"d1");
									HX_STACK_LINE(393)
									Float tmp74;		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(393)
										Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float tmp75 = (f2x - q11->x);		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(393)
											dx = tmp75;
											HX_STACK_LINE(393)
											Float tmp76 = (f2y - q11->y);		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(393)
											dy = tmp76;
										}
										HX_STACK_LINE(393)
										Float tmp75 = (dx * dx);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(393)
										Float tmp76 = (dy * dy);		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(393)
										tmp74 = (tmp75 + tmp76);
									}
									HX_STACK_LINE(393)
									Float d2 = tmp74;		HX_STACK_VAR(d2,"d2");
									HX_STACK_LINE(393)
									Float tmp75;		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(393)
										Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float tmp76 = (g1x - v0->x);		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(393)
											dx = tmp76;
											HX_STACK_LINE(393)
											Float tmp77 = (g1y - v0->y);		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(393)
											dy = tmp77;
										}
										HX_STACK_LINE(393)
										Float tmp76 = (dx * dx);		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(393)
										Float tmp77 = (dy * dy);		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(393)
										tmp75 = (tmp76 + tmp77);
									}
									HX_STACK_LINE(393)
									Float e1 = tmp75;		HX_STACK_VAR(e1,"e1");
									HX_STACK_LINE(393)
									Float tmp76;		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
										HX_STACK_LINE(393)
										Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float tmp77 = (g2x - v1->x);		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(393)
											dx = tmp77;
											HX_STACK_LINE(393)
											Float tmp78 = (g2y - v1->y);		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(393)
											dy = tmp78;
										}
										HX_STACK_LINE(393)
										Float tmp77 = (dx * dx);		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(393)
										Float tmp78 = (dy * dy);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(393)
										tmp76 = (tmp77 + tmp78);
									}
									HX_STACK_LINE(393)
									Float e2 = tmp76;		HX_STACK_VAR(e2,"e2");
									HX_STACK_LINE(393)
									Float minfx = ((Float)0.0);		HX_STACK_VAR(minfx,"minfx");
									HX_STACK_LINE(393)
									Float minfy = ((Float)0.0);		HX_STACK_VAR(minfy,"minfy");
									HX_STACK_LINE(393)
									::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
									HX_STACK_LINE(393)
									bool tmp77 = (d1 < d2);		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(393)
									if ((tmp77)){
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											minfx = f1x;
											HX_STACK_LINE(393)
											minfy = f1y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										minq = q0;
									}
									else{
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											minfx = f2x;
											HX_STACK_LINE(393)
											minfy = f2y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										minq = q11;
										HX_STACK_LINE(393)
										d1 = d2;
									}
									HX_STACK_LINE(393)
									Float mingx = ((Float)0.0);		HX_STACK_VAR(mingx,"mingx");
									HX_STACK_LINE(393)
									Float mingy = ((Float)0.0);		HX_STACK_VAR(mingy,"mingy");
									HX_STACK_LINE(393)
									::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
									HX_STACK_LINE(393)
									bool tmp78 = (e1 < e2);		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(393)
									if ((tmp78)){
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											mingx = g1x;
											HX_STACK_LINE(393)
											mingy = g1y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										minv = v0;
									}
									else{
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											mingx = g2x;
											HX_STACK_LINE(393)
											mingy = g2y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										minv = v1;
										HX_STACK_LINE(393)
										e1 = e2;
									}
									HX_STACK_LINE(393)
									bool tmp79 = (d1 < e1);		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(393)
									if ((tmp79)){
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											w1->x = minfx;
											HX_STACK_LINE(393)
											w1->y = minfy;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											w2->x = minq->x;
											HX_STACK_LINE(393)
											w2->y = minq->y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										Float tmp80 = d1;		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(393)
										Float tmp81 = ::Math_obj::sqrt(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(393)
										best = tmp81;
									}
									else{
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											w2->x = mingx;
											HX_STACK_LINE(393)
											w2->y = mingy;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											w1->x = minv->x;
											HX_STACK_LINE(393)
											w1->y = minv->y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										Float tmp80 = e1;		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(393)
										Float tmp81 = ::Math_obj::sqrt(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(393)
										best = tmp81;
									}
									HX_STACK_LINE(393)
									bool tmp80 = (best != (int)0);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(393)
									if ((tmp80)){
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float tmp81 = (w2->x - w1->x);		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(393)
											axis->x = tmp81;
											HX_STACK_LINE(393)
											Float tmp82 = (w2->y - w1->y);		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(393)
											axis->y = tmp82;
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float tmp81 = (Float(((Float)1.0)) / Float(best));		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(393)
											Float t = tmp81;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(393)
											hx::MultEq(axis->x,t);
											HX_STACK_LINE(393)
											hx::MultEq(axis->y,t);
										}
										HX_STACK_LINE(393)
										bool tmp81 = swapped;		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(393)
										if ((tmp81)){
											HX_STACK_LINE(393)
											Float tmp82 = axis->x;		HX_STACK_VAR(tmp82,"tmp82");
											HX_STACK_LINE(393)
											Float tmp83 = -(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
											HX_STACK_LINE(393)
											axis->x = tmp83;
											HX_STACK_LINE(393)
											Float tmp84 = axis->y;		HX_STACK_VAR(tmp84,"tmp84");
											HX_STACK_LINE(393)
											Float tmp85 = -(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
											HX_STACK_LINE(393)
											axis->y = tmp85;
										}
									}
									HX_STACK_LINE(393)
									tmp2 = best;
								}
								else{
									HX_STACK_LINE(393)
									Float c0x = ((Float)0.0);		HX_STACK_VAR(c0x,"c0x");
									HX_STACK_LINE(393)
									Float c0y = ((Float)0.0);		HX_STACK_VAR(c0y,"c0y");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float tmp21 = ay->gp0->x;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(393)
										c0x = tmp21;
										HX_STACK_LINE(393)
										Float tmp22 = ay->gp0->y;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(393)
										c0y = tmp22;
										HX_STACK_LINE(393)
										{
										}
									}
									HX_STACK_LINE(393)
									Float c1x = ((Float)0.0);		HX_STACK_VAR(c1x,"c1x");
									HX_STACK_LINE(393)
									Float c1y = ((Float)0.0);		HX_STACK_VAR(c1y,"c1y");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float tmp21 = ay->gp1->x;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(393)
										c1x = tmp21;
										HX_STACK_LINE(393)
										Float tmp22 = ay->gp1->y;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(393)
										c1y = tmp22;
										HX_STACK_LINE(393)
										{
										}
									}
									HX_STACK_LINE(393)
									Float dvx = ((Float)0.0);		HX_STACK_VAR(dvx,"dvx");
									HX_STACK_LINE(393)
									Float dvy = ((Float)0.0);		HX_STACK_VAR(dvy,"dvy");
									HX_STACK_LINE(393)
									{
										HX_STACK_LINE(393)
										Float tmp21 = (c1x - c0x);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(393)
										dvx = tmp21;
										HX_STACK_LINE(393)
										Float tmp22 = (c1y - c0y);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(393)
										dvy = tmp22;
									}
									HX_STACK_LINE(393)
									Float tmp21 = (ax->gnormy * c0x);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(393)
									Float tmp22 = (ax->gnormx * c0y);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(393)
									Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(393)
									Float d0 = tmp23;		HX_STACK_VAR(d0,"d0");
									HX_STACK_LINE(393)
									Float tmp24 = (ax->gnormy * c1x);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(393)
									Float tmp25 = (ax->gnormx * c1y);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(393)
									Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(393)
									Float d1 = tmp26;		HX_STACK_VAR(d1,"d1");
									HX_STACK_LINE(393)
									Float tmp27 = (d1 - d0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(393)
									Float tmp28 = (Float((int)1) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(393)
									Float den = tmp28;		HX_STACK_VAR(den,"den");
									HX_STACK_LINE(393)
									Float tmp29 = ax->tp1;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(393)
									Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(393)
									Float tmp31 = d0;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(393)
									Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(393)
									Float tmp33 = den;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(393)
									Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(393)
									Float t = tmp34;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(393)
									Float tmp35 = t;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(393)
									Float tmp36 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(393)
									bool tmp37 = (tmp35 > tmp36);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(393)
									if ((tmp37)){
										HX_STACK_LINE(393)
										Float t1 = t;		HX_STACK_VAR(t1,"t1");
										HX_STACK_LINE(393)
										Float tmp38 = (dvx * t1);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(393)
										hx::AddEq(c0x,tmp38);
										HX_STACK_LINE(393)
										Float tmp39 = (dvy * t1);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(393)
										hx::AddEq(c0y,tmp39);
									}
									HX_STACK_LINE(393)
									Float tmp38 = ax->tp0;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(393)
									Float tmp39 = -(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(393)
									Float tmp40 = d1;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(393)
									Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(393)
									Float tmp42 = den;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(393)
									Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(393)
									Float t1 = tmp43;		HX_STACK_VAR(t1,"t1");
									HX_STACK_LINE(393)
									Float tmp44 = t1;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(393)
									Float tmp45 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(393)
									Float tmp46 = -(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(393)
									bool tmp47 = (tmp44 < tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(393)
									if ((tmp47)){
										HX_STACK_LINE(393)
										Float t2 = t1;		HX_STACK_VAR(t2,"t2");
										HX_STACK_LINE(393)
										Float tmp48 = (dvx * t2);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(393)
										hx::AddEq(c1x,tmp48);
										HX_STACK_LINE(393)
										Float tmp49 = (dvy * t2);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(393)
										hx::AddEq(c1y,tmp49);
									}
									HX_STACK_LINE(393)
									Float tmp48 = (c0x * ax->gnormx);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(393)
									Float tmp49 = (c0y * ax->gnormy);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(393)
									Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(393)
									Float tmp51 = ax->gprojection;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(393)
									Float tmp52 = (tmp50 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(393)
									Float c0d = tmp52;		HX_STACK_VAR(c0d,"c0d");
									HX_STACK_LINE(393)
									Float tmp53 = (c1x * ax->gnormx);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(393)
									Float tmp54 = (c1y * ax->gnormy);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(393)
									Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(393)
									Float tmp56 = ax->gprojection;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(393)
									Float tmp57 = (tmp55 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(393)
									Float c1d = tmp57;		HX_STACK_VAR(c1d,"c1d");
									HX_STACK_LINE(393)
									bool tmp58 = (c0d < c1d);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(393)
									if ((tmp58)){
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											w2->x = c0x;
											HX_STACK_LINE(393)
											w2->y = c0y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float tmp59 = c0d;		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(393)
											Float tmp60 = -(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(393)
											Float t2 = tmp60;		HX_STACK_VAR(t2,"t2");
											HX_STACK_LINE(393)
											Float tmp61 = w2->x;		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(393)
											Float tmp62 = (ax->gnormx * t2);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(393)
											Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(393)
											w1->x = tmp63;
											HX_STACK_LINE(393)
											Float tmp64 = w2->y;		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(393)
											Float tmp65 = (ax->gnormy * t2);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(393)
											Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(393)
											w1->y = tmp66;
										}
										HX_STACK_LINE(393)
										tmp2 = c0d;
									}
									else{
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											w2->x = c1x;
											HX_STACK_LINE(393)
											w2->y = c1y;
											HX_STACK_LINE(393)
											{
											}
										}
										HX_STACK_LINE(393)
										{
											HX_STACK_LINE(393)
											Float tmp59 = c1d;		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(393)
											Float tmp60 = -(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(393)
											Float t2 = tmp60;		HX_STACK_VAR(t2,"t2");
											HX_STACK_LINE(393)
											Float tmp61 = w2->x;		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(393)
											Float tmp62 = (ax->gnormx * t2);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(393)
											Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(393)
											w1->x = tmp63;
											HX_STACK_LINE(393)
											Float tmp64 = w2->y;		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(393)
											Float tmp65 = (ax->gnormy * t2);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(393)
											Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(393)
											w1->y = tmp66;
										}
										HX_STACK_LINE(393)
										tmp2 = c1d;
									}
								}
							}
							else{
								HX_STACK_LINE(393)
								tmp2 = upperBound;
							}
						}
						else{
							HX_STACK_LINE(393)
							tmp2 = upperBound;
						}
					}
				}
			}
			HX_STACK_LINE(393)
			Float tmp3 = negRadius;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(393)
			Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(393)
			Float sep = tmp4;		HX_STACK_VAR(sep,"sep");
			HX_STACK_LINE(394)
			Float tmp5 = (deltax * axis->x);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(394)
			Float tmp6 = (deltay * axis->y);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(394)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(394)
			Float dot = tmp7;		HX_STACK_VAR(dot,"dot");
			HX_STACK_LINE(395)
			Float tmp8 = sep;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(395)
			Float tmp9 = ::nape::Config_obj::distanceThresholdCCD;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(395)
			bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(395)
			if ((tmp10)){
				HX_STACK_LINE(396)
				Float d1x = ((Float)0.0);		HX_STACK_VAR(d1x,"d1x");
				HX_STACK_LINE(397)
				Float d1y = ((Float)0.0);		HX_STACK_VAR(d1y,"d1y");
				HX_STACK_LINE(398)
				{
					HX_STACK_LINE(399)
					Float tmp11 = (c1->x - b1->posx);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(399)
					d1x = tmp11;
					HX_STACK_LINE(400)
					Float tmp12 = (c1->y - b1->posy);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(400)
					d1y = tmp12;
				}
				HX_STACK_LINE(402)
				Float tmp11 = dot;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(402)
				Float tmp12 = b1->sweep_angvel;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(402)
				Float tmp13 = (axis->y * d1x);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(402)
				Float tmp14 = (axis->x * d1y);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(402)
				Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(402)
				Float tmp16 = (tmp12 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(402)
				Float tmp17 = (tmp11 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(402)
				Float proj = tmp17;		HX_STACK_VAR(proj,"proj");
				HX_STACK_LINE(403)
				bool tmp18 = (proj > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(403)
				if ((tmp18)){
					HX_STACK_LINE(404)
					toi->slipped = true;
				}
				HX_STACK_LINE(406)
				bool tmp19 = (proj <= (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(406)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(406)
				bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(406)
				if ((tmp20)){
					HX_STACK_LINE(406)
					Float tmp22 = sep;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(406)
					Float tmp23 = ::nape::Config_obj::distanceThresholdCCD;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(406)
					Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(406)
					Float tmp25 = (tmp24 * ((Float)0.5));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(406)
					Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(406)
					tmp21 = (tmp22 < tmp26);
				}
				else{
					HX_STACK_LINE(406)
					tmp21 = true;
				}
				HX_STACK_LINE(406)
				if ((tmp21)){
					HX_STACK_LINE(407)
					break;
				}
			}
			HX_STACK_LINE(410)
			Float tmp11 = (angBias - dot);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(410)
			Float tmp12 = timeStep;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(410)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(410)
			Float denom = tmp13;		HX_STACK_VAR(denom,"denom");
			HX_STACK_LINE(411)
			bool tmp14 = (denom <= (int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(411)
			if ((tmp14)){
				HX_STACK_LINE(412)
				curTOI = (int)-1;
				HX_STACK_LINE(413)
				break;
			}
			HX_STACK_LINE(415)
			Float tmp15 = (Float(sep) / Float(denom));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(415)
			Float delta = tmp15;		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(416)
			bool tmp16 = (delta < ((Float)1e-6));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(416)
			if ((tmp16)){
				HX_STACK_LINE(416)
				delta = ((Float)1e-6);
			}
			HX_STACK_LINE(425)
			hx::AddEq(curTOI,delta);
			HX_STACK_LINE(426)
			bool tmp17 = (curTOI >= (int)1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(426)
			if ((tmp17)){
				HX_STACK_LINE(427)
				curTOI = (int)1;
				HX_STACK_LINE(444)
				{
					HX_STACK_LINE(444)
					Float tmp18 = (curTOI * timeStep);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(444)
					Float dt = tmp18;		HX_STACK_VAR(dt,"dt");
					HX_STACK_LINE(444)
					Float tmp19 = (dt - b1->sweepTime);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(444)
					Float delta1 = tmp19;		HX_STACK_VAR(delta1,"delta1");
					HX_STACK_LINE(444)
					bool tmp20 = (delta1 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(444)
					if ((tmp20)){
						HX_STACK_LINE(444)
						b1->sweepTime = dt;
						HX_STACK_LINE(444)
						{
							HX_STACK_LINE(444)
							Float t = delta1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(444)
							Float tmp21 = (b1->velx * t);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(444)
							hx::AddEq(b1->posx,tmp21);
							HX_STACK_LINE(444)
							Float tmp22 = (b1->vely * t);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(444)
							hx::AddEq(b1->posy,tmp22);
						}
						HX_STACK_LINE(444)
						bool tmp21 = (b1->angvel != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(444)
						if ((tmp21)){
							HX_STACK_LINE(444)
							Float tmp22 = (b1->sweep_angvel * delta1);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(444)
							Float dr = tmp22;		HX_STACK_VAR(dr,"dr");
							HX_STACK_LINE(444)
							hx::AddEq(b1->rot,dr);
							HX_STACK_LINE(444)
							Float tmp23 = (dr * dr);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(444)
							bool tmp24 = (tmp23 > ((Float)0.0001));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(444)
							if ((tmp24)){
								HX_STACK_LINE(444)
								Float tmp25 = b1->rot;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(444)
								Float tmp26 = ::Math_obj::sin(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(444)
								b1->axisx = tmp26;
								HX_STACK_LINE(444)
								Float tmp27 = b1->rot;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(444)
								Float tmp28 = ::Math_obj::cos(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(444)
								b1->axisy = tmp28;
								HX_STACK_LINE(444)
								Dynamic();
							}
							else{
								HX_STACK_LINE(444)
								Float tmp25 = (dr * dr);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(444)
								Float d2 = tmp25;		HX_STACK_VAR(d2,"d2");
								HX_STACK_LINE(444)
								Float tmp26 = (((Float)0.5) * d2);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(444)
								Float tmp27 = ((int)1 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(444)
								Float p = tmp27;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(444)
								Float tmp28 = (d2 * d2);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(444)
								Float tmp29 = (Float(tmp28) / Float((int)8));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(444)
								Float tmp30 = ((int)1 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(444)
								Float m = tmp30;		HX_STACK_VAR(m,"m");
								HX_STACK_LINE(444)
								Float tmp31 = (p * b1->axisx);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(444)
								Float tmp32 = (dr * b1->axisy);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(444)
								Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(444)
								Float tmp34 = m;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(444)
								Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(444)
								Float nx = tmp35;		HX_STACK_VAR(nx,"nx");
								HX_STACK_LINE(444)
								Float tmp36 = (p * b1->axisy);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(444)
								Float tmp37 = (dr * b1->axisx);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(444)
								Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(444)
								Float tmp39 = m;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(444)
								Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(444)
								b1->axisy = tmp40;
								HX_STACK_LINE(444)
								b1->axisx = nx;
							}
						}
					}
				}
				HX_STACK_LINE(445)
				{
					HX_STACK_LINE(445)
					int tmp18 = s1->type;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(445)
					int tmp19 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(445)
					bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(445)
					if ((tmp20)){
						HX_STACK_LINE(445)
						Float tmp21 = b1->posx;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(445)
						Float tmp22 = (b1->axisy * s1->localCOMx);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(445)
						Float tmp23 = (b1->axisx * s1->localCOMy);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(445)
						Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(445)
						Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(445)
						s1->worldCOMx = tmp25;
						HX_STACK_LINE(445)
						Float tmp26 = b1->posy;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(445)
						Float tmp27 = (s1->localCOMx * b1->axisx);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(445)
						Float tmp28 = (s1->localCOMy * b1->axisy);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(445)
						Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(445)
						Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(445)
						s1->worldCOMy = tmp30;
					}
					else{
						HX_STACK_LINE(445)
						::zpp_nape::shape::ZPP_Polygon p = s1->polygon;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(445)
						::zpp_nape::geom::ZPP_Vec2 tmp21 = p->lverts->next;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(445)
						::zpp_nape::geom::ZPP_Vec2 li = tmp21;		HX_STACK_VAR(li,"li");
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 tmp22 = p->gverts->next;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp22;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(445)
							while((true)){
								HX_STACK_LINE(445)
								bool tmp23 = (cx_ite != null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(445)
								bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(445)
								if ((tmp24)){
									HX_STACK_LINE(445)
									break;
								}
								HX_STACK_LINE(445)
								::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(445)
								{
									HX_STACK_LINE(445)
									::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
									HX_STACK_LINE(445)
									li = li->next;
									HX_STACK_LINE(445)
									{
										HX_STACK_LINE(445)
										Float tmp25 = b1->posx;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(445)
										Float tmp26 = (b1->axisy * l->x);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(445)
										Float tmp27 = (b1->axisx * l->y);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(445)
										Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(445)
										Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(445)
										g->x = tmp29;
										HX_STACK_LINE(445)
										Float tmp30 = b1->posy;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(445)
										Float tmp31 = (l->x * b1->axisx);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(445)
										Float tmp32 = (l->y * b1->axisy);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(445)
										Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(445)
										Float tmp34 = (tmp30 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(445)
										g->y = tmp34;
									}
								}
								HX_STACK_LINE(445)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(445)
						::zpp_nape::util::ZNPNode_ZPP_Edge tmp22 = p->edges->head;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(445)
						::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp22;		HX_STACK_VAR(ite,"ite");
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 tmp23 = p->gverts->next;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp23;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
							HX_STACK_LINE(445)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(445)
							while((true)){
								HX_STACK_LINE(445)
								bool tmp24 = (cx_ite != null());		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(445)
								bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(445)
								if ((tmp25)){
									HX_STACK_LINE(445)
									break;
								}
								HX_STACK_LINE(445)
								::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(445)
								{
									HX_STACK_LINE(445)
									::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(445)
									ite = ite->next;
									HX_STACK_LINE(445)
									{
										HX_STACK_LINE(445)
										Float tmp26 = (b1->axisy * e->lnormx);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(445)
										Float tmp27 = (b1->axisx * e->lnormy);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(445)
										Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(445)
										e->gnormx = tmp28;
										HX_STACK_LINE(445)
										Float tmp29 = (e->lnormx * b1->axisx);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(445)
										Float tmp30 = (e->lnormy * b1->axisy);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(445)
										Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(445)
										e->gnormy = tmp31;
									}
									HX_STACK_LINE(445)
									Float tmp26 = (b1->posx * e->gnormx);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(445)
									Float tmp27 = (b1->posy * e->gnormy);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(445)
									Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(445)
									Float tmp29 = e->lprojection;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(445)
									Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(445)
									e->gprojection = tmp30;
									HX_STACK_LINE(445)
									Float tmp31 = (u->y * e->gnormx);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(445)
									Float tmp32 = (u->x * e->gnormy);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(445)
									Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(445)
									e->tp0 = tmp33;
									HX_STACK_LINE(445)
									Float tmp34 = (v->y * e->gnormx);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(445)
									Float tmp35 = (v->x * e->gnormy);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(445)
									Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(445)
									e->tp1 = tmp36;
								}
								HX_STACK_LINE(445)
								u = v;
								HX_STACK_LINE(445)
								cx_ite = cx_ite->next;
							}
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 tmp24 = p->gverts->next;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(445)
							::zpp_nape::geom::ZPP_Vec2 v = tmp24;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(445)
							{
								HX_STACK_LINE(445)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(445)
								ite = ite->next;
								HX_STACK_LINE(445)
								{
									HX_STACK_LINE(445)
									Float tmp25 = (b1->axisy * e->lnormx);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(445)
									Float tmp26 = (b1->axisx * e->lnormy);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(445)
									Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(445)
									e->gnormx = tmp27;
									HX_STACK_LINE(445)
									Float tmp28 = (e->lnormx * b1->axisx);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(445)
									Float tmp29 = (e->lnormy * b1->axisy);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(445)
									Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(445)
									e->gnormy = tmp30;
								}
								HX_STACK_LINE(445)
								Float tmp25 = (b1->posx * e->gnormx);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(445)
								Float tmp26 = (b1->posy * e->gnormy);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(445)
								Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(445)
								Float tmp28 = e->lprojection;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(445)
								Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(445)
								e->gprojection = tmp29;
								HX_STACK_LINE(445)
								Float tmp30 = (u->y * e->gnormx);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(445)
								Float tmp31 = (u->x * e->gnormy);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(445)
								Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(445)
								e->tp0 = tmp32;
								HX_STACK_LINE(445)
								Float tmp33 = (v->y * e->gnormx);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(445)
								Float tmp34 = (v->x * e->gnormy);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(445)
								Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(445)
								e->tp1 = tmp35;
							}
						}
					}
				}
				HX_STACK_LINE(446)
				Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(446)
				{
					HX_STACK_LINE(446)
					::zpp_nape::shape::ZPP_Shape s11 = s1;		HX_STACK_VAR(s11,"s11");
					HX_STACK_LINE(446)
					::zpp_nape::shape::ZPP_Shape s21 = s2;		HX_STACK_VAR(s21,"s21");
					HX_STACK_LINE(446)
					::zpp_nape::geom::ZPP_Vec2 w1 = c1;		HX_STACK_VAR(w1,"w1");
					HX_STACK_LINE(446)
					::zpp_nape::geom::ZPP_Vec2 w2 = c2;		HX_STACK_VAR(w2,"w2");
					HX_STACK_LINE(446)
					Float upperBound = ((Float)1e100);		HX_STACK_VAR(upperBound,"upperBound");
					HX_STACK_LINE(446)
					int tmp19 = s11->type;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(446)
					int tmp20 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(446)
					bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(446)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(446)
					if ((tmp21)){
						HX_STACK_LINE(446)
						int tmp23 = s21->type;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(446)
						int tmp24 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(446)
						int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(446)
						tmp22 = (tmp23 == tmp25);
					}
					else{
						HX_STACK_LINE(446)
						tmp22 = false;
					}
					HX_STACK_LINE(446)
					if ((tmp22)){
						HX_STACK_LINE(446)
						::zpp_nape::shape::ZPP_Circle c11 = s11->circle;		HX_STACK_VAR(c11,"c11");
						HX_STACK_LINE(446)
						::zpp_nape::shape::ZPP_Circle c21 = s21->circle;		HX_STACK_VAR(c21,"c21");
						HX_STACK_LINE(446)
						Float dist;		HX_STACK_VAR(dist,"dist");
						HX_STACK_LINE(446)
						{
							HX_STACK_LINE(446)
							Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(446)
							Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
							HX_STACK_LINE(446)
							{
								HX_STACK_LINE(446)
								Float tmp23 = (c21->worldCOMx - c11->worldCOMx);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(446)
								nx = tmp23;
								HX_STACK_LINE(446)
								Float tmp24 = (c21->worldCOMy - c11->worldCOMy);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(446)
								ny = tmp24;
							}
							HX_STACK_LINE(446)
							Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(446)
							{
								HX_STACK_LINE(446)
								Float tmp24 = (nx * nx);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(446)
								Float tmp25 = (ny * ny);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(446)
								Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(446)
								tmp23 = ::Math_obj::sqrt(tmp26);
							}
							HX_STACK_LINE(446)
							Float len = tmp23;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(446)
							Float tmp24 = len;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(446)
							Float tmp25 = (c11->radius + c21->radius);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(446)
							Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(446)
							dist = tmp26;
							HX_STACK_LINE(446)
							bool tmp27 = (dist < upperBound);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(446)
							if ((tmp27)){
								HX_STACK_LINE(446)
								bool tmp28 = (len == (int)0);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(446)
								if ((tmp28)){
									HX_STACK_LINE(446)
									nx = (int)1;
									HX_STACK_LINE(446)
									ny = (int)0;
									HX_STACK_LINE(446)
									{
									}
								}
								else{
									HX_STACK_LINE(446)
									Float tmp29 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(446)
									Float t = tmp29;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(446)
									hx::MultEq(nx,t);
									HX_STACK_LINE(446)
									hx::MultEq(ny,t);
								}
								HX_STACK_LINE(446)
								{
									HX_STACK_LINE(446)
									Float t = c11->radius;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(446)
									Float tmp29 = c11->worldCOMx;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(446)
									Float tmp30 = (nx * t);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(446)
									Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(446)
									w1->x = tmp31;
									HX_STACK_LINE(446)
									Float tmp32 = c11->worldCOMy;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(446)
									Float tmp33 = (ny * t);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(446)
									Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(446)
									w1->y = tmp34;
								}
								HX_STACK_LINE(446)
								{
									HX_STACK_LINE(446)
									Float tmp29 = c21->radius;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(446)
									Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(446)
									Float t = tmp30;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(446)
									Float tmp31 = c21->worldCOMx;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(446)
									Float tmp32 = (nx * t);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(446)
									Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(446)
									w2->x = tmp33;
									HX_STACK_LINE(446)
									Float tmp34 = c21->worldCOMy;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(446)
									Float tmp35 = (ny * t);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(446)
									Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(446)
									w2->y = tmp36;
								}
								HX_STACK_LINE(446)
								{
									HX_STACK_LINE(446)
									axis->x = nx;
									HX_STACK_LINE(446)
									axis->y = ny;
									HX_STACK_LINE(446)
									{
									}
								}
							}
						}
						HX_STACK_LINE(446)
						tmp18 = dist;
					}
					else{
						HX_STACK_LINE(446)
						bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
						HX_STACK_LINE(446)
						int tmp23 = s11->type;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(446)
						int tmp24 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(446)
						bool tmp25 = (tmp23 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(446)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(446)
						if ((tmp25)){
							HX_STACK_LINE(446)
							int tmp27 = s21->type;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(446)
							int tmp28 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(446)
							int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(446)
							tmp26 = (tmp27 == tmp29);
						}
						else{
							HX_STACK_LINE(446)
							tmp26 = false;
						}
						HX_STACK_LINE(446)
						if ((tmp26)){
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Shape tmp27 = s11;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(446)
							s11 = s21;
							HX_STACK_LINE(446)
							s21 = tmp27;
							HX_STACK_LINE(446)
							::zpp_nape::geom::ZPP_Vec2 tmp28 = w1;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(446)
							w1 = w2;
							HX_STACK_LINE(446)
							w2 = tmp28;
							HX_STACK_LINE(446)
							swapped = true;
						}
						HX_STACK_LINE(446)
						int tmp27 = s11->type;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(446)
						int tmp28 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(446)
						bool tmp29 = (tmp27 == tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(446)
						bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(446)
						if ((tmp29)){
							HX_STACK_LINE(446)
							int tmp31 = s21->type;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(446)
							int tmp32 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(446)
							int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(446)
							tmp30 = (tmp31 == tmp33);
						}
						else{
							HX_STACK_LINE(446)
							tmp30 = false;
						}
						HX_STACK_LINE(446)
						if ((tmp30)){
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Polygon poly = s11->polygon;		HX_STACK_VAR(poly,"poly");
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Circle circle = s21->circle;		HX_STACK_VAR(circle,"circle");
							HX_STACK_LINE(446)
							Float tmp31 = ((Float)-1e+100);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(446)
							Float best = tmp31;		HX_STACK_VAR(best,"best");
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
							HX_STACK_LINE(446)
							{
								HX_STACK_LINE(446)
								::zpp_nape::util::ZNPNode_ZPP_Edge tmp32 = poly->edges->head;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(446)
								::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp32;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(446)
								while((true)){
									HX_STACK_LINE(446)
									bool tmp33 = (cx_ite != null());		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(446)
									bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(446)
									if ((tmp34)){
										HX_STACK_LINE(446)
										break;
									}
									HX_STACK_LINE(446)
									::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(446)
									{
										HX_STACK_LINE(446)
										Float tmp35 = (a->gnormx * circle->worldCOMx);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(446)
										Float tmp36 = (a->gnormy * circle->worldCOMy);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(446)
										Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(446)
										Float tmp38 = a->gprojection;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(446)
										Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(446)
										Float tmp40 = circle->radius;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(446)
										Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(446)
										Float dist = tmp41;		HX_STACK_VAR(dist,"dist");
										HX_STACK_LINE(446)
										bool tmp42 = (dist > upperBound);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(446)
										if ((tmp42)){
											HX_STACK_LINE(446)
											best = dist;
											HX_STACK_LINE(446)
											break;
										}
										HX_STACK_LINE(446)
										bool tmp43 = (dist > (int)0);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(446)
										if ((tmp43)){
											HX_STACK_LINE(446)
											bool tmp44 = (dist > best);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(446)
											if ((tmp44)){
												HX_STACK_LINE(446)
												best = dist;
												HX_STACK_LINE(446)
												a0 = a;
											}
										}
										else{
											HX_STACK_LINE(446)
											bool tmp44 = (best < (int)0);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(446)
											bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(446)
											if ((tmp44)){
												HX_STACK_LINE(446)
												tmp45 = (dist > best);
											}
											else{
												HX_STACK_LINE(446)
												tmp45 = false;
											}
											HX_STACK_LINE(446)
											if ((tmp45)){
												HX_STACK_LINE(446)
												best = dist;
												HX_STACK_LINE(446)
												a0 = a;
											}
										}
									}
									HX_STACK_LINE(446)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(446)
							bool tmp32 = (best < upperBound);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(446)
							if ((tmp32)){
								HX_STACK_LINE(446)
								::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
								HX_STACK_LINE(446)
								::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
								HX_STACK_LINE(446)
								Float tmp33 = (circle->worldCOMy * a0->gnormx);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(446)
								Float tmp34 = (circle->worldCOMx * a0->gnormy);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(446)
								Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(446)
								Float dt = tmp35;		HX_STACK_VAR(dt,"dt");
								HX_STACK_LINE(446)
								Float tmp36 = dt;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(446)
								Float tmp37 = (v0->y * a0->gnormx);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(446)
								Float tmp38 = (v0->x * a0->gnormy);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(446)
								Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(446)
								bool tmp40 = (tmp36 <= tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(446)
								if ((tmp40)){
									HX_STACK_LINE(446)
									Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(446)
									Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
									HX_STACK_LINE(446)
									{
										HX_STACK_LINE(446)
										Float tmp41 = (circle->worldCOMx - v0->x);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(446)
										nx = tmp41;
										HX_STACK_LINE(446)
										Float tmp42 = (circle->worldCOMy - v0->y);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(446)
										ny = tmp42;
									}
									HX_STACK_LINE(446)
									Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(446)
									{
										HX_STACK_LINE(446)
										Float tmp42 = (nx * nx);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(446)
										Float tmp43 = (ny * ny);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(446)
										Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(446)
										tmp41 = ::Math_obj::sqrt(tmp44);
									}
									HX_STACK_LINE(446)
									Float len = tmp41;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(446)
									Float tmp42 = len;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(446)
									Float tmp43 = circle->radius;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(446)
									Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(446)
									best = tmp44;
									HX_STACK_LINE(446)
									bool tmp45 = (best < upperBound);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(446)
									if ((tmp45)){
										HX_STACK_LINE(446)
										bool tmp46 = (len == (int)0);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(446)
										if ((tmp46)){
											HX_STACK_LINE(446)
											nx = (int)1;
											HX_STACK_LINE(446)
											ny = (int)0;
											HX_STACK_LINE(446)
											{
											}
										}
										else{
											HX_STACK_LINE(446)
											Float tmp47 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(446)
											Float t = tmp47;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											hx::MultEq(nx,t);
											HX_STACK_LINE(446)
											hx::MultEq(ny,t);
										}
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											int t = (int)0;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											Float tmp47 = v0->x;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(446)
											Float tmp48 = (nx * t);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(446)
											Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(446)
											w1->x = tmp49;
											HX_STACK_LINE(446)
											Float tmp50 = v0->y;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(446)
											Float tmp51 = (ny * t);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(446)
											Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(446)
											w1->y = tmp52;
										}
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float tmp47 = circle->radius;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(446)
											Float tmp48 = -(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(446)
											Float t = tmp48;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											Float tmp49 = circle->worldCOMx;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(446)
											Float tmp50 = (nx * t);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(446)
											Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(446)
											w2->x = tmp51;
											HX_STACK_LINE(446)
											Float tmp52 = circle->worldCOMy;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(446)
											Float tmp53 = (ny * t);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(446)
											Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(446)
											w2->y = tmp54;
										}
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											axis->x = nx;
											HX_STACK_LINE(446)
											axis->y = ny;
											HX_STACK_LINE(446)
											{
											}
										}
									}
								}
								else{
									HX_STACK_LINE(446)
									Float tmp41 = dt;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(446)
									Float tmp42 = (v1->y * a0->gnormx);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(446)
									Float tmp43 = (v1->x * a0->gnormy);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(446)
									Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(446)
									bool tmp45 = (tmp41 >= tmp44);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(446)
									if ((tmp45)){
										HX_STACK_LINE(446)
										Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
										HX_STACK_LINE(446)
										Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float tmp46 = (circle->worldCOMx - v1->x);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(446)
											nx = tmp46;
											HX_STACK_LINE(446)
											Float tmp47 = (circle->worldCOMy - v1->y);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(446)
											ny = tmp47;
										}
										HX_STACK_LINE(446)
										Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float tmp47 = (nx * nx);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(446)
											Float tmp48 = (ny * ny);		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(446)
											Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(446)
											tmp46 = ::Math_obj::sqrt(tmp49);
										}
										HX_STACK_LINE(446)
										Float len = tmp46;		HX_STACK_VAR(len,"len");
										HX_STACK_LINE(446)
										Float tmp47 = len;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(446)
										Float tmp48 = circle->radius;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(446)
										Float tmp49 = (tmp47 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(446)
										best = tmp49;
										HX_STACK_LINE(446)
										bool tmp50 = (best < upperBound);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(446)
										if ((tmp50)){
											HX_STACK_LINE(446)
											bool tmp51 = (len == (int)0);		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(446)
											if ((tmp51)){
												HX_STACK_LINE(446)
												nx = (int)1;
												HX_STACK_LINE(446)
												ny = (int)0;
												HX_STACK_LINE(446)
												{
												}
											}
											else{
												HX_STACK_LINE(446)
												Float tmp52 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(446)
												Float t = tmp52;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(446)
												hx::MultEq(nx,t);
												HX_STACK_LINE(446)
												hx::MultEq(ny,t);
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												int t = (int)0;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(446)
												Float tmp52 = v1->x;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(446)
												Float tmp53 = (nx * t);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(446)
												Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(446)
												w1->x = tmp54;
												HX_STACK_LINE(446)
												Float tmp55 = v1->y;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(446)
												Float tmp56 = (ny * t);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(446)
												Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(446)
												w1->y = tmp57;
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float tmp52 = circle->radius;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(446)
												Float tmp53 = -(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(446)
												Float t = tmp53;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(446)
												Float tmp54 = circle->worldCOMx;		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(446)
												Float tmp55 = (nx * t);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(446)
												Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(446)
												w2->x = tmp56;
												HX_STACK_LINE(446)
												Float tmp57 = circle->worldCOMy;		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(446)
												Float tmp58 = (ny * t);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(446)
												Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(446)
												w2->y = tmp59;
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												axis->x = nx;
												HX_STACK_LINE(446)
												axis->y = ny;
												HX_STACK_LINE(446)
												{
												}
											}
										}
									}
									else{
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float tmp46 = circle->radius;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(446)
											Float tmp47 = -(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(446)
											Float t = tmp47;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											Float tmp48 = circle->worldCOMx;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(446)
											Float tmp49 = (a0->gnormx * t);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(446)
											Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(446)
											w2->x = tmp50;
											HX_STACK_LINE(446)
											Float tmp51 = circle->worldCOMy;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(446)
											Float tmp52 = (a0->gnormy * t);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(446)
											Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(446)
											w2->y = tmp53;
										}
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float tmp46 = best;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(446)
											Float tmp47 = -(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(446)
											Float t = tmp47;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											Float tmp48 = w2->x;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(446)
											Float tmp49 = (a0->gnormx * t);		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(446)
											Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(446)
											w1->x = tmp50;
											HX_STACK_LINE(446)
											Float tmp51 = w2->y;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(446)
											Float tmp52 = (a0->gnormy * t);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(446)
											Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(446)
											w1->y = tmp53;
										}
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											axis->x = a0->gnormx;
											HX_STACK_LINE(446)
											axis->y = a0->gnormy;
											HX_STACK_LINE(446)
											{
											}
										}
									}
								}
							}
							HX_STACK_LINE(446)
							bool tmp33 = swapped;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(446)
							if ((tmp33)){
								HX_STACK_LINE(446)
								Float tmp34 = axis->x;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(446)
								Float tmp35 = -(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(446)
								axis->x = tmp35;
								HX_STACK_LINE(446)
								Float tmp36 = axis->y;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(446)
								Float tmp37 = -(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(446)
								axis->y = tmp37;
							}
							HX_STACK_LINE(446)
							tmp18 = best;
						}
						else{
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Polygon p1 = s11->polygon;		HX_STACK_VAR(p1,"p1");
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Polygon p2 = s21->polygon;		HX_STACK_VAR(p2,"p2");
							HX_STACK_LINE(446)
							Float tmp31 = ((Float)-1e+100);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(446)
							Float best = tmp31;		HX_STACK_VAR(best,"best");
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
							HX_STACK_LINE(446)
							::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
							HX_STACK_LINE(446)
							int besti = (int)0;		HX_STACK_VAR(besti,"besti");
							HX_STACK_LINE(446)
							{
								HX_STACK_LINE(446)
								::zpp_nape::util::ZNPNode_ZPP_Edge tmp32 = p1->edges->head;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(446)
								::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp32;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(446)
								while((true)){
									HX_STACK_LINE(446)
									bool tmp33 = (cx_ite != null());		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(446)
									bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(446)
									if ((tmp34)){
										HX_STACK_LINE(446)
										break;
									}
									HX_STACK_LINE(446)
									::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(446)
									{
										HX_STACK_LINE(446)
										Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											::zpp_nape::geom::ZPP_Vec2 tmp35 = p2->gverts->next;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(446)
											::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp35;		HX_STACK_VAR(cx_ite1,"cx_ite1");
											HX_STACK_LINE(446)
											while((true)){
												HX_STACK_LINE(446)
												bool tmp36 = (cx_ite1 != null());		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(446)
												bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(446)
												if ((tmp37)){
													HX_STACK_LINE(446)
													break;
												}
												HX_STACK_LINE(446)
												::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(446)
												{
													HX_STACK_LINE(446)
													Float tmp38 = (a->gnormx * v->x);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(446)
													Float tmp39 = (a->gnormy * v->y);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(446)
													Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(446)
													Float k = tmp40;		HX_STACK_VAR(k,"k");
													HX_STACK_LINE(446)
													bool tmp41 = (k < min);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(446)
													if ((tmp41)){
														HX_STACK_LINE(446)
														min = k;
													}
												}
												HX_STACK_LINE(446)
												cx_ite1 = cx_ite1->next;
											}
										}
										HX_STACK_LINE(446)
										hx::SubEq(min,a->gprojection);
										HX_STACK_LINE(446)
										bool tmp35 = (min > upperBound);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(446)
										if ((tmp35)){
											HX_STACK_LINE(446)
											best = min;
											HX_STACK_LINE(446)
											break;
										}
										HX_STACK_LINE(446)
										bool tmp36 = (min > (int)0);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(446)
										if ((tmp36)){
											HX_STACK_LINE(446)
											bool tmp37 = (min > best);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(446)
											if ((tmp37)){
												HX_STACK_LINE(446)
												best = min;
												HX_STACK_LINE(446)
												a1 = a;
												HX_STACK_LINE(446)
												besti = (int)1;
											}
										}
										else{
											HX_STACK_LINE(446)
											bool tmp37 = (best < (int)0);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(446)
											bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(446)
											if ((tmp37)){
												HX_STACK_LINE(446)
												tmp38 = (min > best);
											}
											else{
												HX_STACK_LINE(446)
												tmp38 = false;
											}
											HX_STACK_LINE(446)
											if ((tmp38)){
												HX_STACK_LINE(446)
												best = min;
												HX_STACK_LINE(446)
												a1 = a;
												HX_STACK_LINE(446)
												besti = (int)1;
											}
										}
									}
									HX_STACK_LINE(446)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(446)
							bool tmp32 = (best < upperBound);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(446)
							if ((tmp32)){
								HX_STACK_LINE(446)
								{
									HX_STACK_LINE(446)
									::zpp_nape::util::ZNPNode_ZPP_Edge tmp33 = p2->edges->head;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(446)
									::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp33;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(446)
									while((true)){
										HX_STACK_LINE(446)
										bool tmp34 = (cx_ite != null());		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(446)
										bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(446)
										if ((tmp35)){
											HX_STACK_LINE(446)
											break;
										}
										HX_STACK_LINE(446)
										::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												::zpp_nape::geom::ZPP_Vec2 tmp36 = p1->gverts->next;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(446)
												::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp36;		HX_STACK_VAR(cx_ite1,"cx_ite1");
												HX_STACK_LINE(446)
												while((true)){
													HX_STACK_LINE(446)
													bool tmp37 = (cx_ite1 != null());		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(446)
													bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(446)
													if ((tmp38)){
														HX_STACK_LINE(446)
														break;
													}
													HX_STACK_LINE(446)
													::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
													HX_STACK_LINE(446)
													{
														HX_STACK_LINE(446)
														Float tmp39 = (a->gnormx * v->x);		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(446)
														Float tmp40 = (a->gnormy * v->y);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(446)
														Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(446)
														Float k = tmp41;		HX_STACK_VAR(k,"k");
														HX_STACK_LINE(446)
														bool tmp42 = (k < min);		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(446)
														if ((tmp42)){
															HX_STACK_LINE(446)
															min = k;
														}
													}
													HX_STACK_LINE(446)
													cx_ite1 = cx_ite1->next;
												}
											}
											HX_STACK_LINE(446)
											hx::SubEq(min,a->gprojection);
											HX_STACK_LINE(446)
											bool tmp36 = (min > upperBound);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(446)
											if ((tmp36)){
												HX_STACK_LINE(446)
												best = min;
												HX_STACK_LINE(446)
												break;
											}
											HX_STACK_LINE(446)
											bool tmp37 = (min > (int)0);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(446)
											if ((tmp37)){
												HX_STACK_LINE(446)
												bool tmp38 = (min > best);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(446)
												if ((tmp38)){
													HX_STACK_LINE(446)
													best = min;
													HX_STACK_LINE(446)
													a2 = a;
													HX_STACK_LINE(446)
													besti = (int)2;
												}
											}
											else{
												HX_STACK_LINE(446)
												bool tmp38 = (best < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(446)
												bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(446)
												if ((tmp38)){
													HX_STACK_LINE(446)
													tmp39 = (min > best);
												}
												else{
													HX_STACK_LINE(446)
													tmp39 = false;
												}
												HX_STACK_LINE(446)
												if ((tmp39)){
													HX_STACK_LINE(446)
													best = min;
													HX_STACK_LINE(446)
													a2 = a;
													HX_STACK_LINE(446)
													besti = (int)2;
												}
											}
										}
										HX_STACK_LINE(446)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(446)
								bool tmp33 = (best < upperBound);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(446)
								if ((tmp33)){
									HX_STACK_LINE(446)
									::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
									HX_STACK_LINE(446)
									::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
									HX_STACK_LINE(446)
									::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
									HX_STACK_LINE(446)
									bool tmp34 = (besti == (int)1);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(446)
									if ((tmp34)){
										HX_STACK_LINE(446)
										q1 = p1;
										HX_STACK_LINE(446)
										q2 = p2;
										HX_STACK_LINE(446)
										ax = a1;
									}
									else{
										HX_STACK_LINE(446)
										q1 = p2;
										HX_STACK_LINE(446)
										q2 = p1;
										HX_STACK_LINE(446)
										ax = a2;
										HX_STACK_LINE(446)
										::zpp_nape::geom::ZPP_Vec2 tmp35 = w1;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(446)
										w1 = w2;
										HX_STACK_LINE(446)
										w2 = tmp35;
										HX_STACK_LINE(446)
										bool tmp36 = swapped;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(446)
										bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(446)
										swapped = tmp37;
									}
									HX_STACK_LINE(446)
									::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
									HX_STACK_LINE(446)
									Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
									HX_STACK_LINE(446)
									{
										HX_STACK_LINE(446)
										::zpp_nape::util::ZNPNode_ZPP_Edge tmp35 = q2->edges->head;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(446)
										::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp35;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(446)
										while((true)){
											HX_STACK_LINE(446)
											bool tmp36 = (cx_ite != null());		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(446)
											bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(446)
											if ((tmp37)){
												HX_STACK_LINE(446)
												break;
											}
											HX_STACK_LINE(446)
											::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float tmp38 = (ax->gnormx * a->gnormx);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(446)
												Float tmp39 = (ax->gnormy * a->gnormy);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(446)
												Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(446)
												Float k = tmp40;		HX_STACK_VAR(k,"k");
												HX_STACK_LINE(446)
												bool tmp41 = (k < min);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(446)
												if ((tmp41)){
													HX_STACK_LINE(446)
													min = k;
													HX_STACK_LINE(446)
													ay = a;
												}
											}
											HX_STACK_LINE(446)
											cx_ite = cx_ite->next;
										}
									}
									HX_STACK_LINE(446)
									bool tmp35 = swapped;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(446)
									if ((tmp35)){
										HX_STACK_LINE(446)
										Float tmp36 = ax->gnormx;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(446)
										Float tmp37 = -(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(446)
										axis->x = tmp37;
										HX_STACK_LINE(446)
										Float tmp38 = ax->gnormy;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(446)
										Float tmp39 = -(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(446)
										axis->y = tmp39;
										HX_STACK_LINE(446)
										{
										}
									}
									else{
										HX_STACK_LINE(446)
										axis->x = ax->gnormx;
										HX_STACK_LINE(446)
										axis->y = ax->gnormy;
										HX_STACK_LINE(446)
										{
										}
									}
									HX_STACK_LINE(446)
									bool tmp36 = (best >= (int)0);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(446)
									if ((tmp36)){
										HX_STACK_LINE(446)
										::zpp_nape::geom::ZPP_Vec2 v0 = ax->gp0;		HX_STACK_VAR(v0,"v0");
										HX_STACK_LINE(446)
										::zpp_nape::geom::ZPP_Vec2 v1 = ax->gp1;		HX_STACK_VAR(v1,"v1");
										HX_STACK_LINE(446)
										::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
										HX_STACK_LINE(446)
										::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
										HX_STACK_LINE(446)
										Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
										HX_STACK_LINE(446)
										Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
										HX_STACK_LINE(446)
										Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
										HX_STACK_LINE(446)
										Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float tmp37 = (v1->x - v0->x);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(446)
											vx = tmp37;
											HX_STACK_LINE(446)
											Float tmp38 = (v1->y - v0->y);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(446)
											vy = tmp38;
										}
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float tmp37 = (q11->x - q0->x);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(446)
											qx = tmp37;
											HX_STACK_LINE(446)
											Float tmp38 = (q11->y - q0->y);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(446)
											qy = tmp38;
										}
										HX_STACK_LINE(446)
										Float tmp37 = (vx * vx);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(446)
										Float tmp38 = (vy * vy);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(446)
										Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(446)
										Float tmp40 = (Float((int)1) / Float(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(446)
										Float vdot = tmp40;		HX_STACK_VAR(vdot,"vdot");
										HX_STACK_LINE(446)
										Float tmp41 = (qx * qx);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(446)
										Float tmp42 = (qy * qy);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(446)
										Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(446)
										Float tmp44 = (Float((int)1) / Float(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(446)
										Float qdot = tmp44;		HX_STACK_VAR(qdot,"qdot");
										HX_STACK_LINE(446)
										Float tmp45 = vx;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(446)
										Float tmp46 = (v0->x - q0->x);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(446)
										Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(446)
										Float tmp48 = vy;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(446)
										Float tmp49 = (v0->y - q0->y);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(446)
										Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(446)
										Float tmp51 = (tmp47 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(446)
										Float tmp52 = -(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(446)
										Float tmp53 = vdot;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(446)
										Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(446)
										Float t1 = tmp54;		HX_STACK_VAR(t1,"t1");
										HX_STACK_LINE(446)
										Float tmp55 = vx;		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(446)
										Float tmp56 = (v0->x - q11->x);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(446)
										Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(446)
										Float tmp58 = vy;		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(446)
										Float tmp59 = (v0->y - q11->y);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(446)
										Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(446)
										Float tmp61 = (tmp57 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(446)
										Float tmp62 = -(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(446)
										Float tmp63 = vdot;		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(446)
										Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(446)
										Float t2 = tmp64;		HX_STACK_VAR(t2,"t2");
										HX_STACK_LINE(446)
										Float tmp65 = qx;		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(446)
										Float tmp66 = (q0->x - v0->x);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(446)
										Float tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(446)
										Float tmp68 = qy;		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(446)
										Float tmp69 = (q0->y - v0->y);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(446)
										Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(446)
										Float tmp71 = (tmp67 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(446)
										Float tmp72 = -(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(446)
										Float tmp73 = qdot;		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(446)
										Float tmp74 = (tmp72 * tmp73);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(446)
										Float s12 = tmp74;		HX_STACK_VAR(s12,"s12");
										HX_STACK_LINE(446)
										Float tmp75 = qx;		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(446)
										Float tmp76 = (q0->x - v1->x);		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(446)
										Float tmp77 = (tmp75 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(446)
										Float tmp78 = qy;		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(446)
										Float tmp79 = (q0->y - v1->y);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(446)
										Float tmp80 = (tmp78 * tmp79);		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(446)
										Float tmp81 = (tmp77 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(446)
										Float tmp82 = -(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(446)
										Float tmp83 = qdot;		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(446)
										Float tmp84 = (tmp82 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(446)
										Float s22 = tmp84;		HX_STACK_VAR(s22,"s22");
										HX_STACK_LINE(446)
										bool tmp85 = (t1 < (int)0);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(446)
										if ((tmp85)){
											HX_STACK_LINE(446)
											t1 = (int)0;
										}
										else{
											HX_STACK_LINE(446)
											bool tmp86 = (t1 > (int)1);		HX_STACK_VAR(tmp86,"tmp86");
											HX_STACK_LINE(446)
											if ((tmp86)){
												HX_STACK_LINE(446)
												t1 = (int)1;
											}
										}
										HX_STACK_LINE(446)
										bool tmp86 = (t2 < (int)0);		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(446)
										if ((tmp86)){
											HX_STACK_LINE(446)
											t2 = (int)0;
										}
										else{
											HX_STACK_LINE(446)
											bool tmp87 = (t2 > (int)1);		HX_STACK_VAR(tmp87,"tmp87");
											HX_STACK_LINE(446)
											if ((tmp87)){
												HX_STACK_LINE(446)
												t2 = (int)1;
											}
										}
										HX_STACK_LINE(446)
										bool tmp87 = (s12 < (int)0);		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(446)
										if ((tmp87)){
											HX_STACK_LINE(446)
											s12 = (int)0;
										}
										else{
											HX_STACK_LINE(446)
											bool tmp88 = (s12 > (int)1);		HX_STACK_VAR(tmp88,"tmp88");
											HX_STACK_LINE(446)
											if ((tmp88)){
												HX_STACK_LINE(446)
												s12 = (int)1;
											}
										}
										HX_STACK_LINE(446)
										bool tmp88 = (s22 < (int)0);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(446)
										if ((tmp88)){
											HX_STACK_LINE(446)
											s22 = (int)0;
										}
										else{
											HX_STACK_LINE(446)
											bool tmp89 = (s22 > (int)1);		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(446)
											if ((tmp89)){
												HX_STACK_LINE(446)
												s22 = (int)1;
											}
										}
										HX_STACK_LINE(446)
										Float f1x = ((Float)0.0);		HX_STACK_VAR(f1x,"f1x");
										HX_STACK_LINE(446)
										Float f1y = ((Float)0.0);		HX_STACK_VAR(f1y,"f1y");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float t = t1;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											Float tmp89 = v0->x;		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(446)
											Float tmp90 = (vx * t);		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(446)
											Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(446)
											f1x = tmp91;
											HX_STACK_LINE(446)
											Float tmp92 = v0->y;		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(446)
											Float tmp93 = (vy * t);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(446)
											Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(446)
											f1y = tmp94;
										}
										HX_STACK_LINE(446)
										Float f2x = ((Float)0.0);		HX_STACK_VAR(f2x,"f2x");
										HX_STACK_LINE(446)
										Float f2y = ((Float)0.0);		HX_STACK_VAR(f2y,"f2y");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float t = t2;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											Float tmp89 = v0->x;		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(446)
											Float tmp90 = (vx * t);		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(446)
											Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(446)
											f2x = tmp91;
											HX_STACK_LINE(446)
											Float tmp92 = v0->y;		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(446)
											Float tmp93 = (vy * t);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(446)
											Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(446)
											f2y = tmp94;
										}
										HX_STACK_LINE(446)
										Float g1x = ((Float)0.0);		HX_STACK_VAR(g1x,"g1x");
										HX_STACK_LINE(446)
										Float g1y = ((Float)0.0);		HX_STACK_VAR(g1y,"g1y");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float t = s12;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											Float tmp89 = q0->x;		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(446)
											Float tmp90 = (qx * t);		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(446)
											Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(446)
											g1x = tmp91;
											HX_STACK_LINE(446)
											Float tmp92 = q0->y;		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(446)
											Float tmp93 = (qy * t);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(446)
											Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(446)
											g1y = tmp94;
										}
										HX_STACK_LINE(446)
										Float g2x = ((Float)0.0);		HX_STACK_VAR(g2x,"g2x");
										HX_STACK_LINE(446)
										Float g2y = ((Float)0.0);		HX_STACK_VAR(g2y,"g2y");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float t = s22;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(446)
											Float tmp89 = q0->x;		HX_STACK_VAR(tmp89,"tmp89");
											HX_STACK_LINE(446)
											Float tmp90 = (qx * t);		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(446)
											Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(446)
											g2x = tmp91;
											HX_STACK_LINE(446)
											Float tmp92 = q0->y;		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(446)
											Float tmp93 = (qy * t);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(446)
											Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(446)
											g2y = tmp94;
										}
										HX_STACK_LINE(446)
										Float tmp89;		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(446)
											Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float tmp90 = (f1x - q0->x);		HX_STACK_VAR(tmp90,"tmp90");
												HX_STACK_LINE(446)
												dx = tmp90;
												HX_STACK_LINE(446)
												Float tmp91 = (f1y - q0->y);		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(446)
												dy = tmp91;
											}
											HX_STACK_LINE(446)
											Float tmp90 = (dx * dx);		HX_STACK_VAR(tmp90,"tmp90");
											HX_STACK_LINE(446)
											Float tmp91 = (dy * dy);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(446)
											tmp89 = (tmp90 + tmp91);
										}
										HX_STACK_LINE(446)
										Float d1 = tmp89;		HX_STACK_VAR(d1,"d1");
										HX_STACK_LINE(446)
										Float tmp90;		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(446)
											Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float tmp91 = (f2x - q11->x);		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(446)
												dx = tmp91;
												HX_STACK_LINE(446)
												Float tmp92 = (f2y - q11->y);		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(446)
												dy = tmp92;
											}
											HX_STACK_LINE(446)
											Float tmp91 = (dx * dx);		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(446)
											Float tmp92 = (dy * dy);		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(446)
											tmp90 = (tmp91 + tmp92);
										}
										HX_STACK_LINE(446)
										Float d2 = tmp90;		HX_STACK_VAR(d2,"d2");
										HX_STACK_LINE(446)
										Float tmp91;		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(446)
											Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float tmp92 = (g1x - v0->x);		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(446)
												dx = tmp92;
												HX_STACK_LINE(446)
												Float tmp93 = (g1y - v0->y);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(446)
												dy = tmp93;
											}
											HX_STACK_LINE(446)
											Float tmp92 = (dx * dx);		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(446)
											Float tmp93 = (dy * dy);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(446)
											tmp91 = (tmp92 + tmp93);
										}
										HX_STACK_LINE(446)
										Float e1 = tmp91;		HX_STACK_VAR(e1,"e1");
										HX_STACK_LINE(446)
										Float tmp92;		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
											HX_STACK_LINE(446)
											Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float tmp93 = (g2x - v1->x);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(446)
												dx = tmp93;
												HX_STACK_LINE(446)
												Float tmp94 = (g2y - v1->y);		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(446)
												dy = tmp94;
											}
											HX_STACK_LINE(446)
											Float tmp93 = (dx * dx);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(446)
											Float tmp94 = (dy * dy);		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(446)
											tmp92 = (tmp93 + tmp94);
										}
										HX_STACK_LINE(446)
										Float e2 = tmp92;		HX_STACK_VAR(e2,"e2");
										HX_STACK_LINE(446)
										Float minfx = ((Float)0.0);		HX_STACK_VAR(minfx,"minfx");
										HX_STACK_LINE(446)
										Float minfy = ((Float)0.0);		HX_STACK_VAR(minfy,"minfy");
										HX_STACK_LINE(446)
										::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
										HX_STACK_LINE(446)
										bool tmp93 = (d1 < d2);		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(446)
										if ((tmp93)){
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												minfx = f1x;
												HX_STACK_LINE(446)
												minfy = f1y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											minq = q0;
										}
										else{
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												minfx = f2x;
												HX_STACK_LINE(446)
												minfy = f2y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											minq = q11;
											HX_STACK_LINE(446)
											d1 = d2;
										}
										HX_STACK_LINE(446)
										Float mingx = ((Float)0.0);		HX_STACK_VAR(mingx,"mingx");
										HX_STACK_LINE(446)
										Float mingy = ((Float)0.0);		HX_STACK_VAR(mingy,"mingy");
										HX_STACK_LINE(446)
										::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
										HX_STACK_LINE(446)
										bool tmp94 = (e1 < e2);		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(446)
										if ((tmp94)){
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												mingx = g1x;
												HX_STACK_LINE(446)
												mingy = g1y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											minv = v0;
										}
										else{
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												mingx = g2x;
												HX_STACK_LINE(446)
												mingy = g2y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											minv = v1;
											HX_STACK_LINE(446)
											e1 = e2;
										}
										HX_STACK_LINE(446)
										bool tmp95 = (d1 < e1);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(446)
										if ((tmp95)){
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												w1->x = minfx;
												HX_STACK_LINE(446)
												w1->y = minfy;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												w2->x = minq->x;
												HX_STACK_LINE(446)
												w2->y = minq->y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											Float tmp96 = d1;		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(446)
											Float tmp97 = ::Math_obj::sqrt(tmp96);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(446)
											best = tmp97;
										}
										else{
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												w2->x = mingx;
												HX_STACK_LINE(446)
												w2->y = mingy;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												w1->x = minv->x;
												HX_STACK_LINE(446)
												w1->y = minv->y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											Float tmp96 = e1;		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(446)
											Float tmp97 = ::Math_obj::sqrt(tmp96);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(446)
											best = tmp97;
										}
										HX_STACK_LINE(446)
										bool tmp96 = (best != (int)0);		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(446)
										if ((tmp96)){
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float tmp97 = (w2->x - w1->x);		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(446)
												axis->x = tmp97;
												HX_STACK_LINE(446)
												Float tmp98 = (w2->y - w1->y);		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(446)
												axis->y = tmp98;
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float tmp97 = (Float(((Float)1.0)) / Float(best));		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(446)
												Float t = tmp97;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(446)
												hx::MultEq(axis->x,t);
												HX_STACK_LINE(446)
												hx::MultEq(axis->y,t);
											}
											HX_STACK_LINE(446)
											bool tmp97 = swapped;		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(446)
											if ((tmp97)){
												HX_STACK_LINE(446)
												Float tmp98 = axis->x;		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(446)
												Float tmp99 = -(tmp98);		HX_STACK_VAR(tmp99,"tmp99");
												HX_STACK_LINE(446)
												axis->x = tmp99;
												HX_STACK_LINE(446)
												Float tmp100 = axis->y;		HX_STACK_VAR(tmp100,"tmp100");
												HX_STACK_LINE(446)
												Float tmp101 = -(tmp100);		HX_STACK_VAR(tmp101,"tmp101");
												HX_STACK_LINE(446)
												axis->y = tmp101;
											}
										}
										HX_STACK_LINE(446)
										tmp18 = best;
									}
									else{
										HX_STACK_LINE(446)
										Float c0x = ((Float)0.0);		HX_STACK_VAR(c0x,"c0x");
										HX_STACK_LINE(446)
										Float c0y = ((Float)0.0);		HX_STACK_VAR(c0y,"c0y");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float tmp37 = ay->gp0->x;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(446)
											c0x = tmp37;
											HX_STACK_LINE(446)
											Float tmp38 = ay->gp0->y;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(446)
											c0y = tmp38;
											HX_STACK_LINE(446)
											{
											}
										}
										HX_STACK_LINE(446)
										Float c1x = ((Float)0.0);		HX_STACK_VAR(c1x,"c1x");
										HX_STACK_LINE(446)
										Float c1y = ((Float)0.0);		HX_STACK_VAR(c1y,"c1y");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float tmp37 = ay->gp1->x;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(446)
											c1x = tmp37;
											HX_STACK_LINE(446)
											Float tmp38 = ay->gp1->y;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(446)
											c1y = tmp38;
											HX_STACK_LINE(446)
											{
											}
										}
										HX_STACK_LINE(446)
										Float dvx = ((Float)0.0);		HX_STACK_VAR(dvx,"dvx");
										HX_STACK_LINE(446)
										Float dvy = ((Float)0.0);		HX_STACK_VAR(dvy,"dvy");
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											Float tmp37 = (c1x - c0x);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(446)
											dvx = tmp37;
											HX_STACK_LINE(446)
											Float tmp38 = (c1y - c0y);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(446)
											dvy = tmp38;
										}
										HX_STACK_LINE(446)
										Float tmp37 = (ax->gnormy * c0x);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(446)
										Float tmp38 = (ax->gnormx * c0y);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(446)
										Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(446)
										Float d0 = tmp39;		HX_STACK_VAR(d0,"d0");
										HX_STACK_LINE(446)
										Float tmp40 = (ax->gnormy * c1x);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(446)
										Float tmp41 = (ax->gnormx * c1y);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(446)
										Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(446)
										Float d1 = tmp42;		HX_STACK_VAR(d1,"d1");
										HX_STACK_LINE(446)
										Float tmp43 = (d1 - d0);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(446)
										Float tmp44 = (Float((int)1) / Float(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(446)
										Float den = tmp44;		HX_STACK_VAR(den,"den");
										HX_STACK_LINE(446)
										Float tmp45 = ax->tp1;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(446)
										Float tmp46 = -(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(446)
										Float tmp47 = d0;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(446)
										Float tmp48 = (tmp46 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(446)
										Float tmp49 = den;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(446)
										Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(446)
										Float t = tmp50;		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(446)
										Float tmp51 = t;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(446)
										Float tmp52 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(446)
										bool tmp53 = (tmp51 > tmp52);		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(446)
										if ((tmp53)){
											HX_STACK_LINE(446)
											Float t1 = t;		HX_STACK_VAR(t1,"t1");
											HX_STACK_LINE(446)
											Float tmp54 = (dvx * t1);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(446)
											hx::AddEq(c0x,tmp54);
											HX_STACK_LINE(446)
											Float tmp55 = (dvy * t1);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(446)
											hx::AddEq(c0y,tmp55);
										}
										HX_STACK_LINE(446)
										Float tmp54 = ax->tp0;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(446)
										Float tmp55 = -(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(446)
										Float tmp56 = d1;		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(446)
										Float tmp57 = (tmp55 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(446)
										Float tmp58 = den;		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(446)
										Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(446)
										Float t1 = tmp59;		HX_STACK_VAR(t1,"t1");
										HX_STACK_LINE(446)
										Float tmp60 = t1;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(446)
										Float tmp61 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(446)
										Float tmp62 = -(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(446)
										bool tmp63 = (tmp60 < tmp62);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(446)
										if ((tmp63)){
											HX_STACK_LINE(446)
											Float t2 = t1;		HX_STACK_VAR(t2,"t2");
											HX_STACK_LINE(446)
											Float tmp64 = (dvx * t2);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(446)
											hx::AddEq(c1x,tmp64);
											HX_STACK_LINE(446)
											Float tmp65 = (dvy * t2);		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(446)
											hx::AddEq(c1y,tmp65);
										}
										HX_STACK_LINE(446)
										Float tmp64 = (c0x * ax->gnormx);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(446)
										Float tmp65 = (c0y * ax->gnormy);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(446)
										Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(446)
										Float tmp67 = ax->gprojection;		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(446)
										Float tmp68 = (tmp66 - tmp67);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(446)
										Float c0d = tmp68;		HX_STACK_VAR(c0d,"c0d");
										HX_STACK_LINE(446)
										Float tmp69 = (c1x * ax->gnormx);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(446)
										Float tmp70 = (c1y * ax->gnormy);		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(446)
										Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(446)
										Float tmp72 = ax->gprojection;		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(446)
										Float tmp73 = (tmp71 - tmp72);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(446)
										Float c1d = tmp73;		HX_STACK_VAR(c1d,"c1d");
										HX_STACK_LINE(446)
										bool tmp74 = (c0d < c1d);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(446)
										if ((tmp74)){
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												w2->x = c0x;
												HX_STACK_LINE(446)
												w2->y = c0y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float tmp75 = c0d;		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(446)
												Float tmp76 = -(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(446)
												Float t2 = tmp76;		HX_STACK_VAR(t2,"t2");
												HX_STACK_LINE(446)
												Float tmp77 = w2->x;		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(446)
												Float tmp78 = (ax->gnormx * t2);		HX_STACK_VAR(tmp78,"tmp78");
												HX_STACK_LINE(446)
												Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
												HX_STACK_LINE(446)
												w1->x = tmp79;
												HX_STACK_LINE(446)
												Float tmp80 = w2->y;		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(446)
												Float tmp81 = (ax->gnormy * t2);		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(446)
												Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(446)
												w1->y = tmp82;
											}
											HX_STACK_LINE(446)
											tmp18 = c0d;
										}
										else{
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												w2->x = c1x;
												HX_STACK_LINE(446)
												w2->y = c1y;
												HX_STACK_LINE(446)
												{
												}
											}
											HX_STACK_LINE(446)
											{
												HX_STACK_LINE(446)
												Float tmp75 = c1d;		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(446)
												Float tmp76 = -(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(446)
												Float t2 = tmp76;		HX_STACK_VAR(t2,"t2");
												HX_STACK_LINE(446)
												Float tmp77 = w2->x;		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(446)
												Float tmp78 = (ax->gnormx * t2);		HX_STACK_VAR(tmp78,"tmp78");
												HX_STACK_LINE(446)
												Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
												HX_STACK_LINE(446)
												w1->x = tmp79;
												HX_STACK_LINE(446)
												Float tmp80 = w2->y;		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(446)
												Float tmp81 = (ax->gnormy * t2);		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(446)
												Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(446)
												w1->y = tmp82;
											}
											HX_STACK_LINE(446)
											tmp18 = c1d;
										}
									}
								}
								else{
									HX_STACK_LINE(446)
									tmp18 = upperBound;
								}
							}
							else{
								HX_STACK_LINE(446)
								tmp18 = upperBound;
							}
						}
					}
				}
				HX_STACK_LINE(446)
				Float tmp19 = negRadius;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(446)
				Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(446)
				Float sep1 = tmp20;		HX_STACK_VAR(sep1,"sep1");
				HX_STACK_LINE(447)
				Float tmp21 = (deltax * axis->x);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(447)
				Float tmp22 = (deltay * axis->y);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(447)
				Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(447)
				Float dot1 = tmp23;		HX_STACK_VAR(dot1,"dot1");
				HX_STACK_LINE(448)
				Float tmp24 = sep1;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(448)
				Float tmp25 = ::nape::Config_obj::distanceThresholdCCD;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(448)
				bool tmp26 = (tmp24 < tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(448)
				if ((tmp26)){
					HX_STACK_LINE(449)
					Float d1x = ((Float)0.0);		HX_STACK_VAR(d1x,"d1x");
					HX_STACK_LINE(450)
					Float d1y = ((Float)0.0);		HX_STACK_VAR(d1y,"d1y");
					HX_STACK_LINE(451)
					{
						HX_STACK_LINE(452)
						Float tmp27 = (c1->x - b1->posx);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(452)
						d1x = tmp27;
						HX_STACK_LINE(453)
						Float tmp28 = (c1->y - b1->posy);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(453)
						d1y = tmp28;
					}
					HX_STACK_LINE(455)
					Float tmp27 = dot1;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(455)
					Float tmp28 = b1->sweep_angvel;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(455)
					Float tmp29 = (axis->y * d1x);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(455)
					Float tmp30 = (axis->x * d1y);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(455)
					Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(455)
					Float tmp32 = (tmp28 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(455)
					Float tmp33 = (tmp27 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(455)
					Float proj = tmp33;		HX_STACK_VAR(proj,"proj");
					HX_STACK_LINE(456)
					bool tmp34 = (proj > (int)0);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(456)
					if ((tmp34)){
						HX_STACK_LINE(457)
						toi->slipped = true;
					}
					HX_STACK_LINE(459)
					bool tmp35 = (proj <= (int)0);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(459)
					bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(459)
					bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(459)
					if ((tmp36)){
						HX_STACK_LINE(459)
						Float tmp38 = sep1;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(459)
						Float tmp39 = ::nape::Config_obj::distanceThresholdCCD;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(459)
						Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(459)
						Float tmp41 = (tmp40 * ((Float)0.5));		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(459)
						Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(459)
						tmp37 = (tmp38 < tmp42);
					}
					else{
						HX_STACK_LINE(459)
						tmp37 = true;
					}
					HX_STACK_LINE(459)
					if ((tmp37)){
						HX_STACK_LINE(460)
						break;
					}
				}
				HX_STACK_LINE(463)
				curTOI = (int)-1;
				HX_STACK_LINE(464)
				break;
			}
			HX_STACK_LINE(466)
			int tmp18 = ++(curIter);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(466)
			bool tmp19 = (tmp18 >= (int)40);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(466)
			if ((tmp19)){
				HX_STACK_LINE(467)
				bool tmp20 = (sep > negRadius);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(467)
				if ((tmp20)){
					HX_STACK_LINE(468)
					toi->failed = true;
				}
				HX_STACK_LINE(470)
				break;
			}
		}
		HX_STACK_LINE(473)
		toi->toi = curTOI;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_SweepDistance_obj,staticSweep,(void))

Float ZPP_SweepDistance_obj::distanceBody( ::zpp_nape::phys::ZPP_Body b1,::zpp_nape::phys::ZPP_Body b2,::zpp_nape::geom::ZPP_Vec2 w1,::zpp_nape::geom::ZPP_Vec2 w2){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SweepDistance","distanceBody",0x2a59ca7a,"zpp_nape.geom.ZPP_SweepDistance.distanceBody","zpp_nape/geom/SweepDistance.hx",475,0x2645f2ee)
	HX_STACK_ARG(b1,"b1")
	HX_STACK_ARG(b2,"b2")
	HX_STACK_ARG(w1,"w1")
	HX_STACK_ARG(w2,"w2")
	HX_STACK_LINE(476)
	::zpp_nape::geom::ZPP_Vec2 t1;		HX_STACK_VAR(t1,"t1");
	HX_STACK_LINE(477)
	{
		HX_STACK_LINE(478)
		::zpp_nape::geom::ZPP_Vec2 tmp = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(478)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(478)
		if ((tmp1)){
			HX_STACK_LINE(479)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(479)
			t1 = tmp2;
		}
		else{
			HX_STACK_LINE(485)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(485)
			t1 = tmp2;
			HX_STACK_LINE(486)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = t1->next;
			HX_STACK_LINE(487)
			t1->next = null();
		}
		HX_STACK_LINE(492)
		t1->weak = false;
	}
	HX_STACK_LINE(494)
	::zpp_nape::geom::ZPP_Vec2 t2;		HX_STACK_VAR(t2,"t2");
	HX_STACK_LINE(495)
	{
		HX_STACK_LINE(496)
		::zpp_nape::geom::ZPP_Vec2 tmp = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(496)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(496)
		if ((tmp1)){
			HX_STACK_LINE(497)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(497)
			t2 = tmp2;
		}
		else{
			HX_STACK_LINE(503)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(503)
			t2 = tmp2;
			HX_STACK_LINE(504)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = t2->next;
			HX_STACK_LINE(505)
			t2->next = null();
		}
		HX_STACK_LINE(510)
		t2->weak = false;
	}
	HX_STACK_LINE(512)
	::zpp_nape::geom::ZPP_Vec2 ax;		HX_STACK_VAR(ax,"ax");
	HX_STACK_LINE(513)
	{
		HX_STACK_LINE(514)
		::zpp_nape::geom::ZPP_Vec2 tmp = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(514)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(514)
		if ((tmp1)){
			HX_STACK_LINE(515)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(515)
			ax = tmp2;
		}
		else{
			HX_STACK_LINE(521)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(521)
			ax = tmp2;
			HX_STACK_LINE(522)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ax->next;
			HX_STACK_LINE(523)
			ax->next = null();
		}
		HX_STACK_LINE(528)
		ax->weak = false;
	}
	HX_STACK_LINE(530)
	Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(531)
	{
		HX_STACK_LINE(532)
		::zpp_nape::util::ZNPNode_ZPP_Shape tmp = b1->shapes->head;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(532)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = tmp;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(533)
		while((true)){
			HX_STACK_LINE(533)
			bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(533)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(533)
			if ((tmp2)){
				HX_STACK_LINE(533)
				break;
			}
			HX_STACK_LINE(534)
			::zpp_nape::shape::ZPP_Shape s1 = cx_ite->elt;		HX_STACK_VAR(s1,"s1");
			HX_STACK_LINE(536)
			{
				HX_STACK_LINE(537)
				::zpp_nape::util::ZNPNode_ZPP_Shape tmp3 = b2->shapes->head;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(537)
				::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite1 = tmp3;		HX_STACK_VAR(cx_ite1,"cx_ite1");
				HX_STACK_LINE(538)
				while((true)){
					HX_STACK_LINE(538)
					bool tmp4 = (cx_ite1 != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(538)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(538)
					if ((tmp5)){
						HX_STACK_LINE(538)
						break;
					}
					HX_STACK_LINE(539)
					::zpp_nape::shape::ZPP_Shape s2 = cx_ite1->elt;		HX_STACK_VAR(s2,"s2");
					HX_STACK_LINE(540)
					{
						HX_STACK_LINE(541)
						Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(541)
						{
							HX_STACK_LINE(541)
							::zpp_nape::shape::ZPP_Shape s11 = s1;		HX_STACK_VAR(s11,"s11");
							HX_STACK_LINE(541)
							::zpp_nape::shape::ZPP_Shape s21 = s2;		HX_STACK_VAR(s21,"s21");
							HX_STACK_LINE(541)
							::zpp_nape::geom::ZPP_Vec2 w11 = t1;		HX_STACK_VAR(w11,"w11");
							HX_STACK_LINE(541)
							::zpp_nape::geom::ZPP_Vec2 w21 = t2;		HX_STACK_VAR(w21,"w21");
							HX_STACK_LINE(541)
							int tmp7 = s11->type;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(541)
							int tmp8 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(541)
							bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(541)
							bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(541)
							if ((tmp9)){
								HX_STACK_LINE(541)
								int tmp11 = s21->type;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(541)
								int tmp12 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(541)
								int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(541)
								tmp10 = (tmp11 == tmp13);
							}
							else{
								HX_STACK_LINE(541)
								tmp10 = false;
							}
							HX_STACK_LINE(541)
							if ((tmp10)){
								HX_STACK_LINE(541)
								::zpp_nape::shape::ZPP_Circle c1 = s11->circle;		HX_STACK_VAR(c1,"c1");
								HX_STACK_LINE(541)
								::zpp_nape::shape::ZPP_Circle c2 = s21->circle;		HX_STACK_VAR(c2,"c2");
								HX_STACK_LINE(541)
								Float dist;		HX_STACK_VAR(dist,"dist");
								HX_STACK_LINE(541)
								{
									HX_STACK_LINE(541)
									Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
									HX_STACK_LINE(541)
									Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
									HX_STACK_LINE(541)
									{
										HX_STACK_LINE(541)
										Float tmp11 = (c2->worldCOMx - c1->worldCOMx);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(541)
										nx = tmp11;
										HX_STACK_LINE(541)
										Float tmp12 = (c2->worldCOMy - c1->worldCOMy);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(541)
										ny = tmp12;
									}
									HX_STACK_LINE(541)
									Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(541)
									{
										HX_STACK_LINE(541)
										Float tmp12 = (nx * nx);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(541)
										Float tmp13 = (ny * ny);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(541)
										Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(541)
										tmp11 = ::Math_obj::sqrt(tmp14);
									}
									HX_STACK_LINE(541)
									Float len = tmp11;		HX_STACK_VAR(len,"len");
									HX_STACK_LINE(541)
									Float tmp12 = len;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(541)
									Float tmp13 = (c1->radius + c2->radius);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(541)
									Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(541)
									dist = tmp14;
									HX_STACK_LINE(541)
									bool tmp15 = (dist < min);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(541)
									if ((tmp15)){
										HX_STACK_LINE(541)
										bool tmp16 = (len == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(541)
										if ((tmp16)){
											HX_STACK_LINE(541)
											nx = (int)1;
											HX_STACK_LINE(541)
											ny = (int)0;
											HX_STACK_LINE(541)
											{
											}
										}
										else{
											HX_STACK_LINE(541)
											Float tmp17 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(541)
											Float t = tmp17;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(541)
											hx::MultEq(nx,t);
											HX_STACK_LINE(541)
											hx::MultEq(ny,t);
										}
										HX_STACK_LINE(541)
										{
											HX_STACK_LINE(541)
											Float t = c1->radius;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(541)
											Float tmp17 = c1->worldCOMx;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(541)
											Float tmp18 = (nx * t);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(541)
											Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(541)
											w11->x = tmp19;
											HX_STACK_LINE(541)
											Float tmp20 = c1->worldCOMy;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(541)
											Float tmp21 = (ny * t);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(541)
											Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(541)
											w11->y = tmp22;
										}
										HX_STACK_LINE(541)
										{
											HX_STACK_LINE(541)
											Float tmp17 = c2->radius;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(541)
											Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(541)
											Float t = tmp18;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(541)
											Float tmp19 = c2->worldCOMx;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(541)
											Float tmp20 = (nx * t);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(541)
											Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(541)
											w21->x = tmp21;
											HX_STACK_LINE(541)
											Float tmp22 = c2->worldCOMy;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(541)
											Float tmp23 = (ny * t);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(541)
											Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(541)
											w21->y = tmp24;
										}
										HX_STACK_LINE(541)
										{
											HX_STACK_LINE(541)
											ax->x = nx;
											HX_STACK_LINE(541)
											ax->y = ny;
											HX_STACK_LINE(541)
											{
											}
										}
									}
								}
								HX_STACK_LINE(541)
								tmp6 = dist;
							}
							else{
								HX_STACK_LINE(541)
								bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
								HX_STACK_LINE(541)
								int tmp11 = s11->type;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(541)
								int tmp12 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(541)
								bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(541)
								bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(541)
								if ((tmp13)){
									HX_STACK_LINE(541)
									int tmp15 = s21->type;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(541)
									int tmp16 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(541)
									int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(541)
									tmp14 = (tmp15 == tmp17);
								}
								else{
									HX_STACK_LINE(541)
									tmp14 = false;
								}
								HX_STACK_LINE(541)
								if ((tmp14)){
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Shape tmp15 = s11;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(541)
									s11 = s21;
									HX_STACK_LINE(541)
									s21 = tmp15;
									HX_STACK_LINE(541)
									::zpp_nape::geom::ZPP_Vec2 tmp21 = w11;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(541)
									w11 = w21;
									HX_STACK_LINE(541)
									w21 = tmp21;
									HX_STACK_LINE(541)
									swapped = true;
								}
								HX_STACK_LINE(541)
								int tmp15 = s11->type;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(541)
								int tmp16 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(541)
								bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(541)
								bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(541)
								if ((tmp17)){
									HX_STACK_LINE(541)
									int tmp19 = s21->type;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(541)
									int tmp20 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(541)
									int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(541)
									tmp18 = (tmp19 == tmp21);
								}
								else{
									HX_STACK_LINE(541)
									tmp18 = false;
								}
								HX_STACK_LINE(541)
								if ((tmp18)){
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Polygon poly = s11->polygon;		HX_STACK_VAR(poly,"poly");
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Circle circle = s21->circle;		HX_STACK_VAR(circle,"circle");
									HX_STACK_LINE(541)
									Float tmp19 = ((Float)-1e+100);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(541)
									Float best = tmp19;		HX_STACK_VAR(best,"best");
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
									HX_STACK_LINE(541)
									{
										HX_STACK_LINE(541)
										::zpp_nape::util::ZNPNode_ZPP_Edge tmp20 = poly->edges->head;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(541)
										::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite2 = tmp20;		HX_STACK_VAR(cx_ite2,"cx_ite2");
										HX_STACK_LINE(541)
										while((true)){
											HX_STACK_LINE(541)
											bool tmp21 = (cx_ite2 != null());		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(541)
											bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(541)
											if ((tmp22)){
												HX_STACK_LINE(541)
												break;
											}
											HX_STACK_LINE(541)
											::zpp_nape::shape::ZPP_Edge a = cx_ite2->elt;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(541)
											{
												HX_STACK_LINE(541)
												Float tmp23 = (a->gnormx * circle->worldCOMx);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(541)
												Float tmp24 = (a->gnormy * circle->worldCOMy);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(541)
												Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(541)
												Float tmp26 = a->gprojection;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(541)
												Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(541)
												Float tmp28 = circle->radius;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(541)
												Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(541)
												Float dist = tmp29;		HX_STACK_VAR(dist,"dist");
												HX_STACK_LINE(541)
												bool tmp30 = (dist > min);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(541)
												if ((tmp30)){
													HX_STACK_LINE(541)
													best = dist;
													HX_STACK_LINE(541)
													break;
												}
												HX_STACK_LINE(541)
												bool tmp31 = (dist > (int)0);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(541)
												if ((tmp31)){
													HX_STACK_LINE(541)
													bool tmp32 = (dist > best);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(541)
													if ((tmp32)){
														HX_STACK_LINE(541)
														best = dist;
														HX_STACK_LINE(541)
														a0 = a;
													}
												}
												else{
													HX_STACK_LINE(541)
													bool tmp32 = (best < (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(541)
													bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(541)
													if ((tmp32)){
														HX_STACK_LINE(541)
														tmp33 = (dist > best);
													}
													else{
														HX_STACK_LINE(541)
														tmp33 = false;
													}
													HX_STACK_LINE(541)
													if ((tmp33)){
														HX_STACK_LINE(541)
														best = dist;
														HX_STACK_LINE(541)
														a0 = a;
													}
												}
											}
											HX_STACK_LINE(541)
											cx_ite2 = cx_ite2->next;
										}
									}
									HX_STACK_LINE(541)
									bool tmp20 = (best < min);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(541)
									if ((tmp20)){
										HX_STACK_LINE(541)
										::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
										HX_STACK_LINE(541)
										::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
										HX_STACK_LINE(541)
										Float tmp21 = (circle->worldCOMy * a0->gnormx);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(541)
										Float tmp22 = (circle->worldCOMx * a0->gnormy);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(541)
										Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(541)
										Float dt = tmp23;		HX_STACK_VAR(dt,"dt");
										HX_STACK_LINE(541)
										Float tmp24 = dt;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(541)
										Float tmp25 = (v0->y * a0->gnormx);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(541)
										Float tmp26 = (v0->x * a0->gnormy);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(541)
										Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(541)
										bool tmp28 = (tmp24 <= tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(541)
										if ((tmp28)){
											HX_STACK_LINE(541)
											Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
											HX_STACK_LINE(541)
											Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
											HX_STACK_LINE(541)
											{
												HX_STACK_LINE(541)
												Float tmp29 = (circle->worldCOMx - v0->x);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(541)
												nx = tmp29;
												HX_STACK_LINE(541)
												Float tmp30 = (circle->worldCOMy - v0->y);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(541)
												ny = tmp30;
											}
											HX_STACK_LINE(541)
											Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(541)
											{
												HX_STACK_LINE(541)
												Float tmp30 = (nx * nx);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(541)
												Float tmp31 = (ny * ny);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(541)
												Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(541)
												tmp29 = ::Math_obj::sqrt(tmp32);
											}
											HX_STACK_LINE(541)
											Float len = tmp29;		HX_STACK_VAR(len,"len");
											HX_STACK_LINE(541)
											Float tmp30 = len;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(541)
											Float tmp31 = circle->radius;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(541)
											Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(541)
											best = tmp32;
											HX_STACK_LINE(541)
											bool tmp33 = (best < min);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(541)
											if ((tmp33)){
												HX_STACK_LINE(541)
												bool tmp34 = (len == (int)0);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(541)
												if ((tmp34)){
													HX_STACK_LINE(541)
													nx = (int)1;
													HX_STACK_LINE(541)
													ny = (int)0;
													HX_STACK_LINE(541)
													{
													}
												}
												else{
													HX_STACK_LINE(541)
													Float tmp35 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(541)
													Float t = tmp35;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													hx::MultEq(nx,t);
													HX_STACK_LINE(541)
													hx::MultEq(ny,t);
												}
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													int t = (int)0;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													Float tmp35 = v0->x;		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(541)
													Float tmp36 = (nx * t);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(541)
													Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(541)
													w11->x = tmp37;
													HX_STACK_LINE(541)
													Float tmp38 = v0->y;		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(541)
													Float tmp39 = (ny * t);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(541)
													Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(541)
													w11->y = tmp40;
												}
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float tmp35 = circle->radius;		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(541)
													Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(541)
													Float t = tmp36;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													Float tmp37 = circle->worldCOMx;		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(541)
													Float tmp38 = (nx * t);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(541)
													Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(541)
													w21->x = tmp39;
													HX_STACK_LINE(541)
													Float tmp40 = circle->worldCOMy;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(541)
													Float tmp41 = (ny * t);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(541)
													Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(541)
													w21->y = tmp42;
												}
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													ax->x = nx;
													HX_STACK_LINE(541)
													ax->y = ny;
													HX_STACK_LINE(541)
													{
													}
												}
											}
										}
										else{
											HX_STACK_LINE(541)
											Float tmp29 = dt;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(541)
											Float tmp30 = (v1->y * a0->gnormx);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(541)
											Float tmp31 = (v1->x * a0->gnormy);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(541)
											Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(541)
											bool tmp33 = (tmp29 >= tmp32);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(541)
											if ((tmp33)){
												HX_STACK_LINE(541)
												Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
												HX_STACK_LINE(541)
												Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float tmp34 = (circle->worldCOMx - v1->x);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(541)
													nx = tmp34;
													HX_STACK_LINE(541)
													Float tmp35 = (circle->worldCOMy - v1->y);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(541)
													ny = tmp35;
												}
												HX_STACK_LINE(541)
												Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float tmp35 = (nx * nx);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(541)
													Float tmp36 = (ny * ny);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(541)
													Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(541)
													tmp34 = ::Math_obj::sqrt(tmp37);
												}
												HX_STACK_LINE(541)
												Float len = tmp34;		HX_STACK_VAR(len,"len");
												HX_STACK_LINE(541)
												Float tmp35 = len;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(541)
												Float tmp36 = circle->radius;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(541)
												Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(541)
												best = tmp37;
												HX_STACK_LINE(541)
												bool tmp38 = (best < min);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(541)
												if ((tmp38)){
													HX_STACK_LINE(541)
													bool tmp39 = (len == (int)0);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(541)
													if ((tmp39)){
														HX_STACK_LINE(541)
														nx = (int)1;
														HX_STACK_LINE(541)
														ny = (int)0;
														HX_STACK_LINE(541)
														{
														}
													}
													else{
														HX_STACK_LINE(541)
														Float tmp40 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(541)
														Float t = tmp40;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(541)
														hx::MultEq(nx,t);
														HX_STACK_LINE(541)
														hx::MultEq(ny,t);
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														int t = (int)0;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(541)
														Float tmp40 = v1->x;		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(541)
														Float tmp41 = (nx * t);		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(541)
														Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(541)
														w11->x = tmp42;
														HX_STACK_LINE(541)
														Float tmp43 = v1->y;		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(541)
														Float tmp44 = (ny * t);		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(541)
														Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(541)
														w11->y = tmp45;
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float tmp40 = circle->radius;		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(541)
														Float tmp41 = -(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(541)
														Float t = tmp41;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(541)
														Float tmp42 = circle->worldCOMx;		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(541)
														Float tmp43 = (nx * t);		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(541)
														Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(541)
														w21->x = tmp44;
														HX_STACK_LINE(541)
														Float tmp45 = circle->worldCOMy;		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(541)
														Float tmp46 = (ny * t);		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(541)
														Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(541)
														w21->y = tmp47;
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														ax->x = nx;
														HX_STACK_LINE(541)
														ax->y = ny;
														HX_STACK_LINE(541)
														{
														}
													}
												}
											}
											else{
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float tmp34 = circle->radius;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(541)
													Float tmp35 = -(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(541)
													Float t = tmp35;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													Float tmp36 = circle->worldCOMx;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(541)
													Float tmp37 = (a0->gnormx * t);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(541)
													Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(541)
													w21->x = tmp38;
													HX_STACK_LINE(541)
													Float tmp39 = circle->worldCOMy;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(541)
													Float tmp40 = (a0->gnormy * t);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(541)
													Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(541)
													w21->y = tmp41;
												}
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float tmp34 = best;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(541)
													Float tmp35 = -(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(541)
													Float t = tmp35;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													Float tmp36 = w21->x;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(541)
													Float tmp37 = (a0->gnormx * t);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(541)
													Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(541)
													w11->x = tmp38;
													HX_STACK_LINE(541)
													Float tmp39 = w21->y;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(541)
													Float tmp40 = (a0->gnormy * t);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(541)
													Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(541)
													w11->y = tmp41;
												}
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													ax->x = a0->gnormx;
													HX_STACK_LINE(541)
													ax->y = a0->gnormy;
													HX_STACK_LINE(541)
													{
													}
												}
											}
										}
									}
									HX_STACK_LINE(541)
									bool tmp21 = swapped;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(541)
									if ((tmp21)){
										HX_STACK_LINE(541)
										Float tmp22 = ax->x;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(541)
										Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(541)
										ax->x = tmp23;
										HX_STACK_LINE(541)
										Float tmp24 = ax->y;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(541)
										Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(541)
										ax->y = tmp25;
									}
									HX_STACK_LINE(541)
									tmp6 = best;
								}
								else{
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Polygon p1 = s11->polygon;		HX_STACK_VAR(p1,"p1");
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Polygon p2 = s21->polygon;		HX_STACK_VAR(p2,"p2");
									HX_STACK_LINE(541)
									Float tmp19 = ((Float)-1e+100);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(541)
									Float best = tmp19;		HX_STACK_VAR(best,"best");
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
									HX_STACK_LINE(541)
									::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
									HX_STACK_LINE(541)
									int besti = (int)0;		HX_STACK_VAR(besti,"besti");
									HX_STACK_LINE(541)
									{
										HX_STACK_LINE(541)
										::zpp_nape::util::ZNPNode_ZPP_Edge tmp20 = p1->edges->head;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(541)
										::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite2 = tmp20;		HX_STACK_VAR(cx_ite2,"cx_ite2");
										HX_STACK_LINE(541)
										while((true)){
											HX_STACK_LINE(541)
											bool tmp21 = (cx_ite2 != null());		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(541)
											bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(541)
											if ((tmp22)){
												HX_STACK_LINE(541)
												break;
											}
											HX_STACK_LINE(541)
											::zpp_nape::shape::ZPP_Edge a = cx_ite2->elt;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(541)
											{
												HX_STACK_LINE(541)
												Float min1 = ((Float)1e100);		HX_STACK_VAR(min1,"min1");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													::zpp_nape::geom::ZPP_Vec2 tmp23 = p2->gverts->next;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(541)
													::zpp_nape::geom::ZPP_Vec2 cx_ite3 = tmp23;		HX_STACK_VAR(cx_ite3,"cx_ite3");
													HX_STACK_LINE(541)
													while((true)){
														HX_STACK_LINE(541)
														bool tmp24 = (cx_ite3 != null());		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(541)
														bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(541)
														if ((tmp25)){
															HX_STACK_LINE(541)
															break;
														}
														HX_STACK_LINE(541)
														::zpp_nape::geom::ZPP_Vec2 v = cx_ite3;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(541)
														{
															HX_STACK_LINE(541)
															Float tmp26 = (a->gnormx * v->x);		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(541)
															Float tmp27 = (a->gnormy * v->y);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(541)
															Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(541)
															Float k = tmp28;		HX_STACK_VAR(k,"k");
															HX_STACK_LINE(541)
															bool tmp29 = (k < min1);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(541)
															if ((tmp29)){
																HX_STACK_LINE(541)
																min1 = k;
															}
														}
														HX_STACK_LINE(541)
														cx_ite3 = cx_ite3->next;
													}
												}
												HX_STACK_LINE(541)
												hx::SubEq(min1,a->gprojection);
												HX_STACK_LINE(541)
												bool tmp23 = (min1 > min);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(541)
												if ((tmp23)){
													HX_STACK_LINE(541)
													best = min1;
													HX_STACK_LINE(541)
													break;
												}
												HX_STACK_LINE(541)
												bool tmp24 = (min1 > (int)0);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(541)
												if ((tmp24)){
													HX_STACK_LINE(541)
													bool tmp25 = (min1 > best);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(541)
													if ((tmp25)){
														HX_STACK_LINE(541)
														best = min1;
														HX_STACK_LINE(541)
														a1 = a;
														HX_STACK_LINE(541)
														besti = (int)1;
													}
												}
												else{
													HX_STACK_LINE(541)
													bool tmp25 = (best < (int)0);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(541)
													bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(541)
													if ((tmp25)){
														HX_STACK_LINE(541)
														tmp26 = (min1 > best);
													}
													else{
														HX_STACK_LINE(541)
														tmp26 = false;
													}
													HX_STACK_LINE(541)
													if ((tmp26)){
														HX_STACK_LINE(541)
														best = min1;
														HX_STACK_LINE(541)
														a1 = a;
														HX_STACK_LINE(541)
														besti = (int)1;
													}
												}
											}
											HX_STACK_LINE(541)
											cx_ite2 = cx_ite2->next;
										}
									}
									HX_STACK_LINE(541)
									bool tmp20 = (best < min);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(541)
									if ((tmp20)){
										HX_STACK_LINE(541)
										{
											HX_STACK_LINE(541)
											::zpp_nape::util::ZNPNode_ZPP_Edge tmp21 = p2->edges->head;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(541)
											::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite2 = tmp21;		HX_STACK_VAR(cx_ite2,"cx_ite2");
											HX_STACK_LINE(541)
											while((true)){
												HX_STACK_LINE(541)
												bool tmp22 = (cx_ite2 != null());		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(541)
												bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(541)
												if ((tmp23)){
													HX_STACK_LINE(541)
													break;
												}
												HX_STACK_LINE(541)
												::zpp_nape::shape::ZPP_Edge a = cx_ite2->elt;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float min1 = ((Float)1e100);		HX_STACK_VAR(min1,"min1");
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														::zpp_nape::geom::ZPP_Vec2 tmp24 = p1->gverts->next;		HX_STACK_VAR(tmp24,"tmp24");
														HX_STACK_LINE(541)
														::zpp_nape::geom::ZPP_Vec2 cx_ite3 = tmp24;		HX_STACK_VAR(cx_ite3,"cx_ite3");
														HX_STACK_LINE(541)
														while((true)){
															HX_STACK_LINE(541)
															bool tmp25 = (cx_ite3 != null());		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(541)
															bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(541)
															if ((tmp26)){
																HX_STACK_LINE(541)
																break;
															}
															HX_STACK_LINE(541)
															::zpp_nape::geom::ZPP_Vec2 v = cx_ite3;		HX_STACK_VAR(v,"v");
															HX_STACK_LINE(541)
															{
																HX_STACK_LINE(541)
																Float tmp27 = (a->gnormx * v->x);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(541)
																Float tmp28 = (a->gnormy * v->y);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(541)
																Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(541)
																Float k = tmp29;		HX_STACK_VAR(k,"k");
																HX_STACK_LINE(541)
																bool tmp30 = (k < min1);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(541)
																if ((tmp30)){
																	HX_STACK_LINE(541)
																	min1 = k;
																}
															}
															HX_STACK_LINE(541)
															cx_ite3 = cx_ite3->next;
														}
													}
													HX_STACK_LINE(541)
													hx::SubEq(min1,a->gprojection);
													HX_STACK_LINE(541)
													bool tmp24 = (min1 > min);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(541)
													if ((tmp24)){
														HX_STACK_LINE(541)
														best = min1;
														HX_STACK_LINE(541)
														break;
													}
													HX_STACK_LINE(541)
													bool tmp25 = (min1 > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(541)
													if ((tmp25)){
														HX_STACK_LINE(541)
														bool tmp26 = (min1 > best);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(541)
														if ((tmp26)){
															HX_STACK_LINE(541)
															best = min1;
															HX_STACK_LINE(541)
															a2 = a;
															HX_STACK_LINE(541)
															besti = (int)2;
														}
													}
													else{
														HX_STACK_LINE(541)
														bool tmp26 = (best < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(541)
														bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(541)
														if ((tmp26)){
															HX_STACK_LINE(541)
															tmp27 = (min1 > best);
														}
														else{
															HX_STACK_LINE(541)
															tmp27 = false;
														}
														HX_STACK_LINE(541)
														if ((tmp27)){
															HX_STACK_LINE(541)
															best = min1;
															HX_STACK_LINE(541)
															a2 = a;
															HX_STACK_LINE(541)
															besti = (int)2;
														}
													}
												}
												HX_STACK_LINE(541)
												cx_ite2 = cx_ite2->next;
											}
										}
										HX_STACK_LINE(541)
										bool tmp21 = (best < min);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(541)
										if ((tmp21)){
											HX_STACK_LINE(541)
											::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
											HX_STACK_LINE(541)
											::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
											HX_STACK_LINE(541)
											::zpp_nape::shape::ZPP_Edge ax1;		HX_STACK_VAR(ax1,"ax1");
											HX_STACK_LINE(541)
											bool tmp22 = (besti == (int)1);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(541)
											if ((tmp22)){
												HX_STACK_LINE(541)
												q1 = p1;
												HX_STACK_LINE(541)
												q2 = p2;
												HX_STACK_LINE(541)
												ax1 = a1;
											}
											else{
												HX_STACK_LINE(541)
												q1 = p2;
												HX_STACK_LINE(541)
												q2 = p1;
												HX_STACK_LINE(541)
												ax1 = a2;
												HX_STACK_LINE(541)
												::zpp_nape::geom::ZPP_Vec2 tmp23 = w11;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(541)
												w11 = w21;
												HX_STACK_LINE(541)
												w21 = tmp23;
												HX_STACK_LINE(541)
												bool tmp24 = swapped;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(541)
												bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(541)
												swapped = tmp25;
											}
											HX_STACK_LINE(541)
											::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
											HX_STACK_LINE(541)
											Float min1 = ((Float)1e100);		HX_STACK_VAR(min1,"min1");
											HX_STACK_LINE(541)
											{
												HX_STACK_LINE(541)
												::zpp_nape::util::ZNPNode_ZPP_Edge tmp23 = q2->edges->head;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(541)
												::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite2 = tmp23;		HX_STACK_VAR(cx_ite2,"cx_ite2");
												HX_STACK_LINE(541)
												while((true)){
													HX_STACK_LINE(541)
													bool tmp24 = (cx_ite2 != null());		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(541)
													bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(541)
													if ((tmp25)){
														HX_STACK_LINE(541)
														break;
													}
													HX_STACK_LINE(541)
													::zpp_nape::shape::ZPP_Edge a = cx_ite2->elt;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float tmp26 = (ax1->gnormx * a->gnormx);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(541)
														Float tmp27 = (ax1->gnormy * a->gnormy);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(541)
														Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(541)
														Float k = tmp28;		HX_STACK_VAR(k,"k");
														HX_STACK_LINE(541)
														bool tmp29 = (k < min1);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(541)
														if ((tmp29)){
															HX_STACK_LINE(541)
															min1 = k;
															HX_STACK_LINE(541)
															ay = a;
														}
													}
													HX_STACK_LINE(541)
													cx_ite2 = cx_ite2->next;
												}
											}
											HX_STACK_LINE(541)
											bool tmp23 = swapped;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(541)
											if ((tmp23)){
												HX_STACK_LINE(541)
												Float tmp24 = ax1->gnormx;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(541)
												Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(541)
												ax->x = tmp25;
												HX_STACK_LINE(541)
												Float tmp26 = ax1->gnormy;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(541)
												Float tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(541)
												ax->y = tmp27;
												HX_STACK_LINE(541)
												{
												}
											}
											else{
												HX_STACK_LINE(541)
												ax->x = ax1->gnormx;
												HX_STACK_LINE(541)
												ax->y = ax1->gnormy;
												HX_STACK_LINE(541)
												{
												}
											}
											HX_STACK_LINE(541)
											bool tmp24 = (best >= (int)0);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(541)
											if ((tmp24)){
												HX_STACK_LINE(541)
												::zpp_nape::geom::ZPP_Vec2 v0 = ax1->gp0;		HX_STACK_VAR(v0,"v0");
												HX_STACK_LINE(541)
												::zpp_nape::geom::ZPP_Vec2 v1 = ax1->gp1;		HX_STACK_VAR(v1,"v1");
												HX_STACK_LINE(541)
												::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
												HX_STACK_LINE(541)
												::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
												HX_STACK_LINE(541)
												Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
												HX_STACK_LINE(541)
												Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
												HX_STACK_LINE(541)
												Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
												HX_STACK_LINE(541)
												Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float tmp25 = (v1->x - v0->x);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(541)
													vx = tmp25;
													HX_STACK_LINE(541)
													Float tmp26 = (v1->y - v0->y);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(541)
													vy = tmp26;
												}
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float tmp25 = (q11->x - q0->x);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(541)
													qx = tmp25;
													HX_STACK_LINE(541)
													Float tmp26 = (q11->y - q0->y);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(541)
													qy = tmp26;
												}
												HX_STACK_LINE(541)
												Float tmp25 = (vx * vx);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(541)
												Float tmp26 = (vy * vy);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(541)
												Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(541)
												Float tmp28 = (Float((int)1) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(541)
												Float vdot = tmp28;		HX_STACK_VAR(vdot,"vdot");
												HX_STACK_LINE(541)
												Float tmp29 = (qx * qx);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(541)
												Float tmp30 = (qy * qy);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(541)
												Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(541)
												Float tmp32 = (Float((int)1) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(541)
												Float qdot = tmp32;		HX_STACK_VAR(qdot,"qdot");
												HX_STACK_LINE(541)
												Float tmp33 = vx;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(541)
												Float tmp34 = (v0->x - q0->x);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(541)
												Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(541)
												Float tmp36 = vy;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(541)
												Float tmp37 = (v0->y - q0->y);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(541)
												Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(541)
												Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(541)
												Float tmp40 = -(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(541)
												Float tmp41 = vdot;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(541)
												Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(541)
												Float t11 = tmp42;		HX_STACK_VAR(t11,"t11");
												HX_STACK_LINE(541)
												Float tmp43 = vx;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(541)
												Float tmp44 = (v0->x - q11->x);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(541)
												Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(541)
												Float tmp46 = vy;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(541)
												Float tmp47 = (v0->y - q11->y);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(541)
												Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(541)
												Float tmp49 = (tmp45 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(541)
												Float tmp50 = -(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(541)
												Float tmp51 = vdot;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(541)
												Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(541)
												Float t21 = tmp52;		HX_STACK_VAR(t21,"t21");
												HX_STACK_LINE(541)
												Float tmp53 = qx;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(541)
												Float tmp54 = (q0->x - v0->x);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(541)
												Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(541)
												Float tmp56 = qy;		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(541)
												Float tmp57 = (q0->y - v0->y);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(541)
												Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(541)
												Float tmp59 = (tmp55 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(541)
												Float tmp60 = -(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(541)
												Float tmp61 = qdot;		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(541)
												Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(541)
												Float s12 = tmp62;		HX_STACK_VAR(s12,"s12");
												HX_STACK_LINE(541)
												Float tmp63 = qx;		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(541)
												Float tmp64 = (q0->x - v1->x);		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(541)
												Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(541)
												Float tmp66 = qy;		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(541)
												Float tmp67 = (q0->y - v1->y);		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(541)
												Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(541)
												Float tmp69 = (tmp65 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(541)
												Float tmp70 = -(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(541)
												Float tmp71 = qdot;		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(541)
												Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(541)
												Float s22 = tmp72;		HX_STACK_VAR(s22,"s22");
												HX_STACK_LINE(541)
												bool tmp73 = (t11 < (int)0);		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(541)
												if ((tmp73)){
													HX_STACK_LINE(541)
													t11 = (int)0;
												}
												else{
													HX_STACK_LINE(541)
													bool tmp74 = (t11 > (int)1);		HX_STACK_VAR(tmp74,"tmp74");
													HX_STACK_LINE(541)
													if ((tmp74)){
														HX_STACK_LINE(541)
														t11 = (int)1;
													}
												}
												HX_STACK_LINE(541)
												bool tmp74 = (t21 < (int)0);		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(541)
												if ((tmp74)){
													HX_STACK_LINE(541)
													t21 = (int)0;
												}
												else{
													HX_STACK_LINE(541)
													bool tmp75 = (t21 > (int)1);		HX_STACK_VAR(tmp75,"tmp75");
													HX_STACK_LINE(541)
													if ((tmp75)){
														HX_STACK_LINE(541)
														t21 = (int)1;
													}
												}
												HX_STACK_LINE(541)
												bool tmp75 = (s12 < (int)0);		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(541)
												if ((tmp75)){
													HX_STACK_LINE(541)
													s12 = (int)0;
												}
												else{
													HX_STACK_LINE(541)
													bool tmp76 = (s12 > (int)1);		HX_STACK_VAR(tmp76,"tmp76");
													HX_STACK_LINE(541)
													if ((tmp76)){
														HX_STACK_LINE(541)
														s12 = (int)1;
													}
												}
												HX_STACK_LINE(541)
												bool tmp76 = (s22 < (int)0);		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(541)
												if ((tmp76)){
													HX_STACK_LINE(541)
													s22 = (int)0;
												}
												else{
													HX_STACK_LINE(541)
													bool tmp77 = (s22 > (int)1);		HX_STACK_VAR(tmp77,"tmp77");
													HX_STACK_LINE(541)
													if ((tmp77)){
														HX_STACK_LINE(541)
														s22 = (int)1;
													}
												}
												HX_STACK_LINE(541)
												Float f1x = ((Float)0.0);		HX_STACK_VAR(f1x,"f1x");
												HX_STACK_LINE(541)
												Float f1y = ((Float)0.0);		HX_STACK_VAR(f1y,"f1y");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float t = t11;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													Float tmp77 = v0->x;		HX_STACK_VAR(tmp77,"tmp77");
													HX_STACK_LINE(541)
													Float tmp78 = (vx * t);		HX_STACK_VAR(tmp78,"tmp78");
													HX_STACK_LINE(541)
													Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
													HX_STACK_LINE(541)
													f1x = tmp79;
													HX_STACK_LINE(541)
													Float tmp80 = v0->y;		HX_STACK_VAR(tmp80,"tmp80");
													HX_STACK_LINE(541)
													Float tmp81 = (vy * t);		HX_STACK_VAR(tmp81,"tmp81");
													HX_STACK_LINE(541)
													Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
													HX_STACK_LINE(541)
													f1y = tmp82;
												}
												HX_STACK_LINE(541)
												Float f2x = ((Float)0.0);		HX_STACK_VAR(f2x,"f2x");
												HX_STACK_LINE(541)
												Float f2y = ((Float)0.0);		HX_STACK_VAR(f2y,"f2y");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float t = t21;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													Float tmp77 = v0->x;		HX_STACK_VAR(tmp77,"tmp77");
													HX_STACK_LINE(541)
													Float tmp78 = (vx * t);		HX_STACK_VAR(tmp78,"tmp78");
													HX_STACK_LINE(541)
													Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
													HX_STACK_LINE(541)
													f2x = tmp79;
													HX_STACK_LINE(541)
													Float tmp80 = v0->y;		HX_STACK_VAR(tmp80,"tmp80");
													HX_STACK_LINE(541)
													Float tmp81 = (vy * t);		HX_STACK_VAR(tmp81,"tmp81");
													HX_STACK_LINE(541)
													Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
													HX_STACK_LINE(541)
													f2y = tmp82;
												}
												HX_STACK_LINE(541)
												Float g1x = ((Float)0.0);		HX_STACK_VAR(g1x,"g1x");
												HX_STACK_LINE(541)
												Float g1y = ((Float)0.0);		HX_STACK_VAR(g1y,"g1y");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float t = s12;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													Float tmp77 = q0->x;		HX_STACK_VAR(tmp77,"tmp77");
													HX_STACK_LINE(541)
													Float tmp78 = (qx * t);		HX_STACK_VAR(tmp78,"tmp78");
													HX_STACK_LINE(541)
													Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
													HX_STACK_LINE(541)
													g1x = tmp79;
													HX_STACK_LINE(541)
													Float tmp80 = q0->y;		HX_STACK_VAR(tmp80,"tmp80");
													HX_STACK_LINE(541)
													Float tmp81 = (qy * t);		HX_STACK_VAR(tmp81,"tmp81");
													HX_STACK_LINE(541)
													Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
													HX_STACK_LINE(541)
													g1y = tmp82;
												}
												HX_STACK_LINE(541)
												Float g2x = ((Float)0.0);		HX_STACK_VAR(g2x,"g2x");
												HX_STACK_LINE(541)
												Float g2y = ((Float)0.0);		HX_STACK_VAR(g2y,"g2y");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float t = s22;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(541)
													Float tmp77 = q0->x;		HX_STACK_VAR(tmp77,"tmp77");
													HX_STACK_LINE(541)
													Float tmp78 = (qx * t);		HX_STACK_VAR(tmp78,"tmp78");
													HX_STACK_LINE(541)
													Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
													HX_STACK_LINE(541)
													g2x = tmp79;
													HX_STACK_LINE(541)
													Float tmp80 = q0->y;		HX_STACK_VAR(tmp80,"tmp80");
													HX_STACK_LINE(541)
													Float tmp81 = (qy * t);		HX_STACK_VAR(tmp81,"tmp81");
													HX_STACK_LINE(541)
													Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
													HX_STACK_LINE(541)
													g2y = tmp82;
												}
												HX_STACK_LINE(541)
												Float tmp77;		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
													HX_STACK_LINE(541)
													Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float tmp78 = (f1x - q0->x);		HX_STACK_VAR(tmp78,"tmp78");
														HX_STACK_LINE(541)
														dx = tmp78;
														HX_STACK_LINE(541)
														Float tmp79 = (f1y - q0->y);		HX_STACK_VAR(tmp79,"tmp79");
														HX_STACK_LINE(541)
														dy = tmp79;
													}
													HX_STACK_LINE(541)
													Float tmp78 = (dx * dx);		HX_STACK_VAR(tmp78,"tmp78");
													HX_STACK_LINE(541)
													Float tmp79 = (dy * dy);		HX_STACK_VAR(tmp79,"tmp79");
													HX_STACK_LINE(541)
													tmp77 = (tmp78 + tmp79);
												}
												HX_STACK_LINE(541)
												Float d1 = tmp77;		HX_STACK_VAR(d1,"d1");
												HX_STACK_LINE(541)
												Float tmp78;		HX_STACK_VAR(tmp78,"tmp78");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
													HX_STACK_LINE(541)
													Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float tmp79 = (f2x - q11->x);		HX_STACK_VAR(tmp79,"tmp79");
														HX_STACK_LINE(541)
														dx = tmp79;
														HX_STACK_LINE(541)
														Float tmp80 = (f2y - q11->y);		HX_STACK_VAR(tmp80,"tmp80");
														HX_STACK_LINE(541)
														dy = tmp80;
													}
													HX_STACK_LINE(541)
													Float tmp79 = (dx * dx);		HX_STACK_VAR(tmp79,"tmp79");
													HX_STACK_LINE(541)
													Float tmp80 = (dy * dy);		HX_STACK_VAR(tmp80,"tmp80");
													HX_STACK_LINE(541)
													tmp78 = (tmp79 + tmp80);
												}
												HX_STACK_LINE(541)
												Float d2 = tmp78;		HX_STACK_VAR(d2,"d2");
												HX_STACK_LINE(541)
												Float tmp79;		HX_STACK_VAR(tmp79,"tmp79");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
													HX_STACK_LINE(541)
													Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float tmp80 = (g1x - v0->x);		HX_STACK_VAR(tmp80,"tmp80");
														HX_STACK_LINE(541)
														dx = tmp80;
														HX_STACK_LINE(541)
														Float tmp81 = (g1y - v0->y);		HX_STACK_VAR(tmp81,"tmp81");
														HX_STACK_LINE(541)
														dy = tmp81;
													}
													HX_STACK_LINE(541)
													Float tmp80 = (dx * dx);		HX_STACK_VAR(tmp80,"tmp80");
													HX_STACK_LINE(541)
													Float tmp81 = (dy * dy);		HX_STACK_VAR(tmp81,"tmp81");
													HX_STACK_LINE(541)
													tmp79 = (tmp80 + tmp81);
												}
												HX_STACK_LINE(541)
												Float e1 = tmp79;		HX_STACK_VAR(e1,"e1");
												HX_STACK_LINE(541)
												Float tmp80;		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
													HX_STACK_LINE(541)
													Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float tmp81 = (g2x - v1->x);		HX_STACK_VAR(tmp81,"tmp81");
														HX_STACK_LINE(541)
														dx = tmp81;
														HX_STACK_LINE(541)
														Float tmp82 = (g2y - v1->y);		HX_STACK_VAR(tmp82,"tmp82");
														HX_STACK_LINE(541)
														dy = tmp82;
													}
													HX_STACK_LINE(541)
													Float tmp81 = (dx * dx);		HX_STACK_VAR(tmp81,"tmp81");
													HX_STACK_LINE(541)
													Float tmp82 = (dy * dy);		HX_STACK_VAR(tmp82,"tmp82");
													HX_STACK_LINE(541)
													tmp80 = (tmp81 + tmp82);
												}
												HX_STACK_LINE(541)
												Float e2 = tmp80;		HX_STACK_VAR(e2,"e2");
												HX_STACK_LINE(541)
												Float minfx = ((Float)0.0);		HX_STACK_VAR(minfx,"minfx");
												HX_STACK_LINE(541)
												Float minfy = ((Float)0.0);		HX_STACK_VAR(minfy,"minfy");
												HX_STACK_LINE(541)
												::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
												HX_STACK_LINE(541)
												bool tmp81 = (d1 < d2);		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(541)
												if ((tmp81)){
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														minfx = f1x;
														HX_STACK_LINE(541)
														minfy = f1y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													minq = q0;
												}
												else{
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														minfx = f2x;
														HX_STACK_LINE(541)
														minfy = f2y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													minq = q11;
													HX_STACK_LINE(541)
													d1 = d2;
												}
												HX_STACK_LINE(541)
												Float mingx = ((Float)0.0);		HX_STACK_VAR(mingx,"mingx");
												HX_STACK_LINE(541)
												Float mingy = ((Float)0.0);		HX_STACK_VAR(mingy,"mingy");
												HX_STACK_LINE(541)
												::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
												HX_STACK_LINE(541)
												bool tmp82 = (e1 < e2);		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(541)
												if ((tmp82)){
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														mingx = g1x;
														HX_STACK_LINE(541)
														mingy = g1y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													minv = v0;
												}
												else{
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														mingx = g2x;
														HX_STACK_LINE(541)
														mingy = g2y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													minv = v1;
													HX_STACK_LINE(541)
													e1 = e2;
												}
												HX_STACK_LINE(541)
												bool tmp83 = (d1 < e1);		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(541)
												if ((tmp83)){
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														w11->x = minfx;
														HX_STACK_LINE(541)
														w11->y = minfy;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														w21->x = minq->x;
														HX_STACK_LINE(541)
														w21->y = minq->y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													Float tmp84 = d1;		HX_STACK_VAR(tmp84,"tmp84");
													HX_STACK_LINE(541)
													Float tmp85 = ::Math_obj::sqrt(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
													HX_STACK_LINE(541)
													best = tmp85;
												}
												else{
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														w21->x = mingx;
														HX_STACK_LINE(541)
														w21->y = mingy;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														w11->x = minv->x;
														HX_STACK_LINE(541)
														w11->y = minv->y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													Float tmp84 = e1;		HX_STACK_VAR(tmp84,"tmp84");
													HX_STACK_LINE(541)
													Float tmp85 = ::Math_obj::sqrt(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
													HX_STACK_LINE(541)
													best = tmp85;
												}
												HX_STACK_LINE(541)
												bool tmp84 = (best != (int)0);		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(541)
												if ((tmp84)){
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float tmp85 = (w21->x - w11->x);		HX_STACK_VAR(tmp85,"tmp85");
														HX_STACK_LINE(541)
														ax->x = tmp85;
														HX_STACK_LINE(541)
														Float tmp86 = (w21->y - w11->y);		HX_STACK_VAR(tmp86,"tmp86");
														HX_STACK_LINE(541)
														ax->y = tmp86;
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float tmp85 = (Float(((Float)1.0)) / Float(best));		HX_STACK_VAR(tmp85,"tmp85");
														HX_STACK_LINE(541)
														Float t = tmp85;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(541)
														hx::MultEq(ax->x,t);
														HX_STACK_LINE(541)
														hx::MultEq(ax->y,t);
													}
													HX_STACK_LINE(541)
													bool tmp85 = swapped;		HX_STACK_VAR(tmp85,"tmp85");
													HX_STACK_LINE(541)
													if ((tmp85)){
														HX_STACK_LINE(541)
														Float tmp86 = ax->x;		HX_STACK_VAR(tmp86,"tmp86");
														HX_STACK_LINE(541)
														Float tmp87 = -(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
														HX_STACK_LINE(541)
														ax->x = tmp87;
														HX_STACK_LINE(541)
														Float tmp88 = ax->y;		HX_STACK_VAR(tmp88,"tmp88");
														HX_STACK_LINE(541)
														Float tmp89 = -(tmp88);		HX_STACK_VAR(tmp89,"tmp89");
														HX_STACK_LINE(541)
														ax->y = tmp89;
													}
												}
												HX_STACK_LINE(541)
												tmp6 = best;
											}
											else{
												HX_STACK_LINE(541)
												Float c0x = ((Float)0.0);		HX_STACK_VAR(c0x,"c0x");
												HX_STACK_LINE(541)
												Float c0y = ((Float)0.0);		HX_STACK_VAR(c0y,"c0y");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float tmp25 = ay->gp0->x;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(541)
													c0x = tmp25;
													HX_STACK_LINE(541)
													Float tmp26 = ay->gp0->y;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(541)
													c0y = tmp26;
													HX_STACK_LINE(541)
													{
													}
												}
												HX_STACK_LINE(541)
												Float c1x = ((Float)0.0);		HX_STACK_VAR(c1x,"c1x");
												HX_STACK_LINE(541)
												Float c1y = ((Float)0.0);		HX_STACK_VAR(c1y,"c1y");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float tmp25 = ay->gp1->x;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(541)
													c1x = tmp25;
													HX_STACK_LINE(541)
													Float tmp26 = ay->gp1->y;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(541)
													c1y = tmp26;
													HX_STACK_LINE(541)
													{
													}
												}
												HX_STACK_LINE(541)
												Float dvx = ((Float)0.0);		HX_STACK_VAR(dvx,"dvx");
												HX_STACK_LINE(541)
												Float dvy = ((Float)0.0);		HX_STACK_VAR(dvy,"dvy");
												HX_STACK_LINE(541)
												{
													HX_STACK_LINE(541)
													Float tmp25 = (c1x - c0x);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(541)
													dvx = tmp25;
													HX_STACK_LINE(541)
													Float tmp26 = (c1y - c0y);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(541)
													dvy = tmp26;
												}
												HX_STACK_LINE(541)
												Float tmp25 = (ax1->gnormy * c0x);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(541)
												Float tmp26 = (ax1->gnormx * c0y);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(541)
												Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(541)
												Float d0 = tmp27;		HX_STACK_VAR(d0,"d0");
												HX_STACK_LINE(541)
												Float tmp28 = (ax1->gnormy * c1x);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(541)
												Float tmp29 = (ax1->gnormx * c1y);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(541)
												Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(541)
												Float d1 = tmp30;		HX_STACK_VAR(d1,"d1");
												HX_STACK_LINE(541)
												Float tmp31 = (d1 - d0);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(541)
												Float tmp32 = (Float((int)1) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(541)
												Float den = tmp32;		HX_STACK_VAR(den,"den");
												HX_STACK_LINE(541)
												Float tmp33 = ax1->tp1;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(541)
												Float tmp34 = -(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(541)
												Float tmp35 = d0;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(541)
												Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(541)
												Float tmp37 = den;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(541)
												Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(541)
												Float t = tmp38;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(541)
												Float tmp39 = t;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(541)
												Float tmp40 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(541)
												bool tmp41 = (tmp39 > tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(541)
												if ((tmp41)){
													HX_STACK_LINE(541)
													Float t3 = t;		HX_STACK_VAR(t3,"t3");
													HX_STACK_LINE(541)
													Float tmp42 = (dvx * t3);		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(541)
													hx::AddEq(c0x,tmp42);
													HX_STACK_LINE(541)
													Float tmp43 = (dvy * t3);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(541)
													hx::AddEq(c0y,tmp43);
												}
												HX_STACK_LINE(541)
												Float tmp42 = ax1->tp0;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(541)
												Float tmp43 = -(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(541)
												Float tmp44 = d1;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(541)
												Float tmp45 = (tmp43 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(541)
												Float tmp46 = den;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(541)
												Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(541)
												Float t3 = tmp47;		HX_STACK_VAR(t3,"t3");
												HX_STACK_LINE(541)
												Float tmp48 = t3;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(541)
												Float tmp49 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(541)
												Float tmp50 = -(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(541)
												bool tmp51 = (tmp48 < tmp50);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(541)
												if ((tmp51)){
													HX_STACK_LINE(541)
													Float t4 = t3;		HX_STACK_VAR(t4,"t4");
													HX_STACK_LINE(541)
													Float tmp52 = (dvx * t4);		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(541)
													hx::AddEq(c1x,tmp52);
													HX_STACK_LINE(541)
													Float tmp53 = (dvy * t4);		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(541)
													hx::AddEq(c1y,tmp53);
												}
												HX_STACK_LINE(541)
												Float tmp52 = (c0x * ax1->gnormx);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(541)
												Float tmp53 = (c0y * ax1->gnormy);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(541)
												Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(541)
												Float tmp55 = ax1->gprojection;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(541)
												Float tmp56 = (tmp54 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(541)
												Float c0d = tmp56;		HX_STACK_VAR(c0d,"c0d");
												HX_STACK_LINE(541)
												Float tmp57 = (c1x * ax1->gnormx);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(541)
												Float tmp58 = (c1y * ax1->gnormy);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(541)
												Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(541)
												Float tmp60 = ax1->gprojection;		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(541)
												Float tmp61 = (tmp59 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(541)
												Float c1d = tmp61;		HX_STACK_VAR(c1d,"c1d");
												HX_STACK_LINE(541)
												bool tmp62 = (c0d < c1d);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(541)
												if ((tmp62)){
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														w21->x = c0x;
														HX_STACK_LINE(541)
														w21->y = c0y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float tmp63 = c0d;		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(541)
														Float tmp64 = -(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(541)
														Float t4 = tmp64;		HX_STACK_VAR(t4,"t4");
														HX_STACK_LINE(541)
														Float tmp65 = w21->x;		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(541)
														Float tmp66 = (ax1->gnormx * t4);		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(541)
														Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(541)
														w11->x = tmp67;
														HX_STACK_LINE(541)
														Float tmp68 = w21->y;		HX_STACK_VAR(tmp68,"tmp68");
														HX_STACK_LINE(541)
														Float tmp69 = (ax1->gnormy * t4);		HX_STACK_VAR(tmp69,"tmp69");
														HX_STACK_LINE(541)
														Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
														HX_STACK_LINE(541)
														w11->y = tmp70;
													}
													HX_STACK_LINE(541)
													tmp6 = c0d;
												}
												else{
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														w21->x = c1x;
														HX_STACK_LINE(541)
														w21->y = c1y;
														HX_STACK_LINE(541)
														{
														}
													}
													HX_STACK_LINE(541)
													{
														HX_STACK_LINE(541)
														Float tmp63 = c1d;		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(541)
														Float tmp64 = -(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(541)
														Float t4 = tmp64;		HX_STACK_VAR(t4,"t4");
														HX_STACK_LINE(541)
														Float tmp65 = w21->x;		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(541)
														Float tmp66 = (ax1->gnormx * t4);		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(541)
														Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(541)
														w11->x = tmp67;
														HX_STACK_LINE(541)
														Float tmp68 = w21->y;		HX_STACK_VAR(tmp68,"tmp68");
														HX_STACK_LINE(541)
														Float tmp69 = (ax1->gnormy * t4);		HX_STACK_VAR(tmp69,"tmp69");
														HX_STACK_LINE(541)
														Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
														HX_STACK_LINE(541)
														w11->y = tmp70;
													}
													HX_STACK_LINE(541)
													tmp6 = c1d;
												}
											}
										}
										else{
											HX_STACK_LINE(541)
											tmp6 = min;
										}
									}
									else{
										HX_STACK_LINE(541)
										tmp6 = min;
									}
								}
							}
						}
						HX_STACK_LINE(541)
						Float dist = tmp6;		HX_STACK_VAR(dist,"dist");
						HX_STACK_LINE(542)
						bool tmp7 = (dist < min);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(542)
						if ((tmp7)){
							HX_STACK_LINE(543)
							min = dist;
							HX_STACK_LINE(544)
							{
								HX_STACK_LINE(545)
								w1->x = t1->x;
								HX_STACK_LINE(546)
								w1->y = t1->y;
								HX_STACK_LINE(555)
								{
								}
							}
							HX_STACK_LINE(564)
							{
								HX_STACK_LINE(565)
								w2->x = t2->x;
								HX_STACK_LINE(566)
								w2->y = t2->y;
								HX_STACK_LINE(575)
								{
								}
							}
						}
					}
					HX_STACK_LINE(586)
					cx_ite1 = cx_ite1->next;
				}
			}
			HX_STACK_LINE(590)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(593)
	{
		HX_STACK_LINE(594)
		::zpp_nape::geom::ZPP_Vec2 o = t1;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(603)
		{
			HX_STACK_LINE(603)
			bool tmp = (o->outer != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(603)
			if ((tmp)){
				HX_STACK_LINE(603)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(603)
				o->outer = null();
			}
			HX_STACK_LINE(603)
			o->_isimmutable = null();
			HX_STACK_LINE(603)
			o->_validate = null();
			HX_STACK_LINE(603)
			o->_invalidate = null();
		}
		HX_STACK_LINE(604)
		::zpp_nape::geom::ZPP_Vec2 tmp = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(604)
		o->next = tmp;
		HX_STACK_LINE(605)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(610)
	{
		HX_STACK_LINE(611)
		::zpp_nape::geom::ZPP_Vec2 o = t2;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(620)
		{
			HX_STACK_LINE(620)
			bool tmp = (o->outer != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(620)
			if ((tmp)){
				HX_STACK_LINE(620)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(620)
				o->outer = null();
			}
			HX_STACK_LINE(620)
			o->_isimmutable = null();
			HX_STACK_LINE(620)
			o->_validate = null();
			HX_STACK_LINE(620)
			o->_invalidate = null();
		}
		HX_STACK_LINE(621)
		::zpp_nape::geom::ZPP_Vec2 tmp = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(621)
		o->next = tmp;
		HX_STACK_LINE(622)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(627)
	{
		HX_STACK_LINE(628)
		::zpp_nape::geom::ZPP_Vec2 o = ax;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(637)
		{
			HX_STACK_LINE(637)
			bool tmp = (o->outer != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(637)
			if ((tmp)){
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
		HX_STACK_LINE(638)
		::zpp_nape::geom::ZPP_Vec2 tmp = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(638)
		o->next = tmp;
		HX_STACK_LINE(639)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(644)
	Float tmp = min;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(644)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_SweepDistance_obj,distanceBody,return )

Float ZPP_SweepDistance_obj::distance( ::zpp_nape::shape::ZPP_Shape s1,::zpp_nape::shape::ZPP_Shape s2,::zpp_nape::geom::ZPP_Vec2 w1,::zpp_nape::geom::ZPP_Vec2 w2,::zpp_nape::geom::ZPP_Vec2 axis,hx::Null< Float >  __o_upperBound){
Float upperBound = __o_upperBound.Default(((Float)1e100));
	HX_STACK_FRAME("zpp_nape.geom.ZPP_SweepDistance","distance",0x5faae7b8,"zpp_nape.geom.ZPP_SweepDistance.distance","zpp_nape/geom/SweepDistance.hx",647,0x2645f2ee)
	HX_STACK_ARG(s1,"s1")
	HX_STACK_ARG(s2,"s2")
	HX_STACK_ARG(w1,"w1")
	HX_STACK_ARG(w2,"w2")
	HX_STACK_ARG(axis,"axis")
	HX_STACK_ARG(upperBound,"upperBound")
{
		HX_STACK_LINE(648)
		int tmp = s1->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(648)
		int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(648)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(648)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(648)
		if ((tmp2)){
			HX_STACK_LINE(648)
			int tmp4 = s2->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(648)
			int tmp5 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(648)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(648)
			tmp3 = (tmp4 == tmp6);
		}
		else{
			HX_STACK_LINE(648)
			tmp3 = false;
		}
		HX_STACK_LINE(648)
		if ((tmp3)){
			HX_STACK_LINE(649)
			::zpp_nape::shape::ZPP_Circle c1 = s1->circle;		HX_STACK_VAR(c1,"c1");
			HX_STACK_LINE(650)
			::zpp_nape::shape::ZPP_Circle c2 = s2->circle;		HX_STACK_VAR(c2,"c2");
			HX_STACK_LINE(651)
			Float dist;		HX_STACK_VAR(dist,"dist");
			HX_STACK_LINE(652)
			{
				HX_STACK_LINE(653)
				Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
				HX_STACK_LINE(654)
				Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
				HX_STACK_LINE(655)
				{
					HX_STACK_LINE(656)
					Float tmp4 = (c2->worldCOMx - c1->worldCOMx);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(656)
					nx = tmp4;
					HX_STACK_LINE(657)
					Float tmp5 = (c2->worldCOMy - c1->worldCOMy);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(657)
					ny = tmp5;
				}
				HX_STACK_LINE(659)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(659)
				{
					HX_STACK_LINE(659)
					Float tmp5 = (nx * nx);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(659)
					Float tmp6 = (ny * ny);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(659)
					Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(659)
					tmp4 = ::Math_obj::sqrt(tmp7);
				}
				HX_STACK_LINE(659)
				Float len = tmp4;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(660)
				Float tmp5 = len;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(660)
				Float tmp6 = (c1->radius + c2->radius);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(660)
				Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(660)
				dist = tmp7;
				HX_STACK_LINE(661)
				bool tmp8 = (dist < upperBound);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(661)
				if ((tmp8)){
					HX_STACK_LINE(662)
					bool tmp9 = (len == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(662)
					if ((tmp9)){
						HX_STACK_LINE(663)
						nx = (int)1;
						HX_STACK_LINE(664)
						ny = (int)0;
						HX_STACK_LINE(673)
						{
						}
					}
					else{
						HX_STACK_LINE(683)
						Float tmp10 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(683)
						Float t = tmp10;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(692)
						hx::MultEq(nx,t);
						HX_STACK_LINE(693)
						hx::MultEq(ny,t);
					}
					HX_STACK_LINE(695)
					{
						HX_STACK_LINE(696)
						Float t = c1->radius;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(705)
						Float tmp10 = c1->worldCOMx;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(705)
						Float tmp11 = (nx * t);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(705)
						Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(705)
						w1->x = tmp12;
						HX_STACK_LINE(706)
						Float tmp13 = c1->worldCOMy;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(706)
						Float tmp14 = (ny * t);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(706)
						Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(706)
						w1->y = tmp15;
					}
					HX_STACK_LINE(708)
					{
						HX_STACK_LINE(709)
						Float tmp10 = c2->radius;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(709)
						Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(709)
						Float t = tmp11;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(718)
						Float tmp12 = c2->worldCOMx;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(718)
						Float tmp13 = (nx * t);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(718)
						Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(718)
						w2->x = tmp14;
						HX_STACK_LINE(719)
						Float tmp15 = c2->worldCOMy;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(719)
						Float tmp16 = (ny * t);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(719)
						Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(719)
						w2->y = tmp17;
					}
					HX_STACK_LINE(721)
					{
						HX_STACK_LINE(722)
						axis->x = nx;
						HX_STACK_LINE(723)
						axis->y = ny;
						HX_STACK_LINE(732)
						{
						}
					}
				}
			}
			HX_STACK_LINE(743)
			Float tmp4 = dist;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(743)
			return tmp4;
		}
		else{
			HX_STACK_LINE(746)
			bool swapped = false;		HX_STACK_VAR(swapped,"swapped");
			HX_STACK_LINE(747)
			int tmp4 = s1->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(747)
			int tmp5 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(747)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(747)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(747)
			if ((tmp6)){
				HX_STACK_LINE(747)
				int tmp8 = s2->type;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(747)
				int tmp9 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(747)
				int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(747)
				tmp7 = (tmp8 == tmp10);
			}
			else{
				HX_STACK_LINE(747)
				tmp7 = false;
			}
			HX_STACK_LINE(747)
			if ((tmp7)){
				HX_STACK_LINE(748)
				::zpp_nape::shape::ZPP_Shape tmp8 = s1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(749)
				s1 = s2;
				HX_STACK_LINE(750)
				s2 = tmp8;
				HX_STACK_LINE(751)
				::zpp_nape::geom::ZPP_Vec2 tmp21 = w1;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(752)
				w1 = w2;
				HX_STACK_LINE(753)
				w2 = tmp21;
				HX_STACK_LINE(754)
				swapped = true;
			}
			HX_STACK_LINE(756)
			int tmp8 = s1->type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(756)
			int tmp9 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(756)
			bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(756)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(756)
			if ((tmp10)){
				HX_STACK_LINE(756)
				int tmp12 = s2->type;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(756)
				int tmp13 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(756)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(756)
				tmp11 = (tmp12 == tmp14);
			}
			else{
				HX_STACK_LINE(756)
				tmp11 = false;
			}
			HX_STACK_LINE(756)
			if ((tmp11)){
				HX_STACK_LINE(757)
				::zpp_nape::shape::ZPP_Polygon poly = s1->polygon;		HX_STACK_VAR(poly,"poly");
				HX_STACK_LINE(758)
				::zpp_nape::shape::ZPP_Circle circle = s2->circle;		HX_STACK_VAR(circle,"circle");
				HX_STACK_LINE(759)
				Float tmp12 = ((Float)-1e+100);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(759)
				Float best = tmp12;		HX_STACK_VAR(best,"best");
				HX_STACK_LINE(760)
				::zpp_nape::shape::ZPP_Edge a0 = null();		HX_STACK_VAR(a0,"a0");
				HX_STACK_LINE(761)
				{
					HX_STACK_LINE(762)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp13 = poly->edges->head;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(762)
					::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(763)
					while((true)){
						HX_STACK_LINE(763)
						bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(763)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(763)
						if ((tmp15)){
							HX_STACK_LINE(763)
							break;
						}
						HX_STACK_LINE(764)
						::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(765)
						{
							HX_STACK_LINE(766)
							Float tmp16 = (a->gnormx * circle->worldCOMx);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(766)
							Float tmp17 = (a->gnormy * circle->worldCOMy);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(766)
							Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(766)
							Float tmp19 = a->gprojection;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(766)
							Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(766)
							Float tmp21 = circle->radius;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(766)
							Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(766)
							Float dist = tmp22;		HX_STACK_VAR(dist,"dist");
							HX_STACK_LINE(767)
							bool tmp23 = (dist > upperBound);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(767)
							if ((tmp23)){
								HX_STACK_LINE(768)
								best = dist;
								HX_STACK_LINE(769)
								break;
							}
							HX_STACK_LINE(771)
							bool tmp24 = (dist > (int)0);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(771)
							if ((tmp24)){
								HX_STACK_LINE(772)
								bool tmp25 = (dist > best);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(772)
								if ((tmp25)){
									HX_STACK_LINE(773)
									best = dist;
									HX_STACK_LINE(774)
									a0 = a;
								}
							}
							else{
								HX_STACK_LINE(777)
								bool tmp25 = (best < (int)0);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(777)
								bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(777)
								if ((tmp25)){
									HX_STACK_LINE(777)
									tmp26 = (dist > best);
								}
								else{
									HX_STACK_LINE(777)
									tmp26 = false;
								}
								HX_STACK_LINE(777)
								if ((tmp26)){
									HX_STACK_LINE(778)
									best = dist;
									HX_STACK_LINE(779)
									a0 = a;
								}
							}
						}
						HX_STACK_LINE(782)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(785)
				bool tmp13 = (best < upperBound);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(785)
				if ((tmp13)){
					HX_STACK_LINE(786)
					::zpp_nape::geom::ZPP_Vec2 v0 = a0->gp0;		HX_STACK_VAR(v0,"v0");
					HX_STACK_LINE(787)
					::zpp_nape::geom::ZPP_Vec2 v1 = a0->gp1;		HX_STACK_VAR(v1,"v1");
					HX_STACK_LINE(788)
					Float tmp14 = (circle->worldCOMy * a0->gnormx);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(788)
					Float tmp15 = (circle->worldCOMx * a0->gnormy);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(788)
					Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(788)
					Float dt = tmp16;		HX_STACK_VAR(dt,"dt");
					HX_STACK_LINE(789)
					Float tmp17 = dt;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(789)
					Float tmp18 = (v0->y * a0->gnormx);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(789)
					Float tmp19 = (v0->x * a0->gnormy);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(789)
					Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(789)
					bool tmp21 = (tmp17 <= tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(789)
					if ((tmp21)){
						HX_STACK_LINE(791)
						Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
						HX_STACK_LINE(792)
						Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
						HX_STACK_LINE(793)
						{
							HX_STACK_LINE(794)
							Float tmp22 = (circle->worldCOMx - v0->x);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(794)
							nx = tmp22;
							HX_STACK_LINE(795)
							Float tmp23 = (circle->worldCOMy - v0->y);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(795)
							ny = tmp23;
						}
						HX_STACK_LINE(797)
						Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(797)
						{
							HX_STACK_LINE(797)
							Float tmp23 = (nx * nx);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(797)
							Float tmp24 = (ny * ny);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(797)
							Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(797)
							tmp22 = ::Math_obj::sqrt(tmp25);
						}
						HX_STACK_LINE(797)
						Float len = tmp22;		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(798)
						Float tmp23 = len;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(798)
						Float tmp24 = circle->radius;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(798)
						Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(798)
						best = tmp25;
						HX_STACK_LINE(799)
						bool tmp26 = (best < upperBound);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(799)
						if ((tmp26)){
							HX_STACK_LINE(800)
							bool tmp27 = (len == (int)0);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(800)
							if ((tmp27)){
								HX_STACK_LINE(801)
								nx = (int)1;
								HX_STACK_LINE(802)
								ny = (int)0;
								HX_STACK_LINE(811)
								{
								}
							}
							else{
								HX_STACK_LINE(821)
								Float tmp28 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(821)
								Float t = tmp28;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(830)
								hx::MultEq(nx,t);
								HX_STACK_LINE(831)
								hx::MultEq(ny,t);
							}
							HX_STACK_LINE(833)
							{
								HX_STACK_LINE(834)
								int t = (int)0;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(843)
								Float tmp28 = v0->x;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(843)
								Float tmp29 = (nx * t);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(843)
								Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(843)
								w1->x = tmp30;
								HX_STACK_LINE(844)
								Float tmp31 = v0->y;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(844)
								Float tmp32 = (ny * t);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(844)
								Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(844)
								w1->y = tmp33;
							}
							HX_STACK_LINE(846)
							{
								HX_STACK_LINE(847)
								Float tmp28 = circle->radius;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(847)
								Float tmp29 = -(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(847)
								Float t = tmp29;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(856)
								Float tmp30 = circle->worldCOMx;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(856)
								Float tmp31 = (nx * t);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(856)
								Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(856)
								w2->x = tmp32;
								HX_STACK_LINE(857)
								Float tmp33 = circle->worldCOMy;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(857)
								Float tmp34 = (ny * t);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(857)
								Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(857)
								w2->y = tmp35;
							}
							HX_STACK_LINE(859)
							{
								HX_STACK_LINE(860)
								axis->x = nx;
								HX_STACK_LINE(861)
								axis->y = ny;
								HX_STACK_LINE(870)
								{
								}
							}
						}
					}
					else{
						HX_STACK_LINE(882)
						Float tmp22 = dt;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(882)
						Float tmp23 = (v1->y * a0->gnormx);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(882)
						Float tmp24 = (v1->x * a0->gnormy);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(882)
						Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(882)
						bool tmp26 = (tmp22 >= tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(882)
						if ((tmp26)){
							HX_STACK_LINE(884)
							Float nx = ((Float)0.0);		HX_STACK_VAR(nx,"nx");
							HX_STACK_LINE(885)
							Float ny = ((Float)0.0);		HX_STACK_VAR(ny,"ny");
							HX_STACK_LINE(886)
							{
								HX_STACK_LINE(887)
								Float tmp27 = (circle->worldCOMx - v1->x);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(887)
								nx = tmp27;
								HX_STACK_LINE(888)
								Float tmp28 = (circle->worldCOMy - v1->y);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(888)
								ny = tmp28;
							}
							HX_STACK_LINE(890)
							Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(890)
							{
								HX_STACK_LINE(890)
								Float tmp28 = (nx * nx);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(890)
								Float tmp29 = (ny * ny);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(890)
								Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(890)
								tmp27 = ::Math_obj::sqrt(tmp30);
							}
							HX_STACK_LINE(890)
							Float len = tmp27;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(891)
							Float tmp28 = len;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(891)
							Float tmp29 = circle->radius;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(891)
							Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(891)
							best = tmp30;
							HX_STACK_LINE(892)
							bool tmp31 = (best < upperBound);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(892)
							if ((tmp31)){
								HX_STACK_LINE(893)
								bool tmp32 = (len == (int)0);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(893)
								if ((tmp32)){
									HX_STACK_LINE(894)
									nx = (int)1;
									HX_STACK_LINE(895)
									ny = (int)0;
									HX_STACK_LINE(904)
									{
									}
								}
								else{
									HX_STACK_LINE(914)
									Float tmp33 = (Float(((Float)1.0)) / Float(len));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(914)
									Float t = tmp33;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(923)
									hx::MultEq(nx,t);
									HX_STACK_LINE(924)
									hx::MultEq(ny,t);
								}
								HX_STACK_LINE(926)
								{
									HX_STACK_LINE(927)
									int t = (int)0;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(936)
									Float tmp33 = v1->x;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(936)
									Float tmp34 = (nx * t);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(936)
									Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(936)
									w1->x = tmp35;
									HX_STACK_LINE(937)
									Float tmp36 = v1->y;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(937)
									Float tmp37 = (ny * t);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(937)
									Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(937)
									w1->y = tmp38;
								}
								HX_STACK_LINE(939)
								{
									HX_STACK_LINE(940)
									Float tmp33 = circle->radius;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(940)
									Float tmp34 = -(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(940)
									Float t = tmp34;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(949)
									Float tmp35 = circle->worldCOMx;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(949)
									Float tmp36 = (nx * t);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(949)
									Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(949)
									w2->x = tmp37;
									HX_STACK_LINE(950)
									Float tmp38 = circle->worldCOMy;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(950)
									Float tmp39 = (ny * t);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(950)
									Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(950)
									w2->y = tmp40;
								}
								HX_STACK_LINE(952)
								{
									HX_STACK_LINE(953)
									axis->x = nx;
									HX_STACK_LINE(954)
									axis->y = ny;
									HX_STACK_LINE(963)
									{
									}
								}
							}
						}
						else{
							HX_STACK_LINE(976)
							{
								HX_STACK_LINE(977)
								Float tmp27 = circle->radius;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(977)
								Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(977)
								Float t = tmp28;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(986)
								Float tmp29 = circle->worldCOMx;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(986)
								Float tmp30 = (a0->gnormx * t);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(986)
								Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(986)
								w2->x = tmp31;
								HX_STACK_LINE(987)
								Float tmp32 = circle->worldCOMy;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(987)
								Float tmp33 = (a0->gnormy * t);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(987)
								Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(987)
								w2->y = tmp34;
							}
							HX_STACK_LINE(989)
							{
								HX_STACK_LINE(990)
								Float tmp27 = best;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(990)
								Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(990)
								Float t = tmp28;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(999)
								Float tmp29 = w2->x;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(999)
								Float tmp30 = (a0->gnormx * t);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(999)
								Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(999)
								w1->x = tmp31;
								HX_STACK_LINE(1000)
								Float tmp32 = w2->y;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1000)
								Float tmp33 = (a0->gnormy * t);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1000)
								Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1000)
								w1->y = tmp34;
							}
							HX_STACK_LINE(1002)
							{
								HX_STACK_LINE(1003)
								axis->x = a0->gnormx;
								HX_STACK_LINE(1004)
								axis->y = a0->gnormy;
								HX_STACK_LINE(1013)
								{
								}
							}
						}
					}
				}
				HX_STACK_LINE(1024)
				bool tmp14 = swapped;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1024)
				if ((tmp14)){
					HX_STACK_LINE(1025)
					Float tmp15 = axis->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1025)
					Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1025)
					axis->x = tmp16;
					HX_STACK_LINE(1026)
					Float tmp17 = axis->y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1026)
					Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1026)
					axis->y = tmp18;
				}
				HX_STACK_LINE(1028)
				Float tmp15 = best;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1028)
				return tmp15;
			}
			else{
				HX_STACK_LINE(1031)
				::zpp_nape::shape::ZPP_Polygon p1 = s1->polygon;		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(1032)
				::zpp_nape::shape::ZPP_Polygon p2 = s2->polygon;		HX_STACK_VAR(p2,"p2");
				HX_STACK_LINE(1033)
				Float tmp12 = ((Float)-1e+100);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1033)
				Float best = tmp12;		HX_STACK_VAR(best,"best");
				HX_STACK_LINE(1034)
				::zpp_nape::shape::ZPP_Edge a1 = null();		HX_STACK_VAR(a1,"a1");
				HX_STACK_LINE(1035)
				::zpp_nape::shape::ZPP_Edge a2 = null();		HX_STACK_VAR(a2,"a2");
				HX_STACK_LINE(1036)
				int besti = (int)0;		HX_STACK_VAR(besti,"besti");
				HX_STACK_LINE(1037)
				{
					HX_STACK_LINE(1038)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp13 = p1->edges->head;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1038)
					::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(1039)
					while((true)){
						HX_STACK_LINE(1039)
						bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1039)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1039)
						if ((tmp15)){
							HX_STACK_LINE(1039)
							break;
						}
						HX_STACK_LINE(1040)
						::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(1041)
						{
							HX_STACK_LINE(1042)
							Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
							HX_STACK_LINE(1043)
							{
								HX_STACK_LINE(1044)
								::zpp_nape::geom::ZPP_Vec2 tmp16 = p2->gverts->next;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1044)
								::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp16;		HX_STACK_VAR(cx_ite1,"cx_ite1");
								HX_STACK_LINE(1045)
								while((true)){
									HX_STACK_LINE(1045)
									bool tmp17 = (cx_ite1 != null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1045)
									bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1045)
									if ((tmp18)){
										HX_STACK_LINE(1045)
										break;
									}
									HX_STACK_LINE(1046)
									::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1047)
									{
										HX_STACK_LINE(1048)
										Float tmp19 = (a->gnormx * v->x);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1048)
										Float tmp20 = (a->gnormy * v->y);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1048)
										Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1048)
										Float k = tmp21;		HX_STACK_VAR(k,"k");
										HX_STACK_LINE(1049)
										bool tmp22 = (k < min);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1049)
										if ((tmp22)){
											HX_STACK_LINE(1049)
											min = k;
										}
									}
									HX_STACK_LINE(1051)
									cx_ite1 = cx_ite1->next;
								}
							}
							HX_STACK_LINE(1054)
							hx::SubEq(min,a->gprojection);
							HX_STACK_LINE(1055)
							bool tmp16 = (min > upperBound);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1055)
							if ((tmp16)){
								HX_STACK_LINE(1056)
								best = min;
								HX_STACK_LINE(1057)
								break;
							}
							HX_STACK_LINE(1059)
							bool tmp17 = (min > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1059)
							if ((tmp17)){
								HX_STACK_LINE(1060)
								bool tmp18 = (min > best);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1060)
								if ((tmp18)){
									HX_STACK_LINE(1061)
									best = min;
									HX_STACK_LINE(1062)
									a1 = a;
									HX_STACK_LINE(1063)
									besti = (int)1;
								}
							}
							else{
								HX_STACK_LINE(1066)
								bool tmp18 = (best < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1066)
								bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1066)
								if ((tmp18)){
									HX_STACK_LINE(1066)
									tmp19 = (min > best);
								}
								else{
									HX_STACK_LINE(1066)
									tmp19 = false;
								}
								HX_STACK_LINE(1066)
								if ((tmp19)){
									HX_STACK_LINE(1067)
									best = min;
									HX_STACK_LINE(1068)
									a1 = a;
									HX_STACK_LINE(1069)
									besti = (int)1;
								}
							}
						}
						HX_STACK_LINE(1072)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(1075)
				bool tmp13 = (best < upperBound);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1075)
				if ((tmp13)){
					HX_STACK_LINE(1076)
					{
						HX_STACK_LINE(1077)
						::zpp_nape::util::ZNPNode_ZPP_Edge tmp14 = p2->edges->head;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1077)
						::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp14;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(1078)
						while((true)){
							HX_STACK_LINE(1078)
							bool tmp15 = (cx_ite != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1078)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1078)
							if ((tmp16)){
								HX_STACK_LINE(1078)
								break;
							}
							HX_STACK_LINE(1079)
							::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(1080)
							{
								HX_STACK_LINE(1081)
								Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
								HX_STACK_LINE(1082)
								{
									HX_STACK_LINE(1083)
									::zpp_nape::geom::ZPP_Vec2 tmp17 = p1->gverts->next;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1083)
									::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp17;		HX_STACK_VAR(cx_ite1,"cx_ite1");
									HX_STACK_LINE(1084)
									while((true)){
										HX_STACK_LINE(1084)
										bool tmp18 = (cx_ite1 != null());		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1084)
										bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1084)
										if ((tmp19)){
											HX_STACK_LINE(1084)
											break;
										}
										HX_STACK_LINE(1085)
										::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(1086)
										{
											HX_STACK_LINE(1087)
											Float tmp20 = (a->gnormx * v->x);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1087)
											Float tmp21 = (a->gnormy * v->y);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1087)
											Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1087)
											Float k = tmp22;		HX_STACK_VAR(k,"k");
											HX_STACK_LINE(1088)
											bool tmp23 = (k < min);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(1088)
											if ((tmp23)){
												HX_STACK_LINE(1088)
												min = k;
											}
										}
										HX_STACK_LINE(1090)
										cx_ite1 = cx_ite1->next;
									}
								}
								HX_STACK_LINE(1093)
								hx::SubEq(min,a->gprojection);
								HX_STACK_LINE(1094)
								bool tmp17 = (min > upperBound);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1094)
								if ((tmp17)){
									HX_STACK_LINE(1095)
									best = min;
									HX_STACK_LINE(1096)
									break;
								}
								HX_STACK_LINE(1098)
								bool tmp18 = (min > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1098)
								if ((tmp18)){
									HX_STACK_LINE(1099)
									bool tmp19 = (min > best);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1099)
									if ((tmp19)){
										HX_STACK_LINE(1100)
										best = min;
										HX_STACK_LINE(1101)
										a2 = a;
										HX_STACK_LINE(1102)
										besti = (int)2;
									}
								}
								else{
									HX_STACK_LINE(1105)
									bool tmp19 = (best < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1105)
									bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1105)
									if ((tmp19)){
										HX_STACK_LINE(1105)
										tmp20 = (min > best);
									}
									else{
										HX_STACK_LINE(1105)
										tmp20 = false;
									}
									HX_STACK_LINE(1105)
									if ((tmp20)){
										HX_STACK_LINE(1106)
										best = min;
										HX_STACK_LINE(1107)
										a2 = a;
										HX_STACK_LINE(1108)
										besti = (int)2;
									}
								}
							}
							HX_STACK_LINE(1111)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(1114)
					bool tmp14 = (best < upperBound);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1114)
					if ((tmp14)){
						HX_STACK_LINE(1115)
						::zpp_nape::shape::ZPP_Polygon q1;		HX_STACK_VAR(q1,"q1");
						HX_STACK_LINE(1115)
						::zpp_nape::shape::ZPP_Polygon q2;		HX_STACK_VAR(q2,"q2");
						HX_STACK_LINE(1116)
						::zpp_nape::shape::ZPP_Edge ax;		HX_STACK_VAR(ax,"ax");
						HX_STACK_LINE(1117)
						bool tmp15 = (besti == (int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1117)
						if ((tmp15)){
							HX_STACK_LINE(1118)
							q1 = p1;
							HX_STACK_LINE(1119)
							q2 = p2;
							HX_STACK_LINE(1120)
							ax = a1;
						}
						else{
							HX_STACK_LINE(1123)
							q1 = p2;
							HX_STACK_LINE(1124)
							q2 = p1;
							HX_STACK_LINE(1125)
							ax = a2;
							HX_STACK_LINE(1126)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = w1;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1127)
							w1 = w2;
							HX_STACK_LINE(1128)
							w2 = tmp16;
							HX_STACK_LINE(1129)
							bool tmp17 = swapped;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1129)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1129)
							swapped = tmp18;
						}
						HX_STACK_LINE(1131)
						::zpp_nape::shape::ZPP_Edge ay = null();		HX_STACK_VAR(ay,"ay");
						HX_STACK_LINE(1132)
						Float min = ((Float)1e100);		HX_STACK_VAR(min,"min");
						HX_STACK_LINE(1133)
						{
							HX_STACK_LINE(1134)
							::zpp_nape::util::ZNPNode_ZPP_Edge tmp16 = q2->edges->head;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1134)
							::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp16;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(1135)
							while((true)){
								HX_STACK_LINE(1135)
								bool tmp17 = (cx_ite != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1135)
								bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1135)
								if ((tmp18)){
									HX_STACK_LINE(1135)
									break;
								}
								HX_STACK_LINE(1136)
								::zpp_nape::shape::ZPP_Edge a = cx_ite->elt;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1137)
								{
									HX_STACK_LINE(1138)
									Float tmp19 = (ax->gnormx * a->gnormx);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1138)
									Float tmp20 = (ax->gnormy * a->gnormy);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1138)
									Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1138)
									Float k = tmp21;		HX_STACK_VAR(k,"k");
									HX_STACK_LINE(1139)
									bool tmp22 = (k < min);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1139)
									if ((tmp22)){
										HX_STACK_LINE(1140)
										min = k;
										HX_STACK_LINE(1141)
										ay = a;
									}
								}
								HX_STACK_LINE(1144)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(1147)
						bool tmp16 = swapped;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1147)
						if ((tmp16)){
							HX_STACK_LINE(1148)
							Float tmp17 = ax->gnormx;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1148)
							Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1148)
							axis->x = tmp18;
							HX_STACK_LINE(1149)
							Float tmp19 = ax->gnormy;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1149)
							Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1149)
							axis->y = tmp20;
							HX_STACK_LINE(1158)
							{
							}
						}
						else{
							HX_STACK_LINE(1168)
							axis->x = ax->gnormx;
							HX_STACK_LINE(1169)
							axis->y = ax->gnormy;
							HX_STACK_LINE(1178)
							{
							}
						}
						HX_STACK_LINE(1187)
						bool tmp17 = (best >= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1187)
						if ((tmp17)){
							HX_STACK_LINE(1188)
							::zpp_nape::geom::ZPP_Vec2 v0 = ax->gp0;		HX_STACK_VAR(v0,"v0");
							HX_STACK_LINE(1189)
							::zpp_nape::geom::ZPP_Vec2 v1 = ax->gp1;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(1190)
							::zpp_nape::geom::ZPP_Vec2 q0 = ay->gp0;		HX_STACK_VAR(q0,"q0");
							HX_STACK_LINE(1191)
							::zpp_nape::geom::ZPP_Vec2 q11 = ay->gp1;		HX_STACK_VAR(q11,"q11");
							HX_STACK_LINE(1192)
							Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
							HX_STACK_LINE(1193)
							Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
							HX_STACK_LINE(1194)
							Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
							HX_STACK_LINE(1195)
							Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
							HX_STACK_LINE(1196)
							{
								HX_STACK_LINE(1197)
								Float tmp18 = (v1->x - v0->x);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1197)
								vx = tmp18;
								HX_STACK_LINE(1198)
								Float tmp19 = (v1->y - v0->y);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1198)
								vy = tmp19;
							}
							HX_STACK_LINE(1200)
							{
								HX_STACK_LINE(1201)
								Float tmp18 = (q11->x - q0->x);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1201)
								qx = tmp18;
								HX_STACK_LINE(1202)
								Float tmp19 = (q11->y - q0->y);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1202)
								qy = tmp19;
							}
							HX_STACK_LINE(1204)
							Float tmp18 = (vx * vx);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1204)
							Float tmp19 = (vy * vy);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1204)
							Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1204)
							Float tmp21 = (Float((int)1) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1204)
							Float vdot = tmp21;		HX_STACK_VAR(vdot,"vdot");
							HX_STACK_LINE(1205)
							Float tmp22 = (qx * qx);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1205)
							Float tmp23 = (qy * qy);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1205)
							Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1205)
							Float tmp25 = (Float((int)1) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1205)
							Float qdot = tmp25;		HX_STACK_VAR(qdot,"qdot");
							HX_STACK_LINE(1206)
							Float tmp26 = vx;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1206)
							Float tmp27 = (v0->x - q0->x);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1206)
							Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1206)
							Float tmp29 = vy;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1206)
							Float tmp30 = (v0->y - q0->y);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1206)
							Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1206)
							Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1206)
							Float tmp33 = -(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1206)
							Float tmp34 = vdot;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1206)
							Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1206)
							Float t1 = tmp35;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(1207)
							Float tmp36 = vx;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1207)
							Float tmp37 = (v0->x - q11->x);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1207)
							Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1207)
							Float tmp39 = vy;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1207)
							Float tmp40 = (v0->y - q11->y);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1207)
							Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1207)
							Float tmp42 = (tmp38 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1207)
							Float tmp43 = -(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1207)
							Float tmp44 = vdot;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1207)
							Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1207)
							Float t2 = tmp45;		HX_STACK_VAR(t2,"t2");
							HX_STACK_LINE(1208)
							Float tmp46 = qx;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1208)
							Float tmp47 = (q0->x - v0->x);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1208)
							Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1208)
							Float tmp49 = qy;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1208)
							Float tmp50 = (q0->y - v0->y);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1208)
							Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1208)
							Float tmp52 = (tmp48 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1208)
							Float tmp53 = -(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1208)
							Float tmp54 = qdot;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1208)
							Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1208)
							Float s11 = tmp55;		HX_STACK_VAR(s11,"s11");
							HX_STACK_LINE(1209)
							Float tmp56 = qx;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1209)
							Float tmp57 = (q0->x - v1->x);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1209)
							Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1209)
							Float tmp59 = qy;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1209)
							Float tmp60 = (q0->y - v1->y);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1209)
							Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1209)
							Float tmp62 = (tmp58 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1209)
							Float tmp63 = -(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1209)
							Float tmp64 = qdot;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1209)
							Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1209)
							Float s21 = tmp65;		HX_STACK_VAR(s21,"s21");
							HX_STACK_LINE(1210)
							bool tmp66 = (t1 < (int)0);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(1210)
							if ((tmp66)){
								HX_STACK_LINE(1210)
								t1 = (int)0;
							}
							else{
								HX_STACK_LINE(1211)
								bool tmp67 = (t1 > (int)1);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(1211)
								if ((tmp67)){
									HX_STACK_LINE(1211)
									t1 = (int)1;
								}
							}
							HX_STACK_LINE(1212)
							bool tmp67 = (t2 < (int)0);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(1212)
							if ((tmp67)){
								HX_STACK_LINE(1212)
								t2 = (int)0;
							}
							else{
								HX_STACK_LINE(1213)
								bool tmp68 = (t2 > (int)1);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(1213)
								if ((tmp68)){
									HX_STACK_LINE(1213)
									t2 = (int)1;
								}
							}
							HX_STACK_LINE(1214)
							bool tmp68 = (s11 < (int)0);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(1214)
							if ((tmp68)){
								HX_STACK_LINE(1214)
								s11 = (int)0;
							}
							else{
								HX_STACK_LINE(1215)
								bool tmp69 = (s11 > (int)1);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(1215)
								if ((tmp69)){
									HX_STACK_LINE(1215)
									s11 = (int)1;
								}
							}
							HX_STACK_LINE(1216)
							bool tmp69 = (s21 < (int)0);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(1216)
							if ((tmp69)){
								HX_STACK_LINE(1216)
								s21 = (int)0;
							}
							else{
								HX_STACK_LINE(1217)
								bool tmp70 = (s21 > (int)1);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(1217)
								if ((tmp70)){
									HX_STACK_LINE(1217)
									s21 = (int)1;
								}
							}
							HX_STACK_LINE(1218)
							Float f1x = ((Float)0.0);		HX_STACK_VAR(f1x,"f1x");
							HX_STACK_LINE(1219)
							Float f1y = ((Float)0.0);		HX_STACK_VAR(f1y,"f1y");
							HX_STACK_LINE(1220)
							{
								HX_STACK_LINE(1221)
								Float t = t1;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1230)
								Float tmp70 = v0->x;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(1230)
								Float tmp71 = (vx * t);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(1230)
								Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(1230)
								f1x = tmp72;
								HX_STACK_LINE(1231)
								Float tmp73 = v0->y;		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(1231)
								Float tmp74 = (vy * t);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(1231)
								Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(1231)
								f1y = tmp75;
							}
							HX_STACK_LINE(1233)
							Float f2x = ((Float)0.0);		HX_STACK_VAR(f2x,"f2x");
							HX_STACK_LINE(1234)
							Float f2y = ((Float)0.0);		HX_STACK_VAR(f2y,"f2y");
							HX_STACK_LINE(1235)
							{
								HX_STACK_LINE(1236)
								Float t = t2;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1245)
								Float tmp70 = v0->x;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(1245)
								Float tmp71 = (vx * t);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(1245)
								Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(1245)
								f2x = tmp72;
								HX_STACK_LINE(1246)
								Float tmp73 = v0->y;		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(1246)
								Float tmp74 = (vy * t);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(1246)
								Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(1246)
								f2y = tmp75;
							}
							HX_STACK_LINE(1248)
							Float g1x = ((Float)0.0);		HX_STACK_VAR(g1x,"g1x");
							HX_STACK_LINE(1249)
							Float g1y = ((Float)0.0);		HX_STACK_VAR(g1y,"g1y");
							HX_STACK_LINE(1250)
							{
								HX_STACK_LINE(1251)
								Float t = s11;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1260)
								Float tmp70 = q0->x;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(1260)
								Float tmp71 = (qx * t);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(1260)
								Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(1260)
								g1x = tmp72;
								HX_STACK_LINE(1261)
								Float tmp73 = q0->y;		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(1261)
								Float tmp74 = (qy * t);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(1261)
								Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(1261)
								g1y = tmp75;
							}
							HX_STACK_LINE(1263)
							Float g2x = ((Float)0.0);		HX_STACK_VAR(g2x,"g2x");
							HX_STACK_LINE(1264)
							Float g2y = ((Float)0.0);		HX_STACK_VAR(g2y,"g2y");
							HX_STACK_LINE(1265)
							{
								HX_STACK_LINE(1266)
								Float t = s21;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1275)
								Float tmp70 = q0->x;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(1275)
								Float tmp71 = (qx * t);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(1275)
								Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(1275)
								g2x = tmp72;
								HX_STACK_LINE(1276)
								Float tmp73 = q0->y;		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(1276)
								Float tmp74 = (qy * t);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(1276)
								Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(1276)
								g2y = tmp75;
							}
							HX_STACK_LINE(1278)
							Float tmp70;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(1278)
							{
								HX_STACK_LINE(1278)
								Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
								HX_STACK_LINE(1278)
								Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
								HX_STACK_LINE(1278)
								{
									HX_STACK_LINE(1278)
									Float tmp71 = (f1x - q0->x);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(1278)
									dx = tmp71;
									HX_STACK_LINE(1278)
									Float tmp72 = (f1y - q0->y);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(1278)
									dy = tmp72;
								}
								HX_STACK_LINE(1278)
								Float tmp71 = (dx * dx);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(1278)
								Float tmp72 = (dy * dy);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(1278)
								tmp70 = (tmp71 + tmp72);
							}
							HX_STACK_LINE(1278)
							Float d1 = tmp70;		HX_STACK_VAR(d1,"d1");
							HX_STACK_LINE(1279)
							Float tmp71;		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(1279)
							{
								HX_STACK_LINE(1279)
								Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
								HX_STACK_LINE(1279)
								Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
								HX_STACK_LINE(1279)
								{
									HX_STACK_LINE(1279)
									Float tmp72 = (f2x - q11->x);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(1279)
									dx = tmp72;
									HX_STACK_LINE(1279)
									Float tmp73 = (f2y - q11->y);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(1279)
									dy = tmp73;
								}
								HX_STACK_LINE(1279)
								Float tmp72 = (dx * dx);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(1279)
								Float tmp73 = (dy * dy);		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(1279)
								tmp71 = (tmp72 + tmp73);
							}
							HX_STACK_LINE(1279)
							Float d2 = tmp71;		HX_STACK_VAR(d2,"d2");
							HX_STACK_LINE(1280)
							Float tmp72;		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(1280)
							{
								HX_STACK_LINE(1280)
								Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
								HX_STACK_LINE(1280)
								Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
								HX_STACK_LINE(1280)
								{
									HX_STACK_LINE(1280)
									Float tmp73 = (g1x - v0->x);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(1280)
									dx = tmp73;
									HX_STACK_LINE(1280)
									Float tmp74 = (g1y - v0->y);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(1280)
									dy = tmp74;
								}
								HX_STACK_LINE(1280)
								Float tmp73 = (dx * dx);		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(1280)
								Float tmp74 = (dy * dy);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(1280)
								tmp72 = (tmp73 + tmp74);
							}
							HX_STACK_LINE(1280)
							Float e1 = tmp72;		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(1281)
							Float tmp73;		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(1281)
							{
								HX_STACK_LINE(1281)
								Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
								HX_STACK_LINE(1281)
								Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
								HX_STACK_LINE(1281)
								{
									HX_STACK_LINE(1281)
									Float tmp74 = (g2x - v1->x);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(1281)
									dx = tmp74;
									HX_STACK_LINE(1281)
									Float tmp75 = (g2y - v1->y);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(1281)
									dy = tmp75;
								}
								HX_STACK_LINE(1281)
								Float tmp74 = (dx * dx);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(1281)
								Float tmp75 = (dy * dy);		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(1281)
								tmp73 = (tmp74 + tmp75);
							}
							HX_STACK_LINE(1281)
							Float e2 = tmp73;		HX_STACK_VAR(e2,"e2");
							HX_STACK_LINE(1282)
							Float minfx = ((Float)0.0);		HX_STACK_VAR(minfx,"minfx");
							HX_STACK_LINE(1283)
							Float minfy = ((Float)0.0);		HX_STACK_VAR(minfy,"minfy");
							HX_STACK_LINE(1284)
							::zpp_nape::geom::ZPP_Vec2 minq = null();		HX_STACK_VAR(minq,"minq");
							HX_STACK_LINE(1285)
							bool tmp74 = (d1 < d2);		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(1285)
							if ((tmp74)){
								HX_STACK_LINE(1286)
								{
									HX_STACK_LINE(1287)
									minfx = f1x;
									HX_STACK_LINE(1288)
									minfy = f1y;
									HX_STACK_LINE(1297)
									{
									}
								}
								HX_STACK_LINE(1306)
								minq = q0;
							}
							else{
								HX_STACK_LINE(1309)
								{
									HX_STACK_LINE(1310)
									minfx = f2x;
									HX_STACK_LINE(1311)
									minfy = f2y;
									HX_STACK_LINE(1320)
									{
									}
								}
								HX_STACK_LINE(1329)
								minq = q11;
								HX_STACK_LINE(1330)
								d1 = d2;
							}
							HX_STACK_LINE(1332)
							Float mingx = ((Float)0.0);		HX_STACK_VAR(mingx,"mingx");
							HX_STACK_LINE(1333)
							Float mingy = ((Float)0.0);		HX_STACK_VAR(mingy,"mingy");
							HX_STACK_LINE(1334)
							::zpp_nape::geom::ZPP_Vec2 minv = null();		HX_STACK_VAR(minv,"minv");
							HX_STACK_LINE(1335)
							bool tmp75 = (e1 < e2);		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(1335)
							if ((tmp75)){
								HX_STACK_LINE(1336)
								{
									HX_STACK_LINE(1337)
									mingx = g1x;
									HX_STACK_LINE(1338)
									mingy = g1y;
									HX_STACK_LINE(1347)
									{
									}
								}
								HX_STACK_LINE(1356)
								minv = v0;
							}
							else{
								HX_STACK_LINE(1359)
								{
									HX_STACK_LINE(1360)
									mingx = g2x;
									HX_STACK_LINE(1361)
									mingy = g2y;
									HX_STACK_LINE(1370)
									{
									}
								}
								HX_STACK_LINE(1379)
								minv = v1;
								HX_STACK_LINE(1380)
								e1 = e2;
							}
							HX_STACK_LINE(1382)
							bool tmp76 = (d1 < e1);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(1382)
							if ((tmp76)){
								HX_STACK_LINE(1383)
								{
									HX_STACK_LINE(1384)
									w1->x = minfx;
									HX_STACK_LINE(1385)
									w1->y = minfy;
									HX_STACK_LINE(1394)
									{
									}
								}
								HX_STACK_LINE(1403)
								{
									HX_STACK_LINE(1404)
									w2->x = minq->x;
									HX_STACK_LINE(1405)
									w2->y = minq->y;
									HX_STACK_LINE(1414)
									{
									}
								}
								HX_STACK_LINE(1423)
								Float tmp77 = d1;		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(1423)
								Float tmp78 = ::Math_obj::sqrt(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(1423)
								best = tmp78;
							}
							else{
								HX_STACK_LINE(1426)
								{
									HX_STACK_LINE(1427)
									w2->x = mingx;
									HX_STACK_LINE(1428)
									w2->y = mingy;
									HX_STACK_LINE(1437)
									{
									}
								}
								HX_STACK_LINE(1446)
								{
									HX_STACK_LINE(1447)
									w1->x = minv->x;
									HX_STACK_LINE(1448)
									w1->y = minv->y;
									HX_STACK_LINE(1457)
									{
									}
								}
								HX_STACK_LINE(1466)
								Float tmp77 = e1;		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(1466)
								Float tmp78 = ::Math_obj::sqrt(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(1466)
								best = tmp78;
							}
							HX_STACK_LINE(1468)
							bool tmp77 = (best != (int)0);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(1468)
							if ((tmp77)){
								HX_STACK_LINE(1469)
								{
									HX_STACK_LINE(1470)
									Float tmp78 = (w2->x - w1->x);		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(1470)
									axis->x = tmp78;
									HX_STACK_LINE(1471)
									Float tmp79 = (w2->y - w1->y);		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(1471)
									axis->y = tmp79;
								}
								HX_STACK_LINE(1473)
								{
									HX_STACK_LINE(1474)
									Float tmp78 = (Float(((Float)1.0)) / Float(best));		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(1474)
									Float t = tmp78;		HX_STACK_VAR(t,"t");
									HX_STACK_LINE(1483)
									hx::MultEq(axis->x,t);
									HX_STACK_LINE(1484)
									hx::MultEq(axis->y,t);
								}
								HX_STACK_LINE(1486)
								bool tmp78 = swapped;		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(1486)
								if ((tmp78)){
									HX_STACK_LINE(1487)
									Float tmp79 = axis->x;		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(1487)
									Float tmp80 = -(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(1487)
									axis->x = tmp80;
									HX_STACK_LINE(1488)
									Float tmp81 = axis->y;		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(1488)
									Float tmp82 = -(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(1488)
									axis->y = tmp82;
								}
							}
							HX_STACK_LINE(1491)
							Float tmp78 = best;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(1491)
							return tmp78;
						}
						else{
							HX_STACK_LINE(1494)
							Float c0x = ((Float)0.0);		HX_STACK_VAR(c0x,"c0x");
							HX_STACK_LINE(1495)
							Float c0y = ((Float)0.0);		HX_STACK_VAR(c0y,"c0y");
							HX_STACK_LINE(1496)
							{
								HX_STACK_LINE(1497)
								Float tmp18 = ay->gp0->x;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1497)
								c0x = tmp18;
								HX_STACK_LINE(1498)
								Float tmp19 = ay->gp0->y;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1498)
								c0y = tmp19;
								HX_STACK_LINE(1507)
								{
								}
							}
							HX_STACK_LINE(1516)
							Float c1x = ((Float)0.0);		HX_STACK_VAR(c1x,"c1x");
							HX_STACK_LINE(1517)
							Float c1y = ((Float)0.0);		HX_STACK_VAR(c1y,"c1y");
							HX_STACK_LINE(1518)
							{
								HX_STACK_LINE(1519)
								Float tmp18 = ay->gp1->x;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1519)
								c1x = tmp18;
								HX_STACK_LINE(1520)
								Float tmp19 = ay->gp1->y;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1520)
								c1y = tmp19;
								HX_STACK_LINE(1529)
								{
								}
							}
							HX_STACK_LINE(1538)
							Float dvx = ((Float)0.0);		HX_STACK_VAR(dvx,"dvx");
							HX_STACK_LINE(1539)
							Float dvy = ((Float)0.0);		HX_STACK_VAR(dvy,"dvy");
							HX_STACK_LINE(1540)
							{
								HX_STACK_LINE(1541)
								Float tmp18 = (c1x - c0x);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1541)
								dvx = tmp18;
								HX_STACK_LINE(1542)
								Float tmp19 = (c1y - c0y);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1542)
								dvy = tmp19;
							}
							HX_STACK_LINE(1544)
							Float tmp18 = (ax->gnormy * c0x);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1544)
							Float tmp19 = (ax->gnormx * c0y);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1544)
							Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1544)
							Float d0 = tmp20;		HX_STACK_VAR(d0,"d0");
							HX_STACK_LINE(1545)
							Float tmp21 = (ax->gnormy * c1x);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1545)
							Float tmp22 = (ax->gnormx * c1y);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1545)
							Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1545)
							Float d1 = tmp23;		HX_STACK_VAR(d1,"d1");
							HX_STACK_LINE(1546)
							Float tmp24 = (d1 - d0);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1546)
							Float tmp25 = (Float((int)1) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1546)
							Float den = tmp25;		HX_STACK_VAR(den,"den");
							HX_STACK_LINE(1547)
							Float tmp26 = ax->tp1;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1547)
							Float tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1547)
							Float tmp28 = d0;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1547)
							Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1547)
							Float tmp30 = den;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1547)
							Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1547)
							Float t = tmp31;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1548)
							Float tmp32 = t;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1548)
							Float tmp33 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1548)
							bool tmp34 = (tmp32 > tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1548)
							if ((tmp34)){
								HX_STACK_LINE(1549)
								Float t1 = t;		HX_STACK_VAR(t1,"t1");
								HX_STACK_LINE(1558)
								Float tmp35 = (dvx * t1);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1558)
								hx::AddEq(c0x,tmp35);
								HX_STACK_LINE(1559)
								Float tmp36 = (dvy * t1);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1559)
								hx::AddEq(c0y,tmp36);
							}
							HX_STACK_LINE(1561)
							Float tmp35 = ax->tp0;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1561)
							Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1561)
							Float tmp37 = d1;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1561)
							Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1561)
							Float tmp39 = den;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1561)
							Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1561)
							Float t1 = tmp40;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(1562)
							Float tmp41 = t1;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1562)
							Float tmp42 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1562)
							Float tmp43 = -(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1562)
							bool tmp44 = (tmp41 < tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1562)
							if ((tmp44)){
								HX_STACK_LINE(1563)
								Float t2 = t1;		HX_STACK_VAR(t2,"t2");
								HX_STACK_LINE(1572)
								Float tmp45 = (dvx * t2);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1572)
								hx::AddEq(c1x,tmp45);
								HX_STACK_LINE(1573)
								Float tmp46 = (dvy * t2);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1573)
								hx::AddEq(c1y,tmp46);
							}
							HX_STACK_LINE(1575)
							Float tmp45 = (c0x * ax->gnormx);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1575)
							Float tmp46 = (c0y * ax->gnormy);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1575)
							Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1575)
							Float tmp48 = ax->gprojection;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1575)
							Float tmp49 = (tmp47 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1575)
							Float c0d = tmp49;		HX_STACK_VAR(c0d,"c0d");
							HX_STACK_LINE(1576)
							Float tmp50 = (c1x * ax->gnormx);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1576)
							Float tmp51 = (c1y * ax->gnormy);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1576)
							Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1576)
							Float tmp53 = ax->gprojection;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1576)
							Float tmp54 = (tmp52 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1576)
							Float c1d = tmp54;		HX_STACK_VAR(c1d,"c1d");
							HX_STACK_LINE(1577)
							bool tmp55 = (c0d < c1d);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1577)
							if ((tmp55)){
								HX_STACK_LINE(1578)
								{
									HX_STACK_LINE(1579)
									w2->x = c0x;
									HX_STACK_LINE(1580)
									w2->y = c0y;
									HX_STACK_LINE(1589)
									{
									}
								}
								HX_STACK_LINE(1598)
								{
									HX_STACK_LINE(1599)
									Float tmp56 = c0d;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(1599)
									Float tmp57 = -(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(1599)
									Float t2 = tmp57;		HX_STACK_VAR(t2,"t2");
									HX_STACK_LINE(1608)
									Float tmp58 = w2->x;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(1608)
									Float tmp59 = (ax->gnormx * t2);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(1608)
									Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(1608)
									w1->x = tmp60;
									HX_STACK_LINE(1609)
									Float tmp61 = w2->y;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(1609)
									Float tmp62 = (ax->gnormy * t2);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(1609)
									Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(1609)
									w1->y = tmp63;
								}
								HX_STACK_LINE(1611)
								Float tmp56 = c0d;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(1611)
								return tmp56;
							}
							else{
								HX_STACK_LINE(1614)
								{
									HX_STACK_LINE(1615)
									w2->x = c1x;
									HX_STACK_LINE(1616)
									w2->y = c1y;
									HX_STACK_LINE(1625)
									{
									}
								}
								HX_STACK_LINE(1634)
								{
									HX_STACK_LINE(1635)
									Float tmp56 = c1d;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(1635)
									Float tmp57 = -(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(1635)
									Float t2 = tmp57;		HX_STACK_VAR(t2,"t2");
									HX_STACK_LINE(1644)
									Float tmp58 = w2->x;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(1644)
									Float tmp59 = (ax->gnormx * t2);		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(1644)
									Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(1644)
									w1->x = tmp60;
									HX_STACK_LINE(1645)
									Float tmp61 = w2->y;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(1645)
									Float tmp62 = (ax->gnormy * t2);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(1645)
									Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(1645)
									w1->y = tmp63;
								}
								HX_STACK_LINE(1647)
								Float tmp56 = c1d;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(1647)
								return tmp56;
							}
						}
					}
					else{
						HX_STACK_LINE(1651)
						Float tmp15 = upperBound;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1651)
						return tmp15;
					}
				}
				else{
					HX_STACK_LINE(1653)
					Float tmp14 = upperBound;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1653)
					return tmp14;
				}
			}
		}
		HX_STACK_LINE(648)
		return ((Float)0.);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ZPP_SweepDistance_obj,distance,return )


ZPP_SweepDistance_obj::ZPP_SweepDistance_obj()
{
}

bool ZPP_SweepDistance_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"staticSweep") ) { outValue = staticSweep_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dynamicSweep") ) { outValue = dynamicSweep_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"distanceBody") ) { outValue = distanceBody_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SweepDistance_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SweepDistance_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_SweepDistance_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("dynamicSweep","\xed","\x59","\xb4","\x3c"),
	HX_HCSTRING("staticSweep","\x5e","\xf2","\xd6","\x9a"),
	HX_HCSTRING("distanceBody","\x77","\x78","\xf0","\xf3"),
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	::String(null()) };

void ZPP_SweepDistance_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_SweepDistance","\x4b","\xa8","\xcb","\x76");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_SweepDistance_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ZPP_SweepDistance_obj >;
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
} // end namespace geom
