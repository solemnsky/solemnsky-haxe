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
#ifndef INCLUDED_nape_geom_Vec2List
#include <nape/geom/Vec2List.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_EdgeList
#include <nape/shape/EdgeList.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ValidationResult
#include <nape/shape/ValidationResult.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_EdgeList
#include <zpp_nape/util/ZPP_EdgeList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_MixVec2List
#include <zpp_nape/util/ZPP_MixVec2List.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Vec2List
#include <zpp_nape/util/ZPP_Vec2List.h>
#endif
namespace zpp_nape{
namespace shape{

Void ZPP_Polygon_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","new",0xb68a7739,"zpp_nape.shape.ZPP_Polygon.new","zpp_nape/shape/Polygon.hx",174,0x571b0a14)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(812)
	this->zip_sanitation = false;
	HX_STACK_LINE(367)
	this->zip_valid = false;
	HX_STACK_LINE(363)
	this->zip_gaxi = false;
	HX_STACK_LINE(358)
	this->zip_gverts = false;
	HX_STACK_LINE(352)
	this->zip_laxi = false;
	HX_STACK_LINE(340)
	this->zip_lverts = false;
	HX_STACK_LINE(183)
	this->reverse_flag = false;
	HX_STACK_LINE(182)
	this->edgeCnt = (int)0;
	HX_STACK_LINE(181)
	this->wrap_edges = null();
	HX_STACK_LINE(180)
	this->edges = null();
	HX_STACK_LINE(179)
	this->wrap_gverts = null();
	HX_STACK_LINE(178)
	this->gverts = null();
	HX_STACK_LINE(177)
	this->wrap_lverts = null();
	HX_STACK_LINE(176)
	this->lverts = null();
	HX_STACK_LINE(175)
	this->outer_zn = null();
	HX_STACK_LINE(1827)
	int tmp = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1827)
	super::__construct(tmp);
	HX_STACK_LINE(1828)
	this->polygon = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(1829)
	::zpp_nape::geom::ZPP_Vec2 tmp1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1829)
	this->lverts = tmp1;
	HX_STACK_LINE(1830)
	::zpp_nape::geom::ZPP_Vec2 tmp2 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1830)
	this->gverts = tmp2;
	HX_STACK_LINE(1831)
	::zpp_nape::util::ZNPList_ZPP_Edge tmp3 = ::zpp_nape::util::ZNPList_ZPP_Edge_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1831)
	this->edges = tmp3;
	HX_STACK_LINE(1832)
	this->edgeCnt = (int)0;
}
;
	return null();
}

//ZPP_Polygon_obj::~ZPP_Polygon_obj() { }

Dynamic ZPP_Polygon_obj::__CreateEmpty() { return  new ZPP_Polygon_obj; }
hx::ObjectPtr< ZPP_Polygon_obj > ZPP_Polygon_obj::__new()
{  hx::ObjectPtr< ZPP_Polygon_obj > _result_ = new ZPP_Polygon_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Polygon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Polygon_obj > _result_ = new ZPP_Polygon_obj();
	_result_->__construct();
	return _result_;}

