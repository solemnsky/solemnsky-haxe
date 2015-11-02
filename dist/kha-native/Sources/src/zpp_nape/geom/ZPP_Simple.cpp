#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Simple
#include <zpp_nape/geom/ZPP_Simple.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleEvent
#include <zpp_nape/geom/ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSeg
#include <zpp_nape/geom/ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSweep
#include <zpp_nape/geom/ZPP_SimpleSweep.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_FastHash2_Hashable2_Boolfalse
#include <zpp_nape/util/FastHash2_Hashable2_Boolfalse.h>
#endif
#ifndef INCLUDED_zpp_nape_util_Hashable2_Boolfalse
#include <zpp_nape/util/Hashable2_Boolfalse.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_GeomVert
#include <zpp_nape/util/ZNPList_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SimpleEvent
#include <zpp_nape/util/ZNPList_ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SimpleVert
#include <zpp_nape/util/ZNPList_ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleEvent
#include <zpp_nape/util/ZNPNode_ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleVert
#include <zpp_nape/util/ZNPNode_ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleEvent
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleSeg
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleVert
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleVert.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Simple_obj::__construct()
{
	return null();
}

//ZPP_Simple_obj::~ZPP_Simple_obj() { }

Dynamic ZPP_Simple_obj::__CreateEmpty() { return  new ZPP_Simple_obj; }
hx::ObjectPtr< ZPP_Simple_obj > ZPP_Simple_obj::__new()
{  hx::ObjectPtr< ZPP_Simple_obj > _result_ = new ZPP_Simple_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Simple_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Simple_obj > _result_ = new ZPP_Simple_obj();
	_result_->__construct();
	return _result_;}

::zpp_nape::geom::ZPP_SimpleSweep ZPP_Simple_obj::sweep;

::zpp_nape::util::FastHash2_Hashable2_Boolfalse ZPP_Simple_obj::inthash;

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Simple_obj::vertices;

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Simple_obj::queue;

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Simple_obj::ints;

