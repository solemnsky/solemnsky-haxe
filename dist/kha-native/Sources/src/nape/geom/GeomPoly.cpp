#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyList
#include <nape/geom/GeomPolyList.h>
#endif
#ifndef INCLUDED_nape_geom_GeomVertexIterator
#include <nape/geom/GeomVertexIterator.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
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
#ifndef INCLUDED_nape_geom_Winding
#include <nape/geom/Winding.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Convex
#include <zpp_nape/geom/ZPP_Convex.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Cutter
#include <zpp_nape/geom/ZPP_Cutter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomPoly
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVertexIterator
#include <zpp_nape/geom/ZPP_GeomVertexIterator.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <zpp_nape/geom/ZPP_Mat23.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Monotone
#include <zpp_nape/geom/ZPP_Monotone.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionedPoly
#include <zpp_nape/geom/ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Simple
#include <zpp_nape/geom/ZPP_Simple.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Simplify
#include <zpp_nape/geom/ZPP_Simplify.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Triangular
#include <zpp_nape/geom/ZPP_Triangular.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_GeomVert
#include <zpp_nape/util/ZNPList_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPList_ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Vec2
#include <zpp_nape/util/ZNPList_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_GeomVert
#include <zpp_nape/util/ZNPNode_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPNode_ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Vec2
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_GeomPolyList
#include <zpp_nape/util/ZPP_GeomPolyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Vec2List
#include <zpp_nape/util/ZPP_Vec2List.h>
#endif
namespace nape{
namespace geom{

Void GeomPoly_obj::__construct(Dynamic vertices)
{
HX_STACK_FRAME("nape.geom.GeomPoly","new",0xb4931c26,"nape.geom.GeomPoly.new","nape/geom/GeomPoly.hx",184,0x0b8969aa)
HX_STACK_THIS(this)
HX_STACK_ARG(vertices,"vertices")
{
	HX_STACK_LINE(221)
	this->zpp_inner = null();
	HX_STACK_LINE(188)
	this->zpp_pool = null();
	HX_STACK_LINE(955)
	::zpp_nape::geom::ZPP_GeomPoly tmp = ::zpp_nape::geom::ZPP_GeomPoly_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(955)
	this->zpp_inner = tmp;
	HX_STACK_LINE(956)
	bool tmp1 = (vertices != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(956)
	if ((tmp1)){
		HX_STACK_LINE(957)
		{
			HX_STACK_LINE(958)
			Dynamic tmp2 = vertices;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(958)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(958)
			if ((tmp3)){
				HX_STACK_LINE(959)
				cpp::ArrayBase lv = vertices;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(960)
				{
					HX_STACK_LINE(960)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(960)
					while((true)){
						HX_STACK_LINE(960)
						bool tmp4 = (_g < lv->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(960)
						bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(960)
						if ((tmp5)){
							HX_STACK_LINE(960)
							break;
						}
						HX_STACK_LINE(960)
						Dynamic tmp6 = lv->__GetItem(_g);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(960)
						Dynamic vite = tmp6;		HX_STACK_VAR(vite,"vite");
						HX_STACK_LINE(960)
						++(_g);
						HX_STACK_LINE(962)
						bool tmp7 = (vite == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(962)
						if ((tmp7)){
							HX_STACK_LINE(962)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Array<Vec2> contains null objects","\xeb","\x2d","\x26","\x50"));
						}
						HX_STACK_LINE(965)
						Dynamic tmp8 = vite;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(965)
						bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::nape::geom::Vec2 >());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(965)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(965)
						if ((tmp10)){
							HX_STACK_LINE(965)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Array<Vec2> contains non Vec2 objects","\xd5","\x3c","\x56","\xe0"));
						}
						HX_STACK_LINE(967)
						::nape::geom::Vec2 v = vite;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(968)
						{
							HX_STACK_LINE(970)
							bool tmp11 = (v != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(970)
							bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(970)
							if ((tmp11)){
								HX_STACK_LINE(970)
								tmp12 = v->zpp_disp;
							}
							else{
								HX_STACK_LINE(970)
								tmp12 = false;
							}
							HX_STACK_LINE(970)
							if ((tmp12)){
								HX_STACK_LINE(970)
								::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(970)
								::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(970)
								HX_STACK_DO_THROW(tmp14);
							}
						}
						HX_STACK_LINE(973)
						{
							HX_STACK_LINE(974)
							::zpp_nape::geom::ZPP_GeomVert tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(974)
							{
								HX_STACK_LINE(975)
								::zpp_nape::geom::ZPP_GeomVert tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(975)
								{
									HX_STACK_LINE(975)
									Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(975)
									{
										HX_STACK_LINE(975)
										bool tmp14 = (v != null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(975)
										bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(975)
										if ((tmp14)){
											HX_STACK_LINE(975)
											tmp15 = v->zpp_disp;
										}
										else{
											HX_STACK_LINE(975)
											tmp15 = false;
										}
										HX_STACK_LINE(975)
										if ((tmp15)){
											HX_STACK_LINE(975)
											::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(975)
											::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(975)
											HX_STACK_DO_THROW(tmp17);
										}
										HX_STACK_LINE(975)
										{
											HX_STACK_LINE(975)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(975)
											bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(975)
											if ((tmp16)){
												HX_STACK_LINE(975)
												_this->_validate();
											}
										}
										HX_STACK_LINE(975)
										tmp13 = v->zpp_inner->x;
									}
									HX_STACK_LINE(975)
									Float x = tmp13;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(975)
									Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(975)
									{
										HX_STACK_LINE(975)
										bool tmp15 = (v != null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(975)
										bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(975)
										if ((tmp15)){
											HX_STACK_LINE(975)
											tmp16 = v->zpp_disp;
										}
										else{
											HX_STACK_LINE(975)
											tmp16 = false;
										}
										HX_STACK_LINE(975)
										if ((tmp16)){
											HX_STACK_LINE(975)
											::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(975)
											::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(975)
											HX_STACK_DO_THROW(tmp18);
										}
										HX_STACK_LINE(975)
										{
											HX_STACK_LINE(975)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(975)
											bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(975)
											if ((tmp17)){
												HX_STACK_LINE(975)
												_this->_validate();
											}
										}
										HX_STACK_LINE(975)
										tmp14 = v->zpp_inner->y;
									}
									HX_STACK_LINE(975)
									Float y = tmp14;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(975)
									::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(975)
									{
										HX_STACK_LINE(975)
										::zpp_nape::geom::ZPP_GeomVert tmp15 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(975)
										bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(975)
										if ((tmp16)){
											HX_STACK_LINE(975)
											::zpp_nape::geom::ZPP_GeomVert tmp17 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(975)
											ret = tmp17;
										}
										else{
											HX_STACK_LINE(975)
											::zpp_nape::geom::ZPP_GeomVert tmp17 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(975)
											ret = tmp17;
											HX_STACK_LINE(975)
											::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
											HX_STACK_LINE(975)
											ret->next = null();
										}
										HX_STACK_LINE(975)
										ret->forced = false;
									}
									HX_STACK_LINE(975)
									{
										HX_STACK_LINE(975)
										ret->x = x;
										HX_STACK_LINE(975)
										ret->y = y;
										HX_STACK_LINE(975)
										{
										}
									}
									HX_STACK_LINE(975)
									tmp12 = ret;
								}
								HX_STACK_LINE(975)
								::zpp_nape::geom::ZPP_GeomVert obj = tmp12;		HX_STACK_VAR(obj,"obj");
								HX_STACK_LINE(976)
								::zpp_nape::geom::ZPP_GeomPoly tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(976)
								::zpp_nape::geom::ZPP_GeomVert tmp14 = tmp13->vertices;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(976)
								bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(976)
								if ((tmp15)){
									HX_STACK_LINE(976)
									::zpp_nape::geom::ZPP_GeomVert tmp16 = obj->next = obj;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(976)
									::zpp_nape::geom::ZPP_GeomVert tmp17 = obj->prev = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(976)
									::zpp_nape::geom::ZPP_GeomPoly tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(976)
									tmp18->vertices = tmp17;
								}
								else{
									HX_STACK_LINE(978)
									::zpp_nape::geom::ZPP_GeomPoly tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(978)
									obj->prev = tmp16->vertices;
									HX_STACK_LINE(979)
									::zpp_nape::geom::ZPP_GeomPoly tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(979)
									::zpp_nape::geom::ZPP_GeomVert tmp18 = tmp17->vertices->next;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(979)
									obj->next = tmp18;
									HX_STACK_LINE(980)
									::zpp_nape::geom::ZPP_GeomPoly tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(980)
									::zpp_nape::geom::ZPP_GeomVert tmp20 = tmp19->vertices->next;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(980)
									tmp20->prev = obj;
									HX_STACK_LINE(981)
									::zpp_nape::geom::ZPP_GeomPoly tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(981)
									tmp21->vertices->next = obj;
								}
								HX_STACK_LINE(983)
								tmp11 = obj;
							}
							HX_STACK_LINE(974)
							::zpp_nape::geom::ZPP_GeomPoly tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(974)
							tmp12->vertices = tmp11;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(1016)
				Dynamic tmp4 = vertices;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1016)
				bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::nape::geom::Vec2List >());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1016)
				if ((tmp5)){
					HX_STACK_LINE(1017)
					::nape::geom::Vec2List lv = vertices;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(1018)
					{
						HX_STACK_LINE(1018)
						::nape::geom::Vec2Iterator tmp6 = lv->iterator();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1018)
						::nape::geom::Vec2Iterator _g = tmp6;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1018)
						while((true)){
							HX_STACK_LINE(1018)
							bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1018)
							{
								HX_STACK_LINE(1018)
								::zpp_nape::util::ZPP_Vec2List tmp8 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1018)
								tmp8->valmod();
								HX_STACK_LINE(1018)
								int tmp9 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1018)
								int length = tmp9;		HX_STACK_VAR(length,"length");
								HX_STACK_LINE(1018)
								_g->zpp_critical = true;
								HX_STACK_LINE(1018)
								bool tmp10 = (_g->zpp_i < length);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1018)
								if ((tmp10)){
									HX_STACK_LINE(1018)
									tmp7 = true;
								}
								else{
									HX_STACK_LINE(1018)
									{
										HX_STACK_LINE(1018)
										::nape::geom::Vec2Iterator tmp11 = ::nape::geom::Vec2Iterator_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1018)
										_g->zpp_next = tmp11;
										HX_STACK_LINE(1018)
										::nape::geom::Vec2Iterator_obj::zpp_pool = _g;
										HX_STACK_LINE(1018)
										_g->zpp_inner = null();
									}
									HX_STACK_LINE(1018)
									tmp7 = false;
								}
							}
							HX_STACK_LINE(1018)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1018)
							if ((tmp8)){
								HX_STACK_LINE(1018)
								break;
							}
							HX_STACK_LINE(1018)
							::nape::geom::Vec2 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1018)
							{
								HX_STACK_LINE(1018)
								_g->zpp_critical = false;
								HX_STACK_LINE(1018)
								int tmp10 = (_g->zpp_i)++;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1018)
								tmp9 = _g->zpp_inner->at(tmp10);
							}
							HX_STACK_LINE(1018)
							::nape::geom::Vec2 v = tmp9;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(1020)
							bool tmp10 = (v == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1020)
							if ((tmp10)){
								HX_STACK_LINE(1020)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2List contains null objects","\x86","\xc5","\xd1","\x3e"));
							}
							HX_STACK_LINE(1022)
							{
								HX_STACK_LINE(1024)
								bool tmp11 = (v != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1024)
								bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1024)
								if ((tmp11)){
									HX_STACK_LINE(1024)
									tmp12 = v->zpp_disp;
								}
								else{
									HX_STACK_LINE(1024)
									tmp12 = false;
								}
								HX_STACK_LINE(1024)
								if ((tmp12)){
									HX_STACK_LINE(1024)
									::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1024)
									::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1024)
									HX_STACK_DO_THROW(tmp14);
								}
							}
							HX_STACK_LINE(1027)
							{
								HX_STACK_LINE(1028)
								::zpp_nape::geom::ZPP_GeomVert tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1028)
								{
									HX_STACK_LINE(1029)
									::zpp_nape::geom::ZPP_GeomVert tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1029)
									{
										HX_STACK_LINE(1029)
										Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1029)
										{
											HX_STACK_LINE(1029)
											bool tmp14 = (v != null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1029)
											bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1029)
											if ((tmp14)){
												HX_STACK_LINE(1029)
												tmp15 = v->zpp_disp;
											}
											else{
												HX_STACK_LINE(1029)
												tmp15 = false;
											}
											HX_STACK_LINE(1029)
											if ((tmp15)){
												HX_STACK_LINE(1029)
												::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1029)
												::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1029)
												HX_STACK_DO_THROW(tmp17);
											}
											HX_STACK_LINE(1029)
											{
												HX_STACK_LINE(1029)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1029)
												bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1029)
												if ((tmp16)){
													HX_STACK_LINE(1029)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1029)
											tmp13 = v->zpp_inner->x;
										}
										HX_STACK_LINE(1029)
										Float x = tmp13;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(1029)
										Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1029)
										{
											HX_STACK_LINE(1029)
											bool tmp15 = (v != null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1029)
											bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1029)
											if ((tmp15)){
												HX_STACK_LINE(1029)
												tmp16 = v->zpp_disp;
											}
											else{
												HX_STACK_LINE(1029)
												tmp16 = false;
											}
											HX_STACK_LINE(1029)
											if ((tmp16)){
												HX_STACK_LINE(1029)
												::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1029)
												::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(1029)
												HX_STACK_DO_THROW(tmp18);
											}
											HX_STACK_LINE(1029)
											{
												HX_STACK_LINE(1029)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1029)
												bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1029)
												if ((tmp17)){
													HX_STACK_LINE(1029)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1029)
											tmp14 = v->zpp_inner->y;
										}
										HX_STACK_LINE(1029)
										Float y = tmp14;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(1029)
										::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(1029)
										{
											HX_STACK_LINE(1029)
											::zpp_nape::geom::ZPP_GeomVert tmp15 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1029)
											bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1029)
											if ((tmp16)){
												HX_STACK_LINE(1029)
												::zpp_nape::geom::ZPP_GeomVert tmp17 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1029)
												ret = tmp17;
											}
											else{
												HX_STACK_LINE(1029)
												::zpp_nape::geom::ZPP_GeomVert tmp17 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1029)
												ret = tmp17;
												HX_STACK_LINE(1029)
												::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
												HX_STACK_LINE(1029)
												ret->next = null();
											}
											HX_STACK_LINE(1029)
											ret->forced = false;
										}
										HX_STACK_LINE(1029)
										{
											HX_STACK_LINE(1029)
											ret->x = x;
											HX_STACK_LINE(1029)
											ret->y = y;
											HX_STACK_LINE(1029)
											{
											}
										}
										HX_STACK_LINE(1029)
										tmp12 = ret;
									}
									HX_STACK_LINE(1029)
									::zpp_nape::geom::ZPP_GeomVert obj = tmp12;		HX_STACK_VAR(obj,"obj");
									HX_STACK_LINE(1030)
									::zpp_nape::geom::ZPP_GeomPoly tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1030)
									::zpp_nape::geom::ZPP_GeomVert tmp14 = tmp13->vertices;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1030)
									bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1030)
									if ((tmp15)){
										HX_STACK_LINE(1030)
										::zpp_nape::geom::ZPP_GeomVert tmp16 = obj->next = obj;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1030)
										::zpp_nape::geom::ZPP_GeomVert tmp17 = obj->prev = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1030)
										::zpp_nape::geom::ZPP_GeomPoly tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1030)
										tmp18->vertices = tmp17;
									}
									else{
										HX_STACK_LINE(1032)
										::zpp_nape::geom::ZPP_GeomPoly tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1032)
										obj->prev = tmp16->vertices;
										HX_STACK_LINE(1033)
										::zpp_nape::geom::ZPP_GeomPoly tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1033)
										::zpp_nape::geom::ZPP_GeomVert tmp18 = tmp17->vertices->next;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1033)
										obj->next = tmp18;
										HX_STACK_LINE(1034)
										::zpp_nape::geom::ZPP_GeomPoly tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1034)
										::zpp_nape::geom::ZPP_GeomVert tmp20 = tmp19->vertices->next;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1034)
										tmp20->prev = obj;
										HX_STACK_LINE(1035)
										::zpp_nape::geom::ZPP_GeomPoly tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1035)
										tmp21->vertices->next = obj;
									}
									HX_STACK_LINE(1037)
									tmp11 = obj;
								}
								HX_STACK_LINE(1028)
								::zpp_nape::geom::ZPP_GeomPoly tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1028)
								tmp12->vertices = tmp11;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(1042)
					Dynamic tmp6 = vertices;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1042)
					bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::nape::geom::GeomPoly >());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1042)
					if ((tmp7)){
						HX_STACK_LINE(1043)
						::nape::geom::GeomPoly lv = vertices;		HX_STACK_VAR(lv,"lv");
						HX_STACK_LINE(1044)
						{
							HX_STACK_LINE(1046)
							bool tmp8 = (lv != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1046)
							bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1046)
							if ((tmp8)){
								HX_STACK_LINE(1046)
								tmp9 = lv->zpp_disp;
							}
							else{
								HX_STACK_LINE(1046)
								tmp9 = false;
							}
							HX_STACK_LINE(1046)
							if ((tmp9)){
								HX_STACK_LINE(1046)
								::String tmp10 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1046)
								::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1046)
								HX_STACK_DO_THROW(tmp11);
							}
						}
						HX_STACK_LINE(1049)
						::zpp_nape::geom::ZPP_GeomVert tmp8 = lv->zpp_inner->vertices;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1049)
						::zpp_nape::geom::ZPP_GeomVert verts = tmp8;		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(1050)
						bool tmp9 = (verts != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1050)
						if ((tmp9)){
							HX_STACK_LINE(1051)
							::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
							HX_STACK_LINE(1052)
							while((true)){
								HX_STACK_LINE(1053)
								::nape::geom::Vec2 tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1053)
								{
									HX_STACK_LINE(1053)
									Float x = vite->x;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1053)
									Float y = vite->y;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1053)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1053)
									bool tmp11 = (x != x);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1053)
									bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1053)
									bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1053)
									if ((tmp12)){
										HX_STACK_LINE(1053)
										tmp13 = (y != y);
									}
									else{
										HX_STACK_LINE(1053)
										tmp13 = true;
									}
									HX_STACK_LINE(1053)
									if ((tmp13)){
										HX_STACK_LINE(1053)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
									}
									HX_STACK_LINE(1053)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1053)
									{
										HX_STACK_LINE(1053)
										::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1053)
										bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1053)
										if ((tmp15)){
											HX_STACK_LINE(1053)
											::nape::geom::Vec2 tmp16 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1053)
											ret = tmp16;
										}
										else{
											HX_STACK_LINE(1053)
											::nape::geom::Vec2 tmp16 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1053)
											ret = tmp16;
											HX_STACK_LINE(1053)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
											HX_STACK_LINE(1053)
											ret->zpp_pool = null();
											HX_STACK_LINE(1053)
											ret->zpp_disp = false;
											HX_STACK_LINE(1053)
											::nape::geom::Vec2 tmp17 = ret;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1053)
											::nape::geom::Vec2 tmp18 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1053)
											bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1053)
											if ((tmp19)){
												HX_STACK_LINE(1053)
												::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
											}
										}
									}
									HX_STACK_LINE(1053)
									bool tmp14 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1053)
									if ((tmp14)){
										HX_STACK_LINE(1053)
										::zpp_nape::geom::ZPP_Vec2 tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1053)
										{
											HX_STACK_LINE(1053)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1053)
											::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1053)
											{
												HX_STACK_LINE(1053)
												::zpp_nape::geom::ZPP_Vec2 tmp16 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1053)
												bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1053)
												if ((tmp17)){
													HX_STACK_LINE(1053)
													::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(1053)
													ret1 = tmp18;
												}
												else{
													HX_STACK_LINE(1053)
													::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(1053)
													ret1 = tmp18;
													HX_STACK_LINE(1053)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1053)
													ret1->next = null();
												}
												HX_STACK_LINE(1053)
												ret1->weak = false;
											}
											HX_STACK_LINE(1053)
											ret1->_immutable = immutable;
											HX_STACK_LINE(1053)
											{
												HX_STACK_LINE(1053)
												ret1->x = x;
												HX_STACK_LINE(1053)
												ret1->y = y;
												HX_STACK_LINE(1053)
												{
												}
											}
											HX_STACK_LINE(1053)
											tmp15 = ret1;
										}
										HX_STACK_LINE(1053)
										ret->zpp_inner = tmp15;
										HX_STACK_LINE(1053)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1053)
										{
											HX_STACK_LINE(1053)
											bool tmp15 = (ret != null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1053)
											bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1053)
											if ((tmp15)){
												HX_STACK_LINE(1053)
												tmp16 = ret->zpp_disp;
											}
											else{
												HX_STACK_LINE(1053)
												tmp16 = false;
											}
											HX_STACK_LINE(1053)
											if ((tmp16)){
												HX_STACK_LINE(1053)
												::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1053)
												::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(1053)
												HX_STACK_DO_THROW(tmp18);
											}
										}
										HX_STACK_LINE(1053)
										{
											HX_STACK_LINE(1053)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1053)
											bool tmp15 = _this->_immutable;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1053)
											if ((tmp15)){
												HX_STACK_LINE(1053)
												HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
											}
											HX_STACK_LINE(1053)
											bool tmp16 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1053)
											if ((tmp16)){
												HX_STACK_LINE(1053)
												_this->_isimmutable();
											}
										}
										HX_STACK_LINE(1053)
										bool tmp15 = (x != x);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1053)
										bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1053)
										bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1053)
										if ((tmp16)){
											HX_STACK_LINE(1053)
											tmp17 = (y != y);
										}
										else{
											HX_STACK_LINE(1053)
											tmp17 = true;
										}
										HX_STACK_LINE(1053)
										if ((tmp17)){
											HX_STACK_LINE(1053)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
										}
										HX_STACK_LINE(1053)
										Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1053)
										{
											HX_STACK_LINE(1053)
											{
												HX_STACK_LINE(1053)
												bool tmp19 = (ret != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(1053)
												bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(1053)
												if ((tmp19)){
													HX_STACK_LINE(1053)
													tmp20 = ret->zpp_disp;
												}
												else{
													HX_STACK_LINE(1053)
													tmp20 = false;
												}
												HX_STACK_LINE(1053)
												if ((tmp20)){
													HX_STACK_LINE(1053)
													::String tmp21 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(1053)
													::String tmp22 = (tmp21 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(1053)
													HX_STACK_DO_THROW(tmp22);
												}
											}
											HX_STACK_LINE(1053)
											{
												HX_STACK_LINE(1053)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1053)
												bool tmp19 = (_this->_validate != null());		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(1053)
												if ((tmp19)){
													HX_STACK_LINE(1053)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1053)
											tmp18 = ret->zpp_inner->x;
										}
										HX_STACK_LINE(1053)
										Float tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1053)
										bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1053)
										bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1053)
										if ((tmp20)){
											HX_STACK_LINE(1053)
											Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1053)
											{
												HX_STACK_LINE(1053)
												{
													HX_STACK_LINE(1053)
													bool tmp23 = (ret != null());		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1053)
													bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(1053)
													bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1053)
													bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1053)
													if ((tmp26)){
														HX_STACK_LINE(1053)
														tmp25 = ret->zpp_disp;
													}
													else{
														HX_STACK_LINE(1053)
														tmp25 = false;
													}
													HX_STACK_LINE(1053)
													bool tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(1053)
													if ((tmp27)){
														HX_STACK_LINE(1053)
														::String tmp28 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1053)
														::String tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1053)
														::String tmp30 = (tmp29 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1053)
														::String tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1053)
														::String tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(1053)
														HX_STACK_DO_THROW(tmp32);
													}
												}
												HX_STACK_LINE(1053)
												{
													HX_STACK_LINE(1053)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1053)
													bool tmp23 = (_this->_validate != null());		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1053)
													bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(1053)
													bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1053)
													if ((tmp25)){
														HX_STACK_LINE(1053)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1053)
												Float tmp23 = ret->zpp_inner->y;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(1053)
												tmp22 = tmp23;
											}
											HX_STACK_LINE(1053)
											Float tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(1053)
											tmp21 = (tmp22 == tmp23);
										}
										else{
											HX_STACK_LINE(1053)
											tmp21 = false;
										}
										HX_STACK_LINE(1053)
										bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1053)
										if ((tmp22)){
											HX_STACK_LINE(1053)
											{
												HX_STACK_LINE(1053)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1053)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1053)
												{
												}
											}
											HX_STACK_LINE(1053)
											{
												HX_STACK_LINE(1053)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1053)
												bool tmp23 = (_this->_invalidate != null());		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(1053)
												if ((tmp23)){
													HX_STACK_LINE(1053)
													::zpp_nape::geom::ZPP_Vec2 tmp24 = _this;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(1053)
													_this->_invalidate(tmp24);
												}
											}
										}
										HX_STACK_LINE(1053)
										ret;
									}
									HX_STACK_LINE(1053)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1053)
									tmp10 = ret;
								}
								HX_STACK_LINE(1053)
								::nape::geom::Vec2 v = tmp10;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(1054)
								vite = vite->next;
								HX_STACK_LINE(1055)
								{
									HX_STACK_LINE(1056)
									::zpp_nape::geom::ZPP_GeomVert tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1056)
									{
										HX_STACK_LINE(1057)
										::zpp_nape::geom::ZPP_GeomVert tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1057)
										{
											HX_STACK_LINE(1057)
											Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1057)
											{
												HX_STACK_LINE(1057)
												bool tmp14 = (v != null());		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(1057)
												bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(1057)
												if ((tmp14)){
													HX_STACK_LINE(1057)
													tmp15 = v->zpp_disp;
												}
												else{
													HX_STACK_LINE(1057)
													tmp15 = false;
												}
												HX_STACK_LINE(1057)
												if ((tmp15)){
													HX_STACK_LINE(1057)
													::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(1057)
													::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(1057)
													HX_STACK_DO_THROW(tmp17);
												}
												HX_STACK_LINE(1057)
												{
													HX_STACK_LINE(1057)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1057)
													bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(1057)
													if ((tmp16)){
														HX_STACK_LINE(1057)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1057)
												tmp13 = v->zpp_inner->x;
											}
											HX_STACK_LINE(1057)
											Float x = tmp13;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(1057)
											Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1057)
											{
												HX_STACK_LINE(1057)
												bool tmp15 = (v != null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(1057)
												bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1057)
												if ((tmp15)){
													HX_STACK_LINE(1057)
													tmp16 = v->zpp_disp;
												}
												else{
													HX_STACK_LINE(1057)
													tmp16 = false;
												}
												HX_STACK_LINE(1057)
												if ((tmp16)){
													HX_STACK_LINE(1057)
													::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(1057)
													::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(1057)
													HX_STACK_DO_THROW(tmp18);
												}
												HX_STACK_LINE(1057)
												{
													HX_STACK_LINE(1057)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1057)
													bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(1057)
													if ((tmp17)){
														HX_STACK_LINE(1057)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1057)
												tmp14 = v->zpp_inner->y;
											}
											HX_STACK_LINE(1057)
											Float y = tmp14;		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(1057)
											::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(1057)
											{
												HX_STACK_LINE(1057)
												::zpp_nape::geom::ZPP_GeomVert tmp15 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(1057)
												bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1057)
												if ((tmp16)){
													HX_STACK_LINE(1057)
													::zpp_nape::geom::ZPP_GeomVert tmp17 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(1057)
													ret = tmp17;
												}
												else{
													HX_STACK_LINE(1057)
													::zpp_nape::geom::ZPP_GeomVert tmp17 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(1057)
													ret = tmp17;
													HX_STACK_LINE(1057)
													::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
													HX_STACK_LINE(1057)
													ret->next = null();
												}
												HX_STACK_LINE(1057)
												ret->forced = false;
											}
											HX_STACK_LINE(1057)
											{
												HX_STACK_LINE(1057)
												ret->x = x;
												HX_STACK_LINE(1057)
												ret->y = y;
												HX_STACK_LINE(1057)
												{
												}
											}
											HX_STACK_LINE(1057)
											tmp12 = ret;
										}
										HX_STACK_LINE(1057)
										::zpp_nape::geom::ZPP_GeomVert obj = tmp12;		HX_STACK_VAR(obj,"obj");
										HX_STACK_LINE(1058)
										::zpp_nape::geom::ZPP_GeomPoly tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1058)
										::zpp_nape::geom::ZPP_GeomVert tmp14 = tmp13->vertices;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1058)
										bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1058)
										if ((tmp15)){
											HX_STACK_LINE(1058)
											::zpp_nape::geom::ZPP_GeomVert tmp16 = obj->next = obj;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1058)
											::zpp_nape::geom::ZPP_GeomVert tmp17 = obj->prev = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1058)
											::zpp_nape::geom::ZPP_GeomPoly tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1058)
											tmp18->vertices = tmp17;
										}
										else{
											HX_STACK_LINE(1060)
											::zpp_nape::geom::ZPP_GeomPoly tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1060)
											obj->prev = tmp16->vertices;
											HX_STACK_LINE(1061)
											::zpp_nape::geom::ZPP_GeomPoly tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1061)
											::zpp_nape::geom::ZPP_GeomVert tmp18 = tmp17->vertices->next;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1061)
											obj->next = tmp18;
											HX_STACK_LINE(1062)
											::zpp_nape::geom::ZPP_GeomPoly tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1062)
											::zpp_nape::geom::ZPP_GeomVert tmp20 = tmp19->vertices->next;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1062)
											tmp20->prev = obj;
											HX_STACK_LINE(1063)
											::zpp_nape::geom::ZPP_GeomPoly tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1063)
											tmp21->vertices->next = obj;
										}
										HX_STACK_LINE(1065)
										tmp11 = obj;
									}
									HX_STACK_LINE(1056)
									::zpp_nape::geom::ZPP_GeomPoly tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1056)
									tmp12->vertices = tmp11;
								}
								HX_STACK_LINE(1068)
								{
									HX_STACK_LINE(1068)
									{
										HX_STACK_LINE(1068)
										bool tmp11 = (v != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1068)
										bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1068)
										if ((tmp11)){
											HX_STACK_LINE(1068)
											tmp12 = v->zpp_disp;
										}
										else{
											HX_STACK_LINE(1068)
											tmp12 = false;
										}
										HX_STACK_LINE(1068)
										if ((tmp12)){
											HX_STACK_LINE(1068)
											::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1068)
											::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1068)
											HX_STACK_DO_THROW(tmp14);
										}
									}
									HX_STACK_LINE(1068)
									{
										HX_STACK_LINE(1068)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1068)
										bool tmp11 = _this->_immutable;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1068)
										if ((tmp11)){
											HX_STACK_LINE(1068)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
										}
										HX_STACK_LINE(1068)
										bool tmp12 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1068)
										if ((tmp12)){
											HX_STACK_LINE(1068)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(1068)
									bool tmp11 = v->zpp_inner->_inuse;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1068)
									if ((tmp11)){
										HX_STACK_LINE(1068)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
									}
									HX_STACK_LINE(1068)
									::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(1068)
									v->zpp_inner->outer = null();
									HX_STACK_LINE(1068)
									v->zpp_inner = null();
									HX_STACK_LINE(1068)
									{
										HX_STACK_LINE(1068)
										::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1068)
										o->zpp_pool = null();
										HX_STACK_LINE(1068)
										::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1068)
										bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1068)
										if ((tmp13)){
											HX_STACK_LINE(1068)
											::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1068)
											tmp14->zpp_pool = o;
										}
										else{
											HX_STACK_LINE(1068)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(1068)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
										HX_STACK_LINE(1068)
										o->zpp_disp = true;
									}
									HX_STACK_LINE(1068)
									{
										HX_STACK_LINE(1068)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1068)
										{
											HX_STACK_LINE(1068)
											bool tmp12 = (o->outer != null());		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(1068)
											if ((tmp12)){
												HX_STACK_LINE(1068)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(1068)
												o->outer = null();
											}
											HX_STACK_LINE(1068)
											o->_isimmutable = null();
											HX_STACK_LINE(1068)
											o->_validate = null();
											HX_STACK_LINE(1068)
											o->_invalidate = null();
										}
										HX_STACK_LINE(1068)
										::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1068)
										o->next = tmp12;
										HX_STACK_LINE(1068)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
								HX_STACK_LINE(1070)
								bool tmp11 = (vite != verts);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1070)
								bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1052)
								if ((tmp12)){
									HX_STACK_LINE(1052)
									break;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(1075)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Invalid type for polygon object, should be Array<Vec2>, Vec2List, GeomPoly or for flash10+ flash.Vector<Vec2>","\xbb","\x80","\x45","\x90"));
					}
				}
			}
		}
		HX_STACK_LINE(1079)
		this->skipForward((int)1);
		HX_STACK_LINE(1080)
		{
			HX_STACK_LINE(1081)
			Dynamic tmp2 = vertices;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1081)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1081)
			if ((tmp3)){
				HX_STACK_LINE(1082)
				Array< ::Dynamic > lv = vertices;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(1083)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1084)
				while((true)){
					HX_STACK_LINE(1084)
					bool tmp4 = (i < lv->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1084)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1084)
					if ((tmp5)){
						HX_STACK_LINE(1084)
						break;
					}
					HX_STACK_LINE(1085)
					::nape::geom::Vec2 tmp6 = lv->__get(i).StaticCast< ::nape::geom::Vec2 >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1085)
					::nape::geom::Vec2 cur = tmp6;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(1086)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1086)
					{
						HX_STACK_LINE(1087)
						bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1088)
						tmp8 = cur->zpp_inner->weak;
						HX_STACK_LINE(1087)
						if ((tmp8)){
							HX_STACK_LINE(1090)
							{
								HX_STACK_LINE(1090)
								{
									HX_STACK_LINE(1090)
									bool tmp9 = (cur != null());		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1090)
									bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1090)
									if ((tmp9)){
										HX_STACK_LINE(1090)
										tmp10 = cur->zpp_disp;
									}
									else{
										HX_STACK_LINE(1090)
										tmp10 = false;
									}
									HX_STACK_LINE(1090)
									if ((tmp10)){
										HX_STACK_LINE(1090)
										::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1090)
										::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1090)
										HX_STACK_DO_THROW(tmp12);
									}
								}
								HX_STACK_LINE(1090)
								{
									HX_STACK_LINE(1090)
									::zpp_nape::geom::ZPP_Vec2 _this = cur->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1090)
									bool tmp9 = _this->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1090)
									if ((tmp9)){
										HX_STACK_LINE(1090)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
									}
									HX_STACK_LINE(1090)
									bool tmp10 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1090)
									if ((tmp10)){
										HX_STACK_LINE(1090)
										_this->_isimmutable();
									}
								}
								HX_STACK_LINE(1090)
								bool tmp9 = cur->zpp_inner->_inuse;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1090)
								if ((tmp9)){
									HX_STACK_LINE(1090)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
								}
								HX_STACK_LINE(1090)
								::zpp_nape::geom::ZPP_Vec2 inner = cur->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(1090)
								cur->zpp_inner->outer = null();
								HX_STACK_LINE(1090)
								cur->zpp_inner = null();
								HX_STACK_LINE(1090)
								{
									HX_STACK_LINE(1090)
									::nape::geom::Vec2 o = cur;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1090)
									o->zpp_pool = null();
									HX_STACK_LINE(1090)
									::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1090)
									bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1090)
									if ((tmp11)){
										HX_STACK_LINE(1090)
										::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1090)
										tmp12->zpp_pool = o;
									}
									else{
										HX_STACK_LINE(1090)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(1090)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
									HX_STACK_LINE(1090)
									o->zpp_disp = true;
								}
								HX_STACK_LINE(1090)
								{
									HX_STACK_LINE(1090)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1090)
									{
										HX_STACK_LINE(1090)
										bool tmp10 = (o->outer != null());		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(1090)
										if ((tmp10)){
											HX_STACK_LINE(1090)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(1090)
											o->outer = null();
										}
										HX_STACK_LINE(1090)
										o->_isimmutable = null();
										HX_STACK_LINE(1090)
										o->_validate = null();
										HX_STACK_LINE(1090)
										o->_invalidate = null();
									}
									HX_STACK_LINE(1090)
									::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1090)
									o->next = tmp10;
									HX_STACK_LINE(1090)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(1091)
							tmp7 = true;
						}
						else{
							HX_STACK_LINE(1094)
							tmp7 = false;
						}
					}
					HX_STACK_LINE(1086)
					if ((tmp7)){
						HX_STACK_LINE(1097)
						int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1097)
						lv->splice(tmp8,(int)1);
						HX_STACK_LINE(1098)
						continue;
					}
					HX_STACK_LINE(1100)
					(i)++;
				}
			}
			else{
				HX_STACK_LINE(1128)
				Dynamic tmp4 = vertices;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1128)
				bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::nape::geom::Vec2List >());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1128)
				if ((tmp5)){
					HX_STACK_LINE(1129)
					::nape::geom::Vec2List lv = vertices;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(1130)
					Dynamic tmp6 = lv->zpp_inner->_validate;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1130)
					bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1130)
					if ((tmp7)){
						HX_STACK_LINE(1130)
						lv->zpp_inner->_validate();
					}
					HX_STACK_LINE(1131)
					::zpp_nape::util::ZNPList_ZPP_Vec2 tmp8 = lv->zpp_inner->inner;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1131)
					::zpp_nape::util::ZNPList_ZPP_Vec2 ins = tmp8;		HX_STACK_VAR(ins,"ins");
					HX_STACK_LINE(1132)
					::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(1133)
					::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = ins->head;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(1134)
					while((true)){
						HX_STACK_LINE(1134)
						bool tmp9 = (cur != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1134)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1134)
						if ((tmp10)){
							HX_STACK_LINE(1134)
							break;
						}
						HX_STACK_LINE(1135)
						::zpp_nape::geom::ZPP_Vec2 x = cur->elt;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1136)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1136)
						{
							HX_STACK_LINE(1137)
							::zpp_nape::geom::ZPP_Vec2 tmp12 = x->outer->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1137)
							tmp11 = tmp12->weak;
						}
						HX_STACK_LINE(1136)
						if ((tmp11)){
							HX_STACK_LINE(1139)
							::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp12 = pre;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1139)
							::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp13 = ins->erase(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1139)
							cur = tmp13;
							HX_STACK_LINE(1140)
							{
								HX_STACK_LINE(1141)
								bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1141)
								{
									HX_STACK_LINE(1142)
									::zpp_nape::geom::ZPP_Vec2 tmp15 = x->outer->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1142)
									tmp14 = tmp15->weak;
								}
								HX_STACK_LINE(1141)
								if ((tmp14)){
									HX_STACK_LINE(1144)
									{
										HX_STACK_LINE(1144)
										::nape::geom::Vec2 _this = x->outer;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1144)
										{
											HX_STACK_LINE(1144)
											bool tmp15 = (_this != null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1144)
											bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1144)
											if ((tmp15)){
												HX_STACK_LINE(1144)
												tmp16 = _this->zpp_disp;
											}
											else{
												HX_STACK_LINE(1144)
												tmp16 = false;
											}
											HX_STACK_LINE(1144)
											if ((tmp16)){
												HX_STACK_LINE(1144)
												::String tmp17 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1144)
												::String tmp18 = (tmp17 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(1144)
												HX_STACK_DO_THROW(tmp18);
											}
										}
										HX_STACK_LINE(1144)
										{
											HX_STACK_LINE(1144)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1144)
											bool tmp15 = _this1->_immutable;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1144)
											if ((tmp15)){
												HX_STACK_LINE(1144)
												HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
											}
											HX_STACK_LINE(1144)
											bool tmp16 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1144)
											if ((tmp16)){
												HX_STACK_LINE(1144)
												_this1->_isimmutable();
											}
										}
										HX_STACK_LINE(1144)
										bool tmp15 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1144)
										if ((tmp15)){
											HX_STACK_LINE(1144)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
										}
										HX_STACK_LINE(1144)
										::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
										HX_STACK_LINE(1144)
										_this->zpp_inner->outer = null();
										HX_STACK_LINE(1144)
										_this->zpp_inner = null();
										HX_STACK_LINE(1144)
										{
											HX_STACK_LINE(1144)
											::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1144)
											o->zpp_pool = null();
											HX_STACK_LINE(1144)
											::nape::geom::Vec2 tmp16 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1144)
											bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1144)
											if ((tmp17)){
												HX_STACK_LINE(1144)
												::nape::geom::Vec2 tmp18 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(1144)
												tmp18->zpp_pool = o;
											}
											else{
												HX_STACK_LINE(1144)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
											}
											HX_STACK_LINE(1144)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
											HX_STACK_LINE(1144)
											o->zpp_disp = true;
										}
										HX_STACK_LINE(1144)
										{
											HX_STACK_LINE(1144)
											::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1144)
											{
												HX_STACK_LINE(1144)
												bool tmp16 = (o->outer != null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1144)
												if ((tmp16)){
													HX_STACK_LINE(1144)
													o->outer->zpp_inner = null();
													HX_STACK_LINE(1144)
													o->outer = null();
												}
												HX_STACK_LINE(1144)
												o->_isimmutable = null();
												HX_STACK_LINE(1144)
												o->_validate = null();
												HX_STACK_LINE(1144)
												o->_invalidate = null();
											}
											HX_STACK_LINE(1144)
											::zpp_nape::geom::ZPP_Vec2 tmp16 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1144)
											o->next = tmp16;
											HX_STACK_LINE(1144)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
										}
									}
									HX_STACK_LINE(1145)
									true;
								}
								else{
									HX_STACK_LINE(1148)
									false;
								}
							}
						}
						else{
							HX_STACK_LINE(1153)
							pre = cur;
							HX_STACK_LINE(1154)
							cur = cur->next;
						}
					}
				}
			}
		}
	}
}
;
	return null();
}