Void ZPP_Polygon_obj::__clear( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","__clear",0x322f51c6,"zpp_nape.shape.ZPP_Polygon.__clear","zpp_nape/shape/Polygon.hx",184,0x571b0a14)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,__clear,(void))

Void ZPP_Polygon_obj::lverts_pa_invalidate( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","lverts_pa_invalidate",0x9dc24ec7,"zpp_nape.shape.ZPP_Polygon.lverts_pa_invalidate","zpp_nape/shape/Polygon.hx",186,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(186)
		this->invalidate_lverts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Polygon_obj,lverts_pa_invalidate,(void))

Void ZPP_Polygon_obj::lverts_pa_immutable( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","lverts_pa_immutable",0x49082076,"zpp_nape.shape.ZPP_Polygon.lverts_pa_immutable","zpp_nape/shape/Polygon.hx",189,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(190)
		::zpp_nape::phys::ZPP_Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(190)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(190)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(190)
		if ((tmp2)){
			HX_STACK_LINE(190)
			::zpp_nape::phys::ZPP_Body tmp4 = this->body;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(190)
			::zpp_nape::phys::ZPP_Body tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(190)
			::zpp_nape::phys::ZPP_Body tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(190)
			int tmp7 = tmp6->type;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(190)
			int tmp8 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(190)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(190)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(190)
			tmp3 = (tmp7 == tmp10);
		}
		else{
			HX_STACK_LINE(190)
			tmp3 = false;
		}
		HX_STACK_LINE(190)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(190)
		if ((tmp3)){
			HX_STACK_LINE(190)
			::zpp_nape::phys::ZPP_Body tmp5 = this->body;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(190)
			::zpp_nape::phys::ZPP_Body tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(190)
			::zpp_nape::space::ZPP_Space tmp7 = tmp6->space;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(190)
			tmp4 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(190)
			tmp4 = false;
		}
		HX_STACK_LINE(190)
		if ((tmp4)){
			HX_STACK_LINE(190)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot modify local vertex of Polygon added to a static body whilst within a Space","\x0c","\x95","\x48","\xad"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,lverts_pa_immutable,(void))

Void ZPP_Polygon_obj::gverts_pa_validate( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","gverts_pa_validate",0xf5b83087,"zpp_nape.shape.ZPP_Polygon.gverts_pa_validate","zpp_nape/shape/Polygon.hx",193,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(195)
		::zpp_nape::phys::ZPP_Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(195)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(195)
		if ((tmp1)){
			HX_STACK_LINE(195)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: World vertex only makes sense when Polygon is contained in a rigid body","\x79","\x3b","\xcf","\x2b"));
		}
		HX_STACK_LINE(197)
		{
			HX_STACK_LINE(197)
			bool tmp2 = this->zip_gverts;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(197)
			if ((tmp2)){
				HX_STACK_LINE(197)
				::zpp_nape::phys::ZPP_Body tmp3 = this->body;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(197)
				bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(197)
				if ((tmp4)){
					HX_STACK_LINE(197)
					this->zip_gverts = false;
					HX_STACK_LINE(197)
					this->validate_lverts();
					HX_STACK_LINE(197)
					{
						HX_STACK_LINE(197)
						::zpp_nape::phys::ZPP_Body tmp5 = this->body;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(197)
						::zpp_nape::phys::ZPP_Body _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(197)
						bool tmp6 = _this->zip_axis;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(197)
						if ((tmp6)){
							HX_STACK_LINE(197)
							_this->zip_axis = false;
							HX_STACK_LINE(197)
							{
								HX_STACK_LINE(197)
								Float tmp7 = _this->rot;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(197)
								Float tmp8 = ::Math_obj::sin(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(197)
								_this->axisx = tmp8;
								HX_STACK_LINE(197)
								Float tmp9 = _this->rot;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(197)
								Float tmp10 = ::Math_obj::cos(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(197)
								_this->axisy = tmp10;
								HX_STACK_LINE(197)
								Dynamic();
							}
						}
					}
					HX_STACK_LINE(197)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = this->lverts;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(197)
					::zpp_nape::geom::ZPP_Vec2 li = tmp5->next;		HX_STACK_VAR(li,"li");
					HX_STACK_LINE(197)
					{
						HX_STACK_LINE(197)
						::zpp_nape::geom::ZPP_Vec2 tmp6 = this->gverts;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(197)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp6->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(197)
						while((true)){
							HX_STACK_LINE(197)
							bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(197)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(197)
							if ((tmp8)){
								HX_STACK_LINE(197)
								break;
							}
							HX_STACK_LINE(197)
							::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(197)
							{
								HX_STACK_LINE(197)
								::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
								HX_STACK_LINE(197)
								li = li->next;
								HX_STACK_LINE(197)
								{
									HX_STACK_LINE(197)
									::zpp_nape::phys::ZPP_Body tmp9 = this->body;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(197)
									Float tmp10 = tmp9->posx;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(197)
									::zpp_nape::phys::ZPP_Body tmp11 = this->body;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(197)
									Float tmp12 = tmp11->axisy;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(197)
									Float tmp13 = l->x;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(197)
									Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(197)
									::zpp_nape::phys::ZPP_Body tmp15 = this->body;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(197)
									Float tmp16 = tmp15->axisx;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(197)
									Float tmp17 = l->y;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(197)
									Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(197)
									Float tmp19 = (tmp14 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(197)
									Float tmp20 = (tmp10 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(197)
									g->x = tmp20;
									HX_STACK_LINE(197)
									::zpp_nape::phys::ZPP_Body tmp21 = this->body;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(197)
									Float tmp22 = tmp21->posy;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(197)
									Float tmp23 = l->x;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(197)
									::zpp_nape::phys::ZPP_Body tmp24 = this->body;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(197)
									Float tmp25 = tmp24->axisx;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(197)
									Float tmp26 = (tmp23 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(197)
									Float tmp27 = l->y;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(197)
									::zpp_nape::phys::ZPP_Body tmp28 = this->body;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(197)
									Float tmp29 = tmp28->axisy;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(197)
									Float tmp30 = (tmp27 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(197)
									Float tmp31 = (tmp26 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(197)
									Float tmp32 = (tmp22 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(197)
									g->y = tmp32;
								}
							}
							HX_STACK_LINE(197)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,gverts_pa_validate,(void))

Void ZPP_Polygon_obj::lverts_post_adder( ::nape::geom::Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","lverts_post_adder",0x12ac5731,"zpp_nape.shape.ZPP_Polygon.lverts_post_adder","zpp_nape/shape/Polygon.hx",199,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(200)
		Dynamic tmp = this->lverts_pa_invalidate_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		x->zpp_inner->_invalidate = tmp;
		HX_STACK_LINE(202)
		Dynamic tmp1 = this->lverts_pa_immutable_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		x->zpp_inner->_isimmutable = tmp1;
		HX_STACK_LINE(204)
		::zpp_nape::geom::ZPP_Vec2 ite = null();		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(205)
		::zpp_nape::util::ZNPNode_ZPP_Edge ite2 = null();		HX_STACK_VAR(ite2,"ite2");
		HX_STACK_LINE(206)
		{
			HX_STACK_LINE(207)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = this->lverts;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(207)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp2->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(208)
			while((true)){
				HX_STACK_LINE(208)
				bool tmp3 = (cx_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(208)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(208)
				if ((tmp4)){
					HX_STACK_LINE(208)
					break;
				}
				HX_STACK_LINE(209)
				::zpp_nape::geom::ZPP_Vec2 i = cx_ite;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(210)
				{
					HX_STACK_LINE(211)
					bool tmp5 = (i == x->zpp_inner);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(211)
					if ((tmp5)){
						HX_STACK_LINE(211)
						break;
					}
					else{
						HX_STACK_LINE(213)
						bool tmp6 = (ite == null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(213)
						if ((tmp6)){
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = this->gverts;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(213)
							tmp7 = tmp8->next;
						}
						else{
							HX_STACK_LINE(213)
							tmp7 = ite->next;
						}
						HX_STACK_LINE(213)
						ite = tmp7;
						HX_STACK_LINE(214)
						bool tmp8 = (ite2 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(214)
						::zpp_nape::util::ZNPNode_ZPP_Edge tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(214)
						if ((tmp8)){
							HX_STACK_LINE(214)
							::zpp_nape::util::ZNPList_ZPP_Edge tmp10 = this->edges;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(214)
							tmp9 = tmp10->head;
						}
						else{
							HX_STACK_LINE(214)
							tmp9 = ite2->next;
						}
						HX_STACK_LINE(214)
						ite2 = tmp9;
					}
				}
				HX_STACK_LINE(217)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(220)
		::zpp_nape::geom::ZPP_Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		{
			HX_STACK_LINE(220)
			::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(220)
			{
				HX_STACK_LINE(220)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(220)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(220)
				if ((tmp4)){
					HX_STACK_LINE(220)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(220)
					ret = tmp5;
				}
				else{
					HX_STACK_LINE(220)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(220)
					ret = tmp5;
					HX_STACK_LINE(220)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
					HX_STACK_LINE(220)
					ret->next = null();
				}
				HX_STACK_LINE(220)
				ret->weak = false;
			}
			HX_STACK_LINE(220)
			ret->_immutable = true;
			HX_STACK_LINE(220)
			{
				HX_STACK_LINE(220)
				ret->x = (int)0;
				HX_STACK_LINE(220)
				ret->y = (int)0;
				HX_STACK_LINE(220)
				{
				}
			}
			HX_STACK_LINE(220)
			tmp2 = ret;
		}
		HX_STACK_LINE(220)
		::zpp_nape::geom::ZPP_Vec2 vec = tmp2;		HX_STACK_VAR(vec,"vec");
		HX_STACK_LINE(221)
		::zpp_nape::geom::ZPP_Vec2 tmp3 = this->gverts;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(221)
		::zpp_nape::geom::ZPP_Vec2 tmp4 = ite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(221)
		::zpp_nape::geom::ZPP_Vec2 tmp5 = vec;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(221)
		tmp3->insert(tmp4,tmp5);
		HX_STACK_LINE(222)
		::zpp_nape::geom::ZPP_Vec2 tmp6 = this->lverts;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(222)
		::zpp_nape::geom::ZPP_Vec2 tmp7 = tmp6->next->next;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(222)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(222)
		if ((tmp8)){
			HX_STACK_LINE(223)
			::zpp_nape::geom::ZPP_Vec2 tmp9 = this->lverts;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(223)
			::zpp_nape::geom::ZPP_Vec2 tmp10 = tmp9->next->next;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(223)
			::zpp_nape::geom::ZPP_Vec2 tmp11 = tmp10->next;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(223)
			bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(223)
			if ((tmp12)){
				HX_STACK_LINE(224)
				::zpp_nape::shape::ZPP_Edge ed;		HX_STACK_VAR(ed,"ed");
				HX_STACK_LINE(225)
				{
					HX_STACK_LINE(226)
					::zpp_nape::shape::ZPP_Edge tmp13 = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(226)
					bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(226)
					if ((tmp14)){
						HX_STACK_LINE(227)
						::zpp_nape::shape::ZPP_Edge tmp15 = ::zpp_nape::shape::ZPP_Edge_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(227)
						ed = tmp15;
					}
					else{
						HX_STACK_LINE(233)
						::zpp_nape::shape::ZPP_Edge tmp15 = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(233)
						ed = tmp15;
						HX_STACK_LINE(234)
						::zpp_nape::shape::ZPP_Edge_obj::zpp_pool = ed->next;
						HX_STACK_LINE(235)
						ed->next = null();
					}
					HX_STACK_LINE(240)
					Dynamic();
				}
				HX_STACK_LINE(242)
				ed->polygon = hx::ObjectPtr<OBJ_>(this);
				HX_STACK_LINE(243)
				::zpp_nape::util::ZNPList_ZPP_Edge tmp13 = this->edges;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(243)
				::zpp_nape::shape::ZPP_Edge tmp14 = ed;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(243)
				tmp13->add(tmp14);
				HX_STACK_LINE(244)
				::zpp_nape::shape::ZPP_Edge ed1;		HX_STACK_VAR(ed1,"ed1");
				HX_STACK_LINE(245)
				{
					HX_STACK_LINE(246)
					::zpp_nape::shape::ZPP_Edge tmp15 = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(246)
					bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(246)
					if ((tmp16)){
						HX_STACK_LINE(247)
						::zpp_nape::shape::ZPP_Edge tmp17 = ::zpp_nape::shape::ZPP_Edge_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(247)
						ed1 = tmp17;
					}
					else{
						HX_STACK_LINE(253)
						::zpp_nape::shape::ZPP_Edge tmp17 = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(253)
						ed1 = tmp17;
						HX_STACK_LINE(254)
						::zpp_nape::shape::ZPP_Edge_obj::zpp_pool = ed1->next;
						HX_STACK_LINE(255)
						ed1->next = null();
					}
					HX_STACK_LINE(260)
					Dynamic();
				}
				HX_STACK_LINE(262)
				ed1->polygon = hx::ObjectPtr<OBJ_>(this);
				HX_STACK_LINE(263)
				::zpp_nape::util::ZNPList_ZPP_Edge tmp15 = this->edges;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(263)
				::zpp_nape::shape::ZPP_Edge tmp16 = ed1;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(263)
				tmp15->add(tmp16);
				HX_STACK_LINE(264)
				hx::AddEq(this->edgeCnt,(int)2);
			}
			else{
				HX_STACK_LINE(267)
				::zpp_nape::shape::ZPP_Edge ed;		HX_STACK_VAR(ed,"ed");
				HX_STACK_LINE(268)
				{
					HX_STACK_LINE(269)
					::zpp_nape::shape::ZPP_Edge tmp13 = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(269)
					bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(269)
					if ((tmp14)){
						HX_STACK_LINE(270)
						::zpp_nape::shape::ZPP_Edge tmp15 = ::zpp_nape::shape::ZPP_Edge_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(270)
						ed = tmp15;
					}
					else{
						HX_STACK_LINE(276)
						::zpp_nape::shape::ZPP_Edge tmp15 = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(276)
						ed = tmp15;
						HX_STACK_LINE(277)
						::zpp_nape::shape::ZPP_Edge_obj::zpp_pool = ed->next;
						HX_STACK_LINE(278)
						ed->next = null();
					}
					HX_STACK_LINE(283)
					Dynamic();
				}
				HX_STACK_LINE(285)
				ed->polygon = hx::ObjectPtr<OBJ_>(this);
				HX_STACK_LINE(286)
				::zpp_nape::util::ZNPList_ZPP_Edge tmp13 = this->edges;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(286)
				::zpp_nape::util::ZNPNode_ZPP_Edge tmp14 = ite2;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(286)
				::zpp_nape::shape::ZPP_Edge tmp15 = ed;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(286)
				tmp13->insert(tmp14,tmp15);
				HX_STACK_LINE(287)
				(this->edgeCnt)++;
			}
		}
		HX_STACK_LINE(290)
		Dynamic tmp9 = this->gverts_pa_validate_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(290)
		vec->_validate = tmp9;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Polygon_obj,lverts_post_adder,(void))

Void ZPP_Polygon_obj::lverts_subber( ::nape::geom::Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","lverts_subber",0xcfa82191,"zpp_nape.shape.ZPP_Polygon.lverts_subber","zpp_nape/shape/Polygon.hx",292,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(293)
		::zpp_nape::geom::ZPP_Vec2 tmp = x->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(293)
		this->cleanup_lvert(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Polygon_obj,lverts_subber,(void))

Void ZPP_Polygon_obj::lverts_invalidate( ::zpp_nape::util::ZPP_Vec2List _){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","lverts_invalidate",0x6107483d,"zpp_nape.shape.ZPP_Polygon.lverts_invalidate","zpp_nape/shape/Polygon.hx",296,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(296)
		this->invalidate_lverts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Polygon_obj,lverts_invalidate,(void))

Void ZPP_Polygon_obj::lverts_validate( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","lverts_validate",0x95b46ad8,"zpp_nape.shape.ZPP_Polygon.lverts_validate","zpp_nape/shape/Polygon.hx",299,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(299)
		this->validate_lverts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,lverts_validate,(void))

Void ZPP_Polygon_obj::lverts_modifiable( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","lverts_modifiable",0x14232dc6,"zpp_nape.shape.ZPP_Polygon.lverts_modifiable","zpp_nape/shape/Polygon.hx",302,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(303)
		this->immutable_midstep(HX_HCSTRING("Polygon::localVerts","\x51","\xf5","\x3d","\xc9"));
		HX_STACK_LINE(305)
		::zpp_nape::phys::ZPP_Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(305)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(305)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(305)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(305)
		if ((tmp2)){
			HX_STACK_LINE(305)
			::zpp_nape::phys::ZPP_Body tmp4 = this->body;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(305)
			::zpp_nape::phys::ZPP_Body tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(305)
			::zpp_nape::phys::ZPP_Body tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(305)
			int tmp7 = tmp6->type;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(305)
			int tmp8 = ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(305)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(305)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(305)
			tmp3 = (tmp7 == tmp10);
		}
		else{
			HX_STACK_LINE(305)
			tmp3 = false;
		}
		HX_STACK_LINE(305)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(305)
		if ((tmp3)){
			HX_STACK_LINE(305)
			::zpp_nape::phys::ZPP_Body tmp5 = this->body;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(305)
			::zpp_nape::phys::ZPP_Body tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(305)
			::zpp_nape::space::ZPP_Space tmp7 = tmp6->space;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(305)
			tmp4 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(305)
			tmp4 = false;
		}
		HX_STACK_LINE(305)
		if ((tmp4)){
			HX_STACK_LINE(305)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot modifiy shapes of static object once added to Space","\x96","\xea","\xc2","\xbf"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,lverts_modifiable,(void))

Void ZPP_Polygon_obj::gverts_validate( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","gverts_validate",0xacca4c13,"zpp_nape.shape.ZPP_Polygon.gverts_validate","zpp_nape/shape/Polygon.hx",310,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(310)
		bool tmp = this->zip_gverts;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(310)
		if ((tmp)){
			HX_STACK_LINE(310)
			::zpp_nape::phys::ZPP_Body tmp1 = this->body;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(310)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(310)
			if ((tmp2)){
				HX_STACK_LINE(310)
				this->zip_gverts = false;
				HX_STACK_LINE(310)
				this->validate_lverts();
				HX_STACK_LINE(310)
				{
					HX_STACK_LINE(310)
					::zpp_nape::phys::ZPP_Body tmp3 = this->body;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(310)
					::zpp_nape::phys::ZPP_Body _this = tmp3;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(310)
					bool tmp4 = _this->zip_axis;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(310)
					if ((tmp4)){
						HX_STACK_LINE(310)
						_this->zip_axis = false;
						HX_STACK_LINE(310)
						{
							HX_STACK_LINE(310)
							Float tmp5 = _this->rot;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(310)
							Float tmp6 = ::Math_obj::sin(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(310)
							_this->axisx = tmp6;
							HX_STACK_LINE(310)
							Float tmp7 = _this->rot;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(310)
							Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(310)
							_this->axisy = tmp8;
							HX_STACK_LINE(310)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(310)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = this->lverts;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(310)
				::zpp_nape::geom::ZPP_Vec2 li = tmp3->next;		HX_STACK_VAR(li,"li");
				HX_STACK_LINE(310)
				{
					HX_STACK_LINE(310)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = this->gverts;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(310)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp4->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(310)
					while((true)){
						HX_STACK_LINE(310)
						bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(310)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(310)
						if ((tmp6)){
							HX_STACK_LINE(310)
							break;
						}
						HX_STACK_LINE(310)
						::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(310)
						{
							HX_STACK_LINE(310)
							::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
							HX_STACK_LINE(310)
							li = li->next;
							HX_STACK_LINE(310)
							{
								HX_STACK_LINE(310)
								::zpp_nape::phys::ZPP_Body tmp7 = this->body;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(310)
								Float tmp8 = tmp7->posx;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(310)
								::zpp_nape::phys::ZPP_Body tmp9 = this->body;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(310)
								Float tmp10 = tmp9->axisy;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(310)
								Float tmp11 = l->x;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(310)
								Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(310)
								::zpp_nape::phys::ZPP_Body tmp13 = this->body;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(310)
								Float tmp14 = tmp13->axisx;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(310)
								Float tmp15 = l->y;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(310)
								Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(310)
								Float tmp17 = (tmp12 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(310)
								Float tmp18 = (tmp8 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(310)
								g->x = tmp18;
								HX_STACK_LINE(310)
								::zpp_nape::phys::ZPP_Body tmp19 = this->body;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(310)
								Float tmp20 = tmp19->posy;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(310)
								Float tmp21 = l->x;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(310)
								::zpp_nape::phys::ZPP_Body tmp22 = this->body;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(310)
								Float tmp23 = tmp22->axisx;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(310)
								Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(310)
								Float tmp25 = l->y;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(310)
								::zpp_nape::phys::ZPP_Body tmp26 = this->body;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(310)
								Float tmp27 = tmp26->axisy;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(310)
								Float tmp28 = (tmp25 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(310)
								Float tmp29 = (tmp24 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(310)
								Float tmp30 = (tmp20 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(310)
								g->y = tmp30;
							}
						}
						HX_STACK_LINE(310)
						cx_ite = cx_ite->next;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,gverts_validate,(void))

Void ZPP_Polygon_obj::edges_validate( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","edges_validate",0x0d28fd66,"zpp_nape.shape.ZPP_Polygon.edges_validate","zpp_nape/shape/Polygon.hx",313,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(313)
		this->validate_lverts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,edges_validate,(void))

Void ZPP_Polygon_obj::getlverts( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","getlverts",0x1817c365,"zpp_nape.shape.ZPP_Polygon.getlverts","zpp_nape/shape/Polygon.hx",316,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(317)
		::zpp_nape::shape::ZPP_Polygon me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(318)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->lverts;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(318)
		::zpp_nape::util::ZPP_MixVec2List tmp1 = ::zpp_nape::util::ZPP_MixVec2List_obj::get(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(318)
		this->wrap_lverts = tmp1;
		HX_STACK_LINE(319)
		Dynamic tmp2 = this->lverts_post_adder_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(319)
		::nape::geom::Vec2List tmp3 = this->wrap_lverts;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(319)
		tmp3->zpp_inner->post_adder = tmp2;
		HX_STACK_LINE(320)
		Dynamic tmp4 = this->lverts_subber_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(320)
		::nape::geom::Vec2List tmp5 = this->wrap_lverts;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(320)
		tmp5->zpp_inner->subber = tmp4;
		HX_STACK_LINE(321)
		Dynamic tmp6 = this->lverts_invalidate_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(321)
		::nape::geom::Vec2List tmp7 = this->wrap_lverts;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(321)
		tmp7->zpp_inner->_invalidate = tmp6;
		HX_STACK_LINE(322)
		Dynamic tmp8 = this->lverts_validate_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(322)
		::nape::geom::Vec2List tmp9 = this->wrap_lverts;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(322)
		tmp9->zpp_inner->_validate = tmp8;
		HX_STACK_LINE(324)
		Dynamic tmp10 = this->lverts_modifiable_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(324)
		::nape::geom::Vec2List tmp11 = this->wrap_lverts;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(324)
		tmp11->zpp_inner->_modifiable = tmp10;
		HX_STACK_LINE(326)
		bool tmp12 = this->reverse_flag;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(326)
		::nape::geom::Vec2List tmp13 = this->wrap_lverts;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(326)
		tmp13->zpp_inner->reverse_flag = tmp12;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,getlverts,(void))

Void ZPP_Polygon_obj::getgverts( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","getgverts",0x184ef58a,"zpp_nape.shape.ZPP_Polygon.getgverts","zpp_nape/shape/Polygon.hx",328,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(329)
		::zpp_nape::shape::ZPP_Polygon me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(330)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->gverts;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(330)
		::zpp_nape::util::ZPP_MixVec2List tmp1 = ::zpp_nape::util::ZPP_MixVec2List_obj::get(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(330)
		this->wrap_gverts = tmp1;
		HX_STACK_LINE(331)
		bool tmp2 = this->reverse_flag;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(331)
		::nape::geom::Vec2List tmp3 = this->wrap_gverts;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(331)
		tmp3->zpp_inner->reverse_flag = tmp2;
		HX_STACK_LINE(332)
		Dynamic tmp4 = this->gverts_validate_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(332)
		::nape::geom::Vec2List tmp5 = this->wrap_gverts;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(332)
		tmp5->zpp_inner->_validate = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,getgverts,(void))

Void ZPP_Polygon_obj::getedges( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","getedges",0x3deaf3c7,"zpp_nape.shape.ZPP_Polygon.getedges","zpp_nape/shape/Polygon.hx",334,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(335)
		::zpp_nape::shape::ZPP_Polygon me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(336)
		::zpp_nape::util::ZNPList_ZPP_Edge tmp = this->edges;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(336)
		::nape::shape::EdgeList tmp1 = ::zpp_nape::util::ZPP_EdgeList_obj::get(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(336)
		this->wrap_edges = tmp1;
		HX_STACK_LINE(337)
		bool tmp2 = this->reverse_flag;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(337)
		::nape::shape::EdgeList tmp3 = this->wrap_edges;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(337)
		tmp3->zpp_inner->reverse_flag = tmp2;
		HX_STACK_LINE(338)
		Dynamic tmp4 = this->edges_validate_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(338)
		::nape::shape::EdgeList tmp5 = this->wrap_edges;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(338)
		tmp5->zpp_inner->_validate = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,getedges,(void))

Void ZPP_Polygon_obj::invalidate_lverts( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","invalidate_lverts",0xa7735cd3,"zpp_nape.shape.ZPP_Polygon.invalidate_lverts","zpp_nape/shape/Polygon.hx",341,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(342)
		this->invalidate_laxi();
		HX_STACK_LINE(343)
		this->invalidate_area_inertia();
		HX_STACK_LINE(344)
		this->invalidate_angDrag();
		HX_STACK_LINE(345)
		this->invalidate_localCOM();
		HX_STACK_LINE(346)
		this->invalidate_gverts();
		HX_STACK_LINE(347)
		this->zip_lverts = true;
		HX_STACK_LINE(348)
		this->zip_valid = true;
		HX_STACK_LINE(349)
		this->zip_sanitation = true;
		HX_STACK_LINE(350)
		::zpp_nape::phys::ZPP_Body tmp = this->body;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(350)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(350)
		if ((tmp1)){
			HX_STACK_LINE(350)
			::zpp_nape::phys::ZPP_Body tmp2 = this->body;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(350)
			tmp2->wake();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,invalidate_lverts,(void))

Void ZPP_Polygon_obj::invalidate_laxi( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","invalidate_laxi",0x7600db83,"zpp_nape.shape.ZPP_Polygon.invalidate_laxi","zpp_nape/shape/Polygon.hx",353,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(354)
		this->invalidate_gaxi();
		HX_STACK_LINE(355)
		this->zip_sweepRadius = true;
		HX_STACK_LINE(356)
		this->zip_laxi = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,invalidate_laxi,(void))

Void ZPP_Polygon_obj::invalidate_gverts( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","invalidate_gverts",0xa7aa8ef8,"zpp_nape.shape.ZPP_Polygon.invalidate_gverts","zpp_nape/shape/Polygon.hx",359,0x571b0a14)
		HX_STACK_THIS(this)
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
		HX_STACK_LINE(361)
		this->zip_gverts = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,invalidate_gverts,(void))

Void ZPP_Polygon_obj::invalidate_gaxi( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","invalidate_gaxi",0x72b2ca68,"zpp_nape.shape.ZPP_Polygon.invalidate_gaxi","zpp_nape/shape/Polygon.hx",365,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(365)
		this->zip_gaxi = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,invalidate_gaxi,(void))

::nape::shape::ValidationResult ZPP_Polygon_obj::valid( ){
	HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","valid",0xe0094415,"zpp_nape.shape.ZPP_Polygon.valid","zpp_nape/shape/Polygon.hx",369,0x571b0a14)
	HX_STACK_THIS(this)
	HX_STACK_LINE(370)
	bool tmp = this->zip_valid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(370)
	if ((tmp)){
		HX_STACK_LINE(371)
		this->zip_valid = false;
		HX_STACK_LINE(372)
		{
			HX_STACK_LINE(372)
			bool tmp1 = this->zip_sanitation;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(372)
			if ((tmp1)){
				HX_STACK_LINE(372)
				this->zip_sanitation = false;
				HX_STACK_LINE(372)
				this->splice_collinear_real();
			}
		}
		HX_STACK_LINE(373)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = this->lverts;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(373)
		int tmp2 = tmp1->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(373)
		bool tmp3 = (tmp2 < (int)3);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(373)
		if ((tmp3)){
			HX_STACK_LINE(373)
			::nape::shape::ValidationResult tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(373)
			{
				HX_STACK_LINE(373)
				::nape::shape::ValidationResult tmp5 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(373)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(373)
				if ((tmp6)){
					HX_STACK_LINE(373)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(373)
					::nape::shape::ValidationResult tmp7 = ::nape::shape::ValidationResult_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(373)
					::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE = tmp7;
					HX_STACK_LINE(373)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(373)
				tmp4 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE;
			}
			HX_STACK_LINE(373)
			::nape::shape::ValidationResult tmp5 = this->validation = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(373)
			return tmp5;
		}
		else{
			HX_STACK_LINE(375)
			this->validate_lverts();
			HX_STACK_LINE(376)
			this->validate_area_inertia();
			HX_STACK_LINE(377)
			Float tmp4 = this->area;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(377)
			Float tmp5 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(377)
			bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(377)
			if ((tmp6)){
				HX_STACK_LINE(377)
				::nape::shape::ValidationResult tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(377)
				{
					HX_STACK_LINE(377)
					::nape::shape::ValidationResult tmp8 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(377)
					bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(377)
					if ((tmp9)){
						HX_STACK_LINE(377)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(377)
						::nape::shape::ValidationResult tmp10 = ::nape::shape::ValidationResult_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(377)
						::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE = tmp10;
						HX_STACK_LINE(377)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(377)
					tmp7 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_DEGENERATE;
				}
				HX_STACK_LINE(377)
				::nape::shape::ValidationResult tmp8 = this->validation = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(377)
				return tmp8;
			}
			else{
				HX_STACK_LINE(379)
				bool neg = false;		HX_STACK_VAR(neg,"neg");
				HX_STACK_LINE(380)
				bool pos = false;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(381)
				{
					HX_STACK_LINE(382)
					bool cx_cont = true;		HX_STACK_VAR(cx_cont,"cx_cont");
					HX_STACK_LINE(383)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = this->lverts;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(383)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp7->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(384)
					::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
					HX_STACK_LINE(385)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(386)
					::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(387)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(388)
					while((true)){
						HX_STACK_LINE(388)
						bool tmp8 = (cx_ite != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(388)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(388)
						if ((tmp9)){
							HX_STACK_LINE(388)
							break;
						}
						HX_STACK_LINE(389)
						::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
						HX_STACK_LINE(390)
						{
							HX_STACK_LINE(391)
							Float ax = ((Float)0.0);		HX_STACK_VAR(ax,"ax");
							HX_STACK_LINE(392)
							Float ay = ((Float)0.0);		HX_STACK_VAR(ay,"ay");
							HX_STACK_LINE(393)
							{
								HX_STACK_LINE(394)
								Float tmp10 = (w->x - v->x);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(394)
								ax = tmp10;
								HX_STACK_LINE(395)
								Float tmp11 = (w->y - v->y);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(395)
								ay = tmp11;
							}
							HX_STACK_LINE(397)
							Float bx = ((Float)0.0);		HX_STACK_VAR(bx,"bx");
							HX_STACK_LINE(398)
							Float by = ((Float)0.0);		HX_STACK_VAR(by,"by");
							HX_STACK_LINE(399)
							{
								HX_STACK_LINE(400)
								Float tmp10 = (v->x - u->x);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(400)
								bx = tmp10;
								HX_STACK_LINE(401)
								Float tmp11 = (v->y - u->y);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(401)
								by = tmp11;
							}
							HX_STACK_LINE(403)
							Float tmp10 = (by * ax);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(403)
							Float tmp11 = (bx * ay);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(403)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(403)
							Float dot = tmp12;		HX_STACK_VAR(dot,"dot");
							HX_STACK_LINE(404)
							Float tmp13 = dot;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(404)
							Float tmp14 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(404)
							bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(404)
							if ((tmp15)){
								HX_STACK_LINE(404)
								pos = true;
							}
							else{
								HX_STACK_LINE(405)
								Float tmp16 = dot;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(405)
								Float tmp17 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(405)
								Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(405)
								bool tmp19 = (tmp16 < tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(405)
								if ((tmp19)){
									HX_STACK_LINE(405)
									neg = true;
								}
							}
							HX_STACK_LINE(406)
							bool tmp16 = pos;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(406)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(406)
							if ((tmp16)){
								HX_STACK_LINE(406)
								tmp17 = neg;
							}
							else{
								HX_STACK_LINE(406)
								tmp17 = false;
							}
							HX_STACK_LINE(406)
							if ((tmp17)){
								HX_STACK_LINE(407)
								cx_cont = false;
								HX_STACK_LINE(408)
								break;
							}
						}
						HX_STACK_LINE(411)
						{
							HX_STACK_LINE(412)
							u = v;
							HX_STACK_LINE(413)
							v = w;
							HX_STACK_LINE(414)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(417)
					bool tmp8 = cx_cont;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(417)
					if ((tmp8)){
						HX_STACK_LINE(418)
						::zpp_nape::geom::ZPP_Vec2 tmp9 = this->lverts;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(418)
						cx_ite = tmp9->next;
						HX_STACK_LINE(419)
						::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
						HX_STACK_LINE(420)
						while((true)){
							HX_STACK_LINE(421)
							{
								HX_STACK_LINE(422)
								Float ax = ((Float)0.0);		HX_STACK_VAR(ax,"ax");
								HX_STACK_LINE(423)
								Float ay = ((Float)0.0);		HX_STACK_VAR(ay,"ay");
								HX_STACK_LINE(424)
								{
									HX_STACK_LINE(425)
									Float tmp10 = (w->x - v->x);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(425)
									ax = tmp10;
									HX_STACK_LINE(426)
									Float tmp11 = (w->y - v->y);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(426)
									ay = tmp11;
								}
								HX_STACK_LINE(428)
								Float bx = ((Float)0.0);		HX_STACK_VAR(bx,"bx");
								HX_STACK_LINE(429)
								Float by = ((Float)0.0);		HX_STACK_VAR(by,"by");
								HX_STACK_LINE(430)
								{
									HX_STACK_LINE(431)
									Float tmp10 = (v->x - u->x);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(431)
									bx = tmp10;
									HX_STACK_LINE(432)
									Float tmp11 = (v->y - u->y);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(432)
									by = tmp11;
								}
								HX_STACK_LINE(434)
								Float tmp10 = (by * ax);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(434)
								Float tmp11 = (bx * ay);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(434)
								Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(434)
								Float dot = tmp12;		HX_STACK_VAR(dot,"dot");
								HX_STACK_LINE(435)
								Float tmp13 = dot;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(435)
								Float tmp14 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(435)
								bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(435)
								if ((tmp15)){
									HX_STACK_LINE(435)
									pos = true;
								}
								else{
									HX_STACK_LINE(436)
									Float tmp16 = dot;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(436)
									Float tmp17 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(436)
									Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(436)
									bool tmp19 = (tmp16 < tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(436)
									if ((tmp19)){
										HX_STACK_LINE(436)
										neg = true;
									}
								}
								HX_STACK_LINE(437)
								bool tmp16 = pos;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(437)
								bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(437)
								if ((tmp16)){
									HX_STACK_LINE(437)
									tmp17 = neg;
								}
								else{
									HX_STACK_LINE(437)
									tmp17 = false;
								}
								HX_STACK_LINE(437)
								if ((tmp17)){
									HX_STACK_LINE(438)
									cx_cont = false;
									HX_STACK_LINE(439)
									break;
								}
							}
							HX_STACK_LINE(443)
							bool tmp10 = true;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(420)
							if ((tmp10)){
								HX_STACK_LINE(420)
								break;
							}
						}
						HX_STACK_LINE(444)
						bool tmp10 = cx_cont;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(444)
						if ((tmp10)){
							HX_STACK_LINE(445)
							{
								HX_STACK_LINE(446)
								u = v;
								HX_STACK_LINE(447)
								v = w;
								HX_STACK_LINE(448)
								cx_ite = cx_ite->next;
							}
							HX_STACK_LINE(450)
							::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
							HX_STACK_LINE(451)
							while((true)){
								HX_STACK_LINE(452)
								{
									HX_STACK_LINE(453)
									Float ax = ((Float)0.0);		HX_STACK_VAR(ax,"ax");
									HX_STACK_LINE(454)
									Float ay = ((Float)0.0);		HX_STACK_VAR(ay,"ay");
									HX_STACK_LINE(455)
									{
										HX_STACK_LINE(456)
										Float tmp11 = (w1->x - v->x);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(456)
										ax = tmp11;
										HX_STACK_LINE(457)
										Float tmp12 = (w1->y - v->y);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(457)
										ay = tmp12;
									}
									HX_STACK_LINE(459)
									Float bx = ((Float)0.0);		HX_STACK_VAR(bx,"bx");
									HX_STACK_LINE(460)
									Float by = ((Float)0.0);		HX_STACK_VAR(by,"by");
									HX_STACK_LINE(461)
									{
										HX_STACK_LINE(462)
										Float tmp11 = (v->x - u->x);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(462)
										bx = tmp11;
										HX_STACK_LINE(463)
										Float tmp12 = (v->y - u->y);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(463)
										by = tmp12;
									}
									HX_STACK_LINE(465)
									Float tmp11 = (by * ax);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(465)
									Float tmp12 = (bx * ay);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(465)
									Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(465)
									Float dot = tmp13;		HX_STACK_VAR(dot,"dot");
									HX_STACK_LINE(466)
									Float tmp14 = dot;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(466)
									Float tmp15 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(466)
									bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(466)
									if ((tmp16)){
										HX_STACK_LINE(466)
										pos = true;
									}
									else{
										HX_STACK_LINE(467)
										Float tmp17 = dot;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(467)
										Float tmp18 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(467)
										Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(467)
										bool tmp20 = (tmp17 < tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(467)
										if ((tmp20)){
											HX_STACK_LINE(467)
											neg = true;
										}
									}
									HX_STACK_LINE(468)
									bool tmp17 = pos;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(468)
									bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(468)
									if ((tmp17)){
										HX_STACK_LINE(468)
										tmp18 = neg;
									}
									else{
										HX_STACK_LINE(468)
										tmp18 = false;
									}
									HX_STACK_LINE(468)
									if ((tmp18)){
										HX_STACK_LINE(468)
										break;
									}
								}
								HX_STACK_LINE(471)
								bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(451)
								if ((tmp11)){
									HX_STACK_LINE(451)
									break;
								}
							}
						}
					}
				}
				HX_STACK_LINE(475)
				bool tmp7 = pos;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(475)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(475)
				if ((tmp7)){
					HX_STACK_LINE(475)
					tmp8 = neg;
				}
				else{
					HX_STACK_LINE(475)
					tmp8 = false;
				}
				HX_STACK_LINE(475)
				if ((tmp8)){
					HX_STACK_LINE(475)
					::nape::shape::ValidationResult tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(475)
					{
						HX_STACK_LINE(475)
						::nape::shape::ValidationResult tmp10 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_CONCAVE;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(475)
						bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(475)
						if ((tmp11)){
							HX_STACK_LINE(475)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(475)
							::nape::shape::ValidationResult tmp12 = ::nape::shape::ValidationResult_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(475)
							::zpp_nape::util::ZPP_Flags_obj::ValidationResult_CONCAVE = tmp12;
							HX_STACK_LINE(475)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(475)
						tmp9 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_CONCAVE;
					}
					HX_STACK_LINE(475)
					::nape::shape::ValidationResult tmp10 = this->validation = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(475)
					return tmp10;
				}
				else{
					HX_STACK_LINE(477)
					bool cont = true;		HX_STACK_VAR(cont,"cont");
					HX_STACK_LINE(478)
					{
						HX_STACK_LINE(479)
						bool cx_cont = true;		HX_STACK_VAR(cx_cont,"cx_cont");
						HX_STACK_LINE(480)
						::zpp_nape::geom::ZPP_Vec2 tmp9 = this->lverts;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(480)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp9->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(481)
						::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(482)
						cx_ite = cx_ite->next;
						HX_STACK_LINE(483)
						while((true)){
							HX_STACK_LINE(483)
							bool tmp10 = (cx_ite != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(483)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(483)
							if ((tmp11)){
								HX_STACK_LINE(483)
								break;
							}
							HX_STACK_LINE(484)
							::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(485)
							{
								HX_STACK_LINE(486)
								bool tmp12 = cont;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(486)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(486)
								if ((tmp13)){
									HX_STACK_LINE(487)
									cx_cont = false;
									HX_STACK_LINE(488)
									break;
								}
								HX_STACK_LINE(490)
								{
									HX_STACK_LINE(491)
									bool cx_cont1 = true;		HX_STACK_VAR(cx_cont1,"cx_cont1");
									HX_STACK_LINE(492)
									::zpp_nape::geom::ZPP_Vec2 tmp14 = this->lverts;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(492)
									::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp14->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
									HX_STACK_LINE(493)
									::zpp_nape::geom::ZPP_Vec2 a = cx_ite1;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(494)
									cx_ite1 = cx_ite1->next;
									HX_STACK_LINE(495)
									while((true)){
										HX_STACK_LINE(495)
										bool tmp15 = (cx_ite1 != null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(495)
										bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(495)
										if ((tmp16)){
											HX_STACK_LINE(495)
											break;
										}
										HX_STACK_LINE(496)
										::zpp_nape::geom::ZPP_Vec2 b = cx_ite1;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(497)
										{
											HX_STACK_LINE(498)
											bool tmp17 = (u == a);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(498)
											bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(498)
											bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(498)
											bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(498)
											if ((tmp19)){
												HX_STACK_LINE(498)
												tmp20 = (u == b);
											}
											else{
												HX_STACK_LINE(498)
												tmp20 = true;
											}
											HX_STACK_LINE(498)
											bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(498)
											bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(498)
											bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(498)
											if ((tmp22)){
												HX_STACK_LINE(498)
												tmp23 = (v == a);
											}
											else{
												HX_STACK_LINE(498)
												tmp23 = true;
											}
											HX_STACK_LINE(498)
											bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(498)
											bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(498)
											if ((tmp24)){
												HX_STACK_LINE(498)
												tmp25 = (v == b);
											}
											else{
												HX_STACK_LINE(498)
												tmp25 = true;
											}
											HX_STACK_LINE(498)
											if ((tmp25)){
												HX_STACK_LINE(499)
												{
													HX_STACK_LINE(500)
													a = b;
													HX_STACK_LINE(501)
													cx_ite1 = cx_ite1->next;
												}
												HX_STACK_LINE(503)
												continue;
											}
											HX_STACK_LINE(505)
											Float sx = ((Float)0.0);		HX_STACK_VAR(sx,"sx");
											HX_STACK_LINE(506)
											Float sy = ((Float)0.0);		HX_STACK_VAR(sy,"sy");
											HX_STACK_LINE(507)
											{
												HX_STACK_LINE(508)
												Float tmp26 = (u->x - a->x);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(508)
												sx = tmp26;
												HX_STACK_LINE(509)
												Float tmp27 = (u->y - a->y);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(509)
												sy = tmp27;
											}
											HX_STACK_LINE(511)
											Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
											HX_STACK_LINE(512)
											Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
											HX_STACK_LINE(513)
											{
												HX_STACK_LINE(514)
												Float tmp26 = (v->x - u->x);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(514)
												vx = tmp26;
												HX_STACK_LINE(515)
												Float tmp27 = (v->y - u->y);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(515)
												vy = tmp27;
											}
											HX_STACK_LINE(517)
											Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
											HX_STACK_LINE(518)
											Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
											HX_STACK_LINE(519)
											{
												HX_STACK_LINE(520)
												Float tmp26 = (b->x - a->x);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(520)
												qx = tmp26;
												HX_STACK_LINE(521)
												Float tmp27 = (b->y - a->y);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(521)
												qy = tmp27;
											}
											HX_STACK_LINE(523)
											Float tmp26 = (vy * qx);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(523)
											Float tmp27 = (vx * qy);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(523)
											Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(523)
											Float den = tmp28;		HX_STACK_VAR(den,"den");
											HX_STACK_LINE(524)
											Float tmp29 = (den * den);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(524)
											Float tmp30 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(524)
											bool tmp31 = (tmp29 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(524)
											if ((tmp31)){
												HX_STACK_LINE(525)
												Float tmp32 = (Float((int)1) / Float(den));		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(525)
												den = tmp32;
												HX_STACK_LINE(526)
												Float tmp33 = (qy * sx);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(526)
												Float tmp34 = (qx * sy);		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(526)
												Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(526)
												Float tmp36 = den;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(526)
												Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(526)
												Float t = tmp37;		HX_STACK_VAR(t,"t");
												HX_STACK_LINE(527)
												Float tmp38 = t;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(527)
												Float tmp39 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(527)
												bool tmp40 = (tmp38 > tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(527)
												bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(527)
												if ((tmp40)){
													HX_STACK_LINE(527)
													Float tmp42 = t;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(527)
													Float tmp43 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(527)
													Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(527)
													Float tmp45 = ((int)1 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(527)
													Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(527)
													tmp41 = (tmp42 < tmp46);
												}
												else{
													HX_STACK_LINE(527)
													tmp41 = false;
												}
												HX_STACK_LINE(527)
												if ((tmp41)){
													HX_STACK_LINE(528)
													Float tmp42 = (vy * sx);		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(528)
													Float tmp43 = (vx * sy);		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(528)
													Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(528)
													Float tmp45 = den;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(528)
													Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(528)
													Float s = tmp46;		HX_STACK_VAR(s,"s");
													HX_STACK_LINE(529)
													Float tmp47 = s;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(529)
													Float tmp48 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(529)
													bool tmp49 = (tmp47 > tmp48);		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(529)
													bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(529)
													if ((tmp49)){
														HX_STACK_LINE(529)
														Float tmp51 = s;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(529)
														Float tmp52 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(529)
														Float tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(529)
														Float tmp54 = ((int)1 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(529)
														Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(529)
														tmp50 = (tmp51 < tmp55);
													}
													else{
														HX_STACK_LINE(529)
														tmp50 = false;
													}
													HX_STACK_LINE(529)
													if ((tmp50)){
														HX_STACK_LINE(530)
														cont = false;
														HX_STACK_LINE(531)
														{
															HX_STACK_LINE(532)
															cx_cont1 = false;
															HX_STACK_LINE(533)
															break;
														}
													}
												}
											}
										}
										HX_STACK_LINE(539)
										{
											HX_STACK_LINE(540)
											a = b;
											HX_STACK_LINE(541)
											cx_ite1 = cx_ite1->next;
										}
									}
									HX_STACK_LINE(544)
									bool tmp15 = cx_cont1;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(544)
									if ((tmp15)){
										HX_STACK_LINE(545)
										while((true)){
											HX_STACK_LINE(546)
											::zpp_nape::geom::ZPP_Vec2 tmp16 = this->lverts;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(546)
											::zpp_nape::geom::ZPP_Vec2 b = tmp16->next;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(547)
											{
												HX_STACK_LINE(548)
												bool tmp17 = (u == a);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(548)
												bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(548)
												bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(548)
												bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(548)
												if ((tmp19)){
													HX_STACK_LINE(548)
													tmp20 = (u == b);
												}
												else{
													HX_STACK_LINE(548)
													tmp20 = true;
												}
												HX_STACK_LINE(548)
												bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(548)
												bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(548)
												bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(548)
												if ((tmp22)){
													HX_STACK_LINE(548)
													tmp23 = (v == a);
												}
												else{
													HX_STACK_LINE(548)
													tmp23 = true;
												}
												HX_STACK_LINE(548)
												bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(548)
												bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(548)
												if ((tmp24)){
													HX_STACK_LINE(548)
													tmp25 = (v == b);
												}
												else{
													HX_STACK_LINE(548)
													tmp25 = true;
												}
												HX_STACK_LINE(548)
												if ((tmp25)){
													HX_STACK_LINE(548)
													break;
												}
												HX_STACK_LINE(549)
												Float sx = ((Float)0.0);		HX_STACK_VAR(sx,"sx");
												HX_STACK_LINE(550)
												Float sy = ((Float)0.0);		HX_STACK_VAR(sy,"sy");
												HX_STACK_LINE(551)
												{
													HX_STACK_LINE(552)
													Float tmp26 = (u->x - a->x);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(552)
													sx = tmp26;
													HX_STACK_LINE(553)
													Float tmp27 = (u->y - a->y);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(553)
													sy = tmp27;
												}
												HX_STACK_LINE(555)
												Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
												HX_STACK_LINE(556)
												Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
												HX_STACK_LINE(557)
												{
													HX_STACK_LINE(558)
													Float tmp26 = (v->x - u->x);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(558)
													vx = tmp26;
													HX_STACK_LINE(559)
													Float tmp27 = (v->y - u->y);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(559)
													vy = tmp27;
												}
												HX_STACK_LINE(561)
												Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
												HX_STACK_LINE(562)
												Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
												HX_STACK_LINE(563)
												{
													HX_STACK_LINE(564)
													Float tmp26 = (b->x - a->x);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(564)
													qx = tmp26;
													HX_STACK_LINE(565)
													Float tmp27 = (b->y - a->y);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(565)
													qy = tmp27;
												}
												HX_STACK_LINE(567)
												Float tmp26 = (vy * qx);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(567)
												Float tmp27 = (vx * qy);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(567)
												Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(567)
												Float den = tmp28;		HX_STACK_VAR(den,"den");
												HX_STACK_LINE(568)
												Float tmp29 = (den * den);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(568)
												Float tmp30 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(568)
												bool tmp31 = (tmp29 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(568)
												if ((tmp31)){
													HX_STACK_LINE(569)
													Float tmp32 = (Float((int)1) / Float(den));		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(569)
													den = tmp32;
													HX_STACK_LINE(570)
													Float tmp33 = (qy * sx);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(570)
													Float tmp34 = (qx * sy);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(570)
													Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(570)
													Float tmp36 = den;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(570)
													Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(570)
													Float t = tmp37;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(571)
													Float tmp38 = t;		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(571)
													Float tmp39 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(571)
													bool tmp40 = (tmp38 > tmp39);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(571)
													bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(571)
													if ((tmp40)){
														HX_STACK_LINE(571)
														Float tmp42 = t;		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(571)
														Float tmp43 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(571)
														Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(571)
														Float tmp45 = ((int)1 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(571)
														Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(571)
														tmp41 = (tmp42 < tmp46);
													}
													else{
														HX_STACK_LINE(571)
														tmp41 = false;
													}
													HX_STACK_LINE(571)
													if ((tmp41)){
														HX_STACK_LINE(572)
														Float tmp42 = (vy * sx);		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(572)
														Float tmp43 = (vx * sy);		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(572)
														Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(572)
														Float tmp45 = den;		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(572)
														Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(572)
														Float s = tmp46;		HX_STACK_VAR(s,"s");
														HX_STACK_LINE(573)
														Float tmp47 = s;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(573)
														Float tmp48 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(573)
														bool tmp49 = (tmp47 > tmp48);		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(573)
														bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(573)
														if ((tmp49)){
															HX_STACK_LINE(573)
															Float tmp51 = s;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(573)
															Float tmp52 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(573)
															Float tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(573)
															Float tmp54 = ((int)1 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
															HX_STACK_LINE(573)
															Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
															HX_STACK_LINE(573)
															tmp50 = (tmp51 < tmp55);
														}
														else{
															HX_STACK_LINE(573)
															tmp50 = false;
														}
														HX_STACK_LINE(573)
														if ((tmp50)){
															HX_STACK_LINE(574)
															cont = false;
															HX_STACK_LINE(575)
															break;
														}
													}
												}
											}
											HX_STACK_LINE(581)
											bool tmp17 = true;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(545)
											if ((tmp17)){
												HX_STACK_LINE(545)
												break;
											}
										}
									}
								}
							}
							HX_STACK_LINE(585)
							{
								HX_STACK_LINE(586)
								u = v;
								HX_STACK_LINE(587)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(590)
						bool tmp10 = cx_cont;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(590)
						if ((tmp10)){
							HX_STACK_LINE(591)
							while((true)){
								HX_STACK_LINE(592)
								::zpp_nape::geom::ZPP_Vec2 tmp11 = this->lverts;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(592)
								::zpp_nape::geom::ZPP_Vec2 v = tmp11->next;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(593)
								{
									HX_STACK_LINE(594)
									bool tmp12 = cont;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(594)
									bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(594)
									if ((tmp13)){
										HX_STACK_LINE(594)
										break;
									}
									HX_STACK_LINE(595)
									{
										HX_STACK_LINE(596)
										bool cx_cont1 = true;		HX_STACK_VAR(cx_cont1,"cx_cont1");
										HX_STACK_LINE(597)
										::zpp_nape::geom::ZPP_Vec2 tmp14 = this->lverts;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(597)
										::zpp_nape::geom::ZPP_Vec2 cx_ite1 = tmp14->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(598)
										::zpp_nape::geom::ZPP_Vec2 a = cx_ite1;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(599)
										cx_ite1 = cx_ite1->next;
										HX_STACK_LINE(600)
										while((true)){
											HX_STACK_LINE(600)
											bool tmp15 = (cx_ite1 != null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(600)
											bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(600)
											if ((tmp16)){
												HX_STACK_LINE(600)
												break;
											}
											HX_STACK_LINE(601)
											::zpp_nape::geom::ZPP_Vec2 b = cx_ite1;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(602)
											{
												HX_STACK_LINE(603)
												bool tmp17 = (u == a);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(603)
												bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(603)
												bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(603)
												bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(603)
												if ((tmp19)){
													HX_STACK_LINE(603)
													tmp20 = (u == b);
												}
												else{
													HX_STACK_LINE(603)
													tmp20 = true;
												}
												HX_STACK_LINE(603)
												bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(603)
												bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(603)
												bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(603)
												if ((tmp22)){
													HX_STACK_LINE(603)
													tmp23 = (v == a);
												}
												else{
													HX_STACK_LINE(603)
													tmp23 = true;
												}
												HX_STACK_LINE(603)
												bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(603)
												bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(603)
												if ((tmp24)){
													HX_STACK_LINE(603)
													tmp25 = (v == b);
												}
												else{
													HX_STACK_LINE(603)
													tmp25 = true;
												}
												HX_STACK_LINE(603)
												if ((tmp25)){
													HX_STACK_LINE(604)
													{
														HX_STACK_LINE(605)
														a = b;
														HX_STACK_LINE(606)
														cx_ite1 = cx_ite1->next;
													}
													HX_STACK_LINE(608)
													continue;
												}
												HX_STACK_LINE(610)
												Float sx = ((Float)0.0);		HX_STACK_VAR(sx,"sx");
												HX_STACK_LINE(611)
												Float sy = ((Float)0.0);		HX_STACK_VAR(sy,"sy");
												HX_STACK_LINE(612)
												{
													HX_STACK_LINE(613)
													Float tmp26 = (u->x - a->x);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(613)
													sx = tmp26;
													HX_STACK_LINE(614)
													Float tmp27 = (u->y - a->y);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(614)
													sy = tmp27;
												}
												HX_STACK_LINE(616)
												Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
												HX_STACK_LINE(617)
												Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
												HX_STACK_LINE(618)
												{
													HX_STACK_LINE(619)
													Float tmp26 = (v->x - u->x);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(619)
													vx = tmp26;
													HX_STACK_LINE(620)
													Float tmp27 = (v->y - u->y);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(620)
													vy = tmp27;
												}
												HX_STACK_LINE(622)
												Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
												HX_STACK_LINE(623)
												Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
												HX_STACK_LINE(624)
												{
													HX_STACK_LINE(625)
													Float tmp26 = (b->x - a->x);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(625)
													qx = tmp26;
													HX_STACK_LINE(626)
													Float tmp27 = (b->y - a->y);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(626)
													qy = tmp27;
												}
												HX_STACK_LINE(628)
												Float tmp26 = (vy * qx);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(628)
												Float tmp27 = (vx * qy);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(628)
												Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(628)
												Float den = tmp28;		HX_STACK_VAR(den,"den");
												HX_STACK_LINE(629)
												Float tmp29 = (den * den);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(629)
												Float tmp30 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(629)
												bool tmp31 = (tmp29 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(629)
												if ((tmp31)){
													HX_STACK_LINE(630)
													Float tmp32 = (Float((int)1) / Float(den));		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(630)
													den = tmp32;
													HX_STACK_LINE(631)
													Float tmp33 = (qy * sx);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(631)
													Float tmp34 = (qx * sy);		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(631)
													Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(631)
													Float tmp36 = den;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(631)
													Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(631)
													Float t = tmp37;		HX_STACK_VAR(t,"t");
													HX_STACK_LINE(632)
													Float tmp38 = t;		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(632)
													Float tmp39 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(632)
													bool tmp40 = (tmp38 > tmp39);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(632)
													bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(632)
													if ((tmp40)){
														HX_STACK_LINE(632)
														Float tmp42 = t;		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(632)
														Float tmp43 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(632)
														Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(632)
														Float tmp45 = ((int)1 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(632)
														Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(632)
														tmp41 = (tmp42 < tmp46);
													}
													else{
														HX_STACK_LINE(632)
														tmp41 = false;
													}
													HX_STACK_LINE(632)
													if ((tmp41)){
														HX_STACK_LINE(633)
														Float tmp42 = (vy * sx);		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(633)
														Float tmp43 = (vx * sy);		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(633)
														Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
														HX_STACK_LINE(633)
														Float tmp45 = den;		HX_STACK_VAR(tmp45,"tmp45");
														HX_STACK_LINE(633)
														Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
														HX_STACK_LINE(633)
														Float s = tmp46;		HX_STACK_VAR(s,"s");
														HX_STACK_LINE(634)
														Float tmp47 = s;		HX_STACK_VAR(tmp47,"tmp47");
														HX_STACK_LINE(634)
														Float tmp48 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp48,"tmp48");
														HX_STACK_LINE(634)
														bool tmp49 = (tmp47 > tmp48);		HX_STACK_VAR(tmp49,"tmp49");
														HX_STACK_LINE(634)
														bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(634)
														if ((tmp49)){
															HX_STACK_LINE(634)
															Float tmp51 = s;		HX_STACK_VAR(tmp51,"tmp51");
															HX_STACK_LINE(634)
															Float tmp52 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp52,"tmp52");
															HX_STACK_LINE(634)
															Float tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
															HX_STACK_LINE(634)
															Float tmp54 = ((int)1 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
															HX_STACK_LINE(634)
															Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
															HX_STACK_LINE(634)
															tmp50 = (tmp51 < tmp55);
														}
														else{
															HX_STACK_LINE(634)
															tmp50 = false;
														}
														HX_STACK_LINE(634)
														if ((tmp50)){
															HX_STACK_LINE(635)
															cont = false;
															HX_STACK_LINE(636)
															{
																HX_STACK_LINE(637)
																cx_cont1 = false;
																HX_STACK_LINE(638)
																break;
															}
														}
													}
												}
											}
											HX_STACK_LINE(644)
											{
												HX_STACK_LINE(645)
												a = b;
												HX_STACK_LINE(646)
												cx_ite1 = cx_ite1->next;
											}
										}
										HX_STACK_LINE(649)
										bool tmp15 = cx_cont1;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(649)
										if ((tmp15)){
											HX_STACK_LINE(650)
											while((true)){
												HX_STACK_LINE(651)
												::zpp_nape::geom::ZPP_Vec2 tmp16 = this->lverts;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(651)
												::zpp_nape::geom::ZPP_Vec2 b = tmp16->next;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(652)
												{
													HX_STACK_LINE(653)
													bool tmp17 = (u == a);		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(653)
													bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(653)
													bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(653)
													bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(653)
													if ((tmp19)){
														HX_STACK_LINE(653)
														tmp20 = (u == b);
													}
													else{
														HX_STACK_LINE(653)
														tmp20 = true;
													}
													HX_STACK_LINE(653)
													bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(653)
													bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(653)
													bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(653)
													if ((tmp22)){
														HX_STACK_LINE(653)
														tmp23 = (v == a);
													}
													else{
														HX_STACK_LINE(653)
														tmp23 = true;
													}
													HX_STACK_LINE(653)
													bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(653)
													bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(653)
													if ((tmp24)){
														HX_STACK_LINE(653)
														tmp25 = (v == b);
													}
													else{
														HX_STACK_LINE(653)
														tmp25 = true;
													}
													HX_STACK_LINE(653)
													if ((tmp25)){
														HX_STACK_LINE(653)
														break;
													}
													HX_STACK_LINE(654)
													Float sx = ((Float)0.0);		HX_STACK_VAR(sx,"sx");
													HX_STACK_LINE(655)
													Float sy = ((Float)0.0);		HX_STACK_VAR(sy,"sy");
													HX_STACK_LINE(656)
													{
														HX_STACK_LINE(657)
														Float tmp26 = (u->x - a->x);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(657)
														sx = tmp26;
														HX_STACK_LINE(658)
														Float tmp27 = (u->y - a->y);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(658)
														sy = tmp27;
													}
													HX_STACK_LINE(660)
													Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
													HX_STACK_LINE(661)
													Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
													HX_STACK_LINE(662)
													{
														HX_STACK_LINE(663)
														Float tmp26 = (v->x - u->x);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(663)
														vx = tmp26;
														HX_STACK_LINE(664)
														Float tmp27 = (v->y - u->y);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(664)
														vy = tmp27;
													}
													HX_STACK_LINE(666)
													Float qx = ((Float)0.0);		HX_STACK_VAR(qx,"qx");
													HX_STACK_LINE(667)
													Float qy = ((Float)0.0);		HX_STACK_VAR(qy,"qy");
													HX_STACK_LINE(668)
													{
														HX_STACK_LINE(669)
														Float tmp26 = (b->x - a->x);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(669)
														qx = tmp26;
														HX_STACK_LINE(670)
														Float tmp27 = (b->y - a->y);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(670)
														qy = tmp27;
													}
													HX_STACK_LINE(672)
													Float tmp26 = (vy * qx);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(672)
													Float tmp27 = (vx * qy);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(672)
													Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(672)
													Float den = tmp28;		HX_STACK_VAR(den,"den");
													HX_STACK_LINE(673)
													Float tmp29 = (den * den);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(673)
													Float tmp30 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(673)
													bool tmp31 = (tmp29 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(673)
													if ((tmp31)){
														HX_STACK_LINE(674)
														Float tmp32 = (Float((int)1) / Float(den));		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(674)
														den = tmp32;
														HX_STACK_LINE(675)
														Float tmp33 = (qy * sx);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(675)
														Float tmp34 = (qx * sy);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(675)
														Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(675)
														Float tmp36 = den;		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(675)
														Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(675)
														Float t = tmp37;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(676)
														Float tmp38 = t;		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(676)
														Float tmp39 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(676)
														bool tmp40 = (tmp38 > tmp39);		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(676)
														bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(676)
														if ((tmp40)){
															HX_STACK_LINE(676)
															Float tmp42 = t;		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(676)
															Float tmp43 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(676)
															Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(676)
															Float tmp45 = ((int)1 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(676)
															Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(676)
															tmp41 = (tmp42 < tmp46);
														}
														else{
															HX_STACK_LINE(676)
															tmp41 = false;
														}
														HX_STACK_LINE(676)
														if ((tmp41)){
															HX_STACK_LINE(677)
															Float tmp42 = (vy * sx);		HX_STACK_VAR(tmp42,"tmp42");
															HX_STACK_LINE(677)
															Float tmp43 = (vx * sy);		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(677)
															Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(677)
															Float tmp45 = den;		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(677)
															Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
															HX_STACK_LINE(677)
															Float s = tmp46;		HX_STACK_VAR(s,"s");
															HX_STACK_LINE(678)
															Float tmp47 = s;		HX_STACK_VAR(tmp47,"tmp47");
															HX_STACK_LINE(678)
															Float tmp48 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp48,"tmp48");
															HX_STACK_LINE(678)
															bool tmp49 = (tmp47 > tmp48);		HX_STACK_VAR(tmp49,"tmp49");
															HX_STACK_LINE(678)
															bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
															HX_STACK_LINE(678)
															if ((tmp49)){
																HX_STACK_LINE(678)
																Float tmp51 = s;		HX_STACK_VAR(tmp51,"tmp51");
																HX_STACK_LINE(678)
																Float tmp52 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp52,"tmp52");
																HX_STACK_LINE(678)
																Float tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
																HX_STACK_LINE(678)
																Float tmp54 = ((int)1 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
																HX_STACK_LINE(678)
																Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
																HX_STACK_LINE(678)
																tmp50 = (tmp51 < tmp55);
															}
															else{
																HX_STACK_LINE(678)
																tmp50 = false;
															}
															HX_STACK_LINE(678)
															if ((tmp50)){
																HX_STACK_LINE(679)
																cont = false;
																HX_STACK_LINE(680)
																break;
															}
														}
													}
												}
												HX_STACK_LINE(686)
												bool tmp17 = true;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(650)
												if ((tmp17)){
													HX_STACK_LINE(650)
													break;
												}
											}
										}
									}
								}
								HX_STACK_LINE(691)
								bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(591)
								if ((tmp12)){
									HX_STACK_LINE(591)
									break;
								}
							}
						}
					}
					HX_STACK_LINE(694)
					bool tmp9 = cont;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(694)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(694)
					if ((tmp10)){
						HX_STACK_LINE(694)
						::nape::shape::ValidationResult tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(694)
						{
							HX_STACK_LINE(694)
							::nape::shape::ValidationResult tmp12 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(694)
							bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(694)
							if ((tmp13)){
								HX_STACK_LINE(694)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(694)
								::nape::shape::ValidationResult tmp14 = ::nape::shape::ValidationResult_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(694)
								::zpp_nape::util::ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING = tmp14;
								HX_STACK_LINE(694)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(694)
							tmp11 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_SELF_INTERSECTING;
						}
						HX_STACK_LINE(694)
						::nape::shape::ValidationResult tmp12 = this->validation = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(694)
						return tmp12;
					}
					else{
						HX_STACK_LINE(695)
						::nape::shape::ValidationResult tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(695)
						{
							HX_STACK_LINE(695)
							::nape::shape::ValidationResult tmp12 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(695)
							bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(695)
							if ((tmp13)){
								HX_STACK_LINE(695)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(695)
								::nape::shape::ValidationResult tmp14 = ::nape::shape::ValidationResult_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(695)
								::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID = tmp14;
								HX_STACK_LINE(695)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(695)
							tmp11 = ::zpp_nape::util::ZPP_Flags_obj::ValidationResult_VALID;
						}
						HX_STACK_LINE(695)
						::nape::shape::ValidationResult tmp12 = this->validation = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(695)
						return tmp12;
					}
				}
			}
		}
	}
	else{
		HX_STACK_LINE(700)
		::nape::shape::ValidationResult tmp1 = this->validation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(700)
		return tmp1;
	}
	HX_STACK_LINE(370)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,valid,return )

Void ZPP_Polygon_obj::validate_lverts( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","validate_lverts",0x1feb06d8,"zpp_nape.shape.ZPP_Polygon.validate_lverts","zpp_nape/shape/Polygon.hx",702,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(703)
		bool tmp = this->zip_lverts;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(703)
		if ((tmp)){
			HX_STACK_LINE(704)
			this->zip_lverts = false;
			HX_STACK_LINE(705)
			::zpp_nape::geom::ZPP_Vec2 tmp1 = this->lverts;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(705)
			int tmp2 = tmp1->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(705)
			bool tmp3 = (tmp2 > (int)2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(705)
			if ((tmp3)){
				HX_STACK_LINE(706)
				this->validate_area_inertia();
				HX_STACK_LINE(707)
				Float tmp4 = this->area;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(707)
				bool tmp5 = (tmp4 < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(707)
				if ((tmp5)){
					HX_STACK_LINE(708)
					this->reverse_vertices();
					HX_STACK_LINE(709)
					Float tmp6 = this->area;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(709)
					Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(709)
					this->area = tmp7;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,validate_lverts,(void))

Void ZPP_Polygon_obj::cleanup_lvert( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","cleanup_lvert",0x289cf19b,"zpp_nape.shape.ZPP_Polygon.cleanup_lvert","zpp_nape/shape/Polygon.hx",714,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(715)
		::zpp_nape::geom::ZPP_Vec2 ite = null();		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(716)
		::zpp_nape::util::ZNPNode_ZPP_Edge ite2 = null();		HX_STACK_VAR(ite2,"ite2");
		HX_STACK_LINE(717)
		{
			HX_STACK_LINE(718)
			::zpp_nape::geom::ZPP_Vec2 tmp = this->lverts;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(718)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(719)
			while((true)){
				HX_STACK_LINE(719)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(719)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(719)
				if ((tmp2)){
					HX_STACK_LINE(719)
					break;
				}
				HX_STACK_LINE(720)
				::zpp_nape::geom::ZPP_Vec2 i = cx_ite;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(721)
				{
					HX_STACK_LINE(722)
					bool tmp3 = (i == x);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(722)
					if ((tmp3)){
						HX_STACK_LINE(722)
						break;
					}
					else{
						HX_STACK_LINE(724)
						bool tmp4 = (ite == null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(724)
						::zpp_nape::geom::ZPP_Vec2 tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(724)
						if ((tmp4)){
							HX_STACK_LINE(724)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = this->gverts;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(724)
							tmp5 = tmp6->next;
						}
						else{
							HX_STACK_LINE(724)
							tmp5 = ite->next;
						}
						HX_STACK_LINE(724)
						ite = tmp5;
						HX_STACK_LINE(725)
						bool tmp6 = (ite2 == null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(725)
						::zpp_nape::util::ZNPNode_ZPP_Edge tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(725)
						if ((tmp6)){
							HX_STACK_LINE(725)
							::zpp_nape::util::ZNPList_ZPP_Edge tmp8 = this->edges;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(725)
							tmp7 = tmp8->head;
						}
						else{
							HX_STACK_LINE(725)
							tmp7 = ite2->next;
						}
						HX_STACK_LINE(725)
						ite2 = tmp7;
					}
				}
				HX_STACK_LINE(728)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(731)
		bool tmp = (ite == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(731)
		::zpp_nape::geom::ZPP_Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(731)
		if ((tmp)){
			HX_STACK_LINE(731)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = this->gverts;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(731)
			tmp1 = tmp2->next;
		}
		else{
			HX_STACK_LINE(731)
			tmp1 = ite->next;
		}
		HX_STACK_LINE(731)
		::zpp_nape::geom::ZPP_Vec2 rem = tmp1;		HX_STACK_VAR(rem,"rem");
		HX_STACK_LINE(732)
		::zpp_nape::geom::ZPP_Vec2 tmp2 = this->gverts;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(732)
		::zpp_nape::geom::ZPP_Vec2 tmp3 = ite;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(732)
		tmp2->erase(tmp3);
		HX_STACK_LINE(733)
		{
			HX_STACK_LINE(734)
			::zpp_nape::geom::ZPP_Vec2 o = rem;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(743)
			{
				HX_STACK_LINE(743)
				bool tmp4 = (o->outer != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(743)
				if ((tmp4)){
					HX_STACK_LINE(743)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(743)
					o->outer = null();
				}
				HX_STACK_LINE(743)
				o->_isimmutable = null();
				HX_STACK_LINE(743)
				o->_validate = null();
				HX_STACK_LINE(743)
				o->_invalidate = null();
			}
			HX_STACK_LINE(744)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(744)
			o->next = tmp4;
			HX_STACK_LINE(745)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
		HX_STACK_LINE(750)
		int tmp4 = this->edgeCnt;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(750)
		bool tmp5 = (tmp4 == (int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(750)
		if ((tmp5)){
			HX_STACK_LINE(751)
			::zpp_nape::util::ZNPList_ZPP_Edge tmp6 = this->edges;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(751)
			::zpp_nape::shape::ZPP_Edge tmp7 = tmp6->pop_unsafe();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(751)
			::zpp_nape::shape::ZPP_Edge rem1 = tmp7;		HX_STACK_VAR(rem1,"rem1");
			HX_STACK_LINE(752)
			{
				HX_STACK_LINE(753)
				::zpp_nape::shape::ZPP_Edge o = rem1;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(762)
				o->polygon = null();
				HX_STACK_LINE(763)
				::zpp_nape::shape::ZPP_Edge tmp8 = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(763)
				o->next = tmp8;
				HX_STACK_LINE(764)
				::zpp_nape::shape::ZPP_Edge_obj::zpp_pool = o;
			}
			HX_STACK_LINE(769)
			::zpp_nape::util::ZNPList_ZPP_Edge tmp8 = this->edges;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(769)
			::zpp_nape::shape::ZPP_Edge tmp9 = tmp8->pop_unsafe();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(769)
			rem1 = tmp9;
			HX_STACK_LINE(770)
			{
				HX_STACK_LINE(771)
				::zpp_nape::shape::ZPP_Edge o = rem1;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(780)
				o->polygon = null();
				HX_STACK_LINE(781)
				::zpp_nape::shape::ZPP_Edge tmp10 = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(781)
				o->next = tmp10;
				HX_STACK_LINE(782)
				::zpp_nape::shape::ZPP_Edge_obj::zpp_pool = o;
			}
			HX_STACK_LINE(787)
			this->edgeCnt = (int)0;
		}
		else{
			HX_STACK_LINE(789)
			int tmp6 = this->edgeCnt;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(789)
			bool tmp7 = (tmp6 != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(789)
			if ((tmp7)){
				HX_STACK_LINE(790)
				bool tmp8 = (ite2 == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(790)
				::zpp_nape::shape::ZPP_Edge tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(790)
				if ((tmp8)){
					HX_STACK_LINE(790)
					::zpp_nape::util::ZNPList_ZPP_Edge tmp10 = this->edges;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(790)
					tmp9 = tmp10->head->elt;
				}
				else{
					HX_STACK_LINE(790)
					tmp9 = ite2->next->elt;
				}
				HX_STACK_LINE(790)
				::zpp_nape::shape::ZPP_Edge rem1 = tmp9;		HX_STACK_VAR(rem1,"rem1");
				HX_STACK_LINE(791)
				::zpp_nape::util::ZNPList_ZPP_Edge tmp10 = this->edges;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(791)
				::zpp_nape::util::ZNPNode_ZPP_Edge tmp11 = ite2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(791)
				tmp10->erase(tmp11);
				HX_STACK_LINE(792)
				{
					HX_STACK_LINE(793)
					::zpp_nape::shape::ZPP_Edge o = rem1;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(802)
					o->polygon = null();
					HX_STACK_LINE(803)
					::zpp_nape::shape::ZPP_Edge tmp12 = ::zpp_nape::shape::ZPP_Edge_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(803)
					o->next = tmp12;
					HX_STACK_LINE(804)
					::zpp_nape::shape::ZPP_Edge_obj::zpp_pool = o;
				}
				HX_STACK_LINE(809)
				(this->edgeCnt)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Polygon_obj,cleanup_lvert,(void))

Void ZPP_Polygon_obj::splice_collinear( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","splice_collinear",0x6723fbe9,"zpp_nape.shape.ZPP_Polygon.splice_collinear","zpp_nape/shape/Polygon.hx",815,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(816)
		bool tmp = this->zip_sanitation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(816)
		if ((tmp)){
			HX_STACK_LINE(817)
			this->zip_sanitation = false;
			HX_STACK_LINE(818)
			this->splice_collinear_real();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,splice_collinear,(void))

Void ZPP_Polygon_obj::splice_collinear_real( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","splice_collinear_real",0x956d9eb4,"zpp_nape.shape.ZPP_Polygon.splice_collinear_real","zpp_nape/shape/Polygon.hx",821,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(822)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->lverts;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(822)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = tmp->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(822)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(822)
		if ((tmp2)){
			HX_STACK_LINE(822)
			return null();
		}
		HX_STACK_LINE(823)
		::zpp_nape::geom::ZPP_Vec2 tmp3 = this->lverts;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(823)
		::zpp_nape::geom::ZPP_Vec2 tmp4 = tmp3->next->next;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(823)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(823)
		if ((tmp5)){
			HX_STACK_LINE(823)
			return null();
		}
		HX_STACK_LINE(824)
		::zpp_nape::geom::ZPP_Vec2 tmp6 = this->lverts;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(824)
		::zpp_nape::geom::ZPP_Vec2 tmp7 = tmp6->next->next;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(824)
		::zpp_nape::geom::ZPP_Vec2 tmp8 = tmp7->next;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(824)
		bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(824)
		if ((tmp9)){
			HX_STACK_LINE(824)
			return null();
		}
		HX_STACK_LINE(825)
		::zpp_nape::geom::ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(826)
		::zpp_nape::geom::ZPP_Vec2 tmp10 = this->lverts;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(826)
		::zpp_nape::geom::ZPP_Vec2 cur = tmp10->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(827)
		while((true)){
			HX_STACK_LINE(827)
			bool tmp11 = (cur != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(827)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(827)
			if ((tmp12)){
				HX_STACK_LINE(827)
				break;
			}
			HX_STACK_LINE(828)
			bool tmp13 = (cur->next == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(828)
			::zpp_nape::geom::ZPP_Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(828)
			if ((tmp13)){
				HX_STACK_LINE(828)
				::zpp_nape::geom::ZPP_Vec2 tmp15 = this->lverts;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(828)
				tmp14 = tmp15->next;
			}
			else{
				HX_STACK_LINE(828)
				tmp14 = cur->next;
			}
			HX_STACK_LINE(828)
			::zpp_nape::geom::ZPP_Vec2 nxt = tmp14;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(829)
			::zpp_nape::geom::ZPP_Vec2 u = cur;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(830)
			::zpp_nape::geom::ZPP_Vec2 v = nxt;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(831)
			Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(831)
			{
				HX_STACK_LINE(831)
				Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(831)
				Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(831)
				{
					HX_STACK_LINE(831)
					Float tmp16 = (u->x - v->x);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(831)
					dx = tmp16;
					HX_STACK_LINE(831)
					Float tmp17 = (u->y - v->y);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(831)
					dy = tmp17;
				}
				HX_STACK_LINE(831)
				Float tmp16 = (dx * dx);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(831)
				Float tmp17 = (dy * dy);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(831)
				tmp15 = (tmp16 + tmp17);
			}
			HX_STACK_LINE(831)
			Float tmp16 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(831)
			Float tmp17 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(831)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(831)
			bool tmp19 = (tmp15 < tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(831)
			if ((tmp19)){
				HX_STACK_LINE(832)
				::zpp_nape::geom::ZPP_Vec2 tmp20 = cur;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(832)
				this->cleanup_lvert(tmp20);
				HX_STACK_LINE(833)
				::zpp_nape::geom::ZPP_Vec2 tmp21 = this->lverts;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(833)
				::zpp_nape::geom::ZPP_Vec2 tmp22 = pre;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(833)
				::zpp_nape::geom::ZPP_Vec2 tmp23 = tmp21->erase(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(833)
				cur = tmp23;
			}
			else{
				HX_STACK_LINE(836)
				pre = cur;
				HX_STACK_LINE(837)
				cur = cur->next;
			}
		}
		HX_STACK_LINE(840)
		::zpp_nape::geom::ZPP_Vec2 tmp11 = this->lverts;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(840)
		::zpp_nape::geom::ZPP_Vec2 tmp12 = tmp11->next;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(840)
		bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(840)
		if ((tmp13)){
			HX_STACK_LINE(840)
			return null();
		}
		HX_STACK_LINE(841)
		bool removed;		HX_STACK_VAR(removed,"removed");
		HX_STACK_LINE(842)
		while((true)){
			HX_STACK_LINE(843)
			removed = false;
			HX_STACK_LINE(844)
			::zpp_nape::geom::ZPP_Vec2 tmp14 = this->lverts;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(844)
			::zpp_nape::geom::ZPP_Vec2 pre1 = tmp14->next;		HX_STACK_VAR(pre1,"pre1");
			HX_STACK_LINE(845)
			while((true)){
				HX_STACK_LINE(845)
				bool tmp15 = (pre1 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(845)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(845)
				if ((tmp16)){
					HX_STACK_LINE(845)
					break;
				}
				HX_STACK_LINE(846)
				bool tmp17 = (pre1->next == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(846)
				::zpp_nape::geom::ZPP_Vec2 tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(846)
				if ((tmp17)){
					HX_STACK_LINE(846)
					::zpp_nape::geom::ZPP_Vec2 tmp19 = this->lverts;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(846)
					tmp18 = tmp19->next;
				}
				else{
					HX_STACK_LINE(846)
					tmp18 = pre1->next;
				}
				HX_STACK_LINE(846)
				::zpp_nape::geom::ZPP_Vec2 cur1 = tmp18;		HX_STACK_VAR(cur1,"cur1");
				HX_STACK_LINE(847)
				bool tmp19 = (cur1->next == null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(847)
				::zpp_nape::geom::ZPP_Vec2 tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(847)
				if ((tmp19)){
					HX_STACK_LINE(847)
					::zpp_nape::geom::ZPP_Vec2 tmp21 = this->lverts;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(847)
					tmp20 = tmp21->next;
				}
				else{
					HX_STACK_LINE(847)
					tmp20 = cur1->next;
				}
				HX_STACK_LINE(847)
				::zpp_nape::geom::ZPP_Vec2 nxt = tmp20;		HX_STACK_VAR(nxt,"nxt");
				HX_STACK_LINE(848)
				::zpp_nape::geom::ZPP_Vec2 u = pre1;		HX_STACK_VAR(u,"u");
				HX_STACK_LINE(849)
				::zpp_nape::geom::ZPP_Vec2 v = cur1;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(850)
				::zpp_nape::geom::ZPP_Vec2 w = nxt;		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(851)
				Float ax = ((Float)0.0);		HX_STACK_VAR(ax,"ax");
				HX_STACK_LINE(852)
				Float ay = ((Float)0.0);		HX_STACK_VAR(ay,"ay");
				HX_STACK_LINE(853)
				{
					HX_STACK_LINE(854)
					Float tmp21 = (v->x - u->x);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(854)
					ax = tmp21;
					HX_STACK_LINE(855)
					Float tmp22 = (v->y - u->y);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(855)
					ay = tmp22;
				}
				HX_STACK_LINE(857)
				Float bx = ((Float)0.0);		HX_STACK_VAR(bx,"bx");
				HX_STACK_LINE(858)
				Float by = ((Float)0.0);		HX_STACK_VAR(by,"by");
				HX_STACK_LINE(859)
				{
					HX_STACK_LINE(860)
					Float tmp21 = (w->x - v->x);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(860)
					bx = tmp21;
					HX_STACK_LINE(861)
					Float tmp22 = (w->y - v->y);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(861)
					by = tmp22;
				}
				HX_STACK_LINE(863)
				Float tmp21 = (by * ax);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(863)
				Float tmp22 = (bx * ay);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(863)
				Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(863)
				Float crs = tmp23;		HX_STACK_VAR(crs,"crs");
				HX_STACK_LINE(864)
				Float tmp24 = (crs * crs);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(864)
				Float tmp25 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(864)
				Float tmp26 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(864)
				Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(864)
				bool tmp28 = (tmp24 >= tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(864)
				if ((tmp28)){
					HX_STACK_LINE(865)
					pre1 = pre1->next;
				}
				else{
					HX_STACK_LINE(868)
					::zpp_nape::geom::ZPP_Vec2 tmp29 = cur1;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(868)
					this->cleanup_lvert(tmp29);
					HX_STACK_LINE(869)
					::zpp_nape::geom::ZPP_Vec2 tmp30 = this->lverts;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(869)
					bool tmp31 = (pre1->next == null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(869)
					::zpp_nape::geom::ZPP_Vec2 tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(869)
					if ((tmp31)){
						HX_STACK_LINE(869)
						tmp32 = null();
					}
					else{
						HX_STACK_LINE(869)
						tmp32 = pre1;
					}
					HX_STACK_LINE(869)
					tmp30->erase(tmp32);
					HX_STACK_LINE(870)
					removed = true;
					HX_STACK_LINE(871)
					pre1 = pre1->next;
				}
			}
			HX_STACK_LINE(875)
			bool tmp15 = removed;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(875)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(842)
			if ((tmp16)){
				HX_STACK_LINE(842)
				break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,splice_collinear_real,(void))

Void ZPP_Polygon_obj::reverse_vertices( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","reverse_vertices",0xfec98f7d,"zpp_nape.shape.ZPP_Polygon.reverse_vertices","zpp_nape/shape/Polygon.hx",877,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(878)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->lverts;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(878)
		tmp->reverse();
		HX_STACK_LINE(879)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = this->gverts;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(879)
		tmp1->reverse();
		HX_STACK_LINE(880)
		::zpp_nape::util::ZNPList_ZPP_Edge tmp2 = this->edges;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(880)
		tmp2->reverse();
		HX_STACK_LINE(881)
		::zpp_nape::util::ZNPList_ZPP_Edge tmp3 = this->edges;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(881)
		int tmp4 = this->edgeCnt;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(881)
		int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(881)
		::zpp_nape::util::ZNPNode_ZPP_Edge tmp6 = tmp3->iterator_at(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(881)
		::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp6;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(882)
		::zpp_nape::util::ZNPList_ZPP_Edge tmp7 = this->edges;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(882)
		::zpp_nape::shape::ZPP_Edge tmp8 = tmp7->pop_unsafe();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(882)
		::zpp_nape::shape::ZPP_Edge elem = tmp8;		HX_STACK_VAR(elem,"elem");
		HX_STACK_LINE(883)
		::zpp_nape::util::ZNPList_ZPP_Edge tmp9 = this->edges;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(883)
		::zpp_nape::util::ZNPNode_ZPP_Edge tmp10 = ite;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(883)
		::zpp_nape::shape::ZPP_Edge tmp11 = elem;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(883)
		tmp9->insert(tmp10,tmp11);
		HX_STACK_LINE(884)
		bool tmp12 = this->reverse_flag;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(884)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(884)
		this->reverse_flag = tmp13;
		HX_STACK_LINE(885)
		::nape::geom::Vec2List tmp14 = this->wrap_lverts;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(885)
		bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(885)
		if ((tmp15)){
			HX_STACK_LINE(885)
			bool tmp16 = this->reverse_flag;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(885)
			::nape::geom::Vec2List tmp17 = this->wrap_lverts;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(885)
			tmp17->zpp_inner->reverse_flag = tmp16;
		}
		HX_STACK_LINE(886)
		::nape::geom::Vec2List tmp16 = this->wrap_gverts;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(886)
		bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(886)
		if ((tmp17)){
			HX_STACK_LINE(886)
			bool tmp18 = this->reverse_flag;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(886)
			::nape::geom::Vec2List tmp19 = this->wrap_gverts;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(886)
			tmp19->zpp_inner->reverse_flag = tmp18;
		}
		HX_STACK_LINE(887)
		::nape::shape::EdgeList tmp18 = this->wrap_edges;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(887)
		bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(887)
		if ((tmp19)){
			HX_STACK_LINE(887)
			bool tmp20 = this->reverse_flag;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(887)
			::nape::shape::EdgeList tmp21 = this->wrap_edges;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(887)
			tmp21->zpp_inner->reverse_flag = tmp20;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,reverse_vertices,(void))

Void ZPP_Polygon_obj::validate_laxi( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","validate_laxi",0xdf5b8a48,"zpp_nape.shape.ZPP_Polygon.validate_laxi","zpp_nape/shape/Polygon.hx",889,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(890)
		bool tmp = this->zip_laxi;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(890)
		if ((tmp)){
			HX_STACK_LINE(891)
			this->zip_laxi = false;
			HX_STACK_LINE(892)
			this->validate_lverts();
			HX_STACK_LINE(893)
			::zpp_nape::util::ZNPList_ZPP_Edge tmp1 = this->edges;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(893)
			::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp1->head;		HX_STACK_VAR(ite,"ite");
			HX_STACK_LINE(894)
			{
				HX_STACK_LINE(895)
				::zpp_nape::geom::ZPP_Vec2 tmp2 = this->lverts;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(895)
				::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp2->next;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(896)
				::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
				HX_STACK_LINE(897)
				cx_ite = cx_ite->next;
				HX_STACK_LINE(898)
				while((true)){
					HX_STACK_LINE(898)
					bool tmp3 = (cx_ite != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(898)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(898)
					if ((tmp4)){
						HX_STACK_LINE(898)
						break;
					}
					HX_STACK_LINE(899)
					::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(900)
					{
						HX_STACK_LINE(901)
						::zpp_nape::shape::ZPP_Edge edge = ite->elt;		HX_STACK_VAR(edge,"edge");
						HX_STACK_LINE(902)
						ite = ite->next;
						HX_STACK_LINE(903)
						edge->lp0 = u;
						HX_STACK_LINE(904)
						edge->lp1 = v;
						HX_STACK_LINE(905)
						Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
						HX_STACK_LINE(906)
						Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
						HX_STACK_LINE(907)
						{
							HX_STACK_LINE(908)
							Float tmp5 = (u->x - v->x);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(908)
							dx = tmp5;
							HX_STACK_LINE(909)
							Float tmp6 = (u->y - v->y);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(909)
							dy = tmp6;
						}
						HX_STACK_LINE(911)
						Float tmp5 = (dx * dx);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(911)
						Float tmp6 = (dy * dy);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(911)
						Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(911)
						Float tmp8 = ::Math_obj::sqrt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(911)
						Float l = tmp8;		HX_STACK_VAR(l,"l");
						HX_STACK_LINE(912)
						edge->length = l;
						HX_STACK_LINE(913)
						{
							HX_STACK_LINE(914)
							Float tmp9 = (Float(((Float)1.0)) / Float(l));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(914)
							Float t = tmp9;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(923)
							hx::MultEq(dx,t);
							HX_STACK_LINE(924)
							hx::MultEq(dy,t);
						}
						HX_STACK_LINE(926)
						{
							HX_STACK_LINE(927)
							Float t = dx;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(928)
							Float tmp9 = dy;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(928)
							Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(928)
							dx = tmp10;
							HX_STACK_LINE(929)
							dy = t;
						}
						HX_STACK_LINE(931)
						Float tmp9 = (dx * u->x);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(931)
						Float tmp10 = (dy * u->y);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(931)
						Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(931)
						edge->lprojection = tmp11;
						HX_STACK_LINE(932)
						{
							HX_STACK_LINE(933)
							edge->lnormx = dx;
							HX_STACK_LINE(934)
							edge->lnormy = dy;
							HX_STACK_LINE(943)
							{
							}
						}
						HX_STACK_LINE(952)
						bool tmp12 = (edge->wrap_lnorm != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(952)
						if ((tmp12)){
							HX_STACK_LINE(953)
							::zpp_nape::geom::ZPP_Vec2 tmp13 = edge->wrap_lnorm->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(953)
							tmp13->x = dx;
							HX_STACK_LINE(954)
							::zpp_nape::geom::ZPP_Vec2 tmp14 = edge->wrap_lnorm->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(954)
							tmp14->y = dy;
							HX_STACK_LINE(963)
							{
							}
						}
					}
					HX_STACK_LINE(973)
					u = v;
					HX_STACK_LINE(974)
					cx_ite = cx_ite->next;
				}
				HX_STACK_LINE(976)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = this->lverts;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(976)
				::zpp_nape::geom::ZPP_Vec2 v = tmp3->next;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(977)
				{
					HX_STACK_LINE(978)
					::zpp_nape::shape::ZPP_Edge edge = ite->elt;		HX_STACK_VAR(edge,"edge");
					HX_STACK_LINE(979)
					ite = ite->next;
					HX_STACK_LINE(980)
					edge->lp0 = u;
					HX_STACK_LINE(981)
					edge->lp1 = v;
					HX_STACK_LINE(982)
					Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(983)
					Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(984)
					{
						HX_STACK_LINE(985)
						Float tmp4 = (u->x - v->x);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(985)
						dx = tmp4;
						HX_STACK_LINE(986)
						Float tmp5 = (u->y - v->y);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(986)
						dy = tmp5;
					}
					HX_STACK_LINE(988)
					Float tmp4 = (dx * dx);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(988)
					Float tmp5 = (dy * dy);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(988)
					Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(988)
					Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(988)
					Float l = tmp7;		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(989)
					edge->length = l;
					HX_STACK_LINE(990)
					{
						HX_STACK_LINE(991)
						Float tmp8 = (Float(((Float)1.0)) / Float(l));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(991)
						Float t = tmp8;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1000)
						hx::MultEq(dx,t);
						HX_STACK_LINE(1001)
						hx::MultEq(dy,t);
					}
					HX_STACK_LINE(1003)
					{
						HX_STACK_LINE(1004)
						Float t = dx;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1005)
						Float tmp8 = dy;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1005)
						Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1005)
						dx = tmp9;
						HX_STACK_LINE(1006)
						dy = t;
					}
					HX_STACK_LINE(1008)
					Float tmp8 = (dx * u->x);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1008)
					Float tmp9 = (dy * u->y);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1008)
					Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1008)
					edge->lprojection = tmp10;
					HX_STACK_LINE(1009)
					{
						HX_STACK_LINE(1010)
						edge->lnormx = dx;
						HX_STACK_LINE(1011)
						edge->lnormy = dy;
						HX_STACK_LINE(1020)
						{
						}
					}
					HX_STACK_LINE(1029)
					bool tmp11 = (edge->wrap_lnorm != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1029)
					if ((tmp11)){
						HX_STACK_LINE(1030)
						::zpp_nape::geom::ZPP_Vec2 tmp12 = edge->wrap_lnorm->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1030)
						tmp12->x = dx;
						HX_STACK_LINE(1031)
						::zpp_nape::geom::ZPP_Vec2 tmp13 = edge->wrap_lnorm->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1031)
						tmp13->y = dy;
						HX_STACK_LINE(1040)
						{
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,validate_laxi,(void))

Void ZPP_Polygon_obj::validate_gverts( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","validate_gverts",0x202238fd,"zpp_nape.shape.ZPP_Polygon.validate_gverts","zpp_nape/shape/Polygon.hx",1055,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1056)
		bool tmp = this->zip_gverts;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1056)
		if ((tmp)){
			HX_STACK_LINE(1057)
			::zpp_nape::phys::ZPP_Body tmp1 = this->body;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1057)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1057)
			if ((tmp2)){
				HX_STACK_LINE(1058)
				this->zip_gverts = false;
				HX_STACK_LINE(1059)
				this->validate_lverts();
				HX_STACK_LINE(1060)
				{
					HX_STACK_LINE(1060)
					::zpp_nape::phys::ZPP_Body tmp3 = this->body;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1060)
					::zpp_nape::phys::ZPP_Body _this = tmp3;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1060)
					bool tmp4 = _this->zip_axis;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1060)
					if ((tmp4)){
						HX_STACK_LINE(1060)
						_this->zip_axis = false;
						HX_STACK_LINE(1060)
						{
							HX_STACK_LINE(1060)
							Float tmp5 = _this->rot;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1060)
							Float tmp6 = ::Math_obj::sin(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1060)
							_this->axisx = tmp6;
							HX_STACK_LINE(1060)
							Float tmp7 = _this->rot;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1060)
							Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1060)
							_this->axisy = tmp8;
							HX_STACK_LINE(1060)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(1061)
				::zpp_nape::geom::ZPP_Vec2 tmp3 = this->lverts;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1061)
				::zpp_nape::geom::ZPP_Vec2 li = tmp3->next;		HX_STACK_VAR(li,"li");
				HX_STACK_LINE(1062)
				{
					HX_STACK_LINE(1063)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = this->gverts;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1063)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp4->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(1064)
					while((true)){
						HX_STACK_LINE(1064)
						bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1064)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1064)
						if ((tmp6)){
							HX_STACK_LINE(1064)
							break;
						}
						HX_STACK_LINE(1065)
						::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(1066)
						{
							HX_STACK_LINE(1067)
							::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
							HX_STACK_LINE(1068)
							li = li->next;
							HX_STACK_LINE(1069)
							{
								HX_STACK_LINE(1070)
								::zpp_nape::phys::ZPP_Body tmp7 = this->body;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1070)
								Float tmp8 = tmp7->posx;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1070)
								::zpp_nape::phys::ZPP_Body tmp9 = this->body;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1070)
								Float tmp10 = tmp9->axisy;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1070)
								Float tmp11 = l->x;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1070)
								Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1070)
								::zpp_nape::phys::ZPP_Body tmp13 = this->body;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1070)
								Float tmp14 = tmp13->axisx;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1070)
								Float tmp15 = l->y;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1070)
								Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1070)
								Float tmp17 = (tmp12 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1070)
								Float tmp18 = (tmp8 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1070)
								g->x = tmp18;
								HX_STACK_LINE(1071)
								::zpp_nape::phys::ZPP_Body tmp19 = this->body;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1071)
								Float tmp20 = tmp19->posy;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1071)
								Float tmp21 = l->x;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1071)
								::zpp_nape::phys::ZPP_Body tmp22 = this->body;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1071)
								Float tmp23 = tmp22->axisx;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1071)
								Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1071)
								Float tmp25 = l->y;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1071)
								::zpp_nape::phys::ZPP_Body tmp26 = this->body;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1071)
								Float tmp27 = tmp26->axisy;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1071)
								Float tmp28 = (tmp25 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1071)
								Float tmp29 = (tmp24 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1071)
								Float tmp30 = (tmp20 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1071)
								g->y = tmp30;
							}
						}
						HX_STACK_LINE(1074)
						cx_ite = cx_ite->next;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,validate_gverts,(void))

Void ZPP_Polygon_obj::validate_gaxi( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","validate_gaxi",0xdc0d792d,"zpp_nape.shape.ZPP_Polygon.validate_gaxi","zpp_nape/shape/Polygon.hx",1081,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1082)
		bool tmp = this->zip_gaxi;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1082)
		if ((tmp)){
			HX_STACK_LINE(1083)
			::zpp_nape::phys::ZPP_Body tmp1 = this->body;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1083)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1083)
			if ((tmp2)){
				HX_STACK_LINE(1084)
				this->zip_gaxi = false;
				HX_STACK_LINE(1085)
				this->validate_laxi();
				HX_STACK_LINE(1086)
				{
					HX_STACK_LINE(1086)
					::zpp_nape::phys::ZPP_Body tmp3 = this->body;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1086)
					::zpp_nape::phys::ZPP_Body _this = tmp3;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1086)
					bool tmp4 = _this->zip_axis;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1086)
					if ((tmp4)){
						HX_STACK_LINE(1086)
						_this->zip_axis = false;
						HX_STACK_LINE(1086)
						{
							HX_STACK_LINE(1086)
							Float tmp5 = _this->rot;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1086)
							Float tmp6 = ::Math_obj::sin(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1086)
							_this->axisx = tmp6;
							HX_STACK_LINE(1086)
							Float tmp7 = _this->rot;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1086)
							Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1086)
							_this->axisy = tmp8;
							HX_STACK_LINE(1086)
							Dynamic();
						}
					}
				}
				HX_STACK_LINE(1087)
				{
					HX_STACK_LINE(1087)
					bool tmp3 = this->zip_gverts;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1087)
					if ((tmp3)){
						HX_STACK_LINE(1087)
						::zpp_nape::phys::ZPP_Body tmp4 = this->body;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1087)
						bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1087)
						if ((tmp5)){
							HX_STACK_LINE(1087)
							this->zip_gverts = false;
							HX_STACK_LINE(1087)
							this->validate_lverts();
							HX_STACK_LINE(1087)
							{
								HX_STACK_LINE(1087)
								::zpp_nape::phys::ZPP_Body tmp6 = this->body;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(1087)
								::zpp_nape::phys::ZPP_Body _this = tmp6;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1087)
								bool tmp7 = _this->zip_axis;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1087)
								if ((tmp7)){
									HX_STACK_LINE(1087)
									_this->zip_axis = false;
									HX_STACK_LINE(1087)
									{
										HX_STACK_LINE(1087)
										Float tmp8 = _this->rot;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(1087)
										Float tmp9 = ::Math_obj::sin(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(1087)
										_this->axisx = tmp9;
										HX_STACK_LINE(1087)
										Float tmp10 = _this->rot;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(1087)
										Float tmp11 = ::Math_obj::cos(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1087)
										_this->axisy = tmp11;
										HX_STACK_LINE(1087)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(1087)
							::zpp_nape::geom::ZPP_Vec2 tmp6 = this->lverts;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1087)
							::zpp_nape::geom::ZPP_Vec2 li = tmp6->next;		HX_STACK_VAR(li,"li");
							HX_STACK_LINE(1087)
							{
								HX_STACK_LINE(1087)
								::zpp_nape::geom::ZPP_Vec2 tmp7 = this->gverts;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1087)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp7->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(1087)
								while((true)){
									HX_STACK_LINE(1087)
									bool tmp8 = (cx_ite != null());		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(1087)
									bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1087)
									if ((tmp9)){
										HX_STACK_LINE(1087)
										break;
									}
									HX_STACK_LINE(1087)
									::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(1087)
									{
										HX_STACK_LINE(1087)
										::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
										HX_STACK_LINE(1087)
										li = li->next;
										HX_STACK_LINE(1087)
										{
											HX_STACK_LINE(1087)
											::zpp_nape::phys::ZPP_Body tmp10 = this->body;		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(1087)
											Float tmp11 = tmp10->posx;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(1087)
											::zpp_nape::phys::ZPP_Body tmp12 = this->body;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(1087)
											Float tmp13 = tmp12->axisy;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1087)
											Float tmp14 = l->x;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1087)
											Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1087)
											::zpp_nape::phys::ZPP_Body tmp16 = this->body;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1087)
											Float tmp17 = tmp16->axisx;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1087)
											Float tmp18 = l->y;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1087)
											Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1087)
											Float tmp20 = (tmp15 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1087)
											Float tmp21 = (tmp11 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1087)
											g->x = tmp21;
											HX_STACK_LINE(1087)
											::zpp_nape::phys::ZPP_Body tmp22 = this->body;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1087)
											Float tmp23 = tmp22->posy;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(1087)
											Float tmp24 = l->x;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(1087)
											::zpp_nape::phys::ZPP_Body tmp25 = this->body;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(1087)
											Float tmp26 = tmp25->axisx;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(1087)
											Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1087)
											Float tmp28 = l->y;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1087)
											::zpp_nape::phys::ZPP_Body tmp29 = this->body;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1087)
											Float tmp30 = tmp29->axisy;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1087)
											Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1087)
											Float tmp32 = (tmp27 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1087)
											Float tmp33 = (tmp23 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(1087)
											g->y = tmp33;
										}
									}
									HX_STACK_LINE(1087)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
				}
				HX_STACK_LINE(1088)
				::zpp_nape::util::ZNPList_ZPP_Edge tmp3 = this->edges;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1088)
				::zpp_nape::util::ZNPNode_ZPP_Edge ite = tmp3->head;		HX_STACK_VAR(ite,"ite");
				HX_STACK_LINE(1089)
				{
					HX_STACK_LINE(1090)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = this->gverts;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1090)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp4->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(1091)
					::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
					HX_STACK_LINE(1092)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(1093)
					while((true)){
						HX_STACK_LINE(1093)
						bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1093)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1093)
						if ((tmp6)){
							HX_STACK_LINE(1093)
							break;
						}
						HX_STACK_LINE(1094)
						::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(1095)
						{
							HX_STACK_LINE(1096)
							::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(1097)
							ite = ite->next;
							HX_STACK_LINE(1098)
							e->gp0 = u;
							HX_STACK_LINE(1099)
							e->gp1 = v;
							HX_STACK_LINE(1100)
							{
								HX_STACK_LINE(1101)
								::zpp_nape::phys::ZPP_Body tmp7 = this->body;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1101)
								Float tmp8 = tmp7->axisy;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1101)
								Float tmp9 = e->lnormx;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1101)
								Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1101)
								::zpp_nape::phys::ZPP_Body tmp11 = this->body;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1101)
								Float tmp12 = tmp11->axisx;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1101)
								Float tmp13 = e->lnormy;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1101)
								Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1101)
								Float tmp15 = (tmp10 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1101)
								e->gnormx = tmp15;
								HX_STACK_LINE(1102)
								Float tmp16 = e->lnormx;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1102)
								::zpp_nape::phys::ZPP_Body tmp17 = this->body;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1102)
								Float tmp18 = tmp17->axisx;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1102)
								Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1102)
								Float tmp20 = e->lnormy;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1102)
								::zpp_nape::phys::ZPP_Body tmp21 = this->body;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1102)
								Float tmp22 = tmp21->axisy;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1102)
								Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1102)
								Float tmp24 = (tmp19 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1102)
								e->gnormy = tmp24;
							}
							HX_STACK_LINE(1104)
							::zpp_nape::phys::ZPP_Body tmp7 = this->body;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1104)
							Float tmp8 = tmp7->posx;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1104)
							Float tmp9 = e->gnormx;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1104)
							Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1104)
							::zpp_nape::phys::ZPP_Body tmp11 = this->body;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1104)
							Float tmp12 = tmp11->posy;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1104)
							Float tmp13 = e->gnormy;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1104)
							Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1104)
							Float tmp15 = (tmp10 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1104)
							Float tmp16 = e->lprojection;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1104)
							Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1104)
							e->gprojection = tmp17;
							HX_STACK_LINE(1105)
							bool tmp18 = (e->wrap_gnorm != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1105)
							if ((tmp18)){
								HX_STACK_LINE(1106)
								::zpp_nape::geom::ZPP_Vec2 tmp19 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1106)
								tmp19->x = e->gnormx;
								HX_STACK_LINE(1107)
								::zpp_nape::geom::ZPP_Vec2 tmp20 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1107)
								tmp20->y = e->gnormy;
								HX_STACK_LINE(1116)
								{
								}
							}
							HX_STACK_LINE(1125)
							Float tmp19 = e->gp0->y;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1125)
							Float tmp20 = e->gnormx;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1125)
							Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1125)
							Float tmp22 = e->gp0->x;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1125)
							Float tmp23 = e->gnormy;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1125)
							Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1125)
							Float tmp25 = (tmp21 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1125)
							e->tp0 = tmp25;
							HX_STACK_LINE(1126)
							Float tmp26 = e->gp1->y;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1126)
							Float tmp27 = e->gnormx;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1126)
							Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1126)
							Float tmp29 = e->gp1->x;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1126)
							Float tmp30 = e->gnormy;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1126)
							Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1126)
							Float tmp32 = (tmp28 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1126)
							e->tp1 = tmp32;
						}
						HX_STACK_LINE(1128)
						u = v;
						HX_STACK_LINE(1129)
						cx_ite = cx_ite->next;
					}
					HX_STACK_LINE(1131)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = this->gverts;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1131)
					::zpp_nape::geom::ZPP_Vec2 v = tmp5->next;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1132)
					{
						HX_STACK_LINE(1133)
						::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(1134)
						ite = ite->next;
						HX_STACK_LINE(1135)
						e->gp0 = u;
						HX_STACK_LINE(1136)
						e->gp1 = v;
						HX_STACK_LINE(1137)
						{
							HX_STACK_LINE(1138)
							::zpp_nape::phys::ZPP_Body tmp6 = this->body;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1138)
							Float tmp7 = tmp6->axisy;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1138)
							Float tmp8 = e->lnormx;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1138)
							Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1138)
							::zpp_nape::phys::ZPP_Body tmp10 = this->body;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1138)
							Float tmp11 = tmp10->axisx;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1138)
							Float tmp12 = e->lnormy;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1138)
							Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1138)
							Float tmp14 = (tmp9 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1138)
							e->gnormx = tmp14;
							HX_STACK_LINE(1139)
							Float tmp15 = e->lnormx;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1139)
							::zpp_nape::phys::ZPP_Body tmp16 = this->body;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1139)
							Float tmp17 = tmp16->axisx;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1139)
							Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1139)
							Float tmp19 = e->lnormy;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1139)
							::zpp_nape::phys::ZPP_Body tmp20 = this->body;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1139)
							Float tmp21 = tmp20->axisy;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1139)
							Float tmp22 = (tmp19 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1139)
							Float tmp23 = (tmp18 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1139)
							e->gnormy = tmp23;
						}
						HX_STACK_LINE(1141)
						::zpp_nape::phys::ZPP_Body tmp6 = this->body;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1141)
						Float tmp7 = tmp6->posx;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1141)
						Float tmp8 = e->gnormx;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1141)
						Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1141)
						::zpp_nape::phys::ZPP_Body tmp10 = this->body;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1141)
						Float tmp11 = tmp10->posy;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1141)
						Float tmp12 = e->gnormy;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1141)
						Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1141)
						Float tmp14 = (tmp9 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1141)
						Float tmp15 = e->lprojection;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1141)
						Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1141)
						e->gprojection = tmp16;
						HX_STACK_LINE(1142)
						bool tmp17 = (e->wrap_gnorm != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1142)
						if ((tmp17)){
							HX_STACK_LINE(1143)
							::zpp_nape::geom::ZPP_Vec2 tmp18 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1143)
							tmp18->x = e->gnormx;
							HX_STACK_LINE(1144)
							::zpp_nape::geom::ZPP_Vec2 tmp19 = e->wrap_gnorm->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1144)
							tmp19->y = e->gnormy;
							HX_STACK_LINE(1153)
							{
							}
						}
						HX_STACK_LINE(1162)
						Float tmp18 = e->gp0->y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1162)
						Float tmp19 = e->gnormx;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1162)
						Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1162)
						Float tmp21 = e->gp0->x;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1162)
						Float tmp22 = e->gnormy;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1162)
						Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1162)
						Float tmp24 = (tmp20 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1162)
						e->tp0 = tmp24;
						HX_STACK_LINE(1163)
						Float tmp25 = e->gp1->y;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1163)
						Float tmp26 = e->gnormx;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1163)
						Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1163)
						Float tmp28 = e->gp1->x;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1163)
						Float tmp29 = e->gnormy;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1163)
						Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1163)
						Float tmp31 = (tmp27 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1163)
						e->tp1 = tmp31;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,validate_gaxi,(void))

