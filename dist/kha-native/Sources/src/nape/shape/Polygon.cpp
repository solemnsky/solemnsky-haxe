#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2Iterator
#include <nape/geom/Vec2Iterator.h>
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
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomPoly
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Vec2
#include <zpp_nape/util/ZNPList_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Vec2
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Vec2List
#include <zpp_nape/util/ZPP_Vec2List.h>
#endif
namespace nape{
namespace shape{

Void Polygon_obj::__construct(Dynamic localVerts,::nape::phys::Material material,::nape::dynamics::InteractionFilter filter)
{
HX_STACK_FRAME("nape.shape.Polygon","new",0x3561fe79,"nape.shape.Polygon.new","nape/shape/Polygon.hx",179,0x3fc17059)
HX_STACK_THIS(this)
HX_STACK_ARG(localVerts,"localVerts")
HX_STACK_ARG(material,"material")
HX_STACK_ARG(filter,"filter")
{
	HX_STACK_LINE(183)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(333)
	::nape::shape::Shape_obj::zpp_internalAlloc = true;
	HX_STACK_LINE(334)
	super::__construct();
	HX_STACK_LINE(335)
	::nape::shape::Shape_obj::zpp_internalAlloc = false;
	HX_STACK_LINE(341)
	bool tmp = (localVerts == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(341)
	if ((tmp)){
		HX_STACK_LINE(341)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: localVerts cannot be null","\xa2","\xaa","\x69","\x91"));
	}
	HX_STACK_LINE(343)
	::zpp_nape::shape::ZPP_Polygon tmp1 = ::zpp_nape::shape::ZPP_Polygon_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(343)
	this->zpp_inner_zn = tmp1;
	HX_STACK_LINE(344)
	::zpp_nape::shape::ZPP_Polygon tmp2 = this->zpp_inner_zn;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(344)
	tmp2->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(345)
	::zpp_nape::shape::ZPP_Polygon tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(345)
	tmp3->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(346)
	::zpp_nape::shape::ZPP_Polygon tmp4 = this->zpp_inner_zn;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(346)
	this->zpp_inner = tmp4;
	HX_STACK_LINE(347)
	::zpp_nape::shape::ZPP_Shape tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(347)
	this->zpp_inner_i = tmp5;
	HX_STACK_LINE(348)
	::zpp_nape::phys::ZPP_Interactor tmp6 = this->zpp_inner_i;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(348)
	tmp6->outer_i = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(349)
	{
		HX_STACK_LINE(350)
		Dynamic tmp7 = localVerts;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(350)
		bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(350)
		if ((tmp8)){
			HX_STACK_LINE(351)
			cpp::ArrayBase lv = localVerts;		HX_STACK_VAR(lv,"lv");
			HX_STACK_LINE(352)
			{
				HX_STACK_LINE(352)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(352)
				while((true)){
					HX_STACK_LINE(352)
					bool tmp9 = (_g < lv->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(352)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(352)
					if ((tmp10)){
						HX_STACK_LINE(352)
						break;
					}
					HX_STACK_LINE(352)
					Dynamic tmp11 = lv->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(352)
					Dynamic vite = tmp11;		HX_STACK_VAR(vite,"vite");
					HX_STACK_LINE(352)
					++(_g);
					HX_STACK_LINE(354)
					bool tmp12 = (vite == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(354)
					if ((tmp12)){
						HX_STACK_LINE(354)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Array<Vec2> contains null objects","\xeb","\x2d","\x26","\x50"));
					}
					HX_STACK_LINE(357)
					Dynamic tmp13 = vite;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(357)
					bool tmp14 = ::Std_obj::is(tmp13,hx::ClassOf< ::nape::geom::Vec2 >());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(357)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(357)
					if ((tmp15)){
						HX_STACK_LINE(357)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Array<Vec2> contains non Vec2 objects","\xd5","\x3c","\x56","\xe0"));
					}
					HX_STACK_LINE(359)
					::nape::geom::Vec2 x = vite;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(360)
					{
						HX_STACK_LINE(362)
						bool tmp16 = (x != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(362)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(362)
						if ((tmp16)){
							HX_STACK_LINE(362)
							tmp17 = x->zpp_disp;
						}
						else{
							HX_STACK_LINE(362)
							tmp17 = false;
						}
						HX_STACK_LINE(362)
						if ((tmp17)){
							HX_STACK_LINE(362)
							::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(362)
							::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(362)
							HX_STACK_DO_THROW(tmp19);
						}
					}
					HX_STACK_LINE(365)
					::nape::geom::Vec2List tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						::zpp_nape::shape::ZPP_Polygon tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(365)
						::nape::geom::Vec2List tmp18 = tmp17->wrap_lverts;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(365)
						bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(365)
						if ((tmp19)){
							HX_STACK_LINE(365)
							::zpp_nape::shape::ZPP_Polygon tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(365)
							tmp20->getlverts();
						}
						HX_STACK_LINE(365)
						::zpp_nape::shape::ZPP_Polygon tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(365)
						tmp16 = tmp20->wrap_lverts;
					}
					HX_STACK_LINE(365)
					::nape::geom::Vec2 tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						bool weak = false;		HX_STACK_VAR(weak,"weak");
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							bool tmp18 = (x != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(365)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(365)
							if ((tmp18)){
								HX_STACK_LINE(365)
								tmp19 = x->zpp_disp;
							}
							else{
								HX_STACK_LINE(365)
								tmp19 = false;
							}
							HX_STACK_LINE(365)
							if ((tmp19)){
								HX_STACK_LINE(365)
								::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(365)
								::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(365)
								HX_STACK_DO_THROW(tmp21);
							}
						}
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								bool tmp19 = x->zpp_disp;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(365)
								if ((tmp19)){
									HX_STACK_LINE(365)
									::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(365)
									::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(365)
									HX_STACK_DO_THROW(tmp21);
								}
								HX_STACK_LINE(365)
								{
									HX_STACK_LINE(365)
									::zpp_nape::geom::ZPP_Vec2 _this = x->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(365)
									bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(365)
									if ((tmp20)){
										HX_STACK_LINE(365)
										_this->_validate();
									}
								}
								HX_STACK_LINE(365)
								tmp18 = x->zpp_inner->x;
							}
							HX_STACK_LINE(365)
							Float x1 = tmp18;		HX_STACK_VAR(x1,"x1");
							HX_STACK_LINE(365)
							Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								bool tmp20 = x->zpp_disp;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(365)
								if ((tmp20)){
									HX_STACK_LINE(365)
									::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(365)
									::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(365)
									HX_STACK_DO_THROW(tmp22);
								}
								HX_STACK_LINE(365)
								{
									HX_STACK_LINE(365)
									::zpp_nape::geom::ZPP_Vec2 _this = x->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(365)
									bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(365)
									if ((tmp21)){
										HX_STACK_LINE(365)
										_this->_validate();
									}
								}
								HX_STACK_LINE(365)
								tmp19 = x->zpp_inner->y;
							}
							HX_STACK_LINE(365)
							Float y = tmp19;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(365)
							bool tmp20 = (x1 != x1);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(365)
							bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(365)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(365)
							if ((tmp21)){
								HX_STACK_LINE(365)
								tmp22 = (y != y);
							}
							else{
								HX_STACK_LINE(365)
								tmp22 = true;
							}
							HX_STACK_LINE(365)
							if ((tmp22)){
								HX_STACK_LINE(365)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
							}
							HX_STACK_LINE(365)
							::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								::nape::geom::Vec2 tmp23 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(365)
								bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(365)
								if ((tmp24)){
									HX_STACK_LINE(365)
									::nape::geom::Vec2 tmp25 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(365)
									ret = tmp25;
								}
								else{
									HX_STACK_LINE(365)
									::nape::geom::Vec2 tmp25 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(365)
									ret = tmp25;
									HX_STACK_LINE(365)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
									HX_STACK_LINE(365)
									ret->zpp_pool = null();
									HX_STACK_LINE(365)
									ret->zpp_disp = false;
									HX_STACK_LINE(365)
									::nape::geom::Vec2 tmp26 = ret;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(365)
									::nape::geom::Vec2 tmp27 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(365)
									bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(365)
									if ((tmp28)){
										HX_STACK_LINE(365)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
									}
								}
							}
							HX_STACK_LINE(365)
							bool tmp23 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(365)
							if ((tmp23)){
								HX_STACK_LINE(365)
								::zpp_nape::geom::ZPP_Vec2 tmp24;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(365)
								{
									HX_STACK_LINE(365)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(365)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(365)
									{
										HX_STACK_LINE(365)
										::zpp_nape::geom::ZPP_Vec2 tmp25 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(365)
										bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(365)
										if ((tmp26)){
											HX_STACK_LINE(365)
											::zpp_nape::geom::ZPP_Vec2 tmp27 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(365)
											ret1 = tmp27;
										}
										else{
											HX_STACK_LINE(365)
											::zpp_nape::geom::ZPP_Vec2 tmp27 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(365)
											ret1 = tmp27;
											HX_STACK_LINE(365)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(365)
											ret1->next = null();
										}
										HX_STACK_LINE(365)
										ret1->weak = false;
									}
									HX_STACK_LINE(365)
									ret1->_immutable = immutable;
									HX_STACK_LINE(365)
									{
										HX_STACK_LINE(365)
										ret1->x = x1;
										HX_STACK_LINE(365)
										ret1->y = y;
										HX_STACK_LINE(365)
										{
										}
									}
									HX_STACK_LINE(365)
									tmp24 = ret1;
								}
								HX_STACK_LINE(365)
								ret->zpp_inner = tmp24;
								HX_STACK_LINE(365)
								ret->zpp_inner->outer = ret;
							}
							else{
								HX_STACK_LINE(365)
								{
									HX_STACK_LINE(365)
									bool tmp24 = (ret != null());		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(365)
									bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(365)
									if ((tmp24)){
										HX_STACK_LINE(365)
										tmp25 = ret->zpp_disp;
									}
									else{
										HX_STACK_LINE(365)
										tmp25 = false;
									}
									HX_STACK_LINE(365)
									if ((tmp25)){
										HX_STACK_LINE(365)
										::String tmp26 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(365)
										::String tmp27 = (tmp26 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(365)
										HX_STACK_DO_THROW(tmp27);
									}
								}
								HX_STACK_LINE(365)
								{
									HX_STACK_LINE(365)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(365)
									bool tmp24 = _this->_immutable;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(365)
									if ((tmp24)){
										HX_STACK_LINE(365)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
									}
									HX_STACK_LINE(365)
									bool tmp25 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(365)
									if ((tmp25)){
										HX_STACK_LINE(365)
										_this->_isimmutable();
									}
								}
								HX_STACK_LINE(365)
								bool tmp24 = (x1 != x1);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(365)
								bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(365)
								bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(365)
								if ((tmp25)){
									HX_STACK_LINE(365)
									tmp26 = (y != y);
								}
								else{
									HX_STACK_LINE(365)
									tmp26 = true;
								}
								HX_STACK_LINE(365)
								if ((tmp26)){
									HX_STACK_LINE(365)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
								}
								HX_STACK_LINE(365)
								Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(365)
								{
									HX_STACK_LINE(365)
									{
										HX_STACK_LINE(365)
										bool tmp28 = (ret != null());		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(365)
										bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(365)
										if ((tmp28)){
											HX_STACK_LINE(365)
											tmp29 = ret->zpp_disp;
										}
										else{
											HX_STACK_LINE(365)
											tmp29 = false;
										}
										HX_STACK_LINE(365)
										if ((tmp29)){
											HX_STACK_LINE(365)
											::String tmp30 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(365)
											::String tmp31 = (tmp30 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(365)
											HX_STACK_DO_THROW(tmp31);
										}
									}
									HX_STACK_LINE(365)
									{
										HX_STACK_LINE(365)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(365)
										bool tmp28 = (_this->_validate != null());		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(365)
										if ((tmp28)){
											HX_STACK_LINE(365)
											_this->_validate();
										}
									}
									HX_STACK_LINE(365)
									tmp27 = ret->zpp_inner->x;
								}
								HX_STACK_LINE(365)
								Float tmp28 = x1;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(365)
								bool tmp29 = (tmp27 == tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(365)
								bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(365)
								if ((tmp29)){
									HX_STACK_LINE(365)
									Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(365)
									{
										HX_STACK_LINE(365)
										{
											HX_STACK_LINE(365)
											bool tmp32 = (ret != null());		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(365)
											bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(365)
											bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(365)
											bool tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(365)
											if ((tmp35)){
												HX_STACK_LINE(365)
												tmp34 = ret->zpp_disp;
											}
											else{
												HX_STACK_LINE(365)
												tmp34 = false;
											}
											HX_STACK_LINE(365)
											bool tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(365)
											if ((tmp36)){
												HX_STACK_LINE(365)
												::String tmp37 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(365)
												::String tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(365)
												::String tmp39 = (tmp38 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(365)
												::String tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(365)
												::String tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(365)
												HX_STACK_DO_THROW(tmp41);
											}
										}
										HX_STACK_LINE(365)
										{
											HX_STACK_LINE(365)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(365)
											bool tmp32 = (_this->_validate != null());		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(365)
											bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(365)
											bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(365)
											if ((tmp34)){
												HX_STACK_LINE(365)
												_this->_validate();
											}
										}
										HX_STACK_LINE(365)
										Float tmp32 = ret->zpp_inner->y;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(365)
										tmp31 = tmp32;
									}
									HX_STACK_LINE(365)
									Float tmp32 = y;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(365)
									tmp30 = (tmp31 == tmp32);
								}
								else{
									HX_STACK_LINE(365)
									tmp30 = false;
								}
								HX_STACK_LINE(365)
								bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(365)
								if ((tmp31)){
									HX_STACK_LINE(365)
									{
										HX_STACK_LINE(365)
										ret->zpp_inner->x = x1;
										HX_STACK_LINE(365)
										ret->zpp_inner->y = y;
										HX_STACK_LINE(365)
										{
										}
									}
									HX_STACK_LINE(365)
									{
										HX_STACK_LINE(365)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(365)
										bool tmp32 = (_this->_invalidate != null());		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(365)
										if ((tmp32)){
											HX_STACK_LINE(365)
											::zpp_nape::geom::ZPP_Vec2 tmp33 = _this;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(365)
											_this->_invalidate(tmp33);
										}
									}
								}
								HX_STACK_LINE(365)
								ret;
							}
							HX_STACK_LINE(365)
							ret->zpp_inner->weak = weak;
							HX_STACK_LINE(365)
							tmp17 = ret;
						}
					}
					HX_STACK_LINE(365)
					tmp16->push(tmp17);
				}
			}
		}
		else{
			HX_STACK_LINE(384)
			Dynamic tmp9 = localVerts;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(384)
			bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::nape::geom::Vec2List >());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(384)
			if ((tmp10)){
				HX_STACK_LINE(385)
				::nape::geom::Vec2List lv = localVerts;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(386)
				{
					HX_STACK_LINE(386)
					::nape::geom::Vec2Iterator tmp11 = lv->iterator();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(386)
					::nape::geom::Vec2Iterator _g = tmp11;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(386)
					while((true)){
						HX_STACK_LINE(386)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(386)
						{
							HX_STACK_LINE(386)
							::zpp_nape::util::ZPP_Vec2List tmp13 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(386)
							tmp13->valmod();
							HX_STACK_LINE(386)
							int tmp14 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(386)
							int length = tmp14;		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(386)
							_g->zpp_critical = true;
							HX_STACK_LINE(386)
							bool tmp15 = (_g->zpp_i < length);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(386)
							if ((tmp15)){
								HX_STACK_LINE(386)
								tmp12 = true;
							}
							else{
								HX_STACK_LINE(386)
								{
									HX_STACK_LINE(386)
									::nape::geom::Vec2Iterator tmp16 = ::nape::geom::Vec2Iterator_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(386)
									_g->zpp_next = tmp16;
									HX_STACK_LINE(386)
									::nape::geom::Vec2Iterator_obj::zpp_pool = _g;
									HX_STACK_LINE(386)
									_g->zpp_inner = null();
								}
								HX_STACK_LINE(386)
								tmp12 = false;
							}
						}
						HX_STACK_LINE(386)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(386)
						if ((tmp13)){
							HX_STACK_LINE(386)
							break;
						}
						HX_STACK_LINE(386)
						::nape::geom::Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(386)
						{
							HX_STACK_LINE(386)
							_g->zpp_critical = false;
							HX_STACK_LINE(386)
							int tmp15 = (_g->zpp_i)++;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(386)
							tmp14 = _g->zpp_inner->at(tmp15);
						}
						HX_STACK_LINE(386)
						::nape::geom::Vec2 x = tmp14;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(388)
						bool tmp15 = (x == null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(388)
						if ((tmp15)){
							HX_STACK_LINE(388)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2List contains null objects","\x86","\xc5","\xd1","\x3e"));
						}
						HX_STACK_LINE(390)
						{
							HX_STACK_LINE(392)
							bool tmp16 = (x != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(392)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(392)
							if ((tmp16)){
								HX_STACK_LINE(392)
								tmp17 = x->zpp_disp;
							}
							else{
								HX_STACK_LINE(392)
								tmp17 = false;
							}
							HX_STACK_LINE(392)
							if ((tmp17)){
								HX_STACK_LINE(392)
								::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(392)
								::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(392)
								HX_STACK_DO_THROW(tmp19);
							}
						}
						HX_STACK_LINE(395)
						::nape::geom::Vec2List tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(395)
						{
							HX_STACK_LINE(395)
							::zpp_nape::shape::ZPP_Polygon tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(395)
							::nape::geom::Vec2List tmp18 = tmp17->wrap_lverts;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(395)
							bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(395)
							if ((tmp19)){
								HX_STACK_LINE(395)
								::zpp_nape::shape::ZPP_Polygon tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(395)
								tmp20->getlverts();
							}
							HX_STACK_LINE(395)
							::zpp_nape::shape::ZPP_Polygon tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(395)
							tmp16 = tmp20->wrap_lverts;
						}
						HX_STACK_LINE(395)
						::nape::geom::Vec2 tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(395)
						{
							HX_STACK_LINE(395)
							bool weak = false;		HX_STACK_VAR(weak,"weak");
							HX_STACK_LINE(395)
							{
								HX_STACK_LINE(395)
								bool tmp18 = (x != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(395)
								bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(395)
								if ((tmp18)){
									HX_STACK_LINE(395)
									tmp19 = x->zpp_disp;
								}
								else{
									HX_STACK_LINE(395)
									tmp19 = false;
								}
								HX_STACK_LINE(395)
								if ((tmp19)){
									HX_STACK_LINE(395)
									::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(395)
									::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(395)
									HX_STACK_DO_THROW(tmp21);
								}
							}
							HX_STACK_LINE(395)
							{
								HX_STACK_LINE(395)
								Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(395)
								{
									HX_STACK_LINE(395)
									bool tmp19 = x->zpp_disp;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(395)
									if ((tmp19)){
										HX_STACK_LINE(395)
										::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(395)
										::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(395)
										HX_STACK_DO_THROW(tmp21);
									}
									HX_STACK_LINE(395)
									{
										HX_STACK_LINE(395)
										::zpp_nape::geom::ZPP_Vec2 _this = x->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(395)
										bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(395)
										if ((tmp20)){
											HX_STACK_LINE(395)
											_this->_validate();
										}
									}
									HX_STACK_LINE(395)
									tmp18 = x->zpp_inner->x;
								}
								HX_STACK_LINE(395)
								Float x1 = tmp18;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(395)
								Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(395)
								{
									HX_STACK_LINE(395)
									bool tmp20 = x->zpp_disp;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(395)
									if ((tmp20)){
										HX_STACK_LINE(395)
										::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(395)
										::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(395)
										HX_STACK_DO_THROW(tmp22);
									}
									HX_STACK_LINE(395)
									{
										HX_STACK_LINE(395)
										::zpp_nape::geom::ZPP_Vec2 _this = x->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(395)
										bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(395)
										if ((tmp21)){
											HX_STACK_LINE(395)
											_this->_validate();
										}
									}
									HX_STACK_LINE(395)
									tmp19 = x->zpp_inner->y;
								}
								HX_STACK_LINE(395)
								Float y = tmp19;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(395)
								bool tmp20 = (x1 != x1);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(395)
								bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(395)
								bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(395)
								if ((tmp21)){
									HX_STACK_LINE(395)
									tmp22 = (y != y);
								}
								else{
									HX_STACK_LINE(395)
									tmp22 = true;
								}
								HX_STACK_LINE(395)
								if ((tmp22)){
									HX_STACK_LINE(395)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
								}
								HX_STACK_LINE(395)
								::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(395)
								{
									HX_STACK_LINE(395)
									::nape::geom::Vec2 tmp23 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(395)
									bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(395)
									if ((tmp24)){
										HX_STACK_LINE(395)
										::nape::geom::Vec2 tmp25 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(395)
										ret = tmp25;
									}
									else{
										HX_STACK_LINE(395)
										::nape::geom::Vec2 tmp25 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(395)
										ret = tmp25;
										HX_STACK_LINE(395)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(395)
										ret->zpp_pool = null();
										HX_STACK_LINE(395)
										ret->zpp_disp = false;
										HX_STACK_LINE(395)
										::nape::geom::Vec2 tmp26 = ret;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(395)
										::nape::geom::Vec2 tmp27 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(395)
										bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(395)
										if ((tmp28)){
											HX_STACK_LINE(395)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
										}
									}
								}
								HX_STACK_LINE(395)
								bool tmp23 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(395)
								if ((tmp23)){
									HX_STACK_LINE(395)
									::zpp_nape::geom::ZPP_Vec2 tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(395)
									{
										HX_STACK_LINE(395)
										bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
										HX_STACK_LINE(395)
										::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(395)
										{
											HX_STACK_LINE(395)
											::zpp_nape::geom::ZPP_Vec2 tmp25 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(395)
											bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(395)
											if ((tmp26)){
												HX_STACK_LINE(395)
												::zpp_nape::geom::ZPP_Vec2 tmp27 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(395)
												ret1 = tmp27;
											}
											else{
												HX_STACK_LINE(395)
												::zpp_nape::geom::ZPP_Vec2 tmp27 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(395)
												ret1 = tmp27;
												HX_STACK_LINE(395)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
												HX_STACK_LINE(395)
												ret1->next = null();
											}
											HX_STACK_LINE(395)
											ret1->weak = false;
										}
										HX_STACK_LINE(395)
										ret1->_immutable = immutable;
										HX_STACK_LINE(395)
										{
											HX_STACK_LINE(395)
											ret1->x = x1;
											HX_STACK_LINE(395)
											ret1->y = y;
											HX_STACK_LINE(395)
											{
											}
										}
										HX_STACK_LINE(395)
										tmp24 = ret1;
									}
									HX_STACK_LINE(395)
									ret->zpp_inner = tmp24;
									HX_STACK_LINE(395)
									ret->zpp_inner->outer = ret;
								}
								else{
									HX_STACK_LINE(395)
									{
										HX_STACK_LINE(395)
										bool tmp24 = (ret != null());		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(395)
										bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(395)
										if ((tmp24)){
											HX_STACK_LINE(395)
											tmp25 = ret->zpp_disp;
										}
										else{
											HX_STACK_LINE(395)
											tmp25 = false;
										}
										HX_STACK_LINE(395)
										if ((tmp25)){
											HX_STACK_LINE(395)
											::String tmp26 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(395)
											::String tmp27 = (tmp26 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(395)
											HX_STACK_DO_THROW(tmp27);
										}
									}
									HX_STACK_LINE(395)
									{
										HX_STACK_LINE(395)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(395)
										bool tmp24 = _this->_immutable;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(395)
										if ((tmp24)){
											HX_STACK_LINE(395)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
										}
										HX_STACK_LINE(395)
										bool tmp25 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(395)
										if ((tmp25)){
											HX_STACK_LINE(395)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(395)
									bool tmp24 = (x1 != x1);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(395)
									bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(395)
									bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(395)
									if ((tmp25)){
										HX_STACK_LINE(395)
										tmp26 = (y != y);
									}
									else{
										HX_STACK_LINE(395)
										tmp26 = true;
									}
									HX_STACK_LINE(395)
									if ((tmp26)){
										HX_STACK_LINE(395)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
									}
									HX_STACK_LINE(395)
									Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(395)
									{
										HX_STACK_LINE(395)
										{
											HX_STACK_LINE(395)
											bool tmp28 = (ret != null());		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(395)
											bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(395)
											if ((tmp28)){
												HX_STACK_LINE(395)
												tmp29 = ret->zpp_disp;
											}
											else{
												HX_STACK_LINE(395)
												tmp29 = false;
											}
											HX_STACK_LINE(395)
											if ((tmp29)){
												HX_STACK_LINE(395)
												::String tmp30 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(395)
												::String tmp31 = (tmp30 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(395)
												HX_STACK_DO_THROW(tmp31);
											}
										}
										HX_STACK_LINE(395)
										{
											HX_STACK_LINE(395)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(395)
											bool tmp28 = (_this->_validate != null());		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(395)
											if ((tmp28)){
												HX_STACK_LINE(395)
												_this->_validate();
											}
										}
										HX_STACK_LINE(395)
										tmp27 = ret->zpp_inner->x;
									}
									HX_STACK_LINE(395)
									Float tmp28 = x1;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(395)
									bool tmp29 = (tmp27 == tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(395)
									bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(395)
									if ((tmp29)){
										HX_STACK_LINE(395)
										Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(395)
										{
											HX_STACK_LINE(395)
											{
												HX_STACK_LINE(395)
												bool tmp32 = (ret != null());		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(395)
												bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(395)
												bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(395)
												bool tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(395)
												if ((tmp35)){
													HX_STACK_LINE(395)
													tmp34 = ret->zpp_disp;
												}
												else{
													HX_STACK_LINE(395)
													tmp34 = false;
												}
												HX_STACK_LINE(395)
												bool tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(395)
												if ((tmp36)){
													HX_STACK_LINE(395)
													::String tmp37 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(395)
													::String tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(395)
													::String tmp39 = (tmp38 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(395)
													::String tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(395)
													::String tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(395)
													HX_STACK_DO_THROW(tmp41);
												}
											}
											HX_STACK_LINE(395)
											{
												HX_STACK_LINE(395)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(395)
												bool tmp32 = (_this->_validate != null());		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(395)
												bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(395)
												bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(395)
												if ((tmp34)){
													HX_STACK_LINE(395)
													_this->_validate();
												}
											}
											HX_STACK_LINE(395)
											Float tmp32 = ret->zpp_inner->y;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(395)
											tmp31 = tmp32;
										}
										HX_STACK_LINE(395)
										Float tmp32 = y;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(395)
										tmp30 = (tmp31 == tmp32);
									}
									else{
										HX_STACK_LINE(395)
										tmp30 = false;
									}
									HX_STACK_LINE(395)
									bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(395)
									if ((tmp31)){
										HX_STACK_LINE(395)
										{
											HX_STACK_LINE(395)
											ret->zpp_inner->x = x1;
											HX_STACK_LINE(395)
											ret->zpp_inner->y = y;
											HX_STACK_LINE(395)
											{
											}
										}
										HX_STACK_LINE(395)
										{
											HX_STACK_LINE(395)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(395)
											bool tmp32 = (_this->_invalidate != null());		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(395)
											if ((tmp32)){
												HX_STACK_LINE(395)
												::zpp_nape::geom::ZPP_Vec2 tmp33 = _this;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(395)
												_this->_invalidate(tmp33);
											}
										}
									}
									HX_STACK_LINE(395)
									ret;
								}
								HX_STACK_LINE(395)
								ret->zpp_inner->weak = weak;
								HX_STACK_LINE(395)
								tmp17 = ret;
							}
						}
						HX_STACK_LINE(395)
						tmp16->push(tmp17);
					}
				}
			}
			else{
				HX_STACK_LINE(398)
				Dynamic tmp11 = localVerts;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(398)
				bool tmp12 = ::Std_obj::is(tmp11,hx::ClassOf< ::nape::geom::GeomPoly >());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(398)
				if ((tmp12)){
					HX_STACK_LINE(399)
					::nape::geom::GeomPoly lv = localVerts;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(400)
					{
						HX_STACK_LINE(402)
						bool tmp13 = (lv != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(402)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(402)
						if ((tmp13)){
							HX_STACK_LINE(402)
							tmp14 = lv->zpp_disp;
						}
						else{
							HX_STACK_LINE(402)
							tmp14 = false;
						}
						HX_STACK_LINE(402)
						if ((tmp14)){
							HX_STACK_LINE(402)
							::String tmp15 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(402)
							::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(402)
							HX_STACK_DO_THROW(tmp16);
						}
					}
					HX_STACK_LINE(405)
					::zpp_nape::geom::ZPP_GeomVert tmp13 = lv->zpp_inner->vertices;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(405)
					::zpp_nape::geom::ZPP_GeomVert verts = tmp13;		HX_STACK_VAR(verts,"verts");
					HX_STACK_LINE(406)
					bool tmp14 = (verts != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(406)
					if ((tmp14)){
						HX_STACK_LINE(407)
						::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
						HX_STACK_LINE(408)
						while((true)){
							HX_STACK_LINE(409)
							::nape::geom::Vec2 tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(409)
							{
								HX_STACK_LINE(409)
								Float x = vite->x;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(409)
								Float y = vite->y;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(409)
								bool weak = false;		HX_STACK_VAR(weak,"weak");
								HX_STACK_LINE(409)
								bool tmp16 = (x != x);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(409)
								bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(409)
								bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(409)
								if ((tmp17)){
									HX_STACK_LINE(409)
									tmp18 = (y != y);
								}
								else{
									HX_STACK_LINE(409)
									tmp18 = true;
								}
								HX_STACK_LINE(409)
								if ((tmp18)){
									HX_STACK_LINE(409)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
								}
								HX_STACK_LINE(409)
								::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(409)
								{
									HX_STACK_LINE(409)
									::nape::geom::Vec2 tmp19 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(409)
									bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(409)
									if ((tmp20)){
										HX_STACK_LINE(409)
										::nape::geom::Vec2 tmp21 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(409)
										ret = tmp21;
									}
									else{
										HX_STACK_LINE(409)
										::nape::geom::Vec2 tmp21 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(409)
										ret = tmp21;
										HX_STACK_LINE(409)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(409)
										ret->zpp_pool = null();
										HX_STACK_LINE(409)
										ret->zpp_disp = false;
										HX_STACK_LINE(409)
										::nape::geom::Vec2 tmp22 = ret;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(409)
										::nape::geom::Vec2 tmp23 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(409)
										bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(409)
										if ((tmp24)){
											HX_STACK_LINE(409)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
										}
									}
								}
								HX_STACK_LINE(409)
								bool tmp19 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(409)
								if ((tmp19)){
									HX_STACK_LINE(409)
									::zpp_nape::geom::ZPP_Vec2 tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(409)
									{
										HX_STACK_LINE(409)
										bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
										HX_STACK_LINE(409)
										::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(409)
										{
											HX_STACK_LINE(409)
											::zpp_nape::geom::ZPP_Vec2 tmp21 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(409)
											bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(409)
											if ((tmp22)){
												HX_STACK_LINE(409)
												::zpp_nape::geom::ZPP_Vec2 tmp23 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(409)
												ret1 = tmp23;
											}
											else{
												HX_STACK_LINE(409)
												::zpp_nape::geom::ZPP_Vec2 tmp23 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(409)
												ret1 = tmp23;
												HX_STACK_LINE(409)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
												HX_STACK_LINE(409)
												ret1->next = null();
											}
											HX_STACK_LINE(409)
											ret1->weak = false;
										}
										HX_STACK_LINE(409)
										ret1->_immutable = immutable;
										HX_STACK_LINE(409)
										{
											HX_STACK_LINE(409)
											ret1->x = x;
											HX_STACK_LINE(409)
											ret1->y = y;
											HX_STACK_LINE(409)
											{
											}
										}
										HX_STACK_LINE(409)
										tmp20 = ret1;
									}
									HX_STACK_LINE(409)
									ret->zpp_inner = tmp20;
									HX_STACK_LINE(409)
									ret->zpp_inner->outer = ret;
								}
								else{
									HX_STACK_LINE(409)
									{
										HX_STACK_LINE(409)
										bool tmp20 = (ret != null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(409)
										bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(409)
										if ((tmp20)){
											HX_STACK_LINE(409)
											tmp21 = ret->zpp_disp;
										}
										else{
											HX_STACK_LINE(409)
											tmp21 = false;
										}
										HX_STACK_LINE(409)
										if ((tmp21)){
											HX_STACK_LINE(409)
											::String tmp22 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(409)
											::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(409)
											HX_STACK_DO_THROW(tmp23);
										}
									}
									HX_STACK_LINE(409)
									{
										HX_STACK_LINE(409)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(409)
										bool tmp20 = _this->_immutable;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(409)
										if ((tmp20)){
											HX_STACK_LINE(409)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
										}
										HX_STACK_LINE(409)
										bool tmp21 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(409)
										if ((tmp21)){
											HX_STACK_LINE(409)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(409)
									bool tmp20 = (x != x);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(409)
									bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(409)
									bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(409)
									if ((tmp21)){
										HX_STACK_LINE(409)
										tmp22 = (y != y);
									}
									else{
										HX_STACK_LINE(409)
										tmp22 = true;
									}
									HX_STACK_LINE(409)
									if ((tmp22)){
										HX_STACK_LINE(409)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
									}
									HX_STACK_LINE(409)
									Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(409)
									{
										HX_STACK_LINE(409)
										{
											HX_STACK_LINE(409)
											bool tmp24 = (ret != null());		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(409)
											bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(409)
											if ((tmp24)){
												HX_STACK_LINE(409)
												tmp25 = ret->zpp_disp;
											}
											else{
												HX_STACK_LINE(409)
												tmp25 = false;
											}
											HX_STACK_LINE(409)
											if ((tmp25)){
												HX_STACK_LINE(409)
												::String tmp26 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(409)
												::String tmp27 = (tmp26 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(409)
												HX_STACK_DO_THROW(tmp27);
											}
										}
										HX_STACK_LINE(409)
										{
											HX_STACK_LINE(409)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(409)
											bool tmp24 = (_this->_validate != null());		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(409)
											if ((tmp24)){
												HX_STACK_LINE(409)
												_this->_validate();
											}
										}
										HX_STACK_LINE(409)
										tmp23 = ret->zpp_inner->x;
									}
									HX_STACK_LINE(409)
									Float tmp24 = x;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(409)
									bool tmp25 = (tmp23 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(409)
									bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(409)
									if ((tmp25)){
										HX_STACK_LINE(409)
										Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(409)
										{
											HX_STACK_LINE(409)
											{
												HX_STACK_LINE(409)
												bool tmp28 = (ret != null());		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(409)
												bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(409)
												bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(409)
												bool tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(409)
												if ((tmp31)){
													HX_STACK_LINE(409)
													tmp30 = ret->zpp_disp;
												}
												else{
													HX_STACK_LINE(409)
													tmp30 = false;
												}
												HX_STACK_LINE(409)
												bool tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(409)
												if ((tmp32)){
													HX_STACK_LINE(409)
													::String tmp33 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(409)
													::String tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(409)
													::String tmp35 = (tmp34 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(409)
													::String tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(409)
													::String tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(409)
													HX_STACK_DO_THROW(tmp37);
												}
											}
											HX_STACK_LINE(409)
											{
												HX_STACK_LINE(409)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(409)
												bool tmp28 = (_this->_validate != null());		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(409)
												bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(409)
												bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(409)
												if ((tmp30)){
													HX_STACK_LINE(409)
													_this->_validate();
												}
											}
											HX_STACK_LINE(409)
											Float tmp28 = ret->zpp_inner->y;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(409)
											tmp27 = tmp28;
										}
										HX_STACK_LINE(409)
										Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(409)
										tmp26 = (tmp27 == tmp28);
									}
									else{
										HX_STACK_LINE(409)
										tmp26 = false;
									}
									HX_STACK_LINE(409)
									bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(409)
									if ((tmp27)){
										HX_STACK_LINE(409)
										{
											HX_STACK_LINE(409)
											ret->zpp_inner->x = x;
											HX_STACK_LINE(409)
											ret->zpp_inner->y = y;
											HX_STACK_LINE(409)
											{
											}
										}
										HX_STACK_LINE(409)
										{
											HX_STACK_LINE(409)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(409)
											bool tmp28 = (_this->_invalidate != null());		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(409)
											if ((tmp28)){
												HX_STACK_LINE(409)
												::zpp_nape::geom::ZPP_Vec2 tmp29 = _this;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(409)
												_this->_invalidate(tmp29);
											}
										}
									}
									HX_STACK_LINE(409)
									ret;
								}
								HX_STACK_LINE(409)
								ret->zpp_inner->weak = weak;
								HX_STACK_LINE(409)
								tmp15 = ret;
							}
							HX_STACK_LINE(409)
							::nape::geom::Vec2 x = tmp15;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(410)
							vite = vite->next;
							HX_STACK_LINE(411)
							::nape::geom::Vec2List tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(411)
							{
								HX_STACK_LINE(411)
								::zpp_nape::shape::ZPP_Polygon tmp17 = this->zpp_inner_zn;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(411)
								::nape::geom::Vec2List tmp18 = tmp17->wrap_lverts;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(411)
								bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(411)
								if ((tmp19)){
									HX_STACK_LINE(411)
									::zpp_nape::shape::ZPP_Polygon tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(411)
									tmp20->getlverts();
								}
								HX_STACK_LINE(411)
								::zpp_nape::shape::ZPP_Polygon tmp20 = this->zpp_inner_zn;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(411)
								tmp16 = tmp20->wrap_lverts;
							}
							HX_STACK_LINE(411)
							::nape::geom::Vec2 tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(411)
							{
								HX_STACK_LINE(411)
								bool weak = false;		HX_STACK_VAR(weak,"weak");
								HX_STACK_LINE(411)
								{
									HX_STACK_LINE(411)
									bool tmp18 = (x != null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(411)
									bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(411)
									if ((tmp18)){
										HX_STACK_LINE(411)
										tmp19 = x->zpp_disp;
									}
									else{
										HX_STACK_LINE(411)
										tmp19 = false;
									}
									HX_STACK_LINE(411)
									if ((tmp19)){
										HX_STACK_LINE(411)
										::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(411)
										::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(411)
										HX_STACK_DO_THROW(tmp21);
									}
								}
								HX_STACK_LINE(411)
								{
									HX_STACK_LINE(411)
									Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(411)
									{
										HX_STACK_LINE(411)
										bool tmp19 = x->zpp_disp;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(411)
										if ((tmp19)){
											HX_STACK_LINE(411)
											::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(411)
											::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(411)
											HX_STACK_DO_THROW(tmp21);
										}
										HX_STACK_LINE(411)
										{
											HX_STACK_LINE(411)
											::zpp_nape::geom::ZPP_Vec2 _this = x->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(411)
											bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(411)
											if ((tmp20)){
												HX_STACK_LINE(411)
												_this->_validate();
											}
										}
										HX_STACK_LINE(411)
										tmp18 = x->zpp_inner->x;
									}
									HX_STACK_LINE(411)
									Float x1 = tmp18;		HX_STACK_VAR(x1,"x1");
									HX_STACK_LINE(411)
									Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(411)
									{
										HX_STACK_LINE(411)
										bool tmp20 = x->zpp_disp;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(411)
										if ((tmp20)){
											HX_STACK_LINE(411)
											::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(411)
											::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(411)
											HX_STACK_DO_THROW(tmp22);
										}
										HX_STACK_LINE(411)
										{
											HX_STACK_LINE(411)
											::zpp_nape::geom::ZPP_Vec2 _this = x->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(411)
											bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(411)
											if ((tmp21)){
												HX_STACK_LINE(411)
												_this->_validate();
											}
										}
										HX_STACK_LINE(411)
										tmp19 = x->zpp_inner->y;
									}
									HX_STACK_LINE(411)
									Float y = tmp19;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(411)
									bool tmp20 = (x1 != x1);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(411)
									bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(411)
									bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(411)
									if ((tmp21)){
										HX_STACK_LINE(411)
										tmp22 = (y != y);
									}
									else{
										HX_STACK_LINE(411)
										tmp22 = true;
									}
									HX_STACK_LINE(411)
									if ((tmp22)){
										HX_STACK_LINE(411)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
									}
									HX_STACK_LINE(411)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(411)
									{
										HX_STACK_LINE(411)
										::nape::geom::Vec2 tmp23 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(411)
										bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(411)
										if ((tmp24)){
											HX_STACK_LINE(411)
											::nape::geom::Vec2 tmp25 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(411)
											ret = tmp25;
										}
										else{
											HX_STACK_LINE(411)
											::nape::geom::Vec2 tmp25 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(411)
											ret = tmp25;
											HX_STACK_LINE(411)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
											HX_STACK_LINE(411)
											ret->zpp_pool = null();
											HX_STACK_LINE(411)
											ret->zpp_disp = false;
											HX_STACK_LINE(411)
											::nape::geom::Vec2 tmp26 = ret;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(411)
											::nape::geom::Vec2 tmp27 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(411)
											bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(411)
											if ((tmp28)){
												HX_STACK_LINE(411)
												::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
											}
										}
									}
									HX_STACK_LINE(411)
									bool tmp23 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(411)
									if ((tmp23)){
										HX_STACK_LINE(411)
										::zpp_nape::geom::ZPP_Vec2 tmp24;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(411)
										{
											HX_STACK_LINE(411)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(411)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(411)
											{
												HX_STACK_LINE(411)
												::zpp_nape::geom::ZPP_Vec2 tmp25 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(411)
												bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(411)
												if ((tmp26)){
													HX_STACK_LINE(411)
													::zpp_nape::geom::ZPP_Vec2 tmp27 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(411)
													ret1 = tmp27;
												}
												else{
													HX_STACK_LINE(411)
													::zpp_nape::geom::ZPP_Vec2 tmp27 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(411)
													ret1 = tmp27;
													HX_STACK_LINE(411)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(411)
													ret1->next = null();
												}
												HX_STACK_LINE(411)
												ret1->weak = false;
											}
											HX_STACK_LINE(411)
											ret1->_immutable = immutable;
											HX_STACK_LINE(411)
											{
												HX_STACK_LINE(411)
												ret1->x = x1;
												HX_STACK_LINE(411)
												ret1->y = y;
												HX_STACK_LINE(411)
												{
												}
											}
											HX_STACK_LINE(411)
											tmp24 = ret1;
										}
										HX_STACK_LINE(411)
										ret->zpp_inner = tmp24;
										HX_STACK_LINE(411)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(411)
										{
											HX_STACK_LINE(411)
											bool tmp24 = (ret != null());		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(411)
											bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(411)
											if ((tmp24)){
												HX_STACK_LINE(411)
												tmp25 = ret->zpp_disp;
											}
											else{
												HX_STACK_LINE(411)
												tmp25 = false;
											}
											HX_STACK_LINE(411)
											if ((tmp25)){
												HX_STACK_LINE(411)
												::String tmp26 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(411)
												::String tmp27 = (tmp26 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(411)
												HX_STACK_DO_THROW(tmp27);
											}
										}
										HX_STACK_LINE(411)
										{
											HX_STACK_LINE(411)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(411)
											bool tmp24 = _this->_immutable;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(411)
											if ((tmp24)){
												HX_STACK_LINE(411)
												HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
											}
											HX_STACK_LINE(411)
											bool tmp25 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(411)
											if ((tmp25)){
												HX_STACK_LINE(411)
												_this->_isimmutable();
											}
										}
										HX_STACK_LINE(411)
										bool tmp24 = (x1 != x1);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(411)
										bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(411)
										bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(411)
										if ((tmp25)){
											HX_STACK_LINE(411)
											tmp26 = (y != y);
										}
										else{
											HX_STACK_LINE(411)
											tmp26 = true;
										}
										HX_STACK_LINE(411)
										if ((tmp26)){
											HX_STACK_LINE(411)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
										}
										HX_STACK_LINE(411)
										Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(411)
										{
											HX_STACK_LINE(411)
											{
												HX_STACK_LINE(411)
												bool tmp28 = (ret != null());		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(411)
												bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(411)
												if ((tmp28)){
													HX_STACK_LINE(411)
													tmp29 = ret->zpp_disp;
												}
												else{
													HX_STACK_LINE(411)
													tmp29 = false;
												}
												HX_STACK_LINE(411)
												if ((tmp29)){
													HX_STACK_LINE(411)
													::String tmp30 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(411)
													::String tmp31 = (tmp30 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(411)
													HX_STACK_DO_THROW(tmp31);
												}
											}
											HX_STACK_LINE(411)
											{
												HX_STACK_LINE(411)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(411)
												bool tmp28 = (_this->_validate != null());		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(411)
												if ((tmp28)){
													HX_STACK_LINE(411)
													_this->_validate();
												}
											}
											HX_STACK_LINE(411)
											tmp27 = ret->zpp_inner->x;
										}
										HX_STACK_LINE(411)
										Float tmp28 = x1;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(411)
										bool tmp29 = (tmp27 == tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(411)
										bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(411)
										if ((tmp29)){
											HX_STACK_LINE(411)
											Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(411)
											{
												HX_STACK_LINE(411)
												{
													HX_STACK_LINE(411)
													bool tmp32 = (ret != null());		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(411)
													bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(411)
													bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(411)
													bool tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(411)
													if ((tmp35)){
														HX_STACK_LINE(411)
														tmp34 = ret->zpp_disp;
													}
													else{
														HX_STACK_LINE(411)
														tmp34 = false;
													}
													HX_STACK_LINE(411)
													bool tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(411)
													if ((tmp36)){
														HX_STACK_LINE(411)
														::String tmp37 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(411)
														::String tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
														HX_STACK_LINE(411)
														::String tmp39 = (tmp38 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp39,"tmp39");
														HX_STACK_LINE(411)
														::String tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
														HX_STACK_LINE(411)
														::String tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(411)
														HX_STACK_DO_THROW(tmp41);
													}
												}
												HX_STACK_LINE(411)
												{
													HX_STACK_LINE(411)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(411)
													bool tmp32 = (_this->_validate != null());		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(411)
													bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(411)
													bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(411)
													if ((tmp34)){
														HX_STACK_LINE(411)
														_this->_validate();
													}
												}
												HX_STACK_LINE(411)
												Float tmp32 = ret->zpp_inner->y;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(411)
												tmp31 = tmp32;
											}
											HX_STACK_LINE(411)
											Float tmp32 = y;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(411)
											tmp30 = (tmp31 == tmp32);
										}
										else{
											HX_STACK_LINE(411)
											tmp30 = false;
										}
										HX_STACK_LINE(411)
										bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(411)
										if ((tmp31)){
											HX_STACK_LINE(411)
											{
												HX_STACK_LINE(411)
												ret->zpp_inner->x = x1;
												HX_STACK_LINE(411)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(411)
												{
												}
											}
											HX_STACK_LINE(411)
											{
												HX_STACK_LINE(411)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(411)
												bool tmp32 = (_this->_invalidate != null());		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(411)
												if ((tmp32)){
													HX_STACK_LINE(411)
													::zpp_nape::geom::ZPP_Vec2 tmp33 = _this;		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(411)
													_this->_invalidate(tmp33);
												}
											}
										}
										HX_STACK_LINE(411)
										ret;
									}
									HX_STACK_LINE(411)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(411)
									tmp17 = ret;
								}
							}
							HX_STACK_LINE(411)
							tmp16->push(tmp17);
							HX_STACK_LINE(412)
							{
								HX_STACK_LINE(412)
								{
									HX_STACK_LINE(412)
									bool tmp18 = (x != null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(412)
									bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(412)
									if ((tmp18)){
										HX_STACK_LINE(412)
										tmp19 = x->zpp_disp;
									}
									else{
										HX_STACK_LINE(412)
										tmp19 = false;
									}
									HX_STACK_LINE(412)
									if ((tmp19)){
										HX_STACK_LINE(412)
										::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(412)
										::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(412)
										HX_STACK_DO_THROW(tmp21);
									}
								}
								HX_STACK_LINE(412)
								{
									HX_STACK_LINE(412)
									::zpp_nape::geom::ZPP_Vec2 _this = x->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(412)
									bool tmp18 = _this->_immutable;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(412)
									if ((tmp18)){
										HX_STACK_LINE(412)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
									}
									HX_STACK_LINE(412)
									bool tmp19 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(412)
									if ((tmp19)){
										HX_STACK_LINE(412)
										_this->_isimmutable();
									}
								}
								HX_STACK_LINE(412)
								bool tmp18 = x->zpp_inner->_inuse;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(412)
								if ((tmp18)){
									HX_STACK_LINE(412)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
								}
								HX_STACK_LINE(412)
								::zpp_nape::geom::ZPP_Vec2 inner = x->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(412)
								x->zpp_inner->outer = null();
								HX_STACK_LINE(412)
								x->zpp_inner = null();
								HX_STACK_LINE(412)
								{
									HX_STACK_LINE(412)
									::nape::geom::Vec2 o = x;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(412)
									o->zpp_pool = null();
									HX_STACK_LINE(412)
									::nape::geom::Vec2 tmp19 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(412)
									bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(412)
									if ((tmp20)){
										HX_STACK_LINE(412)
										::nape::geom::Vec2 tmp21 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(412)
										tmp21->zpp_pool = o;
									}
									else{
										HX_STACK_LINE(412)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(412)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
									HX_STACK_LINE(412)
									o->zpp_disp = true;
								}
								HX_STACK_LINE(412)
								{
									HX_STACK_LINE(412)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(412)
									{
										HX_STACK_LINE(412)
										bool tmp19 = (o->outer != null());		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(412)
										if ((tmp19)){
											HX_STACK_LINE(412)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(412)
											o->outer = null();
										}
										HX_STACK_LINE(412)
										o->_isimmutable = null();
										HX_STACK_LINE(412)
										o->_validate = null();
										HX_STACK_LINE(412)
										o->_invalidate = null();
									}
									HX_STACK_LINE(412)
									::zpp_nape::geom::ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(412)
									o->next = tmp19;
									HX_STACK_LINE(412)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(414)
							bool tmp18 = (vite != verts);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(414)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(408)
							if ((tmp19)){
								HX_STACK_LINE(408)
								break;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(419)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Invalid type for polygon object, should be Array<Vec2>, Vec2List, GeomPoly or for flash10+ flash.Vector<Vec2>","\xbb","\x80","\x45","\x90"));
				}
			}
		}
	}
	HX_STACK_LINE(423)
	{
		HX_STACK_LINE(424)
		Dynamic tmp7 = localVerts;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(424)
		bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(424)
		if ((tmp8)){
			HX_STACK_LINE(425)
			Array< ::Dynamic > lv = localVerts;		HX_STACK_VAR(lv,"lv");
			HX_STACK_LINE(426)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(427)
			while((true)){
				HX_STACK_LINE(427)
				bool tmp9 = (i < lv->length);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(427)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(427)
				if ((tmp10)){
					HX_STACK_LINE(427)
					break;
				}
				HX_STACK_LINE(428)
				::nape::geom::Vec2 tmp11 = lv->__get(i).StaticCast< ::nape::geom::Vec2 >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(428)
				::nape::geom::Vec2 cur = tmp11;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(429)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(429)
				{
					HX_STACK_LINE(430)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(431)
					tmp13 = cur->zpp_inner->weak;
					HX_STACK_LINE(430)
					if ((tmp13)){
						HX_STACK_LINE(433)
						{
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								bool tmp14 = (cur != null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(433)
								bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(433)
								if ((tmp14)){
									HX_STACK_LINE(433)
									tmp15 = cur->zpp_disp;
								}
								else{
									HX_STACK_LINE(433)
									tmp15 = false;
								}
								HX_STACK_LINE(433)
								if ((tmp15)){
									HX_STACK_LINE(433)
									::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(433)
									::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(433)
									HX_STACK_DO_THROW(tmp17);
								}
							}
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								::zpp_nape::geom::ZPP_Vec2 _this = cur->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(433)
								bool tmp14 = _this->_immutable;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(433)
								if ((tmp14)){
									HX_STACK_LINE(433)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
								}
								HX_STACK_LINE(433)
								bool tmp15 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(433)
								if ((tmp15)){
									HX_STACK_LINE(433)
									_this->_isimmutable();
								}
							}
							HX_STACK_LINE(433)
							bool tmp14 = cur->zpp_inner->_inuse;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(433)
							if ((tmp14)){
								HX_STACK_LINE(433)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
							}
							HX_STACK_LINE(433)
							::zpp_nape::geom::ZPP_Vec2 inner = cur->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(433)
							cur->zpp_inner->outer = null();
							HX_STACK_LINE(433)
							cur->zpp_inner = null();
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								::nape::geom::Vec2 o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(433)
								o->zpp_pool = null();
								HX_STACK_LINE(433)
								::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(433)
								bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(433)
								if ((tmp16)){
									HX_STACK_LINE(433)
									::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(433)
									tmp17->zpp_pool = o;
								}
								else{
									HX_STACK_LINE(433)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
								}
								HX_STACK_LINE(433)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
								HX_STACK_LINE(433)
								o->zpp_disp = true;
							}
							HX_STACK_LINE(433)
							{
								HX_STACK_LINE(433)
								::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(433)
								{
									HX_STACK_LINE(433)
									bool tmp15 = (o->outer != null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(433)
									if ((tmp15)){
										HX_STACK_LINE(433)
										o->outer->zpp_inner = null();
										HX_STACK_LINE(433)
										o->outer = null();
									}
									HX_STACK_LINE(433)
									o->_isimmutable = null();
									HX_STACK_LINE(433)
									o->_validate = null();
									HX_STACK_LINE(433)
									o->_invalidate = null();
								}
								HX_STACK_LINE(433)
								::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(433)
								o->next = tmp15;
								HX_STACK_LINE(433)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
							}
						}
						HX_STACK_LINE(434)
						tmp12 = true;
					}
					else{
						HX_STACK_LINE(437)
						tmp12 = false;
					}
				}
				HX_STACK_LINE(429)
				if ((tmp12)){
					HX_STACK_LINE(440)
					int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(440)
					lv->splice(tmp13,(int)1);
					HX_STACK_LINE(441)
					continue;
				}
				HX_STACK_LINE(443)
				(i)++;
			}
		}
		else{
			HX_STACK_LINE(471)
			Dynamic tmp9 = localVerts;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(471)
			bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::nape::geom::Vec2List >());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(471)
			if ((tmp10)){
				HX_STACK_LINE(472)
				::nape::geom::Vec2List lv = localVerts;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(473)
				Dynamic tmp11 = lv->zpp_inner->_validate;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(473)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(473)
				if ((tmp12)){
					HX_STACK_LINE(473)
					lv->zpp_inner->_validate();
				}
				HX_STACK_LINE(474)
				::zpp_nape::util::ZNPList_ZPP_Vec2 tmp13 = lv->zpp_inner->inner;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(474)
				::zpp_nape::util::ZNPList_ZPP_Vec2 ins = tmp13;		HX_STACK_VAR(ins,"ins");
				HX_STACK_LINE(475)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(476)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = ins->head;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(477)
				while((true)){
					HX_STACK_LINE(477)
					bool tmp14 = (cur != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(477)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(477)
					if ((tmp15)){
						HX_STACK_LINE(477)
						break;
					}
					HX_STACK_LINE(478)
					::zpp_nape::geom::ZPP_Vec2 x = cur->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(479)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(479)
					{
						HX_STACK_LINE(480)
						::zpp_nape::geom::ZPP_Vec2 tmp17 = x->outer->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(480)
						tmp16 = tmp17->weak;
					}
					HX_STACK_LINE(479)
					if ((tmp16)){
						HX_STACK_LINE(482)
						::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp17 = pre;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(482)
						::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp18 = ins->erase(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(482)
						cur = tmp18;
						HX_STACK_LINE(483)
						{
							HX_STACK_LINE(484)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(484)
							{
								HX_STACK_LINE(485)
								::zpp_nape::geom::ZPP_Vec2 tmp20 = x->outer->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(485)
								tmp19 = tmp20->weak;
							}
							HX_STACK_LINE(484)
							if ((tmp19)){
								HX_STACK_LINE(487)
								{
									HX_STACK_LINE(487)
									::nape::geom::Vec2 _this = x->outer;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(487)
									{
										HX_STACK_LINE(487)
										bool tmp20 = (_this != null());		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(487)
										bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(487)
										if ((tmp20)){
											HX_STACK_LINE(487)
											tmp21 = _this->zpp_disp;
										}
										else{
											HX_STACK_LINE(487)
											tmp21 = false;
										}
										HX_STACK_LINE(487)
										if ((tmp21)){
											HX_STACK_LINE(487)
											::String tmp22 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(487)
											::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(487)
											HX_STACK_DO_THROW(tmp23);
										}
									}
									HX_STACK_LINE(487)
									{
										HX_STACK_LINE(487)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(487)
										bool tmp20 = _this1->_immutable;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(487)
										if ((tmp20)){
											HX_STACK_LINE(487)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
										}
										HX_STACK_LINE(487)
										bool tmp21 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(487)
										if ((tmp21)){
											HX_STACK_LINE(487)
											_this1->_isimmutable();
										}
									}
									HX_STACK_LINE(487)
									bool tmp20 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(487)
									if ((tmp20)){
										HX_STACK_LINE(487)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
									}
									HX_STACK_LINE(487)
									::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(487)
									_this->zpp_inner->outer = null();
									HX_STACK_LINE(487)
									_this->zpp_inner = null();
									HX_STACK_LINE(487)
									{
										HX_STACK_LINE(487)
										::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(487)
										o->zpp_pool = null();
										HX_STACK_LINE(487)
										::nape::geom::Vec2 tmp21 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(487)
										bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(487)
										if ((tmp22)){
											HX_STACK_LINE(487)
											::nape::geom::Vec2 tmp23 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(487)
											tmp23->zpp_pool = o;
										}
										else{
											HX_STACK_LINE(487)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(487)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
										HX_STACK_LINE(487)
										o->zpp_disp = true;
									}
									HX_STACK_LINE(487)
									{
										HX_STACK_LINE(487)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(487)
										{
											HX_STACK_LINE(487)
											bool tmp21 = (o->outer != null());		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(487)
											if ((tmp21)){
												HX_STACK_LINE(487)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(487)
												o->outer = null();
											}
											HX_STACK_LINE(487)
											o->_isimmutable = null();
											HX_STACK_LINE(487)
											o->_validate = null();
											HX_STACK_LINE(487)
											o->_invalidate = null();
										}
										HX_STACK_LINE(487)
										::zpp_nape::geom::ZPP_Vec2 tmp21 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(487)
										o->next = tmp21;
										HX_STACK_LINE(487)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
								HX_STACK_LINE(488)
								true;
							}
							else{
								HX_STACK_LINE(491)
								false;
							}
						}
					}
					else{
						HX_STACK_LINE(496)
						pre = cur;
						HX_STACK_LINE(497)
						cur = cur->next;
					}
				}
			}
		}
	}
	HX_STACK_LINE(502)
	bool tmp7 = (material == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(502)
	if ((tmp7)){
		HX_STACK_LINE(503)
		::zpp_nape::phys::ZPP_Material tmp8 = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(503)
		bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(503)
		if ((tmp9)){
			HX_STACK_LINE(504)
			::zpp_nape::phys::ZPP_Material tmp10 = ::zpp_nape::phys::ZPP_Material_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(504)
			::zpp_nape::shape::ZPP_Shape tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(504)
			tmp11->material = tmp10;
		}
		else{
			HX_STACK_LINE(510)
			::zpp_nape::phys::ZPP_Material tmp10 = ::zpp_nape::phys::ZPP_Material_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(510)
			::zpp_nape::shape::ZPP_Shape tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(510)
			tmp11->material = tmp10;
			HX_STACK_LINE(511)
			::zpp_nape::shape::ZPP_Shape tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(511)
			::zpp_nape::phys::ZPP_Material tmp13 = tmp12->material->next;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(511)
			::zpp_nape::phys::ZPP_Material_obj::zpp_pool = tmp13;
			HX_STACK_LINE(512)
			::zpp_nape::shape::ZPP_Shape tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(512)
			tmp14->material->next = null();
		}
		HX_STACK_LINE(517)
		Dynamic();
	}
	else{
		HX_STACK_LINE(519)
		{
			HX_STACK_LINE(519)
			::zpp_nape::shape::ZPP_Shape tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(519)
			tmp8->immutable_midstep(HX_HCSTRING("Shape::material","\xa8","\xcd","\xa4","\xb9"));
			HX_STACK_LINE(519)
			bool tmp9 = (material == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(519)
			if ((tmp9)){
				HX_STACK_LINE(519)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null as Shape material","\x9d","\xc0","\x89","\x99"));
			}
			HX_STACK_LINE(519)
			::zpp_nape::shape::ZPP_Shape tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(519)
			::zpp_nape::phys::ZPP_Material tmp11 = material->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(519)
			tmp10->setMaterial(tmp11);
		}
		HX_STACK_LINE(519)
		::zpp_nape::shape::ZPP_Shape tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(519)
		tmp8->material->wrapper();
	}
	HX_STACK_LINE(520)
	bool tmp8 = (filter == null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(520)
	if ((tmp8)){
		HX_STACK_LINE(521)
		::zpp_nape::dynamics::ZPP_InteractionFilter tmp9 = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(521)
		bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(521)
		if ((tmp10)){
			HX_STACK_LINE(522)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp11 = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(522)
			::zpp_nape::shape::ZPP_Shape tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(522)
			tmp12->filter = tmp11;
		}
		else{
			HX_STACK_LINE(528)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp11 = ::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(528)
			::zpp_nape::shape::ZPP_Shape tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(528)
			tmp12->filter = tmp11;
			HX_STACK_LINE(529)
			::zpp_nape::shape::ZPP_Shape tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(529)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp14 = tmp13->filter->next;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(529)
			::zpp_nape::dynamics::ZPP_InteractionFilter_obj::zpp_pool = tmp14;
			HX_STACK_LINE(530)
			::zpp_nape::shape::ZPP_Shape tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(530)
			tmp15->filter->next = null();
		}
		HX_STACK_LINE(535)
		Dynamic();
	}
	else{
		HX_STACK_LINE(537)
		{
			HX_STACK_LINE(537)
			::zpp_nape::shape::ZPP_Shape tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(537)
			tmp9->immutable_midstep(HX_HCSTRING("Shape::filter","\x79","\x9e","\xc6","\x67"));
			HX_STACK_LINE(537)
			bool tmp10 = (filter == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(537)
			if ((tmp10)){
				HX_STACK_LINE(537)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot assign null as Shape filter","\x2e","\x7a","\x75","\x59"));
			}
			HX_STACK_LINE(537)
			::zpp_nape::shape::ZPP_Shape tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(537)
			::zpp_nape::dynamics::ZPP_InteractionFilter tmp12 = filter->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(537)
			tmp11->setFilter(tmp12);
		}
		HX_STACK_LINE(537)
		::zpp_nape::shape::ZPP_Shape tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(537)
		tmp9->filter->wrapper();
	}
	HX_STACK_LINE(538)
	::zpp_nape::phys::ZPP_Interactor tmp9 = this->zpp_inner_i;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(538)
	::nape::callbacks::CbType tmp10 = ::zpp_nape::callbacks::ZPP_CbType_obj::ANY_SHAPE;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(538)
	::zpp_nape::callbacks::ZPP_CbType tmp11 = tmp10->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(538)
	tmp9->insert_cbtype(tmp11);
}
;
	return null();
}

//Polygon_obj::~Polygon_obj() { }

Dynamic Polygon_obj::__CreateEmpty() { return  new Polygon_obj; }
hx::ObjectPtr< Polygon_obj > Polygon_obj::__new(Dynamic localVerts,::nape::phys::Material material,::nape::dynamics::InteractionFilter filter)
{  hx::ObjectPtr< Polygon_obj > _result_ = new Polygon_obj();
	_result_->__construct(localVerts,material,filter);
	return _result_;}

Dynamic Polygon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Polygon_obj > _result_ = new Polygon_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::nape::geom::Vec2List Polygon_obj::get_localVerts( ){
	HX_STACK_FRAME("nape.shape.Polygon","get_localVerts",0x9d615807,"nape.shape.Polygon.get_localVerts","nape/shape/Polygon.hx",279,0x3fc17059)
	HX_STACK_THIS(this)
	HX_STACK_LINE(280)
	::zpp_nape::shape::ZPP_Polygon tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(280)
	::nape::geom::Vec2List tmp1 = tmp->wrap_lverts;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(280)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(280)
	if ((tmp2)){
		HX_STACK_LINE(280)
		::zpp_nape::shape::ZPP_Polygon tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(280)
		tmp3->getlverts();
	}
	HX_STACK_LINE(281)
	::zpp_nape::shape::ZPP_Polygon tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(281)
	::nape::geom::Vec2List tmp4 = tmp3->wrap_lverts;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(281)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_localVerts,return )

::nape::geom::Vec2List Polygon_obj::get_worldVerts( ){
	HX_STACK_FRAME("nape.shape.Polygon","get_worldVerts",0xd11a65c0,"nape.shape.Polygon.get_worldVerts","nape/shape/Polygon.hx",293,0x3fc17059)
	HX_STACK_THIS(this)
	HX_STACK_LINE(294)
	::zpp_nape::shape::ZPP_Polygon tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(294)
	::nape::geom::Vec2List tmp1 = tmp->wrap_gverts;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(294)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(294)
	if ((tmp2)){
		HX_STACK_LINE(294)
		::zpp_nape::shape::ZPP_Polygon tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(294)
		tmp3->getgverts();
	}
	HX_STACK_LINE(295)
	::zpp_nape::shape::ZPP_Polygon tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(295)
	::nape::geom::Vec2List tmp4 = tmp3->wrap_gverts;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(295)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_worldVerts,return )

::nape::shape::EdgeList Polygon_obj::get_edges( ){
	HX_STACK_FRAME("nape.shape.Polygon","get_edges",0x0c0710c6,"nape.shape.Polygon.get_edges","nape/shape/Polygon.hx",304,0x3fc17059)
	HX_STACK_THIS(this)
	HX_STACK_LINE(305)
	::zpp_nape::shape::ZPP_Polygon tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(305)
	::nape::shape::EdgeList tmp1 = tmp->wrap_edges;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(305)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(305)
	if ((tmp2)){
		HX_STACK_LINE(305)
		::zpp_nape::shape::ZPP_Polygon tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(305)
		tmp3->getedges();
	}
	HX_STACK_LINE(306)
	::zpp_nape::shape::ZPP_Polygon tmp3 = this->zpp_inner_zn;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(306)
	::nape::shape::EdgeList tmp4 = tmp3->wrap_edges;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(306)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_edges,return )

::nape::shape::ValidationResult Polygon_obj::validity( ){
	HX_STACK_FRAME("nape.shape.Polygon","validity",0x26a0f9f9,"nape.shape.Polygon.validity","nape/shape/Polygon.hx",312,0x3fc17059)
	HX_STACK_THIS(this)
	HX_STACK_LINE(313)
	::zpp_nape::shape::ZPP_Polygon tmp = this->zpp_inner_zn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(313)
	::nape::shape::ValidationResult tmp1 = tmp->valid();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(313)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,validity,return )

Array< ::Dynamic > Polygon_obj::rect( Float x,Float y,Float width,Float height,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.shape.Polygon","rect",0x830174eb,"nape.shape.Polygon.rect","nape/shape/Polygon.hx",209,0x3fc17059)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(211)
		bool tmp = (x != x);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(211)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(211)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(211)
		if ((tmp2)){
			HX_STACK_LINE(211)
			tmp3 = (y != y);
		}
		else{
			HX_STACK_LINE(211)
			tmp3 = true;
		}
		HX_STACK_LINE(211)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(211)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(211)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(211)
		if ((tmp5)){
			HX_STACK_LINE(211)
			tmp6 = (width != width);
		}
		else{
			HX_STACK_LINE(211)
			tmp6 = true;
		}
		HX_STACK_LINE(211)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(211)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(211)
		if ((tmp7)){
			HX_STACK_LINE(211)
			tmp8 = (height != height);
		}
		else{
			HX_STACK_LINE(211)
			tmp8 = true;
		}
		HX_STACK_LINE(211)
		if ((tmp8)){
			HX_STACK_LINE(211)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Polygon.rect cannot accept NaN arguments","\x9c","\xae","\xa8","\x7a"));
		}
		HX_STACK_LINE(213)
		::nape::geom::Vec2 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			bool tmp10 = (x != x);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(213)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(213)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(213)
			if ((tmp11)){
				HX_STACK_LINE(213)
				tmp12 = (y != y);
			}
			else{
				HX_STACK_LINE(213)
				tmp12 = true;
			}
			HX_STACK_LINE(213)
			if ((tmp12)){
				HX_STACK_LINE(213)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(213)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(213)
			{
				HX_STACK_LINE(213)
				::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(213)
				bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(213)
				if ((tmp14)){
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp15 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(213)
					ret = tmp15;
				}
				else{
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(213)
					ret = tmp15;
					HX_STACK_LINE(213)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(213)
					ret->zpp_pool = null();
					HX_STACK_LINE(213)
					ret->zpp_disp = false;
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp16 = ret;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(213)
					bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(213)
					if ((tmp18)){
						HX_STACK_LINE(213)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(213)
			bool tmp13 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(213)
			if ((tmp13)){
				HX_STACK_LINE(213)
				::zpp_nape::geom::ZPP_Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(213)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(213)
						bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(213)
						if ((tmp16)){
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(213)
							ret1 = tmp17;
						}
						else{
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(213)
							ret1 = tmp17;
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(213)
							ret1->next = null();
						}
						HX_STACK_LINE(213)
						ret1->weak = false;
					}
					HX_STACK_LINE(213)
					ret1->_immutable = immutable;
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						ret1->x = x;
						HX_STACK_LINE(213)
						ret1->y = y;
						HX_STACK_LINE(213)
						{
						}
					}
					HX_STACK_LINE(213)
					tmp14 = ret1;
				}
				HX_STACK_LINE(213)
				ret->zpp_inner = tmp14;
				HX_STACK_LINE(213)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					bool tmp14 = (ret != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(213)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(213)
					if ((tmp14)){
						HX_STACK_LINE(213)
						tmp15 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(213)
						tmp15 = false;
					}
					HX_STACK_LINE(213)
					if ((tmp15)){
						HX_STACK_LINE(213)
						::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(213)
						::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(213)
						HX_STACK_DO_THROW(tmp17);
					}
				}
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(213)
					bool tmp14 = _this->_immutable;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(213)
					if ((tmp14)){
						HX_STACK_LINE(213)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(213)
					bool tmp15 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(213)
					if ((tmp15)){
						HX_STACK_LINE(213)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(213)
				bool tmp14 = (x != x);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(213)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(213)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(213)
				if ((tmp15)){
					HX_STACK_LINE(213)
					tmp16 = (y != y);
				}
				else{
					HX_STACK_LINE(213)
					tmp16 = true;
				}
				HX_STACK_LINE(213)
				if ((tmp16)){
					HX_STACK_LINE(213)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(213)
				Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						bool tmp18 = (ret != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(213)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(213)
						if ((tmp18)){
							HX_STACK_LINE(213)
							tmp19 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(213)
							tmp19 = false;
						}
						HX_STACK_LINE(213)
						if ((tmp19)){
							HX_STACK_LINE(213)
							::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(213)
							::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(213)
							HX_STACK_DO_THROW(tmp21);
						}
					}
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(213)
						bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(213)
						if ((tmp18)){
							HX_STACK_LINE(213)
							_this->_validate();
						}
					}
					HX_STACK_LINE(213)
					tmp17 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(213)
				Float tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(213)
				bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(213)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(213)
				if ((tmp19)){
					HX_STACK_LINE(213)
					Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						{
							HX_STACK_LINE(213)
							bool tmp22 = (ret != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(213)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(213)
							bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(213)
							bool tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(213)
							if ((tmp25)){
								HX_STACK_LINE(213)
								tmp24 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(213)
								tmp24 = false;
							}
							HX_STACK_LINE(213)
							bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(213)
							if ((tmp26)){
								HX_STACK_LINE(213)
								::String tmp27 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(213)
								::String tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(213)
								::String tmp29 = (tmp28 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(213)
								::String tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(213)
								::String tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(213)
								HX_STACK_DO_THROW(tmp31);
							}
						}
						HX_STACK_LINE(213)
						{
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(213)
							bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(213)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(213)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(213)
							if ((tmp24)){
								HX_STACK_LINE(213)
								_this->_validate();
							}
						}
						HX_STACK_LINE(213)
						Float tmp22 = ret->zpp_inner->y;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(213)
						tmp21 = tmp22;
					}
					HX_STACK_LINE(213)
					Float tmp22 = y;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(213)
					tmp20 = (tmp21 == tmp22);
				}
				else{
					HX_STACK_LINE(213)
					tmp20 = false;
				}
				HX_STACK_LINE(213)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(213)
				if ((tmp21)){
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(213)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(213)
						{
						}
					}
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(213)
						bool tmp22 = (_this->_invalidate != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(213)
						if ((tmp22)){
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp23 = _this;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(213)
							_this->_invalidate(tmp23);
						}
					}
				}
				HX_STACK_LINE(213)
				ret;
			}
			HX_STACK_LINE(213)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(213)
			tmp9 = ret;
		}
		HX_STACK_LINE(213)
		::nape::geom::Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			Float tmp11 = (x + width);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(213)
			Float x1 = tmp11;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(213)
			bool tmp12 = (x1 != x1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(213)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(213)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(213)
			if ((tmp13)){
				HX_STACK_LINE(213)
				tmp14 = (y != y);
			}
			else{
				HX_STACK_LINE(213)
				tmp14 = true;
			}
			HX_STACK_LINE(213)
			if ((tmp14)){
				HX_STACK_LINE(213)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(213)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(213)
			{
				HX_STACK_LINE(213)
				::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(213)
				bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(213)
				if ((tmp16)){
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp17 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(213)
					ret = tmp17;
				}
				else{
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(213)
					ret = tmp17;
					HX_STACK_LINE(213)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(213)
					ret->zpp_pool = null();
					HX_STACK_LINE(213)
					ret->zpp_disp = false;
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp18 = ret;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp19 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(213)
					bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(213)
					if ((tmp20)){
						HX_STACK_LINE(213)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(213)
			bool tmp15 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(213)
			if ((tmp15)){
				HX_STACK_LINE(213)
				::zpp_nape::geom::ZPP_Vec2 tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(213)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(213)
						bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(213)
						if ((tmp18)){
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(213)
							ret1 = tmp19;
						}
						else{
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(213)
							ret1 = tmp19;
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(213)
							ret1->next = null();
						}
						HX_STACK_LINE(213)
						ret1->weak = false;
					}
					HX_STACK_LINE(213)
					ret1->_immutable = immutable;
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						ret1->x = x1;
						HX_STACK_LINE(213)
						ret1->y = y;
						HX_STACK_LINE(213)
						{
						}
					}
					HX_STACK_LINE(213)
					tmp16 = ret1;
				}
				HX_STACK_LINE(213)
				ret->zpp_inner = tmp16;
				HX_STACK_LINE(213)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					bool tmp16 = (ret != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(213)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(213)
					if ((tmp16)){
						HX_STACK_LINE(213)
						tmp17 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(213)
						tmp17 = false;
					}
					HX_STACK_LINE(213)
					if ((tmp17)){
						HX_STACK_LINE(213)
						::String tmp18 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(213)
						::String tmp19 = (tmp18 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(213)
						HX_STACK_DO_THROW(tmp19);
					}
				}
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(213)
					bool tmp16 = _this->_immutable;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(213)
					if ((tmp16)){
						HX_STACK_LINE(213)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(213)
					bool tmp17 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(213)
					if ((tmp17)){
						HX_STACK_LINE(213)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(213)
				bool tmp16 = (x1 != x1);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(213)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(213)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(213)
				if ((tmp17)){
					HX_STACK_LINE(213)
					tmp18 = (y != y);
				}
				else{
					HX_STACK_LINE(213)
					tmp18 = true;
				}
				HX_STACK_LINE(213)
				if ((tmp18)){
					HX_STACK_LINE(213)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(213)
				Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						bool tmp20 = (ret != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(213)
						bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(213)
						if ((tmp20)){
							HX_STACK_LINE(213)
							tmp21 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(213)
							tmp21 = false;
						}
						HX_STACK_LINE(213)
						if ((tmp21)){
							HX_STACK_LINE(213)
							::String tmp22 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(213)
							::String tmp23 = (tmp22 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(213)
							HX_STACK_DO_THROW(tmp23);
						}
					}
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(213)
						bool tmp20 = (_this->_validate != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(213)
						if ((tmp20)){
							HX_STACK_LINE(213)
							_this->_validate();
						}
					}
					HX_STACK_LINE(213)
					tmp19 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(213)
				Float tmp20 = x1;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(213)
				bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(213)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(213)
				if ((tmp21)){
					HX_STACK_LINE(213)
					Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						{
							HX_STACK_LINE(213)
							bool tmp24 = (ret != null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(213)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(213)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(213)
							bool tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(213)
							if ((tmp27)){
								HX_STACK_LINE(213)
								tmp26 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(213)
								tmp26 = false;
							}
							HX_STACK_LINE(213)
							bool tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(213)
							if ((tmp28)){
								HX_STACK_LINE(213)
								::String tmp29 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(213)
								::String tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(213)
								::String tmp31 = (tmp30 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(213)
								::String tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(213)
								::String tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(213)
								HX_STACK_DO_THROW(tmp33);
							}
						}
						HX_STACK_LINE(213)
						{
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(213)
							bool tmp24 = (_this->_validate != null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(213)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(213)
							bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(213)
							if ((tmp26)){
								HX_STACK_LINE(213)
								_this->_validate();
							}
						}
						HX_STACK_LINE(213)
						Float tmp24 = ret->zpp_inner->y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(213)
						tmp23 = tmp24;
					}
					HX_STACK_LINE(213)
					Float tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(213)
					tmp22 = (tmp23 == tmp24);
				}
				else{
					HX_STACK_LINE(213)
					tmp22 = false;
				}
				HX_STACK_LINE(213)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(213)
				if ((tmp23)){
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						ret->zpp_inner->x = x1;
						HX_STACK_LINE(213)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(213)
						{
						}
					}
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(213)
						bool tmp24 = (_this->_invalidate != null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(213)
						if ((tmp24)){
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp25 = _this;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(213)
							_this->_invalidate(tmp25);
						}
					}
				}
				HX_STACK_LINE(213)
				ret;
			}
			HX_STACK_LINE(213)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(213)
			tmp10 = ret;
		}
		HX_STACK_LINE(213)
		::nape::geom::Vec2 tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			Float tmp12 = (x + width);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(213)
			Float x1 = tmp12;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(213)
			Float tmp13 = (y + height);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(213)
			Float y1 = tmp13;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(213)
			bool tmp14 = (x1 != x1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(213)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(213)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(213)
			if ((tmp15)){
				HX_STACK_LINE(213)
				tmp16 = (y1 != y1);
			}
			else{
				HX_STACK_LINE(213)
				tmp16 = true;
			}
			HX_STACK_LINE(213)
			if ((tmp16)){
				HX_STACK_LINE(213)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(213)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(213)
			{
				HX_STACK_LINE(213)
				::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(213)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(213)
				if ((tmp18)){
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp19 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(213)
					ret = tmp19;
				}
				else{
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp19 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(213)
					ret = tmp19;
					HX_STACK_LINE(213)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(213)
					ret->zpp_pool = null();
					HX_STACK_LINE(213)
					ret->zpp_disp = false;
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp20 = ret;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp21 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(213)
					bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(213)
					if ((tmp22)){
						HX_STACK_LINE(213)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(213)
			bool tmp17 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(213)
			if ((tmp17)){
				HX_STACK_LINE(213)
				::zpp_nape::geom::ZPP_Vec2 tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(213)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(213)
						bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(213)
						if ((tmp20)){
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp21 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(213)
							ret1 = tmp21;
						}
						else{
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp21 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(213)
							ret1 = tmp21;
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(213)
							ret1->next = null();
						}
						HX_STACK_LINE(213)
						ret1->weak = false;
					}
					HX_STACK_LINE(213)
					ret1->_immutable = immutable;
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						ret1->x = x1;
						HX_STACK_LINE(213)
						ret1->y = y1;
						HX_STACK_LINE(213)
						{
						}
					}
					HX_STACK_LINE(213)
					tmp18 = ret1;
				}
				HX_STACK_LINE(213)
				ret->zpp_inner = tmp18;
				HX_STACK_LINE(213)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					bool tmp18 = (ret != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(213)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(213)
					if ((tmp18)){
						HX_STACK_LINE(213)
						tmp19 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(213)
						tmp19 = false;
					}
					HX_STACK_LINE(213)
					if ((tmp19)){
						HX_STACK_LINE(213)
						::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(213)
						::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(213)
						HX_STACK_DO_THROW(tmp21);
					}
				}
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(213)
					bool tmp18 = _this->_immutable;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(213)
					if ((tmp18)){
						HX_STACK_LINE(213)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(213)
					bool tmp19 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(213)
					if ((tmp19)){
						HX_STACK_LINE(213)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(213)
				bool tmp18 = (x1 != x1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(213)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(213)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(213)
				if ((tmp19)){
					HX_STACK_LINE(213)
					tmp20 = (y1 != y1);
				}
				else{
					HX_STACK_LINE(213)
					tmp20 = true;
				}
				HX_STACK_LINE(213)
				if ((tmp20)){
					HX_STACK_LINE(213)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(213)
				Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						bool tmp22 = (ret != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(213)
						bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(213)
						if ((tmp22)){
							HX_STACK_LINE(213)
							tmp23 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(213)
							tmp23 = false;
						}
						HX_STACK_LINE(213)
						if ((tmp23)){
							HX_STACK_LINE(213)
							::String tmp24 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(213)
							::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(213)
							HX_STACK_DO_THROW(tmp25);
						}
					}
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(213)
						bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(213)
						if ((tmp22)){
							HX_STACK_LINE(213)
							_this->_validate();
						}
					}
					HX_STACK_LINE(213)
					tmp21 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(213)
				Float tmp22 = x1;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(213)
				bool tmp23 = (tmp21 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(213)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(213)
				if ((tmp23)){
					HX_STACK_LINE(213)
					Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						{
							HX_STACK_LINE(213)
							bool tmp26 = (ret != null());		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(213)
							bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(213)
							bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(213)
							bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(213)
							if ((tmp29)){
								HX_STACK_LINE(213)
								tmp28 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(213)
								tmp28 = false;
							}
							HX_STACK_LINE(213)
							bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(213)
							if ((tmp30)){
								HX_STACK_LINE(213)
								::String tmp31 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(213)
								::String tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(213)
								::String tmp33 = (tmp32 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(213)
								::String tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(213)
								::String tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(213)
								HX_STACK_DO_THROW(tmp35);
							}
						}
						HX_STACK_LINE(213)
						{
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(213)
							bool tmp26 = (_this->_validate != null());		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(213)
							bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(213)
							bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(213)
							if ((tmp28)){
								HX_STACK_LINE(213)
								_this->_validate();
							}
						}
						HX_STACK_LINE(213)
						Float tmp26 = ret->zpp_inner->y;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(213)
						tmp25 = tmp26;
					}
					HX_STACK_LINE(213)
					Float tmp26 = y1;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(213)
					tmp24 = (tmp25 == tmp26);
				}
				else{
					HX_STACK_LINE(213)
					tmp24 = false;
				}
				HX_STACK_LINE(213)
				bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(213)
				if ((tmp25)){
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						ret->zpp_inner->x = x1;
						HX_STACK_LINE(213)
						ret->zpp_inner->y = y1;
						HX_STACK_LINE(213)
						{
						}
					}
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(213)
						bool tmp26 = (_this->_invalidate != null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(213)
						if ((tmp26)){
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp27 = _this;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(213)
							_this->_invalidate(tmp27);
						}
					}
				}
				HX_STACK_LINE(213)
				ret;
			}
			HX_STACK_LINE(213)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(213)
			tmp11 = ret;
		}
		HX_STACK_LINE(213)
		::nape::geom::Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			Float tmp13 = (y + height);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(213)
			Float y1 = tmp13;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(213)
			bool tmp14 = (x != x);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(213)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(213)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(213)
			if ((tmp15)){
				HX_STACK_LINE(213)
				tmp16 = (y1 != y1);
			}
			else{
				HX_STACK_LINE(213)
				tmp16 = true;
			}
			HX_STACK_LINE(213)
			if ((tmp16)){
				HX_STACK_LINE(213)
				HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
			}
			HX_STACK_LINE(213)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(213)
			{
				HX_STACK_LINE(213)
				::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(213)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(213)
				if ((tmp18)){
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp19 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(213)
					ret = tmp19;
				}
				else{
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp19 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(213)
					ret = tmp19;
					HX_STACK_LINE(213)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(213)
					ret->zpp_pool = null();
					HX_STACK_LINE(213)
					ret->zpp_disp = false;
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp20 = ret;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(213)
					::nape::geom::Vec2 tmp21 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(213)
					bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(213)
					if ((tmp22)){
						HX_STACK_LINE(213)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
			}
			HX_STACK_LINE(213)
			bool tmp17 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(213)
			if ((tmp17)){
				HX_STACK_LINE(213)
				::zpp_nape::geom::ZPP_Vec2 tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(213)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 tmp19 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(213)
						bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(213)
						if ((tmp20)){
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp21 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(213)
							ret1 = tmp21;
						}
						else{
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp21 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(213)
							ret1 = tmp21;
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(213)
							ret1->next = null();
						}
						HX_STACK_LINE(213)
						ret1->weak = false;
					}
					HX_STACK_LINE(213)
					ret1->_immutable = immutable;
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						ret1->x = x;
						HX_STACK_LINE(213)
						ret1->y = y1;
						HX_STACK_LINE(213)
						{
						}
					}
					HX_STACK_LINE(213)
					tmp18 = ret1;
				}
				HX_STACK_LINE(213)
				ret->zpp_inner = tmp18;
				HX_STACK_LINE(213)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					bool tmp18 = (ret != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(213)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(213)
					if ((tmp18)){
						HX_STACK_LINE(213)
						tmp19 = ret->zpp_disp;
					}
					else{
						HX_STACK_LINE(213)
						tmp19 = false;
					}
					HX_STACK_LINE(213)
					if ((tmp19)){
						HX_STACK_LINE(213)
						::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(213)
						::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(213)
						HX_STACK_DO_THROW(tmp21);
					}
				}
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(213)
					bool tmp18 = _this->_immutable;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(213)
					if ((tmp18)){
						HX_STACK_LINE(213)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(213)
					bool tmp19 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(213)
					if ((tmp19)){
						HX_STACK_LINE(213)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(213)
				bool tmp18 = (x != x);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(213)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(213)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(213)
				if ((tmp19)){
					HX_STACK_LINE(213)
					tmp20 = (y1 != y1);
				}
				else{
					HX_STACK_LINE(213)
					tmp20 = true;
				}
				HX_STACK_LINE(213)
				if ((tmp20)){
					HX_STACK_LINE(213)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(213)
				Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						bool tmp22 = (ret != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(213)
						bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(213)
						if ((tmp22)){
							HX_STACK_LINE(213)
							tmp23 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(213)
							tmp23 = false;
						}
						HX_STACK_LINE(213)
						if ((tmp23)){
							HX_STACK_LINE(213)
							::String tmp24 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(213)
							::String tmp25 = (tmp24 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(213)
							HX_STACK_DO_THROW(tmp25);
						}
					}
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(213)
						bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(213)
						if ((tmp22)){
							HX_STACK_LINE(213)
							_this->_validate();
						}
					}
					HX_STACK_LINE(213)
					tmp21 = ret->zpp_inner->x;
				}
				HX_STACK_LINE(213)
				Float tmp22 = x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(213)
				bool tmp23 = (tmp21 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(213)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(213)
				if ((tmp23)){
					HX_STACK_LINE(213)
					Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						{
							HX_STACK_LINE(213)
							bool tmp26 = (ret != null());		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(213)
							bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(213)
							bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(213)
							bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(213)
							if ((tmp29)){
								HX_STACK_LINE(213)
								tmp28 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(213)
								tmp28 = false;
							}
							HX_STACK_LINE(213)
							bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(213)
							if ((tmp30)){
								HX_STACK_LINE(213)
								::String tmp31 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(213)
								::String tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(213)
								::String tmp33 = (tmp32 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(213)
								::String tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(213)
								::String tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(213)
								HX_STACK_DO_THROW(tmp35);
							}
						}
						HX_STACK_LINE(213)
						{
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(213)
							bool tmp26 = (_this->_validate != null());		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(213)
							bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(213)
							bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(213)
							if ((tmp28)){
								HX_STACK_LINE(213)
								_this->_validate();
							}
						}
						HX_STACK_LINE(213)
						Float tmp26 = ret->zpp_inner->y;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(213)
						tmp25 = tmp26;
					}
					HX_STACK_LINE(213)
					Float tmp26 = y1;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(213)
					tmp24 = (tmp25 == tmp26);
				}
				else{
					HX_STACK_LINE(213)
					tmp24 = false;
				}
				HX_STACK_LINE(213)
				bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(213)
				if ((tmp25)){
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(213)
						ret->zpp_inner->y = y1;
						HX_STACK_LINE(213)
						{
						}
					}
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(213)
						bool tmp26 = (_this->_invalidate != null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(213)
						if ((tmp26)){
							HX_STACK_LINE(213)
							::zpp_nape::geom::ZPP_Vec2 tmp27 = _this;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(213)
							_this->_invalidate(tmp27);
						}
					}
				}
				HX_STACK_LINE(213)
				ret;
			}
			HX_STACK_LINE(213)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(213)
			tmp12 = ret;
		}
		HX_STACK_LINE(213)
		Array< ::Dynamic > tmp13 = Array_obj< ::Dynamic >::__new().Add(tmp9).Add(tmp10).Add(tmp11).Add(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(213)
		return tmp13;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Polygon_obj,rect,return )

Array< ::Dynamic > Polygon_obj::box( Float width,Float height,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.shape.Polygon","box",0x3558ec24,"nape.shape.Polygon.box","nape/shape/Polygon.hx",231,0x3fc17059)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(233)
		bool tmp = (width != width);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(233)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(233)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(233)
		if ((tmp1)){
			HX_STACK_LINE(233)
			tmp2 = (height != height);
		}
		else{
			HX_STACK_LINE(233)
			tmp2 = true;
		}
		HX_STACK_LINE(233)
		if ((tmp2)){
			HX_STACK_LINE(233)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Polygon.box cannot accept NaN arguments","\x7f","\xa8","\xa1","\x89"));
		}
		HX_STACK_LINE(235)
		Float tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(235)
		Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(235)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(235)
		Float tmp6 = height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(235)
		Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(235)
		Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(235)
		Float tmp9 = width;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(235)
		Float tmp10 = height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(235)
		bool tmp11 = weak;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(235)
		Array< ::Dynamic > tmp12 = ::nape::shape::Polygon_obj::rect(tmp5,tmp8,tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(235)
		return tmp12;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polygon_obj,box,return )

Array< ::Dynamic > Polygon_obj::regular( Float xRadius,Float yRadius,int edgeCount,hx::Null< Float >  __o_angleOffset,hx::Null< bool >  __o_weak){
Float angleOffset = __o_angleOffset.Default(((Float)0.0));
bool weak = __o_weak.Default(false);
	HX_STACK_FRAME("nape.shape.Polygon","regular",0x2a4a00f5,"nape.shape.Polygon.regular","nape/shape/Polygon.hx",257,0x3fc17059)
	HX_STACK_ARG(xRadius,"xRadius")
	HX_STACK_ARG(yRadius,"yRadius")
	HX_STACK_ARG(edgeCount,"edgeCount")
	HX_STACK_ARG(angleOffset,"angleOffset")
	HX_STACK_ARG(weak,"weak")
{
		HX_STACK_LINE(259)
		bool tmp = (xRadius != xRadius);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(259)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(259)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(259)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(259)
		if ((tmp2)){
			HX_STACK_LINE(259)
			tmp3 = (yRadius != yRadius);
		}
		else{
			HX_STACK_LINE(259)
			tmp3 = true;
		}
		HX_STACK_LINE(259)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(259)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(259)
		if ((tmp4)){
			HX_STACK_LINE(259)
			tmp5 = (angleOffset != angleOffset);
		}
		else{
			HX_STACK_LINE(259)
			tmp5 = true;
		}
		HX_STACK_LINE(259)
		if ((tmp5)){
			HX_STACK_LINE(259)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Polygon.regular cannot accept NaN arguments","\x50","\x6b","\x6b","\xab"));
		}
		HX_STACK_LINE(261)
		Array< ::Dynamic > tmp6 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(261)
		Array< ::Dynamic > ret = tmp6;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(262)
		Float tmp7 = ::Math_obj::PI;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(262)
		Float tmp8 = (tmp7 * (int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(262)
		int tmp9 = edgeCount;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(262)
		Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(262)
		Float dangle = tmp10;		HX_STACK_VAR(dangle,"dangle");
		HX_STACK_LINE(263)
		{
			HX_STACK_LINE(263)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(263)
			while((true)){
				HX_STACK_LINE(263)
				bool tmp11 = (_g < edgeCount);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(263)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(263)
				if ((tmp12)){
					HX_STACK_LINE(263)
					break;
				}
				HX_STACK_LINE(263)
				int tmp13 = (_g)++;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(263)
				int i = tmp13;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(264)
				Float tmp14 = (i * dangle);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(264)
				Float tmp15 = angleOffset;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(264)
				Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(264)
				Float ang = tmp16;		HX_STACK_VAR(ang,"ang");
				HX_STACK_LINE(265)
				::nape::geom::Vec2 tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(265)
				{
					HX_STACK_LINE(265)
					Float tmp18 = ang;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(265)
					Float tmp19 = ::Math_obj::cos(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(265)
					Float tmp20 = xRadius;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(265)
					Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(265)
					Float x = tmp21;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(265)
					Float tmp22 = ang;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(265)
					Float tmp23 = ::Math_obj::sin(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(265)
					Float tmp24 = yRadius;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(265)
					Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(265)
					Float y = tmp25;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(265)
					bool tmp26 = (x != x);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(265)
					bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(265)
					bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(265)
					if ((tmp27)){
						HX_STACK_LINE(265)
						tmp28 = (y != y);
					}
					else{
						HX_STACK_LINE(265)
						tmp28 = true;
					}
					HX_STACK_LINE(265)
					if ((tmp28)){
						HX_STACK_LINE(265)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(265)
					::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(265)
					{
						HX_STACK_LINE(265)
						::nape::geom::Vec2 tmp29 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(265)
						bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(265)
						if ((tmp30)){
							HX_STACK_LINE(265)
							::nape::geom::Vec2 tmp31 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(265)
							ret1 = tmp31;
						}
						else{
							HX_STACK_LINE(265)
							::nape::geom::Vec2 tmp31 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(265)
							ret1 = tmp31;
							HX_STACK_LINE(265)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret1->zpp_pool;
							HX_STACK_LINE(265)
							ret1->zpp_pool = null();
							HX_STACK_LINE(265)
							ret1->zpp_disp = false;
							HX_STACK_LINE(265)
							::nape::geom::Vec2 tmp32 = ret1;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(265)
							::nape::geom::Vec2 tmp33 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(265)
							bool tmp34 = (tmp32 == tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(265)
							if ((tmp34)){
								HX_STACK_LINE(265)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
							}
						}
					}
					HX_STACK_LINE(265)
					bool tmp29 = (ret1->zpp_inner == null());		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(265)
					if ((tmp29)){
						HX_STACK_LINE(265)
						::zpp_nape::geom::ZPP_Vec2 tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(265)
						{
							HX_STACK_LINE(265)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(265)
							::zpp_nape::geom::ZPP_Vec2 ret2;		HX_STACK_VAR(ret2,"ret2");
							HX_STACK_LINE(265)
							{
								HX_STACK_LINE(265)
								::zpp_nape::geom::ZPP_Vec2 tmp31 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(265)
								bool tmp32 = (tmp31 == null());		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(265)
								if ((tmp32)){
									HX_STACK_LINE(265)
									::zpp_nape::geom::ZPP_Vec2 tmp33 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(265)
									ret2 = tmp33;
								}
								else{
									HX_STACK_LINE(265)
									::zpp_nape::geom::ZPP_Vec2 tmp33 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(265)
									ret2 = tmp33;
									HX_STACK_LINE(265)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret2->next;
									HX_STACK_LINE(265)
									ret2->next = null();
								}
								HX_STACK_LINE(265)
								ret2->weak = false;
							}
							HX_STACK_LINE(265)
							ret2->_immutable = immutable;
							HX_STACK_LINE(265)
							{
								HX_STACK_LINE(265)
								ret2->x = x;
								HX_STACK_LINE(265)
								ret2->y = y;
								HX_STACK_LINE(265)
								{
								}
							}
							HX_STACK_LINE(265)
							tmp30 = ret2;
						}
						HX_STACK_LINE(265)
						ret1->zpp_inner = tmp30;
						HX_STACK_LINE(265)
						ret1->zpp_inner->outer = ret1;
					}
					else{
						HX_STACK_LINE(265)
						{
							HX_STACK_LINE(265)
							bool tmp30 = (ret1 != null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(265)
							bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(265)
							if ((tmp30)){
								HX_STACK_LINE(265)
								tmp31 = ret1->zpp_disp;
							}
							else{
								HX_STACK_LINE(265)
								tmp31 = false;
							}
							HX_STACK_LINE(265)
							if ((tmp31)){
								HX_STACK_LINE(265)
								::String tmp32 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(265)
								::String tmp33 = (tmp32 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(265)
								HX_STACK_DO_THROW(tmp33);
							}
						}
						HX_STACK_LINE(265)
						{
							HX_STACK_LINE(265)
							::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(265)
							bool tmp30 = _this->_immutable;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(265)
							if ((tmp30)){
								HX_STACK_LINE(265)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(265)
							bool tmp31 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(265)
							if ((tmp31)){
								HX_STACK_LINE(265)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(265)
						bool tmp30 = (x != x);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(265)
						bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(265)
						bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(265)
						if ((tmp31)){
							HX_STACK_LINE(265)
							tmp32 = (y != y);
						}
						else{
							HX_STACK_LINE(265)
							tmp32 = true;
						}
						HX_STACK_LINE(265)
						if ((tmp32)){
							HX_STACK_LINE(265)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
						}
						HX_STACK_LINE(265)
						Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(265)
						{
							HX_STACK_LINE(265)
							{
								HX_STACK_LINE(265)
								bool tmp34 = (ret1 != null());		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(265)
								bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(265)
								if ((tmp34)){
									HX_STACK_LINE(265)
									tmp35 = ret1->zpp_disp;
								}
								else{
									HX_STACK_LINE(265)
									tmp35 = false;
								}
								HX_STACK_LINE(265)
								if ((tmp35)){
									HX_STACK_LINE(265)
									::String tmp36 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(265)
									::String tmp37 = (tmp36 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(265)
									HX_STACK_DO_THROW(tmp37);
								}
							}
							HX_STACK_LINE(265)
							{
								HX_STACK_LINE(265)
								::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(265)
								bool tmp34 = (_this->_validate != null());		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(265)
								if ((tmp34)){
									HX_STACK_LINE(265)
									_this->_validate();
								}
							}
							HX_STACK_LINE(265)
							tmp33 = ret1->zpp_inner->x;
						}
						HX_STACK_LINE(265)
						Float tmp34 = x;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(265)
						bool tmp35 = (tmp33 == tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(265)
						bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(265)
						if ((tmp35)){
							HX_STACK_LINE(265)
							Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(265)
							{
								HX_STACK_LINE(265)
								{
									HX_STACK_LINE(265)
									bool tmp38 = (ret1 != null());		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(265)
									bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(265)
									bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(265)
									bool tmp41 = tmp39;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(265)
									if ((tmp41)){
										HX_STACK_LINE(265)
										tmp40 = ret1->zpp_disp;
									}
									else{
										HX_STACK_LINE(265)
										tmp40 = false;
									}
									HX_STACK_LINE(265)
									bool tmp42 = tmp40;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(265)
									if ((tmp42)){
										HX_STACK_LINE(265)
										::String tmp43 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(265)
										::String tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(265)
										::String tmp45 = (tmp44 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(265)
										::String tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(265)
										::String tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(265)
										HX_STACK_DO_THROW(tmp47);
									}
								}
								HX_STACK_LINE(265)
								{
									HX_STACK_LINE(265)
									::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(265)
									bool tmp38 = (_this->_validate != null());		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(265)
									bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(265)
									bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(265)
									if ((tmp40)){
										HX_STACK_LINE(265)
										_this->_validate();
									}
								}
								HX_STACK_LINE(265)
								Float tmp38 = ret1->zpp_inner->y;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(265)
								tmp37 = tmp38;
							}
							HX_STACK_LINE(265)
							Float tmp38 = y;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(265)
							tmp36 = (tmp37 == tmp38);
						}
						else{
							HX_STACK_LINE(265)
							tmp36 = false;
						}
						HX_STACK_LINE(265)
						bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(265)
						if ((tmp37)){
							HX_STACK_LINE(265)
							{
								HX_STACK_LINE(265)
								ret1->zpp_inner->x = x;
								HX_STACK_LINE(265)
								ret1->zpp_inner->y = y;
								HX_STACK_LINE(265)
								{
								}
							}
							HX_STACK_LINE(265)
							{
								HX_STACK_LINE(265)
								::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(265)
								bool tmp38 = (_this->_invalidate != null());		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(265)
								if ((tmp38)){
									HX_STACK_LINE(265)
									::zpp_nape::geom::ZPP_Vec2 tmp39 = _this;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(265)
									_this->_invalidate(tmp39);
								}
							}
						}
						HX_STACK_LINE(265)
						ret1;
					}
					HX_STACK_LINE(265)
					ret1->zpp_inner->weak = weak;
					HX_STACK_LINE(265)
					tmp17 = ret1;
				}
				HX_STACK_LINE(265)
				::nape::geom::Vec2 x = tmp17;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(266)
				::nape::geom::Vec2 tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(266)
				ret->push(tmp18);
			}
		}
		HX_STACK_LINE(268)
		Array< ::Dynamic > tmp11 = ret;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(268)
		return tmp11;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Polygon_obj,regular,return )


Polygon_obj::Polygon_obj()
{
}

void Polygon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Polygon);
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::shape::Shape_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Polygon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	::nape::shape::Shape_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Polygon_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"edges") ) { if (inCallProp == hx::paccAlways) return get_edges(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validity") ) { return validity_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_edges") ) { return get_edges_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"localVerts") ) { if (inCallProp == hx::paccAlways) return get_localVerts(); }
		if (HX_FIELD_EQ(inName,"worldVerts") ) { if (inCallProp == hx::paccAlways) return get_worldVerts(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_localVerts") ) { return get_localVerts_dyn(); }
		if (HX_FIELD_EQ(inName,"get_worldVerts") ) { return get_worldVerts_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Polygon_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { outValue = box_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { outValue = rect_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regular") ) { outValue = regular_dyn(); return true;  }
	}
	return false;
}

Dynamic Polygon_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::shape::ZPP_Polygon >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Polygon_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Polygon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"));
	outFields->push(HX_HCSTRING("localVerts","\x37","\x89","\x55","\x6c"));
	outFields->push(HX_HCSTRING("worldVerts","\xf0","\x96","\x0e","\xa0"));
	outFields->push(HX_HCSTRING("edges","\x96","\x6d","\xe0","\x69"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::shape::ZPP_Polygon*/ ,(int)offsetof(Polygon_obj,zpp_inner_zn),HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner_zn","\x22","\x84","\xfa","\xe0"),
	HX_HCSTRING("get_localVerts","\x80","\x11","\x4b","\xe2"),
	HX_HCSTRING("get_worldVerts","\x39","\x1f","\x04","\x16"),
	HX_HCSTRING("get_edges","\xed","\xc9","\x89","\xad"),
	HX_HCSTRING("validity","\xb2","\xe2","\xe9","\x04"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
};

#endif

hx::Class Polygon_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("box","\x0b","\xbe","\x4a","\x00"),
	HX_HCSTRING("regular","\x5c","\x52","\x88","\x82"),
	::String(null()) };

void Polygon_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.shape.Polygon","\x07","\x4e","\x19","\xcd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Polygon_obj::__GetStatic;
	__mClass->mSetStaticField = &Polygon_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Polygon_obj >;
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
} // end namespace shape