//GeomPoly_obj::~GeomPoly_obj() { }

Dynamic GeomPoly_obj::__CreateEmpty() { return  new GeomPoly_obj; }
hx::ObjectPtr< GeomPoly_obj > GeomPoly_obj::__new(Dynamic vertices)
{  hx::ObjectPtr< GeomPoly_obj > _result_ = new GeomPoly_obj();
	_result_->__construct(vertices);
	return _result_;}

Dynamic GeomPoly_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GeomPoly_obj > _result_ = new GeomPoly_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool GeomPoly_obj::empty( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","empty",0x2b5883d3,"nape.geom.GeomPoly.empty","nape/geom/GeomPoly.hx",229,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(230)
	{
		HX_STACK_LINE(232)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(232)
		if ((tmp)){
			HX_STACK_LINE(232)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(232)
			tmp1 = false;
		}
		HX_STACK_LINE(232)
		if ((tmp1)){
			HX_STACK_LINE(232)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(232)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(232)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(235)
	::zpp_nape::geom::ZPP_GeomPoly tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	::zpp_nape::geom::ZPP_GeomVert tmp1 = tmp->vertices;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(235)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(235)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,empty,return )

int GeomPoly_obj::size( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","size",0x4f76a23b,"nape.geom.GeomPoly.size","nape/geom/GeomPoly.hx",243,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(244)
	{
		HX_STACK_LINE(246)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(246)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(246)
		if ((tmp)){
			HX_STACK_LINE(246)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(246)
			tmp1 = false;
		}
		HX_STACK_LINE(246)
		if ((tmp1)){
			HX_STACK_LINE(246)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(246)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(246)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(249)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	{
		HX_STACK_LINE(250)
		int ret = (int)0;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(251)
		{
			HX_STACK_LINE(252)
			::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(252)
			::zpp_nape::geom::ZPP_GeomVert F = tmp1->vertices;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(253)
			::zpp_nape::geom::ZPP_GeomPoly tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(253)
			::zpp_nape::geom::ZPP_GeomVert L = tmp2->vertices;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(254)
			bool tmp3 = (F != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(254)
			if ((tmp3)){
				HX_STACK_LINE(255)
				::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(256)
				while((true)){
					HX_STACK_LINE(257)
					::zpp_nape::geom::ZPP_GeomVert i = nite;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(259)
					(ret)++;
					HX_STACK_LINE(261)
					nite = nite->next;
					HX_STACK_LINE(263)
					bool tmp4 = (nite != L);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(263)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(256)
					if ((tmp5)){
						HX_STACK_LINE(256)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(266)
		tmp = ret;
	}
	HX_STACK_LINE(249)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,size,return )

::nape::geom::GeomVertexIterator GeomPoly_obj::iterator( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","iterator",0x09b49068,"nape.geom.GeomPoly.iterator","nape/geom/GeomPoly.hx",276,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(277)
	{
		HX_STACK_LINE(279)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(279)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(279)
		if ((tmp)){
			HX_STACK_LINE(279)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(279)
			tmp1 = false;
		}
		HX_STACK_LINE(279)
		if ((tmp1)){
			HX_STACK_LINE(279)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(279)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(279)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(282)
	::zpp_nape::geom::ZPP_GeomPoly tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	::zpp_nape::geom::ZPP_GeomVert tmp1 = tmp->vertices;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(282)
	::nape::geom::GeomVertexIterator tmp2 = ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::get(tmp1,true);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(282)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,iterator,return )

::nape::geom::GeomVertexIterator GeomPoly_obj::forwardIterator( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","forwardIterator",0x9c8a9199,"nape.geom.GeomPoly.forwardIterator","nape/geom/GeomPoly.hx",292,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(293)
	{
		HX_STACK_LINE(295)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(295)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(295)
		if ((tmp)){
			HX_STACK_LINE(295)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(295)
			tmp1 = false;
		}
		HX_STACK_LINE(295)
		if ((tmp1)){
			HX_STACK_LINE(295)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(295)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(295)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(298)
	::zpp_nape::geom::ZPP_GeomPoly tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(298)
	::zpp_nape::geom::ZPP_GeomVert tmp1 = tmp->vertices;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(298)
	::nape::geom::GeomVertexIterator tmp2 = ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::get(tmp1,true);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(298)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,forwardIterator,return )

::nape::geom::GeomVertexIterator GeomPoly_obj::backwardsIterator( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","backwardsIterator",0x93245b84,"nape.geom.GeomPoly.backwardsIterator","nape/geom/GeomPoly.hx",308,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(309)
	{
		HX_STACK_LINE(311)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(311)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(311)
		if ((tmp)){
			HX_STACK_LINE(311)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(311)
			tmp1 = false;
		}
		HX_STACK_LINE(311)
		if ((tmp1)){
			HX_STACK_LINE(311)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(311)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(311)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(314)
	::zpp_nape::geom::ZPP_GeomPoly tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(314)
	::zpp_nape::geom::ZPP_GeomVert tmp1 = tmp->vertices;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(314)
	::nape::geom::GeomVertexIterator tmp2 = ::zpp_nape::geom::ZPP_GeomVertexIterator_obj::get(tmp1,false);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(314)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,backwardsIterator,return )

::nape::geom::Vec2 GeomPoly_obj::current( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","current",0x1a7b42ff,"nape.geom.GeomPoly.current","nape/geom/GeomPoly.hx",334,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(335)
	{
		HX_STACK_LINE(337)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(337)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(337)
		if ((tmp)){
			HX_STACK_LINE(337)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(337)
			tmp1 = false;
		}
		HX_STACK_LINE(337)
		if ((tmp1)){
			HX_STACK_LINE(337)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(337)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(337)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(341)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(341)
	{
		HX_STACK_LINE(341)
		{
			HX_STACK_LINE(341)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(341)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(341)
			if ((tmp1)){
				HX_STACK_LINE(341)
				tmp2 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(341)
				tmp2 = false;
			}
			HX_STACK_LINE(341)
			if ((tmp2)){
				HX_STACK_LINE(341)
				::String tmp3 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(341)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(341)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(341)
		::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(341)
		::zpp_nape::geom::ZPP_GeomVert tmp2 = tmp1->vertices;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(341)
		tmp = (tmp2 == null());
	}
	HX_STACK_LINE(341)
	if ((tmp)){
		HX_STACK_LINE(342)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: GeomPoly is empty","\xa1","\x11","\x78","\x32"));
	}
	HX_STACK_LINE(345)
	::nape::geom::Vec2 tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(345)
	{
		HX_STACK_LINE(345)
		::zpp_nape::geom::ZPP_GeomPoly tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(345)
		::zpp_nape::geom::ZPP_GeomVert _this = tmp2->vertices;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(345)
		bool tmp3 = (_this->wrap == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(345)
		if ((tmp3)){
			HX_STACK_LINE(345)
			::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(345)
			{
				HX_STACK_LINE(345)
				Float x = _this->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(345)
				Float y = _this->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(345)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(345)
				bool tmp5 = (x != x);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(345)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(345)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(345)
				if ((tmp6)){
					HX_STACK_LINE(345)
					tmp7 = (y != y);
				}
				else{
					HX_STACK_LINE(345)
					tmp7 = true;
				}
				HX_STACK_LINE(345)
				if ((tmp7)){
					HX_STACK_LINE(345)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(345)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(345)
				{
					HX_STACK_LINE(345)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(345)
					bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(345)
					if ((tmp9)){
						HX_STACK_LINE(345)
						::nape::geom::Vec2 tmp10 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(345)
						ret = tmp10;
					}
					else{
						HX_STACK_LINE(345)
						::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(345)
						ret = tmp10;
						HX_STACK_LINE(345)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(345)
						ret->zpp_pool = null();
						HX_STACK_LINE(345)
						ret->zpp_disp = false;
						HX_STACK_LINE(345)
						::nape::geom::Vec2 tmp11 = ret;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(345)
						::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(345)
						bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(345)
						if ((tmp13)){
							HX_STACK_LINE(345)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
				}
				HX_STACK_LINE(345)
				bool tmp8 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(345)
				if ((tmp8)){
					HX_STACK_LINE(345)
					::zpp_nape::geom::ZPP_Vec2 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(345)
					{
						HX_STACK_LINE(345)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(345)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(345)
						{
							HX_STACK_LINE(345)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(345)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(345)
							if ((tmp11)){
								HX_STACK_LINE(345)
								::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(345)
								ret1 = tmp12;
							}
							else{
								HX_STACK_LINE(345)
								::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(345)
								ret1 = tmp12;
								HX_STACK_LINE(345)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(345)
								ret1->next = null();
							}
							HX_STACK_LINE(345)
							ret1->weak = false;
						}
						HX_STACK_LINE(345)
						ret1->_immutable = immutable;
						HX_STACK_LINE(345)
						{
							HX_STACK_LINE(345)
							ret1->x = x;
							HX_STACK_LINE(345)
							ret1->y = y;
							HX_STACK_LINE(345)
							{
							}
						}
						HX_STACK_LINE(345)
						tmp9 = ret1;
					}
					HX_STACK_LINE(345)
					ret->zpp_inner = tmp9;
					HX_STACK_LINE(345)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(345)
					{
						HX_STACK_LINE(345)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(345)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(345)
						if ((tmp9)){
							HX_STACK_LINE(345)
							tmp10 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(345)
							tmp10 = false;
						}
						HX_STACK_LINE(345)
						if ((tmp10)){
							HX_STACK_LINE(345)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(345)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(345)
							HX_STACK_DO_THROW(tmp12);
						}
					}
					HX_STACK_LINE(345)
					{
						HX_STACK_LINE(345)
						::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(345)
						bool tmp9 = _this1->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(345)
						if ((tmp9)){
							HX_STACK_LINE(345)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(345)
						bool tmp10 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(345)
						if ((tmp10)){
							HX_STACK_LINE(345)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(345)
					bool tmp9 = (x != x);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(345)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(345)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(345)
					if ((tmp10)){
						HX_STACK_LINE(345)
						tmp11 = (y != y);
					}
					else{
						HX_STACK_LINE(345)
						tmp11 = true;
					}
					HX_STACK_LINE(345)
					if ((tmp11)){
						HX_STACK_LINE(345)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(345)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(345)
					{
						HX_STACK_LINE(345)
						{
							HX_STACK_LINE(345)
							bool tmp13 = (ret != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(345)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(345)
							if ((tmp13)){
								HX_STACK_LINE(345)
								tmp14 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(345)
								tmp14 = false;
							}
							HX_STACK_LINE(345)
							if ((tmp14)){
								HX_STACK_LINE(345)
								::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(345)
								::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(345)
								HX_STACK_DO_THROW(tmp16);
							}
						}
						HX_STACK_LINE(345)
						{
							HX_STACK_LINE(345)
							::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(345)
							bool tmp13 = (_this1->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(345)
							if ((tmp13)){
								HX_STACK_LINE(345)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(345)
						tmp12 = ret->zpp_inner->x;
					}
					HX_STACK_LINE(345)
					Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(345)
					bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(345)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(345)
					if ((tmp14)){
						HX_STACK_LINE(345)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(345)
						{
							HX_STACK_LINE(345)
							{
								HX_STACK_LINE(345)
								bool tmp17 = (ret != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(345)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(345)
								bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(345)
								bool tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(345)
								if ((tmp20)){
									HX_STACK_LINE(345)
									tmp19 = ret->zpp_disp;
								}
								else{
									HX_STACK_LINE(345)
									tmp19 = false;
								}
								HX_STACK_LINE(345)
								bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(345)
								if ((tmp21)){
									HX_STACK_LINE(345)
									::String tmp22 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(345)
									::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(345)
									::String tmp24 = (tmp23 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(345)
									::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(345)
									::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(345)
									HX_STACK_DO_THROW(tmp26);
								}
							}
							HX_STACK_LINE(345)
							{
								HX_STACK_LINE(345)
								::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(345)
								bool tmp17 = (_this1->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(345)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(345)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(345)
								if ((tmp19)){
									HX_STACK_LINE(345)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(345)
							Float tmp17 = ret->zpp_inner->y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(345)
							tmp16 = tmp17;
						}
						HX_STACK_LINE(345)
						Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(345)
						tmp15 = (tmp16 == tmp17);
					}
					else{
						HX_STACK_LINE(345)
						tmp15 = false;
					}
					HX_STACK_LINE(345)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(345)
					if ((tmp16)){
						HX_STACK_LINE(345)
						{
							HX_STACK_LINE(345)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(345)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(345)
							{
							}
						}
						HX_STACK_LINE(345)
						{
							HX_STACK_LINE(345)
							::zpp_nape::geom::ZPP_Vec2 _this1 = ret->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(345)
							bool tmp17 = (_this1->_invalidate != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(345)
							if ((tmp17)){
								HX_STACK_LINE(345)
								::zpp_nape::geom::ZPP_Vec2 tmp18 = _this1;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(345)
								_this1->_invalidate(tmp18);
							}
						}
					}
					HX_STACK_LINE(345)
					ret;
				}
				HX_STACK_LINE(345)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(345)
				tmp4 = ret;
			}
			HX_STACK_LINE(345)
			_this->wrap = tmp4;
			HX_STACK_LINE(345)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = _this->wrap->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(345)
			tmp5->_inuse = true;
			HX_STACK_LINE(345)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = _this->wrap->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(345)
			tmp6->_invalidate = _this->modwrap_dyn();
			HX_STACK_LINE(345)
			::zpp_nape::geom::ZPP_Vec2 tmp7 = _this->wrap->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(345)
			tmp7->_validate = _this->getwrap_dyn();
		}
		HX_STACK_LINE(345)
		tmp1 = _this->wrap;
	}
	HX_STACK_LINE(345)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,current,return )

::nape::geom::GeomPoly GeomPoly_obj::push( ::nape::geom::Vec2 vertex){
	HX_STACK_FRAME("nape.geom.GeomPoly","push",0x4d841354,"nape.geom.GeomPoly.push","nape/geom/GeomPoly.hx",374,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vertex,"vertex")
	HX_STACK_LINE(375)
	{
		HX_STACK_LINE(377)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(377)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(377)
		if ((tmp)){
			HX_STACK_LINE(377)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(377)
			tmp1 = false;
		}
		HX_STACK_LINE(377)
		if ((tmp1)){
			HX_STACK_LINE(377)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(377)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(377)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(380)
	{
		HX_STACK_LINE(382)
		bool tmp = (vertex != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(382)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(382)
		if ((tmp)){
			HX_STACK_LINE(382)
			tmp1 = vertex->zpp_disp;
		}
		else{
			HX_STACK_LINE(382)
			tmp1 = false;
		}
		HX_STACK_LINE(382)
		if ((tmp1)){
			HX_STACK_LINE(382)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(382)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(382)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(386)
	bool tmp = (vertex == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(386)
	if ((tmp)){
		HX_STACK_LINE(387)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot push null vertex","\xa6","\x8f","\xae","\x5e"));
	}
	HX_STACK_LINE(390)
	::zpp_nape::geom::ZPP_GeomVert tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(390)
	{
		HX_STACK_LINE(391)
		::zpp_nape::geom::ZPP_GeomVert tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(391)
		{
			HX_STACK_LINE(391)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(391)
			{
				HX_STACK_LINE(391)
				bool tmp4 = (vertex != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(391)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(391)
				if ((tmp4)){
					HX_STACK_LINE(391)
					tmp5 = vertex->zpp_disp;
				}
				else{
					HX_STACK_LINE(391)
					tmp5 = false;
				}
				HX_STACK_LINE(391)
				if ((tmp5)){
					HX_STACK_LINE(391)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(391)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(391)
					HX_STACK_DO_THROW(tmp7);
				}
				HX_STACK_LINE(391)
				{
					HX_STACK_LINE(391)
					::zpp_nape::geom::ZPP_Vec2 _this = vertex->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(391)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(391)
					if ((tmp6)){
						HX_STACK_LINE(391)
						_this->_validate();
					}
				}
				HX_STACK_LINE(391)
				tmp3 = vertex->zpp_inner->x;
			}
			HX_STACK_LINE(391)
			Float x = tmp3;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(391)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(391)
			{
				HX_STACK_LINE(391)
				bool tmp5 = (vertex != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(391)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(391)
				if ((tmp5)){
					HX_STACK_LINE(391)
					tmp6 = vertex->zpp_disp;
				}
				else{
					HX_STACK_LINE(391)
					tmp6 = false;
				}
				HX_STACK_LINE(391)
				if ((tmp6)){
					HX_STACK_LINE(391)
					::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(391)
					::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(391)
					HX_STACK_DO_THROW(tmp8);
				}
				HX_STACK_LINE(391)
				{
					HX_STACK_LINE(391)
					::zpp_nape::geom::ZPP_Vec2 _this = vertex->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(391)
					bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(391)
					if ((tmp7)){
						HX_STACK_LINE(391)
						_this->_validate();
					}
				}
				HX_STACK_LINE(391)
				tmp4 = vertex->zpp_inner->y;
			}
			HX_STACK_LINE(391)
			Float y = tmp4;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(391)
			::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(391)
			{
				HX_STACK_LINE(391)
				::zpp_nape::geom::ZPP_GeomVert tmp5 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(391)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(391)
				if ((tmp6)){
					HX_STACK_LINE(391)
					::zpp_nape::geom::ZPP_GeomVert tmp7 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(391)
					ret = tmp7;
				}
				else{
					HX_STACK_LINE(391)
					::zpp_nape::geom::ZPP_GeomVert tmp7 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(391)
					ret = tmp7;
					HX_STACK_LINE(391)
					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
					HX_STACK_LINE(391)
					ret->next = null();
				}
				HX_STACK_LINE(391)
				ret->forced = false;
			}
			HX_STACK_LINE(391)
			{
				HX_STACK_LINE(391)
				ret->x = x;
				HX_STACK_LINE(391)
				ret->y = y;
				HX_STACK_LINE(391)
				{
				}
			}
			HX_STACK_LINE(391)
			tmp2 = ret;
		}
		HX_STACK_LINE(391)
		::zpp_nape::geom::ZPP_GeomVert obj = tmp2;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(392)
		::zpp_nape::geom::ZPP_GeomPoly tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(392)
		::zpp_nape::geom::ZPP_GeomVert tmp4 = tmp3->vertices;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(392)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(392)
		if ((tmp5)){
			HX_STACK_LINE(392)
			::zpp_nape::geom::ZPP_GeomVert tmp6 = obj->next = obj;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(392)
			::zpp_nape::geom::ZPP_GeomVert tmp7 = obj->prev = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(392)
			::zpp_nape::geom::ZPP_GeomPoly tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(392)
			tmp8->vertices = tmp7;
		}
		else{
			HX_STACK_LINE(394)
			::zpp_nape::geom::ZPP_GeomPoly tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(394)
			obj->prev = tmp6->vertices;
			HX_STACK_LINE(395)
			::zpp_nape::geom::ZPP_GeomPoly tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(395)
			::zpp_nape::geom::ZPP_GeomVert tmp8 = tmp7->vertices->next;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(395)
			obj->next = tmp8;
			HX_STACK_LINE(396)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(396)
			::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->next;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(396)
			tmp10->prev = obj;
			HX_STACK_LINE(397)
			::zpp_nape::geom::ZPP_GeomPoly tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(397)
			tmp11->vertices->next = obj;
		}
		HX_STACK_LINE(399)
		tmp1 = obj;
	}
	HX_STACK_LINE(390)
	::zpp_nape::geom::ZPP_GeomPoly tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(390)
	tmp2->vertices = tmp1;
	HX_STACK_LINE(401)
	{
		HX_STACK_LINE(402)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(403)
		tmp3 = vertex->zpp_inner->weak;
		HX_STACK_LINE(402)
		if ((tmp3)){
			HX_STACK_LINE(405)
			{
				HX_STACK_LINE(405)
				{
					HX_STACK_LINE(405)
					bool tmp4 = (vertex != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(405)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(405)
					if ((tmp4)){
						HX_STACK_LINE(405)
						tmp5 = vertex->zpp_disp;
					}
					else{
						HX_STACK_LINE(405)
						tmp5 = false;
					}
					HX_STACK_LINE(405)
					if ((tmp5)){
						HX_STACK_LINE(405)
						::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(405)
						::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(405)
						HX_STACK_DO_THROW(tmp7);
					}
				}
				HX_STACK_LINE(405)
				{
					HX_STACK_LINE(405)
					::zpp_nape::geom::ZPP_Vec2 _this = vertex->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(405)
					bool tmp4 = _this->_immutable;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(405)
					if ((tmp4)){
						HX_STACK_LINE(405)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(405)
					bool tmp5 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(405)
					if ((tmp5)){
						HX_STACK_LINE(405)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(405)
				bool tmp4 = vertex->zpp_inner->_inuse;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(405)
				if ((tmp4)){
					HX_STACK_LINE(405)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(405)
				::zpp_nape::geom::ZPP_Vec2 inner = vertex->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(405)
				vertex->zpp_inner->outer = null();
				HX_STACK_LINE(405)
				vertex->zpp_inner = null();
				HX_STACK_LINE(405)
				{
					HX_STACK_LINE(405)
					::nape::geom::Vec2 o = vertex;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(405)
					o->zpp_pool = null();
					HX_STACK_LINE(405)
					::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(405)
					bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(405)
					if ((tmp6)){
						HX_STACK_LINE(405)
						::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(405)
						tmp7->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(405)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(405)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(405)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(405)
				{
					HX_STACK_LINE(405)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(405)
					{
						HX_STACK_LINE(405)
						bool tmp5 = (o->outer != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(405)
						if ((tmp5)){
							HX_STACK_LINE(405)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(405)
							o->outer = null();
						}
						HX_STACK_LINE(405)
						o->_isimmutable = null();
						HX_STACK_LINE(405)
						o->_validate = null();
						HX_STACK_LINE(405)
						o->_invalidate = null();
					}
					HX_STACK_LINE(405)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(405)
					o->next = tmp5;
					HX_STACK_LINE(405)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(406)
			true;
		}
		else{
			HX_STACK_LINE(409)
			false;
		}
	}
	HX_STACK_LINE(412)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,push,return )

::nape::geom::GeomPoly GeomPoly_obj::pop( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","pop",0xb494a957,"nape.geom.GeomPoly.pop","nape/geom/GeomPoly.hx",436,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(437)
	{
		HX_STACK_LINE(439)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(439)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(439)
		if ((tmp)){
			HX_STACK_LINE(439)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(439)
			tmp1 = false;
		}
		HX_STACK_LINE(439)
		if ((tmp1)){
			HX_STACK_LINE(439)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(439)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(439)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(443)
	::zpp_nape::geom::ZPP_GeomPoly tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(443)
	::zpp_nape::geom::ZPP_GeomVert tmp1 = tmp->vertices;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(443)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(443)
	if ((tmp2)){
		HX_STACK_LINE(444)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot pop from empty polygon","\x2f","\x72","\x01","\x42"));
	}
	HX_STACK_LINE(447)
	::zpp_nape::geom::ZPP_GeomPoly tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(447)
	::zpp_nape::geom::ZPP_GeomVert retv = tmp3->vertices;		HX_STACK_VAR(retv,"retv");
	HX_STACK_LINE(448)
	::zpp_nape::geom::ZPP_GeomVert tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(448)
	{
		HX_STACK_LINE(457)
		::zpp_nape::geom::ZPP_GeomPoly tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(457)
		::zpp_nape::geom::ZPP_GeomVert tmp6 = tmp5->vertices;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(457)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(457)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(457)
		if ((tmp7)){
			HX_STACK_LINE(457)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(457)
			::zpp_nape::geom::ZPP_GeomPoly tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(457)
			::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10->vertices->prev;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(457)
			::zpp_nape::geom::ZPP_GeomVert tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(457)
			::zpp_nape::geom::ZPP_GeomPoly tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(457)
			::zpp_nape::geom::ZPP_GeomPoly tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(457)
			::zpp_nape::geom::ZPP_GeomVert tmp15 = tmp14->vertices;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(457)
			tmp8 = (tmp12 == tmp15);
		}
		else{
			HX_STACK_LINE(457)
			tmp8 = false;
		}
		HX_STACK_LINE(457)
		if ((tmp8)){
			HX_STACK_LINE(458)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(458)
			::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->prev = null();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(458)
			::zpp_nape::geom::ZPP_GeomPoly tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(458)
			tmp11->vertices->next = tmp10;
			HX_STACK_LINE(460)
			tmp4 = null();
		}
		else{
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->prev;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(463)
			::zpp_nape::geom::ZPP_GeomVert retnodes = tmp10;		HX_STACK_VAR(retnodes,"retnodes");
			HX_STACK_LINE(464)
			::zpp_nape::geom::ZPP_GeomPoly tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(464)
			::zpp_nape::geom::ZPP_GeomVert tmp12 = tmp11->vertices->next;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(464)
			::zpp_nape::geom::ZPP_GeomPoly tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(464)
			::zpp_nape::geom::ZPP_GeomVert tmp14 = tmp13->vertices->prev;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(464)
			tmp14->next = tmp12;
			HX_STACK_LINE(465)
			::zpp_nape::geom::ZPP_GeomPoly tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(465)
			::zpp_nape::geom::ZPP_GeomVert tmp16 = tmp15->vertices->prev;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(465)
			::zpp_nape::geom::ZPP_GeomPoly tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(465)
			::zpp_nape::geom::ZPP_GeomVert tmp18 = tmp17->vertices->next;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(465)
			tmp18->prev = tmp16;
			HX_STACK_LINE(466)
			::zpp_nape::geom::ZPP_GeomPoly tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(466)
			::zpp_nape::geom::ZPP_GeomVert tmp20 = tmp19->vertices->prev = null();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(466)
			::zpp_nape::geom::ZPP_GeomPoly tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(466)
			tmp21->vertices->next = tmp20;
			HX_STACK_LINE(468)
			::zpp_nape::geom::ZPP_GeomPoly tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(468)
			tmp22->vertices = null();
			HX_STACK_LINE(469)
			tmp4 = retnodes;
		}
	}
	HX_STACK_LINE(448)
	::zpp_nape::geom::ZPP_GeomPoly tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(448)
	tmp5->vertices = tmp4;
	HX_STACK_LINE(472)
	{
		HX_STACK_LINE(473)
		::zpp_nape::geom::ZPP_GeomVert o = retv;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(482)
		{
			HX_STACK_LINE(482)
			bool tmp6 = (o->wrap != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(482)
			if ((tmp6)){
				HX_STACK_LINE(482)
				::zpp_nape::geom::ZPP_Vec2 tmp7 = o->wrap->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(482)
				tmp7->_inuse = false;
				HX_STACK_LINE(482)
				{
					HX_STACK_LINE(482)
					::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(482)
					{
						HX_STACK_LINE(482)
						bool tmp8 = (_this != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(482)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(482)
						if ((tmp8)){
							HX_STACK_LINE(482)
							tmp9 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(482)
							tmp9 = false;
						}
						HX_STACK_LINE(482)
						if ((tmp9)){
							HX_STACK_LINE(482)
							::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(482)
							::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(482)
							HX_STACK_DO_THROW(tmp11);
						}
					}
					HX_STACK_LINE(482)
					{
						HX_STACK_LINE(482)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(482)
						bool tmp8 = _this1->_immutable;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(482)
						if ((tmp8)){
							HX_STACK_LINE(482)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(482)
						bool tmp9 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(482)
						if ((tmp9)){
							HX_STACK_LINE(482)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(482)
					bool tmp8 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(482)
					if ((tmp8)){
						HX_STACK_LINE(482)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
					}
					HX_STACK_LINE(482)
					::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(482)
					_this->zpp_inner->outer = null();
					HX_STACK_LINE(482)
					_this->zpp_inner = null();
					HX_STACK_LINE(482)
					{
						HX_STACK_LINE(482)
						::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
						HX_STACK_LINE(482)
						o1->zpp_pool = null();
						HX_STACK_LINE(482)
						::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(482)
						bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(482)
						if ((tmp10)){
							HX_STACK_LINE(482)
							::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(482)
							tmp11->zpp_pool = o1;
						}
						else{
							HX_STACK_LINE(482)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
						}
						HX_STACK_LINE(482)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
						HX_STACK_LINE(482)
						o1->zpp_disp = true;
					}
					HX_STACK_LINE(482)
					{
						HX_STACK_LINE(482)
						::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
						HX_STACK_LINE(482)
						{
							HX_STACK_LINE(482)
							bool tmp9 = (o1->outer != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(482)
							if ((tmp9)){
								HX_STACK_LINE(482)
								o1->outer->zpp_inner = null();
								HX_STACK_LINE(482)
								o1->outer = null();
							}
							HX_STACK_LINE(482)
							o1->_isimmutable = null();
							HX_STACK_LINE(482)
							o1->_validate = null();
							HX_STACK_LINE(482)
							o1->_invalidate = null();
						}
						HX_STACK_LINE(482)
						::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(482)
						o1->next = tmp9;
						HX_STACK_LINE(482)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
					}
				}
				HX_STACK_LINE(482)
				o->wrap = null();
			}
			HX_STACK_LINE(482)
			::zpp_nape::geom::ZPP_GeomVert tmp7 = o->next = null();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(482)
			o->prev = tmp7;
		}
		HX_STACK_LINE(483)
		::zpp_nape::geom::ZPP_GeomVert tmp6 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(483)
		o->next = tmp6;
		HX_STACK_LINE(484)
		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
	}
	HX_STACK_LINE(489)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,pop,return )

::nape::geom::GeomPoly GeomPoly_obj::unshift( ::nape::geom::Vec2 vertex){
	HX_STACK_FRAME("nape.geom.GeomPoly","unshift",0xc74b8a4f,"nape.geom.GeomPoly.unshift","nape/geom/GeomPoly.hx",518,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vertex,"vertex")
	HX_STACK_LINE(519)
	{
		HX_STACK_LINE(521)
		bool tmp = (vertex != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(521)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(521)
		if ((tmp)){
			HX_STACK_LINE(521)
			tmp1 = vertex->zpp_disp;
		}
		else{
			HX_STACK_LINE(521)
			tmp1 = false;
		}
		HX_STACK_LINE(521)
		if ((tmp1)){
			HX_STACK_LINE(521)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(521)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(521)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(525)
	bool tmp = (vertex == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(525)
	if ((tmp)){
		HX_STACK_LINE(526)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot unshift null vertex","\x17","\x71","\x36","\x4e"));
	}
	HX_STACK_LINE(529)
	::zpp_nape::geom::ZPP_GeomVert tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(529)
	{
		HX_STACK_LINE(530)
		::zpp_nape::geom::ZPP_GeomVert tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(530)
		{
			HX_STACK_LINE(530)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(530)
			{
				HX_STACK_LINE(530)
				bool tmp4 = (vertex != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(530)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(530)
				if ((tmp4)){
					HX_STACK_LINE(530)
					tmp5 = vertex->zpp_disp;
				}
				else{
					HX_STACK_LINE(530)
					tmp5 = false;
				}
				HX_STACK_LINE(530)
				if ((tmp5)){
					HX_STACK_LINE(530)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(530)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(530)
					HX_STACK_DO_THROW(tmp7);
				}
				HX_STACK_LINE(530)
				{
					HX_STACK_LINE(530)
					::zpp_nape::geom::ZPP_Vec2 _this = vertex->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(530)
					bool tmp6 = (_this->_validate != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(530)
					if ((tmp6)){
						HX_STACK_LINE(530)
						_this->_validate();
					}
				}
				HX_STACK_LINE(530)
				tmp3 = vertex->zpp_inner->x;
			}
			HX_STACK_LINE(530)
			Float x = tmp3;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(530)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(530)
			{
				HX_STACK_LINE(530)
				bool tmp5 = (vertex != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(530)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(530)
				if ((tmp5)){
					HX_STACK_LINE(530)
					tmp6 = vertex->zpp_disp;
				}
				else{
					HX_STACK_LINE(530)
					tmp6 = false;
				}
				HX_STACK_LINE(530)
				if ((tmp6)){
					HX_STACK_LINE(530)
					::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(530)
					::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(530)
					HX_STACK_DO_THROW(tmp8);
				}
				HX_STACK_LINE(530)
				{
					HX_STACK_LINE(530)
					::zpp_nape::geom::ZPP_Vec2 _this = vertex->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(530)
					bool tmp7 = (_this->_validate != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(530)
					if ((tmp7)){
						HX_STACK_LINE(530)
						_this->_validate();
					}
				}
				HX_STACK_LINE(530)
				tmp4 = vertex->zpp_inner->y;
			}
			HX_STACK_LINE(530)
			Float y = tmp4;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(530)
			::zpp_nape::geom::ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(530)
			{
				HX_STACK_LINE(530)
				::zpp_nape::geom::ZPP_GeomVert tmp5 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(530)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(530)
				if ((tmp6)){
					HX_STACK_LINE(530)
					::zpp_nape::geom::ZPP_GeomVert tmp7 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(530)
					ret = tmp7;
				}
				else{
					HX_STACK_LINE(530)
					::zpp_nape::geom::ZPP_GeomVert tmp7 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(530)
					ret = tmp7;
					HX_STACK_LINE(530)
					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret->next;
					HX_STACK_LINE(530)
					ret->next = null();
				}
				HX_STACK_LINE(530)
				ret->forced = false;
			}
			HX_STACK_LINE(530)
			{
				HX_STACK_LINE(530)
				ret->x = x;
				HX_STACK_LINE(530)
				ret->y = y;
				HX_STACK_LINE(530)
				{
				}
			}
			HX_STACK_LINE(530)
			tmp2 = ret;
		}
		HX_STACK_LINE(530)
		::zpp_nape::geom::ZPP_GeomVert obj = tmp2;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(531)
		::zpp_nape::geom::ZPP_GeomPoly tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(531)
		::zpp_nape::geom::ZPP_GeomVert tmp4 = tmp3->vertices;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(531)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(531)
		if ((tmp5)){
			HX_STACK_LINE(531)
			::zpp_nape::geom::ZPP_GeomVert tmp6 = obj->next = obj;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(531)
			::zpp_nape::geom::ZPP_GeomVert tmp7 = obj->prev = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(531)
			::zpp_nape::geom::ZPP_GeomPoly tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(531)
			tmp8->vertices = tmp7;
		}
		else{
			HX_STACK_LINE(533)
			::zpp_nape::geom::ZPP_GeomPoly tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(533)
			obj->next = tmp6->vertices;
			HX_STACK_LINE(534)
			::zpp_nape::geom::ZPP_GeomPoly tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(534)
			::zpp_nape::geom::ZPP_GeomVert tmp8 = tmp7->vertices->prev;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(534)
			obj->prev = tmp8;
			HX_STACK_LINE(535)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(535)
			::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->prev;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(535)
			tmp10->next = obj;
			HX_STACK_LINE(536)
			::zpp_nape::geom::ZPP_GeomPoly tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(536)
			tmp11->vertices->prev = obj;
		}
		HX_STACK_LINE(538)
		tmp1 = obj;
	}
	HX_STACK_LINE(529)
	::zpp_nape::geom::ZPP_GeomPoly tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(529)
	tmp2->vertices = tmp1;
	HX_STACK_LINE(540)
	{
		HX_STACK_LINE(541)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(542)
		tmp3 = vertex->zpp_inner->weak;
		HX_STACK_LINE(541)
		if ((tmp3)){
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				{
					HX_STACK_LINE(544)
					bool tmp4 = (vertex != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(544)
					bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(544)
					if ((tmp4)){
						HX_STACK_LINE(544)
						tmp5 = vertex->zpp_disp;
					}
					else{
						HX_STACK_LINE(544)
						tmp5 = false;
					}
					HX_STACK_LINE(544)
					if ((tmp5)){
						HX_STACK_LINE(544)
						::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(544)
						::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(544)
						HX_STACK_DO_THROW(tmp7);
					}
				}
				HX_STACK_LINE(544)
				{
					HX_STACK_LINE(544)
					::zpp_nape::geom::ZPP_Vec2 _this = vertex->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(544)
					bool tmp4 = _this->_immutable;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(544)
					if ((tmp4)){
						HX_STACK_LINE(544)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(544)
					bool tmp5 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(544)
					if ((tmp5)){
						HX_STACK_LINE(544)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(544)
				bool tmp4 = vertex->zpp_inner->_inuse;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(544)
				if ((tmp4)){
					HX_STACK_LINE(544)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(544)
				::zpp_nape::geom::ZPP_Vec2 inner = vertex->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(544)
				vertex->zpp_inner->outer = null();
				HX_STACK_LINE(544)
				vertex->zpp_inner = null();
				HX_STACK_LINE(544)
				{
					HX_STACK_LINE(544)
					::nape::geom::Vec2 o = vertex;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(544)
					o->zpp_pool = null();
					HX_STACK_LINE(544)
					::nape::geom::Vec2 tmp5 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(544)
					bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(544)
					if ((tmp6)){
						HX_STACK_LINE(544)
						::nape::geom::Vec2 tmp7 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(544)
						tmp7->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(544)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(544)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(544)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(544)
				{
					HX_STACK_LINE(544)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(544)
					{
						HX_STACK_LINE(544)
						bool tmp5 = (o->outer != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(544)
						if ((tmp5)){
							HX_STACK_LINE(544)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(544)
							o->outer = null();
						}
						HX_STACK_LINE(544)
						o->_isimmutable = null();
						HX_STACK_LINE(544)
						o->_validate = null();
						HX_STACK_LINE(544)
						o->_invalidate = null();
					}
					HX_STACK_LINE(544)
					::zpp_nape::geom::ZPP_Vec2 tmp5 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(544)
					o->next = tmp5;
					HX_STACK_LINE(544)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(545)
			true;
		}
		else{
			HX_STACK_LINE(548)
			false;
		}
	}
	HX_STACK_LINE(551)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,unshift,return )

::nape::geom::GeomPoly GeomPoly_obj::shift( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","shift",0x37a135c8,"nape.geom.GeomPoly.shift","nape/geom/GeomPoly.hx",576,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(577)
	{
		HX_STACK_LINE(579)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(579)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(579)
		if ((tmp)){
			HX_STACK_LINE(579)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(579)
			tmp1 = false;
		}
		HX_STACK_LINE(579)
		if ((tmp1)){
			HX_STACK_LINE(579)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(579)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(579)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(583)
	::zpp_nape::geom::ZPP_GeomPoly tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(583)
	::zpp_nape::geom::ZPP_GeomVert tmp1 = tmp->vertices;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(583)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(583)
	if ((tmp2)){
		HX_STACK_LINE(584)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot shift from empty polygon","\x9e","\x8f","\x7e","\xa2"));
	}
	HX_STACK_LINE(587)
	::zpp_nape::geom::ZPP_GeomPoly tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(587)
	::zpp_nape::geom::ZPP_GeomVert retv = tmp3->vertices;		HX_STACK_VAR(retv,"retv");
	HX_STACK_LINE(588)
	::zpp_nape::geom::ZPP_GeomVert tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(588)
	{
		HX_STACK_LINE(597)
		::zpp_nape::geom::ZPP_GeomPoly tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(597)
		::zpp_nape::geom::ZPP_GeomVert tmp6 = tmp5->vertices;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(597)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(597)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(597)
		if ((tmp7)){
			HX_STACK_LINE(597)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(597)
			::zpp_nape::geom::ZPP_GeomPoly tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(597)
			::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10->vertices->prev;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(597)
			::zpp_nape::geom::ZPP_GeomVert tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(597)
			::zpp_nape::geom::ZPP_GeomPoly tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(597)
			::zpp_nape::geom::ZPP_GeomPoly tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(597)
			::zpp_nape::geom::ZPP_GeomVert tmp15 = tmp14->vertices;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(597)
			tmp8 = (tmp12 == tmp15);
		}
		else{
			HX_STACK_LINE(597)
			tmp8 = false;
		}
		HX_STACK_LINE(597)
		if ((tmp8)){
			HX_STACK_LINE(598)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(598)
			::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->prev = null();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(598)
			::zpp_nape::geom::ZPP_GeomPoly tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(598)
			tmp11->vertices->next = tmp10;
			HX_STACK_LINE(600)
			::zpp_nape::geom::ZPP_GeomPoly tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(600)
			tmp4 = tmp12->vertices = null();
		}
		else{
			HX_STACK_LINE(603)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(603)
			::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->next;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(603)
			::zpp_nape::geom::ZPP_GeomVert retnodes = tmp10;		HX_STACK_VAR(retnodes,"retnodes");
			HX_STACK_LINE(604)
			::zpp_nape::geom::ZPP_GeomPoly tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(604)
			::zpp_nape::geom::ZPP_GeomVert tmp12 = tmp11->vertices->next;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(604)
			::zpp_nape::geom::ZPP_GeomPoly tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(604)
			::zpp_nape::geom::ZPP_GeomVert tmp14 = tmp13->vertices->prev;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(604)
			tmp14->next = tmp12;
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_GeomPoly tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_GeomVert tmp16 = tmp15->vertices->prev;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_GeomPoly tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(605)
			::zpp_nape::geom::ZPP_GeomVert tmp18 = tmp17->vertices->next;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(605)
			tmp18->prev = tmp16;
			HX_STACK_LINE(606)
			::zpp_nape::geom::ZPP_GeomPoly tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(606)
			::zpp_nape::geom::ZPP_GeomVert tmp20 = tmp19->vertices->prev = null();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(606)
			::zpp_nape::geom::ZPP_GeomPoly tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(606)
			tmp21->vertices->next = tmp20;
			HX_STACK_LINE(608)
			::zpp_nape::geom::ZPP_GeomPoly tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(608)
			tmp22->vertices = null();
			HX_STACK_LINE(609)
			tmp4 = retnodes;
		}
	}
	HX_STACK_LINE(588)
	::zpp_nape::geom::ZPP_GeomPoly tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(588)
	tmp5->vertices = tmp4;
	HX_STACK_LINE(612)
	{
		HX_STACK_LINE(613)
		::zpp_nape::geom::ZPP_GeomVert o = retv;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(622)
		{
			HX_STACK_LINE(622)
			bool tmp6 = (o->wrap != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(622)
			if ((tmp6)){
				HX_STACK_LINE(622)
				::zpp_nape::geom::ZPP_Vec2 tmp7 = o->wrap->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(622)
				tmp7->_inuse = false;
				HX_STACK_LINE(622)
				{
					HX_STACK_LINE(622)
					::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(622)
					{
						HX_STACK_LINE(622)
						bool tmp8 = (_this != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(622)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(622)
						if ((tmp8)){
							HX_STACK_LINE(622)
							tmp9 = _this->zpp_disp;
						}
						else{
							HX_STACK_LINE(622)
							tmp9 = false;
						}
						HX_STACK_LINE(622)
						if ((tmp9)){
							HX_STACK_LINE(622)
							::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(622)
							::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(622)
							HX_STACK_DO_THROW(tmp11);
						}
					}
					HX_STACK_LINE(622)
					{
						HX_STACK_LINE(622)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(622)
						bool tmp8 = _this1->_immutable;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(622)
						if ((tmp8)){
							HX_STACK_LINE(622)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(622)
						bool tmp9 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(622)
						if ((tmp9)){
							HX_STACK_LINE(622)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(622)
					bool tmp8 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(622)
					if ((tmp8)){
						HX_STACK_LINE(622)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
					}
					HX_STACK_LINE(622)
					::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(622)
					_this->zpp_inner->outer = null();
					HX_STACK_LINE(622)
					_this->zpp_inner = null();
					HX_STACK_LINE(622)
					{
						HX_STACK_LINE(622)
						::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
						HX_STACK_LINE(622)
						o1->zpp_pool = null();
						HX_STACK_LINE(622)
						::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(622)
						bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(622)
						if ((tmp10)){
							HX_STACK_LINE(622)
							::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(622)
							tmp11->zpp_pool = o1;
						}
						else{
							HX_STACK_LINE(622)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
						}
						HX_STACK_LINE(622)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
						HX_STACK_LINE(622)
						o1->zpp_disp = true;
					}
					HX_STACK_LINE(622)
					{
						HX_STACK_LINE(622)
						::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
						HX_STACK_LINE(622)
						{
							HX_STACK_LINE(622)
							bool tmp9 = (o1->outer != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(622)
							if ((tmp9)){
								HX_STACK_LINE(622)
								o1->outer->zpp_inner = null();
								HX_STACK_LINE(622)
								o1->outer = null();
							}
							HX_STACK_LINE(622)
							o1->_isimmutable = null();
							HX_STACK_LINE(622)
							o1->_validate = null();
							HX_STACK_LINE(622)
							o1->_invalidate = null();
						}
						HX_STACK_LINE(622)
						::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(622)
						o1->next = tmp9;
						HX_STACK_LINE(622)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
					}
				}
				HX_STACK_LINE(622)
				o->wrap = null();
			}
			HX_STACK_LINE(622)
			::zpp_nape::geom::ZPP_GeomVert tmp7 = o->next = null();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(622)
			o->prev = tmp7;
		}
		HX_STACK_LINE(623)
		::zpp_nape::geom::ZPP_GeomVert tmp6 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(623)
		o->next = tmp6;
		HX_STACK_LINE(624)
		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
	}
	HX_STACK_LINE(629)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,shift,return )

::nape::geom::GeomPoly GeomPoly_obj::skipForward( int times){
	HX_STACK_FRAME("nape.geom.GeomPoly","skipForward",0xecf5d2cc,"nape.geom.GeomPoly.skipForward","nape/geom/GeomPoly.hx",656,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(times,"times")
	HX_STACK_LINE(657)
	{
		HX_STACK_LINE(659)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(659)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(659)
		if ((tmp)){
			HX_STACK_LINE(659)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(659)
			tmp1 = false;
		}
		HX_STACK_LINE(659)
		if ((tmp1)){
			HX_STACK_LINE(659)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(659)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(659)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(662)
	::zpp_nape::geom::ZPP_GeomPoly tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(662)
	::zpp_nape::geom::ZPP_GeomVert tmp1 = tmp->vertices;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(662)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(662)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(662)
	if ((tmp3)){
		HX_STACK_LINE(663)
		bool tmp4 = (times > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(663)
		if ((tmp4)){
			HX_STACK_LINE(664)
			while((true)){
				HX_STACK_LINE(664)
				int tmp5 = (times)--;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(664)
				bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(664)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(664)
				if ((tmp7)){
					HX_STACK_LINE(664)
					break;
				}
				HX_STACK_LINE(664)
				::zpp_nape::geom::ZPP_GeomPoly tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(664)
				::zpp_nape::geom::ZPP_GeomVert tmp9 = tmp8->vertices->next;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(664)
				::zpp_nape::geom::ZPP_GeomPoly tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(664)
				tmp10->vertices = tmp9;
			}
		}
		else{
			HX_STACK_LINE(666)
			bool tmp5 = (times < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(666)
			if ((tmp5)){
				HX_STACK_LINE(667)
				while((true)){
					HX_STACK_LINE(667)
					int tmp6 = (times)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(667)
					bool tmp7 = (tmp6 < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(667)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(667)
					if ((tmp8)){
						HX_STACK_LINE(667)
						break;
					}
					HX_STACK_LINE(667)
					::zpp_nape::geom::ZPP_GeomPoly tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(667)
					::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->prev;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(667)
					::zpp_nape::geom::ZPP_GeomPoly tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(667)
					tmp11->vertices = tmp10;
				}
			}
		}
	}
	HX_STACK_LINE(670)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,skipForward,return )

::nape::geom::GeomPoly GeomPoly_obj::skipBackwards( int times){
	HX_STACK_FRAME("nape.geom.GeomPoly","skipBackwards",0x6b360bf7,"nape.geom.GeomPoly.skipBackwards","nape/geom/GeomPoly.hx",698,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(times,"times")
	HX_STACK_LINE(699)
	{
		HX_STACK_LINE(701)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(701)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(701)
		if ((tmp)){
			HX_STACK_LINE(701)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(701)
			tmp1 = false;
		}
		HX_STACK_LINE(701)
		if ((tmp1)){
			HX_STACK_LINE(701)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(701)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(701)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(704)
	int tmp = times;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(704)
	int tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(704)
	::nape::geom::GeomPoly tmp2 = this->skipForward(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(704)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,skipBackwards,return )

::nape::geom::GeomPoly GeomPoly_obj::erase( int count){
	HX_STACK_FRAME("nape.geom.GeomPoly","erase",0x2e9b322c,"nape.geom.GeomPoly.erase","nape/geom/GeomPoly.hx",737,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(count,"count")
	HX_STACK_LINE(738)
	{
		HX_STACK_LINE(740)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(740)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(740)
		if ((tmp)){
			HX_STACK_LINE(740)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(740)
			tmp1 = false;
		}
		HX_STACK_LINE(740)
		if ((tmp1)){
			HX_STACK_LINE(740)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(740)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(740)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(743)
	while((true)){
		HX_STACK_LINE(743)
		bool tmp = (count != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(743)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(743)
		if ((tmp)){
			HX_STACK_LINE(743)
			::zpp_nape::geom::ZPP_GeomPoly tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(743)
			::zpp_nape::geom::ZPP_GeomPoly tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(743)
			::zpp_nape::geom::ZPP_GeomVert tmp4 = tmp3->vertices;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(743)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(743)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(743)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(743)
			tmp1 = !(tmp7);
		}
		else{
			HX_STACK_LINE(743)
			tmp1 = false;
		}
		HX_STACK_LINE(743)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(743)
		if ((tmp2)){
			HX_STACK_LINE(743)
			break;
		}
		HX_STACK_LINE(744)
		::zpp_nape::geom::ZPP_GeomPoly tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(744)
		::zpp_nape::geom::ZPP_GeomVert retv = tmp3->vertices;		HX_STACK_VAR(retv,"retv");
		HX_STACK_LINE(745)
		bool tmp4 = (count > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(745)
		if ((tmp4)){
			HX_STACK_LINE(746)
			::zpp_nape::geom::ZPP_GeomVert tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(746)
			{
				HX_STACK_LINE(755)
				::zpp_nape::geom::ZPP_GeomPoly tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(755)
				::zpp_nape::geom::ZPP_GeomVert tmp7 = tmp6->vertices;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(755)
				bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(755)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(755)
				if ((tmp8)){
					HX_STACK_LINE(755)
					::zpp_nape::geom::ZPP_GeomPoly tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(755)
					::zpp_nape::geom::ZPP_GeomPoly tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(755)
					::zpp_nape::geom::ZPP_GeomVert tmp12 = tmp11->vertices->prev;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(755)
					::zpp_nape::geom::ZPP_GeomVert tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(755)
					::zpp_nape::geom::ZPP_GeomPoly tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(755)
					::zpp_nape::geom::ZPP_GeomPoly tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(755)
					::zpp_nape::geom::ZPP_GeomVert tmp16 = tmp15->vertices;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(755)
					tmp9 = (tmp13 == tmp16);
				}
				else{
					HX_STACK_LINE(755)
					tmp9 = false;
				}
				HX_STACK_LINE(755)
				if ((tmp9)){
					HX_STACK_LINE(756)
					::zpp_nape::geom::ZPP_GeomPoly tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(756)
					::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10->vertices->prev = null();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(756)
					::zpp_nape::geom::ZPP_GeomPoly tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(756)
					tmp12->vertices->next = tmp11;
					HX_STACK_LINE(758)
					::zpp_nape::geom::ZPP_GeomPoly tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(758)
					tmp5 = tmp13->vertices = null();
				}
				else{
					HX_STACK_LINE(761)
					::zpp_nape::geom::ZPP_GeomPoly tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(761)
					::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10->vertices->next;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(761)
					::zpp_nape::geom::ZPP_GeomVert retnodes = tmp11;		HX_STACK_VAR(retnodes,"retnodes");
					HX_STACK_LINE(762)
					::zpp_nape::geom::ZPP_GeomPoly tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(762)
					::zpp_nape::geom::ZPP_GeomVert tmp13 = tmp12->vertices->next;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(762)
					::zpp_nape::geom::ZPP_GeomPoly tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(762)
					::zpp_nape::geom::ZPP_GeomVert tmp15 = tmp14->vertices->prev;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(762)
					tmp15->next = tmp13;
					HX_STACK_LINE(763)
					::zpp_nape::geom::ZPP_GeomPoly tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(763)
					::zpp_nape::geom::ZPP_GeomVert tmp17 = tmp16->vertices->prev;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(763)
					::zpp_nape::geom::ZPP_GeomPoly tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(763)
					::zpp_nape::geom::ZPP_GeomVert tmp19 = tmp18->vertices->next;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(763)
					tmp19->prev = tmp17;
					HX_STACK_LINE(764)
					::zpp_nape::geom::ZPP_GeomPoly tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(764)
					::zpp_nape::geom::ZPP_GeomVert tmp21 = tmp20->vertices->prev = null();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(764)
					::zpp_nape::geom::ZPP_GeomPoly tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(764)
					tmp22->vertices->next = tmp21;
					HX_STACK_LINE(766)
					::zpp_nape::geom::ZPP_GeomPoly tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(766)
					tmp23->vertices = null();
					HX_STACK_LINE(767)
					tmp5 = retnodes;
				}
			}
			HX_STACK_LINE(746)
			::zpp_nape::geom::ZPP_GeomPoly tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(746)
			tmp6->vertices = tmp5;
			HX_STACK_LINE(770)
			(count)--;
		}
		else{
			HX_STACK_LINE(772)
			bool tmp5 = (count < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(772)
			if ((tmp5)){
				HX_STACK_LINE(773)
				::zpp_nape::geom::ZPP_GeomVert tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(773)
				{
					HX_STACK_LINE(782)
					::zpp_nape::geom::ZPP_GeomPoly tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(782)
					::zpp_nape::geom::ZPP_GeomVert tmp8 = tmp7->vertices;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(782)
					bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(782)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(782)
					if ((tmp9)){
						HX_STACK_LINE(782)
						::zpp_nape::geom::ZPP_GeomPoly tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(782)
						::zpp_nape::geom::ZPP_GeomPoly tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(782)
						::zpp_nape::geom::ZPP_GeomVert tmp13 = tmp12->vertices->prev;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(782)
						::zpp_nape::geom::ZPP_GeomVert tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(782)
						::zpp_nape::geom::ZPP_GeomPoly tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(782)
						::zpp_nape::geom::ZPP_GeomPoly tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(782)
						::zpp_nape::geom::ZPP_GeomVert tmp17 = tmp16->vertices;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(782)
						tmp10 = (tmp14 == tmp17);
					}
					else{
						HX_STACK_LINE(782)
						tmp10 = false;
					}
					HX_STACK_LINE(782)
					if ((tmp10)){
						HX_STACK_LINE(783)
						::zpp_nape::geom::ZPP_GeomPoly tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(783)
						::zpp_nape::geom::ZPP_GeomVert tmp12 = tmp11->vertices->prev = null();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(783)
						::zpp_nape::geom::ZPP_GeomPoly tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(783)
						tmp13->vertices->next = tmp12;
						HX_STACK_LINE(785)
						tmp6 = null();
					}
					else{
						HX_STACK_LINE(788)
						::zpp_nape::geom::ZPP_GeomPoly tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(788)
						::zpp_nape::geom::ZPP_GeomVert tmp12 = tmp11->vertices->prev;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(788)
						::zpp_nape::geom::ZPP_GeomVert retnodes = tmp12;		HX_STACK_VAR(retnodes,"retnodes");
						HX_STACK_LINE(789)
						::zpp_nape::geom::ZPP_GeomPoly tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(789)
						::zpp_nape::geom::ZPP_GeomVert tmp14 = tmp13->vertices->next;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(789)
						::zpp_nape::geom::ZPP_GeomPoly tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(789)
						::zpp_nape::geom::ZPP_GeomVert tmp16 = tmp15->vertices->prev;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(789)
						tmp16->next = tmp14;
						HX_STACK_LINE(790)
						::zpp_nape::geom::ZPP_GeomPoly tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(790)
						::zpp_nape::geom::ZPP_GeomVert tmp18 = tmp17->vertices->prev;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(790)
						::zpp_nape::geom::ZPP_GeomPoly tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(790)
						::zpp_nape::geom::ZPP_GeomVert tmp20 = tmp19->vertices->next;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(790)
						tmp20->prev = tmp18;
						HX_STACK_LINE(791)
						::zpp_nape::geom::ZPP_GeomPoly tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(791)
						::zpp_nape::geom::ZPP_GeomVert tmp22 = tmp21->vertices->prev = null();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(791)
						::zpp_nape::geom::ZPP_GeomPoly tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(791)
						tmp23->vertices->next = tmp22;
						HX_STACK_LINE(793)
						::zpp_nape::geom::ZPP_GeomPoly tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(793)
						tmp24->vertices = null();
						HX_STACK_LINE(794)
						tmp6 = retnodes;
					}
				}
				HX_STACK_LINE(773)
				::zpp_nape::geom::ZPP_GeomPoly tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(773)
				tmp7->vertices = tmp6;
				HX_STACK_LINE(797)
				(count)++;
			}
		}
		HX_STACK_LINE(799)
		{
			HX_STACK_LINE(800)
			::zpp_nape::geom::ZPP_GeomVert o = retv;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(809)
			{
				HX_STACK_LINE(809)
				bool tmp5 = (o->wrap != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(809)
				if ((tmp5)){
					HX_STACK_LINE(809)
					::zpp_nape::geom::ZPP_Vec2 tmp6 = o->wrap->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(809)
					tmp6->_inuse = false;
					HX_STACK_LINE(809)
					{
						HX_STACK_LINE(809)
						::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(809)
						{
							HX_STACK_LINE(809)
							bool tmp7 = (_this != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(809)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(809)
							if ((tmp7)){
								HX_STACK_LINE(809)
								tmp8 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(809)
								tmp8 = false;
							}
							HX_STACK_LINE(809)
							if ((tmp8)){
								HX_STACK_LINE(809)
								::String tmp9 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(809)
								::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(809)
								HX_STACK_DO_THROW(tmp10);
							}
						}
						HX_STACK_LINE(809)
						{
							HX_STACK_LINE(809)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(809)
							bool tmp7 = _this1->_immutable;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(809)
							if ((tmp7)){
								HX_STACK_LINE(809)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(809)
							bool tmp8 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(809)
							if ((tmp8)){
								HX_STACK_LINE(809)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(809)
						bool tmp7 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(809)
						if ((tmp7)){
							HX_STACK_LINE(809)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(809)
						::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(809)
						_this->zpp_inner->outer = null();
						HX_STACK_LINE(809)
						_this->zpp_inner = null();
						HX_STACK_LINE(809)
						{
							HX_STACK_LINE(809)
							::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(809)
							o1->zpp_pool = null();
							HX_STACK_LINE(809)
							::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(809)
							bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(809)
							if ((tmp9)){
								HX_STACK_LINE(809)
								::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(809)
								tmp10->zpp_pool = o1;
							}
							else{
								HX_STACK_LINE(809)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
							}
							HX_STACK_LINE(809)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
							HX_STACK_LINE(809)
							o1->zpp_disp = true;
						}
						HX_STACK_LINE(809)
						{
							HX_STACK_LINE(809)
							::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(809)
							{
								HX_STACK_LINE(809)
								bool tmp8 = (o1->outer != null());		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(809)
								if ((tmp8)){
									HX_STACK_LINE(809)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(809)
									o1->outer = null();
								}
								HX_STACK_LINE(809)
								o1->_isimmutable = null();
								HX_STACK_LINE(809)
								o1->_validate = null();
								HX_STACK_LINE(809)
								o1->_invalidate = null();
							}
							HX_STACK_LINE(809)
							::zpp_nape::geom::ZPP_Vec2 tmp8 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(809)
							o1->next = tmp8;
							HX_STACK_LINE(809)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
						}
					}
					HX_STACK_LINE(809)
					o->wrap = null();
				}
				HX_STACK_LINE(809)
				::zpp_nape::geom::ZPP_GeomVert tmp6 = o->next = null();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(809)
				o->prev = tmp6;
			}
			HX_STACK_LINE(810)
			::zpp_nape::geom::ZPP_GeomVert tmp5 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(810)
			o->next = tmp5;
			HX_STACK_LINE(811)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(817)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,erase,return )

::nape::geom::GeomPoly GeomPoly_obj::clear( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","clear",0x03d9bad3,"nape.geom.GeomPoly.clear","nape/geom/GeomPoly.hx",827,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(828)
	{
		HX_STACK_LINE(830)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(830)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(830)
		if ((tmp)){
			HX_STACK_LINE(830)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(830)
			tmp1 = false;
		}
		HX_STACK_LINE(830)
		if ((tmp1)){
			HX_STACK_LINE(830)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(830)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(830)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(834)
	while((true)){
		HX_STACK_LINE(834)
		::zpp_nape::geom::ZPP_GeomPoly tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(834)
		::zpp_nape::geom::ZPP_GeomVert tmp1 = tmp->vertices;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(834)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(834)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(834)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(834)
		if ((tmp4)){
			HX_STACK_LINE(834)
			break;
		}
		HX_STACK_LINE(835)
		::zpp_nape::geom::ZPP_GeomPoly tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(835)
		::zpp_nape::geom::ZPP_GeomVert tmp6 = tmp5->vertices;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(836)
		::zpp_nape::geom::ZPP_GeomVert tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(836)
		{
			HX_STACK_LINE(845)
			::zpp_nape::geom::ZPP_GeomPoly tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(845)
			::zpp_nape::geom::ZPP_GeomVert tmp9 = tmp8->vertices;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(845)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(845)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(845)
			if ((tmp10)){
				HX_STACK_LINE(845)
				::zpp_nape::geom::ZPP_GeomPoly tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(845)
				::zpp_nape::geom::ZPP_GeomPoly tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(845)
				::zpp_nape::geom::ZPP_GeomVert tmp14 = tmp13->vertices->prev;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(845)
				::zpp_nape::geom::ZPP_GeomVert tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(845)
				::zpp_nape::geom::ZPP_GeomPoly tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(845)
				::zpp_nape::geom::ZPP_GeomPoly tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(845)
				::zpp_nape::geom::ZPP_GeomVert tmp18 = tmp17->vertices;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(845)
				tmp11 = (tmp15 == tmp18);
			}
			else{
				HX_STACK_LINE(845)
				tmp11 = false;
			}
			HX_STACK_LINE(845)
			if ((tmp11)){
				HX_STACK_LINE(846)
				::zpp_nape::geom::ZPP_GeomPoly tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(846)
				::zpp_nape::geom::ZPP_GeomVert tmp13 = tmp12->vertices->prev = null();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(846)
				::zpp_nape::geom::ZPP_GeomPoly tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(846)
				tmp14->vertices->next = tmp13;
				HX_STACK_LINE(848)
				::zpp_nape::geom::ZPP_GeomPoly tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(848)
				tmp7 = tmp15->vertices = null();
			}
			else{
				HX_STACK_LINE(851)
				::zpp_nape::geom::ZPP_GeomPoly tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(851)
				::zpp_nape::geom::ZPP_GeomVert tmp13 = tmp12->vertices->next;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(851)
				::zpp_nape::geom::ZPP_GeomVert retnodes = tmp13;		HX_STACK_VAR(retnodes,"retnodes");
				HX_STACK_LINE(852)
				::zpp_nape::geom::ZPP_GeomPoly tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(852)
				::zpp_nape::geom::ZPP_GeomVert tmp15 = tmp14->vertices->next;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(852)
				::zpp_nape::geom::ZPP_GeomPoly tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(852)
				::zpp_nape::geom::ZPP_GeomVert tmp17 = tmp16->vertices->prev;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(852)
				tmp17->next = tmp15;
				HX_STACK_LINE(853)
				::zpp_nape::geom::ZPP_GeomPoly tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(853)
				::zpp_nape::geom::ZPP_GeomVert tmp19 = tmp18->vertices->prev;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(853)
				::zpp_nape::geom::ZPP_GeomPoly tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(853)
				::zpp_nape::geom::ZPP_GeomVert tmp21 = tmp20->vertices->next;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(853)
				tmp21->prev = tmp19;
				HX_STACK_LINE(854)
				::zpp_nape::geom::ZPP_GeomPoly tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(854)
				::zpp_nape::geom::ZPP_GeomVert tmp23 = tmp22->vertices->prev = null();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(854)
				::zpp_nape::geom::ZPP_GeomPoly tmp24 = this->zpp_inner;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(854)
				tmp24->vertices->next = tmp23;
				HX_STACK_LINE(856)
				::zpp_nape::geom::ZPP_GeomPoly tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(856)
				tmp25->vertices = null();
				HX_STACK_LINE(857)
				tmp7 = retnodes;
			}
		}
		HX_STACK_LINE(836)
		::zpp_nape::geom::ZPP_GeomPoly tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(836)
		tmp8->vertices = tmp7;
		HX_STACK_LINE(860)
		{
			HX_STACK_LINE(861)
			::zpp_nape::geom::ZPP_GeomVert o = tmp6;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(870)
			{
				HX_STACK_LINE(870)
				bool tmp9 = (o->wrap != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(870)
				if ((tmp9)){
					HX_STACK_LINE(870)
					::zpp_nape::geom::ZPP_Vec2 tmp10 = o->wrap->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(870)
					tmp10->_inuse = false;
					HX_STACK_LINE(870)
					{
						HX_STACK_LINE(870)
						::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(870)
						{
							HX_STACK_LINE(870)
							bool tmp11 = (_this != null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(870)
							bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(870)
							if ((tmp11)){
								HX_STACK_LINE(870)
								tmp12 = _this->zpp_disp;
							}
							else{
								HX_STACK_LINE(870)
								tmp12 = false;
							}
							HX_STACK_LINE(870)
							if ((tmp12)){
								HX_STACK_LINE(870)
								::String tmp13 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(870)
								::String tmp14 = (tmp13 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(870)
								HX_STACK_DO_THROW(tmp14);
							}
						}
						HX_STACK_LINE(870)
						{
							HX_STACK_LINE(870)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(870)
							bool tmp11 = _this1->_immutable;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(870)
							if ((tmp11)){
								HX_STACK_LINE(870)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
							}
							HX_STACK_LINE(870)
							bool tmp12 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(870)
							if ((tmp12)){
								HX_STACK_LINE(870)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(870)
						bool tmp11 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(870)
						if ((tmp11)){
							HX_STACK_LINE(870)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
						}
						HX_STACK_LINE(870)
						::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(870)
						_this->zpp_inner->outer = null();
						HX_STACK_LINE(870)
						_this->zpp_inner = null();
						HX_STACK_LINE(870)
						{
							HX_STACK_LINE(870)
							::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(870)
							o1->zpp_pool = null();
							HX_STACK_LINE(870)
							::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(870)
							bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(870)
							if ((tmp13)){
								HX_STACK_LINE(870)
								::nape::geom::Vec2 tmp14 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(870)
								tmp14->zpp_pool = o1;
							}
							else{
								HX_STACK_LINE(870)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
							}
							HX_STACK_LINE(870)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
							HX_STACK_LINE(870)
							o1->zpp_disp = true;
						}
						HX_STACK_LINE(870)
						{
							HX_STACK_LINE(870)
							::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(870)
							{
								HX_STACK_LINE(870)
								bool tmp12 = (o1->outer != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(870)
								if ((tmp12)){
									HX_STACK_LINE(870)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(870)
									o1->outer = null();
								}
								HX_STACK_LINE(870)
								o1->_isimmutable = null();
								HX_STACK_LINE(870)
								o1->_validate = null();
								HX_STACK_LINE(870)
								o1->_invalidate = null();
							}
							HX_STACK_LINE(870)
							::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(870)
							o1->next = tmp12;
							HX_STACK_LINE(870)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
						}
					}
					HX_STACK_LINE(870)
					o->wrap = null();
				}
				HX_STACK_LINE(870)
				::zpp_nape::geom::ZPP_GeomVert tmp10 = o->next = null();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(870)
				o->prev = tmp10;
			}
			HX_STACK_LINE(871)
			::zpp_nape::geom::ZPP_GeomVert tmp9 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(871)
			o->next = tmp9;
			HX_STACK_LINE(872)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(879)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,clear,return )

::nape::geom::GeomPoly GeomPoly_obj::copy( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","copy",0x44e7bd2f,"nape.geom.GeomPoly.copy","nape/geom/GeomPoly.hx",902,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(903)
	{
		HX_STACK_LINE(905)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(905)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(905)
		if ((tmp)){
			HX_STACK_LINE(905)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(905)
			tmp1 = false;
		}
		HX_STACK_LINE(905)
		if ((tmp1)){
			HX_STACK_LINE(905)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(905)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(905)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(908)
	::nape::geom::GeomPoly tmp = ::nape::geom::GeomPoly_obj::get(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(908)
	::nape::geom::GeomPoly ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(909)
	{
		HX_STACK_LINE(910)
		::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(910)
		::zpp_nape::geom::ZPP_GeomVert F = tmp1->vertices;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(911)
		::zpp_nape::geom::ZPP_GeomPoly tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(911)
		::zpp_nape::geom::ZPP_GeomVert L = tmp2->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(912)
		bool tmp3 = (F != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(912)
		if ((tmp3)){
			HX_STACK_LINE(913)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(914)
			while((true)){
				HX_STACK_LINE(915)
				::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(917)
				{
					HX_STACK_LINE(918)
					::zpp_nape::geom::ZPP_GeomVert tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(918)
					{
						HX_STACK_LINE(919)
						::zpp_nape::geom::ZPP_GeomVert tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(919)
						{
							HX_STACK_LINE(919)
							::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(919)
							{
								HX_STACK_LINE(919)
								::zpp_nape::geom::ZPP_GeomVert tmp6 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(919)
								bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(919)
								if ((tmp7)){
									HX_STACK_LINE(919)
									::zpp_nape::geom::ZPP_GeomVert tmp8 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(919)
									ret1 = tmp8;
								}
								else{
									HX_STACK_LINE(919)
									::zpp_nape::geom::ZPP_GeomVert tmp8 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(919)
									ret1 = tmp8;
									HX_STACK_LINE(919)
									::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(919)
									ret1->next = null();
								}
								HX_STACK_LINE(919)
								ret1->forced = false;
							}
							HX_STACK_LINE(919)
							{
								HX_STACK_LINE(919)
								ret1->x = v->x;
								HX_STACK_LINE(919)
								ret1->y = v->y;
								HX_STACK_LINE(919)
								{
								}
							}
							HX_STACK_LINE(919)
							tmp5 = ret1;
						}
						HX_STACK_LINE(919)
						::zpp_nape::geom::ZPP_GeomVert obj = tmp5;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(920)
						::zpp_nape::geom::ZPP_GeomVert tmp6 = ret->zpp_inner->vertices;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(920)
						bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(920)
						if ((tmp7)){
							HX_STACK_LINE(920)
							::zpp_nape::geom::ZPP_GeomVert tmp8 = obj->next = obj;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(920)
							::zpp_nape::geom::ZPP_GeomVert tmp9 = obj->prev = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(920)
							ret->zpp_inner->vertices = tmp9;
						}
						else{
							HX_STACK_LINE(922)
							::zpp_nape::geom::ZPP_GeomVert tmp8 = ret->zpp_inner->vertices;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(922)
							obj->prev = tmp8;
							HX_STACK_LINE(923)
							::zpp_nape::geom::ZPP_GeomVert tmp9 = ret->zpp_inner->vertices;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(923)
							obj->next = tmp9->next;
							HX_STACK_LINE(924)
							::zpp_nape::geom::ZPP_GeomVert tmp10 = ret->zpp_inner->vertices;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(924)
							tmp10->next->prev = obj;
							HX_STACK_LINE(925)
							::zpp_nape::geom::ZPP_GeomVert tmp11 = ret->zpp_inner->vertices;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(925)
							tmp11->next = obj;
						}
						HX_STACK_LINE(927)
						tmp4 = obj;
					}
					HX_STACK_LINE(918)
					ret->zpp_inner->vertices = tmp4;
				}
				HX_STACK_LINE(931)
				nite = nite->next;
				HX_STACK_LINE(933)
				bool tmp4 = (nite != L);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(933)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(914)
				if ((tmp5)){
					HX_STACK_LINE(914)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(936)
	::nape::geom::GeomPoly tmp1 = ret->skipForward((int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(936)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,copy,return )

Void GeomPoly_obj::dispose( ){
{
		HX_STACK_FRAME("nape.geom.GeomPoly","dispose",0x09e42765,"nape.geom.GeomPoly.dispose","nape/geom/GeomPoly.hx",1416,0x0b8969aa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1417)
		{
			HX_STACK_LINE(1419)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1419)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1419)
			if ((tmp)){
				HX_STACK_LINE(1419)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(1419)
				tmp1 = false;
			}
			HX_STACK_LINE(1419)
			if ((tmp1)){
				HX_STACK_LINE(1419)
				::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1419)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1419)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(1422)
		this->clear();
		HX_STACK_LINE(1423)
		{
			HX_STACK_LINE(1424)
			::nape::geom::GeomPoly o = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1434)
			o->zpp_pool = null();
			HX_STACK_LINE(1435)
			::nape::geom::GeomPoly tmp = ::zpp_nape::util::ZPP_PubPool_obj::nextGeomPoly;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1435)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1435)
			if ((tmp1)){
				HX_STACK_LINE(1435)
				::nape::geom::GeomPoly tmp2 = ::zpp_nape::util::ZPP_PubPool_obj::nextGeomPoly;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1435)
				tmp2->zpp_pool = o;
			}
			else{
				HX_STACK_LINE(1436)
				::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly = o;
			}
			HX_STACK_LINE(1437)
			::zpp_nape::util::ZPP_PubPool_obj::nextGeomPoly = o;
			HX_STACK_LINE(1447)
			o->zpp_disp = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,dispose,(void))

::String GeomPoly_obj::toString( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","toString",0xae891726,"nape.geom.GeomPoly.toString","nape/geom/GeomPoly.hx",1454,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1455)
	::String ret = HX_HCSTRING("GeomPoly[","\x13","\x6c","\x4f","\x08");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1457)
	{
		HX_STACK_LINE(1458)
		::zpp_nape::geom::ZPP_GeomPoly tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1458)
		::zpp_nape::geom::ZPP_GeomVert F = tmp->vertices;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(1459)
		::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1459)
		::zpp_nape::geom::ZPP_GeomVert L = tmp1->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(1460)
		bool tmp2 = (F != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1460)
		if ((tmp2)){
			HX_STACK_LINE(1461)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(1462)
			while((true)){
				HX_STACK_LINE(1463)
				::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(1465)
				{
					HX_STACK_LINE(1466)
					::zpp_nape::geom::ZPP_GeomVert tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1466)
					::zpp_nape::geom::ZPP_GeomPoly tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1466)
					::zpp_nape::geom::ZPP_GeomVert tmp5 = tmp4->vertices;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1466)
					bool tmp6 = (tmp3 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1466)
					if ((tmp6)){
						HX_STACK_LINE(1466)
						hx::AddEq(ret,HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
					}
					HX_STACK_LINE(1467)
					::String tmp7 = (HX_HCSTRING("{","\x7b","\x00","\x00","\x00") + v->x);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1467)
					::String tmp8 = (tmp7 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1467)
					Float tmp9 = v->y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1467)
					::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1467)
					::String tmp11 = (tmp10 + HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1467)
					hx::AddEq(ret,tmp11);
				}
				HX_STACK_LINE(1470)
				nite = nite->next;
				HX_STACK_LINE(1472)
				bool tmp3 = (nite != L);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1472)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1462)
				if ((tmp4)){
					HX_STACK_LINE(1462)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(1476)
	::String tmp = (ret + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1476)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,toString,return )

Float GeomPoly_obj::area( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","area",0x43978d07,"nape.geom.GeomPoly.area","nape/geom/GeomPoly.hx",1487,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1488)
	{
		HX_STACK_LINE(1490)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1490)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1490)
		if ((tmp)){
			HX_STACK_LINE(1490)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(1490)
			tmp1 = false;
		}
		HX_STACK_LINE(1490)
		if ((tmp1)){
			HX_STACK_LINE(1490)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1490)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1490)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(1493)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1493)
	{
		HX_STACK_LINE(1494)
		::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1494)
		::zpp_nape::geom::ZPP_GeomVert tmp2 = tmp1->vertices;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1494)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1494)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1494)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1494)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1494)
		if ((tmp5)){
			HX_STACK_LINE(1494)
			::zpp_nape::geom::ZPP_GeomPoly tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1494)
			::zpp_nape::geom::ZPP_GeomPoly tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1494)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1494)
			::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->next;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1494)
			::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1494)
			::zpp_nape::geom::ZPP_GeomVert tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1494)
			tmp6 = (tmp12 == null());
		}
		else{
			HX_STACK_LINE(1494)
			tmp6 = true;
		}
		HX_STACK_LINE(1494)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1494)
		if ((tmp7)){
			HX_STACK_LINE(1494)
			::zpp_nape::geom::ZPP_GeomPoly tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1494)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1494)
			::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->prev;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1494)
			::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1494)
			::zpp_nape::geom::ZPP_GeomPoly tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1494)
			::zpp_nape::geom::ZPP_GeomPoly tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1494)
			::zpp_nape::geom::ZPP_GeomVert tmp14 = tmp13->vertices->next;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1494)
			::zpp_nape::geom::ZPP_GeomVert tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1494)
			tmp = (tmp11 == tmp15);
		}
		else{
			HX_STACK_LINE(1494)
			tmp = true;
		}
	}
	HX_STACK_LINE(1493)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1493)
	if ((tmp)){
		HX_STACK_LINE(1495)
		tmp1 = ((Float)0.0);
	}
	else{
		HX_STACK_LINE(1496)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1496)
		{
			HX_STACK_LINE(1521)
			Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
			HX_STACK_LINE(1522)
			{
				HX_STACK_LINE(1523)
				::zpp_nape::geom::ZPP_GeomPoly tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1523)
				::zpp_nape::geom::ZPP_GeomVert F = tmp3->vertices;		HX_STACK_VAR(F,"F");
				HX_STACK_LINE(1524)
				::zpp_nape::geom::ZPP_GeomPoly tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1524)
				::zpp_nape::geom::ZPP_GeomVert L = tmp4->vertices;		HX_STACK_VAR(L,"L");
				HX_STACK_LINE(1525)
				bool tmp5 = (F != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1525)
				if ((tmp5)){
					HX_STACK_LINE(1526)
					::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
					HX_STACK_LINE(1527)
					while((true)){
						HX_STACK_LINE(1528)
						::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(1530)
						{
							HX_STACK_LINE(1531)
							Float tmp6 = v->x;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1531)
							Float tmp7 = v->next->y;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1531)
							Float tmp8 = v->prev->y;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1531)
							Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1531)
							Float tmp10 = (tmp6 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1531)
							hx::AddEq(area,tmp10);
						}
						HX_STACK_LINE(1534)
						nite = nite->next;
						HX_STACK_LINE(1536)
						bool tmp6 = (nite != L);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1536)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1527)
						if ((tmp7)){
							HX_STACK_LINE(1527)
							break;
						}
					}
				}
			}
			HX_STACK_LINE(1539)
			tmp2 = (area * ((Float)0.5));
		}
		HX_STACK_LINE(1496)
		Float ret = tmp2;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1541)
		bool tmp3 = (ret < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1541)
		if ((tmp3)){
			HX_STACK_LINE(1541)
			Float tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1541)
			tmp1 = -(tmp4);
		}
		else{
			HX_STACK_LINE(1541)
			tmp1 = ret;
		}
	}
	HX_STACK_LINE(1493)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,area,return )

::nape::geom::Winding GeomPoly_obj::winding( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","winding",0x3707efe0,"nape.geom.GeomPoly.winding","nape/geom/GeomPoly.hx",1565,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1566)
	{
		HX_STACK_LINE(1568)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1568)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1568)
		if ((tmp)){
			HX_STACK_LINE(1568)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(1568)
			tmp1 = false;
		}
		HX_STACK_LINE(1568)
		if ((tmp1)){
			HX_STACK_LINE(1568)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1568)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1568)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(1571)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1571)
	{
		HX_STACK_LINE(1572)
		::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1572)
		::zpp_nape::geom::ZPP_GeomVert tmp2 = tmp1->vertices;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1572)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1572)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1572)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1572)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1572)
		if ((tmp5)){
			HX_STACK_LINE(1572)
			::zpp_nape::geom::ZPP_GeomPoly tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1572)
			::zpp_nape::geom::ZPP_GeomPoly tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1572)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1572)
			::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->next;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1572)
			::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1572)
			::zpp_nape::geom::ZPP_GeomVert tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1572)
			tmp6 = (tmp12 == null());
		}
		else{
			HX_STACK_LINE(1572)
			tmp6 = true;
		}
		HX_STACK_LINE(1572)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1572)
		if ((tmp7)){
			HX_STACK_LINE(1572)
			::zpp_nape::geom::ZPP_GeomPoly tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1572)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1572)
			::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->prev;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1572)
			::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1572)
			::zpp_nape::geom::ZPP_GeomPoly tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1572)
			::zpp_nape::geom::ZPP_GeomPoly tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1572)
			::zpp_nape::geom::ZPP_GeomVert tmp14 = tmp13->vertices->next;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1572)
			::zpp_nape::geom::ZPP_GeomVert tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1572)
			tmp = (tmp11 == tmp15);
		}
		else{
			HX_STACK_LINE(1572)
			tmp = true;
		}
	}
	HX_STACK_LINE(1571)
	if ((tmp)){
		HX_STACK_LINE(1574)
		::nape::geom::Winding tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1574)
		{
			HX_STACK_LINE(1574)
			::nape::geom::Winding tmp2 = ::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1574)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1574)
			if ((tmp3)){
				HX_STACK_LINE(1574)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(1574)
				::nape::geom::Winding tmp4 = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1574)
				::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED = tmp4;
				HX_STACK_LINE(1574)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(1574)
			tmp1 = ::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED;
		}
		HX_STACK_LINE(1574)
		return tmp1;
	}
	else{
		HX_STACK_LINE(1577)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1577)
		{
			HX_STACK_LINE(1602)
			Float area = ((Float)0.0);		HX_STACK_VAR(area,"area");
			HX_STACK_LINE(1603)
			{
				HX_STACK_LINE(1604)
				::zpp_nape::geom::ZPP_GeomPoly tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1604)
				::zpp_nape::geom::ZPP_GeomVert F = tmp2->vertices;		HX_STACK_VAR(F,"F");
				HX_STACK_LINE(1605)
				::zpp_nape::geom::ZPP_GeomPoly tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1605)
				::zpp_nape::geom::ZPP_GeomVert L = tmp3->vertices;		HX_STACK_VAR(L,"L");
				HX_STACK_LINE(1606)
				bool tmp4 = (F != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1606)
				if ((tmp4)){
					HX_STACK_LINE(1607)
					::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
					HX_STACK_LINE(1608)
					while((true)){
						HX_STACK_LINE(1609)
						::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(1611)
						{
							HX_STACK_LINE(1612)
							Float tmp5 = v->x;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1612)
							Float tmp6 = v->next->y;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1612)
							Float tmp7 = v->prev->y;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1612)
							Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1612)
							Float tmp9 = (tmp5 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1612)
							hx::AddEq(area,tmp9);
						}
						HX_STACK_LINE(1615)
						nite = nite->next;
						HX_STACK_LINE(1617)
						bool tmp5 = (nite != L);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1617)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1608)
						if ((tmp6)){
							HX_STACK_LINE(1608)
							break;
						}
					}
				}
			}
			HX_STACK_LINE(1620)
			tmp1 = (area * ((Float)0.5));
		}
		HX_STACK_LINE(1577)
		Float area = tmp1;		HX_STACK_VAR(area,"area");
		HX_STACK_LINE(1622)
		bool tmp2 = (area > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1622)
		::nape::geom::Winding tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1622)
		if ((tmp2)){
			HX_STACK_LINE(1622)
			::nape::geom::Winding tmp4 = ::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1622)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1622)
			if ((tmp5)){
				HX_STACK_LINE(1622)
				::zpp_nape::util::ZPP_Flags_obj::internal = true;
				HX_STACK_LINE(1622)
				::nape::geom::Winding tmp6 = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1622)
				::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE = tmp6;
				HX_STACK_LINE(1622)
				::zpp_nape::util::ZPP_Flags_obj::internal = false;
			}
			HX_STACK_LINE(1622)
			tmp3 = ::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE;
		}
		else{
			HX_STACK_LINE(1622)
			bool tmp4 = (area == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1622)
			if ((tmp4)){
				HX_STACK_LINE(1622)
				::nape::geom::Winding tmp5 = ::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1622)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1622)
				if ((tmp6)){
					HX_STACK_LINE(1622)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1622)
					::nape::geom::Winding tmp7 = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1622)
					::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED = tmp7;
					HX_STACK_LINE(1622)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1622)
				tmp3 = ::zpp_nape::util::ZPP_Flags_obj::Winding_UNDEFINED;
			}
			else{
				HX_STACK_LINE(1622)
				::nape::geom::Winding tmp5 = ::zpp_nape::util::ZPP_Flags_obj::Winding_ANTICLOCKWISE;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1622)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1622)
				if ((tmp6)){
					HX_STACK_LINE(1622)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1622)
					::nape::geom::Winding tmp7 = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1622)
					::zpp_nape::util::ZPP_Flags_obj::Winding_ANTICLOCKWISE = tmp7;
					HX_STACK_LINE(1622)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1622)
				tmp3 = ::zpp_nape::util::ZPP_Flags_obj::Winding_ANTICLOCKWISE;
			}
		}
		HX_STACK_LINE(1622)
		return tmp3;
	}
	HX_STACK_LINE(1571)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,winding,return )

bool GeomPoly_obj::contains( ::nape::geom::Vec2 point){
	HX_STACK_FRAME("nape.geom.GeomPoly","contains",0xa295a099,"nape.geom.GeomPoly.contains","nape/geom/GeomPoly.hx",1641,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(1642)
	{
		HX_STACK_LINE(1644)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1644)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1644)
		if ((tmp)){
			HX_STACK_LINE(1644)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(1644)
			tmp1 = false;
		}
		HX_STACK_LINE(1644)
		if ((tmp1)){
			HX_STACK_LINE(1644)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1644)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1644)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(1647)
	{
		HX_STACK_LINE(1649)
		bool tmp = (point != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1649)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1649)
		if ((tmp)){
			HX_STACK_LINE(1649)
			tmp1 = point->zpp_disp;
		}
		else{
			HX_STACK_LINE(1649)
			tmp1 = false;
		}
		HX_STACK_LINE(1649)
		if ((tmp1)){
			HX_STACK_LINE(1649)
			::String tmp2 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1649)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1649)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(1653)
	bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1653)
	if ((tmp)){
		HX_STACK_LINE(1654)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: GeomPoly::contains point cannot be null","\xc2","\xe1","\x10","\x9f"));
	}
	HX_STACK_LINE(1657)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1657)
	{
		HX_STACK_LINE(1658)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1658)
		{
			HX_STACK_LINE(1658)
			{
				HX_STACK_LINE(1658)
				bool tmp3 = (point != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1658)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1658)
				if ((tmp3)){
					HX_STACK_LINE(1658)
					tmp4 = point->zpp_disp;
				}
				else{
					HX_STACK_LINE(1658)
					tmp4 = false;
				}
				HX_STACK_LINE(1658)
				if ((tmp4)){
					HX_STACK_LINE(1658)
					::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1658)
					::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1658)
					HX_STACK_DO_THROW(tmp6);
				}
			}
			HX_STACK_LINE(1658)
			{
				HX_STACK_LINE(1658)
				::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1658)
				bool tmp3 = (_this->_validate != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1658)
				if ((tmp3)){
					HX_STACK_LINE(1658)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1658)
			tmp2 = point->zpp_inner->x;
		}
		HX_STACK_LINE(1658)
		Float x = tmp2;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1659)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1659)
		{
			HX_STACK_LINE(1659)
			{
				HX_STACK_LINE(1659)
				bool tmp4 = (point != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1659)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1659)
				if ((tmp4)){
					HX_STACK_LINE(1659)
					tmp5 = point->zpp_disp;
				}
				else{
					HX_STACK_LINE(1659)
					tmp5 = false;
				}
				HX_STACK_LINE(1659)
				if ((tmp5)){
					HX_STACK_LINE(1659)
					::String tmp6 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1659)
					::String tmp7 = (tmp6 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1659)
					HX_STACK_DO_THROW(tmp7);
				}
			}
			HX_STACK_LINE(1659)
			{
				HX_STACK_LINE(1659)
				::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1659)
				bool tmp4 = (_this->_validate != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1659)
				if ((tmp4)){
					HX_STACK_LINE(1659)
					_this->_validate();
				}
			}
			HX_STACK_LINE(1659)
			tmp3 = point->zpp_inner->y;
		}
		HX_STACK_LINE(1659)
		Float y = tmp3;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1660)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1661)
		{
			HX_STACK_LINE(1662)
			::zpp_nape::geom::ZPP_GeomPoly tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1662)
			::zpp_nape::geom::ZPP_GeomVert F = tmp4->vertices;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(1663)
			::zpp_nape::geom::ZPP_GeomPoly tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1663)
			::zpp_nape::geom::ZPP_GeomVert L = tmp5->vertices;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(1664)
			bool tmp6 = (F != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1664)
			if ((tmp6)){
				HX_STACK_LINE(1665)
				::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(1666)
				while((true)){
					HX_STACK_LINE(1667)
					::zpp_nape::geom::ZPP_GeomVert p = nite;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(1669)
					{
						HX_STACK_LINE(1670)
						::zpp_nape::geom::ZPP_GeomVert q = p->prev;		HX_STACK_VAR(q,"q");
						HX_STACK_LINE(1671)
						bool tmp7 = (p->y < y);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1671)
						bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1671)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1671)
						if ((tmp8)){
							HX_STACK_LINE(1671)
							tmp9 = (q->y >= y);
						}
						else{
							HX_STACK_LINE(1671)
							tmp9 = false;
						}
						HX_STACK_LINE(1671)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1671)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1671)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1671)
						if ((tmp11)){
							HX_STACK_LINE(1671)
							bool tmp13 = (q->y < y);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1671)
							bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1671)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1671)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1671)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1671)
							if ((tmp17)){
								HX_STACK_LINE(1671)
								tmp12 = (p->y >= y);
							}
							else{
								HX_STACK_LINE(1671)
								tmp12 = false;
							}
						}
						else{
							HX_STACK_LINE(1671)
							tmp12 = true;
						}
						HX_STACK_LINE(1671)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1671)
						if ((tmp12)){
							HX_STACK_LINE(1671)
							bool tmp14 = (p->x <= x);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1671)
							bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1671)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1671)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1671)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1671)
							bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1671)
							if ((tmp19)){
								HX_STACK_LINE(1671)
								tmp13 = (q->x <= x);
							}
							else{
								HX_STACK_LINE(1671)
								tmp13 = true;
							}
						}
						else{
							HX_STACK_LINE(1671)
							tmp13 = false;
						}
						HX_STACK_LINE(1671)
						if ((tmp13)){
							HX_STACK_LINE(1672)
							Float tmp14 = p->x;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1672)
							Float tmp15 = (y - p->y);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1672)
							Float tmp16 = (q->y - p->y);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1672)
							Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1672)
							Float tmp18 = (q->x - p->x);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1672)
							Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1672)
							Float tmp20 = (tmp14 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1672)
							Float tmp21 = x;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1672)
							bool tmp22 = (tmp20 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1672)
							if ((tmp22)){
								HX_STACK_LINE(1673)
								bool tmp23 = ret;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1673)
								bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1673)
								ret = tmp24;
							}
						}
					}
					HX_STACK_LINE(1678)
					nite = nite->next;
					HX_STACK_LINE(1680)
					bool tmp7 = (nite != L);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1680)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1666)
					if ((tmp8)){
						HX_STACK_LINE(1666)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(1683)
		tmp1 = ret;
	}
	HX_STACK_LINE(1657)
	bool ret = tmp1;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1685)
	{
		HX_STACK_LINE(1686)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1687)
		tmp2 = point->zpp_inner->weak;
		HX_STACK_LINE(1686)
		if ((tmp2)){
			HX_STACK_LINE(1689)
			{
				HX_STACK_LINE(1689)
				{
					HX_STACK_LINE(1689)
					bool tmp3 = (point != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1689)
					bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1689)
					if ((tmp3)){
						HX_STACK_LINE(1689)
						tmp4 = point->zpp_disp;
					}
					else{
						HX_STACK_LINE(1689)
						tmp4 = false;
					}
					HX_STACK_LINE(1689)
					if ((tmp4)){
						HX_STACK_LINE(1689)
						::String tmp5 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1689)
						::String tmp6 = (tmp5 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1689)
						HX_STACK_DO_THROW(tmp6);
					}
				}
				HX_STACK_LINE(1689)
				{
					HX_STACK_LINE(1689)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1689)
					bool tmp3 = _this->_immutable;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1689)
					if ((tmp3)){
						HX_STACK_LINE(1689)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
					}
					HX_STACK_LINE(1689)
					bool tmp4 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1689)
					if ((tmp4)){
						HX_STACK_LINE(1689)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1689)
				bool tmp3 = point->zpp_inner->_inuse;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1689)
				if ((tmp3)){
					HX_STACK_LINE(1689)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
				}
				HX_STACK_LINE(1689)
				::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1689)
				point->zpp_inner->outer = null();
				HX_STACK_LINE(1689)
				point->zpp_inner = null();
				HX_STACK_LINE(1689)
				{
					HX_STACK_LINE(1689)
					::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1689)
					o->zpp_pool = null();
					HX_STACK_LINE(1689)
					::nape::geom::Vec2 tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1689)
					bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1689)
					if ((tmp5)){
						HX_STACK_LINE(1689)
						::nape::geom::Vec2 tmp6 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1689)
						tmp6->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1689)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1689)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1689)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1689)
				{
					HX_STACK_LINE(1689)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1689)
					{
						HX_STACK_LINE(1689)
						bool tmp4 = (o->outer != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1689)
						if ((tmp4)){
							HX_STACK_LINE(1689)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1689)
							o->outer = null();
						}
						HX_STACK_LINE(1689)
						o->_isimmutable = null();
						HX_STACK_LINE(1689)
						o->_validate = null();
						HX_STACK_LINE(1689)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1689)
					::zpp_nape::geom::ZPP_Vec2 tmp4 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1689)
					o->next = tmp4;
					HX_STACK_LINE(1689)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1690)
			true;
		}
		else{
			HX_STACK_LINE(1693)
			false;
		}
	}
	HX_STACK_LINE(1696)
	bool tmp2 = ret;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1696)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,contains,return )