Void ZPP_Polygon_obj::__validate_aabb( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","__validate_aabb",0x34bf4f62,"zpp_nape.shape.ZPP_Polygon.__validate_aabb","zpp_nape/shape/Polygon.hx",1171,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1172)
		{
			HX_STACK_LINE(1172)
			bool tmp = this->zip_gverts;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1172)
			if ((tmp)){
				HX_STACK_LINE(1172)
				::zpp_nape::phys::ZPP_Body tmp1 = this->body;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1172)
				bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1172)
				if ((tmp2)){
					HX_STACK_LINE(1172)
					this->zip_gverts = false;
					HX_STACK_LINE(1172)
					this->validate_lverts();
					HX_STACK_LINE(1172)
					{
						HX_STACK_LINE(1172)
						::zpp_nape::phys::ZPP_Body tmp3 = this->body;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1172)
						::zpp_nape::phys::ZPP_Body _this = tmp3;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1172)
						bool tmp4 = _this->zip_axis;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1172)
						if ((tmp4)){
							HX_STACK_LINE(1172)
							_this->zip_axis = false;
							HX_STACK_LINE(1172)
							{
								HX_STACK_LINE(1172)
								Float tmp5 = _this->rot;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(1172)
								Float tmp6 = ::Math_obj::sin(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(1172)
								_this->axisx = tmp6;
								HX_STACK_LINE(1172)
								Float tmp7 = _this->rot;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1172)
								Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1172)
								_this->axisy = tmp8;
								HX_STACK_LINE(1172)
								Dynamic();
							}
						}
					}
					HX_STACK_LINE(1172)
					::zpp_nape::geom::ZPP_Vec2 tmp3 = this->lverts;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1172)
					::zpp_nape::geom::ZPP_Vec2 li = tmp3->next;		HX_STACK_VAR(li,"li");
					HX_STACK_LINE(1172)
					{
						HX_STACK_LINE(1172)
						::zpp_nape::geom::ZPP_Vec2 tmp4 = this->gverts;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1172)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp4->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(1172)
						while((true)){
							HX_STACK_LINE(1172)
							bool tmp5 = (cx_ite != null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1172)
							bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1172)
							if ((tmp6)){
								HX_STACK_LINE(1172)
								break;
							}
							HX_STACK_LINE(1172)
							::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(1172)
							{
								HX_STACK_LINE(1172)
								::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
								HX_STACK_LINE(1172)
								li = li->next;
								HX_STACK_LINE(1172)
								{
									HX_STACK_LINE(1172)
									::zpp_nape::phys::ZPP_Body tmp7 = this->body;		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(1172)
									Float tmp8 = tmp7->posx;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(1172)
									::zpp_nape::phys::ZPP_Body tmp9 = this->body;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1172)
									Float tmp10 = tmp9->axisy;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1172)
									Float tmp11 = l->x;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1172)
									Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1172)
									::zpp_nape::phys::ZPP_Body tmp13 = this->body;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1172)
									Float tmp14 = tmp13->axisx;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1172)
									Float tmp15 = l->y;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1172)
									Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1172)
									Float tmp17 = (tmp12 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1172)
									Float tmp18 = (tmp8 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1172)
									g->x = tmp18;
									HX_STACK_LINE(1172)
									::zpp_nape::phys::ZPP_Body tmp19 = this->body;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1172)
									Float tmp20 = tmp19->posy;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1172)
									Float tmp21 = l->x;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1172)
									::zpp_nape::phys::ZPP_Body tmp22 = this->body;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1172)
									Float tmp23 = tmp22->axisx;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1172)
									Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1172)
									Float tmp25 = l->y;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1172)
									::zpp_nape::phys::ZPP_Body tmp26 = this->body;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1172)
									Float tmp27 = tmp26->axisy;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1172)
									Float tmp28 = (tmp25 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1172)
									Float tmp29 = (tmp24 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1172)
									Float tmp30 = (tmp20 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1172)
									g->y = tmp30;
								}
							}
							HX_STACK_LINE(1172)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
		}
		HX_STACK_LINE(1174)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->lverts;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1174)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = tmp->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1174)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1174)
		if ((tmp2)){
			HX_STACK_LINE(1174)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful bounds","\xda","\x28","\x5b","\xf5"));
		}
		HX_STACK_LINE(1176)
		::zpp_nape::geom::ZPP_Vec2 tmp3 = this->gverts;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1176)
		::zpp_nape::geom::ZPP_Vec2 p0 = tmp3->next;		HX_STACK_VAR(p0,"p0");
		HX_STACK_LINE(1177)
		{
			HX_STACK_LINE(1178)
			::zpp_nape::geom::ZPP_AABB tmp4 = this->aabb;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1178)
			tmp4->minx = p0->x;
			HX_STACK_LINE(1179)
			::zpp_nape::geom::ZPP_AABB tmp5 = this->aabb;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1179)
			tmp5->miny = p0->y;
			HX_STACK_LINE(1188)
			{
			}
		}
		HX_STACK_LINE(1197)
		{
			HX_STACK_LINE(1198)
			::zpp_nape::geom::ZPP_AABB tmp4 = this->aabb;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1198)
			tmp4->maxx = p0->x;
			HX_STACK_LINE(1199)
			::zpp_nape::geom::ZPP_AABB tmp5 = this->aabb;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1199)
			tmp5->maxy = p0->y;
			HX_STACK_LINE(1208)
			{
			}
		}
		HX_STACK_LINE(1217)
		{
			HX_STACK_LINE(1218)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = this->gverts;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1218)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = tmp4->next->next;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1218)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp5;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1219)
			while((true)){
				HX_STACK_LINE(1219)
				bool tmp6 = (cx_ite != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1219)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1219)
				if ((tmp7)){
					HX_STACK_LINE(1219)
					break;
				}
				HX_STACK_LINE(1220)
				::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1221)
				{
					HX_STACK_LINE(1222)
					Float tmp8 = p->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1222)
					::zpp_nape::geom::ZPP_AABB tmp9 = this->aabb;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1222)
					Float tmp10 = tmp9->minx;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1222)
					bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1222)
					if ((tmp11)){
						HX_STACK_LINE(1222)
						::zpp_nape::geom::ZPP_AABB tmp12 = this->aabb;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1222)
						tmp12->minx = p->x;
					}
					HX_STACK_LINE(1223)
					Float tmp12 = p->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1223)
					::zpp_nape::geom::ZPP_AABB tmp13 = this->aabb;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1223)
					Float tmp14 = tmp13->maxx;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1223)
					bool tmp15 = (tmp12 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1223)
					if ((tmp15)){
						HX_STACK_LINE(1223)
						::zpp_nape::geom::ZPP_AABB tmp16 = this->aabb;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1223)
						tmp16->maxx = p->x;
					}
					HX_STACK_LINE(1224)
					Float tmp16 = p->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1224)
					::zpp_nape::geom::ZPP_AABB tmp17 = this->aabb;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1224)
					Float tmp18 = tmp17->miny;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1224)
					bool tmp19 = (tmp16 < tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1224)
					if ((tmp19)){
						HX_STACK_LINE(1224)
						::zpp_nape::geom::ZPP_AABB tmp20 = this->aabb;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1224)
						tmp20->miny = p->y;
					}
					HX_STACK_LINE(1225)
					Float tmp20 = p->y;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1225)
					::zpp_nape::geom::ZPP_AABB tmp21 = this->aabb;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1225)
					Float tmp22 = tmp21->maxy;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1225)
					bool tmp23 = (tmp20 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1225)
					if ((tmp23)){
						HX_STACK_LINE(1225)
						::zpp_nape::geom::ZPP_AABB tmp24 = this->aabb;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1225)
						tmp24->maxy = p->y;
					}
				}
				HX_STACK_LINE(1227)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,__validate_aabb,(void))