::zpp_nape::util::ZNPList_ZPP_GeomVert ZPP_Simple_obj::decompose( ::zpp_nape::geom::ZPP_GeomVert poly,::zpp_nape::util::ZNPList_ZPP_GeomVert rets){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Simple","decompose",0xd7fa4fab,"zpp_nape.geom.ZPP_Simple.decompose","zpp_nape/geom/Simple.hx",793,0x62f156db)
	HX_STACK_ARG(poly,"poly")
	HX_STACK_ARG(rets,"rets")
	HX_STACK_LINE(794)
	::zpp_nape::geom::ZPP_SimpleSweep tmp = ::zpp_nape::geom::ZPP_Simple_obj::sweep;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(794)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(794)
	if ((tmp1)){
		HX_STACK_LINE(795)
		::zpp_nape::geom::ZPP_SimpleSweep tmp2 = ::zpp_nape::geom::ZPP_SimpleSweep_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(795)
		::zpp_nape::geom::ZPP_Simple_obj::sweep = tmp2;
		HX_STACK_LINE(796)
		::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp3 = ::zpp_nape::util::FastHash2_Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(796)
		::zpp_nape::geom::ZPP_Simple_obj::inthash = tmp3;
	}
	HX_STACK_LINE(798)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp2 = ::zpp_nape::geom::ZPP_Simple_obj::vertices;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(798)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(798)
	if ((tmp3)){
		HX_STACK_LINE(799)
		{
			HX_STACK_LINE(800)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp4 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(800)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(800)
			if ((tmp5)){
				HX_STACK_LINE(801)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp6 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(801)
				::zpp_nape::geom::ZPP_Simple_obj::vertices = tmp6;
			}
			else{
				HX_STACK_LINE(807)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp6 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(807)
				::zpp_nape::geom::ZPP_Simple_obj::vertices = tmp6;
				HX_STACK_LINE(808)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp7 = ::zpp_nape::geom::ZPP_Simple_obj::vertices;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(808)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = tmp7->next;
				HX_STACK_LINE(809)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp8 = ::zpp_nape::geom::ZPP_Simple_obj::vertices;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(809)
				tmp8->next = null();
			}
			HX_STACK_LINE(814)
			Dynamic();
		}
		HX_STACK_LINE(816)
		Dynamic tmp4 = ::zpp_nape::geom::ZPP_SimpleVert_obj::less_xy_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(816)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp5 = ::zpp_nape::geom::ZPP_Simple_obj::vertices;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(816)
		tmp5->lt = tmp4;
		HX_STACK_LINE(817)
		Dynamic tmp6 = ::zpp_nape::geom::ZPP_SimpleVert_obj::swap_nodes_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(817)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp7 = ::zpp_nape::geom::ZPP_Simple_obj::vertices;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(817)
		tmp7->swapped = tmp6;
	}
	HX_STACK_LINE(819)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp4 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(819)
	bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(819)
	if ((tmp5)){
		HX_STACK_LINE(820)
		{
			HX_STACK_LINE(821)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp6 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(821)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(821)
			if ((tmp7)){
				HX_STACK_LINE(822)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp8 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(822)
				::zpp_nape::geom::ZPP_Simple_obj::queue = tmp8;
			}
			else{
				HX_STACK_LINE(828)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp8 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(828)
				::zpp_nape::geom::ZPP_Simple_obj::queue = tmp8;
				HX_STACK_LINE(829)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp9 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(829)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = tmp9->next;
				HX_STACK_LINE(830)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp10 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(830)
				tmp10->next = null();
			}
			HX_STACK_LINE(835)
			Dynamic();
		}
		HX_STACK_LINE(837)
		Dynamic tmp6 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::less_xy_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(837)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp7 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(837)
		tmp7->lt = tmp6;
		HX_STACK_LINE(838)
		Dynamic tmp8 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::swap_nodes_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(838)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp9 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(838)
		tmp9->swapped = tmp8;
	}
	HX_STACK_LINE(840)
	::zpp_nape::geom::ZPP_SimpleVert fst = null();		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(841)
	::zpp_nape::geom::ZPP_SimpleVert pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(842)
	{
		HX_STACK_LINE(843)
		::zpp_nape::geom::ZPP_GeomVert F = poly;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(844)
		::zpp_nape::geom::ZPP_GeomVert L = poly;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(845)
		bool tmp6 = (F != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(845)
		if ((tmp6)){
			HX_STACK_LINE(846)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(847)
			while((true)){
				HX_STACK_LINE(848)
				::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(850)
				{
					HX_STACK_LINE(851)
					::zpp_nape::geom::ZPP_SimpleVert tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(851)
					{
						HX_STACK_LINE(851)
						::zpp_nape::geom::ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(851)
						{
							HX_STACK_LINE(851)
							::zpp_nape::geom::ZPP_SimpleVert tmp8 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(851)
							bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(851)
							if ((tmp9)){
								HX_STACK_LINE(851)
								::zpp_nape::geom::ZPP_SimpleVert tmp10 = ::zpp_nape::geom::ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(851)
								ret = tmp10;
							}
							else{
								HX_STACK_LINE(851)
								::zpp_nape::geom::ZPP_SimpleVert tmp10 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(851)
								ret = tmp10;
								HX_STACK_LINE(851)
								::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = ret->next;
								HX_STACK_LINE(851)
								ret->next = null();
							}
							HX_STACK_LINE(851)
							Dynamic();
						}
						HX_STACK_LINE(851)
						{
							HX_STACK_LINE(851)
							ret->x = v->x;
							HX_STACK_LINE(851)
							ret->y = v->y;
							HX_STACK_LINE(851)
							{
							}
						}
						HX_STACK_LINE(851)
						tmp7 = ret;
					}
					HX_STACK_LINE(851)
					::zpp_nape::geom::ZPP_SimpleVert vert = tmp7;		HX_STACK_VAR(vert,"vert");
					HX_STACK_LINE(852)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(852)
					{
						HX_STACK_LINE(853)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp9 = ::zpp_nape::geom::ZPP_Simple_obj::vertices;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(853)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = tmp9->parent;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(854)
						while((true)){
							HX_STACK_LINE(854)
							bool tmp10 = (cur != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(854)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(854)
							if ((tmp11)){
								HX_STACK_LINE(854)
								break;
							}
							HX_STACK_LINE(855)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp12 = ::zpp_nape::geom::ZPP_Simple_obj::vertices;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(855)
							::zpp_nape::geom::ZPP_SimpleVert tmp13 = vert;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(855)
							::zpp_nape::geom::ZPP_SimpleVert tmp14 = cur->data;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(855)
							bool tmp15 = tmp12->lt(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(855)
							if ((tmp15)){
								HX_STACK_LINE(855)
								cur = cur->prev;
							}
							else{
								HX_STACK_LINE(856)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp16 = ::zpp_nape::geom::ZPP_Simple_obj::vertices;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(856)
								::zpp_nape::geom::ZPP_SimpleVert tmp17 = cur->data;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(856)
								::zpp_nape::geom::ZPP_SimpleVert tmp18 = vert;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(856)
								bool tmp19 = tmp16->lt(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(856)
								if ((tmp19)){
									HX_STACK_LINE(856)
									cur = cur->next;
								}
								else{
									HX_STACK_LINE(857)
									break;
								}
							}
						}
						HX_STACK_LINE(859)
						tmp8 = cur;
					}
					HX_STACK_LINE(852)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert vx = tmp8;		HX_STACK_VAR(vx,"vx");
					HX_STACK_LINE(861)
					bool tmp9 = (vx != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(861)
					if ((tmp9)){
						HX_STACK_LINE(862)
						{
							HX_STACK_LINE(863)
							::zpp_nape::geom::ZPP_SimpleVert o = vert;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(872)
							{
								HX_STACK_LINE(872)
								o->links->clear();
								HX_STACK_LINE(872)
								o->node = null();
								HX_STACK_LINE(872)
								o->forced = false;
							}
							HX_STACK_LINE(873)
							::zpp_nape::geom::ZPP_SimpleVert tmp10 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(873)
							o->next = tmp10;
							HX_STACK_LINE(874)
							::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
						}
						HX_STACK_LINE(879)
						vert = vx->data;
					}
					else{
						HX_STACK_LINE(881)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp10 = ::zpp_nape::geom::ZPP_Simple_obj::vertices;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(881)
						::zpp_nape::geom::ZPP_SimpleVert tmp11 = vert;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(881)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp12 = tmp10->insert(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(881)
						vert->node = tmp12;
					}
					HX_STACK_LINE(882)
					bool tmp10 = (pre != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(882)
					if ((tmp10)){
						HX_STACK_LINE(883)
						::zpp_nape::geom::ZPP_SimpleEvent tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(883)
						{
							HX_STACK_LINE(883)
							::zpp_nape::geom::ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(883)
							{
								HX_STACK_LINE(883)
								::zpp_nape::geom::ZPP_SimpleEvent tmp12 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(883)
								bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(883)
								if ((tmp13)){
									HX_STACK_LINE(883)
									::zpp_nape::geom::ZPP_SimpleEvent tmp14 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(883)
									ret = tmp14;
								}
								else{
									HX_STACK_LINE(883)
									::zpp_nape::geom::ZPP_SimpleEvent tmp14 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(883)
									ret = tmp14;
									HX_STACK_LINE(883)
									::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = ret->next;
									HX_STACK_LINE(883)
									ret->next = null();
								}
								HX_STACK_LINE(883)
								Dynamic();
							}
							HX_STACK_LINE(883)
							ret->vertex = pre;
							HX_STACK_LINE(883)
							tmp11 = ret;
						}
						HX_STACK_LINE(883)
						::zpp_nape::geom::ZPP_SimpleEvent e1 = tmp11;		HX_STACK_VAR(e1,"e1");
						HX_STACK_LINE(884)
						::zpp_nape::geom::ZPP_SimpleEvent tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(884)
						{
							HX_STACK_LINE(884)
							::zpp_nape::geom::ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(884)
							{
								HX_STACK_LINE(884)
								::zpp_nape::geom::ZPP_SimpleEvent tmp13 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(884)
								bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(884)
								if ((tmp14)){
									HX_STACK_LINE(884)
									::zpp_nape::geom::ZPP_SimpleEvent tmp15 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(884)
									ret = tmp15;
								}
								else{
									HX_STACK_LINE(884)
									::zpp_nape::geom::ZPP_SimpleEvent tmp15 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(884)
									ret = tmp15;
									HX_STACK_LINE(884)
									::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = ret->next;
									HX_STACK_LINE(884)
									ret->next = null();
								}
								HX_STACK_LINE(884)
								Dynamic();
							}
							HX_STACK_LINE(884)
							ret->vertex = vert;
							HX_STACK_LINE(884)
							tmp12 = ret;
						}
						HX_STACK_LINE(884)
						::zpp_nape::geom::ZPP_SimpleEvent e2 = tmp12;		HX_STACK_VAR(e2,"e2");
						HX_STACK_LINE(885)
						::zpp_nape::geom::ZPP_SimpleSeg seg;		HX_STACK_VAR(seg,"seg");
						HX_STACK_LINE(886)
						::zpp_nape::geom::ZPP_SimpleEvent tmp13 = e1;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(886)
						::zpp_nape::geom::ZPP_SimpleEvent tmp14 = e2;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(886)
						bool tmp15 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::less_xy(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(886)
						if ((tmp15)){
							HX_STACK_LINE(887)
							e1->type = (int)1;
							HX_STACK_LINE(888)
							e2->type = (int)2;
							HX_STACK_LINE(889)
							::zpp_nape::geom::ZPP_SimpleVert tmp16 = pre;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(889)
							::zpp_nape::geom::ZPP_SimpleVert tmp17 = vert;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(889)
							::zpp_nape::geom::ZPP_SimpleSeg tmp18 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::get(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(889)
							seg = tmp18;
						}
						else{
							HX_STACK_LINE(892)
							e1->type = (int)2;
							HX_STACK_LINE(893)
							e2->type = (int)1;
							HX_STACK_LINE(894)
							::zpp_nape::geom::ZPP_SimpleVert tmp16 = vert;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(894)
							::zpp_nape::geom::ZPP_SimpleVert tmp17 = pre;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(894)
							::zpp_nape::geom::ZPP_SimpleSeg tmp18 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::get(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(894)
							seg = tmp18;
						}
						HX_STACK_LINE(896)
						::zpp_nape::geom::ZPP_SimpleSeg tmp16 = e2->segment = seg;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(896)
						e1->segment = tmp16;
						HX_STACK_LINE(897)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp17 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(897)
						::zpp_nape::geom::ZPP_SimpleEvent tmp18 = e1;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(897)
						tmp17->insert(tmp18);
						HX_STACK_LINE(898)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp19 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(898)
						::zpp_nape::geom::ZPP_SimpleEvent tmp20 = e2;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(898)
						tmp19->insert(tmp20);
						HX_STACK_LINE(899)
						::zpp_nape::geom::ZPP_SimpleVert tmp21 = vert;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(899)
						pre->links->insert(tmp21);
						HX_STACK_LINE(900)
						::zpp_nape::geom::ZPP_SimpleVert tmp22 = pre;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(900)
						vert->links->insert(tmp22);
					}
					HX_STACK_LINE(902)
					pre = vert;
					HX_STACK_LINE(903)
					bool tmp11 = (fst == null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(903)
					if ((tmp11)){
						HX_STACK_LINE(903)
						fst = vert;
					}
				}
				HX_STACK_LINE(906)
				nite = nite->next;
				HX_STACK_LINE(908)
				bool tmp7 = (nite != L);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(908)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(847)
				if ((tmp8)){
					HX_STACK_LINE(847)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(911)
	{
		HX_STACK_LINE(912)
		::zpp_nape::geom::ZPP_SimpleEvent tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(912)
		{
			HX_STACK_LINE(912)
			::zpp_nape::geom::ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(912)
			{
				HX_STACK_LINE(912)
				::zpp_nape::geom::ZPP_SimpleEvent tmp7 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(912)
				bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(912)
				if ((tmp8)){
					HX_STACK_LINE(912)
					::zpp_nape::geom::ZPP_SimpleEvent tmp9 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(912)
					ret = tmp9;
				}
				else{
					HX_STACK_LINE(912)
					::zpp_nape::geom::ZPP_SimpleEvent tmp9 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(912)
					ret = tmp9;
					HX_STACK_LINE(912)
					::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = ret->next;
					HX_STACK_LINE(912)
					ret->next = null();
				}
				HX_STACK_LINE(912)
				Dynamic();
			}
			HX_STACK_LINE(912)
			ret->vertex = pre;
			HX_STACK_LINE(912)
			tmp6 = ret;
		}
		HX_STACK_LINE(912)
		::zpp_nape::geom::ZPP_SimpleEvent e1 = tmp6;		HX_STACK_VAR(e1,"e1");
		HX_STACK_LINE(913)
		::zpp_nape::geom::ZPP_SimpleEvent tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(913)
		{
			HX_STACK_LINE(913)
			::zpp_nape::geom::ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(913)
			{
				HX_STACK_LINE(913)
				::zpp_nape::geom::ZPP_SimpleEvent tmp8 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(913)
				bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(913)
				if ((tmp9)){
					HX_STACK_LINE(913)
					::zpp_nape::geom::ZPP_SimpleEvent tmp10 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(913)
					ret = tmp10;
				}
				else{
					HX_STACK_LINE(913)
					::zpp_nape::geom::ZPP_SimpleEvent tmp10 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(913)
					ret = tmp10;
					HX_STACK_LINE(913)
					::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = ret->next;
					HX_STACK_LINE(913)
					ret->next = null();
				}
				HX_STACK_LINE(913)
				Dynamic();
			}
			HX_STACK_LINE(913)
			ret->vertex = fst;
			HX_STACK_LINE(913)
			tmp7 = ret;
		}
		HX_STACK_LINE(913)
		::zpp_nape::geom::ZPP_SimpleEvent e2 = tmp7;		HX_STACK_VAR(e2,"e2");
		HX_STACK_LINE(914)
		::zpp_nape::geom::ZPP_SimpleSeg seg;		HX_STACK_VAR(seg,"seg");
		HX_STACK_LINE(915)
		::zpp_nape::geom::ZPP_SimpleEvent tmp8 = e1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(915)
		::zpp_nape::geom::ZPP_SimpleEvent tmp9 = e2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(915)
		bool tmp10 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::less_xy(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(915)
		if ((tmp10)){
			HX_STACK_LINE(916)
			e1->type = (int)1;
			HX_STACK_LINE(917)
			e2->type = (int)2;
			HX_STACK_LINE(918)
			::zpp_nape::geom::ZPP_SimpleVert tmp11 = pre;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(918)
			::zpp_nape::geom::ZPP_SimpleVert tmp12 = fst;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(918)
			::zpp_nape::geom::ZPP_SimpleSeg tmp13 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::get(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(918)
			seg = tmp13;
		}
		else{
			HX_STACK_LINE(921)
			e1->type = (int)2;
			HX_STACK_LINE(922)
			e2->type = (int)1;
			HX_STACK_LINE(923)
			::zpp_nape::geom::ZPP_SimpleVert tmp11 = fst;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(923)
			::zpp_nape::geom::ZPP_SimpleVert tmp12 = pre;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(923)
			::zpp_nape::geom::ZPP_SimpleSeg tmp13 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::get(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(923)
			seg = tmp13;
		}
		HX_STACK_LINE(925)
		::zpp_nape::geom::ZPP_SimpleSeg tmp11 = e2->segment = seg;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(925)
		e1->segment = tmp11;
		HX_STACK_LINE(926)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp12 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(926)
		::zpp_nape::geom::ZPP_SimpleEvent tmp13 = e1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(926)
		tmp12->insert(tmp13);
		HX_STACK_LINE(927)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp14 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(927)
		::zpp_nape::geom::ZPP_SimpleEvent tmp15 = e2;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(927)
		tmp14->insert(tmp15);
		HX_STACK_LINE(928)
		::zpp_nape::geom::ZPP_SimpleVert tmp16 = fst;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(928)
		pre->links->insert(tmp16);
		HX_STACK_LINE(929)
		::zpp_nape::geom::ZPP_SimpleVert tmp17 = pre;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(929)
		fst->links->insert(tmp17);
	}
	HX_STACK_LINE(931)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp6 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(931)
	bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(931)
	if ((tmp7)){
		HX_STACK_LINE(932)
		{
			HX_STACK_LINE(933)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp8 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(933)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(933)
			if ((tmp9)){
				HX_STACK_LINE(934)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(934)
				::zpp_nape::geom::ZPP_Simple_obj::ints = tmp10;
			}
			else{
				HX_STACK_LINE(940)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp10 = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(940)
				::zpp_nape::geom::ZPP_Simple_obj::ints = tmp10;
				HX_STACK_LINE(941)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp11 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(941)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = tmp11->next;
				HX_STACK_LINE(942)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp12 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(942)
				tmp12->next = null();
			}
			HX_STACK_LINE(947)
			Dynamic();
		}
		HX_STACK_LINE(949)
		Dynamic tmp8 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::less_xy_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(949)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp9 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(949)
		tmp9->lt = tmp8;
	}
	HX_STACK_LINE(951)
	while((true)){
		HX_STACK_LINE(951)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp8 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(951)
		bool tmp9 = tmp8->empty();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(951)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(951)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(951)
		if ((tmp11)){
			HX_STACK_LINE(951)
			break;
		}
		HX_STACK_LINE(952)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp12 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(952)
		::zpp_nape::geom::ZPP_SimpleEvent tmp13 = tmp12->pop_front();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(952)
		::zpp_nape::geom::ZPP_SimpleEvent e = tmp13;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(953)
		Float tmp14 = e->vertex->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(953)
		::zpp_nape::geom::ZPP_SimpleSweep tmp15 = ::zpp_nape::geom::ZPP_Simple_obj::sweep;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(953)
		tmp15->sweepx = tmp14;
		HX_STACK_LINE(954)
		bool tmp16 = (e->type == (int)1);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(954)
		if ((tmp16)){
			HX_STACK_LINE(955)
			::zpp_nape::geom::ZPP_SimpleSeg s = e->segment;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(956)
			::zpp_nape::geom::ZPP_SimpleSweep tmp17 = ::zpp_nape::geom::ZPP_Simple_obj::sweep;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(956)
			::zpp_nape::geom::ZPP_SimpleSeg tmp18 = s;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(956)
			tmp17->add(tmp18);
			HX_STACK_LINE(957)
			{
				HX_STACK_LINE(958)
				bool tmp19 = (s->next != null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(958)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(958)
				bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(958)
				if ((tmp20)){
					HX_STACK_LINE(958)
					tmp21 = (s != null());
				}
				else{
					HX_STACK_LINE(958)
					tmp21 = false;
				}
				HX_STACK_LINE(958)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(958)
				if ((tmp21)){
					HX_STACK_LINE(958)
					int tmp23 = s->next->id;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(958)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(958)
					int tmp25 = s->id;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(958)
					bool tmp26 = (tmp24 < tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(958)
					bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(958)
					bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(958)
					bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(958)
					if ((tmp29)){
						HX_STACK_LINE(958)
						::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp30 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(958)
						::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(958)
						int tmp32 = s->next->id;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(958)
						int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(958)
						int tmp34 = s->id;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(958)
						int tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(958)
						int tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(958)
						bool tmp37 = tmp31->has(tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(958)
						tmp28 = tmp37;
					}
					else{
						HX_STACK_LINE(958)
						::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp30 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(958)
						::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(958)
						int tmp32 = s->id;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(958)
						int tmp33 = s->next->id;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(958)
						int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(958)
						int tmp35 = tmp32;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(958)
						int tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(958)
						bool tmp37 = tmp31->has(tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(958)
						tmp28 = tmp37;
					}
					HX_STACK_LINE(958)
					bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(958)
					tmp22 = !(tmp30);
				}
				else{
					HX_STACK_LINE(958)
					tmp22 = false;
				}
				HX_STACK_LINE(958)
				if ((tmp22)){
					HX_STACK_LINE(959)
					::zpp_nape::geom::ZPP_SimpleSweep tmp23 = ::zpp_nape::geom::ZPP_Simple_obj::sweep;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(959)
					::zpp_nape::geom::ZPP_SimpleSeg tmp24 = s->next;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(959)
					::zpp_nape::geom::ZPP_SimpleSeg tmp25 = s;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(959)
					::zpp_nape::geom::ZPP_SimpleEvent tmp26 = tmp23->intersection(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(959)
					::zpp_nape::geom::ZPP_SimpleEvent intx = tmp26;		HX_STACK_VAR(intx,"intx");
					HX_STACK_LINE(960)
					bool tmp27 = (intx != null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(960)
					if ((tmp27)){
						HX_STACK_LINE(961)
						Float tmp28 = intx->vertex->x;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(961)
						::zpp_nape::geom::ZPP_SimpleSweep tmp29 = ::zpp_nape::geom::ZPP_Simple_obj::sweep;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(961)
						Float tmp30 = tmp29->sweepx;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(961)
						bool tmp31 = (tmp28 >= tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(961)
						if ((tmp31)){
							HX_STACK_LINE(962)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp32;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(962)
							{
								HX_STACK_LINE(963)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp33 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(963)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = tmp33->parent;		HX_STACK_VAR(cur,"cur");
								HX_STACK_LINE(964)
								while((true)){
									HX_STACK_LINE(964)
									bool tmp34 = (cur != null());		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(964)
									bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(964)
									if ((tmp35)){
										HX_STACK_LINE(964)
										break;
									}
									HX_STACK_LINE(965)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp36 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(965)
									::zpp_nape::geom::ZPP_SimpleEvent tmp37 = intx;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(965)
									::zpp_nape::geom::ZPP_SimpleEvent tmp38 = cur->data;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(965)
									bool tmp39 = tmp36->lt(tmp37,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(965)
									if ((tmp39)){
										HX_STACK_LINE(965)
										cur = cur->prev;
									}
									else{
										HX_STACK_LINE(966)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp40 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(966)
										::zpp_nape::geom::ZPP_SimpleEvent tmp41 = cur->data;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(966)
										::zpp_nape::geom::ZPP_SimpleEvent tmp42 = intx;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(966)
										bool tmp43 = tmp40->lt(tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(966)
										if ((tmp43)){
											HX_STACK_LINE(966)
											cur = cur->next;
										}
										else{
											HX_STACK_LINE(967)
											break;
										}
									}
								}
								HX_STACK_LINE(969)
								tmp32 = cur;
							}
							HX_STACK_LINE(962)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ex = tmp32;		HX_STACK_VAR(ex,"ex");
							HX_STACK_LINE(971)
							bool tmp33 = (ex == null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(971)
							if ((tmp33)){
								HX_STACK_LINE(972)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp34;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(972)
								{
									HX_STACK_LINE(973)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp35 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(973)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = tmp35->parent;		HX_STACK_VAR(cur,"cur");
									HX_STACK_LINE(974)
									while((true)){
										HX_STACK_LINE(974)
										bool tmp36 = (cur != null());		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(974)
										bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(974)
										if ((tmp37)){
											HX_STACK_LINE(974)
											break;
										}
										HX_STACK_LINE(975)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp38 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(975)
										::zpp_nape::geom::ZPP_SimpleEvent tmp39 = intx;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(975)
										::zpp_nape::geom::ZPP_SimpleEvent tmp40 = cur->data;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(975)
										bool tmp41 = tmp38->lt(tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(975)
										if ((tmp41)){
											HX_STACK_LINE(975)
											cur = cur->prev;
										}
										else{
											HX_STACK_LINE(976)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp42 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(976)
											::zpp_nape::geom::ZPP_SimpleEvent tmp43 = cur->data;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(976)
											::zpp_nape::geom::ZPP_SimpleEvent tmp44 = intx;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(976)
											bool tmp45 = tmp42->lt(tmp43,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(976)
											if ((tmp45)){
												HX_STACK_LINE(976)
												cur = cur->next;
											}
											else{
												HX_STACK_LINE(977)
												break;
											}
										}
									}
									HX_STACK_LINE(979)
									tmp34 = cur;
								}
								HX_STACK_LINE(972)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent vx = tmp34;		HX_STACK_VAR(vx,"vx");
								HX_STACK_LINE(981)
								bool tmp35 = (vx != null());		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(981)
								if ((tmp35)){
									HX_STACK_LINE(982)
									{
										HX_STACK_LINE(983)
										::zpp_nape::geom::ZPP_SimpleVert o = intx->vertex;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(992)
										{
											HX_STACK_LINE(992)
											o->links->clear();
											HX_STACK_LINE(992)
											o->node = null();
											HX_STACK_LINE(992)
											o->forced = false;
										}
										HX_STACK_LINE(993)
										::zpp_nape::geom::ZPP_SimpleVert tmp36 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(993)
										o->next = tmp36;
										HX_STACK_LINE(994)
										::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
									}
									HX_STACK_LINE(999)
									::zpp_nape::geom::ZPP_SimpleVert tmp36 = vx->data->vertex;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(999)
									intx->vertex = tmp36;
									HX_STACK_LINE(1000)
									vx->data = intx;
									HX_STACK_LINE(1001)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp37 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1001)
									::zpp_nape::geom::ZPP_SimpleEvent tmp38 = intx;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1001)
									tmp37->insert(tmp38);
								}
								else{
									HX_STACK_LINE(1004)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp36 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1004)
									::zpp_nape::geom::ZPP_SimpleEvent tmp37 = intx;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1004)
									tmp36->insert(tmp37);
									HX_STACK_LINE(1005)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp38 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1005)
									::zpp_nape::geom::ZPP_SimpleEvent tmp39 = intx;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1005)
									tmp38->insert(tmp39);
								}
								HX_STACK_LINE(1007)
								int tmp36 = s->next->id;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1007)
								int tmp37 = s->id;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1007)
								bool tmp38 = (tmp36 < tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1007)
								if ((tmp38)){
									HX_STACK_LINE(1007)
									::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp39 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1007)
									::zpp_nape::util::Hashable2_Boolfalse tmp40;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1007)
									{
										HX_STACK_LINE(1007)
										::zpp_nape::util::Hashable2_Boolfalse tmp41;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(1007)
										{
											HX_STACK_LINE(1007)
											::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(1007)
											{
												HX_STACK_LINE(1007)
												::zpp_nape::util::Hashable2_Boolfalse tmp42 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1007)
												bool tmp43 = (tmp42 == null());		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1007)
												if ((tmp43)){
													HX_STACK_LINE(1007)
													::zpp_nape::util::Hashable2_Boolfalse tmp44 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1007)
													ret = tmp44;
												}
												else{
													HX_STACK_LINE(1007)
													::zpp_nape::util::Hashable2_Boolfalse tmp44 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1007)
													ret = tmp44;
													HX_STACK_LINE(1007)
													::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
													HX_STACK_LINE(1007)
													ret->next = null();
												}
												HX_STACK_LINE(1007)
												Dynamic();
											}
											HX_STACK_LINE(1007)
											int tmp42 = s->next->id;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(1007)
											ret->id = tmp42;
											HX_STACK_LINE(1007)
											ret->di = s->id;
											HX_STACK_LINE(1007)
											tmp41 = ret;
										}
										HX_STACK_LINE(1007)
										::zpp_nape::util::Hashable2_Boolfalse ret = tmp41;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(1007)
										ret->value = true;
										HX_STACK_LINE(1007)
										tmp40 = ret;
									}
									HX_STACK_LINE(1007)
									tmp39->add(tmp40);
								}
								else{
									HX_STACK_LINE(1008)
									::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp39 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1008)
									::zpp_nape::util::Hashable2_Boolfalse tmp40;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1008)
									{
										HX_STACK_LINE(1008)
										::zpp_nape::util::Hashable2_Boolfalse tmp41;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(1008)
										{
											HX_STACK_LINE(1008)
											::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(1008)
											{
												HX_STACK_LINE(1008)
												::zpp_nape::util::Hashable2_Boolfalse tmp42 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1008)
												bool tmp43 = (tmp42 == null());		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1008)
												if ((tmp43)){
													HX_STACK_LINE(1008)
													::zpp_nape::util::Hashable2_Boolfalse tmp44 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1008)
													ret = tmp44;
												}
												else{
													HX_STACK_LINE(1008)
													::zpp_nape::util::Hashable2_Boolfalse tmp44 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1008)
													ret = tmp44;
													HX_STACK_LINE(1008)
													::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
													HX_STACK_LINE(1008)
													ret->next = null();
												}
												HX_STACK_LINE(1008)
												Dynamic();
											}
											HX_STACK_LINE(1008)
											ret->id = s->id;
											HX_STACK_LINE(1008)
											int tmp42 = s->next->id;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(1008)
											ret->di = tmp42;
											HX_STACK_LINE(1008)
											tmp41 = ret;
										}
										HX_STACK_LINE(1008)
										::zpp_nape::util::Hashable2_Boolfalse ret = tmp41;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(1008)
										ret->value = true;
										HX_STACK_LINE(1008)
										tmp40 = ret;
									}
									HX_STACK_LINE(1008)
									tmp39->add(tmp40);
								}
							}
							else{
								HX_STACK_LINE(1011)
								::zpp_nape::geom::ZPP_SimpleEvent x = ex->data;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1013)
								bool tmp34 = (x->segment != intx->segment);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1013)
								bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1013)
								bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1013)
								if ((tmp35)){
									HX_STACK_LINE(1013)
									tmp36 = (intx->segment2 != x->segment2);
								}
								else{
									HX_STACK_LINE(1013)
									tmp36 = true;
								}
								HX_STACK_LINE(1013)
								if ((tmp36)){
									HX_STACK_LINE(1013)
									HX_STACK_DO_THROW(HX_HCSTRING("corner case 2, shiiiit.","\xb0","\x6f","\x0e","\x6b"));
								}
								HX_STACK_LINE(1015)
								{
									HX_STACK_LINE(1016)
									::zpp_nape::geom::ZPP_SimpleVert o = intx->vertex;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1025)
									{
										HX_STACK_LINE(1025)
										o->links->clear();
										HX_STACK_LINE(1025)
										o->node = null();
										HX_STACK_LINE(1025)
										o->forced = false;
									}
									HX_STACK_LINE(1026)
									::zpp_nape::geom::ZPP_SimpleVert tmp37 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1026)
									o->next = tmp37;
									HX_STACK_LINE(1027)
									::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1032)
								{
									HX_STACK_LINE(1033)
									::zpp_nape::geom::ZPP_SimpleEvent o = intx;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1042)
									{
										HX_STACK_LINE(1042)
										o->vertex = null();
										HX_STACK_LINE(1042)
										::zpp_nape::geom::ZPP_SimpleSeg tmp37 = o->segment2 = null();		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(1042)
										o->segment = tmp37;
										HX_STACK_LINE(1042)
										o->node = null();
									}
									HX_STACK_LINE(1043)
									::zpp_nape::geom::ZPP_SimpleEvent tmp37 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1043)
									o->next = tmp37;
									HX_STACK_LINE(1044)
									::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
								}
							}
						}
						else{
							HX_STACK_LINE(1052)
							{
								HX_STACK_LINE(1053)
								::zpp_nape::geom::ZPP_SimpleVert o = intx->vertex;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1062)
								{
									HX_STACK_LINE(1062)
									o->links->clear();
									HX_STACK_LINE(1062)
									o->node = null();
									HX_STACK_LINE(1062)
									o->forced = false;
								}
								HX_STACK_LINE(1063)
								::zpp_nape::geom::ZPP_SimpleVert tmp32 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1063)
								o->next = tmp32;
								HX_STACK_LINE(1064)
								::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
							}
							HX_STACK_LINE(1069)
							{
								HX_STACK_LINE(1070)
								::zpp_nape::geom::ZPP_SimpleEvent o = intx;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1079)
								{
									HX_STACK_LINE(1079)
									o->vertex = null();
									HX_STACK_LINE(1079)
									::zpp_nape::geom::ZPP_SimpleSeg tmp32 = o->segment2 = null();		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1079)
									o->segment = tmp32;
									HX_STACK_LINE(1079)
									o->node = null();
								}
								HX_STACK_LINE(1080)
								::zpp_nape::geom::ZPP_SimpleEvent tmp32 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1080)
								o->next = tmp32;
								HX_STACK_LINE(1081)
								::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
							}
						}
					}
				}
			}
			HX_STACK_LINE(1090)
			{
				HX_STACK_LINE(1091)
				bool tmp19 = (s != null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1091)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1091)
				bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1091)
				if ((tmp20)){
					HX_STACK_LINE(1091)
					tmp21 = (s->prev != null());
				}
				else{
					HX_STACK_LINE(1091)
					tmp21 = false;
				}
				HX_STACK_LINE(1091)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1091)
				if ((tmp21)){
					HX_STACK_LINE(1091)
					int tmp23 = s->id;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1091)
					int tmp24 = s->prev->id;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1091)
					int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1091)
					bool tmp26 = (tmp23 < tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1091)
					bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1091)
					bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1091)
					bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1091)
					if ((tmp29)){
						HX_STACK_LINE(1091)
						::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp30 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1091)
						::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1091)
						int tmp32 = s->id;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1091)
						int tmp33 = s->prev->id;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1091)
						int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1091)
						int tmp35 = tmp32;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1091)
						int tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1091)
						bool tmp37 = tmp31->has(tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1091)
						tmp28 = tmp37;
					}
					else{
						HX_STACK_LINE(1091)
						::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp30 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1091)
						::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1091)
						int tmp32 = s->prev->id;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1091)
						int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1091)
						int tmp34 = s->id;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1091)
						int tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1091)
						int tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1091)
						bool tmp37 = tmp31->has(tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1091)
						tmp28 = tmp37;
					}
					HX_STACK_LINE(1091)
					bool tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1091)
					tmp22 = !(tmp30);
				}
				else{
					HX_STACK_LINE(1091)
					tmp22 = false;
				}
				HX_STACK_LINE(1091)
				if ((tmp22)){
					HX_STACK_LINE(1092)
					::zpp_nape::geom::ZPP_SimpleSweep tmp23 = ::zpp_nape::geom::ZPP_Simple_obj::sweep;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1092)
					::zpp_nape::geom::ZPP_SimpleSeg tmp24 = s;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1092)
					::zpp_nape::geom::ZPP_SimpleSeg tmp25 = s->prev;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1092)
					::zpp_nape::geom::ZPP_SimpleEvent tmp26 = tmp23->intersection(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1092)
					::zpp_nape::geom::ZPP_SimpleEvent intx = tmp26;		HX_STACK_VAR(intx,"intx");
					HX_STACK_LINE(1093)
					bool tmp27 = (intx != null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1093)
					if ((tmp27)){
						HX_STACK_LINE(1094)
						Float tmp28 = intx->vertex->x;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1094)
						::zpp_nape::geom::ZPP_SimpleSweep tmp29 = ::zpp_nape::geom::ZPP_Simple_obj::sweep;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1094)
						Float tmp30 = tmp29->sweepx;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1094)
						bool tmp31 = (tmp28 >= tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1094)
						if ((tmp31)){
							HX_STACK_LINE(1095)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp32;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1095)
							{
								HX_STACK_LINE(1096)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp33 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1096)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = tmp33->parent;		HX_STACK_VAR(cur,"cur");
								HX_STACK_LINE(1097)
								while((true)){
									HX_STACK_LINE(1097)
									bool tmp34 = (cur != null());		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1097)
									bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1097)
									if ((tmp35)){
										HX_STACK_LINE(1097)
										break;
									}
									HX_STACK_LINE(1098)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp36 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1098)
									::zpp_nape::geom::ZPP_SimpleEvent tmp37 = intx;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1098)
									::zpp_nape::geom::ZPP_SimpleEvent tmp38 = cur->data;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1098)
									bool tmp39 = tmp36->lt(tmp37,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1098)
									if ((tmp39)){
										HX_STACK_LINE(1098)
										cur = cur->prev;
									}
									else{
										HX_STACK_LINE(1099)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp40 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(1099)
										::zpp_nape::geom::ZPP_SimpleEvent tmp41 = cur->data;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(1099)
										::zpp_nape::geom::ZPP_SimpleEvent tmp42 = intx;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(1099)
										bool tmp43 = tmp40->lt(tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(1099)
										if ((tmp43)){
											HX_STACK_LINE(1099)
											cur = cur->next;
										}
										else{
											HX_STACK_LINE(1100)
											break;
										}
									}
								}
								HX_STACK_LINE(1102)
								tmp32 = cur;
							}
							HX_STACK_LINE(1095)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ex = tmp32;		HX_STACK_VAR(ex,"ex");
							HX_STACK_LINE(1104)
							bool tmp33 = (ex == null());		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1104)
							if ((tmp33)){
								HX_STACK_LINE(1105)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp34;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1105)
								{
									HX_STACK_LINE(1106)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp35 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1106)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = tmp35->parent;		HX_STACK_VAR(cur,"cur");
									HX_STACK_LINE(1107)
									while((true)){
										HX_STACK_LINE(1107)
										bool tmp36 = (cur != null());		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(1107)
										bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(1107)
										if ((tmp37)){
											HX_STACK_LINE(1107)
											break;
										}
										HX_STACK_LINE(1108)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp38 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(1108)
										::zpp_nape::geom::ZPP_SimpleEvent tmp39 = intx;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1108)
										::zpp_nape::geom::ZPP_SimpleEvent tmp40 = cur->data;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(1108)
										bool tmp41 = tmp38->lt(tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(1108)
										if ((tmp41)){
											HX_STACK_LINE(1108)
											cur = cur->prev;
										}
										else{
											HX_STACK_LINE(1109)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp42 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(1109)
											::zpp_nape::geom::ZPP_SimpleEvent tmp43 = cur->data;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(1109)
											::zpp_nape::geom::ZPP_SimpleEvent tmp44 = intx;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(1109)
											bool tmp45 = tmp42->lt(tmp43,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(1109)
											if ((tmp45)){
												HX_STACK_LINE(1109)
												cur = cur->next;
											}
											else{
												HX_STACK_LINE(1110)
												break;
											}
										}
									}
									HX_STACK_LINE(1112)
									tmp34 = cur;
								}
								HX_STACK_LINE(1105)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent vx = tmp34;		HX_STACK_VAR(vx,"vx");
								HX_STACK_LINE(1114)
								bool tmp35 = (vx != null());		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1114)
								if ((tmp35)){
									HX_STACK_LINE(1115)
									{
										HX_STACK_LINE(1116)
										::zpp_nape::geom::ZPP_SimpleVert o = intx->vertex;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1125)
										{
											HX_STACK_LINE(1125)
											o->links->clear();
											HX_STACK_LINE(1125)
											o->node = null();
											HX_STACK_LINE(1125)
											o->forced = false;
										}
										HX_STACK_LINE(1126)
										::zpp_nape::geom::ZPP_SimpleVert tmp36 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(1126)
										o->next = tmp36;
										HX_STACK_LINE(1127)
										::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1132)
									::zpp_nape::geom::ZPP_SimpleVert tmp36 = vx->data->vertex;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1132)
									intx->vertex = tmp36;
									HX_STACK_LINE(1133)
									vx->data = intx;
									HX_STACK_LINE(1134)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp37 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1134)
									::zpp_nape::geom::ZPP_SimpleEvent tmp38 = intx;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1134)
									tmp37->insert(tmp38);
								}
								else{
									HX_STACK_LINE(1137)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp36 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1137)
									::zpp_nape::geom::ZPP_SimpleEvent tmp37 = intx;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1137)
									tmp36->insert(tmp37);
									HX_STACK_LINE(1138)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp38 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1138)
									::zpp_nape::geom::ZPP_SimpleEvent tmp39 = intx;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1138)
									tmp38->insert(tmp39);
								}
								HX_STACK_LINE(1140)
								int tmp36 = s->id;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1140)
								int tmp37 = s->prev->id;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1140)
								bool tmp38 = (tmp36 < tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1140)
								if ((tmp38)){
									HX_STACK_LINE(1140)
									::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp39 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1140)
									::zpp_nape::util::Hashable2_Boolfalse tmp40;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1140)
									{
										HX_STACK_LINE(1140)
										::zpp_nape::util::Hashable2_Boolfalse tmp41;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(1140)
										{
											HX_STACK_LINE(1140)
											::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(1140)
											{
												HX_STACK_LINE(1140)
												::zpp_nape::util::Hashable2_Boolfalse tmp42 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1140)
												bool tmp43 = (tmp42 == null());		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1140)
												if ((tmp43)){
													HX_STACK_LINE(1140)
													::zpp_nape::util::Hashable2_Boolfalse tmp44 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1140)
													ret = tmp44;
												}
												else{
													HX_STACK_LINE(1140)
													::zpp_nape::util::Hashable2_Boolfalse tmp44 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1140)
													ret = tmp44;
													HX_STACK_LINE(1140)
													::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
													HX_STACK_LINE(1140)
													ret->next = null();
												}
												HX_STACK_LINE(1140)
												Dynamic();
											}
											HX_STACK_LINE(1140)
											ret->id = s->id;
											HX_STACK_LINE(1140)
											int tmp42 = s->prev->id;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(1140)
											ret->di = tmp42;
											HX_STACK_LINE(1140)
											tmp41 = ret;
										}
										HX_STACK_LINE(1140)
										::zpp_nape::util::Hashable2_Boolfalse ret = tmp41;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(1140)
										ret->value = true;
										HX_STACK_LINE(1140)
										tmp40 = ret;
									}
									HX_STACK_LINE(1140)
									tmp39->add(tmp40);
								}
								else{
									HX_STACK_LINE(1141)
									::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp39 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1141)
									::zpp_nape::util::Hashable2_Boolfalse tmp40;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1141)
									{
										HX_STACK_LINE(1141)
										::zpp_nape::util::Hashable2_Boolfalse tmp41;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(1141)
										{
											HX_STACK_LINE(1141)
											::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(1141)
											{
												HX_STACK_LINE(1141)
												::zpp_nape::util::Hashable2_Boolfalse tmp42 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1141)
												bool tmp43 = (tmp42 == null());		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1141)
												if ((tmp43)){
													HX_STACK_LINE(1141)
													::zpp_nape::util::Hashable2_Boolfalse tmp44 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1141)
													ret = tmp44;
												}
												else{
													HX_STACK_LINE(1141)
													::zpp_nape::util::Hashable2_Boolfalse tmp44 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1141)
													ret = tmp44;
													HX_STACK_LINE(1141)
													::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
													HX_STACK_LINE(1141)
													ret->next = null();
												}
												HX_STACK_LINE(1141)
												Dynamic();
											}
											HX_STACK_LINE(1141)
											int tmp42 = s->prev->id;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(1141)
											ret->id = tmp42;
											HX_STACK_LINE(1141)
											ret->di = s->id;
											HX_STACK_LINE(1141)
											tmp41 = ret;
										}
										HX_STACK_LINE(1141)
										::zpp_nape::util::Hashable2_Boolfalse ret = tmp41;		HX_STACK_VAR(ret,"ret");
										HX_STACK_LINE(1141)
										ret->value = true;
										HX_STACK_LINE(1141)
										tmp40 = ret;
									}
									HX_STACK_LINE(1141)
									tmp39->add(tmp40);
								}
							}
							else{
								HX_STACK_LINE(1144)
								::zpp_nape::geom::ZPP_SimpleEvent x = ex->data;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1146)
								bool tmp34 = (x->segment != intx->segment);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1146)
								bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1146)
								bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1146)
								if ((tmp35)){
									HX_STACK_LINE(1146)
									tmp36 = (intx->segment2 != x->segment2);
								}
								else{
									HX_STACK_LINE(1146)
									tmp36 = true;
								}
								HX_STACK_LINE(1146)
								if ((tmp36)){
									HX_STACK_LINE(1146)
									HX_STACK_DO_THROW(HX_HCSTRING("corner case 2, shiiiit.","\xb0","\x6f","\x0e","\x6b"));
								}
								HX_STACK_LINE(1148)
								{
									HX_STACK_LINE(1149)
									::zpp_nape::geom::ZPP_SimpleVert o = intx->vertex;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1158)
									{
										HX_STACK_LINE(1158)
										o->links->clear();
										HX_STACK_LINE(1158)
										o->node = null();
										HX_STACK_LINE(1158)
										o->forced = false;
									}
									HX_STACK_LINE(1159)
									::zpp_nape::geom::ZPP_SimpleVert tmp37 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1159)
									o->next = tmp37;
									HX_STACK_LINE(1160)
									::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1165)
								{
									HX_STACK_LINE(1166)
									::zpp_nape::geom::ZPP_SimpleEvent o = intx;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1175)
									{
										HX_STACK_LINE(1175)
										o->vertex = null();
										HX_STACK_LINE(1175)
										::zpp_nape::geom::ZPP_SimpleSeg tmp37 = o->segment2 = null();		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(1175)
										o->segment = tmp37;
										HX_STACK_LINE(1175)
										o->node = null();
									}
									HX_STACK_LINE(1176)
									::zpp_nape::geom::ZPP_SimpleEvent tmp37 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1176)
									o->next = tmp37;
									HX_STACK_LINE(1177)
									::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
								}
							}
						}
						else{
							HX_STACK_LINE(1185)
							{
								HX_STACK_LINE(1186)
								::zpp_nape::geom::ZPP_SimpleVert o = intx->vertex;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1195)
								{
									HX_STACK_LINE(1195)
									o->links->clear();
									HX_STACK_LINE(1195)
									o->node = null();
									HX_STACK_LINE(1195)
									o->forced = false;
								}
								HX_STACK_LINE(1196)
								::zpp_nape::geom::ZPP_SimpleVert tmp32 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1196)
								o->next = tmp32;
								HX_STACK_LINE(1197)
								::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
							}
							HX_STACK_LINE(1202)
							{
								HX_STACK_LINE(1203)
								::zpp_nape::geom::ZPP_SimpleEvent o = intx;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1212)
								{
									HX_STACK_LINE(1212)
									o->vertex = null();
									HX_STACK_LINE(1212)
									::zpp_nape::geom::ZPP_SimpleSeg tmp32 = o->segment2 = null();		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1212)
									o->segment = tmp32;
									HX_STACK_LINE(1212)
									o->node = null();
								}
								HX_STACK_LINE(1213)
								::zpp_nape::geom::ZPP_SimpleEvent tmp32 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1213)
								o->next = tmp32;
								HX_STACK_LINE(1214)
								::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
							}
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(1224)
			bool tmp17 = (e->type == (int)2);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1224)
			if ((tmp17)){
				HX_STACK_LINE(1225)
				::zpp_nape::geom::ZPP_SimpleSeg s = e->segment;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(1226)
				bool tmp18 = (s->node != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1226)
				if ((tmp18)){
					HX_STACK_LINE(1227)
					::zpp_nape::geom::ZPP_SimpleSeg nxt = s->next;		HX_STACK_VAR(nxt,"nxt");
					HX_STACK_LINE(1228)
					::zpp_nape::geom::ZPP_SimpleSeg pre1 = s->prev;		HX_STACK_VAR(pre1,"pre1");
					HX_STACK_LINE(1229)
					::zpp_nape::geom::ZPP_SimpleSweep tmp19 = ::zpp_nape::geom::ZPP_Simple_obj::sweep;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1229)
					::zpp_nape::geom::ZPP_SimpleSeg tmp20 = s;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1229)
					tmp19->remove(tmp20);
					HX_STACK_LINE(1230)
					{
						HX_STACK_LINE(1231)
						::zpp_nape::geom::ZPP_SimpleSeg o = s;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1240)
						{
							HX_STACK_LINE(1240)
							::zpp_nape::geom::ZPP_SimpleVert tmp21 = o->right = null();		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1240)
							o->left = tmp21;
							HX_STACK_LINE(1240)
							o->prev = null();
							HX_STACK_LINE(1240)
							o->node = null();
							HX_STACK_LINE(1240)
							o->vertices->clear();
						}
						HX_STACK_LINE(1241)
						::zpp_nape::geom::ZPP_SimpleSeg tmp21 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1241)
						o->next = tmp21;
						HX_STACK_LINE(1242)
						::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool = o;
					}
					HX_STACK_LINE(1247)
					{
						HX_STACK_LINE(1248)
						bool tmp21 = (nxt != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1248)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1248)
						bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1248)
						if ((tmp22)){
							HX_STACK_LINE(1248)
							tmp23 = (pre1 != null());
						}
						else{
							HX_STACK_LINE(1248)
							tmp23 = false;
						}
						HX_STACK_LINE(1248)
						bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1248)
						if ((tmp23)){
							HX_STACK_LINE(1248)
							bool tmp25 = (nxt->id < pre1->id);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1248)
							bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1248)
							bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1248)
							bool tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1248)
							if ((tmp28)){
								HX_STACK_LINE(1248)
								::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp29 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1248)
								::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1248)
								int tmp31 = nxt->id;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1248)
								int tmp32 = pre1->id;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1248)
								int tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1248)
								int tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1248)
								bool tmp35 = tmp30->has(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1248)
								tmp27 = tmp35;
							}
							else{
								HX_STACK_LINE(1248)
								::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp29 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1248)
								::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1248)
								int tmp31 = pre1->id;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1248)
								int tmp32 = nxt->id;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1248)
								int tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1248)
								int tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1248)
								bool tmp35 = tmp30->has(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1248)
								tmp27 = tmp35;
							}
							HX_STACK_LINE(1248)
							bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1248)
							tmp24 = !(tmp29);
						}
						else{
							HX_STACK_LINE(1248)
							tmp24 = false;
						}
						HX_STACK_LINE(1248)
						if ((tmp24)){
							HX_STACK_LINE(1249)
							::zpp_nape::geom::ZPP_SimpleSweep tmp25 = ::zpp_nape::geom::ZPP_Simple_obj::sweep;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1249)
							::zpp_nape::geom::ZPP_SimpleSeg tmp26 = nxt;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1249)
							::zpp_nape::geom::ZPP_SimpleSeg tmp27 = pre1;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1249)
							::zpp_nape::geom::ZPP_SimpleEvent tmp28 = tmp25->intersection(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1249)
							::zpp_nape::geom::ZPP_SimpleEvent intx = tmp28;		HX_STACK_VAR(intx,"intx");
							HX_STACK_LINE(1250)
							bool tmp29 = (intx != null());		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1250)
							if ((tmp29)){
								HX_STACK_LINE(1251)
								Float tmp30 = intx->vertex->x;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1251)
								::zpp_nape::geom::ZPP_SimpleSweep tmp31 = ::zpp_nape::geom::ZPP_Simple_obj::sweep;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1251)
								Float tmp32 = tmp31->sweepx;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1251)
								bool tmp33 = (tmp30 >= tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1251)
								if ((tmp33)){
									HX_STACK_LINE(1252)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp34;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1252)
									{
										HX_STACK_LINE(1253)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp35 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(1253)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = tmp35->parent;		HX_STACK_VAR(cur,"cur");
										HX_STACK_LINE(1254)
										while((true)){
											HX_STACK_LINE(1254)
											bool tmp36 = (cur != null());		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(1254)
											bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1254)
											if ((tmp37)){
												HX_STACK_LINE(1254)
												break;
											}
											HX_STACK_LINE(1255)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp38 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1255)
											::zpp_nape::geom::ZPP_SimpleEvent tmp39 = intx;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1255)
											::zpp_nape::geom::ZPP_SimpleEvent tmp40 = cur->data;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1255)
											bool tmp41 = tmp38->lt(tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(1255)
											if ((tmp41)){
												HX_STACK_LINE(1255)
												cur = cur->prev;
											}
											else{
												HX_STACK_LINE(1256)
												::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp42 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1256)
												::zpp_nape::geom::ZPP_SimpleEvent tmp43 = cur->data;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1256)
												::zpp_nape::geom::ZPP_SimpleEvent tmp44 = intx;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(1256)
												bool tmp45 = tmp42->lt(tmp43,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(1256)
												if ((tmp45)){
													HX_STACK_LINE(1256)
													cur = cur->next;
												}
												else{
													HX_STACK_LINE(1257)
													break;
												}
											}
										}
										HX_STACK_LINE(1259)
										tmp34 = cur;
									}
									HX_STACK_LINE(1252)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ex = tmp34;		HX_STACK_VAR(ex,"ex");
									HX_STACK_LINE(1261)
									bool tmp35 = (ex == null());		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1261)
									if ((tmp35)){
										HX_STACK_LINE(1262)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp36;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(1262)
										{
											HX_STACK_LINE(1263)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp37 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1263)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = tmp37->parent;		HX_STACK_VAR(cur,"cur");
											HX_STACK_LINE(1264)
											while((true)){
												HX_STACK_LINE(1264)
												bool tmp38 = (cur != null());		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(1264)
												bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(1264)
												if ((tmp39)){
													HX_STACK_LINE(1264)
													break;
												}
												HX_STACK_LINE(1265)
												::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp40 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(1265)
												::zpp_nape::geom::ZPP_SimpleEvent tmp41 = intx;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(1265)
												::zpp_nape::geom::ZPP_SimpleEvent tmp42 = cur->data;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1265)
												bool tmp43 = tmp40->lt(tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1265)
												if ((tmp43)){
													HX_STACK_LINE(1265)
													cur = cur->prev;
												}
												else{
													HX_STACK_LINE(1266)
													::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp44 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(1266)
													::zpp_nape::geom::ZPP_SimpleEvent tmp45 = cur->data;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(1266)
													::zpp_nape::geom::ZPP_SimpleEvent tmp46 = intx;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(1266)
													bool tmp47 = tmp44->lt(tmp45,tmp46);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(1266)
													if ((tmp47)){
														HX_STACK_LINE(1266)
														cur = cur->next;
													}
													else{
														HX_STACK_LINE(1267)
														break;
													}
												}
											}
											HX_STACK_LINE(1269)
											tmp36 = cur;
										}
										HX_STACK_LINE(1262)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent vx = tmp36;		HX_STACK_VAR(vx,"vx");
										HX_STACK_LINE(1271)
										bool tmp37 = (vx != null());		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(1271)
										if ((tmp37)){
											HX_STACK_LINE(1272)
											{
												HX_STACK_LINE(1273)
												::zpp_nape::geom::ZPP_SimpleVert o = intx->vertex;		HX_STACK_VAR(o,"o");
												HX_STACK_LINE(1282)
												{
													HX_STACK_LINE(1282)
													o->links->clear();
													HX_STACK_LINE(1282)
													o->node = null();
													HX_STACK_LINE(1282)
													o->forced = false;
												}
												HX_STACK_LINE(1283)
												::zpp_nape::geom::ZPP_SimpleVert tmp38 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(1283)
												o->next = tmp38;
												HX_STACK_LINE(1284)
												::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
											}
											HX_STACK_LINE(1289)
											::zpp_nape::geom::ZPP_SimpleVert tmp38 = vx->data->vertex;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1289)
											intx->vertex = tmp38;
											HX_STACK_LINE(1290)
											vx->data = intx;
											HX_STACK_LINE(1291)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp39 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1291)
											::zpp_nape::geom::ZPP_SimpleEvent tmp40 = intx;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1291)
											tmp39->insert(tmp40);
										}
										else{
											HX_STACK_LINE(1294)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp38 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1294)
											::zpp_nape::geom::ZPP_SimpleEvent tmp39 = intx;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1294)
											tmp38->insert(tmp39);
											HX_STACK_LINE(1295)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp40 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1295)
											::zpp_nape::geom::ZPP_SimpleEvent tmp41 = intx;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(1295)
											tmp40->insert(tmp41);
										}
										HX_STACK_LINE(1297)
										bool tmp38 = (nxt->id < pre1->id);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(1297)
										if ((tmp38)){
											HX_STACK_LINE(1297)
											::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp39 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1297)
											::zpp_nape::util::Hashable2_Boolfalse tmp40;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1297)
											{
												HX_STACK_LINE(1297)
												::zpp_nape::util::Hashable2_Boolfalse tmp41;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(1297)
												{
													HX_STACK_LINE(1297)
													::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(1297)
													{
														HX_STACK_LINE(1297)
														::zpp_nape::util::Hashable2_Boolfalse tmp42 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(1297)
														bool tmp43 = (tmp42 == null());		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(1297)
														if ((tmp43)){
															HX_STACK_LINE(1297)
															::zpp_nape::util::Hashable2_Boolfalse tmp44 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1297)
															ret = tmp44;
														}
														else{
															HX_STACK_LINE(1297)
															::zpp_nape::util::Hashable2_Boolfalse tmp44 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1297)
															ret = tmp44;
															HX_STACK_LINE(1297)
															::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
															HX_STACK_LINE(1297)
															ret->next = null();
														}
														HX_STACK_LINE(1297)
														Dynamic();
													}
													HX_STACK_LINE(1297)
													ret->id = nxt->id;
													HX_STACK_LINE(1297)
													ret->di = pre1->id;
													HX_STACK_LINE(1297)
													tmp41 = ret;
												}
												HX_STACK_LINE(1297)
												::zpp_nape::util::Hashable2_Boolfalse ret = tmp41;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(1297)
												ret->value = true;
												HX_STACK_LINE(1297)
												tmp40 = ret;
											}
											HX_STACK_LINE(1297)
											tmp39->add(tmp40);
										}
										else{
											HX_STACK_LINE(1298)
											::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp39 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1298)
											::zpp_nape::util::Hashable2_Boolfalse tmp40;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1298)
											{
												HX_STACK_LINE(1298)
												::zpp_nape::util::Hashable2_Boolfalse tmp41;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(1298)
												{
													HX_STACK_LINE(1298)
													::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(1298)
													{
														HX_STACK_LINE(1298)
														::zpp_nape::util::Hashable2_Boolfalse tmp42 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(1298)
														bool tmp43 = (tmp42 == null());		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(1298)
														if ((tmp43)){
															HX_STACK_LINE(1298)
															::zpp_nape::util::Hashable2_Boolfalse tmp44 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1298)
															ret = tmp44;
														}
														else{
															HX_STACK_LINE(1298)
															::zpp_nape::util::Hashable2_Boolfalse tmp44 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1298)
															ret = tmp44;
															HX_STACK_LINE(1298)
															::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
															HX_STACK_LINE(1298)
															ret->next = null();
														}
														HX_STACK_LINE(1298)
														Dynamic();
													}
													HX_STACK_LINE(1298)
													ret->id = pre1->id;
													HX_STACK_LINE(1298)
													ret->di = nxt->id;
													HX_STACK_LINE(1298)
													tmp41 = ret;
												}
												HX_STACK_LINE(1298)
												::zpp_nape::util::Hashable2_Boolfalse ret = tmp41;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(1298)
												ret->value = true;
												HX_STACK_LINE(1298)
												tmp40 = ret;
											}
											HX_STACK_LINE(1298)
											tmp39->add(tmp40);
										}
									}
									else{
										HX_STACK_LINE(1301)
										::zpp_nape::geom::ZPP_SimpleEvent x = ex->data;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(1303)
										bool tmp36 = (x->segment != intx->segment);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(1303)
										bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(1303)
										bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(1303)
										if ((tmp37)){
											HX_STACK_LINE(1303)
											tmp38 = (intx->segment2 != x->segment2);
										}
										else{
											HX_STACK_LINE(1303)
											tmp38 = true;
										}
										HX_STACK_LINE(1303)
										if ((tmp38)){
											HX_STACK_LINE(1303)
											HX_STACK_DO_THROW(HX_HCSTRING("corner case 2, shiiiit.","\xb0","\x6f","\x0e","\x6b"));
										}
										HX_STACK_LINE(1305)
										{
											HX_STACK_LINE(1306)
											::zpp_nape::geom::ZPP_SimpleVert o = intx->vertex;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1315)
											{
												HX_STACK_LINE(1315)
												o->links->clear();
												HX_STACK_LINE(1315)
												o->node = null();
												HX_STACK_LINE(1315)
												o->forced = false;
											}
											HX_STACK_LINE(1316)
											::zpp_nape::geom::ZPP_SimpleVert tmp39 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1316)
											o->next = tmp39;
											HX_STACK_LINE(1317)
											::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
										}
										HX_STACK_LINE(1322)
										{
											HX_STACK_LINE(1323)
											::zpp_nape::geom::ZPP_SimpleEvent o = intx;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1332)
											{
												HX_STACK_LINE(1332)
												o->vertex = null();
												HX_STACK_LINE(1332)
												::zpp_nape::geom::ZPP_SimpleSeg tmp39 = o->segment2 = null();		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(1332)
												o->segment = tmp39;
												HX_STACK_LINE(1332)
												o->node = null();
											}
											HX_STACK_LINE(1333)
											::zpp_nape::geom::ZPP_SimpleEvent tmp39 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1333)
											o->next = tmp39;
											HX_STACK_LINE(1334)
											::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
										}
									}
								}
								else{
									HX_STACK_LINE(1342)
									{
										HX_STACK_LINE(1343)
										::zpp_nape::geom::ZPP_SimpleVert o = intx->vertex;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1352)
										{
											HX_STACK_LINE(1352)
											o->links->clear();
											HX_STACK_LINE(1352)
											o->node = null();
											HX_STACK_LINE(1352)
											o->forced = false;
										}
										HX_STACK_LINE(1353)
										::zpp_nape::geom::ZPP_SimpleVert tmp34 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(1353)
										o->next = tmp34;
										HX_STACK_LINE(1354)
										::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1359)
									{
										HX_STACK_LINE(1360)
										::zpp_nape::geom::ZPP_SimpleEvent o = intx;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1369)
										{
											HX_STACK_LINE(1369)
											o->vertex = null();
											HX_STACK_LINE(1369)
											::zpp_nape::geom::ZPP_SimpleSeg tmp34 = o->segment2 = null();		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1369)
											o->segment = tmp34;
											HX_STACK_LINE(1369)
											o->node = null();
										}
										HX_STACK_LINE(1370)
										::zpp_nape::geom::ZPP_SimpleEvent tmp34 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(1370)
										o->next = tmp34;
										HX_STACK_LINE(1371)
										::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
									}
								}
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(1383)
				::zpp_nape::geom::ZPP_SimpleVert intx = e->vertex;		HX_STACK_VAR(intx,"intx");
				HX_STACK_LINE(1384)
				bool tmp18 = (intx->node == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1384)
				bool pnull = tmp18;		HX_STACK_VAR(pnull,"pnull");
				HX_STACK_LINE(1385)
				::zpp_nape::geom::ZPP_SimpleSeg a = e->segment;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(1386)
				::zpp_nape::geom::ZPP_SimpleSeg b = e->segment2;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(1395)
				bool tmp19 = (b->next != a);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1395)
				if ((tmp19)){
					HX_STACK_LINE(1396)
					::zpp_nape::geom::ZPP_SimpleSeg t = a;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1397)
					a = b;
					HX_STACK_LINE(1398)
					b = t;
				}
				HX_STACK_LINE(1400)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1400)
				{
					HX_STACK_LINE(1401)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp21 = a->vertices->parent;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1401)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = tmp21;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(1402)
					while((true)){
						HX_STACK_LINE(1402)
						bool tmp22 = (cur != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1402)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1402)
						if ((tmp23)){
							HX_STACK_LINE(1402)
							break;
						}
						HX_STACK_LINE(1403)
						::zpp_nape::geom::ZPP_SimpleVert tmp24 = intx;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1403)
						::zpp_nape::geom::ZPP_SimpleVert tmp25 = cur->data;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1403)
						bool tmp26 = a->vertices->lt(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1403)
						if ((tmp26)){
							HX_STACK_LINE(1403)
							cur = cur->prev;
						}
						else{
							HX_STACK_LINE(1404)
							::zpp_nape::geom::ZPP_SimpleVert tmp27 = cur->data;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1404)
							::zpp_nape::geom::ZPP_SimpleVert tmp28 = intx;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1404)
							bool tmp29 = a->vertices->lt(tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1404)
							if ((tmp29)){
								HX_STACK_LINE(1404)
								cur = cur->next;
							}
							else{
								HX_STACK_LINE(1405)
								break;
							}
						}
					}
					HX_STACK_LINE(1407)
					tmp20 = cur;
				}
				HX_STACK_LINE(1400)
				bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1400)
				bool anew = tmp21;		HX_STACK_VAR(anew,"anew");
				HX_STACK_LINE(1409)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1409)
				{
					HX_STACK_LINE(1410)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp23 = b->vertices->parent;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1410)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = tmp23;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(1411)
					while((true)){
						HX_STACK_LINE(1411)
						bool tmp24 = (cur != null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1411)
						bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1411)
						if ((tmp25)){
							HX_STACK_LINE(1411)
							break;
						}
						HX_STACK_LINE(1412)
						::zpp_nape::geom::ZPP_SimpleVert tmp26 = intx;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1412)
						::zpp_nape::geom::ZPP_SimpleVert tmp27 = cur->data;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1412)
						bool tmp28 = b->vertices->lt(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1412)
						if ((tmp28)){
							HX_STACK_LINE(1412)
							cur = cur->prev;
						}
						else{
							HX_STACK_LINE(1413)
							::zpp_nape::geom::ZPP_SimpleVert tmp29 = cur->data;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1413)
							::zpp_nape::geom::ZPP_SimpleVert tmp30 = intx;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1413)
							bool tmp31 = b->vertices->lt(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1413)
							if ((tmp31)){
								HX_STACK_LINE(1413)
								cur = cur->next;
							}
							else{
								HX_STACK_LINE(1414)
								break;
							}
						}
					}
					HX_STACK_LINE(1416)
					tmp22 = cur;
				}
				HX_STACK_LINE(1409)
				bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1409)
				bool bnew = tmp23;		HX_STACK_VAR(bnew,"bnew");
				HX_STACK_LINE(1418)
				bool tmp24 = anew;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1418)
				if ((tmp24)){
					HX_STACK_LINE(1419)
					::zpp_nape::geom::ZPP_SimpleVert tmp25 = intx;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1419)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp26 = a->vertices->insert(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1419)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert aint = tmp26;		HX_STACK_VAR(aint,"aint");
					HX_STACK_LINE(1420)
					bool tmp27 = (intx == a->left);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1420)
					::zpp_nape::geom::ZPP_SimpleVert tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1420)
					if ((tmp27)){
						HX_STACK_LINE(1420)
						tmp28 = intx;
					}
					else{
						HX_STACK_LINE(1420)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp29 = aint;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1420)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp30 = a->vertices->predecessor_node(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1420)
						tmp28 = tmp30->data;
					}
					HX_STACK_LINE(1420)
					::zpp_nape::geom::ZPP_SimpleVert naleft = tmp28;		HX_STACK_VAR(naleft,"naleft");
					HX_STACK_LINE(1421)
					bool tmp29 = (intx == a->right);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1421)
					::zpp_nape::geom::ZPP_SimpleVert tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1421)
					if ((tmp29)){
						HX_STACK_LINE(1421)
						tmp30 = intx;
					}
					else{
						HX_STACK_LINE(1421)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp31 = aint;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1421)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp32 = a->vertices->successor_node(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1421)
						tmp30 = tmp32->data;
					}
					HX_STACK_LINE(1421)
					::zpp_nape::geom::ZPP_SimpleVert naright = tmp30;		HX_STACK_VAR(naright,"naright");
					HX_STACK_LINE(1422)
					::zpp_nape::geom::ZPP_SimpleVert tmp31 = naright;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1422)
					naleft->links->remove(tmp31);
					HX_STACK_LINE(1423)
					bool tmp32 = (intx != naleft);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1423)
					if ((tmp32)){
						HX_STACK_LINE(1423)
						::zpp_nape::geom::ZPP_SimpleVert tmp33 = intx;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1423)
						naleft->links->insert(tmp33);
					}
					HX_STACK_LINE(1424)
					::zpp_nape::geom::ZPP_SimpleVert tmp33 = naleft;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1424)
					naright->links->remove(tmp33);
					HX_STACK_LINE(1425)
					bool tmp34 = (intx != naright);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1425)
					if ((tmp34)){
						HX_STACK_LINE(1425)
						::zpp_nape::geom::ZPP_SimpleVert tmp35 = intx;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1425)
						naright->links->insert(tmp35);
					}
					HX_STACK_LINE(1426)
					bool tmp35 = (intx != naleft);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1426)
					if ((tmp35)){
						HX_STACK_LINE(1426)
						::zpp_nape::geom::ZPP_SimpleVert tmp36 = naleft;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1426)
						intx->links->insert(tmp36);
					}
					HX_STACK_LINE(1427)
					bool tmp36 = (intx != naright);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1427)
					if ((tmp36)){
						HX_STACK_LINE(1427)
						::zpp_nape::geom::ZPP_SimpleVert tmp37 = naright;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1427)
						intx->links->insert(tmp37);
					}
				}
				HX_STACK_LINE(1429)
				bool tmp25 = bnew;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1429)
				if ((tmp25)){
					HX_STACK_LINE(1430)
					::zpp_nape::geom::ZPP_SimpleVert tmp26 = intx;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1430)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp27 = b->vertices->insert(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1430)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert bint = tmp27;		HX_STACK_VAR(bint,"bint");
					HX_STACK_LINE(1431)
					bool tmp28 = (intx == b->left);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1431)
					::zpp_nape::geom::ZPP_SimpleVert tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1431)
					if ((tmp28)){
						HX_STACK_LINE(1431)
						tmp29 = intx;
					}
					else{
						HX_STACK_LINE(1431)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp30 = bint;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1431)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp31 = b->vertices->predecessor_node(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1431)
						tmp29 = tmp31->data;
					}
					HX_STACK_LINE(1431)
					::zpp_nape::geom::ZPP_SimpleVert nbleft = tmp29;		HX_STACK_VAR(nbleft,"nbleft");
					HX_STACK_LINE(1432)
					bool tmp30 = (intx == b->right);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1432)
					::zpp_nape::geom::ZPP_SimpleVert tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1432)
					if ((tmp30)){
						HX_STACK_LINE(1432)
						tmp31 = intx;
					}
					else{
						HX_STACK_LINE(1432)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp32 = bint;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1432)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp33 = b->vertices->successor_node(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1432)
						tmp31 = tmp33->data;
					}
					HX_STACK_LINE(1432)
					::zpp_nape::geom::ZPP_SimpleVert nbright = tmp31;		HX_STACK_VAR(nbright,"nbright");
					HX_STACK_LINE(1433)
					::zpp_nape::geom::ZPP_SimpleVert tmp32 = nbright;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1433)
					nbleft->links->remove(tmp32);
					HX_STACK_LINE(1434)
					bool tmp33 = (intx != nbleft);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1434)
					if ((tmp33)){
						HX_STACK_LINE(1434)
						::zpp_nape::geom::ZPP_SimpleVert tmp34 = intx;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1434)
						nbleft->links->insert(tmp34);
					}
					HX_STACK_LINE(1435)
					::zpp_nape::geom::ZPP_SimpleVert tmp34 = nbleft;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1435)
					nbright->links->remove(tmp34);
					HX_STACK_LINE(1436)
					bool tmp35 = (intx != nbright);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1436)
					if ((tmp35)){
						HX_STACK_LINE(1436)
						::zpp_nape::geom::ZPP_SimpleVert tmp36 = intx;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1436)
						nbright->links->insert(tmp36);
					}
					HX_STACK_LINE(1437)
					bool tmp36 = (intx != nbleft);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1437)
					if ((tmp36)){
						HX_STACK_LINE(1437)
						::zpp_nape::geom::ZPP_SimpleVert tmp37 = nbleft;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1437)
						intx->links->insert(tmp37);
					}
					HX_STACK_LINE(1438)
					bool tmp37 = (intx != nbright);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1438)
					if ((tmp37)){
						HX_STACK_LINE(1438)
						::zpp_nape::geom::ZPP_SimpleVert tmp38 = nbright;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1438)
						intx->links->insert(tmp38);
					}
				}
				HX_STACK_LINE(1440)
				bool tmp26 = pnull;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1440)
				if ((tmp26)){
					HX_STACK_LINE(1440)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp27 = ::zpp_nape::geom::ZPP_Simple_obj::vertices;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1440)
					::zpp_nape::geom::ZPP_SimpleVert tmp28 = intx;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1440)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp29 = tmp27->insert(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1440)
					intx->node = tmp29;
				}
				HX_STACK_LINE(1441)
				intx->forced = true;
				HX_STACK_LINE(1442)
				bool tmp27 = pnull;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1442)
				if ((tmp27)){
					HX_STACK_LINE(1443)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg an = a->node;		HX_STACK_VAR(an,"an");
					HX_STACK_LINE(1444)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg bn = b->node;		HX_STACK_VAR(bn,"bn");
					HX_STACK_LINE(1445)
					an->data = b;
					HX_STACK_LINE(1446)
					bn->data = a;
					HX_STACK_LINE(1447)
					a->node = bn;
					HX_STACK_LINE(1448)
					b->node = an;
					HX_STACK_LINE(1449)
					b->next = a->next;
					HX_STACK_LINE(1450)
					a->next = b;
					HX_STACK_LINE(1451)
					a->prev = b->prev;
					HX_STACK_LINE(1452)
					b->prev = a;
					HX_STACK_LINE(1453)
					bool tmp28 = (a->prev != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1453)
					if ((tmp28)){
						HX_STACK_LINE(1453)
						a->prev->next = a;
					}
					HX_STACK_LINE(1454)
					bool tmp29 = (b->next != null());		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1454)
					if ((tmp29)){
						HX_STACK_LINE(1454)
						b->next->prev = b;
					}
				}
				HX_STACK_LINE(1456)
				{
					HX_STACK_LINE(1457)
					bool tmp28 = (b->next != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1457)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1457)
					bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1457)
					if ((tmp29)){
						HX_STACK_LINE(1457)
						tmp30 = (b != null());
					}
					else{
						HX_STACK_LINE(1457)
						tmp30 = false;
					}
					HX_STACK_LINE(1457)
					bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1457)
					if ((tmp30)){
						HX_STACK_LINE(1457)
						int tmp32 = b->next->id;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1457)
						int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1457)
						int tmp34 = b->id;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1457)
						bool tmp35 = (tmp33 < tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1457)
						bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1457)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1457)
						bool tmp38 = tmp36;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1457)
						if ((tmp38)){
							HX_STACK_LINE(1457)
							::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp39 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1457)
							::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1457)
							int tmp41 = b->next->id;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1457)
							int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1457)
							int tmp43 = b->id;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1457)
							int tmp44 = tmp42;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1457)
							int tmp45 = tmp43;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1457)
							bool tmp46 = tmp40->has(tmp44,tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1457)
							tmp37 = tmp46;
						}
						else{
							HX_STACK_LINE(1457)
							::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp39 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1457)
							::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1457)
							int tmp41 = b->id;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1457)
							int tmp42 = b->next->id;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1457)
							int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1457)
							int tmp44 = tmp41;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1457)
							int tmp45 = tmp43;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1457)
							bool tmp46 = tmp40->has(tmp44,tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1457)
							tmp37 = tmp46;
						}
						HX_STACK_LINE(1457)
						bool tmp39 = tmp37;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1457)
						tmp31 = !(tmp39);
					}
					else{
						HX_STACK_LINE(1457)
						tmp31 = false;
					}
					HX_STACK_LINE(1457)
					if ((tmp31)){
						HX_STACK_LINE(1458)
						::zpp_nape::geom::ZPP_SimpleSweep tmp32 = ::zpp_nape::geom::ZPP_Simple_obj::sweep;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1458)
						::zpp_nape::geom::ZPP_SimpleSeg tmp33 = b->next;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1458)
						::zpp_nape::geom::ZPP_SimpleSeg tmp34 = b;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1458)
						::zpp_nape::geom::ZPP_SimpleEvent tmp35 = tmp32->intersection(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1458)
						::zpp_nape::geom::ZPP_SimpleEvent intx1 = tmp35;		HX_STACK_VAR(intx1,"intx1");
						HX_STACK_LINE(1459)
						bool tmp36 = (intx1 != null());		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1459)
						if ((tmp36)){
							HX_STACK_LINE(1460)
							Float tmp37 = intx1->vertex->x;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1460)
							::zpp_nape::geom::ZPP_SimpleSweep tmp38 = ::zpp_nape::geom::ZPP_Simple_obj::sweep;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1460)
							Float tmp39 = tmp38->sweepx;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1460)
							bool tmp40 = (tmp37 >= tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1460)
							if ((tmp40)){
								HX_STACK_LINE(1461)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp41;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1461)
								{
									HX_STACK_LINE(1462)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp42 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1462)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = tmp42->parent;		HX_STACK_VAR(cur,"cur");
									HX_STACK_LINE(1463)
									while((true)){
										HX_STACK_LINE(1463)
										bool tmp43 = (cur != null());		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(1463)
										bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(1463)
										if ((tmp44)){
											HX_STACK_LINE(1463)
											break;
										}
										HX_STACK_LINE(1464)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp45 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(1464)
										::zpp_nape::geom::ZPP_SimpleEvent tmp46 = intx1;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(1464)
										::zpp_nape::geom::ZPP_SimpleEvent tmp47 = cur->data;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(1464)
										bool tmp48 = tmp45->lt(tmp46,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(1464)
										if ((tmp48)){
											HX_STACK_LINE(1464)
											cur = cur->prev;
										}
										else{
											HX_STACK_LINE(1465)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp49 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(1465)
											::zpp_nape::geom::ZPP_SimpleEvent tmp50 = cur->data;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(1465)
											::zpp_nape::geom::ZPP_SimpleEvent tmp51 = intx1;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(1465)
											bool tmp52 = tmp49->lt(tmp50,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(1465)
											if ((tmp52)){
												HX_STACK_LINE(1465)
												cur = cur->next;
											}
											else{
												HX_STACK_LINE(1466)
												break;
											}
										}
									}
									HX_STACK_LINE(1468)
									tmp41 = cur;
								}
								HX_STACK_LINE(1461)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ex = tmp41;		HX_STACK_VAR(ex,"ex");
								HX_STACK_LINE(1470)
								bool tmp42 = (ex == null());		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1470)
								if ((tmp42)){
									HX_STACK_LINE(1471)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp43;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1471)
									{
										HX_STACK_LINE(1472)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp44 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(1472)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = tmp44->parent;		HX_STACK_VAR(cur,"cur");
										HX_STACK_LINE(1473)
										while((true)){
											HX_STACK_LINE(1473)
											bool tmp45 = (cur != null());		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(1473)
											bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(1473)
											if ((tmp46)){
												HX_STACK_LINE(1473)
												break;
											}
											HX_STACK_LINE(1474)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp47 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(1474)
											::zpp_nape::geom::ZPP_SimpleEvent tmp48 = intx1;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(1474)
											::zpp_nape::geom::ZPP_SimpleEvent tmp49 = cur->data;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(1474)
											bool tmp50 = tmp47->lt(tmp48,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(1474)
											if ((tmp50)){
												HX_STACK_LINE(1474)
												cur = cur->prev;
											}
											else{
												HX_STACK_LINE(1475)
												::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp51 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(1475)
												::zpp_nape::geom::ZPP_SimpleEvent tmp52 = cur->data;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(1475)
												::zpp_nape::geom::ZPP_SimpleEvent tmp53 = intx1;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(1475)
												bool tmp54 = tmp51->lt(tmp52,tmp53);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(1475)
												if ((tmp54)){
													HX_STACK_LINE(1475)
													cur = cur->next;
												}
												else{
													HX_STACK_LINE(1476)
													break;
												}
											}
										}
										HX_STACK_LINE(1478)
										tmp43 = cur;
									}
									HX_STACK_LINE(1471)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent vx = tmp43;		HX_STACK_VAR(vx,"vx");
									HX_STACK_LINE(1480)
									bool tmp44 = (vx != null());		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1480)
									if ((tmp44)){
										HX_STACK_LINE(1481)
										{
											HX_STACK_LINE(1482)
											::zpp_nape::geom::ZPP_SimpleVert o = intx1->vertex;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1491)
											{
												HX_STACK_LINE(1491)
												o->links->clear();
												HX_STACK_LINE(1491)
												o->node = null();
												HX_STACK_LINE(1491)
												o->forced = false;
											}
											HX_STACK_LINE(1492)
											::zpp_nape::geom::ZPP_SimpleVert tmp45 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(1492)
											o->next = tmp45;
											HX_STACK_LINE(1493)
											::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
										}
										HX_STACK_LINE(1498)
										::zpp_nape::geom::ZPP_SimpleVert tmp45 = vx->data->vertex;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(1498)
										intx1->vertex = tmp45;
										HX_STACK_LINE(1499)
										vx->data = intx1;
										HX_STACK_LINE(1500)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp46 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(1500)
										::zpp_nape::geom::ZPP_SimpleEvent tmp47 = intx1;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(1500)
										tmp46->insert(tmp47);
									}
									else{
										HX_STACK_LINE(1503)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp45 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(1503)
										::zpp_nape::geom::ZPP_SimpleEvent tmp46 = intx1;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(1503)
										tmp45->insert(tmp46);
										HX_STACK_LINE(1504)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp47 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(1504)
										::zpp_nape::geom::ZPP_SimpleEvent tmp48 = intx1;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(1504)
										tmp47->insert(tmp48);
									}
									HX_STACK_LINE(1506)
									int tmp45 = b->next->id;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1506)
									int tmp46 = b->id;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1506)
									bool tmp47 = (tmp45 < tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1506)
									if ((tmp47)){
										HX_STACK_LINE(1506)
										::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp48 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(1506)
										::zpp_nape::util::Hashable2_Boolfalse tmp49;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(1506)
										{
											HX_STACK_LINE(1506)
											::zpp_nape::util::Hashable2_Boolfalse tmp50;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(1506)
											{
												HX_STACK_LINE(1506)
												::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(1506)
												{
													HX_STACK_LINE(1506)
													::zpp_nape::util::Hashable2_Boolfalse tmp51 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(1506)
													bool tmp52 = (tmp51 == null());		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(1506)
													if ((tmp52)){
														HX_STACK_LINE(1506)
														::zpp_nape::util::Hashable2_Boolfalse tmp53 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(1506)
														ret = tmp53;
													}
													else{
														HX_STACK_LINE(1506)
														::zpp_nape::util::Hashable2_Boolfalse tmp53 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(1506)
														ret = tmp53;
														HX_STACK_LINE(1506)
														::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
														HX_STACK_LINE(1506)
														ret->next = null();
													}
													HX_STACK_LINE(1506)
													Dynamic();
												}
												HX_STACK_LINE(1506)
												int tmp51 = b->next->id;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(1506)
												ret->id = tmp51;
												HX_STACK_LINE(1506)
												ret->di = b->id;
												HX_STACK_LINE(1506)
												tmp50 = ret;
											}
											HX_STACK_LINE(1506)
											::zpp_nape::util::Hashable2_Boolfalse ret = tmp50;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(1506)
											ret->value = true;
											HX_STACK_LINE(1506)
											tmp49 = ret;
										}
										HX_STACK_LINE(1506)
										tmp48->add(tmp49);
									}
									else{
										HX_STACK_LINE(1507)
										::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp48 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(1507)
										::zpp_nape::util::Hashable2_Boolfalse tmp49;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(1507)
										{
											HX_STACK_LINE(1507)
											::zpp_nape::util::Hashable2_Boolfalse tmp50;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(1507)
											{
												HX_STACK_LINE(1507)
												::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(1507)
												{
													HX_STACK_LINE(1507)
													::zpp_nape::util::Hashable2_Boolfalse tmp51 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(1507)
													bool tmp52 = (tmp51 == null());		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(1507)
													if ((tmp52)){
														HX_STACK_LINE(1507)
														::zpp_nape::util::Hashable2_Boolfalse tmp53 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(1507)
														ret = tmp53;
													}
													else{
														HX_STACK_LINE(1507)
														::zpp_nape::util::Hashable2_Boolfalse tmp53 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(1507)
														ret = tmp53;
														HX_STACK_LINE(1507)
														::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
														HX_STACK_LINE(1507)
														ret->next = null();
													}
													HX_STACK_LINE(1507)
													Dynamic();
												}
												HX_STACK_LINE(1507)
												ret->id = b->id;
												HX_STACK_LINE(1507)
												int tmp51 = b->next->id;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(1507)
												ret->di = tmp51;
												HX_STACK_LINE(1507)
												tmp50 = ret;
											}
											HX_STACK_LINE(1507)
											::zpp_nape::util::Hashable2_Boolfalse ret = tmp50;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(1507)
											ret->value = true;
											HX_STACK_LINE(1507)
											tmp49 = ret;
										}
										HX_STACK_LINE(1507)
										tmp48->add(tmp49);
									}
								}
								else{
									HX_STACK_LINE(1510)
									::zpp_nape::geom::ZPP_SimpleEvent x = ex->data;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1512)
									bool tmp43 = (x->segment != intx1->segment);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1512)
									bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1512)
									bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1512)
									if ((tmp44)){
										HX_STACK_LINE(1512)
										tmp45 = (intx1->segment2 != x->segment2);
									}
									else{
										HX_STACK_LINE(1512)
										tmp45 = true;
									}
									HX_STACK_LINE(1512)
									if ((tmp45)){
										HX_STACK_LINE(1512)
										HX_STACK_DO_THROW(HX_HCSTRING("corner case 2, shiiiit.","\xb0","\x6f","\x0e","\x6b"));
									}
									HX_STACK_LINE(1514)
									{
										HX_STACK_LINE(1515)
										::zpp_nape::geom::ZPP_SimpleVert o = intx1->vertex;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1524)
										{
											HX_STACK_LINE(1524)
											o->links->clear();
											HX_STACK_LINE(1524)
											o->node = null();
											HX_STACK_LINE(1524)
											o->forced = false;
										}
										HX_STACK_LINE(1525)
										::zpp_nape::geom::ZPP_SimpleVert tmp46 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(1525)
										o->next = tmp46;
										HX_STACK_LINE(1526)
										::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1531)
									{
										HX_STACK_LINE(1532)
										::zpp_nape::geom::ZPP_SimpleEvent o = intx1;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1541)
										{
											HX_STACK_LINE(1541)
											o->vertex = null();
											HX_STACK_LINE(1541)
											::zpp_nape::geom::ZPP_SimpleSeg tmp46 = o->segment2 = null();		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(1541)
											o->segment = tmp46;
											HX_STACK_LINE(1541)
											o->node = null();
										}
										HX_STACK_LINE(1542)
										::zpp_nape::geom::ZPP_SimpleEvent tmp46 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(1542)
										o->next = tmp46;
										HX_STACK_LINE(1543)
										::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
									}
								}
							}
							else{
								HX_STACK_LINE(1551)
								{
									HX_STACK_LINE(1552)
									::zpp_nape::geom::ZPP_SimpleVert o = intx1->vertex;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1561)
									{
										HX_STACK_LINE(1561)
										o->links->clear();
										HX_STACK_LINE(1561)
										o->node = null();
										HX_STACK_LINE(1561)
										o->forced = false;
									}
									HX_STACK_LINE(1562)
									::zpp_nape::geom::ZPP_SimpleVert tmp41 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1562)
									o->next = tmp41;
									HX_STACK_LINE(1563)
									::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1568)
								{
									HX_STACK_LINE(1569)
									::zpp_nape::geom::ZPP_SimpleEvent o = intx1;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1578)
									{
										HX_STACK_LINE(1578)
										o->vertex = null();
										HX_STACK_LINE(1578)
										::zpp_nape::geom::ZPP_SimpleSeg tmp41 = o->segment2 = null();		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(1578)
										o->segment = tmp41;
										HX_STACK_LINE(1578)
										o->node = null();
									}
									HX_STACK_LINE(1579)
									::zpp_nape::geom::ZPP_SimpleEvent tmp41 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1579)
									o->next = tmp41;
									HX_STACK_LINE(1580)
									::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
								}
							}
						}
					}
				}
				HX_STACK_LINE(1589)
				{
					HX_STACK_LINE(1590)
					bool tmp28 = (a != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1590)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1590)
					bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1590)
					if ((tmp29)){
						HX_STACK_LINE(1590)
						tmp30 = (a->prev != null());
					}
					else{
						HX_STACK_LINE(1590)
						tmp30 = false;
					}
					HX_STACK_LINE(1590)
					bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1590)
					if ((tmp30)){
						HX_STACK_LINE(1590)
						int tmp32 = a->id;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1590)
						int tmp33 = a->prev->id;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1590)
						int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1590)
						bool tmp35 = (tmp32 < tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1590)
						bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1590)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1590)
						bool tmp38 = tmp36;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1590)
						if ((tmp38)){
							HX_STACK_LINE(1590)
							::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp39 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1590)
							::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1590)
							int tmp41 = a->id;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1590)
							int tmp42 = a->prev->id;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1590)
							int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1590)
							int tmp44 = tmp41;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1590)
							int tmp45 = tmp43;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1590)
							bool tmp46 = tmp40->has(tmp44,tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1590)
							tmp37 = tmp46;
						}
						else{
							HX_STACK_LINE(1590)
							::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp39 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1590)
							::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1590)
							int tmp41 = a->prev->id;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1590)
							int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1590)
							int tmp43 = a->id;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1590)
							int tmp44 = tmp42;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1590)
							int tmp45 = tmp43;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1590)
							bool tmp46 = tmp40->has(tmp44,tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1590)
							tmp37 = tmp46;
						}
						HX_STACK_LINE(1590)
						bool tmp39 = tmp37;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1590)
						tmp31 = !(tmp39);
					}
					else{
						HX_STACK_LINE(1590)
						tmp31 = false;
					}
					HX_STACK_LINE(1590)
					if ((tmp31)){
						HX_STACK_LINE(1591)
						::zpp_nape::geom::ZPP_SimpleSweep tmp32 = ::zpp_nape::geom::ZPP_Simple_obj::sweep;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1591)
						::zpp_nape::geom::ZPP_SimpleSeg tmp33 = a;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1591)
						::zpp_nape::geom::ZPP_SimpleSeg tmp34 = a->prev;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1591)
						::zpp_nape::geom::ZPP_SimpleEvent tmp35 = tmp32->intersection(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1591)
						::zpp_nape::geom::ZPP_SimpleEvent intx1 = tmp35;		HX_STACK_VAR(intx1,"intx1");
						HX_STACK_LINE(1592)
						bool tmp36 = (intx1 != null());		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1592)
						if ((tmp36)){
							HX_STACK_LINE(1593)
							Float tmp37 = intx1->vertex->x;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1593)
							::zpp_nape::geom::ZPP_SimpleSweep tmp38 = ::zpp_nape::geom::ZPP_Simple_obj::sweep;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1593)
							Float tmp39 = tmp38->sweepx;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1593)
							bool tmp40 = (tmp37 >= tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1593)
							if ((tmp40)){
								HX_STACK_LINE(1594)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp41;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1594)
								{
									HX_STACK_LINE(1595)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp42 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1595)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = tmp42->parent;		HX_STACK_VAR(cur,"cur");
									HX_STACK_LINE(1596)
									while((true)){
										HX_STACK_LINE(1596)
										bool tmp43 = (cur != null());		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(1596)
										bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(1596)
										if ((tmp44)){
											HX_STACK_LINE(1596)
											break;
										}
										HX_STACK_LINE(1597)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp45 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(1597)
										::zpp_nape::geom::ZPP_SimpleEvent tmp46 = intx1;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(1597)
										::zpp_nape::geom::ZPP_SimpleEvent tmp47 = cur->data;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(1597)
										bool tmp48 = tmp45->lt(tmp46,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(1597)
										if ((tmp48)){
											HX_STACK_LINE(1597)
											cur = cur->prev;
										}
										else{
											HX_STACK_LINE(1598)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp49 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(1598)
											::zpp_nape::geom::ZPP_SimpleEvent tmp50 = cur->data;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(1598)
											::zpp_nape::geom::ZPP_SimpleEvent tmp51 = intx1;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(1598)
											bool tmp52 = tmp49->lt(tmp50,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(1598)
											if ((tmp52)){
												HX_STACK_LINE(1598)
												cur = cur->next;
											}
											else{
												HX_STACK_LINE(1599)
												break;
											}
										}
									}
									HX_STACK_LINE(1601)
									tmp41 = cur;
								}
								HX_STACK_LINE(1594)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ex = tmp41;		HX_STACK_VAR(ex,"ex");
								HX_STACK_LINE(1603)
								bool tmp42 = (ex == null());		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1603)
								if ((tmp42)){
									HX_STACK_LINE(1604)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp43;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1604)
									{
										HX_STACK_LINE(1605)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp44 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(1605)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = tmp44->parent;		HX_STACK_VAR(cur,"cur");
										HX_STACK_LINE(1606)
										while((true)){
											HX_STACK_LINE(1606)
											bool tmp45 = (cur != null());		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(1606)
											bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(1606)
											if ((tmp46)){
												HX_STACK_LINE(1606)
												break;
											}
											HX_STACK_LINE(1607)
											::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp47 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(1607)
											::zpp_nape::geom::ZPP_SimpleEvent tmp48 = intx1;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(1607)
											::zpp_nape::geom::ZPP_SimpleEvent tmp49 = cur->data;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(1607)
											bool tmp50 = tmp47->lt(tmp48,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(1607)
											if ((tmp50)){
												HX_STACK_LINE(1607)
												cur = cur->prev;
											}
											else{
												HX_STACK_LINE(1608)
												::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp51 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(1608)
												::zpp_nape::geom::ZPP_SimpleEvent tmp52 = cur->data;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(1608)
												::zpp_nape::geom::ZPP_SimpleEvent tmp53 = intx1;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(1608)
												bool tmp54 = tmp51->lt(tmp52,tmp53);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(1608)
												if ((tmp54)){
													HX_STACK_LINE(1608)
													cur = cur->next;
												}
												else{
													HX_STACK_LINE(1609)
													break;
												}
											}
										}
										HX_STACK_LINE(1611)
										tmp43 = cur;
									}
									HX_STACK_LINE(1604)
									::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent vx = tmp43;		HX_STACK_VAR(vx,"vx");
									HX_STACK_LINE(1613)
									bool tmp44 = (vx != null());		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1613)
									if ((tmp44)){
										HX_STACK_LINE(1614)
										{
											HX_STACK_LINE(1615)
											::zpp_nape::geom::ZPP_SimpleVert o = intx1->vertex;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1624)
											{
												HX_STACK_LINE(1624)
												o->links->clear();
												HX_STACK_LINE(1624)
												o->node = null();
												HX_STACK_LINE(1624)
												o->forced = false;
											}
											HX_STACK_LINE(1625)
											::zpp_nape::geom::ZPP_SimpleVert tmp45 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(1625)
											o->next = tmp45;
											HX_STACK_LINE(1626)
											::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
										}
										HX_STACK_LINE(1631)
										::zpp_nape::geom::ZPP_SimpleVert tmp45 = vx->data->vertex;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(1631)
										intx1->vertex = tmp45;
										HX_STACK_LINE(1632)
										vx->data = intx1;
										HX_STACK_LINE(1633)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp46 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(1633)
										::zpp_nape::geom::ZPP_SimpleEvent tmp47 = intx1;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(1633)
										tmp46->insert(tmp47);
									}
									else{
										HX_STACK_LINE(1636)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp45 = ::zpp_nape::geom::ZPP_Simple_obj::queue;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(1636)
										::zpp_nape::geom::ZPP_SimpleEvent tmp46 = intx1;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(1636)
										tmp45->insert(tmp46);
										HX_STACK_LINE(1637)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp47 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(1637)
										::zpp_nape::geom::ZPP_SimpleEvent tmp48 = intx1;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(1637)
										tmp47->insert(tmp48);
									}
									HX_STACK_LINE(1639)
									int tmp45 = a->id;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1639)
									int tmp46 = a->prev->id;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1639)
									bool tmp47 = (tmp45 < tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1639)
									if ((tmp47)){
										HX_STACK_LINE(1639)
										::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp48 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(1639)
										::zpp_nape::util::Hashable2_Boolfalse tmp49;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(1639)
										{
											HX_STACK_LINE(1639)
											::zpp_nape::util::Hashable2_Boolfalse tmp50;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(1639)
											{
												HX_STACK_LINE(1639)
												::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(1639)
												{
													HX_STACK_LINE(1639)
													::zpp_nape::util::Hashable2_Boolfalse tmp51 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(1639)
													bool tmp52 = (tmp51 == null());		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(1639)
													if ((tmp52)){
														HX_STACK_LINE(1639)
														::zpp_nape::util::Hashable2_Boolfalse tmp53 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(1639)
														ret = tmp53;
													}
													else{
														HX_STACK_LINE(1639)
														::zpp_nape::util::Hashable2_Boolfalse tmp53 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(1639)
														ret = tmp53;
														HX_STACK_LINE(1639)
														::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
														HX_STACK_LINE(1639)
														ret->next = null();
													}
													HX_STACK_LINE(1639)
													Dynamic();
												}
												HX_STACK_LINE(1639)
												ret->id = a->id;
												HX_STACK_LINE(1639)
												int tmp51 = a->prev->id;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(1639)
												ret->di = tmp51;
												HX_STACK_LINE(1639)
												tmp50 = ret;
											}
											HX_STACK_LINE(1639)
											::zpp_nape::util::Hashable2_Boolfalse ret = tmp50;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(1639)
											ret->value = true;
											HX_STACK_LINE(1639)
											tmp49 = ret;
										}
										HX_STACK_LINE(1639)
										tmp48->add(tmp49);
									}
									else{
										HX_STACK_LINE(1640)
										::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp48 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(1640)
										::zpp_nape::util::Hashable2_Boolfalse tmp49;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(1640)
										{
											HX_STACK_LINE(1640)
											::zpp_nape::util::Hashable2_Boolfalse tmp50;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(1640)
											{
												HX_STACK_LINE(1640)
												::zpp_nape::util::Hashable2_Boolfalse ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(1640)
												{
													HX_STACK_LINE(1640)
													::zpp_nape::util::Hashable2_Boolfalse tmp51 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(1640)
													bool tmp52 = (tmp51 == null());		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(1640)
													if ((tmp52)){
														HX_STACK_LINE(1640)
														::zpp_nape::util::Hashable2_Boolfalse tmp53 = ::zpp_nape::util::Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(1640)
														ret = tmp53;
													}
													else{
														HX_STACK_LINE(1640)
														::zpp_nape::util::Hashable2_Boolfalse tmp53 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(1640)
														ret = tmp53;
														HX_STACK_LINE(1640)
														::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = ret->next;
														HX_STACK_LINE(1640)
														ret->next = null();
													}
													HX_STACK_LINE(1640)
													Dynamic();
												}
												HX_STACK_LINE(1640)
												int tmp51 = a->prev->id;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(1640)
												ret->id = tmp51;
												HX_STACK_LINE(1640)
												ret->di = a->id;
												HX_STACK_LINE(1640)
												tmp50 = ret;
											}
											HX_STACK_LINE(1640)
											::zpp_nape::util::Hashable2_Boolfalse ret = tmp50;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(1640)
											ret->value = true;
											HX_STACK_LINE(1640)
											tmp49 = ret;
										}
										HX_STACK_LINE(1640)
										tmp48->add(tmp49);
									}
								}
								else{
									HX_STACK_LINE(1643)
									::zpp_nape::geom::ZPP_SimpleEvent x = ex->data;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1645)
									bool tmp43 = (x->segment != intx1->segment);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1645)
									bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1645)
									bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1645)
									if ((tmp44)){
										HX_STACK_LINE(1645)
										tmp45 = (intx1->segment2 != x->segment2);
									}
									else{
										HX_STACK_LINE(1645)
										tmp45 = true;
									}
									HX_STACK_LINE(1645)
									if ((tmp45)){
										HX_STACK_LINE(1645)
										HX_STACK_DO_THROW(HX_HCSTRING("corner case 2, shiiiit.","\xb0","\x6f","\x0e","\x6b"));
									}
									HX_STACK_LINE(1647)
									{
										HX_STACK_LINE(1648)
										::zpp_nape::geom::ZPP_SimpleVert o = intx1->vertex;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1657)
										{
											HX_STACK_LINE(1657)
											o->links->clear();
											HX_STACK_LINE(1657)
											o->node = null();
											HX_STACK_LINE(1657)
											o->forced = false;
										}
										HX_STACK_LINE(1658)
										::zpp_nape::geom::ZPP_SimpleVert tmp46 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(1658)
										o->next = tmp46;
										HX_STACK_LINE(1659)
										::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1664)
									{
										HX_STACK_LINE(1665)
										::zpp_nape::geom::ZPP_SimpleEvent o = intx1;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1674)
										{
											HX_STACK_LINE(1674)
											o->vertex = null();
											HX_STACK_LINE(1674)
											::zpp_nape::geom::ZPP_SimpleSeg tmp46 = o->segment2 = null();		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(1674)
											o->segment = tmp46;
											HX_STACK_LINE(1674)
											o->node = null();
										}
										HX_STACK_LINE(1675)
										::zpp_nape::geom::ZPP_SimpleEvent tmp46 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(1675)
										o->next = tmp46;
										HX_STACK_LINE(1676)
										::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
									}
								}
							}
							else{
								HX_STACK_LINE(1684)
								{
									HX_STACK_LINE(1685)
									::zpp_nape::geom::ZPP_SimpleVert o = intx1->vertex;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1694)
									{
										HX_STACK_LINE(1694)
										o->links->clear();
										HX_STACK_LINE(1694)
										o->node = null();
										HX_STACK_LINE(1694)
										o->forced = false;
									}
									HX_STACK_LINE(1695)
									::zpp_nape::geom::ZPP_SimpleVert tmp41 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1695)
									o->next = tmp41;
									HX_STACK_LINE(1696)
									::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1701)
								{
									HX_STACK_LINE(1702)
									::zpp_nape::geom::ZPP_SimpleEvent o = intx1;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1711)
									{
										HX_STACK_LINE(1711)
										o->vertex = null();
										HX_STACK_LINE(1711)
										::zpp_nape::geom::ZPP_SimpleSeg tmp41 = o->segment2 = null();		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(1711)
										o->segment = tmp41;
										HX_STACK_LINE(1711)
										o->node = null();
									}
									HX_STACK_LINE(1712)
									::zpp_nape::geom::ZPP_SimpleEvent tmp41 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1712)
									o->next = tmp41;
									HX_STACK_LINE(1713)
									::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
								}
							}
						}
					}
				}
				HX_STACK_LINE(1722)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent tmp28 = ::zpp_nape::geom::ZPP_Simple_obj::ints;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1722)
				::zpp_nape::geom::ZPP_SimpleEvent tmp29 = e;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1722)
				tmp28->remove(tmp29);
			}
		}
		HX_STACK_LINE(1724)
		{
			HX_STACK_LINE(1725)
			::zpp_nape::geom::ZPP_SimpleEvent o = e;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1734)
			{
				HX_STACK_LINE(1734)
				o->vertex = null();
				HX_STACK_LINE(1734)
				::zpp_nape::geom::ZPP_SimpleSeg tmp17 = o->segment2 = null();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1734)
				o->segment = tmp17;
				HX_STACK_LINE(1734)
				o->node = null();
			}
			HX_STACK_LINE(1735)
			::zpp_nape::geom::ZPP_SimpleEvent tmp17 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1735)
			o->next = tmp17;
			HX_STACK_LINE(1736)
			::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1759)
	{
		HX_STACK_LINE(1759)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1759)
		::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp8 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1759)
		int tmp9 = tmp8->table->length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1759)
		int _g = tmp9;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1759)
		while((true)){
			HX_STACK_LINE(1759)
			bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1759)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1759)
			if ((tmp11)){
				HX_STACK_LINE(1759)
				break;
			}
			HX_STACK_LINE(1759)
			int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1759)
			int i = tmp12;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1760)
			::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp13 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1760)
			Array< ::Dynamic > tmp14 = tmp13->table;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1760)
			int tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1760)
			::zpp_nape::util::Hashable2_Boolfalse tmp16 = tmp14->__get(tmp15).StaticCast< ::zpp_nape::util::Hashable2_Boolfalse >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1760)
			::zpp_nape::util::Hashable2_Boolfalse n = tmp16;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(1761)
			bool tmp17 = (n == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1761)
			if ((tmp17)){
				HX_STACK_LINE(1761)
				continue;
			}
			HX_STACK_LINE(1762)
			while((true)){
				HX_STACK_LINE(1762)
				bool tmp18 = (n != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1762)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1762)
				if ((tmp19)){
					HX_STACK_LINE(1762)
					break;
				}
				HX_STACK_LINE(1763)
				::zpp_nape::util::Hashable2_Boolfalse t = n->hnext;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1764)
				n->hnext = null();
				HX_STACK_LINE(1765)
				{
					HX_STACK_LINE(1766)
					::zpp_nape::util::Hashable2_Boolfalse o = n;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1776)
					::zpp_nape::util::Hashable2_Boolfalse tmp20 = ::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1776)
					o->next = tmp20;
					HX_STACK_LINE(1777)
					::zpp_nape::util::Hashable2_Boolfalse_obj::zpp_pool = o;
				}
				HX_STACK_LINE(1782)
				n = t;
			}
			HX_STACK_LINE(1784)
			::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp18 = ::zpp_nape::geom::ZPP_Simple_obj::inthash;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1784)
			Array< ::Dynamic > tmp19 = tmp18->table;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1784)
			int tmp20 = i;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1784)
			tmp19[tmp20] = null();
		}
	}
	HX_STACK_LINE(1787)
	bool tmp8 = (rets == null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1787)
	if ((tmp8)){
		HX_STACK_LINE(1787)
		::zpp_nape::util::ZNPList_ZPP_GeomVert tmp9 = ::zpp_nape::util::ZNPList_ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1787)
		rets = tmp9;
	}
	HX_STACK_LINE(1788)
	while((true)){
		HX_STACK_LINE(1788)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp9 = ::zpp_nape::geom::ZPP_Simple_obj::vertices;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1788)
		bool tmp10 = tmp9->empty();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1788)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1788)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1788)
		if ((tmp12)){
			HX_STACK_LINE(1788)
			break;
		}
		HX_STACK_LINE(1788)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp13 = ::zpp_nape::geom::ZPP_Simple_obj::vertices;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1788)
		::zpp_nape::util::ZNPList_ZPP_GeomVert tmp14 = rets;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1788)
		::zpp_nape::geom::ZPP_Simple_obj::clip_polygon(tmp13,tmp14);
	}
	HX_STACK_LINE(1789)
	::zpp_nape::util::ZNPList_ZPP_GeomVert tmp9 = rets;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1789)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Simple_obj,decompose,return )