bool GeomPoly_obj::isClockwise( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","isClockwise",0x86d9b66e,"nape.geom.GeomPoly.isClockwise","nape/geom/GeomPoly.hx",1707,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1708)
	::nape::geom::Winding tmp = this->winding();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1708)
	::nape::geom::Winding tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1708)
	{
		HX_STACK_LINE(1708)
		::nape::geom::Winding tmp2 = ::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1708)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1708)
		if ((tmp3)){
			HX_STACK_LINE(1708)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(1708)
			::nape::geom::Winding tmp4 = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1708)
			::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE = tmp4;
			HX_STACK_LINE(1708)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(1708)
		tmp1 = ::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE;
	}
	HX_STACK_LINE(1708)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1708)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,isClockwise,return )

bool GeomPoly_obj::isConvex( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","isConvex",0x9662596b,"nape.geom.GeomPoly.isConvex","nape/geom/GeomPoly.hx",1735,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1736)
	{
		HX_STACK_LINE(1738)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1738)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1738)
		if ((tmp)){
			HX_STACK_LINE(1738)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(1738)
			tmp1 = false;
		}
		HX_STACK_LINE(1738)
		if ((tmp1)){
			HX_STACK_LINE(1738)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1738)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1738)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(1741)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1741)
	{
		HX_STACK_LINE(1742)
		::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1742)
		::zpp_nape::geom::ZPP_GeomVert tmp2 = tmp1->vertices;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1742)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1742)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1742)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1742)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1742)
		if ((tmp5)){
			HX_STACK_LINE(1742)
			::zpp_nape::geom::ZPP_GeomPoly tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1742)
			::zpp_nape::geom::ZPP_GeomPoly tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1742)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1742)
			::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->next;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1742)
			::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1742)
			::zpp_nape::geom::ZPP_GeomVert tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1742)
			tmp6 = (tmp12 == null());
		}
		else{
			HX_STACK_LINE(1742)
			tmp6 = true;
		}
		HX_STACK_LINE(1742)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1742)
		if ((tmp7)){
			HX_STACK_LINE(1742)
			::zpp_nape::geom::ZPP_GeomPoly tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1742)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1742)
			::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->prev;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1742)
			::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1742)
			::zpp_nape::geom::ZPP_GeomPoly tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1742)
			::zpp_nape::geom::ZPP_GeomPoly tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1742)
			::zpp_nape::geom::ZPP_GeomVert tmp14 = tmp13->vertices->next;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1742)
			::zpp_nape::geom::ZPP_GeomVert tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1742)
			tmp = (tmp11 == tmp15);
		}
		else{
			HX_STACK_LINE(1742)
			tmp = true;
		}
	}
	HX_STACK_LINE(1741)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1741)
	if ((tmp)){
		HX_STACK_LINE(1743)
		tmp1 = true;
	}
	else{
		HX_STACK_LINE(1768)
		bool neg = false;		HX_STACK_VAR(neg,"neg");
		HX_STACK_LINE(1769)
		bool pos = false;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(1770)
		bool ret = true;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1771)
		{
			HX_STACK_LINE(1772)
			::zpp_nape::geom::ZPP_GeomPoly tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1772)
			::zpp_nape::geom::ZPP_GeomVert F = tmp2->vertices;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(1773)
			::zpp_nape::geom::ZPP_GeomPoly tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1773)
			::zpp_nape::geom::ZPP_GeomVert L = tmp3->vertices;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(1774)
			bool tmp4 = (F != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1774)
			if ((tmp4)){
				HX_STACK_LINE(1775)
				::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(1776)
				while((true)){
					HX_STACK_LINE(1777)
					::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1779)
					{
						HX_STACK_LINE(1780)
						::zpp_nape::geom::ZPP_GeomVert u = v->prev;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(1781)
						::zpp_nape::geom::ZPP_GeomVert w = v->next;		HX_STACK_VAR(w,"w");
						HX_STACK_LINE(1782)
						Float ax = ((Float)0.0);		HX_STACK_VAR(ax,"ax");
						HX_STACK_LINE(1783)
						Float ay = ((Float)0.0);		HX_STACK_VAR(ay,"ay");
						HX_STACK_LINE(1784)
						{
							HX_STACK_LINE(1785)
							Float tmp5 = (w->x - v->x);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1785)
							ax = tmp5;
							HX_STACK_LINE(1786)
							Float tmp6 = (w->y - v->y);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1786)
							ay = tmp6;
						}
						HX_STACK_LINE(1788)
						Float bx = ((Float)0.0);		HX_STACK_VAR(bx,"bx");
						HX_STACK_LINE(1789)
						Float by = ((Float)0.0);		HX_STACK_VAR(by,"by");
						HX_STACK_LINE(1790)
						{
							HX_STACK_LINE(1791)
							Float tmp5 = (v->x - u->x);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1791)
							bx = tmp5;
							HX_STACK_LINE(1792)
							Float tmp6 = (v->y - u->y);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1792)
							by = tmp6;
						}
						HX_STACK_LINE(1794)
						Float tmp5 = (by * ax);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1794)
						Float tmp6 = (bx * ay);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1794)
						Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1794)
						Float dot = tmp7;		HX_STACK_VAR(dot,"dot");
						HX_STACK_LINE(1795)
						bool tmp8 = (dot > ((Float)0.0));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1795)
						if ((tmp8)){
							HX_STACK_LINE(1796)
							pos = true;
						}
						else{
							HX_STACK_LINE(1798)
							bool tmp9 = (dot < ((Float)0.0));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1798)
							if ((tmp9)){
								HX_STACK_LINE(1799)
								neg = true;
							}
						}
						HX_STACK_LINE(1801)
						bool tmp9 = pos;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1801)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1801)
						if ((tmp9)){
							HX_STACK_LINE(1801)
							tmp10 = neg;
						}
						else{
							HX_STACK_LINE(1801)
							tmp10 = false;
						}
						HX_STACK_LINE(1801)
						if ((tmp10)){
							HX_STACK_LINE(1802)
							ret = false;
							HX_STACK_LINE(1803)
							break;
						}
					}
					HX_STACK_LINE(1807)
					nite = nite->next;
					HX_STACK_LINE(1809)
					bool tmp5 = (nite != L);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1809)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1776)
					if ((tmp6)){
						HX_STACK_LINE(1776)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(1812)
		tmp1 = ret;
	}
	HX_STACK_LINE(1741)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,isConvex,return )