Void ZPP_Polygon_obj::_force_validate_aabb( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","_force_validate_aabb",0x369e419d,"zpp_nape.shape.ZPP_Polygon._force_validate_aabb","zpp_nape/shape/Polygon.hx",1233,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1234)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->lverts;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1234)
		::zpp_nape::geom::ZPP_Vec2 li = tmp->next;		HX_STACK_VAR(li,"li");
		HX_STACK_LINE(1235)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = this->gverts;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1235)
		::zpp_nape::geom::ZPP_Vec2 p0 = tmp1->next;		HX_STACK_VAR(p0,"p0");
		HX_STACK_LINE(1236)
		::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1237)
		li = li->next;
		HX_STACK_LINE(1238)
		{
			HX_STACK_LINE(1239)
			::zpp_nape::phys::ZPP_Body tmp2 = this->body;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1239)
			Float tmp3 = tmp2->posx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1239)
			::zpp_nape::phys::ZPP_Body tmp4 = this->body;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1239)
			Float tmp5 = tmp4->axisy;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1239)
			Float tmp6 = l->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1239)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1239)
			::zpp_nape::phys::ZPP_Body tmp8 = this->body;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1239)
			Float tmp9 = tmp8->axisx;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1239)
			Float tmp10 = l->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1239)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1239)
			Float tmp12 = (tmp7 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1239)
			Float tmp13 = (tmp3 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1239)
			p0->x = tmp13;
			HX_STACK_LINE(1240)
			::zpp_nape::phys::ZPP_Body tmp14 = this->body;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1240)
			Float tmp15 = tmp14->posy;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1240)
			Float tmp16 = l->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1240)
			::zpp_nape::phys::ZPP_Body tmp17 = this->body;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1240)
			Float tmp18 = tmp17->axisx;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1240)
			Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1240)
			Float tmp20 = l->y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1240)
			::zpp_nape::phys::ZPP_Body tmp21 = this->body;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1240)
			Float tmp22 = tmp21->axisy;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1240)
			Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1240)
			Float tmp24 = (tmp19 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1240)
			Float tmp25 = (tmp15 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1240)
			p0->y = tmp25;
		}
		HX_STACK_LINE(1242)
		{
			HX_STACK_LINE(1243)
			::zpp_nape::geom::ZPP_AABB tmp2 = this->aabb;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1243)
			tmp2->minx = p0->x;
			HX_STACK_LINE(1244)
			::zpp_nape::geom::ZPP_AABB tmp3 = this->aabb;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1244)
			tmp3->miny = p0->y;
			HX_STACK_LINE(1253)
			{
			}
		}
		HX_STACK_LINE(1262)
		{
			HX_STACK_LINE(1263)
			::zpp_nape::geom::ZPP_AABB tmp2 = this->aabb;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1263)
			tmp2->maxx = p0->x;
			HX_STACK_LINE(1264)
			::zpp_nape::geom::ZPP_AABB tmp3 = this->aabb;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1264)
			tmp3->maxy = p0->y;
			HX_STACK_LINE(1273)
			{
			}
		}
		HX_STACK_LINE(1282)
		{
			HX_STACK_LINE(1283)
			::zpp_nape::geom::ZPP_Vec2 tmp2 = this->gverts;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1283)
			::zpp_nape::geom::ZPP_Vec2 tmp3 = tmp2->next->next;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1283)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp3;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1284)
			while((true)){
				HX_STACK_LINE(1284)
				bool tmp4 = (cx_ite != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1284)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1284)
				if ((tmp5)){
					HX_STACK_LINE(1284)
					break;
				}
				HX_STACK_LINE(1285)
				::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1286)
				{
					HX_STACK_LINE(1287)
					::zpp_nape::geom::ZPP_Vec2 l1 = li;		HX_STACK_VAR(l1,"l1");
					HX_STACK_LINE(1288)
					li = li->next;
					HX_STACK_LINE(1289)
					{
						HX_STACK_LINE(1290)
						::zpp_nape::phys::ZPP_Body tmp6 = this->body;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1290)
						Float tmp7 = tmp6->posx;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1290)
						::zpp_nape::phys::ZPP_Body tmp8 = this->body;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1290)
						Float tmp9 = tmp8->axisy;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1290)
						Float tmp10 = l1->x;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1290)
						Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1290)
						::zpp_nape::phys::ZPP_Body tmp12 = this->body;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1290)
						Float tmp13 = tmp12->axisx;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1290)
						Float tmp14 = l1->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1290)
						Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1290)
						Float tmp16 = (tmp11 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1290)
						Float tmp17 = (tmp7 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1290)
						p->x = tmp17;
						HX_STACK_LINE(1291)
						::zpp_nape::phys::ZPP_Body tmp18 = this->body;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1291)
						Float tmp19 = tmp18->posy;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1291)
						Float tmp20 = l1->x;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1291)
						::zpp_nape::phys::ZPP_Body tmp21 = this->body;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1291)
						Float tmp22 = tmp21->axisx;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1291)
						Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1291)
						Float tmp24 = l1->y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1291)
						::zpp_nape::phys::ZPP_Body tmp25 = this->body;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1291)
						Float tmp26 = tmp25->axisy;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1291)
						Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1291)
						Float tmp28 = (tmp23 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1291)
						Float tmp29 = (tmp19 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1291)
						p->y = tmp29;
					}
					HX_STACK_LINE(1293)
					Float tmp6 = p->x;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1293)
					::zpp_nape::geom::ZPP_AABB tmp7 = this->aabb;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1293)
					Float tmp8 = tmp7->minx;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1293)
					bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1293)
					if ((tmp9)){
						HX_STACK_LINE(1293)
						::zpp_nape::geom::ZPP_AABB tmp10 = this->aabb;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1293)
						tmp10->minx = p->x;
					}
					HX_STACK_LINE(1294)
					Float tmp10 = p->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1294)
					::zpp_nape::geom::ZPP_AABB tmp11 = this->aabb;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1294)
					Float tmp12 = tmp11->maxx;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1294)
					bool tmp13 = (tmp10 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1294)
					if ((tmp13)){
						HX_STACK_LINE(1294)
						::zpp_nape::geom::ZPP_AABB tmp14 = this->aabb;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1294)
						tmp14->maxx = p->x;
					}
					HX_STACK_LINE(1295)
					Float tmp14 = p->y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1295)
					::zpp_nape::geom::ZPP_AABB tmp15 = this->aabb;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1295)
					Float tmp16 = tmp15->miny;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1295)
					bool tmp17 = (tmp14 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1295)
					if ((tmp17)){
						HX_STACK_LINE(1295)
						::zpp_nape::geom::ZPP_AABB tmp18 = this->aabb;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1295)
						tmp18->miny = p->y;
					}
					HX_STACK_LINE(1296)
					Float tmp18 = p->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1296)
					::zpp_nape::geom::ZPP_AABB tmp19 = this->aabb;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1296)
					Float tmp20 = tmp19->maxy;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1296)
					bool tmp21 = (tmp18 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1296)
					if ((tmp21)){
						HX_STACK_LINE(1296)
						::zpp_nape::geom::ZPP_AABB tmp22 = this->aabb;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1296)
						tmp22->maxy = p->y;
					}
				}
				HX_STACK_LINE(1298)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,_force_validate_aabb,(void))

