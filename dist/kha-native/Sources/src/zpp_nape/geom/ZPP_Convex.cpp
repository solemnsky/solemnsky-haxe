#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_Convex
#include <zpp_nape/geom/ZPP_Convex.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionedPoly
#include <zpp_nape/geom/ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPList_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPNode_ZPP_PartitionVertex.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Convex_obj::__construct()
{
	return null();
}

//ZPP_Convex_obj::~ZPP_Convex_obj() { }

Dynamic ZPP_Convex_obj::__CreateEmpty() { return  new ZPP_Convex_obj; }
hx::ObjectPtr< ZPP_Convex_obj > ZPP_Convex_obj::__new()
{  hx::ObjectPtr< ZPP_Convex_obj > _result_ = new ZPP_Convex_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZPP_Convex_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Convex_obj > _result_ = new ZPP_Convex_obj();
	_result_->__construct();
	return _result_;}

bool ZPP_Convex_obj::isinner( ::zpp_nape::geom::ZPP_PartitionVertex a,::zpp_nape::geom::ZPP_PartitionVertex b,::zpp_nape::geom::ZPP_PartitionVertex c){
	HX_STACK_FRAME("zpp_nape.geom.ZPP_Convex","isinner",0xfd4f4f1b,"zpp_nape.geom.ZPP_Convex.isinner","zpp_nape/geom/Convex.hx",175,0x1f8412c6)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(176)
	Float ux = ((Float)0.0);		HX_STACK_VAR(ux,"ux");
	HX_STACK_LINE(177)
	Float uy = ((Float)0.0);		HX_STACK_VAR(uy,"uy");
	HX_STACK_LINE(178)
	{
		HX_STACK_LINE(179)
		Float tmp = (a->x - b->x);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		ux = tmp;
		HX_STACK_LINE(180)
		Float tmp1 = (a->y - b->y);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		uy = tmp1;
	}
	HX_STACK_LINE(182)
	Float vx = ((Float)0.0);		HX_STACK_VAR(vx,"vx");
	HX_STACK_LINE(183)
	Float vy = ((Float)0.0);		HX_STACK_VAR(vy,"vy");
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(185)
		Float tmp = (c->x - b->x);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(185)
		vx = tmp;
		HX_STACK_LINE(186)
		Float tmp1 = (c->y - b->y);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		vy = tmp1;
	}
	HX_STACK_LINE(188)
	Float tmp = (vy * ux);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(188)
	Float tmp1 = (vx * uy);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(188)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(188)
	bool tmp3 = (tmp2 >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(188)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_Convex_obj,isinner,return )

