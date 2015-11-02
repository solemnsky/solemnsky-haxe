#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_shape_Edge
#include <nape/shape/Edge.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace shape{

Void ZPP_Edge_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.shape.ZPP_Edge","new",0x28a22ac2,"zpp_nape.shape.ZPP_Edge.new","zpp_nape/shape/Edge.hx",174,0x9f6a6311)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(234)
	this->tp1 = ((Float)0.0);
	HX_STACK_LINE(233)
	this->tp0 = ((Float)0.0);
	HX_STACK_LINE(232)
	this->gp1 = null();
	HX_STACK_LINE(231)
	this->lp1 = null();
	HX_STACK_LINE(230)
	this->gp0 = null();
	HX_STACK_LINE(229)
	this->lp0 = null();
	HX_STACK_LINE(228)
	this->gprojection = ((Float)0.0);
	HX_STACK_LINE(227)
	this->lprojection = ((Float)0.0);
	HX_STACK_LINE(226)
	this->length = ((Float)0.0);
	HX_STACK_LINE(225)
	this->wrap_gnorm = null();
	HX_STACK_LINE(224)
	this->gnormy = ((Float)0.0);
	HX_STACK_LINE(223)
	this->gnormx = ((Float)0.0);
	HX_STACK_LINE(222)
	this->wrap_lnorm = null();
	HX_STACK_LINE(221)
	this->lnormy = ((Float)0.0);
	HX_STACK_LINE(220)
	this->lnormx = ((Float)0.0);
	HX_STACK_LINE(210)
	this->outer = null();
	HX_STACK_LINE(208)
	this->polygon = null();
	HX_STACK_LINE(175)
	this->next = null();
	HX_STACK_LINE(299)
	{
		HX_STACK_LINE(300)
		this->lnormx = (int)0;
		HX_STACK_LINE(301)
		this->lnormy = (int)0;
		HX_STACK_LINE(310)
		{
		}
	}
	HX_STACK_LINE(319)
	{
		HX_STACK_LINE(320)
		this->gnormx = (int)0;
		HX_STACK_LINE(321)
		this->gnormy = (int)0;
		HX_STACK_LINE(330)
		{
		}
	}
	HX_STACK_LINE(339)
	this->length = (int)0;
	HX_STACK_LINE(340)
	this->lprojection = (int)0;
	HX_STACK_LINE(341)
	this->gprojection = (int)0;
}
;
	return null();
}

//ZPP_Edge_obj::~ZPP_Edge_obj() { }