Void ZPP_Polygon_obj::__validate_sweepRadius( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","__validate_sweepRadius",0xb90ce2dc,"zpp_nape.shape.ZPP_Polygon.__validate_sweepRadius","zpp_nape/shape/Polygon.hx",1302,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1303)
		Float maxRadius = ((Float)0.0);		HX_STACK_VAR(maxRadius,"maxRadius");
		HX_STACK_LINE(1304)
		Float minRadius = ((Float)0.0);		HX_STACK_VAR(minRadius,"minRadius");
		HX_STACK_LINE(1305)
		this->validate_laxi();
		HX_STACK_LINE(1306)
		{
			HX_STACK_LINE(1307)
			::zpp_nape::geom::ZPP_Vec2 tmp = this->lverts;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1307)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1308)
			while((true)){
				HX_STACK_LINE(1308)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1308)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1308)
				if ((tmp2)){
					HX_STACK_LINE(1308)
					break;
				}
				HX_STACK_LINE(1309)
				::zpp_nape::geom::ZPP_Vec2 x = cx_ite;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1310)
				{
					HX_STACK_LINE(1311)
					Float tmp3 = (x->x * x->x);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1311)
					Float tmp4 = (x->y * x->y);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1311)
					Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1311)
					Float r = tmp5;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(1312)
					bool tmp6 = (r > maxRadius);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1312)
					if ((tmp6)){
						HX_STACK_LINE(1313)
						maxRadius = r;
					}
				}
				HX_STACK_LINE(1316)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(1319)
		{
			HX_STACK_LINE(1320)
			::zpp_nape::util::ZNPList_ZPP_Edge tmp = this->edges;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1320)
			::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = tmp->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1321)
			while((true)){
				HX_STACK_LINE(1321)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1321)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1321)
				if ((tmp2)){
					HX_STACK_LINE(1321)
					break;
				}
				HX_STACK_LINE(1322)
				::zpp_nape::shape::ZPP_Edge e = cx_ite->elt;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(1323)
				{
					HX_STACK_LINE(1324)
					bool tmp3 = (e->lprojection < minRadius);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1324)
					if ((tmp3)){
						HX_STACK_LINE(1325)
						minRadius = e->lprojection;
						HX_STACK_LINE(1326)
						bool tmp4 = (minRadius < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1326)
						if ((tmp4)){
							HX_STACK_LINE(1326)
							break;
						}
					}
				}
				HX_STACK_LINE(1329)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(1332)
		bool tmp = (minRadius < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1332)
		if ((tmp)){
			HX_STACK_LINE(1332)
			minRadius = (int)0;
		}
		HX_STACK_LINE(1333)
		Float tmp1 = maxRadius;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1333)
		Float tmp2 = ::Math_obj::sqrt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1333)
		this->sweepRadius = tmp2;
		HX_STACK_LINE(1334)
		Float tmp3 = this->sweepRadius;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1334)
		Float tmp4 = minRadius;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1334)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1334)
		this->sweepCoef = tmp5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,__validate_sweepRadius,(void))