Void ZPP_Simple_obj::clip_polygon( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert vertices,::zpp_nape::util::ZNPList_ZPP_GeomVert rets){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Simple","clip_polygon",0x0724c711,"zpp_nape.geom.ZPP_Simple.clip_polygon","zpp_nape/geom/Simple.hx",1791,0x62f156db)
		HX_STACK_ARG(vertices,"vertices")
		HX_STACK_ARG(rets,"rets")
		HX_STACK_LINE(1792)
		::zpp_nape::geom::ZPP_GeomVert ret = null();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1793)
		::zpp_nape::geom::ZPP_SimpleVert tmp = vertices->first();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1793)
		::zpp_nape::geom::ZPP_SimpleVert cur = tmp;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1802)
		::zpp_nape::geom::ZPP_SimpleVert fst = cur;		HX_STACK_VAR(fst,"fst");
		HX_STACK_LINE(1803)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp1 = cur->links->parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1803)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert pren = tmp1;		HX_STACK_VAR(pren,"pren");
		HX_STACK_LINE(1804)
		bool tmp2 = (pren->prev == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1804)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1804)
		if ((tmp2)){
			HX_STACK_LINE(1804)
			tmp3 = pren->next;
		}
		else{
			HX_STACK_LINE(1804)
			tmp3 = pren->prev;
		}
		HX_STACK_LINE(1804)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert nxtn = tmp3;		HX_STACK_VAR(nxtn,"nxtn");
		HX_STACK_LINE(1805)
		::zpp_nape::geom::ZPP_SimpleVert pre = pren->data;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1806)
		::zpp_nape::geom::ZPP_SimpleVert nxt = nxtn->data;		HX_STACK_VAR(nxt,"nxt");
		HX_STACK_LINE(1807)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1807)
		{
			HX_STACK_LINE(1808)
			Float ux = ((Float)0.0);		HX_STACK_VAR(ux,"ux");
			HX_STACK_LINE(1809)
			Float uy = ((Float)0.0);		HX_STACK_VAR(uy,"uy");
			HX_STACK_LINE(1810)
			{
				HX_STACK_LINE(1811)
				Float tmp5 = (cur->x - pre->x);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1811)
				ux = tmp5;
				HX_STACK_LINE(1812)
				Float tmp6 = (cur->y - pre->y);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1812)
				uy = tmp6;
			}
			HX_STACK_LINE(1814)
			Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
			HX_STACK_LINE(1815)
			Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
			HX_STACK_LINE(1816)
			{
				HX_STACK_LINE(1817)
				Float tmp5 = (nxt->x - cur->x);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1817)
				vx = tmp5;
				HX_STACK_LINE(1818)
				Float tmp6 = (nxt->y - cur->y);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1818)
				vy = tmp6;
			}
			HX_STACK_LINE(1820)
			Float tmp5 = (vy * ux);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1820)
			Float tmp6 = (vx * uy);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1820)
			tmp4 = (tmp5 - tmp6);
		}
		HX_STACK_LINE(1807)
		bool tmp5 = (tmp4 < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1807)
		if ((tmp5)){
			HX_STACK_LINE(1821)
			nxt = pre;
		}
		HX_STACK_LINE(1822)
		::zpp_nape::geom::ZPP_GeomVert tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1822)
		{
			HX_STACK_LINE(1823)
			::zpp_nape::geom::ZPP_GeomVert tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1823)
			{
				HX_STACK_LINE(1823)
				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1823)
				{
					HX_STACK_LINE(1823)
					::zpp_nape::geom::ZPP_GeomVert tmp8 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1823)
					bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1823)
					if ((tmp9)){
						HX_STACK_LINE(1823)
						::zpp_nape::geom::ZPP_GeomVert tmp10 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1823)
						ret1 = tmp10;
					}
					else{
						HX_STACK_LINE(1823)
						::zpp_nape::geom::ZPP_GeomVert tmp10 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1823)
						ret1 = tmp10;
						HX_STACK_LINE(1823)
						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
						HX_STACK_LINE(1823)
						ret1->next = null();
					}
					HX_STACK_LINE(1823)
					ret1->forced = false;
				}
				HX_STACK_LINE(1823)
				{
					HX_STACK_LINE(1823)
					ret1->x = cur->x;
					HX_STACK_LINE(1823)
					ret1->y = cur->y;
					HX_STACK_LINE(1823)
					{
					}
				}
				HX_STACK_LINE(1823)
				tmp7 = ret1;
			}
			HX_STACK_LINE(1823)
			::zpp_nape::geom::ZPP_GeomVert obj = tmp7;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(1824)
			bool tmp8 = (ret == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1824)
			if ((tmp8)){
				HX_STACK_LINE(1824)
				::zpp_nape::geom::ZPP_GeomVert tmp9 = obj->next = obj;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1824)
				::zpp_nape::geom::ZPP_GeomVert tmp10 = obj->prev = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1824)
				ret = tmp10;
			}
			else{
				HX_STACK_LINE(1826)
				obj->prev = ret;
				HX_STACK_LINE(1827)
				obj->next = ret->next;
				HX_STACK_LINE(1828)
				ret->next->prev = obj;
				HX_STACK_LINE(1829)
				ret->next = obj;
			}
			HX_STACK_LINE(1831)
			tmp6 = obj;
		}
		HX_STACK_LINE(1822)
		ret = tmp6;
		HX_STACK_LINE(1833)
		ret->forced = cur->forced;
		HX_STACK_LINE(1834)
		while((true)){
			HX_STACK_LINE(1835)
			::zpp_nape::geom::ZPP_SimpleVert tmp7 = nxt;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1835)
			cur->links->remove(tmp7);
			HX_STACK_LINE(1836)
			::zpp_nape::geom::ZPP_SimpleVert tmp8 = cur;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1836)
			nxt->links->remove(tmp8);
			HX_STACK_LINE(1837)
			bool tmp9 = (nxt == fst);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1837)
			if ((tmp9)){
				HX_STACK_LINE(1838)
				bool tmp10 = cur->links->empty();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1838)
				if ((tmp10)){
					HX_STACK_LINE(1839)
					::zpp_nape::geom::ZPP_SimpleVert tmp11 = cur;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1839)
					vertices->remove(tmp11);
					HX_STACK_LINE(1840)
					{
						HX_STACK_LINE(1841)
						::zpp_nape::geom::ZPP_SimpleVert o = cur;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1850)
						{
							HX_STACK_LINE(1850)
							o->links->clear();
							HX_STACK_LINE(1850)
							o->node = null();
							HX_STACK_LINE(1850)
							o->forced = false;
						}
						HX_STACK_LINE(1851)
						::zpp_nape::geom::ZPP_SimpleVert tmp12 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1851)
						o->next = tmp12;
						HX_STACK_LINE(1852)
						::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1858)
				break;
			}
			HX_STACK_LINE(1860)
			::zpp_nape::geom::ZPP_GeomVert tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1860)
			{
				HX_STACK_LINE(1861)
				::zpp_nape::geom::ZPP_GeomVert tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1861)
				{
					HX_STACK_LINE(1861)
					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1861)
					{
						HX_STACK_LINE(1861)
						::zpp_nape::geom::ZPP_GeomVert tmp12 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1861)
						bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1861)
						if ((tmp13)){
							HX_STACK_LINE(1861)
							::zpp_nape::geom::ZPP_GeomVert tmp14 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1861)
							ret1 = tmp14;
						}
						else{
							HX_STACK_LINE(1861)
							::zpp_nape::geom::ZPP_GeomVert tmp14 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1861)
							ret1 = tmp14;
							HX_STACK_LINE(1861)
							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1861)
							ret1->next = null();
						}
						HX_STACK_LINE(1861)
						ret1->forced = false;
					}
					HX_STACK_LINE(1861)
					{
						HX_STACK_LINE(1861)
						ret1->x = nxt->x;
						HX_STACK_LINE(1861)
						ret1->y = nxt->y;
						HX_STACK_LINE(1861)
						{
						}
					}
					HX_STACK_LINE(1861)
					tmp11 = ret1;
				}
				HX_STACK_LINE(1861)
				::zpp_nape::geom::ZPP_GeomVert obj = tmp11;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(1862)
				bool tmp12 = (ret == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1862)
				if ((tmp12)){
					HX_STACK_LINE(1862)
					::zpp_nape::geom::ZPP_GeomVert tmp13 = obj->next = obj;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1862)
					::zpp_nape::geom::ZPP_GeomVert tmp14 = obj->prev = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1862)
					ret = tmp14;
				}
				else{
					HX_STACK_LINE(1864)
					obj->prev = ret;
					HX_STACK_LINE(1865)
					obj->next = ret->next;
					HX_STACK_LINE(1866)
					ret->next->prev = obj;
					HX_STACK_LINE(1867)
					ret->next = obj;
				}
				HX_STACK_LINE(1869)
				tmp10 = obj;
			}
			HX_STACK_LINE(1860)
			ret = tmp10;
			HX_STACK_LINE(1871)
			ret->forced = nxt->forced;
			HX_STACK_LINE(1880)
			bool tmp11 = nxt->links->singular();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1880)
			if ((tmp11)){
				HX_STACK_LINE(1881)
				bool tmp12 = cur->links->empty();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1881)
				if ((tmp12)){
					HX_STACK_LINE(1882)
					::zpp_nape::geom::ZPP_SimpleVert tmp13 = cur;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1882)
					vertices->remove(tmp13);
					HX_STACK_LINE(1883)
					{
						HX_STACK_LINE(1884)
						::zpp_nape::geom::ZPP_SimpleVert o = cur;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1893)
						{
							HX_STACK_LINE(1893)
							o->links->clear();
							HX_STACK_LINE(1893)
							o->node = null();
							HX_STACK_LINE(1893)
							o->forced = false;
						}
						HX_STACK_LINE(1894)
						::zpp_nape::geom::ZPP_SimpleVert tmp14 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1894)
						o->next = tmp14;
						HX_STACK_LINE(1895)
						::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1901)
				cur = nxt;
				HX_STACK_LINE(1902)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp13 = nxt->links->parent;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1902)
				nxt = tmp13->data;
			}
			else{
				HX_STACK_LINE(1905)
				::zpp_nape::geom::ZPP_SimpleVert min = null();		HX_STACK_VAR(min,"min");
				HX_STACK_LINE(1906)
				Float minl = ((Float)0.0);		HX_STACK_VAR(minl,"minl");
				HX_STACK_LINE(1907)
				{
					HX_STACK_LINE(1916)
					bool tmp12 = nxt->links->empty();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1916)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1916)
					if ((tmp13)){
						HX_STACK_LINE(1917)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp14 = nxt->links->parent;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1917)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleVert set_ite = tmp14;		HX_STACK_VAR(set_ite,"set_ite");
						HX_STACK_LINE(1918)
						while((true)){
							HX_STACK_LINE(1918)
							bool tmp15 = (set_ite->prev != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1918)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1918)
							if ((tmp16)){
								HX_STACK_LINE(1918)
								break;
							}
							HX_STACK_LINE(1918)
							set_ite = set_ite->prev;
						}
						HX_STACK_LINE(1919)
						while((true)){
							HX_STACK_LINE(1919)
							bool tmp15 = (set_ite != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1919)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1919)
							if ((tmp16)){
								HX_STACK_LINE(1919)
								break;
							}
							HX_STACK_LINE(1920)
							::zpp_nape::geom::ZPP_SimpleVert p = set_ite->data;		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(1921)
							{
								HX_STACK_LINE(1922)
								bool tmp17 = (min == null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1922)
								if ((tmp17)){
									HX_STACK_LINE(1923)
									min = p;
									HX_STACK_LINE(1924)
									Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1924)
									{
										HX_STACK_LINE(1925)
										Float ux = ((Float)0.0);		HX_STACK_VAR(ux,"ux");
										HX_STACK_LINE(1926)
										Float uy = ((Float)0.0);		HX_STACK_VAR(uy,"uy");
										HX_STACK_LINE(1927)
										{
											HX_STACK_LINE(1928)
											Float tmp19 = (nxt->x - cur->x);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1928)
											ux = tmp19;
											HX_STACK_LINE(1929)
											Float tmp20 = (nxt->y - cur->y);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1929)
											uy = tmp20;
										}
										HX_STACK_LINE(1931)
										Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
										HX_STACK_LINE(1932)
										Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
										HX_STACK_LINE(1933)
										{
											HX_STACK_LINE(1934)
											Float tmp19 = (p->x - nxt->x);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1934)
											vx = tmp19;
											HX_STACK_LINE(1935)
											Float tmp20 = (p->y - nxt->y);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1935)
											vy = tmp20;
										}
										HX_STACK_LINE(1937)
										Float tmp19 = (vy * ux);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1937)
										Float tmp20 = (vx * uy);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1937)
										tmp18 = (tmp19 - tmp20);
									}
									HX_STACK_LINE(1924)
									minl = tmp18;
								}
								else{
									HX_STACK_LINE(1941)
									Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1941)
									{
										HX_STACK_LINE(1942)
										Float ux = ((Float)0.0);		HX_STACK_VAR(ux,"ux");
										HX_STACK_LINE(1943)
										Float uy = ((Float)0.0);		HX_STACK_VAR(uy,"uy");
										HX_STACK_LINE(1944)
										{
											HX_STACK_LINE(1945)
											Float tmp19 = (nxt->x - cur->x);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1945)
											ux = tmp19;
											HX_STACK_LINE(1946)
											Float tmp20 = (nxt->y - cur->y);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1946)
											uy = tmp20;
										}
										HX_STACK_LINE(1948)
										Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
										HX_STACK_LINE(1949)
										Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
										HX_STACK_LINE(1950)
										{
											HX_STACK_LINE(1951)
											Float tmp19 = (p->x - nxt->x);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1951)
											vx = tmp19;
											HX_STACK_LINE(1952)
											Float tmp20 = (p->y - nxt->y);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1952)
											vy = tmp20;
										}
										HX_STACK_LINE(1954)
										Float tmp19 = (vy * ux);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1954)
										Float tmp20 = (vx * uy);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1954)
										tmp18 = (tmp19 - tmp20);
									}
									HX_STACK_LINE(1941)
									Float nleft = tmp18;		HX_STACK_VAR(nleft,"nleft");
									HX_STACK_LINE(1956)
									bool tmp19 = (nleft > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1956)
									bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1956)
									if ((tmp19)){
										HX_STACK_LINE(1956)
										tmp20 = (minl <= (int)0);
									}
									else{
										HX_STACK_LINE(1956)
										tmp20 = false;
									}
									HX_STACK_LINE(1956)
									if ((tmp20)){
										HX_STACK_LINE(1957)
										min = p;
										HX_STACK_LINE(1958)
										minl = nleft;
									}
									else{
										HX_STACK_LINE(1960)
										Float tmp21 = (minl * nleft);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1960)
										bool tmp22 = (tmp21 >= (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1960)
										if ((tmp22)){
											HX_STACK_LINE(1961)
											Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(1961)
											{
												HX_STACK_LINE(1962)
												Float ux = ((Float)0.0);		HX_STACK_VAR(ux,"ux");
												HX_STACK_LINE(1963)
												Float uy = ((Float)0.0);		HX_STACK_VAR(uy,"uy");
												HX_STACK_LINE(1964)
												{
													HX_STACK_LINE(1965)
													Float tmp24 = (nxt->x - p->x);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(1965)
													ux = tmp24;
													HX_STACK_LINE(1966)
													Float tmp25 = (nxt->y - p->y);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1966)
													uy = tmp25;
												}
												HX_STACK_LINE(1968)
												Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
												HX_STACK_LINE(1969)
												Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
												HX_STACK_LINE(1970)
												{
													HX_STACK_LINE(1971)
													Float tmp24 = (min->x - nxt->x);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(1971)
													vx = tmp24;
													HX_STACK_LINE(1972)
													Float tmp25 = (min->y - nxt->y);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1972)
													vy = tmp25;
												}
												HX_STACK_LINE(1974)
												Float tmp24 = (vy * ux);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(1974)
												Float tmp25 = (vx * uy);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(1974)
												tmp23 = (tmp24 - tmp25);
											}
											HX_STACK_LINE(1961)
											Float pleft = tmp23;		HX_STACK_VAR(pleft,"pleft");
											HX_STACK_LINE(1976)
											bool tmp24 = (pleft > (int)0);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(1976)
											if ((tmp24)){
												HX_STACK_LINE(1977)
												min = p;
												HX_STACK_LINE(1978)
												minl = nleft;
											}
										}
									}
								}
							}
							HX_STACK_LINE(1983)
							bool tmp17 = (set_ite->next != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1983)
							if ((tmp17)){
								HX_STACK_LINE(1984)
								set_ite = set_ite->next;
								HX_STACK_LINE(1985)
								while((true)){
									HX_STACK_LINE(1985)
									bool tmp18 = (set_ite->prev != null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1985)
									bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1985)
									if ((tmp19)){
										HX_STACK_LINE(1985)
										break;
									}
									HX_STACK_LINE(1985)
									set_ite = set_ite->prev;
								}
							}
							else{
								HX_STACK_LINE(1988)
								while((true)){
									HX_STACK_LINE(1988)
									bool tmp18 = (set_ite->parent != null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1988)
									bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1988)
									if ((tmp18)){
										HX_STACK_LINE(1988)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp20 = set_ite;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1988)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp21 = set_ite->parent->next;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1988)
										::zpp_nape::util::ZPP_Set_ZPP_SimpleVert tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1988)
										tmp19 = (tmp20 == tmp22);
									}
									else{
										HX_STACK_LINE(1988)
										tmp19 = false;
									}
									HX_STACK_LINE(1988)
									bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1988)
									if ((tmp20)){
										HX_STACK_LINE(1988)
										break;
									}
									HX_STACK_LINE(1988)
									set_ite = set_ite->parent;
								}
								HX_STACK_LINE(1989)
								set_ite = set_ite->parent;
							}
						}
					}
				}
				HX_STACK_LINE(1994)
				bool tmp12 = cur->links->empty();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1994)
				if ((tmp12)){
					HX_STACK_LINE(1995)
					::zpp_nape::geom::ZPP_SimpleVert tmp13 = cur;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1995)
					vertices->remove(tmp13);
					HX_STACK_LINE(1996)
					{
						HX_STACK_LINE(1997)
						::zpp_nape::geom::ZPP_SimpleVert o = cur;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(2006)
						{
							HX_STACK_LINE(2006)
							o->links->clear();
							HX_STACK_LINE(2006)
							o->node = null();
							HX_STACK_LINE(2006)
							o->forced = false;
						}
						HX_STACK_LINE(2007)
						::zpp_nape::geom::ZPP_SimpleVert tmp14 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(2007)
						o->next = tmp14;
						HX_STACK_LINE(2008)
						::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(2014)
				cur = nxt;
				HX_STACK_LINE(2015)
				nxt = min;
			}
		}
		HX_STACK_LINE(2026)
		{
			HX_STACK_LINE(2027)
			::zpp_nape::geom::ZPP_SimpleVert tmp7 = fst;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2027)
			vertices->remove(tmp7);
			HX_STACK_LINE(2028)
			{
				HX_STACK_LINE(2029)
				::zpp_nape::geom::ZPP_SimpleVert o = fst;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2038)
				{
					HX_STACK_LINE(2038)
					o->links->clear();
					HX_STACK_LINE(2038)
					o->node = null();
					HX_STACK_LINE(2038)
					o->forced = false;
				}
				HX_STACK_LINE(2039)
				::zpp_nape::geom::ZPP_SimpleVert tmp8 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2039)
				o->next = tmp8;
				HX_STACK_LINE(2040)
				::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(2046)
		::zpp_nape::geom::ZPP_GeomVert tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2046)
		rets->add(tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Simple_obj,clip_polygon,(void))