bool GeomPoly_obj::isSimple( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","isSimple",0x8702e636,"nape.geom.GeomPoly.isSimple","nape/geom/GeomPoly.hx",1844,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1845)
	{
		HX_STACK_LINE(1847)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1847)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1847)
		if ((tmp)){
			HX_STACK_LINE(1847)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(1847)
			tmp1 = false;
		}
		HX_STACK_LINE(1847)
		if ((tmp1)){
			HX_STACK_LINE(1847)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1847)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1847)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(1850)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1850)
	{
		HX_STACK_LINE(1851)
		::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1851)
		::zpp_nape::geom::ZPP_GeomVert tmp2 = tmp1->vertices;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1851)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1851)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1851)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1851)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1851)
		if ((tmp5)){
			HX_STACK_LINE(1851)
			::zpp_nape::geom::ZPP_GeomPoly tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1851)
			::zpp_nape::geom::ZPP_GeomPoly tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1851)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1851)
			::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->next;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1851)
			::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1851)
			::zpp_nape::geom::ZPP_GeomVert tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1851)
			tmp6 = (tmp12 == null());
		}
		else{
			HX_STACK_LINE(1851)
			tmp6 = true;
		}
		HX_STACK_LINE(1851)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1851)
		if ((tmp7)){
			HX_STACK_LINE(1851)
			::zpp_nape::geom::ZPP_GeomPoly tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1851)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1851)
			::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->prev;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1851)
			::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1851)
			::zpp_nape::geom::ZPP_GeomPoly tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1851)
			::zpp_nape::geom::ZPP_GeomPoly tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1851)
			::zpp_nape::geom::ZPP_GeomVert tmp14 = tmp13->vertices->next;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1851)
			::zpp_nape::geom::ZPP_GeomVert tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1851)
			tmp = (tmp11 == tmp15);
		}
		else{
			HX_STACK_LINE(1851)
			tmp = true;
		}
	}
	HX_STACK_LINE(1850)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1850)
	if ((tmp)){
		HX_STACK_LINE(1852)
		tmp1 = true;
	}
	else{
		HX_STACK_LINE(1852)
		::zpp_nape::geom::ZPP_GeomPoly tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1852)
		::zpp_nape::geom::ZPP_GeomVert tmp3 = tmp2->vertices;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1852)
		tmp1 = ::zpp_nape::geom::ZPP_Simple_obj::isSimple(tmp3);
	}
	HX_STACK_LINE(1850)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,isSimple,return )

bool GeomPoly_obj::isMonotone( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","isMonotone",0xf4c9ef19,"nape.geom.GeomPoly.isMonotone","nape/geom/GeomPoly.hx",1875,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1876)
	{
		HX_STACK_LINE(1878)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1878)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1878)
		if ((tmp)){
			HX_STACK_LINE(1878)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(1878)
			tmp1 = false;
		}
		HX_STACK_LINE(1878)
		if ((tmp1)){
			HX_STACK_LINE(1878)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1878)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1878)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(1881)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1881)
	{
		HX_STACK_LINE(1882)
		::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1882)
		::zpp_nape::geom::ZPP_GeomVert tmp2 = tmp1->vertices;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1882)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1882)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1882)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1882)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1882)
		if ((tmp5)){
			HX_STACK_LINE(1882)
			::zpp_nape::geom::ZPP_GeomPoly tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1882)
			::zpp_nape::geom::ZPP_GeomPoly tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1882)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1882)
			::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->next;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1882)
			::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1882)
			::zpp_nape::geom::ZPP_GeomVert tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1882)
			tmp6 = (tmp12 == null());
		}
		else{
			HX_STACK_LINE(1882)
			tmp6 = true;
		}
		HX_STACK_LINE(1882)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1882)
		if ((tmp7)){
			HX_STACK_LINE(1882)
			::zpp_nape::geom::ZPP_GeomPoly tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1882)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1882)
			::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->prev;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1882)
			::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1882)
			::zpp_nape::geom::ZPP_GeomPoly tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1882)
			::zpp_nape::geom::ZPP_GeomPoly tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1882)
			::zpp_nape::geom::ZPP_GeomVert tmp14 = tmp13->vertices->next;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1882)
			::zpp_nape::geom::ZPP_GeomVert tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1882)
			tmp = (tmp11 == tmp15);
		}
		else{
			HX_STACK_LINE(1882)
			tmp = true;
		}
	}
	HX_STACK_LINE(1881)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1881)
	if ((tmp)){
		HX_STACK_LINE(1883)
		tmp1 = true;
	}
	else{
		HX_STACK_LINE(1883)
		::zpp_nape::geom::ZPP_GeomPoly tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1883)
		::zpp_nape::geom::ZPP_GeomVert tmp3 = tmp2->vertices;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1883)
		tmp1 = ::zpp_nape::geom::ZPP_Monotone_obj::isMonotone(tmp3);
	}
	HX_STACK_LINE(1881)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,isMonotone,return )

bool GeomPoly_obj::isDegenerate( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","isDegenerate",0xd8aed3ba,"nape.geom.GeomPoly.isDegenerate","nape/geom/GeomPoly.hx",1895,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1896)
	{
		HX_STACK_LINE(1898)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1898)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1898)
		if ((tmp)){
			HX_STACK_LINE(1898)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(1898)
			tmp1 = false;
		}
		HX_STACK_LINE(1898)
		if ((tmp1)){
			HX_STACK_LINE(1898)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1898)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1898)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(1901)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1901)
	{
		HX_STACK_LINE(1902)
		::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1902)
		::zpp_nape::geom::ZPP_GeomVert tmp2 = tmp1->vertices;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1902)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1902)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1902)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1902)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1902)
		if ((tmp5)){
			HX_STACK_LINE(1902)
			::zpp_nape::geom::ZPP_GeomPoly tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1902)
			::zpp_nape::geom::ZPP_GeomPoly tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1902)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1902)
			::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->next;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1902)
			::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1902)
			::zpp_nape::geom::ZPP_GeomVert tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1902)
			tmp6 = (tmp12 == null());
		}
		else{
			HX_STACK_LINE(1902)
			tmp6 = true;
		}
		HX_STACK_LINE(1902)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1902)
		if ((tmp7)){
			HX_STACK_LINE(1902)
			::zpp_nape::geom::ZPP_GeomPoly tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1902)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1902)
			::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->prev;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1902)
			::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1902)
			::zpp_nape::geom::ZPP_GeomPoly tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1902)
			::zpp_nape::geom::ZPP_GeomPoly tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1902)
			::zpp_nape::geom::ZPP_GeomVert tmp14 = tmp13->vertices->next;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1902)
			::zpp_nape::geom::ZPP_GeomVert tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1902)
			tmp = (tmp11 == tmp15);
		}
		else{
			HX_STACK_LINE(1902)
			tmp = true;
		}
	}
	HX_STACK_LINE(1901)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1901)
	if ((tmp)){
		HX_STACK_LINE(1903)
		tmp1 = true;
	}
	else{
		HX_STACK_LINE(1903)
		Float tmp2 = this->area();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1903)
		Float tmp3 = ::nape::Config_obj::epsilon;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1903)
		tmp1 = (tmp2 < tmp3);
	}
	HX_STACK_LINE(1901)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,isDegenerate,return )

::nape::geom::GeomPoly GeomPoly_obj::simplify( Float epsilon){
	HX_STACK_FRAME("nape.geom.GeomPoly","simplify",0x8f8b9d83,"nape.geom.GeomPoly.simplify","nape/geom/GeomPoly.hx",1931,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(epsilon,"epsilon")
	HX_STACK_LINE(1932)
	{
		HX_STACK_LINE(1934)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1934)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1934)
		if ((tmp)){
			HX_STACK_LINE(1934)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(1934)
			tmp1 = false;
		}
		HX_STACK_LINE(1934)
		if ((tmp1)){
			HX_STACK_LINE(1934)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1934)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1934)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(1938)
	bool tmp = (epsilon <= ((Float)0.0));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1938)
	if ((tmp)){
		HX_STACK_LINE(1939)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Epsilon should be > 0 for simplifying a GeomPoly","\xeb","\xc3","\xa2","\x75"));
	}
	HX_STACK_LINE(1942)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1942)
	{
		HX_STACK_LINE(1943)
		::zpp_nape::geom::ZPP_GeomPoly tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1943)
		::zpp_nape::geom::ZPP_GeomVert tmp3 = tmp2->vertices;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1943)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1943)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1943)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1943)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1943)
		if ((tmp6)){
			HX_STACK_LINE(1943)
			::zpp_nape::geom::ZPP_GeomPoly tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1943)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1943)
			::zpp_nape::geom::ZPP_GeomPoly tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1943)
			::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10->vertices->next;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1943)
			::zpp_nape::geom::ZPP_GeomVert tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1943)
			::zpp_nape::geom::ZPP_GeomVert tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1943)
			tmp7 = (tmp13 == null());
		}
		else{
			HX_STACK_LINE(1943)
			tmp7 = true;
		}
		HX_STACK_LINE(1943)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1943)
		if ((tmp8)){
			HX_STACK_LINE(1943)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1943)
			::zpp_nape::geom::ZPP_GeomPoly tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1943)
			::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10->vertices->prev;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1943)
			::zpp_nape::geom::ZPP_GeomVert tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1943)
			::zpp_nape::geom::ZPP_GeomPoly tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1943)
			::zpp_nape::geom::ZPP_GeomPoly tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1943)
			::zpp_nape::geom::ZPP_GeomVert tmp15 = tmp14->vertices->next;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1943)
			::zpp_nape::geom::ZPP_GeomVert tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1943)
			tmp1 = (tmp12 == tmp16);
		}
		else{
			HX_STACK_LINE(1943)
			tmp1 = true;
		}
	}
	HX_STACK_LINE(1942)
	if ((tmp1)){
		HX_STACK_LINE(1945)
		::nape::geom::GeomPoly tmp2 = this->copy();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1945)
		return tmp2;
	}
	else{
		HX_STACK_LINE(1948)
		::zpp_nape::geom::ZPP_GeomPoly tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1948)
		::zpp_nape::geom::ZPP_GeomVert tmp3 = tmp2->vertices;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1948)
		Float tmp4 = epsilon;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1948)
		::zpp_nape::geom::ZPP_GeomVert tmp5 = ::zpp_nape::geom::ZPP_Simplify_obj::simplify(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1948)
		::zpp_nape::geom::ZPP_GeomVert x = tmp5;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1949)
		::nape::geom::GeomPoly tmp6 = ::nape::geom::GeomPoly_obj::get(null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1949)
		::nape::geom::GeomPoly ret = tmp6;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1950)
		ret->zpp_inner->vertices = x;
		HX_STACK_LINE(1951)
		::nape::geom::GeomPoly tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1951)
		return tmp7;
	}
	HX_STACK_LINE(1942)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,simplify,return )