Void ZPP_Polygon_obj::__validate_area_inertia( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","__validate_area_inertia",0x7eb6a9ca,"zpp_nape.shape.ZPP_Polygon.__validate_area_inertia","zpp_nape/shape/Polygon.hx",1336,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1337)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->lverts;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1337)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = tmp->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1337)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1337)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1337)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1337)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1337)
		if ((tmp4)){
			HX_STACK_LINE(1337)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = this->lverts;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1337)
			::zpp_nape::geom::ZPP_Vec2 tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1337)
			::zpp_nape::geom::ZPP_Vec2 tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1337)
			::zpp_nape::geom::ZPP_Vec2 tmp9 = tmp8->next->next;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1337)
			::zpp_nape::geom::ZPP_Vec2 tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1337)
			::zpp_nape::geom::ZPP_Vec2 tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1337)
			tmp5 = (tmp11 == null());
		}
		else{
			HX_STACK_LINE(1337)
			tmp5 = true;
		}
		HX_STACK_LINE(1337)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1337)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1337)
		if ((tmp6)){
			HX_STACK_LINE(1337)
			::zpp_nape::geom::ZPP_Vec2 tmp8 = this->lverts;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1337)
			::zpp_nape::geom::ZPP_Vec2 tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1337)
			::zpp_nape::geom::ZPP_Vec2 tmp10 = tmp9->next->next;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1337)
			::zpp_nape::geom::ZPP_Vec2 tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1337)
			::zpp_nape::geom::ZPP_Vec2 tmp12 = tmp11->next;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1337)
			tmp7 = (tmp12 == null());
		}
		else{
			HX_STACK_LINE(1337)
			tmp7 = true;
		}
		HX_STACK_LINE(1337)
		if ((tmp7)){
			HX_STACK_LINE(1338)
			this->area = (int)0;
			HX_STACK_LINE(1339)
			this->inertia = (int)0;
		}
		else{
			HX_STACK_LINE(1342)
			this->area = ((Float)0.0);
			HX_STACK_LINE(1343)
			Float s1 = ((Float)0.0);		HX_STACK_VAR(s1,"s1");
			HX_STACK_LINE(1344)
			Float s2 = ((Float)0.0);		HX_STACK_VAR(s2,"s2");
			HX_STACK_LINE(1345)
			{
				HX_STACK_LINE(1346)
				::zpp_nape::geom::ZPP_Vec2 tmp8 = this->lverts;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1346)
				::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp8->next;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1347)
				::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
				HX_STACK_LINE(1348)
				cx_ite = cx_ite->next;
				HX_STACK_LINE(1349)
				::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(1350)
				cx_ite = cx_ite->next;
				HX_STACK_LINE(1351)
				while((true)){
					HX_STACK_LINE(1351)
					bool tmp9 = (cx_ite != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1351)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1351)
					if ((tmp10)){
						HX_STACK_LINE(1351)
						break;
					}
					HX_STACK_LINE(1352)
					::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(1353)
					{
						HX_STACK_LINE(1354)
						Float tmp11 = (v->y * u->x);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1354)
						Float tmp12 = (v->x * u->y);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1354)
						Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1354)
						Float a = tmp13;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(1355)
						Float tmp14 = (v->x * v->x);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1355)
						Float tmp15 = (v->y * v->y);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1355)
						Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1355)
						Float tmp17 = (v->x * u->x);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1355)
						Float tmp18 = (v->y * u->y);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1355)
						Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1355)
						Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1355)
						Float tmp21 = (u->x * u->x);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1355)
						Float tmp22 = (u->y * u->y);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1355)
						Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1355)
						Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1355)
						Float b = tmp24;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(1356)
						Float tmp25 = (a * b);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1356)
						hx::AddEq(s1,tmp25);
						HX_STACK_LINE(1357)
						hx::AddEq(s2,a);
						HX_STACK_LINE(1358)
						Float tmp26 = v->x;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1358)
						Float tmp27 = (w->y - u->y);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1358)
						Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1358)
						hx::AddEq(this->area,tmp28);
					}
					HX_STACK_LINE(1360)
					u = v;
					HX_STACK_LINE(1361)
					v = w;
					HX_STACK_LINE(1362)
					cx_ite = cx_ite->next;
				}
				HX_STACK_LINE(1364)
				::zpp_nape::geom::ZPP_Vec2 tmp9 = this->lverts;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1364)
				cx_ite = tmp9->next;
				HX_STACK_LINE(1365)
				::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(1366)
				{
					HX_STACK_LINE(1367)
					Float tmp10 = (v->y * u->x);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1367)
					Float tmp11 = (v->x * u->y);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1367)
					Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1367)
					Float a = tmp12;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(1368)
					Float tmp13 = (v->x * v->x);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1368)
					Float tmp14 = (v->y * v->y);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1368)
					Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1368)
					Float tmp16 = (v->x * u->x);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1368)
					Float tmp17 = (v->y * u->y);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1368)
					Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1368)
					Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1368)
					Float tmp20 = (u->x * u->x);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1368)
					Float tmp21 = (u->y * u->y);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1368)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1368)
					Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1368)
					Float b = tmp23;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(1369)
					Float tmp24 = (a * b);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1369)
					hx::AddEq(s1,tmp24);
					HX_STACK_LINE(1370)
					hx::AddEq(s2,a);
					HX_STACK_LINE(1371)
					Float tmp25 = v->x;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1371)
					Float tmp26 = (w->y - u->y);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1371)
					Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1371)
					hx::AddEq(this->area,tmp27);
				}
				HX_STACK_LINE(1373)
				u = v;
				HX_STACK_LINE(1374)
				v = w;
				HX_STACK_LINE(1375)
				cx_ite = cx_ite->next;
				HX_STACK_LINE(1376)
				::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
				HX_STACK_LINE(1377)
				{
					HX_STACK_LINE(1378)
					Float tmp10 = (v->y * u->x);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1378)
					Float tmp11 = (v->x * u->y);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1378)
					Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1378)
					Float a = tmp12;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(1379)
					Float tmp13 = (v->x * v->x);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1379)
					Float tmp14 = (v->y * v->y);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1379)
					Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1379)
					Float tmp16 = (v->x * u->x);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1379)
					Float tmp17 = (v->y * u->y);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1379)
					Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1379)
					Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1379)
					Float tmp20 = (u->x * u->x);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1379)
					Float tmp21 = (u->y * u->y);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1379)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1379)
					Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1379)
					Float b = tmp23;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(1380)
					Float tmp24 = (a * b);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1380)
					hx::AddEq(s1,tmp24);
					HX_STACK_LINE(1381)
					hx::AddEq(s2,a);
					HX_STACK_LINE(1382)
					Float tmp25 = v->x;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1382)
					Float tmp26 = (w1->y - u->y);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1382)
					Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1382)
					hx::AddEq(this->area,tmp27);
				}
			}
			HX_STACK_LINE(1385)
			Float tmp8 = s1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1385)
			Float tmp9 = ((int)6 * s2);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1385)
			Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1385)
			this->inertia = tmp10;
			HX_STACK_LINE(1386)
			hx::MultEq(this->area,((Float)0.5));
			HX_STACK_LINE(1387)
			Float tmp11 = this->area;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1387)
			bool tmp12 = (tmp11 < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1387)
			if ((tmp12)){
				HX_STACK_LINE(1388)
				Float tmp13 = this->area;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1388)
				Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1388)
				this->area = tmp14;
				HX_STACK_LINE(1389)
				this->reverse_vertices();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,__validate_area_inertia,(void))

Void ZPP_Polygon_obj::__validate_angDrag( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","__validate_angDrag",0x856a006c,"zpp_nape.shape.ZPP_Polygon.__validate_angDrag","zpp_nape/shape/Polygon.hx",1393,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1395)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->lverts;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1395)
		int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1395)
		bool tmp2 = (tmp1 < (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1395)
		if ((tmp2)){
			HX_STACK_LINE(1395)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Polygon's with less than 3 vertices have no meaningful angDrag","\xc5","\x16","\x29","\x69"));
		}
		HX_STACK_LINE(1397)
		this->validate_area_inertia();
		HX_STACK_LINE(1398)
		this->validate_laxi();
		HX_STACK_LINE(1399)
		Float accum = ((Float)0.0);		HX_STACK_VAR(accum,"accum");
		HX_STACK_LINE(1400)
		::zpp_nape::util::ZNPList_ZPP_Edge tmp3 = this->edges;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1400)
		::zpp_nape::util::ZNPNode_ZPP_Edge ei = tmp3->head;		HX_STACK_VAR(ei,"ei");
		HX_STACK_LINE(1401)
		Float perim = ((Float)0.0);		HX_STACK_VAR(perim,"perim");
		HX_STACK_LINE(1402)
		{
			HX_STACK_LINE(1403)
			bool cx_cont = true;		HX_STACK_VAR(cx_cont,"cx_cont");
			HX_STACK_LINE(1404)
			::zpp_nape::geom::ZPP_Vec2 tmp4 = this->lverts;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1404)
			::zpp_nape::geom::ZPP_Vec2 cx_itei = tmp4->next;		HX_STACK_VAR(cx_itei,"cx_itei");
			HX_STACK_LINE(1405)
			::zpp_nape::geom::ZPP_Vec2 u = cx_itei;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(1406)
			::zpp_nape::geom::ZPP_Vec2 cx_itej = cx_itei->next;		HX_STACK_VAR(cx_itej,"cx_itej");
			HX_STACK_LINE(1407)
			while((true)){
				HX_STACK_LINE(1407)
				bool tmp5 = (cx_itej != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1407)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1407)
				if ((tmp6)){
					HX_STACK_LINE(1407)
					break;
				}
				HX_STACK_LINE(1408)
				::zpp_nape::geom::ZPP_Vec2 v = cx_itej;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(1409)
				{
					HX_STACK_LINE(1410)
					::zpp_nape::shape::ZPP_Edge edge = ei->elt;		HX_STACK_VAR(edge,"edge");
					HX_STACK_LINE(1411)
					ei = ei->next;
					HX_STACK_LINE(1412)
					hx::AddEq(perim,edge->length);
					HX_STACK_LINE(1413)
					Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(1414)
					Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(1415)
					{
						HX_STACK_LINE(1416)
						Float tmp7 = (v->x - u->x);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1416)
						dx = tmp7;
						HX_STACK_LINE(1417)
						Float tmp8 = (v->y - u->y);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1417)
						dy = tmp8;
					}
					HX_STACK_LINE(1419)
					Float tmp7 = edge->length;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1419)
					Float tmp8 = ::nape::Config_obj::fluidAngularDragFriction;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1419)
					Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1419)
					::zpp_nape::phys::ZPP_Material tmp10 = this->material;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1419)
					Float tmp11 = tmp10->dynamicFriction;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1419)
					Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1419)
					Float tmp13 = edge->lprojection;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1419)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1419)
					Float tmp15 = edge->lprojection;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1419)
					Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1419)
					hx::AddEq(accum,tmp16);
					HX_STACK_LINE(1420)
					Float tmp17 = (u->y * edge->lnormx);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1420)
					Float tmp18 = (u->x * edge->lnormy);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1420)
					Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1420)
					Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1420)
					Float tmp21 = (dy * edge->lnormx);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1420)
					Float tmp22 = (dx * edge->lnormy);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1420)
					Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1420)
					Float tmp24 = (Float(tmp20) / Float(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1420)
					Float t = tmp24;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1421)
					bool tmp25 = (t > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1421)
					if ((tmp25)){
						HX_STACK_LINE(1422)
						bool tmp26 = (t > (int)1);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1422)
						Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1422)
						if ((tmp26)){
							HX_STACK_LINE(1422)
							tmp27 = (int)1;
						}
						else{
							HX_STACK_LINE(1422)
							tmp27 = t;
						}
						HX_STACK_LINE(1422)
						Float ta = tmp27;		HX_STACK_VAR(ta,"ta");
						HX_STACK_LINE(1423)
						Float cx = ((Float)0.0);		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(1424)
						Float cy = ((Float)0.0);		HX_STACK_VAR(cy,"cy");
						HX_STACK_LINE(1425)
						{
							HX_STACK_LINE(1426)
							cx = u->x;
							HX_STACK_LINE(1427)
							cy = u->y;
							HX_STACK_LINE(1436)
							{
							}
						}
						HX_STACK_LINE(1445)
						{
							HX_STACK_LINE(1446)
							Float t1 = ta;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(1455)
							Float tmp28 = (dx * t1);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1455)
							hx::AddEq(cx,tmp28);
							HX_STACK_LINE(1456)
							Float tmp29 = (dy * t1);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1456)
							hx::AddEq(cy,tmp29);
						}
						HX_STACK_LINE(1458)
						Float tmp28 = (edge->lnormy * u->x);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1458)
						Float tmp29 = (edge->lnormx * u->y);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1458)
						Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1458)
						Float dota = tmp30;		HX_STACK_VAR(dota,"dota");
						HX_STACK_LINE(1459)
						Float tmp31 = (edge->lnormy * cx);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1459)
						Float tmp32 = (edge->lnormx * cy);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1459)
						Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1459)
						Float dotb = tmp33;		HX_STACK_VAR(dotb,"dotb");
						HX_STACK_LINE(1460)
						Float tmp34 = (dotb * dotb);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1460)
						Float tmp35 = dotb;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1460)
						Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1460)
						Float tmp37 = (dota * dota);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1460)
						Float tmp38 = dota;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1460)
						Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1460)
						Float tmp40 = (tmp36 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1460)
						Float tmp41 = (dotb - dota);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1460)
						Float tmp42 = ((int)3 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1460)
						Float tmp43 = (Float(tmp40) / Float(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1460)
						Float dots = tmp43;		HX_STACK_VAR(dots,"dots");
						HX_STACK_LINE(1461)
						Float tmp44 = (dots * ta);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1461)
						Float tmp45 = edge->length;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(1461)
						Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(1461)
						Float tmp47 = ::nape::Config_obj::fluidAngularDrag;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(1461)
						Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(1461)
						hx::AddEq(accum,tmp48);
					}
					HX_STACK_LINE(1463)
					bool tmp26 = (t < (int)1);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1463)
					if ((tmp26)){
						HX_STACK_LINE(1464)
						bool tmp27 = (t < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1464)
						Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1464)
						if ((tmp27)){
							HX_STACK_LINE(1464)
							tmp28 = (int)0;
						}
						else{
							HX_STACK_LINE(1464)
							tmp28 = t;
						}
						HX_STACK_LINE(1464)
						Float tb = tmp28;		HX_STACK_VAR(tb,"tb");
						HX_STACK_LINE(1465)
						Float cx = ((Float)0.0);		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(1466)
						Float cy = ((Float)0.0);		HX_STACK_VAR(cy,"cy");
						HX_STACK_LINE(1467)
						{
							HX_STACK_LINE(1468)
							cx = u->x;
							HX_STACK_LINE(1469)
							cy = u->y;
							HX_STACK_LINE(1478)
							{
							}
						}
						HX_STACK_LINE(1487)
						{
							HX_STACK_LINE(1488)
							Float t1 = tb;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(1497)
							Float tmp29 = (dx * t1);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1497)
							hx::AddEq(cx,tmp29);
							HX_STACK_LINE(1498)
							Float tmp30 = (dy * t1);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1498)
							hx::AddEq(cy,tmp30);
						}
						HX_STACK_LINE(1500)
						Float tmp29 = (edge->lnormy * cx);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1500)
						Float tmp30 = (edge->lnormx * cy);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1500)
						Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1500)
						Float dota = tmp31;		HX_STACK_VAR(dota,"dota");
						HX_STACK_LINE(1501)
						Float tmp32 = (edge->lnormy * v->x);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1501)
						Float tmp33 = (edge->lnormx * v->y);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1501)
						Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1501)
						Float dotb = tmp34;		HX_STACK_VAR(dotb,"dotb");
						HX_STACK_LINE(1502)
						Float tmp35 = (dotb * dotb);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1502)
						Float tmp36 = dotb;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1502)
						Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1502)
						Float tmp38 = (dota * dota);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1502)
						Float tmp39 = dota;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1502)
						Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1502)
						Float tmp41 = (tmp37 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1502)
						Float tmp42 = (dotb - dota);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1502)
						Float tmp43 = ((int)3 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1502)
						Float tmp44 = (Float(tmp41) / Float(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1502)
						Float dots = tmp44;		HX_STACK_VAR(dots,"dots");
						HX_STACK_LINE(1503)
						Float tmp45 = dots;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(1503)
						Float tmp46 = ::nape::Config_obj::fluidVacuumDrag;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(1503)
						Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(1503)
						Float tmp48 = ((int)1 - tb);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(1503)
						Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(1503)
						Float tmp50 = edge->length;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(1503)
						Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1503)
						Float tmp52 = ::nape::Config_obj::fluidAngularDrag;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1503)
						Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1503)
						hx::AddEq(accum,tmp53);
					}
				}
				HX_STACK_LINE(1506)
				{
					HX_STACK_LINE(1507)
					cx_itei = cx_itej;
					HX_STACK_LINE(1508)
					u = v;
					HX_STACK_LINE(1509)
					cx_itej = cx_itej->next;
				}
			}
			HX_STACK_LINE(1512)
			bool tmp5 = cx_cont;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1512)
			if ((tmp5)){
				HX_STACK_LINE(1513)
				while((true)){
					HX_STACK_LINE(1514)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = this->lverts;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1514)
					cx_itej = tmp6->next;
					HX_STACK_LINE(1515)
					::zpp_nape::geom::ZPP_Vec2 v = cx_itej;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1516)
					{
						HX_STACK_LINE(1517)
						::zpp_nape::shape::ZPP_Edge edge = ei->elt;		HX_STACK_VAR(edge,"edge");
						HX_STACK_LINE(1518)
						ei = ei->next;
						HX_STACK_LINE(1519)
						hx::AddEq(perim,edge->length);
						HX_STACK_LINE(1520)
						Float dx = ((Float)0.0);		HX_STACK_VAR(dx,"dx");
						HX_STACK_LINE(1521)
						Float dy = ((Float)0.0);		HX_STACK_VAR(dy,"dy");
						HX_STACK_LINE(1522)
						{
							HX_STACK_LINE(1523)
							Float tmp7 = (v->x - u->x);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1523)
							dx = tmp7;
							HX_STACK_LINE(1524)
							Float tmp8 = (v->y - u->y);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1524)
							dy = tmp8;
						}
						HX_STACK_LINE(1526)
						Float tmp7 = edge->length;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1526)
						Float tmp8 = ::nape::Config_obj::fluidAngularDragFriction;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1526)
						Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1526)
						::zpp_nape::phys::ZPP_Material tmp10 = this->material;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1526)
						Float tmp11 = tmp10->dynamicFriction;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1526)
						Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1526)
						Float tmp13 = edge->lprojection;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1526)
						Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1526)
						Float tmp15 = edge->lprojection;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1526)
						Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1526)
						hx::AddEq(accum,tmp16);
						HX_STACK_LINE(1527)
						Float tmp17 = (u->y * edge->lnormx);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1527)
						Float tmp18 = (u->x * edge->lnormy);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1527)
						Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1527)
						Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1527)
						Float tmp21 = (dy * edge->lnormx);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1527)
						Float tmp22 = (dx * edge->lnormy);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1527)
						Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1527)
						Float tmp24 = (Float(tmp20) / Float(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1527)
						Float t = tmp24;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1528)
						bool tmp25 = (t > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1528)
						if ((tmp25)){
							HX_STACK_LINE(1529)
							bool tmp26 = (t > (int)1);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1529)
							Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1529)
							if ((tmp26)){
								HX_STACK_LINE(1529)
								tmp27 = (int)1;
							}
							else{
								HX_STACK_LINE(1529)
								tmp27 = t;
							}
							HX_STACK_LINE(1529)
							Float ta = tmp27;		HX_STACK_VAR(ta,"ta");
							HX_STACK_LINE(1530)
							Float cx = ((Float)0.0);		HX_STACK_VAR(cx,"cx");
							HX_STACK_LINE(1531)
							Float cy = ((Float)0.0);		HX_STACK_VAR(cy,"cy");
							HX_STACK_LINE(1532)
							{
								HX_STACK_LINE(1533)
								cx = u->x;
								HX_STACK_LINE(1534)
								cy = u->y;
								HX_STACK_LINE(1543)
								{
								}
							}
							HX_STACK_LINE(1552)
							{
								HX_STACK_LINE(1553)
								Float t1 = ta;		HX_STACK_VAR(t1,"t1");
								HX_STACK_LINE(1562)
								Float tmp28 = (dx * t1);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1562)
								hx::AddEq(cx,tmp28);
								HX_STACK_LINE(1563)
								Float tmp29 = (dy * t1);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1563)
								hx::AddEq(cy,tmp29);
							}
							HX_STACK_LINE(1565)
							Float tmp28 = (edge->lnormy * u->x);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1565)
							Float tmp29 = (edge->lnormx * u->y);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1565)
							Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1565)
							Float dota = tmp30;		HX_STACK_VAR(dota,"dota");
							HX_STACK_LINE(1566)
							Float tmp31 = (edge->lnormy * cx);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1566)
							Float tmp32 = (edge->lnormx * cy);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1566)
							Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1566)
							Float dotb = tmp33;		HX_STACK_VAR(dotb,"dotb");
							HX_STACK_LINE(1567)
							Float tmp34 = (dotb * dotb);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1567)
							Float tmp35 = dotb;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1567)
							Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1567)
							Float tmp37 = (dota * dota);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1567)
							Float tmp38 = dota;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1567)
							Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1567)
							Float tmp40 = (tmp36 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1567)
							Float tmp41 = (dotb - dota);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1567)
							Float tmp42 = ((int)3 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1567)
							Float tmp43 = (Float(tmp40) / Float(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1567)
							Float dots = tmp43;		HX_STACK_VAR(dots,"dots");
							HX_STACK_LINE(1568)
							Float tmp44 = (dots * ta);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1568)
							Float tmp45 = edge->length;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1568)
							Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1568)
							Float tmp47 = ::nape::Config_obj::fluidAngularDrag;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1568)
							Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1568)
							hx::AddEq(accum,tmp48);
						}
						HX_STACK_LINE(1570)
						bool tmp26 = (t < (int)1);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1570)
						if ((tmp26)){
							HX_STACK_LINE(1571)
							bool tmp27 = (t < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1571)
							Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1571)
							if ((tmp27)){
								HX_STACK_LINE(1571)
								tmp28 = (int)0;
							}
							else{
								HX_STACK_LINE(1571)
								tmp28 = t;
							}
							HX_STACK_LINE(1571)
							Float tb = tmp28;		HX_STACK_VAR(tb,"tb");
							HX_STACK_LINE(1572)
							Float cx = ((Float)0.0);		HX_STACK_VAR(cx,"cx");
							HX_STACK_LINE(1573)
							Float cy = ((Float)0.0);		HX_STACK_VAR(cy,"cy");
							HX_STACK_LINE(1574)
							{
								HX_STACK_LINE(1575)
								cx = u->x;
								HX_STACK_LINE(1576)
								cy = u->y;
								HX_STACK_LINE(1585)
								{
								}
							}
							HX_STACK_LINE(1594)
							{
								HX_STACK_LINE(1595)
								Float t1 = tb;		HX_STACK_VAR(t1,"t1");
								HX_STACK_LINE(1604)
								Float tmp29 = (dx * t1);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1604)
								hx::AddEq(cx,tmp29);
								HX_STACK_LINE(1605)
								Float tmp30 = (dy * t1);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1605)
								hx::AddEq(cy,tmp30);
							}
							HX_STACK_LINE(1607)
							Float tmp29 = (edge->lnormy * cx);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1607)
							Float tmp30 = (edge->lnormx * cy);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1607)
							Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1607)
							Float dota = tmp31;		HX_STACK_VAR(dota,"dota");
							HX_STACK_LINE(1608)
							Float tmp32 = (edge->lnormy * v->x);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1608)
							Float tmp33 = (edge->lnormx * v->y);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1608)
							Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1608)
							Float dotb = tmp34;		HX_STACK_VAR(dotb,"dotb");
							HX_STACK_LINE(1609)
							Float tmp35 = (dotb * dotb);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1609)
							Float tmp36 = dotb;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1609)
							Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1609)
							Float tmp38 = (dota * dota);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1609)
							Float tmp39 = dota;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1609)
							Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1609)
							Float tmp41 = (tmp37 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1609)
							Float tmp42 = (dotb - dota);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1609)
							Float tmp43 = ((int)3 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1609)
							Float tmp44 = (Float(tmp41) / Float(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1609)
							Float dots = tmp44;		HX_STACK_VAR(dots,"dots");
							HX_STACK_LINE(1610)
							Float tmp45 = dots;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1610)
							Float tmp46 = ::nape::Config_obj::fluidVacuumDrag;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1610)
							Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1610)
							Float tmp48 = ((int)1 - tb);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1610)
							Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1610)
							Float tmp50 = edge->length;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1610)
							Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1610)
							Float tmp52 = ::nape::Config_obj::fluidAngularDrag;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1610)
							Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1610)
							hx::AddEq(accum,tmp53);
						}
					}
					HX_STACK_LINE(1614)
					bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1513)
					if ((tmp7)){
						HX_STACK_LINE(1513)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(1617)
		Float tmp4 = accum;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1617)
		Float tmp5 = this->inertia;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1617)
		Float tmp6 = perim;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1617)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1617)
		Float tmp8 = (Float(tmp4) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1617)
		this->angDrag = tmp8;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,__validate_angDrag,(void))

Void ZPP_Polygon_obj::__validate_localCOM( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","__validate_localCOM",0xeb39fd58,"zpp_nape.shape.ZPP_Polygon.__validate_localCOM","zpp_nape/shape/Polygon.hx",1621,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1623)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->lverts;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1623)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = tmp->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1623)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1623)
		if ((tmp2)){
			HX_STACK_LINE(1623)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
		}
		HX_STACK_LINE(1625)
		::zpp_nape::geom::ZPP_Vec2 tmp3 = this->lverts;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1625)
		::zpp_nape::geom::ZPP_Vec2 tmp4 = tmp3->next->next;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1625)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1625)
		if ((tmp5)){
			HX_STACK_LINE(1626)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = this->lverts;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1626)
			Float tmp7 = tmp6->next->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1626)
			this->localCOMx = tmp7;
			HX_STACK_LINE(1627)
			::zpp_nape::geom::ZPP_Vec2 tmp8 = this->lverts;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1627)
			Float tmp9 = tmp8->next->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1627)
			this->localCOMy = tmp9;
			HX_STACK_LINE(1636)
			{
			}
		}
		else{
			HX_STACK_LINE(1645)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = this->lverts;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1645)
			::zpp_nape::geom::ZPP_Vec2 tmp7 = tmp6->next->next;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1645)
			::zpp_nape::geom::ZPP_Vec2 tmp8 = tmp7->next;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1645)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1645)
			if ((tmp9)){
				HX_STACK_LINE(1646)
				{
					HX_STACK_LINE(1647)
					::zpp_nape::geom::ZPP_Vec2 tmp10 = this->lverts;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1647)
					Float tmp11 = tmp10->next->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1647)
					this->localCOMx = tmp11;
					HX_STACK_LINE(1648)
					::zpp_nape::geom::ZPP_Vec2 tmp12 = this->lverts;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1648)
					Float tmp13 = tmp12->next->y;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1648)
					this->localCOMy = tmp13;
					HX_STACK_LINE(1657)
					{
					}
				}
				HX_STACK_LINE(1666)
				{
					HX_STACK_LINE(1667)
					Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1676)
					::zpp_nape::geom::ZPP_Vec2 tmp10 = this->lverts;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1676)
					::zpp_nape::geom::ZPP_Vec2 tmp11 = tmp10->next->next;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1676)
					Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1676)
					Float tmp13 = t;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1676)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1676)
					hx::AddEq(this->localCOMx,tmp14);
					HX_STACK_LINE(1677)
					::zpp_nape::geom::ZPP_Vec2 tmp15 = this->lverts;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1677)
					::zpp_nape::geom::ZPP_Vec2 tmp16 = tmp15->next->next;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1677)
					Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1677)
					Float tmp18 = t;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1677)
					Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1677)
					hx::AddEq(this->localCOMy,tmp19);
				}
				HX_STACK_LINE(1679)
				{
					HX_STACK_LINE(1680)
					Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1689)
					hx::MultEq(this->localCOMx,t);
					HX_STACK_LINE(1690)
					hx::MultEq(this->localCOMy,t);
				}
			}
			else{
				HX_STACK_LINE(1694)
				{
					HX_STACK_LINE(1695)
					this->localCOMx = (int)0;
					HX_STACK_LINE(1696)
					this->localCOMy = (int)0;
					HX_STACK_LINE(1705)
					{
					}
				}
				HX_STACK_LINE(1714)
				Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
				HX_STACK_LINE(1715)
				{
					HX_STACK_LINE(1716)
					::zpp_nape::geom::ZPP_Vec2 tmp10 = this->lverts;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1716)
					::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp10->next;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(1717)
					::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
					HX_STACK_LINE(1718)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(1719)
					::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1720)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(1721)
					while((true)){
						HX_STACK_LINE(1721)
						bool tmp11 = (cx_ite != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1721)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1721)
						if ((tmp12)){
							HX_STACK_LINE(1721)
							break;
						}
						HX_STACK_LINE(1722)
						::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
						HX_STACK_LINE(1723)
						{
							HX_STACK_LINE(1724)
							Float tmp13 = v->x;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1724)
							Float tmp14 = (w->y - u->y);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1724)
							Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1724)
							hx::AddEq(area,tmp15);
							HX_STACK_LINE(1725)
							Float tmp16 = (w->y * v->x);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1725)
							Float tmp17 = (w->x * v->y);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1725)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1725)
							Float cf = tmp18;		HX_STACK_VAR(cf,"cf");
							HX_STACK_LINE(1726)
							Float tmp19 = (v->x + w->x);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1726)
							Float tmp20 = cf;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1726)
							Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1726)
							hx::AddEq(this->localCOMx,tmp21);
							HX_STACK_LINE(1727)
							Float tmp22 = (v->y + w->y);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1727)
							Float tmp23 = cf;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1727)
							Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1727)
							hx::AddEq(this->localCOMy,tmp24);
						}
						HX_STACK_LINE(1729)
						u = v;
						HX_STACK_LINE(1730)
						v = w;
						HX_STACK_LINE(1731)
						cx_ite = cx_ite->next;
					}
					HX_STACK_LINE(1733)
					::zpp_nape::geom::ZPP_Vec2 tmp11 = this->lverts;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1733)
					cx_ite = tmp11->next;
					HX_STACK_LINE(1734)
					::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(1735)
					{
						HX_STACK_LINE(1736)
						Float tmp12 = v->x;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1736)
						Float tmp13 = (w->y - u->y);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1736)
						Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1736)
						hx::AddEq(area,tmp14);
						HX_STACK_LINE(1737)
						Float tmp15 = (w->y * v->x);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1737)
						Float tmp16 = (w->x * v->y);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1737)
						Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1737)
						Float cf = tmp17;		HX_STACK_VAR(cf,"cf");
						HX_STACK_LINE(1738)
						Float tmp18 = (v->x + w->x);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1738)
						Float tmp19 = cf;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1738)
						Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1738)
						hx::AddEq(this->localCOMx,tmp20);
						HX_STACK_LINE(1739)
						Float tmp21 = (v->y + w->y);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1739)
						Float tmp22 = cf;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1739)
						Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1739)
						hx::AddEq(this->localCOMy,tmp23);
					}
					HX_STACK_LINE(1741)
					u = v;
					HX_STACK_LINE(1742)
					v = w;
					HX_STACK_LINE(1743)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(1744)
					::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
					HX_STACK_LINE(1745)
					{
						HX_STACK_LINE(1746)
						Float tmp12 = v->x;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1746)
						Float tmp13 = (w1->y - u->y);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1746)
						Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1746)
						hx::AddEq(area,tmp14);
						HX_STACK_LINE(1747)
						Float tmp15 = (w1->y * v->x);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1747)
						Float tmp16 = (w1->x * v->y);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1747)
						Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1747)
						Float cf = tmp17;		HX_STACK_VAR(cf,"cf");
						HX_STACK_LINE(1748)
						Float tmp18 = (v->x + w1->x);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1748)
						Float tmp19 = cf;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1748)
						Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1748)
						hx::AddEq(this->localCOMx,tmp20);
						HX_STACK_LINE(1749)
						Float tmp21 = (v->y + w1->y);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1749)
						Float tmp22 = cf;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1749)
						Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1749)
						hx::AddEq(this->localCOMy,tmp23);
					}
				}
				HX_STACK_LINE(1752)
				Float tmp10 = ((int)3 * area);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1752)
				Float tmp11 = (Float((int)1) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1752)
				area = tmp11;
				HX_STACK_LINE(1753)
				{
					HX_STACK_LINE(1754)
					Float t = area;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1763)
					hx::MultEq(this->localCOMx,t);
					HX_STACK_LINE(1764)
					hx::MultEq(this->localCOMy,t);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,__validate_localCOM,(void))