::zpp_nape::util::ZNPList_ZPP_SimpleVert ZPP_Simple_obj::list_vertices;

::zpp_nape::util::ZNPList_ZPP_SimpleEvent ZPP_Simple_obj::list_queue;

bool ZPP_Simple_obj::isSimple( ::zpp_nape::geom::ZPP_GeomVert poly){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Simple","isSimple",0x2a953102,"zpp_nape.geom.ZPP_Simple.isSimple","zpp_nape/geom/Simple.hx",2050,0x62f156db)
	HX_STACK_ARG(poly,"poly")
	HX_STACK_LINE(2051)
	::zpp_nape::geom::ZPP_SimpleSweep tmp = ::zpp_nape::geom::ZPP_Simple_obj::sweep;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2051)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2051)
	if ((tmp1)){
		HX_STACK_LINE(2052)
		::zpp_nape::geom::ZPP_SimpleSweep tmp2 = ::zpp_nape::geom::ZPP_SimpleSweep_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2052)
		::zpp_nape::geom::ZPP_Simple_obj::sweep = tmp2;
		HX_STACK_LINE(2053)
		::zpp_nape::util::FastHash2_Hashable2_Boolfalse tmp3 = ::zpp_nape::util::FastHash2_Hashable2_Boolfalse_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2053)
		::zpp_nape::geom::ZPP_Simple_obj::inthash = tmp3;
	}
	HX_STACK_LINE(2055)
	::zpp_nape::util::ZNPList_ZPP_SimpleVert tmp2 = ::zpp_nape::geom::ZPP_Simple_obj::list_vertices;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2055)
	::zpp_nape::util::ZNPList_ZPP_SimpleVert vertices = tmp2;		HX_STACK_VAR(vertices,"vertices");
	HX_STACK_LINE(2056)
	bool tmp3 = (vertices == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2056)
	if ((tmp3)){
		HX_STACK_LINE(2056)
		::zpp_nape::util::ZNPList_ZPP_SimpleVert tmp4 = ::zpp_nape::util::ZNPList_ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2056)
		::zpp_nape::util::ZNPList_ZPP_SimpleVert tmp5 = ::zpp_nape::geom::ZPP_Simple_obj::list_vertices = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2056)
		vertices = tmp5;
	}
	HX_STACK_LINE(2057)
	{
		HX_STACK_LINE(2058)
		::zpp_nape::geom::ZPP_GeomVert F = poly;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(2059)
		::zpp_nape::geom::ZPP_GeomVert L = poly;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(2060)
		bool tmp4 = (F != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2060)
		if ((tmp4)){
			HX_STACK_LINE(2061)
			::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(2062)
			while((true)){
				HX_STACK_LINE(2063)
				::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(2065)
				{
					HX_STACK_LINE(2066)
					::zpp_nape::geom::ZPP_SimpleVert tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2066)
					{
						HX_STACK_LINE(2066)
						::zpp_nape::geom::ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(2066)
						{
							HX_STACK_LINE(2066)
							::zpp_nape::geom::ZPP_SimpleVert tmp6 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(2066)
							bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(2066)
							if ((tmp7)){
								HX_STACK_LINE(2066)
								::zpp_nape::geom::ZPP_SimpleVert tmp8 = ::zpp_nape::geom::ZPP_SimpleVert_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(2066)
								ret = tmp8;
							}
							else{
								HX_STACK_LINE(2066)
								::zpp_nape::geom::ZPP_SimpleVert tmp8 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(2066)
								ret = tmp8;
								HX_STACK_LINE(2066)
								::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = ret->next;
								HX_STACK_LINE(2066)
								ret->next = null();
							}
							HX_STACK_LINE(2066)
							Dynamic();
						}
						HX_STACK_LINE(2066)
						{
							HX_STACK_LINE(2066)
							ret->x = v->x;
							HX_STACK_LINE(2066)
							ret->y = v->y;
							HX_STACK_LINE(2066)
							{
							}
						}
						HX_STACK_LINE(2066)
						tmp5 = ret;
					}
					HX_STACK_LINE(2066)
					vertices->add(tmp5);
				}
				HX_STACK_LINE(2069)
				nite = nite->next;
				HX_STACK_LINE(2071)
				bool tmp5 = (nite != L);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2071)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2062)
				if ((tmp6)){
					HX_STACK_LINE(2062)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(2074)
	::zpp_nape::util::ZNPList_ZPP_SimpleEvent tmp4 = ::zpp_nape::geom::ZPP_Simple_obj::list_queue;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2074)
	::zpp_nape::util::ZNPList_ZPP_SimpleEvent queue = tmp4;		HX_STACK_VAR(queue,"queue");
	HX_STACK_LINE(2075)
	bool tmp5 = (queue == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2075)
	if ((tmp5)){
		HX_STACK_LINE(2075)
		::zpp_nape::util::ZNPList_ZPP_SimpleEvent tmp6 = ::zpp_nape::util::ZNPList_ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2075)
		::zpp_nape::util::ZNPList_ZPP_SimpleEvent tmp7 = ::zpp_nape::geom::ZPP_Simple_obj::list_queue = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2075)
		queue = tmp7;
	}
	HX_STACK_LINE(2076)
	{
		HX_STACK_LINE(2077)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert cx_ite = vertices->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(2078)
		::zpp_nape::geom::ZPP_SimpleVert u = cx_ite->elt;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(2079)
		cx_ite = cx_ite->next;
		HX_STACK_LINE(2080)
		while((true)){
			HX_STACK_LINE(2080)
			bool tmp6 = (cx_ite != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2080)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2080)
			if ((tmp7)){
				HX_STACK_LINE(2080)
				break;
			}
			HX_STACK_LINE(2081)
			::zpp_nape::geom::ZPP_SimpleVert v = cx_ite->elt;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(2082)
			{
				HX_STACK_LINE(2083)
				::zpp_nape::geom::ZPP_SimpleEvent tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2083)
				{
					HX_STACK_LINE(2083)
					::zpp_nape::geom::ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(2083)
					{
						HX_STACK_LINE(2083)
						::zpp_nape::geom::ZPP_SimpleEvent tmp9 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(2083)
						bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2083)
						if ((tmp10)){
							HX_STACK_LINE(2083)
							::zpp_nape::geom::ZPP_SimpleEvent tmp11 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(2083)
							ret = tmp11;
						}
						else{
							HX_STACK_LINE(2083)
							::zpp_nape::geom::ZPP_SimpleEvent tmp11 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(2083)
							ret = tmp11;
							HX_STACK_LINE(2083)
							::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = ret->next;
							HX_STACK_LINE(2083)
							ret->next = null();
						}
						HX_STACK_LINE(2083)
						Dynamic();
					}
					HX_STACK_LINE(2083)
					ret->vertex = u;
					HX_STACK_LINE(2083)
					tmp8 = ret;
				}
				HX_STACK_LINE(2083)
				::zpp_nape::geom::ZPP_SimpleEvent tmp9 = queue->add(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2083)
				::zpp_nape::geom::ZPP_SimpleEvent e1 = tmp9;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(2084)
				::zpp_nape::geom::ZPP_SimpleEvent tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2084)
				{
					HX_STACK_LINE(2084)
					::zpp_nape::geom::ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(2084)
					{
						HX_STACK_LINE(2084)
						::zpp_nape::geom::ZPP_SimpleEvent tmp11 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(2084)
						bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(2084)
						if ((tmp12)){
							HX_STACK_LINE(2084)
							::zpp_nape::geom::ZPP_SimpleEvent tmp13 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(2084)
							ret = tmp13;
						}
						else{
							HX_STACK_LINE(2084)
							::zpp_nape::geom::ZPP_SimpleEvent tmp13 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(2084)
							ret = tmp13;
							HX_STACK_LINE(2084)
							::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = ret->next;
							HX_STACK_LINE(2084)
							ret->next = null();
						}
						HX_STACK_LINE(2084)
						Dynamic();
					}
					HX_STACK_LINE(2084)
					ret->vertex = v;
					HX_STACK_LINE(2084)
					tmp10 = ret;
				}
				HX_STACK_LINE(2084)
				::zpp_nape::geom::ZPP_SimpleEvent tmp11 = queue->add(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2084)
				::zpp_nape::geom::ZPP_SimpleEvent e2 = tmp11;		HX_STACK_VAR(e2,"e2");
				HX_STACK_LINE(2085)
				::zpp_nape::geom::ZPP_SimpleEvent tmp12 = e1;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2085)
				::zpp_nape::geom::ZPP_SimpleEvent tmp13 = e2;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2085)
				bool tmp14 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::less_xy(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2085)
				::zpp_nape::geom::ZPP_SimpleSeg tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2085)
				if ((tmp14)){
					HX_STACK_LINE(2086)
					e1->type = (int)1;
					HX_STACK_LINE(2087)
					e2->type = (int)2;
					HX_STACK_LINE(2088)
					::zpp_nape::geom::ZPP_SimpleVert tmp16 = u;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2088)
					::zpp_nape::geom::ZPP_SimpleVert tmp17 = v;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2088)
					tmp15 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::get(tmp16,tmp17);
				}
				else{
					HX_STACK_LINE(2091)
					e1->type = (int)2;
					HX_STACK_LINE(2092)
					e2->type = (int)1;
					HX_STACK_LINE(2093)
					::zpp_nape::geom::ZPP_SimpleVert tmp16 = v;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2093)
					::zpp_nape::geom::ZPP_SimpleVert tmp17 = u;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2093)
					tmp15 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::get(tmp16,tmp17);
				}
				HX_STACK_LINE(2085)
				::zpp_nape::geom::ZPP_SimpleSeg tmp16 = e2->segment = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2085)
				e1->segment = tmp16;
			}
			HX_STACK_LINE(2096)
			u = v;
			HX_STACK_LINE(2097)
			cx_ite = cx_ite->next;
		}
		HX_STACK_LINE(2099)
		::zpp_nape::geom::ZPP_SimpleVert tmp6 = vertices->head->elt;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2099)
		::zpp_nape::geom::ZPP_SimpleVert v = tmp6;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(2100)
		{
			HX_STACK_LINE(2101)
			::zpp_nape::geom::ZPP_SimpleEvent tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2101)
			{
				HX_STACK_LINE(2101)
				::zpp_nape::geom::ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2101)
				{
					HX_STACK_LINE(2101)
					::zpp_nape::geom::ZPP_SimpleEvent tmp8 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2101)
					bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2101)
					if ((tmp9)){
						HX_STACK_LINE(2101)
						::zpp_nape::geom::ZPP_SimpleEvent tmp10 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2101)
						ret = tmp10;
					}
					else{
						HX_STACK_LINE(2101)
						::zpp_nape::geom::ZPP_SimpleEvent tmp10 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2101)
						ret = tmp10;
						HX_STACK_LINE(2101)
						::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = ret->next;
						HX_STACK_LINE(2101)
						ret->next = null();
					}
					HX_STACK_LINE(2101)
					Dynamic();
				}
				HX_STACK_LINE(2101)
				ret->vertex = u;
				HX_STACK_LINE(2101)
				tmp7 = ret;
			}
			HX_STACK_LINE(2101)
			::zpp_nape::geom::ZPP_SimpleEvent tmp8 = queue->add(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2101)
			::zpp_nape::geom::ZPP_SimpleEvent e1 = tmp8;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(2102)
			::zpp_nape::geom::ZPP_SimpleEvent tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2102)
			{
				HX_STACK_LINE(2102)
				::zpp_nape::geom::ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2102)
				{
					HX_STACK_LINE(2102)
					::zpp_nape::geom::ZPP_SimpleEvent tmp10 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2102)
					bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2102)
					if ((tmp11)){
						HX_STACK_LINE(2102)
						::zpp_nape::geom::ZPP_SimpleEvent tmp12 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(2102)
						ret = tmp12;
					}
					else{
						HX_STACK_LINE(2102)
						::zpp_nape::geom::ZPP_SimpleEvent tmp12 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(2102)
						ret = tmp12;
						HX_STACK_LINE(2102)
						::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = ret->next;
						HX_STACK_LINE(2102)
						ret->next = null();
					}
					HX_STACK_LINE(2102)
					Dynamic();
				}
				HX_STACK_LINE(2102)
				ret->vertex = v;
				HX_STACK_LINE(2102)
				tmp9 = ret;
			}
			HX_STACK_LINE(2102)
			::zpp_nape::geom::ZPP_SimpleEvent tmp10 = queue->add(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2102)
			::zpp_nape::geom::ZPP_SimpleEvent e2 = tmp10;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(2103)
			::zpp_nape::geom::ZPP_SimpleEvent tmp11 = e1;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2103)
			::zpp_nape::geom::ZPP_SimpleEvent tmp12 = e2;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2103)
			bool tmp13 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::less_xy(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2103)
			::zpp_nape::geom::ZPP_SimpleSeg tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2103)
			if ((tmp13)){
				HX_STACK_LINE(2104)
				e1->type = (int)1;
				HX_STACK_LINE(2105)
				e2->type = (int)2;
				HX_STACK_LINE(2106)
				::zpp_nape::geom::ZPP_SimpleVert tmp15 = u;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2106)
				::zpp_nape::geom::ZPP_SimpleVert tmp16 = v;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2106)
				tmp14 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::get(tmp15,tmp16);
			}
			else{
				HX_STACK_LINE(2109)
				e1->type = (int)2;
				HX_STACK_LINE(2110)
				e2->type = (int)1;
				HX_STACK_LINE(2111)
				::zpp_nape::geom::ZPP_SimpleVert tmp15 = v;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2111)
				::zpp_nape::geom::ZPP_SimpleVert tmp16 = u;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2111)
				tmp14 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::get(tmp15,tmp16);
			}
			HX_STACK_LINE(2103)
			::zpp_nape::geom::ZPP_SimpleSeg tmp15 = e2->segment = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2103)
			e1->segment = tmp15;
		}
	}
	HX_STACK_LINE(2115)
	{
		HX_STACK_LINE(2116)
		::zpp_nape::util::ZNPList_ZPP_SimpleEvent xxlist = queue;		HX_STACK_VAR(xxlist,"xxlist");
		HX_STACK_LINE(2117)
		bool tmp6 = (xxlist->head == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2117)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2117)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2117)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2117)
		if ((tmp8)){
			HX_STACK_LINE(2117)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp10 = xxlist->head->next;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2117)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2117)
			tmp9 = (tmp11 != null());
		}
		else{
			HX_STACK_LINE(2117)
			tmp9 = false;
		}
		HX_STACK_LINE(2117)
		if ((tmp9)){
			HX_STACK_LINE(2118)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent head = xxlist->head;		HX_STACK_VAR(head,"head");
			HX_STACK_LINE(2119)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tail = null();		HX_STACK_VAR(tail,"tail");
			HX_STACK_LINE(2120)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent left = null();		HX_STACK_VAR(left,"left");
			HX_STACK_LINE(2121)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent right = null();		HX_STACK_VAR(right,"right");
			HX_STACK_LINE(2122)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent nxt = null();		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(2123)
			int listSize = (int)1;		HX_STACK_VAR(listSize,"listSize");
			HX_STACK_LINE(2124)
			int numMerges;		HX_STACK_VAR(numMerges,"numMerges");
			HX_STACK_LINE(2124)
			int leftSize;		HX_STACK_VAR(leftSize,"leftSize");
			HX_STACK_LINE(2124)
			int rightSize;		HX_STACK_VAR(rightSize,"rightSize");
			HX_STACK_LINE(2125)
			while((true)){
				HX_STACK_LINE(2126)
				numMerges = (int)0;
				HX_STACK_LINE(2127)
				left = head;
				HX_STACK_LINE(2128)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent tmp10 = head = null();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2128)
				tail = tmp10;
				HX_STACK_LINE(2129)
				while((true)){
					HX_STACK_LINE(2129)
					bool tmp11 = (left != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2129)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2129)
					if ((tmp12)){
						HX_STACK_LINE(2129)
						break;
					}
					HX_STACK_LINE(2130)
					(numMerges)++;
					HX_STACK_LINE(2131)
					right = left;
					HX_STACK_LINE(2132)
					leftSize = (int)0;
					HX_STACK_LINE(2133)
					rightSize = listSize;
					HX_STACK_LINE(2134)
					while((true)){
						HX_STACK_LINE(2134)
						bool tmp13 = (right != null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(2134)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(2134)
						if ((tmp13)){
							HX_STACK_LINE(2134)
							tmp14 = (leftSize < listSize);
						}
						else{
							HX_STACK_LINE(2134)
							tmp14 = false;
						}
						HX_STACK_LINE(2134)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2134)
						if ((tmp15)){
							HX_STACK_LINE(2134)
							break;
						}
						HX_STACK_LINE(2135)
						(leftSize)++;
						HX_STACK_LINE(2136)
						right = right->next;
					}
					HX_STACK_LINE(2138)
					while((true)){
						HX_STACK_LINE(2138)
						bool tmp13 = (leftSize > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(2138)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(2138)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2138)
						if ((tmp14)){
							HX_STACK_LINE(2138)
							bool tmp16 = (rightSize > (int)0);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(2138)
							bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2138)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(2138)
							if ((tmp18)){
								HX_STACK_LINE(2138)
								tmp15 = (right != null());
							}
							else{
								HX_STACK_LINE(2138)
								tmp15 = false;
							}
						}
						else{
							HX_STACK_LINE(2138)
							tmp15 = true;
						}
						HX_STACK_LINE(2138)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2138)
						if ((tmp16)){
							HX_STACK_LINE(2138)
							break;
						}
						HX_STACK_LINE(2139)
						bool tmp17 = (leftSize == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(2139)
						if ((tmp17)){
							HX_STACK_LINE(2140)
							nxt = right;
							HX_STACK_LINE(2141)
							right = right->next;
							HX_STACK_LINE(2142)
							(rightSize)--;
						}
						else{
							HX_STACK_LINE(2144)
							bool tmp18 = (rightSize == (int)0);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(2144)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(2144)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(2144)
							if ((tmp19)){
								HX_STACK_LINE(2144)
								tmp20 = (right == null());
							}
							else{
								HX_STACK_LINE(2144)
								tmp20 = true;
							}
							HX_STACK_LINE(2144)
							if ((tmp20)){
								HX_STACK_LINE(2145)
								nxt = left;
								HX_STACK_LINE(2146)
								left = left->next;
								HX_STACK_LINE(2147)
								(leftSize)--;
							}
							else{
								HX_STACK_LINE(2149)
								::zpp_nape::geom::ZPP_SimpleEvent tmp21 = left->elt;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(2149)
								::zpp_nape::geom::ZPP_SimpleEvent tmp22 = right->elt;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(2149)
								bool tmp23 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::less_xy(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(2149)
								if ((tmp23)){
									HX_STACK_LINE(2150)
									nxt = left;
									HX_STACK_LINE(2151)
									left = left->next;
									HX_STACK_LINE(2152)
									(leftSize)--;
								}
								else{
									HX_STACK_LINE(2155)
									nxt = right;
									HX_STACK_LINE(2156)
									right = right->next;
									HX_STACK_LINE(2157)
									(rightSize)--;
								}
							}
						}
						HX_STACK_LINE(2159)
						bool tmp18 = (tail != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(2159)
						if ((tmp18)){
							HX_STACK_LINE(2159)
							tail->next = nxt;
						}
						else{
							HX_STACK_LINE(2160)
							head = nxt;
						}
						HX_STACK_LINE(2161)
						tail = nxt;
					}
					HX_STACK_LINE(2163)
					left = right;
				}
				HX_STACK_LINE(2165)
				tail->next = null();
				HX_STACK_LINE(2166)
				hx::ShlEq(listSize,(int)1);
				HX_STACK_LINE(2168)
				bool tmp11 = (numMerges > (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2168)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2125)
				if ((tmp12)){
					HX_STACK_LINE(2125)
					break;
				}
			}
			HX_STACK_LINE(2169)
			{
				HX_STACK_LINE(2169)
				xxlist->head = head;
				HX_STACK_LINE(2169)
				xxlist->modified = true;
				HX_STACK_LINE(2169)
				xxlist->pushmod = true;
			}
		}
	}
	HX_STACK_LINE(2172)
	bool ret = true;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2173)
	while((true)){
		HX_STACK_LINE(2173)
		bool tmp6 = (queue->head == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2173)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2173)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2173)
		if ((tmp8)){
			HX_STACK_LINE(2173)
			break;
		}
		HX_STACK_LINE(2174)
		::zpp_nape::geom::ZPP_SimpleEvent tmp9 = queue->pop_unsafe();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2174)
		::zpp_nape::geom::ZPP_SimpleEvent e = tmp9;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(2175)
		::zpp_nape::geom::ZPP_SimpleSeg seg = e->segment;		HX_STACK_VAR(seg,"seg");
		HX_STACK_LINE(2176)
		bool tmp10 = (e->type == (int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2176)
		if ((tmp10)){
			HX_STACK_LINE(2177)
			::zpp_nape::geom::ZPP_SimpleSweep tmp11 = ::zpp_nape::geom::ZPP_Simple_obj::sweep;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2177)
			::zpp_nape::geom::ZPP_SimpleSeg tmp12 = seg;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2177)
			tmp11->add(tmp12);
			HX_STACK_LINE(2178)
			::zpp_nape::geom::ZPP_SimpleSweep tmp13 = ::zpp_nape::geom::ZPP_Simple_obj::sweep;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2178)
			::zpp_nape::geom::ZPP_SimpleSeg tmp14 = seg;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2178)
			::zpp_nape::geom::ZPP_SimpleSeg tmp15 = seg->next;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2178)
			::zpp_nape::geom::ZPP_SimpleSeg tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2178)
			::zpp_nape::geom::ZPP_SimpleSeg tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(2178)
			bool tmp18 = tmp13->intersect(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(2178)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(2178)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(2178)
			if ((tmp19)){
				HX_STACK_LINE(2178)
				::zpp_nape::geom::ZPP_SimpleSweep tmp21 = ::zpp_nape::geom::ZPP_Simple_obj::sweep;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2178)
				::zpp_nape::geom::ZPP_SimpleSweep tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2178)
				::zpp_nape::geom::ZPP_SimpleSeg tmp23 = seg;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(2178)
				::zpp_nape::geom::ZPP_SimpleSeg tmp24 = seg->prev;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(2178)
				::zpp_nape::geom::ZPP_SimpleSeg tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(2178)
				::zpp_nape::geom::ZPP_SimpleSeg tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(2178)
				tmp20 = tmp22->intersect(tmp25,tmp26);
			}
			else{
				HX_STACK_LINE(2178)
				tmp20 = true;
			}
			HX_STACK_LINE(2178)
			if ((tmp20)){
				HX_STACK_LINE(2179)
				ret = false;
				HX_STACK_LINE(2180)
				break;
			}
		}
		else{
			HX_STACK_LINE(2183)
			bool tmp11 = (e->type == (int)2);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2183)
			if ((tmp11)){
				HX_STACK_LINE(2184)
				::zpp_nape::geom::ZPP_SimpleSweep tmp12 = ::zpp_nape::geom::ZPP_Simple_obj::sweep;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2184)
				::zpp_nape::geom::ZPP_SimpleSeg tmp13 = seg->prev;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2184)
				::zpp_nape::geom::ZPP_SimpleSeg tmp14 = seg->next;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2184)
				bool tmp15 = tmp12->intersect(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2184)
				if ((tmp15)){
					HX_STACK_LINE(2185)
					ret = false;
					HX_STACK_LINE(2186)
					break;
				}
				HX_STACK_LINE(2188)
				::zpp_nape::geom::ZPP_SimpleSweep tmp16 = ::zpp_nape::geom::ZPP_Simple_obj::sweep;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2188)
				::zpp_nape::geom::ZPP_SimpleSeg tmp17 = seg;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2188)
				tmp16->remove(tmp17);
				HX_STACK_LINE(2189)
				{
					HX_STACK_LINE(2190)
					::zpp_nape::geom::ZPP_SimpleSeg o = seg;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2199)
					{
						HX_STACK_LINE(2199)
						::zpp_nape::geom::ZPP_SimpleVert tmp18 = o->right = null();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(2199)
						o->left = tmp18;
						HX_STACK_LINE(2199)
						o->prev = null();
						HX_STACK_LINE(2199)
						o->node = null();
						HX_STACK_LINE(2199)
						o->vertices->clear();
					}
					HX_STACK_LINE(2200)
					::zpp_nape::geom::ZPP_SimpleSeg tmp18 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2200)
					o->next = tmp18;
					HX_STACK_LINE(2201)
					::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(2207)
		{
			HX_STACK_LINE(2208)
			::zpp_nape::geom::ZPP_SimpleEvent o = e;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2217)
			{
				HX_STACK_LINE(2217)
				o->vertex = null();
				HX_STACK_LINE(2217)
				::zpp_nape::geom::ZPP_SimpleSeg tmp11 = o->segment2 = null();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2217)
				o->segment = tmp11;
				HX_STACK_LINE(2217)
				o->node = null();
			}
			HX_STACK_LINE(2218)
			::zpp_nape::geom::ZPP_SimpleEvent tmp11 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2218)
			o->next = tmp11;
			HX_STACK_LINE(2219)
			::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(2225)
	while((true)){
		HX_STACK_LINE(2225)
		bool tmp6 = (queue->head == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2225)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2225)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2225)
		if ((tmp8)){
			HX_STACK_LINE(2225)
			break;
		}
		HX_STACK_LINE(2226)
		::zpp_nape::geom::ZPP_SimpleEvent tmp9 = queue->pop_unsafe();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2226)
		::zpp_nape::geom::ZPP_SimpleEvent e = tmp9;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(2227)
		bool tmp10 = (e->type == (int)2);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2227)
		if ((tmp10)){
			HX_STACK_LINE(2228)
			::zpp_nape::geom::ZPP_SimpleSeg o = e->segment;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2237)
			{
				HX_STACK_LINE(2237)
				::zpp_nape::geom::ZPP_SimpleVert tmp11 = o->right = null();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2237)
				o->left = tmp11;
				HX_STACK_LINE(2237)
				o->prev = null();
				HX_STACK_LINE(2237)
				o->node = null();
				HX_STACK_LINE(2237)
				o->vertices->clear();
			}
			HX_STACK_LINE(2238)
			::zpp_nape::geom::ZPP_SimpleSeg tmp11 = ::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2238)
			o->next = tmp11;
			HX_STACK_LINE(2239)
			::zpp_nape::geom::ZPP_SimpleSeg_obj::zpp_pool = o;
		}
		HX_STACK_LINE(2244)
		{
			HX_STACK_LINE(2245)
			::zpp_nape::geom::ZPP_SimpleEvent o = e;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2254)
			{
				HX_STACK_LINE(2254)
				o->vertex = null();
				HX_STACK_LINE(2254)
				::zpp_nape::geom::ZPP_SimpleSeg tmp11 = o->segment2 = null();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2254)
				o->segment = tmp11;
				HX_STACK_LINE(2254)
				o->node = null();
			}
			HX_STACK_LINE(2255)
			::zpp_nape::geom::ZPP_SimpleEvent tmp11 = ::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2255)
			o->next = tmp11;
			HX_STACK_LINE(2256)
			::zpp_nape::geom::ZPP_SimpleEvent_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(2262)
	::zpp_nape::geom::ZPP_SimpleSweep tmp6 = ::zpp_nape::geom::ZPP_Simple_obj::sweep;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2262)
	tmp6->clear();
	HX_STACK_LINE(2263)
	while((true)){
		HX_STACK_LINE(2263)
		bool tmp7 = (vertices->head == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2263)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2263)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2263)
		if ((tmp9)){
			HX_STACK_LINE(2263)
			break;
		}
		HX_STACK_LINE(2264)
		::zpp_nape::geom::ZPP_SimpleVert tmp10 = vertices->pop_unsafe();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2264)
		::zpp_nape::geom::ZPP_SimpleVert o = tmp10;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(2273)
		{
			HX_STACK_LINE(2273)
			o->links->clear();
			HX_STACK_LINE(2273)
			o->node = null();
			HX_STACK_LINE(2273)
			o->forced = false;
		}
		HX_STACK_LINE(2274)
		::zpp_nape::geom::ZPP_SimpleVert tmp11 = ::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(2274)
		o->next = tmp11;
		HX_STACK_LINE(2275)
		::zpp_nape::geom::ZPP_SimpleVert_obj::zpp_pool = o;
	}
	HX_STACK_LINE(2280)
	bool tmp7 = ret;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(2280)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Simple_obj,isSimple,return )