::nape::geom::GeomPolyList GeomPoly_obj::simpleDecomposition( ::nape::geom::GeomPolyList output){
	HX_STACK_FRAME("nape.geom.GeomPoly","simpleDecomposition",0xc25bdc3d,"nape.geom.GeomPoly.simpleDecomposition","nape/geom/GeomPoly.hx",1973,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(1974)
	{
		HX_STACK_LINE(1976)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1976)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1976)
		if ((tmp)){
			HX_STACK_LINE(1976)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(1976)
			tmp1 = false;
		}
		HX_STACK_LINE(1976)
		if ((tmp1)){
			HX_STACK_LINE(1976)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1976)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1976)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(1980)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1980)
	{
		HX_STACK_LINE(1981)
		::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1981)
		::zpp_nape::geom::ZPP_GeomVert tmp2 = tmp1->vertices;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1981)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1981)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1981)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1981)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1981)
		if ((tmp5)){
			HX_STACK_LINE(1981)
			::zpp_nape::geom::ZPP_GeomPoly tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1981)
			::zpp_nape::geom::ZPP_GeomPoly tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1981)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1981)
			::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->next;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1981)
			::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1981)
			::zpp_nape::geom::ZPP_GeomVert tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1981)
			tmp6 = (tmp12 == null());
		}
		else{
			HX_STACK_LINE(1981)
			tmp6 = true;
		}
		HX_STACK_LINE(1981)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1981)
		if ((tmp7)){
			HX_STACK_LINE(1981)
			::zpp_nape::geom::ZPP_GeomPoly tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1981)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1981)
			::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->prev;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1981)
			::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1981)
			::zpp_nape::geom::ZPP_GeomPoly tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1981)
			::zpp_nape::geom::ZPP_GeomPoly tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1981)
			::zpp_nape::geom::ZPP_GeomVert tmp14 = tmp13->vertices->next;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1981)
			::zpp_nape::geom::ZPP_GeomVert tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1981)
			tmp = (tmp11 == tmp15);
		}
		else{
			HX_STACK_LINE(1981)
			tmp = true;
		}
	}
	HX_STACK_LINE(1980)
	if ((tmp)){
		HX_STACK_LINE(1983)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot decompose a degenerate polygon","\x8d","\x10","\x53","\xf2"));
	}
	HX_STACK_LINE(1986)
	::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1986)
	::zpp_nape::geom::ZPP_GeomVert tmp2 = tmp1->vertices;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1986)
	::zpp_nape::util::ZNPList_ZPP_GeomVert tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1986)
	{
		HX_STACK_LINE(1986)
		::zpp_nape::util::ZNPList_ZPP_GeomVert tmp4 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1986)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1986)
		if ((tmp5)){
			HX_STACK_LINE(1986)
			::zpp_nape::util::ZNPList_ZPP_GeomVert tmp6 = ::zpp_nape::util::ZNPList_ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1986)
			::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList = tmp6;
		}
		HX_STACK_LINE(1986)
		tmp3 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList;
	}
	HX_STACK_LINE(1986)
	::zpp_nape::util::ZNPList_ZPP_GeomVert tmp4 = ::zpp_nape::geom::ZPP_Simple_obj::decompose(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1986)
	::zpp_nape::util::ZNPList_ZPP_GeomVert MPs = tmp4;		HX_STACK_VAR(MPs,"MPs");
	HX_STACK_LINE(1987)
	bool tmp5 = (output == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1987)
	::nape::geom::GeomPolyList tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1987)
	if ((tmp5)){
		HX_STACK_LINE(1987)
		tmp6 = ::nape::geom::GeomPolyList_obj::__new();
	}
	else{
		HX_STACK_LINE(1987)
		tmp6 = output;
	}
	HX_STACK_LINE(1987)
	::nape::geom::GeomPolyList ret = tmp6;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1988)
	while((true)){
		HX_STACK_LINE(1988)
		bool tmp7 = (MPs->head == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1988)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1988)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1988)
		if ((tmp9)){
			HX_STACK_LINE(1988)
			break;
		}
		HX_STACK_LINE(1989)
		::zpp_nape::geom::ZPP_GeomVert tmp10 = MPs->pop_unsafe();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1989)
		::zpp_nape::geom::ZPP_GeomVert MP = tmp10;		HX_STACK_VAR(MP,"MP");
		HX_STACK_LINE(1990)
		::nape::geom::GeomPoly tmp11 = ::nape::geom::GeomPoly_obj::get(null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1990)
		::nape::geom::GeomPoly x = tmp11;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1991)
		x->zpp_inner->vertices = MP;
		HX_STACK_LINE(1992)
		bool tmp12 = ret->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1992)
		if ((tmp12)){
			HX_STACK_LINE(1992)
			::nape::geom::GeomPoly tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1992)
			ret->push(tmp13);
		}
		else{
			HX_STACK_LINE(1992)
			::nape::geom::GeomPoly tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1992)
			ret->unshift(tmp13);
		}
	}
	HX_STACK_LINE(1994)
	::nape::geom::GeomPolyList tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1994)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,simpleDecomposition,return )

::nape::geom::GeomPolyList GeomPoly_obj::monotoneDecomposition( ::nape::geom::GeomPolyList output){
	HX_STACK_FRAME("nape.geom.GeomPoly","monotoneDecomposition",0xee33e7fa,"nape.geom.GeomPoly.monotoneDecomposition","nape/geom/GeomPoly.hx",2019,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(2020)
	{
		HX_STACK_LINE(2022)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2022)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2022)
		if ((tmp)){
			HX_STACK_LINE(2022)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(2022)
			tmp1 = false;
		}
		HX_STACK_LINE(2022)
		if ((tmp1)){
			HX_STACK_LINE(2022)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2022)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2022)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(2026)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2026)
	{
		HX_STACK_LINE(2027)
		::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2027)
		::zpp_nape::geom::ZPP_GeomVert tmp2 = tmp1->vertices;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2027)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2027)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2027)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2027)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2027)
		if ((tmp5)){
			HX_STACK_LINE(2027)
			::zpp_nape::geom::ZPP_GeomPoly tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2027)
			::zpp_nape::geom::ZPP_GeomPoly tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2027)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2027)
			::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->next;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2027)
			::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2027)
			::zpp_nape::geom::ZPP_GeomVert tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2027)
			tmp6 = (tmp12 == null());
		}
		else{
			HX_STACK_LINE(2027)
			tmp6 = true;
		}
		HX_STACK_LINE(2027)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2027)
		if ((tmp7)){
			HX_STACK_LINE(2027)
			::zpp_nape::geom::ZPP_GeomPoly tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2027)
			::zpp_nape::geom::ZPP_GeomPoly tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2027)
			::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->prev;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2027)
			::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2027)
			::zpp_nape::geom::ZPP_GeomPoly tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2027)
			::zpp_nape::geom::ZPP_GeomPoly tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2027)
			::zpp_nape::geom::ZPP_GeomVert tmp14 = tmp13->vertices->next;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2027)
			::zpp_nape::geom::ZPP_GeomVert tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2027)
			tmp = (tmp11 == tmp15);
		}
		else{
			HX_STACK_LINE(2027)
			tmp = true;
		}
	}
	HX_STACK_LINE(2026)
	if ((tmp)){
		HX_STACK_LINE(2029)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot decompose a degenerate polygon","\x8d","\x10","\x53","\xf2"));
	}
	HX_STACK_LINE(2032)
	::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2032)
	::zpp_nape::geom::ZPP_GeomVert tmp2 = tmp1->vertices;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2032)
	::zpp_nape::geom::ZPP_PartitionedPoly tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2032)
	{
		HX_STACK_LINE(2032)
		::zpp_nape::geom::ZPP_PartitionedPoly tmp4 = ::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2032)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2032)
		if ((tmp5)){
			HX_STACK_LINE(2032)
			::zpp_nape::geom::ZPP_PartitionedPoly tmp6 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::__new(null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2032)
			::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly = tmp6;
		}
		HX_STACK_LINE(2032)
		tmp3 = ::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly;
	}
	HX_STACK_LINE(2032)
	::zpp_nape::geom::ZPP_PartitionedPoly tmp4 = ::zpp_nape::geom::ZPP_Monotone_obj::decompose(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2032)
	::zpp_nape::geom::ZPP_PartitionedPoly poly = tmp4;		HX_STACK_VAR(poly,"poly");
	HX_STACK_LINE(2033)
	::zpp_nape::util::ZNPList_ZPP_GeomVert tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2033)
	{
		HX_STACK_LINE(2033)
		::zpp_nape::util::ZNPList_ZPP_GeomVert tmp6 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2033)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2033)
		if ((tmp7)){
			HX_STACK_LINE(2033)
			::zpp_nape::util::ZNPList_ZPP_GeomVert tmp8 = ::zpp_nape::util::ZNPList_ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2033)
			::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList = tmp8;
		}
		HX_STACK_LINE(2033)
		tmp5 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList;
	}
	HX_STACK_LINE(2033)
	::zpp_nape::util::ZNPList_ZPP_GeomVert tmp6 = poly->extract(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2033)
	::zpp_nape::util::ZNPList_ZPP_GeomVert MPs = tmp6;		HX_STACK_VAR(MPs,"MPs");
	HX_STACK_LINE(2034)
	bool tmp7 = (output == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(2034)
	::nape::geom::GeomPolyList tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(2034)
	if ((tmp7)){
		HX_STACK_LINE(2034)
		tmp8 = ::nape::geom::GeomPolyList_obj::__new();
	}
	else{
		HX_STACK_LINE(2034)
		tmp8 = output;
	}
	HX_STACK_LINE(2034)
	::nape::geom::GeomPolyList ret = tmp8;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2035)
	while((true)){
		HX_STACK_LINE(2035)
		bool tmp9 = (MPs->head == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2035)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2035)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(2035)
		if ((tmp11)){
			HX_STACK_LINE(2035)
			break;
		}
		HX_STACK_LINE(2036)
		::zpp_nape::geom::ZPP_GeomVert tmp12 = MPs->pop_unsafe();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(2036)
		::zpp_nape::geom::ZPP_GeomVert MP = tmp12;		HX_STACK_VAR(MP,"MP");
		HX_STACK_LINE(2037)
		::nape::geom::GeomPoly tmp13 = ::nape::geom::GeomPoly_obj::get(null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(2037)
		::nape::geom::GeomPoly x = tmp13;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(2038)
		x->zpp_inner->vertices = MP;
		HX_STACK_LINE(2039)
		bool tmp14 = ret->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(2039)
		if ((tmp14)){
			HX_STACK_LINE(2039)
			::nape::geom::GeomPoly tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2039)
			ret->push(tmp15);
		}
		else{
			HX_STACK_LINE(2039)
			::nape::geom::GeomPoly tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2039)
			ret->unshift(tmp15);
		}
		HX_STACK_LINE(2040)
		{
		}
	}
	HX_STACK_LINE(2049)
	::nape::geom::GeomPolyList tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(2049)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,monotoneDecomposition,return )

::nape::geom::GeomPolyList GeomPoly_obj::convexDecomposition( hx::Null< bool >  __o_delaunay,::nape::geom::GeomPolyList output){
bool delaunay = __o_delaunay.Default(false);
	HX_STACK_FRAME("nape.geom.GeomPoly","convexDecomposition",0x6df2cbe8,"nape.geom.GeomPoly.convexDecomposition","nape/geom/GeomPoly.hx",2075,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(delaunay,"delaunay")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(2076)
		{
			HX_STACK_LINE(2078)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(2078)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2078)
			if ((tmp)){
				HX_STACK_LINE(2078)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(2078)
				tmp1 = false;
			}
			HX_STACK_LINE(2078)
			if ((tmp1)){
				HX_STACK_LINE(2078)
				::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2078)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2078)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(2082)
		bool tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2082)
		{
			HX_STACK_LINE(2083)
			::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2083)
			::zpp_nape::geom::ZPP_GeomVert tmp2 = tmp1->vertices;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2083)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2083)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2083)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2083)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2083)
			if ((tmp5)){
				HX_STACK_LINE(2083)
				::zpp_nape::geom::ZPP_GeomPoly tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2083)
				::zpp_nape::geom::ZPP_GeomPoly tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2083)
				::zpp_nape::geom::ZPP_GeomPoly tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2083)
				::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->next;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2083)
				::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2083)
				::zpp_nape::geom::ZPP_GeomVert tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2083)
				tmp6 = (tmp12 == null());
			}
			else{
				HX_STACK_LINE(2083)
				tmp6 = true;
			}
			HX_STACK_LINE(2083)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2083)
			if ((tmp7)){
				HX_STACK_LINE(2083)
				::zpp_nape::geom::ZPP_GeomPoly tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2083)
				::zpp_nape::geom::ZPP_GeomPoly tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2083)
				::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->prev;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2083)
				::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2083)
				::zpp_nape::geom::ZPP_GeomPoly tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2083)
				::zpp_nape::geom::ZPP_GeomPoly tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2083)
				::zpp_nape::geom::ZPP_GeomVert tmp14 = tmp13->vertices->next;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2083)
				::zpp_nape::geom::ZPP_GeomVert tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2083)
				tmp = (tmp11 == tmp15);
			}
			else{
				HX_STACK_LINE(2083)
				tmp = true;
			}
		}
		HX_STACK_LINE(2082)
		if ((tmp)){
			HX_STACK_LINE(2085)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot decompose a degenerate polygon","\x8d","\x10","\x53","\xf2"));
		}
		HX_STACK_LINE(2088)
		::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2088)
		::zpp_nape::geom::ZPP_GeomVert tmp2 = tmp1->vertices;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2088)
		::zpp_nape::geom::ZPP_PartitionedPoly tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2088)
		{
			HX_STACK_LINE(2088)
			::zpp_nape::geom::ZPP_PartitionedPoly tmp4 = ::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2088)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2088)
			if ((tmp5)){
				HX_STACK_LINE(2088)
				::zpp_nape::geom::ZPP_PartitionedPoly tmp6 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::__new(null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2088)
				::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly = tmp6;
			}
			HX_STACK_LINE(2088)
			tmp3 = ::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly;
		}
		HX_STACK_LINE(2088)
		::zpp_nape::geom::ZPP_PartitionedPoly tmp4 = ::zpp_nape::geom::ZPP_Monotone_obj::decompose(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2088)
		::zpp_nape::geom::ZPP_PartitionedPoly poly = tmp4;		HX_STACK_VAR(poly,"poly");
		HX_STACK_LINE(2089)
		::zpp_nape::util::ZNPList_ZPP_PartitionedPoly tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2089)
		{
			HX_STACK_LINE(2089)
			::zpp_nape::util::ZNPList_ZPP_PartitionedPoly tmp6 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedPPList;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2089)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2089)
			if ((tmp7)){
				HX_STACK_LINE(2089)
				::zpp_nape::util::ZNPList_ZPP_PartitionedPoly tmp8 = ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2089)
				::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedPPList = tmp8;
			}
			HX_STACK_LINE(2089)
			tmp5 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedPPList;
		}
		HX_STACK_LINE(2089)
		::zpp_nape::util::ZNPList_ZPP_PartitionedPoly tmp6 = poly->extract_partitions(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2089)
		::zpp_nape::util::ZNPList_ZPP_PartitionedPoly MPs = tmp6;		HX_STACK_VAR(MPs,"MPs");
		HX_STACK_LINE(2090)
		bool tmp7 = (output == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2090)
		::nape::geom::GeomPolyList tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2090)
		if ((tmp7)){
			HX_STACK_LINE(2090)
			tmp8 = ::nape::geom::GeomPolyList_obj::__new();
		}
		else{
			HX_STACK_LINE(2090)
			tmp8 = output;
		}
		HX_STACK_LINE(2090)
		::nape::geom::GeomPolyList ret = tmp8;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2091)
		while((true)){
			HX_STACK_LINE(2091)
			bool tmp9 = (MPs->head == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2091)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2091)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2091)
			if ((tmp11)){
				HX_STACK_LINE(2091)
				break;
			}
			HX_STACK_LINE(2092)
			::zpp_nape::geom::ZPP_PartitionedPoly tmp12 = MPs->pop_unsafe();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2092)
			::zpp_nape::geom::ZPP_PartitionedPoly MP = tmp12;		HX_STACK_VAR(MP,"MP");
			HX_STACK_LINE(2093)
			::zpp_nape::geom::ZPP_PartitionedPoly tmp13 = MP;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2093)
			::zpp_nape::geom::ZPP_Triangular_obj::triangulate(tmp13);
			HX_STACK_LINE(2094)
			bool tmp14 = delaunay;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2094)
			if ((tmp14)){
				HX_STACK_LINE(2095)
				::zpp_nape::geom::ZPP_PartitionedPoly tmp15 = MP;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2095)
				::zpp_nape::geom::ZPP_Triangular_obj::optimise(tmp15);
			}
			HX_STACK_LINE(2097)
			::zpp_nape::geom::ZPP_PartitionedPoly tmp15 = MP;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2097)
			::zpp_nape::geom::ZPP_Convex_obj::optimise(tmp15);
			HX_STACK_LINE(2098)
			::zpp_nape::util::ZNPList_ZPP_GeomVert tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2098)
			{
				HX_STACK_LINE(2098)
				::zpp_nape::util::ZNPList_ZPP_GeomVert tmp17 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2098)
				bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2098)
				if ((tmp18)){
					HX_STACK_LINE(2098)
					::zpp_nape::util::ZNPList_ZPP_GeomVert tmp19 = ::zpp_nape::util::ZNPList_ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2098)
					::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList = tmp19;
				}
				HX_STACK_LINE(2098)
				tmp16 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList;
			}
			HX_STACK_LINE(2098)
			::zpp_nape::util::ZNPList_ZPP_GeomVert tmp17 = MP->extract(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(2098)
			::zpp_nape::util::ZNPList_ZPP_GeomVert MQs = tmp17;		HX_STACK_VAR(MQs,"MQs");
			HX_STACK_LINE(2099)
			{
				HX_STACK_LINE(2100)
				::zpp_nape::geom::ZPP_PartitionedPoly o = MP;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2110)
				::zpp_nape::geom::ZPP_PartitionedPoly tmp18 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2110)
				o->next = tmp18;
				HX_STACK_LINE(2111)
				::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool = o;
			}
			HX_STACK_LINE(2116)
			while((true)){
				HX_STACK_LINE(2116)
				bool tmp18 = (MQs->head == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2116)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2116)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2116)
				if ((tmp20)){
					HX_STACK_LINE(2116)
					break;
				}
				HX_STACK_LINE(2117)
				::zpp_nape::geom::ZPP_GeomVert tmp21 = MQs->pop_unsafe();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2117)
				::zpp_nape::geom::ZPP_GeomVert MQ = tmp21;		HX_STACK_VAR(MQ,"MQ");
				HX_STACK_LINE(2118)
				::nape::geom::GeomPoly tmp22 = ::nape::geom::GeomPoly_obj::get(null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2118)
				::nape::geom::GeomPoly x = tmp22;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(2119)
				x->zpp_inner->vertices = MQ;
				HX_STACK_LINE(2120)
				bool tmp23 = ret->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(2120)
				if ((tmp23)){
					HX_STACK_LINE(2120)
					::nape::geom::GeomPoly tmp24 = x;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2120)
					ret->push(tmp24);
				}
				else{
					HX_STACK_LINE(2120)
					::nape::geom::GeomPoly tmp24 = x;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2120)
					ret->unshift(tmp24);
				}
				HX_STACK_LINE(2121)
				{
				}
			}
		}
		HX_STACK_LINE(2131)
		::nape::geom::GeomPolyList tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2131)
		return tmp9;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(GeomPoly_obj,convexDecomposition,return )

::nape::geom::GeomPolyList GeomPoly_obj::triangularDecomposition( hx::Null< bool >  __o_delaunay,::nape::geom::GeomPolyList output){
bool delaunay = __o_delaunay.Default(false);
	HX_STACK_FRAME("nape.geom.GeomPoly","triangularDecomposition",0x1e7bbf38,"nape.geom.GeomPoly.triangularDecomposition","nape/geom/GeomPoly.hx",2154,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(delaunay,"delaunay")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(2155)
		{
			HX_STACK_LINE(2157)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(2157)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2157)
			if ((tmp)){
				HX_STACK_LINE(2157)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(2157)
				tmp1 = false;
			}
			HX_STACK_LINE(2157)
			if ((tmp1)){
				HX_STACK_LINE(2157)
				::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2157)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2157)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(2161)
		bool tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2161)
		{
			HX_STACK_LINE(2162)
			::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2162)
			::zpp_nape::geom::ZPP_GeomVert tmp2 = tmp1->vertices;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2162)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2162)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2162)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2162)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2162)
			if ((tmp5)){
				HX_STACK_LINE(2162)
				::zpp_nape::geom::ZPP_GeomPoly tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2162)
				::zpp_nape::geom::ZPP_GeomPoly tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2162)
				::zpp_nape::geom::ZPP_GeomPoly tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2162)
				::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->next;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2162)
				::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2162)
				::zpp_nape::geom::ZPP_GeomVert tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2162)
				tmp6 = (tmp12 == null());
			}
			else{
				HX_STACK_LINE(2162)
				tmp6 = true;
			}
			HX_STACK_LINE(2162)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2162)
			if ((tmp7)){
				HX_STACK_LINE(2162)
				::zpp_nape::geom::ZPP_GeomPoly tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2162)
				::zpp_nape::geom::ZPP_GeomPoly tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2162)
				::zpp_nape::geom::ZPP_GeomVert tmp10 = tmp9->vertices->prev;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2162)
				::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2162)
				::zpp_nape::geom::ZPP_GeomPoly tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2162)
				::zpp_nape::geom::ZPP_GeomPoly tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2162)
				::zpp_nape::geom::ZPP_GeomVert tmp14 = tmp13->vertices->next;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2162)
				::zpp_nape::geom::ZPP_GeomVert tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2162)
				tmp = (tmp11 == tmp15);
			}
			else{
				HX_STACK_LINE(2162)
				tmp = true;
			}
		}
		HX_STACK_LINE(2161)
		if ((tmp)){
			HX_STACK_LINE(2164)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot decompose a degenerate polygon","\x8d","\x10","\x53","\xf2"));
		}
		HX_STACK_LINE(2167)
		::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2167)
		::zpp_nape::geom::ZPP_GeomVert tmp2 = tmp1->vertices;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2167)
		::zpp_nape::geom::ZPP_PartitionedPoly tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2167)
		{
			HX_STACK_LINE(2167)
			::zpp_nape::geom::ZPP_PartitionedPoly tmp4 = ::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2167)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2167)
			if ((tmp5)){
				HX_STACK_LINE(2167)
				::zpp_nape::geom::ZPP_PartitionedPoly tmp6 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::__new(null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2167)
				::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly = tmp6;
			}
			HX_STACK_LINE(2167)
			tmp3 = ::zpp_nape::geom::ZPP_Monotone_obj::sharedPPoly;
		}
		HX_STACK_LINE(2167)
		::zpp_nape::geom::ZPP_PartitionedPoly tmp4 = ::zpp_nape::geom::ZPP_Monotone_obj::decompose(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2167)
		::zpp_nape::geom::ZPP_PartitionedPoly poly = tmp4;		HX_STACK_VAR(poly,"poly");
		HX_STACK_LINE(2168)
		::zpp_nape::util::ZNPList_ZPP_PartitionedPoly tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2168)
		{
			HX_STACK_LINE(2168)
			::zpp_nape::util::ZNPList_ZPP_PartitionedPoly tmp6 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedPPList;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2168)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2168)
			if ((tmp7)){
				HX_STACK_LINE(2168)
				::zpp_nape::util::ZNPList_ZPP_PartitionedPoly tmp8 = ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2168)
				::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedPPList = tmp8;
			}
			HX_STACK_LINE(2168)
			tmp5 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedPPList;
		}
		HX_STACK_LINE(2168)
		::zpp_nape::util::ZNPList_ZPP_PartitionedPoly tmp6 = poly->extract_partitions(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2168)
		::zpp_nape::util::ZNPList_ZPP_PartitionedPoly MPs = tmp6;		HX_STACK_VAR(MPs,"MPs");
		HX_STACK_LINE(2169)
		bool tmp7 = (output == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2169)
		::nape::geom::GeomPolyList tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2169)
		if ((tmp7)){
			HX_STACK_LINE(2169)
			tmp8 = ::nape::geom::GeomPolyList_obj::__new();
		}
		else{
			HX_STACK_LINE(2169)
			tmp8 = output;
		}
		HX_STACK_LINE(2169)
		::nape::geom::GeomPolyList ret = tmp8;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2170)
		while((true)){
			HX_STACK_LINE(2170)
			bool tmp9 = (MPs->head == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2170)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2170)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2170)
			if ((tmp11)){
				HX_STACK_LINE(2170)
				break;
			}
			HX_STACK_LINE(2171)
			::zpp_nape::geom::ZPP_PartitionedPoly tmp12 = MPs->pop_unsafe();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2171)
			::zpp_nape::geom::ZPP_PartitionedPoly MP = tmp12;		HX_STACK_VAR(MP,"MP");
			HX_STACK_LINE(2172)
			::zpp_nape::geom::ZPP_PartitionedPoly tmp13 = MP;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2172)
			::zpp_nape::geom::ZPP_Triangular_obj::triangulate(tmp13);
			HX_STACK_LINE(2173)
			bool tmp14 = delaunay;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2173)
			if ((tmp14)){
				HX_STACK_LINE(2174)
				::zpp_nape::geom::ZPP_PartitionedPoly tmp15 = MP;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2174)
				::zpp_nape::geom::ZPP_Triangular_obj::optimise(tmp15);
			}
			HX_STACK_LINE(2176)
			::zpp_nape::util::ZNPList_ZPP_GeomVert tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2176)
			{
				HX_STACK_LINE(2176)
				::zpp_nape::util::ZNPList_ZPP_GeomVert tmp16 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2176)
				bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2176)
				if ((tmp17)){
					HX_STACK_LINE(2176)
					::zpp_nape::util::ZNPList_ZPP_GeomVert tmp18 = ::zpp_nape::util::ZNPList_ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2176)
					::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList = tmp18;
				}
				HX_STACK_LINE(2176)
				tmp15 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::sharedGVList;
			}
			HX_STACK_LINE(2176)
			::zpp_nape::util::ZNPList_ZPP_GeomVert tmp16 = MP->extract(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2176)
			::zpp_nape::util::ZNPList_ZPP_GeomVert MQs = tmp16;		HX_STACK_VAR(MQs,"MQs");
			HX_STACK_LINE(2177)
			{
				HX_STACK_LINE(2178)
				::zpp_nape::geom::ZPP_PartitionedPoly o = MP;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2188)
				::zpp_nape::geom::ZPP_PartitionedPoly tmp17 = ::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2188)
				o->next = tmp17;
				HX_STACK_LINE(2189)
				::zpp_nape::geom::ZPP_PartitionedPoly_obj::zpp_pool = o;
			}
			HX_STACK_LINE(2194)
			while((true)){
				HX_STACK_LINE(2194)
				bool tmp17 = (MQs->head == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2194)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2194)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2194)
				if ((tmp19)){
					HX_STACK_LINE(2194)
					break;
				}
				HX_STACK_LINE(2195)
				::zpp_nape::geom::ZPP_GeomVert tmp20 = MQs->pop_unsafe();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2195)
				::zpp_nape::geom::ZPP_GeomVert MQ = tmp20;		HX_STACK_VAR(MQ,"MQ");
				HX_STACK_LINE(2196)
				::nape::geom::GeomPoly tmp21 = ::nape::geom::GeomPoly_obj::get(null());		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2196)
				::nape::geom::GeomPoly x = tmp21;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(2197)
				x->zpp_inner->vertices = MQ;
				HX_STACK_LINE(2198)
				bool tmp22 = ret->zpp_inner->reverse_flag;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2198)
				if ((tmp22)){
					HX_STACK_LINE(2198)
					::nape::geom::GeomPoly tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2198)
					ret->push(tmp23);
				}
				else{
					HX_STACK_LINE(2198)
					::nape::geom::GeomPoly tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2198)
					ret->unshift(tmp23);
				}
				HX_STACK_LINE(2199)
				{
				}
			}
		}
		HX_STACK_LINE(2209)
		::nape::geom::GeomPolyList tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2209)
		return tmp9;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(GeomPoly_obj,triangularDecomposition,return )