Dynamic ZPP_Edge_obj::__CreateEmpty() { return  new ZPP_Edge_obj; }
hx::ObjectPtr< ZPP_Edge_obj > ZPP_Edge_obj::__new()
{  hx::ObjectPtr< ZPP_Edge_obj > _result_ = new ZPP_Edge_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Edge_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Edge_obj > _result_ = new ZPP_Edge_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_Edge_obj::free( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Edge","free",0x6003580a,"zpp_nape.shape.ZPP_Edge.free","zpp_nape/shape/Edge.hx",203,0x9f6a6311)
		HX_STACK_THIS(this)
		HX_STACK_LINE(203)
		this->polygon = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Edge_obj,free,(void))

Void ZPP_Edge_obj::alloc( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Edge","alloc",0xbdf6db57,"zpp_nape.shape.ZPP_Edge.alloc","zpp_nape/shape/Edge.hx",207,0x9f6a6311)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Edge_obj,alloc,(void))

::nape::shape::Edge ZPP_Edge_obj::wrapper( ){
	HX_STACK_FRAME("zpp_nape.shape.ZPP_Edge","wrapper",0xf22d08b5,"zpp_nape.shape.ZPP_Edge.wrapper","zpp_nape/shape/Edge.hx",211,0x9f6a6311)
	HX_STACK_THIS(this)
	HX_STACK_LINE(212)
	::nape::shape::Edge tmp = this->outer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(212)
	if ((tmp1)){
		HX_STACK_LINE(213)
		::zpp_nape::shape::ZPP_Edge_obj::internal = true;
		HX_STACK_LINE(214)
		::nape::shape::Edge tmp2 = ::nape::shape::Edge_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(214)
		this->outer = tmp2;
		HX_STACK_LINE(215)
		::zpp_nape::shape::ZPP_Edge_obj::internal = false;
		HX_STACK_LINE(216)
		::nape::shape::Edge tmp3 = this->outer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(216)
		tmp3->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(218)
	::nape::shape::Edge tmp2 = this->outer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(218)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Edge_obj,wrapper,return )

Void ZPP_Edge_obj::lnorm_validate( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Edge","lnorm_validate",0xe154132b,"zpp_nape.shape.ZPP_Edge.lnorm_validate","zpp_nape/shape/Edge.hx",235,0x9f6a6311)
		HX_STACK_THIS(this)
		HX_STACK_LINE(237)
		::zpp_nape::shape::ZPP_Polygon tmp = this->polygon;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(237)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		if ((tmp1)){
			HX_STACK_LINE(237)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Edge not currently in use","\xa8","\x20","\x56","\x78"));
		}
		HX_STACK_LINE(239)
		::zpp_nape::shape::ZPP_Polygon tmp2 = this->polygon;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(239)
		tmp2->validate_laxi();
		HX_STACK_LINE(240)
		{
			HX_STACK_LINE(241)
			Float tmp3 = this->lnormx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(241)
			::nape::geom::Vec2 tmp4 = this->wrap_lnorm;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(241)
			tmp4->zpp_inner->x = tmp3;
			HX_STACK_LINE(242)
			Float tmp5 = this->lnormy;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(242)
			::nape::geom::Vec2 tmp6 = this->wrap_lnorm;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(242)
			tmp6->zpp_inner->y = tmp5;
			HX_STACK_LINE(251)
			{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Edge_obj,lnorm_validate,(void))

Void ZPP_Edge_obj::gnorm_validate( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Edge","gnorm_validate",0x13f17250,"zpp_nape.shape.ZPP_Edge.gnorm_validate","zpp_nape/shape/Edge.hx",261,0x9f6a6311)
		HX_STACK_THIS(this)
		HX_STACK_LINE(263)
		::zpp_nape::shape::ZPP_Polygon tmp = this->polygon;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(263)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(263)
		if ((tmp1)){
			HX_STACK_LINE(263)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Edge not currently in use","\xa8","\x20","\x56","\x78"));
		}
		HX_STACK_LINE(264)
		::zpp_nape::shape::ZPP_Polygon tmp2 = this->polygon;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(264)
		::zpp_nape::phys::ZPP_Body tmp3 = tmp2->body;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(264)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(264)
		if ((tmp4)){
			HX_STACK_LINE(264)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Edge worldNormal only makes sense if the parent Polygon is contained within a rigid body","\x37","\x53","\xb2","\x4a"));
		}
		HX_STACK_LINE(266)
		{
			HX_STACK_LINE(266)
			::zpp_nape::shape::ZPP_Polygon tmp5 = this->polygon;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(266)
			::zpp_nape::shape::ZPP_Polygon _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(266)
			bool tmp6 = _this->zip_gaxi;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(266)
			if ((tmp6)){
				HX_STACK_LINE(266)
				bool tmp7 = (_this->body != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(266)
				if ((tmp7)){
					HX_STACK_LINE(266)
					_this->zip_gaxi = false;
					HX_STACK_LINE(266)
					_this->validate_laxi();
					HX_STACK_LINE(266)
					{
						HX_STACK_LINE(266)
						::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(266)
						bool tmp8 = _this1->zip_axis;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(266)
						if ((tmp8)){
							HX_STACK_LINE(266)
							_this1->zip_axis = false;
							HX_STACK_LINE(266)
							{
								HX_STACK_LINE(266)
								Float tmp9 = _this1->rot;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(266)
								Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(266)
								_this1->axisx = tmp10;
								HX_STACK_LINE(266)
								Float tmp11 = _this1->rot;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(266)
								Float tmp12 = ::Math_obj::cos(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(266)
								_this1->axisy = tmp12;
								HX_STACK_LINE(266)
								Dynamic();
							}
						}
					}
					HX_STACK_LINE(266)
					{
						HX_STACK_LINE(266)
						bool tmp8 = _this->zip_gverts;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(266)
						if ((tmp8)){
							HX_STACK_LINE(266)
							bool tmp9 = (_this->body != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(266)
							if ((tmp9)){
								HX_STACK_LINE(266)
								_this->zip_gverts = false;
								HX_STACK_LINE(266)
								_this->validate_lverts();
								HX_STACK_LINE(266)
								{
									HX_STACK_LINE(266)
									::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(266)
									bool tmp10 = _this1->zip_axis;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(266)
									if ((tmp10)){
										HX_STACK_LINE(266)
										_this1->zip_axis = false;
										HX_STACK_LINE(266)
										{
											HX_STACK_LINE(266)
											Float tmp11 = _this1->rot;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(266)
											Float tmp12 = ::Math_obj::sin(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(266)
											_this1->axisx = tmp12;
											HX_STACK_LINE(266)
											Float tmp13 = _this1->rot;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(266)
											Float tmp14 = ::Math_obj::cos(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(266)
											_this1->axisy = tmp14;
											HX_STACK_LINE(266)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(266)
								::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(266)
								::zpp_nape::geom::ZPP_Vec2 li = tmp10;		HX_STACK_VAR(li,"li");
								HX_STACK_LINE(266)
								{
									HX_STACK_LINE(266)
									::zpp_nape::geom::ZPP_Vec2 tmp11 = _this->gverts->next;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(266)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp11;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(266)
									while((true)){
										HX_STACK_LINE(266)
										bool tmp12 = (cx_ite != null());		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(266)
										bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(266)
										if ((tmp13)){
											HX_STACK_LINE(266)
											break;
										}
										HX_STACK_LINE(266)
										::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(266)
										{
											HX_STACK_LINE(266)
											::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
											HX_STACK_LINE(266)
											li = li->next;
											HX_STACK_LINE(266)
											{
												HX_STACK_LINE(266)
												Float tmp14 = _this->body->posx;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(266)
												Float tmp15 = _this->body->axisy;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(266)
												Float tmp16 = l->x;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(266)
												Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(266)
												Float tmp18 = _this->body->axisx;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(266)
												Float tmp19 = l->y;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(266)
												Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(266)
												Float tmp21 = (tmp17 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(266)
												Float tmp22 = (tmp14 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(266)
												g->x = tmp22;
												HX_STACK_LINE(266)
												Float tmp23 = _this->body->posy;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(266)
												Float tmp24 = l->x;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(266)
												Float tmp25 = _this->body->axisx;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(266)
												Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(266)
												Float tmp27 = l->y;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(266)
												Float tmp28 = _this->body->axisy;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(266)
												Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(266)
												Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(266)
												Float tmp31 = (tmp23 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(266)
												g->y = tmp31;
											}
										}
										HX_STACK_LINE(266)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
					}
					HX_STACK_LINE(266)
					::zpp_nape::util::ZNPNode_ZPP_Edge tmp8 = _this->edges->head;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(266)
					::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp8;		HX_STACK_VAR(ite,"ite");
					HX_STACK_LINE(266)
					{
						HX_STACK_LINE(266)
						::zpp_nape::geom::ZPP_Vec2 tmp9 = _this->gverts->next;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(266)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp9;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(266)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(266)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(266)
						while((true)){
							HX_STACK_LINE(266)
							bool tmp10 = (cx_ite != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(266)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(266)
							if ((tmp11)){
								HX_STACK_LINE(266)
								break;
							}
							HX_STACK_LINE(266)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(266)
							{
								HX_STACK_LINE(266)
								::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(266)
								ite = ite->next;
								HX_STACK_LINE(266)
								e->gp0 = u;
								HX_STACK_LINE(266)
								e->gp1 = v;
								HX_STACK_LINE(266)
								{
									HX_STACK_LINE(266)
									Float tmp12 = _this->body->axisy;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(266)
									Float tmp13 = e->lnormx;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(266)
									Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(266)
									Float tmp15 = _this->body->axisx;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(266)
									Float tmp16 = e->lnormy;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(266)
									Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(266)
									Float tmp18 = (tmp14 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(266)
									e->gnormx = tmp18;
									HX_STACK_LINE(266)
									Float tmp19 = e->lnormx;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(266)
									Float tmp20 = _this->body->axisx;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(266)
									Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(266)
									Float tmp22 = e->lnormy;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(266)
									Float tmp23 = _this->body->axisy;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(266)
									Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(266)
									Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(266)
									e->gnormy = tmp25;
								}
								HX_STACK_LINE(266)
								Float tmp12 = _this->body->posx;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(266)
								Float tmp13 = e->gnormx;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(266)
								Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(266)
								Float tmp15 = _this->body->posy;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(266)
								Float tmp16 = e->gnormy;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(266)
								Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(266)
								Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(266)
								Float tmp19 = e->lprojection;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(266)
								Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(266)
								e->gprojection = tmp20;
								HX_STACK_LINE(266)
								bool tmp21 = (e->wrap_gnorm != null());		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(266)
								if ((tmp21)){
									HX_STACK_LINE(266)
									::zpp_nape::geom::ZPP_Vec2 tmp22 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(266)
									tmp22->x = e->gnormx;
									HX_STACK_LINE(266)
									::zpp_nape::geom::ZPP_Vec2 tmp23 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(266)
									tmp23->y = e->gnormy;
									HX_STACK_LINE(266)
									{
									}
								}
								HX_STACK_LINE(266)
								Float tmp22 = e->gp0->y;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(266)
								Float tmp23 = e->gnormx;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(266)
								Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(266)
								Float tmp25 = e->gp0->x;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(266)
								Float tmp26 = e->gnormy;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(266)
								Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(266)
								Float tmp28 = (tmp24 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(266)
								e->tp0 = tmp28;
								HX_STACK_LINE(266)
								Float tmp29 = e->gp1->y;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(266)
								Float tmp30 = e->gnormx;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(266)
								Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(266)
								Float tmp32 = e->gp1->x;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(266)
								Float tmp33 = e->gnormy;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(266)
								Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(266)
								Float tmp35 = (tmp31 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(266)
								e->tp1 = tmp35;
							}
							HX_STACK_LINE(266)
							u = v;
							HX_STACK_LINE(266)
							cx_ite = cx_ite->next;
						}
						HX_STACK_LINE(266)
						::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->gverts->next;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(266)
						::zpp_nape::geom::ZPP_Vec2 v = tmp10;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(266)
						{
							HX_STACK_LINE(266)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(266)
							ite = ite->next;
							HX_STACK_LINE(266)
							e->gp0 = u;
							HX_STACK_LINE(266)
							e->gp1 = v;
							HX_STACK_LINE(266)
							{
								HX_STACK_LINE(266)
								Float tmp11 = _this->body->axisy;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(266)
								Float tmp12 = e->lnormx;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(266)
								Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(266)
								Float tmp14 = _this->body->axisx;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(266)
								Float tmp15 = e->lnormy;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(266)
								Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(266)
								Float tmp17 = (tmp13 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(266)
								e->gnormx = tmp17;
								HX_STACK_LINE(266)
								Float tmp18 = e->lnormx;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(266)
								Float tmp19 = _this->body->axisx;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(266)
								Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(266)
								Float tmp21 = e->lnormy;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(266)
								Float tmp22 = _this->body->axisy;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(266)
								Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(266)
								Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(266)
								e->gnormy = tmp24;
							}
							HX_STACK_LINE(266)
							Float tmp11 = _this->body->posx;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(266)
							Float tmp12 = e->gnormx;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(266)
							Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(266)
							Float tmp14 = _this->body->posy;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(266)
							Float tmp15 = e->gnormy;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(266)
							Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(266)
							Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(266)
							Float tmp18 = e->lprojection;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(266)
							Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(266)
							e->gprojection = tmp19;
							HX_STACK_LINE(266)
							bool tmp20 = (e->wrap_gnorm != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(266)
							if ((tmp20)){
								HX_STACK_LINE(266)
								::zpp_nape::geom::ZPP_Vec2 tmp21 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(266)
								tmp21->x = e->gnormx;
								HX_STACK_LINE(266)
								::zpp_nape::geom::ZPP_Vec2 tmp22 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(266)
								tmp22->y = e->gnormy;
								HX_STACK_LINE(266)
								{
								}
							}
							HX_STACK_LINE(266)
							Float tmp21 = e->gp0->y;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(266)
							Float tmp22 = e->gnormx;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(266)
							Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(266)
							Float tmp24 = e->gp0->x;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(266)
							Float tmp25 = e->gnormy;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(266)
							Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(266)
							Float tmp27 = (tmp23 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(266)
							e->tp0 = tmp27;
							HX_STACK_LINE(266)
							Float tmp28 = e->gp1->y;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(266)
							Float tmp29 = e->gnormx;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(266)
							Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(266)
							Float tmp31 = e->gp1->x;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(266)
							Float tmp32 = e->gnormy;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(266)
							Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(266)
							Float tmp34 = (tmp30 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(266)
							e->tp1 = tmp34;
						}
					}
				}
			}
		}
		HX_STACK_LINE(267)
		{
			HX_STACK_LINE(268)
			Float tmp5 = this->gnormx;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(268)
			::nape::geom::Vec2 tmp6 = this->wrap_gnorm;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(268)
			tmp6->zpp_inner->x = tmp5;
			HX_STACK_LINE(269)
			Float tmp7 = this->gnormy;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(269)
			::nape::geom::Vec2 tmp8 = this->wrap_gnorm;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(269)
			tmp8->zpp_inner->y = tmp7;
			HX_STACK_LINE(278)
			{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Edge_obj,gnorm_validate,(void))

Void ZPP_Edge_obj::getlnorm( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Edge","getlnorm",0x8f5f1eb0,"zpp_nape.shape.ZPP_Edge.getlnorm","zpp_nape/shape/Edge.hx",288,0x9f6a6311)
		HX_STACK_THIS(this)
		HX_STACK_LINE(289)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(289)
		{
			HX_STACK_LINE(289)
			Float tmp1 = this->lnormx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(289)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(289)
			Float tmp2 = this->lnormy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(289)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(289)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(289)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(289)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(289)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(289)
			if ((tmp4)){
				HX_STACK_LINE(289)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(289)
				tmp5 = true;
			}
			HX_STACK_LINE(289)
			if ((tmp5)){
				HX_STACK_LINE(289)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(289)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(289)
			{
				HX_STACK_LINE(289)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(289)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(289)
				if ((tmp7)){
					HX_STACK_LINE(289)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(289)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(289)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(289)
					ret = tmp8;
					HX_STACK_LINE(289)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(289)
					ret->zpp_pool = null();
					HX_STACK_LINE(289)
					ret->zpp_disp = false;
					HX_STACK_LINE(289)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(289)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(289)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(289)
					if ((tmp11)){
						HX_STACK_LINE(289)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(289)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(289)
			if ((tmp6)){
				HX_STACK_LINE(289)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(289)
				{
					HX_STACK_LINE(289)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(289)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(289)
					{
						HX_STACK_LINE(289)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(289)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(289)
						if ((tmp9)){
							HX_STACK_LINE(289)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(289)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(289)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(289)
							ret1 = tmp10;
							HX_STACK_LINE(289)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(289)
							ret1->next = null();
						}
						HX_STACK_LINE(289)
						ret1->weak = false;
					}
					HX_STACK_LINE(289)
					ret1->_immutable = immutable;
					HX_STACK_LINE(289)
					{
						HX_STACK_LINE(289)
						ret1->x = x;
						HX_STACK_LINE(289)
						ret1->y = y;
						HX_STACK_LINE(289)
						{
						}
					}
					HX_STACK_LINE(289)
					tmp7 = ret1;
				}
				HX_STACK_LINE(289)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(289)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(289)
				{
					HX_STACK_LINE(289)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(289)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(289)
					if ((tmp7)){
						HX_STACK_LINE(289)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(289)
						tmp8 = false;
					}
					HX_STACK_LINE(289)
					if ((tmp8)){
						HX_STACK_LINE(289)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(289)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(289)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(289)
				{
					HX_STACK_LINE(289)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(289)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(289)
					if ((tmp7)){
						HX_STACK_LINE(289)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(289)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(289)
					if ((tmp8)){
						HX_STACK_LINE(289)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(289)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(289)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(289)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(289)
				if ((tmp8)){
					HX_STACK_LINE(289)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(289)
					tmp9 = true;
				}
				HX_STACK_LINE(289)
				if ((tmp9)){
					HX_STACK_LINE(289)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(289)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(289)
				{
					HX_STACK_LINE(289)
					{
						HX_STACK_LINE(289)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(289)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(289)
						if ((tmp11)){
							HX_STACK_LINE(289)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(289)
							tmp12 = false;
						}
						HX_STACK_LINE(289)
						if ((tmp12)){
							HX_STACK_LINE(289)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(289)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(289)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(289)
					{
						HX_STACK_LINE(289)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(289)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(289)
						if ((tmp11)){
							HX_STACK_LINE(289)
							_this->_validate();
						}
					}
					HX_STACK_LINE(289)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(289)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(289)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(289)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(289)
				if ((tmp12)){
					HX_STACK_LINE(289)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(289)
					{
						HX_STACK_LINE(289)
						{
							HX_STACK_LINE(289)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(289)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(289)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(289)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(289)
							if ((tmp18)){
								HX_STACK_LINE(289)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(289)
								tmp17 = false;
							}
							HX_STACK_LINE(289)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(289)
							if ((tmp19)){
								HX_STACK_LINE(289)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(289)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(289)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(289)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(289)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(289)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(289)
						{
							HX_STACK_LINE(289)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(289)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(289)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(289)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(289)
							if ((tmp17)){
								HX_STACK_LINE(289)
								_this->_validate();
							}
						}
						HX_STACK_LINE(289)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(289)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(289)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(289)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(289)
					tmp13 = false;
				}
				HX_STACK_LINE(289)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(289)
				if ((tmp14)){
					HX_STACK_LINE(289)
					{
						HX_STACK_LINE(289)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(289)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(289)
						{
						}
					}
					HX_STACK_LINE(289)
					{
						HX_STACK_LINE(289)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(289)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(289)
						if ((tmp15)){
							HX_STACK_LINE(289)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(289)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(289)
				ret;
			}
			HX_STACK_LINE(289)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(289)
			tmp = ret;
		}
		HX_STACK_LINE(289)
		this->wrap_lnorm = tmp;
		HX_STACK_LINE(290)
		::nape::geom::Vec2 tmp1 = this->wrap_lnorm;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(290)
		tmp1->zpp_inner->_immutable = true;
		HX_STACK_LINE(291)
		Dynamic tmp2 = this->lnorm_validate_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(291)
		::nape::geom::Vec2 tmp3 = this->wrap_lnorm;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(291)
		tmp3->zpp_inner->_validate = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Edge_obj,getlnorm,(void))

Void ZPP_Edge_obj::getgnorm( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Edge","getgnorm",0xae5e382b,"zpp_nape.shape.ZPP_Edge.getgnorm","zpp_nape/shape/Edge.hx",293,0x9f6a6311)
		HX_STACK_THIS(this)
		HX_STACK_LINE(294)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		{
			HX_STACK_LINE(294)
			Float tmp1 = this->gnormx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(294)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(294)
			Float tmp2 = this->gnormy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(294)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(294)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(294)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(294)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(294)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(294)
			if ((tmp4)){
				HX_STACK_LINE(294)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(294)
				tmp5 = true;
			}
			HX_STACK_LINE(294)
			if ((tmp5)){
				HX_STACK_LINE(294)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(294)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(294)
			{
				HX_STACK_LINE(294)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(294)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(294)
				if ((tmp7)){
					HX_STACK_LINE(294)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(294)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(294)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(294)
					ret = tmp8;
					HX_STACK_LINE(294)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(294)
					ret->zpp_pool = null();
					HX_STACK_LINE(294)
					ret->zpp_disp = false;
					HX_STACK_LINE(294)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(294)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(294)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(294)
					if ((tmp11)){
						HX_STACK_LINE(294)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(294)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(294)
			if ((tmp6)){
				HX_STACK_LINE(294)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(294)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(294)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(294)
						if ((tmp9)){
							HX_STACK_LINE(294)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(294)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(294)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(294)
							ret1 = tmp10;
							HX_STACK_LINE(294)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(294)
							ret1->next = null();
						}
						HX_STACK_LINE(294)
						ret1->weak = false;
					}
					HX_STACK_LINE(294)
					ret1->_immutable = immutable;
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						ret1->x = x;
						HX_STACK_LINE(294)
						ret1->y = y;
						HX_STACK_LINE(294)
						{
						}
					}
					HX_STACK_LINE(294)
					tmp7 = ret1;
				}
				HX_STACK_LINE(294)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(294)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(294)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(294)
					if ((tmp7)){
						HX_STACK_LINE(294)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(294)
						tmp8 = false;
					}
					HX_STACK_LINE(294)
					if ((tmp8)){
						HX_STACK_LINE(294)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(294)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(294)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(294)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(294)
					if ((tmp7)){
						HX_STACK_LINE(294)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(294)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(294)
					if ((tmp8)){
						HX_STACK_LINE(294)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(294)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(294)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(294)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(294)
				if ((tmp8)){
					HX_STACK_LINE(294)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(294)
					tmp9 = true;
				}
				HX_STACK_LINE(294)
				if ((tmp9)){
					HX_STACK_LINE(294)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(294)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(294)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(294)
						if ((tmp11)){
							HX_STACK_LINE(294)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(294)
							tmp12 = false;
						}
						HX_STACK_LINE(294)
						if ((tmp12)){
							HX_STACK_LINE(294)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(294)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(294)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(294)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(294)
						if ((tmp11)){
							HX_STACK_LINE(294)
							_this->_validate();
						}
					}
					HX_STACK_LINE(294)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(294)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(294)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(294)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(294)
				if ((tmp12)){
					HX_STACK_LINE(294)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						{
							HX_STACK_LINE(294)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(294)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(294)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(294)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(294)
							if ((tmp18)){
								HX_STACK_LINE(294)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(294)
								tmp17 = false;
							}
							HX_STACK_LINE(294)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(294)
							if ((tmp19)){
								HX_STACK_LINE(294)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(294)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(294)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(294)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(294)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(294)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(294)
						{
							HX_STACK_LINE(294)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(294)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(294)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(294)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(294)
							if ((tmp17)){
								HX_STACK_LINE(294)
								_this->_validate();
							}
						}
						HX_STACK_LINE(294)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(294)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(294)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(294)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(294)
					tmp13 = false;
				}
				HX_STACK_LINE(294)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(294)
				if ((tmp14)){
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(294)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(294)
						{
						}
					}
					HX_STACK_LINE(294)
					{
						HX_STACK_LINE(294)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(294)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(294)
						if ((tmp15)){
							HX_STACK_LINE(294)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(294)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(294)
				ret;
			}
			HX_STACK_LINE(294)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(294)
			tmp = ret;
		}
		HX_STACK_LINE(294)
		this->wrap_gnorm = tmp;
		HX_STACK_LINE(295)
		::nape::geom::Vec2 tmp1 = this->wrap_gnorm;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(295)
		tmp1->zpp_inner->_immutable = true;
		HX_STACK_LINE(296)
		Dynamic tmp2 = this->gnorm_validate_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(296)
		::nape::geom::Vec2 tmp3 = this->wrap_gnorm;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(296)
		tmp3->zpp_inner->_validate = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Edge_obj,getgnorm,(void))

::zpp_nape::shape::ZPP_Edge ZPP_Edge_obj::zpp_pool;

bool ZPP_Edge_obj::internal;


ZPP_Edge_obj::ZPP_Edge_obj()
{
}

void ZPP_Edge_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Edge);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(polygon,"polygon");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(lnormx,"lnormx");
	HX_MARK_MEMBER_NAME(lnormy,"lnormy");
	HX_MARK_MEMBER_NAME(wrap_lnorm,"wrap_lnorm");
	HX_MARK_MEMBER_NAME(gnormx,"gnormx");
	HX_MARK_MEMBER_NAME(gnormy,"gnormy");
	HX_MARK_MEMBER_NAME(wrap_gnorm,"wrap_gnorm");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(lprojection,"lprojection");
	HX_MARK_MEMBER_NAME(gprojection,"gprojection");
	HX_MARK_MEMBER_NAME(lp0,"lp0");
	HX_MARK_MEMBER_NAME(gp0,"gp0");
	HX_MARK_MEMBER_NAME(lp1,"lp1");
	HX_MARK_MEMBER_NAME(gp1,"gp1");
	HX_MARK_MEMBER_NAME(tp0,"tp0");
	HX_MARK_MEMBER_NAME(tp1,"tp1");
	HX_MARK_END_CLASS();
}

void ZPP_Edge_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(polygon,"polygon");
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(lnormx,"lnormx");
	HX_VISIT_MEMBER_NAME(lnormy,"lnormy");
	HX_VISIT_MEMBER_NAME(wrap_lnorm,"wrap_lnorm");
	HX_VISIT_MEMBER_NAME(gnormx,"gnormx");
	HX_VISIT_MEMBER_NAME(gnormy,"gnormy");
	HX_VISIT_MEMBER_NAME(wrap_gnorm,"wrap_gnorm");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(lprojection,"lprojection");
	HX_VISIT_MEMBER_NAME(gprojection,"gprojection");
	HX_VISIT_MEMBER_NAME(lp0,"lp0");
	HX_VISIT_MEMBER_NAME(gp0,"gp0");
	HX_VISIT_MEMBER_NAME(lp1,"lp1");
	HX_VISIT_MEMBER_NAME(gp1,"gp1");
	HX_VISIT_MEMBER_NAME(tp0,"tp0");
	HX_VISIT_MEMBER_NAME(tp1,"tp1");
}

Dynamic ZPP_Edge_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lp0") ) { return lp0; }
		if (HX_FIELD_EQ(inName,"gp0") ) { return gp0; }
		if (HX_FIELD_EQ(inName,"lp1") ) { return lp1; }
		if (HX_FIELD_EQ(inName,"gp1") ) { return gp1; }
		if (HX_FIELD_EQ(inName,"tp0") ) { return tp0; }
		if (HX_FIELD_EQ(inName,"tp1") ) { return tp1; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lnormx") ) { return lnormx; }
		if (HX_FIELD_EQ(inName,"lnormy") ) { return lnormy; }
		if (HX_FIELD_EQ(inName,"gnormx") ) { return gnormx; }
		if (HX_FIELD_EQ(inName,"gnormy") ) { return gnormy; }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"polygon") ) { return polygon; }
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getlnorm") ) { return getlnorm_dyn(); }
		if (HX_FIELD_EQ(inName,"getgnorm") ) { return getgnorm_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wrap_lnorm") ) { return wrap_lnorm; }
		if (HX_FIELD_EQ(inName,"wrap_gnorm") ) { return wrap_gnorm; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lprojection") ) { return lprojection; }
		if (HX_FIELD_EQ(inName,"gprojection") ) { return gprojection; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lnorm_validate") ) { return lnorm_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"gnorm_validate") ) { return gnorm_validate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ZPP_Edge_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { outValue = zpp_pool; return true;  }
		if (HX_FIELD_EQ(inName,"internal") ) { outValue = internal; return true;  }
	}
	return false;
}

Dynamic ZPP_Edge_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"lp0") ) { lp0=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gp0") ) { gp0=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lp1") ) { lp1=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gp1") ) { gp1=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tp0") ) { tp0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tp1") ) { tp1=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::shape::ZPP_Edge >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::shape::Edge >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lnormx") ) { lnormx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lnormy") ) { lnormy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gnormx") ) { gnormx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gnormy") ) { gnormy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"polygon") ) { polygon=inValue.Cast< ::zpp_nape::shape::ZPP_Polygon >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wrap_lnorm") ) { wrap_lnorm=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_gnorm") ) { wrap_gnorm=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lprojection") ) { lprojection=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gprojection") ) { gprojection=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Edge_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=ioValue.Cast< ::zpp_nape::shape::ZPP_Edge >(); return true; }
		if (HX_FIELD_EQ(inName,"internal") ) { internal=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void ZPP_Edge_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("polygon","\x7a","\x02","\x91","\x12"));
	outFields->push(HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"));
	outFields->push(HX_HCSTRING("lnormx","\xd0","\x56","\x54","\xce"));
	outFields->push(HX_HCSTRING("lnormy","\xd1","\x56","\x54","\xce"));
	outFields->push(HX_HCSTRING("wrap_lnorm","\x33","\xb1","\xd7","\xa3"));
	outFields->push(HX_HCSTRING("gnormx","\xf5","\x88","\x8b","\xce"));
	outFields->push(HX_HCSTRING("gnormy","\xf6","\x88","\x8b","\xce"));
	outFields->push(HX_HCSTRING("wrap_gnorm","\xae","\xca","\xd6","\xc2"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("lprojection","\xfb","\xc7","\x60","\x22"));
	outFields->push(HX_HCSTRING("gprojection","\xb6","\xaf","\x08","\x9e"));
	outFields->push(HX_HCSTRING("lp0","\x2c","\x55","\x52","\x00"));
	outFields->push(HX_HCSTRING("gp0","\xe7","\x89","\x4e","\x00"));
	outFields->push(HX_HCSTRING("lp1","\x2d","\x55","\x52","\x00"));
	outFields->push(HX_HCSTRING("gp1","\xe8","\x89","\x4e","\x00"));
	outFields->push(HX_HCSTRING("tp0","\x34","\x67","\x58","\x00"));
	outFields->push(HX_HCSTRING("tp1","\x35","\x67","\x58","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::shape::ZPP_Edge*/ ,(int)offsetof(ZPP_Edge_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsObject /*::zpp_nape::shape::ZPP_Polygon*/ ,(int)offsetof(ZPP_Edge_obj,polygon),HX_HCSTRING("polygon","\x7a","\x02","\x91","\x12")},
	{hx::fsObject /*::nape::shape::Edge*/ ,(int)offsetof(ZPP_Edge_obj,outer),HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37")},
	{hx::fsFloat,(int)offsetof(ZPP_Edge_obj,lnormx),HX_HCSTRING("lnormx","\xd0","\x56","\x54","\xce")},
	{hx::fsFloat,(int)offsetof(ZPP_Edge_obj,lnormy),HX_HCSTRING("lnormy","\xd1","\x56","\x54","\xce")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Edge_obj,wrap_lnorm),HX_HCSTRING("wrap_lnorm","\x33","\xb1","\xd7","\xa3")},
	{hx::fsFloat,(int)offsetof(ZPP_Edge_obj,gnormx),HX_HCSTRING("gnormx","\xf5","\x88","\x8b","\xce")},
	{hx::fsFloat,(int)offsetof(ZPP_Edge_obj,gnormy),HX_HCSTRING("gnormy","\xf6","\x88","\x8b","\xce")},
	{hx::fsObject /*::nape::geom::Vec2*/ ,(int)offsetof(ZPP_Edge_obj,wrap_gnorm),HX_HCSTRING("wrap_gnorm","\xae","\xca","\xd6","\xc2")},
	{hx::fsFloat,(int)offsetof(ZPP_Edge_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsFloat,(int)offsetof(ZPP_Edge_obj,lprojection),HX_HCSTRING("lprojection","\xfb","\xc7","\x60","\x22")},
	{hx::fsFloat,(int)offsetof(ZPP_Edge_obj,gprojection),HX_HCSTRING("gprojection","\xb6","\xaf","\x08","\x9e")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec2*/ ,(int)offsetof(ZPP_Edge_obj,lp0),HX_HCSTRING("lp0","\x2c","\x55","\x52","\x00")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec2*/ ,(int)offsetof(ZPP_Edge_obj,gp0),HX_HCSTRING("gp0","\xe7","\x89","\x4e","\x00")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec2*/ ,(int)offsetof(ZPP_Edge_obj,lp1),HX_HCSTRING("lp1","\x2d","\x55","\x52","\x00")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec2*/ ,(int)offsetof(ZPP_Edge_obj,gp1),HX_HCSTRING("gp1","\xe8","\x89","\x4e","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_Edge_obj,tp0),HX_HCSTRING("tp0","\x34","\x67","\x58","\x00")},
	{hx::fsFloat,(int)offsetof(ZPP_Edge_obj,tp1),HX_HCSTRING("tp1","\x35","\x67","\x58","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::shape::ZPP_Edge*/ ,(void *) &ZPP_Edge_obj::zpp_pool,HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{hx::fsBool,(void *) &ZPP_Edge_obj::internal,HX_HCSTRING("internal","\x3d","\x67","\x76","\x28")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("polygon","\x7a","\x02","\x91","\x12"),
	HX_HCSTRING("outer","\x7b","\xb8","\x28","\x37"),
	HX_HCSTRING("wrapper","\x53","\xd5","\x64","\x0d"),
	HX_HCSTRING("lnormx","\xd0","\x56","\x54","\xce"),
	HX_HCSTRING("lnormy","\xd1","\x56","\x54","\xce"),
	HX_HCSTRING("wrap_lnorm","\x33","\xb1","\xd7","\xa3"),
	HX_HCSTRING("gnormx","\xf5","\x88","\x8b","\xce"),
	HX_HCSTRING("gnormy","\xf6","\x88","\x8b","\xce"),
	HX_HCSTRING("wrap_gnorm","\xae","\xca","\xd6","\xc2"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("lprojection","\xfb","\xc7","\x60","\x22"),
	HX_HCSTRING("gprojection","\xb6","\xaf","\x08","\x9e"),
	HX_HCSTRING("lp0","\x2c","\x55","\x52","\x00"),
	HX_HCSTRING("gp0","\xe7","\x89","\x4e","\x00"),
	HX_HCSTRING("lp1","\x2d","\x55","\x52","\x00"),
	HX_HCSTRING("gp1","\xe8","\x89","\x4e","\x00"),
	HX_HCSTRING("tp0","\x34","\x67","\x58","\x00"),
	HX_HCSTRING("tp1","\x35","\x67","\x58","\x00"),
	HX_HCSTRING("lnorm_validate","\x4d","\x36","\x10","\x2b"),
	HX_HCSTRING("gnorm_validate","\x72","\x95","\xad","\x5d"),
	HX_HCSTRING("getlnorm","\x52","\x5c","\xfa","\x44"),
	HX_HCSTRING("getgnorm","\xcd","\x75","\xf9","\x63"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Edge_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Edge_obj::zpp_pool,"zpp_pool");
	HX_MARK_MEMBER_NAME(ZPP_Edge_obj::internal,"internal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Edge_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Edge_obj::zpp_pool,"zpp_pool");
	HX_VISIT_MEMBER_NAME(ZPP_Edge_obj::internal,"internal");
};

#endif

hx::Class ZPP_Edge_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("internal","\x3d","\x67","\x76","\x28"),
	::String(null()) };

void ZPP_Edge_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.shape.ZPP_Edge","\xd0","\x61","\xc9","\x4f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Edge_obj::__GetStatic;
	__mClass->mSetStaticField = &ZPP_Edge_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Edge_obj >;
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

void ZPP_Edge_obj::__boot()
{
	zpp_pool= null();
	internal= false;
}

} // end namespace zpp_nape
} // end namespace shape
