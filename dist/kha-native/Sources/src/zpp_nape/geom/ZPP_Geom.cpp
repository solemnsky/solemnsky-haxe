#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Geom_obj::__construct()
{
	return null();
}

//ZPP_Geom_obj::~ZPP_Geom_obj() { }

Dynamic ZPP_Geom_obj::__CreateEmpty() { return  new ZPP_Geom_obj; }
hx::ObjectPtr< ZPP_Geom_obj > ZPP_Geom_obj::__new()
{  hx::ObjectPtr< ZPP_Geom_obj > _result_ = new ZPP_Geom_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Geom_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Geom_obj > _result_ = new ZPP_Geom_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_Geom_obj::validateShape( ::zpp_nape::shape::ZPP_Shape s){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Geom","validateShape",0x53c3322f,"zpp_nape.geom.ZPP_Geom.validateShape","zpp_nape/geom/Geom.hx",175,0x229d5cd1)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(176)
		int tmp = s->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		int tmp1 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(176)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(176)
		if ((tmp2)){
			HX_STACK_LINE(176)
			::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(176)
			bool tmp3 = _this->zip_gaxi;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			if ((tmp3)){
				HX_STACK_LINE(176)
				bool tmp4 = (_this->body != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(176)
				if ((tmp4)){
					HX_STACK_LINE(176)
					_this->zip_gaxi = false;
					HX_STACK_LINE(176)
					_this->validate_laxi();
					HX_STACK_LINE(176)
					{
						HX_STACK_LINE(176)
						::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(176)
						bool tmp5 = _this1->zip_axis;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(176)
						if ((tmp5)){
							HX_STACK_LINE(176)
							_this1->zip_axis = false;
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								Float tmp6 = _this1->rot;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(176)
								Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(176)
								_this1->axisx = tmp7;
								HX_STACK_LINE(176)
								Float tmp8 = _this1->rot;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(176)
								Float tmp9 = ::Math_obj::cos(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(176)
								_this1->axisy = tmp9;
								HX_STACK_LINE(176)
								Dynamic();
							}
						}
					}
					HX_STACK_LINE(176)
					{
						HX_STACK_LINE(176)
						bool tmp5 = _this->zip_gverts;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(176)
						if ((tmp5)){
							HX_STACK_LINE(176)
							bool tmp6 = (_this->body != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(176)
							if ((tmp6)){
								HX_STACK_LINE(176)
								_this->zip_gverts = false;
								HX_STACK_LINE(176)
								_this->validate_lverts();
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(176)
									bool tmp7 = _this1->zip_axis;		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(176)
									if ((tmp7)){
										HX_STACK_LINE(176)
										_this1->zip_axis = false;
										HX_STACK_LINE(176)
										{
											HX_STACK_LINE(176)
											Float tmp8 = _this1->rot;		HX_STACK_VAR(tmp8,"tmp8");
											HX_STACK_LINE(176)
											Float tmp9 = ::Math_obj::sin(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
											HX_STACK_LINE(176)
											_this1->axisx = tmp9;
											HX_STACK_LINE(176)
											Float tmp10 = _this1->rot;		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(176)
											Float tmp11 = ::Math_obj::cos(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(176)
											_this1->axisy = tmp11;
											HX_STACK_LINE(176)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(176)
								::zpp_nape::geom::ZPP_Vec2 tmp7 = _this->lverts->next;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(176)
								::zpp_nape::geom::ZPP_Vec2 li = tmp7;		HX_STACK_VAR(li,"li");
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::zpp_nape::geom::ZPP_Vec2 tmp8 = _this->gverts->next;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(176)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp8;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(176)
									while((true)){
										HX_STACK_LINE(176)
										bool tmp9 = (cx_ite != null());		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(176)
										bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(176)
										if ((tmp10)){
											HX_STACK_LINE(176)
											break;
										}
										HX_STACK_LINE(176)
										::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(176)
										{
											HX_STACK_LINE(176)
											::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
											HX_STACK_LINE(176)
											li = li->next;
											HX_STACK_LINE(176)
											{
												HX_STACK_LINE(176)
												Float tmp11 = _this->body->posx;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(176)
												Float tmp12 = _this->body->axisy;		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(176)
												Float tmp13 = l->x;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(176)
												Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(176)
												Float tmp15 = _this->body->axisx;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(176)
												Float tmp16 = l->y;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(176)
												Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(176)
												Float tmp18 = (tmp14 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(176)
												Float tmp19 = (tmp11 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(176)
												g->x = tmp19;
												HX_STACK_LINE(176)
												Float tmp20 = _this->body->posy;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(176)
												Float tmp21 = l->x;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(176)
												Float tmp22 = _this->body->axisx;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(176)
												Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(176)
												Float tmp24 = l->y;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(176)
												Float tmp25 = _this->body->axisy;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(176)
												Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(176)
												Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(176)
												Float tmp28 = (tmp20 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(176)
												g->y = tmp28;
											}
										}
										HX_STACK_LINE(176)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
					}
					HX_STACK_LINE(176)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp5 = _this->edges->head;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(176)
					::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp5;		HX_STACK_VAR(ite,"ite");
					HX_STACK_LINE(176)
					{
						HX_STACK_LINE(176)
						::zpp_nape::geom::ZPP_Vec2 tmp6 = _this->gverts->next;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(176)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp6;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(176)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(176)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(176)
						while((true)){
							HX_STACK_LINE(176)
							bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(176)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(176)
							if ((tmp8)){
								HX_STACK_LINE(176)
								break;
							}
							HX_STACK_LINE(176)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(176)
								ite = ite->next;
								HX_STACK_LINE(176)
								e->gp0 = u;
								HX_STACK_LINE(176)
								e->gp1 = v;
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									Float tmp9 = _this->body->axisy;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(176)
									Float tmp10 = e->lnormx;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(176)
									Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(176)
									Float tmp12 = _this->body->axisx;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(176)
									Float tmp13 = e->lnormy;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(176)
									Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(176)
									Float tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(176)
									e->gnormx = tmp15;
									HX_STACK_LINE(176)
									Float tmp16 = e->lnormx;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(176)
									Float tmp17 = _this->body->axisx;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(176)
									Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(176)
									Float tmp19 = e->lnormy;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(176)
									Float tmp20 = _this->body->axisy;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(176)
									Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(176)
									Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(176)
									e->gnormy = tmp22;
								}
								HX_STACK_LINE(176)
								Float tmp9 = _this->body->posx;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(176)
								Float tmp10 = e->gnormx;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(176)
								Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(176)
								Float tmp12 = _this->body->posy;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(176)
								Float tmp13 = e->gnormy;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(176)
								Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(176)
								Float tmp16 = e->lprojection;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								e->gprojection = tmp17;
								HX_STACK_LINE(176)
								bool tmp18 = (e->wrap_gnorm != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(176)
								if ((tmp18)){
									HX_STACK_LINE(176)
									::zpp_nape::geom::ZPP_Vec2 tmp19 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(176)
									tmp19->x = e->gnormx;
									HX_STACK_LINE(176)
									::zpp_nape::geom::ZPP_Vec2 tmp20 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(176)
									tmp20->y = e->gnormy;
									HX_STACK_LINE(176)
									{
									}
								}
								HX_STACK_LINE(176)
								Float tmp19 = e->gp0->y;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(176)
								Float tmp20 = e->gnormx;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(176)
								Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(176)
								Float tmp22 = e->gp0->x;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(176)
								Float tmp23 = e->gnormy;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(176)
								Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(176)
								Float tmp25 = (tmp21 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(176)
								e->tp0 = tmp25;
								HX_STACK_LINE(176)
								Float tmp26 = e->gp1->y;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(176)
								Float tmp27 = e->gnormx;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(176)
								Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(176)
								Float tmp29 = e->gp1->x;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(176)
								Float tmp30 = e->gnormy;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(176)
								Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(176)
								Float tmp32 = (tmp28 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(176)
								e->tp1 = tmp32;
							}
							HX_STACK_LINE(176)
							u = v;
							HX_STACK_LINE(176)
							cx_ite = cx_ite->next;
						}
						HX_STACK_LINE(176)
						::zpp_nape::geom::ZPP_Vec2 tmp7 = _this->gverts->next;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(176)
						::zpp_nape::geom::ZPP_Vec2 v = tmp7;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(176)
						{
							HX_STACK_LINE(176)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(176)
							ite = ite->next;
							HX_STACK_LINE(176)
							e->gp0 = u;
							HX_STACK_LINE(176)
							e->gp1 = v;
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								Float tmp8 = _this->body->axisy;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(176)
								Float tmp9 = e->lnormx;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(176)
								Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(176)
								Float tmp11 = _this->body->axisx;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(176)
								Float tmp12 = e->lnormy;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(176)
								Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(176)
								e->gnormx = tmp14;
								HX_STACK_LINE(176)
								Float tmp15 = e->lnormx;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(176)
								Float tmp16 = _this->body->axisx;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								Float tmp18 = e->lnormy;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(176)
								Float tmp19 = _this->body->axisy;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(176)
								Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(176)
								Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(176)
								e->gnormy = tmp21;
							}
							HX_STACK_LINE(176)
							Float tmp8 = _this->body->posx;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(176)
							Float tmp9 = e->gnormx;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(176)
							Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(176)
							Float tmp11 = _this->body->posy;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(176)
							Float tmp12 = e->gnormy;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(176)
							Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(176)
							Float tmp15 = e->lprojection;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(176)
							Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(176)
							e->gprojection = tmp16;
							HX_STACK_LINE(176)
							bool tmp17 = (e->wrap_gnorm != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(176)
							if ((tmp17)){
								HX_STACK_LINE(176)
								::zpp_nape::geom::ZPP_Vec2 tmp18 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(176)
								tmp18->x = e->gnormx;
								HX_STACK_LINE(176)
								::zpp_nape::geom::ZPP_Vec2 tmp19 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(176)
								tmp19->y = e->gnormy;
								HX_STACK_LINE(176)
								{
								}
							}
							HX_STACK_LINE(176)
							Float tmp18 = e->gp0->y;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(176)
							Float tmp19 = e->gnormx;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(176)
							Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(176)
							Float tmp21 = e->gp0->x;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(176)
							Float tmp22 = e->gnormy;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(176)
							Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(176)
							Float tmp24 = (tmp20 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(176)
							e->tp0 = tmp24;
							HX_STACK_LINE(176)
							Float tmp25 = e->gp1->y;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(176)
							Float tmp26 = e->gnormx;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(176)
							Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(176)
							Float tmp28 = e->gp1->x;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(176)
							Float tmp29 = e->gnormy;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(176)
							Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(176)
							Float tmp31 = (tmp27 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(176)
							e->tp1 = tmp31;
						}
					}
				}
			}
		}
		HX_STACK_LINE(177)
		{
			HX_STACK_LINE(177)
			bool tmp3 = s->zip_aabb;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(177)
			if ((tmp3)){
				HX_STACK_LINE(177)
				bool tmp4 = (s->body != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(177)
				if ((tmp4)){
					HX_STACK_LINE(177)
					s->zip_aabb = false;
					HX_STACK_LINE(177)
					int tmp5 = s->type;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(177)
					int tmp6 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(177)
					bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(177)
					if ((tmp7)){
						HX_STACK_LINE(177)
						::zpp_nape::shape::ZPP_Circle _this = s->circle;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(177)
						{
							HX_STACK_LINE(177)
							bool tmp8 = _this->zip_worldCOM;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(177)
							if ((tmp8)){
								HX_STACK_LINE(177)
								bool tmp9 = (_this->body != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(177)
								if ((tmp9)){
									HX_STACK_LINE(177)
									_this->zip_worldCOM = false;
									HX_STACK_LINE(177)
									{
										HX_STACK_LINE(177)
										bool tmp10 = _this->zip_localCOM;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(177)
										if ((tmp10)){
											HX_STACK_LINE(177)
											_this->zip_localCOM = false;
											HX_STACK_LINE(177)
											int tmp11 = _this->type;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(177)
											int tmp12 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(177)
											bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(177)
											if ((tmp13)){
												HX_STACK_LINE(177)
												::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(177)
												::zpp_nape::geom::ZPP_Vec2 tmp14 = _this1->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(177)
												bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(177)
												if ((tmp15)){
													HX_STACK_LINE(177)
													HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
												}
												HX_STACK_LINE(177)
												::zpp_nape::geom::ZPP_Vec2 tmp16 = _this1->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(177)
												::zpp_nape::geom::ZPP_Vec2 tmp17 = tmp16->next;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(177)
												bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(177)
												if ((tmp18)){
													HX_STACK_LINE(177)
													::zpp_nape::geom::ZPP_Vec2 tmp19 = _this1->lverts->next;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(177)
													_this1->localCOMx = tmp19->x;
													HX_STACK_LINE(177)
													::zpp_nape::geom::ZPP_Vec2 tmp20 = _this1->lverts->next;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(177)
													_this1->localCOMy = tmp20->y;
													HX_STACK_LINE(177)
													Dynamic();
												}
												else{
													HX_STACK_LINE(177)
													::zpp_nape::geom::ZPP_Vec2 tmp19 = _this1->lverts->next;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(177)
													::zpp_nape::geom::ZPP_Vec2 tmp20 = tmp19->next->next;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(177)
													bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(177)
													if ((tmp21)){
														HX_STACK_LINE(177)
														{
															HX_STACK_LINE(177)
															::zpp_nape::geom::ZPP_Vec2 tmp22 = _this1->lverts->next;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(177)
															_this1->localCOMx = tmp22->x;
															HX_STACK_LINE(177)
															::zpp_nape::geom::ZPP_Vec2 tmp23 = _this1->lverts->next;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(177)
															_this1->localCOMy = tmp23->y;
															HX_STACK_LINE(177)
															{
															}
														}
														HX_STACK_LINE(177)
														{
															HX_STACK_LINE(177)
															Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(177)
															::zpp_nape::geom::ZPP_Vec2 tmp22 = _this1->lverts->next;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(177)
															Float tmp23 = tmp22->next->x;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(177)
															Float tmp24 = t;		HX_STACK_VAR(tmp24,"tmp24");
															HX_STACK_LINE(177)
															Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
															HX_STACK_LINE(177)
															hx::AddEq(_this1->localCOMx,tmp25);
															HX_STACK_LINE(177)
															::zpp_nape::geom::ZPP_Vec2 tmp26 = _this1->lverts->next;		HX_STACK_VAR(tmp26,"tmp26");
															HX_STACK_LINE(177)
															Float tmp27 = tmp26->next->y;		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(177)
															Float tmp28 = t;		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(177)
															Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(177)
															hx::AddEq(_this1->localCOMy,tmp29);
														}
														HX_STACK_LINE(177)
														{
															HX_STACK_LINE(177)
															Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(177)
															hx::MultEq(_this1->localCOMx,t);
															HX_STACK_LINE(177)
															hx::MultEq(_this1->localCOMy,t);
														}
													}
													else{
														HX_STACK_LINE(177)
														{
															HX_STACK_LINE(177)
															_this1->localCOMx = (int)0;
															HX_STACK_LINE(177)
															_this1->localCOMy = (int)0;
															HX_STACK_LINE(177)
															{
															}
														}
														HX_STACK_LINE(177)
														Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
														HX_STACK_LINE(177)
														{
															HX_STACK_LINE(177)
															::zpp_nape::geom::ZPP_Vec2 tmp22 = _this1->lverts->next;		HX_STACK_VAR(tmp22,"tmp22");
															HX_STACK_LINE(177)
															::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp22;		HX_STACK_VAR(cx_ite,"cx_ite");
															HX_STACK_LINE(177)
															::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
															HX_STACK_LINE(177)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(177)
															::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
															HX_STACK_LINE(177)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(177)
															while((true)){
																HX_STACK_LINE(177)
																bool tmp23 = (cx_ite != null());		HX_STACK_VAR(tmp23,"tmp23");
																HX_STACK_LINE(177)
																bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(177)
																if ((tmp24)){
																	HX_STACK_LINE(177)
																	break;
																}
																HX_STACK_LINE(177)
																::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																HX_STACK_LINE(177)
																{
																	HX_STACK_LINE(177)
																	Float tmp25 = v->x;		HX_STACK_VAR(tmp25,"tmp25");
																	HX_STACK_LINE(177)
																	Float tmp26 = (w->y - u->y);		HX_STACK_VAR(tmp26,"tmp26");
																	HX_STACK_LINE(177)
																	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
																	HX_STACK_LINE(177)
																	hx::AddEq(area,tmp27);
																	HX_STACK_LINE(177)
																	Float tmp28 = (w->y * v->x);		HX_STACK_VAR(tmp28,"tmp28");
																	HX_STACK_LINE(177)
																	Float tmp29 = (w->x * v->y);		HX_STACK_VAR(tmp29,"tmp29");
																	HX_STACK_LINE(177)
																	Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
																	HX_STACK_LINE(177)
																	Float cf = tmp30;		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(177)
																	Float tmp31 = (v->x + w->x);		HX_STACK_VAR(tmp31,"tmp31");
																	HX_STACK_LINE(177)
																	Float tmp32 = cf;		HX_STACK_VAR(tmp32,"tmp32");
																	HX_STACK_LINE(177)
																	Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
																	HX_STACK_LINE(177)
																	hx::AddEq(_this1->localCOMx,tmp33);
																	HX_STACK_LINE(177)
																	Float tmp34 = (v->y + w->y);		HX_STACK_VAR(tmp34,"tmp34");
																	HX_STACK_LINE(177)
																	Float tmp35 = cf;		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(177)
																	Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(177)
																	hx::AddEq(_this1->localCOMy,tmp36);
																}
																HX_STACK_LINE(177)
																u = v;
																HX_STACK_LINE(177)
																v = w;
																HX_STACK_LINE(177)
																cx_ite = cx_ite->next;
															}
															HX_STACK_LINE(177)
															::zpp_nape::geom::ZPP_Vec2 tmp23 = _this1->lverts->next;		HX_STACK_VAR(tmp23,"tmp23");
															HX_STACK_LINE(177)
															cx_ite = tmp23;
															HX_STACK_LINE(177)
															::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
															HX_STACK_LINE(177)
															{
																HX_STACK_LINE(177)
																Float tmp24 = v->x;		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(177)
																Float tmp25 = (w->y - u->y);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(177)
																Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(177)
																hx::AddEq(area,tmp26);
																HX_STACK_LINE(177)
																Float tmp27 = (w->y * v->x);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(177)
																Float tmp28 = (w->x * v->y);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(177)
																Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(177)
																Float cf = tmp29;		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(177)
																Float tmp30 = (v->x + w->x);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(177)
																Float tmp31 = cf;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(177)
																Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(177)
																hx::AddEq(_this1->localCOMx,tmp32);
																HX_STACK_LINE(177)
																Float tmp33 = (v->y + w->y);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(177)
																Float tmp34 = cf;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(177)
																Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(177)
																hx::AddEq(_this1->localCOMy,tmp35);
															}
															HX_STACK_LINE(177)
															u = v;
															HX_STACK_LINE(177)
															v = w;
															HX_STACK_LINE(177)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(177)
															::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
															HX_STACK_LINE(177)
															{
																HX_STACK_LINE(177)
																Float tmp24 = v->x;		HX_STACK_VAR(tmp24,"tmp24");
																HX_STACK_LINE(177)
																Float tmp25 = (w1->y - u->y);		HX_STACK_VAR(tmp25,"tmp25");
																HX_STACK_LINE(177)
																Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
																HX_STACK_LINE(177)
																hx::AddEq(area,tmp26);
																HX_STACK_LINE(177)
																Float tmp27 = (w1->y * v->x);		HX_STACK_VAR(tmp27,"tmp27");
																HX_STACK_LINE(177)
																Float tmp28 = (w1->x * v->y);		HX_STACK_VAR(tmp28,"tmp28");
																HX_STACK_LINE(177)
																Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
																HX_STACK_LINE(177)
																Float cf = tmp29;		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(177)
																Float tmp30 = (v->x + w1->x);		HX_STACK_VAR(tmp30,"tmp30");
																HX_STACK_LINE(177)
																Float tmp31 = cf;		HX_STACK_VAR(tmp31,"tmp31");
																HX_STACK_LINE(177)
																Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(177)
																hx::AddEq(_this1->localCOMx,tmp32);
																HX_STACK_LINE(177)
																Float tmp33 = (v->y + w1->y);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(177)
																Float tmp34 = cf;		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(177)
																Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(177)
																hx::AddEq(_this1->localCOMy,tmp35);
															}
														}
														HX_STACK_LINE(177)
														Float tmp22 = ((int)3 * area);		HX_STACK_VAR(tmp22,"tmp22");
														HX_STACK_LINE(177)
														Float tmp23 = (Float((int)1) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
														HX_STACK_LINE(177)
														area = tmp23;
														HX_STACK_LINE(177)
														{
															HX_STACK_LINE(177)
															Float t = area;		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(177)
															hx::MultEq(_this1->localCOMx,t);
															HX_STACK_LINE(177)
															hx::MultEq(_this1->localCOMy,t);
														}
													}
												}
											}
											HX_STACK_LINE(177)
											bool tmp14 = (_this->wrap_localCOM != null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(177)
											if ((tmp14)){
												HX_STACK_LINE(177)
												::zpp_nape::geom::ZPP_Vec2 tmp15 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(177)
												tmp15->x = _this->localCOMx;
												HX_STACK_LINE(177)
												::zpp_nape::geom::ZPP_Vec2 tmp16 = _this->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(177)
												tmp16->y = _this->localCOMy;
												HX_STACK_LINE(177)
												{
												}
											}
										}
									}
									HX_STACK_LINE(177)
									{
										HX_STACK_LINE(177)
										::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(177)
										bool tmp10 = _this1->zip_axis;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(177)
										if ((tmp10)){
											HX_STACK_LINE(177)
											_this1->zip_axis = false;
											HX_STACK_LINE(177)
											{
												HX_STACK_LINE(177)
												Float tmp11 = _this1->rot;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(177)
												Float tmp12 = ::Math_obj::sin(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(177)
												_this1->axisx = tmp12;
												HX_STACK_LINE(177)
												Float tmp13 = _this1->rot;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(177)
												Float tmp14 = ::Math_obj::cos(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(177)
												_this1->axisy = tmp14;
												HX_STACK_LINE(177)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(177)
									{
										HX_STACK_LINE(177)
										Float tmp10 = _this->body->posx;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(177)
										Float tmp11 = _this->body->axisy;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(177)
										Float tmp12 = _this->localCOMx;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(177)
										Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(177)
										Float tmp14 = _this->body->axisx;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(177)
										Float tmp15 = _this->localCOMy;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(177)
										Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(177)
										Float tmp17 = (tmp13 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(177)
										Float tmp18 = (tmp10 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(177)
										_this->worldCOMx = tmp18;
										HX_STACK_LINE(177)
										Float tmp19 = _this->body->posy;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(177)
										Float tmp20 = _this->localCOMx;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(177)
										Float tmp21 = _this->body->axisx;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(177)
										Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(177)
										Float tmp23 = _this->localCOMy;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(177)
										Float tmp24 = _this->body->axisy;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(177)
										Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(177)
										Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(177)
										Float tmp27 = (tmp19 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(177)
										_this->worldCOMy = tmp27;
									}
								}
							}
						}
						HX_STACK_LINE(177)
						Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
						HX_STACK_LINE(177)
						Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
						HX_STACK_LINE(177)
						{
							HX_STACK_LINE(177)
							Float tmp8 = (_this->worldCOMx - rx);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(177)
							_this->aabb->minx = tmp8;
							HX_STACK_LINE(177)
							Float tmp9 = (_this->worldCOMy - ry);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(177)
							_this->aabb->miny = tmp9;
						}
						HX_STACK_LINE(177)
						{
							HX_STACK_LINE(177)
							Float tmp8 = (_this->worldCOMx + rx);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(177)
							_this->aabb->maxx = tmp8;
							HX_STACK_LINE(177)
							Float tmp9 = (_this->worldCOMy + ry);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(177)
							_this->aabb->maxy = tmp9;
						}
					}
					else{
						HX_STACK_LINE(177)
						::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(177)
						{
							HX_STACK_LINE(177)
							bool tmp8 = _this->zip_gverts;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(177)
							if ((tmp8)){
								HX_STACK_LINE(177)
								bool tmp9 = (_this->body != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(177)
								if ((tmp9)){
									HX_STACK_LINE(177)
									_this->zip_gverts = false;
									HX_STACK_LINE(177)
									_this->validate_lverts();
									HX_STACK_LINE(177)
									{
										HX_STACK_LINE(177)
										::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(177)
										bool tmp10 = _this1->zip_axis;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(177)
										if ((tmp10)){
											HX_STACK_LINE(177)
											_this1->zip_axis = false;
											HX_STACK_LINE(177)
											{
												HX_STACK_LINE(177)
												Float tmp11 = _this1->rot;		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(177)
												Float tmp12 = ::Math_obj::sin(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
												HX_STACK_LINE(177)
												_this1->axisx = tmp12;
												HX_STACK_LINE(177)
												Float tmp13 = _this1->rot;		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(177)
												Float tmp14 = ::Math_obj::cos(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(177)
												_this1->axisy = tmp14;
												HX_STACK_LINE(177)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(177)
									::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(177)
									::zpp_nape::geom::ZPP_Vec2 li = tmp10;		HX_STACK_VAR(li,"li");
									HX_STACK_LINE(177)
									{
										HX_STACK_LINE(177)
										::zpp_nape::geom::ZPP_Vec2 tmp11 = _this->gverts->next;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(177)
										::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp11;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(177)
										while((true)){
											HX_STACK_LINE(177)
											bool tmp12 = (cx_ite != null());		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(177)
											bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(177)
											if ((tmp13)){
												HX_STACK_LINE(177)
												break;
											}
											HX_STACK_LINE(177)
											::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(177)
											{
												HX_STACK_LINE(177)
												::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
												HX_STACK_LINE(177)
												li = li->next;
												HX_STACK_LINE(177)
												{
													HX_STACK_LINE(177)
													Float tmp14 = _this->body->posx;		HX_STACK_VAR(tmp14,"tmp14");
													HX_STACK_LINE(177)
													Float tmp15 = _this->body->axisy;		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(177)
													Float tmp16 = l->x;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(177)
													Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(177)
													Float tmp18 = _this->body->axisx;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(177)
													Float tmp19 = l->y;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(177)
													Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(177)
													Float tmp21 = (tmp17 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(177)
													Float tmp22 = (tmp14 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(177)
													g->x = tmp22;
													HX_STACK_LINE(177)
													Float tmp23 = _this->body->posy;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(177)
													Float tmp24 = l->x;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(177)
													Float tmp25 = _this->body->axisx;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(177)
													Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(177)
													Float tmp27 = l->y;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(177)
													Float tmp28 = _this->body->axisy;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(177)
													Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(177)
													Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(177)
													Float tmp31 = (tmp23 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(177)
													g->y = tmp31;
												}
											}
											HX_STACK_LINE(177)
											cx_ite = cx_ite->next;
										}
									}
								}
							}
						}
						HX_STACK_LINE(177)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = _this->lverts->next;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(177)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(177)
						if ((tmp9)){
							HX_STACK_LINE(177)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful bounds","\xda","\x28","\x5b","\xf5"));
						}
						HX_STACK_LINE(177)
						::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->gverts->next;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(177)
						::zpp_nape::geom::ZPP_Vec2 p0 = tmp10;		HX_STACK_VAR(p0,"p0");
						HX_STACK_LINE(177)
						{
							HX_STACK_LINE(177)
							_this->aabb->minx = p0->x;
							HX_STACK_LINE(177)
							_this->aabb->miny = p0->y;
							HX_STACK_LINE(177)
							{
							}
						}
						HX_STACK_LINE(177)
						{
							HX_STACK_LINE(177)
							_this->aabb->maxx = p0->x;
							HX_STACK_LINE(177)
							_this->aabb->maxy = p0->y;
							HX_STACK_LINE(177)
							{
							}
						}
						HX_STACK_LINE(177)
						{
							HX_STACK_LINE(177)
							::zpp_nape::geom::ZPP_Vec2 tmp11 = _this->gverts->next;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(177)
							::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp11->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(177)
							while((true)){
								HX_STACK_LINE(177)
								bool tmp12 = (cx_ite != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(177)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(177)
								if ((tmp13)){
									HX_STACK_LINE(177)
									break;
								}
								HX_STACK_LINE(177)
								::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(177)
								{
									HX_STACK_LINE(177)
									Float tmp14 = p->x;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(177)
									Float tmp15 = _this->aabb->minx;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(177)
									bool tmp16 = (tmp14 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(177)
									if ((tmp16)){
										HX_STACK_LINE(177)
										_this->aabb->minx = p->x;
									}
									HX_STACK_LINE(177)
									Float tmp17 = p->x;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(177)
									Float tmp18 = _this->aabb->maxx;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(177)
									bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(177)
									if ((tmp19)){
										HX_STACK_LINE(177)
										_this->aabb->maxx = p->x;
									}
									HX_STACK_LINE(177)
									Float tmp20 = p->y;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(177)
									Float tmp21 = _this->aabb->miny;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(177)
									bool tmp22 = (tmp20 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(177)
									if ((tmp22)){
										HX_STACK_LINE(177)
										_this->aabb->miny = p->y;
									}
									HX_STACK_LINE(177)
									Float tmp23 = p->y;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(177)
									Float tmp24 = _this->aabb->maxy;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(177)
									bool tmp25 = (tmp23 > tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(177)
									if ((tmp25)){
										HX_STACK_LINE(177)
										_this->aabb->maxy = p->y;
									}
								}
								HX_STACK_LINE(177)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(178)
		{
			HX_STACK_LINE(178)
			bool tmp3 = s->zip_worldCOM;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(178)
			if ((tmp3)){
				HX_STACK_LINE(178)
				bool tmp4 = (s->body != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(178)
				if ((tmp4)){
					HX_STACK_LINE(178)
					s->zip_worldCOM = false;
					HX_STACK_LINE(178)
					{
						HX_STACK_LINE(178)
						bool tmp5 = s->zip_localCOM;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(178)
						if ((tmp5)){
							HX_STACK_LINE(178)
							s->zip_localCOM = false;
							HX_STACK_LINE(178)
							int tmp6 = s->type;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(178)
							int tmp7 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(178)
							bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(178)
							if ((tmp8)){
								HX_STACK_LINE(178)
								::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(178)
								::zpp_nape::geom::ZPP_Vec2 tmp9 = _this->lverts->next;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(178)
								bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(178)
								if ((tmp10)){
									HX_STACK_LINE(178)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
								}
								HX_STACK_LINE(178)
								::zpp_nape::geom::ZPP_Vec2 tmp11 = _this->lverts->next;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(178)
								::zpp_nape::geom::ZPP_Vec2 tmp12 = tmp11->next;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(178)
								bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(178)
								if ((tmp13)){
									HX_STACK_LINE(178)
									::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(178)
									_this->localCOMx = tmp14->x;
									HX_STACK_LINE(178)
									::zpp_nape::geom::ZPP_Vec2 tmp15 = _this->lverts->next;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(178)
									_this->localCOMy = tmp15->y;
									HX_STACK_LINE(178)
									Dynamic();
								}
								else{
									HX_STACK_LINE(178)
									::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(178)
									::zpp_nape::geom::ZPP_Vec2 tmp15 = tmp14->next->next;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(178)
									bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(178)
									if ((tmp16)){
										HX_STACK_LINE(178)
										{
											HX_STACK_LINE(178)
											::zpp_nape::geom::ZPP_Vec2 tmp17 = _this->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(178)
											_this->localCOMx = tmp17->x;
											HX_STACK_LINE(178)
											::zpp_nape::geom::ZPP_Vec2 tmp18 = _this->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(178)
											_this->localCOMy = tmp18->y;
											HX_STACK_LINE(178)
											{
											}
										}
										HX_STACK_LINE(178)
										{
											HX_STACK_LINE(178)
											Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(178)
											::zpp_nape::geom::ZPP_Vec2 tmp17 = _this->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(178)
											Float tmp18 = tmp17->next->x;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(178)
											Float tmp19 = t;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(178)
											Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(178)
											hx::AddEq(_this->localCOMx,tmp20);
											HX_STACK_LINE(178)
											::zpp_nape::geom::ZPP_Vec2 tmp21 = _this->lverts->next;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(178)
											Float tmp22 = tmp21->next->y;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(178)
											Float tmp23 = t;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(178)
											Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(178)
											hx::AddEq(_this->localCOMy,tmp24);
										}
										HX_STACK_LINE(178)
										{
											HX_STACK_LINE(178)
											Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(178)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(178)
											hx::MultEq(_this->localCOMy,t);
										}
									}
									else{
										HX_STACK_LINE(178)
										{
											HX_STACK_LINE(178)
											_this->localCOMx = (int)0;
											HX_STACK_LINE(178)
											_this->localCOMy = (int)0;
											HX_STACK_LINE(178)
											{
											}
										}
										HX_STACK_LINE(178)
										Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
										HX_STACK_LINE(178)
										{
											HX_STACK_LINE(178)
											::zpp_nape::geom::ZPP_Vec2 tmp17 = _this->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(178)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp17;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(178)
											::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
											HX_STACK_LINE(178)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(178)
											::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(178)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(178)
											while((true)){
												HX_STACK_LINE(178)
												bool tmp18 = (cx_ite != null());		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(178)
												bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(178)
												if ((tmp19)){
													HX_STACK_LINE(178)
													break;
												}
												HX_STACK_LINE(178)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(178)
												{
													HX_STACK_LINE(178)
													Float tmp20 = v->x;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(178)
													Float tmp21 = (w->y - u->y);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(178)
													Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(178)
													hx::AddEq(area,tmp22);
													HX_STACK_LINE(178)
													Float tmp23 = (w->y * v->x);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(178)
													Float tmp24 = (w->x * v->y);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(178)
													Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(178)
													Float cf = tmp25;		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(178)
													Float tmp26 = (v->x + w->x);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(178)
													Float tmp27 = cf;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(178)
													Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(178)
													hx::AddEq(_this->localCOMx,tmp28);
													HX_STACK_LINE(178)
													Float tmp29 = (v->y + w->y);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(178)
													Float tmp30 = cf;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(178)
													Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(178)
													hx::AddEq(_this->localCOMy,tmp31);
												}
												HX_STACK_LINE(178)
												u = v;
												HX_STACK_LINE(178)
												v = w;
												HX_STACK_LINE(178)
												cx_ite = cx_ite->next;
											}
											HX_STACK_LINE(178)
											::zpp_nape::geom::ZPP_Vec2 tmp18 = _this->lverts->next;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(178)
											cx_ite = tmp18;
											HX_STACK_LINE(178)
											::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
											HX_STACK_LINE(178)
											{
												HX_STACK_LINE(178)
												Float tmp19 = v->x;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(178)
												Float tmp20 = (w->y - u->y);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(178)
												Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(178)
												hx::AddEq(area,tmp21);
												HX_STACK_LINE(178)
												Float tmp22 = (w->y * v->x);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(178)
												Float tmp23 = (w->x * v->y);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(178)
												Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(178)
												Float cf = tmp24;		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(178)
												Float tmp25 = (v->x + w->x);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(178)
												Float tmp26 = cf;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(178)
												Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(178)
												hx::AddEq(_this->localCOMx,tmp27);
												HX_STACK_LINE(178)
												Float tmp28 = (v->y + w->y);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(178)
												Float tmp29 = cf;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(178)
												Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(178)
												hx::AddEq(_this->localCOMy,tmp30);
											}
											HX_STACK_LINE(178)
											u = v;
											HX_STACK_LINE(178)
											v = w;
											HX_STACK_LINE(178)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(178)
											::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
											HX_STACK_LINE(178)
											{
												HX_STACK_LINE(178)
												Float tmp19 = v->x;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(178)
												Float tmp20 = (w1->y - u->y);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(178)
												Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(178)
												hx::AddEq(area,tmp21);
												HX_STACK_LINE(178)
												Float tmp22 = (w1->y * v->x);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(178)
												Float tmp23 = (w1->x * v->y);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(178)
												Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(178)
												Float cf = tmp24;		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(178)
												Float tmp25 = (v->x + w1->x);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(178)
												Float tmp26 = cf;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(178)
												Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(178)
												hx::AddEq(_this->localCOMx,tmp27);
												HX_STACK_LINE(178)
												Float tmp28 = (v->y + w1->y);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(178)
												Float tmp29 = cf;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(178)
												Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(178)
												hx::AddEq(_this->localCOMy,tmp30);
											}
										}
										HX_STACK_LINE(178)
										Float tmp17 = ((int)3 * area);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(178)
										Float tmp18 = (Float((int)1) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(178)
										area = tmp18;
										HX_STACK_LINE(178)
										{
											HX_STACK_LINE(178)
											Float t = area;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(178)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(178)
											hx::MultEq(_this->localCOMy,t);
										}
									}
								}
							}
							HX_STACK_LINE(178)
							bool tmp9 = (s->wrap_localCOM != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(178)
							if ((tmp9)){
								HX_STACK_LINE(178)
								::zpp_nape::geom::ZPP_Vec2 tmp10 = s->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(178)
								tmp10->x = s->localCOMx;
								HX_STACK_LINE(178)
								::zpp_nape::geom::ZPP_Vec2 tmp11 = s->wrap_localCOM->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(178)
								tmp11->y = s->localCOMy;
								HX_STACK_LINE(178)
								{
								}
							}
						}
					}
					HX_STACK_LINE(178)
					{
						HX_STACK_LINE(178)
						::zpp_nape::phys::ZPP_Body _this = s->body;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(178)
						bool tmp5 = _this->zip_axis;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(178)
						if ((tmp5)){
							HX_STACK_LINE(178)
							_this->zip_axis = false;
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								Float tmp6 = _this->rot;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(178)
								Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(178)
								_this->axisx = tmp7;
								HX_STACK_LINE(178)
								Float tmp8 = _this->rot;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(178)
								Float tmp9 = ::Math_obj::cos(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(178)
								_this->axisy = tmp9;
								HX_STACK_LINE(178)
								Dynamic();
							}
						}
					}
					HX_STACK_LINE(178)
					{
						HX_STACK_LINE(178)
						Float tmp5 = s->body->posx;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(178)
						Float tmp6 = s->body->axisy;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(178)
						Float tmp7 = s->localCOMx;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(178)
						Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(178)
						Float tmp9 = s->body->axisx;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(178)
						Float tmp10 = s->localCOMy;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(178)
						Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(178)
						Float tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(178)
						Float tmp13 = (tmp5 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(178)
						s->worldCOMx = tmp13;
						HX_STACK_LINE(178)
						Float tmp14 = s->body->posy;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(178)
						Float tmp15 = s->localCOMx;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(178)
						Float tmp16 = s->body->axisx;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(178)
						Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(178)
						Float tmp18 = s->localCOMy;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(178)
						Float tmp19 = s->body->axisy;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(178)
						Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(178)
						Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(178)
						Float tmp22 = (tmp14 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(178)
						s->worldCOMy = tmp22;
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Geom_obj,validateShape,(void))


ZPP_Geom_obj::ZPP_Geom_obj()
{
}

bool ZPP_Geom_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"validateShape") ) { outValue = validateShape_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Geom_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Geom_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_Geom_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("validateShape","\xab","\xa2","\x1c","\xa8"),
	::String(null()) };

void ZPP_Geom_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_Geom","\xf2","\x90","\xc8","\x02");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Geom_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ZPP_Geom_obj >;
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