::nape::geom::GeomPoly GeomPoly_obj::inflate( Float inflation){
	HX_STACK_FRAME("nape.geom.GeomPoly","inflate",0x5ab3434d,"nape.geom.GeomPoly.inflate","nape/geom/GeomPoly.hx",2227,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inflation,"inflation")
	HX_STACK_LINE(2228)
	{
		HX_STACK_LINE(2230)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2230)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2230)
		if ((tmp)){
			HX_STACK_LINE(2230)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(2230)
			tmp1 = false;
		}
		HX_STACK_LINE(2230)
		if ((tmp1)){
			HX_STACK_LINE(2230)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2230)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2230)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(2233)
	::nape::geom::GeomPoly tmp = ::nape::geom::GeomPoly_obj::get(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2233)
	::nape::geom::GeomPoly ret = tmp;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2234)
	::nape::geom::Winding tmp1 = this->winding();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2234)
	::nape::geom::Winding tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2234)
	{
		HX_STACK_LINE(2234)
		::nape::geom::Winding tmp3 = ::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2234)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2234)
		if ((tmp4)){
			HX_STACK_LINE(2234)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(2234)
			::nape::geom::Winding tmp5 = ::nape::geom::Winding_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2234)
			::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE = tmp5;
			HX_STACK_LINE(2234)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(2234)
		tmp2 = ::zpp_nape::util::ZPP_Flags_obj::Winding_CLOCKWISE;
	}
	HX_STACK_LINE(2234)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2234)
	if ((tmp3)){
		HX_STACK_LINE(2234)
		Float tmp4 = inflation;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2234)
		Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2234)
		inflation = tmp5;
	}
	HX_STACK_LINE(2235)
	{
		HX_STACK_LINE(2236)
		::zpp_nape::geom::ZPP_GeomPoly tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2236)
		::zpp_nape::geom::ZPP_GeomVert F = tmp4->vertices;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(2237)
		::zpp_nape::geom::ZPP_GeomPoly tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2237)
		::zpp_nape::geom::ZPP_GeomVert L = tmp5->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(2238)
		bool tmp6 = (F != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2238)
		if ((tmp6)){
			HX_STACK_LINE(2239)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(2240)
			while((true)){
				HX_STACK_LINE(2241)
				::zpp_nape::geom::ZPP_GeomVert p = nite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(2243)
				{
					HX_STACK_LINE(2244)
					::zpp_nape::geom::ZPP_GeomVert prev = p->prev;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(2245)
					::zpp_nape::geom::ZPP_GeomVert next = p->next;		HX_STACK_VAR(next,"next");
					HX_STACK_LINE(2246)
					Float ax = ((Float)0.0);		HX_STACK_VAR(ax,"ax");
					HX_STACK_LINE(2247)
					Float ay = ((Float)0.0);		HX_STACK_VAR(ay,"ay");
					HX_STACK_LINE(2248)
					Float bx = ((Float)0.0);		HX_STACK_VAR(bx,"bx");
					HX_STACK_LINE(2249)
					Float by = ((Float)0.0);		HX_STACK_VAR(by,"by");
					HX_STACK_LINE(2250)
					{
						HX_STACK_LINE(2251)
						Float tmp7 = (p->x - prev->x);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2251)
						ax = tmp7;
						HX_STACK_LINE(2252)
						Float tmp8 = (p->y - prev->y);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(2252)
						ay = tmp8;
					}
					HX_STACK_LINE(2254)
					{
						HX_STACK_LINE(2255)
						Float tmp7 = (next->x - p->x);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2255)
						bx = tmp7;
						HX_STACK_LINE(2256)
						Float tmp8 = (next->y - p->y);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(2256)
						by = tmp8;
					}
					HX_STACK_LINE(2258)
					Float apx = ((Float)0.0);		HX_STACK_VAR(apx,"apx");
					HX_STACK_LINE(2259)
					Float apy = ((Float)0.0);		HX_STACK_VAR(apy,"apy");
					HX_STACK_LINE(2260)
					Float bpx = ((Float)0.0);		HX_STACK_VAR(bpx,"bpx");
					HX_STACK_LINE(2261)
					Float bpy = ((Float)0.0);		HX_STACK_VAR(bpy,"bpy");
					HX_STACK_LINE(2262)
					{
						HX_STACK_LINE(2263)
						apx = ax;
						HX_STACK_LINE(2264)
						apy = ay;
						HX_STACK_LINE(2273)
						{
						}
					}
					HX_STACK_LINE(2282)
					{
						HX_STACK_LINE(2283)
						{
							HX_STACK_LINE(2284)
							Float tmp7 = (apx * apx);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(2284)
							Float tmp8 = (apy * apy);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(2284)
							Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(2284)
							Float d = tmp9;		HX_STACK_VAR(d,"d");
							HX_STACK_LINE(2293)
							Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(2293)
							{
								HX_STACK_LINE(2293)
								Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(2293)
								{
									HX_STACK_LINE(2293)
									Float tmp12 = d;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(2293)
									tmp11 = ::Math_obj::sqrt(tmp12);
								}
								HX_STACK_LINE(2293)
								tmp10 = (Float(((Float)1.0)) / Float(tmp11));
							}
							HX_STACK_LINE(2293)
							Float imag = tmp10;		HX_STACK_VAR(imag,"imag");
							HX_STACK_LINE(2294)
							{
								HX_STACK_LINE(2295)
								Float t = imag;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2304)
								hx::MultEq(apx,t);
								HX_STACK_LINE(2305)
								hx::MultEq(apy,t);
							}
						}
						HX_STACK_LINE(2308)
						{
							HX_STACK_LINE(2309)
							Float t = apx;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2310)
							Float tmp7 = apy;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(2310)
							Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(2310)
							apx = tmp8;
							HX_STACK_LINE(2311)
							apy = t;
						}
					}
					HX_STACK_LINE(2314)
					{
						HX_STACK_LINE(2315)
						Float t = inflation;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2324)
						hx::MultEq(apx,t);
						HX_STACK_LINE(2325)
						hx::MultEq(apy,t);
					}
					HX_STACK_LINE(2327)
					{
						HX_STACK_LINE(2328)
						bpx = bx;
						HX_STACK_LINE(2329)
						bpy = by;
						HX_STACK_LINE(2338)
						{
						}
					}
					HX_STACK_LINE(2347)
					{
						HX_STACK_LINE(2348)
						{
							HX_STACK_LINE(2349)
							Float tmp7 = (bpx * bpx);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(2349)
							Float tmp8 = (bpy * bpy);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(2349)
							Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(2349)
							Float d = tmp9;		HX_STACK_VAR(d,"d");
							HX_STACK_LINE(2358)
							Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(2358)
							{
								HX_STACK_LINE(2358)
								Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(2358)
								{
									HX_STACK_LINE(2358)
									Float tmp12 = d;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(2358)
									tmp11 = ::Math_obj::sqrt(tmp12);
								}
								HX_STACK_LINE(2358)
								tmp10 = (Float(((Float)1.0)) / Float(tmp11));
							}
							HX_STACK_LINE(2358)
							Float imag = tmp10;		HX_STACK_VAR(imag,"imag");
							HX_STACK_LINE(2359)
							{
								HX_STACK_LINE(2360)
								Float t = imag;		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2369)
								hx::MultEq(bpx,t);
								HX_STACK_LINE(2370)
								hx::MultEq(bpy,t);
							}
						}
						HX_STACK_LINE(2373)
						{
							HX_STACK_LINE(2374)
							Float t = bpx;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2375)
							Float tmp7 = bpy;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(2375)
							Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(2375)
							bpx = tmp8;
							HX_STACK_LINE(2376)
							bpy = t;
						}
					}
					HX_STACK_LINE(2379)
					{
						HX_STACK_LINE(2380)
						Float t = inflation;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2389)
						hx::MultEq(bpx,t);
						HX_STACK_LINE(2390)
						hx::MultEq(bpy,t);
					}
					HX_STACK_LINE(2392)
					Float bapx = ((Float)0.0);		HX_STACK_VAR(bapx,"bapx");
					HX_STACK_LINE(2393)
					Float bapy = ((Float)0.0);		HX_STACK_VAR(bapy,"bapy");
					HX_STACK_LINE(2394)
					{
						HX_STACK_LINE(2395)
						Float tmp7 = (bpx - apx);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2395)
						bapx = tmp7;
						HX_STACK_LINE(2396)
						Float tmp8 = (bpy - apy);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(2396)
						bapy = tmp8;
					}
					HX_STACK_LINE(2398)
					Float tmp7 = (by * bapx);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2398)
					Float tmp8 = (bx * bapy);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2398)
					Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2398)
					Float num = tmp9;		HX_STACK_VAR(num,"num");
					HX_STACK_LINE(2399)
					bool tmp10 = (num == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2399)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2399)
					if ((tmp10)){
						HX_STACK_LINE(2399)
						tmp11 = (int)0;
					}
					else{
						HX_STACK_LINE(2399)
						Float tmp12 = num;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(2399)
						Float tmp13 = (by * ax);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(2399)
						Float tmp14 = (bx * ay);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(2399)
						Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2399)
						tmp11 = (Float(tmp12) / Float(tmp15));
					}
					HX_STACK_LINE(2399)
					Float t = tmp11;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2400)
					Float px = ((Float)0.0);		HX_STACK_VAR(px,"px");
					HX_STACK_LINE(2401)
					Float py = ((Float)0.0);		HX_STACK_VAR(py,"py");
					HX_STACK_LINE(2402)
					{
						HX_STACK_LINE(2403)
						Float tmp12 = (p->x + apx);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(2403)
						px = tmp12;
						HX_STACK_LINE(2404)
						Float tmp13 = (p->y + apy);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(2404)
						py = tmp13;
					}
					HX_STACK_LINE(2406)
					{
						HX_STACK_LINE(2407)
						Float t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(2416)
						Float tmp12 = (ax * t1);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(2416)
						hx::AddEq(px,tmp12);
						HX_STACK_LINE(2417)
						Float tmp13 = (ay * t1);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(2417)
						hx::AddEq(py,tmp13);
					}
					HX_STACK_LINE(2419)
					::nape::geom::Vec2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2419)
					{
						HX_STACK_LINE(2419)
						bool weak = false;		HX_STACK_VAR(weak,"weak");
						HX_STACK_LINE(2419)
						bool tmp13 = (px != px);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(2419)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(2419)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2419)
						if ((tmp14)){
							HX_STACK_LINE(2419)
							tmp15 = (py != py);
						}
						else{
							HX_STACK_LINE(2419)
							tmp15 = true;
						}
						HX_STACK_LINE(2419)
						if ((tmp15)){
							HX_STACK_LINE(2419)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
						}
						HX_STACK_LINE(2419)
						::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(2419)
						{
							HX_STACK_LINE(2419)
							::nape::geom::Vec2 tmp16 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(2419)
							bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2419)
							if ((tmp17)){
								HX_STACK_LINE(2419)
								::nape::geom::Vec2 tmp18 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2419)
								ret1 = tmp18;
							}
							else{
								HX_STACK_LINE(2419)
								::nape::geom::Vec2 tmp18 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2419)
								ret1 = tmp18;
								HX_STACK_LINE(2419)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret1->zpp_pool;
								HX_STACK_LINE(2419)
								ret1->zpp_pool = null();
								HX_STACK_LINE(2419)
								ret1->zpp_disp = false;
								HX_STACK_LINE(2419)
								::nape::geom::Vec2 tmp19 = ret1;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(2419)
								::nape::geom::Vec2 tmp20 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(2419)
								bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(2419)
								if ((tmp21)){
									HX_STACK_LINE(2419)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
								}
							}
						}
						HX_STACK_LINE(2419)
						bool tmp16 = (ret1->zpp_inner == null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2419)
						if ((tmp16)){
							HX_STACK_LINE(2419)
							::zpp_nape::geom::ZPP_Vec2 tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2419)
							{
								HX_STACK_LINE(2419)
								bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
								HX_STACK_LINE(2419)
								::zpp_nape::geom::ZPP_Vec2 ret2;		HX_STACK_VAR(ret2,"ret2");
								HX_STACK_LINE(2419)
								{
									HX_STACK_LINE(2419)
									::zpp_nape::geom::ZPP_Vec2 tmp18 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(2419)
									bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(2419)
									if ((tmp19)){
										HX_STACK_LINE(2419)
										::zpp_nape::geom::ZPP_Vec2 tmp20 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(2419)
										ret2 = tmp20;
									}
									else{
										HX_STACK_LINE(2419)
										::zpp_nape::geom::ZPP_Vec2 tmp20 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(2419)
										ret2 = tmp20;
										HX_STACK_LINE(2419)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret2->next;
										HX_STACK_LINE(2419)
										ret2->next = null();
									}
									HX_STACK_LINE(2419)
									ret2->weak = false;
								}
								HX_STACK_LINE(2419)
								ret2->_immutable = immutable;
								HX_STACK_LINE(2419)
								{
									HX_STACK_LINE(2419)
									ret2->x = px;
									HX_STACK_LINE(2419)
									ret2->y = py;
									HX_STACK_LINE(2419)
									{
									}
								}
								HX_STACK_LINE(2419)
								tmp17 = ret2;
							}
							HX_STACK_LINE(2419)
							ret1->zpp_inner = tmp17;
							HX_STACK_LINE(2419)
							ret1->zpp_inner->outer = ret1;
						}
						else{
							HX_STACK_LINE(2419)
							{
								HX_STACK_LINE(2419)
								bool tmp17 = (ret1 != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(2419)
								bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2419)
								if ((tmp17)){
									HX_STACK_LINE(2419)
									tmp18 = ret1->zpp_disp;
								}
								else{
									HX_STACK_LINE(2419)
									tmp18 = false;
								}
								HX_STACK_LINE(2419)
								if ((tmp18)){
									HX_STACK_LINE(2419)
									::String tmp19 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(2419)
									::String tmp20 = (tmp19 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(2419)
									HX_STACK_DO_THROW(tmp20);
								}
							}
							HX_STACK_LINE(2419)
							{
								HX_STACK_LINE(2419)
								::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2419)
								bool tmp17 = _this->_immutable;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(2419)
								if ((tmp17)){
									HX_STACK_LINE(2419)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
								}
								HX_STACK_LINE(2419)
								bool tmp18 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2419)
								if ((tmp18)){
									HX_STACK_LINE(2419)
									_this->_isimmutable();
								}
							}
							HX_STACK_LINE(2419)
							bool tmp17 = (px != px);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2419)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(2419)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(2419)
							if ((tmp18)){
								HX_STACK_LINE(2419)
								tmp19 = (py != py);
							}
							else{
								HX_STACK_LINE(2419)
								tmp19 = true;
							}
							HX_STACK_LINE(2419)
							if ((tmp19)){
								HX_STACK_LINE(2419)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
							}
							HX_STACK_LINE(2419)
							Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(2419)
							{
								HX_STACK_LINE(2419)
								{
									HX_STACK_LINE(2419)
									bool tmp21 = (ret1 != null());		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(2419)
									bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(2419)
									if ((tmp21)){
										HX_STACK_LINE(2419)
										tmp22 = ret1->zpp_disp;
									}
									else{
										HX_STACK_LINE(2419)
										tmp22 = false;
									}
									HX_STACK_LINE(2419)
									if ((tmp22)){
										HX_STACK_LINE(2419)
										::String tmp23 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(2419)
										::String tmp24 = (tmp23 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(2419)
										HX_STACK_DO_THROW(tmp24);
									}
								}
								HX_STACK_LINE(2419)
								{
									HX_STACK_LINE(2419)
									::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2419)
									bool tmp21 = (_this->_validate != null());		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(2419)
									if ((tmp21)){
										HX_STACK_LINE(2419)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2419)
								tmp20 = ret1->zpp_inner->x;
							}
							HX_STACK_LINE(2419)
							Float tmp21 = px;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(2419)
							bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(2419)
							bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(2419)
							if ((tmp22)){
								HX_STACK_LINE(2419)
								Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(2419)
								{
									HX_STACK_LINE(2419)
									{
										HX_STACK_LINE(2419)
										bool tmp25 = (ret1 != null());		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(2419)
										bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(2419)
										bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(2419)
										bool tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(2419)
										if ((tmp28)){
											HX_STACK_LINE(2419)
											tmp27 = ret1->zpp_disp;
										}
										else{
											HX_STACK_LINE(2419)
											tmp27 = false;
										}
										HX_STACK_LINE(2419)
										bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(2419)
										if ((tmp29)){
											HX_STACK_LINE(2419)
											::String tmp30 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(2419)
											::String tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(2419)
											::String tmp32 = (tmp31 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(2419)
											::String tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(2419)
											::String tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(2419)
											HX_STACK_DO_THROW(tmp34);
										}
									}
									HX_STACK_LINE(2419)
									{
										HX_STACK_LINE(2419)
										::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2419)
										bool tmp25 = (_this->_validate != null());		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(2419)
										bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(2419)
										bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(2419)
										if ((tmp27)){
											HX_STACK_LINE(2419)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2419)
									Float tmp25 = ret1->zpp_inner->y;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(2419)
									tmp24 = tmp25;
								}
								HX_STACK_LINE(2419)
								Float tmp25 = py;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(2419)
								tmp23 = (tmp24 == tmp25);
							}
							else{
								HX_STACK_LINE(2419)
								tmp23 = false;
							}
							HX_STACK_LINE(2419)
							bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(2419)
							if ((tmp24)){
								HX_STACK_LINE(2419)
								{
									HX_STACK_LINE(2419)
									ret1->zpp_inner->x = px;
									HX_STACK_LINE(2419)
									ret1->zpp_inner->y = py;
									HX_STACK_LINE(2419)
									{
									}
								}
								HX_STACK_LINE(2419)
								{
									HX_STACK_LINE(2419)
									::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2419)
									bool tmp25 = (_this->_invalidate != null());		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(2419)
									if ((tmp25)){
										HX_STACK_LINE(2419)
										::zpp_nape::geom::ZPP_Vec2 tmp26 = _this;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(2419)
										_this->_invalidate(tmp26);
									}
								}
							}
							HX_STACK_LINE(2419)
							ret1;
						}
						HX_STACK_LINE(2419)
						ret1->zpp_inner->weak = weak;
						HX_STACK_LINE(2419)
						tmp12 = ret1;
					}
					HX_STACK_LINE(2419)
					ret->push(tmp12);
				}
				HX_STACK_LINE(2422)
				nite = nite->next;
				HX_STACK_LINE(2424)
				bool tmp7 = (nite != L);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2424)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2240)
				if ((tmp8)){
					HX_STACK_LINE(2240)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(2427)
	::nape::geom::GeomPoly tmp4 = ret->skipForward((int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2427)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,inflate,return )

::nape::geom::GeomPolyList GeomPoly_obj::cut( ::nape::geom::Vec2 start,::nape::geom::Vec2 end,hx::Null< bool >  __o_boundedStart,hx::Null< bool >  __o_boundedEnd,::nape::geom::GeomPolyList output){
bool boundedStart = __o_boundedStart.Default(false);
bool boundedEnd = __o_boundedEnd.Default(false);
	HX_STACK_FRAME("nape.geom.GeomPoly","cut",0xb48ad148,"nape.geom.GeomPoly.cut","nape/geom/GeomPoly.hx",2460,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_ARG(boundedStart,"boundedStart")
	HX_STACK_ARG(boundedEnd,"boundedEnd")
	HX_STACK_ARG(output,"output")
{
		HX_STACK_LINE(2461)
		{
			HX_STACK_LINE(2463)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(2463)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2463)
			if ((tmp)){
				HX_STACK_LINE(2463)
				tmp1 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(2463)
				tmp1 = false;
			}
			HX_STACK_LINE(2463)
			if ((tmp1)){
				HX_STACK_LINE(2463)
				::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2463)
				::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2463)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		HX_STACK_LINE(2467)
		bool tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2467)
		{
			HX_STACK_LINE(2467)
			{
				HX_STACK_LINE(2467)
				bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(2467)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2467)
				if ((tmp1)){
					HX_STACK_LINE(2467)
					tmp2 = this->zpp_disp;
				}
				else{
					HX_STACK_LINE(2467)
					tmp2 = false;
				}
				HX_STACK_LINE(2467)
				if ((tmp2)){
					HX_STACK_LINE(2467)
					::String tmp3 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2467)
					::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2467)
					HX_STACK_DO_THROW(tmp4);
				}
			}
			HX_STACK_LINE(2467)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2467)
			{
				HX_STACK_LINE(2467)
				::zpp_nape::geom::ZPP_GeomPoly tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2467)
				::zpp_nape::geom::ZPP_GeomVert tmp3 = tmp2->vertices;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2467)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2467)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2467)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2467)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2467)
				if ((tmp6)){
					HX_STACK_LINE(2467)
					::zpp_nape::geom::ZPP_GeomPoly tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2467)
					::zpp_nape::geom::ZPP_GeomPoly tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2467)
					::zpp_nape::geom::ZPP_GeomPoly tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2467)
					::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10->vertices->next;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2467)
					::zpp_nape::geom::ZPP_GeomVert tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2467)
					::zpp_nape::geom::ZPP_GeomVert tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2467)
					tmp7 = (tmp13 == null());
				}
				else{
					HX_STACK_LINE(2467)
					tmp7 = true;
				}
				HX_STACK_LINE(2467)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2467)
				if ((tmp8)){
					HX_STACK_LINE(2467)
					::zpp_nape::geom::ZPP_GeomPoly tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2467)
					::zpp_nape::geom::ZPP_GeomPoly tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2467)
					::zpp_nape::geom::ZPP_GeomVert tmp11 = tmp10->vertices->prev;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2467)
					::zpp_nape::geom::ZPP_GeomVert tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2467)
					::zpp_nape::geom::ZPP_GeomPoly tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2467)
					::zpp_nape::geom::ZPP_GeomPoly tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2467)
					::zpp_nape::geom::ZPP_GeomVert tmp15 = tmp14->vertices->next;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2467)
					::zpp_nape::geom::ZPP_GeomVert tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2467)
					tmp1 = (tmp12 == tmp16);
				}
				else{
					HX_STACK_LINE(2467)
					tmp1 = true;
				}
			}
			HX_STACK_LINE(2467)
			if ((tmp1)){
				HX_STACK_LINE(2467)
				tmp = true;
			}
			else{
				HX_STACK_LINE(2467)
				::zpp_nape::geom::ZPP_GeomPoly tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2467)
				::zpp_nape::geom::ZPP_GeomVert tmp3 = tmp2->vertices;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2467)
				tmp = ::zpp_nape::geom::ZPP_Simple_obj::isSimple(tmp3);
			}
		}
		HX_STACK_LINE(2467)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2467)
		if ((tmp1)){
			HX_STACK_LINE(2468)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cut requires a truly simple polygon","\xed","\x75","\x98","\xd4"));
		}
		HX_STACK_LINE(2470)
		bool tmp2 = (start == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2470)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2470)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2470)
		if ((tmp3)){
			HX_STACK_LINE(2470)
			tmp4 = (end == null());
		}
		else{
			HX_STACK_LINE(2470)
			tmp4 = true;
		}
		HX_STACK_LINE(2470)
		if ((tmp4)){
			HX_STACK_LINE(2471)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot cut with null start/end's","\x8e","\x58","\xef","\xe8"));
		}
		HX_STACK_LINE(2474)
		{
			HX_STACK_LINE(2476)
			bool tmp5 = (start != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2476)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2476)
			if ((tmp5)){
				HX_STACK_LINE(2476)
				tmp6 = start->zpp_disp;
			}
			else{
				HX_STACK_LINE(2476)
				tmp6 = false;
			}
			HX_STACK_LINE(2476)
			if ((tmp6)){
				HX_STACK_LINE(2476)
				::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2476)
				::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2476)
				HX_STACK_DO_THROW(tmp8);
			}
		}
		HX_STACK_LINE(2479)
		{
			HX_STACK_LINE(2481)
			bool tmp5 = (end != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2481)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2481)
			if ((tmp5)){
				HX_STACK_LINE(2481)
				tmp6 = end->zpp_disp;
			}
			else{
				HX_STACK_LINE(2481)
				tmp6 = false;
			}
			HX_STACK_LINE(2481)
			if ((tmp6)){
				HX_STACK_LINE(2481)
				::String tmp7 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2481)
				::String tmp8 = (tmp7 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2481)
				HX_STACK_DO_THROW(tmp8);
			}
		}
		HX_STACK_LINE(2484)
		::zpp_nape::geom::ZPP_GeomPoly tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2484)
		::zpp_nape::geom::ZPP_GeomVert tmp6 = tmp5->vertices;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2484)
		::nape::geom::Vec2 tmp7 = start;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2484)
		::nape::geom::Vec2 tmp8 = end;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2484)
		bool tmp9 = boundedStart;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2484)
		bool tmp10 = boundedEnd;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2484)
		::nape::geom::GeomPolyList tmp11 = output;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(2484)
		::nape::geom::GeomPolyList tmp12 = ::zpp_nape::geom::ZPP_Cutter_obj::run(tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(2484)
		::nape::geom::GeomPolyList ret = tmp12;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2485)
		{
			HX_STACK_LINE(2486)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2487)
			tmp13 = start->zpp_inner->weak;
			HX_STACK_LINE(2486)
			if ((tmp13)){
				HX_STACK_LINE(2489)
				{
					HX_STACK_LINE(2489)
					{
						HX_STACK_LINE(2489)
						bool tmp14 = (start != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(2489)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2489)
						if ((tmp14)){
							HX_STACK_LINE(2489)
							tmp15 = start->zpp_disp;
						}
						else{
							HX_STACK_LINE(2489)
							tmp15 = false;
						}
						HX_STACK_LINE(2489)
						if ((tmp15)){
							HX_STACK_LINE(2489)
							::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(2489)
							::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2489)
							HX_STACK_DO_THROW(tmp17);
						}
					}
					HX_STACK_LINE(2489)
					{
						HX_STACK_LINE(2489)
						::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2489)
						bool tmp14 = _this->_immutable;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(2489)
						if ((tmp14)){
							HX_STACK_LINE(2489)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(2489)
						bool tmp15 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2489)
						if ((tmp15)){
							HX_STACK_LINE(2489)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(2489)
					bool tmp14 = start->zpp_inner->_inuse;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2489)
					if ((tmp14)){
						HX_STACK_LINE(2489)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
					}
					HX_STACK_LINE(2489)
					::zpp_nape::geom::ZPP_Vec2 inner = start->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(2489)
					start->zpp_inner->outer = null();
					HX_STACK_LINE(2489)
					start->zpp_inner = null();
					HX_STACK_LINE(2489)
					{
						HX_STACK_LINE(2489)
						::nape::geom::Vec2 o = start;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(2489)
						o->zpp_pool = null();
						HX_STACK_LINE(2489)
						::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2489)
						bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2489)
						if ((tmp16)){
							HX_STACK_LINE(2489)
							::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2489)
							tmp17->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(2489)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(2489)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(2489)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(2489)
					{
						HX_STACK_LINE(2489)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(2489)
						{
							HX_STACK_LINE(2489)
							bool tmp15 = (o->outer != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(2489)
							if ((tmp15)){
								HX_STACK_LINE(2489)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(2489)
								o->outer = null();
							}
							HX_STACK_LINE(2489)
							o->_isimmutable = null();
							HX_STACK_LINE(2489)
							o->_validate = null();
							HX_STACK_LINE(2489)
							o->_invalidate = null();
						}
						HX_STACK_LINE(2489)
						::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2489)
						o->next = tmp15;
						HX_STACK_LINE(2489)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(2490)
				true;
			}
			else{
				HX_STACK_LINE(2493)
				false;
			}
		}
		HX_STACK_LINE(2496)
		{
			HX_STACK_LINE(2497)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2498)
			tmp13 = end->zpp_inner->weak;
			HX_STACK_LINE(2497)
			if ((tmp13)){
				HX_STACK_LINE(2500)
				{
					HX_STACK_LINE(2500)
					{
						HX_STACK_LINE(2500)
						bool tmp14 = (end != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(2500)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2500)
						if ((tmp14)){
							HX_STACK_LINE(2500)
							tmp15 = end->zpp_disp;
						}
						else{
							HX_STACK_LINE(2500)
							tmp15 = false;
						}
						HX_STACK_LINE(2500)
						if ((tmp15)){
							HX_STACK_LINE(2500)
							::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(2500)
							::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2500)
							HX_STACK_DO_THROW(tmp17);
						}
					}
					HX_STACK_LINE(2500)
					{
						HX_STACK_LINE(2500)
						::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2500)
						bool tmp14 = _this->_immutable;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(2500)
						if ((tmp14)){
							HX_STACK_LINE(2500)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(2500)
						bool tmp15 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2500)
						if ((tmp15)){
							HX_STACK_LINE(2500)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(2500)
					bool tmp14 = end->zpp_inner->_inuse;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2500)
					if ((tmp14)){
						HX_STACK_LINE(2500)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
					}
					HX_STACK_LINE(2500)
					::zpp_nape::geom::ZPP_Vec2 inner = end->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(2500)
					end->zpp_inner->outer = null();
					HX_STACK_LINE(2500)
					end->zpp_inner = null();
					HX_STACK_LINE(2500)
					{
						HX_STACK_LINE(2500)
						::nape::geom::Vec2 o = end;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(2500)
						o->zpp_pool = null();
						HX_STACK_LINE(2500)
						::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2500)
						bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2500)
						if ((tmp16)){
							HX_STACK_LINE(2500)
							::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2500)
							tmp17->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(2500)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(2500)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(2500)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(2500)
					{
						HX_STACK_LINE(2500)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(2500)
						{
							HX_STACK_LINE(2500)
							bool tmp15 = (o->outer != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(2500)
							if ((tmp15)){
								HX_STACK_LINE(2500)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(2500)
								o->outer = null();
							}
							HX_STACK_LINE(2500)
							o->_isimmutable = null();
							HX_STACK_LINE(2500)
							o->_validate = null();
							HX_STACK_LINE(2500)
							o->_invalidate = null();
						}
						HX_STACK_LINE(2500)
						::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2500)
						o->next = tmp15;
						HX_STACK_LINE(2500)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(2501)
				true;
			}
			else{
				HX_STACK_LINE(2504)
				false;
			}
		}
		HX_STACK_LINE(2507)
		::nape::geom::GeomPolyList tmp13 = ret;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(2507)
		return tmp13;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(GeomPoly_obj,cut,return )

::nape::geom::GeomPoly GeomPoly_obj::transform( ::nape::geom::Mat23 matrix){
	HX_STACK_FRAME("nape.geom.GeomPoly","transform",0x267691b2,"nape.geom.GeomPoly.transform","nape/geom/GeomPoly.hx",2521,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(2522)
	{
		HX_STACK_LINE(2524)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2524)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2524)
		if ((tmp)){
			HX_STACK_LINE(2524)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(2524)
			tmp1 = false;
		}
		HX_STACK_LINE(2524)
		if ((tmp1)){
			HX_STACK_LINE(2524)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2524)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2524)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(2528)
	bool tmp = (matrix == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2528)
	if ((tmp)){
		HX_STACK_LINE(2529)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot transform by null matrix","\x34","\xa1","\x93","\xba"));
	}
	HX_STACK_LINE(2532)
	{
		HX_STACK_LINE(2533)
		::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2533)
		::zpp_nape::geom::ZPP_GeomVert F = tmp1->vertices;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(2534)
		::zpp_nape::geom::ZPP_GeomPoly tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2534)
		::zpp_nape::geom::ZPP_GeomVert L = tmp2->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(2535)
		bool tmp3 = (F != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2535)
		if ((tmp3)){
			HX_STACK_LINE(2536)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(2537)
			while((true)){
				HX_STACK_LINE(2538)
				::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(2541)
				{
					HX_STACK_LINE(2542)
					Float tmp4 = matrix->zpp_inner->a;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2542)
					Float tmp5 = v->x;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2542)
					Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2542)
					Float tmp7 = matrix->zpp_inner->b;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2542)
					Float tmp8 = v->y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2542)
					Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2542)
					Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2542)
					Float tmp11 = matrix->zpp_inner->tx;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2542)
					Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2542)
					Float t = tmp12;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2543)
					Float tmp13 = matrix->zpp_inner->c;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2543)
					Float tmp14 = v->x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2543)
					Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2543)
					Float tmp16 = matrix->zpp_inner->d;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2543)
					Float tmp17 = v->y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2543)
					Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2543)
					Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2543)
					Float tmp20 = matrix->zpp_inner->ty;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2543)
					Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2543)
					v->y = tmp21;
					HX_STACK_LINE(2544)
					v->x = t;
				}
				HX_STACK_LINE(2548)
				nite = nite->next;
				HX_STACK_LINE(2550)
				bool tmp4 = (nite != L);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2550)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2537)
				if ((tmp5)){
					HX_STACK_LINE(2537)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(2553)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,transform,return )

::nape::geom::AABB GeomPoly_obj::bounds( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","bounds",0xb91f5a6f,"nape.geom.GeomPoly.bounds","nape/geom/GeomPoly.hx",2562,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2563)
	{
		HX_STACK_LINE(2565)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2565)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2565)
		if ((tmp)){
			HX_STACK_LINE(2565)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(2565)
			tmp1 = false;
		}
		HX_STACK_LINE(2565)
		if ((tmp1)){
			HX_STACK_LINE(2565)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2565)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2565)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(2569)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2569)
	{
		HX_STACK_LINE(2569)
		{
			HX_STACK_LINE(2569)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2569)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2569)
			if ((tmp1)){
				HX_STACK_LINE(2569)
				tmp2 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(2569)
				tmp2 = false;
			}
			HX_STACK_LINE(2569)
			if ((tmp2)){
				HX_STACK_LINE(2569)
				::String tmp3 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2569)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2569)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(2569)
		::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2569)
		::zpp_nape::geom::ZPP_GeomVert tmp2 = tmp1->vertices;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2569)
		tmp = (tmp2 == null());
	}
	HX_STACK_LINE(2569)
	if ((tmp)){
		HX_STACK_LINE(2570)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: empty GeomPoly has no defineable bounds","\xbe","\x37","\xf0","\x63"));
	}
	HX_STACK_LINE(2573)
	Float minx = ((Float)1e100);		HX_STACK_VAR(minx,"minx");
	HX_STACK_LINE(2574)
	Float miny = ((Float)1e100);		HX_STACK_VAR(miny,"miny");
	HX_STACK_LINE(2591)
	Float tmp1 = ((Float)-1e+100);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2591)
	Float maxx = tmp1;		HX_STACK_VAR(maxx,"maxx");
	HX_STACK_LINE(2592)
	Float tmp2 = ((Float)-1e+100);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2592)
	Float maxy = tmp2;		HX_STACK_VAR(maxy,"maxy");
	HX_STACK_LINE(2609)
	{
		HX_STACK_LINE(2610)
		::zpp_nape::geom::ZPP_GeomPoly tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2610)
		::zpp_nape::geom::ZPP_GeomVert F = tmp3->vertices;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(2611)
		::zpp_nape::geom::ZPP_GeomPoly tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2611)
		::zpp_nape::geom::ZPP_GeomVert L = tmp4->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(2612)
		bool tmp5 = (F != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2612)
		if ((tmp5)){
			HX_STACK_LINE(2613)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(2614)
			while((true)){
				HX_STACK_LINE(2615)
				::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(2617)
				{
					HX_STACK_LINE(2618)
					bool tmp6 = (v->x < minx);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2618)
					if ((tmp6)){
						HX_STACK_LINE(2618)
						minx = v->x;
					}
					HX_STACK_LINE(2619)
					bool tmp7 = (v->y < miny);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2619)
					if ((tmp7)){
						HX_STACK_LINE(2619)
						miny = v->y;
					}
					HX_STACK_LINE(2620)
					bool tmp8 = (v->x > maxx);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2620)
					if ((tmp8)){
						HX_STACK_LINE(2620)
						maxx = v->x;
					}
					HX_STACK_LINE(2621)
					bool tmp9 = (v->y > maxy);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2621)
					if ((tmp9)){
						HX_STACK_LINE(2621)
						maxy = v->y;
					}
				}
				HX_STACK_LINE(2624)
				nite = nite->next;
				HX_STACK_LINE(2626)
				bool tmp6 = (nite != L);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2626)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2614)
				if ((tmp7)){
					HX_STACK_LINE(2614)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(2629)
	Float tmp3 = minx;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2629)
	Float tmp4 = miny;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2629)
	Float tmp5 = (maxx - minx);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2629)
	Float tmp6 = (maxy - miny);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2629)
	::nape::geom::AABB tmp7 = ::nape::geom::AABB_obj::__new(tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(2629)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,bounds,return )

::nape::geom::Vec2 GeomPoly_obj::top( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","top",0xb497b25b,"nape.geom.GeomPoly.top","nape/geom/GeomPoly.hx",2644,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2645)
	{
		HX_STACK_LINE(2647)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2647)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2647)
		if ((tmp)){
			HX_STACK_LINE(2647)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(2647)
			tmp1 = false;
		}
		HX_STACK_LINE(2647)
		if ((tmp1)){
			HX_STACK_LINE(2647)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2647)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2647)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(2651)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2651)
	{
		HX_STACK_LINE(2651)
		{
			HX_STACK_LINE(2651)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2651)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2651)
			if ((tmp1)){
				HX_STACK_LINE(2651)
				tmp2 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(2651)
				tmp2 = false;
			}
			HX_STACK_LINE(2651)
			if ((tmp2)){
				HX_STACK_LINE(2651)
				::String tmp3 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2651)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2651)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(2651)
		::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2651)
		::zpp_nape::geom::ZPP_GeomVert tmp2 = tmp1->vertices;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2651)
		tmp = (tmp2 == null());
	}
	HX_STACK_LINE(2651)
	if ((tmp)){
		HX_STACK_LINE(2652)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: empty GeomPoly has no defineable topmost vertex","\x35","\x03","\x45","\x29"));
	}
	HX_STACK_LINE(2655)
	::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2655)
	::zpp_nape::geom::ZPP_GeomVert min = tmp1->vertices;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(2656)
	{
		HX_STACK_LINE(2657)
		::zpp_nape::geom::ZPP_GeomPoly tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2657)
		::zpp_nape::geom::ZPP_GeomVert tmp3 = tmp2->vertices->next;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2657)
		::zpp_nape::geom::ZPP_GeomVert F = tmp3;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(2658)
		::zpp_nape::geom::ZPP_GeomPoly tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2658)
		::zpp_nape::geom::ZPP_GeomVert L = tmp4->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(2659)
		bool tmp5 = (F != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2659)
		if ((tmp5)){
			HX_STACK_LINE(2660)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(2661)
			while((true)){
				HX_STACK_LINE(2662)
				::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(2663)
				{
					HX_STACK_LINE(2664)
					bool tmp6 = (v->y < min->y);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2664)
					if ((tmp6)){
						HX_STACK_LINE(2664)
						min = v;
					}
				}
				HX_STACK_LINE(2666)
				nite = nite->next;
				HX_STACK_LINE(2668)
				bool tmp6 = (nite != L);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2668)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2661)
				if ((tmp7)){
					HX_STACK_LINE(2661)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(2671)
	::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2671)
	{
		HX_STACK_LINE(2671)
		bool tmp3 = (min->wrap == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2671)
		if ((tmp3)){
			HX_STACK_LINE(2671)
			::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2671)
			{
				HX_STACK_LINE(2671)
				Float x = min->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(2671)
				Float y = min->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(2671)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(2671)
				bool tmp5 = (x != x);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2671)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2671)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2671)
				if ((tmp6)){
					HX_STACK_LINE(2671)
					tmp7 = (y != y);
				}
				else{
					HX_STACK_LINE(2671)
					tmp7 = true;
				}
				HX_STACK_LINE(2671)
				if ((tmp7)){
					HX_STACK_LINE(2671)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(2671)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2671)
				{
					HX_STACK_LINE(2671)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2671)
					bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2671)
					if ((tmp9)){
						HX_STACK_LINE(2671)
						::nape::geom::Vec2 tmp10 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2671)
						ret = tmp10;
					}
					else{
						HX_STACK_LINE(2671)
						::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2671)
						ret = tmp10;
						HX_STACK_LINE(2671)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(2671)
						ret->zpp_pool = null();
						HX_STACK_LINE(2671)
						ret->zpp_disp = false;
						HX_STACK_LINE(2671)
						::nape::geom::Vec2 tmp11 = ret;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(2671)
						::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(2671)
						bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(2671)
						if ((tmp13)){
							HX_STACK_LINE(2671)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
				}
				HX_STACK_LINE(2671)
				bool tmp8 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2671)
				if ((tmp8)){
					HX_STACK_LINE(2671)
					::zpp_nape::geom::ZPP_Vec2 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2671)
					{
						HX_STACK_LINE(2671)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(2671)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(2671)
						{
							HX_STACK_LINE(2671)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(2671)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(2671)
							if ((tmp11)){
								HX_STACK_LINE(2671)
								::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(2671)
								ret1 = tmp12;
							}
							else{
								HX_STACK_LINE(2671)
								::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(2671)
								ret1 = tmp12;
								HX_STACK_LINE(2671)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(2671)
								ret1->next = null();
							}
							HX_STACK_LINE(2671)
							ret1->weak = false;
						}
						HX_STACK_LINE(2671)
						ret1->_immutable = immutable;
						HX_STACK_LINE(2671)
						{
							HX_STACK_LINE(2671)
							ret1->x = x;
							HX_STACK_LINE(2671)
							ret1->y = y;
							HX_STACK_LINE(2671)
							{
							}
						}
						HX_STACK_LINE(2671)
						tmp9 = ret1;
					}
					HX_STACK_LINE(2671)
					ret->zpp_inner = tmp9;
					HX_STACK_LINE(2671)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(2671)
					{
						HX_STACK_LINE(2671)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(2671)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2671)
						if ((tmp9)){
							HX_STACK_LINE(2671)
							tmp10 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(2671)
							tmp10 = false;
						}
						HX_STACK_LINE(2671)
						if ((tmp10)){
							HX_STACK_LINE(2671)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(2671)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(2671)
							HX_STACK_DO_THROW(tmp12);
						}
					}
					HX_STACK_LINE(2671)
					{
						HX_STACK_LINE(2671)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2671)
						bool tmp9 = _this->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(2671)
						if ((tmp9)){
							HX_STACK_LINE(2671)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(2671)
						bool tmp10 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2671)
						if ((tmp10)){
							HX_STACK_LINE(2671)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(2671)
					bool tmp9 = (x != x);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2671)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2671)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2671)
					if ((tmp10)){
						HX_STACK_LINE(2671)
						tmp11 = (y != y);
					}
					else{
						HX_STACK_LINE(2671)
						tmp11 = true;
					}
					HX_STACK_LINE(2671)
					if ((tmp11)){
						HX_STACK_LINE(2671)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(2671)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2671)
					{
						HX_STACK_LINE(2671)
						{
							HX_STACK_LINE(2671)
							bool tmp13 = (ret != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(2671)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(2671)
							if ((tmp13)){
								HX_STACK_LINE(2671)
								tmp14 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(2671)
								tmp14 = false;
							}
							HX_STACK_LINE(2671)
							if ((tmp14)){
								HX_STACK_LINE(2671)
								::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(2671)
								::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(2671)
								HX_STACK_DO_THROW(tmp16);
							}
						}
						HX_STACK_LINE(2671)
						{
							HX_STACK_LINE(2671)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2671)
							bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(2671)
							if ((tmp13)){
								HX_STACK_LINE(2671)
								_this->_validate();
							}
						}
						HX_STACK_LINE(2671)
						tmp12 = ret->zpp_inner->x;
					}
					HX_STACK_LINE(2671)
					Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2671)
					bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2671)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2671)
					if ((tmp14)){
						HX_STACK_LINE(2671)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2671)
						{
							HX_STACK_LINE(2671)
							{
								HX_STACK_LINE(2671)
								bool tmp17 = (ret != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(2671)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2671)
								bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(2671)
								bool tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(2671)
								if ((tmp20)){
									HX_STACK_LINE(2671)
									tmp19 = ret->zpp_disp;
								}
								else{
									HX_STACK_LINE(2671)
									tmp19 = false;
								}
								HX_STACK_LINE(2671)
								bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(2671)
								if ((tmp21)){
									HX_STACK_LINE(2671)
									::String tmp22 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(2671)
									::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(2671)
									::String tmp24 = (tmp23 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(2671)
									::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(2671)
									::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(2671)
									HX_STACK_DO_THROW(tmp26);
								}
							}
							HX_STACK_LINE(2671)
							{
								HX_STACK_LINE(2671)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2671)
								bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(2671)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2671)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(2671)
								if ((tmp19)){
									HX_STACK_LINE(2671)
									_this->_validate();
								}
							}
							HX_STACK_LINE(2671)
							Float tmp17 = ret->zpp_inner->y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2671)
							tmp16 = tmp17;
						}
						HX_STACK_LINE(2671)
						Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(2671)
						tmp15 = (tmp16 == tmp17);
					}
					else{
						HX_STACK_LINE(2671)
						tmp15 = false;
					}
					HX_STACK_LINE(2671)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2671)
					if ((tmp16)){
						HX_STACK_LINE(2671)
						{
							HX_STACK_LINE(2671)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(2671)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(2671)
							{
							}
						}
						HX_STACK_LINE(2671)
						{
							HX_STACK_LINE(2671)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2671)
							bool tmp17 = (_this->_invalidate != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2671)
							if ((tmp17)){
								HX_STACK_LINE(2671)
								::zpp_nape::geom::ZPP_Vec2 tmp18 = _this;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2671)
								_this->_invalidate(tmp18);
							}
						}
					}
					HX_STACK_LINE(2671)
					ret;
				}
				HX_STACK_LINE(2671)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(2671)
				tmp4 = ret;
			}
			HX_STACK_LINE(2671)
			min->wrap = tmp4;
			HX_STACK_LINE(2671)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = min->wrap->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2671)
			tmp5->_inuse = true;
			HX_STACK_LINE(2671)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = min->wrap->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2671)
			tmp6->_invalidate = min->modwrap_dyn();
			HX_STACK_LINE(2671)
			::zpp_nape::geom::ZPP_Vec2 tmp7 = min->wrap->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2671)
			tmp7->_validate = min->getwrap_dyn();
		}
		HX_STACK_LINE(2671)
		tmp2 = min->wrap;
	}
	HX_STACK_LINE(2671)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,top,return )