Void ZPP_Polygon_obj::localCOM_validate( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","localCOM_validate",0xe322ee38,"zpp_nape.shape.ZPP_Polygon.localCOM_validate","zpp_nape/shape/Polygon.hx",1768,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1770)
		::zpp_nape::geom::ZPP_Vec2 tmp = this->lverts;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1770)
		::zpp_nape::geom::ZPP_Vec2 tmp1 = tmp->next;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1770)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1770)
		if ((tmp2)){
			HX_STACK_LINE(1770)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon does not have any meaningful localCOM","\xe0","\x45","\xbc","\x29"));
		}
		HX_STACK_LINE(1772)
		{
			HX_STACK_LINE(1772)
			bool tmp3 = this->zip_localCOM;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1772)
			if ((tmp3)){
				HX_STACK_LINE(1772)
				this->zip_localCOM = false;
				HX_STACK_LINE(1772)
				int tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1772)
				int tmp5 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1772)
				bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1772)
				if ((tmp6)){
					HX_STACK_LINE(1772)
					::zpp_nape::shape::ZPP_Polygon tmp7 = this->polygon;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1772)
					::zpp_nape::shape::ZPP_Polygon _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1772)
					::zpp_nape::geom::ZPP_Vec2 tmp8 = _this->lverts->next;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1772)
					bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1772)
					if ((tmp9)){
						HX_STACK_LINE(1772)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
					}
					HX_STACK_LINE(1772)
					::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1772)
					::zpp_nape::geom::ZPP_Vec2 tmp11 = tmp10->next;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1772)
					bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1772)
					if ((tmp12)){
						HX_STACK_LINE(1772)
						::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1772)
						_this->localCOMx = tmp13->x;
						HX_STACK_LINE(1772)
						::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1772)
						_this->localCOMy = tmp14->y;
						HX_STACK_LINE(1772)
						Dynamic();
					}
					else{
						HX_STACK_LINE(1772)
						::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1772)
						::zpp_nape::geom::ZPP_Vec2 tmp14 = tmp13->next->next;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1772)
						bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1772)
						if ((tmp15)){
							HX_STACK_LINE(1772)
							{
								HX_STACK_LINE(1772)
								::zpp_nape::geom::ZPP_Vec2 tmp16 = _this->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1772)
								_this->localCOMx = tmp16->x;
								HX_STACK_LINE(1772)
								::zpp_nape::geom::ZPP_Vec2 tmp17 = _this->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1772)
								_this->localCOMy = tmp17->y;
								HX_STACK_LINE(1772)
								{
								}
							}
							HX_STACK_LINE(1772)
							{
								HX_STACK_LINE(1772)
								Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1772)
								::zpp_nape::geom::ZPP_Vec2 tmp16 = _this->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1772)
								Float tmp17 = tmp16->next->x;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1772)
								Float tmp18 = t;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1772)
								Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1772)
								hx::AddEq(_this->localCOMx,tmp19);
								HX_STACK_LINE(1772)
								::zpp_nape::geom::ZPP_Vec2 tmp20 = _this->lverts->next;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1772)
								Float tmp21 = tmp20->next->y;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1772)
								Float tmp22 = t;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1772)
								Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1772)
								hx::AddEq(_this->localCOMy,tmp23);
							}
							HX_STACK_LINE(1772)
							{
								HX_STACK_LINE(1772)
								Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1772)
								hx::MultEq(_this->localCOMx,t);
								HX_STACK_LINE(1772)
								hx::MultEq(_this->localCOMy,t);
							}
						}
						else{
							HX_STACK_LINE(1772)
							{
								HX_STACK_LINE(1772)
								_this->localCOMx = (int)0;
								HX_STACK_LINE(1772)
								_this->localCOMy = (int)0;
								HX_STACK_LINE(1772)
								{
								}
							}
							HX_STACK_LINE(1772)
							Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
							HX_STACK_LINE(1772)
							{
								HX_STACK_LINE(1772)
								::zpp_nape::geom::ZPP_Vec2 tmp16 = _this->lverts->next;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1772)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp16;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(1772)
								::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
								HX_STACK_LINE(1772)
								cx_ite = cx_ite->next;
								HX_STACK_LINE(1772)
								::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(1772)
								cx_ite = cx_ite->next;
								HX_STACK_LINE(1772)
								while((true)){
									HX_STACK_LINE(1772)
									bool tmp17 = (cx_ite != null());		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1772)
									bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1772)
									if ((tmp18)){
										HX_STACK_LINE(1772)
										break;
									}
									HX_STACK_LINE(1772)
									::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
									HX_STACK_LINE(1772)
									{
										HX_STACK_LINE(1772)
										Float tmp19 = v->x;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1772)
										Float tmp20 = (w->y - u->y);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1772)
										Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1772)
										hx::AddEq(area,tmp21);
										HX_STACK_LINE(1772)
										Float tmp22 = (w->y * v->x);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1772)
										Float tmp23 = (w->x * v->y);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1772)
										Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1772)
										Float cf = tmp24;		HX_STACK_VAR(cf,"cf");
										HX_STACK_LINE(1772)
										Float tmp25 = (v->x + w->x);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1772)
										Float tmp26 = cf;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1772)
										Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1772)
										hx::AddEq(_this->localCOMx,tmp27);
										HX_STACK_LINE(1772)
										Float tmp28 = (v->y + w->y);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1772)
										Float tmp29 = cf;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1772)
										Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1772)
										hx::AddEq(_this->localCOMy,tmp30);
									}
									HX_STACK_LINE(1772)
									u = v;
									HX_STACK_LINE(1772)
									v = w;
									HX_STACK_LINE(1772)
									cx_ite = cx_ite->next;
								}
								HX_STACK_LINE(1772)
								::zpp_nape::geom::ZPP_Vec2 tmp17 = _this->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1772)
								cx_ite = tmp17;
								HX_STACK_LINE(1772)
								::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
								HX_STACK_LINE(1772)
								{
									HX_STACK_LINE(1772)
									Float tmp18 = v->x;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1772)
									Float tmp19 = (w->y - u->y);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1772)
									Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1772)
									hx::AddEq(area,tmp20);
									HX_STACK_LINE(1772)
									Float tmp21 = (w->y * v->x);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1772)
									Float tmp22 = (w->x * v->y);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1772)
									Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1772)
									Float cf = tmp23;		HX_STACK_VAR(cf,"cf");
									HX_STACK_LINE(1772)
									Float tmp24 = (v->x + w->x);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1772)
									Float tmp25 = cf;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1772)
									Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1772)
									hx::AddEq(_this->localCOMx,tmp26);
									HX_STACK_LINE(1772)
									Float tmp27 = (v->y + w->y);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1772)
									Float tmp28 = cf;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1772)
									Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1772)
									hx::AddEq(_this->localCOMy,tmp29);
								}
								HX_STACK_LINE(1772)
								u = v;
								HX_STACK_LINE(1772)
								v = w;
								HX_STACK_LINE(1772)
								cx_ite = cx_ite->next;
								HX_STACK_LINE(1772)
								::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
								HX_STACK_LINE(1772)
								{
									HX_STACK_LINE(1772)
									Float tmp18 = v->x;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1772)
									Float tmp19 = (w1->y - u->y);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1772)
									Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1772)
									hx::AddEq(area,tmp20);
									HX_STACK_LINE(1772)
									Float tmp21 = (w1->y * v->x);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1772)
									Float tmp22 = (w1->x * v->y);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1772)
									Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1772)
									Float cf = tmp23;		HX_STACK_VAR(cf,"cf");
									HX_STACK_LINE(1772)
									Float tmp24 = (v->x + w1->x);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1772)
									Float tmp25 = cf;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1772)
									Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1772)
									hx::AddEq(_this->localCOMx,tmp26);
									HX_STACK_LINE(1772)
									Float tmp27 = (v->y + w1->y);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1772)
									Float tmp28 = cf;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1772)
									Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1772)
									hx::AddEq(_this->localCOMy,tmp29);
								}
							}
							HX_STACK_LINE(1772)
							Float tmp16 = ((int)3 * area);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1772)
							Float tmp17 = (Float((int)1) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1772)
							area = tmp17;
							HX_STACK_LINE(1772)
							{
								HX_STACK_LINE(1772)
								Float t = area;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1772)
								hx::MultEq(_this->localCOMx,t);
								HX_STACK_LINE(1772)
								hx::MultEq(_this->localCOMy,t);
							}
						}
					}
				}
				HX_STACK_LINE(1772)
				::nape::geom::Vec2 tmp7 = this->wrap_localCOM;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1772)
				bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1772)
				if ((tmp8)){
					HX_STACK_LINE(1772)
					Float tmp9 = this->localCOMx;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1772)
					::nape::geom::Vec2 tmp10 = this->wrap_localCOM;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1772)
					tmp10->zpp_inner->x = tmp9;
					HX_STACK_LINE(1772)
					Float tmp11 = this->localCOMy;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1772)
					::nape::geom::Vec2 tmp12 = this->wrap_localCOM;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1772)
					tmp12->zpp_inner->y = tmp11;
					HX_STACK_LINE(1772)
					{
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,localCOM_validate,(void))

Void ZPP_Polygon_obj::localCOM_invalidate( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","localCOM_invalidate",0xc9a5639d,"zpp_nape.shape.ZPP_Polygon.localCOM_invalidate","zpp_nape/shape/Polygon.hx",1774,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1775)
		{
			HX_STACK_LINE(1775)
			bool tmp = this->zip_localCOM;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1775)
			if ((tmp)){
				HX_STACK_LINE(1775)
				this->zip_localCOM = false;
				HX_STACK_LINE(1775)
				int tmp1 = this->type;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1775)
				int tmp2 = ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1775)
				bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1775)
				if ((tmp3)){
					HX_STACK_LINE(1775)
					::zpp_nape::shape::ZPP_Polygon tmp4 = this->polygon;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1775)
					::zpp_nape::shape::ZPP_Polygon _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1775)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = _this->lverts->next;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1775)
					bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1775)
					if ((tmp6)){
						HX_STACK_LINE(1775)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: An empty polygon has no meaningful localCOM","\x3b","\x8d","\x96","\xf3"));
					}
					HX_STACK_LINE(1775)
					::zpp_nape::geom::ZPP_Vec2 tmp7 = _this->lverts->next;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1775)
					::zpp_nape::geom::ZPP_Vec2 tmp8 = tmp7->next;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1775)
					bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1775)
					if ((tmp9)){
						HX_STACK_LINE(1775)
						::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1775)
						_this->localCOMx = tmp10->x;
						HX_STACK_LINE(1775)
						::zpp_nape::geom::ZPP_Vec2 tmp11 = _this->lverts->next;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1775)
						_this->localCOMy = tmp11->y;
						HX_STACK_LINE(1775)
						Dynamic();
					}
					else{
						HX_STACK_LINE(1775)
						::zpp_nape::geom::ZPP_Vec2 tmp10 = _this->lverts->next;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1775)
						::zpp_nape::geom::ZPP_Vec2 tmp11 = tmp10->next->next;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1775)
						bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1775)
						if ((tmp12)){
							HX_STACK_LINE(1775)
							{
								HX_STACK_LINE(1775)
								::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1775)
								_this->localCOMx = tmp13->x;
								HX_STACK_LINE(1775)
								::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1775)
								_this->localCOMy = tmp14->y;
								HX_STACK_LINE(1775)
								{
								}
							}
							HX_STACK_LINE(1775)
							{
								HX_STACK_LINE(1775)
								Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1775)
								::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1775)
								Float tmp14 = tmp13->next->x;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1775)
								Float tmp15 = t;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1775)
								Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1775)
								hx::AddEq(_this->localCOMx,tmp16);
								HX_STACK_LINE(1775)
								::zpp_nape::geom::ZPP_Vec2 tmp17 = _this->lverts->next;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1775)
								Float tmp18 = tmp17->next->y;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1775)
								Float tmp19 = t;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1775)
								Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1775)
								hx::AddEq(_this->localCOMy,tmp20);
							}
							HX_STACK_LINE(1775)
							{
								HX_STACK_LINE(1775)
								Float t = ((Float)0.5);		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1775)
								hx::MultEq(_this->localCOMx,t);
								HX_STACK_LINE(1775)
								hx::MultEq(_this->localCOMy,t);
							}
						}
						else{
							HX_STACK_LINE(1775)
							{
								HX_STACK_LINE(1775)
								_this->localCOMx = (int)0;
								HX_STACK_LINE(1775)
								_this->localCOMy = (int)0;
								HX_STACK_LINE(1775)
								{
								}
							}
							HX_STACK_LINE(1775)
							Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
							HX_STACK_LINE(1775)
							{
								HX_STACK_LINE(1775)
								::zpp_nape::geom::ZPP_Vec2 tmp13 = _this->lverts->next;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1775)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(1775)
								::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
								HX_STACK_LINE(1775)
								cx_ite = cx_ite->next;
								HX_STACK_LINE(1775)
								::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(1775)
								cx_ite = cx_ite->next;
								HX_STACK_LINE(1775)
								while((true)){
									HX_STACK_LINE(1775)
									bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1775)
									bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1775)
									if ((tmp15)){
										HX_STACK_LINE(1775)
										break;
									}
									HX_STACK_LINE(1775)
									::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
									HX_STACK_LINE(1775)
									{
										HX_STACK_LINE(1775)
										Float tmp16 = v->x;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1775)
										Float tmp17 = (w->y - u->y);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1775)
										Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1775)
										hx::AddEq(area,tmp18);
										HX_STACK_LINE(1775)
										Float tmp19 = (w->y * v->x);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1775)
										Float tmp20 = (w->x * v->y);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1775)
										Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1775)
										Float cf = tmp21;		HX_STACK_VAR(cf,"cf");
										HX_STACK_LINE(1775)
										Float tmp22 = (v->x + w->x);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1775)
										Float tmp23 = cf;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1775)
										Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1775)
										hx::AddEq(_this->localCOMx,tmp24);
										HX_STACK_LINE(1775)
										Float tmp25 = (v->y + w->y);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1775)
										Float tmp26 = cf;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1775)
										Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1775)
										hx::AddEq(_this->localCOMy,tmp27);
									}
									HX_STACK_LINE(1775)
									u = v;
									HX_STACK_LINE(1775)
									v = w;
									HX_STACK_LINE(1775)
									cx_ite = cx_ite->next;
								}
								HX_STACK_LINE(1775)
								::zpp_nape::geom::ZPP_Vec2 tmp14 = _this->lverts->next;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1775)
								cx_ite = tmp14;
								HX_STACK_LINE(1775)
								::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
								HX_STACK_LINE(1775)
								{
									HX_STACK_LINE(1775)
									Float tmp15 = v->x;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1775)
									Float tmp16 = (w->y - u->y);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1775)
									Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1775)
									hx::AddEq(area,tmp17);
									HX_STACK_LINE(1775)
									Float tmp18 = (w->y * v->x);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1775)
									Float tmp19 = (w->x * v->y);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1775)
									Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1775)
									Float cf = tmp20;		HX_STACK_VAR(cf,"cf");
									HX_STACK_LINE(1775)
									Float tmp21 = (v->x + w->x);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1775)
									Float tmp22 = cf;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1775)
									Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1775)
									hx::AddEq(_this->localCOMx,tmp23);
									HX_STACK_LINE(1775)
									Float tmp24 = (v->y + w->y);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1775)
									Float tmp25 = cf;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1775)
									Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1775)
									hx::AddEq(_this->localCOMy,tmp26);
								}
								HX_STACK_LINE(1775)
								u = v;
								HX_STACK_LINE(1775)
								v = w;
								HX_STACK_LINE(1775)
								cx_ite = cx_ite->next;
								HX_STACK_LINE(1775)
								::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
								HX_STACK_LINE(1775)
								{
									HX_STACK_LINE(1775)
									Float tmp15 = v->x;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1775)
									Float tmp16 = (w1->y - u->y);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1775)
									Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1775)
									hx::AddEq(area,tmp17);
									HX_STACK_LINE(1775)
									Float tmp18 = (w1->y * v->x);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1775)
									Float tmp19 = (w1->x * v->y);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1775)
									Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1775)
									Float cf = tmp20;		HX_STACK_VAR(cf,"cf");
									HX_STACK_LINE(1775)
									Float tmp21 = (v->x + w1->x);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1775)
									Float tmp22 = cf;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1775)
									Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1775)
									hx::AddEq(_this->localCOMx,tmp23);
									HX_STACK_LINE(1775)
									Float tmp24 = (v->y + w1->y);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1775)
									Float tmp25 = cf;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1775)
									Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1775)
									hx::AddEq(_this->localCOMy,tmp26);
								}
							}
							HX_STACK_LINE(1775)
							Float tmp13 = ((int)3 * area);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1775)
							Float tmp14 = (Float((int)1) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1775)
							area = tmp14;
							HX_STACK_LINE(1775)
							{
								HX_STACK_LINE(1775)
								Float t = area;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1775)
								hx::MultEq(_this->localCOMx,t);
								HX_STACK_LINE(1775)
								hx::MultEq(_this->localCOMy,t);
							}
						}
					}
				}
				HX_STACK_LINE(1775)
				::nape::geom::Vec2 tmp4 = this->wrap_localCOM;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1775)
				bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1775)
				if ((tmp5)){
					HX_STACK_LINE(1775)
					Float tmp6 = this->localCOMx;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1775)
					::nape::geom::Vec2 tmp7 = this->wrap_localCOM;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1775)
					tmp7->zpp_inner->x = tmp6;
					HX_STACK_LINE(1775)
					Float tmp8 = this->localCOMy;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1775)
					::nape::geom::Vec2 tmp9 = this->wrap_localCOM;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1775)
					tmp9->zpp_inner->y = tmp8;
					HX_STACK_LINE(1775)
					{
					}
				}
			}
		}
		HX_STACK_LINE(1776)
		Float delx = (int)0;		HX_STACK_VAR(delx,"delx");
		HX_STACK_LINE(1777)
		Float dely = (int)0;		HX_STACK_VAR(dely,"dely");
		HX_STACK_LINE(1794)
		{
			HX_STACK_LINE(1795)
			Float tmp = x->x;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1795)
			Float tmp1 = this->localCOMx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1795)
			Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1795)
			delx = tmp2;
			HX_STACK_LINE(1796)
			Float tmp3 = x->y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1796)
			Float tmp4 = this->localCOMy;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1796)
			Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1796)
			dely = tmp5;
		}
		HX_STACK_LINE(1798)
		{
			HX_STACK_LINE(1799)
			::zpp_nape::geom::ZPP_Vec2 tmp = this->lverts;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1799)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1800)
			while((true)){
				HX_STACK_LINE(1800)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1800)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1800)
				if ((tmp2)){
					HX_STACK_LINE(1800)
					break;
				}
				HX_STACK_LINE(1801)
				::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1802)
				{
					HX_STACK_LINE(1803)
					Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1812)
					Float tmp3 = (delx * t);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1812)
					hx::AddEq(p->x,tmp3);
					HX_STACK_LINE(1813)
					Float tmp4 = (dely * t);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1813)
					hx::AddEq(p->y,tmp4);
				}
				HX_STACK_LINE(1815)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(1818)
		this->invalidate_lverts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Polygon_obj,localCOM_invalidate,(void))

Void ZPP_Polygon_obj::setupLocalCOM( ){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","setupLocalCOM",0xdbca874c,"zpp_nape.shape.ZPP_Polygon.setupLocalCOM","zpp_nape/shape/Polygon.hx",1820,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1821)
		::nape::geom::Vec2 tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1821)
		{
			HX_STACK_LINE(1821)
			Float tmp1 = this->localCOMx;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1821)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1821)
			Float tmp2 = this->localCOMy;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1821)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1821)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(1821)
			bool tmp3 = (x != x);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1821)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1821)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1821)
			if ((tmp4)){
				HX_STACK_LINE(1821)
				tmp5 = (y != y);
			}
			else{
				HX_STACK_LINE(1821)
				tmp5 = true;
			}
			HX_STACK_LINE(1821)
			if ((tmp5)){
				HX_STACK_LINE(1821)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(1821)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1821)
			{
				HX_STACK_LINE(1821)
				::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1821)
				bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1821)
				if ((tmp7)){
					HX_STACK_LINE(1821)
					::nape::geom::Vec2 tmp8 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1821)
					ret = tmp8;
				}
				else{
					HX_STACK_LINE(1821)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1821)
					ret = tmp8;
					HX_STACK_LINE(1821)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1821)
					ret->zpp_pool = null();
					HX_STACK_LINE(1821)
					ret->zpp_disp = false;
					HX_STACK_LINE(1821)
					::nape::geom::Vec2 tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1821)
					::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1821)
					bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1821)
					if ((tmp11)){
						HX_STACK_LINE(1821)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(1821)
			bool tmp6 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1821)
			if ((tmp6)){
				HX_STACK_LINE(1821)
				::zpp_nape::geom::ZPP_Vec2 tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1821)
				{
					HX_STACK_LINE(1821)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(1821)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1821)
					{
						HX_STACK_LINE(1821)
						::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1821)
						bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1821)
						if ((tmp9)){
							HX_STACK_LINE(1821)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1821)
							ret1 = tmp10;
						}
						else{
							HX_STACK_LINE(1821)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1821)
							ret1 = tmp10;
							HX_STACK_LINE(1821)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1821)
							ret1->next = null();
						}
						HX_STACK_LINE(1821)
						ret1->weak = false;
					}
					HX_STACK_LINE(1821)
					ret1->_immutable = immutable;
					HX_STACK_LINE(1821)
					{
						HX_STACK_LINE(1821)
						ret1->x = x;
						HX_STACK_LINE(1821)
						ret1->y = y;
						HX_STACK_LINE(1821)
						{
						}
					}
					HX_STACK_LINE(1821)
					tmp7 = ret1;
				}
				HX_STACK_LINE(1821)
				ret->zpp_inner = tmp7;
				HX_STACK_LINE(1821)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(1821)
				{
					HX_STACK_LINE(1821)
					bool tmp7 = (ret != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1821)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1821)
					if ((tmp7)){
						HX_STACK_LINE(1821)
						tmp8 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(1821)
						tmp8 = false;
					}
					HX_STACK_LINE(1821)
					if ((tmp8)){
						HX_STACK_LINE(1821)
						::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1821)
						::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1821)
						HX_STACK_DO_THROW(tmp10);
					}
				}
				HX_STACK_LINE(1821)
				{
					HX_STACK_LINE(1821)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1821)
					bool tmp7 = _this->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1821)
					if ((tmp7)){
						HX_STACK_LINE(1821)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1821)
					bool tmp8 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1821)
					if ((tmp8)){
						HX_STACK_LINE(1821)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1821)
				bool tmp7 = (x != x);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1821)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1821)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1821)
				if ((tmp8)){
					HX_STACK_LINE(1821)
					tmp9 = (y != y);
				}
				else{
					HX_STACK_LINE(1821)
					tmp9 = true;
				}
				HX_STACK_LINE(1821)
				if ((tmp9)){
					HX_STACK_LINE(1821)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(1821)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1821)
				{
					HX_STACK_LINE(1821)
					{
						HX_STACK_LINE(1821)
						bool tmp11 = (ret != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1821)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1821)
						if ((tmp11)){
							HX_STACK_LINE(1821)
							tmp12 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(1821)
							tmp12 = false;
						}
						HX_STACK_LINE(1821)
						if ((tmp12)){
							HX_STACK_LINE(1821)
							::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1821)
							::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1821)
							HX_STACK_DO_THROW(tmp14);
						}
					}
					HX_STACK_LINE(1821)
					{
						HX_STACK_LINE(1821)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1821)
						bool tmp11 = (_this->_validate != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1821)
						if ((tmp11)){
							HX_STACK_LINE(1821)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1821)
					tmp10 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(1821)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1821)
				bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1821)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1821)
				if ((tmp12)){
					HX_STACK_LINE(1821)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1821)
					{
						HX_STACK_LINE(1821)
						{
							HX_STACK_LINE(1821)
							bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1821)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1821)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1821)
							bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1821)
							if ((tmp18)){
								HX_STACK_LINE(1821)
								tmp17 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(1821)
								tmp17 = false;
							}
							HX_STACK_LINE(1821)
							bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1821)
							if ((tmp19)){
								HX_STACK_LINE(1821)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1821)
								::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1821)
								::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1821)
								::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1821)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1821)
								HX_STACK_DO_THROW(tmp24);
							}
						}
						HX_STACK_LINE(1821)
						{
							HX_STACK_LINE(1821)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1821)
							bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1821)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1821)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1821)
							if ((tmp17)){
								HX_STACK_LINE(1821)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1821)
						Float tmp15 = ret->zpp_inner->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1821)
						tmp14 = tmp15;
					}
					HX_STACK_LINE(1821)
					Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1821)
					tmp13 = (tmp14 == tmp15);
				}
				else{
					HX_STACK_LINE(1821)
					tmp13 = false;
				}
				HX_STACK_LINE(1821)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1821)
				if ((tmp14)){
					HX_STACK_LINE(1821)
					{
						HX_STACK_LINE(1821)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(1821)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(1821)
						{
						}
					}
					HX_STACK_LINE(1821)
					{
						HX_STACK_LINE(1821)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1821)
						bool tmp15 = (_this->_invalidate != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1821)
						if ((tmp15)){
							HX_STACK_LINE(1821)
							::zpp_nape::geom::ZPP_Vec2 tmp16 = _this;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1821)
							_this->_invalidate(tmp16);
						}
					}
				}
				HX_STACK_LINE(1821)
				ret;
			}
			HX_STACK_LINE(1821)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(1821)
			tmp = ret;
		}
		HX_STACK_LINE(1821)
		this->wrap_localCOM = tmp;
		HX_STACK_LINE(1822)
		::nape::geom::Vec2 tmp1 = this->wrap_localCOM;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1822)
		tmp1->zpp_inner->_inuse = true;
		HX_STACK_LINE(1823)
		Dynamic tmp2 = this->localCOM_validate_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1823)
		::nape::geom::Vec2 tmp3 = this->wrap_localCOM;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1823)
		tmp3->zpp_inner->_validate = tmp2;
		HX_STACK_LINE(1824)
		Dynamic tmp4 = this->localCOM_invalidate_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1824)
		::nape::geom::Vec2 tmp5 = this->wrap_localCOM;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1824)
		tmp5->zpp_inner->_invalidate = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,setupLocalCOM,(void))