ZPP_Simple_obj::ZPP_Simple_obj()
{
}

bool ZPP_Simple_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ints") ) { outValue = ints; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sweep") ) { outValue = sweep; return true;  }
		if (HX_FIELD_EQ(inName,"queue") ) { outValue = queue; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inthash") ) { outValue = inthash; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { outValue = vertices; return true;  }
		if (HX_FIELD_EQ(inName,"isSimple") ) { outValue = isSimple_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"decompose") ) { outValue = decompose_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"list_queue") ) { outValue = list_queue; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clip_polygon") ) { outValue = clip_polygon_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"list_vertices") ) { outValue = list_vertices; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_SimpleSweep*/ ,(void *) &ZPP_Simple_obj::sweep,HX_HCSTRING("sweep","\xec","\x15","\x0a","\x86")},
	{hx::fsObject /*::zpp_nape::util::FastHash2_Hashable2_Boolfalse*/ ,(void *) &ZPP_Simple_obj::inthash,HX_HCSTRING("inthash","\x3d","\xe0","\x12","\x19")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleVert*/ ,(void *) &ZPP_Simple_obj::vertices,HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent*/ ,(void *) &ZPP_Simple_obj::queue,HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d")},
	{hx::fsObject /*::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent*/ ,(void *) &ZPP_Simple_obj::ints,HX_HCSTRING("ints","\xa4","\x44","\xbb","\x45")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_SimpleVert*/ ,(void *) &ZPP_Simple_obj::list_vertices,HX_HCSTRING("list_vertices","\x3a","\x1f","\x0d","\x1c")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_SimpleEvent*/ ,(void *) &ZPP_Simple_obj::list_queue,HX_HCSTRING("list_queue","\xb0","\x8b","\xa3","\x87")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Simple_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Simple_obj::sweep,"sweep");
	HX_MARK_MEMBER_NAME(ZPP_Simple_obj::inthash,"inthash");
	HX_MARK_MEMBER_NAME(ZPP_Simple_obj::vertices,"vertices");
	HX_MARK_MEMBER_NAME(ZPP_Simple_obj::queue,"queue");
	HX_MARK_MEMBER_NAME(ZPP_Simple_obj::ints,"ints");
	HX_MARK_MEMBER_NAME(ZPP_Simple_obj::list_vertices,"list_vertices");
	HX_MARK_MEMBER_NAME(ZPP_Simple_obj::list_queue,"list_queue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Simple_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Simple_obj::sweep,"sweep");
	HX_VISIT_MEMBER_NAME(ZPP_Simple_obj::inthash,"inthash");
	HX_VISIT_MEMBER_NAME(ZPP_Simple_obj::vertices,"vertices");
	HX_VISIT_MEMBER_NAME(ZPP_Simple_obj::queue,"queue");
	HX_VISIT_MEMBER_NAME(ZPP_Simple_obj::ints,"ints");
	HX_VISIT_MEMBER_NAME(ZPP_Simple_obj::list_vertices,"list_vertices");
	HX_VISIT_MEMBER_NAME(ZPP_Simple_obj::list_queue,"list_queue");
};

#endif

hx::Class ZPP_Simple_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("sweep","\xec","\x15","\x0a","\x86"),
	HX_HCSTRING("inthash","\x3d","\xe0","\x12","\x19"),
	HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"),
	HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"),
	HX_HCSTRING("ints","\xa4","\x44","\xbb","\x45"),
	HX_HCSTRING("decompose","\xb1","\xc3","\xa7","\x7a"),
	HX_HCSTRING("clip_polygon","\xcb","\x1a","\x4f","\x3f"),
	HX_HCSTRING("list_vertices","\x3a","\x1f","\x0d","\x1c"),
	HX_HCSTRING("list_queue","\xb0","\x8b","\xa3","\x87"),
	HX_HCSTRING("isSimple","\xbc","\x9f","\xe8","\x10"),
	::String(null()) };

void ZPP_Simple_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_Simple","\xe8","\x0f","\x57","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Simple_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ZPP_Simple_obj >;
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

void ZPP_Simple_obj::__boot()
{
	sweep= null();
	inthash= null();
	vertices= null();
	queue= null();
	ints= null();
	list_vertices= null();
	list_queue= null();
}

} // end namespace zpp_nape
} // end namespace geom