::nape::geom::Vec2 GeomPoly_obj::bottom( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","bottom",0xb87abae5,"nape.geom.GeomPoly.bottom","nape/geom/GeomPoly.hx",2686,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2687)
	{
		HX_STACK_LINE(2689)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2689)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2689)
		if ((tmp)){
			HX_STACK_LINE(2689)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(2689)
			tmp1 = false;
		}
		HX_STACK_LINE(2689)
		if ((tmp1)){
			HX_STACK_LINE(2689)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2689)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2689)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(2693)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2693)
	{
		HX_STACK_LINE(2693)
		{
			HX_STACK_LINE(2693)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2693)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2693)
			if ((tmp1)){
				HX_STACK_LINE(2693)
				tmp2 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(2693)
				tmp2 = false;
			}
			HX_STACK_LINE(2693)
			if ((tmp2)){
				HX_STACK_LINE(2693)
				::String tmp3 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2693)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2693)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(2693)
		::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2693)
		::zpp_nape::geom::ZPP_GeomVert tmp2 = tmp1->vertices;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2693)
		tmp = (tmp2 == null());
	}
	HX_STACK_LINE(2693)
	if ((tmp)){
		HX_STACK_LINE(2694)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: empty GeomPoly has no defineable bottommost vertex","\xad","\xe5","\xcf","\x5e"));
	}
	HX_STACK_LINE(2697)
	::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2697)
	::zpp_nape::geom::ZPP_GeomVert max = tmp1->vertices;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(2698)
	{
		HX_STACK_LINE(2699)
		::zpp_nape::geom::ZPP_GeomPoly tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2699)
		::zpp_nape::geom::ZPP_GeomVert tmp3 = tmp2->vertices->next;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2699)
		::zpp_nape::geom::ZPP_GeomVert F = tmp3;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(2700)
		::zpp_nape::geom::ZPP_GeomPoly tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2700)
		::zpp_nape::geom::ZPP_GeomVert L = tmp4->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(2701)
		bool tmp5 = (F != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2701)
		if ((tmp5)){
			HX_STACK_LINE(2702)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(2703)
			while((true)){
				HX_STACK_LINE(2704)
				::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(2705)
				{
					HX_STACK_LINE(2706)
					bool tmp6 = (v->y > max->y);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2706)
					if ((tmp6)){
						HX_STACK_LINE(2706)
						max = v;
					}
				}
				HX_STACK_LINE(2708)
				nite = nite->next;
				HX_STACK_LINE(2710)
				bool tmp6 = (nite != L);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2710)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2703)
				if ((tmp7)){
					HX_STACK_LINE(2703)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(2713)
	::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2713)
	{
		HX_STACK_LINE(2713)
		bool tmp3 = (max->wrap == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2713)
		if ((tmp3)){
			HX_STACK_LINE(2713)
			::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2713)
			{
				HX_STACK_LINE(2713)
				Float x = max->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(2713)
				Float y = max->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(2713)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(2713)
				bool tmp5 = (x != x);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2713)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2713)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2713)
				if ((tmp6)){
					HX_STACK_LINE(2713)
					tmp7 = (y != y);
				}
				else{
					HX_STACK_LINE(2713)
					tmp7 = true;
				}
				HX_STACK_LINE(2713)
				if ((tmp7)){
					HX_STACK_LINE(2713)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(2713)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2713)
				{
					HX_STACK_LINE(2713)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2713)
					bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2713)
					if ((tmp9)){
						HX_STACK_LINE(2713)
						::nape::geom::Vec2 tmp10 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2713)
						ret = tmp10;
					}
					else{
						HX_STACK_LINE(2713)
						::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2713)
						ret = tmp10;
						HX_STACK_LINE(2713)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(2713)
						ret->zpp_pool = null();
						HX_STACK_LINE(2713)
						ret->zpp_disp = false;
						HX_STACK_LINE(2713)
						::nape::geom::Vec2 tmp11 = ret;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(2713)
						::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(2713)
						bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(2713)
						if ((tmp13)){
							HX_STACK_LINE(2713)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
				}
				HX_STACK_LINE(2713)
				bool tmp8 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2713)
				if ((tmp8)){
					HX_STACK_LINE(2713)
					::zpp_nape::geom::ZPP_Vec2 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2713)
					{
						HX_STACK_LINE(2713)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(2713)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(2713)
						{
							HX_STACK_LINE(2713)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(2713)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(2713)
							if ((tmp11)){
								HX_STACK_LINE(2713)
								::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(2713)
								ret1 = tmp12;
							}
							else{
								HX_STACK_LINE(2713)
								::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(2713)
								ret1 = tmp12;
								HX_STACK_LINE(2713)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(2713)
								ret1->next = null();
							}
							HX_STACK_LINE(2713)
							ret1->weak = false;
						}
						HX_STACK_LINE(2713)
						ret1->_immutable = immutable;
						HX_STACK_LINE(2713)
						{
							HX_STACK_LINE(2713)
							ret1->x = x;
							HX_STACK_LINE(2713)
							ret1->y = y;
							HX_STACK_LINE(2713)
							{
							}
						}
						HX_STACK_LINE(2713)
						tmp9 = ret1;
					}
					HX_STACK_LINE(2713)
					ret->zpp_inner = tmp9;
					HX_STACK_LINE(2713)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(2713)
					{
						HX_STACK_LINE(2713)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(2713)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2713)
						if ((tmp9)){
							HX_STACK_LINE(2713)
							tmp10 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(2713)
							tmp10 = false;
						}
						HX_STACK_LINE(2713)
						if ((tmp10)){
							HX_STACK_LINE(2713)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(2713)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(2713)
							HX_STACK_DO_THROW(tmp12);
						}
					}
					HX_STACK_LINE(2713)
					{
						HX_STACK_LINE(2713)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2713)
						bool tmp9 = _this->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(2713)
						if ((tmp9)){
							HX_STACK_LINE(2713)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(2713)
						bool tmp10 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2713)
						if ((tmp10)){
							HX_STACK_LINE(2713)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(2713)
					bool tmp9 = (x != x);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2713)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2713)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2713)
					if ((tmp10)){
						HX_STACK_LINE(2713)
						tmp11 = (y != y);
					}
					else{
						HX_STACK_LINE(2713)
						tmp11 = true;
					}
					HX_STACK_LINE(2713)
					if ((tmp11)){
						HX_STACK_LINE(2713)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(2713)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2713)
					{
						HX_STACK_LINE(2713)
						{
							HX_STACK_LINE(2713)
							bool tmp13 = (ret != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(2713)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(2713)
							if ((tmp13)){
								HX_STACK_LINE(2713)
								tmp14 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(2713)
								tmp14 = false;
							}
							HX_STACK_LINE(2713)
							if ((tmp14)){
								HX_STACK_LINE(2713)
								::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(2713)
								::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(2713)
								HX_STACK_DO_THROW(tmp16);
							}
						}
						HX_STACK_LINE(2713)
						{
							HX_STACK_LINE(2713)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2713)
							bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(2713)
							if ((tmp13)){
								HX_STACK_LINE(2713)
								_this->_validate();
							}
						}
						HX_STACK_LINE(2713)
						tmp12 = ret->zpp_inner->x;
					}
					HX_STACK_LINE(2713)
					Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2713)
					bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2713)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2713)
					if ((tmp14)){
						HX_STACK_LINE(2713)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2713)
						{
							HX_STACK_LINE(2713)
							{
								HX_STACK_LINE(2713)
								bool tmp17 = (ret != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(2713)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2713)
								bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(2713)
								bool tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(2713)
								if ((tmp20)){
									HX_STACK_LINE(2713)
									tmp19 = ret->zpp_disp;
								}
								else{
									HX_STACK_LINE(2713)
									tmp19 = false;
								}
								HX_STACK_LINE(2713)
								bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(2713)
								if ((tmp21)){
									HX_STACK_LINE(2713)
									::String tmp22 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(2713)
									::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(2713)
									::String tmp24 = (tmp23 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(2713)
									::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(2713)
									::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(2713)
									HX_STACK_DO_THROW(tmp26);
								}
							}
							HX_STACK_LINE(2713)
							{
								HX_STACK_LINE(2713)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2713)
								bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(2713)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2713)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(2713)
								if ((tmp19)){
									HX_STACK_LINE(2713)
									_this->_validate();
								}
							}
							HX_STACK_LINE(2713)
							Float tmp17 = ret->zpp_inner->y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2713)
							tmp16 = tmp17;
						}
						HX_STACK_LINE(2713)
						Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(2713)
						tmp15 = (tmp16 == tmp17);
					}
					else{
						HX_STACK_LINE(2713)
						tmp15 = false;
					}
					HX_STACK_LINE(2713)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2713)
					if ((tmp16)){
						HX_STACK_LINE(2713)
						{
							HX_STACK_LINE(2713)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(2713)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(2713)
							{
							}
						}
						HX_STACK_LINE(2713)
						{
							HX_STACK_LINE(2713)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2713)
							bool tmp17 = (_this->_invalidate != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2713)
							if ((tmp17)){
								HX_STACK_LINE(2713)
								::zpp_nape::geom::ZPP_Vec2 tmp18 = _this;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2713)
								_this->_invalidate(tmp18);
							}
						}
					}
					HX_STACK_LINE(2713)
					ret;
				}
				HX_STACK_LINE(2713)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(2713)
				tmp4 = ret;
			}
			HX_STACK_LINE(2713)
			max->wrap = tmp4;
			HX_STACK_LINE(2713)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = max->wrap->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2713)
			tmp5->_inuse = true;
			HX_STACK_LINE(2713)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = max->wrap->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2713)
			tmp6->_invalidate = max->modwrap_dyn();
			HX_STACK_LINE(2713)
			::zpp_nape::geom::ZPP_Vec2 tmp7 = max->wrap->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2713)
			tmp7->_validate = max->getwrap_dyn();
		}
		HX_STACK_LINE(2713)
		tmp2 = max->wrap;
	}
	HX_STACK_LINE(2713)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,bottom,return )

::nape::geom::Vec2 GeomPoly_obj::left( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","left",0x4ad30981,"nape.geom.GeomPoly.left","nape/geom/GeomPoly.hx",2728,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2729)
	{
		HX_STACK_LINE(2731)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2731)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2731)
		if ((tmp)){
			HX_STACK_LINE(2731)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(2731)
			tmp1 = false;
		}
		HX_STACK_LINE(2731)
		if ((tmp1)){
			HX_STACK_LINE(2731)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2731)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2731)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(2735)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2735)
	{
		HX_STACK_LINE(2735)
		{
			HX_STACK_LINE(2735)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2735)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2735)
			if ((tmp1)){
				HX_STACK_LINE(2735)
				tmp2 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(2735)
				tmp2 = false;
			}
			HX_STACK_LINE(2735)
			if ((tmp2)){
				HX_STACK_LINE(2735)
				::String tmp3 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2735)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2735)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(2735)
		::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2735)
		::zpp_nape::geom::ZPP_GeomVert tmp2 = tmp1->vertices;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2735)
		tmp = (tmp2 == null());
	}
	HX_STACK_LINE(2735)
	if ((tmp)){
		HX_STACK_LINE(2736)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: empty GeomPoly has no defineable leftmost vertex","\x51","\x8e","\x46","\x08"));
	}
	HX_STACK_LINE(2739)
	::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2739)
	::zpp_nape::geom::ZPP_GeomVert min = tmp1->vertices;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(2740)
	{
		HX_STACK_LINE(2741)
		::zpp_nape::geom::ZPP_GeomPoly tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2741)
		::zpp_nape::geom::ZPP_GeomVert tmp3 = tmp2->vertices->next;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2741)
		::zpp_nape::geom::ZPP_GeomVert F = tmp3;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(2742)
		::zpp_nape::geom::ZPP_GeomPoly tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2742)
		::zpp_nape::geom::ZPP_GeomVert L = tmp4->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(2743)
		bool tmp5 = (F != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2743)
		if ((tmp5)){
			HX_STACK_LINE(2744)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(2745)
			while((true)){
				HX_STACK_LINE(2746)
				::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(2747)
				{
					HX_STACK_LINE(2748)
					bool tmp6 = (v->x < min->x);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2748)
					if ((tmp6)){
						HX_STACK_LINE(2748)
						min = v;
					}
				}
				HX_STACK_LINE(2750)
				nite = nite->next;
				HX_STACK_LINE(2752)
				bool tmp6 = (nite != L);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2752)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2745)
				if ((tmp7)){
					HX_STACK_LINE(2745)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(2755)
	::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2755)
	{
		HX_STACK_LINE(2755)
		bool tmp3 = (min->wrap == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2755)
		if ((tmp3)){
			HX_STACK_LINE(2755)
			::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2755)
			{
				HX_STACK_LINE(2755)
				Float x = min->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(2755)
				Float y = min->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(2755)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(2755)
				bool tmp5 = (x != x);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2755)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2755)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2755)
				if ((tmp6)){
					HX_STACK_LINE(2755)
					tmp7 = (y != y);
				}
				else{
					HX_STACK_LINE(2755)
					tmp7 = true;
				}
				HX_STACK_LINE(2755)
				if ((tmp7)){
					HX_STACK_LINE(2755)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(2755)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2755)
				{
					HX_STACK_LINE(2755)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2755)
					bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2755)
					if ((tmp9)){
						HX_STACK_LINE(2755)
						::nape::geom::Vec2 tmp10 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2755)
						ret = tmp10;
					}
					else{
						HX_STACK_LINE(2755)
						::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2755)
						ret = tmp10;
						HX_STACK_LINE(2755)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(2755)
						ret->zpp_pool = null();
						HX_STACK_LINE(2755)
						ret->zpp_disp = false;
						HX_STACK_LINE(2755)
						::nape::geom::Vec2 tmp11 = ret;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(2755)
						::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(2755)
						bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(2755)
						if ((tmp13)){
							HX_STACK_LINE(2755)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
				}
				HX_STACK_LINE(2755)
				bool tmp8 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2755)
				if ((tmp8)){
					HX_STACK_LINE(2755)
					::zpp_nape::geom::ZPP_Vec2 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2755)
					{
						HX_STACK_LINE(2755)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(2755)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(2755)
						{
							HX_STACK_LINE(2755)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(2755)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(2755)
							if ((tmp11)){
								HX_STACK_LINE(2755)
								::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(2755)
								ret1 = tmp12;
							}
							else{
								HX_STACK_LINE(2755)
								::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(2755)
								ret1 = tmp12;
								HX_STACK_LINE(2755)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(2755)
								ret1->next = null();
							}
							HX_STACK_LINE(2755)
							ret1->weak = false;
						}
						HX_STACK_LINE(2755)
						ret1->_immutable = immutable;
						HX_STACK_LINE(2755)
						{
							HX_STACK_LINE(2755)
							ret1->x = x;
							HX_STACK_LINE(2755)
							ret1->y = y;
							HX_STACK_LINE(2755)
							{
							}
						}
						HX_STACK_LINE(2755)
						tmp9 = ret1;
					}
					HX_STACK_LINE(2755)
					ret->zpp_inner = tmp9;
					HX_STACK_LINE(2755)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(2755)
					{
						HX_STACK_LINE(2755)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(2755)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2755)
						if ((tmp9)){
							HX_STACK_LINE(2755)
							tmp10 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(2755)
							tmp10 = false;
						}
						HX_STACK_LINE(2755)
						if ((tmp10)){
							HX_STACK_LINE(2755)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(2755)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(2755)
							HX_STACK_DO_THROW(tmp12);
						}
					}
					HX_STACK_LINE(2755)
					{
						HX_STACK_LINE(2755)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2755)
						bool tmp9 = _this->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(2755)
						if ((tmp9)){
							HX_STACK_LINE(2755)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(2755)
						bool tmp10 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2755)
						if ((tmp10)){
							HX_STACK_LINE(2755)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(2755)
					bool tmp9 = (x != x);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2755)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2755)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2755)
					if ((tmp10)){
						HX_STACK_LINE(2755)
						tmp11 = (y != y);
					}
					else{
						HX_STACK_LINE(2755)
						tmp11 = true;
					}
					HX_STACK_LINE(2755)
					if ((tmp11)){
						HX_STACK_LINE(2755)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(2755)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2755)
					{
						HX_STACK_LINE(2755)
						{
							HX_STACK_LINE(2755)
							bool tmp13 = (ret != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(2755)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(2755)
							if ((tmp13)){
								HX_STACK_LINE(2755)
								tmp14 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(2755)
								tmp14 = false;
							}
							HX_STACK_LINE(2755)
							if ((tmp14)){
								HX_STACK_LINE(2755)
								::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(2755)
								::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(2755)
								HX_STACK_DO_THROW(tmp16);
							}
						}
						HX_STACK_LINE(2755)
						{
							HX_STACK_LINE(2755)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2755)
							bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(2755)
							if ((tmp13)){
								HX_STACK_LINE(2755)
								_this->_validate();
							}
						}
						HX_STACK_LINE(2755)
						tmp12 = ret->zpp_inner->x;
					}
					HX_STACK_LINE(2755)
					Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2755)
					bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2755)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2755)
					if ((tmp14)){
						HX_STACK_LINE(2755)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2755)
						{
							HX_STACK_LINE(2755)
							{
								HX_STACK_LINE(2755)
								bool tmp17 = (ret != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(2755)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2755)
								bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(2755)
								bool tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(2755)
								if ((tmp20)){
									HX_STACK_LINE(2755)
									tmp19 = ret->zpp_disp;
								}
								else{
									HX_STACK_LINE(2755)
									tmp19 = false;
								}
								HX_STACK_LINE(2755)
								bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(2755)
								if ((tmp21)){
									HX_STACK_LINE(2755)
									::String tmp22 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(2755)
									::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(2755)
									::String tmp24 = (tmp23 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(2755)
									::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(2755)
									::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(2755)
									HX_STACK_DO_THROW(tmp26);
								}
							}
							HX_STACK_LINE(2755)
							{
								HX_STACK_LINE(2755)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2755)
								bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(2755)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2755)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(2755)
								if ((tmp19)){
									HX_STACK_LINE(2755)
									_this->_validate();
								}
							}
							HX_STACK_LINE(2755)
							Float tmp17 = ret->zpp_inner->y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2755)
							tmp16 = tmp17;
						}
						HX_STACK_LINE(2755)
						Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(2755)
						tmp15 = (tmp16 == tmp17);
					}
					else{
						HX_STACK_LINE(2755)
						tmp15 = false;
					}
					HX_STACK_LINE(2755)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2755)
					if ((tmp16)){
						HX_STACK_LINE(2755)
						{
							HX_STACK_LINE(2755)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(2755)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(2755)
							{
							}
						}
						HX_STACK_LINE(2755)
						{
							HX_STACK_LINE(2755)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2755)
							bool tmp17 = (_this->_invalidate != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2755)
							if ((tmp17)){
								HX_STACK_LINE(2755)
								::zpp_nape::geom::ZPP_Vec2 tmp18 = _this;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2755)
								_this->_invalidate(tmp18);
							}
						}
					}
					HX_STACK_LINE(2755)
					ret;
				}
				HX_STACK_LINE(2755)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(2755)
				tmp4 = ret;
			}
			HX_STACK_LINE(2755)
			min->wrap = tmp4;
			HX_STACK_LINE(2755)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = min->wrap->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2755)
			tmp5->_inuse = true;
			HX_STACK_LINE(2755)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = min->wrap->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2755)
			tmp6->_invalidate = min->modwrap_dyn();
			HX_STACK_LINE(2755)
			::zpp_nape::geom::ZPP_Vec2 tmp7 = min->wrap->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2755)
			tmp7->_validate = min->getwrap_dyn();
		}
		HX_STACK_LINE(2755)
		tmp2 = min->wrap;
	}
	HX_STACK_LINE(2755)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,left,return )

::nape::geom::Vec2 GeomPoly_obj::right( ){
	HX_STACK_FRAME("nape.geom.GeomPoly","right",0xa4e25522,"nape.geom.GeomPoly.right","nape/geom/GeomPoly.hx",2770,0x0b8969aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2771)
	{
		HX_STACK_LINE(2773)
		bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2773)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2773)
		if ((tmp)){
			HX_STACK_LINE(2773)
			tmp1 = this->zpp_disp;
		}
		else{
			HX_STACK_LINE(2773)
			tmp1 = false;
		}
		HX_STACK_LINE(2773)
		if ((tmp1)){
			HX_STACK_LINE(2773)
			::String tmp2 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2773)
			::String tmp3 = (tmp2 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2773)
			HX_STACK_DO_THROW(tmp3);
		}
	}
	HX_STACK_LINE(2777)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2777)
	{
		HX_STACK_LINE(2777)
		{
			HX_STACK_LINE(2777)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2777)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2777)
			if ((tmp1)){
				HX_STACK_LINE(2777)
				tmp2 = this->zpp_disp;
			}
			else{
				HX_STACK_LINE(2777)
				tmp2 = false;
			}
			HX_STACK_LINE(2777)
			if ((tmp2)){
				HX_STACK_LINE(2777)
				::String tmp3 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2777)
				::String tmp4 = (tmp3 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2777)
				HX_STACK_DO_THROW(tmp4);
			}
		}
		HX_STACK_LINE(2777)
		::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2777)
		::zpp_nape::geom::ZPP_GeomVert tmp2 = tmp1->vertices;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2777)
		tmp = (tmp2 == null());
	}
	HX_STACK_LINE(2777)
	if ((tmp)){
		HX_STACK_LINE(2778)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: empty GeomPoly has no defineable rightmmost vertex","\x47","\x7d","\xc7","\x8e"));
	}
	HX_STACK_LINE(2781)
	::zpp_nape::geom::ZPP_GeomPoly tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2781)
	::zpp_nape::geom::ZPP_GeomVert max = tmp1->vertices;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(2782)
	{
		HX_STACK_LINE(2783)
		::zpp_nape::geom::ZPP_GeomPoly tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2783)
		::zpp_nape::geom::ZPP_GeomVert tmp3 = tmp2->vertices->next;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2783)
		::zpp_nape::geom::ZPP_GeomVert F = tmp3;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(2784)
		::zpp_nape::geom::ZPP_GeomPoly tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2784)
		::zpp_nape::geom::ZPP_GeomVert L = tmp4->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(2785)
		bool tmp5 = (F != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2785)
		if ((tmp5)){
			HX_STACK_LINE(2786)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(2787)
			while((true)){
				HX_STACK_LINE(2788)
				::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(2789)
				{
					HX_STACK_LINE(2790)
					bool tmp6 = (v->x > max->x);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2790)
					if ((tmp6)){
						HX_STACK_LINE(2790)
						max = v;
					}
				}
				HX_STACK_LINE(2792)
				nite = nite->next;
				HX_STACK_LINE(2794)
				bool tmp6 = (nite != L);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2794)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2787)
				if ((tmp7)){
					HX_STACK_LINE(2787)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(2797)
	::nape::geom::Vec2 tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2797)
	{
		HX_STACK_LINE(2797)
		bool tmp3 = (max->wrap == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2797)
		if ((tmp3)){
			HX_STACK_LINE(2797)
			::nape::geom::Vec2 tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2797)
			{
				HX_STACK_LINE(2797)
				Float x = max->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(2797)
				Float y = max->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(2797)
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(2797)
				bool tmp5 = (x != x);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2797)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2797)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2797)
				if ((tmp6)){
					HX_STACK_LINE(2797)
					tmp7 = (y != y);
				}
				else{
					HX_STACK_LINE(2797)
					tmp7 = true;
				}
				HX_STACK_LINE(2797)
				if ((tmp7)){
					HX_STACK_LINE(2797)
					HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
				}
				HX_STACK_LINE(2797)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2797)
				{
					HX_STACK_LINE(2797)
					::nape::geom::Vec2 tmp8 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2797)
					bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2797)
					if ((tmp9)){
						HX_STACK_LINE(2797)
						::nape::geom::Vec2 tmp10 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2797)
						ret = tmp10;
					}
					else{
						HX_STACK_LINE(2797)
						::nape::geom::Vec2 tmp10 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2797)
						ret = tmp10;
						HX_STACK_LINE(2797)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(2797)
						ret->zpp_pool = null();
						HX_STACK_LINE(2797)
						ret->zpp_disp = false;
						HX_STACK_LINE(2797)
						::nape::geom::Vec2 tmp11 = ret;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(2797)
						::nape::geom::Vec2 tmp12 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(2797)
						bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(2797)
						if ((tmp13)){
							HX_STACK_LINE(2797)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
				}
				HX_STACK_LINE(2797)
				bool tmp8 = (ret->zpp_inner == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2797)
				if ((tmp8)){
					HX_STACK_LINE(2797)
					::zpp_nape::geom::ZPP_Vec2 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2797)
					{
						HX_STACK_LINE(2797)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(2797)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(2797)
						{
							HX_STACK_LINE(2797)
							::zpp_nape::geom::ZPP_Vec2 tmp10 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(2797)
							bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(2797)
							if ((tmp11)){
								HX_STACK_LINE(2797)
								::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(2797)
								ret1 = tmp12;
							}
							else{
								HX_STACK_LINE(2797)
								::zpp_nape::geom::ZPP_Vec2 tmp12 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(2797)
								ret1 = tmp12;
								HX_STACK_LINE(2797)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(2797)
								ret1->next = null();
							}
							HX_STACK_LINE(2797)
							ret1->weak = false;
						}
						HX_STACK_LINE(2797)
						ret1->_immutable = immutable;
						HX_STACK_LINE(2797)
						{
							HX_STACK_LINE(2797)
							ret1->x = x;
							HX_STACK_LINE(2797)
							ret1->y = y;
							HX_STACK_LINE(2797)
							{
							}
						}
						HX_STACK_LINE(2797)
						tmp9 = ret1;
					}
					HX_STACK_LINE(2797)
					ret->zpp_inner = tmp9;
					HX_STACK_LINE(2797)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(2797)
					{
						HX_STACK_LINE(2797)
						bool tmp9 = (ret != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(2797)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2797)
						if ((tmp9)){
							HX_STACK_LINE(2797)
							tmp10 = ret->zpp_disp;
						}
						else{
							HX_STACK_LINE(2797)
							tmp10 = false;
						}
						HX_STACK_LINE(2797)
						if ((tmp10)){
							HX_STACK_LINE(2797)
							::String tmp11 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(2797)
							::String tmp12 = (tmp11 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(2797)
							HX_STACK_DO_THROW(tmp12);
						}
					}
					HX_STACK_LINE(2797)
					{
						HX_STACK_LINE(2797)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2797)
						bool tmp9 = _this->_immutable;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(2797)
						if ((tmp9)){
							HX_STACK_LINE(2797)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
						}
						HX_STACK_LINE(2797)
						bool tmp10 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2797)
						if ((tmp10)){
							HX_STACK_LINE(2797)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(2797)
					bool tmp9 = (x != x);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2797)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2797)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2797)
					if ((tmp10)){
						HX_STACK_LINE(2797)
						tmp11 = (y != y);
					}
					else{
						HX_STACK_LINE(2797)
						tmp11 = true;
					}
					HX_STACK_LINE(2797)
					if ((tmp11)){
						HX_STACK_LINE(2797)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
					}
					HX_STACK_LINE(2797)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2797)
					{
						HX_STACK_LINE(2797)
						{
							HX_STACK_LINE(2797)
							bool tmp13 = (ret != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(2797)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(2797)
							if ((tmp13)){
								HX_STACK_LINE(2797)
								tmp14 = ret->zpp_disp;
							}
							else{
								HX_STACK_LINE(2797)
								tmp14 = false;
							}
							HX_STACK_LINE(2797)
							if ((tmp14)){
								HX_STACK_LINE(2797)
								::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(2797)
								::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(2797)
								HX_STACK_DO_THROW(tmp16);
							}
						}
						HX_STACK_LINE(2797)
						{
							HX_STACK_LINE(2797)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2797)
							bool tmp13 = (_this->_validate != null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(2797)
							if ((tmp13)){
								HX_STACK_LINE(2797)
								_this->_validate();
							}
						}
						HX_STACK_LINE(2797)
						tmp12 = ret->zpp_inner->x;
					}
					HX_STACK_LINE(2797)
					Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2797)
					bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2797)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2797)
					if ((tmp14)){
						HX_STACK_LINE(2797)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2797)
						{
							HX_STACK_LINE(2797)
							{
								HX_STACK_LINE(2797)
								bool tmp17 = (ret != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(2797)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2797)
								bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(2797)
								bool tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(2797)
								if ((tmp20)){
									HX_STACK_LINE(2797)
									tmp19 = ret->zpp_disp;
								}
								else{
									HX_STACK_LINE(2797)
									tmp19 = false;
								}
								HX_STACK_LINE(2797)
								bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(2797)
								if ((tmp21)){
									HX_STACK_LINE(2797)
									::String tmp22 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(2797)
									::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(2797)
									::String tmp24 = (tmp23 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(2797)
									::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(2797)
									::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(2797)
									HX_STACK_DO_THROW(tmp26);
								}
							}
							HX_STACK_LINE(2797)
							{
								HX_STACK_LINE(2797)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2797)
								bool tmp17 = (_this->_validate != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(2797)
								bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2797)
								bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(2797)
								if ((tmp19)){
									HX_STACK_LINE(2797)
									_this->_validate();
								}
							}
							HX_STACK_LINE(2797)
							Float tmp17 = ret->zpp_inner->y;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2797)
							tmp16 = tmp17;
						}
						HX_STACK_LINE(2797)
						Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(2797)
						tmp15 = (tmp16 == tmp17);
					}
					else{
						HX_STACK_LINE(2797)
						tmp15 = false;
					}
					HX_STACK_LINE(2797)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2797)
					if ((tmp16)){
						HX_STACK_LINE(2797)
						{
							HX_STACK_LINE(2797)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(2797)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(2797)
							{
							}
						}
						HX_STACK_LINE(2797)
						{
							HX_STACK_LINE(2797)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2797)
							bool tmp17 = (_this->_invalidate != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2797)
							if ((tmp17)){
								HX_STACK_LINE(2797)
								::zpp_nape::geom::ZPP_Vec2 tmp18 = _this;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2797)
								_this->_invalidate(tmp18);
							}
						}
					}
					HX_STACK_LINE(2797)
					ret;
				}
				HX_STACK_LINE(2797)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(2797)
				tmp4 = ret;
			}
			HX_STACK_LINE(2797)
			max->wrap = tmp4;
			HX_STACK_LINE(2797)
			::zpp_nape::geom::ZPP_Vec2 tmp5 = max->wrap->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2797)
			tmp5->_inuse = true;
			HX_STACK_LINE(2797)
			::zpp_nape::geom::ZPP_Vec2 tmp6 = max->wrap->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2797)
			tmp6->_invalidate = max->modwrap_dyn();
			HX_STACK_LINE(2797)
			::zpp_nape::geom::ZPP_Vec2 tmp7 = max->wrap->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2797)
			tmp7->_validate = max->getwrap_dyn();
		}
		HX_STACK_LINE(2797)
		tmp2 = max->wrap;
	}
	HX_STACK_LINE(2797)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(GeomPoly_obj,right,return )