Void ZPP_Polygon_obj::__translate( Float dx,Float dy){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","__translate",0xac9ac807,"zpp_nape.shape.ZPP_Polygon.__translate","zpp_nape/shape/Polygon.hx",1834,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(1835)
		{
			HX_STACK_LINE(1836)
			::zpp_nape::geom::ZPP_Vec2 tmp = this->lverts;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1836)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1837)
			while((true)){
				HX_STACK_LINE(1837)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1837)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1837)
				if ((tmp2)){
					HX_STACK_LINE(1837)
					break;
				}
				HX_STACK_LINE(1838)
				::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1839)
				{
					HX_STACK_LINE(1840)
					Float t = ((Float)1.0);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1849)
					Float tmp3 = (dx * t);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1849)
					hx::AddEq(p->x,tmp3);
					HX_STACK_LINE(1850)
					Float tmp4 = (dy * t);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1850)
					hx::AddEq(p->y,tmp4);
				}
				HX_STACK_LINE(1852)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(1855)
		this->invalidate_lverts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Polygon_obj,__translate,(void))

Void ZPP_Polygon_obj::__scale( Float sx,Float sy){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","__scale",0x62a2aec3,"zpp_nape.shape.ZPP_Polygon.__scale","zpp_nape/shape/Polygon.hx",1857,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sx,"sx")
		HX_STACK_ARG(sy,"sy")
		HX_STACK_LINE(1858)
		{
			HX_STACK_LINE(1859)
			::zpp_nape::geom::ZPP_Vec2 tmp = this->lverts;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1859)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1860)
			while((true)){
				HX_STACK_LINE(1860)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1860)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1860)
				if ((tmp2)){
					HX_STACK_LINE(1860)
					break;
				}
				HX_STACK_LINE(1861)
				::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1862)
				{
					HX_STACK_LINE(1863)
					hx::MultEq(p->x,sx);
					HX_STACK_LINE(1864)
					hx::MultEq(p->y,sy);
				}
				HX_STACK_LINE(1866)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(1869)
		this->invalidate_lverts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Polygon_obj,__scale,(void))

Void ZPP_Polygon_obj::__rotate( Float ax,Float ay){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","__rotate",0x7ab09802,"zpp_nape.shape.ZPP_Polygon.__rotate","zpp_nape/shape/Polygon.hx",1871,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ax,"ax")
		HX_STACK_ARG(ay,"ay")
		HX_STACK_LINE(1872)
		{
			HX_STACK_LINE(1873)
			::zpp_nape::geom::ZPP_Vec2 tmp = this->lverts;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1873)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1874)
			while((true)){
				HX_STACK_LINE(1874)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1874)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1874)
				if ((tmp2)){
					HX_STACK_LINE(1874)
					break;
				}
				HX_STACK_LINE(1875)
				::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1876)
				{
					HX_STACK_LINE(1877)
					Float tempx = ((Float)0.0);		HX_STACK_VAR(tempx,"tempx");
					HX_STACK_LINE(1878)
					Float tempy = ((Float)0.0);		HX_STACK_VAR(tempy,"tempy");
					HX_STACK_LINE(1879)
					{
						HX_STACK_LINE(1880)
						Float tmp3 = (ay * p->x);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1880)
						Float tmp4 = (ax * p->y);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1880)
						Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1880)
						tempx = tmp5;
						HX_STACK_LINE(1881)
						Float tmp6 = (p->x * ax);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1881)
						Float tmp7 = (p->y * ay);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1881)
						Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1881)
						tempy = tmp8;
					}
					HX_STACK_LINE(1883)
					{
						HX_STACK_LINE(1884)
						p->x = tempx;
						HX_STACK_LINE(1885)
						p->y = tempy;
						HX_STACK_LINE(1894)
						{
						}
					}
				}
				HX_STACK_LINE(1904)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(1907)
		this->invalidate_lverts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Polygon_obj,__rotate,(void))

Void ZPP_Polygon_obj::__transform( ::nape::geom::Mat23 mat){
{
		HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","__transform",0xa8ae1e25,"zpp_nape.shape.ZPP_Polygon.__transform","zpp_nape/shape/Polygon.hx",1909,0x571b0a14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mat,"mat")
		HX_STACK_LINE(1910)
		{
			HX_STACK_LINE(1911)
			::zpp_nape::geom::ZPP_Vec2 tmp = this->lverts;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1911)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = tmp->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1912)
			while((true)){
				HX_STACK_LINE(1912)
				bool tmp1 = (cx_ite != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1912)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1912)
				if ((tmp2)){
					HX_STACK_LINE(1912)
					break;
				}
				HX_STACK_LINE(1913)
				::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1915)
				{
					HX_STACK_LINE(1916)
					Float tmp3 = mat->zpp_inner->a;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1916)
					Float tmp4 = p->x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1916)
					Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1916)
					Float tmp6 = mat->zpp_inner->b;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1916)
					Float tmp7 = p->y;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1916)
					Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1916)
					Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1916)
					Float tmp10 = mat->zpp_inner->tx;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1916)
					Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1916)
					Float t = tmp11;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1917)
					Float tmp12 = mat->zpp_inner->c;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1917)
					Float tmp13 = p->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1917)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1917)
					Float tmp15 = mat->zpp_inner->d;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1917)
					Float tmp16 = p->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1917)
					Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1917)
					Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1917)
					Float tmp19 = mat->zpp_inner->ty;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1917)
					Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1917)
					p->y = tmp20;
					HX_STACK_LINE(1918)
					p->x = t;
				}
				HX_STACK_LINE(1921)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(1924)
		this->invalidate_lverts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Polygon_obj,__transform,(void))

::zpp_nape::shape::ZPP_Polygon ZPP_Polygon_obj::__copy( ){
	HX_STACK_FRAME("zpp_nape.shape.ZPP_Polygon","__copy",0xc921859c,"zpp_nape.shape.ZPP_Polygon.__copy","zpp_nape/shape/Polygon.hx",1926,0x571b0a14)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1927)
	::nape::geom::Vec2List tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1927)
	{
		HX_STACK_LINE(1927)
		::nape::shape::Polygon tmp1 = this->outer_zn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1927)
		::nape::shape::Polygon _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1927)
		::nape::geom::Vec2List tmp2 = _this->zpp_inner_zn->wrap_lverts;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1927)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1927)
		if ((tmp3)){
			HX_STACK_LINE(1927)
			_this->zpp_inner_zn->getlverts();
		}
		HX_STACK_LINE(1927)
		tmp = _this->zpp_inner_zn->wrap_lverts;
	}
	HX_STACK_LINE(1927)
	::nape::shape::Polygon tmp1 = ::nape::shape::Polygon_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1927)
	::zpp_nape::shape::ZPP_Polygon ret = tmp1->zpp_inner_zn;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1928)
	::zpp_nape::shape::ZPP_Polygon tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1928)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Polygon_obj,__copy,return )


ZPP_Polygon_obj::ZPP_Polygon_obj()
{
}

void ZPP_Polygon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Polygon);
	HX_MARK_MEMBER_NAME(outer_zn,"outer_zn");
	HX_MARK_MEMBER_NAME(lverts,"lverts");
	HX_MARK_MEMBER_NAME(wrap_lverts,"wrap_lverts");
	HX_MARK_MEMBER_NAME(gverts,"gverts");
	HX_MARK_MEMBER_NAME(wrap_gverts,"wrap_gverts");
	HX_MARK_MEMBER_NAME(edges,"edges");
	HX_MARK_MEMBER_NAME(wrap_edges,"wrap_edges");
	HX_MARK_MEMBER_NAME(edgeCnt,"edgeCnt");
	HX_MARK_MEMBER_NAME(reverse_flag,"reverse_flag");
	HX_MARK_MEMBER_NAME(zip_lverts,"zip_lverts");
	HX_MARK_MEMBER_NAME(zip_laxi,"zip_laxi");
	HX_MARK_MEMBER_NAME(zip_gverts,"zip_gverts");
	HX_MARK_MEMBER_NAME(zip_gaxi,"zip_gaxi");
	HX_MARK_MEMBER_NAME(zip_valid,"zip_valid");
	HX_MARK_MEMBER_NAME(validation,"validation");
	HX_MARK_MEMBER_NAME(zip_sanitation,"zip_sanitation");
	::zpp_nape::shape::ZPP_Shape_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_Polygon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer_zn,"outer_zn");
	HX_VISIT_MEMBER_NAME(lverts,"lverts");
	HX_VISIT_MEMBER_NAME(wrap_lverts,"wrap_lverts");
	HX_VISIT_MEMBER_NAME(gverts,"gverts");
	HX_VISIT_MEMBER_NAME(wrap_gverts,"wrap_gverts");
	HX_VISIT_MEMBER_NAME(edges,"edges");
	HX_VISIT_MEMBER_NAME(wrap_edges,"wrap_edges");
	HX_VISIT_MEMBER_NAME(edgeCnt,"edgeCnt");
	HX_VISIT_MEMBER_NAME(reverse_flag,"reverse_flag");
	HX_VISIT_MEMBER_NAME(zip_lverts,"zip_lverts");
	HX_VISIT_MEMBER_NAME(zip_laxi,"zip_laxi");
	HX_VISIT_MEMBER_NAME(zip_gverts,"zip_gverts");
	HX_VISIT_MEMBER_NAME(zip_gaxi,"zip_gaxi");
	HX_VISIT_MEMBER_NAME(zip_valid,"zip_valid");
	HX_VISIT_MEMBER_NAME(validation,"validation");
	HX_VISIT_MEMBER_NAME(zip_sanitation,"zip_sanitation");
	::zpp_nape::shape::ZPP_Shape_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_Polygon_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"edges") ) { return edges; }
		if (HX_FIELD_EQ(inName,"valid") ) { return valid_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lverts") ) { return lverts; }
		if (HX_FIELD_EQ(inName,"gverts") ) { return gverts; }
		if (HX_FIELD_EQ(inName,"__copy") ) { return __copy_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"edgeCnt") ) { return edgeCnt; }
		if (HX_FIELD_EQ(inName,"__clear") ) { return __clear_dyn(); }
		if (HX_FIELD_EQ(inName,"__scale") ) { return __scale_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { return outer_zn; }
		if (HX_FIELD_EQ(inName,"getedges") ) { return getedges_dyn(); }
		if (HX_FIELD_EQ(inName,"zip_laxi") ) { return zip_laxi; }
		if (HX_FIELD_EQ(inName,"zip_gaxi") ) { return zip_gaxi; }
		if (HX_FIELD_EQ(inName,"__rotate") ) { return __rotate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getlverts") ) { return getlverts_dyn(); }
		if (HX_FIELD_EQ(inName,"getgverts") ) { return getgverts_dyn(); }
		if (HX_FIELD_EQ(inName,"zip_valid") ) { return zip_valid; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wrap_edges") ) { return wrap_edges; }
		if (HX_FIELD_EQ(inName,"zip_lverts") ) { return zip_lverts; }
		if (HX_FIELD_EQ(inName,"zip_gverts") ) { return zip_gverts; }
		if (HX_FIELD_EQ(inName,"validation") ) { return validation; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrap_lverts") ) { return wrap_lverts; }
		if (HX_FIELD_EQ(inName,"wrap_gverts") ) { return wrap_gverts; }
		if (HX_FIELD_EQ(inName,"__translate") ) { return __translate_dyn(); }
		if (HX_FIELD_EQ(inName,"__transform") ) { return __transform_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"reverse_flag") ) { return reverse_flag; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lverts_subber") ) { return lverts_subber_dyn(); }
		if (HX_FIELD_EQ(inName,"cleanup_lvert") ) { return cleanup_lvert_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_laxi") ) { return validate_laxi_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_gaxi") ) { return validate_gaxi_dyn(); }
		if (HX_FIELD_EQ(inName,"setupLocalCOM") ) { return setupLocalCOM_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"edges_validate") ) { return edges_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"zip_sanitation") ) { return zip_sanitation; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lverts_validate") ) { return lverts_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"gverts_validate") ) { return gverts_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_laxi") ) { return invalidate_laxi_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_gaxi") ) { return invalidate_gaxi_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_lverts") ) { return validate_lverts_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_gverts") ) { return validate_gverts_dyn(); }
		if (HX_FIELD_EQ(inName,"__validate_aabb") ) { return __validate_aabb_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"splice_collinear") ) { return splice_collinear_dyn(); }
		if (HX_FIELD_EQ(inName,"reverse_vertices") ) { return reverse_vertices_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lverts_post_adder") ) { return lverts_post_adder_dyn(); }
		if (HX_FIELD_EQ(inName,"lverts_invalidate") ) { return lverts_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"lverts_modifiable") ) { return lverts_modifiable_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_lverts") ) { return invalidate_lverts_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_gverts") ) { return invalidate_gverts_dyn(); }
		if (HX_FIELD_EQ(inName,"localCOM_validate") ) { return localCOM_validate_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"gverts_pa_validate") ) { return gverts_pa_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"__validate_angDrag") ) { return __validate_angDrag_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lverts_pa_immutable") ) { return lverts_pa_immutable_dyn(); }
		if (HX_FIELD_EQ(inName,"__validate_localCOM") ) { return __validate_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"localCOM_invalidate") ) { return localCOM_invalidate_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lverts_pa_invalidate") ) { return lverts_pa_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"_force_validate_aabb") ) { return _force_validate_aabb_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"splice_collinear_real") ) { return splice_collinear_real_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__validate_sweepRadius") ) { return __validate_sweepRadius_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__validate_area_inertia") ) { return __validate_area_inertia_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Polygon_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"edges") ) { edges=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Edge >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lverts") ) { lverts=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gverts") ) { gverts=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"edgeCnt") ) { edgeCnt=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outer_zn") ) { outer_zn=inValue.Cast< ::nape::shape::Polygon >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_laxi") ) { zip_laxi=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_gaxi") ) { zip_gaxi=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zip_valid") ) { zip_valid=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wrap_edges") ) { wrap_edges=inValue.Cast< ::nape::shape::EdgeList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_lverts") ) { zip_lverts=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_gverts") ) { zip_gverts=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"validation") ) { validation=inValue.Cast< ::nape::shape::ValidationResult >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"wrap_lverts") ) { wrap_lverts=inValue.Cast< ::nape::geom::Vec2List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_gverts") ) { wrap_gverts=inValue.Cast< ::nape::geom::Vec2List >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"reverse_flag") ) { reverse_flag=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"zip_sanitation") ) { zip_sanitation=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ZPP_Polygon_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ZPP_Polygon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"));
	outFields->push(HX_HCSTRING("lverts","\xb6","\xde","\xec","\x62"));
	outFields->push(HX_HCSTRING("wrap_lverts","\xcb","\xe3","\x7b","\x4d"));
	outFields->push(HX_HCSTRING("gverts","\xdb","\x10","\x24","\x63"));
	outFields->push(HX_HCSTRING("wrap_gverts","\xf0","\x15","\xb3","\x4d"));
	outFields->push(HX_HCSTRING("edges","\x96","\x6d","\xe0","\x69"));
	outFields->push(HX_HCSTRING("wrap_edges","\x21","\x62","\x67","\x95"));
	outFields->push(HX_HCSTRING("edgeCnt","\x2c","\x73","\xe3","\xf4"));
	outFields->push(HX_HCSTRING("reverse_flag","\x29","\x93","\x06","\x7a"));
	outFields->push(HX_HCSTRING("zip_lverts","\x94","\x0f","\xf7","\xff"));
	outFields->push(HX_HCSTRING("zip_laxi","\x04","\xac","\x0e","\x13"));
	outFields->push(HX_HCSTRING("zip_gverts","\xb9","\x41","\x2e","\x00"));
	outFields->push(HX_HCSTRING("zip_gaxi","\xe9","\x9a","\xc0","\x0f"));
	outFields->push(HX_HCSTRING("zip_valid","\xde","\x89","\xc0","\x5b"));
	outFields->push(HX_HCSTRING("validation","\x39","\x0c","\xed","\xe1"));
	outFields->push(HX_HCSTRING("zip_sanitation","\xa8","\x46","\xff","\x71"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::shape::Polygon*/ ,(int)offsetof(ZPP_Polygon_obj,outer_zn),HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec2*/ ,(int)offsetof(ZPP_Polygon_obj,lverts),HX_HCSTRING("lverts","\xb6","\xde","\xec","\x62")},
	{hx::fsObject /*::nape::geom::Vec2List*/ ,(int)offsetof(ZPP_Polygon_obj,wrap_lverts),HX_HCSTRING("wrap_lverts","\xcb","\xe3","\x7b","\x4d")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec2*/ ,(int)offsetof(ZPP_Polygon_obj,gverts),HX_HCSTRING("gverts","\xdb","\x10","\x24","\x63")},
	{hx::fsObject /*::nape::geom::Vec2List*/ ,(int)offsetof(ZPP_Polygon_obj,wrap_gverts),HX_HCSTRING("wrap_gverts","\xf0","\x15","\xb3","\x4d")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Edge*/ ,(int)offsetof(ZPP_Polygon_obj,edges),HX_HCSTRING("edges","\x96","\x6d","\xe0","\x69")},
	{hx::fsObject /*::nape::shape::EdgeList*/ ,(int)offsetof(ZPP_Polygon_obj,wrap_edges),HX_HCSTRING("wrap_edges","\x21","\x62","\x67","\x95")},
	{hx::fsInt,(int)offsetof(ZPP_Polygon_obj,edgeCnt),HX_HCSTRING("edgeCnt","\x2c","\x73","\xe3","\xf4")},
	{hx::fsBool,(int)offsetof(ZPP_Polygon_obj,reverse_flag),HX_HCSTRING("reverse_flag","\x29","\x93","\x06","\x7a")},
	{hx::fsBool,(int)offsetof(ZPP_Polygon_obj,zip_lverts),HX_HCSTRING("zip_lverts","\x94","\x0f","\xf7","\xff")},
	{hx::fsBool,(int)offsetof(ZPP_Polygon_obj,zip_laxi),HX_HCSTRING("zip_laxi","\x04","\xac","\x0e","\x13")},
	{hx::fsBool,(int)offsetof(ZPP_Polygon_obj,zip_gverts),HX_HCSTRING("zip_gverts","\xb9","\x41","\x2e","\x00")},
	{hx::fsBool,(int)offsetof(ZPP_Polygon_obj,zip_gaxi),HX_HCSTRING("zip_gaxi","\xe9","\x9a","\xc0","\x0f")},
	{hx::fsBool,(int)offsetof(ZPP_Polygon_obj,zip_valid),HX_HCSTRING("zip_valid","\xde","\x89","\xc0","\x5b")},
	{hx::fsObject /*::nape::shape::ValidationResult*/ ,(int)offsetof(ZPP_Polygon_obj,validation),HX_HCSTRING("validation","\x39","\x0c","\xed","\xe1")},
	{hx::fsBool,(int)offsetof(ZPP_Polygon_obj,zip_sanitation),HX_HCSTRING("zip_sanitation","\xa8","\x46","\xff","\x71")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("outer_zn","\x38","\x07","\xb0","\xa2"),
	HX_HCSTRING("lverts","\xb6","\xde","\xec","\x62"),
	HX_HCSTRING("wrap_lverts","\xcb","\xe3","\x7b","\x4d"),
	HX_HCSTRING("gverts","\xdb","\x10","\x24","\x63"),
	HX_HCSTRING("wrap_gverts","\xf0","\x15","\xb3","\x4d"),
	HX_HCSTRING("edges","\x96","\x6d","\xe0","\x69"),
	HX_HCSTRING("wrap_edges","\x21","\x62","\x67","\x95"),
	HX_HCSTRING("edgeCnt","\x2c","\x73","\xe3","\xf4"),
	HX_HCSTRING("reverse_flag","\x29","\x93","\x06","\x7a"),
	HX_HCSTRING("__clear","\x6d","\xca","\xb9","\xb2"),
	HX_HCSTRING("lverts_pa_invalidate","\xc0","\x39","\x1e","\x4d"),
	HX_HCSTRING("lverts_pa_immutable","\x9d","\x77","\xf8","\x2b"),
	HX_HCSTRING("gverts_pa_validate","\x40","\x3b","\xb1","\x2c"),
	HX_HCSTRING("lverts_post_adder","\x98","\xc6","\x14","\xb7"),
	HX_HCSTRING("lverts_subber","\x78","\x11","\xdd","\x83"),
	HX_HCSTRING("lverts_invalidate","\xa4","\xb7","\x6f","\x05"),
	HX_HCSTRING("lverts_validate","\x7f","\x62","\xf2","\x74"),
	HX_HCSTRING("lverts_modifiable","\x2d","\x9d","\x8b","\xb8"),
	HX_HCSTRING("gverts_validate","\xba","\x43","\x08","\x8c"),
	HX_HCSTRING("edges_validate","\x9f","\xf7","\x45","\x07"),
	HX_HCSTRING("getlverts","\xcc","\xf3","\xae","\xaa"),
	HX_HCSTRING("getgverts","\xf1","\x25","\xe6","\xaa"),
	HX_HCSTRING("getedges","\x40","\x0d","\x8a","\x36"),
	HX_HCSTRING("zip_lverts","\x94","\x0f","\xf7","\xff"),
	HX_HCSTRING("invalidate_lverts","\x3a","\xcc","\xdb","\x4b"),
	HX_HCSTRING("zip_laxi","\x04","\xac","\x0e","\x13"),
	HX_HCSTRING("invalidate_laxi","\x2a","\xd3","\x3e","\x55"),
	HX_HCSTRING("zip_gverts","\xb9","\x41","\x2e","\x00"),
	HX_HCSTRING("invalidate_gverts","\x5f","\xfe","\x12","\x4c"),
	HX_HCSTRING("zip_gaxi","\xe9","\x9a","\xc0","\x0f"),
	HX_HCSTRING("invalidate_gaxi","\x0f","\xc2","\xf0","\x51"),
	HX_HCSTRING("zip_valid","\xde","\x89","\xc0","\x5b"),
	HX_HCSTRING("validation","\x39","\x0c","\xed","\xe1"),
	HX_HCSTRING("valid","\xfc","\x74","\xb8","\x31"),
	HX_HCSTRING("validate_lverts","\x7f","\xfe","\x28","\xff"),
	HX_HCSTRING("cleanup_lvert","\x82","\xe1","\xd1","\xdc"),
	HX_HCSTRING("zip_sanitation","\xa8","\x46","\xff","\x71"),
	HX_HCSTRING("splice_collinear","\x62","\xb6","\x1e","\xde"),
	HX_HCSTRING("splice_collinear_real","\x9b","\x4d","\x7f","\x56"),
	HX_HCSTRING("reverse_vertices","\xf6","\x49","\xc4","\x75"),
	HX_HCSTRING("validate_laxi","\x2f","\x7a","\x90","\x93"),
	HX_HCSTRING("validate_gverts","\xa4","\x30","\x60","\xff"),
	HX_HCSTRING("validate_gaxi","\x14","\x69","\x42","\x90"),
	HX_HCSTRING("__validate_aabb","\x09","\x47","\xfd","\x13"),
	HX_HCSTRING("_force_validate_aabb","\x96","\x2c","\xfa","\xe5"),
	HX_HCSTRING("__validate_sweepRadius","\x15","\x3e","\x74","\xe7"),
	HX_HCSTRING("__validate_area_inertia","\x71","\x20","\xbf","\xea"),
	HX_HCSTRING("__validate_angDrag","\x25","\x0b","\x63","\xbc"),
	HX_HCSTRING("__validate_localCOM","\x7f","\x54","\x2a","\xce"),
	HX_HCSTRING("localCOM_validate","\x9f","\x5d","\x8b","\x87"),
	HX_HCSTRING("localCOM_invalidate","\xc4","\xba","\x95","\xac"),
	HX_HCSTRING("setupLocalCOM","\x33","\x77","\xff","\x8f"),
	HX_HCSTRING("__translate","\x2e","\x20","\xac","\x77"),
	HX_HCSTRING("__scale","\x6a","\x27","\x2d","\xe3"),
	HX_HCSTRING("__rotate","\x7b","\xb1","\x4f","\x73"),
	HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"),
	HX_HCSTRING("__copy","\xd5","\x1e","\xbd","\xf0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Polygon_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Polygon_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_Polygon_obj::__mClass;

void ZPP_Polygon_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.shape.ZPP_Polygon","\xc7","\x66","\xe6","\xb8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ZPP_Polygon_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ZPP_Polygon_obj >;
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