Void ZPP_Convex_obj::optimise( ::zpp_nape::geom::ZPP_PartitionedPoly P){
{
		HX_STACK_FRAME("zpp_nape.geom.ZPP_Convex","optimise",0x06ca1635,"zpp_nape.geom.ZPP_Convex.optimise","zpp_nape/geom/Convex.hx",190,0x1f8412c6)
		HX_STACK_ARG(P,"P")
		HX_STACK_LINE(191)
		{
			HX_STACK_LINE(192)
			::zpp_nape::geom::ZPP_PartitionVertex F = P->vertices;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(193)
			::zpp_nape::geom::ZPP_PartitionVertex L = P->vertices;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(194)
			bool tmp = (F != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(194)
			if ((tmp)){
				HX_STACK_LINE(195)
				::zpp_nape::geom::ZPP_PartitionVertex nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(196)
				while((true)){
					HX_STACK_LINE(197)
					::zpp_nape::geom::ZPP_PartitionVertex p = nite;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(199)
					p->sort();
					HX_STACK_LINE(201)
					nite = nite->next;
					HX_STACK_LINE(203)
					bool tmp1 = (nite != L);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(203)
					bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(196)
					if ((tmp2)){
						HX_STACK_LINE(196)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(206)
		{
			HX_STACK_LINE(207)
			::zpp_nape::geom::ZPP_PartitionVertex F = P->vertices;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(208)
			::zpp_nape::geom::ZPP_PartitionVertex L = P->vertices;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(209)
			bool tmp = (F != null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(209)
			if ((tmp)){
				HX_STACK_LINE(210)
				::zpp_nape::geom::ZPP_PartitionVertex nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(211)
				while((true)){
					HX_STACK_LINE(212)
					::zpp_nape::geom::ZPP_PartitionVertex p = nite;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(214)
					{
						HX_STACK_LINE(215)
						::zpp_nape::geom::ZPP_PartitionVertex pright = p->prev;		HX_STACK_VAR(pright,"pright");
						HX_STACK_LINE(216)
						::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ppre = null();		HX_STACK_VAR(ppre,"ppre");
						HX_STACK_LINE(217)
						{
							HX_STACK_LINE(218)
							::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp1 = p->diagonals->head;		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(218)
							::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cx_ite = tmp1;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(219)
							while((true)){
								HX_STACK_LINE(219)
								bool tmp2 = (cx_ite != null());		HX_STACK_VAR(tmp2,"tmp2");
								HX_STACK_LINE(219)
								bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
								HX_STACK_LINE(219)
								if ((tmp3)){
									HX_STACK_LINE(219)
									break;
								}
								HX_STACK_LINE(220)
								::zpp_nape::geom::ZPP_PartitionVertex pdiag = cx_ite->elt;		HX_STACK_VAR(pdiag,"pdiag");
								HX_STACK_LINE(221)
								{
									HX_STACK_LINE(222)
									bool tmp4 = (cx_ite->next == null());		HX_STACK_VAR(tmp4,"tmp4");
									HX_STACK_LINE(222)
									::zpp_nape::geom::ZPP_PartitionVertex tmp5;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(222)
									if ((tmp4)){
										HX_STACK_LINE(222)
										tmp5 = p->next;
									}
									else{
										HX_STACK_LINE(222)
										tmp5 = cx_ite->next->elt;
									}
									HX_STACK_LINE(222)
									::zpp_nape::geom::ZPP_PartitionVertex pleft = tmp5;		HX_STACK_VAR(pleft,"pleft");
									HX_STACK_LINE(223)
									::zpp_nape::geom::ZPP_PartitionVertex tmp6 = pleft;		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(223)
									::zpp_nape::geom::ZPP_PartitionVertex tmp7 = p;		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(223)
									::zpp_nape::geom::ZPP_PartitionVertex tmp8 = pright;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(223)
									bool tmp9 = ::zpp_nape::geom::ZPP_Convex_obj::isinner(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(223)
									bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(223)
									if ((tmp10)){
										HX_STACK_LINE(224)
										ppre = cx_ite;
										HX_STACK_LINE(225)
										pright = pdiag;
										HX_STACK_LINE(226)
										{
											HX_STACK_LINE(227)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(228)
											continue;
										}
									}
									HX_STACK_LINE(231)
									bool removable = true;		HX_STACK_VAR(removable,"removable");
									HX_STACK_LINE(232)
									::zpp_nape::geom::ZPP_PartitionVertex q = pdiag;		HX_STACK_VAR(q,"q");
									HX_STACK_LINE(233)
									::zpp_nape::geom::ZPP_PartitionVertex qright = q->prev;		HX_STACK_VAR(qright,"qright");
									HX_STACK_LINE(234)
									::zpp_nape::util::ZNPNode_ZPP_PartitionVertex qpre = null();		HX_STACK_VAR(qpre,"qpre");
									HX_STACK_LINE(235)
									{
										HX_STACK_LINE(236)
										::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp11 = q->diagonals->head;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(236)
										::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cx_ite1 = tmp11;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(237)
										while((true)){
											HX_STACK_LINE(237)
											bool tmp12 = (cx_ite1 != null());		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(237)
											bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(237)
											if ((tmp13)){
												HX_STACK_LINE(237)
												break;
											}
											HX_STACK_LINE(238)
											::zpp_nape::geom::ZPP_PartitionVertex qdiag = cx_ite1->elt;		HX_STACK_VAR(qdiag,"qdiag");
											HX_STACK_LINE(239)
											{
												HX_STACK_LINE(240)
												bool tmp14 = (qdiag == p);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(240)
												if ((tmp14)){
													HX_STACK_LINE(241)
													bool tmp15 = (cx_ite1->next == null());		HX_STACK_VAR(tmp15,"tmp15");
													HX_STACK_LINE(241)
													::zpp_nape::geom::ZPP_PartitionVertex tmp16;		HX_STACK_VAR(tmp16,"tmp16");
													HX_STACK_LINE(241)
													if ((tmp15)){
														HX_STACK_LINE(241)
														tmp16 = q->next;
													}
													else{
														HX_STACK_LINE(241)
														tmp16 = cx_ite1->next->elt;
													}
													HX_STACK_LINE(241)
													::zpp_nape::geom::ZPP_PartitionVertex qleft = tmp16;		HX_STACK_VAR(qleft,"qleft");
													HX_STACK_LINE(242)
													::zpp_nape::geom::ZPP_PartitionVertex tmp17 = qleft;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(242)
													::zpp_nape::geom::ZPP_PartitionVertex tmp18 = q;		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(242)
													::zpp_nape::geom::ZPP_PartitionVertex tmp19 = qright;		HX_STACK_VAR(tmp19,"tmp19");
													HX_STACK_LINE(242)
													bool tmp20 = ::zpp_nape::geom::ZPP_Convex_obj::isinner(tmp17,tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(242)
													removable = tmp20;
													HX_STACK_LINE(243)
													break;
												}
												HX_STACK_LINE(245)
												qright = qdiag;
												HX_STACK_LINE(246)
												qpre = cx_ite1;
											}
											HX_STACK_LINE(248)
											cx_ite1 = cx_ite1->next;
										}
									}
									HX_STACK_LINE(251)
									bool tmp11 = removable;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(251)
									if ((tmp11)){
										HX_STACK_LINE(252)
										::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp12 = ppre;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(252)
										::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp13 = p->diagonals->erase(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(252)
										cx_ite = tmp13;
										HX_STACK_LINE(253)
										::zpp_nape::util::ZNPNode_ZPP_PartitionVertex tmp14 = qpre;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(253)
										q->diagonals->erase(tmp14);
										HX_STACK_LINE(254)
										continue;
									}
									HX_STACK_LINE(256)
									pright = pdiag;
									HX_STACK_LINE(257)
									ppre = cx_ite;
								}
								HX_STACK_LINE(259)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(264)
					nite = nite->next;
					HX_STACK_LINE(266)
					bool tmp1 = (nite != L);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(266)
					bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(211)
					if ((tmp2)){
						HX_STACK_LINE(211)
						break;
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Convex_obj,optimise,(void))


ZPP_Convex_obj::ZPP_Convex_obj()
{
}

bool ZPP_Convex_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"isinner") ) { outValue = isinner_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"optimise") ) { outValue = optimise_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Convex_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Convex_obj::__mClass,"__mClass");
};

#endif

hx::Class ZPP_Convex_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("isinner","\x6c","\x65","\x74","\xc7"),
	HX_HCSTRING("optimise","\xc4","\x86","\x18","\x1d"),
	::String(null()) };

void ZPP_Convex_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("zpp_nape.geom.ZPP_Convex","\x1d","\x83","\xb6","\xda");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZPP_Convex_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ZPP_Convex_obj >;
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