::nape::geom::GeomPoly GeomPoly_obj::get( Dynamic vertices){
	HX_STACK_FRAME("nape.geom.GeomPoly","get",0xb48dcc5c,"nape.geom.GeomPoly.get","nape/geom/GeomPoly.hx",1175,0x0b8969aa)
	HX_STACK_ARG(vertices,"vertices")
	HX_STACK_LINE(1176)
	::nape::geom::GeomPoly ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1177)
	{
		HX_STACK_LINE(1178)
		::nape::geom::GeomPoly tmp = ::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1178)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1178)
		if ((tmp1)){
			HX_STACK_LINE(1179)
			::nape::geom::GeomPoly tmp2 = ::nape::geom::GeomPoly_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1179)
			ret = tmp2;
		}
		else{
			HX_STACK_LINE(1185)
			::nape::geom::GeomPoly tmp2 = ::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1185)
			ret = tmp2;
			HX_STACK_LINE(1186)
			::zpp_nape::util::ZPP_PubPool_obj::poolGeomPoly = ret->zpp_pool;
			HX_STACK_LINE(1187)
			ret->zpp_pool = null();
			HX_STACK_LINE(1189)
			ret->zpp_disp = false;
			HX_STACK_LINE(1190)
			::nape::geom::GeomPoly tmp3 = ret;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1190)
			::nape::geom::GeomPoly tmp4 = ::zpp_nape::util::ZPP_PubPool_obj::nextGeomPoly;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1190)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1190)
			if ((tmp5)){
				HX_STACK_LINE(1190)
				::zpp_nape::util::ZPP_PubPool_obj::nextGeomPoly = null();
			}
		}
	}
	HX_STACK_LINE(1197)
	bool tmp = (vertices != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1197)
	if ((tmp)){
		HX_STACK_LINE(1198)
		{
			HX_STACK_LINE(1199)
			Dynamic tmp1 = vertices;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1199)
			bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1199)
			if ((tmp2)){
				HX_STACK_LINE(1200)
				cpp::ArrayBase lv = vertices;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(1201)
				{
					HX_STACK_LINE(1201)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1201)
					while((true)){
						HX_STACK_LINE(1201)
						bool tmp3 = (_g < lv->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1201)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1201)
						if ((tmp4)){
							HX_STACK_LINE(1201)
							break;
						}
						HX_STACK_LINE(1201)
						Dynamic tmp5 = lv->__GetItem(_g);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1201)
						Dynamic vite = tmp5;		HX_STACK_VAR(vite,"vite");
						HX_STACK_LINE(1201)
						++(_g);
						HX_STACK_LINE(1203)
						bool tmp6 = (vite == null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1203)
						if ((tmp6)){
							HX_STACK_LINE(1203)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Array<Vec2> contains null objects","\xeb","\x2d","\x26","\x50"));
						}
						HX_STACK_LINE(1206)
						Dynamic tmp7 = vite;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1206)
						bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::nape::geom::Vec2 >());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1206)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1206)
						if ((tmp9)){
							HX_STACK_LINE(1206)
							HX_STACK_DO_THROW(HX_HCSTRING("Error: Array<Vec2> contains non Vec2 objects","\xd5","\x3c","\x56","\xe0"));
						}
						HX_STACK_LINE(1208)
						::nape::geom::Vec2 v = vite;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(1209)
						{
							HX_STACK_LINE(1211)
							bool tmp10 = (v != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1211)
							bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1211)
							if ((tmp10)){
								HX_STACK_LINE(1211)
								tmp11 = v->zpp_disp;
							}
							else{
								HX_STACK_LINE(1211)
								tmp11 = false;
							}
							HX_STACK_LINE(1211)
							if ((tmp11)){
								HX_STACK_LINE(1211)
								::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1211)
								::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1211)
								HX_STACK_DO_THROW(tmp13);
							}
						}
						HX_STACK_LINE(1214)
						{
							HX_STACK_LINE(1215)
							::zpp_nape::geom::ZPP_GeomVert tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1215)
							{
								HX_STACK_LINE(1216)
								::zpp_nape::geom::ZPP_GeomVert tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1216)
								{
									HX_STACK_LINE(1216)
									Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1216)
									{
										HX_STACK_LINE(1216)
										bool tmp13 = (v != null());		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1216)
										bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1216)
										if ((tmp13)){
											HX_STACK_LINE(1216)
											tmp14 = v->zpp_disp;
										}
										else{
											HX_STACK_LINE(1216)
											tmp14 = false;
										}
										HX_STACK_LINE(1216)
										if ((tmp14)){
											HX_STACK_LINE(1216)
											::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1216)
											::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1216)
											HX_STACK_DO_THROW(tmp16);
										}
										HX_STACK_LINE(1216)
										{
											HX_STACK_LINE(1216)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1216)
											bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1216)
											if ((tmp15)){
												HX_STACK_LINE(1216)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1216)
										tmp12 = v->zpp_inner->x;
									}
									HX_STACK_LINE(1216)
									Float x = tmp12;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1216)
									Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1216)
									{
										HX_STACK_LINE(1216)
										bool tmp14 = (v != null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1216)
										bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1216)
										if ((tmp14)){
											HX_STACK_LINE(1216)
											tmp15 = v->zpp_disp;
										}
										else{
											HX_STACK_LINE(1216)
											tmp15 = false;
										}
										HX_STACK_LINE(1216)
										if ((tmp15)){
											HX_STACK_LINE(1216)
											::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1216)
											::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1216)
											HX_STACK_DO_THROW(tmp17);
										}
										HX_STACK_LINE(1216)
										{
											HX_STACK_LINE(1216)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1216)
											bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1216)
											if ((tmp16)){
												HX_STACK_LINE(1216)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1216)
										tmp13 = v->zpp_inner->y;
									}
									HX_STACK_LINE(1216)
									Float y = tmp13;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1216)
									::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1216)
									{
										HX_STACK_LINE(1216)
										::zpp_nape::geom::ZPP_GeomVert tmp14 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1216)
										bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1216)
										if ((tmp15)){
											HX_STACK_LINE(1216)
											::zpp_nape::geom::ZPP_GeomVert tmp16 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1216)
											ret1 = tmp16;
										}
										else{
											HX_STACK_LINE(1216)
											::zpp_nape::geom::ZPP_GeomVert tmp16 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1216)
											ret1 = tmp16;
											HX_STACK_LINE(1216)
											::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(1216)
											ret1->next = null();
										}
										HX_STACK_LINE(1216)
										ret1->forced = false;
									}
									HX_STACK_LINE(1216)
									{
										HX_STACK_LINE(1216)
										ret1->x = x;
										HX_STACK_LINE(1216)
										ret1->y = y;
										HX_STACK_LINE(1216)
										{
										}
									}
									HX_STACK_LINE(1216)
									tmp11 = ret1;
								}
								HX_STACK_LINE(1216)
								::zpp_nape::geom::ZPP_GeomVert obj = tmp11;		HX_STACK_VAR(obj,"obj");
								HX_STACK_LINE(1217)
								::zpp_nape::geom::ZPP_GeomVert tmp12 = ret->zpp_inner->vertices;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1217)
								bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1217)
								if ((tmp13)){
									HX_STACK_LINE(1217)
									::zpp_nape::geom::ZPP_GeomVert tmp14 = obj->next = obj;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1217)
									::zpp_nape::geom::ZPP_GeomVert tmp15 = obj->prev = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1217)
									ret->zpp_inner->vertices = tmp15;
								}
								else{
									HX_STACK_LINE(1219)
									::zpp_nape::geom::ZPP_GeomVert tmp14 = ret->zpp_inner->vertices;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1219)
									obj->prev = tmp14;
									HX_STACK_LINE(1220)
									::zpp_nape::geom::ZPP_GeomVert tmp15 = ret->zpp_inner->vertices;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1220)
									obj->next = tmp15->next;
									HX_STACK_LINE(1221)
									::zpp_nape::geom::ZPP_GeomVert tmp16 = ret->zpp_inner->vertices;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1221)
									tmp16->next->prev = obj;
									HX_STACK_LINE(1222)
									::zpp_nape::geom::ZPP_GeomVert tmp17 = ret->zpp_inner->vertices;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1222)
									tmp17->next = obj;
								}
								HX_STACK_LINE(1224)
								tmp10 = obj;
							}
							HX_STACK_LINE(1215)
							ret->zpp_inner->vertices = tmp10;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(1257)
				Dynamic tmp3 = vertices;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1257)
				bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::nape::geom::Vec2List >());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1257)
				if ((tmp4)){
					HX_STACK_LINE(1258)
					::nape::geom::Vec2List lv = vertices;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(1259)
					{
						HX_STACK_LINE(1259)
						::nape::geom::Vec2Iterator tmp5 = lv->iterator();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1259)
						::nape::geom::Vec2Iterator _g = tmp5;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1259)
						while((true)){
							HX_STACK_LINE(1259)
							bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1259)
							{
								HX_STACK_LINE(1259)
								::zpp_nape::util::ZPP_Vec2List tmp7 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1259)
								tmp7->valmod();
								HX_STACK_LINE(1259)
								int tmp8 = _g->zpp_inner->zpp_gl();		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1259)
								int length = tmp8;		HX_STACK_VAR(length,"length");
								HX_STACK_LINE(1259)
								_g->zpp_critical = true;
								HX_STACK_LINE(1259)
								bool tmp9 = (_g->zpp_i < length);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1259)
								if ((tmp9)){
									HX_STACK_LINE(1259)
									tmp6 = true;
								}
								else{
									HX_STACK_LINE(1259)
									{
										HX_STACK_LINE(1259)
										::nape::geom::Vec2Iterator tmp10 = ::nape::geom::Vec2Iterator_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(1259)
										_g->zpp_next = tmp10;
										HX_STACK_LINE(1259)
										::nape::geom::Vec2Iterator_obj::zpp_pool = _g;
										HX_STACK_LINE(1259)
										_g->zpp_inner = null();
									}
									HX_STACK_LINE(1259)
									tmp6 = false;
								}
							}
							HX_STACK_LINE(1259)
							bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1259)
							if ((tmp7)){
								HX_STACK_LINE(1259)
								break;
							}
							HX_STACK_LINE(1259)
							::nape::geom::Vec2 tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1259)
							{
								HX_STACK_LINE(1259)
								_g->zpp_critical = false;
								HX_STACK_LINE(1259)
								int tmp9 = (_g->zpp_i)++;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1259)
								tmp8 = _g->zpp_inner->at(tmp9);
							}
							HX_STACK_LINE(1259)
							::nape::geom::Vec2 v = tmp8;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(1261)
							bool tmp9 = (v == null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1261)
							if ((tmp9)){
								HX_STACK_LINE(1261)
								HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2List contains null objects","\x86","\xc5","\xd1","\x3e"));
							}
							HX_STACK_LINE(1263)
							{
								HX_STACK_LINE(1265)
								bool tmp10 = (v != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1265)
								bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1265)
								if ((tmp10)){
									HX_STACK_LINE(1265)
									tmp11 = v->zpp_disp;
								}
								else{
									HX_STACK_LINE(1265)
									tmp11 = false;
								}
								HX_STACK_LINE(1265)
								if ((tmp11)){
									HX_STACK_LINE(1265)
									::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1265)
									::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1265)
									HX_STACK_DO_THROW(tmp13);
								}
							}
							HX_STACK_LINE(1268)
							{
								HX_STACK_LINE(1269)
								::zpp_nape::geom::ZPP_GeomVert tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1269)
								{
									HX_STACK_LINE(1270)
									::zpp_nape::geom::ZPP_GeomVert tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1270)
									{
										HX_STACK_LINE(1270)
										Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1270)
										{
											HX_STACK_LINE(1270)
											bool tmp13 = (v != null());		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1270)
											bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1270)
											if ((tmp13)){
												HX_STACK_LINE(1270)
												tmp14 = v->zpp_disp;
											}
											else{
												HX_STACK_LINE(1270)
												tmp14 = false;
											}
											HX_STACK_LINE(1270)
											if ((tmp14)){
												HX_STACK_LINE(1270)
												::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(1270)
												::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1270)
												HX_STACK_DO_THROW(tmp16);
											}
											HX_STACK_LINE(1270)
											{
												HX_STACK_LINE(1270)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1270)
												bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(1270)
												if ((tmp15)){
													HX_STACK_LINE(1270)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1270)
											tmp12 = v->zpp_inner->x;
										}
										HX_STACK_LINE(1270)
										Float x = tmp12;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(1270)
										Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1270)
										{
											HX_STACK_LINE(1270)
											bool tmp14 = (v != null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1270)
											bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1270)
											if ((tmp14)){
												HX_STACK_LINE(1270)
												tmp15 = v->zpp_disp;
											}
											else{
												HX_STACK_LINE(1270)
												tmp15 = false;
											}
											HX_STACK_LINE(1270)
											if ((tmp15)){
												HX_STACK_LINE(1270)
												::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1270)
												::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1270)
												HX_STACK_DO_THROW(tmp17);
											}
											HX_STACK_LINE(1270)
											{
												HX_STACK_LINE(1270)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1270)
												bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1270)
												if ((tmp16)){
													HX_STACK_LINE(1270)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1270)
											tmp13 = v->zpp_inner->y;
										}
										HX_STACK_LINE(1270)
										Float y = tmp13;		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(1270)
										::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(1270)
										{
											HX_STACK_LINE(1270)
											::zpp_nape::geom::ZPP_GeomVert tmp14 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1270)
											bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1270)
											if ((tmp15)){
												HX_STACK_LINE(1270)
												::zpp_nape::geom::ZPP_GeomVert tmp16 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1270)
												ret1 = tmp16;
											}
											else{
												HX_STACK_LINE(1270)
												::zpp_nape::geom::ZPP_GeomVert tmp16 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1270)
												ret1 = tmp16;
												HX_STACK_LINE(1270)
												::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
												HX_STACK_LINE(1270)
												ret1->next = null();
											}
											HX_STACK_LINE(1270)
											ret1->forced = false;
										}
										HX_STACK_LINE(1270)
										{
											HX_STACK_LINE(1270)
											ret1->x = x;
											HX_STACK_LINE(1270)
											ret1->y = y;
											HX_STACK_LINE(1270)
											{
											}
										}
										HX_STACK_LINE(1270)
										tmp11 = ret1;
									}
									HX_STACK_LINE(1270)
									::zpp_nape::geom::ZPP_GeomVert obj = tmp11;		HX_STACK_VAR(obj,"obj");
									HX_STACK_LINE(1271)
									::zpp_nape::geom::ZPP_GeomVert tmp12 = ret->zpp_inner->vertices;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1271)
									bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1271)
									if ((tmp13)){
										HX_STACK_LINE(1271)
										::zpp_nape::geom::ZPP_GeomVert tmp14 = obj->next = obj;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1271)
										::zpp_nape::geom::ZPP_GeomVert tmp15 = obj->prev = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1271)
										ret->zpp_inner->vertices = tmp15;
									}
									else{
										HX_STACK_LINE(1273)
										::zpp_nape::geom::ZPP_GeomVert tmp14 = ret->zpp_inner->vertices;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1273)
										obj->prev = tmp14;
										HX_STACK_LINE(1274)
										::zpp_nape::geom::ZPP_GeomVert tmp15 = ret->zpp_inner->vertices;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1274)
										obj->next = tmp15->next;
										HX_STACK_LINE(1275)
										::zpp_nape::geom::ZPP_GeomVert tmp16 = ret->zpp_inner->vertices;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1275)
										tmp16->next->prev = obj;
										HX_STACK_LINE(1276)
										::zpp_nape::geom::ZPP_GeomVert tmp17 = ret->zpp_inner->vertices;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1276)
										tmp17->next = obj;
									}
									HX_STACK_LINE(1278)
									tmp10 = obj;
								}
								HX_STACK_LINE(1269)
								ret->zpp_inner->vertices = tmp10;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(1283)
					Dynamic tmp5 = vertices;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1283)
					bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::nape::geom::GeomPoly >());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1283)
					if ((tmp6)){
						HX_STACK_LINE(1284)
						::nape::geom::GeomPoly lv = vertices;		HX_STACK_VAR(lv,"lv");
						HX_STACK_LINE(1285)
						{
							HX_STACK_LINE(1287)
							bool tmp7 = (lv != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1287)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1287)
							if ((tmp7)){
								HX_STACK_LINE(1287)
								tmp8 = lv->zpp_disp;
							}
							else{
								HX_STACK_LINE(1287)
								tmp8 = false;
							}
							HX_STACK_LINE(1287)
							if ((tmp8)){
								HX_STACK_LINE(1287)
								::String tmp9 = HX_HCSTRING("Error: GeomPoly","\x96","\x19","\x47","\x5b");		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1287)
								::String tmp10 = (tmp9 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1287)
								HX_STACK_DO_THROW(tmp10);
							}
						}
						HX_STACK_LINE(1290)
						::zpp_nape::geom::ZPP_GeomVert tmp7 = lv->zpp_inner->vertices;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1290)
						::zpp_nape::geom::ZPP_GeomVert verts = tmp7;		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(1291)
						bool tmp8 = (verts != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1291)
						if ((tmp8)){
							HX_STACK_LINE(1292)
							::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
							HX_STACK_LINE(1293)
							while((true)){
								HX_STACK_LINE(1294)
								::nape::geom::Vec2 tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1294)
								{
									HX_STACK_LINE(1294)
									Float x = vite->x;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1294)
									Float y = vite->y;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1294)
									bool weak = false;		HX_STACK_VAR(weak,"weak");
									HX_STACK_LINE(1294)
									bool tmp10 = (x != x);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1294)
									bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1294)
									bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1294)
									if ((tmp11)){
										HX_STACK_LINE(1294)
										tmp12 = (y != y);
									}
									else{
										HX_STACK_LINE(1294)
										tmp12 = true;
									}
									HX_STACK_LINE(1294)
									if ((tmp12)){
										HX_STACK_LINE(1294)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
									}
									HX_STACK_LINE(1294)
									::nape::geom::Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1294)
									{
										HX_STACK_LINE(1294)
										::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1294)
										bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1294)
										if ((tmp14)){
											HX_STACK_LINE(1294)
											::nape::geom::Vec2 tmp15 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1294)
											ret1 = tmp15;
										}
										else{
											HX_STACK_LINE(1294)
											::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1294)
											ret1 = tmp15;
											HX_STACK_LINE(1294)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret1->zpp_pool;
											HX_STACK_LINE(1294)
											ret1->zpp_pool = null();
											HX_STACK_LINE(1294)
											ret1->zpp_disp = false;
											HX_STACK_LINE(1294)
											::nape::geom::Vec2 tmp16 = ret1;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1294)
											::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1294)
											bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1294)
											if ((tmp18)){
												HX_STACK_LINE(1294)
												::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
											}
										}
									}
									HX_STACK_LINE(1294)
									bool tmp13 = (ret1->zpp_inner == null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1294)
									if ((tmp13)){
										HX_STACK_LINE(1294)
										::zpp_nape::geom::ZPP_Vec2 tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1294)
										{
											HX_STACK_LINE(1294)
											bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
											HX_STACK_LINE(1294)
											::zpp_nape::geom::ZPP_Vec2 ret2;		HX_STACK_VAR(ret2,"ret2");
											HX_STACK_LINE(1294)
											{
												HX_STACK_LINE(1294)
												::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(1294)
												bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1294)
												if ((tmp16)){
													HX_STACK_LINE(1294)
													::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(1294)
													ret2 = tmp17;
												}
												else{
													HX_STACK_LINE(1294)
													::zpp_nape::geom::ZPP_Vec2 tmp17 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(1294)
													ret2 = tmp17;
													HX_STACK_LINE(1294)
													::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret2->next;
													HX_STACK_LINE(1294)
													ret2->next = null();
												}
												HX_STACK_LINE(1294)
												ret2->weak = false;
											}
											HX_STACK_LINE(1294)
											ret2->_immutable = immutable;
											HX_STACK_LINE(1294)
											{
												HX_STACK_LINE(1294)
												ret2->x = x;
												HX_STACK_LINE(1294)
												ret2->y = y;
												HX_STACK_LINE(1294)
												{
												}
											}
											HX_STACK_LINE(1294)
											tmp14 = ret2;
										}
										HX_STACK_LINE(1294)
										ret1->zpp_inner = tmp14;
										HX_STACK_LINE(1294)
										ret1->zpp_inner->outer = ret1;
									}
									else{
										HX_STACK_LINE(1294)
										{
											HX_STACK_LINE(1294)
											bool tmp14 = (ret1 != null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1294)
											bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1294)
											if ((tmp14)){
												HX_STACK_LINE(1294)
												tmp15 = ret1->zpp_disp;
											}
											else{
												HX_STACK_LINE(1294)
												tmp15 = false;
											}
											HX_STACK_LINE(1294)
											if ((tmp15)){
												HX_STACK_LINE(1294)
												::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1294)
												::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1294)
												HX_STACK_DO_THROW(tmp17);
											}
										}
										HX_STACK_LINE(1294)
										{
											HX_STACK_LINE(1294)
											::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1294)
											bool tmp14 = _this->_immutable;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1294)
											if ((tmp14)){
												HX_STACK_LINE(1294)
												HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
											}
											HX_STACK_LINE(1294)
											bool tmp15 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1294)
											if ((tmp15)){
												HX_STACK_LINE(1294)
												_this->_isimmutable();
											}
										}
										HX_STACK_LINE(1294)
										bool tmp14 = (x != x);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1294)
										bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1294)
										bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1294)
										if ((tmp15)){
											HX_STACK_LINE(1294)
											tmp16 = (y != y);
										}
										else{
											HX_STACK_LINE(1294)
											tmp16 = true;
										}
										HX_STACK_LINE(1294)
										if ((tmp16)){
											HX_STACK_LINE(1294)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 components cannot be NaN","\x85","\xba","\xd8","\xc1"));
										}
										HX_STACK_LINE(1294)
										Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1294)
										{
											HX_STACK_LINE(1294)
											{
												HX_STACK_LINE(1294)
												bool tmp18 = (ret1 != null());		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(1294)
												bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(1294)
												if ((tmp18)){
													HX_STACK_LINE(1294)
													tmp19 = ret1->zpp_disp;
												}
												else{
													HX_STACK_LINE(1294)
													tmp19 = false;
												}
												HX_STACK_LINE(1294)
												if ((tmp19)){
													HX_STACK_LINE(1294)
													::String tmp20 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(1294)
													::String tmp21 = (tmp20 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(1294)
													HX_STACK_DO_THROW(tmp21);
												}
											}
											HX_STACK_LINE(1294)
											{
												HX_STACK_LINE(1294)
												::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1294)
												bool tmp18 = (_this->_validate != null());		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(1294)
												if ((tmp18)){
													HX_STACK_LINE(1294)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1294)
											tmp17 = ret1->zpp_inner->x;
										}
										HX_STACK_LINE(1294)
										Float tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1294)
										bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1294)
										bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1294)
										if ((tmp19)){
											HX_STACK_LINE(1294)
											Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(1294)
											{
												HX_STACK_LINE(1294)
												{
													HX_STACK_LINE(1294)
													bool tmp22 = (ret1 != null());		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(1294)
													bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1294)
													bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(1294)
													bool tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1294)
													if ((tmp25)){
														HX_STACK_LINE(1294)
														tmp24 = ret1->zpp_disp;
													}
													else{
														HX_STACK_LINE(1294)
														tmp24 = false;
													}
													HX_STACK_LINE(1294)
													bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1294)
													if ((tmp26)){
														HX_STACK_LINE(1294)
														::String tmp27 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1294)
														::String tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1294)
														::String tmp29 = (tmp28 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1294)
														::String tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1294)
														::String tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1294)
														HX_STACK_DO_THROW(tmp31);
													}
												}
												HX_STACK_LINE(1294)
												{
													HX_STACK_LINE(1294)
													::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1294)
													bool tmp22 = (_this->_validate != null());		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(1294)
													bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1294)
													bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(1294)
													if ((tmp24)){
														HX_STACK_LINE(1294)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1294)
												Float tmp22 = ret1->zpp_inner->y;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(1294)
												tmp21 = tmp22;
											}
											HX_STACK_LINE(1294)
											Float tmp22 = y;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(1294)
											tmp20 = (tmp21 == tmp22);
										}
										else{
											HX_STACK_LINE(1294)
											tmp20 = false;
										}
										HX_STACK_LINE(1294)
										bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1294)
										if ((tmp21)){
											HX_STACK_LINE(1294)
											{
												HX_STACK_LINE(1294)
												ret1->zpp_inner->x = x;
												HX_STACK_LINE(1294)
												ret1->zpp_inner->y = y;
												HX_STACK_LINE(1294)
												{
												}
											}
											HX_STACK_LINE(1294)
											{
												HX_STACK_LINE(1294)
												::zpp_nape::geom::ZPP_Vec2 _this = ret1->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1294)
												bool tmp22 = (_this->_invalidate != null());		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(1294)
												if ((tmp22)){
													HX_STACK_LINE(1294)
													::zpp_nape::geom::ZPP_Vec2 tmp23 = _this;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1294)
													_this->_invalidate(tmp23);
												}
											}
										}
										HX_STACK_LINE(1294)
										ret1;
									}
									HX_STACK_LINE(1294)
									ret1->zpp_inner->weak = weak;
									HX_STACK_LINE(1294)
									tmp9 = ret1;
								}
								HX_STACK_LINE(1294)
								::nape::geom::Vec2 v = tmp9;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(1295)
								vite = vite->next;
								HX_STACK_LINE(1296)
								{
									HX_STACK_LINE(1297)
									::zpp_nape::geom::ZPP_GeomVert tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1297)
									{
										HX_STACK_LINE(1298)
										::zpp_nape::geom::ZPP_GeomVert tmp11;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1298)
										{
											HX_STACK_LINE(1298)
											Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(1298)
											{
												HX_STACK_LINE(1298)
												bool tmp13 = (v != null());		HX_STACK_VAR(tmp13,"tmp13");
												HX_STACK_LINE(1298)
												bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(1298)
												if ((tmp13)){
													HX_STACK_LINE(1298)
													tmp14 = v->zpp_disp;
												}
												else{
													HX_STACK_LINE(1298)
													tmp14 = false;
												}
												HX_STACK_LINE(1298)
												if ((tmp14)){
													HX_STACK_LINE(1298)
													::String tmp15 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(1298)
													::String tmp16 = (tmp15 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(1298)
													HX_STACK_DO_THROW(tmp16);
												}
												HX_STACK_LINE(1298)
												{
													HX_STACK_LINE(1298)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1298)
													bool tmp15 = (_this->_validate != null());		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(1298)
													if ((tmp15)){
														HX_STACK_LINE(1298)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1298)
												tmp12 = v->zpp_inner->x;
											}
											HX_STACK_LINE(1298)
											Float x = tmp12;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(1298)
											Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1298)
											{
												HX_STACK_LINE(1298)
												bool tmp14 = (v != null());		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(1298)
												bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(1298)
												if ((tmp14)){
													HX_STACK_LINE(1298)
													tmp15 = v->zpp_disp;
												}
												else{
													HX_STACK_LINE(1298)
													tmp15 = false;
												}
												HX_STACK_LINE(1298)
												if ((tmp15)){
													HX_STACK_LINE(1298)
													::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(1298)
													::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(1298)
													HX_STACK_DO_THROW(tmp17);
												}
												HX_STACK_LINE(1298)
												{
													HX_STACK_LINE(1298)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1298)
													bool tmp16 = (_this->_validate != null());		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(1298)
													if ((tmp16)){
														HX_STACK_LINE(1298)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1298)
												tmp13 = v->zpp_inner->y;
											}
											HX_STACK_LINE(1298)
											Float y = tmp13;		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(1298)
											::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(1298)
											{
												HX_STACK_LINE(1298)
												::zpp_nape::geom::ZPP_GeomVert tmp14 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(1298)
												bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(1298)
												if ((tmp15)){
													HX_STACK_LINE(1298)
													::zpp_nape::geom::ZPP_GeomVert tmp16 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(1298)
													ret1 = tmp16;
												}
												else{
													HX_STACK_LINE(1298)
													::zpp_nape::geom::ZPP_GeomVert tmp16 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(1298)
													ret1 = tmp16;
													HX_STACK_LINE(1298)
													::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(1298)
													ret1->next = null();
												}
												HX_STACK_LINE(1298)
												ret1->forced = false;
											}
											HX_STACK_LINE(1298)
											{
												HX_STACK_LINE(1298)
												ret1->x = x;
												HX_STACK_LINE(1298)
												ret1->y = y;
												HX_STACK_LINE(1298)
												{
												}
											}
											HX_STACK_LINE(1298)
											tmp11 = ret1;
										}
										HX_STACK_LINE(1298)
										::zpp_nape::geom::ZPP_GeomVert obj = tmp11;		HX_STACK_VAR(obj,"obj");
										HX_STACK_LINE(1299)
										::zpp_nape::geom::ZPP_GeomVert tmp12 = ret->zpp_inner->vertices;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1299)
										bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1299)
										if ((tmp13)){
											HX_STACK_LINE(1299)
											::zpp_nape::geom::ZPP_GeomVert tmp14 = obj->next = obj;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1299)
											::zpp_nape::geom::ZPP_GeomVert tmp15 = obj->prev = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1299)
											ret->zpp_inner->vertices = tmp15;
										}
										else{
											HX_STACK_LINE(1301)
											::zpp_nape::geom::ZPP_GeomVert tmp14 = ret->zpp_inner->vertices;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1301)
											obj->prev = tmp14;
											HX_STACK_LINE(1302)
											::zpp_nape::geom::ZPP_GeomVert tmp15 = ret->zpp_inner->vertices;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1302)
											obj->next = tmp15->next;
											HX_STACK_LINE(1303)
											::zpp_nape::geom::ZPP_GeomVert tmp16 = ret->zpp_inner->vertices;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1303)
											tmp16->next->prev = obj;
											HX_STACK_LINE(1304)
											::zpp_nape::geom::ZPP_GeomVert tmp17 = ret->zpp_inner->vertices;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1304)
											tmp17->next = obj;
										}
										HX_STACK_LINE(1306)
										tmp10 = obj;
									}
									HX_STACK_LINE(1297)
									ret->zpp_inner->vertices = tmp10;
								}
								HX_STACK_LINE(1309)
								{
									HX_STACK_LINE(1309)
									{
										HX_STACK_LINE(1309)
										bool tmp10 = (v != null());		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(1309)
										bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1309)
										if ((tmp10)){
											HX_STACK_LINE(1309)
											tmp11 = v->zpp_disp;
										}
										else{
											HX_STACK_LINE(1309)
											tmp11 = false;
										}
										HX_STACK_LINE(1309)
										if ((tmp11)){
											HX_STACK_LINE(1309)
											::String tmp12 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(1309)
											::String tmp13 = (tmp12 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1309)
											HX_STACK_DO_THROW(tmp13);
										}
									}
									HX_STACK_LINE(1309)
									{
										HX_STACK_LINE(1309)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1309)
										bool tmp10 = _this->_immutable;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(1309)
										if ((tmp10)){
											HX_STACK_LINE(1309)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
										}
										HX_STACK_LINE(1309)
										bool tmp11 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1309)
										if ((tmp11)){
											HX_STACK_LINE(1309)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(1309)
									bool tmp10 = v->zpp_inner->_inuse;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1309)
									if ((tmp10)){
										HX_STACK_LINE(1309)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
									}
									HX_STACK_LINE(1309)
									::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(1309)
									v->zpp_inner->outer = null();
									HX_STACK_LINE(1309)
									v->zpp_inner = null();
									HX_STACK_LINE(1309)
									{
										HX_STACK_LINE(1309)
										::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1309)
										o->zpp_pool = null();
										HX_STACK_LINE(1309)
										::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1309)
										bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1309)
										if ((tmp12)){
											HX_STACK_LINE(1309)
											::nape::geom::Vec2 tmp13 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(1309)
											tmp13->zpp_pool = o;
										}
										else{
											HX_STACK_LINE(1309)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(1309)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
										HX_STACK_LINE(1309)
										o->zpp_disp = true;
									}
									HX_STACK_LINE(1309)
									{
										HX_STACK_LINE(1309)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1309)
										{
											HX_STACK_LINE(1309)
											bool tmp11 = (o->outer != null());		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(1309)
											if ((tmp11)){
												HX_STACK_LINE(1309)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(1309)
												o->outer = null();
											}
											HX_STACK_LINE(1309)
											o->_isimmutable = null();
											HX_STACK_LINE(1309)
											o->_validate = null();
											HX_STACK_LINE(1309)
											o->_invalidate = null();
										}
										HX_STACK_LINE(1309)
										::zpp_nape::geom::ZPP_Vec2 tmp11 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1309)
										o->next = tmp11;
										HX_STACK_LINE(1309)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
								HX_STACK_LINE(1311)
								bool tmp10 = (vite != verts);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1311)
								bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1293)
								if ((tmp11)){
									HX_STACK_LINE(1293)
									break;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(1316)
						HX_STACK_DO_THROW(HX_HCSTRING("Error: Invalid type for polygon object, should be Array<Vec2>, Vec2List, GeomPoly or for flash10+ flash.Vector<Vec2>","\xbb","\x80","\x45","\x90"));
					}
				}
			}
		}
		HX_STACK_LINE(1320)
		ret->skipForward((int)1);
		HX_STACK_LINE(1321)
		{
			HX_STACK_LINE(1322)
			Dynamic tmp1 = vertices;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1322)
			bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1322)
			if ((tmp2)){
				HX_STACK_LINE(1323)
				Array< ::Dynamic > lv = vertices;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(1324)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1325)
				while((true)){
					HX_STACK_LINE(1325)
					bool tmp3 = (i < lv->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1325)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1325)
					if ((tmp4)){
						HX_STACK_LINE(1325)
						break;
					}
					HX_STACK_LINE(1326)
					::nape::geom::Vec2 tmp5 = lv->__get(i).StaticCast< ::nape::geom::Vec2 >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1326)
					::nape::geom::Vec2 cur = tmp5;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(1327)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1327)
					{
						HX_STACK_LINE(1328)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1329)
						tmp7 = cur->zpp_inner->weak;
						HX_STACK_LINE(1328)
						if ((tmp7)){
							HX_STACK_LINE(1331)
							{
								HX_STACK_LINE(1331)
								{
									HX_STACK_LINE(1331)
									bool tmp8 = (cur != null());		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(1331)
									bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1331)
									if ((tmp8)){
										HX_STACK_LINE(1331)
										tmp9 = cur->zpp_disp;
									}
									else{
										HX_STACK_LINE(1331)
										tmp9 = false;
									}
									HX_STACK_LINE(1331)
									if ((tmp9)){
										HX_STACK_LINE(1331)
										::String tmp10 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(1331)
										::String tmp11 = (tmp10 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1331)
										HX_STACK_DO_THROW(tmp11);
									}
								}
								HX_STACK_LINE(1331)
								{
									HX_STACK_LINE(1331)
									::zpp_nape::geom::ZPP_Vec2 _this = cur->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1331)
									bool tmp8 = _this->_immutable;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(1331)
									if ((tmp8)){
										HX_STACK_LINE(1331)
										HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
									}
									HX_STACK_LINE(1331)
									bool tmp9 = (_this->_isimmutable != null());		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1331)
									if ((tmp9)){
										HX_STACK_LINE(1331)
										_this->_isimmutable();
									}
								}
								HX_STACK_LINE(1331)
								bool tmp8 = cur->zpp_inner->_inuse;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1331)
								if ((tmp8)){
									HX_STACK_LINE(1331)
									HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
								}
								HX_STACK_LINE(1331)
								::zpp_nape::geom::ZPP_Vec2 inner = cur->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(1331)
								cur->zpp_inner->outer = null();
								HX_STACK_LINE(1331)
								cur->zpp_inner = null();
								HX_STACK_LINE(1331)
								{
									HX_STACK_LINE(1331)
									::nape::geom::Vec2 o = cur;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1331)
									o->zpp_pool = null();
									HX_STACK_LINE(1331)
									::nape::geom::Vec2 tmp9 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1331)
									bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1331)
									if ((tmp10)){
										HX_STACK_LINE(1331)
										::nape::geom::Vec2 tmp11 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1331)
										tmp11->zpp_pool = o;
									}
									else{
										HX_STACK_LINE(1331)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(1331)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
									HX_STACK_LINE(1331)
									o->zpp_disp = true;
								}
								HX_STACK_LINE(1331)
								{
									HX_STACK_LINE(1331)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1331)
									{
										HX_STACK_LINE(1331)
										bool tmp9 = (o->outer != null());		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(1331)
										if ((tmp9)){
											HX_STACK_LINE(1331)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(1331)
											o->outer = null();
										}
										HX_STACK_LINE(1331)
										o->_isimmutable = null();
										HX_STACK_LINE(1331)
										o->_validate = null();
										HX_STACK_LINE(1331)
										o->_invalidate = null();
									}
									HX_STACK_LINE(1331)
									::zpp_nape::geom::ZPP_Vec2 tmp9 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1331)
									o->next = tmp9;
									HX_STACK_LINE(1331)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(1332)
							tmp6 = true;
						}
						else{
							HX_STACK_LINE(1335)
							tmp6 = false;
						}
					}
					HX_STACK_LINE(1327)
					if ((tmp6)){
						HX_STACK_LINE(1338)
						int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1338)
						lv->splice(tmp7,(int)1);
						HX_STACK_LINE(1339)
						continue;
					}
					HX_STACK_LINE(1341)
					(i)++;
				}
			}
			else{
				HX_STACK_LINE(1369)
				Dynamic tmp3 = vertices;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1369)
				bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::nape::geom::Vec2List >());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1369)
				if ((tmp4)){
					HX_STACK_LINE(1370)
					::nape::geom::Vec2List lv = vertices;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(1371)
					Dynamic tmp5 = lv->zpp_inner->_validate;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1371)
					bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1371)
					if ((tmp6)){
						HX_STACK_LINE(1371)
						lv->zpp_inner->_validate();
					}
					HX_STACK_LINE(1372)
					::zpp_nape::util::ZNPList_ZPP_Vec2 tmp7 = lv->zpp_inner->inner;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1372)
					::zpp_nape::util::ZNPList_ZPP_Vec2 ins = tmp7;		HX_STACK_VAR(ins,"ins");
					HX_STACK_LINE(1373)
					::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(1374)
					::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = ins->head;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(1375)
					while((true)){
						HX_STACK_LINE(1375)
						bool tmp8 = (cur != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1375)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1375)
						if ((tmp9)){
							HX_STACK_LINE(1375)
							break;
						}
						HX_STACK_LINE(1376)
						::zpp_nape::geom::ZPP_Vec2 x = cur->elt;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1377)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1377)
						{
							HX_STACK_LINE(1378)
							::zpp_nape::geom::ZPP_Vec2 tmp11 = x->outer->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1378)
							tmp10 = tmp11->weak;
						}
						HX_STACK_LINE(1377)
						if ((tmp10)){
							HX_STACK_LINE(1380)
							::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp11 = pre;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1380)
							::zpp_nape::util::ZNPNode_ZPP_Vec2 tmp12 = ins->erase(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1380)
							cur = tmp12;
							HX_STACK_LINE(1381)
							{
								HX_STACK_LINE(1382)
								bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1382)
								{
									HX_STACK_LINE(1383)
									::zpp_nape::geom::ZPP_Vec2 tmp14 = x->outer->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1383)
									tmp13 = tmp14->weak;
								}
								HX_STACK_LINE(1382)
								if ((tmp13)){
									HX_STACK_LINE(1385)
									{
										HX_STACK_LINE(1385)
										::nape::geom::Vec2 _this = x->outer;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1385)
										{
											HX_STACK_LINE(1385)
											bool tmp14 = (_this != null());		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1385)
											bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1385)
											if ((tmp14)){
												HX_STACK_LINE(1385)
												tmp15 = _this->zpp_disp;
											}
											else{
												HX_STACK_LINE(1385)
												tmp15 = false;
											}
											HX_STACK_LINE(1385)
											if ((tmp15)){
												HX_STACK_LINE(1385)
												::String tmp16 = HX_HCSTRING("Error: Vec2","\xcc","\x3a","\xb6","\x74");		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(1385)
												::String tmp17 = (tmp16 + HX_HCSTRING(" has been disposed and cannot be used!","\x2e","\x07","\xae","\x74"));		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1385)
												HX_STACK_DO_THROW(tmp17);
											}
										}
										HX_STACK_LINE(1385)
										{
											HX_STACK_LINE(1385)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1385)
											bool tmp14 = _this1->_immutable;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1385)
											if ((tmp14)){
												HX_STACK_LINE(1385)
												HX_STACK_DO_THROW(HX_HCSTRING("Error: Vec2 is immutable","\x60","\xee","\x1f","\xbc"));
											}
											HX_STACK_LINE(1385)
											bool tmp15 = (_this1->_isimmutable != null());		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1385)
											if ((tmp15)){
												HX_STACK_LINE(1385)
												_this1->_isimmutable();
											}
										}
										HX_STACK_LINE(1385)
										bool tmp14 = _this->zpp_inner->_inuse;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1385)
										if ((tmp14)){
											HX_STACK_LINE(1385)
											HX_STACK_DO_THROW(HX_HCSTRING("Error: This Vec2 is not disposable","\xb5","\xd1","\xd1","\xd8"));
										}
										HX_STACK_LINE(1385)
										::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
										HX_STACK_LINE(1385)
										_this->zpp_inner->outer = null();
										HX_STACK_LINE(1385)
										_this->zpp_inner = null();
										HX_STACK_LINE(1385)
										{
											HX_STACK_LINE(1385)
											::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1385)
											o->zpp_pool = null();
											HX_STACK_LINE(1385)
											::nape::geom::Vec2 tmp15 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1385)
											bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1385)
											if ((tmp16)){
												HX_STACK_LINE(1385)
												::nape::geom::Vec2 tmp17 = ::zpp_nape::util::ZPP_PubPool_obj::nextVec2;		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(1385)
												tmp17->zpp_pool = o;
											}
											else{
												HX_STACK_LINE(1385)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
											}
											HX_STACK_LINE(1385)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
											HX_STACK_LINE(1385)
											o->zpp_disp = true;
										}
										HX_STACK_LINE(1385)
										{
											HX_STACK_LINE(1385)
											::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1385)
											{
												HX_STACK_LINE(1385)
												bool tmp15 = (o->outer != null());		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(1385)
												if ((tmp15)){
													HX_STACK_LINE(1385)
													o->outer->zpp_inner = null();
													HX_STACK_LINE(1385)
													o->outer = null();
												}
												HX_STACK_LINE(1385)
												o->_isimmutable = null();
												HX_STACK_LINE(1385)
												o->_validate = null();
												HX_STACK_LINE(1385)
												o->_invalidate = null();
											}
											HX_STACK_LINE(1385)
											::zpp_nape::geom::ZPP_Vec2 tmp15 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1385)
											o->next = tmp15;
											HX_STACK_LINE(1385)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
										}
									}
									HX_STACK_LINE(1386)
									true;
								}
								else{
									HX_STACK_LINE(1389)
									false;
								}
							}
						}
						else{
							HX_STACK_LINE(1394)
							pre = cur;
							HX_STACK_LINE(1395)
							cur = cur->next;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(1401)
	::nape::geom::GeomPoly tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1401)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GeomPoly_obj,get,return )


GeomPoly_obj::GeomPoly_obj()
{
}

void GeomPoly_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GeomPoly);
	HX_MARK_MEMBER_NAME(zpp_pool,"zpp_pool");
	HX_MARK_MEMBER_NAME(zpp_disp,"zpp_disp");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void GeomPoly_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_pool,"zpp_pool");
	HX_VISIT_MEMBER_NAME(zpp_disp,"zpp_disp");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic GeomPoly_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"cut") ) { return cut_dyn(); }
		if (HX_FIELD_EQ(inName,"top") ) { return top_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"area") ) { return area_dyn(); }
		if (HX_FIELD_EQ(inName,"left") ) { return left_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"right") ) { return right_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds_dyn(); }
		if (HX_FIELD_EQ(inName,"bottom") ) { return bottom_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current_dyn(); }
		if (HX_FIELD_EQ(inName,"unshift") ) { return unshift_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"winding") ) { return winding_dyn(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"zpp_disp") ) { return zpp_disp; }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"isConvex") ) { return isConvex_dyn(); }
		if (HX_FIELD_EQ(inName,"isSimple") ) { return isSimple_dyn(); }
		if (HX_FIELD_EQ(inName,"simplify") ) { return simplify_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isMonotone") ) { return isMonotone_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"skipForward") ) { return skipForward_dyn(); }
		if (HX_FIELD_EQ(inName,"isClockwise") ) { return isClockwise_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isDegenerate") ) { return isDegenerate_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"skipBackwards") ) { return skipBackwards_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"forwardIterator") ) { return forwardIterator_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"backwardsIterator") ) { return backwardsIterator_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"simpleDecomposition") ) { return simpleDecomposition_dyn(); }
		if (HX_FIELD_EQ(inName,"convexDecomposition") ) { return convexDecomposition_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"monotoneDecomposition") ) { return monotoneDecomposition_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"triangularDecomposition") ) { return triangularDecomposition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool GeomPoly_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
	}
	return false;
}

Dynamic GeomPoly_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::nape::geom::GeomPoly >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zpp_disp") ) { zpp_disp=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::geom::ZPP_GeomPoly >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GeomPoly_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void GeomPoly_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"));
	outFields->push(HX_HCSTRING("zpp_disp","\x07","\x44","\xe1","\x30"));
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::geom::GeomPoly*/ ,(int)offsetof(GeomPoly_obj,zpp_pool),HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38")},
	{hx::fsBool,(int)offsetof(GeomPoly_obj,zpp_disp),HX_HCSTRING("zpp_disp","\x07","\x44","\xe1","\x30")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_GeomPoly*/ ,(int)offsetof(GeomPoly_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_pool","\x81","\x5d","\xd4","\x38"),
	HX_HCSTRING("zpp_disp","\x07","\x44","\xe1","\x30"),
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("forwardIterator","\xd3","\xb4","\x25","\xae"),
	HX_HCSTRING("backwardsIterator","\x3e","\x41","\x3a","\x9c"),
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"),
	HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"),
	HX_HCSTRING("skipForward","\x06","\x51","\x3c","\x81"),
	HX_HCSTRING("skipBackwards","\xb1","\x0c","\xc4","\x7c"),
	HX_HCSTRING("erase","\xe6","\xe8","\x1c","\x73"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("area","\x8d","\x8b","\x74","\x40"),
	HX_HCSTRING("winding","\x1a","\x49","\x70","\xe8"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("isClockwise","\xa8","\x34","\x20","\x1b"),
	HX_HCSTRING("isConvex","\xf1","\x12","\x48","\x20"),
	HX_HCSTRING("isSimple","\xbc","\x9f","\xe8","\x10"),
	HX_HCSTRING("isMonotone","\x1f","\x96","\xb5","\x0e"),
	HX_HCSTRING("isDegenerate","\x40","\xc8","\x16","\x02"),
	HX_HCSTRING("simplify","\x09","\x57","\x71","\x19"),
	HX_HCSTRING("simpleDecomposition","\x77","\x24","\x02","\xa9"),
	HX_HCSTRING("monotoneDecomposition","\xb4","\x32","\x28","\x81"),
	HX_HCSTRING("convexDecomposition","\x22","\x14","\x99","\x54"),
	HX_HCSTRING("triangularDecomposition","\x72","\xac","\x23","\x8f"),
	HX_HCSTRING("inflate","\x87","\x9c","\x1b","\x0c"),
	HX_HCSTRING("cut","\x82","\x85","\x4b","\x00"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("top","\x95","\x66","\x58","\x00"),
	HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"),
	HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),
	HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GeomPoly_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GeomPoly_obj::__mClass,"__mClass");
};

#endif

hx::Class GeomPoly_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

void GeomPoly_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.geom.GeomPoly","\x34","\xd1","\xc4","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GeomPoly_obj::__GetStatic;
	__mClass->mSetStaticField = &GeomPoly_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GeomPoly_obj >;
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
